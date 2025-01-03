# Definitional proc to organize widgets for parameters.
proc init_gui { IPINST } {
  ipgui::add_param $IPINST -name "Component_Name"
  #Adding Page
  set Page_0 [ipgui::add_page $IPINST -name "Page 0"]
  ipgui::add_param $IPINST -name "C_HAS_RST" -parent ${Page_0}
  ipgui::add_param $IPINST -name "C_RST_WIDTH" -parent ${Page_0}


}

proc update_PARAM_VALUE.C_HAS_RST { PARAM_VALUE.C_HAS_RST } {
	# Procedure called to update C_HAS_RST when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.C_HAS_RST { PARAM_VALUE.C_HAS_RST } {
	# Procedure called to validate C_HAS_RST
	return true
}

proc update_PARAM_VALUE.C_RST_WIDTH { PARAM_VALUE.C_RST_WIDTH } {
	# Procedure called to update C_RST_WIDTH when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.C_RST_WIDTH { PARAM_VALUE.C_RST_WIDTH } {
	# Procedure called to validate C_RST_WIDTH
	return true
}


proc update_MODELPARAM_VALUE.C_RST_WIDTH { MODELPARAM_VALUE.C_RST_WIDTH PARAM_VALUE.C_RST_WIDTH } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.C_RST_WIDTH}] ${MODELPARAM_VALUE.C_RST_WIDTH}
}

proc update_MODELPARAM_VALUE.C_HAS_RST { MODELPARAM_VALUE.C_HAS_RST PARAM_VALUE.C_HAS_RST } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.C_HAS_RST}] ${MODELPARAM_VALUE.C_HAS_RST}
}

