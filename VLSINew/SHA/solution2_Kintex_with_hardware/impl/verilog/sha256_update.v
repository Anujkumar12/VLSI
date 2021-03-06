// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module sha256_update (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        ctx_data_0_address0,
        ctx_data_0_ce0,
        ctx_data_0_we0,
        ctx_data_0_d0,
        ctx_data_0_q0,
        ctx_data_0_address1,
        ctx_data_0_ce1,
        ctx_data_0_q1,
        ctx_data_1_address0,
        ctx_data_1_ce0,
        ctx_data_1_we0,
        ctx_data_1_d0,
        ctx_data_1_q0,
        ctx_data_1_address1,
        ctx_data_1_ce1,
        ctx_data_1_q1,
        ctx_data_2_address0,
        ctx_data_2_ce0,
        ctx_data_2_we0,
        ctx_data_2_d0,
        ctx_data_2_q0,
        ctx_data_2_address1,
        ctx_data_2_ce1,
        ctx_data_2_q1,
        ctx_data_3_address0,
        ctx_data_3_ce0,
        ctx_data_3_we0,
        ctx_data_3_d0,
        ctx_data_3_q0,
        ctx_data_3_address1,
        ctx_data_3_ce1,
        ctx_data_3_q1,
        ctx_datalen_read,
        p_read1,
        p_read2,
        p_read3,
        p_read4,
        p_read5,
        p_read6,
        p_read7,
        p_read8,
        data_address0,
        data_ce0,
        data_q0,
        len,
        ap_return_0,
        ap_return_1,
        ap_return_2,
        ap_return_3,
        ap_return_4,
        ap_return_5,
        ap_return_6,
        ap_return_7,
        ap_return_8
);

parameter    ap_ST_fsm_state1 = 49'd1;
parameter    ap_ST_fsm_state2 = 49'd2;
parameter    ap_ST_fsm_state3 = 49'd4;
parameter    ap_ST_fsm_state4 = 49'd8;
parameter    ap_ST_fsm_state5 = 49'd16;
parameter    ap_ST_fsm_state6 = 49'd32;
parameter    ap_ST_fsm_state7 = 49'd64;
parameter    ap_ST_fsm_state8 = 49'd128;
parameter    ap_ST_fsm_state9 = 49'd256;
parameter    ap_ST_fsm_state10 = 49'd512;
parameter    ap_ST_fsm_state11 = 49'd1024;
parameter    ap_ST_fsm_state12 = 49'd2048;
parameter    ap_ST_fsm_state13 = 49'd4096;
parameter    ap_ST_fsm_state14 = 49'd8192;
parameter    ap_ST_fsm_state15 = 49'd16384;
parameter    ap_ST_fsm_state16 = 49'd32768;
parameter    ap_ST_fsm_state17 = 49'd65536;
parameter    ap_ST_fsm_state18 = 49'd131072;
parameter    ap_ST_fsm_state19 = 49'd262144;
parameter    ap_ST_fsm_state20 = 49'd524288;
parameter    ap_ST_fsm_state21 = 49'd1048576;
parameter    ap_ST_fsm_state22 = 49'd2097152;
parameter    ap_ST_fsm_state23 = 49'd4194304;
parameter    ap_ST_fsm_state24 = 49'd8388608;
parameter    ap_ST_fsm_state25 = 49'd16777216;
parameter    ap_ST_fsm_state26 = 49'd33554432;
parameter    ap_ST_fsm_state27 = 49'd67108864;
parameter    ap_ST_fsm_state28 = 49'd134217728;
parameter    ap_ST_fsm_state29 = 49'd268435456;
parameter    ap_ST_fsm_state30 = 49'd536870912;
parameter    ap_ST_fsm_state31 = 49'd1073741824;
parameter    ap_ST_fsm_state32 = 49'd2147483648;
parameter    ap_ST_fsm_state33 = 49'd4294967296;
parameter    ap_ST_fsm_state34 = 49'd8589934592;
parameter    ap_ST_fsm_state35 = 49'd17179869184;
parameter    ap_ST_fsm_state36 = 49'd34359738368;
parameter    ap_ST_fsm_state37 = 49'd68719476736;
parameter    ap_ST_fsm_state38 = 49'd137438953472;
parameter    ap_ST_fsm_state39 = 49'd274877906944;
parameter    ap_ST_fsm_state40 = 49'd549755813888;
parameter    ap_ST_fsm_state41 = 49'd1099511627776;
parameter    ap_ST_fsm_state42 = 49'd2199023255552;
parameter    ap_ST_fsm_state43 = 49'd4398046511104;
parameter    ap_ST_fsm_state44 = 49'd8796093022208;
parameter    ap_ST_fsm_state45 = 49'd17592186044416;
parameter    ap_ST_fsm_state46 = 49'd35184372088832;
parameter    ap_ST_fsm_state47 = 49'd70368744177664;
parameter    ap_ST_fsm_state48 = 49'd140737488355328;
parameter    ap_ST_fsm_state49 = 49'd281474976710656;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [3:0] ctx_data_0_address0;
output   ctx_data_0_ce0;
output   ctx_data_0_we0;
output  [7:0] ctx_data_0_d0;
input  [7:0] ctx_data_0_q0;
output  [3:0] ctx_data_0_address1;
output   ctx_data_0_ce1;
input  [7:0] ctx_data_0_q1;
output  [3:0] ctx_data_1_address0;
output   ctx_data_1_ce0;
output   ctx_data_1_we0;
output  [7:0] ctx_data_1_d0;
input  [7:0] ctx_data_1_q0;
output  [3:0] ctx_data_1_address1;
output   ctx_data_1_ce1;
input  [7:0] ctx_data_1_q1;
output  [3:0] ctx_data_2_address0;
output   ctx_data_2_ce0;
output   ctx_data_2_we0;
output  [7:0] ctx_data_2_d0;
input  [7:0] ctx_data_2_q0;
output  [3:0] ctx_data_2_address1;
output   ctx_data_2_ce1;
input  [7:0] ctx_data_2_q1;
output  [3:0] ctx_data_3_address0;
output   ctx_data_3_ce0;
output   ctx_data_3_we0;
output  [7:0] ctx_data_3_d0;
input  [7:0] ctx_data_3_q0;
output  [3:0] ctx_data_3_address1;
output   ctx_data_3_ce1;
input  [7:0] ctx_data_3_q1;
input  [31:0] ctx_datalen_read;
input  [31:0] p_read1;
input  [31:0] p_read2;
input  [31:0] p_read3;
input  [31:0] p_read4;
input  [31:0] p_read5;
input  [31:0] p_read6;
input  [31:0] p_read7;
input  [31:0] p_read8;
output  [5:0] data_address0;
output   data_ce0;
input  [7:0] data_q0;
input  [31:0] len;
output  [31:0] ap_return_0;
output  [31:0] ap_return_1;
output  [31:0] ap_return_2;
output  [31:0] ap_return_3;
output  [31:0] ap_return_4;
output  [31:0] ap_return_5;
output  [31:0] ap_return_6;
output  [31:0] ap_return_7;
output  [31:0] ap_return_8;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg[3:0] ctx_data_0_address0;
reg ctx_data_0_ce0;
reg ctx_data_0_we0;
reg ctx_data_0_ce1;
reg[3:0] ctx_data_1_address0;
reg ctx_data_1_ce0;
reg ctx_data_1_we0;
reg ctx_data_1_ce1;
reg[3:0] ctx_data_2_address0;
reg ctx_data_2_ce0;
reg ctx_data_2_we0;
reg ctx_data_2_ce1;
reg[3:0] ctx_data_3_address0;
reg ctx_data_3_ce0;
reg ctx_data_3_we0;
reg ctx_data_3_ce1;
reg data_ce0;

(* fsm_encoding = "none" *) reg   [48:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
wire   [6:0] empty_fu_301_p1;
reg   [6:0] empty_reg_604;
wire   [6:0] i_fu_355_p2;
reg   [6:0] i_reg_612;
wire    ap_CS_fsm_state2;
wire   [0:0] icmp_ln127_fu_350_p2;
wire   [0:0] icmp_ln131_fu_451_p2;
reg   [0:0] icmp_ln131_reg_625;
wire    ap_CS_fsm_state3;
wire    ap_CS_fsm_state9;
wire    grp_sha256_transform_fu_246_ap_start;
wire    grp_sha256_transform_fu_246_ap_done;
wire    grp_sha256_transform_fu_246_ap_idle;
wire    grp_sha256_transform_fu_246_ap_ready;
wire   [3:0] grp_sha256_transform_fu_246_data_0_address0;
wire    grp_sha256_transform_fu_246_data_0_ce0;
wire   [3:0] grp_sha256_transform_fu_246_data_0_address1;
wire    grp_sha256_transform_fu_246_data_0_ce1;
wire   [3:0] grp_sha256_transform_fu_246_data_1_address0;
wire    grp_sha256_transform_fu_246_data_1_ce0;
wire   [3:0] grp_sha256_transform_fu_246_data_1_address1;
wire    grp_sha256_transform_fu_246_data_1_ce1;
wire   [3:0] grp_sha256_transform_fu_246_data_2_address0;
wire    grp_sha256_transform_fu_246_data_2_ce0;
wire   [3:0] grp_sha256_transform_fu_246_data_2_address1;
wire    grp_sha256_transform_fu_246_data_2_ce1;
wire   [3:0] grp_sha256_transform_fu_246_data_3_address0;
wire    grp_sha256_transform_fu_246_data_3_ce0;
wire   [3:0] grp_sha256_transform_fu_246_data_3_address1;
wire    grp_sha256_transform_fu_246_data_3_ce1;
wire   [31:0] grp_sha256_transform_fu_246_ap_return_0;
wire   [31:0] grp_sha256_transform_fu_246_ap_return_1;
wire   [31:0] grp_sha256_transform_fu_246_ap_return_2;
wire   [31:0] grp_sha256_transform_fu_246_ap_return_3;
wire   [31:0] grp_sha256_transform_fu_246_ap_return_4;
wire   [31:0] grp_sha256_transform_fu_246_ap_return_5;
wire   [31:0] grp_sha256_transform_fu_246_ap_return_6;
wire   [31:0] grp_sha256_transform_fu_246_ap_return_7;
reg   [6:0] i_0_reg_235;
wire    ap_CS_fsm_state49;
reg    grp_sha256_transform_fu_246_ap_start_reg;
wire    ap_CS_fsm_state8;
reg   [48:0] ap_NS_fsm;
wire    ap_NS_fsm_state9;
wire    ap_CS_fsm_state10;
wire    ap_CS_fsm_state11;
wire    ap_CS_fsm_state12;
wire    ap_CS_fsm_state13;
wire    ap_CS_fsm_state14;
wire    ap_CS_fsm_state15;
wire    ap_CS_fsm_state16;
wire    ap_CS_fsm_state17;
wire   [63:0] zext_ln129_fu_361_p1;
wire   [63:0] zext_ln129_1_fu_434_p1;
reg   [31:0] ctx_datalen_0_fu_70;
wire   [31:0] add_ln130_fu_445_p2;
reg   [31:0] ctx_state_7_0_fu_74;
reg   [31:0] ctx_state_6_0_fu_78;
reg   [31:0] ctx_state_5_0_fu_82;
reg   [31:0] ctx_state_4_0_fu_86;
reg   [31:0] ctx_state_3_0_fu_90;
reg   [31:0] ctx_state_2_0_fu_94;
reg   [31:0] ctx_state_1_0_fu_98;
reg   [31:0] ctx_state_0_0_fu_102;
wire   [1:0] trunc_ln129_fu_420_p1;
wire   [29:0] lshr_ln_fu_424_p4;

// power-on initialization
initial begin
#0 ap_CS_fsm = 49'd1;
#0 grp_sha256_transform_fu_246_ap_start_reg = 1'b0;
end

sha256_transform grp_sha256_transform_fu_246(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(grp_sha256_transform_fu_246_ap_start),
    .ap_done(grp_sha256_transform_fu_246_ap_done),
    .ap_idle(grp_sha256_transform_fu_246_ap_idle),
    .ap_ready(grp_sha256_transform_fu_246_ap_ready),
    .ap_ce(1'b1),
    .ctx_state_0_read(ctx_state_0_0_fu_102),
    .ctx_state_1_read(ctx_state_1_0_fu_98),
    .ctx_state_2_read(ctx_state_2_0_fu_94),
    .ctx_state_3_read(ctx_state_3_0_fu_90),
    .ctx_state_4_read(ctx_state_4_0_fu_86),
    .ctx_state_5_read(ctx_state_5_0_fu_82),
    .ctx_state_6_read(ctx_state_6_0_fu_78),
    .ctx_state_7_read(ctx_state_7_0_fu_74),
    .data_0_address0(grp_sha256_transform_fu_246_data_0_address0),
    .data_0_ce0(grp_sha256_transform_fu_246_data_0_ce0),
    .data_0_q0(ctx_data_0_q0),
    .data_0_address1(grp_sha256_transform_fu_246_data_0_address1),
    .data_0_ce1(grp_sha256_transform_fu_246_data_0_ce1),
    .data_0_q1(ctx_data_0_q1),
    .data_1_address0(grp_sha256_transform_fu_246_data_1_address0),
    .data_1_ce0(grp_sha256_transform_fu_246_data_1_ce0),
    .data_1_q0(ctx_data_1_q0),
    .data_1_address1(grp_sha256_transform_fu_246_data_1_address1),
    .data_1_ce1(grp_sha256_transform_fu_246_data_1_ce1),
    .data_1_q1(ctx_data_1_q1),
    .data_2_address0(grp_sha256_transform_fu_246_data_2_address0),
    .data_2_ce0(grp_sha256_transform_fu_246_data_2_ce0),
    .data_2_q0(ctx_data_2_q0),
    .data_2_address1(grp_sha256_transform_fu_246_data_2_address1),
    .data_2_ce1(grp_sha256_transform_fu_246_data_2_ce1),
    .data_2_q1(ctx_data_2_q1),
    .data_3_address0(grp_sha256_transform_fu_246_data_3_address0),
    .data_3_ce0(grp_sha256_transform_fu_246_data_3_ce0),
    .data_3_q0(ctx_data_3_q0),
    .data_3_address1(grp_sha256_transform_fu_246_data_3_address1),
    .data_3_ce1(grp_sha256_transform_fu_246_data_3_ce1),
    .data_3_q1(ctx_data_3_q1),
    .ap_return_0(grp_sha256_transform_fu_246_ap_return_0),
    .ap_return_1(grp_sha256_transform_fu_246_ap_return_1),
    .ap_return_2(grp_sha256_transform_fu_246_ap_return_2),
    .ap_return_3(grp_sha256_transform_fu_246_ap_return_3),
    .ap_return_4(grp_sha256_transform_fu_246_ap_return_4),
    .ap_return_5(grp_sha256_transform_fu_246_ap_return_5),
    .ap_return_6(grp_sha256_transform_fu_246_ap_return_6),
    .ap_return_7(grp_sha256_transform_fu_246_ap_return_7)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        grp_sha256_transform_fu_246_ap_start_reg <= 1'b0;
    end else begin
        if (((1'b1 == ap_NS_fsm_state9) & (1'b1 == ap_CS_fsm_state8))) begin
            grp_sha256_transform_fu_246_ap_start_reg <= 1'b1;
        end else if ((grp_sha256_transform_fu_246_ap_ready == 1'b1)) begin
            grp_sha256_transform_fu_246_ap_start_reg <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state3) & (icmp_ln131_fu_451_p2 == 1'd1))) begin
        ctx_datalen_0_fu_70 <= 32'd0;
    end else if (((1'b1 == ap_CS_fsm_state3) & (icmp_ln131_fu_451_p2 == 1'd0))) begin
        ctx_datalen_0_fu_70 <= add_ln130_fu_445_p2;
    end else if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        ctx_datalen_0_fu_70 <= ctx_datalen_read;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state49) & (icmp_ln131_reg_625 == 1'd1))) begin
        ctx_state_0_0_fu_102 <= grp_sha256_transform_fu_246_ap_return_0;
    end else if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        ctx_state_0_0_fu_102 <= p_read1;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state49) & (icmp_ln131_reg_625 == 1'd1))) begin
        ctx_state_1_0_fu_98 <= grp_sha256_transform_fu_246_ap_return_1;
    end else if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        ctx_state_1_0_fu_98 <= p_read2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state49) & (icmp_ln131_reg_625 == 1'd1))) begin
        ctx_state_2_0_fu_94 <= grp_sha256_transform_fu_246_ap_return_2;
    end else if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        ctx_state_2_0_fu_94 <= p_read3;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state49) & (icmp_ln131_reg_625 == 1'd1))) begin
        ctx_state_3_0_fu_90 <= grp_sha256_transform_fu_246_ap_return_3;
    end else if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        ctx_state_3_0_fu_90 <= p_read4;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state49) & (icmp_ln131_reg_625 == 1'd1))) begin
        ctx_state_4_0_fu_86 <= grp_sha256_transform_fu_246_ap_return_4;
    end else if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        ctx_state_4_0_fu_86 <= p_read5;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state49) & (icmp_ln131_reg_625 == 1'd1))) begin
        ctx_state_5_0_fu_82 <= grp_sha256_transform_fu_246_ap_return_5;
    end else if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        ctx_state_5_0_fu_82 <= p_read6;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state49) & (icmp_ln131_reg_625 == 1'd1))) begin
        ctx_state_6_0_fu_78 <= grp_sha256_transform_fu_246_ap_return_6;
    end else if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        ctx_state_6_0_fu_78 <= p_read7;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state49) & (icmp_ln131_reg_625 == 1'd1))) begin
        ctx_state_7_0_fu_74 <= grp_sha256_transform_fu_246_ap_return_7;
    end else if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        ctx_state_7_0_fu_74 <= p_read8;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state49)) begin
        i_0_reg_235 <= i_reg_612;
    end else if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        i_0_reg_235 <= 7'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        empty_reg_604 <= empty_fu_301_p1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        i_reg_612 <= i_fu_355_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        icmp_ln131_reg_625 <= icmp_ln131_fu_451_p2;
    end
end

always @ (*) begin
    if ((((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1)) | ((1'b1 == ap_CS_fsm_state2) & (icmp_ln127_fu_350_p2 == 1'd1)))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state2) & (icmp_ln127_fu_350_p2 == 1'd1))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        ctx_data_0_address0 = zext_ln129_1_fu_434_p1;
    end else if (((1'b1 == ap_CS_fsm_state17) | (1'b1 == ap_CS_fsm_state16) | (1'b1 == ap_CS_fsm_state15) | (1'b1 == ap_CS_fsm_state14) | (1'b1 == ap_CS_fsm_state13) | (1'b1 == ap_CS_fsm_state12) | (1'b1 == ap_CS_fsm_state11) | (1'b1 == ap_CS_fsm_state10) | (1'b1 == ap_CS_fsm_state9))) begin
        ctx_data_0_address0 = grp_sha256_transform_fu_246_data_0_address0;
    end else begin
        ctx_data_0_address0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        ctx_data_0_ce0 = 1'b1;
    end else if (((1'b1 == ap_CS_fsm_state17) | (1'b1 == ap_CS_fsm_state16) | (1'b1 == ap_CS_fsm_state15) | (1'b1 == ap_CS_fsm_state14) | (1'b1 == ap_CS_fsm_state13) | (1'b1 == ap_CS_fsm_state12) | (1'b1 == ap_CS_fsm_state11) | (1'b1 == ap_CS_fsm_state10) | (1'b1 == ap_CS_fsm_state9))) begin
        ctx_data_0_ce0 = grp_sha256_transform_fu_246_data_0_ce0;
    end else begin
        ctx_data_0_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state17) | (1'b1 == ap_CS_fsm_state16) | (1'b1 == ap_CS_fsm_state15) | (1'b1 == ap_CS_fsm_state14) | (1'b1 == ap_CS_fsm_state13) | (1'b1 == ap_CS_fsm_state12) | (1'b1 == ap_CS_fsm_state11) | (1'b1 == ap_CS_fsm_state10) | (1'b1 == ap_CS_fsm_state9))) begin
        ctx_data_0_ce1 = grp_sha256_transform_fu_246_data_0_ce1;
    end else begin
        ctx_data_0_ce1 = 1'b0;
    end
end

always @ (*) begin
    if (((trunc_ln129_fu_420_p1 == 2'd0) & (1'b1 == ap_CS_fsm_state3))) begin
        ctx_data_0_we0 = 1'b1;
    end else begin
        ctx_data_0_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        ctx_data_1_address0 = zext_ln129_1_fu_434_p1;
    end else if (((1'b1 == ap_CS_fsm_state17) | (1'b1 == ap_CS_fsm_state16) | (1'b1 == ap_CS_fsm_state15) | (1'b1 == ap_CS_fsm_state14) | (1'b1 == ap_CS_fsm_state13) | (1'b1 == ap_CS_fsm_state12) | (1'b1 == ap_CS_fsm_state11) | (1'b1 == ap_CS_fsm_state10) | (1'b1 == ap_CS_fsm_state9))) begin
        ctx_data_1_address0 = grp_sha256_transform_fu_246_data_1_address0;
    end else begin
        ctx_data_1_address0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        ctx_data_1_ce0 = 1'b1;
    end else if (((1'b1 == ap_CS_fsm_state17) | (1'b1 == ap_CS_fsm_state16) | (1'b1 == ap_CS_fsm_state15) | (1'b1 == ap_CS_fsm_state14) | (1'b1 == ap_CS_fsm_state13) | (1'b1 == ap_CS_fsm_state12) | (1'b1 == ap_CS_fsm_state11) | (1'b1 == ap_CS_fsm_state10) | (1'b1 == ap_CS_fsm_state9))) begin
        ctx_data_1_ce0 = grp_sha256_transform_fu_246_data_1_ce0;
    end else begin
        ctx_data_1_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state17) | (1'b1 == ap_CS_fsm_state16) | (1'b1 == ap_CS_fsm_state15) | (1'b1 == ap_CS_fsm_state14) | (1'b1 == ap_CS_fsm_state13) | (1'b1 == ap_CS_fsm_state12) | (1'b1 == ap_CS_fsm_state11) | (1'b1 == ap_CS_fsm_state10) | (1'b1 == ap_CS_fsm_state9))) begin
        ctx_data_1_ce1 = grp_sha256_transform_fu_246_data_1_ce1;
    end else begin
        ctx_data_1_ce1 = 1'b0;
    end
end

always @ (*) begin
    if (((trunc_ln129_fu_420_p1 == 2'd1) & (1'b1 == ap_CS_fsm_state3))) begin
        ctx_data_1_we0 = 1'b1;
    end else begin
        ctx_data_1_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        ctx_data_2_address0 = zext_ln129_1_fu_434_p1;
    end else if (((1'b1 == ap_CS_fsm_state17) | (1'b1 == ap_CS_fsm_state16) | (1'b1 == ap_CS_fsm_state15) | (1'b1 == ap_CS_fsm_state14) | (1'b1 == ap_CS_fsm_state13) | (1'b1 == ap_CS_fsm_state12) | (1'b1 == ap_CS_fsm_state11) | (1'b1 == ap_CS_fsm_state10) | (1'b1 == ap_CS_fsm_state9))) begin
        ctx_data_2_address0 = grp_sha256_transform_fu_246_data_2_address0;
    end else begin
        ctx_data_2_address0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        ctx_data_2_ce0 = 1'b1;
    end else if (((1'b1 == ap_CS_fsm_state17) | (1'b1 == ap_CS_fsm_state16) | (1'b1 == ap_CS_fsm_state15) | (1'b1 == ap_CS_fsm_state14) | (1'b1 == ap_CS_fsm_state13) | (1'b1 == ap_CS_fsm_state12) | (1'b1 == ap_CS_fsm_state11) | (1'b1 == ap_CS_fsm_state10) | (1'b1 == ap_CS_fsm_state9))) begin
        ctx_data_2_ce0 = grp_sha256_transform_fu_246_data_2_ce0;
    end else begin
        ctx_data_2_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state17) | (1'b1 == ap_CS_fsm_state16) | (1'b1 == ap_CS_fsm_state15) | (1'b1 == ap_CS_fsm_state14) | (1'b1 == ap_CS_fsm_state13) | (1'b1 == ap_CS_fsm_state12) | (1'b1 == ap_CS_fsm_state11) | (1'b1 == ap_CS_fsm_state10) | (1'b1 == ap_CS_fsm_state9))) begin
        ctx_data_2_ce1 = grp_sha256_transform_fu_246_data_2_ce1;
    end else begin
        ctx_data_2_ce1 = 1'b0;
    end
end

always @ (*) begin
    if (((trunc_ln129_fu_420_p1 == 2'd2) & (1'b1 == ap_CS_fsm_state3))) begin
        ctx_data_2_we0 = 1'b1;
    end else begin
        ctx_data_2_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        ctx_data_3_address0 = zext_ln129_1_fu_434_p1;
    end else if (((1'b1 == ap_CS_fsm_state17) | (1'b1 == ap_CS_fsm_state16) | (1'b1 == ap_CS_fsm_state15) | (1'b1 == ap_CS_fsm_state14) | (1'b1 == ap_CS_fsm_state13) | (1'b1 == ap_CS_fsm_state12) | (1'b1 == ap_CS_fsm_state11) | (1'b1 == ap_CS_fsm_state10) | (1'b1 == ap_CS_fsm_state9))) begin
        ctx_data_3_address0 = grp_sha256_transform_fu_246_data_3_address0;
    end else begin
        ctx_data_3_address0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        ctx_data_3_ce0 = 1'b1;
    end else if (((1'b1 == ap_CS_fsm_state17) | (1'b1 == ap_CS_fsm_state16) | (1'b1 == ap_CS_fsm_state15) | (1'b1 == ap_CS_fsm_state14) | (1'b1 == ap_CS_fsm_state13) | (1'b1 == ap_CS_fsm_state12) | (1'b1 == ap_CS_fsm_state11) | (1'b1 == ap_CS_fsm_state10) | (1'b1 == ap_CS_fsm_state9))) begin
        ctx_data_3_ce0 = grp_sha256_transform_fu_246_data_3_ce0;
    end else begin
        ctx_data_3_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state17) | (1'b1 == ap_CS_fsm_state16) | (1'b1 == ap_CS_fsm_state15) | (1'b1 == ap_CS_fsm_state14) | (1'b1 == ap_CS_fsm_state13) | (1'b1 == ap_CS_fsm_state12) | (1'b1 == ap_CS_fsm_state11) | (1'b1 == ap_CS_fsm_state10) | (1'b1 == ap_CS_fsm_state9))) begin
        ctx_data_3_ce1 = grp_sha256_transform_fu_246_data_3_ce1;
    end else begin
        ctx_data_3_ce1 = 1'b0;
    end
end

always @ (*) begin
    if (((trunc_ln129_fu_420_p1 == 2'd3) & (1'b1 == ap_CS_fsm_state3))) begin
        ctx_data_3_we0 = 1'b1;
    end else begin
        ctx_data_3_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        data_ce0 = 1'b1;
    end else begin
        data_ce0 = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            if (((1'b1 == ap_CS_fsm_state2) & (icmp_ln127_fu_350_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
        end
        ap_ST_fsm_state3 : begin
            if (((1'b1 == ap_CS_fsm_state3) & (icmp_ln131_fu_451_p2 == 1'd0))) begin
                ap_NS_fsm = ap_ST_fsm_state49;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state4;
            end
        end
        ap_ST_fsm_state4 : begin
            ap_NS_fsm = ap_ST_fsm_state5;
        end
        ap_ST_fsm_state5 : begin
            ap_NS_fsm = ap_ST_fsm_state6;
        end
        ap_ST_fsm_state6 : begin
            ap_NS_fsm = ap_ST_fsm_state7;
        end
        ap_ST_fsm_state7 : begin
            ap_NS_fsm = ap_ST_fsm_state8;
        end
        ap_ST_fsm_state8 : begin
            ap_NS_fsm = ap_ST_fsm_state9;
        end
        ap_ST_fsm_state9 : begin
            ap_NS_fsm = ap_ST_fsm_state10;
        end
        ap_ST_fsm_state10 : begin
            ap_NS_fsm = ap_ST_fsm_state11;
        end
        ap_ST_fsm_state11 : begin
            ap_NS_fsm = ap_ST_fsm_state12;
        end
        ap_ST_fsm_state12 : begin
            ap_NS_fsm = ap_ST_fsm_state13;
        end
        ap_ST_fsm_state13 : begin
            ap_NS_fsm = ap_ST_fsm_state14;
        end
        ap_ST_fsm_state14 : begin
            ap_NS_fsm = ap_ST_fsm_state15;
        end
        ap_ST_fsm_state15 : begin
            ap_NS_fsm = ap_ST_fsm_state16;
        end
        ap_ST_fsm_state16 : begin
            ap_NS_fsm = ap_ST_fsm_state17;
        end
        ap_ST_fsm_state17 : begin
            ap_NS_fsm = ap_ST_fsm_state18;
        end
        ap_ST_fsm_state18 : begin
            ap_NS_fsm = ap_ST_fsm_state19;
        end
        ap_ST_fsm_state19 : begin
            ap_NS_fsm = ap_ST_fsm_state20;
        end
        ap_ST_fsm_state20 : begin
            ap_NS_fsm = ap_ST_fsm_state21;
        end
        ap_ST_fsm_state21 : begin
            ap_NS_fsm = ap_ST_fsm_state22;
        end
        ap_ST_fsm_state22 : begin
            ap_NS_fsm = ap_ST_fsm_state23;
        end
        ap_ST_fsm_state23 : begin
            ap_NS_fsm = ap_ST_fsm_state24;
        end
        ap_ST_fsm_state24 : begin
            ap_NS_fsm = ap_ST_fsm_state25;
        end
        ap_ST_fsm_state25 : begin
            ap_NS_fsm = ap_ST_fsm_state26;
        end
        ap_ST_fsm_state26 : begin
            ap_NS_fsm = ap_ST_fsm_state27;
        end
        ap_ST_fsm_state27 : begin
            ap_NS_fsm = ap_ST_fsm_state28;
        end
        ap_ST_fsm_state28 : begin
            ap_NS_fsm = ap_ST_fsm_state29;
        end
        ap_ST_fsm_state29 : begin
            ap_NS_fsm = ap_ST_fsm_state30;
        end
        ap_ST_fsm_state30 : begin
            ap_NS_fsm = ap_ST_fsm_state31;
        end
        ap_ST_fsm_state31 : begin
            ap_NS_fsm = ap_ST_fsm_state32;
        end
        ap_ST_fsm_state32 : begin
            ap_NS_fsm = ap_ST_fsm_state33;
        end
        ap_ST_fsm_state33 : begin
            ap_NS_fsm = ap_ST_fsm_state34;
        end
        ap_ST_fsm_state34 : begin
            ap_NS_fsm = ap_ST_fsm_state35;
        end
        ap_ST_fsm_state35 : begin
            ap_NS_fsm = ap_ST_fsm_state36;
        end
        ap_ST_fsm_state36 : begin
            ap_NS_fsm = ap_ST_fsm_state37;
        end
        ap_ST_fsm_state37 : begin
            ap_NS_fsm = ap_ST_fsm_state38;
        end
        ap_ST_fsm_state38 : begin
            ap_NS_fsm = ap_ST_fsm_state39;
        end
        ap_ST_fsm_state39 : begin
            ap_NS_fsm = ap_ST_fsm_state40;
        end
        ap_ST_fsm_state40 : begin
            ap_NS_fsm = ap_ST_fsm_state41;
        end
        ap_ST_fsm_state41 : begin
            ap_NS_fsm = ap_ST_fsm_state42;
        end
        ap_ST_fsm_state42 : begin
            ap_NS_fsm = ap_ST_fsm_state43;
        end
        ap_ST_fsm_state43 : begin
            ap_NS_fsm = ap_ST_fsm_state44;
        end
        ap_ST_fsm_state44 : begin
            ap_NS_fsm = ap_ST_fsm_state45;
        end
        ap_ST_fsm_state45 : begin
            ap_NS_fsm = ap_ST_fsm_state46;
        end
        ap_ST_fsm_state46 : begin
            ap_NS_fsm = ap_ST_fsm_state47;
        end
        ap_ST_fsm_state47 : begin
            ap_NS_fsm = ap_ST_fsm_state48;
        end
        ap_ST_fsm_state48 : begin
            ap_NS_fsm = ap_ST_fsm_state49;
        end
        ap_ST_fsm_state49 : begin
            ap_NS_fsm = ap_ST_fsm_state2;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign add_ln130_fu_445_p2 = (ctx_datalen_0_fu_70 + 32'd1);

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state10 = ap_CS_fsm[32'd9];

assign ap_CS_fsm_state11 = ap_CS_fsm[32'd10];

assign ap_CS_fsm_state12 = ap_CS_fsm[32'd11];

assign ap_CS_fsm_state13 = ap_CS_fsm[32'd12];

assign ap_CS_fsm_state14 = ap_CS_fsm[32'd13];

assign ap_CS_fsm_state15 = ap_CS_fsm[32'd14];

assign ap_CS_fsm_state16 = ap_CS_fsm[32'd15];

assign ap_CS_fsm_state17 = ap_CS_fsm[32'd16];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state49 = ap_CS_fsm[32'd48];

assign ap_CS_fsm_state8 = ap_CS_fsm[32'd7];

assign ap_CS_fsm_state9 = ap_CS_fsm[32'd8];

assign ap_NS_fsm_state9 = ap_NS_fsm[32'd8];

assign ap_return_0 = ctx_datalen_0_fu_70;

assign ap_return_1 = ctx_state_0_0_fu_102;

assign ap_return_2 = ctx_state_1_0_fu_98;

assign ap_return_3 = ctx_state_2_0_fu_94;

assign ap_return_4 = ctx_state_3_0_fu_90;

assign ap_return_5 = ctx_state_4_0_fu_86;

assign ap_return_6 = ctx_state_5_0_fu_82;

assign ap_return_7 = ctx_state_6_0_fu_78;

assign ap_return_8 = ctx_state_7_0_fu_74;

assign ctx_data_0_address1 = grp_sha256_transform_fu_246_data_0_address1;

assign ctx_data_0_d0 = data_q0;

assign ctx_data_1_address1 = grp_sha256_transform_fu_246_data_1_address1;

assign ctx_data_1_d0 = data_q0;

assign ctx_data_2_address1 = grp_sha256_transform_fu_246_data_2_address1;

assign ctx_data_2_d0 = data_q0;

assign ctx_data_3_address1 = grp_sha256_transform_fu_246_data_3_address1;

assign ctx_data_3_d0 = data_q0;

assign data_address0 = zext_ln129_fu_361_p1;

assign empty_fu_301_p1 = len[6:0];

assign grp_sha256_transform_fu_246_ap_start = grp_sha256_transform_fu_246_ap_start_reg;

assign i_fu_355_p2 = (i_0_reg_235 + 7'd1);

assign icmp_ln127_fu_350_p2 = ((i_0_reg_235 == empty_reg_604) ? 1'b1 : 1'b0);

assign icmp_ln131_fu_451_p2 = ((add_ln130_fu_445_p2 == 32'd64) ? 1'b1 : 1'b0);

assign lshr_ln_fu_424_p4 = {{ctx_datalen_0_fu_70[31:2]}};

assign trunc_ln129_fu_420_p1 = ctx_datalen_0_fu_70[1:0];

assign zext_ln129_1_fu_434_p1 = lshr_ln_fu_424_p4;

assign zext_ln129_fu_361_p1 = i_0_reg_235;

endmodule //sha256_update
