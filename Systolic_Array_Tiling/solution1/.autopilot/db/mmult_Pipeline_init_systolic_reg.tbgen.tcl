set moduleName mmult_Pipeline_init_systolic_reg
set isTopModule 0
set isCombinational 0
set isDatapathOnly 0
set isPipelined 1
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set hasInterrupt 0
set C_modelName {mmult_Pipeline_init_systolic_reg}
set C_modelType { void 0 }
set C_modelArgList {
	{ inA_15_0_promoted_out int 32 regular {pointer 1}  }
	{ inB_14_15_promoted_out int 32 regular {pointer 1}  }
	{ inB_13_15_promoted_out int 32 regular {pointer 1}  }
	{ inB_12_15_promoted_out int 32 regular {pointer 1}  }
	{ inB_11_15_promoted_out int 32 regular {pointer 1}  }
	{ inB_10_15_promoted_out int 32 regular {pointer 1}  }
	{ inB_9_15_promoted_out int 32 regular {pointer 1}  }
	{ inB_8_15_promoted_out int 32 regular {pointer 1}  }
	{ inB_7_15_promoted_out int 32 regular {pointer 1}  }
	{ inB_6_15_promoted_out int 32 regular {pointer 1}  }
	{ inB_5_15_promoted_out int 32 regular {pointer 1}  }
	{ inB_4_15_promoted_out int 32 regular {pointer 1}  }
	{ inB_3_15_promoted_out int 32 regular {pointer 1}  }
	{ inB_2_15_promoted_out int 32 regular {pointer 1}  }
	{ inB_1_15_promoted_out int 32 regular {pointer 1}  }
	{ inB_0_15_promoted_out int 32 regular {pointer 1}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "inA_15_0_promoted_out", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "inB_14_15_promoted_out", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "inB_13_15_promoted_out", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "inB_12_15_promoted_out", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "inB_11_15_promoted_out", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "inB_10_15_promoted_out", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "inB_9_15_promoted_out", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "inB_8_15_promoted_out", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "inB_7_15_promoted_out", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "inB_6_15_promoted_out", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "inB_5_15_promoted_out", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "inB_4_15_promoted_out", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "inB_3_15_promoted_out", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "inB_2_15_promoted_out", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "inB_1_15_promoted_out", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "inB_0_15_promoted_out", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 38
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ inA_15_0_promoted_out sc_out sc_lv 32 signal 0 } 
	{ inA_15_0_promoted_out_ap_vld sc_out sc_logic 1 outvld 0 } 
	{ inB_14_15_promoted_out sc_out sc_lv 32 signal 1 } 
	{ inB_14_15_promoted_out_ap_vld sc_out sc_logic 1 outvld 1 } 
	{ inB_13_15_promoted_out sc_out sc_lv 32 signal 2 } 
	{ inB_13_15_promoted_out_ap_vld sc_out sc_logic 1 outvld 2 } 
	{ inB_12_15_promoted_out sc_out sc_lv 32 signal 3 } 
	{ inB_12_15_promoted_out_ap_vld sc_out sc_logic 1 outvld 3 } 
	{ inB_11_15_promoted_out sc_out sc_lv 32 signal 4 } 
	{ inB_11_15_promoted_out_ap_vld sc_out sc_logic 1 outvld 4 } 
	{ inB_10_15_promoted_out sc_out sc_lv 32 signal 5 } 
	{ inB_10_15_promoted_out_ap_vld sc_out sc_logic 1 outvld 5 } 
	{ inB_9_15_promoted_out sc_out sc_lv 32 signal 6 } 
	{ inB_9_15_promoted_out_ap_vld sc_out sc_logic 1 outvld 6 } 
	{ inB_8_15_promoted_out sc_out sc_lv 32 signal 7 } 
	{ inB_8_15_promoted_out_ap_vld sc_out sc_logic 1 outvld 7 } 
	{ inB_7_15_promoted_out sc_out sc_lv 32 signal 8 } 
	{ inB_7_15_promoted_out_ap_vld sc_out sc_logic 1 outvld 8 } 
	{ inB_6_15_promoted_out sc_out sc_lv 32 signal 9 } 
	{ inB_6_15_promoted_out_ap_vld sc_out sc_logic 1 outvld 9 } 
	{ inB_5_15_promoted_out sc_out sc_lv 32 signal 10 } 
	{ inB_5_15_promoted_out_ap_vld sc_out sc_logic 1 outvld 10 } 
	{ inB_4_15_promoted_out sc_out sc_lv 32 signal 11 } 
	{ inB_4_15_promoted_out_ap_vld sc_out sc_logic 1 outvld 11 } 
	{ inB_3_15_promoted_out sc_out sc_lv 32 signal 12 } 
	{ inB_3_15_promoted_out_ap_vld sc_out sc_logic 1 outvld 12 } 
	{ inB_2_15_promoted_out sc_out sc_lv 32 signal 13 } 
	{ inB_2_15_promoted_out_ap_vld sc_out sc_logic 1 outvld 13 } 
	{ inB_1_15_promoted_out sc_out sc_lv 32 signal 14 } 
	{ inB_1_15_promoted_out_ap_vld sc_out sc_logic 1 outvld 14 } 
	{ inB_0_15_promoted_out sc_out sc_lv 32 signal 15 } 
	{ inB_0_15_promoted_out_ap_vld sc_out sc_logic 1 outvld 15 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "inA_15_0_promoted_out", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inA_15_0_promoted_out", "role": "default" }} , 
 	{ "name": "inA_15_0_promoted_out_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "inA_15_0_promoted_out", "role": "ap_vld" }} , 
 	{ "name": "inB_14_15_promoted_out", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inB_14_15_promoted_out", "role": "default" }} , 
 	{ "name": "inB_14_15_promoted_out_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "inB_14_15_promoted_out", "role": "ap_vld" }} , 
 	{ "name": "inB_13_15_promoted_out", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inB_13_15_promoted_out", "role": "default" }} , 
 	{ "name": "inB_13_15_promoted_out_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "inB_13_15_promoted_out", "role": "ap_vld" }} , 
 	{ "name": "inB_12_15_promoted_out", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inB_12_15_promoted_out", "role": "default" }} , 
 	{ "name": "inB_12_15_promoted_out_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "inB_12_15_promoted_out", "role": "ap_vld" }} , 
 	{ "name": "inB_11_15_promoted_out", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inB_11_15_promoted_out", "role": "default" }} , 
 	{ "name": "inB_11_15_promoted_out_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "inB_11_15_promoted_out", "role": "ap_vld" }} , 
 	{ "name": "inB_10_15_promoted_out", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inB_10_15_promoted_out", "role": "default" }} , 
 	{ "name": "inB_10_15_promoted_out_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "inB_10_15_promoted_out", "role": "ap_vld" }} , 
 	{ "name": "inB_9_15_promoted_out", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inB_9_15_promoted_out", "role": "default" }} , 
 	{ "name": "inB_9_15_promoted_out_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "inB_9_15_promoted_out", "role": "ap_vld" }} , 
 	{ "name": "inB_8_15_promoted_out", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inB_8_15_promoted_out", "role": "default" }} , 
 	{ "name": "inB_8_15_promoted_out_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "inB_8_15_promoted_out", "role": "ap_vld" }} , 
 	{ "name": "inB_7_15_promoted_out", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inB_7_15_promoted_out", "role": "default" }} , 
 	{ "name": "inB_7_15_promoted_out_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "inB_7_15_promoted_out", "role": "ap_vld" }} , 
 	{ "name": "inB_6_15_promoted_out", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inB_6_15_promoted_out", "role": "default" }} , 
 	{ "name": "inB_6_15_promoted_out_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "inB_6_15_promoted_out", "role": "ap_vld" }} , 
 	{ "name": "inB_5_15_promoted_out", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inB_5_15_promoted_out", "role": "default" }} , 
 	{ "name": "inB_5_15_promoted_out_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "inB_5_15_promoted_out", "role": "ap_vld" }} , 
 	{ "name": "inB_4_15_promoted_out", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inB_4_15_promoted_out", "role": "default" }} , 
 	{ "name": "inB_4_15_promoted_out_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "inB_4_15_promoted_out", "role": "ap_vld" }} , 
 	{ "name": "inB_3_15_promoted_out", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inB_3_15_promoted_out", "role": "default" }} , 
 	{ "name": "inB_3_15_promoted_out_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "inB_3_15_promoted_out", "role": "ap_vld" }} , 
 	{ "name": "inB_2_15_promoted_out", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inB_2_15_promoted_out", "role": "default" }} , 
 	{ "name": "inB_2_15_promoted_out_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "inB_2_15_promoted_out", "role": "ap_vld" }} , 
 	{ "name": "inB_1_15_promoted_out", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inB_1_15_promoted_out", "role": "default" }} , 
 	{ "name": "inB_1_15_promoted_out_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "inB_1_15_promoted_out", "role": "ap_vld" }} , 
 	{ "name": "inB_0_15_promoted_out", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inB_0_15_promoted_out", "role": "default" }} , 
 	{ "name": "inB_0_15_promoted_out_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "inB_0_15_promoted_out", "role": "ap_vld" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1"],
		"CDFG" : "mmult_Pipeline_init_systolic_reg",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "18", "EstimateLatencyMax" : "18",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "inA_15_0_promoted_out", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "inB_14_15_promoted_out", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "inB_13_15_promoted_out", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "inB_12_15_promoted_out", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "inB_11_15_promoted_out", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "inB_10_15_promoted_out", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "inB_9_15_promoted_out", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "inB_8_15_promoted_out", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "inB_7_15_promoted_out", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "inB_6_15_promoted_out", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "inB_5_15_promoted_out", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "inB_4_15_promoted_out", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "inB_3_15_promoted_out", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "inB_2_15_promoted_out", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "inB_1_15_promoted_out", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "inB_0_15_promoted_out", "Type" : "Vld", "Direction" : "O"}],
		"Loop" : [
			{"Name" : "init_systolic_reg", "PipelineType" : "NotSupport"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.flow_control_loop_pipe_sequential_init_U", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	mmult_Pipeline_init_systolic_reg {
		inA_15_0_promoted_out {Type O LastRead -1 FirstWrite 0}
		inB_14_15_promoted_out {Type O LastRead -1 FirstWrite 0}
		inB_13_15_promoted_out {Type O LastRead -1 FirstWrite 0}
		inB_12_15_promoted_out {Type O LastRead -1 FirstWrite 0}
		inB_11_15_promoted_out {Type O LastRead -1 FirstWrite 0}
		inB_10_15_promoted_out {Type O LastRead -1 FirstWrite 0}
		inB_9_15_promoted_out {Type O LastRead -1 FirstWrite 0}
		inB_8_15_promoted_out {Type O LastRead -1 FirstWrite 0}
		inB_7_15_promoted_out {Type O LastRead -1 FirstWrite 0}
		inB_6_15_promoted_out {Type O LastRead -1 FirstWrite 0}
		inB_5_15_promoted_out {Type O LastRead -1 FirstWrite 0}
		inB_4_15_promoted_out {Type O LastRead -1 FirstWrite 0}
		inB_3_15_promoted_out {Type O LastRead -1 FirstWrite 0}
		inB_2_15_promoted_out {Type O LastRead -1 FirstWrite 0}
		inB_1_15_promoted_out {Type O LastRead -1 FirstWrite 0}
		inB_0_15_promoted_out {Type O LastRead -1 FirstWrite 0}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "18", "Max" : "18"}
	, {"Name" : "Interval", "Min" : "18", "Max" : "18"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	inA_15_0_promoted_out { ap_vld {  { inA_15_0_promoted_out out_data 1 32 }  { inA_15_0_promoted_out_ap_vld out_vld 1 1 } } }
	inB_14_15_promoted_out { ap_vld {  { inB_14_15_promoted_out out_data 1 32 }  { inB_14_15_promoted_out_ap_vld out_vld 1 1 } } }
	inB_13_15_promoted_out { ap_vld {  { inB_13_15_promoted_out out_data 1 32 }  { inB_13_15_promoted_out_ap_vld out_vld 1 1 } } }
	inB_12_15_promoted_out { ap_vld {  { inB_12_15_promoted_out out_data 1 32 }  { inB_12_15_promoted_out_ap_vld out_vld 1 1 } } }
	inB_11_15_promoted_out { ap_vld {  { inB_11_15_promoted_out out_data 1 32 }  { inB_11_15_promoted_out_ap_vld out_vld 1 1 } } }
	inB_10_15_promoted_out { ap_vld {  { inB_10_15_promoted_out out_data 1 32 }  { inB_10_15_promoted_out_ap_vld out_vld 1 1 } } }
	inB_9_15_promoted_out { ap_vld {  { inB_9_15_promoted_out out_data 1 32 }  { inB_9_15_promoted_out_ap_vld out_vld 1 1 } } }
	inB_8_15_promoted_out { ap_vld {  { inB_8_15_promoted_out out_data 1 32 }  { inB_8_15_promoted_out_ap_vld out_vld 1 1 } } }
	inB_7_15_promoted_out { ap_vld {  { inB_7_15_promoted_out out_data 1 32 }  { inB_7_15_promoted_out_ap_vld out_vld 1 1 } } }
	inB_6_15_promoted_out { ap_vld {  { inB_6_15_promoted_out out_data 1 32 }  { inB_6_15_promoted_out_ap_vld out_vld 1 1 } } }
	inB_5_15_promoted_out { ap_vld {  { inB_5_15_promoted_out out_data 1 32 }  { inB_5_15_promoted_out_ap_vld out_vld 1 1 } } }
	inB_4_15_promoted_out { ap_vld {  { inB_4_15_promoted_out out_data 1 32 }  { inB_4_15_promoted_out_ap_vld out_vld 1 1 } } }
	inB_3_15_promoted_out { ap_vld {  { inB_3_15_promoted_out out_data 1 32 }  { inB_3_15_promoted_out_ap_vld out_vld 1 1 } } }
	inB_2_15_promoted_out { ap_vld {  { inB_2_15_promoted_out out_data 1 32 }  { inB_2_15_promoted_out_ap_vld out_vld 1 1 } } }
	inB_1_15_promoted_out { ap_vld {  { inB_1_15_promoted_out out_data 1 32 }  { inB_1_15_promoted_out_ap_vld out_vld 1 1 } } }
	inB_0_15_promoted_out { ap_vld {  { inB_0_15_promoted_out out_data 1 32 }  { inB_0_15_promoted_out_ap_vld out_vld 1 1 } } }
}
