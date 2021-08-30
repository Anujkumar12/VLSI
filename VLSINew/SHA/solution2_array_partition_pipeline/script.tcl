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
open_solution "solution2_array_partition_pipeline"
set_part {xc7z020-clg484-1}
create_clock -period 10 -name default
#source "./SHA/solution2_array_partition_pipeline/directives.tcl"
csim_design
csynth_design
cosim_design -tool xsim
export_design -format ip_catalog
