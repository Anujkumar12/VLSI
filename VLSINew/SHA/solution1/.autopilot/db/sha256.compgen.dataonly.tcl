# This script segment is generated automatically by AutoPilot

set axilite_register_dict [dict create]
set port_AXILiteS {
ap_start { }
ap_done { }
ap_ready { }
ap_idle { }
data { 
	dir I
	width 8
	depth 256
	mode ap_memory
	offset 256
	offset_end 511
}
base_offset { 
	dir I
	width 32
	depth 1
	mode ap_none
	offset 512
	offset_end 519
}
bytes { 
	dir I
	width 32
	depth 1
	mode ap_none
	offset 520
	offset_end 527
}
digest { 
	dir O
	width 8
	depth 32
	mode ap_memory
	offset 544
	offset_end 575
}
}
dict set axilite_register_dict AXILiteS $port_AXILiteS


