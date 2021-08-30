#include "sha256_transform.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void sha256_transform::thread_add_ln100_fu_4958_p2() {
    add_ln100_fu_4958_p2 = (!add_ln94_60_reg_6918.read().is_01() || !ctx_state_3_read_1_reg_5133_pp0_iter4_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_60_reg_6918.read()) + sc_biguint<32>(ctx_state_3_read_1_reg_5133_pp0_iter4_reg.read()));
}

void sha256_transform::thread_add_ln101_1_fu_4985_p2() {
    add_ln101_1_fu_4985_p2 = (!add_ln94_59_reg_6902.read().is_01() || !ctx_state_4_read_1_reg_5049_pp0_iter4_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_59_reg_6902.read()) + sc_biguint<32>(ctx_state_4_read_1_reg_5049_pp0_iter4_reg.read()));
}

void sha256_transform::thread_add_ln101_fu_4989_p2() {
    add_ln101_fu_4989_p2 = (!add_ln101_1_fu_4985_p2.read().is_01() || !add_ln85_255_reg_6943.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln101_1_fu_4985_p2.read()) + sc_biguint<32>(add_ln85_255_reg_6943.read()));
}

void sha256_transform::thread_add_ln102_fu_4962_p2() {
    add_ln102_fu_4962_p2 = (!add_ln90_62_fu_4902_p2.read().is_01() || !ctx_state_5_read_1_reg_5042_pp0_iter4_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln90_62_fu_4902_p2.read()) + sc_biguint<32>(ctx_state_5_read_1_reg_5042_pp0_iter4_reg.read()));
}

void sha256_transform::thread_add_ln103_fu_4967_p2() {
    add_ln103_fu_4967_p2 = (!add_ln90_61_reg_6927.read().is_01() || !ctx_state_6_read_1_reg_5036_pp0_iter4_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln90_61_reg_6927.read()) + sc_biguint<32>(ctx_state_6_read_1_reg_5036_pp0_iter4_reg.read()));
}

void sha256_transform::thread_add_ln104_fu_4971_p2() {
    add_ln104_fu_4971_p2 = (!add_ln90_60_reg_6909.read().is_01() || !ctx_state_7_read_1_reg_5128_pp0_iter4_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln90_60_reg_6909.read()) + sc_biguint<32>(ctx_state_7_read_1_reg_5128_pp0_iter4_reg.read()));
}

void sha256_transform::thread_add_ln72_100_fu_2891_p2() {
    add_ln72_100_fu_2891_p2 = (!m_42_reg_6064.read().is_01() || !m_33_reg_5931.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_42_reg_6064.read()) + sc_biguint<32>(m_33_reg_5931.read()));
}

void sha256_transform::thread_add_ln72_102_fu_2902_p2() {
    add_ln72_102_fu_2902_p2 = (!grp_SIG1_fu_1112_ap_return.read().is_01() || !reg_1166.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_SIG1_fu_1112_ap_return.read()) + sc_biguint<32>(reg_1166.read()));
}

void sha256_transform::thread_add_ln72_103_fu_2908_p2() {
    add_ln72_103_fu_2908_p2 = (!m_43_reg_6072.read().is_01() || !m_34_reg_5973.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_43_reg_6072.read()) + sc_biguint<32>(m_34_reg_5973.read()));
}

void sha256_transform::thread_add_ln72_106_fu_2918_p2() {
    add_ln72_106_fu_2918_p2 = (!m_44_reg_6080.read().is_01() || !m_35_reg_5981.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_44_reg_6080.read()) + sc_biguint<32>(m_35_reg_5981.read()));
}

void sha256_transform::thread_add_ln72_109_fu_3005_p2() {
    add_ln72_109_fu_3005_p2 = (!m_45_reg_6089.read().is_01() || !m_36_reg_5989.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_45_reg_6089.read()) + sc_biguint<32>(m_36_reg_5989.read()));
}

void sha256_transform::thread_add_ln72_10_fu_2085_p2() {
    add_ln72_10_fu_2085_p2 = (!m_12_reg_5642.read().is_01() || !m_3_reg_5218.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_12_reg_5642.read()) + sc_biguint<32>(m_3_reg_5218.read()));
}

void sha256_transform::thread_add_ln72_112_fu_3016_p2() {
    add_ln72_112_fu_3016_p2 = (!m_46_reg_6124.read().is_01() || !m_37_reg_5997.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_46_reg_6124.read()) + sc_biguint<32>(m_37_reg_5997.read()));
}

void sha256_transform::thread_add_ln72_115_fu_3027_p2() {
    add_ln72_115_fu_3027_p2 = (!m_47_reg_6132.read().is_01() || !m_38_reg_6005.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_47_reg_6132.read()) + sc_biguint<32>(m_38_reg_6005.read()));
}

void sha256_transform::thread_add_ln72_117_fu_3038_p2() {
    add_ln72_117_fu_3038_p2 = (!grp_SIG1_fu_1107_ap_return.read().is_01() || !reg_1170.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_SIG1_fu_1107_ap_return.read()) + sc_biguint<32>(reg_1170.read()));
}

void sha256_transform::thread_add_ln72_118_fu_3044_p2() {
    add_ln72_118_fu_3044_p2 = (!m_48_reg_6140.read().is_01() || !m_39_reg_6014.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_48_reg_6140.read()) + sc_biguint<32>(m_39_reg_6014.read()));
}

void sha256_transform::thread_add_ln72_120_fu_3055_p2() {
    add_ln72_120_fu_3055_p2 = (!grp_SIG1_fu_1112_ap_return.read().is_01() || !grp_SIG0_fu_1072_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_SIG1_fu_1112_ap_return.read()) + sc_biguint<32>(grp_SIG0_fu_1072_ap_return.read()));
}

void sha256_transform::thread_add_ln72_121_fu_3061_p2() {
    add_ln72_121_fu_3061_p2 = (!m_49_reg_6147.read().is_01() || !m_40_reg_6048.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_49_reg_6147.read()) + sc_biguint<32>(m_40_reg_6048.read()));
}

void sha256_transform::thread_add_ln72_123_fu_3071_p2() {
    add_ln72_123_fu_3071_p2 = (!grp_SIG1_fu_1117_ap_return.read().is_01() || !grp_SIG0_fu_1077_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_SIG1_fu_1117_ap_return.read()) + sc_biguint<32>(grp_SIG0_fu_1077_ap_return.read()));
}

void sha256_transform::thread_add_ln72_124_fu_3077_p2() {
    add_ln72_124_fu_3077_p2 = (!m_50_reg_6153.read().is_01() || !m_41_reg_6056.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_50_reg_6153.read()) + sc_biguint<32>(m_41_reg_6056.read()));
}

void sha256_transform::thread_add_ln72_126_fu_3148_p2() {
    add_ln72_126_fu_3148_p2 = (!grp_SIG1_fu_1092_ap_return.read().is_01() || !reg_1166.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_SIG1_fu_1092_ap_return.read()) + sc_biguint<32>(reg_1166.read()));
}

void sha256_transform::thread_add_ln72_127_fu_3154_p2() {
    add_ln72_127_fu_3154_p2 = (!m_51_reg_6160.read().is_01() || !m_42_reg_6064.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_51_reg_6160.read()) + sc_biguint<32>(m_42_reg_6064.read()));
}

void sha256_transform::thread_add_ln72_12_fu_2097_p2() {
    add_ln72_12_fu_2097_p2 = (!grp_SIG1_fu_1112_ap_return.read().is_01() || !reg_1150.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_SIG1_fu_1112_ap_return.read()) + sc_biguint<32>(reg_1150.read()));
}

void sha256_transform::thread_add_ln72_130_fu_3165_p2() {
    add_ln72_130_fu_3165_p2 = (!m_52_reg_6195.read().is_01() || !m_43_reg_6072.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_52_reg_6195.read()) + sc_biguint<32>(m_43_reg_6072.read()));
}

void sha256_transform::thread_add_ln72_132_fu_3176_p2() {
    add_ln72_132_fu_3176_p2 = (!grp_SIG1_fu_1102_ap_return.read().is_01() || !grp_SIG0_fu_1072_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_SIG1_fu_1102_ap_return.read()) + sc_biguint<32>(grp_SIG0_fu_1072_ap_return.read()));
}

void sha256_transform::thread_add_ln72_133_fu_3182_p2() {
    add_ln72_133_fu_3182_p2 = (!m_53_reg_6201.read().is_01() || !m_44_reg_6080.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_53_reg_6201.read()) + sc_biguint<32>(m_44_reg_6080.read()));
}

void sha256_transform::thread_add_ln72_135_fu_3193_p2() {
    add_ln72_135_fu_3193_p2 = (!grp_SIG1_fu_1107_ap_return.read().is_01() || !grp_SIG0_fu_1077_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_SIG1_fu_1107_ap_return.read()) + sc_biguint<32>(grp_SIG0_fu_1077_ap_return.read()));
}

void sha256_transform::thread_add_ln72_136_fu_3199_p2() {
    add_ln72_136_fu_3199_p2 = (!m_54_reg_6207.read().is_01() || !m_45_reg_6089.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_54_reg_6207.read()) + sc_biguint<32>(m_45_reg_6089.read()));
}

void sha256_transform::thread_add_ln72_13_fu_2103_p2() {
    add_ln72_13_fu_2103_p2 = (!m_13_reg_5649.read().is_01() || !m_4_reg_5294.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_13_reg_5649.read()) + sc_biguint<32>(m_4_reg_5294.read()));
}

void sha256_transform::thread_add_ln72_15_fu_2113_p2() {
    add_ln72_15_fu_2113_p2 = (!grp_SIG1_fu_1117_ap_return.read().is_01() || !tmp_1_5_reg_5427.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_SIG1_fu_1117_ap_return.read()) + sc_biguint<32>(tmp_1_5_reg_5427.read()));
}

void sha256_transform::thread_add_ln72_16_fu_2118_p2() {
    add_ln72_16_fu_2118_p2 = (!m_14_fu_2011_p5.read().is_01() || !m_5_reg_5299.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_14_fu_2011_p5.read()) + sc_biguint<32>(m_5_reg_5299.read()));
}

void sha256_transform::thread_add_ln72_18_fu_2189_p2() {
    add_ln72_18_fu_2189_p2 = (!grp_SIG1_fu_1092_ap_return.read().is_01() || !tmp_1_6_reg_5432.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_SIG1_fu_1092_ap_return.read()) + sc_biguint<32>(tmp_1_6_reg_5432.read()));
}

void sha256_transform::thread_add_ln72_19_fu_2194_p2() {
    add_ln72_19_fu_2194_p2 = (!m_15_reg_5740.read().is_01() || !m_6_reg_5376.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_15_reg_5740.read()) + sc_biguint<32>(m_6_reg_5376.read()));
}

void sha256_transform::thread_add_ln72_1_fu_2044_p2() {
    add_ln72_1_fu_2044_p2 = (!m_9_reg_5470.read().is_01() || !m_0_reg_5138.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_9_reg_5470.read()) + sc_biguint<32>(m_0_reg_5138.read()));
}

void sha256_transform::thread_add_ln72_21_fu_2206_p2() {
    add_ln72_21_fu_2206_p2 = (!grp_SIG1_fu_1097_ap_return.read().is_01() || !tmp_1_7_reg_5517.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_SIG1_fu_1097_ap_return.read()) + sc_biguint<32>(tmp_1_7_reg_5517.read()));
}

void sha256_transform::thread_add_ln72_22_fu_2211_p2() {
    add_ln72_22_fu_2211_p2 = (!m_16_reg_5747.read().is_01() || !m_7_reg_5381.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_16_reg_5747.read()) + sc_biguint<32>(m_7_reg_5381.read()));
}

void sha256_transform::thread_add_ln72_24_fu_2223_p2() {
    add_ln72_24_fu_2223_p2 = (!grp_SIG1_fu_1102_ap_return.read().is_01() || !tmp_1_8_reg_5522.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_SIG1_fu_1102_ap_return.read()) + sc_biguint<32>(tmp_1_8_reg_5522.read()));
}

void sha256_transform::thread_add_ln72_25_fu_2228_p2() {
    add_ln72_25_fu_2228_p2 = (!m_17_reg_5754.read().is_01() || !m_8_reg_5465.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_17_reg_5754.read()) + sc_biguint<32>(m_8_reg_5465.read()));
}

void sha256_transform::thread_add_ln72_27_fu_2240_p2() {
    add_ln72_27_fu_2240_p2 = (!grp_SIG1_fu_1107_ap_return.read().is_01() || !tmp_1_9_reg_5606.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_SIG1_fu_1107_ap_return.read()) + sc_biguint<32>(tmp_1_9_reg_5606.read()));
}

void sha256_transform::thread_add_ln72_28_fu_2245_p2() {
    add_ln72_28_fu_2245_p2 = (!m_18_reg_5761.read().is_01() || !m_9_reg_5470.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_18_reg_5761.read()) + sc_biguint<32>(m_9_reg_5470.read()));
}

void sha256_transform::thread_add_ln72_30_fu_2256_p2() {
    add_ln72_30_fu_2256_p2 = (!grp_SIG1_fu_1112_ap_return.read().is_01() || !tmp_1_s_reg_5611.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_SIG1_fu_1112_ap_return.read()) + sc_biguint<32>(tmp_1_s_reg_5611.read()));
}

void sha256_transform::thread_add_ln72_31_fu_2261_p2() {
    add_ln72_31_fu_2261_p2 = (!m_19_reg_5768.read().is_01() || !m_10_reg_5552.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_19_reg_5768.read()) + sc_biguint<32>(m_10_reg_5552.read()));
}

void sha256_transform::thread_add_ln72_33_fu_2271_p2() {
    add_ln72_33_fu_2271_p2 = (!grp_SIG1_fu_1117_ap_return.read().is_01() || !tmp_1_10_reg_5696.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_SIG1_fu_1117_ap_return.read()) + sc_biguint<32>(tmp_1_10_reg_5696.read()));
}

void sha256_transform::thread_add_ln72_34_fu_2276_p2() {
    add_ln72_34_fu_2276_p2 = (!m_20_reg_5775.read().is_01() || !m_11_reg_5559.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_20_reg_5775.read()) + sc_biguint<32>(m_11_reg_5559.read()));
}

void sha256_transform::thread_add_ln72_36_fu_2363_p2() {
    add_ln72_36_fu_2363_p2 = (!grp_SIG1_fu_1092_ap_return.read().is_01() || !tmp_1_11_reg_5701.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_SIG1_fu_1092_ap_return.read()) + sc_biguint<32>(tmp_1_11_reg_5701.read()));
}

void sha256_transform::thread_add_ln72_37_fu_2368_p2() {
    add_ln72_37_fu_2368_p2 = (!m_21_reg_5784.read().is_01() || !m_12_reg_5642.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_21_reg_5784.read()) + sc_biguint<32>(m_12_reg_5642.read()));
}

void sha256_transform::thread_add_ln72_39_fu_1268_p2() {
    add_ln72_39_fu_1268_p2 = (!grp_SIG1_fu_1097_ap_return.read().is_01() || !reg_1130.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_SIG1_fu_1097_ap_return.read()) + sc_biguint<32>(reg_1130.read()));
}

void sha256_transform::thread_add_ln72_3_fu_1262_p2() {
    add_ln72_3_fu_1262_p2 = (!grp_SIG1_fu_1097_ap_return.read().is_01() || !reg_1130.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_SIG1_fu_1097_ap_return.read()) + sc_biguint<32>(reg_1130.read()));
}

void sha256_transform::thread_add_ln72_40_fu_2380_p2() {
    add_ln72_40_fu_2380_p2 = (!m_22_reg_5818.read().is_01() || !m_13_reg_5649.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_22_reg_5818.read()) + sc_biguint<32>(m_13_reg_5649.read()));
}

void sha256_transform::thread_add_ln72_42_fu_1280_p2() {
    add_ln72_42_fu_1280_p2 = (!grp_SIG1_fu_1102_ap_return.read().is_01() || !reg_1134.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_SIG1_fu_1102_ap_return.read()) + sc_biguint<32>(reg_1134.read()));
}

void sha256_transform::thread_add_ln72_43_fu_2391_p2() {
    add_ln72_43_fu_2391_p2 = (!m_23_reg_5825.read().is_01() || !m_14_reg_5734.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_23_reg_5825.read()) + sc_biguint<32>(m_14_reg_5734.read()));
}

void sha256_transform::thread_add_ln72_45_fu_2402_p2() {
    add_ln72_45_fu_2402_p2 = (!grp_SIG1_fu_1107_ap_return.read().is_01() || !reg_1158.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_SIG1_fu_1107_ap_return.read()) + sc_biguint<32>(reg_1158.read()));
}

void sha256_transform::thread_add_ln72_46_fu_2408_p2() {
    add_ln72_46_fu_2408_p2 = (!m_24_reg_5832.read().is_01() || !m_15_reg_5740.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_24_reg_5832.read()) + sc_biguint<32>(m_15_reg_5740.read()));
}

void sha256_transform::thread_add_ln72_48_fu_2419_p2() {
    add_ln72_48_fu_2419_p2 = (!grp_SIG1_fu_1112_ap_return.read().is_01() || !reg_1162.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_SIG1_fu_1112_ap_return.read()) + sc_biguint<32>(reg_1162.read()));
}

void sha256_transform::thread_add_ln72_49_fu_2425_p2() {
    add_ln72_49_fu_2425_p2 = (!m_25_reg_5839.read().is_01() || !m_16_reg_5747.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_25_reg_5839.read()) + sc_biguint<32>(m_16_reg_5747.read()));
}

void sha256_transform::thread_add_ln72_4_fu_2056_p2() {
    add_ln72_4_fu_2056_p2 = (!m_10_reg_5552.read().is_01() || !m_1_reg_5143.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_10_reg_5552.read()) + sc_biguint<32>(m_1_reg_5143.read()));
}

void sha256_transform::thread_add_ln72_51_fu_2435_p2() {
    add_ln72_51_fu_2435_p2 = (!grp_SIG1_fu_1117_ap_return.read().is_01() || !reg_1166.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_SIG1_fu_1117_ap_return.read()) + sc_biguint<32>(reg_1166.read()));
}

void sha256_transform::thread_add_ln72_52_fu_2441_p2() {
    add_ln72_52_fu_2441_p2 = (!m_26_reg_5847.read().is_01() || !m_17_reg_5754.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_26_reg_5847.read()) + sc_biguint<32>(m_17_reg_5754.read()));
}

void sha256_transform::thread_add_ln72_54_fu_2528_p2() {
    add_ln72_54_fu_2528_p2 = (!grp_SIG1_fu_1092_ap_return.read().is_01() || !reg_1170.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_SIG1_fu_1092_ap_return.read()) + sc_biguint<32>(reg_1170.read()));
}

void sha256_transform::thread_add_ln72_55_fu_2534_p2() {
    add_ln72_55_fu_2534_p2 = (!m_27_reg_5856.read().is_01() || !m_18_reg_5761.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_27_reg_5856.read()) + sc_biguint<32>(m_18_reg_5761.read()));
}

void sha256_transform::thread_add_ln72_57_fu_2545_p2() {
    add_ln72_57_fu_2545_p2 = (!grp_SIG1_fu_1097_ap_return.read().is_01() || !reg_1150.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_SIG1_fu_1097_ap_return.read()) + sc_biguint<32>(reg_1150.read()));
}

void sha256_transform::thread_add_ln72_58_fu_2551_p2() {
    add_ln72_58_fu_2551_p2 = (!m_28_reg_5891.read().is_01() || !m_19_reg_5768.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_28_reg_5891.read()) + sc_biguint<32>(m_19_reg_5768.read()));
}

void sha256_transform::thread_add_ln72_60_fu_2562_p2() {
    add_ln72_60_fu_2562_p2 = (!grp_SIG1_fu_1102_ap_return.read().is_01() || !reg_1186.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_SIG1_fu_1102_ap_return.read()) + sc_biguint<32>(reg_1186.read()));
}

void sha256_transform::thread_add_ln72_61_fu_2568_p2() {
    add_ln72_61_fu_2568_p2 = (!m_29_reg_5898.read().is_01() || !m_20_reg_5775.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_29_reg_5898.read()) + sc_biguint<32>(m_20_reg_5775.read()));
}

void sha256_transform::thread_add_ln72_63_fu_2579_p2() {
    add_ln72_63_fu_2579_p2 = (!grp_SIG1_fu_1107_ap_return.read().is_01() || !reg_1190.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_SIG1_fu_1107_ap_return.read()) + sc_biguint<32>(reg_1190.read()));
}

void sha256_transform::thread_add_ln72_64_fu_2585_p2() {
    add_ln72_64_fu_2585_p2 = (!m_30_reg_5906.read().is_01() || !m_21_reg_5784.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_30_reg_5906.read()) + sc_biguint<32>(m_21_reg_5784.read()));
}

void sha256_transform::thread_add_ln72_66_fu_2596_p2() {
    add_ln72_66_fu_2596_p2 = (!grp_SIG1_fu_1112_ap_return.read().is_01() || !reg_1194.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_SIG1_fu_1112_ap_return.read()) + sc_biguint<32>(reg_1194.read()));
}

void sha256_transform::thread_add_ln72_67_fu_2602_p2() {
    add_ln72_67_fu_2602_p2 = (!m_31_reg_5914.read().is_01() || !m_22_reg_5818.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_31_reg_5914.read()) + sc_biguint<32>(m_22_reg_5818.read()));
}

void sha256_transform::thread_add_ln72_6_fu_1274_p2() {
    add_ln72_6_fu_1274_p2 = (!grp_SIG1_fu_1102_ap_return.read().is_01() || !reg_1134.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_SIG1_fu_1102_ap_return.read()) + sc_biguint<32>(reg_1134.read()));
}

void sha256_transform::thread_add_ln72_70_fu_2612_p2() {
    add_ln72_70_fu_2612_p2 = (!m_32_reg_5922.read().is_01() || !m_23_reg_5825.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_32_reg_5922.read()) + sc_biguint<32>(m_23_reg_5825.read()));
}

void sha256_transform::thread_add_ln72_73_fu_2683_p2() {
    add_ln72_73_fu_2683_p2 = (!m_33_reg_5931.read().is_01() || !m_24_reg_5832.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_33_reg_5931.read()) + sc_biguint<32>(m_24_reg_5832.read()));
}

void sha256_transform::thread_add_ln72_76_fu_2694_p2() {
    add_ln72_76_fu_2694_p2 = (!m_34_reg_5973.read().is_01() || !m_25_reg_5839.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_34_reg_5973.read()) + sc_biguint<32>(m_25_reg_5839.read()));
}

void sha256_transform::thread_add_ln72_79_fu_2705_p2() {
    add_ln72_79_fu_2705_p2 = (!m_35_reg_5981.read().is_01() || !m_26_reg_5847.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_35_reg_5981.read()) + sc_biguint<32>(m_26_reg_5847.read()));
}

void sha256_transform::thread_add_ln72_7_fu_2068_p2() {
    add_ln72_7_fu_2068_p2 = (!m_11_reg_5559.read().is_01() || !m_2_reg_5213.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_11_reg_5559.read()) + sc_biguint<32>(m_2_reg_5213.read()));
}

void sha256_transform::thread_add_ln72_81_fu_2716_p2() {
    add_ln72_81_fu_2716_p2 = (!grp_SIG1_fu_1107_ap_return.read().is_01() || !tmp_1_26_reg_5940.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_SIG1_fu_1107_ap_return.read()) + sc_biguint<32>(tmp_1_26_reg_5940.read()));
}

void sha256_transform::thread_add_ln72_82_fu_2721_p2() {
    add_ln72_82_fu_2721_p2 = (!m_36_reg_5989.read().is_01() || !m_27_reg_5856.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_36_reg_5989.read()) + sc_biguint<32>(m_27_reg_5856.read()));
}

void sha256_transform::thread_add_ln72_84_fu_2732_p2() {
    add_ln72_84_fu_2732_p2 = (!grp_SIG1_fu_1112_ap_return.read().is_01() || !reg_1186.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_SIG1_fu_1112_ap_return.read()) + sc_biguint<32>(reg_1186.read()));
}

void sha256_transform::thread_add_ln72_85_fu_2738_p2() {
    add_ln72_85_fu_2738_p2 = (!m_37_reg_5997.read().is_01() || !m_28_reg_5891.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_37_reg_5997.read()) + sc_biguint<32>(m_28_reg_5891.read()));
}

void sha256_transform::thread_add_ln72_87_fu_2748_p2() {
    add_ln72_87_fu_2748_p2 = (!grp_SIG1_fu_1117_ap_return.read().is_01() || !reg_1190.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_SIG1_fu_1117_ap_return.read()) + sc_biguint<32>(reg_1190.read()));
}

void sha256_transform::thread_add_ln72_88_fu_2754_p2() {
    add_ln72_88_fu_2754_p2 = (!m_38_reg_6005.read().is_01() || !m_29_reg_5898.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_38_reg_6005.read()) + sc_biguint<32>(m_29_reg_5898.read()));
}

void sha256_transform::thread_add_ln72_90_fu_2840_p2() {
    add_ln72_90_fu_2840_p2 = (!grp_SIG1_fu_1092_ap_return.read().is_01() || !reg_1194.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_SIG1_fu_1092_ap_return.read()) + sc_biguint<32>(reg_1194.read()));
}

void sha256_transform::thread_add_ln72_91_fu_2846_p2() {
    add_ln72_91_fu_2846_p2 = (!m_39_reg_6014.read().is_01() || !m_30_reg_5906.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_39_reg_6014.read()) + sc_biguint<32>(m_30_reg_5906.read()));
}

void sha256_transform::thread_add_ln72_94_fu_2857_p2() {
    add_ln72_94_fu_2857_p2 = (!m_40_reg_6048.read().is_01() || !m_31_reg_5914.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_40_reg_6048.read()) + sc_biguint<32>(m_31_reg_5914.read()));
}

void sha256_transform::thread_add_ln72_96_fu_2868_p2() {
    add_ln72_96_fu_2868_p2 = (!grp_SIG1_fu_1102_ap_return.read().is_01() || !reg_1158.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_SIG1_fu_1102_ap_return.read()) + sc_biguint<32>(reg_1158.read()));
}

void sha256_transform::thread_add_ln72_97_fu_2874_p2() {
    add_ln72_97_fu_2874_p2 = (!m_41_reg_6056.read().is_01() || !m_32_reg_5922.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_41_reg_6056.read()) + sc_biguint<32>(m_32_reg_5922.read()));
}

void sha256_transform::thread_add_ln72_99_fu_2885_p2() {
    add_ln72_99_fu_2885_p2 = (!grp_SIG1_fu_1107_ap_return.read().is_01() || !reg_1162.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_SIG1_fu_1107_ap_return.read()) + sc_biguint<32>(reg_1162.read()));
}

void sha256_transform::thread_add_ln72_9_fu_2080_p2() {
    add_ln72_9_fu_2080_p2 = (!grp_SIG1_fu_1107_ap_return.read().is_01() || !tmp_1_3_reg_5345.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_SIG1_fu_1107_ap_return.read()) + sc_biguint<32>(tmp_1_3_reg_5345.read()));
}

void sha256_transform::thread_add_ln72_fu_2039_p2() {
    add_ln72_fu_2039_p2 = (!grp_SIG1_fu_1092_ap_return.read().is_01() || !tmp_1_reg_5188.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_SIG1_fu_1092_ap_return.read()) + sc_biguint<32>(tmp_1_reg_5188.read()));
}

void sha256_transform::thread_add_ln85_100_fu_3302_p2() {
    add_ln85_100_fu_3302_p2 = (!reg_1174.read().is_01() || !ap_const_lv32_A831C66D.is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1174.read()) + sc_bigint<32>(ap_const_lv32_A831C66D));
}

void sha256_transform::thread_add_ln85_101_fu_3308_p2() {
    add_ln85_101_fu_3308_p2 = (!reg_1202.read().is_01() || !m_25_reg_5839.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1202.read()) + sc_biguint<32>(m_25_reg_5839.read()));
}

void sha256_transform::thread_add_ln85_102_fu_3313_p2() {
    add_ln85_102_fu_3313_p2 = (!add_ln85_101_fu_3308_p2.read().is_01() || !add_ln90_21_reg_6232.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_101_fu_3308_p2.read()) + sc_biguint<32>(add_ln90_21_reg_6232.read()));
}

void sha256_transform::thread_add_ln85_103_fu_3318_p2() {
    add_ln85_103_fu_3318_p2 = (!add_ln85_102_fu_3313_p2.read().is_01() || !add_ln85_100_fu_3302_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_102_fu_3313_p2.read()) + sc_biguint<32>(add_ln85_100_fu_3302_p2.read()));
}

void sha256_transform::thread_add_ln85_104_fu_3345_p2() {
    add_ln85_104_fu_3345_p2 = (!grp_CH_fu_886_ap_return.read().is_01() || !ap_const_lv32_B00327C8.is_01())? sc_lv<32>(): (sc_biguint<32>(grp_CH_fu_886_ap_return.read()) + sc_bigint<32>(ap_const_lv32_B00327C8));
}

void sha256_transform::thread_add_ln85_105_fu_3351_p2() {
    add_ln85_105_fu_3351_p2 = (!grp_EP1_fu_996_ap_return.read().is_01() || !m_26_reg_5847.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_EP1_fu_996_ap_return.read()) + sc_biguint<32>(m_26_reg_5847.read()));
}

void sha256_transform::thread_add_ln85_106_fu_3356_p2() {
    add_ln85_106_fu_3356_p2 = (!add_ln85_105_fu_3351_p2.read().is_01() || !add_ln90_22_reg_6238.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_105_fu_3351_p2.read()) + sc_biguint<32>(add_ln90_22_reg_6238.read()));
}

void sha256_transform::thread_add_ln85_107_fu_3361_p2() {
    add_ln85_107_fu_3361_p2 = (!add_ln85_106_fu_3356_p2.read().is_01() || !add_ln85_104_fu_3345_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_106_fu_3356_p2.read()) + sc_biguint<32>(add_ln85_104_fu_3345_p2.read()));
}

void sha256_transform::thread_add_ln85_108_fu_3386_p2() {
    add_ln85_108_fu_3386_p2 = (!grp_CH_fu_886_ap_return.read().is_01() || !ap_const_lv32_BF597FC7.is_01())? sc_lv<32>(): (sc_biguint<32>(grp_CH_fu_886_ap_return.read()) + sc_bigint<32>(ap_const_lv32_BF597FC7));
}

void sha256_transform::thread_add_ln85_109_fu_3392_p2() {
    add_ln85_109_fu_3392_p2 = (!grp_EP1_fu_996_ap_return.read().is_01() || !m_27_reg_5856.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_EP1_fu_996_ap_return.read()) + sc_biguint<32>(m_27_reg_5856.read()));
}

void sha256_transform::thread_add_ln85_10_fu_1467_p2() {
    add_ln85_10_fu_1467_p2 = (!add_ln85_9_fu_1461_p2.read().is_01() || !ctx_state_5_read_1_reg_5042.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_9_fu_1461_p2.read()) + sc_biguint<32>(ctx_state_5_read_1_reg_5042.read()));
}

void sha256_transform::thread_add_ln85_110_fu_3397_p2() {
    add_ln85_110_fu_3397_p2 = (!add_ln85_109_fu_3392_p2.read().is_01() || !add_ln90_23_reg_6287.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_109_fu_3392_p2.read()) + sc_biguint<32>(add_ln90_23_reg_6287.read()));
}

void sha256_transform::thread_add_ln85_111_fu_3402_p2() {
    add_ln85_111_fu_3402_p2 = (!add_ln85_110_fu_3397_p2.read().is_01() || !add_ln85_108_fu_3386_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_110_fu_3397_p2.read()) + sc_biguint<32>(add_ln85_108_fu_3386_p2.read()));
}

void sha256_transform::thread_add_ln85_112_fu_3440_p2() {
    add_ln85_112_fu_3440_p2 = (!reg_1218.read().is_01() || !add_ln90_24_reg_6299.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1218.read()) + sc_biguint<32>(add_ln90_24_reg_6299.read()));
}

void sha256_transform::thread_add_ln85_113_fu_3429_p2() {
    add_ln85_113_fu_3429_p2 = (!m_28_reg_5891.read().is_01() || !ap_const_lv32_C6E00BF3.is_01())? sc_lv<32>(): (sc_biguint<32>(m_28_reg_5891.read()) + sc_bigint<32>(ap_const_lv32_C6E00BF3));
}

void sha256_transform::thread_add_ln85_114_fu_3434_p2() {
    add_ln85_114_fu_3434_p2 = (!add_ln85_113_fu_3429_p2.read().is_01() || !grp_EP1_fu_1001_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_113_fu_3429_p2.read()) + sc_biguint<32>(grp_EP1_fu_1001_ap_return.read()));
}

void sha256_transform::thread_add_ln85_115_fu_3445_p2() {
    add_ln85_115_fu_3445_p2 = (!add_ln85_114_reg_6366.read().is_01() || !add_ln85_112_fu_3440_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_114_reg_6366.read()) + sc_biguint<32>(add_ln85_112_fu_3440_p2.read()));
}

void sha256_transform::thread_add_ln85_116_fu_3473_p2() {
    add_ln85_116_fu_3473_p2 = (!grp_CH_fu_886_ap_return.read().is_01() || !add_ln90_25_reg_6318.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_CH_fu_886_ap_return.read()) + sc_biguint<32>(add_ln90_25_reg_6318.read()));
}

void sha256_transform::thread_add_ln85_117_fu_3478_p2() {
    add_ln85_117_fu_3478_p2 = (!m_29_reg_5898.read().is_01() || !ap_const_lv32_D5A79147.is_01())? sc_lv<32>(): (sc_biguint<32>(m_29_reg_5898.read()) + sc_bigint<32>(ap_const_lv32_D5A79147));
}

void sha256_transform::thread_add_ln85_118_fu_3483_p2() {
    add_ln85_118_fu_3483_p2 = (!add_ln85_117_fu_3478_p2.read().is_01() || !grp_EP1_fu_996_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_117_fu_3478_p2.read()) + sc_biguint<32>(grp_EP1_fu_996_ap_return.read()));
}

void sha256_transform::thread_add_ln85_119_fu_3489_p2() {
    add_ln85_119_fu_3489_p2 = (!add_ln85_118_fu_3483_p2.read().is_01() || !add_ln85_116_fu_3473_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_118_fu_3483_p2.read()) + sc_biguint<32>(add_ln85_116_fu_3473_p2.read()));
}

void sha256_transform::thread_add_ln85_11_fu_1472_p2() {
    add_ln85_11_fu_1472_p2 = (!add_ln85_10_fu_1467_p2.read().is_01() || !add_ln85_8_fu_1455_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_10_fu_1467_p2.read()) + sc_biguint<32>(add_ln85_8_fu_1455_p2.read()));
}

void sha256_transform::thread_add_ln85_120_fu_3516_p2() {
    add_ln85_120_fu_3516_p2 = (!reg_1218.read().is_01() || !add_ln90_26_reg_6346.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1218.read()) + sc_biguint<32>(add_ln90_26_reg_6346.read()));
}

void sha256_transform::thread_add_ln85_121_fu_3521_p2() {
    add_ln85_121_fu_3521_p2 = (!m_30_reg_5906_pp0_iter2_reg.read().is_01() || !ap_const_lv32_6CA6351.is_01())? sc_lv<32>(): (sc_biguint<32>(m_30_reg_5906_pp0_iter2_reg.read()) + sc_biguint<32>(ap_const_lv32_6CA6351));
}

void sha256_transform::thread_add_ln85_122_fu_3526_p2() {
    add_ln85_122_fu_3526_p2 = (!add_ln85_121_fu_3521_p2.read().is_01() || !reg_1230.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_121_fu_3521_p2.read()) + sc_biguint<32>(reg_1230.read()));
}

void sha256_transform::thread_add_ln85_123_fu_3532_p2() {
    add_ln85_123_fu_3532_p2 = (!add_ln85_122_fu_3526_p2.read().is_01() || !add_ln85_120_fu_3516_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_122_fu_3526_p2.read()) + sc_biguint<32>(add_ln85_120_fu_3516_p2.read()));
}

void sha256_transform::thread_add_ln85_124_fu_3559_p2() {
    add_ln85_124_fu_3559_p2 = (!grp_CH_fu_893_ap_return.read().is_01() || !add_ln90_27_reg_6352.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_CH_fu_893_ap_return.read()) + sc_biguint<32>(add_ln90_27_reg_6352.read()));
}

void sha256_transform::thread_add_ln85_125_fu_3564_p2() {
    add_ln85_125_fu_3564_p2 = (!m_31_reg_5914_pp0_iter2_reg.read().is_01() || !ap_const_lv32_14292967.is_01())? sc_lv<32>(): (sc_biguint<32>(m_31_reg_5914_pp0_iter2_reg.read()) + sc_biguint<32>(ap_const_lv32_14292967));
}

void sha256_transform::thread_add_ln85_126_fu_3569_p2() {
    add_ln85_126_fu_3569_p2 = (!add_ln85_125_fu_3564_p2.read().is_01() || !grp_EP1_fu_1001_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_125_fu_3564_p2.read()) + sc_biguint<32>(grp_EP1_fu_1001_ap_return.read()));
}

void sha256_transform::thread_add_ln85_127_fu_3575_p2() {
    add_ln85_127_fu_3575_p2 = (!add_ln85_126_fu_3569_p2.read().is_01() || !add_ln85_124_fu_3559_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_126_fu_3569_p2.read()) + sc_biguint<32>(add_ln85_124_fu_3559_p2.read()));
}

void sha256_transform::thread_add_ln85_128_fu_3600_p2() {
    add_ln85_128_fu_3600_p2 = (!grp_CH_fu_886_ap_return.read().is_01() || !add_ln90_28_reg_6371.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_CH_fu_886_ap_return.read()) + sc_biguint<32>(add_ln90_28_reg_6371.read()));
}

void sha256_transform::thread_add_ln85_129_fu_3605_p2() {
    add_ln85_129_fu_3605_p2 = (!m_32_reg_5922_pp0_iter2_reg.read().is_01() || !ap_const_lv32_27B70A85.is_01())? sc_lv<32>(): (sc_biguint<32>(m_32_reg_5922_pp0_iter2_reg.read()) + sc_biguint<32>(ap_const_lv32_27B70A85));
}

void sha256_transform::thread_add_ln85_12_fu_1537_p2() {
    add_ln85_12_fu_1537_p2 = (!reg_1138.read().is_01() || !ctx_state_4_read_1_reg_5049.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1138.read()) + sc_biguint<32>(ctx_state_4_read_1_reg_5049.read()));
}

void sha256_transform::thread_add_ln85_130_fu_3610_p2() {
    add_ln85_130_fu_3610_p2 = (!add_ln85_129_fu_3605_p2.read().is_01() || !grp_EP1_fu_996_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_129_fu_3605_p2.read()) + sc_biguint<32>(grp_EP1_fu_996_ap_return.read()));
}

void sha256_transform::thread_add_ln85_131_fu_3616_p2() {
    add_ln85_131_fu_3616_p2 = (!add_ln85_130_fu_3610_p2.read().is_01() || !add_ln85_128_fu_3600_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_130_fu_3610_p2.read()) + sc_biguint<32>(add_ln85_128_fu_3600_p2.read()));
}

void sha256_transform::thread_add_ln85_132_fu_3654_p2() {
    add_ln85_132_fu_3654_p2 = (!reg_1218.read().is_01() || !add_ln90_29_reg_6383.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1218.read()) + sc_biguint<32>(add_ln90_29_reg_6383.read()));
}

void sha256_transform::thread_add_ln85_133_fu_3643_p2() {
    add_ln85_133_fu_3643_p2 = (!m_33_reg_5931_pp0_iter2_reg.read().is_01() || !ap_const_lv32_2E1B2138.is_01())? sc_lv<32>(): (sc_biguint<32>(m_33_reg_5931_pp0_iter2_reg.read()) + sc_biguint<32>(ap_const_lv32_2E1B2138));
}

void sha256_transform::thread_add_ln85_134_fu_3648_p2() {
    add_ln85_134_fu_3648_p2 = (!add_ln85_133_fu_3643_p2.read().is_01() || !grp_EP1_fu_1001_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_133_fu_3643_p2.read()) + sc_biguint<32>(grp_EP1_fu_1001_ap_return.read()));
}

void sha256_transform::thread_add_ln85_135_fu_3659_p2() {
    add_ln85_135_fu_3659_p2 = (!add_ln85_134_reg_6445.read().is_01() || !add_ln85_132_fu_3654_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_134_reg_6445.read()) + sc_biguint<32>(add_ln85_132_fu_3654_p2.read()));
}

void sha256_transform::thread_add_ln85_136_fu_3687_p2() {
    add_ln85_136_fu_3687_p2 = (!grp_CH_fu_886_ap_return.read().is_01() || !add_ln90_30_reg_6397.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_CH_fu_886_ap_return.read()) + sc_biguint<32>(add_ln90_30_reg_6397.read()));
}

void sha256_transform::thread_add_ln85_137_fu_3692_p2() {
    add_ln85_137_fu_3692_p2 = (!m_34_reg_5973_pp0_iter2_reg.read().is_01() || !ap_const_lv32_4D2C6DFC.is_01())? sc_lv<32>(): (sc_biguint<32>(m_34_reg_5973_pp0_iter2_reg.read()) + sc_biguint<32>(ap_const_lv32_4D2C6DFC));
}

void sha256_transform::thread_add_ln85_138_fu_3697_p2() {
    add_ln85_138_fu_3697_p2 = (!add_ln85_137_fu_3692_p2.read().is_01() || !grp_EP1_fu_996_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_137_fu_3692_p2.read()) + sc_biguint<32>(grp_EP1_fu_996_ap_return.read()));
}

void sha256_transform::thread_add_ln85_139_fu_3703_p2() {
    add_ln85_139_fu_3703_p2 = (!add_ln85_138_fu_3697_p2.read().is_01() || !add_ln85_136_fu_3687_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_138_fu_3697_p2.read()) + sc_biguint<32>(add_ln85_136_fu_3687_p2.read()));
}

void sha256_transform::thread_add_ln85_13_fu_1499_p2() {
    add_ln85_13_fu_1499_p2 = (!m_3_fu_1421_p5.read().is_01() || !ap_const_lv32_E9B5DBA5.is_01())? sc_lv<32>(): (sc_biguint<32>(m_3_fu_1421_p5.read()) + sc_bigint<32>(ap_const_lv32_E9B5DBA5));
}

void sha256_transform::thread_add_ln85_140_fu_3730_p2() {
    add_ln85_140_fu_3730_p2 = (!reg_1218.read().is_01() || !add_ln90_31_reg_6425.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1218.read()) + sc_biguint<32>(add_ln90_31_reg_6425.read()));
}

void sha256_transform::thread_add_ln85_141_fu_3735_p2() {
    add_ln85_141_fu_3735_p2 = (!m_35_reg_5981_pp0_iter2_reg.read().is_01() || !ap_const_lv32_53380D13.is_01())? sc_lv<32>(): (sc_biguint<32>(m_35_reg_5981_pp0_iter2_reg.read()) + sc_biguint<32>(ap_const_lv32_53380D13));
}

void sha256_transform::thread_add_ln85_142_fu_3740_p2() {
    add_ln85_142_fu_3740_p2 = (!add_ln85_141_fu_3735_p2.read().is_01() || !reg_1230.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_141_fu_3735_p2.read()) + sc_biguint<32>(reg_1230.read()));
}

void sha256_transform::thread_add_ln85_143_fu_3746_p2() {
    add_ln85_143_fu_3746_p2 = (!add_ln85_142_fu_3740_p2.read().is_01() || !add_ln85_140_fu_3730_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_142_fu_3740_p2.read()) + sc_biguint<32>(add_ln85_140_fu_3730_p2.read()));
}

void sha256_transform::thread_add_ln85_144_fu_3773_p2() {
    add_ln85_144_fu_3773_p2 = (!grp_CH_fu_893_ap_return.read().is_01() || !add_ln90_32_reg_6431.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_CH_fu_893_ap_return.read()) + sc_biguint<32>(add_ln90_32_reg_6431.read()));
}

void sha256_transform::thread_add_ln85_145_fu_3778_p2() {
    add_ln85_145_fu_3778_p2 = (!m_36_reg_5989_pp0_iter2_reg.read().is_01() || !ap_const_lv32_650A7354.is_01())? sc_lv<32>(): (sc_biguint<32>(m_36_reg_5989_pp0_iter2_reg.read()) + sc_biguint<32>(ap_const_lv32_650A7354));
}

void sha256_transform::thread_add_ln85_146_fu_3783_p2() {
    add_ln85_146_fu_3783_p2 = (!add_ln85_145_fu_3778_p2.read().is_01() || !grp_EP1_fu_1001_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_145_fu_3778_p2.read()) + sc_biguint<32>(grp_EP1_fu_1001_ap_return.read()));
}

void sha256_transform::thread_add_ln85_147_fu_3789_p2() {
    add_ln85_147_fu_3789_p2 = (!add_ln85_146_fu_3783_p2.read().is_01() || !add_ln85_144_fu_3773_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_146_fu_3783_p2.read()) + sc_biguint<32>(add_ln85_144_fu_3773_p2.read()));
}

void sha256_transform::thread_add_ln85_148_fu_3814_p2() {
    add_ln85_148_fu_3814_p2 = (!grp_CH_fu_886_ap_return.read().is_01() || !add_ln90_33_reg_6450.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_CH_fu_886_ap_return.read()) + sc_biguint<32>(add_ln90_33_reg_6450.read()));
}

void sha256_transform::thread_add_ln85_149_fu_3819_p2() {
    add_ln85_149_fu_3819_p2 = (!m_37_reg_5997_pp0_iter2_reg.read().is_01() || !ap_const_lv32_766A0ABB.is_01())? sc_lv<32>(): (sc_biguint<32>(m_37_reg_5997_pp0_iter2_reg.read()) + sc_biguint<32>(ap_const_lv32_766A0ABB));
}

void sha256_transform::thread_add_ln85_14_fu_1505_p2() {
    add_ln85_14_fu_1505_p2 = (!add_ln85_13_fu_1499_p2.read().is_01() || !grp_EP1_fu_986_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_13_fu_1499_p2.read()) + sc_biguint<32>(grp_EP1_fu_986_ap_return.read()));
}

void sha256_transform::thread_add_ln85_150_fu_3824_p2() {
    add_ln85_150_fu_3824_p2 = (!add_ln85_149_fu_3819_p2.read().is_01() || !grp_EP1_fu_996_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_149_fu_3819_p2.read()) + sc_biguint<32>(grp_EP1_fu_996_ap_return.read()));
}

void sha256_transform::thread_add_ln85_151_fu_3830_p2() {
    add_ln85_151_fu_3830_p2 = (!add_ln85_150_fu_3824_p2.read().is_01() || !add_ln85_148_fu_3814_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_150_fu_3824_p2.read()) + sc_biguint<32>(add_ln85_148_fu_3814_p2.read()));
}

void sha256_transform::thread_add_ln85_152_fu_3867_p2() {
    add_ln85_152_fu_3867_p2 = (!reg_1218.read().is_01() || !ap_const_lv32_81C2C92E.is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1218.read()) + sc_bigint<32>(ap_const_lv32_81C2C92E));
}

void sha256_transform::thread_add_ln85_153_fu_3857_p2() {
    add_ln85_153_fu_3857_p2 = (!grp_EP1_fu_1001_ap_return.read().is_01() || !m_38_reg_6005_pp0_iter2_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_EP1_fu_1001_ap_return.read()) + sc_biguint<32>(m_38_reg_6005_pp0_iter2_reg.read()));
}

void sha256_transform::thread_add_ln85_154_fu_3862_p2() {
    add_ln85_154_fu_3862_p2 = (!add_ln85_153_fu_3857_p2.read().is_01() || !add_ln90_34_reg_6462.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_153_fu_3857_p2.read()) + sc_biguint<32>(add_ln90_34_reg_6462.read()));
}

void sha256_transform::thread_add_ln85_155_fu_3873_p2() {
    add_ln85_155_fu_3873_p2 = (!add_ln85_154_reg_6524.read().is_01() || !add_ln85_152_fu_3867_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_154_reg_6524.read()) + sc_biguint<32>(add_ln85_152_fu_3867_p2.read()));
}

void sha256_transform::thread_add_ln85_156_fu_3901_p2() {
    add_ln85_156_fu_3901_p2 = (!grp_CH_fu_893_ap_return.read().is_01() || !ap_const_lv32_92722C85.is_01())? sc_lv<32>(): (sc_biguint<32>(grp_CH_fu_893_ap_return.read()) + sc_bigint<32>(ap_const_lv32_92722C85));
}

void sha256_transform::thread_add_ln85_157_fu_3907_p2() {
    add_ln85_157_fu_3907_p2 = (!grp_EP1_fu_1001_ap_return.read().is_01() || !m_39_reg_6014_pp0_iter2_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_EP1_fu_1001_ap_return.read()) + sc_biguint<32>(m_39_reg_6014_pp0_iter2_reg.read()));
}

void sha256_transform::thread_add_ln85_158_fu_3912_p2() {
    add_ln85_158_fu_3912_p2 = (!add_ln85_157_fu_3907_p2.read().is_01() || !add_ln90_35_reg_6476.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_157_fu_3907_p2.read()) + sc_biguint<32>(add_ln90_35_reg_6476.read()));
}

void sha256_transform::thread_add_ln85_159_fu_3917_p2() {
    add_ln85_159_fu_3917_p2 = (!add_ln85_158_fu_3912_p2.read().is_01() || !add_ln85_156_fu_3901_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_158_fu_3912_p2.read()) + sc_biguint<32>(add_ln85_156_fu_3901_p2.read()));
}

void sha256_transform::thread_add_ln85_15_fu_1542_p2() {
    add_ln85_15_fu_1542_p2 = (!add_ln85_14_reg_5289.read().is_01() || !add_ln85_12_fu_1537_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_14_reg_5289.read()) + sc_biguint<32>(add_ln85_12_fu_1537_p2.read()));
}

void sha256_transform::thread_add_ln85_160_fu_3944_p2() {
    add_ln85_160_fu_3944_p2 = (!tmp_3_39_reg_6560.read().is_01() || !ap_const_lv32_A2BFE8A1.is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_3_39_reg_6560.read()) + sc_bigint<32>(ap_const_lv32_A2BFE8A1));
}

void sha256_transform::thread_add_ln85_161_fu_3949_p2() {
    add_ln85_161_fu_3949_p2 = (!tmp_2_39_reg_6555.read().is_01() || !m_40_reg_6048_pp0_iter2_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_2_39_reg_6555.read()) + sc_biguint<32>(m_40_reg_6048_pp0_iter2_reg.read()));
}

void sha256_transform::thread_add_ln85_162_fu_3953_p2() {
    add_ln85_162_fu_3953_p2 = (!add_ln85_161_fu_3949_p2.read().is_01() || !add_ln90_36_reg_6504.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_161_fu_3949_p2.read()) + sc_biguint<32>(add_ln90_36_reg_6504.read()));
}

void sha256_transform::thread_add_ln85_163_fu_3958_p2() {
    add_ln85_163_fu_3958_p2 = (!add_ln85_162_fu_3953_p2.read().is_01() || !add_ln85_160_fu_3944_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_162_fu_3953_p2.read()) + sc_biguint<32>(add_ln85_160_fu_3944_p2.read()));
}

void sha256_transform::thread_add_ln85_164_fu_3983_p2() {
    add_ln85_164_fu_3983_p2 = (!grp_CH_fu_900_ap_return.read().is_01() || !ap_const_lv32_A81A664B.is_01())? sc_lv<32>(): (sc_biguint<32>(grp_CH_fu_900_ap_return.read()) + sc_bigint<32>(ap_const_lv32_A81A664B));
}

void sha256_transform::thread_add_ln85_165_fu_3989_p2() {
    add_ln85_165_fu_3989_p2 = (!grp_EP1_fu_1006_ap_return.read().is_01() || !m_41_reg_6056_pp0_iter2_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_EP1_fu_1006_ap_return.read()) + sc_biguint<32>(m_41_reg_6056_pp0_iter2_reg.read()));
}

void sha256_transform::thread_add_ln85_166_fu_3994_p2() {
    add_ln85_166_fu_3994_p2 = (!add_ln85_165_fu_3989_p2.read().is_01() || !add_ln90_37_reg_6510.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_165_fu_3989_p2.read()) + sc_biguint<32>(add_ln90_37_reg_6510.read()));
}

void sha256_transform::thread_add_ln85_167_fu_3999_p2() {
    add_ln85_167_fu_3999_p2 = (!add_ln85_166_fu_3994_p2.read().is_01() || !add_ln85_164_fu_3983_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_166_fu_3994_p2.read()) + sc_biguint<32>(add_ln85_164_fu_3983_p2.read()));
}

void sha256_transform::thread_add_ln85_168_fu_4024_p2() {
    add_ln85_168_fu_4024_p2 = (!grp_CH_fu_900_ap_return.read().is_01() || !add_ln90_38_reg_6529.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_CH_fu_900_ap_return.read()) + sc_biguint<32>(add_ln90_38_reg_6529.read()));
}

void sha256_transform::thread_add_ln85_169_fu_4029_p2() {
    add_ln85_169_fu_4029_p2 = (!m_42_reg_6064_pp0_iter2_reg.read().is_01() || !ap_const_lv32_C24B8B70.is_01())? sc_lv<32>(): (sc_biguint<32>(m_42_reg_6064_pp0_iter2_reg.read()) + sc_bigint<32>(ap_const_lv32_C24B8B70));
}

void sha256_transform::thread_add_ln85_16_fu_1570_p2() {
    add_ln85_16_fu_1570_p2 = (!grp_CH_fu_862_ap_return.read().is_01() || !add_ln90_reg_5193.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_CH_fu_862_ap_return.read()) + sc_biguint<32>(add_ln90_reg_5193.read()));
}

void sha256_transform::thread_add_ln85_170_fu_4034_p2() {
    add_ln85_170_fu_4034_p2 = (!add_ln85_169_fu_4029_p2.read().is_01() || !grp_EP1_fu_1006_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_169_fu_4029_p2.read()) + sc_biguint<32>(grp_EP1_fu_1006_ap_return.read()));
}

void sha256_transform::thread_add_ln85_171_fu_4040_p2() {
    add_ln85_171_fu_4040_p2 = (!add_ln85_170_fu_4034_p2.read().is_01() || !add_ln85_168_fu_4024_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_170_fu_4034_p2.read()) + sc_biguint<32>(add_ln85_168_fu_4024_p2.read()));
}

void sha256_transform::thread_add_ln85_172_fu_4078_p2() {
    add_ln85_172_fu_4078_p2 = (!reg_1234.read().is_01() || !add_ln90_39_reg_6541.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1234.read()) + sc_biguint<32>(add_ln90_39_reg_6541.read()));
}

void sha256_transform::thread_add_ln85_173_fu_4067_p2() {
    add_ln85_173_fu_4067_p2 = (!m_43_reg_6072_pp0_iter2_reg.read().is_01() || !ap_const_lv32_C76C51A3.is_01())? sc_lv<32>(): (sc_biguint<32>(m_43_reg_6072_pp0_iter2_reg.read()) + sc_bigint<32>(ap_const_lv32_C76C51A3));
}

void sha256_transform::thread_add_ln85_174_fu_4072_p2() {
    add_ln85_174_fu_4072_p2 = (!add_ln85_173_fu_4067_p2.read().is_01() || !grp_EP1_fu_1011_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_173_fu_4067_p2.read()) + sc_biguint<32>(grp_EP1_fu_1011_ap_return.read()));
}

void sha256_transform::thread_add_ln85_175_fu_4083_p2() {
    add_ln85_175_fu_4083_p2 = (!add_ln85_174_reg_6623.read().is_01() || !add_ln85_172_fu_4078_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_174_reg_6623.read()) + sc_biguint<32>(add_ln85_172_fu_4078_p2.read()));
}

void sha256_transform::thread_add_ln85_176_fu_4111_p2() {
    add_ln85_176_fu_4111_p2 = (!grp_CH_fu_900_ap_return.read().is_01() || !add_ln90_40_reg_6575.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_CH_fu_900_ap_return.read()) + sc_biguint<32>(add_ln90_40_reg_6575.read()));
}

void sha256_transform::thread_add_ln85_177_fu_4116_p2() {
    add_ln85_177_fu_4116_p2 = (!m_44_reg_6080_pp0_iter2_reg.read().is_01() || !ap_const_lv32_D192E819.is_01())? sc_lv<32>(): (sc_biguint<32>(m_44_reg_6080_pp0_iter2_reg.read()) + sc_bigint<32>(ap_const_lv32_D192E819));
}

void sha256_transform::thread_add_ln85_178_fu_4121_p2() {
    add_ln85_178_fu_4121_p2 = (!add_ln85_177_fu_4116_p2.read().is_01() || !grp_EP1_fu_1006_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_177_fu_4116_p2.read()) + sc_biguint<32>(grp_EP1_fu_1006_ap_return.read()));
}

void sha256_transform::thread_add_ln85_179_fu_4127_p2() {
    add_ln85_179_fu_4127_p2 = (!add_ln85_178_fu_4121_p2.read().is_01() || !add_ln85_176_fu_4111_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_178_fu_4121_p2.read()) + sc_biguint<32>(add_ln85_176_fu_4111_p2.read()));
}

void sha256_transform::thread_add_ln85_17_fu_1575_p2() {
    add_ln85_17_fu_1575_p2 = (!m_4_fu_1511_p5.read().is_01() || !ap_const_lv32_3956C25B.is_01())? sc_lv<32>(): (sc_biguint<32>(m_4_fu_1511_p5.read()) + sc_biguint<32>(ap_const_lv32_3956C25B));
}

void sha256_transform::thread_add_ln85_180_fu_4154_p2() {
    add_ln85_180_fu_4154_p2 = (!reg_1234.read().is_01() || !add_ln90_41_reg_6603.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1234.read()) + sc_biguint<32>(add_ln90_41_reg_6603.read()));
}

void sha256_transform::thread_add_ln85_181_fu_4159_p2() {
    add_ln85_181_fu_4159_p2 = (!m_45_reg_6089_pp0_iter2_reg.read().is_01() || !ap_const_lv32_D6990624.is_01())? sc_lv<32>(): (sc_biguint<32>(m_45_reg_6089_pp0_iter2_reg.read()) + sc_bigint<32>(ap_const_lv32_D6990624));
}

void sha256_transform::thread_add_ln85_182_fu_4164_p2() {
    add_ln85_182_fu_4164_p2 = (!add_ln85_181_fu_4159_p2.read().is_01() || !reg_1246.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_181_fu_4159_p2.read()) + sc_biguint<32>(reg_1246.read()));
}

void sha256_transform::thread_add_ln85_183_fu_4170_p2() {
    add_ln85_183_fu_4170_p2 = (!add_ln85_182_fu_4164_p2.read().is_01() || !add_ln85_180_fu_4154_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_182_fu_4164_p2.read()) + sc_biguint<32>(add_ln85_180_fu_4154_p2.read()));
}

void sha256_transform::thread_add_ln85_184_fu_4197_p2() {
    add_ln85_184_fu_4197_p2 = (!grp_CH_fu_900_ap_return.read().is_01() || !add_ln90_42_reg_6609.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_CH_fu_900_ap_return.read()) + sc_biguint<32>(add_ln90_42_reg_6609.read()));
}

void sha256_transform::thread_add_ln85_185_fu_4202_p2() {
    add_ln85_185_fu_4202_p2 = (!m_46_reg_6124_pp0_iter2_reg.read().is_01() || !ap_const_lv32_F40E3585.is_01())? sc_lv<32>(): (sc_biguint<32>(m_46_reg_6124_pp0_iter2_reg.read()) + sc_bigint<32>(ap_const_lv32_F40E3585));
}

void sha256_transform::thread_add_ln85_186_fu_4207_p2() {
    add_ln85_186_fu_4207_p2 = (!add_ln85_185_fu_4202_p2.read().is_01() || !grp_EP1_fu_1006_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_185_fu_4202_p2.read()) + sc_biguint<32>(grp_EP1_fu_1006_ap_return.read()));
}

void sha256_transform::thread_add_ln85_187_fu_4213_p2() {
    add_ln85_187_fu_4213_p2 = (!add_ln85_186_fu_4207_p2.read().is_01() || !add_ln85_184_fu_4197_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_186_fu_4207_p2.read()) + sc_biguint<32>(add_ln85_184_fu_4197_p2.read()));
}

void sha256_transform::thread_add_ln85_188_fu_4238_p2() {
    add_ln85_188_fu_4238_p2 = (!grp_CH_fu_900_ap_return.read().is_01() || !add_ln90_43_reg_6628.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_CH_fu_900_ap_return.read()) + sc_biguint<32>(add_ln90_43_reg_6628.read()));
}

void sha256_transform::thread_add_ln85_189_fu_4243_p2() {
    add_ln85_189_fu_4243_p2 = (!m_47_reg_6132_pp0_iter2_reg.read().is_01() || !ap_const_lv32_106AA070.is_01())? sc_lv<32>(): (sc_biguint<32>(m_47_reg_6132_pp0_iter2_reg.read()) + sc_biguint<32>(ap_const_lv32_106AA070));
}

void sha256_transform::thread_add_ln85_18_fu_1581_p2() {
    add_ln85_18_fu_1581_p2 = (!add_ln85_17_fu_1575_p2.read().is_01() || !grp_EP1_fu_980_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_17_fu_1575_p2.read()) + sc_biguint<32>(grp_EP1_fu_980_ap_return.read()));
}

void sha256_transform::thread_add_ln85_190_fu_4248_p2() {
    add_ln85_190_fu_4248_p2 = (!add_ln85_189_fu_4243_p2.read().is_01() || !grp_EP1_fu_1006_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_189_fu_4243_p2.read()) + sc_biguint<32>(grp_EP1_fu_1006_ap_return.read()));
}

void sha256_transform::thread_add_ln85_191_fu_4254_p2() {
    add_ln85_191_fu_4254_p2 = (!add_ln85_190_fu_4248_p2.read().is_01() || !add_ln85_188_fu_4238_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_190_fu_4248_p2.read()) + sc_biguint<32>(add_ln85_188_fu_4238_p2.read()));
}

void sha256_transform::thread_add_ln85_192_fu_4307_p2() {
    add_ln85_192_fu_4307_p2 = (!reg_1234.read().is_01() || !add_ln90_44_reg_6640.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1234.read()) + sc_biguint<32>(add_ln90_44_reg_6640.read()));
}

void sha256_transform::thread_add_ln85_193_fu_4281_p2() {
    add_ln85_193_fu_4281_p2 = (!m_48_reg_6140_pp0_iter2_reg.read().is_01() || !ap_const_lv32_19A4C116.is_01())? sc_lv<32>(): (sc_biguint<32>(m_48_reg_6140_pp0_iter2_reg.read()) + sc_biguint<32>(ap_const_lv32_19A4C116));
}

void sha256_transform::thread_add_ln85_194_fu_4286_p2() {
    add_ln85_194_fu_4286_p2 = (!add_ln85_193_fu_4281_p2.read().is_01() || !grp_EP1_fu_1011_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_193_fu_4281_p2.read()) + sc_biguint<32>(grp_EP1_fu_1011_ap_return.read()));
}

void sha256_transform::thread_add_ln85_195_fu_4312_p2() {
    add_ln85_195_fu_4312_p2 = (!add_ln85_194_reg_6702.read().is_01() || !add_ln85_192_fu_4307_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_194_reg_6702.read()) + sc_biguint<32>(add_ln85_192_fu_4307_p2.read()));
}

void sha256_transform::thread_add_ln85_196_fu_4340_p2() {
    add_ln85_196_fu_4340_p2 = (!grp_CH_fu_900_ap_return.read().is_01() || !add_ln90_45_reg_6654.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_CH_fu_900_ap_return.read()) + sc_biguint<32>(add_ln90_45_reg_6654.read()));
}

void sha256_transform::thread_add_ln85_197_fu_4345_p2() {
    add_ln85_197_fu_4345_p2 = (!m_49_reg_6147_pp0_iter3_reg.read().is_01() || !ap_const_lv32_1E376C08.is_01())? sc_lv<32>(): (sc_biguint<32>(m_49_reg_6147_pp0_iter3_reg.read()) + sc_biguint<32>(ap_const_lv32_1E376C08));
}

void sha256_transform::thread_add_ln85_198_fu_4350_p2() {
    add_ln85_198_fu_4350_p2 = (!add_ln85_197_fu_4345_p2.read().is_01() || !grp_EP1_fu_1006_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_197_fu_4345_p2.read()) + sc_biguint<32>(grp_EP1_fu_1006_ap_return.read()));
}

void sha256_transform::thread_add_ln85_199_fu_4356_p2() {
    add_ln85_199_fu_4356_p2 = (!add_ln85_198_fu_4350_p2.read().is_01() || !add_ln85_196_fu_4340_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_198_fu_4350_p2.read()) + sc_biguint<32>(add_ln85_196_fu_4340_p2.read()));
}

void sha256_transform::thread_add_ln85_19_fu_1587_p2() {
    add_ln85_19_fu_1587_p2 = (!add_ln85_18_fu_1581_p2.read().is_01() || !add_ln85_16_fu_1570_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_18_fu_1581_p2.read()) + sc_biguint<32>(add_ln85_16_fu_1570_p2.read()));
}

void sha256_transform::thread_add_ln85_1_fu_1346_p2() {
    add_ln85_1_fu_1346_p2 = (!m_0_fu_1316_p5.read().is_01() || !ap_const_lv32_428A2F98.is_01())? sc_lv<32>(): (sc_biguint<32>(m_0_fu_1316_p5.read()) + sc_biguint<32>(ap_const_lv32_428A2F98));
}

void sha256_transform::thread_add_ln85_200_fu_4383_p2() {
    add_ln85_200_fu_4383_p2 = (!reg_1234.read().is_01() || !add_ln90_46_reg_6682.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1234.read()) + sc_biguint<32>(add_ln90_46_reg_6682.read()));
}

void sha256_transform::thread_add_ln85_201_fu_4388_p2() {
    add_ln85_201_fu_4388_p2 = (!m_50_reg_6153_pp0_iter3_reg.read().is_01() || !ap_const_lv32_2748774C.is_01())? sc_lv<32>(): (sc_biguint<32>(m_50_reg_6153_pp0_iter3_reg.read()) + sc_biguint<32>(ap_const_lv32_2748774C));
}

void sha256_transform::thread_add_ln85_202_fu_4393_p2() {
    add_ln85_202_fu_4393_p2 = (!add_ln85_201_fu_4388_p2.read().is_01() || !reg_1246.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_201_fu_4388_p2.read()) + sc_biguint<32>(reg_1246.read()));
}

void sha256_transform::thread_add_ln85_203_fu_4399_p2() {
    add_ln85_203_fu_4399_p2 = (!add_ln85_202_fu_4393_p2.read().is_01() || !add_ln85_200_fu_4383_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_202_fu_4393_p2.read()) + sc_biguint<32>(add_ln85_200_fu_4383_p2.read()));
}

void sha256_transform::thread_add_ln85_204_fu_4426_p2() {
    add_ln85_204_fu_4426_p2 = (!grp_CH_fu_900_ap_return.read().is_01() || !add_ln90_47_reg_6688.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_CH_fu_900_ap_return.read()) + sc_biguint<32>(add_ln90_47_reg_6688.read()));
}

void sha256_transform::thread_add_ln85_205_fu_4431_p2() {
    add_ln85_205_fu_4431_p2 = (!m_51_reg_6160_pp0_iter3_reg.read().is_01() || !ap_const_lv32_34B0BCB5.is_01())? sc_lv<32>(): (sc_biguint<32>(m_51_reg_6160_pp0_iter3_reg.read()) + sc_biguint<32>(ap_const_lv32_34B0BCB5));
}

void sha256_transform::thread_add_ln85_206_fu_4436_p2() {
    add_ln85_206_fu_4436_p2 = (!add_ln85_205_fu_4431_p2.read().is_01() || !grp_EP1_fu_1006_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_205_fu_4431_p2.read()) + sc_biguint<32>(grp_EP1_fu_1006_ap_return.read()));
}

void sha256_transform::thread_add_ln85_207_fu_4442_p2() {
    add_ln85_207_fu_4442_p2 = (!add_ln85_206_fu_4436_p2.read().is_01() || !add_ln85_204_fu_4426_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_206_fu_4436_p2.read()) + sc_biguint<32>(add_ln85_204_fu_4426_p2.read()));
}

void sha256_transform::thread_add_ln85_208_fu_4467_p2() {
    add_ln85_208_fu_4467_p2 = (!grp_CH_fu_907_ap_return.read().is_01() || !add_ln90_48_reg_6712.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_CH_fu_907_ap_return.read()) + sc_biguint<32>(add_ln90_48_reg_6712.read()));
}

void sha256_transform::thread_add_ln85_209_fu_4472_p2() {
    add_ln85_209_fu_4472_p2 = (!m_52_reg_6195_pp0_iter3_reg.read().is_01() || !ap_const_lv32_391C0CB3.is_01())? sc_lv<32>(): (sc_biguint<32>(m_52_reg_6195_pp0_iter3_reg.read()) + sc_biguint<32>(ap_const_lv32_391C0CB3));
}

void sha256_transform::thread_add_ln85_20_fu_1640_p2() {
    add_ln85_20_fu_1640_p2 = (!reg_1138.read().is_01() || !add_ln90_1_reg_5263.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1138.read()) + sc_biguint<32>(add_ln90_1_reg_5263.read()));
}

void sha256_transform::thread_add_ln85_210_fu_4477_p2() {
    add_ln85_210_fu_4477_p2 = (!add_ln85_209_fu_4472_p2.read().is_01() || !grp_EP1_fu_1011_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_209_fu_4472_p2.read()) + sc_biguint<32>(grp_EP1_fu_1011_ap_return.read()));
}

void sha256_transform::thread_add_ln85_211_fu_4483_p2() {
    add_ln85_211_fu_4483_p2 = (!add_ln85_210_fu_4477_p2.read().is_01() || !add_ln85_208_fu_4467_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_210_fu_4477_p2.read()) + sc_biguint<32>(add_ln85_208_fu_4467_p2.read()));
}

void sha256_transform::thread_add_ln85_212_fu_4521_p2() {
    add_ln85_212_fu_4521_p2 = (!reg_1250.read().is_01() || !add_ln90_49_reg_6724.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1250.read()) + sc_biguint<32>(add_ln90_49_reg_6724.read()));
}

void sha256_transform::thread_add_ln85_213_fu_4510_p2() {
    add_ln85_213_fu_4510_p2 = (!m_53_reg_6201_pp0_iter3_reg.read().is_01() || !ap_const_lv32_4ED8AA4A.is_01())? sc_lv<32>(): (sc_biguint<32>(m_53_reg_6201_pp0_iter3_reg.read()) + sc_biguint<32>(ap_const_lv32_4ED8AA4A));
}

void sha256_transform::thread_add_ln85_214_fu_4515_p2() {
    add_ln85_214_fu_4515_p2 = (!add_ln85_213_fu_4510_p2.read().is_01() || !grp_EP1_fu_1016_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_213_fu_4510_p2.read()) + sc_biguint<32>(grp_EP1_fu_1016_ap_return.read()));
}

void sha256_transform::thread_add_ln85_215_fu_4526_p2() {
    add_ln85_215_fu_4526_p2 = (!add_ln85_214_reg_6786.read().is_01() || !add_ln85_212_fu_4521_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_214_reg_6786.read()) + sc_biguint<32>(add_ln85_212_fu_4521_p2.read()));
}

void sha256_transform::thread_add_ln85_216_fu_4554_p2() {
    add_ln85_216_fu_4554_p2 = (!grp_CH_fu_907_ap_return.read().is_01() || !add_ln90_50_reg_6738.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_CH_fu_907_ap_return.read()) + sc_biguint<32>(add_ln90_50_reg_6738.read()));
}

void sha256_transform::thread_add_ln85_217_fu_4559_p2() {
    add_ln85_217_fu_4559_p2 = (!m_54_reg_6207_pp0_iter3_reg.read().is_01() || !ap_const_lv32_5B9CCA4F.is_01())? sc_lv<32>(): (sc_biguint<32>(m_54_reg_6207_pp0_iter3_reg.read()) + sc_biguint<32>(ap_const_lv32_5B9CCA4F));
}

void sha256_transform::thread_add_ln85_218_fu_4564_p2() {
    add_ln85_218_fu_4564_p2 = (!add_ln85_217_fu_4559_p2.read().is_01() || !grp_EP1_fu_1011_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_217_fu_4559_p2.read()) + sc_biguint<32>(grp_EP1_fu_1011_ap_return.read()));
}

void sha256_transform::thread_add_ln85_219_fu_4570_p2() {
    add_ln85_219_fu_4570_p2 = (!add_ln85_218_fu_4564_p2.read().is_01() || !add_ln85_216_fu_4554_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_218_fu_4564_p2.read()) + sc_biguint<32>(add_ln85_216_fu_4554_p2.read()));
}

void sha256_transform::thread_add_ln85_21_fu_1645_p2() {
    add_ln85_21_fu_1645_p2 = (!m_5_reg_5299.read().is_01() || !ap_const_lv32_59F111F1.is_01())? sc_lv<32>(): (sc_biguint<32>(m_5_reg_5299.read()) + sc_biguint<32>(ap_const_lv32_59F111F1));
}

void sha256_transform::thread_add_ln85_220_fu_4597_p2() {
    add_ln85_220_fu_4597_p2 = (!reg_1250.read().is_01() || !add_ln90_51_reg_6766.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1250.read()) + sc_biguint<32>(add_ln90_51_reg_6766.read()));
}

void sha256_transform::thread_add_ln85_221_fu_4602_p2() {
    add_ln85_221_fu_4602_p2 = (!m_55_reg_6213_pp0_iter3_reg.read().is_01() || !ap_const_lv32_682E6FF3.is_01())? sc_lv<32>(): (sc_biguint<32>(m_55_reg_6213_pp0_iter3_reg.read()) + sc_biguint<32>(ap_const_lv32_682E6FF3));
}

void sha256_transform::thread_add_ln85_222_fu_4607_p2() {
    add_ln85_222_fu_4607_p2 = (!add_ln85_221_fu_4602_p2.read().is_01() || !tmp_2_54_reg_6817.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_221_fu_4602_p2.read()) + sc_biguint<32>(tmp_2_54_reg_6817.read()));
}

void sha256_transform::thread_add_ln85_223_fu_4612_p2() {
    add_ln85_223_fu_4612_p2 = (!add_ln85_222_fu_4607_p2.read().is_01() || !add_ln85_220_fu_4597_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_222_fu_4607_p2.read()) + sc_biguint<32>(add_ln85_220_fu_4597_p2.read()));
}

void sha256_transform::thread_add_ln85_224_fu_4639_p2() {
    add_ln85_224_fu_4639_p2 = (!grp_CH_fu_914_ap_return.read().is_01() || !add_ln90_52_reg_6772.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_CH_fu_914_ap_return.read()) + sc_biguint<32>(add_ln90_52_reg_6772.read()));
}

void sha256_transform::thread_add_ln85_225_fu_4644_p2() {
    add_ln85_225_fu_4644_p2 = (!m_56_reg_6219_pp0_iter3_reg.read().is_01() || !ap_const_lv32_748F82EE.is_01())? sc_lv<32>(): (sc_biguint<32>(m_56_reg_6219_pp0_iter3_reg.read()) + sc_biguint<32>(ap_const_lv32_748F82EE));
}

void sha256_transform::thread_add_ln85_226_fu_4649_p2() {
    add_ln85_226_fu_4649_p2 = (!add_ln85_225_fu_4644_p2.read().is_01() || !grp_EP1_fu_1016_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_225_fu_4644_p2.read()) + sc_biguint<32>(grp_EP1_fu_1016_ap_return.read()));
}

void sha256_transform::thread_add_ln85_227_fu_4655_p2() {
    add_ln85_227_fu_4655_p2 = (!add_ln85_226_fu_4649_p2.read().is_01() || !add_ln85_224_fu_4639_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_226_fu_4649_p2.read()) + sc_biguint<32>(add_ln85_224_fu_4639_p2.read()));
}

void sha256_transform::thread_add_ln85_228_fu_4679_p2() {
    add_ln85_228_fu_4679_p2 = (!grp_CH_fu_914_ap_return.read().is_01() || !add_ln90_53_reg_6791.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_CH_fu_914_ap_return.read()) + sc_biguint<32>(add_ln90_53_reg_6791.read()));
}

void sha256_transform::thread_add_ln85_229_fu_4684_p2() {
    add_ln85_229_fu_4684_p2 = (!m_57_reg_6226_pp0_iter3_reg.read().is_01() || !ap_const_lv32_78A5636F.is_01())? sc_lv<32>(): (sc_biguint<32>(m_57_reg_6226_pp0_iter3_reg.read()) + sc_biguint<32>(ap_const_lv32_78A5636F));
}

void sha256_transform::thread_add_ln85_22_fu_1650_p2() {
    add_ln85_22_fu_1650_p2 = (!add_ln85_21_fu_1645_p2.read().is_01() || !reg_1154.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_21_fu_1645_p2.read()) + sc_biguint<32>(reg_1154.read()));
}

void sha256_transform::thread_add_ln85_230_fu_4689_p2() {
    add_ln85_230_fu_4689_p2 = (!add_ln85_229_fu_4684_p2.read().is_01() || !grp_EP1_fu_1016_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_229_fu_4684_p2.read()) + sc_biguint<32>(grp_EP1_fu_1016_ap_return.read()));
}

void sha256_transform::thread_add_ln85_231_fu_4695_p2() {
    add_ln85_231_fu_4695_p2 = (!add_ln85_230_fu_4689_p2.read().is_01() || !add_ln85_228_fu_4679_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_230_fu_4689_p2.read()) + sc_biguint<32>(add_ln85_228_fu_4679_p2.read()));
}

void sha256_transform::thread_add_ln85_232_fu_4718_p2() {
    add_ln85_232_fu_4718_p2 = (!grp_CH_fu_907_ap_return.read().is_01() || !ap_const_lv32_84C87814.is_01())? sc_lv<32>(): (sc_biguint<32>(grp_CH_fu_907_ap_return.read()) + sc_bigint<32>(ap_const_lv32_84C87814));
}

void sha256_transform::thread_add_ln85_233_fu_4724_p2() {
    add_ln85_233_fu_4724_p2 = (!grp_EP1_fu_1011_ap_return.read().is_01() || !m_58_reg_6257_pp0_iter3_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_EP1_fu_1011_ap_return.read()) + sc_biguint<32>(m_58_reg_6257_pp0_iter3_reg.read()));
}

void sha256_transform::thread_add_ln85_234_fu_4729_p2() {
    add_ln85_234_fu_4729_p2 = (!add_ln85_233_fu_4724_p2.read().is_01() || !add_ln90_54_reg_6803.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_233_fu_4724_p2.read()) + sc_biguint<32>(add_ln90_54_reg_6803.read()));
}

void sha256_transform::thread_add_ln85_235_fu_4734_p2() {
    add_ln85_235_fu_4734_p2 = (!add_ln85_234_fu_4729_p2.read().is_01() || !add_ln85_232_fu_4718_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_234_fu_4729_p2.read()) + sc_biguint<32>(add_ln85_232_fu_4718_p2.read()));
}

void sha256_transform::thread_add_ln85_236_fu_4761_p2() {
    add_ln85_236_fu_4761_p2 = (!grp_CH_fu_914_ap_return.read().is_01() || !ap_const_lv32_8CC70208.is_01())? sc_lv<32>(): (sc_biguint<32>(grp_CH_fu_914_ap_return.read()) + sc_bigint<32>(ap_const_lv32_8CC70208));
}

void sha256_transform::thread_add_ln85_237_fu_4767_p2() {
    add_ln85_237_fu_4767_p2 = (!grp_EP1_fu_1016_ap_return.read().is_01() || !m_59_reg_6262_pp0_iter3_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_EP1_fu_1016_ap_return.read()) + sc_biguint<32>(m_59_reg_6262_pp0_iter3_reg.read()));
}

void sha256_transform::thread_add_ln85_238_fu_4772_p2() {
    add_ln85_238_fu_4772_p2 = (!add_ln85_237_fu_4767_p2.read().is_01() || !add_ln90_55_reg_6822.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_237_fu_4767_p2.read()) + sc_biguint<32>(add_ln90_55_reg_6822.read()));
}

void sha256_transform::thread_add_ln85_239_fu_4777_p2() {
    add_ln85_239_fu_4777_p2 = (!add_ln85_238_fu_4772_p2.read().is_01() || !add_ln85_236_fu_4761_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_238_fu_4772_p2.read()) + sc_biguint<32>(add_ln85_236_fu_4761_p2.read()));
}

void sha256_transform::thread_add_ln85_23_fu_1656_p2() {
    add_ln85_23_fu_1656_p2 = (!add_ln85_22_fu_1650_p2.read().is_01() || !add_ln85_20_fu_1640_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_22_fu_1650_p2.read()) + sc_biguint<32>(add_ln85_20_fu_1640_p2.read()));
}

void sha256_transform::thread_add_ln85_240_fu_4802_p2() {
    add_ln85_240_fu_4802_p2 = (!grp_CH_fu_914_ap_return.read().is_01() || !ap_const_lv32_90BEFFFA.is_01())? sc_lv<32>(): (sc_biguint<32>(grp_CH_fu_914_ap_return.read()) + sc_bigint<32>(ap_const_lv32_90BEFFFA));
}

void sha256_transform::thread_add_ln85_241_fu_4808_p2() {
    add_ln85_241_fu_4808_p2 = (!grp_EP1_fu_1016_ap_return.read().is_01() || !m_60_reg_6267_pp0_iter3_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_EP1_fu_1016_ap_return.read()) + sc_biguint<32>(m_60_reg_6267_pp0_iter3_reg.read()));
}

void sha256_transform::thread_add_ln85_242_fu_4813_p2() {
    add_ln85_242_fu_4813_p2 = (!add_ln85_241_fu_4808_p2.read().is_01() || !add_ln90_56_reg_6850.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_241_fu_4808_p2.read()) + sc_biguint<32>(add_ln90_56_reg_6850.read()));
}

void sha256_transform::thread_add_ln85_243_fu_4818_p2() {
    add_ln85_243_fu_4818_p2 = (!add_ln85_242_fu_4813_p2.read().is_01() || !add_ln85_240_fu_4802_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_242_fu_4813_p2.read()) + sc_biguint<32>(add_ln85_240_fu_4802_p2.read()));
}

void sha256_transform::thread_add_ln85_244_fu_4841_p2() {
    add_ln85_244_fu_4841_p2 = (!grp_CH_fu_914_ap_return.read().is_01() || !ap_const_lv32_A4506CEB.is_01())? sc_lv<32>(): (sc_biguint<32>(grp_CH_fu_914_ap_return.read()) + sc_bigint<32>(ap_const_lv32_A4506CEB));
}

void sha256_transform::thread_add_ln85_245_fu_4847_p2() {
    add_ln85_245_fu_4847_p2 = (!grp_EP1_fu_1016_ap_return.read().is_01() || !m_61_reg_6272_pp0_iter3_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_EP1_fu_1016_ap_return.read()) + sc_biguint<32>(m_61_reg_6272_pp0_iter3_reg.read()));
}

void sha256_transform::thread_add_ln85_246_fu_4852_p2() {
    add_ln85_246_fu_4852_p2 = (!add_ln85_245_fu_4847_p2.read().is_01() || !add_ln90_57_reg_6857.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_245_fu_4847_p2.read()) + sc_biguint<32>(add_ln90_57_reg_6857.read()));
}

void sha256_transform::thread_add_ln85_247_fu_4857_p2() {
    add_ln85_247_fu_4857_p2 = (!add_ln85_246_fu_4852_p2.read().is_01() || !add_ln85_244_fu_4841_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_246_fu_4852_p2.read()) + sc_biguint<32>(add_ln85_244_fu_4841_p2.read()));
}

void sha256_transform::thread_add_ln85_248_fu_4880_p2() {
    add_ln85_248_fu_4880_p2 = (!grp_CH_fu_907_ap_return.read().is_01() || !ap_const_lv32_BEF9A3F7.is_01())? sc_lv<32>(): (sc_biguint<32>(grp_CH_fu_907_ap_return.read()) + sc_bigint<32>(ap_const_lv32_BEF9A3F7));
}

void sha256_transform::thread_add_ln85_249_fu_4886_p2() {
    add_ln85_249_fu_4886_p2 = (!add_ln90_58_reg_6875.read().is_01() || !grp_EP1_fu_1011_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln90_58_reg_6875.read()) + sc_biguint<32>(grp_EP1_fu_1011_ap_return.read()));
}

void sha256_transform::thread_add_ln85_24_fu_1683_p2() {
    add_ln85_24_fu_1683_p2 = (!grp_CH_fu_862_ap_return.read().is_01() || !ap_const_lv32_923F82A4.is_01())? sc_lv<32>(): (sc_biguint<32>(grp_CH_fu_862_ap_return.read()) + sc_bigint<32>(ap_const_lv32_923F82A4));
}

void sha256_transform::thread_add_ln85_250_fu_4891_p2() {
    add_ln85_250_fu_4891_p2 = (!add_ln85_249_fu_4886_p2.read().is_01() || !add_ln85_248_fu_4880_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_249_fu_4886_p2.read()) + sc_biguint<32>(add_ln85_248_fu_4880_p2.read()));
}

void sha256_transform::thread_add_ln85_251_fu_3286_p2() {
    add_ln85_251_fu_3286_p2 = (!grp_SIG1_fu_1112_ap_return.read().is_01() || !m_55_reg_6213.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_SIG1_fu_1112_ap_return.read()) + sc_biguint<32>(m_55_reg_6213.read()));
}

void sha256_transform::thread_add_ln85_252_fu_4897_p2() {
    add_ln85_252_fu_4897_p2 = (!add_ln85_254_reg_6313_pp0_iter3_reg.read().is_01() || !add_ln85_250_fu_4891_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_254_reg_6313_pp0_iter3_reg.read()) + sc_biguint<32>(add_ln85_250_fu_4891_p2.read()));
}

void sha256_transform::thread_add_ln85_253_fu_3291_p2() {
    add_ln85_253_fu_3291_p2 = (!m_46_reg_6124.read().is_01() || !grp_SIG0_fu_1082_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_46_reg_6124.read()) + sc_biguint<32>(grp_SIG0_fu_1082_ap_return.read()));
}

void sha256_transform::thread_add_ln85_254_fu_3296_p2() {
    add_ln85_254_fu_3296_p2 = (!add_ln85_253_fu_3291_p2.read().is_01() || !add_ln85_251_fu_3286_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_253_fu_3291_p2.read()) + sc_biguint<32>(add_ln85_251_fu_3286_p2.read()));
}

void sha256_transform::thread_add_ln85_255_fu_4939_p2() {
    add_ln85_255_fu_4939_p2 = (!add_ln85_261_reg_6707_pp0_iter4_reg.read().is_01() || !add_ln85_258_fu_4933_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_261_reg_6707_pp0_iter4_reg.read()) + sc_biguint<32>(add_ln85_258_fu_4933_p2.read()));
}

void sha256_transform::thread_add_ln85_256_fu_4923_p2() {
    add_ln85_256_fu_4923_p2 = (!grp_CH_fu_914_ap_return.read().is_01() || !add_ln90_59_reg_6895.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_CH_fu_914_ap_return.read()) + sc_biguint<32>(add_ln90_59_reg_6895.read()));
}

void sha256_transform::thread_add_ln85_257_fu_4928_p2() {
    add_ln85_257_fu_4928_p2 = (!grp_EP1_fu_1016_ap_return.read().is_01() || !tmp_47_reg_6277_pp0_iter3_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_EP1_fu_1016_ap_return.read()) + sc_biguint<32>(tmp_47_reg_6277_pp0_iter3_reg.read()));
}

void sha256_transform::thread_add_ln85_258_fu_4933_p2() {
    add_ln85_258_fu_4933_p2 = (!add_ln85_257_fu_4928_p2.read().is_01() || !add_ln85_256_fu_4923_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_257_fu_4928_p2.read()) + sc_biguint<32>(add_ln85_256_fu_4923_p2.read()));
}

void sha256_transform::thread_add_ln85_259_fu_4292_p2() {
    add_ln85_259_fu_4292_p2 = (!m_56_reg_6219_pp0_iter2_reg.read().is_01() || !m_47_reg_6132_pp0_iter2_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_56_reg_6219_pp0_iter2_reg.read()) + sc_biguint<32>(m_47_reg_6132_pp0_iter2_reg.read()));
}

void sha256_transform::thread_add_ln85_25_fu_1689_p2() {
    add_ln85_25_fu_1689_p2 = (!grp_EP1_fu_980_ap_return.read().is_01() || !m_6_fu_1614_p5.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_EP1_fu_980_ap_return.read()) + sc_biguint<32>(m_6_fu_1614_p5.read()));
}

void sha256_transform::thread_add_ln85_260_fu_4296_p2() {
    add_ln85_260_fu_4296_p2 = (!tmp_1_46_reg_6282_pp0_iter2_reg.read().is_01() || !ap_const_lv32_C67178F2.is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_1_46_reg_6282_pp0_iter2_reg.read()) + sc_bigint<32>(ap_const_lv32_C67178F2));
}

void sha256_transform::thread_add_ln85_261_fu_4301_p2() {
    add_ln85_261_fu_4301_p2 = (!add_ln85_260_fu_4296_p2.read().is_01() || !add_ln85_259_fu_4292_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_260_fu_4296_p2.read()) + sc_biguint<32>(add_ln85_259_fu_4292_p2.read()));
}

void sha256_transform::thread_add_ln85_26_fu_1695_p2() {
    add_ln85_26_fu_1695_p2 = (!add_ln85_25_fu_1689_p2.read().is_01() || !add_ln90_2_reg_5275.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_25_fu_1689_p2.read()) + sc_biguint<32>(add_ln90_2_reg_5275.read()));
}

void sha256_transform::thread_add_ln85_27_fu_1700_p2() {
    add_ln85_27_fu_1700_p2 = (!add_ln85_26_fu_1695_p2.read().is_01() || !add_ln85_24_fu_1683_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_26_fu_1695_p2.read()) + sc_biguint<32>(add_ln85_24_fu_1683_p2.read()));
}

void sha256_transform::thread_add_ln85_28_fu_1751_p2() {
    add_ln85_28_fu_1751_p2 = (!grp_CH_fu_862_ap_return.read().is_01() || !ap_const_lv32_AB1C5ED5.is_01())? sc_lv<32>(): (sc_biguint<32>(grp_CH_fu_862_ap_return.read()) + sc_bigint<32>(ap_const_lv32_AB1C5ED5));
}

void sha256_transform::thread_add_ln85_29_fu_1757_p2() {
    add_ln85_29_fu_1757_p2 = (!grp_EP1_fu_980_ap_return.read().is_01() || !m_7_reg_5381.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_EP1_fu_980_ap_return.read()) + sc_biguint<32>(m_7_reg_5381.read()));
}

void sha256_transform::thread_add_ln85_2_fu_1352_p2() {
    add_ln85_2_fu_1352_p2 = (!add_ln85_1_fu_1346_p2.read().is_01() || !tmp_48_reg_5118.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_1_fu_1346_p2.read()) + sc_biguint<32>(tmp_48_reg_5118.read()));
}

void sha256_transform::thread_add_ln85_30_fu_1762_p2() {
    add_ln85_30_fu_1762_p2 = (!add_ln85_29_fu_1757_p2.read().is_01() || !add_ln90_3_reg_5350.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_29_fu_1757_p2.read()) + sc_biguint<32>(add_ln90_3_reg_5350.read()));
}

void sha256_transform::thread_add_ln85_31_fu_1767_p2() {
    add_ln85_31_fu_1767_p2 = (!add_ln85_30_fu_1762_p2.read().is_01() || !add_ln85_28_fu_1751_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_30_fu_1762_p2.read()) + sc_biguint<32>(add_ln85_28_fu_1751_p2.read()));
}

void sha256_transform::thread_add_ln85_32_fu_1832_p2() {
    add_ln85_32_fu_1832_p2 = (!reg_1138.read().is_01() || !add_ln90_4_reg_5362.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1138.read()) + sc_biguint<32>(add_ln90_4_reg_5362.read()));
}

void sha256_transform::thread_add_ln85_33_fu_1794_p2() {
    add_ln85_33_fu_1794_p2 = (!m_8_fu_1718_p5.read().is_01() || !ap_const_lv32_D807AA98.is_01())? sc_lv<32>(): (sc_biguint<32>(m_8_fu_1718_p5.read()) + sc_bigint<32>(ap_const_lv32_D807AA98));
}

void sha256_transform::thread_add_ln85_34_fu_1800_p2() {
    add_ln85_34_fu_1800_p2 = (!add_ln85_33_fu_1794_p2.read().is_01() || !grp_EP1_fu_986_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_33_fu_1794_p2.read()) + sc_biguint<32>(grp_EP1_fu_986_ap_return.read()));
}

void sha256_transform::thread_add_ln85_35_fu_1837_p2() {
    add_ln85_35_fu_1837_p2 = (!add_ln85_34_reg_5547.read().is_01() || !add_ln85_32_fu_1832_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_34_reg_5547.read()) + sc_biguint<32>(add_ln85_32_fu_1832_p2.read()));
}

void sha256_transform::thread_add_ln85_36_fu_1865_p2() {
    add_ln85_36_fu_1865_p2 = (!grp_CH_fu_862_ap_return.read().is_01() || !add_ln90_5_reg_5437.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_CH_fu_862_ap_return.read()) + sc_biguint<32>(add_ln90_5_reg_5437.read()));
}

void sha256_transform::thread_add_ln85_37_fu_1870_p2() {
    add_ln85_37_fu_1870_p2 = (!m_9_reg_5470.read().is_01() || !ap_const_lv32_12835B01.is_01())? sc_lv<32>(): (sc_biguint<32>(m_9_reg_5470.read()) + sc_biguint<32>(ap_const_lv32_12835B01));
}

void sha256_transform::thread_add_ln85_38_fu_1875_p2() {
    add_ln85_38_fu_1875_p2 = (!add_ln85_37_fu_1870_p2.read().is_01() || !grp_EP1_fu_980_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_37_fu_1870_p2.read()) + sc_biguint<32>(grp_EP1_fu_980_ap_return.read()));
}

void sha256_transform::thread_add_ln85_39_fu_1881_p2() {
    add_ln85_39_fu_1881_p2 = (!add_ln85_38_fu_1875_p2.read().is_01() || !add_ln85_36_fu_1865_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_38_fu_1875_p2.read()) + sc_biguint<32>(add_ln85_36_fu_1865_p2.read()));
}

void sha256_transform::thread_add_ln85_3_fu_1357_p2() {
    add_ln85_3_fu_1357_p2 = (!add_ln85_2_fu_1352_p2.read().is_01() || !add_ln85_fu_1341_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_2_fu_1352_p2.read()) + sc_biguint<32>(add_ln85_fu_1341_p2.read()));
}

void sha256_transform::thread_add_ln85_40_fu_1934_p2() {
    add_ln85_40_fu_1934_p2 = (!reg_1138.read().is_01() || !add_ln90_6_reg_5527.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1138.read()) + sc_biguint<32>(add_ln90_6_reg_5527.read()));
}

void sha256_transform::thread_add_ln85_41_fu_1939_p2() {
    add_ln85_41_fu_1939_p2 = (!m_10_reg_5552.read().is_01() || !ap_const_lv32_243185BE.is_01())? sc_lv<32>(): (sc_biguint<32>(m_10_reg_5552.read()) + sc_biguint<32>(ap_const_lv32_243185BE));
}

void sha256_transform::thread_add_ln85_42_fu_1944_p2() {
    add_ln85_42_fu_1944_p2 = (!add_ln85_41_fu_1939_p2.read().is_01() || !reg_1154.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_41_fu_1939_p2.read()) + sc_biguint<32>(reg_1154.read()));
}

void sha256_transform::thread_add_ln85_43_fu_1950_p2() {
    add_ln85_43_fu_1950_p2 = (!add_ln85_42_fu_1944_p2.read().is_01() || !add_ln85_40_fu_1934_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_42_fu_1944_p2.read()) + sc_biguint<32>(add_ln85_40_fu_1934_p2.read()));
}

void sha256_transform::thread_add_ln85_44_fu_1977_p2() {
    add_ln85_44_fu_1977_p2 = (!grp_CH_fu_862_ap_return.read().is_01() || !add_ln90_7_reg_5533.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_CH_fu_862_ap_return.read()) + sc_biguint<32>(add_ln90_7_reg_5533.read()));
}

void sha256_transform::thread_add_ln85_45_fu_1982_p2() {
    add_ln85_45_fu_1982_p2 = (!m_11_reg_5559.read().is_01() || !ap_const_lv32_550C7DC3.is_01())? sc_lv<32>(): (sc_biguint<32>(m_11_reg_5559.read()) + sc_biguint<32>(ap_const_lv32_550C7DC3));
}

void sha256_transform::thread_add_ln85_46_fu_1987_p2() {
    add_ln85_46_fu_1987_p2 = (!add_ln85_45_fu_1982_p2.read().is_01() || !grp_EP1_fu_980_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_45_fu_1982_p2.read()) + sc_biguint<32>(grp_EP1_fu_980_ap_return.read()));
}

void sha256_transform::thread_add_ln85_47_fu_1993_p2() {
    add_ln85_47_fu_1993_p2 = (!add_ln85_46_fu_1987_p2.read().is_01() || !add_ln85_44_fu_1977_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_46_fu_1987_p2.read()) + sc_biguint<32>(add_ln85_44_fu_1977_p2.read()));
}

void sha256_transform::thread_add_ln85_48_fu_2136_p2() {
    add_ln85_48_fu_2136_p2 = (!grp_CH_fu_872_ap_return.read().is_01() || !add_ln90_8_reg_5616.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_CH_fu_872_ap_return.read()) + sc_biguint<32>(add_ln90_8_reg_5616.read()));
}

void sha256_transform::thread_add_ln85_49_fu_2141_p2() {
    add_ln85_49_fu_2141_p2 = (!m_12_reg_5642.read().is_01() || !ap_const_lv32_72BE5D74.is_01())? sc_lv<32>(): (sc_biguint<32>(m_12_reg_5642.read()) + sc_biguint<32>(ap_const_lv32_72BE5D74));
}

void sha256_transform::thread_add_ln85_4_fu_1385_p2() {
    add_ln85_4_fu_1385_p2 = (!grp_CH_fu_862_ap_return.read().is_01() || !ctx_state_6_read_1_reg_5036.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_CH_fu_862_ap_return.read()) + sc_biguint<32>(ctx_state_6_read_1_reg_5036.read()));
}

void sha256_transform::thread_add_ln85_50_fu_2146_p2() {
    add_ln85_50_fu_2146_p2 = (!add_ln85_49_fu_2141_p2.read().is_01() || !grp_EP1_fu_986_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_49_fu_2141_p2.read()) + sc_biguint<32>(grp_EP1_fu_986_ap_return.read()));
}

void sha256_transform::thread_add_ln85_51_fu_2152_p2() {
    add_ln85_51_fu_2152_p2 = (!add_ln85_50_fu_2146_p2.read().is_01() || !add_ln85_48_fu_2136_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_50_fu_2146_p2.read()) + sc_biguint<32>(add_ln85_48_fu_2136_p2.read()));
}

void sha256_transform::thread_add_ln85_52_fu_2286_p2() {
    add_ln85_52_fu_2286_p2 = (!reg_1174.read().is_01() || !ap_const_lv32_80DEB1FE.is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1174.read()) + sc_bigint<32>(ap_const_lv32_80DEB1FE));
}

void sha256_transform::thread_add_ln85_53_fu_2179_p2() {
    add_ln85_53_fu_2179_p2 = (!grp_EP1_fu_991_ap_return.read().is_01() || !m_13_reg_5649.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_EP1_fu_991_ap_return.read()) + sc_biguint<32>(m_13_reg_5649.read()));
}

void sha256_transform::thread_add_ln85_54_fu_2184_p2() {
    add_ln85_54_fu_2184_p2 = (!add_ln85_53_fu_2179_p2.read().is_01() || !add_ln90_9_reg_5628.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_53_fu_2179_p2.read()) + sc_biguint<32>(add_ln90_9_reg_5628.read()));
}

void sha256_transform::thread_add_ln85_55_fu_2292_p2() {
    add_ln85_55_fu_2292_p2 = (!add_ln85_54_reg_5813.read().is_01() || !add_ln85_52_fu_2286_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_54_reg_5813.read()) + sc_biguint<32>(add_ln85_52_fu_2286_p2.read()));
}

void sha256_transform::thread_add_ln85_56_fu_2320_p2() {
    add_ln85_56_fu_2320_p2 = (!grp_CH_fu_872_ap_return.read().is_01() || !ap_const_lv32_9BDC06A7.is_01())? sc_lv<32>(): (sc_biguint<32>(grp_CH_fu_872_ap_return.read()) + sc_bigint<32>(ap_const_lv32_9BDC06A7));
}

void sha256_transform::thread_add_ln85_57_fu_2326_p2() {
    add_ln85_57_fu_2326_p2 = (!grp_EP1_fu_986_ap_return.read().is_01() || !m_14_reg_5734.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_EP1_fu_986_ap_return.read()) + sc_biguint<32>(m_14_reg_5734.read()));
}

void sha256_transform::thread_add_ln85_58_fu_2331_p2() {
    add_ln85_58_fu_2331_p2 = (!add_ln85_57_fu_2326_p2.read().is_01() || !add_ln90_10_reg_5706.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_57_fu_2326_p2.read()) + sc_biguint<32>(add_ln90_10_reg_5706.read()));
}

void sha256_transform::thread_add_ln85_59_fu_2336_p2() {
    add_ln85_59_fu_2336_p2 = (!add_ln85_58_fu_2331_p2.read().is_01() || !add_ln85_56_fu_2320_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_58_fu_2331_p2.read()) + sc_biguint<32>(add_ln85_56_fu_2320_p2.read()));
}

void sha256_transform::thread_add_ln85_5_fu_1390_p2() {
    add_ln85_5_fu_1390_p2 = (!m_1_fu_1328_p5.read().is_01() || !ap_const_lv32_71374491.is_01())? sc_lv<32>(): (sc_biguint<32>(m_1_fu_1328_p5.read()) + sc_biguint<32>(ap_const_lv32_71374491));
}

void sha256_transform::thread_add_ln85_60_fu_2451_p2() {
    add_ln85_60_fu_2451_p2 = (!reg_1174.read().is_01() || !add_ln90_11_reg_5793.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1174.read()) + sc_biguint<32>(add_ln90_11_reg_5793.read()));
}

void sha256_transform::thread_add_ln85_61_fu_2456_p2() {
    add_ln85_61_fu_2456_p2 = (!m_15_reg_5740.read().is_01() || !ap_const_lv32_C19BF174.is_01())? sc_lv<32>(): (sc_biguint<32>(m_15_reg_5740.read()) + sc_bigint<32>(ap_const_lv32_C19BF174));
}

void sha256_transform::thread_add_ln85_62_fu_2461_p2() {
    add_ln85_62_fu_2461_p2 = (!add_ln85_61_fu_2456_p2.read().is_01() || !reg_1202.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_61_fu_2456_p2.read()) + sc_biguint<32>(reg_1202.read()));
}

void sha256_transform::thread_add_ln85_63_fu_2467_p2() {
    add_ln85_63_fu_2467_p2 = (!add_ln85_62_fu_2461_p2.read().is_01() || !add_ln85_60_fu_2451_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_62_fu_2461_p2.read()) + sc_biguint<32>(add_ln85_60_fu_2451_p2.read()));
}

void sha256_transform::thread_add_ln85_64_fu_2494_p2() {
    add_ln85_64_fu_2494_p2 = (!grp_CH_fu_879_ap_return.read().is_01() || !add_ln90_12_reg_5799.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_CH_fu_879_ap_return.read()) + sc_biguint<32>(add_ln90_12_reg_5799.read()));
}

void sha256_transform::thread_add_ln85_65_fu_2499_p2() {
    add_ln85_65_fu_2499_p2 = (!m_16_reg_5747.read().is_01() || !ap_const_lv32_E49B69C1.is_01())? sc_lv<32>(): (sc_biguint<32>(m_16_reg_5747.read()) + sc_bigint<32>(ap_const_lv32_E49B69C1));
}

void sha256_transform::thread_add_ln85_66_fu_2504_p2() {
    add_ln85_66_fu_2504_p2 = (!add_ln85_65_fu_2499_p2.read().is_01() || !grp_EP1_fu_991_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_65_fu_2499_p2.read()) + sc_biguint<32>(grp_EP1_fu_991_ap_return.read()));
}

void sha256_transform::thread_add_ln85_67_fu_2510_p2() {
    add_ln85_67_fu_2510_p2 = (!add_ln85_66_fu_2504_p2.read().is_01() || !add_ln85_64_fu_2494_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_66_fu_2504_p2.read()) + sc_biguint<32>(add_ln85_64_fu_2494_p2.read()));
}

void sha256_transform::thread_add_ln85_68_fu_2629_p2() {
    add_ln85_68_fu_2629_p2 = (!grp_CH_fu_879_ap_return.read().is_01() || !add_ln90_13_reg_5865.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_CH_fu_879_ap_return.read()) + sc_biguint<32>(add_ln90_13_reg_5865.read()));
}

void sha256_transform::thread_add_ln85_69_fu_2634_p2() {
    add_ln85_69_fu_2634_p2 = (!m_17_reg_5754.read().is_01() || !ap_const_lv32_EFBE4786.is_01())? sc_lv<32>(): (sc_biguint<32>(m_17_reg_5754.read()) + sc_bigint<32>(ap_const_lv32_EFBE4786));
}

void sha256_transform::thread_add_ln85_6_fu_1396_p2() {
    add_ln85_6_fu_1396_p2 = (!add_ln85_5_fu_1390_p2.read().is_01() || !grp_EP1_fu_980_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_5_fu_1390_p2.read()) + sc_biguint<32>(grp_EP1_fu_980_ap_return.read()));
}

void sha256_transform::thread_add_ln85_70_fu_2639_p2() {
    add_ln85_70_fu_2639_p2 = (!add_ln85_69_fu_2634_p2.read().is_01() || !grp_EP1_fu_991_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_69_fu_2634_p2.read()) + sc_biguint<32>(grp_EP1_fu_991_ap_return.read()));
}

void sha256_transform::thread_add_ln85_71_fu_2645_p2() {
    add_ln85_71_fu_2645_p2 = (!add_ln85_70_fu_2639_p2.read().is_01() || !add_ln85_68_fu_2629_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_70_fu_2639_p2.read()) + sc_biguint<32>(add_ln85_68_fu_2629_p2.read()));
}

void sha256_transform::thread_add_ln85_72_fu_2764_p2() {
    add_ln85_72_fu_2764_p2 = (!reg_1206.read().is_01() || !add_ln90_14_reg_5877.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1206.read()) + sc_biguint<32>(add_ln90_14_reg_5877.read()));
}

void sha256_transform::thread_add_ln85_73_fu_2672_p2() {
    add_ln85_73_fu_2672_p2 = (!m_18_reg_5761.read().is_01() || !ap_const_lv32_FC19DC6.is_01())? sc_lv<32>(): (sc_biguint<32>(m_18_reg_5761.read()) + sc_biguint<32>(ap_const_lv32_FC19DC6));
}

void sha256_transform::thread_add_ln85_74_fu_2677_p2() {
    add_ln85_74_fu_2677_p2 = (!add_ln85_73_fu_2672_p2.read().is_01() || !grp_EP1_fu_996_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_73_fu_2672_p2.read()) + sc_biguint<32>(grp_EP1_fu_996_ap_return.read()));
}

void sha256_transform::thread_add_ln85_75_fu_2769_p2() {
    add_ln85_75_fu_2769_p2 = (!add_ln85_74_reg_6043.read().is_01() || !add_ln85_72_fu_2764_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_74_reg_6043.read()) + sc_biguint<32>(add_ln85_72_fu_2764_p2.read()));
}

void sha256_transform::thread_add_ln85_76_fu_2797_p2() {
    add_ln85_76_fu_2797_p2 = (!grp_CH_fu_872_ap_return.read().is_01() || !add_ln90_15_reg_5945.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_CH_fu_872_ap_return.read()) + sc_biguint<32>(add_ln90_15_reg_5945.read()));
}

void sha256_transform::thread_add_ln85_77_fu_2802_p2() {
    add_ln85_77_fu_2802_p2 = (!m_19_reg_5768.read().is_01() || !ap_const_lv32_240CA1CC.is_01())? sc_lv<32>(): (sc_biguint<32>(m_19_reg_5768.read()) + sc_biguint<32>(ap_const_lv32_240CA1CC));
}

void sha256_transform::thread_add_ln85_78_fu_2807_p2() {
    add_ln85_78_fu_2807_p2 = (!add_ln85_77_fu_2802_p2.read().is_01() || !grp_EP1_fu_986_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_77_fu_2802_p2.read()) + sc_biguint<32>(grp_EP1_fu_986_ap_return.read()));
}

void sha256_transform::thread_add_ln85_79_fu_2813_p2() {
    add_ln85_79_fu_2813_p2 = (!add_ln85_78_fu_2807_p2.read().is_01() || !add_ln85_76_fu_2797_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_78_fu_2807_p2.read()) + sc_biguint<32>(add_ln85_76_fu_2797_p2.read()));
}

void sha256_transform::thread_add_ln85_7_fu_1402_p2() {
    add_ln85_7_fu_1402_p2 = (!add_ln85_6_fu_1396_p2.read().is_01() || !add_ln85_4_fu_1385_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_6_fu_1396_p2.read()) + sc_biguint<32>(add_ln85_4_fu_1385_p2.read()));
}

void sha256_transform::thread_add_ln85_80_fu_2928_p2() {
    add_ln85_80_fu_2928_p2 = (!reg_1174.read().is_01() || !add_ln90_16_reg_6023.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1174.read()) + sc_biguint<32>(add_ln90_16_reg_6023.read()));
}

void sha256_transform::thread_add_ln85_81_fu_2933_p2() {
    add_ln85_81_fu_2933_p2 = (!m_20_reg_5775.read().is_01() || !ap_const_lv32_2DE92C6F.is_01())? sc_lv<32>(): (sc_biguint<32>(m_20_reg_5775.read()) + sc_biguint<32>(ap_const_lv32_2DE92C6F));
}

void sha256_transform::thread_add_ln85_82_fu_2938_p2() {
    add_ln85_82_fu_2938_p2 = (!add_ln85_81_fu_2933_p2.read().is_01() || !reg_1202.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_81_fu_2933_p2.read()) + sc_biguint<32>(reg_1202.read()));
}

void sha256_transform::thread_add_ln85_83_fu_2944_p2() {
    add_ln85_83_fu_2944_p2 = (!add_ln85_82_fu_2938_p2.read().is_01() || !add_ln85_80_fu_2928_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_82_fu_2938_p2.read()) + sc_biguint<32>(add_ln85_80_fu_2928_p2.read()));
}

void sha256_transform::thread_add_ln85_84_fu_2971_p2() {
    add_ln85_84_fu_2971_p2 = (!grp_CH_fu_879_ap_return.read().is_01() || !add_ln90_17_reg_6029.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_CH_fu_879_ap_return.read()) + sc_biguint<32>(add_ln90_17_reg_6029.read()));
}

void sha256_transform::thread_add_ln85_85_fu_2976_p2() {
    add_ln85_85_fu_2976_p2 = (!m_21_reg_5784.read().is_01() || !ap_const_lv32_4A7484AA.is_01())? sc_lv<32>(): (sc_biguint<32>(m_21_reg_5784.read()) + sc_biguint<32>(ap_const_lv32_4A7484AA));
}

void sha256_transform::thread_add_ln85_86_fu_2981_p2() {
    add_ln85_86_fu_2981_p2 = (!add_ln85_85_fu_2976_p2.read().is_01() || !grp_EP1_fu_991_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_85_fu_2976_p2.read()) + sc_biguint<32>(grp_EP1_fu_991_ap_return.read()));
}

void sha256_transform::thread_add_ln85_87_fu_2987_p2() {
    add_ln85_87_fu_2987_p2 = (!add_ln85_86_fu_2981_p2.read().is_01() || !add_ln85_84_fu_2971_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_86_fu_2981_p2.read()) + sc_biguint<32>(add_ln85_84_fu_2971_p2.read()));
}

void sha256_transform::thread_add_ln85_88_fu_3094_p2() {
    add_ln85_88_fu_3094_p2 = (!grp_CH_fu_879_ap_return.read().is_01() || !add_ln90_18_reg_6098.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_CH_fu_879_ap_return.read()) + sc_biguint<32>(add_ln90_18_reg_6098.read()));
}

void sha256_transform::thread_add_ln85_89_fu_3099_p2() {
    add_ln85_89_fu_3099_p2 = (!m_22_reg_5818.read().is_01() || !ap_const_lv32_5CB0A9DC.is_01())? sc_lv<32>(): (sc_biguint<32>(m_22_reg_5818.read()) + sc_biguint<32>(ap_const_lv32_5CB0A9DC));
}

void sha256_transform::thread_add_ln85_8_fu_1455_p2() {
    add_ln85_8_fu_1455_p2 = (!grp_CH_fu_862_ap_return.read().is_01() || !ap_const_lv32_B5C0FBCF.is_01())? sc_lv<32>(): (sc_biguint<32>(grp_CH_fu_862_ap_return.read()) + sc_bigint<32>(ap_const_lv32_B5C0FBCF));
}

void sha256_transform::thread_add_ln85_90_fu_3104_p2() {
    add_ln85_90_fu_3104_p2 = (!add_ln85_89_fu_3099_p2.read().is_01() || !grp_EP1_fu_991_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_89_fu_3099_p2.read()) + sc_biguint<32>(grp_EP1_fu_991_ap_return.read()));
}

void sha256_transform::thread_add_ln85_91_fu_3110_p2() {
    add_ln85_91_fu_3110_p2 = (!add_ln85_90_fu_3104_p2.read().is_01() || !add_ln85_88_fu_3094_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_90_fu_3104_p2.read()) + sc_biguint<32>(add_ln85_88_fu_3094_p2.read()));
}

void sha256_transform::thread_add_ln85_92_fu_3210_p2() {
    add_ln85_92_fu_3210_p2 = (!reg_1206.read().is_01() || !add_ln90_19_reg_6110.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1206.read()) + sc_biguint<32>(add_ln90_19_reg_6110.read()));
}

void sha256_transform::thread_add_ln85_93_fu_3137_p2() {
    add_ln85_93_fu_3137_p2 = (!m_23_reg_5825.read().is_01() || !ap_const_lv32_76F988DA.is_01())? sc_lv<32>(): (sc_biguint<32>(m_23_reg_5825.read()) + sc_biguint<32>(ap_const_lv32_76F988DA));
}

void sha256_transform::thread_add_ln85_94_fu_3142_p2() {
    add_ln85_94_fu_3142_p2 = (!add_ln85_93_fu_3137_p2.read().is_01() || !grp_EP1_fu_996_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_93_fu_3137_p2.read()) + sc_biguint<32>(grp_EP1_fu_996_ap_return.read()));
}

void sha256_transform::thread_add_ln85_95_fu_3215_p2() {
    add_ln85_95_fu_3215_p2 = (!add_ln85_94_reg_6252.read().is_01() || !add_ln85_92_fu_3210_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_94_reg_6252.read()) + sc_biguint<32>(add_ln85_92_fu_3210_p2.read()));
}

void sha256_transform::thread_add_ln85_96_fu_3243_p2() {
    add_ln85_96_fu_3243_p2 = (!grp_CH_fu_872_ap_return.read().is_01() || !ap_const_lv32_983E5152.is_01())? sc_lv<32>(): (sc_biguint<32>(grp_CH_fu_872_ap_return.read()) + sc_bigint<32>(ap_const_lv32_983E5152));
}

void sha256_transform::thread_add_ln85_97_fu_3249_p2() {
    add_ln85_97_fu_3249_p2 = (!grp_EP1_fu_986_ap_return.read().is_01() || !m_24_reg_5832.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_EP1_fu_986_ap_return.read()) + sc_biguint<32>(m_24_reg_5832.read()));
}

void sha256_transform::thread_add_ln85_98_fu_3254_p2() {
    add_ln85_98_fu_3254_p2 = (!add_ln85_97_fu_3249_p2.read().is_01() || !add_ln90_20_reg_6167.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_97_fu_3249_p2.read()) + sc_biguint<32>(add_ln90_20_reg_6167.read()));
}

void sha256_transform::thread_add_ln85_99_fu_3259_p2() {
    add_ln85_99_fu_3259_p2 = (!add_ln85_98_fu_3254_p2.read().is_01() || !add_ln85_96_fu_3243_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_98_fu_3254_p2.read()) + sc_biguint<32>(add_ln85_96_fu_3243_p2.read()));
}

void sha256_transform::thread_add_ln85_9_fu_1461_p2() {
    add_ln85_9_fu_1461_p2 = (!grp_EP1_fu_980_ap_return.read().is_01() || !m_2_fu_1408_p5.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_EP1_fu_980_ap_return.read()) + sc_biguint<32>(m_2_fu_1408_p5.read()));
}

void sha256_transform::thread_add_ln85_fu_1341_p2() {
    add_ln85_fu_1341_p2 = (!tmp_49_reg_5123.read().is_01() || !ap_port_reg_ctx_state_7_read.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_49_reg_5123.read()) + sc_biguint<32>(ap_port_reg_ctx_state_7_read.read()));
}

void sha256_transform::thread_add_ln90_10_fu_1956_p2() {
    add_ln90_10_fu_1956_p2 = (!add_ln85_43_fu_1950_p2.read().is_01() || !add_ln94_6_reg_5456.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_43_fu_1950_p2.read()) + sc_biguint<32>(add_ln94_6_reg_5456.read()));
}

void sha256_transform::thread_add_ln90_11_fu_2129_p2() {
    add_ln90_11_fu_2129_p2 = (!add_ln85_47_reg_5720.read().is_01() || !add_ln94_7_reg_5540.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_47_reg_5720.read()) + sc_biguint<32>(add_ln94_7_reg_5540.read()));
}

void sha256_transform::thread_add_ln90_12_fu_2158_p2() {
    add_ln90_12_fu_2158_p2 = (!add_ln85_51_fu_2152_p2.read().is_01() || !add_ln94_8_reg_5622.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_51_fu_2152_p2.read()) + sc_biguint<32>(add_ln94_8_reg_5622.read()));
}

void sha256_transform::thread_add_ln90_13_fu_2297_p2() {
    add_ln90_13_fu_2297_p2 = (!add_ln85_55_fu_2292_p2.read().is_01() || !add_ln94_9_reg_5635.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_55_fu_2292_p2.read()) + sc_biguint<32>(add_ln94_9_reg_5635.read()));
}

void sha256_transform::thread_add_ln90_14_fu_2342_p2() {
    add_ln90_14_fu_2342_p2 = (!add_ln85_59_fu_2336_p2.read().is_01() || !add_ln94_10_reg_5713.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_59_fu_2336_p2.read()) + sc_biguint<32>(add_ln94_10_reg_5713.read()));
}

void sha256_transform::thread_add_ln90_15_fu_2473_p2() {
    add_ln90_15_fu_2473_p2 = (!add_ln85_63_fu_2467_p2.read().is_01() || !add_ln94_11_reg_5725.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_63_fu_2467_p2.read()) + sc_biguint<32>(add_ln94_11_reg_5725.read()));
}

void sha256_transform::thread_add_ln90_16_fu_2622_p2() {
    add_ln90_16_fu_2622_p2 = (!add_ln85_67_reg_5959.read().is_01() || !add_ln94_12_reg_5806.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_67_reg_5959.read()) + sc_biguint<32>(add_ln94_12_reg_5806.read()));
}

void sha256_transform::thread_add_ln90_17_fu_2651_p2() {
    add_ln90_17_fu_2651_p2 = (!add_ln85_71_fu_2645_p2.read().is_01() || !add_ln94_13_reg_5871.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_71_fu_2645_p2.read()) + sc_biguint<32>(add_ln94_13_reg_5871.read()));
}

void sha256_transform::thread_add_ln90_18_fu_2774_p2() {
    add_ln90_18_fu_2774_p2 = (!add_ln85_75_fu_2769_p2.read().is_01() || !add_ln94_14_reg_5884.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_75_fu_2769_p2.read()) + sc_biguint<32>(add_ln94_14_reg_5884.read()));
}

void sha256_transform::thread_add_ln90_19_fu_2819_p2() {
    add_ln90_19_fu_2819_p2 = (!add_ln85_79_fu_2813_p2.read().is_01() || !add_ln94_15_reg_5952.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_79_fu_2813_p2.read()) + sc_biguint<32>(add_ln94_15_reg_5952.read()));
}

void sha256_transform::thread_add_ln90_1_fu_1434_p2() {
    add_ln90_1_fu_1434_p2 = (!add_ln85_7_reg_5207.read().is_01() || !ctx_state_2_read_1_reg_5057.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_7_reg_5207.read()) + sc_biguint<32>(ctx_state_2_read_1_reg_5057.read()));
}

void sha256_transform::thread_add_ln90_20_fu_2950_p2() {
    add_ln90_20_fu_2950_p2 = (!add_ln85_83_fu_2944_p2.read().is_01() || !add_ln94_16_reg_5964.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_83_fu_2944_p2.read()) + sc_biguint<32>(add_ln94_16_reg_5964.read()));
}

void sha256_transform::thread_add_ln90_21_fu_3087_p2() {
    add_ln90_21_fu_3087_p2 = (!add_ln85_87_reg_6181.read().is_01() || !add_ln94_17_reg_6036.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_87_reg_6181.read()) + sc_biguint<32>(add_ln94_17_reg_6036.read()));
}

void sha256_transform::thread_add_ln90_22_fu_3116_p2() {
    add_ln90_22_fu_3116_p2 = (!add_ln85_91_fu_3110_p2.read().is_01() || !add_ln94_18_reg_6104.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_91_fu_3110_p2.read()) + sc_biguint<32>(add_ln94_18_reg_6104.read()));
}

void sha256_transform::thread_add_ln90_23_fu_3220_p2() {
    add_ln90_23_fu_3220_p2 = (!add_ln85_95_fu_3215_p2.read().is_01() || !add_ln94_19_reg_6117.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_95_fu_3215_p2.read()) + sc_biguint<32>(add_ln94_19_reg_6117.read()));
}

void sha256_transform::thread_add_ln90_24_fu_3265_p2() {
    add_ln90_24_fu_3265_p2 = (!add_ln85_99_fu_3259_p2.read().is_01() || !add_ln94_20_reg_6174.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_99_fu_3259_p2.read()) + sc_biguint<32>(add_ln94_20_reg_6174.read()));
}

void sha256_transform::thread_add_ln90_25_fu_3324_p2() {
    add_ln90_25_fu_3324_p2 = (!add_ln85_103_fu_3318_p2.read().is_01() || !add_ln94_21_reg_6186.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_103_fu_3318_p2.read()) + sc_biguint<32>(add_ln94_21_reg_6186.read()));
}

void sha256_transform::thread_add_ln90_26_fu_3379_p2() {
    add_ln90_26_fu_3379_p2 = (!add_ln85_107_reg_6332.read().is_01() || !add_ln94_22_reg_6245.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_107_reg_6332.read()) + sc_biguint<32>(add_ln94_22_reg_6245.read()));
}

void sha256_transform::thread_add_ln90_27_fu_3408_p2() {
    add_ln90_27_fu_3408_p2 = (!add_ln85_111_fu_3402_p2.read().is_01() || !add_ln94_23_reg_6293.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_111_fu_3402_p2.read()) + sc_biguint<32>(add_ln94_23_reg_6293.read()));
}

void sha256_transform::thread_add_ln90_28_fu_3450_p2() {
    add_ln90_28_fu_3450_p2 = (!add_ln85_115_fu_3445_p2.read().is_01() || !add_ln94_24_reg_6306.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_115_fu_3445_p2.read()) + sc_biguint<32>(add_ln94_24_reg_6306.read()));
}

void sha256_transform::thread_add_ln90_29_fu_3495_p2() {
    add_ln90_29_fu_3495_p2 = (!add_ln85_119_fu_3489_p2.read().is_01() || !add_ln94_25_reg_6325.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_119_fu_3489_p2.read()) + sc_biguint<32>(add_ln94_25_reg_6325.read()));
}

void sha256_transform::thread_add_ln90_2_fu_1478_p2() {
    add_ln90_2_fu_1478_p2 = (!add_ln85_11_fu_1472_p2.read().is_01() || !ctx_state_1_read_1_reg_5063.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_11_fu_1472_p2.read()) + sc_biguint<32>(ctx_state_1_read_1_reg_5063.read()));
}

void sha256_transform::thread_add_ln90_30_fu_3538_p2() {
    add_ln90_30_fu_3538_p2 = (!add_ln85_123_fu_3532_p2.read().is_01() || !add_ln94_26_reg_6337.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_123_fu_3532_p2.read()) + sc_biguint<32>(add_ln94_26_reg_6337.read()));
}

void sha256_transform::thread_add_ln90_31_fu_3593_p2() {
    add_ln90_31_fu_3593_p2 = (!add_ln85_127_reg_6411.read().is_01() || !add_ln94_27_reg_6359.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_127_reg_6411.read()) + sc_biguint<32>(add_ln94_27_reg_6359.read()));
}

void sha256_transform::thread_add_ln90_32_fu_3622_p2() {
    add_ln90_32_fu_3622_p2 = (!add_ln85_131_fu_3616_p2.read().is_01() || !add_ln94_28_reg_6377.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_131_fu_3616_p2.read()) + sc_biguint<32>(add_ln94_28_reg_6377.read()));
}

void sha256_transform::thread_add_ln90_33_fu_3664_p2() {
    add_ln90_33_fu_3664_p2 = (!add_ln85_135_fu_3659_p2.read().is_01() || !add_ln94_29_reg_6390.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_135_fu_3659_p2.read()) + sc_biguint<32>(add_ln94_29_reg_6390.read()));
}

void sha256_transform::thread_add_ln90_34_fu_3709_p2() {
    add_ln90_34_fu_3709_p2 = (!add_ln85_139_fu_3703_p2.read().is_01() || !add_ln94_30_reg_6404.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_139_fu_3703_p2.read()) + sc_biguint<32>(add_ln94_30_reg_6404.read()));
}

void sha256_transform::thread_add_ln90_35_fu_3752_p2() {
    add_ln90_35_fu_3752_p2 = (!add_ln85_143_fu_3746_p2.read().is_01() || !add_ln94_31_reg_6416.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_143_fu_3746_p2.read()) + sc_biguint<32>(add_ln94_31_reg_6416.read()));
}

void sha256_transform::thread_add_ln90_36_fu_3807_p2() {
    add_ln90_36_fu_3807_p2 = (!add_ln85_147_reg_6490.read().is_01() || !add_ln94_32_reg_6438.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_147_reg_6490.read()) + sc_biguint<32>(add_ln94_32_reg_6438.read()));
}

void sha256_transform::thread_add_ln90_37_fu_3836_p2() {
    add_ln90_37_fu_3836_p2 = (!add_ln85_151_fu_3830_p2.read().is_01() || !add_ln94_33_reg_6456.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_151_fu_3830_p2.read()) + sc_biguint<32>(add_ln94_33_reg_6456.read()));
}

void sha256_transform::thread_add_ln90_38_fu_3878_p2() {
    add_ln90_38_fu_3878_p2 = (!add_ln85_155_fu_3873_p2.read().is_01() || !add_ln94_34_reg_6469.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_155_fu_3873_p2.read()) + sc_biguint<32>(add_ln94_34_reg_6469.read()));
}

void sha256_transform::thread_add_ln90_39_fu_3923_p2() {
    add_ln90_39_fu_3923_p2 = (!add_ln85_159_fu_3917_p2.read().is_01() || !add_ln94_35_reg_6483.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_159_fu_3917_p2.read()) + sc_biguint<32>(add_ln94_35_reg_6483.read()));
}

void sha256_transform::thread_add_ln90_3_fu_1547_p2() {
    add_ln90_3_fu_1547_p2 = (!add_ln85_15_fu_1542_p2.read().is_01() || !ctx_state_0_read_1_reg_5070.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_15_fu_1542_p2.read()) + sc_biguint<32>(ctx_state_0_read_1_reg_5070.read()));
}

void sha256_transform::thread_add_ln90_40_fu_3964_p2() {
    add_ln90_40_fu_3964_p2 = (!add_ln85_163_fu_3958_p2.read().is_01() || !add_ln94_36_reg_6495.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_163_fu_3958_p2.read()) + sc_biguint<32>(add_ln94_36_reg_6495.read()));
}

void sha256_transform::thread_add_ln90_41_fu_4017_p2() {
    add_ln90_41_fu_4017_p2 = (!add_ln85_167_reg_6589.read().is_01() || !add_ln94_37_reg_6517.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_167_reg_6589.read()) + sc_biguint<32>(add_ln94_37_reg_6517.read()));
}

void sha256_transform::thread_add_ln90_42_fu_4046_p2() {
    add_ln90_42_fu_4046_p2 = (!add_ln85_171_fu_4040_p2.read().is_01() || !add_ln94_38_reg_6535.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_171_fu_4040_p2.read()) + sc_biguint<32>(add_ln94_38_reg_6535.read()));
}

void sha256_transform::thread_add_ln90_43_fu_4088_p2() {
    add_ln90_43_fu_4088_p2 = (!add_ln85_175_fu_4083_p2.read().is_01() || !add_ln94_39_reg_6548.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_175_fu_4083_p2.read()) + sc_biguint<32>(add_ln94_39_reg_6548.read()));
}

void sha256_transform::thread_add_ln90_44_fu_4133_p2() {
    add_ln90_44_fu_4133_p2 = (!add_ln85_179_fu_4127_p2.read().is_01() || !add_ln94_40_reg_6582.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_179_fu_4127_p2.read()) + sc_biguint<32>(add_ln94_40_reg_6582.read()));
}

void sha256_transform::thread_add_ln90_45_fu_4176_p2() {
    add_ln90_45_fu_4176_p2 = (!add_ln85_183_fu_4170_p2.read().is_01() || !add_ln94_41_reg_6594.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_183_fu_4170_p2.read()) + sc_biguint<32>(add_ln94_41_reg_6594.read()));
}

void sha256_transform::thread_add_ln90_46_fu_4231_p2() {
    add_ln90_46_fu_4231_p2 = (!add_ln85_187_reg_6668.read().is_01() || !add_ln94_42_reg_6616.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_187_reg_6668.read()) + sc_biguint<32>(add_ln94_42_reg_6616.read()));
}

void sha256_transform::thread_add_ln90_47_fu_4260_p2() {
    add_ln90_47_fu_4260_p2 = (!add_ln85_191_fu_4254_p2.read().is_01() || !add_ln94_43_reg_6634.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_191_fu_4254_p2.read()) + sc_biguint<32>(add_ln94_43_reg_6634.read()));
}

void sha256_transform::thread_add_ln90_48_fu_4317_p2() {
    add_ln90_48_fu_4317_p2 = (!add_ln85_195_fu_4312_p2.read().is_01() || !add_ln94_44_reg_6647.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_195_fu_4312_p2.read()) + sc_biguint<32>(add_ln94_44_reg_6647.read()));
}

void sha256_transform::thread_add_ln90_49_fu_4362_p2() {
    add_ln90_49_fu_4362_p2 = (!add_ln85_199_fu_4356_p2.read().is_01() || !add_ln94_45_reg_6661.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_199_fu_4356_p2.read()) + sc_biguint<32>(add_ln94_45_reg_6661.read()));
}

void sha256_transform::thread_add_ln90_4_fu_1593_p2() {
    add_ln90_4_fu_1593_p2 = (!add_ln85_19_fu_1587_p2.read().is_01() || !add_ln94_reg_5200.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_19_fu_1587_p2.read()) + sc_biguint<32>(add_ln94_reg_5200.read()));
}

void sha256_transform::thread_add_ln90_50_fu_4405_p2() {
    add_ln90_50_fu_4405_p2 = (!add_ln85_203_fu_4399_p2.read().is_01() || !add_ln94_46_reg_6673.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_203_fu_4399_p2.read()) + sc_biguint<32>(add_ln94_46_reg_6673.read()));
}

void sha256_transform::thread_add_ln90_51_fu_4460_p2() {
    add_ln90_51_fu_4460_p2 = (!add_ln85_207_reg_6752.read().is_01() || !add_ln94_47_reg_6695.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_207_reg_6752.read()) + sc_biguint<32>(add_ln94_47_reg_6695.read()));
}

void sha256_transform::thread_add_ln90_52_fu_4489_p2() {
    add_ln90_52_fu_4489_p2 = (!add_ln85_211_fu_4483_p2.read().is_01() || !add_ln94_48_reg_6718.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_211_fu_4483_p2.read()) + sc_biguint<32>(add_ln94_48_reg_6718.read()));
}

void sha256_transform::thread_add_ln90_53_fu_4531_p2() {
    add_ln90_53_fu_4531_p2 = (!add_ln85_215_fu_4526_p2.read().is_01() || !add_ln94_49_reg_6731.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_215_fu_4526_p2.read()) + sc_biguint<32>(add_ln94_49_reg_6731.read()));
}

void sha256_transform::thread_add_ln90_54_fu_4576_p2() {
    add_ln90_54_fu_4576_p2 = (!add_ln85_219_fu_4570_p2.read().is_01() || !add_ln94_50_reg_6745.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_219_fu_4570_p2.read()) + sc_biguint<32>(add_ln94_50_reg_6745.read()));
}

void sha256_transform::thread_add_ln90_55_fu_4618_p2() {
    add_ln90_55_fu_4618_p2 = (!add_ln85_223_fu_4612_p2.read().is_01() || !add_ln94_51_reg_6757.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_223_fu_4612_p2.read()) + sc_biguint<32>(add_ln94_51_reg_6757.read()));
}

void sha256_transform::thread_add_ln90_56_fu_4673_p2() {
    add_ln90_56_fu_4673_p2 = (!add_ln85_227_reg_6836.read().is_01() || !add_ln94_52_reg_6779.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_227_reg_6836.read()) + sc_biguint<32>(add_ln94_52_reg_6779.read()));
}

void sha256_transform::thread_add_ln90_57_fu_4701_p2() {
    add_ln90_57_fu_4701_p2 = (!add_ln85_231_fu_4695_p2.read().is_01() || !add_ln94_53_reg_6797.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_231_fu_4695_p2.read()) + sc_biguint<32>(add_ln94_53_reg_6797.read()));
}

void sha256_transform::thread_add_ln90_58_fu_4740_p2() {
    add_ln90_58_fu_4740_p2 = (!add_ln85_235_fu_4734_p2.read().is_01() || !add_ln94_54_reg_6810.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_235_fu_4734_p2.read()) + sc_biguint<32>(add_ln94_54_reg_6810.read()));
}

void sha256_transform::thread_add_ln90_59_fu_4783_p2() {
    add_ln90_59_fu_4783_p2 = (!add_ln85_239_reg_6889.read().is_01() || !add_ln94_55_reg_6829.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_239_reg_6889.read()) + sc_biguint<32>(add_ln94_55_reg_6829.read()));
}

void sha256_transform::thread_add_ln90_5_fu_1662_p2() {
    add_ln90_5_fu_1662_p2 = (!add_ln85_23_fu_1656_p2.read().is_01() || !add_ln94_1_reg_5269.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_23_fu_1656_p2.read()) + sc_biguint<32>(add_ln94_1_reg_5269.read()));
}

void sha256_transform::thread_add_ln90_60_fu_4824_p2() {
    add_ln90_60_fu_4824_p2 = (!add_ln85_243_fu_4818_p2.read().is_01() || !add_ln94_56_reg_6841.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_243_fu_4818_p2.read()) + sc_biguint<32>(add_ln94_56_reg_6841.read()));
}

void sha256_transform::thread_add_ln90_61_fu_4863_p2() {
    add_ln90_61_fu_4863_p2 = (!add_ln85_247_fu_4857_p2.read().is_01() || !add_ln94_57_reg_6866.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_247_fu_4857_p2.read()) + sc_biguint<32>(add_ln94_57_reg_6866.read()));
}

void sha256_transform::thread_add_ln90_62_fu_4902_p2() {
    add_ln90_62_fu_4902_p2 = (!add_ln85_252_fu_4897_p2.read().is_01() || !add_ln94_58_reg_6882.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_252_fu_4897_p2.read()) + sc_biguint<32>(add_ln94_58_reg_6882.read()));
}

void sha256_transform::thread_add_ln90_6_fu_1744_p2() {
    add_ln90_6_fu_1744_p2 = (!add_ln85_27_reg_5451.read().is_01() || !add_ln94_2_reg_5282.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_27_reg_5451.read()) + sc_biguint<32>(add_ln94_2_reg_5282.read()));
}

void sha256_transform::thread_add_ln90_7_fu_1773_p2() {
    add_ln90_7_fu_1773_p2 = (!add_ln85_31_fu_1767_p2.read().is_01() || !add_ln94_3_reg_5356.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_31_fu_1767_p2.read()) + sc_biguint<32>(add_ln94_3_reg_5356.read()));
}

void sha256_transform::thread_add_ln90_8_fu_1842_p2() {
    add_ln90_8_fu_1842_p2 = (!add_ln85_35_fu_1837_p2.read().is_01() || !add_ln94_4_reg_5369.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_35_fu_1837_p2.read()) + sc_biguint<32>(add_ln94_4_reg_5369.read()));
}

void sha256_transform::thread_add_ln90_9_fu_1887_p2() {
    add_ln90_9_fu_1887_p2 = (!add_ln85_39_fu_1881_p2.read().is_01() || !add_ln94_5_reg_5444.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_39_fu_1881_p2.read()) + sc_biguint<32>(add_ln94_5_reg_5444.read()));
}

void sha256_transform::thread_add_ln90_fu_1363_p2() {
    add_ln90_fu_1363_p2 = (!add_ln85_3_fu_1357_p2.read().is_01() || !ap_port_reg_ctx_state_3_read.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_3_fu_1357_p2.read()) + sc_biguint<32>(ap_port_reg_ctx_state_3_read.read()));
}

void sha256_transform::thread_add_ln94_100_fu_3843_p2() {
    add_ln94_100_fu_3843_p2 = (!add_ln85_151_fu_3830_p2.read().is_01() || !grp_MAJ_fu_945_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_151_fu_3830_p2.read()) + sc_biguint<32>(grp_MAJ_fu_945_ap_return.read()));
}

void sha256_transform::thread_add_ln94_101_fu_3886_p2() {
    add_ln94_101_fu_3886_p2 = (!add_ln85_155_fu_3873_p2.read().is_01() || !reg_1226.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_155_fu_3873_p2.read()) + sc_biguint<32>(reg_1226.read()));
}

void sha256_transform::thread_add_ln94_102_fu_3930_p2() {
    add_ln94_102_fu_3930_p2 = (!add_ln85_159_fu_3917_p2.read().is_01() || !grp_MAJ_fu_952_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_159_fu_3917_p2.read()) + sc_biguint<32>(grp_MAJ_fu_952_ap_return.read()));
}

void sha256_transform::thread_add_ln94_103_fu_3971_p2() {
    add_ln94_103_fu_3971_p2 = (!add_ln85_163_fu_3958_p2.read().is_01() || !tmp_5_39_reg_6570.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_163_fu_3958_p2.read()) + sc_biguint<32>(tmp_5_39_reg_6570.read()));
}

void sha256_transform::thread_add_ln94_104_fu_4005_p2() {
    add_ln94_104_fu_4005_p2 = (!add_ln85_167_fu_3999_p2.read().is_01() || !grp_MAJ_fu_959_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_167_fu_3999_p2.read()) + sc_biguint<32>(grp_MAJ_fu_959_ap_return.read()));
}

void sha256_transform::thread_add_ln94_105_fu_4053_p2() {
    add_ln94_105_fu_4053_p2 = (!add_ln85_171_fu_4040_p2.read().is_01() || !grp_MAJ_fu_959_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_171_fu_4040_p2.read()) + sc_biguint<32>(grp_MAJ_fu_959_ap_return.read()));
}

void sha256_transform::thread_add_ln94_106_fu_4096_p2() {
    add_ln94_106_fu_4096_p2 = (!add_ln85_175_fu_4083_p2.read().is_01() || !reg_1242.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_175_fu_4083_p2.read()) + sc_biguint<32>(reg_1242.read()));
}

void sha256_transform::thread_add_ln94_107_fu_4140_p2() {
    add_ln94_107_fu_4140_p2 = (!add_ln85_179_fu_4127_p2.read().is_01() || !grp_MAJ_fu_959_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_179_fu_4127_p2.read()) + sc_biguint<32>(grp_MAJ_fu_959_ap_return.read()));
}

void sha256_transform::thread_add_ln94_108_fu_4183_p2() {
    add_ln94_108_fu_4183_p2 = (!add_ln85_183_fu_4170_p2.read().is_01() || !reg_1242.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_183_fu_4170_p2.read()) + sc_biguint<32>(reg_1242.read()));
}

void sha256_transform::thread_add_ln94_109_fu_4219_p2() {
    add_ln94_109_fu_4219_p2 = (!add_ln85_187_fu_4213_p2.read().is_01() || !grp_MAJ_fu_959_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_187_fu_4213_p2.read()) + sc_biguint<32>(grp_MAJ_fu_959_ap_return.read()));
}

void sha256_transform::thread_add_ln94_10_fu_1969_p2() {
    add_ln94_10_fu_1969_p2 = (!add_ln94_73_fu_1963_p2.read().is_01() || !reg_1142.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_73_fu_1963_p2.read()) + sc_biguint<32>(reg_1142.read()));
}

void sha256_transform::thread_add_ln94_110_fu_4267_p2() {
    add_ln94_110_fu_4267_p2 = (!add_ln85_191_fu_4254_p2.read().is_01() || !grp_MAJ_fu_959_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_191_fu_4254_p2.read()) + sc_biguint<32>(grp_MAJ_fu_959_ap_return.read()));
}

void sha256_transform::thread_add_ln94_111_fu_4325_p2() {
    add_ln94_111_fu_4325_p2 = (!add_ln85_195_fu_4312_p2.read().is_01() || !reg_1242.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_195_fu_4312_p2.read()) + sc_biguint<32>(reg_1242.read()));
}

void sha256_transform::thread_add_ln94_112_fu_4369_p2() {
    add_ln94_112_fu_4369_p2 = (!add_ln85_199_fu_4356_p2.read().is_01() || !grp_MAJ_fu_959_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_199_fu_4356_p2.read()) + sc_biguint<32>(grp_MAJ_fu_959_ap_return.read()));
}

void sha256_transform::thread_add_ln94_113_fu_4412_p2() {
    add_ln94_113_fu_4412_p2 = (!add_ln85_203_fu_4399_p2.read().is_01() || !reg_1242.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_203_fu_4399_p2.read()) + sc_biguint<32>(reg_1242.read()));
}

void sha256_transform::thread_add_ln94_114_fu_4448_p2() {
    add_ln94_114_fu_4448_p2 = (!add_ln85_207_fu_4442_p2.read().is_01() || !grp_MAJ_fu_959_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_207_fu_4442_p2.read()) + sc_biguint<32>(grp_MAJ_fu_959_ap_return.read()));
}

void sha256_transform::thread_add_ln94_115_fu_4496_p2() {
    add_ln94_115_fu_4496_p2 = (!add_ln85_211_fu_4483_p2.read().is_01() || !grp_MAJ_fu_966_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_211_fu_4483_p2.read()) + sc_biguint<32>(grp_MAJ_fu_966_ap_return.read()));
}

void sha256_transform::thread_add_ln94_116_fu_4539_p2() {
    add_ln94_116_fu_4539_p2 = (!add_ln85_215_fu_4526_p2.read().is_01() || !reg_1258.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_215_fu_4526_p2.read()) + sc_biguint<32>(reg_1258.read()));
}

void sha256_transform::thread_add_ln94_117_fu_4583_p2() {
    add_ln94_117_fu_4583_p2 = (!add_ln85_219_fu_4570_p2.read().is_01() || !grp_MAJ_fu_966_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_219_fu_4570_p2.read()) + sc_biguint<32>(grp_MAJ_fu_966_ap_return.read()));
}

void sha256_transform::thread_add_ln94_118_fu_4625_p2() {
    add_ln94_118_fu_4625_p2 = (!add_ln85_223_fu_4612_p2.read().is_01() || !reg_1258.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_223_fu_4612_p2.read()) + sc_biguint<32>(reg_1258.read()));
}

void sha256_transform::thread_add_ln94_119_fu_4661_p2() {
    add_ln94_119_fu_4661_p2 = (!add_ln85_227_fu_4655_p2.read().is_01() || !grp_MAJ_fu_973_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_227_fu_4655_p2.read()) + sc_biguint<32>(grp_MAJ_fu_973_ap_return.read()));
}

void sha256_transform::thread_add_ln94_11_fu_2005_p2() {
    add_ln94_11_fu_2005_p2 = (!add_ln94_74_fu_1999_p2.read().is_01() || !grp_EP0_fu_1021_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_74_fu_1999_p2.read()) + sc_biguint<32>(grp_EP0_fu_1021_ap_return.read()));
}

void sha256_transform::thread_add_ln94_120_fu_4706_p2() {
    add_ln94_120_fu_4706_p2 = (!add_ln85_231_fu_4695_p2.read().is_01() || !grp_MAJ_fu_973_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_231_fu_4695_p2.read()) + sc_biguint<32>(grp_MAJ_fu_973_ap_return.read()));
}

void sha256_transform::thread_add_ln94_121_fu_4747_p2() {
    add_ln94_121_fu_4747_p2 = (!add_ln85_235_fu_4734_p2.read().is_01() || !grp_MAJ_fu_966_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_235_fu_4734_p2.read()) + sc_biguint<32>(grp_MAJ_fu_966_ap_return.read()));
}

void sha256_transform::thread_add_ln94_122_fu_4789_p2() {
    add_ln94_122_fu_4789_p2 = (!add_ln85_239_reg_6889.read().is_01() || !reg_1258.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_239_reg_6889.read()) + sc_biguint<32>(reg_1258.read()));
}

void sha256_transform::thread_add_ln94_123_fu_4829_p2() {
    add_ln94_123_fu_4829_p2 = (!add_ln85_243_fu_4818_p2.read().is_01() || !grp_MAJ_fu_973_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_243_fu_4818_p2.read()) + sc_biguint<32>(grp_MAJ_fu_973_ap_return.read()));
}

void sha256_transform::thread_add_ln94_124_fu_4868_p2() {
    add_ln94_124_fu_4868_p2 = (!add_ln85_247_fu_4857_p2.read().is_01() || !grp_MAJ_fu_973_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_247_fu_4857_p2.read()) + sc_biguint<32>(grp_MAJ_fu_973_ap_return.read()));
}

void sha256_transform::thread_add_ln94_125_fu_4909_p2() {
    add_ln94_125_fu_4909_p2 = (!add_ln85_252_fu_4897_p2.read().is_01() || !grp_MAJ_fu_966_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_252_fu_4897_p2.read()) + sc_biguint<32>(grp_MAJ_fu_966_ap_return.read()));
}

void sha256_transform::thread_add_ln94_12_fu_2171_p2() {
    add_ln94_12_fu_2171_p2 = (!add_ln94_75_fu_2165_p2.read().is_01() || !grp_EP0_fu_1027_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_75_fu_2165_p2.read()) + sc_biguint<32>(grp_EP0_fu_1027_ap_return.read()));
}

void sha256_transform::thread_add_ln94_13_fu_2311_p2() {
    add_ln94_13_fu_2311_p2 = (!add_ln94_76_fu_2305_p2.read().is_01() || !reg_1178.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_76_fu_2305_p2.read()) + sc_biguint<32>(reg_1178.read()));
}

void sha256_transform::thread_add_ln94_14_fu_2355_p2() {
    add_ln94_14_fu_2355_p2 = (!add_ln94_77_fu_2349_p2.read().is_01() || !grp_EP0_fu_1027_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_77_fu_2349_p2.read()) + sc_biguint<32>(grp_EP0_fu_1027_ap_return.read()));
}

void sha256_transform::thread_add_ln94_15_fu_2486_p2() {
    add_ln94_15_fu_2486_p2 = (!add_ln94_78_fu_2480_p2.read().is_01() || !reg_1178.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_78_fu_2480_p2.read()) + sc_biguint<32>(reg_1178.read()));
}

void sha256_transform::thread_add_ln94_16_fu_2522_p2() {
    add_ln94_16_fu_2522_p2 = (!add_ln94_79_fu_2516_p2.read().is_01() || !grp_EP0_fu_1032_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_79_fu_2516_p2.read()) + sc_biguint<32>(grp_EP0_fu_1032_ap_return.read()));
}

void sha256_transform::thread_add_ln94_17_fu_2664_p2() {
    add_ln94_17_fu_2664_p2 = (!add_ln94_80_fu_2658_p2.read().is_01() || !grp_EP0_fu_1032_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_80_fu_2658_p2.read()) + sc_biguint<32>(grp_EP0_fu_1032_ap_return.read()));
}

void sha256_transform::thread_add_ln94_18_fu_2788_p2() {
    add_ln94_18_fu_2788_p2 = (!add_ln94_81_fu_2782_p2.read().is_01() || !reg_1210.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_81_fu_2782_p2.read()) + sc_biguint<32>(reg_1210.read()));
}

void sha256_transform::thread_add_ln94_19_fu_2832_p2() {
    add_ln94_19_fu_2832_p2 = (!add_ln94_82_fu_2826_p2.read().is_01() || !grp_EP0_fu_1027_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_82_fu_2826_p2.read()) + sc_biguint<32>(grp_EP0_fu_1027_ap_return.read()));
}

void sha256_transform::thread_add_ln94_1_fu_1446_p2() {
    add_ln94_1_fu_1446_p2 = (!add_ln94_64_fu_1441_p2.read().is_01() || !reg_1122.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_64_fu_1441_p2.read()) + sc_biguint<32>(reg_1122.read()));
}

void sha256_transform::thread_add_ln94_20_fu_2963_p2() {
    add_ln94_20_fu_2963_p2 = (!add_ln94_83_fu_2957_p2.read().is_01() || !reg_1178.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_83_fu_2957_p2.read()) + sc_biguint<32>(reg_1178.read()));
}

void sha256_transform::thread_add_ln94_21_fu_2999_p2() {
    add_ln94_21_fu_2999_p2 = (!add_ln94_84_fu_2993_p2.read().is_01() || !grp_EP0_fu_1032_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_84_fu_2993_p2.read()) + sc_biguint<32>(grp_EP0_fu_1032_ap_return.read()));
}

void sha256_transform::thread_add_ln94_22_fu_3129_p2() {
    add_ln94_22_fu_3129_p2 = (!add_ln94_85_fu_3123_p2.read().is_01() || !grp_EP0_fu_1032_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_85_fu_3123_p2.read()) + sc_biguint<32>(grp_EP0_fu_1032_ap_return.read()));
}

void sha256_transform::thread_add_ln94_23_fu_3234_p2() {
    add_ln94_23_fu_3234_p2 = (!add_ln94_86_fu_3228_p2.read().is_01() || !reg_1210.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_86_fu_3228_p2.read()) + sc_biguint<32>(reg_1210.read()));
}

void sha256_transform::thread_add_ln94_24_fu_3278_p2() {
    add_ln94_24_fu_3278_p2 = (!add_ln94_87_fu_3272_p2.read().is_01() || !grp_EP0_fu_1027_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_87_fu_3272_p2.read()) + sc_biguint<32>(grp_EP0_fu_1027_ap_return.read()));
}

void sha256_transform::thread_add_ln94_25_fu_3337_p2() {
    add_ln94_25_fu_3337_p2 = (!add_ln94_88_fu_3331_p2.read().is_01() || !reg_1178.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_88_fu_3331_p2.read()) + sc_biguint<32>(reg_1178.read()));
}

void sha256_transform::thread_add_ln94_26_fu_3373_p2() {
    add_ln94_26_fu_3373_p2 = (!add_ln94_89_fu_3367_p2.read().is_01() || !grp_EP0_fu_1037_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_89_fu_3367_p2.read()) + sc_biguint<32>(grp_EP0_fu_1037_ap_return.read()));
}

void sha256_transform::thread_add_ln94_27_fu_3421_p2() {
    add_ln94_27_fu_3421_p2 = (!add_ln94_90_fu_3415_p2.read().is_01() || !grp_EP0_fu_1037_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_90_fu_3415_p2.read()) + sc_biguint<32>(grp_EP0_fu_1037_ap_return.read()));
}

void sha256_transform::thread_add_ln94_28_fu_3464_p2() {
    add_ln94_28_fu_3464_p2 = (!add_ln94_91_fu_3458_p2.read().is_01() || !reg_1222.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_91_fu_3458_p2.read()) + sc_biguint<32>(reg_1222.read()));
}

void sha256_transform::thread_add_ln94_29_fu_3508_p2() {
    add_ln94_29_fu_3508_p2 = (!add_ln94_92_fu_3502_p2.read().is_01() || !grp_EP0_fu_1037_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_92_fu_3502_p2.read()) + sc_biguint<32>(grp_EP0_fu_1037_ap_return.read()));
}

void sha256_transform::thread_add_ln94_2_fu_1491_p2() {
    add_ln94_2_fu_1491_p2 = (!add_ln94_65_fu_1485_p2.read().is_01() || !grp_EP0_fu_1021_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_65_fu_1485_p2.read()) + sc_biguint<32>(grp_EP0_fu_1021_ap_return.read()));
}

void sha256_transform::thread_add_ln94_30_fu_3551_p2() {
    add_ln94_30_fu_3551_p2 = (!add_ln94_93_fu_3545_p2.read().is_01() || !reg_1222.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_93_fu_3545_p2.read()) + sc_biguint<32>(reg_1222.read()));
}

void sha256_transform::thread_add_ln94_31_fu_3587_p2() {
    add_ln94_31_fu_3587_p2 = (!add_ln94_94_fu_3581_p2.read().is_01() || !grp_EP0_fu_1042_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_94_fu_3581_p2.read()) + sc_biguint<32>(grp_EP0_fu_1042_ap_return.read()));
}

void sha256_transform::thread_add_ln94_32_fu_3635_p2() {
    add_ln94_32_fu_3635_p2 = (!add_ln94_95_fu_3629_p2.read().is_01() || !grp_EP0_fu_1037_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_95_fu_3629_p2.read()) + sc_biguint<32>(grp_EP0_fu_1037_ap_return.read()));
}

void sha256_transform::thread_add_ln94_33_fu_3678_p2() {
    add_ln94_33_fu_3678_p2 = (!add_ln94_96_fu_3672_p2.read().is_01() || !reg_1222.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_96_fu_3672_p2.read()) + sc_biguint<32>(reg_1222.read()));
}

void sha256_transform::thread_add_ln94_34_fu_3722_p2() {
    add_ln94_34_fu_3722_p2 = (!add_ln94_97_fu_3716_p2.read().is_01() || !grp_EP0_fu_1037_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_97_fu_3716_p2.read()) + sc_biguint<32>(grp_EP0_fu_1037_ap_return.read()));
}

void sha256_transform::thread_add_ln94_35_fu_3765_p2() {
    add_ln94_35_fu_3765_p2 = (!add_ln94_98_fu_3759_p2.read().is_01() || !reg_1222.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_98_fu_3759_p2.read()) + sc_biguint<32>(reg_1222.read()));
}

void sha256_transform::thread_add_ln94_36_fu_3801_p2() {
    add_ln94_36_fu_3801_p2 = (!add_ln94_99_fu_3795_p2.read().is_01() || !grp_EP0_fu_1042_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_99_fu_3795_p2.read()) + sc_biguint<32>(grp_EP0_fu_1042_ap_return.read()));
}

void sha256_transform::thread_add_ln94_37_fu_3849_p2() {
    add_ln94_37_fu_3849_p2 = (!add_ln94_100_fu_3843_p2.read().is_01() || !grp_EP0_fu_1037_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_100_fu_3843_p2.read()) + sc_biguint<32>(grp_EP0_fu_1037_ap_return.read()));
}

void sha256_transform::thread_add_ln94_38_fu_3892_p2() {
    add_ln94_38_fu_3892_p2 = (!add_ln94_101_fu_3886_p2.read().is_01() || !reg_1222.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_101_fu_3886_p2.read()) + sc_biguint<32>(reg_1222.read()));
}

void sha256_transform::thread_add_ln94_39_fu_3936_p2() {
    add_ln94_39_fu_3936_p2 = (!add_ln94_102_fu_3930_p2.read().is_01() || !grp_EP0_fu_1042_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_102_fu_3930_p2.read()) + sc_biguint<32>(grp_EP0_fu_1042_ap_return.read()));
}

void sha256_transform::thread_add_ln94_3_fu_1561_p2() {
    add_ln94_3_fu_1561_p2 = (!add_ln94_66_fu_1555_p2.read().is_01() || !reg_1142.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_66_fu_1555_p2.read()) + sc_biguint<32>(reg_1142.read()));
}

void sha256_transform::thread_add_ln94_40_fu_3976_p2() {
    add_ln94_40_fu_3976_p2 = (!add_ln94_103_fu_3971_p2.read().is_01() || !tmp_4_39_reg_6565.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_103_fu_3971_p2.read()) + sc_biguint<32>(tmp_4_39_reg_6565.read()));
}

void sha256_transform::thread_add_ln94_41_fu_4011_p2() {
    add_ln94_41_fu_4011_p2 = (!add_ln94_104_fu_4005_p2.read().is_01() || !grp_EP0_fu_1047_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_104_fu_4005_p2.read()) + sc_biguint<32>(grp_EP0_fu_1047_ap_return.read()));
}

void sha256_transform::thread_add_ln94_42_fu_4059_p2() {
    add_ln94_42_fu_4059_p2 = (!add_ln94_105_fu_4053_p2.read().is_01() || !grp_EP0_fu_1047_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_105_fu_4053_p2.read()) + sc_biguint<32>(grp_EP0_fu_1047_ap_return.read()));
}

void sha256_transform::thread_add_ln94_43_fu_4102_p2() {
    add_ln94_43_fu_4102_p2 = (!add_ln94_106_fu_4096_p2.read().is_01() || !reg_1238.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_106_fu_4096_p2.read()) + sc_biguint<32>(reg_1238.read()));
}

void sha256_transform::thread_add_ln94_44_fu_4146_p2() {
    add_ln94_44_fu_4146_p2 = (!add_ln94_107_fu_4140_p2.read().is_01() || !grp_EP0_fu_1047_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_107_fu_4140_p2.read()) + sc_biguint<32>(grp_EP0_fu_1047_ap_return.read()));
}

void sha256_transform::thread_add_ln94_45_fu_4189_p2() {
    add_ln94_45_fu_4189_p2 = (!add_ln94_108_fu_4183_p2.read().is_01() || !reg_1238.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_108_fu_4183_p2.read()) + sc_biguint<32>(reg_1238.read()));
}

void sha256_transform::thread_add_ln94_46_fu_4225_p2() {
    add_ln94_46_fu_4225_p2 = (!add_ln94_109_fu_4219_p2.read().is_01() || !grp_EP0_fu_1047_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_109_fu_4219_p2.read()) + sc_biguint<32>(grp_EP0_fu_1047_ap_return.read()));
}

void sha256_transform::thread_add_ln94_47_fu_4273_p2() {
    add_ln94_47_fu_4273_p2 = (!add_ln94_110_fu_4267_p2.read().is_01() || !grp_EP0_fu_1047_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_110_fu_4267_p2.read()) + sc_biguint<32>(grp_EP0_fu_1047_ap_return.read()));
}

void sha256_transform::thread_add_ln94_48_fu_4331_p2() {
    add_ln94_48_fu_4331_p2 = (!add_ln94_111_fu_4325_p2.read().is_01() || !reg_1238.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_111_fu_4325_p2.read()) + sc_biguint<32>(reg_1238.read()));
}

void sha256_transform::thread_add_ln94_49_fu_4375_p2() {
    add_ln94_49_fu_4375_p2 = (!add_ln94_112_fu_4369_p2.read().is_01() || !grp_EP0_fu_1047_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_112_fu_4369_p2.read()) + sc_biguint<32>(grp_EP0_fu_1047_ap_return.read()));
}

void sha256_transform::thread_add_ln94_4_fu_1606_p2() {
    add_ln94_4_fu_1606_p2 = (!add_ln94_67_fu_1600_p2.read().is_01() || !grp_EP0_fu_1021_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_67_fu_1600_p2.read()) + sc_biguint<32>(grp_EP0_fu_1021_ap_return.read()));
}

void sha256_transform::thread_add_ln94_50_fu_4418_p2() {
    add_ln94_50_fu_4418_p2 = (!add_ln94_113_fu_4412_p2.read().is_01() || !reg_1238.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_113_fu_4412_p2.read()) + sc_biguint<32>(reg_1238.read()));
}

void sha256_transform::thread_add_ln94_51_fu_4454_p2() {
    add_ln94_51_fu_4454_p2 = (!add_ln94_114_fu_4448_p2.read().is_01() || !grp_EP0_fu_1047_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_114_fu_4448_p2.read()) + sc_biguint<32>(grp_EP0_fu_1047_ap_return.read()));
}

void sha256_transform::thread_add_ln94_52_fu_4502_p2() {
    add_ln94_52_fu_4502_p2 = (!add_ln94_115_fu_4496_p2.read().is_01() || !grp_EP0_fu_1052_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_115_fu_4496_p2.read()) + sc_biguint<32>(grp_EP0_fu_1052_ap_return.read()));
}

void sha256_transform::thread_add_ln94_53_fu_4545_p2() {
    add_ln94_53_fu_4545_p2 = (!add_ln94_116_fu_4539_p2.read().is_01() || !reg_1254.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_116_fu_4539_p2.read()) + sc_biguint<32>(reg_1254.read()));
}

void sha256_transform::thread_add_ln94_54_fu_4589_p2() {
    add_ln94_54_fu_4589_p2 = (!add_ln94_117_fu_4583_p2.read().is_01() || !grp_EP0_fu_1052_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_117_fu_4583_p2.read()) + sc_biguint<32>(grp_EP0_fu_1052_ap_return.read()));
}

void sha256_transform::thread_add_ln94_55_fu_4631_p2() {
    add_ln94_55_fu_4631_p2 = (!add_ln94_118_fu_4625_p2.read().is_01() || !reg_1254.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_118_fu_4625_p2.read()) + sc_biguint<32>(reg_1254.read()));
}

void sha256_transform::thread_add_ln94_56_fu_4667_p2() {
    add_ln94_56_fu_4667_p2 = (!add_ln94_119_fu_4661_p2.read().is_01() || !grp_EP0_fu_1057_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_119_fu_4661_p2.read()) + sc_biguint<32>(grp_EP0_fu_1057_ap_return.read()));
}

void sha256_transform::thread_add_ln94_57_fu_4712_p2() {
    add_ln94_57_fu_4712_p2 = (!add_ln94_120_fu_4706_p2.read().is_01() || !grp_EP0_fu_1057_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_120_fu_4706_p2.read()) + sc_biguint<32>(grp_EP0_fu_1057_ap_return.read()));
}

void sha256_transform::thread_add_ln94_58_fu_4753_p2() {
    add_ln94_58_fu_4753_p2 = (!add_ln94_121_fu_4747_p2.read().is_01() || !grp_EP0_fu_1052_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_121_fu_4747_p2.read()) + sc_biguint<32>(grp_EP0_fu_1052_ap_return.read()));
}

void sha256_transform::thread_add_ln94_59_fu_4794_p2() {
    add_ln94_59_fu_4794_p2 = (!add_ln94_122_fu_4789_p2.read().is_01() || !reg_1254.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_122_fu_4789_p2.read()) + sc_biguint<32>(reg_1254.read()));
}

void sha256_transform::thread_add_ln94_5_fu_1675_p2() {
    add_ln94_5_fu_1675_p2 = (!add_ln94_68_fu_1669_p2.read().is_01() || !reg_1142.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_68_fu_1669_p2.read()) + sc_biguint<32>(reg_1142.read()));
}

void sha256_transform::thread_add_ln94_60_fu_4835_p2() {
    add_ln94_60_fu_4835_p2 = (!add_ln94_123_fu_4829_p2.read().is_01() || !grp_EP0_fu_1057_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_123_fu_4829_p2.read()) + sc_biguint<32>(grp_EP0_fu_1057_ap_return.read()));
}

void sha256_transform::thread_add_ln94_61_fu_4874_p2() {
    add_ln94_61_fu_4874_p2 = (!add_ln94_124_fu_4868_p2.read().is_01() || !grp_EP0_fu_1057_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_124_fu_4868_p2.read()) + sc_biguint<32>(grp_EP0_fu_1057_ap_return.read()));
}

void sha256_transform::thread_add_ln94_62_fu_4915_p2() {
    add_ln94_62_fu_4915_p2 = (!add_ln94_125_fu_4909_p2.read().is_01() || !grp_EP0_fu_1052_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_125_fu_4909_p2.read()) + sc_biguint<32>(grp_EP0_fu_1052_ap_return.read()));
}

void sha256_transform::thread_add_ln94_63_fu_1371_p2() {
    add_ln94_63_fu_1371_p2 = (!add_ln85_3_fu_1357_p2.read().is_01() || !reg_1126.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_3_fu_1357_p2.read()) + sc_biguint<32>(reg_1126.read()));
}

void sha256_transform::thread_add_ln94_64_fu_1441_p2() {
    add_ln94_64_fu_1441_p2 = (!add_ln85_7_reg_5207.read().is_01() || !reg_1126.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_7_reg_5207.read()) + sc_biguint<32>(reg_1126.read()));
}

void sha256_transform::thread_add_ln94_65_fu_1485_p2() {
    add_ln94_65_fu_1485_p2 = (!add_ln85_11_fu_1472_p2.read().is_01() || !grp_MAJ_fu_921_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_11_fu_1472_p2.read()) + sc_biguint<32>(grp_MAJ_fu_921_ap_return.read()));
}

void sha256_transform::thread_add_ln94_66_fu_1555_p2() {
    add_ln94_66_fu_1555_p2 = (!add_ln85_15_fu_1542_p2.read().is_01() || !reg_1146.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_15_fu_1542_p2.read()) + sc_biguint<32>(reg_1146.read()));
}

void sha256_transform::thread_add_ln94_67_fu_1600_p2() {
    add_ln94_67_fu_1600_p2 = (!add_ln85_19_fu_1587_p2.read().is_01() || !grp_MAJ_fu_921_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_19_fu_1587_p2.read()) + sc_biguint<32>(grp_MAJ_fu_921_ap_return.read()));
}

void sha256_transform::thread_add_ln94_68_fu_1669_p2() {
    add_ln94_68_fu_1669_p2 = (!add_ln85_23_fu_1656_p2.read().is_01() || !reg_1146.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_23_fu_1656_p2.read()) + sc_biguint<32>(reg_1146.read()));
}

void sha256_transform::thread_add_ln94_69_fu_1706_p2() {
    add_ln94_69_fu_1706_p2 = (!add_ln85_27_fu_1700_p2.read().is_01() || !grp_MAJ_fu_921_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_27_fu_1700_p2.read()) + sc_biguint<32>(grp_MAJ_fu_921_ap_return.read()));
}

void sha256_transform::thread_add_ln94_6_fu_1712_p2() {
    add_ln94_6_fu_1712_p2 = (!add_ln94_69_fu_1706_p2.read().is_01() || !grp_EP0_fu_1021_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_69_fu_1706_p2.read()) + sc_biguint<32>(grp_EP0_fu_1021_ap_return.read()));
}

void sha256_transform::thread_add_ln94_70_fu_1780_p2() {
    add_ln94_70_fu_1780_p2 = (!add_ln85_31_fu_1767_p2.read().is_01() || !grp_MAJ_fu_921_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_31_fu_1767_p2.read()) + sc_biguint<32>(grp_MAJ_fu_921_ap_return.read()));
}

void sha256_transform::thread_add_ln94_71_fu_1850_p2() {
    add_ln94_71_fu_1850_p2 = (!add_ln85_35_fu_1837_p2.read().is_01() || !reg_1146.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_35_fu_1837_p2.read()) + sc_biguint<32>(reg_1146.read()));
}

void sha256_transform::thread_add_ln94_72_fu_1894_p2() {
    add_ln94_72_fu_1894_p2 = (!add_ln85_39_fu_1881_p2.read().is_01() || !grp_MAJ_fu_921_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_39_fu_1881_p2.read()) + sc_biguint<32>(grp_MAJ_fu_921_ap_return.read()));
}

void sha256_transform::thread_add_ln94_73_fu_1963_p2() {
    add_ln94_73_fu_1963_p2 = (!add_ln85_43_fu_1950_p2.read().is_01() || !reg_1146.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_43_fu_1950_p2.read()) + sc_biguint<32>(reg_1146.read()));
}

void sha256_transform::thread_add_ln94_74_fu_1999_p2() {
    add_ln94_74_fu_1999_p2 = (!add_ln85_47_fu_1993_p2.read().is_01() || !grp_MAJ_fu_921_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_47_fu_1993_p2.read()) + sc_biguint<32>(grp_MAJ_fu_921_ap_return.read()));
}

void sha256_transform::thread_add_ln94_75_fu_2165_p2() {
    add_ln94_75_fu_2165_p2 = (!add_ln85_51_fu_2152_p2.read().is_01() || !grp_MAJ_fu_931_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_51_fu_2152_p2.read()) + sc_biguint<32>(grp_MAJ_fu_931_ap_return.read()));
}

void sha256_transform::thread_add_ln94_76_fu_2305_p2() {
    add_ln94_76_fu_2305_p2 = (!add_ln85_55_fu_2292_p2.read().is_01() || !reg_1182.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_55_fu_2292_p2.read()) + sc_biguint<32>(reg_1182.read()));
}

void sha256_transform::thread_add_ln94_77_fu_2349_p2() {
    add_ln94_77_fu_2349_p2 = (!add_ln85_59_fu_2336_p2.read().is_01() || !grp_MAJ_fu_931_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_59_fu_2336_p2.read()) + sc_biguint<32>(grp_MAJ_fu_931_ap_return.read()));
}

void sha256_transform::thread_add_ln94_78_fu_2480_p2() {
    add_ln94_78_fu_2480_p2 = (!add_ln85_63_fu_2467_p2.read().is_01() || !reg_1182.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_63_fu_2467_p2.read()) + sc_biguint<32>(reg_1182.read()));
}

void sha256_transform::thread_add_ln94_79_fu_2516_p2() {
    add_ln94_79_fu_2516_p2 = (!add_ln85_67_fu_2510_p2.read().is_01() || !grp_MAJ_fu_938_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_67_fu_2510_p2.read()) + sc_biguint<32>(grp_MAJ_fu_938_ap_return.read()));
}

void sha256_transform::thread_add_ln94_7_fu_1786_p2() {
    add_ln94_7_fu_1786_p2 = (!add_ln94_70_fu_1780_p2.read().is_01() || !grp_EP0_fu_1021_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_70_fu_1780_p2.read()) + sc_biguint<32>(grp_EP0_fu_1021_ap_return.read()));
}

void sha256_transform::thread_add_ln94_80_fu_2658_p2() {
    add_ln94_80_fu_2658_p2 = (!add_ln85_71_fu_2645_p2.read().is_01() || !grp_MAJ_fu_938_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_71_fu_2645_p2.read()) + sc_biguint<32>(grp_MAJ_fu_938_ap_return.read()));
}

void sha256_transform::thread_add_ln94_81_fu_2782_p2() {
    add_ln94_81_fu_2782_p2 = (!add_ln85_75_fu_2769_p2.read().is_01() || !reg_1214.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_75_fu_2769_p2.read()) + sc_biguint<32>(reg_1214.read()));
}

void sha256_transform::thread_add_ln94_82_fu_2826_p2() {
    add_ln94_82_fu_2826_p2 = (!add_ln85_79_fu_2813_p2.read().is_01() || !grp_MAJ_fu_931_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_79_fu_2813_p2.read()) + sc_biguint<32>(grp_MAJ_fu_931_ap_return.read()));
}

void sha256_transform::thread_add_ln94_83_fu_2957_p2() {
    add_ln94_83_fu_2957_p2 = (!add_ln85_83_fu_2944_p2.read().is_01() || !reg_1182.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_83_fu_2944_p2.read()) + sc_biguint<32>(reg_1182.read()));
}

void sha256_transform::thread_add_ln94_84_fu_2993_p2() {
    add_ln94_84_fu_2993_p2 = (!add_ln85_87_fu_2987_p2.read().is_01() || !grp_MAJ_fu_938_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_87_fu_2987_p2.read()) + sc_biguint<32>(grp_MAJ_fu_938_ap_return.read()));
}

void sha256_transform::thread_add_ln94_85_fu_3123_p2() {
    add_ln94_85_fu_3123_p2 = (!add_ln85_91_fu_3110_p2.read().is_01() || !grp_MAJ_fu_938_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_91_fu_3110_p2.read()) + sc_biguint<32>(grp_MAJ_fu_938_ap_return.read()));
}

void sha256_transform::thread_add_ln94_86_fu_3228_p2() {
    add_ln94_86_fu_3228_p2 = (!add_ln85_95_fu_3215_p2.read().is_01() || !reg_1214.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_95_fu_3215_p2.read()) + sc_biguint<32>(reg_1214.read()));
}

void sha256_transform::thread_add_ln94_87_fu_3272_p2() {
    add_ln94_87_fu_3272_p2 = (!add_ln85_99_fu_3259_p2.read().is_01() || !grp_MAJ_fu_931_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_99_fu_3259_p2.read()) + sc_biguint<32>(grp_MAJ_fu_931_ap_return.read()));
}

void sha256_transform::thread_add_ln94_88_fu_3331_p2() {
    add_ln94_88_fu_3331_p2 = (!add_ln85_103_fu_3318_p2.read().is_01() || !reg_1182.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_103_fu_3318_p2.read()) + sc_biguint<32>(reg_1182.read()));
}

void sha256_transform::thread_add_ln94_89_fu_3367_p2() {
    add_ln94_89_fu_3367_p2 = (!add_ln85_107_fu_3361_p2.read().is_01() || !grp_MAJ_fu_945_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_107_fu_3361_p2.read()) + sc_biguint<32>(grp_MAJ_fu_945_ap_return.read()));
}

void sha256_transform::thread_add_ln94_8_fu_1856_p2() {
    add_ln94_8_fu_1856_p2 = (!add_ln94_71_fu_1850_p2.read().is_01() || !reg_1142.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_71_fu_1850_p2.read()) + sc_biguint<32>(reg_1142.read()));
}

void sha256_transform::thread_add_ln94_90_fu_3415_p2() {
    add_ln94_90_fu_3415_p2 = (!add_ln85_111_fu_3402_p2.read().is_01() || !grp_MAJ_fu_945_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_111_fu_3402_p2.read()) + sc_biguint<32>(grp_MAJ_fu_945_ap_return.read()));
}

void sha256_transform::thread_add_ln94_91_fu_3458_p2() {
    add_ln94_91_fu_3458_p2 = (!add_ln85_115_fu_3445_p2.read().is_01() || !reg_1226.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_115_fu_3445_p2.read()) + sc_biguint<32>(reg_1226.read()));
}

void sha256_transform::thread_add_ln94_92_fu_3502_p2() {
    add_ln94_92_fu_3502_p2 = (!add_ln85_119_fu_3489_p2.read().is_01() || !grp_MAJ_fu_945_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_119_fu_3489_p2.read()) + sc_biguint<32>(grp_MAJ_fu_945_ap_return.read()));
}

void sha256_transform::thread_add_ln94_93_fu_3545_p2() {
    add_ln94_93_fu_3545_p2 = (!add_ln85_123_fu_3532_p2.read().is_01() || !reg_1226.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_123_fu_3532_p2.read()) + sc_biguint<32>(reg_1226.read()));
}

void sha256_transform::thread_add_ln94_94_fu_3581_p2() {
    add_ln94_94_fu_3581_p2 = (!add_ln85_127_fu_3575_p2.read().is_01() || !grp_MAJ_fu_952_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_127_fu_3575_p2.read()) + sc_biguint<32>(grp_MAJ_fu_952_ap_return.read()));
}

void sha256_transform::thread_add_ln94_95_fu_3629_p2() {
    add_ln94_95_fu_3629_p2 = (!add_ln85_131_fu_3616_p2.read().is_01() || !grp_MAJ_fu_945_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_131_fu_3616_p2.read()) + sc_biguint<32>(grp_MAJ_fu_945_ap_return.read()));
}

void sha256_transform::thread_add_ln94_96_fu_3672_p2() {
    add_ln94_96_fu_3672_p2 = (!add_ln85_135_fu_3659_p2.read().is_01() || !reg_1226.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_135_fu_3659_p2.read()) + sc_biguint<32>(reg_1226.read()));
}

void sha256_transform::thread_add_ln94_97_fu_3716_p2() {
    add_ln94_97_fu_3716_p2 = (!add_ln85_139_fu_3703_p2.read().is_01() || !grp_MAJ_fu_945_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_139_fu_3703_p2.read()) + sc_biguint<32>(grp_MAJ_fu_945_ap_return.read()));
}

void sha256_transform::thread_add_ln94_98_fu_3759_p2() {
    add_ln94_98_fu_3759_p2 = (!add_ln85_143_fu_3746_p2.read().is_01() || !reg_1226.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_143_fu_3746_p2.read()) + sc_biguint<32>(reg_1226.read()));
}

void sha256_transform::thread_add_ln94_99_fu_3795_p2() {
    add_ln94_99_fu_3795_p2 = (!add_ln85_147_fu_3789_p2.read().is_01() || !grp_MAJ_fu_952_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln85_147_fu_3789_p2.read()) + sc_biguint<32>(grp_MAJ_fu_952_ap_return.read()));
}

void sha256_transform::thread_add_ln94_9_fu_1900_p2() {
    add_ln94_9_fu_1900_p2 = (!add_ln94_72_fu_1894_p2.read().is_01() || !grp_EP0_fu_1021_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_72_fu_1894_p2.read()) + sc_biguint<32>(grp_EP0_fu_1021_ap_return.read()));
}

void sha256_transform::thread_add_ln94_fu_1377_p2() {
    add_ln94_fu_1377_p2 = (!add_ln94_63_fu_1371_p2.read().is_01() || !reg_1122.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_63_fu_1371_p2.read()) + sc_biguint<32>(reg_1122.read()));
}

void sha256_transform::thread_add_ln97_1_fu_4975_p2() {
    add_ln97_1_fu_4975_p2 = (!reg_1254.read().is_01() || !add_ln85_255_reg_6943.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1254.read()) + sc_biguint<32>(add_ln85_255_reg_6943.read()));
}

void sha256_transform::thread_add_ln97_2_fu_4944_p2() {
    add_ln97_2_fu_4944_p2 = (!grp_MAJ_fu_973_ap_return.read().is_01() || !ctx_state_0_read_1_reg_5070_pp0_iter4_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_MAJ_fu_973_ap_return.read()) + sc_biguint<32>(ctx_state_0_read_1_reg_5070_pp0_iter4_reg.read()));
}

void sha256_transform::thread_add_ln97_fu_4980_p2() {
    add_ln97_fu_4980_p2 = (!add_ln97_2_reg_6949.read().is_01() || !add_ln97_1_fu_4975_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln97_2_reg_6949.read()) + sc_biguint<32>(add_ln97_1_fu_4975_p2.read()));
}

void sha256_transform::thread_add_ln98_fu_4949_p2() {
    add_ln98_fu_4949_p2 = (!add_ln94_62_fu_4915_p2.read().is_01() || !ctx_state_1_read_1_reg_5063_pp0_iter4_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_62_fu_4915_p2.read()) + sc_biguint<32>(ctx_state_1_read_1_reg_5063_pp0_iter4_reg.read()));
}

void sha256_transform::thread_add_ln99_fu_4954_p2() {
    add_ln99_fu_4954_p2 = (!add_ln94_61_reg_6935.read().is_01() || !ctx_state_2_read_1_reg_5057_pp0_iter4_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln94_61_reg_6935.read()) + sc_biguint<32>(ctx_state_2_read_1_reg_5057_pp0_iter4_reg.read()));
}

void sha256_transform::thread_ap_CS_fsm_pp0_stage0() {
    ap_CS_fsm_pp0_stage0 = ap_CS_fsm.read()[0];
}

void sha256_transform::thread_ap_CS_fsm_pp0_stage1() {
    ap_CS_fsm_pp0_stage1 = ap_CS_fsm.read()[1];
}

void sha256_transform::thread_ap_CS_fsm_pp0_stage2() {
    ap_CS_fsm_pp0_stage2 = ap_CS_fsm.read()[2];
}

void sha256_transform::thread_ap_CS_fsm_pp0_stage3() {
    ap_CS_fsm_pp0_stage3 = ap_CS_fsm.read()[3];
}

void sha256_transform::thread_ap_CS_fsm_pp0_stage4() {
    ap_CS_fsm_pp0_stage4 = ap_CS_fsm.read()[4];
}

void sha256_transform::thread_ap_CS_fsm_pp0_stage5() {
    ap_CS_fsm_pp0_stage5 = ap_CS_fsm.read()[5];
}

void sha256_transform::thread_ap_CS_fsm_pp0_stage6() {
    ap_CS_fsm_pp0_stage6 = ap_CS_fsm.read()[6];
}

void sha256_transform::thread_ap_CS_fsm_pp0_stage7() {
    ap_CS_fsm_pp0_stage7 = ap_CS_fsm.read()[7];
}

void sha256_transform::thread_ap_block_pp0_stage0() {
    ap_block_pp0_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_pp0_stage0_11001() {
    ap_block_pp0_stage0_11001 = (esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()));
}

void sha256_transform::thread_ap_block_pp0_stage0_subdone() {
    ap_block_pp0_stage0_subdone = (esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_0) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())));
}

void sha256_transform::thread_ap_block_pp0_stage1() {
    ap_block_pp0_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_pp0_stage1_11001() {
    ap_block_pp0_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_pp0_stage1_subdone() {
    ap_block_pp0_stage1_subdone = esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_0);
}

void sha256_transform::thread_ap_block_pp0_stage2() {
    ap_block_pp0_stage2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_pp0_stage2_11001() {
    ap_block_pp0_stage2_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_pp0_stage2_subdone() {
    ap_block_pp0_stage2_subdone = esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_0);
}

void sha256_transform::thread_ap_block_pp0_stage3() {
    ap_block_pp0_stage3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_pp0_stage3_11001() {
    ap_block_pp0_stage3_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_pp0_stage3_subdone() {
    ap_block_pp0_stage3_subdone = esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_0);
}

void sha256_transform::thread_ap_block_pp0_stage4() {
    ap_block_pp0_stage4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_pp0_stage4_11001() {
    ap_block_pp0_stage4_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_pp0_stage4_subdone() {
    ap_block_pp0_stage4_subdone = esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_0);
}

void sha256_transform::thread_ap_block_pp0_stage5() {
    ap_block_pp0_stage5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_pp0_stage5_11001() {
    ap_block_pp0_stage5_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_pp0_stage5_subdone() {
    ap_block_pp0_stage5_subdone = esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_0);
}

void sha256_transform::thread_ap_block_pp0_stage6() {
    ap_block_pp0_stage6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_pp0_stage6_11001() {
    ap_block_pp0_stage6_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_pp0_stage6_subdone() {
    ap_block_pp0_stage6_subdone = esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_0);
}

void sha256_transform::thread_ap_block_pp0_stage7() {
    ap_block_pp0_stage7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_pp0_stage7_11001() {
    ap_block_pp0_stage7_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_pp0_stage7_subdone() {
    ap_block_pp0_stage7_subdone = esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_0);
}

void sha256_transform::thread_ap_block_state10_pp0_stage1_iter1() {
    ap_block_state10_pp0_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state11_pp0_stage2_iter1() {
    ap_block_state11_pp0_stage2_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state12_pp0_stage3_iter1() {
    ap_block_state12_pp0_stage3_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state13_pp0_stage4_iter1() {
    ap_block_state13_pp0_stage4_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state14_pp0_stage5_iter1() {
    ap_block_state14_pp0_stage5_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state15_pp0_stage6_iter1() {
    ap_block_state15_pp0_stage6_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state16_pp0_stage7_iter1() {
    ap_block_state16_pp0_stage7_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state17_pp0_stage0_iter2() {
    ap_block_state17_pp0_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state18_pp0_stage1_iter2() {
    ap_block_state18_pp0_stage1_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state19_pp0_stage2_iter2() {
    ap_block_state19_pp0_stage2_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state1_pp0_stage0_iter0() {
    ap_block_state1_pp0_stage0_iter0 = esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read());
}

void sha256_transform::thread_ap_block_state20_pp0_stage3_iter2() {
    ap_block_state20_pp0_stage3_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state21_pp0_stage4_iter2() {
    ap_block_state21_pp0_stage4_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state22_pp0_stage5_iter2() {
    ap_block_state22_pp0_stage5_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state23_pp0_stage6_iter2() {
    ap_block_state23_pp0_stage6_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state24_pp0_stage7_iter2() {
    ap_block_state24_pp0_stage7_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state25_pp0_stage0_iter3() {
    ap_block_state25_pp0_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state26_pp0_stage1_iter3() {
    ap_block_state26_pp0_stage1_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state27_pp0_stage2_iter3() {
    ap_block_state27_pp0_stage2_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state28_pp0_stage3_iter3() {
    ap_block_state28_pp0_stage3_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state29_pp0_stage4_iter3() {
    ap_block_state29_pp0_stage4_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state2_pp0_stage1_iter0() {
    ap_block_state2_pp0_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state30_pp0_stage5_iter3() {
    ap_block_state30_pp0_stage5_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state31_pp0_stage6_iter3() {
    ap_block_state31_pp0_stage6_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state32_pp0_stage7_iter3() {
    ap_block_state32_pp0_stage7_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state33_pp0_stage0_iter4() {
    ap_block_state33_pp0_stage0_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state34_pp0_stage1_iter4() {
    ap_block_state34_pp0_stage1_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state35_pp0_stage2_iter4() {
    ap_block_state35_pp0_stage2_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state36_pp0_stage3_iter4() {
    ap_block_state36_pp0_stage3_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state37_pp0_stage4_iter4() {
    ap_block_state37_pp0_stage4_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state38_pp0_stage5_iter4() {
    ap_block_state38_pp0_stage5_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state39_pp0_stage6_iter4() {
    ap_block_state39_pp0_stage6_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state3_pp0_stage2_iter0() {
    ap_block_state3_pp0_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state40_pp0_stage7_iter4() {
    ap_block_state40_pp0_stage7_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state41_pp0_stage0_iter5() {
    ap_block_state41_pp0_stage0_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state4_pp0_stage3_iter0() {
    ap_block_state4_pp0_stage3_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state5_pp0_stage4_iter0() {
    ap_block_state5_pp0_stage4_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state6_pp0_stage5_iter0() {
    ap_block_state6_pp0_stage5_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state7_pp0_stage6_iter0() {
    ap_block_state7_pp0_stage6_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state8_pp0_stage7_iter0() {
    ap_block_state8_pp0_stage7_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state9_pp0_stage0_iter1() {
    ap_block_state9_pp0_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read())))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void sha256_transform::thread_ap_enable_pp0() {
    ap_enable_pp0 = (ap_idle_pp0.read() ^ ap_const_logic_1);
}

void sha256_transform::thread_ap_enable_reg_pp0_iter0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read())) {
        ap_enable_reg_pp0_iter0 = ap_start.read();
    } else {
        ap_enable_reg_pp0_iter0 = ap_enable_reg_pp0_iter0_reg.read();
    }
}

void sha256_transform::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_idle_pp0.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void sha256_transform::thread_ap_idle_pp0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter5.read()))) {
        ap_idle_pp0 = ap_const_logic_1;
    } else {
        ap_idle_pp0 = ap_const_logic_0;
    }
}

void sha256_transform::thread_ap_idle_pp0_0to4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter4.read()))) {
        ap_idle_pp0_0to4 = ap_const_logic_1;
    } else {
        ap_idle_pp0_0to4 = ap_const_logic_0;
    }
}

void sha256_transform::thread_ap_idle_pp0_1to5() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter5.read()))) {
        ap_idle_pp0_1to5 = ap_const_logic_1;
    } else {
        ap_idle_pp0_1to5 = ap_const_logic_0;
    }
}

void sha256_transform::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void sha256_transform::thread_ap_reset_idle_pp0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_idle_pp0_0to4.read()))) {
        ap_reset_idle_pp0 = ap_const_logic_1;
    } else {
        ap_reset_idle_pp0 = ap_const_logic_0;
    }
}

void sha256_transform::thread_ap_return_0() {
    ap_return_0 = add_ln97_fu_4980_p2.read();
}

void sha256_transform::thread_ap_return_1() {
    ap_return_1 = add_ln98_reg_6954.read();
}

void sha256_transform::thread_ap_return_2() {
    ap_return_2 = add_ln99_reg_6959.read();
}

void sha256_transform::thread_ap_return_3() {
    ap_return_3 = add_ln100_reg_6964.read();
}

void sha256_transform::thread_ap_return_4() {
    ap_return_4 = add_ln101_fu_4989_p2.read();
}

void sha256_transform::thread_ap_return_5() {
    ap_return_5 = add_ln102_reg_6969.read();
}

void sha256_transform::thread_ap_return_6() {
    ap_return_6 = add_ln103_reg_6974.read();
}

void sha256_transform::thread_ap_return_7() {
    ap_return_7 = add_ln104_reg_6979.read();
}

void sha256_transform::thread_data_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            data_0_address0 =  (sc_lv<4>) (ap_const_lv64_E);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            data_0_address0 =  (sc_lv<4>) (ap_const_lv64_C);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            data_0_address0 =  (sc_lv<4>) (ap_const_lv64_A);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            data_0_address0 =  (sc_lv<4>) (ap_const_lv64_8);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            data_0_address0 =  (sc_lv<4>) (ap_const_lv64_6);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            data_0_address0 =  (sc_lv<4>) (ap_const_lv64_4);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            data_0_address0 =  (sc_lv<4>) (ap_const_lv64_2);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            data_0_address0 =  (sc_lv<4>) (ap_const_lv64_0);
        } else {
            data_0_address0 = "XXXX";
        }
    } else {
        data_0_address0 = "XXXX";
    }
}

void sha256_transform::thread_data_0_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            data_0_address1 =  (sc_lv<4>) (ap_const_lv64_F);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            data_0_address1 =  (sc_lv<4>) (ap_const_lv64_D);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            data_0_address1 =  (sc_lv<4>) (ap_const_lv64_B);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            data_0_address1 =  (sc_lv<4>) (ap_const_lv64_9);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            data_0_address1 =  (sc_lv<4>) (ap_const_lv64_7);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            data_0_address1 =  (sc_lv<4>) (ap_const_lv64_5);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            data_0_address1 =  (sc_lv<4>) (ap_const_lv64_3);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            data_0_address1 =  (sc_lv<4>) (ap_const_lv64_1);
        } else {
            data_0_address1 = "XXXX";
        }
    } else {
        data_0_address1 = "XXXX";
    }
}

void sha256_transform::thread_data_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)))) {
        data_0_ce0 = ap_const_logic_1;
    } else {
        data_0_ce0 = ap_const_logic_0;
    }
}

void sha256_transform::thread_data_0_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)))) {
        data_0_ce1 = ap_const_logic_1;
    } else {
        data_0_ce1 = ap_const_logic_0;
    }
}

void sha256_transform::thread_data_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            data_1_address0 =  (sc_lv<4>) (ap_const_lv64_E);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            data_1_address0 =  (sc_lv<4>) (ap_const_lv64_C);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            data_1_address0 =  (sc_lv<4>) (ap_const_lv64_A);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            data_1_address0 =  (sc_lv<4>) (ap_const_lv64_8);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            data_1_address0 =  (sc_lv<4>) (ap_const_lv64_6);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            data_1_address0 =  (sc_lv<4>) (ap_const_lv64_4);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            data_1_address0 =  (sc_lv<4>) (ap_const_lv64_2);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            data_1_address0 =  (sc_lv<4>) (ap_const_lv64_0);
        } else {
            data_1_address0 = "XXXX";
        }
    } else {
        data_1_address0 = "XXXX";
    }
}

void sha256_transform::thread_data_1_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            data_1_address1 =  (sc_lv<4>) (ap_const_lv64_F);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            data_1_address1 =  (sc_lv<4>) (ap_const_lv64_D);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            data_1_address1 =  (sc_lv<4>) (ap_const_lv64_B);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            data_1_address1 =  (sc_lv<4>) (ap_const_lv64_9);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            data_1_address1 =  (sc_lv<4>) (ap_const_lv64_7);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            data_1_address1 =  (sc_lv<4>) (ap_const_lv64_5);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            data_1_address1 =  (sc_lv<4>) (ap_const_lv64_3);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            data_1_address1 =  (sc_lv<4>) (ap_const_lv64_1);
        } else {
            data_1_address1 = "XXXX";
        }
    } else {
        data_1_address1 = "XXXX";
    }
}

void sha256_transform::thread_data_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)))) {
        data_1_ce0 = ap_const_logic_1;
    } else {
        data_1_ce0 = ap_const_logic_0;
    }
}

void sha256_transform::thread_data_1_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)))) {
        data_1_ce1 = ap_const_logic_1;
    } else {
        data_1_ce1 = ap_const_logic_0;
    }
}

void sha256_transform::thread_data_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            data_2_address0 =  (sc_lv<4>) (ap_const_lv64_E);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            data_2_address0 =  (sc_lv<4>) (ap_const_lv64_C);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            data_2_address0 =  (sc_lv<4>) (ap_const_lv64_A);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            data_2_address0 =  (sc_lv<4>) (ap_const_lv64_8);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            data_2_address0 =  (sc_lv<4>) (ap_const_lv64_6);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            data_2_address0 =  (sc_lv<4>) (ap_const_lv64_4);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            data_2_address0 =  (sc_lv<4>) (ap_const_lv64_2);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            data_2_address0 =  (sc_lv<4>) (ap_const_lv64_0);
        } else {
            data_2_address0 = "XXXX";
        }
    } else {
        data_2_address0 = "XXXX";
    }
}

void sha256_transform::thread_data_2_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            data_2_address1 =  (sc_lv<4>) (ap_const_lv64_F);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            data_2_address1 =  (sc_lv<4>) (ap_const_lv64_D);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            data_2_address1 =  (sc_lv<4>) (ap_const_lv64_B);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            data_2_address1 =  (sc_lv<4>) (ap_const_lv64_9);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            data_2_address1 =  (sc_lv<4>) (ap_const_lv64_7);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            data_2_address1 =  (sc_lv<4>) (ap_const_lv64_5);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            data_2_address1 =  (sc_lv<4>) (ap_const_lv64_3);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            data_2_address1 =  (sc_lv<4>) (ap_const_lv64_1);
        } else {
            data_2_address1 = "XXXX";
        }
    } else {
        data_2_address1 = "XXXX";
    }
}

void sha256_transform::thread_data_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)))) {
        data_2_ce0 = ap_const_logic_1;
    } else {
        data_2_ce0 = ap_const_logic_0;
    }
}

void sha256_transform::thread_data_2_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)))) {
        data_2_ce1 = ap_const_logic_1;
    } else {
        data_2_ce1 = ap_const_logic_0;
    }
}

void sha256_transform::thread_data_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            data_3_address0 =  (sc_lv<4>) (ap_const_lv64_E);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            data_3_address0 =  (sc_lv<4>) (ap_const_lv64_C);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            data_3_address0 =  (sc_lv<4>) (ap_const_lv64_A);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            data_3_address0 =  (sc_lv<4>) (ap_const_lv64_8);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            data_3_address0 =  (sc_lv<4>) (ap_const_lv64_6);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            data_3_address0 =  (sc_lv<4>) (ap_const_lv64_4);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            data_3_address0 =  (sc_lv<4>) (ap_const_lv64_2);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            data_3_address0 =  (sc_lv<4>) (ap_const_lv64_0);
        } else {
            data_3_address0 = "XXXX";
        }
    } else {
        data_3_address0 = "XXXX";
    }
}

void sha256_transform::thread_data_3_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            data_3_address1 =  (sc_lv<4>) (ap_const_lv64_F);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            data_3_address1 =  (sc_lv<4>) (ap_const_lv64_D);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            data_3_address1 =  (sc_lv<4>) (ap_const_lv64_B);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            data_3_address1 =  (sc_lv<4>) (ap_const_lv64_9);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            data_3_address1 =  (sc_lv<4>) (ap_const_lv64_7);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            data_3_address1 =  (sc_lv<4>) (ap_const_lv64_5);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            data_3_address1 =  (sc_lv<4>) (ap_const_lv64_3);
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            data_3_address1 =  (sc_lv<4>) (ap_const_lv64_1);
        } else {
            data_3_address1 = "XXXX";
        }
    } else {
        data_3_address1 = "XXXX";
    }
}

void sha256_transform::thread_data_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)))) {
        data_3_ce0 = ap_const_logic_1;
    } else {
        data_3_ce0 = ap_const_logic_0;
    }
}

void sha256_transform::thread_data_3_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0)))) {
        data_3_ce1 = ap_const_logic_1;
    } else {
        data_3_ce1 = ap_const_logic_0;
    }
}

void sha256_transform::thread_grp_CH_fu_862_x() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            grp_CH_fu_862_x = add_ln90_10_fu_1956_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            grp_CH_fu_862_x = add_ln90_8_fu_1842_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            grp_CH_fu_862_x = add_ln90_6_fu_1744_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            grp_CH_fu_862_x = add_ln90_5_fu_1662_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            grp_CH_fu_862_x = add_ln90_3_fu_1547_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            grp_CH_fu_862_x = add_ln90_1_fu_1434_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            grp_CH_fu_862_x = add_ln90_fu_1363_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            grp_CH_fu_862_x = ctx_state_4_read.read();
        } else {
            grp_CH_fu_862_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_CH_fu_862_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_CH_fu_862_y() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            grp_CH_fu_862_y = add_ln90_9_reg_5628.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            grp_CH_fu_862_y = add_ln90_7_reg_5533.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            grp_CH_fu_862_y = add_ln90_5_reg_5437.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            grp_CH_fu_862_y = add_ln90_4_reg_5362.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            grp_CH_fu_862_y = add_ln90_2_reg_5275.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            grp_CH_fu_862_y = add_ln90_reg_5193.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            grp_CH_fu_862_y = ctx_state_4_read_1_reg_5049.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            grp_CH_fu_862_y = ctx_state_5_read.read();
        } else {
            grp_CH_fu_862_y =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_CH_fu_862_y =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_CH_fu_862_z() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            grp_CH_fu_862_z = add_ln90_8_reg_5616.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            grp_CH_fu_862_z = add_ln90_6_reg_5527.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            grp_CH_fu_862_z = add_ln90_4_reg_5362.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            grp_CH_fu_862_z = add_ln90_3_reg_5350.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            grp_CH_fu_862_z = add_ln90_1_reg_5263.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            grp_CH_fu_862_z = ctx_state_4_read_1_reg_5049.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            grp_CH_fu_862_z = ctx_state_5_read_1_reg_5042.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            grp_CH_fu_862_z = ctx_state_6_read.read();
        } else {
            grp_CH_fu_862_z =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_CH_fu_862_z =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_CH_fu_872_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_CH_fu_872_x = add_ln90_23_fu_3220_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_CH_fu_872_x = add_ln90_18_fu_2774_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_CH_fu_872_x = add_ln90_13_fu_2297_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_CH_fu_872_x = add_ln90_11_fu_2129_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_CH_fu_872_x = add_ln90_9_fu_1887_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_CH_fu_872_x = add_ln90_7_fu_1773_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_CH_fu_872_x = add_ln90_4_fu_1593_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_CH_fu_872_x = add_ln90_2_fu_1478_p2.read();
    } else {
        grp_CH_fu_872_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_CH_fu_872_y() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_CH_fu_872_y = add_ln90_22_reg_6238.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_CH_fu_872_y = add_ln90_17_reg_6029.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_CH_fu_872_y = add_ln90_12_reg_5799.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_CH_fu_872_y = add_ln90_10_reg_5706.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_CH_fu_872_y = add_ln90_8_fu_1842_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_CH_fu_872_y = add_ln90_6_fu_1744_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_CH_fu_872_y = add_ln90_3_fu_1547_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_CH_fu_872_y = add_ln90_1_fu_1434_p2.read();
    } else {
        grp_CH_fu_872_y =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_CH_fu_872_z() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_CH_fu_872_z = add_ln90_21_reg_6232.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_CH_fu_872_z = add_ln90_16_reg_6023.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_CH_fu_872_z = add_ln90_11_reg_5793.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_CH_fu_872_z = add_ln90_9_reg_5628.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_CH_fu_872_z = add_ln90_7_reg_5533.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_CH_fu_872_z = add_ln90_5_reg_5437.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_CH_fu_872_z = add_ln90_2_reg_5275.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_CH_fu_872_z = add_ln90_reg_5193.read();
    } else {
        grp_CH_fu_872_z =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_CH_fu_879_x() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            grp_CH_fu_879_x = add_ln90_24_fu_3265_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            grp_CH_fu_879_x = add_ln90_21_fu_3087_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            grp_CH_fu_879_x = add_ln90_20_fu_2950_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            grp_CH_fu_879_x = add_ln90_19_fu_2819_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            grp_CH_fu_879_x = add_ln90_16_fu_2622_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            grp_CH_fu_879_x = add_ln90_15_fu_2473_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            grp_CH_fu_879_x = add_ln90_14_fu_2342_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            grp_CH_fu_879_x = add_ln90_12_fu_2158_p2.read();
        } else {
            grp_CH_fu_879_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_CH_fu_879_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_CH_fu_879_y() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            grp_CH_fu_879_y = add_ln90_23_fu_3220_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            grp_CH_fu_879_y = add_ln90_20_reg_6167.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            grp_CH_fu_879_y = add_ln90_19_reg_6110.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            grp_CH_fu_879_y = add_ln90_18_fu_2774_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            grp_CH_fu_879_y = add_ln90_15_reg_5945.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            grp_CH_fu_879_y = add_ln90_14_reg_5877.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            grp_CH_fu_879_y = add_ln90_13_fu_2297_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            grp_CH_fu_879_y = add_ln90_11_fu_2129_p2.read();
        } else {
            grp_CH_fu_879_y =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_CH_fu_879_y =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_CH_fu_879_z() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            grp_CH_fu_879_z = add_ln90_22_reg_6238.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            grp_CH_fu_879_z = add_ln90_19_reg_6110.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            grp_CH_fu_879_z = add_ln90_18_reg_6098.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            grp_CH_fu_879_z = add_ln90_17_reg_6029.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            grp_CH_fu_879_z = add_ln90_14_reg_5877.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            grp_CH_fu_879_z = add_ln90_13_reg_5865.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            grp_CH_fu_879_z = add_ln90_12_reg_5799.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            grp_CH_fu_879_z = add_ln90_10_reg_5706.read();
        } else {
            grp_CH_fu_879_z =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_CH_fu_879_z =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_CH_fu_886_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_CH_fu_886_x = add_ln90_36_fu_3807_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_CH_fu_886_x = add_ln90_33_fu_3664_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_CH_fu_886_x = add_ln90_31_fu_3593_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_CH_fu_886_x = add_ln90_28_fu_3450_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_CH_fu_886_x = add_ln90_26_fu_3379_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        grp_CH_fu_886_x = add_ln90_25_fu_3324_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_CH_fu_886_x = add_ln90_22_fu_3116_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_CH_fu_886_x = add_ln90_17_fu_2651_p2.read();
    } else {
        grp_CH_fu_886_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_CH_fu_886_y() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_CH_fu_886_y = add_ln90_35_reg_6476.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_CH_fu_886_y = add_ln90_32_reg_6431.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_CH_fu_886_y = add_ln90_30_reg_6397.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_CH_fu_886_y = add_ln90_27_reg_6352.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_CH_fu_886_y = add_ln90_25_reg_6318.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        grp_CH_fu_886_y = add_ln90_24_reg_6299.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_CH_fu_886_y = add_ln90_21_fu_3087_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_CH_fu_886_y = add_ln90_16_fu_2622_p2.read();
    } else {
        grp_CH_fu_886_y =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_CH_fu_886_z() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_CH_fu_886_z = add_ln90_34_reg_6462.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_CH_fu_886_z = add_ln90_31_reg_6425.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_CH_fu_886_z = add_ln90_29_reg_6383.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_CH_fu_886_z = add_ln90_26_reg_6346.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_CH_fu_886_z = add_ln90_24_reg_6299.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        grp_CH_fu_886_z = add_ln90_23_reg_6287.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_CH_fu_886_z = add_ln90_20_reg_6167.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_CH_fu_886_z = add_ln90_15_reg_5945.read();
    } else {
        grp_CH_fu_886_z =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_CH_fu_893_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        grp_CH_fu_893_x = add_ln90_38_fu_3878_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_CH_fu_893_x = add_ln90_37_fu_3836_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_CH_fu_893_x = add_ln90_35_fu_3752_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_CH_fu_893_x = add_ln90_34_fu_3709_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_CH_fu_893_x = add_ln90_32_fu_3622_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_CH_fu_893_x = add_ln90_30_fu_3538_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_CH_fu_893_x = add_ln90_29_fu_3495_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_CH_fu_893_x = add_ln90_27_fu_3408_p2.read();
    } else {
        grp_CH_fu_893_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_CH_fu_893_y() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        grp_CH_fu_893_y = add_ln90_37_reg_6510.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_CH_fu_893_y = add_ln90_36_fu_3807_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_CH_fu_893_y = add_ln90_34_reg_6462.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_CH_fu_893_y = add_ln90_33_fu_3664_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_CH_fu_893_y = add_ln90_31_fu_3593_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_CH_fu_893_y = add_ln90_29_reg_6383.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_CH_fu_893_y = add_ln90_28_fu_3450_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_CH_fu_893_y = add_ln90_26_fu_3379_p2.read();
    } else {
        grp_CH_fu_893_y =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_CH_fu_893_z() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        grp_CH_fu_893_z = add_ln90_36_reg_6504.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_CH_fu_893_z = add_ln90_35_reg_6476.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_CH_fu_893_z = add_ln90_33_reg_6450.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_CH_fu_893_z = add_ln90_32_reg_6431.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_CH_fu_893_z = add_ln90_30_reg_6397.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_CH_fu_893_z = add_ln90_28_reg_6371.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_CH_fu_893_z = add_ln90_27_reg_6352.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_CH_fu_893_z = add_ln90_25_reg_6318.read();
    } else {
        grp_CH_fu_893_z =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_CH_fu_900_x() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            grp_CH_fu_900_x = add_ln90_50_fu_4405_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            grp_CH_fu_900_x = add_ln90_48_fu_4317_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            grp_CH_fu_900_x = add_ln90_46_fu_4231_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            grp_CH_fu_900_x = add_ln90_45_fu_4176_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            grp_CH_fu_900_x = add_ln90_43_fu_4088_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            grp_CH_fu_900_x = add_ln90_41_fu_4017_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            grp_CH_fu_900_x = add_ln90_40_fu_3964_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            grp_CH_fu_900_x = add_ln90_39_fu_3923_p2.read();
        } else {
            grp_CH_fu_900_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_CH_fu_900_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_CH_fu_900_y() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            grp_CH_fu_900_y = add_ln90_49_reg_6724.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            grp_CH_fu_900_y = add_ln90_47_reg_6688.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            grp_CH_fu_900_y = add_ln90_45_reg_6654.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            grp_CH_fu_900_y = add_ln90_44_reg_6640.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            grp_CH_fu_900_y = add_ln90_42_reg_6609.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            grp_CH_fu_900_y = add_ln90_40_reg_6575.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            grp_CH_fu_900_y = add_ln90_39_reg_6541.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            grp_CH_fu_900_y = add_ln90_38_fu_3878_p2.read();
        } else {
            grp_CH_fu_900_y =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_CH_fu_900_y =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_CH_fu_900_z() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            grp_CH_fu_900_z = add_ln90_48_reg_6712.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            grp_CH_fu_900_z = add_ln90_46_reg_6682.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            grp_CH_fu_900_z = add_ln90_44_reg_6640.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            grp_CH_fu_900_z = add_ln90_43_reg_6628.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            grp_CH_fu_900_z = add_ln90_41_reg_6603.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            grp_CH_fu_900_z = add_ln90_39_reg_6541.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            grp_CH_fu_900_z = add_ln90_38_reg_6529.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            grp_CH_fu_900_z = add_ln90_37_reg_6510.read();
        } else {
            grp_CH_fu_900_z =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_CH_fu_900_z =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_CH_fu_907_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_CH_fu_907_x = add_ln90_61_reg_6927.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_CH_fu_907_x = add_ln90_57_reg_6857.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_CH_fu_907_x = add_ln90_53_fu_4531_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        grp_CH_fu_907_x = add_ln90_51_fu_4460_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_CH_fu_907_x = add_ln90_49_fu_4362_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_CH_fu_907_x = add_ln90_47_fu_4260_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_CH_fu_907_x = add_ln90_44_fu_4133_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_CH_fu_907_x = add_ln90_42_fu_4046_p2.read();
    } else {
        grp_CH_fu_907_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_CH_fu_907_y() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_CH_fu_907_y = add_ln90_60_reg_6909.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_CH_fu_907_y = add_ln90_56_reg_6850.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_CH_fu_907_y = add_ln90_52_reg_6772.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        grp_CH_fu_907_y = add_ln90_50_reg_6738.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_CH_fu_907_y = add_ln90_48_fu_4317_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_CH_fu_907_y = add_ln90_46_fu_4231_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_CH_fu_907_y = add_ln90_43_fu_4088_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_CH_fu_907_y = add_ln90_41_fu_4017_p2.read();
    } else {
        grp_CH_fu_907_y =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_CH_fu_907_z() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_CH_fu_907_z = add_ln90_59_reg_6895.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_CH_fu_907_z = add_ln90_55_reg_6822.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_CH_fu_907_z = add_ln90_51_reg_6766.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        grp_CH_fu_907_z = add_ln90_49_reg_6724.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_CH_fu_907_z = add_ln90_47_reg_6688.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_CH_fu_907_z = add_ln90_45_reg_6654.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_CH_fu_907_z = add_ln90_42_reg_6609.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_CH_fu_907_z = add_ln90_40_reg_6575.read();
    } else {
        grp_CH_fu_907_z =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_CH_fu_914_x() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            grp_CH_fu_914_x = add_ln90_62_fu_4902_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            grp_CH_fu_914_x = add_ln90_60_reg_6909.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            grp_CH_fu_914_x = add_ln90_59_fu_4783_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            grp_CH_fu_914_x = add_ln90_58_fu_4740_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            grp_CH_fu_914_x = add_ln90_56_fu_4673_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            grp_CH_fu_914_x = add_ln90_55_fu_4618_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            grp_CH_fu_914_x = add_ln90_54_fu_4576_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            grp_CH_fu_914_x = add_ln90_52_fu_4489_p2.read();
        } else {
            grp_CH_fu_914_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_CH_fu_914_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_CH_fu_914_y() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            grp_CH_fu_914_y = add_ln90_61_reg_6927.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            grp_CH_fu_914_y = add_ln90_59_reg_6895.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            grp_CH_fu_914_y = add_ln90_58_reg_6875.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            grp_CH_fu_914_y = add_ln90_57_reg_6857.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            grp_CH_fu_914_y = add_ln90_55_reg_6822.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            grp_CH_fu_914_y = add_ln90_54_reg_6803.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            grp_CH_fu_914_y = add_ln90_53_fu_4531_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            grp_CH_fu_914_y = add_ln90_51_fu_4460_p2.read();
        } else {
            grp_CH_fu_914_y =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_CH_fu_914_y =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_CH_fu_914_z() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            grp_CH_fu_914_z = add_ln90_60_reg_6909.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            grp_CH_fu_914_z = add_ln90_58_reg_6875.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            grp_CH_fu_914_z = add_ln90_57_reg_6857.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            grp_CH_fu_914_z = add_ln90_56_reg_6850.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            grp_CH_fu_914_z = add_ln90_54_reg_6803.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            grp_CH_fu_914_z = add_ln90_53_reg_6791.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            grp_CH_fu_914_z = add_ln90_52_reg_6772.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            grp_CH_fu_914_z = add_ln90_50_reg_6738.read();
        } else {
            grp_CH_fu_914_z =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_CH_fu_914_z =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_EP0_fu_1021_x() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            grp_EP0_fu_1021_x = add_ln94_10_fu_1969_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            grp_EP0_fu_1021_x = add_ln94_8_fu_1856_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            grp_EP0_fu_1021_x = add_ln94_6_reg_5456.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            grp_EP0_fu_1021_x = add_ln94_5_fu_1675_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            grp_EP0_fu_1021_x = add_ln94_3_fu_1561_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            grp_EP0_fu_1021_x = add_ln94_1_fu_1446_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            grp_EP0_fu_1021_x = add_ln94_fu_1377_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            grp_EP0_fu_1021_x = ctx_state_0_read.read();
        } else {
            grp_EP0_fu_1021_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_EP0_fu_1021_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_EP0_fu_1027_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1027_x = add_ln94_23_fu_3234_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1027_x = add_ln94_18_fu_2788_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1027_x = add_ln94_13_fu_2311_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_EP0_fu_1027_x = add_ln94_11_reg_5725.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1027_x = add_ln94_9_fu_1900_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1027_x = add_ln94_7_fu_1786_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1027_x = add_ln94_4_fu_1606_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1027_x = add_ln94_2_fu_1491_p2.read();
    } else {
        grp_EP0_fu_1027_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_EP0_fu_1032_x() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            grp_EP0_fu_1032_x = add_ln94_24_fu_3278_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            grp_EP0_fu_1032_x = add_ln94_21_reg_6186.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            grp_EP0_fu_1032_x = add_ln94_20_fu_2963_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            grp_EP0_fu_1032_x = add_ln94_19_fu_2832_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            grp_EP0_fu_1032_x = add_ln94_16_reg_5964.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            grp_EP0_fu_1032_x = add_ln94_15_fu_2486_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            grp_EP0_fu_1032_x = add_ln94_14_fu_2355_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            grp_EP0_fu_1032_x = add_ln94_12_fu_2171_p2.read();
        } else {
            grp_EP0_fu_1032_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_EP0_fu_1032_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_EP0_fu_1037_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1037_x = add_ln94_36_reg_6495.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1037_x = add_ln94_33_fu_3678_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1037_x = add_ln94_31_reg_6416.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1037_x = add_ln94_28_fu_3464_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1037_x = add_ln94_26_reg_6337.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        grp_EP0_fu_1037_x = add_ln94_25_fu_3337_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1037_x = add_ln94_22_fu_3129_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1037_x = add_ln94_17_fu_2664_p2.read();
    } else {
        grp_EP0_fu_1037_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_EP0_fu_1042_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        grp_EP0_fu_1042_x = add_ln94_38_fu_3892_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1042_x = add_ln94_37_fu_3849_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1042_x = add_ln94_35_fu_3765_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1042_x = add_ln94_34_fu_3722_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1042_x = add_ln94_32_fu_3635_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1042_x = add_ln94_30_fu_3551_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1042_x = add_ln94_29_fu_3508_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1042_x = add_ln94_27_fu_3421_p2.read();
    } else {
        grp_EP0_fu_1042_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_EP0_fu_1047_x() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            grp_EP0_fu_1047_x = add_ln94_50_fu_4418_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            grp_EP0_fu_1047_x = add_ln94_48_fu_4331_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            grp_EP0_fu_1047_x = add_ln94_46_reg_6673.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            grp_EP0_fu_1047_x = add_ln94_45_fu_4189_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            grp_EP0_fu_1047_x = add_ln94_43_fu_4102_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            grp_EP0_fu_1047_x = add_ln94_41_reg_6594.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            grp_EP0_fu_1047_x = add_ln94_40_fu_3976_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            grp_EP0_fu_1047_x = add_ln94_39_fu_3936_p2.read();
        } else {
            grp_EP0_fu_1047_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_EP0_fu_1047_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_EP0_fu_1052_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1052_x = add_ln94_61_reg_6935.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1052_x = add_ln94_57_reg_6866.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1052_x = add_ln94_53_fu_4545_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        grp_EP0_fu_1052_x = add_ln94_51_reg_6757.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1052_x = add_ln94_49_fu_4375_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1052_x = add_ln94_47_fu_4273_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1052_x = add_ln94_44_fu_4146_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_EP0_fu_1052_x = add_ln94_42_fu_4059_p2.read();
    } else {
        grp_EP0_fu_1052_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_EP0_fu_1057_x() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            grp_EP0_fu_1057_x = add_ln94_62_fu_4915_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            grp_EP0_fu_1057_x = add_ln94_60_reg_6918.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            grp_EP0_fu_1057_x = add_ln94_59_fu_4794_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            grp_EP0_fu_1057_x = add_ln94_58_fu_4753_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            grp_EP0_fu_1057_x = add_ln94_56_reg_6841.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            grp_EP0_fu_1057_x = add_ln94_55_fu_4631_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            grp_EP0_fu_1057_x = add_ln94_54_fu_4589_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            grp_EP0_fu_1057_x = add_ln94_52_fu_4502_p2.read();
        } else {
            grp_EP0_fu_1057_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_EP0_fu_1057_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_EP1_fu_1001_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        grp_EP1_fu_1001_x = add_ln90_38_fu_3878_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_EP1_fu_1001_x = add_ln90_37_fu_3836_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_EP1_fu_1001_x = add_ln90_35_fu_3752_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_EP1_fu_1001_x = add_ln90_34_fu_3709_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_EP1_fu_1001_x = add_ln90_32_fu_3622_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_EP1_fu_1001_x = add_ln90_30_fu_3538_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_EP1_fu_1001_x = add_ln90_29_fu_3495_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_EP1_fu_1001_x = add_ln90_27_fu_3408_p2.read();
    } else {
        grp_EP1_fu_1001_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_EP1_fu_1006_x() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            grp_EP1_fu_1006_x = add_ln90_50_fu_4405_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            grp_EP1_fu_1006_x = add_ln90_48_fu_4317_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            grp_EP1_fu_1006_x = add_ln90_46_fu_4231_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            grp_EP1_fu_1006_x = add_ln90_45_fu_4176_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            grp_EP1_fu_1006_x = add_ln90_43_fu_4088_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            grp_EP1_fu_1006_x = add_ln90_41_fu_4017_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            grp_EP1_fu_1006_x = add_ln90_40_fu_3964_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            grp_EP1_fu_1006_x = add_ln90_39_fu_3923_p2.read();
        } else {
            grp_EP1_fu_1006_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_EP1_fu_1006_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_EP1_fu_1011_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_EP1_fu_1011_x = add_ln90_61_reg_6927.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_EP1_fu_1011_x = add_ln90_57_reg_6857.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_EP1_fu_1011_x = add_ln90_53_fu_4531_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        grp_EP1_fu_1011_x = add_ln90_51_fu_4460_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_EP1_fu_1011_x = add_ln90_49_fu_4362_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_EP1_fu_1011_x = add_ln90_47_fu_4260_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_EP1_fu_1011_x = add_ln90_44_fu_4133_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_EP1_fu_1011_x = add_ln90_42_fu_4046_p2.read();
    } else {
        grp_EP1_fu_1011_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_EP1_fu_1016_x() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            grp_EP1_fu_1016_x = add_ln90_62_fu_4902_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            grp_EP1_fu_1016_x = add_ln90_60_reg_6909.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            grp_EP1_fu_1016_x = add_ln90_59_fu_4783_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            grp_EP1_fu_1016_x = add_ln90_58_fu_4740_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            grp_EP1_fu_1016_x = add_ln90_56_fu_4673_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            grp_EP1_fu_1016_x = add_ln90_55_fu_4618_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            grp_EP1_fu_1016_x = add_ln90_54_fu_4576_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            grp_EP1_fu_1016_x = add_ln90_52_fu_4489_p2.read();
        } else {
            grp_EP1_fu_1016_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_EP1_fu_1016_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_EP1_fu_980_x() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            grp_EP1_fu_980_x = add_ln90_10_fu_1956_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            grp_EP1_fu_980_x = add_ln90_8_fu_1842_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            grp_EP1_fu_980_x = add_ln90_6_fu_1744_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            grp_EP1_fu_980_x = add_ln90_5_fu_1662_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            grp_EP1_fu_980_x = add_ln90_3_fu_1547_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            grp_EP1_fu_980_x = add_ln90_1_fu_1434_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            grp_EP1_fu_980_x = add_ln90_fu_1363_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            grp_EP1_fu_980_x = ctx_state_4_read.read();
        } else {
            grp_EP1_fu_980_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_EP1_fu_980_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_EP1_fu_986_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_EP1_fu_986_x = add_ln90_23_fu_3220_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_EP1_fu_986_x = add_ln90_18_fu_2774_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_EP1_fu_986_x = add_ln90_13_fu_2297_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_EP1_fu_986_x = add_ln90_11_fu_2129_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_EP1_fu_986_x = add_ln90_9_fu_1887_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_EP1_fu_986_x = add_ln90_7_fu_1773_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_EP1_fu_986_x = add_ln90_4_fu_1593_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_EP1_fu_986_x = add_ln90_2_fu_1478_p2.read();
    } else {
        grp_EP1_fu_986_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_EP1_fu_991_x() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            grp_EP1_fu_991_x = add_ln90_24_fu_3265_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            grp_EP1_fu_991_x = add_ln90_21_fu_3087_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            grp_EP1_fu_991_x = add_ln90_20_fu_2950_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            grp_EP1_fu_991_x = add_ln90_19_fu_2819_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            grp_EP1_fu_991_x = add_ln90_16_fu_2622_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            grp_EP1_fu_991_x = add_ln90_15_fu_2473_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            grp_EP1_fu_991_x = add_ln90_14_fu_2342_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            grp_EP1_fu_991_x = add_ln90_12_fu_2158_p2.read();
        } else {
            grp_EP1_fu_991_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_EP1_fu_991_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_EP1_fu_996_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_EP1_fu_996_x = add_ln90_36_fu_3807_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_EP1_fu_996_x = add_ln90_33_fu_3664_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_EP1_fu_996_x = add_ln90_31_fu_3593_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_EP1_fu_996_x = add_ln90_28_fu_3450_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_EP1_fu_996_x = add_ln90_26_fu_3379_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        grp_EP1_fu_996_x = add_ln90_25_fu_3324_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_EP1_fu_996_x = add_ln90_22_fu_3116_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_EP1_fu_996_x = add_ln90_17_fu_2651_p2.read();
    } else {
        grp_EP1_fu_996_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_921_x() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_921_x = add_ln94_10_fu_1969_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_921_x = add_ln94_8_fu_1856_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_921_x = add_ln94_6_reg_5456.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_921_x = add_ln94_5_fu_1675_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_921_x = add_ln94_3_fu_1561_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_921_x = add_ln94_1_fu_1446_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_921_x = add_ln94_fu_1377_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_921_x = ctx_state_0_read.read();
        } else {
            grp_MAJ_fu_921_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_MAJ_fu_921_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_921_y() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_921_y = add_ln94_9_reg_5635.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_921_y = add_ln94_7_reg_5540.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_921_y = add_ln94_5_reg_5444.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_921_y = add_ln94_4_reg_5369.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_921_y = add_ln94_2_reg_5282.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_921_y = add_ln94_reg_5200.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_921_y = ctx_state_0_read_1_reg_5070.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_921_y = ctx_state_1_read.read();
        } else {
            grp_MAJ_fu_921_y =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_MAJ_fu_921_y =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_921_z() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_921_z = add_ln94_8_reg_5622.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_921_z = add_ln94_6_reg_5456.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_921_z = add_ln94_4_reg_5369.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_921_z = add_ln94_3_reg_5356.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_921_z = add_ln94_1_reg_5269.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_921_z = ctx_state_0_read_1_reg_5070.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_921_z = ctx_state_1_read_1_reg_5063.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_921_z = ctx_state_2_read.read();
        } else {
            grp_MAJ_fu_921_z =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_MAJ_fu_921_z =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_931_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_931_x = add_ln94_23_fu_3234_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_931_x = add_ln94_18_fu_2788_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_931_x = add_ln94_13_fu_2311_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_MAJ_fu_931_x = add_ln94_11_reg_5725.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_931_x = add_ln94_9_fu_1900_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_931_x = add_ln94_7_fu_1786_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_931_x = add_ln94_4_fu_1606_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_931_x = add_ln94_2_fu_1491_p2.read();
    } else {
        grp_MAJ_fu_931_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_931_y() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_931_y = add_ln94_22_reg_6245.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_931_y = add_ln94_17_reg_6036.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_931_y = add_ln94_12_reg_5806.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_MAJ_fu_931_y = add_ln94_10_reg_5713.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_931_y = add_ln94_8_fu_1856_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_931_y = add_ln94_6_reg_5456.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_931_y = add_ln94_3_fu_1561_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_931_y = add_ln94_1_fu_1446_p2.read();
    } else {
        grp_MAJ_fu_931_y =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_931_z() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_931_z = add_ln94_21_reg_6186.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_931_z = add_ln94_16_reg_5964.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_931_z = add_ln94_11_reg_5725.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_MAJ_fu_931_z = add_ln94_9_reg_5635.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_931_z = add_ln94_7_reg_5540.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_931_z = add_ln94_5_reg_5444.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_931_z = add_ln94_2_reg_5282.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_931_z = add_ln94_reg_5200.read();
    } else {
        grp_MAJ_fu_931_z =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_938_x() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_938_x = add_ln94_24_fu_3278_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_938_x = add_ln94_21_reg_6186.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_938_x = add_ln94_20_fu_2963_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_938_x = add_ln94_19_fu_2832_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_938_x = add_ln94_16_reg_5964.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_938_x = add_ln94_15_fu_2486_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_938_x = add_ln94_14_fu_2355_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_938_x = add_ln94_12_fu_2171_p2.read();
        } else {
            grp_MAJ_fu_938_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_MAJ_fu_938_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_938_y() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_938_y = add_ln94_23_fu_3234_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_938_y = add_ln94_20_reg_6174.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_938_y = add_ln94_19_reg_6117.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_938_y = add_ln94_18_fu_2788_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_938_y = add_ln94_15_reg_5952.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_938_y = add_ln94_14_reg_5884.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_938_y = add_ln94_13_fu_2311_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_938_y = add_ln94_11_reg_5725.read();
        } else {
            grp_MAJ_fu_938_y =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_MAJ_fu_938_y =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_938_z() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_938_z = add_ln94_22_reg_6245.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_938_z = add_ln94_19_reg_6117.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_938_z = add_ln94_18_reg_6104.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_938_z = add_ln94_17_reg_6036.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_938_z = add_ln94_14_reg_5884.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_938_z = add_ln94_13_reg_5871.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_938_z = add_ln94_12_reg_5806.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_938_z = add_ln94_10_reg_5713.read();
        } else {
            grp_MAJ_fu_938_z =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_MAJ_fu_938_z =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_945_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_945_x = add_ln94_36_reg_6495.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_945_x = add_ln94_33_fu_3678_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_945_x = add_ln94_31_reg_6416.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_945_x = add_ln94_28_fu_3464_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_945_x = add_ln94_26_reg_6337.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        grp_MAJ_fu_945_x = add_ln94_25_fu_3337_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_945_x = add_ln94_22_fu_3129_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_945_x = add_ln94_17_fu_2664_p2.read();
    } else {
        grp_MAJ_fu_945_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_945_y() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_945_y = add_ln94_35_reg_6483.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_945_y = add_ln94_32_reg_6438.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_945_y = add_ln94_30_reg_6404.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_945_y = add_ln94_27_reg_6359.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_945_y = add_ln94_25_reg_6325.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        grp_MAJ_fu_945_y = add_ln94_24_reg_6306.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_945_y = add_ln94_21_reg_6186.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_945_y = add_ln94_16_reg_5964.read();
    } else {
        grp_MAJ_fu_945_y =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_945_z() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_945_z = add_ln94_34_reg_6469.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_945_z = add_ln94_31_reg_6416.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_945_z = add_ln94_29_reg_6390.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_945_z = add_ln94_26_reg_6337.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_945_z = add_ln94_24_reg_6306.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        grp_MAJ_fu_945_z = add_ln94_23_reg_6293.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_945_z = add_ln94_20_reg_6174.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_945_z = add_ln94_15_reg_5952.read();
    } else {
        grp_MAJ_fu_945_z =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_952_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        grp_MAJ_fu_952_x = add_ln94_38_fu_3892_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_952_x = add_ln94_37_fu_3849_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_952_x = add_ln94_35_fu_3765_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_952_x = add_ln94_34_fu_3722_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_952_x = add_ln94_32_fu_3635_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_952_x = add_ln94_30_fu_3551_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_952_x = add_ln94_29_fu_3508_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_952_x = add_ln94_27_fu_3421_p2.read();
    } else {
        grp_MAJ_fu_952_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_952_y() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        grp_MAJ_fu_952_y = add_ln94_37_reg_6517.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_952_y = add_ln94_36_reg_6495.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_952_y = add_ln94_34_reg_6469.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_952_y = add_ln94_33_fu_3678_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_952_y = add_ln94_31_reg_6416.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_952_y = add_ln94_29_reg_6390.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_952_y = add_ln94_28_fu_3464_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_952_y = add_ln94_26_reg_6337.read();
    } else {
        grp_MAJ_fu_952_y =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_952_z() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        grp_MAJ_fu_952_z = add_ln94_36_reg_6495.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_952_z = add_ln94_35_reg_6483.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_952_z = add_ln94_33_reg_6456.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_952_z = add_ln94_32_reg_6438.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_952_z = add_ln94_30_reg_6404.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_952_z = add_ln94_28_reg_6377.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_952_z = add_ln94_27_reg_6359.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_952_z = add_ln94_25_reg_6325.read();
    } else {
        grp_MAJ_fu_952_z =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_959_x() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_959_x = add_ln94_50_fu_4418_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_959_x = add_ln94_48_fu_4331_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_959_x = add_ln94_46_reg_6673.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_959_x = add_ln94_45_fu_4189_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_959_x = add_ln94_43_fu_4102_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_959_x = add_ln94_41_reg_6594.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_959_x = add_ln94_40_fu_3976_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_959_x = add_ln94_39_fu_3936_p2.read();
        } else {
            grp_MAJ_fu_959_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_MAJ_fu_959_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_959_y() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_959_y = add_ln94_49_reg_6731.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_959_y = add_ln94_47_reg_6695.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_959_y = add_ln94_45_reg_6661.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_959_y = add_ln94_44_reg_6647.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_959_y = add_ln94_42_reg_6616.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_959_y = add_ln94_40_reg_6582.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_959_y = add_ln94_39_reg_6548.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_959_y = add_ln94_38_fu_3892_p2.read();
        } else {
            grp_MAJ_fu_959_y =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_MAJ_fu_959_y =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_959_z() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_959_z = add_ln94_48_reg_6718.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_959_z = add_ln94_46_reg_6673.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_959_z = add_ln94_44_reg_6647.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_959_z = add_ln94_43_reg_6634.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_959_z = add_ln94_41_reg_6594.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_959_z = add_ln94_39_reg_6548.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_959_z = add_ln94_38_reg_6535.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_959_z = add_ln94_37_reg_6517.read();
        } else {
            grp_MAJ_fu_959_z =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_MAJ_fu_959_z =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_966_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_966_x = add_ln94_61_reg_6935.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_966_x = add_ln94_57_reg_6866.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_966_x = add_ln94_53_fu_4545_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        grp_MAJ_fu_966_x = add_ln94_51_reg_6757.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_966_x = add_ln94_49_fu_4375_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_966_x = add_ln94_47_fu_4273_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_966_x = add_ln94_44_fu_4146_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_966_x = add_ln94_42_fu_4059_p2.read();
    } else {
        grp_MAJ_fu_966_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_966_y() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_966_y = add_ln94_60_reg_6918.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_966_y = add_ln94_56_reg_6841.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_966_y = add_ln94_52_reg_6779.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        grp_MAJ_fu_966_y = add_ln94_50_reg_6745.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_966_y = add_ln94_48_fu_4331_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_966_y = add_ln94_46_reg_6673.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_966_y = add_ln94_43_fu_4102_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_966_y = add_ln94_41_reg_6594.read();
    } else {
        grp_MAJ_fu_966_y =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_966_z() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_966_z = add_ln94_59_reg_6902.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_966_z = add_ln94_55_reg_6829.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_966_z = add_ln94_51_reg_6757.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        grp_MAJ_fu_966_z = add_ln94_49_reg_6731.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_966_z = add_ln94_47_reg_6695.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_966_z = add_ln94_45_reg_6661.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_966_z = add_ln94_42_reg_6616.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_MAJ_fu_966_z = add_ln94_40_reg_6582.read();
    } else {
        grp_MAJ_fu_966_z =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_973_x() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_973_x = add_ln94_62_fu_4915_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_973_x = add_ln94_60_reg_6918.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_973_x = add_ln94_59_fu_4794_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_973_x = add_ln94_58_fu_4753_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_973_x = add_ln94_56_reg_6841.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_973_x = add_ln94_55_fu_4631_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_973_x = add_ln94_54_fu_4589_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_973_x = add_ln94_52_fu_4502_p2.read();
        } else {
            grp_MAJ_fu_973_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_MAJ_fu_973_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_973_y() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_973_y = add_ln94_61_reg_6935.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_973_y = add_ln94_59_reg_6902.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_973_y = add_ln94_58_reg_6882.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_973_y = add_ln94_57_reg_6866.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_973_y = add_ln94_55_reg_6829.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_973_y = add_ln94_54_reg_6810.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_973_y = add_ln94_53_fu_4545_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_973_y = add_ln94_51_reg_6757.read();
        } else {
            grp_MAJ_fu_973_y =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_MAJ_fu_973_y =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_MAJ_fu_973_z() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_973_z = add_ln94_60_reg_6918.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_973_z = add_ln94_58_reg_6882.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_973_z = add_ln94_57_reg_6866.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_973_z = add_ln94_56_reg_6841.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_973_z = add_ln94_54_reg_6810.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_973_z = add_ln94_53_reg_6797.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_973_z = add_ln94_52_reg_6779.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            grp_MAJ_fu_973_z = add_ln94_50_reg_6745.read();
        } else {
            grp_MAJ_fu_973_z =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_MAJ_fu_973_z =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_SIG0_fu_1062_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_SIG0_fu_1062_x = m_14_fu_2011_p5.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_1062_x = m_12_fu_1908_p5.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_1062_x = m_10_fu_1806_p5.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_1062_x = m_8_fu_1718_p5.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_1062_x = m_6_fu_1614_p5.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_1062_x = m_4_fu_1511_p5.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_1062_x = m_2_fu_1408_p5.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_1062_x = m_1_fu_1328_p5.read();
    } else {
        grp_SIG0_fu_1062_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_SIG0_fu_1067_x() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_1067_x = m_20_reg_5775.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_SIG0_fu_1067_x = m_15_fu_2025_p5.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_1067_x = m_13_fu_1921_p5.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_1067_x = m_11_fu_1819_p5.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_1067_x = m_9_fu_1731_p5.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_1067_x = m_7_fu_1627_p5.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_1067_x = m_5_fu_1524_p5.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_SIG0_fu_1067_x = m_3_fu_1421_p5.read();
    } else {
        grp_SIG0_fu_1067_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_SIG0_fu_1072_x() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            grp_SIG0_fu_1072_x = m_45_reg_6089.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            grp_SIG0_fu_1072_x = m_41_reg_6056.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            grp_SIG0_fu_1072_x = m_37_reg_5997.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            grp_SIG0_fu_1072_x = m_33_reg_5931.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            grp_SIG0_fu_1072_x = m_29_reg_5898.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            grp_SIG0_fu_1072_x = m_25_reg_5839.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            grp_SIG0_fu_1072_x = m_21_reg_5784.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            grp_SIG0_fu_1072_x = m_16_fu_2048_p2.read();
        } else {
            grp_SIG0_fu_1072_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_SIG0_fu_1072_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_SIG0_fu_1077_x() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            grp_SIG0_fu_1077_x = m_46_reg_6124.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            grp_SIG0_fu_1077_x = m_42_reg_6064.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            grp_SIG0_fu_1077_x = m_38_reg_6005.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            grp_SIG0_fu_1077_x = m_34_reg_5973.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            grp_SIG0_fu_1077_x = m_30_reg_5906.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            grp_SIG0_fu_1077_x = m_26_reg_5847.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            grp_SIG0_fu_1077_x = m_22_fu_2198_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            grp_SIG0_fu_1077_x = m_17_fu_2060_p2.read();
        } else {
            grp_SIG0_fu_1077_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_SIG0_fu_1077_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_SIG0_fu_1082_x() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            grp_SIG0_fu_1082_x = m_47_reg_6132.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            grp_SIG0_fu_1082_x = m_43_reg_6072.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            grp_SIG0_fu_1082_x = m_39_reg_6014.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            grp_SIG0_fu_1082_x = m_35_reg_5981.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            grp_SIG0_fu_1082_x = m_31_reg_5914.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            grp_SIG0_fu_1082_x = m_27_reg_5856.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            grp_SIG0_fu_1082_x = m_23_fu_2215_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            grp_SIG0_fu_1082_x = m_18_fu_2072_p2.read();
        } else {
            grp_SIG0_fu_1082_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_SIG0_fu_1082_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_SIG0_fu_1087_x() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            grp_SIG0_fu_1087_x = m_48_reg_6140.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            grp_SIG0_fu_1087_x = m_44_reg_6080.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            grp_SIG0_fu_1087_x = m_40_reg_6048.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            grp_SIG0_fu_1087_x = m_36_reg_5989.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            grp_SIG0_fu_1087_x = m_32_reg_5922.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            grp_SIG0_fu_1087_x = m_28_fu_2372_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            grp_SIG0_fu_1087_x = m_24_fu_2232_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            grp_SIG0_fu_1087_x = m_19_fu_2089_p2.read();
        } else {
            grp_SIG0_fu_1087_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_SIG0_fu_1087_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_SIG1_fu_1092_x() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1092_x = m_56_reg_6219.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1092_x = m_50_reg_6153.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1092_x = m_44_reg_6080.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1092_x = m_38_reg_6005.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1092_x = m_32_reg_5922.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1092_x = m_26_reg_5847.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1092_x = m_20_reg_5775.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1092_x = m_14_fu_2011_p5.read();
        } else {
            grp_SIG1_fu_1092_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_SIG1_fu_1092_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_SIG1_fu_1097_x() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1097_x = m_57_reg_6226.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1097_x = m_51_reg_6160.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1097_x = m_45_reg_6089.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1097_x = m_39_reg_6014.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1097_x = m_33_reg_5931.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1097_x = m_27_reg_5856.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1097_x = m_21_reg_5784.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1097_x = m_15_fu_2025_p5.read();
        } else {
            grp_SIG1_fu_1097_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_SIG1_fu_1097_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_SIG1_fu_1102_x() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1102_x = m_58_fu_3158_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1102_x = m_52_fu_3009_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1102_x = m_46_fu_2850_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1102_x = m_40_fu_2687_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1102_x = m_34_fu_2538_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1102_x = m_28_fu_2372_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1102_x = m_22_fu_2198_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1102_x = m_16_fu_2048_p2.read();
        } else {
            grp_SIG1_fu_1102_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_SIG1_fu_1102_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_SIG1_fu_1107_x() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1107_x = m_59_fu_3169_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1107_x = m_53_fu_3020_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1107_x = m_47_fu_2861_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1107_x = m_41_fu_2698_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1107_x = m_35_fu_2555_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1107_x = m_29_fu_2384_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1107_x = m_23_fu_2215_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1107_x = m_17_fu_2060_p2.read();
        } else {
            grp_SIG1_fu_1107_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_SIG1_fu_1107_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_SIG1_fu_1112_x() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1112_x = m_60_fu_3186_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1112_x = m_54_fu_3031_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1112_x = m_48_fu_2878_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1112_x = m_42_fu_2709_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1112_x = m_36_fu_2572_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1112_x = m_30_fu_2395_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1112_x = m_24_fu_2232_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1112_x = m_18_fu_2072_p2.read();
        } else {
            grp_SIG1_fu_1112_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_SIG1_fu_1112_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_SIG1_fu_1117_x() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1117_x = m_61_fu_3203_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage6.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1117_x = m_55_fu_3048_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1117_x = m_49_fu_2895_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage4.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1117_x = m_43_fu_2725_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1117_x = m_37_fu_2589_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1117_x = m_31_fu_2412_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1117_x = m_25_fu_2249_p2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            grp_SIG1_fu_1117_x = m_19_fu_2089_p2.read();
        } else {
            grp_SIG1_fu_1117_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_SIG1_fu_1117_x =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha256_transform::thread_grp_fu_1286_p2() {
    grp_fu_1286_p2 = (!grp_SIG1_fu_1117_ap_return.read().is_01() || !reg_1198.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_SIG1_fu_1117_ap_return.read()) + sc_biguint<32>(reg_1198.read()));
}

void sha256_transform::thread_grp_fu_1292_p2() {
    grp_fu_1292_p2 = (!grp_SIG1_fu_1092_ap_return.read().is_01() || !reg_1158.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_SIG1_fu_1092_ap_return.read()) + sc_biguint<32>(reg_1158.read()));
}

void sha256_transform::thread_grp_fu_1298_p2() {
    grp_fu_1298_p2 = (!grp_SIG1_fu_1097_ap_return.read().is_01() || !reg_1162.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_SIG1_fu_1097_ap_return.read()) + sc_biguint<32>(reg_1162.read()));
}

void sha256_transform::thread_grp_fu_1304_p2() {
    grp_fu_1304_p2 = (!grp_SIG1_fu_1102_ap_return.read().is_01() || !reg_1166.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_SIG1_fu_1102_ap_return.read()) + sc_biguint<32>(reg_1166.read()));
}

void sha256_transform::thread_grp_fu_1310_p2() {
    grp_fu_1310_p2 = (!grp_SIG1_fu_1097_ap_return.read().is_01() || !reg_1170.read().is_01())? sc_lv<32>(): (sc_biguint<32>(grp_SIG1_fu_1097_ap_return.read()) + sc_biguint<32>(reg_1170.read()));
}

void sha256_transform::thread_m_0_fu_1316_p5() {
    m_0_fu_1316_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(data_0_q0.read(), data_1_q0.read()), data_2_q0.read()), data_3_q0.read());
}

void sha256_transform::thread_m_10_fu_1806_p5() {
    m_10_fu_1806_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(data_0_q0.read(), data_1_q0.read()), data_2_q0.read()), data_3_q0.read());
}

void sha256_transform::thread_m_11_fu_1819_p5() {
    m_11_fu_1819_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(data_0_q1.read(), data_1_q1.read()), data_2_q1.read()), data_3_q1.read());
}

void sha256_transform::thread_m_12_fu_1908_p5() {
    m_12_fu_1908_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(data_0_q0.read(), data_1_q0.read()), data_2_q0.read()), data_3_q0.read());
}

void sha256_transform::thread_m_13_fu_1921_p5() {
    m_13_fu_1921_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(data_0_q1.read(), data_1_q1.read()), data_2_q1.read()), data_3_q1.read());
}

void sha256_transform::thread_m_14_fu_2011_p5() {
    m_14_fu_2011_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(data_0_q0.read(), data_1_q0.read()), data_2_q0.read()), data_3_q0.read());
}

void sha256_transform::thread_m_15_fu_2025_p5() {
    m_15_fu_2025_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(data_0_q1.read(), data_1_q1.read()), data_2_q1.read()), data_3_q1.read());
}

void sha256_transform::thread_m_16_fu_2048_p2() {
    m_16_fu_2048_p2 = (!add_ln72_1_fu_2044_p2.read().is_01() || !add_ln72_fu_2039_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln72_1_fu_2044_p2.read()) + sc_biguint<32>(add_ln72_fu_2039_p2.read()));
}

void sha256_transform::thread_m_17_fu_2060_p2() {
    m_17_fu_2060_p2 = (!add_ln72_4_fu_2056_p2.read().is_01() || !add_ln72_3_fu_1262_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln72_4_fu_2056_p2.read()) + sc_biguint<32>(add_ln72_3_fu_1262_p2.read()));
}

void sha256_transform::thread_m_18_fu_2072_p2() {
    m_18_fu_2072_p2 = (!add_ln72_7_fu_2068_p2.read().is_01() || !add_ln72_6_fu_1274_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln72_7_fu_2068_p2.read()) + sc_biguint<32>(add_ln72_6_fu_1274_p2.read()));
}

void sha256_transform::thread_m_19_fu_2089_p2() {
    m_19_fu_2089_p2 = (!add_ln72_10_fu_2085_p2.read().is_01() || !add_ln72_9_fu_2080_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln72_10_fu_2085_p2.read()) + sc_biguint<32>(add_ln72_9_fu_2080_p2.read()));
}

void sha256_transform::thread_m_1_fu_1328_p5() {
    m_1_fu_1328_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(data_0_q1.read(), data_1_q1.read()), data_2_q1.read()), data_3_q1.read());
}

void sha256_transform::thread_m_20_fu_2107_p2() {
    m_20_fu_2107_p2 = (!add_ln72_13_fu_2103_p2.read().is_01() || !add_ln72_12_fu_2097_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln72_13_fu_2103_p2.read()) + sc_biguint<32>(add_ln72_12_fu_2097_p2.read()));
}

void sha256_transform::thread_m_21_fu_2123_p2() {
    m_21_fu_2123_p2 = (!add_ln72_16_fu_2118_p2.read().is_01() || !add_ln72_15_fu_2113_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln72_16_fu_2118_p2.read()) + sc_biguint<32>(add_ln72_15_fu_2113_p2.read()));
}

void sha256_transform::thread_m_22_fu_2198_p2() {
    m_22_fu_2198_p2 = (!add_ln72_19_fu_2194_p2.read().is_01() || !add_ln72_18_fu_2189_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln72_19_fu_2194_p2.read()) + sc_biguint<32>(add_ln72_18_fu_2189_p2.read()));
}

void sha256_transform::thread_m_23_fu_2215_p2() {
    m_23_fu_2215_p2 = (!add_ln72_22_fu_2211_p2.read().is_01() || !add_ln72_21_fu_2206_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln72_22_fu_2211_p2.read()) + sc_biguint<32>(add_ln72_21_fu_2206_p2.read()));
}

void sha256_transform::thread_m_24_fu_2232_p2() {
    m_24_fu_2232_p2 = (!add_ln72_25_fu_2228_p2.read().is_01() || !add_ln72_24_fu_2223_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln72_25_fu_2228_p2.read()) + sc_biguint<32>(add_ln72_24_fu_2223_p2.read()));
}

void sha256_transform::thread_m_25_fu_2249_p2() {
    m_25_fu_2249_p2 = (!add_ln72_28_fu_2245_p2.read().is_01() || !add_ln72_27_fu_2240_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln72_28_fu_2245_p2.read()) + sc_biguint<32>(add_ln72_27_fu_2240_p2.read()));
}

void sha256_transform::thread_m_26_fu_2265_p2() {
    m_26_fu_2265_p2 = (!add_ln72_31_fu_2261_p2.read().is_01() || !add_ln72_30_fu_2256_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln72_31_fu_2261_p2.read()) + sc_biguint<32>(add_ln72_30_fu_2256_p2.read()));
}

void sha256_transform::thread_m_27_fu_2280_p2() {
    m_27_fu_2280_p2 = (!add_ln72_34_fu_2276_p2.read().is_01() || !add_ln72_33_fu_2271_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln72_34_fu_2276_p2.read()) + sc_biguint<32>(add_ln72_33_fu_2271_p2.read()));
}

void sha256_transform::thread_m_28_fu_2372_p2() {
    m_28_fu_2372_p2 = (!add_ln72_37_fu_2368_p2.read().is_01() || !add_ln72_36_fu_2363_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln72_37_fu_2368_p2.read()) + sc_biguint<32>(add_ln72_36_fu_2363_p2.read()));
}

void sha256_transform::thread_m_29_fu_2384_p2() {
    m_29_fu_2384_p2 = (!add_ln72_40_fu_2380_p2.read().is_01() || !add_ln72_39_fu_1268_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln72_40_fu_2380_p2.read()) + sc_biguint<32>(add_ln72_39_fu_1268_p2.read()));
}

void sha256_transform::thread_m_2_fu_1408_p5() {
    m_2_fu_1408_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(data_0_q0.read(), data_1_q0.read()), data_2_q0.read()), data_3_q0.read());
}

void sha256_transform::thread_m_30_fu_2395_p2() {
    m_30_fu_2395_p2 = (!add_ln72_43_fu_2391_p2.read().is_01() || !add_ln72_42_fu_1280_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln72_43_fu_2391_p2.read()) + sc_biguint<32>(add_ln72_42_fu_1280_p2.read()));
}

void sha256_transform::thread_m_31_fu_2412_p2() {
    m_31_fu_2412_p2 = (!add_ln72_46_fu_2408_p2.read().is_01() || !add_ln72_45_fu_2402_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln72_46_fu_2408_p2.read()) + sc_biguint<32>(add_ln72_45_fu_2402_p2.read()));
}

void sha256_transform::thread_m_32_fu_2429_p2() {
    m_32_fu_2429_p2 = (!add_ln72_49_fu_2425_p2.read().is_01() || !add_ln72_48_fu_2419_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln72_49_fu_2425_p2.read()) + sc_biguint<32>(add_ln72_48_fu_2419_p2.read()));
}

void sha256_transform::thread_m_33_fu_2445_p2() {
    m_33_fu_2445_p2 = (!add_ln72_52_fu_2441_p2.read().is_01() || !add_ln72_51_fu_2435_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln72_52_fu_2441_p2.read()) + sc_biguint<32>(add_ln72_51_fu_2435_p2.read()));
}

void sha256_transform::thread_m_34_fu_2538_p2() {
    m_34_fu_2538_p2 = (!add_ln72_55_fu_2534_p2.read().is_01() || !add_ln72_54_fu_2528_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln72_55_fu_2534_p2.read()) + sc_biguint<32>(add_ln72_54_fu_2528_p2.read()));
}

void sha256_transform::thread_m_35_fu_2555_p2() {
    m_35_fu_2555_p2 = (!add_ln72_58_fu_2551_p2.read().is_01() || !add_ln72_57_fu_2545_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln72_58_fu_2551_p2.read()) + sc_biguint<32>(add_ln72_57_fu_2545_p2.read()));
}

void sha256_transform::thread_m_36_fu_2572_p2() {
    m_36_fu_2572_p2 = (!add_ln72_61_fu_2568_p2.read().is_01() || !add_ln72_60_fu_2562_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln72_61_fu_2568_p2.read()) + sc_biguint<32>(add_ln72_60_fu_2562_p2.read()));
}

void sha256_transform::thread_m_37_fu_2589_p2() {
    m_37_fu_2589_p2 = (!add_ln72_64_fu_2585_p2.read().is_01() || !add_ln72_63_fu_2579_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln72_64_fu_2585_p2.read()) + sc_biguint<32>(add_ln72_63_fu_2579_p2.read()));
}

void sha256_transform::thread_m_38_fu_2606_p2() {
    m_38_fu_2606_p2 = (!add_ln72_67_fu_2602_p2.read().is_01() || !add_ln72_66_fu_2596_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln72_67_fu_2602_p2.read()) + sc_biguint<32>(add_ln72_66_fu_2596_p2.read()));
}

void sha256_transform::thread_m_39_fu_2616_p2() {
    m_39_fu_2616_p2 = (!add_ln72_70_fu_2612_p2.read().is_01() || !grp_fu_1286_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln72_70_fu_2612_p2.read()) + sc_biguint<32>(grp_fu_1286_p2.read()));
}

void sha256_transform::thread_m_3_fu_1421_p5() {
    m_3_fu_1421_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(data_0_q1.read(), data_1_q1.read()), data_2_q1.read()), data_3_q1.read());
}

void sha256_transform::thread_m_40_fu_2687_p2() {
    m_40_fu_2687_p2 = (!add_ln72_73_fu_2683_p2.read().is_01() || !grp_fu_1292_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln72_73_fu_2683_p2.read()) + sc_biguint<32>(grp_fu_1292_p2.read()));
}

void sha256_transform::thread_m_41_fu_2698_p2() {
    m_41_fu_2698_p2 = (!add_ln72_76_fu_2694_p2.read().is_01() || !grp_fu_1298_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln72_76_fu_2694_p2.read()) + sc_biguint<32>(grp_fu_1298_p2.read()));
}

void sha256_transform::thread_m_42_fu_2709_p2() {
    m_42_fu_2709_p2 = (!add_ln72_79_fu_2705_p2.read().is_01() || !grp_fu_1304_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln72_79_fu_2705_p2.read()) + sc_biguint<32>(grp_fu_1304_p2.read()));
}

void sha256_transform::thread_m_43_fu_2725_p2() {
    m_43_fu_2725_p2 = (!add_ln72_82_fu_2721_p2.read().is_01() || !add_ln72_81_fu_2716_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln72_82_fu_2721_p2.read()) + sc_biguint<32>(add_ln72_81_fu_2716_p2.read()));
}

void sha256_transform::thread_m_44_fu_2742_p2() {
    m_44_fu_2742_p2 = (!add_ln72_85_fu_2738_p2.read().is_01() || !add_ln72_84_fu_2732_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln72_85_fu_2738_p2.read()) + sc_biguint<32>(add_ln72_84_fu_2732_p2.read()));
}

void sha256_transform::thread_m_45_fu_2758_p2() {
    m_45_fu_2758_p2 = (!add_ln72_88_fu_2754_p2.read().is_01() || !add_ln72_87_fu_2748_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln72_88_fu_2754_p2.read()) + sc_biguint<32>(add_ln72_87_fu_2748_p2.read()));
}

void sha256_transform::thread_m_46_fu_2850_p2() {
    m_46_fu_2850_p2 = (!add_ln72_91_fu_2846_p2.read().is_01() || !add_ln72_90_fu_2840_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln72_91_fu_2846_p2.read()) + sc_biguint<32>(add_ln72_90_fu_2840_p2.read()));
}

void sha256_transform::thread_m_47_fu_2861_p2() {
    m_47_fu_2861_p2 = (!add_ln72_94_fu_2857_p2.read().is_01() || !grp_fu_1310_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln72_94_fu_2857_p2.read()) + sc_biguint<32>(grp_fu_1310_p2.read()));
}

void sha256_transform::thread_m_48_fu_2878_p2() {
    m_48_fu_2878_p2 = (!add_ln72_97_fu_2874_p2.read().is_01() || !add_ln72_96_fu_2868_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln72_97_fu_2874_p2.read()) + sc_biguint<32>(add_ln72_96_fu_2868_p2.read()));
}

void sha256_transform::thread_m_49_fu_2895_p2() {
    m_49_fu_2895_p2 = (!add_ln72_100_fu_2891_p2.read().is_01() || !add_ln72_99_fu_2885_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln72_100_fu_2891_p2.read()) + sc_biguint<32>(add_ln72_99_fu_2885_p2.read()));
}

void sha256_transform::thread_m_4_fu_1511_p5() {
    m_4_fu_1511_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(data_0_q0.read(), data_1_q0.read()), data_2_q0.read()), data_3_q0.read());
}

void sha256_transform::thread_m_50_fu_2912_p2() {
    m_50_fu_2912_p2 = (!add_ln72_103_fu_2908_p2.read().is_01() || !add_ln72_102_fu_2902_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln72_103_fu_2908_p2.read()) + sc_biguint<32>(add_ln72_102_fu_2902_p2.read()));
}

void sha256_transform::thread_m_51_fu_2922_p2() {
    m_51_fu_2922_p2 = (!add_ln72_106_fu_2918_p2.read().is_01() || !grp_fu_1286_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln72_106_fu_2918_p2.read()) + sc_biguint<32>(grp_fu_1286_p2.read()));
}

void sha256_transform::thread_m_52_fu_3009_p2() {
    m_52_fu_3009_p2 = (!add_ln72_109_fu_3005_p2.read().is_01() || !grp_fu_1292_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln72_109_fu_3005_p2.read()) + sc_biguint<32>(grp_fu_1292_p2.read()));
}

void sha256_transform::thread_m_53_fu_3020_p2() {
    m_53_fu_3020_p2 = (!add_ln72_112_fu_3016_p2.read().is_01() || !grp_fu_1298_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln72_112_fu_3016_p2.read()) + sc_biguint<32>(grp_fu_1298_p2.read()));
}

void sha256_transform::thread_m_54_fu_3031_p2() {
    m_54_fu_3031_p2 = (!add_ln72_115_fu_3027_p2.read().is_01() || !grp_fu_1304_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln72_115_fu_3027_p2.read()) + sc_biguint<32>(grp_fu_1304_p2.read()));
}

void sha256_transform::thread_m_55_fu_3048_p2() {
    m_55_fu_3048_p2 = (!add_ln72_118_fu_3044_p2.read().is_01() || !add_ln72_117_fu_3038_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln72_118_fu_3044_p2.read()) + sc_biguint<32>(add_ln72_117_fu_3038_p2.read()));
}

void sha256_transform::thread_m_56_fu_3065_p2() {
    m_56_fu_3065_p2 = (!add_ln72_121_fu_3061_p2.read().is_01() || !add_ln72_120_fu_3055_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln72_121_fu_3061_p2.read()) + sc_biguint<32>(add_ln72_120_fu_3055_p2.read()));
}

void sha256_transform::thread_m_57_fu_3081_p2() {
    m_57_fu_3081_p2 = (!add_ln72_124_fu_3077_p2.read().is_01() || !add_ln72_123_fu_3071_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln72_124_fu_3077_p2.read()) + sc_biguint<32>(add_ln72_123_fu_3071_p2.read()));
}

void sha256_transform::thread_m_58_fu_3158_p2() {
    m_58_fu_3158_p2 = (!add_ln72_127_fu_3154_p2.read().is_01() || !add_ln72_126_fu_3148_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln72_127_fu_3154_p2.read()) + sc_biguint<32>(add_ln72_126_fu_3148_p2.read()));
}

void sha256_transform::thread_m_59_fu_3169_p2() {
    m_59_fu_3169_p2 = (!add_ln72_130_fu_3165_p2.read().is_01() || !grp_fu_1310_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln72_130_fu_3165_p2.read()) + sc_biguint<32>(grp_fu_1310_p2.read()));
}

void sha256_transform::thread_m_5_fu_1524_p5() {
    m_5_fu_1524_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(data_0_q1.read(), data_1_q1.read()), data_2_q1.read()), data_3_q1.read());
}

void sha256_transform::thread_m_60_fu_3186_p2() {
    m_60_fu_3186_p2 = (!add_ln72_133_fu_3182_p2.read().is_01() || !add_ln72_132_fu_3176_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln72_133_fu_3182_p2.read()) + sc_biguint<32>(add_ln72_132_fu_3176_p2.read()));
}

void sha256_transform::thread_m_61_fu_3203_p2() {
    m_61_fu_3203_p2 = (!add_ln72_136_fu_3199_p2.read().is_01() || !add_ln72_135_fu_3193_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln72_136_fu_3199_p2.read()) + sc_biguint<32>(add_ln72_135_fu_3193_p2.read()));
}

void sha256_transform::thread_m_6_fu_1614_p5() {
    m_6_fu_1614_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(data_0_q0.read(), data_1_q0.read()), data_2_q0.read()), data_3_q0.read());
}

void sha256_transform::thread_m_7_fu_1627_p5() {
    m_7_fu_1627_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(data_0_q1.read(), data_1_q1.read()), data_2_q1.read()), data_3_q1.read());
}

void sha256_transform::thread_m_8_fu_1718_p5() {
    m_8_fu_1718_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(data_0_q0.read(), data_1_q0.read()), data_2_q0.read()), data_3_q0.read());
}

void sha256_transform::thread_m_9_fu_1731_p5() {
    m_9_fu_1731_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(data_0_q1.read(), data_1_q1.read()), data_2_q1.read()), data_3_q1.read());
}

}

