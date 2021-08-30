############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
open_project SHA
set_top sha256
add_files SHA_new/SHA_new/sha256_impl.c
add_files SHA_new/SHA_new/sha256.c
add_files -tb SHA_new/SHA_new/sha256_tb.c -cflags "-Wno-unknown-pragmas" -csimflags "-Wno-unknown-pragmas"
open_solution "solution2_Kintex_with_hardware"
set_part {xcku025-ffva1156-1-c}
create_clock -period 10 -name default
config_sdx -target none
config_export -vivado_optimization_level 2 -vivado_phys_opt place -vivado_report_level 0
set_clock_uncertainty 12.5%
#source "./SHA/solution2_Kintex_with_hardware/directives.tcl"
csim_design
csynth_design
cosim_design -trace_level all -tool xsim
export_design -format ip_catalog
