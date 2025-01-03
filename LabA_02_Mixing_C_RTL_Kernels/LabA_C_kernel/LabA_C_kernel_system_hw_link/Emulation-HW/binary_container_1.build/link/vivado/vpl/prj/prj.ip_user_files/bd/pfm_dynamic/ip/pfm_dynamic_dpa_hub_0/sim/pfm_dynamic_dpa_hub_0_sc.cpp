// (c) Copyright 1995-2024 Xilinx, Inc. All rights reserved.
// 
// This file contains confidential and proprietary information
// of Xilinx, Inc. and is protected under U.S. and
// international copyright and other intellectual property
// laws.
// 
// DISCLAIMER
// This disclaimer is not a license and does not grant any
// rights to the materials distributed herewith. Except as
// otherwise provided in a valid license issued to you by
// Xilinx, and to the maximum extent permitted by applicable
// law: (1) THESE MATERIALS ARE MADE AVAILABLE "AS IS" AND
// WITH ALL FAULTS, AND XILINX HEREBY DISCLAIMS ALL WARRANTIES
// AND CONDITIONS, EXPRESS, IMPLIED, OR STATUTORY, INCLUDING
// BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY, NON-
// INFRINGEMENT, OR FITNESS FOR ANY PARTICULAR PURPOSE; and
// (2) Xilinx shall not be liable (whether in contract or tort,
// including negligence, or under any other theory of
// liability) for any loss or damage of any kind or nature
// related to, arising under or in connection with these
// materials, including for any direct, or any indirect,
// special, incidental, or consequential loss or damage
// (including loss of data, profits, goodwill, or any type of
// loss or damage suffered as a result of any action brought
// by a third party) even if such damage or loss was
// reasonably foreseeable or Xilinx had been advised of the
// possibility of the same.
// 
// CRITICAL APPLICATIONS
// Xilinx products are not designed or intended to be fail-
// safe, or for use in any application requiring fail-safe
// performance, such as life-support or safety devices or
// systems, Class III medical devices, nuclear facilities,
// applications related to the deployment of airbags, or any
// other applications that could lead to death, personal
// injury, or severe property or environmental damage
// (individually and collectively, "Critical
// Applications"). Customer assumes the sole risk and
// liability of any use of Xilinx products in Critical
// Applications, subject only to applicable laws and
// regulations governing limitations on product liability.
// 
// THIS COPYRIGHT NOTICE AND DISCLAIMER MUST BE RETAINED AS
// PART OF THIS FILE AT ALL TIMES.
// 
// DO NOT MODIFY THIS FILE.


#include "pfm_dynamic_dpa_hub_0_sc.h"

#include "emulation_profiler_core.h"

#include <map>
#include <string>

pfm_dynamic_dpa_hub_0_sc::pfm_dynamic_dpa_hub_0_sc(const sc_core::sc_module_name& nm) : sc_core::sc_module(nm), mp_impl(NULL)
{
  // configure connectivity manager
  xsc::utils::xsc_sim_manager::addInstance("pfm_dynamic_dpa_hub_0", this);

  // initialize module
    xsc::common_cpp::properties model_param_props;
    model_param_props.addBool("USE_PASSTHROUGH", "false");
    model_param_props.addBool("EMULATION", "false");
    model_param_props.addLong("NUM_TRACE_PORTS", "5");
    model_param_props.addLong("EXT_MON_RST", "1");
    model_param_props.addLong("EXT_TRACE_RST", "1");
    model_param_props.addLong("S_AXIMM_ID_WIDTH", "0");
    model_param_props.addLong("S_AXIMM_DATA_WIDTH", "64");
    model_param_props.addLong("S_AXIMM_ADDR_WIDTH", "32");
    model_param_props.addLong("S_AXIMM_ADDR_RANGE", "8589934592");
    model_param_props.addString("TRACE_OFFLOADING", "PCI");
    model_param_props.addString("COMPONENT_NAME", "pfm_dynamic_dpa_hub_0");

  mp_impl = new emulation_profiler_core("inst", model_param_props);

  // initialize AXI sockets
  s_aximm_rd_socket = mp_impl->s_aximm_rd_socket;
  s_aximm_wr_socket = mp_impl->s_aximm_wr_socket;
  axilite_rd_socket = mp_impl->axilite_rd_socket;
  axilite_wr_socket = mp_impl->axilite_wr_socket;
  s_axihub_rd_socket = mp_impl->s_axihub_rd_socket;
  s_axihub_wr_socket = mp_impl->s_axihub_wr_socket;
  trace_socket0 = mp_impl->trace_socket0;
  trace_socket1 = mp_impl->trace_socket1;
  trace_socket2 = mp_impl->trace_socket2;
  trace_socket3 = mp_impl->trace_socket3;
  trace_socket4 = mp_impl->trace_socket4;
}

pfm_dynamic_dpa_hub_0_sc::~pfm_dynamic_dpa_hub_0_sc()
{
  xsc::utils::xsc_sim_manager::clean();

  delete mp_impl;
}

