// ==============================================================
// RTL generated by Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2022.1 (64-bit)
// Version: 2022.1
// Copyright (C) Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module mmult_mmult_Pipeline_init (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        inB_15_0_out,
        inB_15_0_out_ap_vld,
        inB_14_0_out,
        inB_14_0_out_ap_vld,
        inB_13_0_out,
        inB_13_0_out_ap_vld,
        inB_12_0_out,
        inB_12_0_out_ap_vld,
        inB_11_0_out,
        inB_11_0_out_ap_vld,
        inB_10_0_out,
        inB_10_0_out_ap_vld,
        inB_9_0_out,
        inB_9_0_out_ap_vld,
        inB_8_0_out,
        inB_8_0_out_ap_vld,
        inB_7_0_out,
        inB_7_0_out_ap_vld,
        inB_6_0_out,
        inB_6_0_out_ap_vld,
        inB_5_0_out,
        inB_5_0_out_ap_vld,
        inB_4_0_out,
        inB_4_0_out_ap_vld,
        inB_3_0_out,
        inB_3_0_out_ap_vld,
        inB_2_0_out,
        inB_2_0_out_ap_vld,
        inB_1_0_out,
        inB_1_0_out_ap_vld,
        inB_0_out,
        inB_0_out_ap_vld,
        inA_225_0_out,
        inA_225_0_out_ap_vld,
        inA_210_0_out,
        inA_210_0_out_ap_vld,
        inA_195_0_out,
        inA_195_0_out_ap_vld,
        inA_180_0_out,
        inA_180_0_out_ap_vld,
        inA_165_0_out,
        inA_165_0_out_ap_vld,
        inA_150_0_out,
        inA_150_0_out_ap_vld,
        inA_135_0_out,
        inA_135_0_out_ap_vld,
        inA_120_0_out,
        inA_120_0_out_ap_vld,
        inA_105_0_out,
        inA_105_0_out_ap_vld,
        inA_90_0_out,
        inA_90_0_out_ap_vld,
        inA_75_0_out,
        inA_75_0_out_ap_vld,
        inA_60_0_out,
        inA_60_0_out_ap_vld,
        inA_45_0_out,
        inA_45_0_out_ap_vld,
        inA_30_0_out,
        inA_30_0_out_ap_vld,
        inA_15_0_out,
        inA_15_0_out_ap_vld,
        inA_0_out,
        inA_0_out_ap_vld,
        arrayidx2224_15_15_promoted_out,
        arrayidx2224_15_15_promoted_out_ap_vld,
        arrayidx2224_14_15_promoted_out,
        arrayidx2224_14_15_promoted_out_ap_vld,
        arrayidx2224_13_15_promoted_out,
        arrayidx2224_13_15_promoted_out_ap_vld,
        arrayidx2224_12_15_promoted_out,
        arrayidx2224_12_15_promoted_out_ap_vld,
        arrayidx2224_11_15_promoted_out,
        arrayidx2224_11_15_promoted_out_ap_vld,
        arrayidx2224_10_15_promoted_out,
        arrayidx2224_10_15_promoted_out_ap_vld,
        arrayidx2224_9_15_promoted_out,
        arrayidx2224_9_15_promoted_out_ap_vld,
        arrayidx2224_8_15_promoted_out,
        arrayidx2224_8_15_promoted_out_ap_vld,
        arrayidx2224_7_15_promoted_out,
        arrayidx2224_7_15_promoted_out_ap_vld,
        arrayidx2224_6_15_promoted_out,
        arrayidx2224_6_15_promoted_out_ap_vld,
        arrayidx2224_5_15_promoted_out,
        arrayidx2224_5_15_promoted_out_ap_vld,
        arrayidx2224_4_15_promoted_out,
        arrayidx2224_4_15_promoted_out_ap_vld,
        arrayidx2224_3_15_promoted_out,
        arrayidx2224_3_15_promoted_out_ap_vld,
        arrayidx2224_2_15_promoted_out,
        arrayidx2224_2_15_promoted_out_ap_vld,
        arrayidx2224_1_15_promoted_out,
        arrayidx2224_1_15_promoted_out_ap_vld,
        arrayidx2224_15226_promoted_out,
        arrayidx2224_15226_promoted_out_ap_vld
);

parameter    ap_ST_fsm_state1 = 1'd1;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [31:0] inB_15_0_out;
output   inB_15_0_out_ap_vld;
output  [31:0] inB_14_0_out;
output   inB_14_0_out_ap_vld;
output  [31:0] inB_13_0_out;
output   inB_13_0_out_ap_vld;
output  [31:0] inB_12_0_out;
output   inB_12_0_out_ap_vld;
output  [31:0] inB_11_0_out;
output   inB_11_0_out_ap_vld;
output  [31:0] inB_10_0_out;
output   inB_10_0_out_ap_vld;
output  [31:0] inB_9_0_out;
output   inB_9_0_out_ap_vld;
output  [31:0] inB_8_0_out;
output   inB_8_0_out_ap_vld;
output  [31:0] inB_7_0_out;
output   inB_7_0_out_ap_vld;
output  [31:0] inB_6_0_out;
output   inB_6_0_out_ap_vld;
output  [31:0] inB_5_0_out;
output   inB_5_0_out_ap_vld;
output  [31:0] inB_4_0_out;
output   inB_4_0_out_ap_vld;
output  [31:0] inB_3_0_out;
output   inB_3_0_out_ap_vld;
output  [31:0] inB_2_0_out;
output   inB_2_0_out_ap_vld;
output  [31:0] inB_1_0_out;
output   inB_1_0_out_ap_vld;
output  [31:0] inB_0_out;
output   inB_0_out_ap_vld;
output  [31:0] inA_225_0_out;
output   inA_225_0_out_ap_vld;
output  [31:0] inA_210_0_out;
output   inA_210_0_out_ap_vld;
output  [31:0] inA_195_0_out;
output   inA_195_0_out_ap_vld;
output  [31:0] inA_180_0_out;
output   inA_180_0_out_ap_vld;
output  [31:0] inA_165_0_out;
output   inA_165_0_out_ap_vld;
output  [31:0] inA_150_0_out;
output   inA_150_0_out_ap_vld;
output  [31:0] inA_135_0_out;
output   inA_135_0_out_ap_vld;
output  [31:0] inA_120_0_out;
output   inA_120_0_out_ap_vld;
output  [31:0] inA_105_0_out;
output   inA_105_0_out_ap_vld;
output  [31:0] inA_90_0_out;
output   inA_90_0_out_ap_vld;
output  [31:0] inA_75_0_out;
output   inA_75_0_out_ap_vld;
output  [31:0] inA_60_0_out;
output   inA_60_0_out_ap_vld;
output  [31:0] inA_45_0_out;
output   inA_45_0_out_ap_vld;
output  [31:0] inA_30_0_out;
output   inA_30_0_out_ap_vld;
output  [31:0] inA_15_0_out;
output   inA_15_0_out_ap_vld;
output  [31:0] inA_0_out;
output   inA_0_out_ap_vld;
output  [31:0] arrayidx2224_15_15_promoted_out;
output   arrayidx2224_15_15_promoted_out_ap_vld;
output  [31:0] arrayidx2224_14_15_promoted_out;
output   arrayidx2224_14_15_promoted_out_ap_vld;
output  [31:0] arrayidx2224_13_15_promoted_out;
output   arrayidx2224_13_15_promoted_out_ap_vld;
output  [31:0] arrayidx2224_12_15_promoted_out;
output   arrayidx2224_12_15_promoted_out_ap_vld;
output  [31:0] arrayidx2224_11_15_promoted_out;
output   arrayidx2224_11_15_promoted_out_ap_vld;
output  [31:0] arrayidx2224_10_15_promoted_out;
output   arrayidx2224_10_15_promoted_out_ap_vld;
output  [31:0] arrayidx2224_9_15_promoted_out;
output   arrayidx2224_9_15_promoted_out_ap_vld;
output  [31:0] arrayidx2224_8_15_promoted_out;
output   arrayidx2224_8_15_promoted_out_ap_vld;
output  [31:0] arrayidx2224_7_15_promoted_out;
output   arrayidx2224_7_15_promoted_out_ap_vld;
output  [31:0] arrayidx2224_6_15_promoted_out;
output   arrayidx2224_6_15_promoted_out_ap_vld;
output  [31:0] arrayidx2224_5_15_promoted_out;
output   arrayidx2224_5_15_promoted_out_ap_vld;
output  [31:0] arrayidx2224_4_15_promoted_out;
output   arrayidx2224_4_15_promoted_out_ap_vld;
output  [31:0] arrayidx2224_3_15_promoted_out;
output   arrayidx2224_3_15_promoted_out_ap_vld;
output  [31:0] arrayidx2224_2_15_promoted_out;
output   arrayidx2224_2_15_promoted_out_ap_vld;
output  [31:0] arrayidx2224_1_15_promoted_out;
output   arrayidx2224_1_15_promoted_out_ap_vld;
output  [31:0] arrayidx2224_15226_promoted_out;
output   arrayidx2224_15226_promoted_out_ap_vld;

reg ap_idle;
reg inB_15_0_out_ap_vld;
reg inB_14_0_out_ap_vld;
reg inB_13_0_out_ap_vld;
reg inB_12_0_out_ap_vld;
reg inB_11_0_out_ap_vld;
reg inB_10_0_out_ap_vld;
reg inB_9_0_out_ap_vld;
reg inB_8_0_out_ap_vld;
reg inB_7_0_out_ap_vld;
reg inB_6_0_out_ap_vld;
reg inB_5_0_out_ap_vld;
reg inB_4_0_out_ap_vld;
reg inB_3_0_out_ap_vld;
reg inB_2_0_out_ap_vld;
reg inB_1_0_out_ap_vld;
reg inB_0_out_ap_vld;
reg inA_225_0_out_ap_vld;
reg inA_210_0_out_ap_vld;
reg inA_195_0_out_ap_vld;
reg inA_180_0_out_ap_vld;
reg inA_165_0_out_ap_vld;
reg inA_150_0_out_ap_vld;
reg inA_135_0_out_ap_vld;
reg inA_120_0_out_ap_vld;
reg inA_105_0_out_ap_vld;
reg inA_90_0_out_ap_vld;
reg inA_75_0_out_ap_vld;
reg inA_60_0_out_ap_vld;
reg inA_45_0_out_ap_vld;
reg inA_30_0_out_ap_vld;
reg inA_15_0_out_ap_vld;
reg inA_0_out_ap_vld;
reg arrayidx2224_15_15_promoted_out_ap_vld;
reg arrayidx2224_14_15_promoted_out_ap_vld;
reg arrayidx2224_13_15_promoted_out_ap_vld;
reg arrayidx2224_12_15_promoted_out_ap_vld;
reg arrayidx2224_11_15_promoted_out_ap_vld;
reg arrayidx2224_10_15_promoted_out_ap_vld;
reg arrayidx2224_9_15_promoted_out_ap_vld;
reg arrayidx2224_8_15_promoted_out_ap_vld;
reg arrayidx2224_7_15_promoted_out_ap_vld;
reg arrayidx2224_6_15_promoted_out_ap_vld;
reg arrayidx2224_5_15_promoted_out_ap_vld;
reg arrayidx2224_4_15_promoted_out_ap_vld;
reg arrayidx2224_3_15_promoted_out_ap_vld;
reg arrayidx2224_2_15_promoted_out_ap_vld;
reg arrayidx2224_1_15_promoted_out_ap_vld;
reg arrayidx2224_15226_promoted_out_ap_vld;

(* fsm_encoding = "none" *) reg   [0:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
reg    ap_block_state1_pp0_stage0_iter0;
wire   [0:0] icmp_ln62_fu_692_p2;
reg    ap_condition_exit_pp0_iter0_stage0;
wire    ap_loop_exit_ready;
reg    ap_ready_int;
reg   [4:0] i_fu_152;
wire   [4:0] add_ln62_fu_698_p2;
wire    ap_loop_init;
reg   [4:0] ap_sig_allocacmp_i_3;
reg    ap_done_reg;
wire    ap_continue_int;
reg    ap_done_int;
reg   [0:0] ap_NS_fsm;
reg    ap_ST_fsm_state1_blk;
wire    ap_start_int;
wire    ap_ce_reg;

// power-on initialization
initial begin
#0 ap_CS_fsm = 1'd1;
#0 ap_done_reg = 1'b0;
end

mmult_flow_control_loop_pipe_sequential_init flow_control_loop_pipe_sequential_init_U(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(ap_start),
    .ap_ready(ap_ready),
    .ap_done(ap_done),
    .ap_start_int(ap_start_int),
    .ap_loop_init(ap_loop_init),
    .ap_ready_int(ap_ready_int),
    .ap_loop_exit_ready(ap_condition_exit_pp0_iter0_stage0),
    .ap_loop_exit_done(ap_done_int),
    .ap_continue_int(ap_continue_int),
    .ap_done_int(ap_done_int)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_done_reg <= 1'b0;
    end else begin
        if ((ap_continue_int == 1'b1)) begin
            ap_done_reg <= 1'b0;
        end else if (((ap_start_int == 1'b1) & (ap_loop_exit_ready == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
            ap_done_reg <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((ap_start_int == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        if ((icmp_ln62_fu_692_p2 == 1'd0)) begin
            i_fu_152 <= add_ln62_fu_698_p2;
        end else if ((ap_loop_init == 1'b1)) begin
            i_fu_152 <= 5'd0;
        end
    end
end

always @ (*) begin
    if ((ap_start_int == 1'b0)) begin
        ap_ST_fsm_state1_blk = 1'b1;
    end else begin
        ap_ST_fsm_state1_blk = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start_int == 1'b1) & (icmp_ln62_fu_692_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_condition_exit_pp0_iter0_stage0 = 1'b1;
    end else begin
        ap_condition_exit_pp0_iter0_stage0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start_int == 1'b1) & (ap_loop_exit_ready == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_done_int = 1'b1;
    end else begin
        ap_done_int = ap_done_reg;
    end
end

always @ (*) begin
    if (((ap_start_int == 1'b0) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start_int == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_ready_int = 1'b1;
    end else begin
        ap_ready_int = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state1) & (ap_loop_init == 1'b1))) begin
        ap_sig_allocacmp_i_3 = 5'd0;
    end else begin
        ap_sig_allocacmp_i_3 = i_fu_152;
    end
end

always @ (*) begin
    if (((ap_start_int == 1'b1) & (icmp_ln62_fu_692_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state1))) begin
        arrayidx2224_10_15_promoted_out_ap_vld = 1'b1;
    end else begin
        arrayidx2224_10_15_promoted_out_ap_vld = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start_int == 1'b1) & (icmp_ln62_fu_692_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state1))) begin
        arrayidx2224_11_15_promoted_out_ap_vld = 1'b1;
    end else begin
        arrayidx2224_11_15_promoted_out_ap_vld = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start_int == 1'b1) & (icmp_ln62_fu_692_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state1))) begin
        arrayidx2224_12_15_promoted_out_ap_vld = 1'b1;
    end else begin
        arrayidx2224_12_15_promoted_out_ap_vld = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start_int == 1'b1) & (icmp_ln62_fu_692_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state1))) begin
        arrayidx2224_13_15_promoted_out_ap_vld = 1'b1;
    end else begin
        arrayidx2224_13_15_promoted_out_ap_vld = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start_int == 1'b1) & (icmp_ln62_fu_692_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state1))) begin
        arrayidx2224_14_15_promoted_out_ap_vld = 1'b1;
    end else begin
        arrayidx2224_14_15_promoted_out_ap_vld = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start_int == 1'b1) & (icmp_ln62_fu_692_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state1))) begin
        arrayidx2224_15226_promoted_out_ap_vld = 1'b1;
    end else begin
        arrayidx2224_15226_promoted_out_ap_vld = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start_int == 1'b1) & (icmp_ln62_fu_692_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state1))) begin
        arrayidx2224_15_15_promoted_out_ap_vld = 1'b1;
    end else begin
        arrayidx2224_15_15_promoted_out_ap_vld = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start_int == 1'b1) & (icmp_ln62_fu_692_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state1))) begin
        arrayidx2224_1_15_promoted_out_ap_vld = 1'b1;
    end else begin
        arrayidx2224_1_15_promoted_out_ap_vld = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start_int == 1'b1) & (icmp_ln62_fu_692_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state1))) begin
        arrayidx2224_2_15_promoted_out_ap_vld = 1'b1;
    end else begin
        arrayidx2224_2_15_promoted_out_ap_vld = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start_int == 1'b1) & (icmp_ln62_fu_692_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state1))) begin
        arrayidx2224_3_15_promoted_out_ap_vld = 1'b1;
    end else begin
        arrayidx2224_3_15_promoted_out_ap_vld = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start_int == 1'b1) & (icmp_ln62_fu_692_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state1))) begin
        arrayidx2224_4_15_promoted_out_ap_vld = 1'b1;
    end else begin
        arrayidx2224_4_15_promoted_out_ap_vld = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start_int == 1'b1) & (icmp_ln62_fu_692_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state1))) begin
        arrayidx2224_5_15_promoted_out_ap_vld = 1'b1;
    end else begin
        arrayidx2224_5_15_promoted_out_ap_vld = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start_int == 1'b1) & (icmp_ln62_fu_692_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state1))) begin
        arrayidx2224_6_15_promoted_out_ap_vld = 1'b1;
    end else begin
        arrayidx2224_6_15_promoted_out_ap_vld = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start_int == 1'b1) & (icmp_ln62_fu_692_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state1))) begin
        arrayidx2224_7_15_promoted_out_ap_vld = 1'b1;
    end else begin
        arrayidx2224_7_15_promoted_out_ap_vld = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start_int == 1'b1) & (icmp_ln62_fu_692_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state1))) begin
        arrayidx2224_8_15_promoted_out_ap_vld = 1'b1;
    end else begin
        arrayidx2224_8_15_promoted_out_ap_vld = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start_int == 1'b1) & (icmp_ln62_fu_692_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state1))) begin
        arrayidx2224_9_15_promoted_out_ap_vld = 1'b1;
    end else begin
        arrayidx2224_9_15_promoted_out_ap_vld = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start_int == 1'b1) & (icmp_ln62_fu_692_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state1))) begin
        inA_0_out_ap_vld = 1'b1;
    end else begin
        inA_0_out_ap_vld = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start_int == 1'b1) & (icmp_ln62_fu_692_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state1))) begin
        inA_105_0_out_ap_vld = 1'b1;
    end else begin
        inA_105_0_out_ap_vld = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start_int == 1'b1) & (icmp_ln62_fu_692_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state1))) begin
        inA_120_0_out_ap_vld = 1'b1;
    end else begin
        inA_120_0_out_ap_vld = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start_int == 1'b1) & (icmp_ln62_fu_692_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state1))) begin
        inA_135_0_out_ap_vld = 1'b1;
    end else begin
        inA_135_0_out_ap_vld = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start_int == 1'b1) & (icmp_ln62_fu_692_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state1))) begin
        inA_150_0_out_ap_vld = 1'b1;
    end else begin
        inA_150_0_out_ap_vld = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start_int == 1'b1) & (icmp_ln62_fu_692_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state1))) begin
        inA_15_0_out_ap_vld = 1'b1;
    end else begin
        inA_15_0_out_ap_vld = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start_int == 1'b1) & (icmp_ln62_fu_692_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state1))) begin
        inA_165_0_out_ap_vld = 1'b1;
    end else begin
        inA_165_0_out_ap_vld = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start_int == 1'b1) & (icmp_ln62_fu_692_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state1))) begin
        inA_180_0_out_ap_vld = 1'b1;
    end else begin
        inA_180_0_out_ap_vld = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start_int == 1'b1) & (icmp_ln62_fu_692_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state1))) begin
        inA_195_0_out_ap_vld = 1'b1;
    end else begin
        inA_195_0_out_ap_vld = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start_int == 1'b1) & (icmp_ln62_fu_692_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state1))) begin
        inA_210_0_out_ap_vld = 1'b1;
    end else begin
        inA_210_0_out_ap_vld = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start_int == 1'b1) & (icmp_ln62_fu_692_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state1))) begin
        inA_225_0_out_ap_vld = 1'b1;
    end else begin
        inA_225_0_out_ap_vld = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start_int == 1'b1) & (icmp_ln62_fu_692_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state1))) begin
        inA_30_0_out_ap_vld = 1'b1;
    end else begin
        inA_30_0_out_ap_vld = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start_int == 1'b1) & (icmp_ln62_fu_692_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state1))) begin
        inA_45_0_out_ap_vld = 1'b1;
    end else begin
        inA_45_0_out_ap_vld = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start_int == 1'b1) & (icmp_ln62_fu_692_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state1))) begin
        inA_60_0_out_ap_vld = 1'b1;
    end else begin
        inA_60_0_out_ap_vld = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start_int == 1'b1) & (icmp_ln62_fu_692_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state1))) begin
        inA_75_0_out_ap_vld = 1'b1;
    end else begin
        inA_75_0_out_ap_vld = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start_int == 1'b1) & (icmp_ln62_fu_692_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state1))) begin
        inA_90_0_out_ap_vld = 1'b1;
    end else begin
        inA_90_0_out_ap_vld = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start_int == 1'b1) & (icmp_ln62_fu_692_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state1))) begin
        inB_0_out_ap_vld = 1'b1;
    end else begin
        inB_0_out_ap_vld = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start_int == 1'b1) & (icmp_ln62_fu_692_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state1))) begin
        inB_10_0_out_ap_vld = 1'b1;
    end else begin
        inB_10_0_out_ap_vld = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start_int == 1'b1) & (icmp_ln62_fu_692_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state1))) begin
        inB_11_0_out_ap_vld = 1'b1;
    end else begin
        inB_11_0_out_ap_vld = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start_int == 1'b1) & (icmp_ln62_fu_692_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state1))) begin
        inB_12_0_out_ap_vld = 1'b1;
    end else begin
        inB_12_0_out_ap_vld = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start_int == 1'b1) & (icmp_ln62_fu_692_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state1))) begin
        inB_13_0_out_ap_vld = 1'b1;
    end else begin
        inB_13_0_out_ap_vld = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start_int == 1'b1) & (icmp_ln62_fu_692_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state1))) begin
        inB_14_0_out_ap_vld = 1'b1;
    end else begin
        inB_14_0_out_ap_vld = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start_int == 1'b1) & (icmp_ln62_fu_692_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state1))) begin
        inB_15_0_out_ap_vld = 1'b1;
    end else begin
        inB_15_0_out_ap_vld = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start_int == 1'b1) & (icmp_ln62_fu_692_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state1))) begin
        inB_1_0_out_ap_vld = 1'b1;
    end else begin
        inB_1_0_out_ap_vld = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start_int == 1'b1) & (icmp_ln62_fu_692_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state1))) begin
        inB_2_0_out_ap_vld = 1'b1;
    end else begin
        inB_2_0_out_ap_vld = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start_int == 1'b1) & (icmp_ln62_fu_692_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state1))) begin
        inB_3_0_out_ap_vld = 1'b1;
    end else begin
        inB_3_0_out_ap_vld = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start_int == 1'b1) & (icmp_ln62_fu_692_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state1))) begin
        inB_4_0_out_ap_vld = 1'b1;
    end else begin
        inB_4_0_out_ap_vld = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start_int == 1'b1) & (icmp_ln62_fu_692_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state1))) begin
        inB_5_0_out_ap_vld = 1'b1;
    end else begin
        inB_5_0_out_ap_vld = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start_int == 1'b1) & (icmp_ln62_fu_692_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state1))) begin
        inB_6_0_out_ap_vld = 1'b1;
    end else begin
        inB_6_0_out_ap_vld = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start_int == 1'b1) & (icmp_ln62_fu_692_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state1))) begin
        inB_7_0_out_ap_vld = 1'b1;
    end else begin
        inB_7_0_out_ap_vld = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start_int == 1'b1) & (icmp_ln62_fu_692_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state1))) begin
        inB_8_0_out_ap_vld = 1'b1;
    end else begin
        inB_8_0_out_ap_vld = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start_int == 1'b1) & (icmp_ln62_fu_692_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state1))) begin
        inB_9_0_out_ap_vld = 1'b1;
    end else begin
        inB_9_0_out_ap_vld = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            ap_NS_fsm = ap_ST_fsm_state1;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign add_ln62_fu_698_p2 = (ap_sig_allocacmp_i_3 + 5'd1);

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

always @ (*) begin
    ap_block_state1_pp0_stage0_iter0 = (ap_start_int == 1'b0);
end

assign ap_loop_exit_ready = ap_condition_exit_pp0_iter0_stage0;

assign arrayidx2224_10_15_promoted_out = 32'd0;

assign arrayidx2224_11_15_promoted_out = 32'd0;

assign arrayidx2224_12_15_promoted_out = 32'd0;

assign arrayidx2224_13_15_promoted_out = 32'd0;

assign arrayidx2224_14_15_promoted_out = 32'd0;

assign arrayidx2224_15226_promoted_out = 32'd0;

assign arrayidx2224_15_15_promoted_out = 32'd0;

assign arrayidx2224_1_15_promoted_out = 32'd0;

assign arrayidx2224_2_15_promoted_out = 32'd0;

assign arrayidx2224_3_15_promoted_out = 32'd0;

assign arrayidx2224_4_15_promoted_out = 32'd0;

assign arrayidx2224_5_15_promoted_out = 32'd0;

assign arrayidx2224_6_15_promoted_out = 32'd0;

assign arrayidx2224_7_15_promoted_out = 32'd0;

assign arrayidx2224_8_15_promoted_out = 32'd0;

assign arrayidx2224_9_15_promoted_out = 32'd0;

assign icmp_ln62_fu_692_p2 = ((ap_sig_allocacmp_i_3 == 5'd16) ? 1'b1 : 1'b0);

assign inA_0_out = 32'd0;

assign inA_105_0_out = 32'd0;

assign inA_120_0_out = 32'd0;

assign inA_135_0_out = 32'd0;

assign inA_150_0_out = 32'd0;

assign inA_15_0_out = 32'd0;

assign inA_165_0_out = 32'd0;

assign inA_180_0_out = 32'd0;

assign inA_195_0_out = 32'd0;

assign inA_210_0_out = 32'd0;

assign inA_225_0_out = 32'd0;

assign inA_30_0_out = 32'd0;

assign inA_45_0_out = 32'd0;

assign inA_60_0_out = 32'd0;

assign inA_75_0_out = 32'd0;

assign inA_90_0_out = 32'd0;

assign inB_0_out = 32'd0;

assign inB_10_0_out = 32'd0;

assign inB_11_0_out = 32'd0;

assign inB_12_0_out = 32'd0;

assign inB_13_0_out = 32'd0;

assign inB_14_0_out = 32'd0;

assign inB_15_0_out = 32'd0;

assign inB_1_0_out = 32'd0;

assign inB_2_0_out = 32'd0;

assign inB_3_0_out = 32'd0;

assign inB_4_0_out = 32'd0;

assign inB_5_0_out = 32'd0;

assign inB_6_0_out = 32'd0;

assign inB_7_0_out = 32'd0;

assign inB_8_0_out = 32'd0;

assign inB_9_0_out = 32'd0;

endmodule //mmult_mmult_Pipeline_init