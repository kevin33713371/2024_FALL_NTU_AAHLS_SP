//File Automatically generated by SystemC Netlister Time
#include "pfm_top_sci.h"
pfm_top_sci::pfm_top_sci(const sc_module_name& module_name) : xsc::utils::xsc_sim_conn_base(module_name) 
{
	//Exported sockets Instantiation
	//Add TLM Parameters
	xsc::utils::xsc_sim_manager::addInstanceConnParameters("pfm_top_axi_vip_0_0","M_AXI_TLM_MODE","pfm_top_sim_address_0_0","S_AXIMM_TLM_MODE",1);
	xsc::utils::xsc_sim_manager::addInstanceConnParameters("pfm_top_axi_vip_0_0","M_AXI_TLM_MODE","pfm_top_sim_address_0_0","S_AXIMM_TLM_MODE",1);
	xsc::utils::xsc_sim_manager::addInstanceConnParameters("pfm_top_sim_qdma_0_0","M_AXIMM_TLM_MODE","pfm_top_smartconnect_0_0","S00_AXI_tlm_MODE",1);
	xsc::utils::xsc_sim_manager::addInstanceConnParameters("pfm_top_sim_qdma_0_0","M_AXIMM_TLM_MODE","pfm_top_smartconnect_0_0","S00_AXI_tlm_MODE",1);
	xsc::utils::xsc_sim_manager::addInstanceConnParameters("pfm_top_smartconnect_0_0","M00_AXI_tlm_MODE","pfm_top_axi_vip_0_0","S_AXI_TLM_MODE",1);
	xsc::utils::xsc_sim_manager::addInstanceConnParameters("pfm_top_smartconnect_0_0","M00_AXI_tlm_MODE","pfm_top_axi_vip_0_0","S_AXI_TLM_MODE",1);
	xsc::utils::xsc_sim_manager::addInstanceConnParameters("pfm_top_smartconnect_0_0","M01_AXI_tlm_MODE","pfm_top_embedded_schedular_0","s_axi_data_p2p_TLM_MODE",1);
	xsc::utils::xsc_sim_manager::addInstanceConnParameters("pfm_top_smartconnect_0_0","M01_AXI_tlm_MODE","pfm_top_embedded_schedular_0","s_axi_data_p2p_TLM_MODE",1);
	xsc::utils::xsc_sim_manager::addInstanceConnParameters("pfm_dynamic_sci","BLP_M_AXI_DATA_C2H_00_tlm_MODE","pfm_top_sim_qdma_0_0","S_AXIMM_TLM_MODE",1);
	xsc::utils::xsc_sim_manager::addInstanceConnParameters("pfm_dynamic_sci","BLP_M_AXI_DATA_C2H_00_tlm_MODE","pfm_top_sim_qdma_0_0","S_AXIMM_TLM_MODE",1);
	xsc::utils::xsc_sim_manager::addInstanceConnParameters("pfm_top_sim_address_0_0","M_AXIMM_TLM_MODE","pfm_dynamic_sci","BLP_S_AXI_DATA_H2C_00_tlm_MODE",1);
	xsc::utils::xsc_sim_manager::addInstanceConnParameters("pfm_top_sim_address_0_0","M_AXIMM_TLM_MODE","pfm_dynamic_sci","BLP_S_AXI_DATA_H2C_00_tlm_MODE",1);
	xsc::utils::xsc_sim_manager::addInstanceConnParameters("pfm_top_sim_qdma_0_0","M_AXICTRL_TLM_MODE","pfm_top_xbar_0","S00_AXI_TLM_MODE",1);
	xsc::utils::xsc_sim_manager::addInstanceConnParameters("pfm_top_sim_qdma_0_0","M_AXICTRL_TLM_MODE","pfm_top_xbar_0","S00_AXI_TLM_MODE",1);
	xsc::utils::xsc_sim_manager::addInstanceConnParameters("pfm_top_xbar_0","M02_AXI_TLM_MODE","pfm_top_embedded_schedular_0","s_axi_ctrl_user_TLM_MODE",1);
	xsc::utils::xsc_sim_manager::addInstanceConnParameters("pfm_top_xbar_0","M02_AXI_TLM_MODE","pfm_top_embedded_schedular_0","s_axi_ctrl_user_TLM_MODE",1);
	xsc::utils::xsc_sim_manager::addInstanceConnParameters("pfm_top_embedded_schedular_0","maxi_lite_mb_TLM_MODE","pfm_top_xbar_0","S01_AXI_TLM_MODE",1);
	xsc::utils::xsc_sim_manager::addInstanceConnParameters("pfm_top_embedded_schedular_0","maxi_lite_mb_TLM_MODE","pfm_top_xbar_0","S01_AXI_TLM_MODE",1);
	xsc::utils::xsc_sim_manager::addInstanceConnParameters("pfm_top_xbar_0","M00_AXI_TLM_MODE","pfm_dynamic_sci","BLP_S_AXI_CTRL_USER_00_tlm_MODE",1);
	xsc::utils::xsc_sim_manager::addInstanceConnParameters("pfm_top_xbar_0","M00_AXI_TLM_MODE","pfm_dynamic_sci","BLP_S_AXI_CTRL_USER_00_tlm_MODE",1);
	
	xsc::utils::xsc_sim_manager::addInstance("pfm_top_sci", this);
	#if defined MTI_SYSTEMC && defined XSC_ENABLE_TLM_WAVEFORM
	if(!xsc::utils::xsc_sim_manager::isMTlmWaveDatabaseInit()) {
	xsc::utils::xsc_sim_manager::setMTlmWaveDatabaseInit(true);
	scv_startup(); /* Initialize SCV: */
	scv_tr_wlf_init(); /* Tie databases to WLF: */
	scv_tr_db *txdb = new scv_tr_db("tlmWaveDB");
	if (txdb != NULL)
	  scv_tr_db::set_default_db(txdb);
	}
	#endif
	#if defined XM_SYSTEMC && defined XSC_ENABLE_TLM_WAVEFORM
	if(!xsc::utils::xsc_sim_manager::isMTlmWaveDatabaseInit()){
	xsc::utils::xsc_sim_manager::setMTlmWaveDatabaseInit(true);
	cve_tr_sdi_init();
	scv_tr_db *txdb = new scv_tr_db("tlmWaveDB");
	if (txdb != NULL)
	  scv_tr_db::set_default_db(txdb);
	}
	#endif
}
pfm_top_sci::~pfm_top_sci()
{
}
void pfm_top_sci::initConnModule() {

}

void pfm_top_sci::before_end_of_elaboration() {
	
	pfm_top_axi_vip_0_0_sc*  inst_0=dynamic_cast<pfm_top_axi_vip_0_0_sc*>(xsc::utils::xsc_sim_manager::getInstancePtr("pfm_top_axi_vip_0_0"));
	pfm_top_sim_address_0_0_sc*  inst_1=dynamic_cast<pfm_top_sim_address_0_0_sc*>(xsc::utils::xsc_sim_manager::getInstancePtr("pfm_top_sim_address_0_0"));
	xtlm_aximm_transaction_logger* log_inst_0 = new xtlm_aximm_transaction_logger("xtlm_aximm_transaction_logger_0");
	log_inst_0->setProxyRef(inst_0, inst_1, "pfm_top_axi_vip_0_0_M_AXI_TLM", "pfm_top_sim_address_0_0_S_AXIMM_TLM", log_inst_0->m_transactionLogger);
	
	if(inst_0==NULL) {
		std::cerr<<"Error: While binding sockets cannot find socket object instance to bind pfm_top_axi_vip_0_0_sc"<<std::endl;
	}
	if(inst_1==NULL) {
		std::cerr<<"Error: While binding sockets cannot find socket object instance to bind pfm_top_sim_address_0_0_sc"<<std::endl;
	}
	
	if (inst_0!=NULL && inst_1!=NULL) {
		inst_0->M_INITIATOR_rd_socket->bind(*(log_inst_0->tar_rd_skt));
		log_inst_0->init_rd_skt->bind(*(inst_1->S_TARGET_rd_socket));
	}
	
	pfm_top_axi_vip_0_0_sc*  inst_4=dynamic_cast<pfm_top_axi_vip_0_0_sc*>(xsc::utils::xsc_sim_manager::getInstancePtr("pfm_top_axi_vip_0_0"));
	pfm_top_sim_address_0_0_sc*  inst_5=dynamic_cast<pfm_top_sim_address_0_0_sc*>(xsc::utils::xsc_sim_manager::getInstancePtr("pfm_top_sim_address_0_0"));
	
	if(inst_4==NULL) {
		std::cerr<<"Error: While binding sockets cannot find socket object instance to bind pfm_top_axi_vip_0_0_sc"<<std::endl;
	}
	if(inst_5==NULL) {
		std::cerr<<"Error: While binding sockets cannot find socket object instance to bind pfm_top_sim_address_0_0_sc"<<std::endl;
	}
	
	if (inst_4!=NULL && inst_5!=NULL) {
		inst_4->M_INITIATOR_wr_socket->bind(*(log_inst_0->tar_wr_skt));
		log_inst_0->init_wr_skt->bind(*(inst_5->S_TARGET_wr_socket));
	}
	
	pfm_top_sim_qdma_0_0_sc*  inst_8=dynamic_cast<pfm_top_sim_qdma_0_0_sc*>(xsc::utils::xsc_sim_manager::getInstancePtr("pfm_top_sim_qdma_0_0"));
	pfm_top_smartconnect_0_0_sc*  inst_9=dynamic_cast<pfm_top_smartconnect_0_0_sc*>(xsc::utils::xsc_sim_manager::getInstancePtr("pfm_top_smartconnect_0_0"));
	xtlm_aximm_transaction_logger* log_inst_1 = new xtlm_aximm_transaction_logger("xtlm_aximm_transaction_logger_1");
	log_inst_1->setProxyRef(inst_8, inst_9, "pfm_top_sim_qdma_0_0_M_AXIMM_TLM", "pfm_top_smartconnect_0_0_S00_AXI_tlm", log_inst_1->m_transactionLogger);
	
	if(inst_8==NULL) {
		std::cerr<<"Error: While binding sockets cannot find socket object instance to bind pfm_top_sim_qdma_0_0_sc"<<std::endl;
	}
	if(inst_9==NULL) {
		std::cerr<<"Error: While binding sockets cannot find socket object instance to bind pfm_top_smartconnect_0_0_sc"<<std::endl;
	}
	
	if (inst_8!=NULL && inst_9!=NULL) {
		inst_8->initiator_mm_rd_socket->bind(*(log_inst_1->tar_rd_skt));
		log_inst_1->init_rd_skt->bind(*(inst_9->S00_AXI_tlm_aximm_read_socket));
	}
	
	pfm_top_sim_qdma_0_0_sc*  inst_12=dynamic_cast<pfm_top_sim_qdma_0_0_sc*>(xsc::utils::xsc_sim_manager::getInstancePtr("pfm_top_sim_qdma_0_0"));
	pfm_top_smartconnect_0_0_sc*  inst_13=dynamic_cast<pfm_top_smartconnect_0_0_sc*>(xsc::utils::xsc_sim_manager::getInstancePtr("pfm_top_smartconnect_0_0"));
	
	if(inst_12==NULL) {
		std::cerr<<"Error: While binding sockets cannot find socket object instance to bind pfm_top_sim_qdma_0_0_sc"<<std::endl;
	}
	if(inst_13==NULL) {
		std::cerr<<"Error: While binding sockets cannot find socket object instance to bind pfm_top_smartconnect_0_0_sc"<<std::endl;
	}
	
	if (inst_12!=NULL && inst_13!=NULL) {
		inst_12->initiator_mm_wr_socket->bind(*(log_inst_1->tar_wr_skt));
		log_inst_1->init_wr_skt->bind(*(inst_13->S00_AXI_tlm_aximm_write_socket));
	}
	
	pfm_top_smartconnect_0_0_sc*  inst_16=dynamic_cast<pfm_top_smartconnect_0_0_sc*>(xsc::utils::xsc_sim_manager::getInstancePtr("pfm_top_smartconnect_0_0"));
	pfm_top_axi_vip_0_0_sc*  inst_17=dynamic_cast<pfm_top_axi_vip_0_0_sc*>(xsc::utils::xsc_sim_manager::getInstancePtr("pfm_top_axi_vip_0_0"));
	xtlm_aximm_transaction_logger* log_inst_2 = new xtlm_aximm_transaction_logger("xtlm_aximm_transaction_logger_2");
	log_inst_2->setProxyRef(inst_16, inst_17, "pfm_top_smartconnect_0_0_M00_AXI_tlm", "pfm_top_axi_vip_0_0_S_AXI_TLM", log_inst_2->m_transactionLogger);
	
	if(inst_16==NULL) {
		std::cerr<<"Error: While binding sockets cannot find socket object instance to bind pfm_top_smartconnect_0_0_sc"<<std::endl;
	}
	if(inst_17==NULL) {
		std::cerr<<"Error: While binding sockets cannot find socket object instance to bind pfm_top_axi_vip_0_0_sc"<<std::endl;
	}
	
	if (inst_16!=NULL && inst_17!=NULL) {
		inst_16->M00_AXI_tlm_aximm_read_socket->bind(*(log_inst_2->tar_rd_skt));
		log_inst_2->init_rd_skt->bind(*(inst_17->S_TARGET_rd_socket));
	}
	
	pfm_top_smartconnect_0_0_sc*  inst_20=dynamic_cast<pfm_top_smartconnect_0_0_sc*>(xsc::utils::xsc_sim_manager::getInstancePtr("pfm_top_smartconnect_0_0"));
	pfm_top_axi_vip_0_0_sc*  inst_21=dynamic_cast<pfm_top_axi_vip_0_0_sc*>(xsc::utils::xsc_sim_manager::getInstancePtr("pfm_top_axi_vip_0_0"));
	
	if(inst_20==NULL) {
		std::cerr<<"Error: While binding sockets cannot find socket object instance to bind pfm_top_smartconnect_0_0_sc"<<std::endl;
	}
	if(inst_21==NULL) {
		std::cerr<<"Error: While binding sockets cannot find socket object instance to bind pfm_top_axi_vip_0_0_sc"<<std::endl;
	}
	
	if (inst_20!=NULL && inst_21!=NULL) {
		inst_20->M00_AXI_tlm_aximm_write_socket->bind(*(log_inst_2->tar_wr_skt));
		log_inst_2->init_wr_skt->bind(*(inst_21->S_TARGET_wr_socket));
	}
	
	pfm_top_smartconnect_0_0_sc*  inst_24=dynamic_cast<pfm_top_smartconnect_0_0_sc*>(xsc::utils::xsc_sim_manager::getInstancePtr("pfm_top_smartconnect_0_0"));
	pfm_top_embedded_schedular_0_sc*  inst_25=dynamic_cast<pfm_top_embedded_schedular_0_sc*>(xsc::utils::xsc_sim_manager::getInstancePtr("pfm_top_embedded_schedular_0"));
	xtlm_aximm_transaction_logger* log_inst_3 = new xtlm_aximm_transaction_logger("xtlm_aximm_transaction_logger_3");
	log_inst_3->setProxyRef(inst_24, inst_25, "pfm_top_smartconnect_0_0_M01_AXI_tlm", "pfm_top_embedded_schedular_0_s_axi_data_p2p_TLM", log_inst_3->m_transactionLogger);
	
	if(inst_24==NULL) {
		std::cerr<<"Error: While binding sockets cannot find socket object instance to bind pfm_top_smartconnect_0_0_sc"<<std::endl;
	}
	if(inst_25==NULL) {
		std::cerr<<"Error: While binding sockets cannot find socket object instance to bind pfm_top_embedded_schedular_0_sc"<<std::endl;
	}
	
	if (inst_24!=NULL && inst_25!=NULL) {
		inst_24->M01_AXI_tlm_aximm_read_socket->bind(*(log_inst_3->tar_rd_skt));
		log_inst_3->init_rd_skt->bind(*(inst_25->s_axi_data_p2p_rd_socket));
	}
	
	pfm_top_smartconnect_0_0_sc*  inst_28=dynamic_cast<pfm_top_smartconnect_0_0_sc*>(xsc::utils::xsc_sim_manager::getInstancePtr("pfm_top_smartconnect_0_0"));
	pfm_top_embedded_schedular_0_sc*  inst_29=dynamic_cast<pfm_top_embedded_schedular_0_sc*>(xsc::utils::xsc_sim_manager::getInstancePtr("pfm_top_embedded_schedular_0"));
	
	if(inst_28==NULL) {
		std::cerr<<"Error: While binding sockets cannot find socket object instance to bind pfm_top_smartconnect_0_0_sc"<<std::endl;
	}
	if(inst_29==NULL) {
		std::cerr<<"Error: While binding sockets cannot find socket object instance to bind pfm_top_embedded_schedular_0_sc"<<std::endl;
	}
	
	if (inst_28!=NULL && inst_29!=NULL) {
		inst_28->M01_AXI_tlm_aximm_write_socket->bind(*(log_inst_3->tar_wr_skt));
		log_inst_3->init_wr_skt->bind(*(inst_29->s_axi_data_p2p_wr_socket));
	}
	
	xsc_sim_conn_base*  inst_32=dynamic_cast<xsc_sim_conn_base*>(xsc::utils::xsc_sim_manager::getInstancePtr("pfm_dynamic_sci"));
	pfm_top_sim_qdma_0_0_sc*  inst_33=dynamic_cast<pfm_top_sim_qdma_0_0_sc*>(xsc::utils::xsc_sim_manager::getInstancePtr("pfm_top_sim_qdma_0_0"));
	
	if(inst_32==NULL) {
		std::cout<<"WARNING: While binding sockets cannot find socket object instance to bind xsc_sim_conn_base, Skipping this connection"<<std::endl;
	}
	if(inst_33==NULL) {
		std::cout<<"WARNING: While binding sockets cannot find socket object instance to bind pfm_top_sim_qdma_0_0_sc, Skipping this connection"<<std::endl;
	}
	
	if (inst_32!=NULL && inst_33!=NULL && inst_32->getTlmSocketByName("BLP_M_AXI_DATA_C2H_00_tlm_aximm_read_socket")!=NULL) {
		static_cast<xtlm::xtlm_aximm_initiator_socket*>(inst_32->getTlmSocketByName("BLP_M_AXI_DATA_C2H_00_tlm_aximm_read_socket"))->bind(*(inst_33->target_mm_rd_socket));
	}
	
	xsc_sim_conn_base*  inst_36=dynamic_cast<xsc_sim_conn_base*>(xsc::utils::xsc_sim_manager::getInstancePtr("pfm_dynamic_sci"));
	pfm_top_sim_qdma_0_0_sc*  inst_37=dynamic_cast<pfm_top_sim_qdma_0_0_sc*>(xsc::utils::xsc_sim_manager::getInstancePtr("pfm_top_sim_qdma_0_0"));
	
	if(inst_36==NULL) {
		std::cout<<"WARNING: While binding sockets cannot find socket object instance to bind xsc_sim_conn_base, Skipping this connection"<<std::endl;
	}
	if(inst_37==NULL) {
		std::cout<<"WARNING: While binding sockets cannot find socket object instance to bind pfm_top_sim_qdma_0_0_sc, Skipping this connection"<<std::endl;
	}
	
	if (inst_36!=NULL && inst_37!=NULL && inst_36->getTlmSocketByName("BLP_M_AXI_DATA_C2H_00_tlm_aximm_write_socket")!=NULL) {
		static_cast<xtlm::xtlm_aximm_initiator_socket*>(inst_36->getTlmSocketByName("BLP_M_AXI_DATA_C2H_00_tlm_aximm_write_socket"))->bind(*(inst_37->target_mm_wr_socket));
	}
	
	pfm_top_sim_address_0_0_sc*  inst_40=dynamic_cast<pfm_top_sim_address_0_0_sc*>(xsc::utils::xsc_sim_manager::getInstancePtr("pfm_top_sim_address_0_0"));
	xsc_sim_conn_base*  inst_41=dynamic_cast<xsc_sim_conn_base*>(xsc::utils::xsc_sim_manager::getInstancePtr("pfm_dynamic_sci"));
	
	if(inst_40==NULL) {
		std::cout<<"WARNING: While binding sockets cannot find socket object instance to bind pfm_top_sim_address_0_0_sc, Skipping this connection"<<std::endl;
	}
	if(inst_41==NULL) {
		std::cout<<"WARNING: While binding sockets cannot find socket object instance to bind xsc_sim_conn_base, Skipping this connection"<<std::endl;
	}
	
	if (inst_40!=NULL && inst_41!=NULL && inst_41->getTlmSocketByName("BLP_S_AXI_DATA_H2C_00_tlm_aximm_read_socket")!=NULL) {
		inst_40->M_INITIATOR_rd_socket->bind(*static_cast<xtlm::xtlm_aximm_target_socket*>(inst_41->getTlmSocketByName("BLP_S_AXI_DATA_H2C_00_tlm_aximm_read_socket")));
	}
	
	pfm_top_sim_address_0_0_sc*  inst_44=dynamic_cast<pfm_top_sim_address_0_0_sc*>(xsc::utils::xsc_sim_manager::getInstancePtr("pfm_top_sim_address_0_0"));
	xsc_sim_conn_base*  inst_45=dynamic_cast<xsc_sim_conn_base*>(xsc::utils::xsc_sim_manager::getInstancePtr("pfm_dynamic_sci"));
	
	if(inst_44==NULL) {
		std::cout<<"WARNING: While binding sockets cannot find socket object instance to bind pfm_top_sim_address_0_0_sc, Skipping this connection"<<std::endl;
	}
	if(inst_45==NULL) {
		std::cout<<"WARNING: While binding sockets cannot find socket object instance to bind xsc_sim_conn_base, Skipping this connection"<<std::endl;
	}
	
	if (inst_44!=NULL && inst_45!=NULL && inst_45->getTlmSocketByName("BLP_S_AXI_DATA_H2C_00_tlm_aximm_write_socket")!=NULL) {
		inst_44->M_INITIATOR_wr_socket->bind(*static_cast<xtlm::xtlm_aximm_target_socket*>(inst_45->getTlmSocketByName("BLP_S_AXI_DATA_H2C_00_tlm_aximm_write_socket")));
	}
	
	pfm_top_sim_qdma_0_0_sc*  inst_48=dynamic_cast<pfm_top_sim_qdma_0_0_sc*>(xsc::utils::xsc_sim_manager::getInstancePtr("pfm_top_sim_qdma_0_0"));
	pfm_top_xbar_0_sc*  inst_49=dynamic_cast<pfm_top_xbar_0_sc*>(xsc::utils::xsc_sim_manager::getInstancePtr("pfm_top_xbar_0"));
	xtlm_aximm_transaction_logger* log_inst_6 = new xtlm_aximm_transaction_logger("xtlm_aximm_transaction_logger_6");
	log_inst_6->setProxyRef(inst_48, inst_49, "pfm_top_sim_qdma_0_0_M_AXICTRL_TLM", "pfm_top_xbar_0_S00_AXI_TLM", log_inst_6->m_transactionLogger);
	
	if(inst_48==NULL) {
		std::cerr<<"Error: While binding sockets cannot find socket object instance to bind pfm_top_sim_qdma_0_0_sc"<<std::endl;
	}
	if(inst_49==NULL) {
		std::cerr<<"Error: While binding sockets cannot find socket object instance to bind pfm_top_xbar_0_sc"<<std::endl;
	}
	
	if (inst_48!=NULL && inst_49!=NULL) {
		inst_48->initiator_ctrl_rd_socket->bind(*(log_inst_6->tar_rd_skt));
		log_inst_6->init_rd_skt->bind(*(inst_49->target_0_rd_socket));
	}
	
	pfm_top_sim_qdma_0_0_sc*  inst_52=dynamic_cast<pfm_top_sim_qdma_0_0_sc*>(xsc::utils::xsc_sim_manager::getInstancePtr("pfm_top_sim_qdma_0_0"));
	pfm_top_xbar_0_sc*  inst_53=dynamic_cast<pfm_top_xbar_0_sc*>(xsc::utils::xsc_sim_manager::getInstancePtr("pfm_top_xbar_0"));
	
	if(inst_52==NULL) {
		std::cerr<<"Error: While binding sockets cannot find socket object instance to bind pfm_top_sim_qdma_0_0_sc"<<std::endl;
	}
	if(inst_53==NULL) {
		std::cerr<<"Error: While binding sockets cannot find socket object instance to bind pfm_top_xbar_0_sc"<<std::endl;
	}
	
	if (inst_52!=NULL && inst_53!=NULL) {
		inst_52->initiator_ctrl_wr_socket->bind(*(log_inst_6->tar_wr_skt));
		log_inst_6->init_wr_skt->bind(*(inst_53->target_0_wr_socket));
	}
	
	pfm_top_xbar_0_sc*  inst_56=dynamic_cast<pfm_top_xbar_0_sc*>(xsc::utils::xsc_sim_manager::getInstancePtr("pfm_top_xbar_0"));
	pfm_top_embedded_schedular_0_sc*  inst_57=dynamic_cast<pfm_top_embedded_schedular_0_sc*>(xsc::utils::xsc_sim_manager::getInstancePtr("pfm_top_embedded_schedular_0"));
	xtlm_aximm_transaction_logger* log_inst_7 = new xtlm_aximm_transaction_logger("xtlm_aximm_transaction_logger_7");
	log_inst_7->setProxyRef(inst_56, inst_57, "pfm_top_xbar_0_M02_AXI_TLM", "pfm_top_embedded_schedular_0_s_axi_ctrl_user_TLM", log_inst_7->m_transactionLogger);
	
	if(inst_56==NULL) {
		std::cerr<<"Error: While binding sockets cannot find socket object instance to bind pfm_top_xbar_0_sc"<<std::endl;
	}
	if(inst_57==NULL) {
		std::cerr<<"Error: While binding sockets cannot find socket object instance to bind pfm_top_embedded_schedular_0_sc"<<std::endl;
	}
	
	if (inst_56!=NULL && inst_57!=NULL) {
		inst_56->initiator_2_rd_socket->bind(*(log_inst_7->tar_rd_skt));
		log_inst_7->init_rd_skt->bind(*(inst_57->s_axi_ctrl_user_rd_socket));
	}
	
	pfm_top_xbar_0_sc*  inst_60=dynamic_cast<pfm_top_xbar_0_sc*>(xsc::utils::xsc_sim_manager::getInstancePtr("pfm_top_xbar_0"));
	pfm_top_embedded_schedular_0_sc*  inst_61=dynamic_cast<pfm_top_embedded_schedular_0_sc*>(xsc::utils::xsc_sim_manager::getInstancePtr("pfm_top_embedded_schedular_0"));
	
	if(inst_60==NULL) {
		std::cerr<<"Error: While binding sockets cannot find socket object instance to bind pfm_top_xbar_0_sc"<<std::endl;
	}
	if(inst_61==NULL) {
		std::cerr<<"Error: While binding sockets cannot find socket object instance to bind pfm_top_embedded_schedular_0_sc"<<std::endl;
	}
	
	if (inst_60!=NULL && inst_61!=NULL) {
		inst_60->initiator_2_wr_socket->bind(*(log_inst_7->tar_wr_skt));
		log_inst_7->init_wr_skt->bind(*(inst_61->s_axi_ctrl_user_wr_socket));
	}
	
	pfm_top_embedded_schedular_0_sc*  inst_64=dynamic_cast<pfm_top_embedded_schedular_0_sc*>(xsc::utils::xsc_sim_manager::getInstancePtr("pfm_top_embedded_schedular_0"));
	pfm_top_xbar_0_sc*  inst_65=dynamic_cast<pfm_top_xbar_0_sc*>(xsc::utils::xsc_sim_manager::getInstancePtr("pfm_top_xbar_0"));
	xtlm_aximm_transaction_logger* log_inst_8 = new xtlm_aximm_transaction_logger("xtlm_aximm_transaction_logger_8");
	log_inst_8->setProxyRef(inst_64, inst_65, "pfm_top_embedded_schedular_0_maxi_lite_mb_TLM", "pfm_top_xbar_0_S01_AXI_TLM", log_inst_8->m_transactionLogger);
	
	if(inst_64==NULL) {
		std::cerr<<"Error: While binding sockets cannot find socket object instance to bind pfm_top_embedded_schedular_0_sc"<<std::endl;
	}
	if(inst_65==NULL) {
		std::cerr<<"Error: While binding sockets cannot find socket object instance to bind pfm_top_xbar_0_sc"<<std::endl;
	}
	
	if (inst_64!=NULL && inst_65!=NULL) {
		inst_64->maxi_lite_mb_rd_socket->bind(*(log_inst_8->tar_rd_skt));
		log_inst_8->init_rd_skt->bind(*(inst_65->target_1_rd_socket));
	}
	
	pfm_top_embedded_schedular_0_sc*  inst_68=dynamic_cast<pfm_top_embedded_schedular_0_sc*>(xsc::utils::xsc_sim_manager::getInstancePtr("pfm_top_embedded_schedular_0"));
	pfm_top_xbar_0_sc*  inst_69=dynamic_cast<pfm_top_xbar_0_sc*>(xsc::utils::xsc_sim_manager::getInstancePtr("pfm_top_xbar_0"));
	
	if(inst_68==NULL) {
		std::cerr<<"Error: While binding sockets cannot find socket object instance to bind pfm_top_embedded_schedular_0_sc"<<std::endl;
	}
	if(inst_69==NULL) {
		std::cerr<<"Error: While binding sockets cannot find socket object instance to bind pfm_top_xbar_0_sc"<<std::endl;
	}
	
	if (inst_68!=NULL && inst_69!=NULL) {
		inst_68->maxi_lite_mb_wr_socket->bind(*(log_inst_8->tar_wr_skt));
		log_inst_8->init_wr_skt->bind(*(inst_69->target_1_wr_socket));
	}
	
	pfm_top_xbar_0_sc*  inst_72=dynamic_cast<pfm_top_xbar_0_sc*>(xsc::utils::xsc_sim_manager::getInstancePtr("pfm_top_xbar_0"));
	xsc_sim_conn_base*  inst_73=dynamic_cast<xsc_sim_conn_base*>(xsc::utils::xsc_sim_manager::getInstancePtr("pfm_dynamic_sci"));
	
	if(inst_72==NULL) {
		std::cout<<"WARNING: While binding sockets cannot find socket object instance to bind pfm_top_xbar_0_sc, Skipping this connection"<<std::endl;
	}
	if(inst_73==NULL) {
		std::cout<<"WARNING: While binding sockets cannot find socket object instance to bind xsc_sim_conn_base, Skipping this connection"<<std::endl;
	}
	
	if (inst_72!=NULL && inst_73!=NULL && inst_73->getTlmSocketByName("BLP_S_AXI_CTRL_USER_00_tlm_aximm_read_socket")!=NULL) {
		inst_72->initiator_0_rd_socket->bind(*static_cast<xtlm::xtlm_aximm_target_socket*>(inst_73->getTlmSocketByName("BLP_S_AXI_CTRL_USER_00_tlm_aximm_read_socket")));
	}
	
	pfm_top_xbar_0_sc*  inst_76=dynamic_cast<pfm_top_xbar_0_sc*>(xsc::utils::xsc_sim_manager::getInstancePtr("pfm_top_xbar_0"));
	xsc_sim_conn_base*  inst_77=dynamic_cast<xsc_sim_conn_base*>(xsc::utils::xsc_sim_manager::getInstancePtr("pfm_dynamic_sci"));
	
	if(inst_76==NULL) {
		std::cout<<"WARNING: While binding sockets cannot find socket object instance to bind pfm_top_xbar_0_sc, Skipping this connection"<<std::endl;
	}
	if(inst_77==NULL) {
		std::cout<<"WARNING: While binding sockets cannot find socket object instance to bind xsc_sim_conn_base, Skipping this connection"<<std::endl;
	}
	
	if (inst_76!=NULL && inst_77!=NULL && inst_77->getTlmSocketByName("BLP_S_AXI_CTRL_USER_00_tlm_aximm_write_socket")!=NULL) {
		inst_76->initiator_0_wr_socket->bind(*static_cast<xtlm::xtlm_aximm_target_socket*>(inst_77->getTlmSocketByName("BLP_S_AXI_CTRL_USER_00_tlm_aximm_write_socket")));
	}
	
}
#ifdef MTI_SYSTEMC
SC_MODULE_EXPORT(pfm_top_sci);
#endif

#ifdef XM_SYSTEMC
XMSC_MODULE_EXPORT(pfm_top_sci);
#endif

#ifdef RIVIERA
SC_MODULE_EXPORT(pfm_top_sci);
#endif
