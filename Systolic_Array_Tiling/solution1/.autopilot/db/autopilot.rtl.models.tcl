set SynModuleInfo {
  {SRCNAME mmult_Pipeline_init_systolic_reg MODELNAME mmult_Pipeline_init_systolic_reg RTLNAME mmult_mmult_Pipeline_init_systolic_reg
    SUBMODULES {
      {MODELNAME mmult_flow_control_loop_pipe_sequential_init RTLNAME mmult_flow_control_loop_pipe_sequential_init BINDTYPE interface TYPE internal_upc_flow_control INSTNAME mmult_flow_control_loop_pipe_sequential_init_U}
    }
  }
  {SRCNAME mmult_Pipeline_init_localC MODELNAME mmult_Pipeline_init_localC RTLNAME mmult_mmult_Pipeline_init_localC}
  {SRCNAME mmult_Pipeline_readA MODELNAME mmult_Pipeline_readA RTLNAME mmult_mmult_Pipeline_readA}
  {SRCNAME mmult_Pipeline_readB MODELNAME mmult_Pipeline_readB RTLNAME mmult_mmult_Pipeline_readB}
  {SRCNAME mmult_Pipeline_systolic_tiling_VITIS_LOOP_113_3_VITIS_LOOP_114_4 MODELNAME mmult_Pipeline_systolic_tiling_VITIS_LOOP_113_3_VITIS_LOOP_114_4 RTLNAME mmult_mmult_Pipeline_systolic_tiling_VITIS_LOOP_113_3_VITIS_LOOP_114_4
    SUBMODULES {
      {MODELNAME mmult_mux_326_32_1_1 RTLNAME mmult_mux_326_32_1_1 BINDTYPE op TYPE mux IMPL auto LATENCY 0 ALLOW_PRAGMA 1}
      {MODELNAME mmult_mux_325_32_1_1 RTLNAME mmult_mux_325_32_1_1 BINDTYPE op TYPE mux IMPL auto LATENCY 0 ALLOW_PRAGMA 1}
      {MODELNAME mmult_mul_32s_32s_32_1_1 RTLNAME mmult_mul_32s_32s_32_1_1 BINDTYPE op TYPE mul IMPL auto LATENCY 0 ALLOW_PRAGMA 1}
    }
  }
  {SRCNAME mmult_Pipeline_writeC MODELNAME mmult_Pipeline_writeC RTLNAME mmult_mmult_Pipeline_writeC
    SUBMODULES {
      {MODELNAME mmult_mux_3232_32_1_1 RTLNAME mmult_mux_3232_32_1_1 BINDTYPE op TYPE mux IMPL auto LATENCY 0 ALLOW_PRAGMA 1}
    }
  }
  {SRCNAME mmult MODELNAME mmult RTLNAME mmult IS_TOP 1
    SUBMODULES {
      {MODELNAME mmult_localA_RAM_1WNR_AUTO_1R1W RTLNAME mmult_localA_RAM_1WNR_AUTO_1R1W BINDTYPE storage TYPE ram_1wnr IMPL auto LATENCY 2 ALLOW_PRAGMA 1}
      {MODELNAME mmult_gmem0_m_axi RTLNAME mmult_gmem0_m_axi BINDTYPE interface TYPE adapter IMPL m_axi}
      {MODELNAME mmult_gmem1_m_axi RTLNAME mmult_gmem1_m_axi BINDTYPE interface TYPE adapter IMPL m_axi}
      {MODELNAME mmult_gmem2_m_axi RTLNAME mmult_gmem2_m_axi BINDTYPE interface TYPE adapter IMPL m_axi}
      {MODELNAME mmult_control_s_axi RTLNAME mmult_control_s_axi BINDTYPE interface TYPE interface_s_axilite}
    }
  }
}
