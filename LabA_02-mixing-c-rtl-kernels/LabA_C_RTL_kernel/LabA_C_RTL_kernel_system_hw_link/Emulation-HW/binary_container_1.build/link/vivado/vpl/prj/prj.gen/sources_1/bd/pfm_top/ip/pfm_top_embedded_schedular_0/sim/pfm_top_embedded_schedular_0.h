#ifndef IP_PFM_TOP_EMBEDDED_SCHEDULAR_0_H_
#define IP_PFM_TOP_EMBEDDED_SCHEDULAR_0_H_

// (c) Copyright 1995-2022 Xilinx, Inc. All rights reserved.
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


#ifndef XTLM
#include "xtlm.h"
#endif
#ifndef SYSTEMC_INCLUDED
#include <systemc>
#endif

#if defined(_MSC_VER)
#define DllExport __declspec(dllexport)
#elif defined(__GNUC__)
#define DllExport __attribute__ ((visibility("default")))
#else
#define DllExport
#endif

#include "pfm_top_embedded_schedular_0_sc.h"




#ifdef XILINX_SIMULATOR
class DllExport pfm_top_embedded_schedular_0 : public pfm_top_embedded_schedular_0_sc
{
public:

  pfm_top_embedded_schedular_0(const sc_core::sc_module_name& nm);
  virtual ~pfm_top_embedded_schedular_0();

  // module pin-to-pin RTL interface

  sc_core::sc_in< sc_dt::sc_bv<128> > interrupt_cu;
  sc_core::sc_out< bool > interrupt_m2m;
  sc_core::sc_in< bool > s_axi_ctrl_user_aresetn;
  sc_core::sc_in< bool > s_axi_data_p2p_aresetn;
  sc_core::sc_in< bool > maxi_lite_mb_aresetn;
  sc_core::sc_in< bool > m_axi_data_m2m_aresetn;
  sc_core::sc_in< bool > s_axi_ctrl_user_aclk;
  sc_core::sc_in< bool > s_axi_data_p2p_aclk;
  sc_core::sc_in< bool > maxi_lite_mb_aclk;
  sc_core::sc_in< bool > m_axi_data_m2m_aclk;
  sc_core::sc_in< sc_dt::sc_bv<64> > s_axi_data_p2p_awaddr;
  sc_core::sc_in< sc_dt::sc_bv<8> > s_axi_data_p2p_awlen;
  sc_core::sc_in< sc_dt::sc_bv<3> > s_axi_data_p2p_awsize;
  sc_core::sc_in< sc_dt::sc_bv<2> > s_axi_data_p2p_awburst;
  sc_core::sc_in< bool > s_axi_data_p2p_awlock;
  sc_core::sc_in< sc_dt::sc_bv<4> > s_axi_data_p2p_awcache;
  sc_core::sc_in< sc_dt::sc_bv<3> > s_axi_data_p2p_awprot;
  sc_core::sc_in< sc_dt::sc_bv<4> > s_axi_data_p2p_awregion;
  sc_core::sc_in< sc_dt::sc_bv<4> > s_axi_data_p2p_awqos;
  sc_core::sc_in< sc_dt::sc_bv<32> > s_axi_data_p2p_awuser;
  sc_core::sc_in< bool > s_axi_data_p2p_awvalid;
  sc_core::sc_out< bool > s_axi_data_p2p_awready;
  sc_core::sc_in< sc_dt::sc_bv<32> > s_axi_data_p2p_wdata;
  sc_core::sc_in< sc_dt::sc_bv<4> > s_axi_data_p2p_wstrb;
  sc_core::sc_in< bool > s_axi_data_p2p_wlast;
  sc_core::sc_in< bool > s_axi_data_p2p_wvalid;
  sc_core::sc_out< bool > s_axi_data_p2p_wready;
  sc_core::sc_out< sc_dt::sc_bv<2> > s_axi_data_p2p_bresp;
  sc_core::sc_out< sc_dt::sc_bv<1> > s_axi_data_p2p_buser;
  sc_core::sc_out< bool > s_axi_data_p2p_bvalid;
  sc_core::sc_in< bool > s_axi_data_p2p_bready;
  sc_core::sc_in< sc_dt::sc_bv<64> > s_axi_data_p2p_araddr;
  sc_core::sc_in< sc_dt::sc_bv<8> > s_axi_data_p2p_arlen;
  sc_core::sc_in< sc_dt::sc_bv<3> > s_axi_data_p2p_arsize;
  sc_core::sc_in< sc_dt::sc_bv<2> > s_axi_data_p2p_arburst;
  sc_core::sc_in< bool > s_axi_data_p2p_arlock;
  sc_core::sc_in< sc_dt::sc_bv<4> > s_axi_data_p2p_arcache;
  sc_core::sc_in< sc_dt::sc_bv<3> > s_axi_data_p2p_arprot;
  sc_core::sc_in< sc_dt::sc_bv<4> > s_axi_data_p2p_arregion;
  sc_core::sc_in< sc_dt::sc_bv<4> > s_axi_data_p2p_arqos;
  sc_core::sc_in< sc_dt::sc_bv<32> > s_axi_data_p2p_aruser;
  sc_core::sc_in< bool > s_axi_data_p2p_arvalid;
  sc_core::sc_out< bool > s_axi_data_p2p_arready;
  sc_core::sc_out< sc_dt::sc_bv<32> > s_axi_data_p2p_rdata;
  sc_core::sc_out< sc_dt::sc_bv<2> > s_axi_data_p2p_rresp;
  sc_core::sc_out< bool > s_axi_data_p2p_rlast;
  sc_core::sc_out< bool > s_axi_data_p2p_rvalid;
  sc_core::sc_in< bool > s_axi_data_p2p_rready;
  sc_core::sc_out< sc_dt::sc_bv<64> > maxi_lite_mb_awaddr;
  sc_core::sc_out< sc_dt::sc_bv<3> > maxi_lite_mb_awprot;
  sc_core::sc_out< bool > maxi_lite_mb_awvalid;
  sc_core::sc_in< bool > maxi_lite_mb_awready;
  sc_core::sc_out< sc_dt::sc_bv<32> > maxi_lite_mb_wdata;
  sc_core::sc_out< sc_dt::sc_bv<4> > maxi_lite_mb_wstrb;
  sc_core::sc_out< bool > maxi_lite_mb_wvalid;
  sc_core::sc_in< bool > maxi_lite_mb_wready;
  sc_core::sc_in< sc_dt::sc_bv<2> > maxi_lite_mb_bresp;
  sc_core::sc_in< bool > maxi_lite_mb_bvalid;
  sc_core::sc_out< bool > maxi_lite_mb_bready;
  sc_core::sc_out< sc_dt::sc_bv<64> > maxi_lite_mb_araddr;
  sc_core::sc_out< sc_dt::sc_bv<3> > maxi_lite_mb_arprot;
  sc_core::sc_out< bool > maxi_lite_mb_arvalid;
  sc_core::sc_in< bool > maxi_lite_mb_arready;
  sc_core::sc_in< sc_dt::sc_bv<32> > maxi_lite_mb_rdata;
  sc_core::sc_in< sc_dt::sc_bv<2> > maxi_lite_mb_rresp;
  sc_core::sc_in< bool > maxi_lite_mb_rvalid;
  sc_core::sc_out< bool > maxi_lite_mb_rready;
  sc_core::sc_in< sc_dt::sc_bv<64> > s_axi_ctrl_user_awaddr;
  sc_core::sc_in< sc_dt::sc_bv<3> > s_axi_ctrl_user_awprot;
  sc_core::sc_in< bool > s_axi_ctrl_user_awvalid;
  sc_core::sc_out< bool > s_axi_ctrl_user_awready;
  sc_core::sc_in< sc_dt::sc_bv<32> > s_axi_ctrl_user_wdata;
  sc_core::sc_in< sc_dt::sc_bv<4> > s_axi_ctrl_user_wstrb;
  sc_core::sc_in< bool > s_axi_ctrl_user_wvalid;
  sc_core::sc_out< bool > s_axi_ctrl_user_wready;
  sc_core::sc_out< sc_dt::sc_bv<2> > s_axi_ctrl_user_bresp;
  sc_core::sc_out< bool > s_axi_ctrl_user_bvalid;
  sc_core::sc_in< bool > s_axi_ctrl_user_bready;
  sc_core::sc_in< sc_dt::sc_bv<64> > s_axi_ctrl_user_araddr;
  sc_core::sc_in< sc_dt::sc_bv<3> > s_axi_ctrl_user_arprot;
  sc_core::sc_in< bool > s_axi_ctrl_user_arvalid;
  sc_core::sc_out< bool > s_axi_ctrl_user_arready;
  sc_core::sc_out< sc_dt::sc_bv<32> > s_axi_ctrl_user_rdata;
  sc_core::sc_out< sc_dt::sc_bv<2> > s_axi_ctrl_user_rresp;
  sc_core::sc_out< bool > s_axi_ctrl_user_rvalid;
  sc_core::sc_in< bool > s_axi_ctrl_user_rready;

  // Dummy Signals for IP Ports


protected:

  virtual void before_end_of_elaboration();

private:

  xtlm::xaximm_pin2xtlm_t<32,64,1,1,1,1,1,1>* mp_s_axi_ctrl_user_transactor;
  sc_signal< bool > m_s_axi_ctrl_user_transactor_rst_signal;
  xtlm::xaximm_pin2xtlm_t<32,64,1,32,1,1,32,1>* mp_s_axi_data_p2p_transactor;
  sc_signal< bool > m_s_axi_data_p2p_transactor_rst_signal;
  xtlm::xaximm_xtlm2pin_t<32,64,1,1,1,1,1,1>* mp_maxi_lite_mb_transactor;
  sc_signal< bool > m_maxi_lite_mb_transactor_rst_signal;

};
#endif // XILINX_SIMULATOR




#ifdef XM_SYSTEMC
class DllExport pfm_top_embedded_schedular_0 : public pfm_top_embedded_schedular_0_sc
{
public:

  pfm_top_embedded_schedular_0(const sc_core::sc_module_name& nm);
  virtual ~pfm_top_embedded_schedular_0();

  // module pin-to-pin RTL interface

  sc_core::sc_in< sc_dt::sc_bv<128> > interrupt_cu;
  sc_core::sc_out< bool > interrupt_m2m;
  sc_core::sc_in< bool > s_axi_ctrl_user_aresetn;
  sc_core::sc_in< bool > s_axi_data_p2p_aresetn;
  sc_core::sc_in< bool > maxi_lite_mb_aresetn;
  sc_core::sc_in< bool > m_axi_data_m2m_aresetn;
  sc_core::sc_in< bool > s_axi_ctrl_user_aclk;
  sc_core::sc_in< bool > s_axi_data_p2p_aclk;
  sc_core::sc_in< bool > maxi_lite_mb_aclk;
  sc_core::sc_in< bool > m_axi_data_m2m_aclk;
  sc_core::sc_in< sc_dt::sc_bv<64> > s_axi_data_p2p_awaddr;
  sc_core::sc_in< sc_dt::sc_bv<8> > s_axi_data_p2p_awlen;
  sc_core::sc_in< sc_dt::sc_bv<3> > s_axi_data_p2p_awsize;
  sc_core::sc_in< sc_dt::sc_bv<2> > s_axi_data_p2p_awburst;
  sc_core::sc_in< bool > s_axi_data_p2p_awlock;
  sc_core::sc_in< sc_dt::sc_bv<4> > s_axi_data_p2p_awcache;
  sc_core::sc_in< sc_dt::sc_bv<3> > s_axi_data_p2p_awprot;
  sc_core::sc_in< sc_dt::sc_bv<4> > s_axi_data_p2p_awregion;
  sc_core::sc_in< sc_dt::sc_bv<4> > s_axi_data_p2p_awqos;
  sc_core::sc_in< sc_dt::sc_bv<32> > s_axi_data_p2p_awuser;
  sc_core::sc_in< bool > s_axi_data_p2p_awvalid;
  sc_core::sc_out< bool > s_axi_data_p2p_awready;
  sc_core::sc_in< sc_dt::sc_bv<32> > s_axi_data_p2p_wdata;
  sc_core::sc_in< sc_dt::sc_bv<4> > s_axi_data_p2p_wstrb;
  sc_core::sc_in< bool > s_axi_data_p2p_wlast;
  sc_core::sc_in< bool > s_axi_data_p2p_wvalid;
  sc_core::sc_out< bool > s_axi_data_p2p_wready;
  sc_core::sc_out< sc_dt::sc_bv<2> > s_axi_data_p2p_bresp;
  sc_core::sc_out< sc_dt::sc_bv<1> > s_axi_data_p2p_buser;
  sc_core::sc_out< bool > s_axi_data_p2p_bvalid;
  sc_core::sc_in< bool > s_axi_data_p2p_bready;
  sc_core::sc_in< sc_dt::sc_bv<64> > s_axi_data_p2p_araddr;
  sc_core::sc_in< sc_dt::sc_bv<8> > s_axi_data_p2p_arlen;
  sc_core::sc_in< sc_dt::sc_bv<3> > s_axi_data_p2p_arsize;
  sc_core::sc_in< sc_dt::sc_bv<2> > s_axi_data_p2p_arburst;
  sc_core::sc_in< bool > s_axi_data_p2p_arlock;
  sc_core::sc_in< sc_dt::sc_bv<4> > s_axi_data_p2p_arcache;
  sc_core::sc_in< sc_dt::sc_bv<3> > s_axi_data_p2p_arprot;
  sc_core::sc_in< sc_dt::sc_bv<4> > s_axi_data_p2p_arregion;
  sc_core::sc_in< sc_dt::sc_bv<4> > s_axi_data_p2p_arqos;
  sc_core::sc_in< sc_dt::sc_bv<32> > s_axi_data_p2p_aruser;
  sc_core::sc_in< bool > s_axi_data_p2p_arvalid;
  sc_core::sc_out< bool > s_axi_data_p2p_arready;
  sc_core::sc_out< sc_dt::sc_bv<32> > s_axi_data_p2p_rdata;
  sc_core::sc_out< sc_dt::sc_bv<2> > s_axi_data_p2p_rresp;
  sc_core::sc_out< bool > s_axi_data_p2p_rlast;
  sc_core::sc_out< bool > s_axi_data_p2p_rvalid;
  sc_core::sc_in< bool > s_axi_data_p2p_rready;
  sc_core::sc_out< sc_dt::sc_bv<64> > maxi_lite_mb_awaddr;
  sc_core::sc_out< sc_dt::sc_bv<3> > maxi_lite_mb_awprot;
  sc_core::sc_out< bool > maxi_lite_mb_awvalid;
  sc_core::sc_in< bool > maxi_lite_mb_awready;
  sc_core::sc_out< sc_dt::sc_bv<32> > maxi_lite_mb_wdata;
  sc_core::sc_out< sc_dt::sc_bv<4> > maxi_lite_mb_wstrb;
  sc_core::sc_out< bool > maxi_lite_mb_wvalid;
  sc_core::sc_in< bool > maxi_lite_mb_wready;
  sc_core::sc_in< sc_dt::sc_bv<2> > maxi_lite_mb_bresp;
  sc_core::sc_in< bool > maxi_lite_mb_bvalid;
  sc_core::sc_out< bool > maxi_lite_mb_bready;
  sc_core::sc_out< sc_dt::sc_bv<64> > maxi_lite_mb_araddr;
  sc_core::sc_out< sc_dt::sc_bv<3> > maxi_lite_mb_arprot;
  sc_core::sc_out< bool > maxi_lite_mb_arvalid;
  sc_core::sc_in< bool > maxi_lite_mb_arready;
  sc_core::sc_in< sc_dt::sc_bv<32> > maxi_lite_mb_rdata;
  sc_core::sc_in< sc_dt::sc_bv<2> > maxi_lite_mb_rresp;
  sc_core::sc_in< bool > maxi_lite_mb_rvalid;
  sc_core::sc_out< bool > maxi_lite_mb_rready;
  sc_core::sc_in< sc_dt::sc_bv<64> > s_axi_ctrl_user_awaddr;
  sc_core::sc_in< sc_dt::sc_bv<3> > s_axi_ctrl_user_awprot;
  sc_core::sc_in< bool > s_axi_ctrl_user_awvalid;
  sc_core::sc_out< bool > s_axi_ctrl_user_awready;
  sc_core::sc_in< sc_dt::sc_bv<32> > s_axi_ctrl_user_wdata;
  sc_core::sc_in< sc_dt::sc_bv<4> > s_axi_ctrl_user_wstrb;
  sc_core::sc_in< bool > s_axi_ctrl_user_wvalid;
  sc_core::sc_out< bool > s_axi_ctrl_user_wready;
  sc_core::sc_out< sc_dt::sc_bv<2> > s_axi_ctrl_user_bresp;
  sc_core::sc_out< bool > s_axi_ctrl_user_bvalid;
  sc_core::sc_in< bool > s_axi_ctrl_user_bready;
  sc_core::sc_in< sc_dt::sc_bv<64> > s_axi_ctrl_user_araddr;
  sc_core::sc_in< sc_dt::sc_bv<3> > s_axi_ctrl_user_arprot;
  sc_core::sc_in< bool > s_axi_ctrl_user_arvalid;
  sc_core::sc_out< bool > s_axi_ctrl_user_arready;
  sc_core::sc_out< sc_dt::sc_bv<32> > s_axi_ctrl_user_rdata;
  sc_core::sc_out< sc_dt::sc_bv<2> > s_axi_ctrl_user_rresp;
  sc_core::sc_out< bool > s_axi_ctrl_user_rvalid;
  sc_core::sc_in< bool > s_axi_ctrl_user_rready;

  // Dummy Signals for IP Ports


protected:

  virtual void before_end_of_elaboration();

private:

  xtlm::xaximm_pin2xtlm_t<32,64,1,1,1,1,1,1>* mp_s_axi_ctrl_user_transactor;
  sc_signal< bool > m_s_axi_ctrl_user_transactor_rst_signal;
  xtlm::xaximm_pin2xtlm_t<32,64,1,32,1,1,32,1>* mp_s_axi_data_p2p_transactor;
  sc_signal< bool > m_s_axi_data_p2p_transactor_rst_signal;
  xtlm::xaximm_xtlm2pin_t<32,64,1,1,1,1,1,1>* mp_maxi_lite_mb_transactor;
  sc_signal< bool > m_maxi_lite_mb_transactor_rst_signal;

};
#endif // XM_SYSTEMC




#ifdef RIVIERA
class DllExport pfm_top_embedded_schedular_0 : public pfm_top_embedded_schedular_0_sc
{
public:

  pfm_top_embedded_schedular_0(const sc_core::sc_module_name& nm);
  virtual ~pfm_top_embedded_schedular_0();

  // module pin-to-pin RTL interface

  sc_core::sc_in< sc_dt::sc_bv<128> > interrupt_cu;
  sc_core::sc_out< bool > interrupt_m2m;
  sc_core::sc_in< bool > s_axi_ctrl_user_aresetn;
  sc_core::sc_in< bool > s_axi_data_p2p_aresetn;
  sc_core::sc_in< bool > maxi_lite_mb_aresetn;
  sc_core::sc_in< bool > m_axi_data_m2m_aresetn;
  sc_core::sc_in< bool > s_axi_ctrl_user_aclk;
  sc_core::sc_in< bool > s_axi_data_p2p_aclk;
  sc_core::sc_in< bool > maxi_lite_mb_aclk;
  sc_core::sc_in< bool > m_axi_data_m2m_aclk;
  sc_core::sc_in< sc_dt::sc_bv<64> > s_axi_data_p2p_awaddr;
  sc_core::sc_in< sc_dt::sc_bv<8> > s_axi_data_p2p_awlen;
  sc_core::sc_in< sc_dt::sc_bv<3> > s_axi_data_p2p_awsize;
  sc_core::sc_in< sc_dt::sc_bv<2> > s_axi_data_p2p_awburst;
  sc_core::sc_in< bool > s_axi_data_p2p_awlock;
  sc_core::sc_in< sc_dt::sc_bv<4> > s_axi_data_p2p_awcache;
  sc_core::sc_in< sc_dt::sc_bv<3> > s_axi_data_p2p_awprot;
  sc_core::sc_in< sc_dt::sc_bv<4> > s_axi_data_p2p_awregion;
  sc_core::sc_in< sc_dt::sc_bv<4> > s_axi_data_p2p_awqos;
  sc_core::sc_in< sc_dt::sc_bv<32> > s_axi_data_p2p_awuser;
  sc_core::sc_in< bool > s_axi_data_p2p_awvalid;
  sc_core::sc_out< bool > s_axi_data_p2p_awready;
  sc_core::sc_in< sc_dt::sc_bv<32> > s_axi_data_p2p_wdata;
  sc_core::sc_in< sc_dt::sc_bv<4> > s_axi_data_p2p_wstrb;
  sc_core::sc_in< bool > s_axi_data_p2p_wlast;
  sc_core::sc_in< bool > s_axi_data_p2p_wvalid;
  sc_core::sc_out< bool > s_axi_data_p2p_wready;
  sc_core::sc_out< sc_dt::sc_bv<2> > s_axi_data_p2p_bresp;
  sc_core::sc_out< sc_dt::sc_bv<1> > s_axi_data_p2p_buser;
  sc_core::sc_out< bool > s_axi_data_p2p_bvalid;
  sc_core::sc_in< bool > s_axi_data_p2p_bready;
  sc_core::sc_in< sc_dt::sc_bv<64> > s_axi_data_p2p_araddr;
  sc_core::sc_in< sc_dt::sc_bv<8> > s_axi_data_p2p_arlen;
  sc_core::sc_in< sc_dt::sc_bv<3> > s_axi_data_p2p_arsize;
  sc_core::sc_in< sc_dt::sc_bv<2> > s_axi_data_p2p_arburst;
  sc_core::sc_in< bool > s_axi_data_p2p_arlock;
  sc_core::sc_in< sc_dt::sc_bv<4> > s_axi_data_p2p_arcache;
  sc_core::sc_in< sc_dt::sc_bv<3> > s_axi_data_p2p_arprot;
  sc_core::sc_in< sc_dt::sc_bv<4> > s_axi_data_p2p_arregion;
  sc_core::sc_in< sc_dt::sc_bv<4> > s_axi_data_p2p_arqos;
  sc_core::sc_in< sc_dt::sc_bv<32> > s_axi_data_p2p_aruser;
  sc_core::sc_in< bool > s_axi_data_p2p_arvalid;
  sc_core::sc_out< bool > s_axi_data_p2p_arready;
  sc_core::sc_out< sc_dt::sc_bv<32> > s_axi_data_p2p_rdata;
  sc_core::sc_out< sc_dt::sc_bv<2> > s_axi_data_p2p_rresp;
  sc_core::sc_out< bool > s_axi_data_p2p_rlast;
  sc_core::sc_out< bool > s_axi_data_p2p_rvalid;
  sc_core::sc_in< bool > s_axi_data_p2p_rready;
  sc_core::sc_out< sc_dt::sc_bv<64> > maxi_lite_mb_awaddr;
  sc_core::sc_out< sc_dt::sc_bv<3> > maxi_lite_mb_awprot;
  sc_core::sc_out< bool > maxi_lite_mb_awvalid;
  sc_core::sc_in< bool > maxi_lite_mb_awready;
  sc_core::sc_out< sc_dt::sc_bv<32> > maxi_lite_mb_wdata;
  sc_core::sc_out< sc_dt::sc_bv<4> > maxi_lite_mb_wstrb;
  sc_core::sc_out< bool > maxi_lite_mb_wvalid;
  sc_core::sc_in< bool > maxi_lite_mb_wready;
  sc_core::sc_in< sc_dt::sc_bv<2> > maxi_lite_mb_bresp;
  sc_core::sc_in< bool > maxi_lite_mb_bvalid;
  sc_core::sc_out< bool > maxi_lite_mb_bready;
  sc_core::sc_out< sc_dt::sc_bv<64> > maxi_lite_mb_araddr;
  sc_core::sc_out< sc_dt::sc_bv<3> > maxi_lite_mb_arprot;
  sc_core::sc_out< bool > maxi_lite_mb_arvalid;
  sc_core::sc_in< bool > maxi_lite_mb_arready;
  sc_core::sc_in< sc_dt::sc_bv<32> > maxi_lite_mb_rdata;
  sc_core::sc_in< sc_dt::sc_bv<2> > maxi_lite_mb_rresp;
  sc_core::sc_in< bool > maxi_lite_mb_rvalid;
  sc_core::sc_out< bool > maxi_lite_mb_rready;
  sc_core::sc_in< sc_dt::sc_bv<64> > s_axi_ctrl_user_awaddr;
  sc_core::sc_in< sc_dt::sc_bv<3> > s_axi_ctrl_user_awprot;
  sc_core::sc_in< bool > s_axi_ctrl_user_awvalid;
  sc_core::sc_out< bool > s_axi_ctrl_user_awready;
  sc_core::sc_in< sc_dt::sc_bv<32> > s_axi_ctrl_user_wdata;
  sc_core::sc_in< sc_dt::sc_bv<4> > s_axi_ctrl_user_wstrb;
  sc_core::sc_in< bool > s_axi_ctrl_user_wvalid;
  sc_core::sc_out< bool > s_axi_ctrl_user_wready;
  sc_core::sc_out< sc_dt::sc_bv<2> > s_axi_ctrl_user_bresp;
  sc_core::sc_out< bool > s_axi_ctrl_user_bvalid;
  sc_core::sc_in< bool > s_axi_ctrl_user_bready;
  sc_core::sc_in< sc_dt::sc_bv<64> > s_axi_ctrl_user_araddr;
  sc_core::sc_in< sc_dt::sc_bv<3> > s_axi_ctrl_user_arprot;
  sc_core::sc_in< bool > s_axi_ctrl_user_arvalid;
  sc_core::sc_out< bool > s_axi_ctrl_user_arready;
  sc_core::sc_out< sc_dt::sc_bv<32> > s_axi_ctrl_user_rdata;
  sc_core::sc_out< sc_dt::sc_bv<2> > s_axi_ctrl_user_rresp;
  sc_core::sc_out< bool > s_axi_ctrl_user_rvalid;
  sc_core::sc_in< bool > s_axi_ctrl_user_rready;

  // Dummy Signals for IP Ports


protected:

  virtual void before_end_of_elaboration();

private:

  xtlm::xaximm_pin2xtlm_t<32,64,1,1,1,1,1,1>* mp_s_axi_ctrl_user_transactor;
  sc_signal< bool > m_s_axi_ctrl_user_transactor_rst_signal;
  xtlm::xaximm_pin2xtlm_t<32,64,1,32,1,1,32,1>* mp_s_axi_data_p2p_transactor;
  sc_signal< bool > m_s_axi_data_p2p_transactor_rst_signal;
  xtlm::xaximm_xtlm2pin_t<32,64,1,1,1,1,1,1>* mp_maxi_lite_mb_transactor;
  sc_signal< bool > m_maxi_lite_mb_transactor_rst_signal;

};
#endif // RIVIERA




#ifdef VCSSYSTEMC
#include "utils/xtlm_aximm_initiator_stub.h"

#include "utils/xtlm_aximm_target_stub.h"

class DllExport pfm_top_embedded_schedular_0 : public pfm_top_embedded_schedular_0_sc
{
public:

  pfm_top_embedded_schedular_0(const sc_core::sc_module_name& nm);
  virtual ~pfm_top_embedded_schedular_0();

  // module pin-to-pin RTL interface

  sc_core::sc_in< sc_dt::sc_bv<128> > interrupt_cu;
  sc_core::sc_out< bool > interrupt_m2m;
  sc_core::sc_in< bool > s_axi_ctrl_user_aresetn;
  sc_core::sc_in< bool > s_axi_data_p2p_aresetn;
  sc_core::sc_in< bool > maxi_lite_mb_aresetn;
  sc_core::sc_in< bool > m_axi_data_m2m_aresetn;
  sc_core::sc_in< bool > s_axi_ctrl_user_aclk;
  sc_core::sc_in< bool > s_axi_data_p2p_aclk;
  sc_core::sc_in< bool > maxi_lite_mb_aclk;
  sc_core::sc_in< bool > m_axi_data_m2m_aclk;
  sc_core::sc_in< sc_dt::sc_bv<64> > s_axi_data_p2p_awaddr;
  sc_core::sc_in< sc_dt::sc_bv<8> > s_axi_data_p2p_awlen;
  sc_core::sc_in< sc_dt::sc_bv<3> > s_axi_data_p2p_awsize;
  sc_core::sc_in< sc_dt::sc_bv<2> > s_axi_data_p2p_awburst;
  sc_core::sc_in< bool > s_axi_data_p2p_awlock;
  sc_core::sc_in< sc_dt::sc_bv<4> > s_axi_data_p2p_awcache;
  sc_core::sc_in< sc_dt::sc_bv<3> > s_axi_data_p2p_awprot;
  sc_core::sc_in< sc_dt::sc_bv<4> > s_axi_data_p2p_awregion;
  sc_core::sc_in< sc_dt::sc_bv<4> > s_axi_data_p2p_awqos;
  sc_core::sc_in< sc_dt::sc_bv<32> > s_axi_data_p2p_awuser;
  sc_core::sc_in< bool > s_axi_data_p2p_awvalid;
  sc_core::sc_out< bool > s_axi_data_p2p_awready;
  sc_core::sc_in< sc_dt::sc_bv<32> > s_axi_data_p2p_wdata;
  sc_core::sc_in< sc_dt::sc_bv<4> > s_axi_data_p2p_wstrb;
  sc_core::sc_in< bool > s_axi_data_p2p_wlast;
  sc_core::sc_in< bool > s_axi_data_p2p_wvalid;
  sc_core::sc_out< bool > s_axi_data_p2p_wready;
  sc_core::sc_out< sc_dt::sc_bv<2> > s_axi_data_p2p_bresp;
  sc_core::sc_out< sc_dt::sc_bv<1> > s_axi_data_p2p_buser;
  sc_core::sc_out< bool > s_axi_data_p2p_bvalid;
  sc_core::sc_in< bool > s_axi_data_p2p_bready;
  sc_core::sc_in< sc_dt::sc_bv<64> > s_axi_data_p2p_araddr;
  sc_core::sc_in< sc_dt::sc_bv<8> > s_axi_data_p2p_arlen;
  sc_core::sc_in< sc_dt::sc_bv<3> > s_axi_data_p2p_arsize;
  sc_core::sc_in< sc_dt::sc_bv<2> > s_axi_data_p2p_arburst;
  sc_core::sc_in< bool > s_axi_data_p2p_arlock;
  sc_core::sc_in< sc_dt::sc_bv<4> > s_axi_data_p2p_arcache;
  sc_core::sc_in< sc_dt::sc_bv<3> > s_axi_data_p2p_arprot;
  sc_core::sc_in< sc_dt::sc_bv<4> > s_axi_data_p2p_arregion;
  sc_core::sc_in< sc_dt::sc_bv<4> > s_axi_data_p2p_arqos;
  sc_core::sc_in< sc_dt::sc_bv<32> > s_axi_data_p2p_aruser;
  sc_core::sc_in< bool > s_axi_data_p2p_arvalid;
  sc_core::sc_out< bool > s_axi_data_p2p_arready;
  sc_core::sc_out< sc_dt::sc_bv<32> > s_axi_data_p2p_rdata;
  sc_core::sc_out< sc_dt::sc_bv<2> > s_axi_data_p2p_rresp;
  sc_core::sc_out< bool > s_axi_data_p2p_rlast;
  sc_core::sc_out< bool > s_axi_data_p2p_rvalid;
  sc_core::sc_in< bool > s_axi_data_p2p_rready;
  sc_core::sc_out< sc_dt::sc_bv<64> > maxi_lite_mb_awaddr;
  sc_core::sc_out< sc_dt::sc_bv<3> > maxi_lite_mb_awprot;
  sc_core::sc_out< bool > maxi_lite_mb_awvalid;
  sc_core::sc_in< bool > maxi_lite_mb_awready;
  sc_core::sc_out< sc_dt::sc_bv<32> > maxi_lite_mb_wdata;
  sc_core::sc_out< sc_dt::sc_bv<4> > maxi_lite_mb_wstrb;
  sc_core::sc_out< bool > maxi_lite_mb_wvalid;
  sc_core::sc_in< bool > maxi_lite_mb_wready;
  sc_core::sc_in< sc_dt::sc_bv<2> > maxi_lite_mb_bresp;
  sc_core::sc_in< bool > maxi_lite_mb_bvalid;
  sc_core::sc_out< bool > maxi_lite_mb_bready;
  sc_core::sc_out< sc_dt::sc_bv<64> > maxi_lite_mb_araddr;
  sc_core::sc_out< sc_dt::sc_bv<3> > maxi_lite_mb_arprot;
  sc_core::sc_out< bool > maxi_lite_mb_arvalid;
  sc_core::sc_in< bool > maxi_lite_mb_arready;
  sc_core::sc_in< sc_dt::sc_bv<32> > maxi_lite_mb_rdata;
  sc_core::sc_in< sc_dt::sc_bv<2> > maxi_lite_mb_rresp;
  sc_core::sc_in< bool > maxi_lite_mb_rvalid;
  sc_core::sc_out< bool > maxi_lite_mb_rready;
  sc_core::sc_in< sc_dt::sc_bv<64> > s_axi_ctrl_user_awaddr;
  sc_core::sc_in< sc_dt::sc_bv<3> > s_axi_ctrl_user_awprot;
  sc_core::sc_in< bool > s_axi_ctrl_user_awvalid;
  sc_core::sc_out< bool > s_axi_ctrl_user_awready;
  sc_core::sc_in< sc_dt::sc_bv<32> > s_axi_ctrl_user_wdata;
  sc_core::sc_in< sc_dt::sc_bv<4> > s_axi_ctrl_user_wstrb;
  sc_core::sc_in< bool > s_axi_ctrl_user_wvalid;
  sc_core::sc_out< bool > s_axi_ctrl_user_wready;
  sc_core::sc_out< sc_dt::sc_bv<2> > s_axi_ctrl_user_bresp;
  sc_core::sc_out< bool > s_axi_ctrl_user_bvalid;
  sc_core::sc_in< bool > s_axi_ctrl_user_bready;
  sc_core::sc_in< sc_dt::sc_bv<64> > s_axi_ctrl_user_araddr;
  sc_core::sc_in< sc_dt::sc_bv<3> > s_axi_ctrl_user_arprot;
  sc_core::sc_in< bool > s_axi_ctrl_user_arvalid;
  sc_core::sc_out< bool > s_axi_ctrl_user_arready;
  sc_core::sc_out< sc_dt::sc_bv<32> > s_axi_ctrl_user_rdata;
  sc_core::sc_out< sc_dt::sc_bv<2> > s_axi_ctrl_user_rresp;
  sc_core::sc_out< bool > s_axi_ctrl_user_rvalid;
  sc_core::sc_in< bool > s_axi_ctrl_user_rready;

  // Dummy Signals for IP Ports


protected:

  virtual void before_end_of_elaboration();

private:

  xtlm::xaximm_pin2xtlm_t<32,64,1,1,1,1,1,1>* mp_s_axi_ctrl_user_transactor;
  sc_signal< bool > m_s_axi_ctrl_user_transactor_rst_signal;
  xtlm::xaximm_pin2xtlm_t<32,64,1,32,1,1,32,1>* mp_s_axi_data_p2p_transactor;
  sc_signal< bool > m_s_axi_data_p2p_transactor_rst_signal;
  xtlm::xaximm_xtlm2pin_t<32,64,1,1,1,1,1,1>* mp_maxi_lite_mb_transactor;
  sc_signal< bool > m_maxi_lite_mb_transactor_rst_signal;

  // Transactor stubs
  xtlm::xtlm_aximm_initiator_stub * maxi_lite_mb_transactor_initiator_rd_socket_stub;
  xtlm::xtlm_aximm_initiator_stub * maxi_lite_mb_transactor_initiator_wr_socket_stub;
  xtlm::xtlm_aximm_target_stub * s_axi_ctrl_user_transactor_target_rd_socket_stub;
  xtlm::xtlm_aximm_target_stub * s_axi_ctrl_user_transactor_target_wr_socket_stub;
  xtlm::xtlm_aximm_target_stub * s_axi_data_p2p_transactor_target_rd_socket_stub;
  xtlm::xtlm_aximm_target_stub * s_axi_data_p2p_transactor_target_wr_socket_stub;

  // Socket stubs

};
#endif // VCSSYSTEMC




#ifdef MTI_SYSTEMC
#include "utils/xtlm_aximm_initiator_stub.h"

#include "utils/xtlm_aximm_target_stub.h"

class DllExport pfm_top_embedded_schedular_0 : public pfm_top_embedded_schedular_0_sc
{
public:

  pfm_top_embedded_schedular_0(const sc_core::sc_module_name& nm);
  virtual ~pfm_top_embedded_schedular_0();

  // module pin-to-pin RTL interface

  sc_core::sc_in< sc_dt::sc_bv<128> > interrupt_cu;
  sc_core::sc_out< bool > interrupt_m2m;
  sc_core::sc_in< bool > s_axi_ctrl_user_aresetn;
  sc_core::sc_in< bool > s_axi_data_p2p_aresetn;
  sc_core::sc_in< bool > maxi_lite_mb_aresetn;
  sc_core::sc_in< bool > m_axi_data_m2m_aresetn;
  sc_core::sc_in< bool > s_axi_ctrl_user_aclk;
  sc_core::sc_in< bool > s_axi_data_p2p_aclk;
  sc_core::sc_in< bool > maxi_lite_mb_aclk;
  sc_core::sc_in< bool > m_axi_data_m2m_aclk;
  sc_core::sc_in< sc_dt::sc_bv<64> > s_axi_data_p2p_awaddr;
  sc_core::sc_in< sc_dt::sc_bv<8> > s_axi_data_p2p_awlen;
  sc_core::sc_in< sc_dt::sc_bv<3> > s_axi_data_p2p_awsize;
  sc_core::sc_in< sc_dt::sc_bv<2> > s_axi_data_p2p_awburst;
  sc_core::sc_in< bool > s_axi_data_p2p_awlock;
  sc_core::sc_in< sc_dt::sc_bv<4> > s_axi_data_p2p_awcache;
  sc_core::sc_in< sc_dt::sc_bv<3> > s_axi_data_p2p_awprot;
  sc_core::sc_in< sc_dt::sc_bv<4> > s_axi_data_p2p_awregion;
  sc_core::sc_in< sc_dt::sc_bv<4> > s_axi_data_p2p_awqos;
  sc_core::sc_in< sc_dt::sc_bv<32> > s_axi_data_p2p_awuser;
  sc_core::sc_in< bool > s_axi_data_p2p_awvalid;
  sc_core::sc_out< bool > s_axi_data_p2p_awready;
  sc_core::sc_in< sc_dt::sc_bv<32> > s_axi_data_p2p_wdata;
  sc_core::sc_in< sc_dt::sc_bv<4> > s_axi_data_p2p_wstrb;
  sc_core::sc_in< bool > s_axi_data_p2p_wlast;
  sc_core::sc_in< bool > s_axi_data_p2p_wvalid;
  sc_core::sc_out< bool > s_axi_data_p2p_wready;
  sc_core::sc_out< sc_dt::sc_bv<2> > s_axi_data_p2p_bresp;
  sc_core::sc_out< sc_dt::sc_bv<1> > s_axi_data_p2p_buser;
  sc_core::sc_out< bool > s_axi_data_p2p_bvalid;
  sc_core::sc_in< bool > s_axi_data_p2p_bready;
  sc_core::sc_in< sc_dt::sc_bv<64> > s_axi_data_p2p_araddr;
  sc_core::sc_in< sc_dt::sc_bv<8> > s_axi_data_p2p_arlen;
  sc_core::sc_in< sc_dt::sc_bv<3> > s_axi_data_p2p_arsize;
  sc_core::sc_in< sc_dt::sc_bv<2> > s_axi_data_p2p_arburst;
  sc_core::sc_in< bool > s_axi_data_p2p_arlock;
  sc_core::sc_in< sc_dt::sc_bv<4> > s_axi_data_p2p_arcache;
  sc_core::sc_in< sc_dt::sc_bv<3> > s_axi_data_p2p_arprot;
  sc_core::sc_in< sc_dt::sc_bv<4> > s_axi_data_p2p_arregion;
  sc_core::sc_in< sc_dt::sc_bv<4> > s_axi_data_p2p_arqos;
  sc_core::sc_in< sc_dt::sc_bv<32> > s_axi_data_p2p_aruser;
  sc_core::sc_in< bool > s_axi_data_p2p_arvalid;
  sc_core::sc_out< bool > s_axi_data_p2p_arready;
  sc_core::sc_out< sc_dt::sc_bv<32> > s_axi_data_p2p_rdata;
  sc_core::sc_out< sc_dt::sc_bv<2> > s_axi_data_p2p_rresp;
  sc_core::sc_out< bool > s_axi_data_p2p_rlast;
  sc_core::sc_out< bool > s_axi_data_p2p_rvalid;
  sc_core::sc_in< bool > s_axi_data_p2p_rready;
  sc_core::sc_out< sc_dt::sc_bv<64> > maxi_lite_mb_awaddr;
  sc_core::sc_out< sc_dt::sc_bv<3> > maxi_lite_mb_awprot;
  sc_core::sc_out< bool > maxi_lite_mb_awvalid;
  sc_core::sc_in< bool > maxi_lite_mb_awready;
  sc_core::sc_out< sc_dt::sc_bv<32> > maxi_lite_mb_wdata;
  sc_core::sc_out< sc_dt::sc_bv<4> > maxi_lite_mb_wstrb;
  sc_core::sc_out< bool > maxi_lite_mb_wvalid;
  sc_core::sc_in< bool > maxi_lite_mb_wready;
  sc_core::sc_in< sc_dt::sc_bv<2> > maxi_lite_mb_bresp;
  sc_core::sc_in< bool > maxi_lite_mb_bvalid;
  sc_core::sc_out< bool > maxi_lite_mb_bready;
  sc_core::sc_out< sc_dt::sc_bv<64> > maxi_lite_mb_araddr;
  sc_core::sc_out< sc_dt::sc_bv<3> > maxi_lite_mb_arprot;
  sc_core::sc_out< bool > maxi_lite_mb_arvalid;
  sc_core::sc_in< bool > maxi_lite_mb_arready;
  sc_core::sc_in< sc_dt::sc_bv<32> > maxi_lite_mb_rdata;
  sc_core::sc_in< sc_dt::sc_bv<2> > maxi_lite_mb_rresp;
  sc_core::sc_in< bool > maxi_lite_mb_rvalid;
  sc_core::sc_out< bool > maxi_lite_mb_rready;
  sc_core::sc_in< sc_dt::sc_bv<64> > s_axi_ctrl_user_awaddr;
  sc_core::sc_in< sc_dt::sc_bv<3> > s_axi_ctrl_user_awprot;
  sc_core::sc_in< bool > s_axi_ctrl_user_awvalid;
  sc_core::sc_out< bool > s_axi_ctrl_user_awready;
  sc_core::sc_in< sc_dt::sc_bv<32> > s_axi_ctrl_user_wdata;
  sc_core::sc_in< sc_dt::sc_bv<4> > s_axi_ctrl_user_wstrb;
  sc_core::sc_in< bool > s_axi_ctrl_user_wvalid;
  sc_core::sc_out< bool > s_axi_ctrl_user_wready;
  sc_core::sc_out< sc_dt::sc_bv<2> > s_axi_ctrl_user_bresp;
  sc_core::sc_out< bool > s_axi_ctrl_user_bvalid;
  sc_core::sc_in< bool > s_axi_ctrl_user_bready;
  sc_core::sc_in< sc_dt::sc_bv<64> > s_axi_ctrl_user_araddr;
  sc_core::sc_in< sc_dt::sc_bv<3> > s_axi_ctrl_user_arprot;
  sc_core::sc_in< bool > s_axi_ctrl_user_arvalid;
  sc_core::sc_out< bool > s_axi_ctrl_user_arready;
  sc_core::sc_out< sc_dt::sc_bv<32> > s_axi_ctrl_user_rdata;
  sc_core::sc_out< sc_dt::sc_bv<2> > s_axi_ctrl_user_rresp;
  sc_core::sc_out< bool > s_axi_ctrl_user_rvalid;
  sc_core::sc_in< bool > s_axi_ctrl_user_rready;

  // Dummy Signals for IP Ports


protected:

  virtual void before_end_of_elaboration();

private:

  xtlm::xaximm_pin2xtlm_t<32,64,1,1,1,1,1,1>* mp_s_axi_ctrl_user_transactor;
  sc_signal< bool > m_s_axi_ctrl_user_transactor_rst_signal;
  xtlm::xaximm_pin2xtlm_t<32,64,1,32,1,1,32,1>* mp_s_axi_data_p2p_transactor;
  sc_signal< bool > m_s_axi_data_p2p_transactor_rst_signal;
  xtlm::xaximm_xtlm2pin_t<32,64,1,1,1,1,1,1>* mp_maxi_lite_mb_transactor;
  sc_signal< bool > m_maxi_lite_mb_transactor_rst_signal;

  // Transactor stubs
  xtlm::xtlm_aximm_initiator_stub * maxi_lite_mb_transactor_initiator_rd_socket_stub;
  xtlm::xtlm_aximm_initiator_stub * maxi_lite_mb_transactor_initiator_wr_socket_stub;
  xtlm::xtlm_aximm_target_stub * s_axi_ctrl_user_transactor_target_rd_socket_stub;
  xtlm::xtlm_aximm_target_stub * s_axi_ctrl_user_transactor_target_wr_socket_stub;
  xtlm::xtlm_aximm_target_stub * s_axi_data_p2p_transactor_target_rd_socket_stub;
  xtlm::xtlm_aximm_target_stub * s_axi_data_p2p_transactor_target_wr_socket_stub;

  // Socket stubs

};
#endif // MTI_SYSTEMC
#endif // IP_PFM_TOP_EMBEDDED_SCHEDULAR_0_H_