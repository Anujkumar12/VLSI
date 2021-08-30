set moduleName sha256_transform
set isTopModule 0
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isFreeRunPipelineModule 0
set isPipelined 1
set pipeline_type function
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {sha256_transform}
set C_modelType { int 256 }
set C_modelArgList {
	{ ctx_state_0_read int 32 regular  }
	{ ctx_state_1_read int 32 regular  }
	{ ctx_state_2_read int 32 regular  }
	{ ctx_state_3_read int 32 regular  }
	{ ctx_state_4_read int 32 regular  }
	{ ctx_state_5_read int 32 regular  }
	{ ctx_state_6_read int 32 regular  }
	{ ctx_state_7_read int 32 regular  }
	{ data_0 int 8 regular {array 16 { 1 1 } 1 1 }  }
	{ data_1 int 8 regular {array 16 { 1 1 } 1 1 }  }
	{ data_2 int 8 regular {array 16 { 1 1 } 1 1 }  }
	{ data_3 int 8 regular {array 16 { 1 1 } 1 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "ctx_state_0_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "ctx_state_1_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "ctx_state_2_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "ctx_state_3_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "ctx_state_4_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "ctx_state_5_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "ctx_state_6_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "ctx_state_7_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "data_0", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "data_1", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "data_2", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "data_3", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "ap_return", "interface" : "wire", "bitwidth" : 256} ]}
# RTL Port declarations: 
set portNum 47
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ ap_ce sc_in sc_logic 1 ce -1 } 
	{ ctx_state_0_read sc_in sc_lv 32 signal 0 } 
	{ ctx_state_1_read sc_in sc_lv 32 signal 1 } 
	{ ctx_state_2_read sc_in sc_lv 32 signal 2 } 
	{ ctx_state_3_read sc_in sc_lv 32 signal 3 } 
	{ ctx_state_4_read sc_in sc_lv 32 signal 4 } 
	{ ctx_state_5_read sc_in sc_lv 32 signal 5 } 
	{ ctx_state_6_read sc_in sc_lv 32 signal 6 } 
	{ ctx_state_7_read sc_in sc_lv 32 signal 7 } 
	{ data_0_address0 sc_out sc_lv 4 signal 8 } 
	{ data_0_ce0 sc_out sc_logic 1 signal 8 } 
	{ data_0_q0 sc_in sc_lv 8 signal 8 } 
	{ data_0_address1 sc_out sc_lv 4 signal 8 } 
	{ data_0_ce1 sc_out sc_logic 1 signal 8 } 
	{ data_0_q1 sc_in sc_lv 8 signal 8 } 
	{ data_1_address0 sc_out sc_lv 4 signal 9 } 
	{ data_1_ce0 sc_out sc_logic 1 signal 9 } 
	{ data_1_q0 sc_in sc_lv 8 signal 9 } 
	{ data_1_address1 sc_out sc_lv 4 signal 9 } 
	{ data_1_ce1 sc_out sc_logic 1 signal 9 } 
	{ data_1_q1 sc_in sc_lv 8 signal 9 } 
	{ data_2_address0 sc_out sc_lv 4 signal 10 } 
	{ data_2_ce0 sc_out sc_logic 1 signal 10 } 
	{ data_2_q0 sc_in sc_lv 8 signal 10 } 
	{ data_2_address1 sc_out sc_lv 4 signal 10 } 
	{ data_2_ce1 sc_out sc_logic 1 signal 10 } 
	{ data_2_q1 sc_in sc_lv 8 signal 10 } 
	{ data_3_address0 sc_out sc_lv 4 signal 11 } 
	{ data_3_ce0 sc_out sc_logic 1 signal 11 } 
	{ data_3_q0 sc_in sc_lv 8 signal 11 } 
	{ data_3_address1 sc_out sc_lv 4 signal 11 } 
	{ data_3_ce1 sc_out sc_logic 1 signal 11 } 
	{ data_3_q1 sc_in sc_lv 8 signal 11 } 
	{ ap_return_0 sc_out sc_lv 32 signal -1 } 
	{ ap_return_1 sc_out sc_lv 32 signal -1 } 
	{ ap_return_2 sc_out sc_lv 32 signal -1 } 
	{ ap_return_3 sc_out sc_lv 32 signal -1 } 
	{ ap_return_4 sc_out sc_lv 32 signal -1 } 
	{ ap_return_5 sc_out sc_lv 32 signal -1 } 
	{ ap_return_6 sc_out sc_lv 32 signal -1 } 
	{ ap_return_7 sc_out sc_lv 32 signal -1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "ap_ce", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "ce", "bundle":{"name": "ap_ce", "role": "default" }} , 
 	{ "name": "ctx_state_0_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ctx_state_0_read", "role": "default" }} , 
 	{ "name": "ctx_state_1_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ctx_state_1_read", "role": "default" }} , 
 	{ "name": "ctx_state_2_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ctx_state_2_read", "role": "default" }} , 
 	{ "name": "ctx_state_3_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ctx_state_3_read", "role": "default" }} , 
 	{ "name": "ctx_state_4_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ctx_state_4_read", "role": "default" }} , 
 	{ "name": "ctx_state_5_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ctx_state_5_read", "role": "default" }} , 
 	{ "name": "ctx_state_6_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ctx_state_6_read", "role": "default" }} , 
 	{ "name": "ctx_state_7_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ctx_state_7_read", "role": "default" }} , 
 	{ "name": "data_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "data_0", "role": "address0" }} , 
 	{ "name": "data_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_0", "role": "ce0" }} , 
 	{ "name": "data_0_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "data_0", "role": "q0" }} , 
 	{ "name": "data_0_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "data_0", "role": "address1" }} , 
 	{ "name": "data_0_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_0", "role": "ce1" }} , 
 	{ "name": "data_0_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "data_0", "role": "q1" }} , 
 	{ "name": "data_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "data_1", "role": "address0" }} , 
 	{ "name": "data_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_1", "role": "ce0" }} , 
 	{ "name": "data_1_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "data_1", "role": "q0" }} , 
 	{ "name": "data_1_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "data_1", "role": "address1" }} , 
 	{ "name": "data_1_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_1", "role": "ce1" }} , 
 	{ "name": "data_1_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "data_1", "role": "q1" }} , 
 	{ "name": "data_2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "data_2", "role": "address0" }} , 
 	{ "name": "data_2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_2", "role": "ce0" }} , 
 	{ "name": "data_2_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "data_2", "role": "q0" }} , 
 	{ "name": "data_2_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "data_2", "role": "address1" }} , 
 	{ "name": "data_2_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_2", "role": "ce1" }} , 
 	{ "name": "data_2_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "data_2", "role": "q1" }} , 
 	{ "name": "data_3_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "data_3", "role": "address0" }} , 
 	{ "name": "data_3_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_3", "role": "ce0" }} , 
 	{ "name": "data_3_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "data_3", "role": "q0" }} , 
 	{ "name": "data_3_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "data_3", "role": "address1" }} , 
 	{ "name": "data_3_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_3", "role": "ce1" }} , 
 	{ "name": "data_3_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "data_3", "role": "q1" }} , 
 	{ "name": "ap_return_0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_0", "role": "default" }} , 
 	{ "name": "ap_return_1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_1", "role": "default" }} , 
 	{ "name": "ap_return_2", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_2", "role": "default" }} , 
 	{ "name": "ap_return_3", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_3", "role": "default" }} , 
 	{ "name": "ap_return_4", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_4", "role": "default" }} , 
 	{ "name": "ap_return_5", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_5", "role": "default" }} , 
 	{ "name": "ap_return_6", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_6", "role": "default" }} , 
 	{ "name": "ap_return_7", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_7", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "",
		"CDFG" : "sha256_transform",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "32",
		"VariableLatency" : "0", "ExactLatency" : "97", "EstimateLatencyMin" : "97", "EstimateLatencyMax" : "97",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "ctx_state_0_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "ctx_state_1_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "ctx_state_2_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "ctx_state_3_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "ctx_state_4_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "ctx_state_5_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "ctx_state_6_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "ctx_state_7_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "data_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "data_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "data_3", "Type" : "Memory", "Direction" : "I"}]}]}


set ArgLastReadFirstWriteLatency {
	sha256_transform {
		ctx_state_0_read {Type I LastRead 6 FirstWrite -1}
		ctx_state_1_read {Type I LastRead 5 FirstWrite -1}
		ctx_state_2_read {Type I LastRead 4 FirstWrite -1}
		ctx_state_3_read {Type I LastRead 2 FirstWrite -1}
		ctx_state_4_read {Type I LastRead 1 FirstWrite -1}
		ctx_state_5_read {Type I LastRead 1 FirstWrite -1}
		ctx_state_6_read {Type I LastRead 1 FirstWrite -1}
		ctx_state_7_read {Type I LastRead 2 FirstWrite -1}
		data_0 {Type I LastRead 8 FirstWrite -1}
		data_1 {Type I LastRead 8 FirstWrite -1}
		data_2 {Type I LastRead 8 FirstWrite -1}
		data_3 {Type I LastRead 8 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "97", "Max" : "97"}
	, {"Name" : "Interval", "Min" : "32", "Max" : "32"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	ctx_state_0_read { ap_none {  { ctx_state_0_read in_data 0 32 } } }
	ctx_state_1_read { ap_none {  { ctx_state_1_read in_data 0 32 } } }
	ctx_state_2_read { ap_none {  { ctx_state_2_read in_data 0 32 } } }
	ctx_state_3_read { ap_none {  { ctx_state_3_read in_data 0 32 } } }
	ctx_state_4_read { ap_none {  { ctx_state_4_read in_data 0 32 } } }
	ctx_state_5_read { ap_none {  { ctx_state_5_read in_data 0 32 } } }
	ctx_state_6_read { ap_none {  { ctx_state_6_read in_data 0 32 } } }
	ctx_state_7_read { ap_none {  { ctx_state_7_read in_data 0 32 } } }
	data_0 { ap_memory {  { data_0_address0 mem_address 1 4 }  { data_0_ce0 mem_ce 1 1 }  { data_0_q0 mem_dout 0 8 }  { data_0_address1 MemPortADDR2 1 4 }  { data_0_ce1 MemPortCE2 1 1 }  { data_0_q1 MemPortDOUT2 0 8 } } }
	data_1 { ap_memory {  { data_1_address0 mem_address 1 4 }  { data_1_ce0 mem_ce 1 1 }  { data_1_q0 mem_dout 0 8 }  { data_1_address1 MemPortADDR2 1 4 }  { data_1_ce1 MemPortCE2 1 1 }  { data_1_q1 MemPortDOUT2 0 8 } } }
	data_2 { ap_memory {  { data_2_address0 mem_address 1 4 }  { data_2_ce0 mem_ce 1 1 }  { data_2_q0 mem_dout 0 8 }  { data_2_address1 MemPortADDR2 1 4 }  { data_2_ce1 MemPortCE2 1 1 }  { data_2_q1 MemPortDOUT2 0 8 } } }
	data_3 { ap_memory {  { data_3_address0 mem_address 1 4 }  { data_3_ce0 mem_ce 1 1 }  { data_3_q0 mem_dout 0 8 }  { data_3_address1 MemPortADDR2 1 4 }  { data_3_ce1 MemPortCE2 1 1 }  { data_3_q1 MemPortDOUT2 0 8 } } }
}
