
c
IRunning '/tools/Xilinx/Vitis_HLS/2022.1/bin/unwrapped/lnx64.o/vitis_hls'
*HLSZ200-10h px 
 
For user 'ubuntu' on host 'ubuntu2004.linuxvmimages.local' (Linux_x86_64 version 5.15.0-122-generic) on Sat Oct 12 00:44:55 EDT 2024
*HLSZ200-10h px 
3
On os Ubuntu 20.04.4 LTS
*HLSZ200-10h px 
ª
In directory '/home/ubuntu/Desktop/02-mixing-c-rtl-kernels/LabA_C_RTL_kernel/LabA_C_RTL_kernel_kernels/Emulation-HW/build/krnl_vadd/krnl_vadd'
*HLSZ200-10h px 
?
$Sourcing Tcl script 'krnl_vadd.tcl'
*HLSZ200-150h px 
^
Running: %s
2001510*hls2+
open_project krnl_vadd 2default:defaultZ200-1510h px 
Å
ªCreating and opening project '/home/ubuntu/Desktop/02-mixing-c-rtl-kernels/LabA_C_RTL_kernel/LabA_C_RTL_kernel_kernels/Emulation-HW/build/krnl_vadd/krnl_vadd/krnl_vadd'.
*HLSZ200-10h px 
Y
Running: %s
2001510*hls2&
set_top krnl_vadd 2default:defaultZ200-1510h px 
ª
Running: %s
2001510*hls2ö
áadd_files /home/ubuntu/Desktop/02-mixing-c-rtl-kernels/LabA_C_RTL_kernel/LabA_C_RTL_kernel_kernels/src/krnl_vadd.cpp -cflags  -g -I /home/ubuntu/Desktop/02-mixing-c-rtl-kernels/LabA_C_RTL_kernel/LabA_C_RTL_kernel_kernels/src 2default:defaultZ200-1510h px 
ª
Adding design file '/home/ubuntu/Desktop/02-mixing-c-rtl-kernels/LabA_C_RTL_kernel/LabA_C_RTL_kernel_kernels/src/krnl_vadd.cpp' to the project
*HLSZ200-10h px 
q
Running: %s
2001510*hls2>
*open_solution -flow_target vitis solution 2default:defaultZ200-1510h px 
Ï
´Creating and opening solution '/home/ubuntu/Desktop/02-mixing-c-rtl-kernels/LabA_C_RTL_kernel/LabA_C_RTL_kernel_kernels/Emulation-HW/build/krnl_vadd/krnl_vadd/krnl_vadd/solution'.
*HLSZ200-10h px 
×
Using %sflow_target '%s'
2001505*hls2
 2default:default2
vitis2default:defaultZ200-1505h pxeFor help on HLS 200-1505 see www.xilinx.com/cgi-bin/docs/rdoc?v=2022.1;t=hls+guidance;d=200-1505.html 
°
Setting %s configuration: %s
200435*hls26
"'open_solution -flow_target vitis'2default:default26
"config_interface -m_axi_latency=642default:defaultZ200-435h px 
¼
Setting %s configuration: %s
200435*hls26
"'open_solution -flow_target vitis'2default:default2B
.config_interface -m_axi_alignment_byte_size=642default:defaultZ200-435h px 
¼
Setting %s configuration: %s
200435*hls26
"'open_solution -flow_target vitis'2default:default2B
.config_interface -m_axi_max_widen_bitwidth=5122default:defaultZ200-435h px 
®
Setting %s configuration: %s
200435*hls26
"'open_solution -flow_target vitis'2default:default24
 config_rtl -register_reset_num=32default:defaultZ200-435h px 
c
Running: %s
2001510*hls20
set_part xcu50-fsvh2104-2-e 2default:defaultZ200-1510h px 
j
Setting target device to '%s'2001611*hls2&
xcu50-fsvh2104-2-e2default:defaultZ200-1611h px 
x
Running: %s
2001510*hls2E
1create_clock -period 300.000000MHz -name default 2default:defaultZ200-1510h px 
P
5Setting up clock 'default' with a period of 3.333ns.
*SYNZ201-201h px 
b
Running: %s
2001510*hls2/
config_rtl -kernel_profile 2default:defaultZ200-1510h px 
l
Running: %s
2001510*hls29
%config_dataflow -strict_mode warning 2default:defaultZ200-1510h px 
\
Running: %s
2001510*hls2)
config_debug -enable 2default:defaultZ200-1510h px 
m
Running: %s
2001510*hls2:
&config_export -deadlock_detection sim 2default:defaultZ200-1510h px 
ñ
cThe '%s' command is deprecated and will be removed in a future release. Use %s as its replacement.
200483*hls25
!config_export -deadlock_detection2default:default22
config_rtl -deadlock_detection2default:defaultZ200-483h px 
É
1Replacing '%s' with '%s' in current solution file2001907*hls29
%config_export -deadlock_detection=sim2default:default26
"config_rtl -deadlock_detection=sim2default:defaultZ200-1907h px 
s
Running: %s
2001510*hls2@
,config_interface -m_axi_conservative_mode=1 2default:defaultZ200-1510h px 
f
Running: %s
2001510*hls23
config_interface -m_axi_addr64 2default:defaultZ200-1510h px 
p
Running: %s
2001510*hls2=
)config_interface -m_axi_auto_max_ports=0 2default:defaultZ200-1510h px 
r
Running: %s
2001510*hls2?
+config_export -format xo -ipname krnl_vadd 2default:defaultZ200-1510h px 
É
1Replacing '%s' with '%s' in current solution file2001907*hls29
%config_export -deadlock_detection=sim2default:default26
"config_rtl -deadlock_detection=sim2default:defaultZ200-1907h px 
U
Running: %s
2001510*hls2"
csynth_design 2default:defaultZ200-1510h px 
Å
©Finished File checks and directory preparation: CPU user time: 0.01 seconds. CPU system time: 0 seconds. Elapsed time: 0.01 seconds; current allocated memory: 1.458 GB.
*HLSZ200-111h px 
£
Analyzing design file '/home/ubuntu/Desktop/02-mixing-c-rtl-kernels/LabA_C_RTL_kernel/LabA_C_RTL_kernel_kernels/src/krnl_vadd.cpp' ... 
*HLSZ200-10h px 
É
­Finished Source Code Analysis and Preprocessing: CPU user time: 0.75 seconds. CPU system time: 0.34 seconds. Elapsed time: 0.56 seconds; current allocated memory: 1.459 GB.
*HLSZ200-111h px 
m
/Using interface defaults for '%s' flow target.
200777*hls2
Vitis2default:defaultZ200-777h px 

üMultiple burst writes of variable length and bit width 32 in loop 'vadd_wrteC'(/home/ubuntu/Desktop/02-mixing-c-rtl-kernels/LabA_C_RTL_kernel/LabA_C_RTL_kernel_kernels/src/krnl_vadd.cpp:90:17) has been inferred on bundle 'gmem1'. These burst requests might be further partitioned into multiple requests during RTL generation, based on max_read_burst_length or max_write_burst_length settings. (/home/ubuntu/Desktop/02-mixing-c-rtl-kernels/LabA_C_RTL_kernel/LabA_C_RTL_kernel_kernels/src/krnl_vadd.cpp:90:22)
*HLSZ214-115h px 
È
¬Finished Compiling Optimization and Transform: CPU user time: 3.2 seconds. CPU system time: 0.43 seconds. Elapsed time: 3.35 seconds; current allocated memory: 469.941 MB.
*HLSZ200-111h px 
¬
Finished Checking Pragmas: CPU user time: 0 seconds. CPU system time: 0 seconds. Elapsed time: 0 seconds; current allocated memory: 469.941 MB.
*HLSZ200-111h px 
<
"Starting code transformations ...
*HLSZ200-10h px 
¸
Finished Standard Transforms: CPU user time: 0.01 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.01 seconds; current allocated memory: 470.453 MB.
*HLSZ200-111h px 
8
Checking synthesizability ...
*HLSZ200-10h px 
»
Finished Checking Synthesizability: CPU user time: 0.01 seconds. CPU system time: 0 seconds. Elapsed time: 0.01 seconds; current allocated memory: 470.523 MB.
*HLSZ200-111h px 
È
¬Finished Loop, function and other optimizations: CPU user time: 0.03 seconds. CPU system time: 0 seconds. Elapsed time: 0.04 seconds; current allocated memory: 491.996 MB.
*HLSZ200-111h px 

Cannot flatten loop %s %s.
200960*hls2±
'VITIS_LOOP_75_1' (/home/ubuntu/Desktop/02-mixing-c-rtl-kernels/LabA_C_RTL_kernel/LabA_C_RTL_kernel_kernels/src/krnl_vadd.cpp:75:31) in function 'krnl_vadd'2default:default2*
more than one sub loop2default:defaultZ200-960h pxcFor help on HLS 200-960 see www.xilinx.com/cgi-bin/docs/rdoc?v=2022.1;t=hls+guidance;d=200-960.html 
õ
-Inferring partial write operation for '%s' %s200472*hls2
arrayA2default:default2
r(/home/ubuntu/Desktop/02-mixing-c-rtl-kernels/LabA_C_RTL_kernel/LabA_C_RTL_kernel_kernels/src/krnl_vadd.cpp:84:12)2default:defaultZ200-472h px 
õ
-Inferring partial write operation for '%s' %s200472*hls2
arrayB2default:default2
r(/home/ubuntu/Desktop/02-mixing-c-rtl-kernels/LabA_C_RTL_kernel/LabA_C_RTL_kernel_kernels/src/krnl_vadd.cpp:85:23)2default:defaultZ200-472h px 
ð
6Unable to rewind loop %s: loop nest is not flattened.
200957*hls2®
'VITIS_LOOP_75_1' (/home/ubuntu/Desktop/02-mixing-c-rtl-kernels/LabA_C_RTL_kernel/LabA_C_RTL_kernel_kernels/src/krnl_vadd.cpp:75) in function 'krnl_vadd'2default:defaultZ200-957h pxcFor help on HLS 200-957 see www.xilinx.com/cgi-bin/docs/rdoc?v=2022.1;t=hls+guidance;d=200-957.html 
»
Finished Architecture Synthesis: CPU user time: 0.03 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.04 seconds; current allocated memory: 491.996 MB.
*HLSZ200-111h px 
:
 Starting hardware synthesis ...
*HLSZ200-10h px 
7
Synthesizing 'krnl_vadd' ...
*HLSZ200-10h px 
[
A----------------------------------------------------------------
*HLSZ200-10h px 
>
$-- Implementing module 'krnl_vadd' 
*HLSZ200-42h px 
[
A----------------------------------------------------------------
*HLSZ200-10h px 
4
Starting scheduling ...
*SCHEDZ204-11h px 
5
Pipelining loop 'readA'.
*SCHEDZ204-61h px 
Ã
@The II Violation in module '%s' (%s): Unable to schedule %s %s.
200885*hls2
	krnl_vadd2default:default2 
loop 'readA'2default:default2¬
bus request operation ('gmem_load_1_req', /home/ubuntu/Desktop/02-mixing-c-rtl-kernels/LabA_C_RTL_kernel/LabA_C_RTL_kernel_kernels/src/krnl_vadd.cpp:85) on port 'gmem' (/home/ubuntu/Desktop/02-mixing-c-rtl-kernels/LabA_C_RTL_kernel/LabA_C_RTL_kernel_kernels/src/krnl_vadd.cpp:85)2default:default2
sdue to limited memory ports (II = 1). Please consider using a memory core with more ports or partitioning the array2default:defaultZ200-885h pxcFor help on HLS 200-885 see www.xilinx.com/cgi-bin/docs/rdoc?v=2022.1;t=hls+guidance;d=200-885.html 
:
Pipelining loop 'vadd_wrteC'.
*SCHEDZ204-61h px 
Ï
BPipelining result : Target II = %s, Final II = %s, Depth = %s, %s
2001470*hls2
12default:default2
22default:default2
742default:default2 
loop 'readA'2default:defaultZ200-1470h px 
Ó
BPipelining result : Target II = %s, Final II = %s, Depth = %s, %s
2001470*hls2
12default:default2
12default:default2
32default:default2%
loop 'vadd_wrteC'2default:defaultZ200-1470h px 
1
Finished scheduling.
*SCHEDZ204-11h px 
¯
Finished Scheduling: CPU user time: 0.22 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.24 seconds; current allocated memory: 491.996 MB.
*HLSZ200-111h px 
G
+Starting micro-architecture generation ...
*BINDZ205-100h px 
C
'Performing variable lifetime analysis.
*BINDZ205-101h px 
8
Exploring resource sharing.
*BINDZ205-101h px 
(
Binding ...
*BINDZ205-101h px 
D
(Finished micro-architecture generation.
*BINDZ205-100h px 
©
Finished Binding: CPU user time: 0.49 seconds. CPU system time: 0 seconds. Elapsed time: 0.49 seconds; current allocated memory: 491.996 MB.
*HLSZ200-111h px 
[
A----------------------------------------------------------------
*HLSZ200-10h px 
D
*-- Generating RTL for module 'krnl_vadd' 
*HLSZ200-10h px 
[
A----------------------------------------------------------------
*HLSZ200-10h px 
f
IDesign contains AXI ports. Reset is fixed to synchronous and active low.
*RTGENZ206-101h px 
Y
<Setting interface mode on port 'krnl_vadd/gmem' to 'm_axi'.
*RTGENZ206-500h px 
Z
=Setting interface mode on port 'krnl_vadd/gmem1' to 'm_axi'.
*RTGENZ206-500h px 
d
GSetting interface mode on port 'krnl_vadd/a' to 's_axilite & ap_none'.
*RTGENZ206-500h px 
d
GSetting interface mode on port 'krnl_vadd/b' to 's_axilite & ap_none'.
*RTGENZ206-500h px 
d
GSetting interface mode on port 'krnl_vadd/c' to 's_axilite & ap_none'.
*RTGENZ206-500h px 
m
PSetting interface mode on port 'krnl_vadd/n_elements' to 's_axilite & ap_none'.
*RTGENZ206-500h px 
l
OSetting interface mode on function 'krnl_vadd' to 's_axilite & ap_ctrl_chain'.
*RTGENZ206-500h px 
n
QBundling port 'a', 'b', 'c', 'n_elements' and 'return' to AXI-Lite port control.
*RTGENZ206-100h px 
J
-Finished creating RTL model for 'krnl_vadd'.
*RTGENZ206-100h px 
´
Finished Creating RTL model: CPU user time: 0.19 seconds. CPU system time: 0 seconds. Elapsed time: 0.19 seconds; current allocated memory: 491.996 MB.
*HLSZ200-111h px 
l
PImplementing memory 'krnl_vadd_arrayA_RAM_AUTO_1R1W_ram (RAM)' using auto RAMs.
*RTMGZ210-278h px 
¾
¢Finished Generating all RTL models: CPU user time: 0.64 seconds. CPU system time: 0.02 seconds. Elapsed time: 0.66 seconds; current allocated memory: 493.625 MB.
*HLSZ200-111h px 
µ
hDesign has inferred MAXI bursts%s, see Vitis HLS GUI synthesis summary report for detailed information.
2001603*hls2&
 and missed bursts2default:defaultZ200-1603h px 
·
Finished Updating report files: CPU user time: 0.55 seconds. CPU system time: 0 seconds. Elapsed time: 0.56 seconds; current allocated memory: 498.574 MB.
*HLSZ200-111h px 
?
#Generating VHDL RTL for krnl_vadd.
*VHDLZ208-304h px 
B
&Generating Verilog RTL for krnl_vadd.
*VLOGZ209-307h px 

**** Loop Constraint Status: %s200790*hls2<
(All loop constraints were NOT satisfied.2default:defaultZ200-790h px 
Z
**** Estimated Fmax: %s MHz200789*hls2
411.002default:defaultZ200-789h px 
º
Finished Command csynth_design CPU user time: 6.15 seconds. CPU system time: 0.82 seconds. Elapsed time: 6.16 seconds; current allocated memory: -994.445 MB.
*HLSZ200-111h px 
U
Running: %s
2001510*hls2"
export_design 2default:defaultZ200-1510h px 
8
Exporting RTL as a Vivado IP.
*IMPLZ213-8h px 

í
****** Vivado v2022.1 (64-bit)
  **** SW Build 3526262 on Mon Apr 18 15:47:01 MDT 2022
  **** IP Build 3524634 on Mon Apr 18 20:55:01 MDT 2022
    ** Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.

source run_ippack.tcl -notrace
*commonh px 
G
2INFO: [IP_Flow 19-234] Refreshing IP repositories
*commonh px 
O
:INFO: [IP_Flow 19-1704] No user IP repositories specified
*commonh px 
p
[INFO: [IP_Flow 19-2313] Loaded Vivado IP repository '/tools/Xilinx/Vivado/2022.1/data/ip'.
*commonh px 

Running package_xo -xo_path /home/ubuntu/Desktop/02-mixing-c-rtl-kernels/LabA_C_RTL_kernel/LabA_C_RTL_kernel_kernels/Emulation-HW/build/krnl_vadd/krnl_vadd/krnl_vadd/solution/impl/export.xo -kernel_name krnl_vadd -kernel_xml /home/ubuntu/Desktop/02-mixing-c-rtl-kernels/LabA_C_RTL_kernel/LabA_C_RTL_kernel_kernels/Emulation-HW/build/krnl_vadd/krnl_vadd/krnl_vadd/solution/impl/ip/../kernel/kernel.xml -kernel_files /home/ubuntu/Desktop/02-mixing-c-rtl-kernels/LabA_C_RTL_kernel/LabA_C_RTL_kernel_kernels/src/krnl_vadd.cpp -ip_directory /home/ubuntu/Desktop/02-mixing-c-rtl-kernels/LabA_C_RTL_kernel/LabA_C_RTL_kernel_kernels/Emulation-HW/build/krnl_vadd/krnl_vadd/krnl_vadd/solution/impl/ip/ip_unzip_dir -design_xml /home/ubuntu/Desktop/02-mixing-c-rtl-kernels/LabA_C_RTL_kernel/LabA_C_RTL_kernel_kernels/Emulation-HW/build/krnl_vadd/krnl_vadd/krnl_vadd/solution/.autopilot/db/krnl_vadd.design.xml -debug_directory /home/ubuntu/Desktop/02-mixing-c-rtl-kernels/LabA_C_RTL_kernel/LabA_C_RTL_kernel_kernels/Emulation-HW/build/krnl_*commonh px 
ó
Ývadd/krnl_vadd/krnl_vadd/solution/.debug -hls_directory /home/ubuntu/Desktop/02-mixing-c-rtl-kernels/LabA_C_RTL_kernel/LabA_C_RTL_kernel_kernels/Emulation-HW/build/krnl_vadd/krnl_vadd/krnl_vadd/solution/impl/ip/hls_files
*commonh px 
Y
DINFO: [Common 17-206] Exiting Vivado at Sat Oct 12 00:45:14 2024...
*commonh px 
s
Generated output file %s
200802*hls25
!krnl_vadd/solution/impl/export.xo2default:defaultZ200-802h px 
¸
Finished Command export_design CPU user time: 10.07 seconds. CPU system time: 4.23 seconds. Elapsed time: 14.1 seconds; current allocated memory: 5.934 MB.
*HLSZ200-111h px 
U
Running: %s
2001510*hls2"
close_project 2default:defaultZ200-1510h px 
6
HLS completed successfully
*HLSZ200-150h px 
©
Total CPU user time: 18.87 seconds. Total CPU system time: 6.27 seconds. Total elapsed time: 22.83 seconds; peak allocated memory: 1.459 GB.
*HLSZ200-112h px 

Exiting %s at %s...
206*common2
	vitis_hls2default:default2,
Sat Oct 12 00:45:18 20242default:defaultZ17-206h px 


End Record