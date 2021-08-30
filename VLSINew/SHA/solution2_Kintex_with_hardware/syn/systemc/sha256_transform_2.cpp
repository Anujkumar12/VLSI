#include "sha256_transform.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void sha256_transform::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_pp0_stage0;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter0_reg = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read())) {
            ap_enable_reg_pp0_iter0_reg = ap_start.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter1 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7_subdone.read(), ap_const_boolean_0))) {
            ap_enable_reg_pp0_iter1 = ap_enable_reg_pp0_iter0.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter2 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7_subdone.read(), ap_const_boolean_0))) {
            ap_enable_reg_pp0_iter2 = ap_enable_reg_pp0_iter1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter3 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7_subdone.read(), ap_const_boolean_0))) {
            ap_enable_reg_pp0_iter3 = ap_enable_reg_pp0_iter2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter4 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7_subdone.read(), ap_const_boolean_0))) {
            ap_enable_reg_pp0_iter4 = ap_enable_reg_pp0_iter3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter5 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7_subdone.read(), ap_const_boolean_0))) {
            ap_enable_reg_pp0_iter5 = ap_enable_reg_pp0_iter4.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
                    esl_seteq<1,1,1>(ap_enable_reg_pp0_iter4.read(), ap_const_logic_0))) {
            ap_enable_reg_pp0_iter5 = ap_const_logic_0;
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1))) {
        add_ln100_reg_6964 = add_ln100_fu_4958_p2.read();
        add_ln102_reg_6969 = add_ln102_fu_4962_p2.read();
        add_ln103_reg_6974 = add_ln103_fu_4967_p2.read();
        add_ln104_reg_6979 = add_ln104_fu_4971_p2.read();
        add_ln85_154_reg_6524 = add_ln85_154_fu_3862_p2.read();
        add_ln85_207_reg_6752 = add_ln85_207_fu_4442_p2.read();
        add_ln85_254_reg_6313 = add_ln85_254_fu_3296_p2.read();
        add_ln85_254_reg_6313_pp0_iter2_reg = add_ln85_254_reg_6313.read();
        add_ln85_254_reg_6313_pp0_iter3_reg = add_ln85_254_reg_6313_pp0_iter2_reg.read();
        add_ln85_255_reg_6943 = add_ln85_255_fu_4939_p2.read();
        add_ln85_47_reg_5720 = add_ln85_47_fu_1993_p2.read();
        add_ln90_10_reg_5706 = add_ln90_10_fu_1956_p2.read();
        add_ln90_23_reg_6287 = add_ln90_23_fu_3220_p2.read();
        add_ln90_24_reg_6299 = add_ln90_24_fu_3265_p2.read();
        add_ln90_36_reg_6504 = add_ln90_36_fu_3807_p2.read();
        add_ln90_37_reg_6510 = add_ln90_37_fu_3836_p2.read();
        add_ln90_50_reg_6738 = add_ln90_50_fu_4405_p2.read();
        add_ln94_10_reg_5713 = add_ln94_10_fu_1969_p2.read();
        add_ln94_11_reg_5725 = add_ln94_11_fu_2005_p2.read();
        add_ln94_23_reg_6293 = add_ln94_23_fu_3234_p2.read();
        add_ln94_24_reg_6306 = add_ln94_24_fu_3278_p2.read();
        add_ln94_37_reg_6517 = add_ln94_37_fu_3849_p2.read();
        add_ln94_50_reg_6745 = add_ln94_50_fu_4418_p2.read();
        add_ln94_51_reg_6757 = add_ln94_51_fu_4454_p2.read();
        add_ln97_2_reg_6949 = add_ln97_2_fu_4944_p2.read();
        add_ln98_reg_6954 = add_ln98_fu_4949_p2.read();
        add_ln99_reg_6959 = add_ln99_fu_4954_p2.read();
        m_12_reg_5642 = m_12_fu_1908_p5.read();
        m_13_reg_5649 = m_13_fu_1921_p5.read();
        m_58_reg_6257 = m_58_fu_3158_p2.read();
        m_58_reg_6257_pp0_iter2_reg = m_58_reg_6257.read();
        m_58_reg_6257_pp0_iter3_reg = m_58_reg_6257_pp0_iter2_reg.read();
        m_59_reg_6262 = m_59_fu_3169_p2.read();
        m_59_reg_6262_pp0_iter2_reg = m_59_reg_6262.read();
        m_59_reg_6262_pp0_iter3_reg = m_59_reg_6262_pp0_iter2_reg.read();
        m_60_reg_6267 = m_60_fu_3186_p2.read();
        m_60_reg_6267_pp0_iter2_reg = m_60_reg_6267.read();
        m_60_reg_6267_pp0_iter3_reg = m_60_reg_6267_pp0_iter2_reg.read();
        m_61_reg_6272 = m_61_fu_3203_p2.read();
        m_61_reg_6272_pp0_iter2_reg = m_61_reg_6272.read();
        m_61_reg_6272_pp0_iter3_reg = m_61_reg_6272_pp0_iter2_reg.read();
        tmp_1_46_reg_6282_pp0_iter2_reg = tmp_1_46_reg_6282.read();
        tmp_47_reg_6277_pp0_iter2_reg = tmp_47_reg_6277.read();
        tmp_47_reg_6277_pp0_iter3_reg = tmp_47_reg_6277_pp0_iter2_reg.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        add_ln85_107_reg_6332 = add_ln85_107_fu_3361_p2.read();
        add_ln85_214_reg_6786 = add_ln85_214_fu_4515_p2.read();
        add_ln85_54_reg_5813 = add_ln85_54_fu_2184_p2.read();
        add_ln90_11_reg_5793 = add_ln90_11_fu_2129_p2.read();
        add_ln90_12_reg_5799 = add_ln90_12_fu_2158_p2.read();
        add_ln90_25_reg_6318 = add_ln90_25_fu_3324_p2.read();
        add_ln90_38_reg_6529 = add_ln90_38_fu_3878_p2.read();
        add_ln90_39_reg_6541 = add_ln90_39_fu_3923_p2.read();
        add_ln90_51_reg_6766 = add_ln90_51_fu_4460_p2.read();
        add_ln90_52_reg_6772 = add_ln90_52_fu_4489_p2.read();
        add_ln94_12_reg_5806 = add_ln94_12_fu_2171_p2.read();
        add_ln94_25_reg_6325 = add_ln94_25_fu_3337_p2.read();
        add_ln94_26_reg_6337 = add_ln94_26_fu_3373_p2.read();
        add_ln94_38_reg_6535 = add_ln94_38_fu_3892_p2.read();
        add_ln94_39_reg_6548 = add_ln94_39_fu_3936_p2.read();
        add_ln94_52_reg_6779 = add_ln94_52_fu_4502_p2.read();
        ctx_state_0_read_1_reg_5070 = ctx_state_0_read.read();
        ctx_state_0_read_1_reg_5070_pp0_iter1_reg = ctx_state_0_read_1_reg_5070.read();
        ctx_state_0_read_1_reg_5070_pp0_iter2_reg = ctx_state_0_read_1_reg_5070_pp0_iter1_reg.read();
        ctx_state_0_read_1_reg_5070_pp0_iter3_reg = ctx_state_0_read_1_reg_5070_pp0_iter2_reg.read();
        ctx_state_0_read_1_reg_5070_pp0_iter4_reg = ctx_state_0_read_1_reg_5070_pp0_iter3_reg.read();
        ctx_state_1_read_1_reg_5063 = ctx_state_1_read.read();
        ctx_state_1_read_1_reg_5063_pp0_iter1_reg = ctx_state_1_read_1_reg_5063.read();
        ctx_state_1_read_1_reg_5063_pp0_iter2_reg = ctx_state_1_read_1_reg_5063_pp0_iter1_reg.read();
        ctx_state_1_read_1_reg_5063_pp0_iter3_reg = ctx_state_1_read_1_reg_5063_pp0_iter2_reg.read();
        ctx_state_1_read_1_reg_5063_pp0_iter4_reg = ctx_state_1_read_1_reg_5063_pp0_iter3_reg.read();
        ctx_state_2_read_1_reg_5057 = ctx_state_2_read.read();
        ctx_state_2_read_1_reg_5057_pp0_iter1_reg = ctx_state_2_read_1_reg_5057.read();
        ctx_state_2_read_1_reg_5057_pp0_iter2_reg = ctx_state_2_read_1_reg_5057_pp0_iter1_reg.read();
        ctx_state_2_read_1_reg_5057_pp0_iter3_reg = ctx_state_2_read_1_reg_5057_pp0_iter2_reg.read();
        ctx_state_2_read_1_reg_5057_pp0_iter4_reg = ctx_state_2_read_1_reg_5057_pp0_iter3_reg.read();
        ctx_state_4_read_1_reg_5049 = ctx_state_4_read.read();
        ctx_state_4_read_1_reg_5049_pp0_iter1_reg = ctx_state_4_read_1_reg_5049.read();
        ctx_state_4_read_1_reg_5049_pp0_iter2_reg = ctx_state_4_read_1_reg_5049_pp0_iter1_reg.read();
        ctx_state_4_read_1_reg_5049_pp0_iter3_reg = ctx_state_4_read_1_reg_5049_pp0_iter2_reg.read();
        ctx_state_4_read_1_reg_5049_pp0_iter4_reg = ctx_state_4_read_1_reg_5049_pp0_iter3_reg.read();
        ctx_state_5_read_1_reg_5042 = ctx_state_5_read.read();
        ctx_state_5_read_1_reg_5042_pp0_iter1_reg = ctx_state_5_read_1_reg_5042.read();
        ctx_state_5_read_1_reg_5042_pp0_iter2_reg = ctx_state_5_read_1_reg_5042_pp0_iter1_reg.read();
        ctx_state_5_read_1_reg_5042_pp0_iter3_reg = ctx_state_5_read_1_reg_5042_pp0_iter2_reg.read();
        ctx_state_5_read_1_reg_5042_pp0_iter4_reg = ctx_state_5_read_1_reg_5042_pp0_iter3_reg.read();
        ctx_state_6_read_1_reg_5036 = ctx_state_6_read.read();
        ctx_state_6_read_1_reg_5036_pp0_iter1_reg = ctx_state_6_read_1_reg_5036.read();
        ctx_state_6_read_1_reg_5036_pp0_iter2_reg = ctx_state_6_read_1_reg_5036_pp0_iter1_reg.read();
        ctx_state_6_read_1_reg_5036_pp0_iter3_reg = ctx_state_6_read_1_reg_5036_pp0_iter2_reg.read();
        ctx_state_6_read_1_reg_5036_pp0_iter4_reg = ctx_state_6_read_1_reg_5036_pp0_iter3_reg.read();
        m_14_reg_5734 = m_14_fu_2011_p5.read();
        m_15_reg_5740 = m_15_fu_2025_p5.read();
        m_16_reg_5747 = m_16_fu_2048_p2.read();
        m_17_reg_5754 = m_17_fu_2060_p2.read();
        m_18_reg_5761 = m_18_fu_2072_p2.read();
        m_19_reg_5768 = m_19_fu_2089_p2.read();
        m_20_reg_5775 = m_20_fu_2107_p2.read();
        m_21_reg_5784 = m_21_fu_2123_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0))) {
        add_ln85_114_reg_6366 = add_ln85_114_fu_3434_p2.read();
        add_ln85_167_reg_6589 = add_ln85_167_fu_3999_p2.read();
        add_ln85_7_reg_5207 = add_ln85_7_fu_1402_p2.read();
        add_ln90_13_reg_5865 = add_ln90_13_fu_2297_p2.read();
        add_ln90_14_reg_5877 = add_ln90_14_fu_2342_p2.read();
        add_ln90_26_reg_6346 = add_ln90_26_fu_3379_p2.read();
        add_ln90_27_reg_6352 = add_ln90_27_fu_3408_p2.read();
        add_ln90_40_reg_6575 = add_ln90_40_fu_3964_p2.read();
        add_ln90_53_reg_6791 = add_ln90_53_fu_4531_p2.read();
        add_ln90_54_reg_6803 = add_ln90_54_fu_4576_p2.read();
        add_ln90_reg_5193 = add_ln90_fu_1363_p2.read();
        add_ln94_13_reg_5871 = add_ln94_13_fu_2311_p2.read();
        add_ln94_14_reg_5884 = add_ln94_14_fu_2355_p2.read();
        add_ln94_27_reg_6359 = add_ln94_27_fu_3421_p2.read();
        add_ln94_40_reg_6582 = add_ln94_40_fu_3976_p2.read();
        add_ln94_41_reg_6594 = add_ln94_41_fu_4011_p2.read();
        add_ln94_53_reg_6797 = add_ln94_53_fu_4545_p2.read();
        add_ln94_54_reg_6810 = add_ln94_54_fu_4589_p2.read();
        add_ln94_reg_5200 = add_ln94_fu_1377_p2.read();
        ctx_state_3_read_1_reg_5133 = ap_port_reg_ctx_state_3_read.read();
        ctx_state_3_read_1_reg_5133_pp0_iter1_reg = ctx_state_3_read_1_reg_5133.read();
        ctx_state_3_read_1_reg_5133_pp0_iter2_reg = ctx_state_3_read_1_reg_5133_pp0_iter1_reg.read();
        ctx_state_3_read_1_reg_5133_pp0_iter3_reg = ctx_state_3_read_1_reg_5133_pp0_iter2_reg.read();
        ctx_state_3_read_1_reg_5133_pp0_iter4_reg = ctx_state_3_read_1_reg_5133_pp0_iter3_reg.read();
        ctx_state_7_read_1_reg_5128 = ap_port_reg_ctx_state_7_read.read();
        ctx_state_7_read_1_reg_5128_pp0_iter1_reg = ctx_state_7_read_1_reg_5128.read();
        ctx_state_7_read_1_reg_5128_pp0_iter2_reg = ctx_state_7_read_1_reg_5128_pp0_iter1_reg.read();
        ctx_state_7_read_1_reg_5128_pp0_iter3_reg = ctx_state_7_read_1_reg_5128_pp0_iter2_reg.read();
        ctx_state_7_read_1_reg_5128_pp0_iter4_reg = ctx_state_7_read_1_reg_5128_pp0_iter3_reg.read();
        m_0_reg_5138 = m_0_fu_1316_p5.read();
        m_1_reg_5143 = m_1_fu_1328_p5.read();
        m_22_reg_5818 = m_22_fu_2198_p2.read();
        m_23_reg_5825 = m_23_fu_2215_p2.read();
        m_24_reg_5832 = m_24_fu_2232_p2.read();
        m_25_reg_5839 = m_25_fu_2249_p2.read();
        m_26_reg_5847 = m_26_fu_2265_p2.read();
        m_27_reg_5856 = m_27_fu_2280_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0))) {
        add_ln85_127_reg_6411 = add_ln85_127_fu_3575_p2.read();
        add_ln85_74_reg_6043 = add_ln85_74_fu_2677_p2.read();
        add_ln90_16_reg_6023 = add_ln90_16_fu_2622_p2.read();
        add_ln90_17_reg_6029 = add_ln90_17_fu_2651_p2.read();
        add_ln90_30_reg_6397 = add_ln90_30_fu_3538_p2.read();
        add_ln90_3_reg_5350 = add_ln90_3_fu_1547_p2.read();
        add_ln90_43_reg_6628 = add_ln90_43_fu_4088_p2.read();
        add_ln90_44_reg_6640 = add_ln90_44_fu_4133_p2.read();
        add_ln90_4_reg_5362 = add_ln90_4_fu_1593_p2.read();
        add_ln90_56_reg_6850 = add_ln90_56_fu_4673_p2.read();
        add_ln90_57_reg_6857 = add_ln90_57_fu_4701_p2.read();
        add_ln94_17_reg_6036 = add_ln94_17_fu_2664_p2.read();
        add_ln94_30_reg_6404 = add_ln94_30_fu_3551_p2.read();
        add_ln94_31_reg_6416 = add_ln94_31_fu_3587_p2.read();
        add_ln94_3_reg_5356 = add_ln94_3_fu_1561_p2.read();
        add_ln94_43_reg_6634 = add_ln94_43_fu_4102_p2.read();
        add_ln94_44_reg_6647 = add_ln94_44_fu_4146_p2.read();
        add_ln94_4_reg_5369 = add_ln94_4_fu_1606_p2.read();
        add_ln94_57_reg_6866 = add_ln94_57_fu_4712_p2.read();
        m_34_reg_5973 = m_34_fu_2538_p2.read();
        m_34_reg_5973_pp0_iter2_reg = m_34_reg_5973.read();
        m_35_reg_5981 = m_35_fu_2555_p2.read();
        m_35_reg_5981_pp0_iter2_reg = m_35_reg_5981.read();
        m_36_reg_5989 = m_36_fu_2572_p2.read();
        m_36_reg_5989_pp0_iter2_reg = m_36_reg_5989.read();
        m_37_reg_5997 = m_37_fu_2589_p2.read();
        m_37_reg_5997_pp0_iter2_reg = m_37_reg_5997.read();
        m_38_reg_6005 = m_38_fu_2606_p2.read();
        m_38_reg_6005_pp0_iter2_reg = m_38_reg_6005.read();
        m_39_reg_6014 = m_39_fu_2616_p2.read();
        m_39_reg_6014_pp0_iter2_reg = m_39_reg_6014.read();
        m_4_reg_5294 = m_4_fu_1511_p5.read();
        m_5_reg_5299 = m_5_fu_1524_p5.read();
    }
    if ((esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0))) {
        add_ln85_134_reg_6445 = add_ln85_134_fu_3648_p2.read();
        add_ln85_187_reg_6668 = add_ln85_187_fu_4213_p2.read();
        add_ln85_239_reg_6889 = add_ln85_239_fu_4777_p2.read();
        add_ln85_27_reg_5451 = add_ln85_27_fu_1700_p2.read();
        add_ln90_18_reg_6098 = add_ln90_18_fu_2774_p2.read();
        add_ln90_19_reg_6110 = add_ln90_19_fu_2819_p2.read();
        add_ln90_31_reg_6425 = add_ln90_31_fu_3593_p2.read();
        add_ln90_32_reg_6431 = add_ln90_32_fu_3622_p2.read();
        add_ln90_45_reg_6654 = add_ln90_45_fu_4176_p2.read();
        add_ln90_58_reg_6875 = add_ln90_58_fu_4740_p2.read();
        add_ln90_5_reg_5437 = add_ln90_5_fu_1662_p2.read();
        add_ln94_18_reg_6104 = add_ln94_18_fu_2788_p2.read();
        add_ln94_19_reg_6117 = add_ln94_19_fu_2832_p2.read();
        add_ln94_32_reg_6438 = add_ln94_32_fu_3635_p2.read();
        add_ln94_45_reg_6661 = add_ln94_45_fu_4189_p2.read();
        add_ln94_46_reg_6673 = add_ln94_46_fu_4225_p2.read();
        add_ln94_58_reg_6882 = add_ln94_58_fu_4753_p2.read();
        add_ln94_5_reg_5444 = add_ln94_5_fu_1675_p2.read();
        add_ln94_6_reg_5456 = add_ln94_6_fu_1712_p2.read();
        m_40_reg_6048 = m_40_fu_2687_p2.read();
        m_40_reg_6048_pp0_iter2_reg = m_40_reg_6048.read();
        m_41_reg_6056 = m_41_fu_2698_p2.read();
        m_41_reg_6056_pp0_iter2_reg = m_41_reg_6056.read();
        m_42_reg_6064 = m_42_fu_2709_p2.read();
        m_42_reg_6064_pp0_iter2_reg = m_42_reg_6064.read();
        m_43_reg_6072 = m_43_fu_2725_p2.read();
        m_43_reg_6072_pp0_iter2_reg = m_43_reg_6072.read();
        m_44_reg_6080 = m_44_fu_2742_p2.read();
        m_44_reg_6080_pp0_iter2_reg = m_44_reg_6080.read();
        m_45_reg_6089 = m_45_fu_2758_p2.read();
        m_45_reg_6089_pp0_iter2_reg = m_45_reg_6089.read();
        m_6_reg_5376 = m_6_fu_1614_p5.read();
        m_7_reg_5381 = m_7_fu_1627_p5.read();
    }
    if ((esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0))) {
        add_ln85_147_reg_6490 = add_ln85_147_fu_3789_p2.read();
        add_ln85_94_reg_6252 = add_ln85_94_fu_3142_p2.read();
        add_ln90_21_reg_6232 = add_ln90_21_fu_3087_p2.read();
        add_ln90_22_reg_6238 = add_ln90_22_fu_3116_p2.read();
        add_ln90_35_reg_6476 = add_ln90_35_fu_3752_p2.read();
        add_ln90_48_reg_6712 = add_ln90_48_fu_4317_p2.read();
        add_ln90_49_reg_6724 = add_ln90_49_fu_4362_p2.read();
        add_ln90_61_reg_6927 = add_ln90_61_fu_4863_p2.read();
        add_ln90_8_reg_5616 = add_ln90_8_fu_1842_p2.read();
        add_ln90_9_reg_5628 = add_ln90_9_fu_1887_p2.read();
        add_ln94_22_reg_6245 = add_ln94_22_fu_3129_p2.read();
        add_ln94_35_reg_6483 = add_ln94_35_fu_3765_p2.read();
        add_ln94_36_reg_6495 = add_ln94_36_fu_3801_p2.read();
        add_ln94_48_reg_6718 = add_ln94_48_fu_4331_p2.read();
        add_ln94_49_reg_6731 = add_ln94_49_fu_4375_p2.read();
        add_ln94_61_reg_6935 = add_ln94_61_fu_4874_p2.read();
        add_ln94_8_reg_5622 = add_ln94_8_fu_1856_p2.read();
        add_ln94_9_reg_5635 = add_ln94_9_fu_1900_p2.read();
        m_10_reg_5552 = m_10_fu_1806_p5.read();
        m_11_reg_5559 = m_11_fu_1819_p5.read();
        m_52_reg_6195 = m_52_fu_3009_p2.read();
        m_52_reg_6195_pp0_iter2_reg = m_52_reg_6195.read();
        m_52_reg_6195_pp0_iter3_reg = m_52_reg_6195_pp0_iter2_reg.read();
        m_53_reg_6201 = m_53_fu_3020_p2.read();
        m_53_reg_6201_pp0_iter2_reg = m_53_reg_6201.read();
        m_53_reg_6201_pp0_iter3_reg = m_53_reg_6201_pp0_iter2_reg.read();
        m_54_reg_6207 = m_54_fu_3031_p2.read();
        m_54_reg_6207_pp0_iter2_reg = m_54_reg_6207.read();
        m_54_reg_6207_pp0_iter3_reg = m_54_reg_6207_pp0_iter2_reg.read();
        m_55_reg_6213 = m_55_fu_3048_p2.read();
        m_55_reg_6213_pp0_iter2_reg = m_55_reg_6213.read();
        m_55_reg_6213_pp0_iter3_reg = m_55_reg_6213_pp0_iter2_reg.read();
        m_56_reg_6219 = m_56_fu_3065_p2.read();
        m_56_reg_6219_pp0_iter2_reg = m_56_reg_6219.read();
        m_56_reg_6219_pp0_iter3_reg = m_56_reg_6219_pp0_iter2_reg.read();
        m_57_reg_6226 = m_57_fu_3081_p2.read();
        m_57_reg_6226_pp0_iter2_reg = m_57_reg_6226.read();
        m_57_reg_6226_pp0_iter3_reg = m_57_reg_6226_pp0_iter2_reg.read();
    }
    if ((esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0))) {
        add_ln85_14_reg_5289 = add_ln85_14_fu_1505_p2.read();
        add_ln85_174_reg_6623 = add_ln85_174_fu_4072_p2.read();
        add_ln85_227_reg_6836 = add_ln85_227_fu_4655_p2.read();
        add_ln85_67_reg_5959 = add_ln85_67_fu_2510_p2.read();
        add_ln90_15_reg_5945 = add_ln90_15_fu_2473_p2.read();
        add_ln90_1_reg_5263 = add_ln90_1_fu_1434_p2.read();
        add_ln90_28_reg_6371 = add_ln90_28_fu_3450_p2.read();
        add_ln90_29_reg_6383 = add_ln90_29_fu_3495_p2.read();
        add_ln90_2_reg_5275 = add_ln90_2_fu_1478_p2.read();
        add_ln90_41_reg_6603 = add_ln90_41_fu_4017_p2.read();
        add_ln90_42_reg_6609 = add_ln90_42_fu_4046_p2.read();
        add_ln90_55_reg_6822 = add_ln90_55_fu_4618_p2.read();
        add_ln94_15_reg_5952 = add_ln94_15_fu_2486_p2.read();
        add_ln94_16_reg_5964 = add_ln94_16_fu_2522_p2.read();
        add_ln94_1_reg_5269 = add_ln94_1_fu_1446_p2.read();
        add_ln94_28_reg_6377 = add_ln94_28_fu_3464_p2.read();
        add_ln94_29_reg_6390 = add_ln94_29_fu_3508_p2.read();
        add_ln94_2_reg_5282 = add_ln94_2_fu_1491_p2.read();
        add_ln94_42_reg_6616 = add_ln94_42_fu_4059_p2.read();
        add_ln94_55_reg_6829 = add_ln94_55_fu_4631_p2.read();
        add_ln94_56_reg_6841 = add_ln94_56_fu_4667_p2.read();
        m_28_reg_5891 = m_28_fu_2372_p2.read();
        m_29_reg_5898 = m_29_fu_2384_p2.read();
        m_2_reg_5213 = m_2_fu_1408_p5.read();
        m_30_reg_5906 = m_30_fu_2395_p2.read();
        m_30_reg_5906_pp0_iter2_reg = m_30_reg_5906.read();
        m_31_reg_5914 = m_31_fu_2412_p2.read();
        m_31_reg_5914_pp0_iter2_reg = m_31_reg_5914.read();
        m_32_reg_5922 = m_32_fu_2429_p2.read();
        m_32_reg_5922_pp0_iter2_reg = m_32_reg_5922.read();
        m_33_reg_5931 = m_33_fu_2445_p2.read();
        m_33_reg_5931_pp0_iter2_reg = m_33_reg_5931.read();
        m_3_reg_5218 = m_3_fu_1421_p5.read();
    }
    if ((esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0))) {
        add_ln85_194_reg_6702 = add_ln85_194_fu_4286_p2.read();
        add_ln85_261_reg_6707 = add_ln85_261_fu_4301_p2.read();
        add_ln85_261_reg_6707_pp0_iter4_reg = add_ln85_261_reg_6707.read();
        add_ln85_34_reg_5547 = add_ln85_34_fu_1800_p2.read();
        add_ln85_87_reg_6181 = add_ln85_87_fu_2987_p2.read();
        add_ln90_20_reg_6167 = add_ln90_20_fu_2950_p2.read();
        add_ln90_33_reg_6450 = add_ln90_33_fu_3664_p2.read();
        add_ln90_34_reg_6462 = add_ln90_34_fu_3709_p2.read();
        add_ln90_46_reg_6682 = add_ln90_46_fu_4231_p2.read();
        add_ln90_47_reg_6688 = add_ln90_47_fu_4260_p2.read();
        add_ln90_59_reg_6895 = add_ln90_59_fu_4783_p2.read();
        add_ln90_60_reg_6909 = add_ln90_60_fu_4824_p2.read();
        add_ln90_6_reg_5527 = add_ln90_6_fu_1744_p2.read();
        add_ln90_7_reg_5533 = add_ln90_7_fu_1773_p2.read();
        add_ln94_20_reg_6174 = add_ln94_20_fu_2963_p2.read();
        add_ln94_21_reg_6186 = add_ln94_21_fu_2999_p2.read();
        add_ln94_33_reg_6456 = add_ln94_33_fu_3678_p2.read();
        add_ln94_34_reg_6469 = add_ln94_34_fu_3722_p2.read();
        add_ln94_47_reg_6695 = add_ln94_47_fu_4273_p2.read();
        add_ln94_59_reg_6902 = add_ln94_59_fu_4794_p2.read();
        add_ln94_60_reg_6918 = add_ln94_60_fu_4835_p2.read();
        add_ln94_7_reg_5540 = add_ln94_7_fu_1786_p2.read();
        m_46_reg_6124 = m_46_fu_2850_p2.read();
        m_46_reg_6124_pp0_iter2_reg = m_46_reg_6124.read();
        m_47_reg_6132 = m_47_fu_2861_p2.read();
        m_47_reg_6132_pp0_iter2_reg = m_47_reg_6132.read();
        m_48_reg_6140 = m_48_fu_2878_p2.read();
        m_48_reg_6140_pp0_iter2_reg = m_48_reg_6140.read();
        m_49_reg_6147 = m_49_fu_2895_p2.read();
        m_49_reg_6147_pp0_iter2_reg = m_49_reg_6147.read();
        m_49_reg_6147_pp0_iter3_reg = m_49_reg_6147_pp0_iter2_reg.read();
        m_50_reg_6153 = m_50_fu_2912_p2.read();
        m_50_reg_6153_pp0_iter2_reg = m_50_reg_6153.read();
        m_50_reg_6153_pp0_iter3_reg = m_50_reg_6153_pp0_iter2_reg.read();
        m_51_reg_6160 = m_51_fu_2922_p2.read();
        m_51_reg_6160_pp0_iter2_reg = m_51_reg_6160.read();
        m_51_reg_6160_pp0_iter3_reg = m_51_reg_6160_pp0_iter2_reg.read();
        m_8_reg_5465 = m_8_fu_1718_p5.read();
        m_9_reg_5470 = m_9_fu_1731_p5.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        ap_port_reg_ctx_state_3_read = ctx_state_3_read.read();
        ap_port_reg_ctx_state_7_read = ctx_state_7_read.read();
        tmp_48_reg_5118 = grp_EP1_fu_980_ap_return.read();
        tmp_49_reg_5123 = grp_CH_fu_862_ap_return.read();
    }
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
  esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
  esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        reg_1122 = grp_EP0_fu_1021_ap_return.read();
        reg_1126 = grp_MAJ_fu_921_ap_return.read();
    }
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
  esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
  esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        reg_1130 = grp_SIG0_fu_1062_ap_return.read();
        reg_1134 = grp_SIG0_fu_1067_ap_return.read();
    }
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
  esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
  esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
  esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
  esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)))) {
        reg_1138 = grp_CH_fu_872_ap_return.read();
        reg_1142 = grp_EP0_fu_1027_ap_return.read();
        reg_1146 = grp_MAJ_fu_931_ap_return.read();
    }
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
  esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || (esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        reg_1150 = grp_SIG0_fu_1067_ap_return.read();
    }
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
  esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
  esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)))) {
        reg_1154 = grp_EP1_fu_986_ap_return.read();
    }
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
  esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || (esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || (esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || (esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)))) {
        reg_1158 = grp_SIG0_fu_1072_ap_return.read();
        reg_1162 = grp_SIG0_fu_1077_ap_return.read();
    }
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
  esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || (esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || (esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || (esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || (esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)))) {
        reg_1166 = grp_SIG0_fu_1082_ap_return.read();
    }
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
  esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || (esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || (esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || (esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
        reg_1170 = grp_SIG0_fu_1087_ap_return.read();
    }
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
  esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || (esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || (esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        reg_1174 = grp_CH_fu_879_ap_return.read();
        reg_1178 = grp_EP0_fu_1032_ap_return.read();
        reg_1182 = grp_MAJ_fu_938_ap_return.read();
    }
    if (((esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || (esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
        reg_1186 = grp_SIG0_fu_1072_ap_return.read();
        reg_1190 = grp_SIG0_fu_1077_ap_return.read();
        reg_1194 = grp_SIG0_fu_1082_ap_return.read();
    }
    if (((esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || (esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)))) {
        reg_1198 = grp_SIG0_fu_1087_ap_return.read();
    }
    if (((esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || (esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        reg_1202 = grp_EP1_fu_991_ap_return.read();
    }
    if (((esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || (esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)))) {
        reg_1206 = grp_CH_fu_886_ap_return.read();
        reg_1210 = grp_EP0_fu_1037_ap_return.read();
        reg_1214 = grp_MAJ_fu_945_ap_return.read();
    }
    if (((esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || (esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || (esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || (esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())))) {
        reg_1218 = grp_CH_fu_893_ap_return.read();
        reg_1222 = grp_EP0_fu_1042_ap_return.read();
        reg_1226 = grp_MAJ_fu_952_ap_return.read();
    }
    if (((esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || (esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())))) {
        reg_1230 = grp_EP1_fu_1001_ap_return.read();
    }
    if (((esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())) || (esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())) || (esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())) || (esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())))) {
        reg_1234 = grp_CH_fu_907_ap_return.read();
        reg_1238 = grp_EP0_fu_1052_ap_return.read();
        reg_1242 = grp_MAJ_fu_966_ap_return.read();
    }
    if (((esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())) || (esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())))) {
        reg_1246 = grp_EP1_fu_1011_ap_return.read();
    }
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
  esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())) || (esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())))) {
        reg_1250 = grp_CH_fu_914_ap_return.read();
    }
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
  esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())) || (esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())) || (esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())))) {
        reg_1254 = grp_EP0_fu_1057_ap_return.read();
    }
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
  esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())) || (esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())) || (esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())))) {
        reg_1258 = grp_MAJ_fu_973_ap_return.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1))) {
        tmp_1_10_reg_5696 = grp_SIG0_fu_1062_ap_return.read();
        tmp_1_11_reg_5701 = grp_SIG0_fu_1067_ap_return.read();
    }
    if ((esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        tmp_1_26_reg_5940 = grp_SIG0_fu_1087_ap_return.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0))) {
        tmp_1_3_reg_5345 = grp_SIG0_fu_1062_ap_return.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        tmp_1_46_reg_6282 = grp_SIG0_fu_1087_ap_return.read();
        tmp_47_reg_6277 = grp_SIG1_fu_1117_ap_return.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0))) {
        tmp_1_5_reg_5427 = grp_SIG0_fu_1062_ap_return.read();
        tmp_1_6_reg_5432 = grp_SIG0_fu_1067_ap_return.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0))) {
        tmp_1_7_reg_5517 = grp_SIG0_fu_1062_ap_return.read();
        tmp_1_8_reg_5522 = grp_SIG0_fu_1067_ap_return.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0))) {
        tmp_1_9_reg_5606 = grp_SIG0_fu_1062_ap_return.read();
        tmp_1_s_reg_5611 = grp_SIG0_fu_1067_ap_return.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0))) {
        tmp_1_reg_5188 = grp_SIG0_fu_1062_ap_return.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        tmp_2_39_reg_6555 = grp_EP1_fu_1006_ap_return.read();
        tmp_3_39_reg_6560 = grp_CH_fu_900_ap_return.read();
        tmp_4_39_reg_6565 = grp_EP0_fu_1047_ap_return.read();
        tmp_5_39_reg_6570 = grp_MAJ_fu_959_ap_return.read();
    }
    if ((esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        tmp_2_54_reg_6817 = grp_EP1_fu_1016_ap_return.read();
    }
}

void sha256_transform::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_reset_idle_pp0.read(), ap_const_logic_0) && !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_idle_pp0_1to5.read())))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage1;
            } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_reset_idle_pp0.read()))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            }
            break;
        case 2 : 
            if (esl_seteq<1,1,1>(ap_block_pp0_stage1_subdone.read(), ap_const_boolean_0)) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage2;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage1;
            }
            break;
        case 4 : 
            if (esl_seteq<1,1,1>(ap_block_pp0_stage2_subdone.read(), ap_const_boolean_0)) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage3;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage2;
            }
            break;
        case 8 : 
            if (esl_seteq<1,1,1>(ap_block_pp0_stage3_subdone.read(), ap_const_boolean_0)) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage4;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage3;
            }
            break;
        case 16 : 
            if (esl_seteq<1,1,1>(ap_block_pp0_stage4_subdone.read(), ap_const_boolean_0)) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage5;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage4;
            }
            break;
        case 32 : 
            if (esl_seteq<1,1,1>(ap_block_pp0_stage5_subdone.read(), ap_const_boolean_0)) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage6;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage5;
            }
            break;
        case 64 : 
            if (esl_seteq<1,1,1>(ap_block_pp0_stage6_subdone.read(), ap_const_boolean_0)) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage7;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage6;
            }
            break;
        case 128 : 
            if (esl_seteq<1,1,1>(ap_block_pp0_stage7_subdone.read(), ap_const_boolean_0)) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage7;
            }
            break;
        default : 
            ap_NS_fsm =  (sc_lv<8>) ("XXXXXXXX");
            break;
    }
}

}

