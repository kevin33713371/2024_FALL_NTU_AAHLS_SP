
#include <iostream>

#include "mmult.h"

// Implement Array Size
#define N 32

// Each Tile's Size
#define M 16

extern "C"{
void mmult(volatile int* a, // Read-Only Matrix A
           volatile int* b, // Read-Only Matrix B
           volatile int* c, // Output Result
           int a_row,    // Matrix A Row Size
		   int a_col,    // Matrix A Col Size
		   int b_col     // Matrix B Col Size
           ) {
    // AXI4 Master's depth must be a constant and should be adjusted according to MAX_SIZE * MAX_SIZE
    #pragma HLS INTERFACE m_axi port=a offset=slave bundle=gmem0 depth=1024
    #pragma HLS INTERFACE m_axi port=b offset=slave bundle=gmem1 depth=1024
    #pragma HLS INTERFACE m_axi port=c offset=slave bundle=gmem2 depth=1024

	//AXI4 Lite's port must use the same bundle
    #pragma HLS INTERFACE s_axilite port=a bundle=control
    #pragma HLS INTERFACE s_axilite port=b bundle=control
    #pragma HLS INTERFACE s_axilite port=c bundle=control
    #pragma HLS INTERFACE s_axilite port=a_row bundle=control
    #pragma HLS INTERFACE s_axilite port=a_col bundle=control
    #pragma HLS INTERFACE s_axilite port=b_col bundle=control
    #pragma HLS INTERFACE s_axilite port=return bundle=control


    int b_row = a_col;
    int c_row = a_row;
    int c_col = b_col;

    // Local memory to store input and output matrices
    int localA[N][N];
    #pragma HLS ARRAY_PARTITION variable = localA dim = 2 complete

    int localB[N][N];
    #pragma HLS ARRAY_PARTITION variable = localB dim = 1 complete

    int localC[N][N];
    #pragma HLS ARRAY_PARTITION variable = localC dim = 0 complete

    // Register in Systolic Array
    int inA[M][M];
    #pragma HLS ARRAY_PARTITION variable = inA dim=0 complete

    int inB[M][M];
    #pragma HLS ARRAY_PARTITION variable = inB dim=0 complete

// Initialization
init_systolic_reg:
	for (int i = 0; i < M; i++){
		#pragma HLS PIPELINE
		for (int j = 0; j < M; j++){
			inA[i][j] = 0;
			inB[i][j] = 0;
		}
	}
init_localC:
	for (int i = 0; i < N; i++){
			#pragma HLS PIPELINE
			for (int j = 0; j < N; j++){
				localC[i][j] = 0;
			}
		}

// Burst reads on input matrices from global memory
// Read Input A
readA:
    for (int loc = 0, i = 0, j = 0; loc < a_row * a_col; loc++, j++) {
        #pragma HLS PIPELINE II=1
        if (j == a_col) {
            i++;
            j = 0;
        }
        localA[i][j] = a[loc];
    }

// Debug: Print localA
//	 for (int i = 0; i < a_row; i++) {
//		 for (int j = 0; j < a_col; j++) {
//			 printf("localA[%d][%d] = %d\n", i, j, localA[i][j]);
//		 }
//	 }

// Read Input B
readB:
    for (int loc = 0, i = 0, j = 0; loc < b_row * b_col; loc++, j++) {
        #pragma HLS PIPELINE II=1
        if (j == b_col) {
            i++;
            j = 0;
        }
        localB[i][j] = b[loc];
    }

// Debug: Print localB
//     for (int i = 0; i < b_row; i++) {
//         for (int j = 0; j < b_col; j++) {
//             printf("localB[%d][%d] = %d\n", i, j, localB[i][j]);
//         }
//     }

// Perform systolic matrix multiply
systolic_tiling:
	for (int ii = 0; ii < N/M; ii++){
		for (int jj = 0; jj < N/M; jj++){
			for(int r = 0; r < N + 2 * M - 2; r++){
				#pragma HLS pipeline

				// update data (i.e. reads data from previous PE)
				// Propagating SA
				for (int i = 0; i < M; i++){
					for(int j = M - 1; j >= 1; j--){
						inA[i][j] = inA[i][j - 1];
					}
				}

				for (int i = M - 1; i >= 1; i--){
					for(int j = 0; j < M; j++){
						inB[i][j] = inB[i - 1][j];
					}
				}

				// read new data from input
				// not ok here!
				// Input new value from the original array
				for (int i = 0; i < M; i++) {
					if(r >= i && r < i + N)
						inA[i][0] = localA[i + ii * M][r - i];
					else
						inA[i][0] = 0;
				}

				for (int j = 0; j < M; j++) {
					if(r >= j && r < j + N)
						inB[0][j] = localB[r - j][j + jj * M];
					else
						inB[0][j] = 0;
				}

				// PE
				// Parallel calculation and accumulation
				for(int i = 0; i < M; i++) {
					for(int j = 0; j < M; j++) {
						localC[i + ii * M][j + jj * M] += inA[i][j] * inB[i][j];
					}
				}
			}
		}
	}


// Burst write from output matrices to global memory
// Burst write from matrix C
writeC:
    for (int loc = 0, i = 0, j = 0; loc < c_row * c_col; loc++, j++) {
		#pragma HLS PIPELINE II=1
        if (j == c_col) {
            i++;
            j = 0;
        }
        c[loc] = localC[i][j];
    }
}
}
