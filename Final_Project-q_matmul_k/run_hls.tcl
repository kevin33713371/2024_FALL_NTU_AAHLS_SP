open_project q_matmul_k
add_files src/q_matmul_k.cpp
add_files src/mmultTester.cpp -tb
open_solution "solution1"
set_part {xcu50-fsvh2104-2-e}

# Define the clock
create_clock -period 10 -name default

set_top mmult

csim_design
csynth_design
cosim_design
