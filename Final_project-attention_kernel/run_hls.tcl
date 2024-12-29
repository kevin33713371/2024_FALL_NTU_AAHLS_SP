open_project attention_kernels
add_files src/q_matmul_k_function.cpp
add_files src/kernel.cpp
add_files src/testbench.cpp -tb
open_solution "solution1"
set_part {xcu50-fsvh2104-2-e}

# Define the clock
create_clock -period 10 -name default

set_top attention_kernel

#csim_design
#csynth_design
cosim_design 