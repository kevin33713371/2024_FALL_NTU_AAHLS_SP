# NTU-AAHLS_SP-2024-Fall
Repo for the course of Application Acceleration with High-Level-Synthesis Special Project in NTU 2024 Fall  <br />
Professor : 賴瑾(Jiin Lai) <br />
This course offers two discipline : HLS(High Level Synthesis) / SoC(System on Chip) Design <br />
My option : HLS <br />
Name : 黃聖崴(Sheng-Wei Huang)  <br />
Student ID : 61275047H(Student in NTNU) <br />
Course Study Journal(HackMD) : [My Study Journal](https://hackmd.io/6AQMizsjS-eXy9o0s7xgsw)

## Experiment Overview
- [Lab1](https://github.com/kevin33713371/2024_FALL_NTU_AAHLS_SP/tree/main/Lab1) - A simple experiment to understand the operation of HLS and the use of its tools through multiplication.
> For detailed procedures of Lab1, please refer to this report：[Lab1 Report](https://github.com/kevin33713371/2024_FALL_NTU_AAHLS_SP/blob/main/Lab1_report.pdf)

- [Lab2](https://github.com/kevin33713371/2024_FALL_NTU_AAHLS_SP/tree/main/Lab2) - Understanding the port-level protocol for data transmission through the design of an FIR filter on AXI4 Master and AXI4 Stream interfaces. 
> For detailed procedures of Lab2, please refer to study journal and report：[Lab2 Study Journal](https://hackmd.io/iAZN1pzISJKt-eiq4ZdE1A), [Lab2 Report](https://github.com/kevin33713371/2024_FALL_NTU_AAHLS_SP/blob/main/Lab2_report.pdf)

- [Lab3](https://github.com/kevin33713371/2024_FALL_NTU_AAHLS_SP/tree/main/Lab3) - Learning to write host code using OpenCL , simulating and analyzing kernel code on Alveo series FPGA boards.
> For detailed procedures of Lab3, please refer to this study journal：[Lab3 Study Journal](https://hackmd.io/xVnrTaZqRtONEf6pCyv0JA)

- [LabA_RTL_Kernel_Workflow](https://github.com/kevin33713371/2024_FALL_NTU_AAHLS_SP/tree/main/LabA_01_RTL_Kernel_Workflow) - Learning how to package the IP previously designed by RTL and integrate it into the Vitis simulation environment for simulation.

- [LabA_Mixing_C_RTL_Kernels](https://github.com/kevin33713371/2024_FALL_NTU_AAHLS_SP/tree/main/LabA_02_Mixing_C_RTL_Kernels) - Learning to integrate an HLS-designed C kernel with an RTL-designed module into the Vitis simulation environment for joint simulation.
> For detailed procedures of LabA, please refer to study journal and presentation PPT：[LabA Study Journal](https://hackmd.io/CiEGfLIrTiiu5PkxcH6gwg), [LabA Presentation PPT](https://github.com/kevin33713371/2024_FALL_NTU_AAHLS_SP/blob/main/LabA_presentation.pdf)

- [LabB_Systolic_Array](https://github.com/kevin33713371/2024_FALL_NTU_AAHLS_SP/tree/main/LabB_Systolic_Array) - Using the learned "pragma" directives to design a Systolic Array and analyze the differences between Broadcasting and Propagating.
> For detailed procedures of LabB, please refer to study journal and presentation PPT：[LabB Study Journal](https://hackmd.io/FhQPwB5FRFaDavJ8_-KIxA), [LabB Presentation PPT](https://github.com/kevin33713371/2024_FALL_NTU_AAHLS_SP/blob/main/LabB_presentation.pdf)

- [Systolic_Array_Tiling](https://github.com/kevin33713371/2024_FALL_NTU_AAHLS_SP/tree/main/Systolic_Array_Tiling) - Optimize the SA_Propagating in LabB to support matrix computations larger than the size of the Systolic Array.

- [Final_Project-q_matmul_k](https://github.com/kevin33713371/2024_FALL_NTU_AAHLS_SP/tree/main/Final_Project-q_matmul_k) - Design a Systolic Array capable of performing the matrix multiplication of query and key matrices in the Self-Attention mechanism of a Vision Transformer (Query Dimension = 197 * 64, Key Dimension = 64*197).

- [Final_Project-attention_kernel](https://github.com/kevin33713371/2024_FALL_NTU_AAHLS_SP/tree/main/Final_project-attention_kernel) - Integrate the HLS Kernel of Systolic Array for query and key matrix multiplication in Self-Attention with the HLS Kernel for Softmax operations.
> For detailed procedures of Final Project, please refer to this presentation PPT：[Final Project Presentation PPT](https://github.com/kevin33713371/2024_FALL_NTU_AAHLS_SP/blob/main/Final%20Project%20Presentation.pdf)

## Final Project
For the final project, we integrate the application code of Vision Transformer(ViT) with the hardware kernel purely designed by HLS(High-Level-Synthesis), which contains the Systolic Array design for the matrix multiplication of query and key and the Softmax Approximate Accelerator design for softmax layer computation. <br />
[Final Project Repository](https://github.com/kabazoka/ViT-Accelerator)
