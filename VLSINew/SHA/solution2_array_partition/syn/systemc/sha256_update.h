// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _sha256_update_HH_
#define _sha256_update_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "sha256_transform.h"

namespace ap_rtl {

struct sha256_update : public sc_module {
    // Port declarations 52
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<4> > ctx_data_0_address0;
    sc_out< sc_logic > ctx_data_0_ce0;
    sc_out< sc_logic > ctx_data_0_we0;
    sc_out< sc_lv<8> > ctx_data_0_d0;
    sc_in< sc_lv<8> > ctx_data_0_q0;
    sc_out< sc_lv<4> > ctx_data_1_address0;
    sc_out< sc_logic > ctx_data_1_ce0;
    sc_out< sc_logic > ctx_data_1_we0;
    sc_out< sc_lv<8> > ctx_data_1_d0;
    sc_in< sc_lv<8> > ctx_data_1_q0;
    sc_out< sc_lv<4> > ctx_data_2_address0;
    sc_out< sc_logic > ctx_data_2_ce0;
    sc_out< sc_logic > ctx_data_2_we0;
    sc_out< sc_lv<8> > ctx_data_2_d0;
    sc_in< sc_lv<8> > ctx_data_2_q0;
    sc_out< sc_lv<4> > ctx_data_3_address0;
    sc_out< sc_logic > ctx_data_3_ce0;
    sc_out< sc_logic > ctx_data_3_we0;
    sc_out< sc_lv<8> > ctx_data_3_d0;
    sc_in< sc_lv<8> > ctx_data_3_q0;
    sc_in< sc_lv<32> > ctx_datalen_read;
    sc_in< sc_lv<32> > p_read1;
    sc_in< sc_lv<32> > p_read2;
    sc_in< sc_lv<32> > p_read3;
    sc_in< sc_lv<32> > p_read4;
    sc_in< sc_lv<32> > p_read5;
    sc_in< sc_lv<32> > p_read6;
    sc_in< sc_lv<32> > p_read7;
    sc_in< sc_lv<32> > p_read8;
    sc_in< sc_lv<32> > p_read9;
    sc_in< sc_lv<32> > p_read10;
    sc_out< sc_lv<6> > data_address0;
    sc_out< sc_logic > data_ce0;
    sc_in< sc_lv<8> > data_q0;
    sc_in< sc_lv<32> > len;
    sc_out< sc_lv<32> > ap_return_0;
    sc_out< sc_lv<32> > ap_return_1;
    sc_out< sc_lv<32> > ap_return_2;
    sc_out< sc_lv<32> > ap_return_3;
    sc_out< sc_lv<32> > ap_return_4;
    sc_out< sc_lv<32> > ap_return_5;
    sc_out< sc_lv<32> > ap_return_6;
    sc_out< sc_lv<32> > ap_return_7;
    sc_out< sc_lv<32> > ap_return_8;
    sc_out< sc_lv<32> > ap_return_9;
    sc_out< sc_lv<32> > ap_return_10;


    // Module declarations
    sha256_update(sc_module_name name);
    SC_HAS_PROCESS(sha256_update);

    ~sha256_update();

    sc_trace_file* mVcdFile;

    sha256_transform* grp_sha256_transform_fu_276;
    sc_signal< sc_lv<5> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<7> > empty_fu_339_p1;
    sc_signal< sc_lv<7> > empty_reg_714;
    sc_signal< sc_lv<7> > i_fu_403_p2;
    sc_signal< sc_lv<7> > i_reg_722;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<1> > icmp_ln94_fu_398_p2;
    sc_signal< sc_lv<1> > icmp_ln98_fu_511_p2;
    sc_signal< sc_lv<1> > icmp_ln98_reg_735;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<32> > ctx_state_7_0_load_1_reg_739;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<32> > ctx_state_6_0_load_1_reg_744;
    sc_signal< sc_lv<32> > ctx_state_5_0_load_1_reg_749;
    sc_signal< sc_lv<32> > ctx_state_4_0_load_1_reg_754;
    sc_signal< sc_lv<32> > ctx_state_3_0_load_1_reg_759;
    sc_signal< sc_lv<32> > ctx_state_2_0_load_1_reg_764;
    sc_signal< sc_lv<32> > ctx_state_1_0_load_1_reg_769;
    sc_signal< sc_lv<32> > ctx_state_0_0_load_1_reg_774;
    sc_signal< sc_logic > grp_sha256_transform_fu_276_ap_start;
    sc_signal< sc_logic > grp_sha256_transform_fu_276_ap_done;
    sc_signal< sc_logic > grp_sha256_transform_fu_276_ap_idle;
    sc_signal< sc_logic > grp_sha256_transform_fu_276_ap_ready;
    sc_signal< sc_lv<4> > grp_sha256_transform_fu_276_data_0_address0;
    sc_signal< sc_logic > grp_sha256_transform_fu_276_data_0_ce0;
    sc_signal< sc_lv<4> > grp_sha256_transform_fu_276_data_1_address0;
    sc_signal< sc_logic > grp_sha256_transform_fu_276_data_1_ce0;
    sc_signal< sc_lv<4> > grp_sha256_transform_fu_276_data_2_address0;
    sc_signal< sc_logic > grp_sha256_transform_fu_276_data_2_ce0;
    sc_signal< sc_lv<4> > grp_sha256_transform_fu_276_data_3_address0;
    sc_signal< sc_logic > grp_sha256_transform_fu_276_data_3_ce0;
    sc_signal< sc_lv<32> > grp_sha256_transform_fu_276_ap_return_0;
    sc_signal< sc_lv<32> > grp_sha256_transform_fu_276_ap_return_1;
    sc_signal< sc_lv<32> > grp_sha256_transform_fu_276_ap_return_2;
    sc_signal< sc_lv<32> > grp_sha256_transform_fu_276_ap_return_3;
    sc_signal< sc_lv<32> > grp_sha256_transform_fu_276_ap_return_4;
    sc_signal< sc_lv<32> > grp_sha256_transform_fu_276_ap_return_5;
    sc_signal< sc_lv<32> > grp_sha256_transform_fu_276_ap_return_6;
    sc_signal< sc_lv<32> > grp_sha256_transform_fu_276_ap_return_7;
    sc_signal< sc_lv<7> > i_0_reg_265;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< bool > ap_block_state5_on_subcall_done;
    sc_signal< sc_logic > grp_sha256_transform_fu_276_ap_start_reg;
    sc_signal< sc_lv<64> > zext_ln96_fu_409_p1;
    sc_signal< sc_lv<64> > zext_ln96_1_fu_494_p1;
    sc_signal< sc_lv<32> > ctx_datalen_0_fu_80;
    sc_signal< sc_lv<32> > add_ln97_fu_505_p2;
    sc_signal< sc_lv<32> > ctx_state_7_0_fu_84;
    sc_signal< sc_lv<32> > ctx_state_6_0_fu_88;
    sc_signal< sc_lv<32> > ctx_state_5_0_fu_92;
    sc_signal< sc_lv<32> > ctx_state_4_0_fu_96;
    sc_signal< sc_lv<32> > ctx_state_3_0_fu_100;
    sc_signal< sc_lv<32> > ctx_state_2_0_fu_104;
    sc_signal< sc_lv<32> > ctx_state_1_0_fu_108;
    sc_signal< sc_lv<32> > ctx_state_0_0_fu_112;
    sc_signal< sc_lv<32> > ctx_bitlen_1_0_fu_116;
    sc_signal< sc_lv<32> > select_ln100_fu_571_p3;
    sc_signal< sc_lv<32> > ctx_bitlen_0_0_fu_120;
    sc_signal< sc_lv<32> > add_ln100_1_fu_579_p2;
    sc_signal< sc_lv<2> > trunc_ln96_fu_480_p1;
    sc_signal< sc_lv<30> > lshr_ln_fu_484_p4;
    sc_signal< sc_lv<1> > icmp_ln100_fu_559_p2;
    sc_signal< sc_lv<32> > add_ln100_fu_565_p2;
    sc_signal< sc_lv<5> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<5> ap_ST_fsm_state1;
    static const sc_lv<5> ap_ST_fsm_state2;
    static const sc_lv<5> ap_ST_fsm_state3;
    static const sc_lv<5> ap_ST_fsm_state4;
    static const sc_lv<5> ap_ST_fsm_state5;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<7> ap_const_lv7_0;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<1> ap_const_lv1_1;
    static const bool ap_const_boolean_0;
    static const sc_lv<2> ap_const_lv2_2;
    static const sc_lv<2> ap_const_lv2_1;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<2> ap_const_lv2_3;
    static const sc_lv<7> ap_const_lv7_1;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<32> ap_const_lv32_40;
    static const sc_lv<32> ap_const_lv32_FFFFFDFF;
    static const sc_lv<32> ap_const_lv32_200;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_add_ln100_1_fu_579_p2();
    void thread_add_ln100_fu_565_p2();
    void thread_add_ln97_fu_505_p2();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_block_state5_on_subcall_done();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_return_0();
    void thread_ap_return_1();
    void thread_ap_return_10();
    void thread_ap_return_2();
    void thread_ap_return_3();
    void thread_ap_return_4();
    void thread_ap_return_5();
    void thread_ap_return_6();
    void thread_ap_return_7();
    void thread_ap_return_8();
    void thread_ap_return_9();
    void thread_ctx_data_0_address0();
    void thread_ctx_data_0_ce0();
    void thread_ctx_data_0_d0();
    void thread_ctx_data_0_we0();
    void thread_ctx_data_1_address0();
    void thread_ctx_data_1_ce0();
    void thread_ctx_data_1_d0();
    void thread_ctx_data_1_we0();
    void thread_ctx_data_2_address0();
    void thread_ctx_data_2_ce0();
    void thread_ctx_data_2_d0();
    void thread_ctx_data_2_we0();
    void thread_ctx_data_3_address0();
    void thread_ctx_data_3_ce0();
    void thread_ctx_data_3_d0();
    void thread_ctx_data_3_we0();
    void thread_data_address0();
    void thread_data_ce0();
    void thread_empty_fu_339_p1();
    void thread_grp_sha256_transform_fu_276_ap_start();
    void thread_i_fu_403_p2();
    void thread_icmp_ln100_fu_559_p2();
    void thread_icmp_ln94_fu_398_p2();
    void thread_icmp_ln98_fu_511_p2();
    void thread_lshr_ln_fu_484_p4();
    void thread_select_ln100_fu_571_p3();
    void thread_trunc_ln96_fu_480_p1();
    void thread_zext_ln96_1_fu_494_p1();
    void thread_zext_ln96_fu_409_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif