/**********
Copyright (c) 2018, Xilinx, Inc.
All rights reserved.
Redistribution and use in source and binary forms, with or without modification,
are permitted provided that the following conditions are met:
1. Redistributions of source code must retain the above copyright notice,
this list of conditions and the following disclaimer.
2. Redistributions in binary form must reproduce the above copyright notice,
this list of conditions and the following disclaimer in the documentation
and/or other materials provided with the distribution.
3. Neither the name of the copyright holder nor the names of its contributors
may be used to endorse or promote products derived from this software
without specific prior written permission.
THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
**********/



#include <string.h>

#include "kernel.h"

extern "C" {
void KpB(int *A, int *B, int *R) {

	int TMP_RES[SIZE_BUF_KpB];

	#pragma HLS INTERFACE s_axilite port=A bundle=control
	#pragma HLS INTERFACE s_axilite port=B bundle=control
	#pragma HLS INTERFACE s_axilite port=R bundle=control
	#pragma HLS INTERFACE s_axilite port=return bundle=control

	#pragma HLS dataflow

	#pragma HLS INTERFACE m_axi port=A  offset=slave bundle=gmem0 max_read_burst_length=256 max_write_burst_length=256
	#pragma HLS INTERFACE m_axi port=B  offset=slave bundle=gmem1 max_read_burst_length=256 max_write_burst_length=256
	#pragma HLS INTERFACE m_axi port=R  offset=slave bundle=gmem2 max_read_burst_length=256 max_write_burst_length=256

	int A_tmp[SIZE_BUF_KpB], B_tmp[SIZE_BUF_KpB], R_tmp[SIZE_BUF_KpB];

	memcpy(A_tmp,A,SIZE_BUF_KpB * sizeof (int));
	memcpy(B_tmp,B,SIZE_BUF_KpB * sizeof (int));

	for(int i=0; i < SIZE_BUF_KpB; i+=1) {
		TMP_RES[i] = A_tmp[i] + B_tmp[i];
	}

	for(int i=0; i < SIZE_BUF_KpB; i+=1) {
		R_tmp[i] = TMP_RES[i] % 3;
	}

	memcpy(R,R_tmp,SIZE_BUF_KpB * sizeof (int));

}
}
