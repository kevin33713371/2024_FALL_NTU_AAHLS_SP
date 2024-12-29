# NTU-AAHLS_SP-2024-Fall
Repo for the course of Application Acceleration with High-Level-Synthesis Special Project in NTU 2024 Fall  <br />
Professor : 賴瑾(Jiin Lai) <br />
This course offers two discipline : HLS(High Level Synthesis) / SoC(System on Chip) Design <br />
My option : HLS <br />
Name : 黃聖崴(Sheng-Wei Huang)  <br />
Student ID : 61275047H(Student in NTNU) <br />
Course Study Journal(HackMD) : [My Study Journal](https://hackmd.io/6AQMizsjS-eXy9o0s7xgsw)

## Experiment Overview
- Lab1 - A simple experiment to understand the operation of HLS and the use of its tools through multiplication.

- Lab2 - Understanding the port-level protocol for data transmission through the design of an FIR filter on AXI4 Master and AXI4 Stream interfaces.

- Lab3 - Learning to write host code using OpenCL , simulating and analyzing kernel code on Alveo series FPGA boards.

- LabA_RTL_Kernel_Workflow - Learning how to package the IP previously designed by RTL and integrate it into the Vitis simulation environment for simulation.

- LabA_Mixing_C_RTL_Kernels - Learning to integrate an HLS-designed C kernel with an RTL-designed module into the Vitis simulation environment for joint simulation.

- LabB_Systolic_Array - Using the learned "pragma" directives to design a Systolic Array and analyze the differences between Broadcasting and Propagating.

- Systolic_Array_Tiling - Optimize the SA_Propagating in LabB to support matrix computations larger than the size of the Systolic Array.

- Final_Project-q_matmul_k - Design a Systolic Array capable of performing the matrix multiplication of query and key matrices in the Self-Attention mechanism of a Vision Transformer (Query Dimension = 197 * 64, Key Dimension = 64*197).

- Final_Project-attention_kernel - Integrate the HLS Kernel of Systolic Array for query and key matrix multiplication in Self-Attention with the HLS Kernel for Softmax operations.
