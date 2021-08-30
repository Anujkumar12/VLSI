#include "sha256_transform.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void sha256_transform::thread_add_ln40_100_fu_15186_p2() {
    add_ln40_100_fu_15186_p2 = (!m_42_reg_26131.read().is_01() || !m_33_reg_25855.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_42_reg_26131.read()) + sc_biguint<32>(m_33_reg_25855.read()));
}

void sha256_transform::thread_add_ln40_102_fu_15633_p2() {
    add_ln40_102_fu_15633_p2 = (!xor_ln40_137_reg_26334.read().is_01() || !xor_ln40_139_reg_25917.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln40_137_reg_26334.read()) + sc_biguint<32>(xor_ln40_139_reg_25917.read()));
}

void sha256_transform::thread_add_ln40_103_fu_15637_p2() {
    add_ln40_103_fu_15637_p2 = (!m_43_reg_26138.read().is_01() || !m_34_reg_25888.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_43_reg_26138.read()) + sc_biguint<32>(m_34_reg_25888.read()));
}

void sha256_transform::thread_add_ln40_105_fu_15647_p2() {
    add_ln40_105_fu_15647_p2 = (!xor_ln40_141_reg_26339.read().is_01() || !xor_ln40_143_reg_25978.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln40_141_reg_26339.read()) + sc_biguint<32>(xor_ln40_143_reg_25978.read()));
}

void sha256_transform::thread_add_ln40_106_fu_15651_p2() {
    add_ln40_106_fu_15651_p2 = (!m_44_reg_26202.read().is_01() || !m_35_reg_25895.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_44_reg_26202.read()) + sc_biguint<32>(m_35_reg_25895.read()));
}

void sha256_transform::thread_add_ln40_108_fu_15821_p2() {
    add_ln40_108_fu_15821_p2 = (!xor_ln40_145_reg_26398.read().is_01() || !xor_ln40_147_reg_25983.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln40_145_reg_26398.read()) + sc_biguint<32>(xor_ln40_147_reg_25983.read()));
}

void sha256_transform::thread_add_ln40_109_fu_15825_p2() {
    add_ln40_109_fu_15825_p2 = (!m_45_reg_26209.read().is_01() || !m_36_reg_25954.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_45_reg_26209.read()) + sc_biguint<32>(m_36_reg_25954.read()));
}

void sha256_transform::thread_add_ln40_10_fu_7463_p2() {
    add_ln40_10_fu_7463_p2 = (!m_12_reg_24929.read().is_01() || !m_3_reg_24345.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_12_reg_24929.read()) + sc_biguint<32>(m_3_reg_24345.read()));
}

void sha256_transform::thread_add_ln40_111_fu_15835_p2() {
    add_ln40_111_fu_15835_p2 = (!xor_ln40_149_reg_26403.read().is_01() || !xor_ln40_151_reg_26049.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln40_149_reg_26403.read()) + sc_biguint<32>(xor_ln40_151_reg_26049.read()));
}

void sha256_transform::thread_add_ln40_112_fu_15839_p2() {
    add_ln40_112_fu_15839_p2 = (!m_46_reg_26252.read().is_01() || !m_37_reg_25961.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_46_reg_26252.read()) + sc_biguint<32>(m_37_reg_25961.read()));
}

void sha256_transform::thread_add_ln40_114_fu_16211_p2() {
    add_ln40_114_fu_16211_p2 = (!xor_ln40_153_reg_26426.read().is_01() || !xor_ln40_155_reg_26054.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln40_153_reg_26426.read()) + sc_biguint<32>(xor_ln40_155_reg_26054.read()));
}

void sha256_transform::thread_add_ln40_115_fu_16215_p2() {
    add_ln40_115_fu_16215_p2 = (!m_47_reg_26258.read().is_01() || !m_38_reg_26025.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_47_reg_26258.read()) + sc_biguint<32>(m_38_reg_26025.read()));
}

void sha256_transform::thread_add_ln40_117_fu_16225_p2() {
    add_ln40_117_fu_16225_p2 = (!xor_ln40_157_reg_26431.read().is_01() || !xor_ln40_159_reg_26089.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln40_157_reg_26431.read()) + sc_biguint<32>(xor_ln40_159_reg_26089.read()));
}

void sha256_transform::thread_add_ln40_118_fu_16229_p2() {
    add_ln40_118_fu_16229_p2 = (!m_48_reg_26322.read().is_01() || !m_39_reg_26032.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_48_reg_26322.read()) + sc_biguint<32>(m_39_reg_26032.read()));
}

void sha256_transform::thread_add_ln40_120_fu_16600_p2() {
    add_ln40_120_fu_16600_p2 = (!xor_ln40_161_reg_26480.read().is_01() || !xor_ln40_163_reg_26094.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln40_161_reg_26480.read()) + sc_biguint<32>(xor_ln40_163_reg_26094.read()));
}

void sha256_transform::thread_add_ln40_121_fu_16604_p2() {
    add_ln40_121_fu_16604_p2 = (!m_49_reg_26328.read().is_01() || !m_40_reg_26065.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_49_reg_26328.read()) + sc_biguint<32>(m_40_reg_26065.read()));
}

void sha256_transform::thread_add_ln40_123_fu_16614_p2() {
    add_ln40_123_fu_16614_p2 = (!xor_ln40_165_reg_26485.read().is_01() || !xor_ln40_167_reg_26155.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln40_165_reg_26485.read()) + sc_biguint<32>(xor_ln40_167_reg_26155.read()));
}

void sha256_transform::thread_add_ln40_124_fu_16618_p2() {
    add_ln40_124_fu_16618_p2 = (!m_50_reg_26386.read().is_01() || !m_41_reg_26072.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_50_reg_26386.read()) + sc_biguint<32>(m_41_reg_26072.read()));
}

void sha256_transform::thread_add_ln40_126_fu_16788_p2() {
    add_ln40_126_fu_16788_p2 = (!xor_ln40_169_reg_26538.read().is_01() || !xor_ln40_171_reg_26160.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln40_169_reg_26538.read()) + sc_biguint<32>(xor_ln40_171_reg_26160.read()));
}

void sha256_transform::thread_add_ln40_127_fu_16792_p2() {
    add_ln40_127_fu_16792_p2 = (!m_51_reg_26392.read().is_01() || !m_42_reg_26131.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_51_reg_26392.read()) + sc_biguint<32>(m_42_reg_26131.read()));
}

void sha256_transform::thread_add_ln40_129_fu_16802_p2() {
    add_ln40_129_fu_16802_p2 = (!xor_ln40_173_reg_26543.read().is_01() || !xor_ln40_175_reg_26236.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln40_173_reg_26543.read()) + sc_biguint<32>(xor_ln40_175_reg_26236.read()));
}

void sha256_transform::thread_add_ln40_12_fu_7858_p2() {
    add_ln40_12_fu_7858_p2 = (!xor_ln40_17_reg_25227.read().is_01() || !xor_ln40_19_reg_24104.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln40_17_reg_25227.read()) + sc_biguint<32>(xor_ln40_19_reg_24104.read()));
}

void sha256_transform::thread_add_ln40_130_fu_16806_p2() {
    add_ln40_130_fu_16806_p2 = (!m_52_reg_26414.read().is_01() || !m_43_reg_26138.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_52_reg_26414.read()) + sc_biguint<32>(m_43_reg_26138.read()));
}

void sha256_transform::thread_add_ln40_132_fu_17187_p2() {
    add_ln40_132_fu_17187_p2 = (!xor_ln40_177_reg_26564.read().is_01() || !xor_ln40_179_reg_26241.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln40_177_reg_26564.read()) + sc_biguint<32>(xor_ln40_179_reg_26241.read()));
}

void sha256_transform::thread_add_ln40_133_fu_17191_p2() {
    add_ln40_133_fu_17191_p2 = (!m_53_reg_26420.read().is_01() || !m_44_reg_26202.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_53_reg_26420.read()) + sc_biguint<32>(m_44_reg_26202.read()));
}

void sha256_transform::thread_add_ln40_135_fu_17201_p2() {
    add_ln40_135_fu_17201_p2 = (!xor_ln40_181_reg_26569.read().is_01() || !xor_ln40_183_reg_26280.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln40_181_reg_26569.read()) + sc_biguint<32>(xor_ln40_183_reg_26280.read()));
}

void sha256_transform::thread_add_ln40_136_fu_17205_p2() {
    add_ln40_136_fu_17205_p2 = (!m_54_reg_26468.read().is_01() || !m_45_reg_26209.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_54_reg_26468.read()) + sc_biguint<32>(m_45_reg_26209.read()));
}

void sha256_transform::thread_add_ln40_13_fu_7834_p2() {
    add_ln40_13_fu_7834_p2 = (!m_13_reg_25004.read().is_01() || !m_4_reg_24441.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_13_reg_25004.read()) + sc_biguint<32>(m_4_reg_24441.read()));
}

void sha256_transform::thread_add_ln40_15_fu_8230_p2() {
    add_ln40_15_fu_8230_p2 = (!xor_ln40_21_reg_25276.read().is_01() || !xor_ln40_23_reg_24187.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln40_21_reg_25276.read()) + sc_biguint<32>(xor_ln40_23_reg_24187.read()));
}

void sha256_transform::thread_add_ln40_16_fu_8234_p2() {
    add_ln40_16_fu_8234_p2 = (!m_14_reg_25016.read().is_01() || !m_5_reg_24645.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_14_reg_25016.read()) + sc_biguint<32>(m_5_reg_24645.read()));
}

void sha256_transform::thread_add_ln40_18_fu_8633_p2() {
    add_ln40_18_fu_8633_p2 = (!xor_ln40_25_reg_25340.read().is_01() || !xor_ln40_27_reg_24192.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln40_25_reg_25340.read()) + sc_biguint<32>(xor_ln40_27_reg_24192.read()));
}

void sha256_transform::thread_add_ln40_19_fu_8605_p2() {
    add_ln40_19_fu_8605_p2 = (!m_15_reg_25091.read().is_01() || !m_6_reg_24671.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_15_reg_25091.read()) + sc_biguint<32>(m_6_reg_24671.read()));
}

void sha256_transform::thread_add_ln40_1_fu_6291_p2() {
    add_ln40_1_fu_6291_p2 = (!m_9_reg_24830.read().is_01() || !m_0_reg_23892.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_9_reg_24830.read()) + sc_biguint<32>(m_0_reg_23892.read()));
}

void sha256_transform::thread_add_ln40_21_fu_9005_p2() {
    add_ln40_21_fu_9005_p2 = (!xor_ln40_29_reg_25389.read().is_01() || !xor_ln40_31_reg_24303.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln40_29_reg_25389.read()) + sc_biguint<32>(xor_ln40_31_reg_24303.read()));
}

void sha256_transform::thread_add_ln40_22_fu_9009_p2() {
    add_ln40_22_fu_9009_p2 = (!m_16_reg_25108.read().is_01() || !m_7_reg_24745.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_16_reg_25108.read()) + sc_biguint<32>(m_7_reg_24745.read()));
}

void sha256_transform::thread_add_ln40_24_fu_9404_p2() {
    add_ln40_24_fu_9404_p2 = (!xor_ln40_33_reg_25458.read().is_01() || !xor_ln40_35_reg_24308.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln40_33_reg_25458.read()) + sc_biguint<32>(xor_ln40_35_reg_24308.read()));
}

void sha256_transform::thread_add_ln40_25_fu_9380_p2() {
    add_ln40_25_fu_9380_p2 = (!m_17_reg_25156.read().is_01() || !m_8_reg_24756.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_17_reg_25156.read()) + sc_biguint<32>(m_8_reg_24756.read()));
}

void sha256_transform::thread_add_ln40_27_fu_9780_p2() {
    add_ln40_27_fu_9780_p2 = (!xor_ln40_37_reg_25507.read().is_01() || !xor_ln40_39_reg_24410.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln40_37_reg_25507.read()) + sc_biguint<32>(xor_ln40_39_reg_24410.read()));
}

void sha256_transform::thread_add_ln40_28_fu_9784_p2() {
    add_ln40_28_fu_9784_p2 = (!m_18_reg_25221.read().is_01() || !m_9_reg_24830.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_18_reg_25221.read()) + sc_biguint<32>(m_9_reg_24830.read()));
}

void sha256_transform::thread_add_ln40_30_fu_10156_p2() {
    add_ln40_30_fu_10156_p2 = (!xor_ln40_41_reg_25570.read().is_01() || !xor_ln40_43_reg_24415_pp0_iter1_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln40_41_reg_25570.read()) + sc_biguint<32>(xor_ln40_43_reg_24415_pp0_iter1_reg.read()));
}

void sha256_transform::thread_add_ln40_31_fu_10160_p2() {
    add_ln40_31_fu_10160_p2 = (!m_19_reg_25269.read().is_01() || !m_10_reg_24842.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_19_reg_25269.read()) + sc_biguint<32>(m_10_reg_24842.read()));
}

void sha256_transform::thread_add_ln40_33_fu_10170_p2() {
    add_ln40_33_fu_10170_p2 = (!xor_ln40_45_reg_25624.read().is_01() || !xor_ln40_47_reg_24506.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln40_45_reg_25624.read()) + sc_biguint<32>(xor_ln40_47_reg_24506.read()));
}

void sha256_transform::thread_add_ln40_34_fu_10174_p2() {
    add_ln40_34_fu_10174_p2 = (!m_20_reg_25334.read().is_01() || !m_11_reg_24917.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_20_reg_25334.read()) + sc_biguint<32>(m_11_reg_24917.read()));
}

void sha256_transform::thread_add_ln40_36_fu_10484_p2() {
    add_ln40_36_fu_10484_p2 = (!xor_ln40_49_reg_25685.read().is_01() || !xor_ln40_51_reg_24511_pp0_iter1_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln40_49_reg_25685.read()) + sc_biguint<32>(xor_ln40_51_reg_24511_pp0_iter1_reg.read()));
}

void sha256_transform::thread_add_ln40_37_fu_8609_p2() {
    add_ln40_37_fu_8609_p2 = (!m_21_reg_25382.read().is_01() || !m_12_reg_24929.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_21_reg_25382.read()) + sc_biguint<32>(m_12_reg_24929.read()));
}

void sha256_transform::thread_add_ln40_39_fu_10493_p2() {
    add_ln40_39_fu_10493_p2 = (!xor_ln40_53_reg_25690.read().is_01() || !xor_ln40_55_reg_24598.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln40_53_reg_25690.read()) + sc_biguint<32>(xor_ln40_55_reg_24598.read()));
}

void sha256_transform::thread_add_ln40_3_fu_6688_p2() {
    add_ln40_3_fu_6688_p2 = (!xor_ln40_5_reg_24593.read().is_01() || !xor_ln40_7_reg_24002.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln40_5_reg_24593.read()) + sc_biguint<32>(xor_ln40_7_reg_24002.read()));
}

void sha256_transform::thread_add_ln40_40_fu_10497_p2() {
    add_ln40_40_fu_10497_p2 = (!m_22_reg_25452.read().is_01() || !m_13_reg_25004.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_22_reg_25452.read()) + sc_biguint<32>(m_13_reg_25004.read()));
}

void sha256_transform::thread_add_ln40_42_fu_11008_p2() {
    add_ln40_42_fu_11008_p2 = (!xor_ln40_57_reg_25725.read().is_01() || !xor_ln40_59_reg_24603_pp0_iter1_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln40_57_reg_25725.read()) + sc_biguint<32>(xor_ln40_59_reg_24603_pp0_iter1_reg.read()));
}

void sha256_transform::thread_add_ln40_43_fu_11012_p2() {
    add_ln40_43_fu_11012_p2 = (!m_23_reg_25500.read().is_01() || !m_14_reg_25016.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_23_reg_25500.read()) + sc_biguint<32>(m_14_reg_25016.read()));
}

void sha256_transform::thread_add_ln40_45_fu_11022_p2() {
    add_ln40_45_fu_11022_p2 = (!xor_ln40_61_reg_25730.read().is_01() || !xor_ln40_63_reg_25119.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln40_61_reg_25730.read()) + sc_biguint<32>(xor_ln40_63_reg_25119.read()));
}

void sha256_transform::thread_add_ln40_46_fu_9483_p2() {
    add_ln40_46_fu_9483_p2 = (!m_24_fu_9408_p2.read().is_01() || !m_15_reg_25091.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_24_fu_9408_p2.read()) + sc_biguint<32>(m_15_reg_25091.read()));
}

void sha256_transform::thread_add_ln40_48_fu_11533_p2() {
    add_ln40_48_fu_11533_p2 = (!xor_ln40_65_reg_25791.read().is_01() || !xor_ln40_67_reg_25168.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln40_65_reg_25791.read()) + sc_biguint<32>(xor_ln40_67_reg_25168.read()));
}

void sha256_transform::thread_add_ln40_49_fu_11537_p2() {
    add_ln40_49_fu_11537_p2 = (!m_25_reg_25617.read().is_01() || !m_16_reg_25108.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_25_reg_25617.read()) + sc_biguint<32>(m_16_reg_25108.read()));
}

void sha256_transform::thread_add_ln40_4_fu_6692_p2() {
    add_ln40_4_fu_6692_p2 = (!m_10_reg_24842.read().is_01() || !m_1_reg_24034.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_10_reg_24842.read()) + sc_biguint<32>(m_1_reg_24034.read()));
}

void sha256_transform::thread_add_ln40_51_fu_11547_p2() {
    add_ln40_51_fu_11547_p2 = (!xor_ln40_69_reg_25796.read().is_01() || !xor_ln40_71_reg_25232.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln40_69_reg_25796.read()) + sc_biguint<32>(xor_ln40_71_reg_25232.read()));
}

void sha256_transform::thread_add_ln40_52_fu_11551_p2() {
    add_ln40_52_fu_11551_p2 = (!m_26_reg_25671.read().is_01() || !m_17_reg_25156.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_26_reg_25671.read()) + sc_biguint<32>(m_17_reg_25156.read()));
}

void sha256_transform::thread_add_ln40_54_fu_11861_p2() {
    add_ln40_54_fu_11861_p2 = (!xor_ln40_73_reg_25862.read().is_01() || !xor_ln40_75_reg_25281.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln40_73_reg_25862.read()) + sc_biguint<32>(xor_ln40_75_reg_25281.read()));
}

void sha256_transform::thread_add_ln40_55_fu_11865_p2() {
    add_ln40_55_fu_11865_p2 = (!m_27_reg_25678.read().is_01() || !m_18_reg_25221.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_27_reg_25678.read()) + sc_biguint<32>(m_18_reg_25221.read()));
}

void sha256_transform::thread_add_ln40_57_fu_11875_p2() {
    add_ln40_57_fu_11875_p2 = (!xor_ln40_77_reg_25867.read().is_01() || !xor_ln40_79_reg_25345.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln40_77_reg_25867.read()) + sc_biguint<32>(xor_ln40_79_reg_25345.read()));
}

void sha256_transform::thread_add_ln40_58_fu_11879_p2() {
    add_ln40_58_fu_11879_p2 = (!m_28_reg_25711.read().is_01() || !m_19_reg_25269.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_28_reg_25711.read()) + sc_biguint<32>(m_19_reg_25269.read()));
}

void sha256_transform::thread_add_ln40_60_fu_12391_p2() {
    add_ln40_60_fu_12391_p2 = (!xor_ln40_81_reg_25902.read().is_01() || !xor_ln40_83_reg_25394.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln40_81_reg_25902.read()) + sc_biguint<32>(xor_ln40_83_reg_25394.read()));
}

void sha256_transform::thread_add_ln40_61_fu_12395_p2() {
    add_ln40_61_fu_12395_p2 = (!m_29_reg_25718.read().is_01() || !m_20_reg_25334.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_29_reg_25718.read()) + sc_biguint<32>(m_20_reg_25334.read()));
}

void sha256_transform::thread_add_ln40_63_fu_12405_p2() {
    add_ln40_63_fu_12405_p2 = (!xor_ln40_85_reg_25907.read().is_01() || !xor_ln40_87_reg_25463.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln40_85_reg_25907.read()) + sc_biguint<32>(xor_ln40_87_reg_25463.read()));
}

void sha256_transform::thread_add_ln40_64_fu_12409_p2() {
    add_ln40_64_fu_12409_p2 = (!m_30_reg_25777.read().is_01() || !m_21_reg_25382.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_30_reg_25777.read()) + sc_biguint<32>(m_21_reg_25382.read()));
}

void sha256_transform::thread_add_ln40_66_fu_12920_p2() {
    add_ln40_66_fu_12920_p2 = (!xor_ln40_89_reg_25968.read().is_01() || !xor_ln40_91_reg_25512.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln40_89_reg_25968.read()) + sc_biguint<32>(xor_ln40_91_reg_25512.read()));
}

void sha256_transform::thread_add_ln40_67_fu_12924_p2() {
    add_ln40_67_fu_12924_p2 = (!m_31_reg_25784.read().is_01() || !m_22_reg_25452.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_31_reg_25784.read()) + sc_biguint<32>(m_22_reg_25452.read()));
}

void sha256_transform::thread_add_ln40_69_fu_12934_p2() {
    add_ln40_69_fu_12934_p2 = (!xor_ln40_93_reg_25973.read().is_01() || !xor_ln40_95_reg_25580.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln40_93_reg_25973.read()) + sc_biguint<32>(xor_ln40_95_reg_25580.read()));
}

void sha256_transform::thread_add_ln40_6_fu_7087_p2() {
    add_ln40_6_fu_7087_p2 = (!xor_ln40_9_reg_25114.read().is_01() || !xor_ln40_11_reg_24007.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln40_9_reg_25114.read()) + sc_biguint<32>(xor_ln40_11_reg_24007.read()));
}

void sha256_transform::thread_add_ln40_70_fu_12938_p2() {
    add_ln40_70_fu_12938_p2 = (!m_32_reg_25848.read().is_01() || !m_23_reg_25500.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_32_reg_25848.read()) + sc_biguint<32>(m_23_reg_25500.read()));
}

void sha256_transform::thread_add_ln40_72_fu_13248_p2() {
    add_ln40_72_fu_13248_p2 = (!xor_ln40_97_reg_26039.read().is_01() || !xor_ln40_99_reg_25629.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln40_97_reg_26039.read()) + sc_biguint<32>(xor_ln40_99_reg_25629.read()));
}

void sha256_transform::thread_add_ln40_73_fu_13252_p2() {
    add_ln40_73_fu_13252_p2 = (!m_33_reg_25855.read().is_01() || !m_24_reg_25565.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_33_reg_25855.read()) + sc_biguint<32>(m_24_reg_25565.read()));
}

void sha256_transform::thread_add_ln40_75_fu_13262_p2() {
    add_ln40_75_fu_13262_p2 = (!xor_ln40_101_reg_26044.read().is_01() || !xor_ln40_103_reg_25695.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln40_101_reg_26044.read()) + sc_biguint<32>(xor_ln40_103_reg_25695.read()));
}

void sha256_transform::thread_add_ln40_76_fu_13266_p2() {
    add_ln40_76_fu_13266_p2 = (!m_34_reg_25888.read().is_01() || !m_25_reg_25617.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_34_reg_25888.read()) + sc_biguint<32>(m_25_reg_25617.read()));
}

void sha256_transform::thread_add_ln40_78_fu_13778_p2() {
    add_ln40_78_fu_13778_p2 = (!xor_ln40_105_reg_26079.read().is_01() || !xor_ln40_107_reg_25700.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln40_105_reg_26079.read()) + sc_biguint<32>(xor_ln40_107_reg_25700.read()));
}

void sha256_transform::thread_add_ln40_79_fu_13782_p2() {
    add_ln40_79_fu_13782_p2 = (!m_35_reg_25895.read().is_01() || !m_26_reg_25671.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_35_reg_25895.read()) + sc_biguint<32>(m_26_reg_25671.read()));
}

void sha256_transform::thread_add_ln40_7_fu_7063_p2() {
    add_ln40_7_fu_7063_p2 = (!m_11_reg_24917.read().is_01() || !m_2_reg_24122.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_11_reg_24917.read()) + sc_biguint<32>(m_2_reg_24122.read()));
}

void sha256_transform::thread_add_ln40_81_fu_13792_p2() {
    add_ln40_81_fu_13792_p2 = (!xor_ln40_109_reg_26084.read().is_01() || !xor_ln40_111_reg_25735.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln40_109_reg_26084.read()) + sc_biguint<32>(xor_ln40_111_reg_25735.read()));
}

void sha256_transform::thread_add_ln40_82_fu_13796_p2() {
    add_ln40_82_fu_13796_p2 = (!m_36_reg_25954.read().is_01() || !m_27_reg_25678.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_36_reg_25954.read()) + sc_biguint<32>(m_27_reg_25678.read()));
}

void sha256_transform::thread_add_ln40_84_fu_14307_p2() {
    add_ln40_84_fu_14307_p2 = (!xor_ln40_113_reg_26145.read().is_01() || !xor_ln40_115_reg_25740.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln40_113_reg_26145.read()) + sc_biguint<32>(xor_ln40_115_reg_25740.read()));
}

void sha256_transform::thread_add_ln40_85_fu_14311_p2() {
    add_ln40_85_fu_14311_p2 = (!m_37_reg_25961.read().is_01() || !m_28_reg_25711.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_37_reg_25961.read()) + sc_biguint<32>(m_28_reg_25711.read()));
}

void sha256_transform::thread_add_ln40_87_fu_14321_p2() {
    add_ln40_87_fu_14321_p2 = (!xor_ln40_117_reg_26150.read().is_01() || !xor_ln40_119_reg_25801.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln40_117_reg_26150.read()) + sc_biguint<32>(xor_ln40_119_reg_25801.read()));
}

void sha256_transform::thread_add_ln40_88_fu_14325_p2() {
    add_ln40_88_fu_14325_p2 = (!m_38_reg_26025.read().is_01() || !m_29_reg_25718.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_38_reg_26025.read()) + sc_biguint<32>(m_29_reg_25718.read()));
}

void sha256_transform::thread_add_ln40_90_fu_14643_p2() {
    add_ln40_90_fu_14643_p2 = (!xor_ln40_121_reg_26216.read().is_01() || !xor_ln40_123_reg_25806.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln40_121_reg_26216.read()) + sc_biguint<32>(xor_ln40_123_reg_25806.read()));
}

void sha256_transform::thread_add_ln40_91_fu_14405_p2() {
    add_ln40_91_fu_14405_p2 = (!m_39_reg_26032.read().is_01() || !m_30_reg_25777.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_39_reg_26032.read()) + sc_biguint<32>(m_30_reg_25777.read()));
}

void sha256_transform::thread_add_ln40_93_fu_14652_p2() {
    add_ln40_93_fu_14652_p2 = (!xor_ln40_125_reg_26226.read().is_01() || !xor_ln40_127_reg_25872.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln40_125_reg_26226.read()) + sc_biguint<32>(xor_ln40_127_reg_25872.read()));
}

void sha256_transform::thread_add_ln40_94_fu_14479_p2() {
    add_ln40_94_fu_14479_p2 = (!m_40_reg_26065.read().is_01() || !m_31_reg_25784.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_40_reg_26065.read()) + sc_biguint<32>(m_31_reg_25784.read()));
}

void sha256_transform::thread_add_ln40_96_fu_15173_p2() {
    add_ln40_96_fu_15173_p2 = (!xor_ln40_129_reg_26265.read().is_01() || !xor_ln40_131_reg_25877.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln40_129_reg_26265.read()) + sc_biguint<32>(xor_ln40_131_reg_25877.read()));
}

void sha256_transform::thread_add_ln40_97_fu_14731_p2() {
    add_ln40_97_fu_14731_p2 = (!m_41_reg_26072.read().is_01() || !m_32_reg_25848.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_41_reg_26072.read()) + sc_biguint<32>(m_32_reg_25848.read()));
}

void sha256_transform::thread_add_ln40_99_fu_15182_p2() {
    add_ln40_99_fu_15182_p2 = (!xor_ln40_133_reg_26275.read().is_01() || !xor_ln40_135_reg_25912.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln40_133_reg_26275.read()) + sc_biguint<32>(xor_ln40_135_reg_25912.read()));
}

void sha256_transform::thread_add_ln40_9_fu_7459_p2() {
    add_ln40_9_fu_7459_p2 = (!xor_ln40_13_reg_25163.read().is_01() || !xor_ln40_15_reg_24099.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln40_13_reg_25163.read()) + sc_biguint<32>(xor_ln40_15_reg_24099.read()));
}

void sha256_transform::thread_add_ln40_fu_6316_p2() {
    add_ln40_fu_6316_p2 = (!xor_ln40_1_reg_24588.read().is_01() || !xor_ln40_3_reg_23937.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln40_1_reg_24588.read()) + sc_biguint<32>(xor_ln40_3_reg_23937.read()));
}

void sha256_transform::thread_add_ln53_100_fu_10464_p2() {
    add_ln53_100_fu_10464_p2 = (!ap_const_lv32_A831C66D.is_01() || !xor_ln53_101_reg_25661.read().is_01())? sc_lv<32>(): (sc_bigint<32>(ap_const_lv32_A831C66D) + sc_biguint<32>(xor_ln53_101_reg_25661.read()));
}

void sha256_transform::thread_add_ln53_101_fu_10469_p2() {
    add_ln53_101_fu_10469_p2 = (!xor_ln53_103_reg_25666.read().is_01() || !m_25_reg_25617.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_103_reg_25666.read()) + sc_biguint<32>(m_25_reg_25617.read()));
}

void sha256_transform::thread_add_ln53_102_fu_10473_p2() {
    add_ln53_102_fu_10473_p2 = (!add_ln53_101_fu_10469_p2.read().is_01() || !add_ln58_21_reg_25483.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_101_fu_10469_p2.read()) + sc_biguint<32>(add_ln58_21_reg_25483.read()));
}

void sha256_transform::thread_add_ln53_103_fu_10478_p2() {
    add_ln53_103_fu_10478_p2 = (!add_ln53_102_fu_10473_p2.read().is_01() || !add_ln53_100_fu_10464_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_102_fu_10473_p2.read()) + sc_biguint<32>(add_ln53_100_fu_10464_p2.read()));
}

void sha256_transform::thread_add_ln53_104_fu_11340_p2() {
    add_ln53_104_fu_11340_p2 = (!ap_const_lv32_B00327C8.is_01() || !xor_ln53_105_reg_25767.read().is_01())? sc_lv<32>(): (sc_bigint<32>(ap_const_lv32_B00327C8) + sc_biguint<32>(xor_ln53_105_reg_25767.read()));
}

void sha256_transform::thread_add_ln53_105_fu_10998_p2() {
    add_ln53_105_fu_10998_p2 = (!xor_ln53_107_fu_10992_p2.read().is_01() || !m_26_reg_25671.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_107_fu_10992_p2.read()) + sc_biguint<32>(m_26_reg_25671.read()));
}

void sha256_transform::thread_add_ln53_106_fu_11003_p2() {
    add_ln53_106_fu_11003_p2 = (!add_ln53_105_fu_10998_p2.read().is_01() || !add_ln58_22_reg_25537.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_105_fu_10998_p2.read()) + sc_biguint<32>(add_ln58_22_reg_25537.read()));
}

void sha256_transform::thread_add_ln53_107_fu_11345_p2() {
    add_ln53_107_fu_11345_p2 = (!add_ln53_106_reg_25772.read().is_01() || !add_ln53_104_fu_11340_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_106_reg_25772.read()) + sc_biguint<32>(add_ln53_104_fu_11340_p2.read()));
}

void sha256_transform::thread_add_ln53_108_fu_11841_p2() {
    add_ln53_108_fu_11841_p2 = (!ap_const_lv32_BF597FC7.is_01() || !xor_ln53_109_reg_25838.read().is_01())? sc_lv<32>(): (sc_bigint<32>(ap_const_lv32_BF597FC7) + sc_biguint<32>(xor_ln53_109_reg_25838.read()));
}

void sha256_transform::thread_add_ln53_109_fu_11846_p2() {
    add_ln53_109_fu_11846_p2 = (!xor_ln53_111_reg_25843.read().is_01() || !m_27_reg_25678.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_111_reg_25843.read()) + sc_biguint<32>(m_27_reg_25678.read()));
}

void sha256_transform::thread_add_ln53_10_fu_2042_p2() {
    add_ln53_10_fu_2042_p2 = (!ctx_state_5_read_1_reg_23877.read().is_01() || !add_ln53_9_fu_2036_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ctx_state_5_read_1_reg_23877.read()) + sc_biguint<32>(add_ln53_9_fu_2036_p2.read()));
}

void sha256_transform::thread_add_ln53_110_fu_11850_p2() {
    add_ln53_110_fu_11850_p2 = (!add_ln53_109_fu_11846_p2.read().is_01() || !add_ln58_23_reg_25600.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_109_fu_11846_p2.read()) + sc_biguint<32>(add_ln58_23_reg_25600.read()));
}

void sha256_transform::thread_add_ln53_111_fu_11855_p2() {
    add_ln53_111_fu_11855_p2 = (!add_ln53_110_fu_11850_p2.read().is_01() || !add_ln53_108_fu_11841_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_110_fu_11850_p2.read()) + sc_biguint<32>(add_ln53_108_fu_11841_p2.read()));
}

void sha256_transform::thread_add_ln53_112_fu_12728_p2() {
    add_ln53_112_fu_12728_p2 = (!xor_ln53_113_reg_25944.read().is_01() || !add_ln58_24_reg_25654.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_113_reg_25944.read()) + sc_biguint<32>(add_ln58_24_reg_25654.read()));
}

void sha256_transform::thread_add_ln53_113_fu_12380_p2() {
    add_ln53_113_fu_12380_p2 = (!ap_const_lv32_C6E00BF3.is_01() || !m_28_reg_25711.read().is_01())? sc_lv<32>(): (sc_bigint<32>(ap_const_lv32_C6E00BF3) + sc_biguint<32>(m_28_reg_25711.read()));
}

void sha256_transform::thread_add_ln53_114_fu_12385_p2() {
    add_ln53_114_fu_12385_p2 = (!add_ln53_113_fu_12380_p2.read().is_01() || !xor_ln53_115_fu_12374_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_113_fu_12380_p2.read()) + sc_biguint<32>(xor_ln53_115_fu_12374_p2.read()));
}

void sha256_transform::thread_add_ln53_115_fu_12732_p2() {
    add_ln53_115_fu_12732_p2 = (!add_ln53_114_reg_25949.read().is_01() || !add_ln53_112_fu_12728_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_114_reg_25949.read()) + sc_biguint<32>(add_ln53_112_fu_12728_p2.read()));
}

void sha256_transform::thread_add_ln53_116_fu_13228_p2() {
    add_ln53_116_fu_13228_p2 = (!xor_ln53_117_reg_26015.read().is_01() || !add_ln58_25_reg_25760.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_117_reg_26015.read()) + sc_biguint<32>(add_ln58_25_reg_25760.read()));
}

void sha256_transform::thread_add_ln53_117_fu_13232_p2() {
    add_ln53_117_fu_13232_p2 = (!ap_const_lv32_D5A79147.is_01() || !m_29_reg_25718.read().is_01())? sc_lv<32>(): (sc_bigint<32>(ap_const_lv32_D5A79147) + sc_biguint<32>(m_29_reg_25718.read()));
}

void sha256_transform::thread_add_ln53_118_fu_13237_p2() {
    add_ln53_118_fu_13237_p2 = (!add_ln53_117_fu_13232_p2.read().is_01() || !xor_ln53_119_reg_26020.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_117_fu_13232_p2.read()) + sc_biguint<32>(xor_ln53_119_reg_26020.read()));
}

void sha256_transform::thread_add_ln53_119_fu_13242_p2() {
    add_ln53_119_fu_13242_p2 = (!add_ln53_118_fu_13237_p2.read().is_01() || !add_ln53_116_fu_13228_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_118_fu_13237_p2.read()) + sc_biguint<32>(add_ln53_116_fu_13228_p2.read()));
}

void sha256_transform::thread_add_ln53_11_fu_2236_p2() {
    add_ln53_11_fu_2236_p2 = (!add_ln53_10_reg_24209.read().is_01() || !add_ln53_8_fu_2231_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_10_reg_24209.read()) + sc_biguint<32>(add_ln53_8_fu_2231_p2.read()));
}

void sha256_transform::thread_add_ln53_120_fu_14115_p2() {
    add_ln53_120_fu_14115_p2 = (!xor_ln53_121_reg_26121.read().is_01() || !add_ln58_26_reg_25831.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_121_reg_26121.read()) + sc_biguint<32>(add_ln58_26_reg_25831.read()));
}

void sha256_transform::thread_add_ln53_121_fu_13767_p2() {
    add_ln53_121_fu_13767_p2 = (!ap_const_lv32_6CA6351.is_01() || !m_30_reg_25777.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_6CA6351) + sc_biguint<32>(m_30_reg_25777.read()));
}

void sha256_transform::thread_add_ln53_122_fu_13772_p2() {
    add_ln53_122_fu_13772_p2 = (!add_ln53_121_fu_13767_p2.read().is_01() || !xor_ln53_123_fu_13761_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_121_fu_13767_p2.read()) + sc_biguint<32>(xor_ln53_123_fu_13761_p2.read()));
}

void sha256_transform::thread_add_ln53_123_fu_14119_p2() {
    add_ln53_123_fu_14119_p2 = (!add_ln53_122_reg_26126.read().is_01() || !add_ln53_120_fu_14115_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_122_reg_26126.read()) + sc_biguint<32>(add_ln53_120_fu_14115_p2.read()));
}

void sha256_transform::thread_add_ln53_124_fu_14623_p2() {
    add_ln53_124_fu_14623_p2 = (!xor_ln53_125_reg_26192.read().is_01() || !add_ln58_27_reg_25937.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_125_reg_26192.read()) + sc_biguint<32>(add_ln58_27_reg_25937.read()));
}

void sha256_transform::thread_add_ln53_125_fu_14627_p2() {
    add_ln53_125_fu_14627_p2 = (!ap_const_lv32_14292967.is_01() || !m_31_reg_25784.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_14292967) + sc_biguint<32>(m_31_reg_25784.read()));
}

void sha256_transform::thread_add_ln53_126_fu_14632_p2() {
    add_ln53_126_fu_14632_p2 = (!add_ln53_125_fu_14627_p2.read().is_01() || !xor_ln53_127_reg_26197.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_125_fu_14627_p2.read()) + sc_biguint<32>(xor_ln53_127_reg_26197.read()));
}

void sha256_transform::thread_add_ln53_127_fu_14637_p2() {
    add_ln53_127_fu_14637_p2 = (!add_ln53_126_fu_14632_p2.read().is_01() || !add_ln53_124_fu_14623_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_126_fu_14632_p2.read()) + sc_biguint<32>(add_ln53_124_fu_14623_p2.read()));
}

void sha256_transform::thread_add_ln53_128_fu_15435_p2() {
    add_ln53_128_fu_15435_p2 = (!xor_ln53_129_reg_26307.read().is_01() || !add_ln58_28_reg_26008.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_129_reg_26307.read()) + sc_biguint<32>(add_ln58_28_reg_26008.read()));
}

void sha256_transform::thread_add_ln53_129_fu_15156_p2() {
    add_ln53_129_fu_15156_p2 = (!ap_const_lv32_27B70A85.is_01() || !m_32_reg_25848.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_27B70A85) + sc_biguint<32>(m_32_reg_25848.read()));
}

void sha256_transform::thread_add_ln53_12_fu_2730_p2() {
    add_ln53_12_fu_2730_p2 = (!ctx_state_4_read_1_reg_23884.read().is_01() || !xor_ln53_13_reg_24325.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ctx_state_4_read_1_reg_23884.read()) + sc_biguint<32>(xor_ln53_13_reg_24325.read()));
}

void sha256_transform::thread_add_ln53_130_fu_15161_p2() {
    add_ln53_130_fu_15161_p2 = (!add_ln53_129_fu_15156_p2.read().is_01() || !xor_ln53_131_fu_15150_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_129_fu_15156_p2.read()) + sc_biguint<32>(xor_ln53_131_fu_15150_p2.read()));
}

void sha256_transform::thread_add_ln53_131_fu_15439_p2() {
    add_ln53_131_fu_15439_p2 = (!add_ln53_130_reg_26312.read().is_01() || !add_ln53_128_fu_15435_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_130_reg_26312.read()) + sc_biguint<32>(add_ln53_128_fu_15435_p2.read()));
}

void sha256_transform::thread_add_ln53_132_fu_15801_p2() {
    add_ln53_132_fu_15801_p2 = (!xor_ln53_133_reg_26371.read().is_01() || !add_ln58_29_reg_26114.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_133_reg_26371.read()) + sc_biguint<32>(add_ln58_29_reg_26114.read()));
}

void sha256_transform::thread_add_ln53_133_fu_15805_p2() {
    add_ln53_133_fu_15805_p2 = (!ap_const_lv32_2E1B2138.is_01() || !m_33_reg_25855.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_2E1B2138) + sc_biguint<32>(m_33_reg_25855.read()));
}

void sha256_transform::thread_add_ln53_134_fu_15810_p2() {
    add_ln53_134_fu_15810_p2 = (!add_ln53_133_fu_15805_p2.read().is_01() || !xor_ln53_135_reg_26376.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_133_fu_15805_p2.read()) + sc_biguint<32>(xor_ln53_135_reg_26376.read()));
}

void sha256_transform::thread_add_ln53_135_fu_15815_p2() {
    add_ln53_135_fu_15815_p2 = (!add_ln53_134_fu_15810_p2.read().is_01() || !add_ln53_132_fu_15801_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_134_fu_15810_p2.read()) + sc_biguint<32>(add_ln53_132_fu_15801_p2.read()));
}

void sha256_transform::thread_add_ln53_136_fu_16408_p2() {
    add_ln53_136_fu_16408_p2 = (!xor_ln53_137_reg_26458.read().is_01() || !add_ln58_30_reg_26185.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_137_reg_26458.read()) + sc_biguint<32>(add_ln58_30_reg_26185.read()));
}

void sha256_transform::thread_add_ln53_137_fu_16200_p2() {
    add_ln53_137_fu_16200_p2 = (!ap_const_lv32_4D2C6DFC.is_01() || !m_34_reg_25888.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_4D2C6DFC) + sc_biguint<32>(m_34_reg_25888.read()));
}

void sha256_transform::thread_add_ln53_138_fu_16205_p2() {
    add_ln53_138_fu_16205_p2 = (!add_ln53_137_fu_16200_p2.read().is_01() || !xor_ln53_139_fu_16194_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_137_fu_16200_p2.read()) + sc_biguint<32>(xor_ln53_139_fu_16194_p2.read()));
}

void sha256_transform::thread_add_ln53_139_fu_16412_p2() {
    add_ln53_139_fu_16412_p2 = (!add_ln53_138_reg_26463.read().is_01() || !add_ln53_136_fu_16408_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_138_reg_26463.read()) + sc_biguint<32>(add_ln53_136_fu_16408_p2.read()));
}

void sha256_transform::thread_add_ln53_13_fu_2734_p2() {
    add_ln53_13_fu_2734_p2 = (!ap_const_lv32_E9B5DBA5.is_01() || !m_3_fu_2347_p5.read().is_01())? sc_lv<32>(): (sc_bigint<32>(ap_const_lv32_E9B5DBA5) + sc_biguint<32>(m_3_fu_2347_p5.read()));
}

void sha256_transform::thread_add_ln53_140_fu_16768_p2() {
    add_ln53_140_fu_16768_p2 = (!xor_ln53_141_reg_26517.read().is_01() || !add_ln58_31_reg_26300.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_141_reg_26517.read()) + sc_biguint<32>(add_ln58_31_reg_26300.read()));
}

void sha256_transform::thread_add_ln53_141_fu_16772_p2() {
    add_ln53_141_fu_16772_p2 = (!ap_const_lv32_53380D13.is_01() || !m_35_reg_25895.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_53380D13) + sc_biguint<32>(m_35_reg_25895.read()));
}

void sha256_transform::thread_add_ln53_142_fu_16777_p2() {
    add_ln53_142_fu_16777_p2 = (!add_ln53_141_fu_16772_p2.read().is_01() || !xor_ln53_143_reg_26522.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_141_fu_16772_p2.read()) + sc_biguint<32>(xor_ln53_143_reg_26522.read()));
}

void sha256_transform::thread_add_ln53_143_fu_16782_p2() {
    add_ln53_143_fu_16782_p2 = (!add_ln53_142_fu_16777_p2.read().is_01() || !add_ln53_140_fu_16768_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_142_fu_16777_p2.read()) + sc_biguint<32>(add_ln53_140_fu_16768_p2.read()));
}

void sha256_transform::thread_add_ln53_144_fu_17314_p2() {
    add_ln53_144_fu_17314_p2 = (!xor_ln53_145_reg_26596.read().is_01() || !add_ln58_32_reg_26364.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_145_reg_26596.read()) + sc_biguint<32>(add_ln58_32_reg_26364.read()));
}

void sha256_transform::thread_add_ln53_145_fu_17167_p2() {
    add_ln53_145_fu_17167_p2 = (!ap_const_lv32_650A7354.is_01() || !m_36_reg_25954.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_650A7354) + sc_biguint<32>(m_36_reg_25954.read()));
}

void sha256_transform::thread_add_ln53_146_fu_17172_p2() {
    add_ln53_146_fu_17172_p2 = (!add_ln53_145_fu_17167_p2.read().is_01() || !xor_ln53_147_fu_17161_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_145_fu_17167_p2.read()) + sc_biguint<32>(xor_ln53_147_fu_17161_p2.read()));
}

void sha256_transform::thread_add_ln53_147_fu_17318_p2() {
    add_ln53_147_fu_17318_p2 = (!add_ln53_146_reg_26601.read().is_01() || !add_ln53_144_fu_17314_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_146_reg_26601.read()) + sc_biguint<32>(add_ln53_144_fu_17314_p2.read()));
}

void sha256_transform::thread_add_ln53_148_fu_17506_p2() {
    add_ln53_148_fu_17506_p2 = (!xor_ln53_149_reg_26658.read().is_01() || !add_ln58_33_reg_26451.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_149_reg_26658.read()) + sc_biguint<32>(add_ln58_33_reg_26451.read()));
}

void sha256_transform::thread_add_ln53_149_fu_17510_p2() {
    add_ln53_149_fu_17510_p2 = (!ap_const_lv32_766A0ABB.is_01() || !m_37_reg_25961.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_766A0ABB) + sc_biguint<32>(m_37_reg_25961.read()));
}

void sha256_transform::thread_add_ln53_14_fu_2740_p2() {
    add_ln53_14_fu_2740_p2 = (!add_ln53_13_fu_2734_p2.read().is_01() || !xor_ln53_15_reg_24330.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_13_fu_2734_p2.read()) + sc_biguint<32>(xor_ln53_15_reg_24330.read()));
}

void sha256_transform::thread_add_ln53_150_fu_17515_p2() {
    add_ln53_150_fu_17515_p2 = (!add_ln53_149_fu_17510_p2.read().is_01() || !xor_ln53_151_reg_26663.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_149_fu_17510_p2.read()) + sc_biguint<32>(xor_ln53_151_reg_26663.read()));
}

void sha256_transform::thread_add_ln53_151_fu_17520_p2() {
    add_ln53_151_fu_17520_p2 = (!add_ln53_150_fu_17515_p2.read().is_01() || !add_ln53_148_fu_17506_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_150_fu_17515_p2.read()) + sc_biguint<32>(add_ln53_148_fu_17506_p2.read()));
}

void sha256_transform::thread_add_ln53_152_fu_17785_p2() {
    add_ln53_152_fu_17785_p2 = (!ap_const_lv32_81C2C92E.is_01() || !xor_ln53_153_reg_26701.read().is_01())? sc_lv<32>(): (sc_bigint<32>(ap_const_lv32_81C2C92E) + sc_biguint<32>(xor_ln53_153_reg_26701.read()));
}

void sha256_transform::thread_add_ln53_153_fu_17746_p2() {
    add_ln53_153_fu_17746_p2 = (!xor_ln53_155_fu_17740_p2.read().is_01() || !m_38_reg_26025.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_155_fu_17740_p2.read()) + sc_biguint<32>(m_38_reg_26025.read()));
}

void sha256_transform::thread_add_ln53_154_fu_17751_p2() {
    add_ln53_154_fu_17751_p2 = (!add_ln53_153_fu_17746_p2.read().is_01() || !add_ln58_34_reg_26510.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_153_fu_17746_p2.read()) + sc_biguint<32>(add_ln58_34_reg_26510.read()));
}

void sha256_transform::thread_add_ln53_155_fu_17790_p2() {
    add_ln53_155_fu_17790_p2 = (!add_ln53_154_reg_26706.read().is_01() || !add_ln53_152_fu_17785_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_154_reg_26706.read()) + sc_biguint<32>(add_ln53_152_fu_17785_p2.read()));
}

void sha256_transform::thread_add_ln53_156_fu_17978_p2() {
    add_ln53_156_fu_17978_p2 = (!ap_const_lv32_92722C85.is_01() || !xor_ln53_157_reg_26738.read().is_01())? sc_lv<32>(): (sc_bigint<32>(ap_const_lv32_92722C85) + sc_biguint<32>(xor_ln53_157_reg_26738.read()));
}

void sha256_transform::thread_add_ln53_157_fu_17983_p2() {
    add_ln53_157_fu_17983_p2 = (!xor_ln53_159_reg_26743.read().is_01() || !m_39_reg_26032.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_159_reg_26743.read()) + sc_biguint<32>(m_39_reg_26032.read()));
}

void sha256_transform::thread_add_ln53_158_fu_17987_p2() {
    add_ln53_158_fu_17987_p2 = (!add_ln53_157_fu_17983_p2.read().is_01() || !add_ln58_35_reg_26589.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_157_fu_17983_p2.read()) + sc_biguint<32>(add_ln58_35_reg_26589.read()));
}

void sha256_transform::thread_add_ln53_159_fu_17992_p2() {
    add_ln53_159_fu_17992_p2 = (!add_ln53_158_fu_17987_p2.read().is_01() || !add_ln53_156_fu_17978_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_158_fu_17987_p2.read()) + sc_biguint<32>(add_ln53_156_fu_17978_p2.read()));
}

void sha256_transform::thread_add_ln53_15_fu_2745_p2() {
    add_ln53_15_fu_2745_p2 = (!add_ln53_14_fu_2740_p2.read().is_01() || !add_ln53_12_fu_2730_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_14_fu_2740_p2.read()) + sc_biguint<32>(add_ln53_12_fu_2730_p2.read()));
}

void sha256_transform::thread_add_ln53_160_fu_18248_p2() {
    add_ln53_160_fu_18248_p2 = (!ap_const_lv32_A2BFE8A1.is_01() || !xor_ln53_161_reg_26776.read().is_01())? sc_lv<32>(): (sc_bigint<32>(ap_const_lv32_A2BFE8A1) + sc_biguint<32>(xor_ln53_161_reg_26776.read()));
}

void sha256_transform::thread_add_ln53_161_fu_18209_p2() {
    add_ln53_161_fu_18209_p2 = (!xor_ln53_163_fu_18203_p2.read().is_01() || !m_40_reg_26065.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_163_fu_18203_p2.read()) + sc_biguint<32>(m_40_reg_26065.read()));
}

void sha256_transform::thread_add_ln53_162_fu_18214_p2() {
    add_ln53_162_fu_18214_p2 = (!add_ln53_161_fu_18209_p2.read().is_01() || !add_ln58_36_reg_26651.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_161_fu_18209_p2.read()) + sc_biguint<32>(add_ln58_36_reg_26651.read()));
}

void sha256_transform::thread_add_ln53_163_fu_18253_p2() {
    add_ln53_163_fu_18253_p2 = (!add_ln53_162_reg_26781.read().is_01() || !add_ln53_160_fu_18248_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_162_reg_26781.read()) + sc_biguint<32>(add_ln53_160_fu_18248_p2.read()));
}

void sha256_transform::thread_add_ln53_164_fu_18441_p2() {
    add_ln53_164_fu_18441_p2 = (!ap_const_lv32_A81A664B.is_01() || !xor_ln53_165_reg_26813.read().is_01())? sc_lv<32>(): (sc_bigint<32>(ap_const_lv32_A81A664B) + sc_biguint<32>(xor_ln53_165_reg_26813.read()));
}

void sha256_transform::thread_add_ln53_165_fu_18446_p2() {
    add_ln53_165_fu_18446_p2 = (!xor_ln53_167_reg_26818.read().is_01() || !m_41_reg_26072.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_167_reg_26818.read()) + sc_biguint<32>(m_41_reg_26072.read()));
}

void sha256_transform::thread_add_ln53_166_fu_18450_p2() {
    add_ln53_166_fu_18450_p2 = (!add_ln53_165_fu_18446_p2.read().is_01() || !add_ln58_37_reg_26694.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_165_fu_18446_p2.read()) + sc_biguint<32>(add_ln58_37_reg_26694.read()));
}

void sha256_transform::thread_add_ln53_167_fu_18455_p2() {
    add_ln53_167_fu_18455_p2 = (!add_ln53_166_fu_18450_p2.read().is_01() || !add_ln53_164_fu_18441_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_166_fu_18450_p2.read()) + sc_biguint<32>(add_ln53_164_fu_18441_p2.read()));
}

void sha256_transform::thread_add_ln53_168_fu_18712_p2() {
    add_ln53_168_fu_18712_p2 = (!xor_ln53_169_reg_26851.read().is_01() || !add_ln58_38_reg_26731.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_169_reg_26851.read()) + sc_biguint<32>(add_ln58_38_reg_26731.read()));
}

void sha256_transform::thread_add_ln53_169_fu_18672_p2() {
    add_ln53_169_fu_18672_p2 = (!ap_const_lv32_C24B8B70.is_01() || !m_42_reg_26131.read().is_01())? sc_lv<32>(): (sc_bigint<32>(ap_const_lv32_C24B8B70) + sc_biguint<32>(m_42_reg_26131.read()));
}

void sha256_transform::thread_add_ln53_16_fu_3645_p2() {
    add_ln53_16_fu_3645_p2 = (!xor_ln53_17_reg_24538.read().is_01() || !add_ln58_reg_24017.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_17_reg_24538.read()) + sc_biguint<32>(add_ln58_reg_24017.read()));
}

void sha256_transform::thread_add_ln53_170_fu_18677_p2() {
    add_ln53_170_fu_18677_p2 = (!add_ln53_169_fu_18672_p2.read().is_01() || !xor_ln53_171_fu_18666_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_169_fu_18672_p2.read()) + sc_biguint<32>(xor_ln53_171_fu_18666_p2.read()));
}

void sha256_transform::thread_add_ln53_171_fu_18716_p2() {
    add_ln53_171_fu_18716_p2 = (!add_ln53_170_reg_26856.read().is_01() || !add_ln53_168_fu_18712_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_170_reg_26856.read()) + sc_biguint<32>(add_ln53_168_fu_18712_p2.read()));
}

void sha256_transform::thread_add_ln53_172_fu_18904_p2() {
    add_ln53_172_fu_18904_p2 = (!xor_ln53_173_reg_26888.read().is_01() || !add_ln58_39_reg_26769.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_173_reg_26888.read()) + sc_biguint<32>(add_ln58_39_reg_26769.read()));
}

void sha256_transform::thread_add_ln53_173_fu_18908_p2() {
    add_ln53_173_fu_18908_p2 = (!ap_const_lv32_C76C51A3.is_01() || !m_43_reg_26138.read().is_01())? sc_lv<32>(): (sc_bigint<32>(ap_const_lv32_C76C51A3) + sc_biguint<32>(m_43_reg_26138.read()));
}

void sha256_transform::thread_add_ln53_174_fu_18913_p2() {
    add_ln53_174_fu_18913_p2 = (!add_ln53_173_fu_18908_p2.read().is_01() || !xor_ln53_175_reg_26893.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_173_fu_18908_p2.read()) + sc_biguint<32>(xor_ln53_175_reg_26893.read()));
}

void sha256_transform::thread_add_ln53_175_fu_18918_p2() {
    add_ln53_175_fu_18918_p2 = (!add_ln53_174_fu_18913_p2.read().is_01() || !add_ln53_172_fu_18904_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_174_fu_18913_p2.read()) + sc_biguint<32>(add_ln53_172_fu_18904_p2.read()));
}

void sha256_transform::thread_add_ln53_176_fu_19175_p2() {
    add_ln53_176_fu_19175_p2 = (!xor_ln53_177_reg_26926.read().is_01() || !add_ln58_40_reg_26806.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_177_reg_26926.read()) + sc_biguint<32>(add_ln58_40_reg_26806.read()));
}

void sha256_transform::thread_add_ln53_177_fu_19135_p2() {
    add_ln53_177_fu_19135_p2 = (!ap_const_lv32_D192E819.is_01() || !m_44_reg_26202.read().is_01())? sc_lv<32>(): (sc_bigint<32>(ap_const_lv32_D192E819) + sc_biguint<32>(m_44_reg_26202.read()));
}

void sha256_transform::thread_add_ln53_178_fu_19140_p2() {
    add_ln53_178_fu_19140_p2 = (!add_ln53_177_fu_19135_p2.read().is_01() || !xor_ln53_179_fu_19129_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_177_fu_19135_p2.read()) + sc_biguint<32>(xor_ln53_179_fu_19129_p2.read()));
}

void sha256_transform::thread_add_ln53_179_fu_19179_p2() {
    add_ln53_179_fu_19179_p2 = (!add_ln53_178_reg_26931.read().is_01() || !add_ln53_176_fu_19175_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_178_reg_26931.read()) + sc_biguint<32>(add_ln53_176_fu_19175_p2.read()));
}

void sha256_transform::thread_add_ln53_17_fu_3158_p2() {
    add_ln53_17_fu_3158_p2 = (!ap_const_lv32_3956C25B.is_01() || !m_4_fu_2751_p5.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_3956C25B) + sc_biguint<32>(m_4_fu_2751_p5.read()));
}

void sha256_transform::thread_add_ln53_180_fu_19367_p2() {
    add_ln53_180_fu_19367_p2 = (!xor_ln53_181_reg_26963.read().is_01() || !add_ln58_41_reg_26844.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_181_reg_26963.read()) + sc_biguint<32>(add_ln58_41_reg_26844.read()));
}

void sha256_transform::thread_add_ln53_181_fu_19371_p2() {
    add_ln53_181_fu_19371_p2 = (!ap_const_lv32_D6990624.is_01() || !m_45_reg_26209.read().is_01())? sc_lv<32>(): (sc_bigint<32>(ap_const_lv32_D6990624) + sc_biguint<32>(m_45_reg_26209.read()));
}

void sha256_transform::thread_add_ln53_182_fu_19376_p2() {
    add_ln53_182_fu_19376_p2 = (!add_ln53_181_fu_19371_p2.read().is_01() || !xor_ln53_183_reg_26968.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_181_fu_19371_p2.read()) + sc_biguint<32>(xor_ln53_183_reg_26968.read()));
}

void sha256_transform::thread_add_ln53_183_fu_19381_p2() {
    add_ln53_183_fu_19381_p2 = (!add_ln53_182_fu_19376_p2.read().is_01() || !add_ln53_180_fu_19367_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_182_fu_19376_p2.read()) + sc_biguint<32>(add_ln53_180_fu_19367_p2.read()));
}

void sha256_transform::thread_add_ln53_184_fu_19638_p2() {
    add_ln53_184_fu_19638_p2 = (!xor_ln53_185_reg_27001.read().is_01() || !add_ln58_42_reg_26881.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_185_reg_27001.read()) + sc_biguint<32>(add_ln58_42_reg_26881.read()));
}

void sha256_transform::thread_add_ln53_185_fu_19598_p2() {
    add_ln53_185_fu_19598_p2 = (!ap_const_lv32_F40E3585.is_01() || !m_46_reg_26252.read().is_01())? sc_lv<32>(): (sc_bigint<32>(ap_const_lv32_F40E3585) + sc_biguint<32>(m_46_reg_26252.read()));
}

void sha256_transform::thread_add_ln53_186_fu_19603_p2() {
    add_ln53_186_fu_19603_p2 = (!add_ln53_185_fu_19598_p2.read().is_01() || !xor_ln53_187_fu_19592_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_185_fu_19598_p2.read()) + sc_biguint<32>(xor_ln53_187_fu_19592_p2.read()));
}

void sha256_transform::thread_add_ln53_187_fu_19642_p2() {
    add_ln53_187_fu_19642_p2 = (!add_ln53_186_reg_27006.read().is_01() || !add_ln53_184_fu_19638_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_186_reg_27006.read()) + sc_biguint<32>(add_ln53_184_fu_19638_p2.read()));
}

void sha256_transform::thread_add_ln53_188_fu_19830_p2() {
    add_ln53_188_fu_19830_p2 = (!xor_ln53_189_reg_27038.read().is_01() || !add_ln58_43_reg_26919.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_189_reg_27038.read()) + sc_biguint<32>(add_ln58_43_reg_26919.read()));
}

void sha256_transform::thread_add_ln53_189_fu_19834_p2() {
    add_ln53_189_fu_19834_p2 = (!ap_const_lv32_106AA070.is_01() || !m_47_reg_26258.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_106AA070) + sc_biguint<32>(m_47_reg_26258.read()));
}

void sha256_transform::thread_add_ln53_18_fu_3164_p2() {
    add_ln53_18_fu_3164_p2 = (!add_ln53_17_fu_3158_p2.read().is_01() || !xor_ln53_19_fu_3152_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_17_fu_3158_p2.read()) + sc_biguint<32>(xor_ln53_19_fu_3152_p2.read()));
}

void sha256_transform::thread_add_ln53_190_fu_19839_p2() {
    add_ln53_190_fu_19839_p2 = (!add_ln53_189_fu_19834_p2.read().is_01() || !xor_ln53_191_reg_27043.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_189_fu_19834_p2.read()) + sc_biguint<32>(xor_ln53_191_reg_27043.read()));
}

void sha256_transform::thread_add_ln53_191_fu_19844_p2() {
    add_ln53_191_fu_19844_p2 = (!add_ln53_190_fu_19839_p2.read().is_01() || !add_ln53_188_fu_19830_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_190_fu_19839_p2.read()) + sc_biguint<32>(add_ln53_188_fu_19830_p2.read()));
}

void sha256_transform::thread_add_ln53_192_fu_20101_p2() {
    add_ln53_192_fu_20101_p2 = (!xor_ln53_193_reg_27076.read().is_01() || !add_ln58_44_reg_26956.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_193_reg_27076.read()) + sc_biguint<32>(add_ln58_44_reg_26956.read()));
}

void sha256_transform::thread_add_ln53_193_fu_20061_p2() {
    add_ln53_193_fu_20061_p2 = (!ap_const_lv32_19A4C116.is_01() || !m_48_reg_26322.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_19A4C116) + sc_biguint<32>(m_48_reg_26322.read()));
}

void sha256_transform::thread_add_ln53_194_fu_20066_p2() {
    add_ln53_194_fu_20066_p2 = (!add_ln53_193_fu_20061_p2.read().is_01() || !xor_ln53_195_fu_20055_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_193_fu_20061_p2.read()) + sc_biguint<32>(xor_ln53_195_fu_20055_p2.read()));
}

void sha256_transform::thread_add_ln53_195_fu_20105_p2() {
    add_ln53_195_fu_20105_p2 = (!add_ln53_194_reg_27081.read().is_01() || !add_ln53_192_fu_20101_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_194_reg_27081.read()) + sc_biguint<32>(add_ln53_192_fu_20101_p2.read()));
}

void sha256_transform::thread_add_ln53_196_fu_20293_p2() {
    add_ln53_196_fu_20293_p2 = (!xor_ln53_197_reg_27113.read().is_01() || !add_ln58_45_reg_26994.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_197_reg_27113.read()) + sc_biguint<32>(add_ln58_45_reg_26994.read()));
}

void sha256_transform::thread_add_ln53_197_fu_20297_p2() {
    add_ln53_197_fu_20297_p2 = (!ap_const_lv32_1E376C08.is_01() || !m_49_reg_26328.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_1E376C08) + sc_biguint<32>(m_49_reg_26328.read()));
}

void sha256_transform::thread_add_ln53_198_fu_20302_p2() {
    add_ln53_198_fu_20302_p2 = (!add_ln53_197_fu_20297_p2.read().is_01() || !xor_ln53_199_reg_27118.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_197_fu_20297_p2.read()) + sc_biguint<32>(xor_ln53_199_reg_27118.read()));
}

void sha256_transform::thread_add_ln53_199_fu_20307_p2() {
    add_ln53_199_fu_20307_p2 = (!add_ln53_198_fu_20302_p2.read().is_01() || !add_ln53_196_fu_20293_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_198_fu_20302_p2.read()) + sc_biguint<32>(add_ln53_196_fu_20293_p2.read()));
}

void sha256_transform::thread_add_ln53_19_fu_3649_p2() {
    add_ln53_19_fu_3649_p2 = (!add_ln53_18_reg_24543.read().is_01() || !add_ln53_16_fu_3645_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_18_reg_24543.read()) + sc_biguint<32>(add_ln53_16_fu_3645_p2.read()));
}

void sha256_transform::thread_add_ln53_1_fu_1206_p2() {
    add_ln53_1_fu_1206_p2 = (!ap_const_lv32_428A2F98.is_01() || !m_0_fu_1000_p5.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_428A2F98) + sc_biguint<32>(m_0_fu_1000_p5.read()));
}

void sha256_transform::thread_add_ln53_200_fu_20564_p2() {
    add_ln53_200_fu_20564_p2 = (!xor_ln53_201_reg_27151.read().is_01() || !add_ln58_46_reg_27031.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_201_reg_27151.read()) + sc_biguint<32>(add_ln58_46_reg_27031.read()));
}

void sha256_transform::thread_add_ln53_201_fu_20524_p2() {
    add_ln53_201_fu_20524_p2 = (!ap_const_lv32_2748774C.is_01() || !m_50_reg_26386.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_2748774C) + sc_biguint<32>(m_50_reg_26386.read()));
}

void sha256_transform::thread_add_ln53_202_fu_20529_p2() {
    add_ln53_202_fu_20529_p2 = (!add_ln53_201_fu_20524_p2.read().is_01() || !xor_ln53_203_fu_20518_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_201_fu_20524_p2.read()) + sc_biguint<32>(xor_ln53_203_fu_20518_p2.read()));
}

void sha256_transform::thread_add_ln53_203_fu_20568_p2() {
    add_ln53_203_fu_20568_p2 = (!add_ln53_202_reg_27156.read().is_01() || !add_ln53_200_fu_20564_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_202_reg_27156.read()) + sc_biguint<32>(add_ln53_200_fu_20564_p2.read()));
}

void sha256_transform::thread_add_ln53_204_fu_20756_p2() {
    add_ln53_204_fu_20756_p2 = (!xor_ln53_205_reg_27188.read().is_01() || !add_ln58_47_reg_27069.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_205_reg_27188.read()) + sc_biguint<32>(add_ln58_47_reg_27069.read()));
}

void sha256_transform::thread_add_ln53_205_fu_20760_p2() {
    add_ln53_205_fu_20760_p2 = (!ap_const_lv32_34B0BCB5.is_01() || !m_51_reg_26392.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_34B0BCB5) + sc_biguint<32>(m_51_reg_26392.read()));
}

void sha256_transform::thread_add_ln53_206_fu_20765_p2() {
    add_ln53_206_fu_20765_p2 = (!add_ln53_205_fu_20760_p2.read().is_01() || !xor_ln53_207_reg_27193.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_205_fu_20760_p2.read()) + sc_biguint<32>(xor_ln53_207_reg_27193.read()));
}

void sha256_transform::thread_add_ln53_207_fu_20770_p2() {
    add_ln53_207_fu_20770_p2 = (!add_ln53_206_fu_20765_p2.read().is_01() || !add_ln53_204_fu_20756_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_206_fu_20765_p2.read()) + sc_biguint<32>(add_ln53_204_fu_20756_p2.read()));
}

void sha256_transform::thread_add_ln53_208_fu_21027_p2() {
    add_ln53_208_fu_21027_p2 = (!xor_ln53_209_reg_27226.read().is_01() || !add_ln58_48_reg_27106.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_209_reg_27226.read()) + sc_biguint<32>(add_ln58_48_reg_27106.read()));
}

void sha256_transform::thread_add_ln53_209_fu_20987_p2() {
    add_ln53_209_fu_20987_p2 = (!ap_const_lv32_391C0CB3.is_01() || !m_52_reg_26414.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_391C0CB3) + sc_biguint<32>(m_52_reg_26414.read()));
}

void sha256_transform::thread_add_ln53_20_fu_3874_p2() {
    add_ln53_20_fu_3874_p2 = (!xor_ln53_21_reg_24635.read().is_01() || !add_ln58_1_reg_24197.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_21_reg_24635.read()) + sc_biguint<32>(add_ln58_1_reg_24197.read()));
}

void sha256_transform::thread_add_ln53_210_fu_20992_p2() {
    add_ln53_210_fu_20992_p2 = (!add_ln53_209_fu_20987_p2.read().is_01() || !xor_ln53_211_fu_20981_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_209_fu_20987_p2.read()) + sc_biguint<32>(xor_ln53_211_fu_20981_p2.read()));
}

void sha256_transform::thread_add_ln53_211_fu_21031_p2() {
    add_ln53_211_fu_21031_p2 = (!add_ln53_210_reg_27231.read().is_01() || !add_ln53_208_fu_21027_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_210_reg_27231.read()) + sc_biguint<32>(add_ln53_208_fu_21027_p2.read()));
}

void sha256_transform::thread_add_ln53_212_fu_21219_p2() {
    add_ln53_212_fu_21219_p2 = (!xor_ln53_213_reg_27263.read().is_01() || !add_ln58_49_reg_27144.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_213_reg_27263.read()) + sc_biguint<32>(add_ln58_49_reg_27144.read()));
}

void sha256_transform::thread_add_ln53_213_fu_21223_p2() {
    add_ln53_213_fu_21223_p2 = (!ap_const_lv32_4ED8AA4A.is_01() || !m_53_reg_26420.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_4ED8AA4A) + sc_biguint<32>(m_53_reg_26420.read()));
}

void sha256_transform::thread_add_ln53_214_fu_21228_p2() {
    add_ln53_214_fu_21228_p2 = (!add_ln53_213_fu_21223_p2.read().is_01() || !xor_ln53_215_reg_27268.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_213_fu_21223_p2.read()) + sc_biguint<32>(xor_ln53_215_reg_27268.read()));
}

void sha256_transform::thread_add_ln53_215_fu_21233_p2() {
    add_ln53_215_fu_21233_p2 = (!add_ln53_214_fu_21228_p2.read().is_01() || !add_ln53_212_fu_21219_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_214_fu_21228_p2.read()) + sc_biguint<32>(add_ln53_212_fu_21219_p2.read()));
}

void sha256_transform::thread_add_ln53_216_fu_21490_p2() {
    add_ln53_216_fu_21490_p2 = (!xor_ln53_217_reg_27301.read().is_01() || !add_ln58_50_reg_27181.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_217_reg_27301.read()) + sc_biguint<32>(add_ln58_50_reg_27181.read()));
}

void sha256_transform::thread_add_ln53_217_fu_21450_p2() {
    add_ln53_217_fu_21450_p2 = (!ap_const_lv32_5B9CCA4F.is_01() || !m_54_reg_26468.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_5B9CCA4F) + sc_biguint<32>(m_54_reg_26468.read()));
}

void sha256_transform::thread_add_ln53_218_fu_21455_p2() {
    add_ln53_218_fu_21455_p2 = (!add_ln53_217_fu_21450_p2.read().is_01() || !xor_ln53_219_fu_21444_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_217_fu_21450_p2.read()) + sc_biguint<32>(xor_ln53_219_fu_21444_p2.read()));
}

void sha256_transform::thread_add_ln53_219_fu_21494_p2() {
    add_ln53_219_fu_21494_p2 = (!add_ln53_218_reg_27306.read().is_01() || !add_ln53_216_fu_21490_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_218_reg_27306.read()) + sc_biguint<32>(add_ln53_216_fu_21490_p2.read()));
}

void sha256_transform::thread_add_ln53_21_fu_3878_p2() {
    add_ln53_21_fu_3878_p2 = (!ap_const_lv32_59F111F1.is_01() || !m_5_fu_3759_p5.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_59F111F1) + sc_biguint<32>(m_5_fu_3759_p5.read()));
}

void sha256_transform::thread_add_ln53_220_fu_21682_p2() {
    add_ln53_220_fu_21682_p2 = (!xor_ln53_221_reg_27338.read().is_01() || !add_ln58_51_reg_27219.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_221_reg_27338.read()) + sc_biguint<32>(add_ln58_51_reg_27219.read()));
}

void sha256_transform::thread_add_ln53_221_fu_21686_p2() {
    add_ln53_221_fu_21686_p2 = (!ap_const_lv32_682E6FF3.is_01() || !m_55_reg_26474.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_682E6FF3) + sc_biguint<32>(m_55_reg_26474.read()));
}

void sha256_transform::thread_add_ln53_222_fu_21691_p2() {
    add_ln53_222_fu_21691_p2 = (!add_ln53_221_fu_21686_p2.read().is_01() || !xor_ln53_223_reg_27343.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_221_fu_21686_p2.read()) + sc_biguint<32>(xor_ln53_223_reg_27343.read()));
}

void sha256_transform::thread_add_ln53_223_fu_21696_p2() {
    add_ln53_223_fu_21696_p2 = (!add_ln53_222_fu_21691_p2.read().is_01() || !add_ln53_220_fu_21682_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_222_fu_21691_p2.read()) + sc_biguint<32>(add_ln53_220_fu_21682_p2.read()));
}

void sha256_transform::thread_add_ln53_224_fu_21953_p2() {
    add_ln53_224_fu_21953_p2 = (!xor_ln53_225_reg_27376.read().is_01() || !add_ln58_52_reg_27256.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_225_reg_27376.read()) + sc_biguint<32>(add_ln58_52_reg_27256.read()));
}

void sha256_transform::thread_add_ln53_225_fu_21913_p2() {
    add_ln53_225_fu_21913_p2 = (!ap_const_lv32_748F82EE.is_01() || !m_56_reg_26527.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_748F82EE) + sc_biguint<32>(m_56_reg_26527.read()));
}

void sha256_transform::thread_add_ln53_226_fu_21918_p2() {
    add_ln53_226_fu_21918_p2 = (!add_ln53_225_fu_21913_p2.read().is_01() || !xor_ln53_227_fu_21907_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_225_fu_21913_p2.read()) + sc_biguint<32>(xor_ln53_227_fu_21907_p2.read()));
}

void sha256_transform::thread_add_ln53_227_fu_21957_p2() {
    add_ln53_227_fu_21957_p2 = (!add_ln53_226_reg_27381.read().is_01() || !add_ln53_224_fu_21953_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_226_reg_27381.read()) + sc_biguint<32>(add_ln53_224_fu_21953_p2.read()));
}

void sha256_transform::thread_add_ln53_228_fu_22145_p2() {
    add_ln53_228_fu_22145_p2 = (!xor_ln53_229_reg_27413.read().is_01() || !add_ln58_53_reg_27294.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_229_reg_27413.read()) + sc_biguint<32>(add_ln58_53_reg_27294.read()));
}

void sha256_transform::thread_add_ln53_229_fu_22149_p2() {
    add_ln53_229_fu_22149_p2 = (!ap_const_lv32_78A5636F.is_01() || !m_57_reg_26533_pp0_iter2_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_78A5636F) + sc_biguint<32>(m_57_reg_26533_pp0_iter2_reg.read()));
}

void sha256_transform::thread_add_ln53_22_fu_3884_p2() {
    add_ln53_22_fu_3884_p2 = (!add_ln53_21_fu_3878_p2.read().is_01() || !xor_ln53_23_reg_24640.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_21_fu_3878_p2.read()) + sc_biguint<32>(xor_ln53_23_reg_24640.read()));
}

void sha256_transform::thread_add_ln53_230_fu_22154_p2() {
    add_ln53_230_fu_22154_p2 = (!add_ln53_229_fu_22149_p2.read().is_01() || !xor_ln53_231_reg_27418.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_229_fu_22149_p2.read()) + sc_biguint<32>(xor_ln53_231_reg_27418.read()));
}

void sha256_transform::thread_add_ln53_231_fu_22159_p2() {
    add_ln53_231_fu_22159_p2 = (!add_ln53_230_fu_22154_p2.read().is_01() || !add_ln53_228_fu_22145_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_230_fu_22154_p2.read()) + sc_biguint<32>(add_ln53_228_fu_22145_p2.read()));
}

void sha256_transform::thread_add_ln53_232_fu_22415_p2() {
    add_ln53_232_fu_22415_p2 = (!ap_const_lv32_84C87814.is_01() || !xor_ln53_233_reg_27451.read().is_01())? sc_lv<32>(): (sc_bigint<32>(ap_const_lv32_84C87814) + sc_biguint<32>(xor_ln53_233_reg_27451.read()));
}

void sha256_transform::thread_add_ln53_233_fu_22376_p2() {
    add_ln53_233_fu_22376_p2 = (!xor_ln53_235_fu_22370_p2.read().is_01() || !m_58_reg_26554_pp0_iter2_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_235_fu_22370_p2.read()) + sc_biguint<32>(m_58_reg_26554_pp0_iter2_reg.read()));
}

void sha256_transform::thread_add_ln53_234_fu_22381_p2() {
    add_ln53_234_fu_22381_p2 = (!add_ln53_233_fu_22376_p2.read().is_01() || !add_ln58_54_reg_27331.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_233_fu_22376_p2.read()) + sc_biguint<32>(add_ln58_54_reg_27331.read()));
}

void sha256_transform::thread_add_ln53_235_fu_22420_p2() {
    add_ln53_235_fu_22420_p2 = (!add_ln53_234_reg_27456.read().is_01() || !add_ln53_232_fu_22415_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_234_reg_27456.read()) + sc_biguint<32>(add_ln53_232_fu_22415_p2.read()));
}

void sha256_transform::thread_add_ln53_236_fu_22608_p2() {
    add_ln53_236_fu_22608_p2 = (!ap_const_lv32_8CC70208.is_01() || !xor_ln53_237_reg_27488.read().is_01())? sc_lv<32>(): (sc_bigint<32>(ap_const_lv32_8CC70208) + sc_biguint<32>(xor_ln53_237_reg_27488.read()));
}

void sha256_transform::thread_add_ln53_237_fu_22613_p2() {
    add_ln53_237_fu_22613_p2 = (!xor_ln53_239_reg_27493.read().is_01() || !m_59_reg_26559_pp0_iter2_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_239_reg_27493.read()) + sc_biguint<32>(m_59_reg_26559_pp0_iter2_reg.read()));
}

void sha256_transform::thread_add_ln53_238_fu_22617_p2() {
    add_ln53_238_fu_22617_p2 = (!add_ln53_237_fu_22613_p2.read().is_01() || !add_ln58_55_reg_27369.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_237_fu_22613_p2.read()) + sc_biguint<32>(add_ln58_55_reg_27369.read()));
}

void sha256_transform::thread_add_ln53_239_fu_22622_p2() {
    add_ln53_239_fu_22622_p2 = (!add_ln53_238_fu_22617_p2.read().is_01() || !add_ln53_236_fu_22608_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_238_fu_22617_p2.read()) + sc_biguint<32>(add_ln53_236_fu_22608_p2.read()));
}

void sha256_transform::thread_add_ln53_23_fu_3889_p2() {
    add_ln53_23_fu_3889_p2 = (!add_ln53_22_fu_3884_p2.read().is_01() || !add_ln53_20_fu_3874_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_22_fu_3884_p2.read()) + sc_biguint<32>(add_ln53_20_fu_3874_p2.read()));
}

void sha256_transform::thread_add_ln53_240_fu_22878_p2() {
    add_ln53_240_fu_22878_p2 = (!ap_const_lv32_90BEFFFA.is_01() || !xor_ln53_241_reg_27526.read().is_01())? sc_lv<32>(): (sc_bigint<32>(ap_const_lv32_90BEFFFA) + sc_biguint<32>(xor_ln53_241_reg_27526.read()));
}

void sha256_transform::thread_add_ln53_241_fu_22839_p2() {
    add_ln53_241_fu_22839_p2 = (!xor_ln53_243_fu_22833_p2.read().is_01() || !m_60_reg_26611_pp0_iter2_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_243_fu_22833_p2.read()) + sc_biguint<32>(m_60_reg_26611_pp0_iter2_reg.read()));
}

void sha256_transform::thread_add_ln53_242_fu_22844_p2() {
    add_ln53_242_fu_22844_p2 = (!add_ln53_241_fu_22839_p2.read().is_01() || !add_ln58_56_reg_27406.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_241_fu_22839_p2.read()) + sc_biguint<32>(add_ln58_56_reg_27406.read()));
}

void sha256_transform::thread_add_ln53_243_fu_22883_p2() {
    add_ln53_243_fu_22883_p2 = (!add_ln53_242_reg_27531.read().is_01() || !add_ln53_240_fu_22878_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_242_reg_27531.read()) + sc_biguint<32>(add_ln53_240_fu_22878_p2.read()));
}

void sha256_transform::thread_add_ln53_244_fu_23071_p2() {
    add_ln53_244_fu_23071_p2 = (!ap_const_lv32_A4506CEB.is_01() || !xor_ln53_245_reg_27563.read().is_01())? sc_lv<32>(): (sc_bigint<32>(ap_const_lv32_A4506CEB) + sc_biguint<32>(xor_ln53_245_reg_27563.read()));
}

void sha256_transform::thread_add_ln53_245_fu_23076_p2() {
    add_ln53_245_fu_23076_p2 = (!xor_ln53_247_reg_27568.read().is_01() || !m_61_reg_26616_pp0_iter2_reg.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_247_reg_27568.read()) + sc_biguint<32>(m_61_reg_26616_pp0_iter2_reg.read()));
}

void sha256_transform::thread_add_ln53_246_fu_23080_p2() {
    add_ln53_246_fu_23080_p2 = (!add_ln53_245_fu_23076_p2.read().is_01() || !add_ln58_57_reg_27444.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_245_fu_23076_p2.read()) + sc_biguint<32>(add_ln58_57_reg_27444.read()));
}

void sha256_transform::thread_add_ln53_247_fu_23085_p2() {
    add_ln53_247_fu_23085_p2 = (!add_ln53_246_fu_23080_p2.read().is_01() || !add_ln53_244_fu_23071_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_246_fu_23080_p2.read()) + sc_biguint<32>(add_ln53_244_fu_23071_p2.read()));
}

void sha256_transform::thread_add_ln53_248_fu_23302_p2() {
    add_ln53_248_fu_23302_p2 = (!ap_const_lv32_BEF9A3F7.is_01() || !xor_ln53_249_fu_23274_p2.read().is_01())? sc_lv<32>(): (sc_bigint<32>(ap_const_lv32_BEF9A3F7) + sc_biguint<32>(xor_ln53_249_fu_23274_p2.read()));
}

void sha256_transform::thread_add_ln53_249_fu_23308_p2() {
    add_ln53_249_fu_23308_p2 = (!add_ln58_58_reg_27481.read().is_01() || !xor_ln53_251_fu_23296_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln58_58_reg_27481.read()) + sc_biguint<32>(xor_ln53_251_fu_23296_p2.read()));
}

void sha256_transform::thread_add_ln53_24_fu_4158_p2() {
    add_ln53_24_fu_4158_p2 = (!ap_const_lv32_923F82A4.is_01() || !xor_ln53_25_reg_24698.read().is_01())? sc_lv<32>(): (sc_bigint<32>(ap_const_lv32_923F82A4) + sc_biguint<32>(xor_ln53_25_reg_24698.read()));
}

void sha256_transform::thread_add_ln53_250_fu_23342_p2() {
    add_ln53_250_fu_23342_p2 = (!add_ln53_249_reg_27605.read().is_01() || !add_ln53_248_reg_27600.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_249_reg_27605.read()) + sc_biguint<32>(add_ln53_248_reg_27600.read()));
}

void sha256_transform::thread_add_ln53_251_fu_17526_p2() {
    add_ln53_251_fu_17526_p2 = (!xor_ln40_185_reg_26626.read().is_01() || !m_55_reg_26474.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln40_185_reg_26626.read()) + sc_biguint<32>(m_55_reg_26474.read()));
}

void sha256_transform::thread_add_ln53_252_fu_23346_p2() {
    add_ln53_252_fu_23346_p2 = (!add_ln53_254_reg_26674_pp0_iter2_reg.read().is_01() || !add_ln53_250_fu_23342_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_254_reg_26674_pp0_iter2_reg.read()) + sc_biguint<32>(add_ln53_250_fu_23342_p2.read()));
}

void sha256_transform::thread_add_ln53_253_fu_15167_p2() {
    add_ln53_253_fu_15167_p2 = (!m_46_fu_14647_p2.read().is_01() || !xor_ln40_187_fu_14939_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_46_fu_14647_p2.read()) + sc_biguint<32>(xor_ln40_187_fu_14939_p2.read()));
}

void sha256_transform::thread_add_ln53_254_fu_17530_p2() {
    add_ln53_254_fu_17530_p2 = (!add_ln53_253_reg_26317.read().is_01() || !add_ln53_251_fu_17526_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_253_reg_26317.read()) + sc_biguint<32>(add_ln53_251_fu_17526_p2.read()));
}

void sha256_transform::thread_add_ln53_255_fu_23646_p2() {
    add_ln53_255_fu_23646_p2 = (!add_ln53_261_reg_26606_pp0_iter2_reg.read().is_01() || !add_ln53_258_fu_23640_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_261_reg_26606_pp0_iter2_reg.read()) + sc_biguint<32>(add_ln53_258_fu_23640_p2.read()));
}

void sha256_transform::thread_add_ln53_256_fu_23630_p2() {
    add_ln53_256_fu_23630_p2 = (!xor_ln53_253_fu_23624_p2.read().is_01() || !add_ln58_59_reg_27519.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_253_fu_23624_p2.read()) + sc_biguint<32>(add_ln58_59_reg_27519.read()));
}

void sha256_transform::thread_add_ln53_257_fu_23635_p2() {
    add_ln53_257_fu_23635_p2 = (!xor_ln53_255_reg_27639.read().is_01() || !xor_ln40_189_fu_23523_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_255_reg_27639.read()) + sc_biguint<32>(xor_ln40_189_fu_23523_p2.read()));
}

void sha256_transform::thread_add_ln53_258_fu_23640_p2() {
    add_ln53_258_fu_23640_p2 = (!add_ln53_257_fu_23635_p2.read().is_01() || !add_ln53_256_fu_23630_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_257_fu_23635_p2.read()) + sc_biguint<32>(add_ln53_256_fu_23630_p2.read()));
}

void sha256_transform::thread_add_ln53_259_fu_17178_p2() {
    add_ln53_259_fu_17178_p2 = (!m_56_reg_26527.read().is_01() || !m_47_reg_26258.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_56_reg_26527.read()) + sc_biguint<32>(m_47_reg_26258.read()));
}

void sha256_transform::thread_add_ln53_25_fu_4118_p2() {
    add_ln53_25_fu_4118_p2 = (!xor_ln53_27_fu_4112_p2.read().is_01() || !m_6_fu_3895_p5.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_27_fu_4112_p2.read()) + sc_biguint<32>(m_6_fu_3895_p5.read()));
}

void sha256_transform::thread_add_ln53_260_fu_15627_p2() {
    add_ln53_260_fu_15627_p2 = (!ap_const_lv32_C67178F2.is_01() || !xor_ln40_191_fu_15400_p2.read().is_01())? sc_lv<32>(): (sc_bigint<32>(ap_const_lv32_C67178F2) + sc_biguint<32>(xor_ln40_191_fu_15400_p2.read()));
}

void sha256_transform::thread_add_ln53_261_fu_17182_p2() {
    add_ln53_261_fu_17182_p2 = (!add_ln53_260_reg_26381.read().is_01() || !add_ln53_259_fu_17178_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_260_reg_26381.read()) + sc_biguint<32>(add_ln53_259_fu_17178_p2.read()));
}

void sha256_transform::thread_add_ln53_26_fu_4124_p2() {
    add_ln53_26_fu_4124_p2 = (!add_ln53_25_fu_4118_p2.read().is_01() || !add_ln58_2_reg_24318.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_25_fu_4118_p2.read()) + sc_biguint<32>(add_ln58_2_reg_24318.read()));
}

void sha256_transform::thread_add_ln53_27_fu_4163_p2() {
    add_ln53_27_fu_4163_p2 = (!add_ln53_26_reg_24703.read().is_01() || !add_ln53_24_fu_4158_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_26_reg_24703.read()) + sc_biguint<32>(add_ln53_24_fu_4158_p2.read()));
}

void sha256_transform::thread_add_ln53_28_fu_4359_p2() {
    add_ln53_28_fu_4359_p2 = (!ap_const_lv32_AB1C5ED5.is_01() || !xor_ln53_29_reg_24735.read().is_01())? sc_lv<32>(): (sc_bigint<32>(ap_const_lv32_AB1C5ED5) + sc_biguint<32>(xor_ln53_29_reg_24735.read()));
}

void sha256_transform::thread_add_ln53_29_fu_4364_p2() {
    add_ln53_29_fu_4364_p2 = (!xor_ln53_31_reg_24740.read().is_01() || !m_7_fu_4351_p5.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_31_reg_24740.read()) + sc_biguint<32>(m_7_fu_4351_p5.read()));
}

void sha256_transform::thread_add_ln53_2_fu_1212_p2() {
    add_ln53_2_fu_1212_p2 = (!add_ln53_1_fu_1206_p2.read().is_01() || !xor_ln53_3_fu_1200_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_1_fu_1206_p2.read()) + sc_biguint<32>(xor_ln53_3_fu_1200_p2.read()));
}

void sha256_transform::thread_add_ln53_30_fu_4369_p2() {
    add_ln53_30_fu_4369_p2 = (!add_ln53_29_fu_4364_p2.read().is_01() || !add_ln58_3_reg_24531.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_29_fu_4364_p2.read()) + sc_biguint<32>(add_ln58_3_reg_24531.read()));
}

void sha256_transform::thread_add_ln53_31_fu_4374_p2() {
    add_ln53_31_fu_4374_p2 = (!add_ln53_30_fu_4369_p2.read().is_01() || !add_ln53_28_fu_4359_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_30_fu_4369_p2.read()) + sc_biguint<32>(add_ln53_28_fu_4359_p2.read()));
}

void sha256_transform::thread_add_ln53_32_fu_4640_p2() {
    add_ln53_32_fu_4640_p2 = (!xor_ln53_33_reg_24783.read().is_01() || !add_ln58_4_reg_24628.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_33_reg_24783.read()) + sc_biguint<32>(add_ln58_4_reg_24628.read()));
}

void sha256_transform::thread_add_ln53_33_fu_4599_p2() {
    add_ln53_33_fu_4599_p2 = (!ap_const_lv32_D807AA98.is_01() || !m_8_fu_4380_p5.read().is_01())? sc_lv<32>(): (sc_bigint<32>(ap_const_lv32_D807AA98) + sc_biguint<32>(m_8_fu_4380_p5.read()));
}

void sha256_transform::thread_add_ln53_34_fu_4605_p2() {
    add_ln53_34_fu_4605_p2 = (!add_ln53_33_fu_4599_p2.read().is_01() || !xor_ln53_35_fu_4593_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_33_fu_4599_p2.read()) + sc_biguint<32>(xor_ln53_35_fu_4593_p2.read()));
}

void sha256_transform::thread_add_ln53_35_fu_4644_p2() {
    add_ln53_35_fu_4644_p2 = (!add_ln53_34_reg_24788.read().is_01() || !add_ln53_32_fu_4640_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_34_reg_24788.read()) + sc_biguint<32>(add_ln53_32_fu_4640_p2.read()));
}

void sha256_transform::thread_add_ln53_36_fu_4840_p2() {
    add_ln53_36_fu_4840_p2 = (!xor_ln53_37_reg_24820.read().is_01() || !add_ln58_5_reg_24691.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_37_reg_24820.read()) + sc_biguint<32>(add_ln58_5_reg_24691.read()));
}

void sha256_transform::thread_add_ln53_37_fu_4844_p2() {
    add_ln53_37_fu_4844_p2 = (!ap_const_lv32_12835B01.is_01() || !m_9_fu_4832_p5.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_12835B01) + sc_biguint<32>(m_9_fu_4832_p5.read()));
}

void sha256_transform::thread_add_ln53_38_fu_4850_p2() {
    add_ln53_38_fu_4850_p2 = (!add_ln53_37_fu_4844_p2.read().is_01() || !xor_ln53_39_reg_24825.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_37_fu_4844_p2.read()) + sc_biguint<32>(xor_ln53_39_reg_24825.read()));
}

void sha256_transform::thread_add_ln53_39_fu_4855_p2() {
    add_ln53_39_fu_4855_p2 = (!add_ln53_38_fu_4850_p2.read().is_01() || !add_ln53_36_fu_4840_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_38_fu_4850_p2.read()) + sc_biguint<32>(add_ln53_36_fu_4840_p2.read()));
}

void sha256_transform::thread_add_ln53_3_fu_1407_p2() {
    add_ln53_3_fu_1407_p2 = (!add_ln53_2_reg_23947.read().is_01() || !add_ln53_fu_1402_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_2_reg_23947.read()) + sc_biguint<32>(add_ln53_fu_1402_p2.read()));
}

void sha256_transform::thread_add_ln53_40_fu_5125_p2() {
    add_ln53_40_fu_5125_p2 = (!xor_ln53_41_reg_24870.read().is_01() || !add_ln58_6_reg_24728.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_41_reg_24870.read()) + sc_biguint<32>(add_ln58_6_reg_24728.read()));
}

void sha256_transform::thread_add_ln53_41_fu_5084_p2() {
    add_ln53_41_fu_5084_p2 = (!ap_const_lv32_243185BE.is_01() || !m_10_fu_4861_p5.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_243185BE) + sc_biguint<32>(m_10_fu_4861_p5.read()));
}

void sha256_transform::thread_add_ln53_42_fu_5090_p2() {
    add_ln53_42_fu_5090_p2 = (!add_ln53_41_fu_5084_p2.read().is_01() || !xor_ln53_43_fu_5078_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_41_fu_5084_p2.read()) + sc_biguint<32>(xor_ln53_43_fu_5078_p2.read()));
}

void sha256_transform::thread_add_ln53_43_fu_5129_p2() {
    add_ln53_43_fu_5129_p2 = (!add_ln53_42_reg_24875.read().is_01() || !add_ln53_40_fu_5125_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_42_reg_24875.read()) + sc_biguint<32>(add_ln53_40_fu_5125_p2.read()));
}

void sha256_transform::thread_add_ln53_44_fu_5325_p2() {
    add_ln53_44_fu_5325_p2 = (!xor_ln53_45_reg_24907.read().is_01() || !add_ln58_7_reg_24776.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_45_reg_24907.read()) + sc_biguint<32>(add_ln58_7_reg_24776.read()));
}

void sha256_transform::thread_add_ln53_45_fu_5329_p2() {
    add_ln53_45_fu_5329_p2 = (!ap_const_lv32_550C7DC3.is_01() || !m_11_fu_5317_p5.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_550C7DC3) + sc_biguint<32>(m_11_fu_5317_p5.read()));
}

void sha256_transform::thread_add_ln53_46_fu_5335_p2() {
    add_ln53_46_fu_5335_p2 = (!add_ln53_45_fu_5329_p2.read().is_01() || !xor_ln53_47_reg_24912.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_45_fu_5329_p2.read()) + sc_biguint<32>(xor_ln53_47_reg_24912.read()));
}

void sha256_transform::thread_add_ln53_47_fu_5340_p2() {
    add_ln53_47_fu_5340_p2 = (!add_ln53_46_fu_5335_p2.read().is_01() || !add_ln53_44_fu_5325_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_46_fu_5335_p2.read()) + sc_biguint<32>(add_ln53_44_fu_5325_p2.read()));
}

void sha256_transform::thread_add_ln53_48_fu_5610_p2() {
    add_ln53_48_fu_5610_p2 = (!xor_ln53_49_reg_24957.read().is_01() || !add_ln58_8_reg_24813.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_49_reg_24957.read()) + sc_biguint<32>(add_ln58_8_reg_24813.read()));
}

void sha256_transform::thread_add_ln53_49_fu_5569_p2() {
    add_ln53_49_fu_5569_p2 = (!ap_const_lv32_72BE5D74.is_01() || !m_12_fu_5346_p5.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_72BE5D74) + sc_biguint<32>(m_12_fu_5346_p5.read()));
}

void sha256_transform::thread_add_ln53_4_fu_1714_p2() {
    add_ln53_4_fu_1714_p2 = (!ctx_state_6_read_1_reg_23871.read().is_01() || !xor_ln53_5_reg_24024.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ctx_state_6_read_1_reg_23871.read()) + sc_biguint<32>(xor_ln53_5_reg_24024.read()));
}

void sha256_transform::thread_add_ln53_50_fu_5575_p2() {
    add_ln53_50_fu_5575_p2 = (!add_ln53_49_fu_5569_p2.read().is_01() || !xor_ln53_51_fu_5563_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_49_fu_5569_p2.read()) + sc_biguint<32>(xor_ln53_51_fu_5563_p2.read()));
}

void sha256_transform::thread_add_ln53_51_fu_5614_p2() {
    add_ln53_51_fu_5614_p2 = (!add_ln53_50_reg_24962.read().is_01() || !add_ln53_48_fu_5610_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_50_reg_24962.read()) + sc_biguint<32>(add_ln53_48_fu_5610_p2.read()));
}

void sha256_transform::thread_add_ln53_52_fu_5810_p2() {
    add_ln53_52_fu_5810_p2 = (!ap_const_lv32_80DEB1FE.is_01() || !xor_ln53_53_reg_24994.read().is_01())? sc_lv<32>(): (sc_bigint<32>(ap_const_lv32_80DEB1FE) + sc_biguint<32>(xor_ln53_53_reg_24994.read()));
}

void sha256_transform::thread_add_ln53_53_fu_5815_p2() {
    add_ln53_53_fu_5815_p2 = (!xor_ln53_55_reg_24999.read().is_01() || !m_13_fu_5802_p5.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_55_reg_24999.read()) + sc_biguint<32>(m_13_fu_5802_p5.read()));
}

void sha256_transform::thread_add_ln53_54_fu_5820_p2() {
    add_ln53_54_fu_5820_p2 = (!add_ln53_53_fu_5815_p2.read().is_01() || !add_ln58_9_reg_24863.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_53_fu_5815_p2.read()) + sc_biguint<32>(add_ln58_9_reg_24863.read()));
}

void sha256_transform::thread_add_ln53_55_fu_5825_p2() {
    add_ln53_55_fu_5825_p2 = (!add_ln53_54_fu_5820_p2.read().is_01() || !add_ln53_52_fu_5810_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_54_fu_5820_p2.read()) + sc_biguint<32>(add_ln53_52_fu_5810_p2.read()));
}

void sha256_transform::thread_add_ln53_56_fu_6090_p2() {
    add_ln53_56_fu_6090_p2 = (!ap_const_lv32_9BDC06A7.is_01() || !xor_ln53_57_reg_25044.read().is_01())? sc_lv<32>(): (sc_bigint<32>(ap_const_lv32_9BDC06A7) + sc_biguint<32>(xor_ln53_57_reg_25044.read()));
}

void sha256_transform::thread_add_ln53_57_fu_6050_p2() {
    add_ln53_57_fu_6050_p2 = (!xor_ln53_59_fu_6044_p2.read().is_01() || !m_14_fu_5831_p5.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_59_fu_6044_p2.read()) + sc_biguint<32>(m_14_fu_5831_p5.read()));
}

void sha256_transform::thread_add_ln53_58_fu_6056_p2() {
    add_ln53_58_fu_6056_p2 = (!add_ln53_57_fu_6050_p2.read().is_01() || !add_ln58_10_reg_24900.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_57_fu_6050_p2.read()) + sc_biguint<32>(add_ln58_10_reg_24900.read()));
}

void sha256_transform::thread_add_ln53_59_fu_6095_p2() {
    add_ln53_59_fu_6095_p2 = (!add_ln53_58_reg_25049.read().is_01() || !add_ln53_56_fu_6090_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_58_reg_25049.read()) + sc_biguint<32>(add_ln53_56_fu_6090_p2.read()));
}

void sha256_transform::thread_add_ln53_5_fu_1718_p2() {
    add_ln53_5_fu_1718_p2 = (!ap_const_lv32_71374491.is_01() || !m_1_fu_1518_p5.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_71374491) + sc_biguint<32>(m_1_fu_1518_p5.read()));
}

void sha256_transform::thread_add_ln53_60_fu_6295_p2() {
    add_ln53_60_fu_6295_p2 = (!xor_ln53_61_reg_25081.read().is_01() || !add_ln58_11_reg_24950.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_61_reg_25081.read()) + sc_biguint<32>(add_ln58_11_reg_24950.read()));
}

void sha256_transform::thread_add_ln53_61_fu_6299_p2() {
    add_ln53_61_fu_6299_p2 = (!ap_const_lv32_C19BF174.is_01() || !m_15_fu_6283_p5.read().is_01())? sc_lv<32>(): (sc_bigint<32>(ap_const_lv32_C19BF174) + sc_biguint<32>(m_15_fu_6283_p5.read()));
}

void sha256_transform::thread_add_ln53_62_fu_6305_p2() {
    add_ln53_62_fu_6305_p2 = (!add_ln53_61_fu_6299_p2.read().is_01() || !xor_ln53_63_reg_25086.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_61_fu_6299_p2.read()) + sc_biguint<32>(xor_ln53_63_reg_25086.read()));
}

void sha256_transform::thread_add_ln53_63_fu_6310_p2() {
    add_ln53_63_fu_6310_p2 = (!add_ln53_62_fu_6305_p2.read().is_01() || !add_ln53_60_fu_6295_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_62_fu_6305_p2.read()) + sc_biguint<32>(add_ln53_60_fu_6295_p2.read()));
}

void sha256_transform::thread_add_ln53_64_fu_6871_p2() {
    add_ln53_64_fu_6871_p2 = (!xor_ln53_65_reg_25146.read().is_01() || !add_ln58_12_reg_24987.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_65_reg_25146.read()) + sc_biguint<32>(add_ln58_12_reg_24987.read()));
}

void sha256_transform::thread_add_ln53_65_fu_6676_p2() {
    add_ln53_65_fu_6676_p2 = (!ap_const_lv32_E49B69C1.is_01() || !m_16_fu_6320_p2.read().is_01())? sc_lv<32>(): (sc_bigint<32>(ap_const_lv32_E49B69C1) + sc_biguint<32>(m_16_fu_6320_p2.read()));
}

void sha256_transform::thread_add_ln53_66_fu_6682_p2() {
    add_ln53_66_fu_6682_p2 = (!add_ln53_65_fu_6676_p2.read().is_01() || !xor_ln53_67_fu_6670_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_65_fu_6676_p2.read()) + sc_biguint<32>(xor_ln53_67_fu_6670_p2.read()));
}

void sha256_transform::thread_add_ln53_67_fu_6875_p2() {
    add_ln53_67_fu_6875_p2 = (!add_ln53_66_reg_25151.read().is_01() || !add_ln53_64_fu_6871_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_66_reg_25151.read()) + sc_biguint<32>(add_ln53_64_fu_6871_p2.read()));
}

void sha256_transform::thread_add_ln53_68_fu_7067_p2() {
    add_ln53_68_fu_7067_p2 = (!xor_ln53_69_reg_25200.read().is_01() || !add_ln58_13_reg_25037.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_69_reg_25200.read()) + sc_biguint<32>(add_ln58_13_reg_25037.read()));
}

void sha256_transform::thread_add_ln53_69_fu_7071_p2() {
    add_ln53_69_fu_7071_p2 = (!ap_const_lv32_EFBE4786.is_01() || !m_17_reg_25156.read().is_01())? sc_lv<32>(): (sc_bigint<32>(ap_const_lv32_EFBE4786) + sc_biguint<32>(m_17_reg_25156.read()));
}

void sha256_transform::thread_add_ln53_6_fu_1724_p2() {
    add_ln53_6_fu_1724_p2 = (!add_ln53_5_fu_1718_p2.read().is_01() || !xor_ln53_7_reg_24029.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_5_fu_1718_p2.read()) + sc_biguint<32>(xor_ln53_7_reg_24029.read()));
}

void sha256_transform::thread_add_ln53_70_fu_7076_p2() {
    add_ln53_70_fu_7076_p2 = (!add_ln53_69_fu_7071_p2.read().is_01() || !xor_ln53_71_reg_25205.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_69_fu_7071_p2.read()) + sc_biguint<32>(xor_ln53_71_reg_25205.read()));
}

void sha256_transform::thread_add_ln53_71_fu_7081_p2() {
    add_ln53_71_fu_7081_p2 = (!add_ln53_70_fu_7076_p2.read().is_01() || !add_ln53_68_fu_7067_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_70_fu_7076_p2.read()) + sc_biguint<32>(add_ln53_68_fu_7067_p2.read()));
}

void sha256_transform::thread_add_ln53_72_fu_7642_p2() {
    add_ln53_72_fu_7642_p2 = (!xor_ln53_73_reg_25259.read().is_01() || !add_ln58_14_reg_25074.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_73_reg_25259.read()) + sc_biguint<32>(add_ln58_14_reg_25074.read()));
}

void sha256_transform::thread_add_ln53_73_fu_7447_p2() {
    add_ln53_73_fu_7447_p2 = (!ap_const_lv32_FC19DC6.is_01() || !m_18_fu_7091_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_FC19DC6) + sc_biguint<32>(m_18_fu_7091_p2.read()));
}

void sha256_transform::thread_add_ln53_74_fu_7453_p2() {
    add_ln53_74_fu_7453_p2 = (!add_ln53_73_fu_7447_p2.read().is_01() || !xor_ln53_75_fu_7441_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_73_fu_7447_p2.read()) + sc_biguint<32>(xor_ln53_75_fu_7441_p2.read()));
}

void sha256_transform::thread_add_ln53_75_fu_7646_p2() {
    add_ln53_75_fu_7646_p2 = (!add_ln53_74_reg_25264.read().is_01() || !add_ln53_72_fu_7642_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_74_reg_25264.read()) + sc_biguint<32>(add_ln53_72_fu_7642_p2.read()));
}

void sha256_transform::thread_add_ln53_76_fu_7838_p2() {
    add_ln53_76_fu_7838_p2 = (!xor_ln53_77_reg_25313.read().is_01() || !add_ln58_15_reg_25139.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_77_reg_25313.read()) + sc_biguint<32>(add_ln58_15_reg_25139.read()));
}

void sha256_transform::thread_add_ln53_77_fu_7842_p2() {
    add_ln53_77_fu_7842_p2 = (!ap_const_lv32_240CA1CC.is_01() || !m_19_reg_25269.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_240CA1CC) + sc_biguint<32>(m_19_reg_25269.read()));
}

void sha256_transform::thread_add_ln53_78_fu_7847_p2() {
    add_ln53_78_fu_7847_p2 = (!add_ln53_77_fu_7842_p2.read().is_01() || !xor_ln53_79_reg_25318.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_77_fu_7842_p2.read()) + sc_biguint<32>(xor_ln53_79_reg_25318.read()));
}

void sha256_transform::thread_add_ln53_79_fu_7852_p2() {
    add_ln53_79_fu_7852_p2 = (!add_ln53_78_fu_7847_p2.read().is_01() || !add_ln53_76_fu_7838_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_78_fu_7847_p2.read()) + sc_biguint<32>(add_ln53_76_fu_7838_p2.read()));
}

void sha256_transform::thread_add_ln53_7_fu_1729_p2() {
    add_ln53_7_fu_1729_p2 = (!add_ln53_6_fu_1724_p2.read().is_01() || !add_ln53_4_fu_1714_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_6_fu_1724_p2.read()) + sc_biguint<32>(add_ln53_4_fu_1714_p2.read()));
}

void sha256_transform::thread_add_ln53_80_fu_8413_p2() {
    add_ln53_80_fu_8413_p2 = (!xor_ln53_81_reg_25372.read().is_01() || !add_ln58_16_reg_25193.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_81_reg_25372.read()) + sc_biguint<32>(add_ln58_16_reg_25193.read()));
}

void sha256_transform::thread_add_ln53_81_fu_8218_p2() {
    add_ln53_81_fu_8218_p2 = (!ap_const_lv32_2DE92C6F.is_01() || !m_20_fu_7862_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_2DE92C6F) + sc_biguint<32>(m_20_fu_7862_p2.read()));
}

void sha256_transform::thread_add_ln53_82_fu_8224_p2() {
    add_ln53_82_fu_8224_p2 = (!add_ln53_81_fu_8218_p2.read().is_01() || !xor_ln53_83_fu_8212_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_81_fu_8218_p2.read()) + sc_biguint<32>(xor_ln53_83_fu_8212_p2.read()));
}

void sha256_transform::thread_add_ln53_83_fu_8417_p2() {
    add_ln53_83_fu_8417_p2 = (!add_ln53_82_reg_25377.read().is_01() || !add_ln53_80_fu_8413_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_82_reg_25377.read()) + sc_biguint<32>(add_ln53_80_fu_8413_p2.read()));
}

void sha256_transform::thread_add_ln53_84_fu_8613_p2() {
    add_ln53_84_fu_8613_p2 = (!xor_ln53_85_reg_25426.read().is_01() || !add_ln58_17_reg_25252.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_85_reg_25426.read()) + sc_biguint<32>(add_ln58_17_reg_25252.read()));
}

void sha256_transform::thread_add_ln53_85_fu_8617_p2() {
    add_ln53_85_fu_8617_p2 = (!ap_const_lv32_4A7484AA.is_01() || !m_21_reg_25382.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_4A7484AA) + sc_biguint<32>(m_21_reg_25382.read()));
}

void sha256_transform::thread_add_ln53_86_fu_8622_p2() {
    add_ln53_86_fu_8622_p2 = (!add_ln53_85_fu_8617_p2.read().is_01() || !xor_ln53_87_reg_25431.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_85_fu_8617_p2.read()) + sc_biguint<32>(xor_ln53_87_reg_25431.read()));
}

void sha256_transform::thread_add_ln53_87_fu_8627_p2() {
    add_ln53_87_fu_8627_p2 = (!add_ln53_86_fu_8622_p2.read().is_01() || !add_ln53_84_fu_8613_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_86_fu_8622_p2.read()) + sc_biguint<32>(add_ln53_84_fu_8613_p2.read()));
}

void sha256_transform::thread_add_ln53_88_fu_9188_p2() {
    add_ln53_88_fu_9188_p2 = (!xor_ln53_89_reg_25490.read().is_01() || !add_ln58_18_reg_25306.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_89_reg_25490.read()) + sc_biguint<32>(add_ln58_18_reg_25306.read()));
}

void sha256_transform::thread_add_ln53_89_fu_8993_p2() {
    add_ln53_89_fu_8993_p2 = (!ap_const_lv32_5CB0A9DC.is_01() || !m_22_fu_8637_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_5CB0A9DC) + sc_biguint<32>(m_22_fu_8637_p2.read()));
}

void sha256_transform::thread_add_ln53_8_fu_2231_p2() {
    add_ln53_8_fu_2231_p2 = (!ap_const_lv32_B5C0FBCF.is_01() || !xor_ln53_9_reg_24204.read().is_01())? sc_lv<32>(): (sc_bigint<32>(ap_const_lv32_B5C0FBCF) + sc_biguint<32>(xor_ln53_9_reg_24204.read()));
}

void sha256_transform::thread_add_ln53_90_fu_8999_p2() {
    add_ln53_90_fu_8999_p2 = (!add_ln53_89_fu_8993_p2.read().is_01() || !xor_ln53_91_fu_8987_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_89_fu_8993_p2.read()) + sc_biguint<32>(xor_ln53_91_fu_8987_p2.read()));
}

void sha256_transform::thread_add_ln53_91_fu_9192_p2() {
    add_ln53_91_fu_9192_p2 = (!add_ln53_90_reg_25495.read().is_01() || !add_ln53_88_fu_9188_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_90_reg_25495.read()) + sc_biguint<32>(add_ln53_88_fu_9188_p2.read()));
}

void sha256_transform::thread_add_ln53_92_fu_9384_p2() {
    add_ln53_92_fu_9384_p2 = (!xor_ln53_93_reg_25544.read().is_01() || !add_ln58_19_reg_25365.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_93_reg_25544.read()) + sc_biguint<32>(add_ln58_19_reg_25365.read()));
}

void sha256_transform::thread_add_ln53_93_fu_9388_p2() {
    add_ln53_93_fu_9388_p2 = (!ap_const_lv32_76F988DA.is_01() || !m_23_reg_25500.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_76F988DA) + sc_biguint<32>(m_23_reg_25500.read()));
}

void sha256_transform::thread_add_ln53_94_fu_9393_p2() {
    add_ln53_94_fu_9393_p2 = (!add_ln53_93_fu_9388_p2.read().is_01() || !xor_ln53_95_reg_25549.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_93_fu_9388_p2.read()) + sc_biguint<32>(xor_ln53_95_reg_25549.read()));
}

void sha256_transform::thread_add_ln53_95_fu_9398_p2() {
    add_ln53_95_fu_9398_p2 = (!add_ln53_94_fu_9393_p2.read().is_01() || !add_ln53_92_fu_9384_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_94_fu_9393_p2.read()) + sc_biguint<32>(add_ln53_92_fu_9384_p2.read()));
}

void sha256_transform::thread_add_ln53_96_fu_9963_p2() {
    add_ln53_96_fu_9963_p2 = (!ap_const_lv32_983E5152.is_01() || !xor_ln53_97_reg_25607.read().is_01())? sc_lv<32>(): (sc_bigint<32>(ap_const_lv32_983E5152) + sc_biguint<32>(xor_ln53_97_reg_25607.read()));
}

void sha256_transform::thread_add_ln53_97_fu_9769_p2() {
    add_ln53_97_fu_9769_p2 = (!xor_ln53_99_fu_9763_p2.read().is_01() || !m_24_fu_9408_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_99_fu_9763_p2.read()) + sc_biguint<32>(m_24_fu_9408_p2.read()));
}

void sha256_transform::thread_add_ln53_98_fu_9775_p2() {
    add_ln53_98_fu_9775_p2 = (!add_ln53_97_fu_9769_p2.read().is_01() || !add_ln58_20_reg_25419.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_97_fu_9769_p2.read()) + sc_biguint<32>(add_ln58_20_reg_25419.read()));
}

void sha256_transform::thread_add_ln53_99_fu_9968_p2() {
    add_ln53_99_fu_9968_p2 = (!add_ln53_98_reg_25612.read().is_01() || !add_ln53_96_fu_9963_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_98_reg_25612.read()) + sc_biguint<32>(add_ln53_96_fu_9963_p2.read()));
}

void sha256_transform::thread_add_ln53_9_fu_2036_p2() {
    add_ln53_9_fu_2036_p2 = (!xor_ln53_11_fu_2030_p2.read().is_01() || !m_2_fu_1735_p5.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln53_11_fu_2030_p2.read()) + sc_biguint<32>(m_2_fu_1735_p5.read()));
}

void sha256_transform::thread_add_ln53_fu_1402_p2() {
    add_ln53_fu_1402_p2 = (!ap_port_reg_ctx_state_7_read.read().is_01() || !xor_ln53_1_reg_23942.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_port_reg_ctx_state_7_read.read()) + sc_biguint<32>(xor_ln53_1_reg_23942.read()));
}

void sha256_transform::thread_add_ln58_10_fu_5212_p2() {
    add_ln58_10_fu_5212_p2 = (!add_ln53_43_fu_5129_p2.read().is_01() || !add_ln62_6_reg_24761.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_43_fu_5129_p2.read()) + sc_biguint<32>(add_ln62_6_reg_24761.read()));
}

void sha256_transform::thread_add_ln58_11_fu_5465_p2() {
    add_ln58_11_fu_5465_p2 = (!add_ln53_47_reg_24923.read().is_01() || !add_ln62_7_reg_24793.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_47_reg_24923.read()) + sc_biguint<32>(add_ln62_7_reg_24793.read()));
}

void sha256_transform::thread_add_ln58_12_fu_5697_p2() {
    add_ln58_12_fu_5697_p2 = (!add_ln53_51_fu_5614_p2.read().is_01() || !add_ln62_8_reg_24848.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_51_fu_5614_p2.read()) + sc_biguint<32>(add_ln62_8_reg_24848.read()));
}

void sha256_transform::thread_add_ln58_13_fu_5946_p2() {
    add_ln58_13_fu_5946_p2 = (!add_ln53_55_reg_25010.read().is_01() || !add_ln62_9_reg_24880.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_55_reg_25010.read()) + sc_biguint<32>(add_ln62_9_reg_24880.read()));
}

void sha256_transform::thread_add_ln58_14_fu_6178_p2() {
    add_ln58_14_fu_6178_p2 = (!add_ln53_59_fu_6095_p2.read().is_01() || !add_ln62_10_reg_24935.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_59_fu_6095_p2.read()) + sc_biguint<32>(add_ln62_10_reg_24935.read()));
}

void sha256_transform::thread_add_ln58_15_fu_6572_p2() {
    add_ln58_15_fu_6572_p2 = (!add_ln53_63_reg_25102.read().is_01() || !add_ln62_11_reg_24967.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_63_reg_25102.read()) + sc_biguint<32>(add_ln62_11_reg_24967.read()));
}

void sha256_transform::thread_add_ln58_16_fu_6958_p2() {
    add_ln58_16_fu_6958_p2 = (!add_ln53_67_fu_6875_p2.read().is_01() || !add_ln62_12_reg_25022.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_67_fu_6875_p2.read()) + sc_biguint<32>(add_ln62_12_reg_25022.read()));
}

void sha256_transform::thread_add_ln58_17_fu_7343_p2() {
    add_ln58_17_fu_7343_p2 = (!add_ln53_71_reg_25215.read().is_01() || !add_ln62_13_reg_25054.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_71_reg_25215.read()) + sc_biguint<32>(add_ln62_13_reg_25054.read()));
}

void sha256_transform::thread_add_ln58_18_fu_7729_p2() {
    add_ln58_18_fu_7729_p2 = (!add_ln53_75_fu_7646_p2.read().is_01() || !add_ln62_14_reg_25124.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_75_fu_7646_p2.read()) + sc_biguint<32>(add_ln62_14_reg_25124.read()));
}

void sha256_transform::thread_add_ln58_19_fu_8114_p2() {
    add_ln58_19_fu_8114_p2 = (!add_ln53_79_reg_25328.read().is_01() || !add_ln62_15_reg_25173.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_79_reg_25328.read()) + sc_biguint<32>(add_ln62_15_reg_25173.read()));
}

void sha256_transform::thread_add_ln58_1_fu_1931_p2() {
    add_ln58_1_fu_1931_p2 = (!ap_port_reg_ctx_state_2_read.read().is_01() || !add_ln53_7_reg_24109.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_port_reg_ctx_state_2_read.read()) + sc_biguint<32>(add_ln53_7_reg_24109.read()));
}

void sha256_transform::thread_add_ln58_20_fu_8500_p2() {
    add_ln58_20_fu_8500_p2 = (!add_ln53_83_fu_8417_p2.read().is_01() || !add_ln62_16_reg_25237.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_83_fu_8417_p2.read()) + sc_biguint<32>(add_ln62_16_reg_25237.read()));
}

void sha256_transform::thread_add_ln58_21_fu_8889_p2() {
    add_ln58_21_fu_8889_p2 = (!add_ln53_87_reg_25446.read().is_01() || !add_ln62_17_reg_25286.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_87_reg_25446.read()) + sc_biguint<32>(add_ln62_17_reg_25286.read()));
}

void sha256_transform::thread_add_ln58_22_fu_9275_p2() {
    add_ln58_22_fu_9275_p2 = (!add_ln53_91_fu_9192_p2.read().is_01() || !add_ln62_18_reg_25350.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_91_fu_9192_p2.read()) + sc_biguint<32>(add_ln62_18_reg_25350.read()));
}

void sha256_transform::thread_add_ln58_23_fu_9665_p2() {
    add_ln58_23_fu_9665_p2 = (!add_ln53_95_reg_25559.read().is_01() || !add_ln62_19_reg_25399.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_95_reg_25559.read()) + sc_biguint<32>(add_ln62_19_reg_25399.read()));
}

void sha256_transform::thread_add_ln58_24_fu_10051_p2() {
    add_ln58_24_fu_10051_p2 = (!add_ln53_99_fu_9968_p2.read().is_01() || !add_ln62_20_reg_25468.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_99_fu_9968_p2.read()) + sc_biguint<32>(add_ln62_20_reg_25468.read()));
}

void sha256_transform::thread_add_ln58_25_fu_10894_p2() {
    add_ln58_25_fu_10894_p2 = (!add_ln53_103_reg_25705.read().is_01() || !add_ln62_21_reg_25517.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_103_reg_25705.read()) + sc_biguint<32>(add_ln62_21_reg_25517.read()));
}

void sha256_transform::thread_add_ln58_26_fu_11428_p2() {
    add_ln58_26_fu_11428_p2 = (!add_ln53_107_fu_11345_p2.read().is_01() || !add_ln62_22_reg_25585.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_107_fu_11345_p2.read()) + sc_biguint<32>(add_ln62_22_reg_25585.read()));
}

void sha256_transform::thread_add_ln58_27_fu_12276_p2() {
    add_ln58_27_fu_12276_p2 = (!add_ln53_111_reg_25882.read().is_01() || !add_ln62_23_reg_25634.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_111_reg_25882.read()) + sc_biguint<32>(add_ln62_23_reg_25634.read()));
}

void sha256_transform::thread_add_ln58_28_fu_12815_p2() {
    add_ln58_28_fu_12815_p2 = (!add_ln53_115_fu_12732_p2.read().is_01() || !add_ln62_24_reg_25745.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_115_fu_12732_p2.read()) + sc_biguint<32>(add_ln62_24_reg_25745.read()));
}

void sha256_transform::thread_add_ln58_29_fu_13663_p2() {
    add_ln58_29_fu_13663_p2 = (!add_ln53_119_reg_26059.read().is_01() || !add_ln62_25_reg_25811.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_119_reg_26059.read()) + sc_biguint<32>(add_ln62_25_reg_25811.read()));
}

void sha256_transform::thread_add_ln58_2_fu_2241_p2() {
    add_ln58_2_fu_2241_p2 = (!ap_port_reg_ctx_state_1_read.read().is_01() || !add_ln53_11_fu_2236_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_port_reg_ctx_state_1_read.read()) + sc_biguint<32>(add_ln53_11_fu_2236_p2.read()));
}

void sha256_transform::thread_add_ln58_30_fu_14202_p2() {
    add_ln58_30_fu_14202_p2 = (!add_ln53_123_fu_14119_p2.read().is_01() || !add_ln62_26_reg_25922.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_123_fu_14119_p2.read()) + sc_biguint<32>(add_ln62_26_reg_25922.read()));
}

void sha256_transform::thread_add_ln58_31_fu_15052_p2() {
    add_ln58_31_fu_15052_p2 = (!add_ln53_127_reg_26246.read().is_01() || !add_ln62_27_reg_25988.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_127_reg_26246.read()) + sc_biguint<32>(add_ln62_27_reg_25988.read()));
}

void sha256_transform::thread_add_ln58_32_fu_15522_p2() {
    add_ln58_32_fu_15522_p2 = (!add_ln53_131_fu_15439_p2.read().is_01() || !add_ln62_28_reg_26099.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_131_fu_15439_p2.read()) + sc_biguint<32>(add_ln62_28_reg_26099.read()));
}

void sha256_transform::thread_add_ln58_33_fu_16096_p2() {
    add_ln58_33_fu_16096_p2 = (!add_ln53_135_reg_26408.read().is_01() || !add_ln62_29_reg_26165.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_135_reg_26408.read()) + sc_biguint<32>(add_ln62_29_reg_26165.read()));
}

void sha256_transform::thread_add_ln58_34_fu_16495_p2() {
    add_ln58_34_fu_16495_p2 = (!add_ln53_139_fu_16412_p2.read().is_01() || !add_ln62_30_reg_26285.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_139_fu_16412_p2.read()) + sc_biguint<32>(add_ln62_30_reg_26285.read()));
}

void sha256_transform::thread_add_ln58_35_fu_17063_p2() {
    add_ln58_35_fu_17063_p2 = (!add_ln53_143_reg_26548.read().is_01() || !add_ln62_31_reg_26344.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_143_reg_26548.read()) + sc_biguint<32>(add_ln62_31_reg_26344.read()));
}

void sha256_transform::thread_add_ln58_36_fu_17401_p2() {
    add_ln58_36_fu_17401_p2 = (!add_ln53_147_fu_17318_p2.read().is_01() || !add_ln62_32_reg_26436.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_147_fu_17318_p2.read()) + sc_biguint<32>(add_ln62_32_reg_26436.read()));
}

void sha256_transform::thread_add_ln58_37_fu_17642_p2() {
    add_ln58_37_fu_17642_p2 = (!add_ln53_151_reg_26668.read().is_01() || !add_ln62_33_reg_26490.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_151_reg_26668.read()) + sc_biguint<32>(add_ln62_33_reg_26490.read()));
}

void sha256_transform::thread_add_ln58_38_fu_17873_p2() {
    add_ln58_38_fu_17873_p2 = (!add_ln53_155_fu_17790_p2.read().is_01() || !add_ln62_34_reg_26574.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_155_fu_17790_p2.read()) + sc_biguint<32>(add_ln62_34_reg_26574.read()));
}

void sha256_transform::thread_add_ln58_39_fu_18105_p2() {
    add_ln58_39_fu_18105_p2 = (!add_ln53_159_reg_26748.read().is_01() || !add_ln62_35_reg_26631.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_159_reg_26748.read()) + sc_biguint<32>(add_ln62_35_reg_26631.read()));
}

void sha256_transform::thread_add_ln58_3_fu_3054_p2() {
    add_ln58_3_fu_3054_p2 = (!ctx_state_0_read_1_reg_24335.read().is_01() || !add_ln53_15_reg_24435.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ctx_state_0_read_1_reg_24335.read()) + sc_biguint<32>(add_ln53_15_reg_24435.read()));
}

void sha256_transform::thread_add_ln58_40_fu_18336_p2() {
    add_ln58_40_fu_18336_p2 = (!add_ln53_163_fu_18253_p2.read().is_01() || !add_ln62_36_reg_26679.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_163_fu_18253_p2.read()) + sc_biguint<32>(add_ln62_36_reg_26679.read()));
}

void sha256_transform::thread_add_ln58_41_fu_18568_p2() {
    add_ln58_41_fu_18568_p2 = (!add_ln53_167_reg_26823.read().is_01() || !add_ln62_37_reg_26711.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_167_reg_26823.read()) + sc_biguint<32>(add_ln62_37_reg_26711.read()));
}

void sha256_transform::thread_add_ln58_42_fu_18799_p2() {
    add_ln58_42_fu_18799_p2 = (!add_ln53_171_fu_18716_p2.read().is_01() || !add_ln62_38_reg_26754.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_171_fu_18716_p2.read()) + sc_biguint<32>(add_ln62_38_reg_26754.read()));
}

void sha256_transform::thread_add_ln58_43_fu_19031_p2() {
    add_ln58_43_fu_19031_p2 = (!add_ln53_175_reg_26898.read().is_01() || !add_ln62_39_reg_26786.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_175_reg_26898.read()) + sc_biguint<32>(add_ln62_39_reg_26786.read()));
}

void sha256_transform::thread_add_ln58_44_fu_19262_p2() {
    add_ln58_44_fu_19262_p2 = (!add_ln53_179_fu_19179_p2.read().is_01() || !add_ln62_40_reg_26829.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_179_fu_19179_p2.read()) + sc_biguint<32>(add_ln62_40_reg_26829.read()));
}

void sha256_transform::thread_add_ln58_45_fu_19494_p2() {
    add_ln58_45_fu_19494_p2 = (!add_ln53_183_reg_26973.read().is_01() || !add_ln62_41_reg_26861.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_183_reg_26973.read()) + sc_biguint<32>(add_ln62_41_reg_26861.read()));
}

void sha256_transform::thread_add_ln58_46_fu_19725_p2() {
    add_ln58_46_fu_19725_p2 = (!add_ln53_187_fu_19642_p2.read().is_01() || !add_ln62_42_reg_26904.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_187_fu_19642_p2.read()) + sc_biguint<32>(add_ln62_42_reg_26904.read()));
}

void sha256_transform::thread_add_ln58_47_fu_19957_p2() {
    add_ln58_47_fu_19957_p2 = (!add_ln53_191_reg_27048.read().is_01() || !add_ln62_43_reg_26936.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_191_reg_27048.read()) + sc_biguint<32>(add_ln62_43_reg_26936.read()));
}

void sha256_transform::thread_add_ln58_48_fu_20188_p2() {
    add_ln58_48_fu_20188_p2 = (!add_ln53_195_fu_20105_p2.read().is_01() || !add_ln62_44_reg_26979.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_195_fu_20105_p2.read()) + sc_biguint<32>(add_ln62_44_reg_26979.read()));
}

void sha256_transform::thread_add_ln58_49_fu_20420_p2() {
    add_ln58_49_fu_20420_p2 = (!add_ln53_199_reg_27123.read().is_01() || !add_ln62_45_reg_27011.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_199_reg_27123.read()) + sc_biguint<32>(add_ln62_45_reg_27011.read()));
}

void sha256_transform::thread_add_ln58_4_fu_3654_p2() {
    add_ln58_4_fu_3654_p2 = (!add_ln53_19_fu_3649_p2.read().is_01() || !add_ln62_reg_24420.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_19_fu_3649_p2.read()) + sc_biguint<32>(add_ln62_reg_24420.read()));
}

void sha256_transform::thread_add_ln58_50_fu_20651_p2() {
    add_ln58_50_fu_20651_p2 = (!add_ln53_203_fu_20568_p2.read().is_01() || !add_ln62_46_reg_27054.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_203_fu_20568_p2.read()) + sc_biguint<32>(add_ln62_46_reg_27054.read()));
}

void sha256_transform::thread_add_ln58_51_fu_20883_p2() {
    add_ln58_51_fu_20883_p2 = (!add_ln53_207_reg_27198.read().is_01() || !add_ln62_47_reg_27086.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_207_reg_27198.read()) + sc_biguint<32>(add_ln62_47_reg_27086.read()));
}

void sha256_transform::thread_add_ln58_52_fu_21114_p2() {
    add_ln58_52_fu_21114_p2 = (!add_ln53_211_fu_21031_p2.read().is_01() || !add_ln62_48_reg_27129.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_211_fu_21031_p2.read()) + sc_biguint<32>(add_ln62_48_reg_27129.read()));
}

void sha256_transform::thread_add_ln58_53_fu_21346_p2() {
    add_ln58_53_fu_21346_p2 = (!add_ln53_215_reg_27273.read().is_01() || !add_ln62_49_reg_27161.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_215_reg_27273.read()) + sc_biguint<32>(add_ln62_49_reg_27161.read()));
}

void sha256_transform::thread_add_ln58_54_fu_21577_p2() {
    add_ln58_54_fu_21577_p2 = (!add_ln53_219_fu_21494_p2.read().is_01() || !add_ln62_50_reg_27204.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_219_fu_21494_p2.read()) + sc_biguint<32>(add_ln62_50_reg_27204.read()));
}

void sha256_transform::thread_add_ln58_55_fu_21809_p2() {
    add_ln58_55_fu_21809_p2 = (!add_ln53_223_reg_27348.read().is_01() || !add_ln62_51_reg_27236.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_223_reg_27348.read()) + sc_biguint<32>(add_ln62_51_reg_27236.read()));
}

void sha256_transform::thread_add_ln58_56_fu_22040_p2() {
    add_ln58_56_fu_22040_p2 = (!add_ln53_227_fu_21957_p2.read().is_01() || !add_ln62_52_reg_27279.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_227_fu_21957_p2.read()) + sc_biguint<32>(add_ln62_52_reg_27279.read()));
}

void sha256_transform::thread_add_ln58_57_fu_22272_p2() {
    add_ln58_57_fu_22272_p2 = (!add_ln53_231_reg_27423.read().is_01() || !add_ln62_53_reg_27311.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_231_reg_27423.read()) + sc_biguint<32>(add_ln62_53_reg_27311.read()));
}

void sha256_transform::thread_add_ln58_58_fu_22503_p2() {
    add_ln58_58_fu_22503_p2 = (!add_ln53_235_fu_22420_p2.read().is_01() || !add_ln62_54_reg_27354.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_235_fu_22420_p2.read()) + sc_biguint<32>(add_ln62_54_reg_27354.read()));
}

void sha256_transform::thread_add_ln58_59_fu_22735_p2() {
    add_ln58_59_fu_22735_p2 = (!add_ln53_239_reg_27498.read().is_01() || !add_ln62_55_reg_27386.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_239_reg_27498.read()) + sc_biguint<32>(add_ln62_55_reg_27386.read()));
}

void sha256_transform::thread_add_ln58_5_fu_4014_p2() {
    add_ln58_5_fu_4014_p2 = (!add_ln53_23_reg_24665.read().is_01() || !add_ln62_1_reg_24516.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_23_reg_24665.read()) + sc_biguint<32>(add_ln62_1_reg_24516.read()));
}

void sha256_transform::thread_add_ln58_60_fu_22966_p2() {
    add_ln58_60_fu_22966_p2 = (!add_ln53_243_fu_22883_p2.read().is_01() || !add_ln62_56_reg_27429.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_243_fu_22883_p2.read()) + sc_biguint<32>(add_ln62_56_reg_27429.read()));
}

void sha256_transform::thread_add_ln58_61_fu_23198_p2() {
    add_ln58_61_fu_23198_p2 = (!add_ln53_247_reg_27573.read().is_01() || !add_ln62_57_reg_27461.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_247_reg_27573.read()) + sc_biguint<32>(add_ln62_57_reg_27461.read()));
}

void sha256_transform::thread_add_ln58_62_fu_23429_p2() {
    add_ln58_62_fu_23429_p2 = (!add_ln53_252_fu_23346_p2.read().is_01() || !add_ln62_58_reg_27504.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_252_fu_23346_p2.read()) + sc_biguint<32>(add_ln62_58_reg_27504.read()));
}

void sha256_transform::thread_add_ln58_6_fu_4246_p2() {
    add_ln58_6_fu_4246_p2 = (!add_ln53_27_fu_4163_p2.read().is_01() || !add_ln62_2_reg_24608.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_27_fu_4163_p2.read()) + sc_biguint<32>(add_ln62_2_reg_24608.read()));
}

void sha256_transform::thread_add_ln58_7_fu_4495_p2() {
    add_ln58_7_fu_4495_p2 = (!add_ln53_31_reg_24750.read().is_01() || !add_ln62_3_reg_24650.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_31_reg_24750.read()) + sc_biguint<32>(add_ln62_3_reg_24650.read()));
}

void sha256_transform::thread_add_ln58_8_fu_4727_p2() {
    add_ln58_8_fu_4727_p2 = (!add_ln53_35_fu_4644_p2.read().is_01() || !add_ln62_4_reg_24676.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_35_fu_4644_p2.read()) + sc_biguint<32>(add_ln62_4_reg_24676.read()));
}

void sha256_transform::thread_add_ln58_9_fu_4980_p2() {
    add_ln58_9_fu_4980_p2 = (!add_ln53_39_reg_24836.read().is_01() || !add_ln62_5_reg_24708.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln53_39_reg_24836.read()) + sc_biguint<32>(add_ln62_5_reg_24708.read()));
}

void sha256_transform::thread_add_ln58_fu_1412_p2() {
    add_ln58_fu_1412_p2 = (!ap_port_reg_ctx_state_3_read.read().is_01() || !add_ln53_3_fu_1407_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_port_reg_ctx_state_3_read.read()) + sc_biguint<32>(add_ln53_3_fu_1407_p2.read()));
}

void sha256_transform::thread_add_ln62_100_fu_17775_p2() {
    add_ln62_100_fu_17775_p2 = (!xor_ln54_151_fu_17769_p2.read().is_01() || !add_ln53_151_reg_26668.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_151_fu_17769_p2.read()) + sc_biguint<32>(add_ln53_151_reg_26668.read()));
}

void sha256_transform::thread_add_ln62_101_fu_18017_p2() {
    add_ln62_101_fu_18017_p2 = (!xor_ln54_155_fu_18011_p2.read().is_01() || !add_ln53_155_reg_26721.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_155_fu_18011_p2.read()) + sc_biguint<32>(add_ln53_155_reg_26721.read()));
}

void sha256_transform::thread_add_ln62_102_fu_18238_p2() {
    add_ln62_102_fu_18238_p2 = (!xor_ln54_159_fu_18232_p2.read().is_01() || !add_ln53_159_reg_26748.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_159_fu_18232_p2.read()) + sc_biguint<32>(add_ln53_159_reg_26748.read()));
}

void sha256_transform::thread_add_ln62_103_fu_18480_p2() {
    add_ln62_103_fu_18480_p2 = (!xor_ln54_163_fu_18474_p2.read().is_01() || !add_ln53_163_reg_26796.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_163_fu_18474_p2.read()) + sc_biguint<32>(add_ln53_163_reg_26796.read()));
}

void sha256_transform::thread_add_ln62_104_fu_18702_p2() {
    add_ln62_104_fu_18702_p2 = (!xor_ln54_167_fu_18696_p2.read().is_01() || !add_ln53_167_reg_26823.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_167_fu_18696_p2.read()) + sc_biguint<32>(add_ln53_167_reg_26823.read()));
}

void sha256_transform::thread_add_ln62_105_fu_18943_p2() {
    add_ln62_105_fu_18943_p2 = (!xor_ln54_171_fu_18937_p2.read().is_01() || !add_ln53_171_reg_26871.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_171_fu_18937_p2.read()) + sc_biguint<32>(add_ln53_171_reg_26871.read()));
}

void sha256_transform::thread_add_ln62_106_fu_19165_p2() {
    add_ln62_106_fu_19165_p2 = (!xor_ln54_175_fu_19159_p2.read().is_01() || !add_ln53_175_reg_26898.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_175_fu_19159_p2.read()) + sc_biguint<32>(add_ln53_175_reg_26898.read()));
}

void sha256_transform::thread_add_ln62_107_fu_19406_p2() {
    add_ln62_107_fu_19406_p2 = (!xor_ln54_179_fu_19400_p2.read().is_01() || !add_ln53_179_reg_26946.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_179_fu_19400_p2.read()) + sc_biguint<32>(add_ln53_179_reg_26946.read()));
}

void sha256_transform::thread_add_ln62_108_fu_19628_p2() {
    add_ln62_108_fu_19628_p2 = (!xor_ln54_183_fu_19622_p2.read().is_01() || !add_ln53_183_reg_26973.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_183_fu_19622_p2.read()) + sc_biguint<32>(add_ln53_183_reg_26973.read()));
}

void sha256_transform::thread_add_ln62_109_fu_19869_p2() {
    add_ln62_109_fu_19869_p2 = (!xor_ln54_187_fu_19863_p2.read().is_01() || !add_ln53_187_reg_27021.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_187_fu_19863_p2.read()) + sc_biguint<32>(add_ln53_187_reg_27021.read()));
}

void sha256_transform::thread_add_ln62_10_fu_5382_p2() {
    add_ln62_10_fu_5382_p2 = (!add_ln62_73_fu_5377_p2.read().is_01() || !xor_ln54_41_reg_24895.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_73_fu_5377_p2.read()) + sc_biguint<32>(xor_ln54_41_reg_24895.read()));
}

void sha256_transform::thread_add_ln62_110_fu_20091_p2() {
    add_ln62_110_fu_20091_p2 = (!xor_ln54_191_fu_20085_p2.read().is_01() || !add_ln53_191_reg_27048.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_191_fu_20085_p2.read()) + sc_biguint<32>(add_ln53_191_reg_27048.read()));
}

void sha256_transform::thread_add_ln62_111_fu_20332_p2() {
    add_ln62_111_fu_20332_p2 = (!xor_ln54_195_fu_20326_p2.read().is_01() || !add_ln53_195_reg_27096.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_195_fu_20326_p2.read()) + sc_biguint<32>(add_ln53_195_reg_27096.read()));
}

void sha256_transform::thread_add_ln62_112_fu_20554_p2() {
    add_ln62_112_fu_20554_p2 = (!xor_ln54_199_fu_20548_p2.read().is_01() || !add_ln53_199_reg_27123.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_199_fu_20548_p2.read()) + sc_biguint<32>(add_ln53_199_reg_27123.read()));
}

void sha256_transform::thread_add_ln62_113_fu_20795_p2() {
    add_ln62_113_fu_20795_p2 = (!xor_ln54_203_fu_20789_p2.read().is_01() || !add_ln53_203_reg_27171.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_203_fu_20789_p2.read()) + sc_biguint<32>(add_ln53_203_reg_27171.read()));
}

void sha256_transform::thread_add_ln62_114_fu_21017_p2() {
    add_ln62_114_fu_21017_p2 = (!xor_ln54_207_fu_21011_p2.read().is_01() || !add_ln53_207_reg_27198.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_207_fu_21011_p2.read()) + sc_biguint<32>(add_ln53_207_reg_27198.read()));
}

void sha256_transform::thread_add_ln62_115_fu_21258_p2() {
    add_ln62_115_fu_21258_p2 = (!xor_ln54_211_fu_21252_p2.read().is_01() || !add_ln53_211_reg_27246.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_211_fu_21252_p2.read()) + sc_biguint<32>(add_ln53_211_reg_27246.read()));
}

void sha256_transform::thread_add_ln62_116_fu_21480_p2() {
    add_ln62_116_fu_21480_p2 = (!xor_ln54_215_fu_21474_p2.read().is_01() || !add_ln53_215_reg_27273.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_215_fu_21474_p2.read()) + sc_biguint<32>(add_ln53_215_reg_27273.read()));
}

void sha256_transform::thread_add_ln62_117_fu_21721_p2() {
    add_ln62_117_fu_21721_p2 = (!xor_ln54_219_fu_21715_p2.read().is_01() || !add_ln53_219_reg_27321.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_219_fu_21715_p2.read()) + sc_biguint<32>(add_ln53_219_reg_27321.read()));
}

void sha256_transform::thread_add_ln62_118_fu_21943_p2() {
    add_ln62_118_fu_21943_p2 = (!xor_ln54_223_fu_21937_p2.read().is_01() || !add_ln53_223_reg_27348.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_223_fu_21937_p2.read()) + sc_biguint<32>(add_ln53_223_reg_27348.read()));
}

void sha256_transform::thread_add_ln62_119_fu_22184_p2() {
    add_ln62_119_fu_22184_p2 = (!xor_ln54_227_fu_22178_p2.read().is_01() || !add_ln53_227_reg_27396.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_227_fu_22178_p2.read()) + sc_biguint<32>(add_ln53_227_reg_27396.read()));
}

void sha256_transform::thread_add_ln62_11_fu_5605_p2() {
    add_ln62_11_fu_5605_p2 = (!add_ln62_74_fu_5600_p2.read().is_01() || !xor_ln54_45_reg_24945.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_74_fu_5600_p2.read()) + sc_biguint<32>(xor_ln54_45_reg_24945.read()));
}

void sha256_transform::thread_add_ln62_120_fu_22405_p2() {
    add_ln62_120_fu_22405_p2 = (!xor_ln54_231_fu_22399_p2.read().is_01() || !add_ln53_231_reg_27423.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_231_fu_22399_p2.read()) + sc_biguint<32>(add_ln53_231_reg_27423.read()));
}

void sha256_transform::thread_add_ln62_121_fu_22647_p2() {
    add_ln62_121_fu_22647_p2 = (!xor_ln54_235_fu_22641_p2.read().is_01() || !add_ln53_235_reg_27471.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_235_fu_22641_p2.read()) + sc_biguint<32>(add_ln53_235_reg_27471.read()));
}

void sha256_transform::thread_add_ln62_122_fu_22868_p2() {
    add_ln62_122_fu_22868_p2 = (!xor_ln54_239_fu_22862_p2.read().is_01() || !add_ln53_239_reg_27498.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_239_fu_22862_p2.read()) + sc_biguint<32>(add_ln53_239_reg_27498.read()));
}

void sha256_transform::thread_add_ln62_123_fu_23110_p2() {
    add_ln62_123_fu_23110_p2 = (!xor_ln54_243_fu_23104_p2.read().is_01() || !add_ln53_243_reg_27546.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_243_fu_23104_p2.read()) + sc_biguint<32>(add_ln53_243_reg_27546.read()));
}

void sha256_transform::thread_add_ln62_124_fu_23332_p2() {
    add_ln62_124_fu_23332_p2 = (!xor_ln54_247_fu_23326_p2.read().is_01() || !add_ln53_247_reg_27573.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_247_fu_23326_p2.read()) + sc_biguint<32>(add_ln53_247_reg_27573.read()));
}

void sha256_transform::thread_add_ln62_125_fu_23548_p2() {
    add_ln62_125_fu_23548_p2 = (!xor_ln54_251_fu_23542_p2.read().is_01() || !add_ln53_252_reg_27618.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_251_fu_23542_p2.read()) + sc_biguint<32>(add_ln53_252_reg_27618.read()));
}

void sha256_transform::thread_add_ln62_12_fu_5863_p2() {
    add_ln62_12_fu_5863_p2 = (!add_ln62_75_fu_5858_p2.read().is_01() || !xor_ln54_49_reg_24982.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_75_fu_5858_p2.read()) + sc_biguint<32>(xor_ln54_49_reg_24982.read()));
}

void sha256_transform::thread_add_ln62_13_fu_6085_p2() {
    add_ln62_13_fu_6085_p2 = (!add_ln62_76_fu_6080_p2.read().is_01() || !xor_ln54_53_reg_25032.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_76_fu_6080_p2.read()) + sc_biguint<32>(xor_ln54_53_reg_25032.read()));
}

void sha256_transform::thread_add_ln62_14_fu_6489_p2() {
    add_ln62_14_fu_6489_p2 = (!add_ln62_77_fu_6484_p2.read().is_01() || !xor_ln54_57_reg_25069.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_77_fu_6484_p2.read()) + sc_biguint<32>(xor_ln54_57_reg_25069.read()));
}

void sha256_transform::thread_add_ln62_15_fu_6866_p2() {
    add_ln62_15_fu_6866_p2 = (!add_ln62_78_fu_6861_p2.read().is_01() || !xor_ln54_61_reg_25134.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_78_fu_6861_p2.read()) + sc_biguint<32>(xor_ln54_61_reg_25134.read()));
}

void sha256_transform::thread_add_ln62_16_fu_7260_p2() {
    add_ln62_16_fu_7260_p2 = (!add_ln62_79_fu_7255_p2.read().is_01() || !xor_ln54_65_reg_25188.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_79_fu_7255_p2.read()) + sc_biguint<32>(xor_ln54_65_reg_25188.read()));
}

void sha256_transform::thread_add_ln62_17_fu_7637_p2() {
    add_ln62_17_fu_7637_p2 = (!add_ln62_80_fu_7632_p2.read().is_01() || !xor_ln54_69_reg_25247.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_80_fu_7632_p2.read()) + sc_biguint<32>(xor_ln54_69_reg_25247.read()));
}

void sha256_transform::thread_add_ln62_18_fu_8031_p2() {
    add_ln62_18_fu_8031_p2 = (!add_ln62_81_fu_8026_p2.read().is_01() || !xor_ln54_73_reg_25301.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_81_fu_8026_p2.read()) + sc_biguint<32>(xor_ln54_73_reg_25301.read()));
}

void sha256_transform::thread_add_ln62_19_fu_8408_p2() {
    add_ln62_19_fu_8408_p2 = (!add_ln62_82_fu_8403_p2.read().is_01() || !xor_ln54_77_reg_25360.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_82_fu_8403_p2.read()) + sc_biguint<32>(xor_ln54_77_reg_25360.read()));
}

void sha256_transform::thread_add_ln62_1_fu_2971_p2() {
    add_ln62_1_fu_2971_p2 = (!add_ln62_64_fu_2966_p2.read().is_01() || !xor_ln54_5_reg_24430.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_64_fu_2966_p2.read()) + sc_biguint<32>(xor_ln54_5_reg_24430.read()));
}

void sha256_transform::thread_add_ln62_20_fu_8806_p2() {
    add_ln62_20_fu_8806_p2 = (!add_ln62_83_fu_8801_p2.read().is_01() || !xor_ln54_81_reg_25414.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_83_fu_8801_p2.read()) + sc_biguint<32>(xor_ln54_81_reg_25414.read()));
}

void sha256_transform::thread_add_ln62_21_fu_9183_p2() {
    add_ln62_21_fu_9183_p2 = (!add_ln62_84_fu_9178_p2.read().is_01() || !xor_ln54_85_reg_25478.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_84_fu_9178_p2.read()) + sc_biguint<32>(xor_ln54_85_reg_25478.read()));
}

void sha256_transform::thread_add_ln62_22_fu_9582_p2() {
    add_ln62_22_fu_9582_p2 = (!add_ln62_85_fu_9577_p2.read().is_01() || !xor_ln54_89_reg_25532.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_85_fu_9577_p2.read()) + sc_biguint<32>(xor_ln54_89_reg_25532.read()));
}

void sha256_transform::thread_add_ln62_23_fu_9958_p2() {
    add_ln62_23_fu_9958_p2 = (!add_ln62_86_fu_9953_p2.read().is_01() || !xor_ln54_93_reg_25595.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_86_fu_9953_p2.read()) + sc_biguint<32>(xor_ln54_93_reg_25595.read()));
}

void sha256_transform::thread_add_ln62_24_fu_10811_p2() {
    add_ln62_24_fu_10811_p2 = (!add_ln62_87_fu_10806_p2.read().is_01() || !xor_ln54_97_reg_25649.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_87_fu_10806_p2.read()) + sc_biguint<32>(xor_ln54_97_reg_25649.read()));
}

void sha256_transform::thread_add_ln62_25_fu_11335_p2() {
    add_ln62_25_fu_11335_p2 = (!add_ln62_88_fu_11330_p2.read().is_01() || !xor_ln54_101_reg_25755.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_88_fu_11330_p2.read()) + sc_biguint<32>(xor_ln54_101_reg_25755.read()));
}

void sha256_transform::thread_add_ln62_26_fu_12193_p2() {
    add_ln62_26_fu_12193_p2 = (!add_ln62_89_fu_12188_p2.read().is_01() || !xor_ln54_105_reg_25826.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_89_fu_12188_p2.read()) + sc_biguint<32>(xor_ln54_105_reg_25826.read()));
}

void sha256_transform::thread_add_ln62_27_fu_12723_p2() {
    add_ln62_27_fu_12723_p2 = (!add_ln62_90_fu_12718_p2.read().is_01() || !xor_ln54_109_reg_25932.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_90_fu_12718_p2.read()) + sc_biguint<32>(xor_ln54_109_reg_25932.read()));
}

void sha256_transform::thread_add_ln62_28_fu_13580_p2() {
    add_ln62_28_fu_13580_p2 = (!add_ln62_91_fu_13575_p2.read().is_01() || !xor_ln54_113_reg_26003.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_91_fu_13575_p2.read()) + sc_biguint<32>(xor_ln54_113_reg_26003.read()));
}

void sha256_transform::thread_add_ln62_29_fu_14110_p2() {
    add_ln62_29_fu_14110_p2 = (!add_ln62_92_fu_14105_p2.read().is_01() || !xor_ln54_117_reg_26109.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_92_fu_14105_p2.read()) + sc_biguint<32>(xor_ln54_117_reg_26109.read()));
}

void sha256_transform::thread_add_ln62_2_fu_3562_p2() {
    add_ln62_2_fu_3562_p2 = (!add_ln62_65_fu_3557_p2.read().is_01() || !xor_ln54_9_reg_24526.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_65_fu_3557_p2.read()) + sc_biguint<32>(xor_ln54_9_reg_24526.read()));
}

void sha256_transform::thread_add_ln62_30_fu_14969_p2() {
    add_ln62_30_fu_14969_p2 = (!add_ln62_93_fu_14964_p2.read().is_01() || !xor_ln54_121_reg_26180.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_93_fu_14964_p2.read()) + sc_biguint<32>(xor_ln54_121_reg_26180.read()));
}

void sha256_transform::thread_add_ln62_31_fu_15430_p2() {
    add_ln62_31_fu_15430_p2 = (!add_ln62_94_fu_15425_p2.read().is_01() || !xor_ln54_125_reg_26295.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_94_fu_15425_p2.read()) + sc_biguint<32>(xor_ln54_125_reg_26295.read()));
}

void sha256_transform::thread_add_ln62_32_fu_16013_p2() {
    add_ln62_32_fu_16013_p2 = (!add_ln62_95_fu_16008_p2.read().is_01() || !xor_ln54_129_reg_26359.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_95_fu_16008_p2.read()) + sc_biguint<32>(xor_ln54_129_reg_26359.read()));
}

void sha256_transform::thread_add_ln62_33_fu_16403_p2() {
    add_ln62_33_fu_16403_p2 = (!add_ln62_96_fu_16398_p2.read().is_01() || !xor_ln54_133_reg_26446.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_96_fu_16398_p2.read()) + sc_biguint<32>(xor_ln54_133_reg_26446.read()));
}

void sha256_transform::thread_add_ln62_34_fu_16980_p2() {
    add_ln62_34_fu_16980_p2 = (!add_ln62_97_fu_16975_p2.read().is_01() || !xor_ln54_137_reg_26505.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_97_fu_16975_p2.read()) + sc_biguint<32>(xor_ln54_137_reg_26505.read()));
}

void sha256_transform::thread_add_ln62_35_fu_17309_p2() {
    add_ln62_35_fu_17309_p2 = (!add_ln62_98_fu_17304_p2.read().is_01() || !xor_ln54_141_reg_26584.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_98_fu_17304_p2.read()) + sc_biguint<32>(xor_ln54_141_reg_26584.read()));
}

void sha256_transform::thread_add_ln62_36_fu_17559_p2() {
    add_ln62_36_fu_17559_p2 = (!add_ln62_99_fu_17554_p2.read().is_01() || !xor_ln54_145_reg_26646.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_99_fu_17554_p2.read()) + sc_biguint<32>(xor_ln54_145_reg_26646.read()));
}

void sha256_transform::thread_add_ln62_37_fu_17780_p2() {
    add_ln62_37_fu_17780_p2 = (!add_ln62_100_fu_17775_p2.read().is_01() || !xor_ln54_149_reg_26689.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_100_fu_17775_p2.read()) + sc_biguint<32>(xor_ln54_149_reg_26689.read()));
}

void sha256_transform::thread_add_ln62_38_fu_18022_p2() {
    add_ln62_38_fu_18022_p2 = (!add_ln62_101_fu_18017_p2.read().is_01() || !xor_ln54_153_reg_26726.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_101_fu_18017_p2.read()) + sc_biguint<32>(xor_ln54_153_reg_26726.read()));
}

void sha256_transform::thread_add_ln62_39_fu_18243_p2() {
    add_ln62_39_fu_18243_p2 = (!add_ln62_102_fu_18238_p2.read().is_01() || !xor_ln54_157_reg_26764.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_102_fu_18238_p2.read()) + sc_biguint<32>(xor_ln54_157_reg_26764.read()));
}

void sha256_transform::thread_add_ln62_3_fu_3791_p2() {
    add_ln62_3_fu_3791_p2 = (!add_ln62_66_fu_3786_p2.read().is_01() || !xor_ln54_13_reg_24618.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_66_fu_3786_p2.read()) + sc_biguint<32>(xor_ln54_13_reg_24618.read()));
}

void sha256_transform::thread_add_ln62_40_fu_18485_p2() {
    add_ln62_40_fu_18485_p2 = (!add_ln62_103_fu_18480_p2.read().is_01() || !xor_ln54_161_reg_26801.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_103_fu_18480_p2.read()) + sc_biguint<32>(xor_ln54_161_reg_26801.read()));
}

void sha256_transform::thread_add_ln62_41_fu_18707_p2() {
    add_ln62_41_fu_18707_p2 = (!add_ln62_104_fu_18702_p2.read().is_01() || !xor_ln54_165_reg_26839.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_104_fu_18702_p2.read()) + sc_biguint<32>(xor_ln54_165_reg_26839.read()));
}

void sha256_transform::thread_add_ln62_42_fu_18948_p2() {
    add_ln62_42_fu_18948_p2 = (!add_ln62_105_fu_18943_p2.read().is_01() || !xor_ln54_169_reg_26876.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_105_fu_18943_p2.read()) + sc_biguint<32>(xor_ln54_169_reg_26876.read()));
}

void sha256_transform::thread_add_ln62_43_fu_19170_p2() {
    add_ln62_43_fu_19170_p2 = (!add_ln62_106_fu_19165_p2.read().is_01() || !xor_ln54_173_reg_26914.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_106_fu_19165_p2.read()) + sc_biguint<32>(xor_ln54_173_reg_26914.read()));
}

void sha256_transform::thread_add_ln62_44_fu_19411_p2() {
    add_ln62_44_fu_19411_p2 = (!add_ln62_107_fu_19406_p2.read().is_01() || !xor_ln54_177_reg_26951.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_107_fu_19406_p2.read()) + sc_biguint<32>(xor_ln54_177_reg_26951.read()));
}

void sha256_transform::thread_add_ln62_45_fu_19633_p2() {
    add_ln62_45_fu_19633_p2 = (!add_ln62_108_fu_19628_p2.read().is_01() || !xor_ln54_181_reg_26989.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_108_fu_19628_p2.read()) + sc_biguint<32>(xor_ln54_181_reg_26989.read()));
}

void sha256_transform::thread_add_ln62_46_fu_19874_p2() {
    add_ln62_46_fu_19874_p2 = (!add_ln62_109_fu_19869_p2.read().is_01() || !xor_ln54_185_reg_27026.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_109_fu_19869_p2.read()) + sc_biguint<32>(xor_ln54_185_reg_27026.read()));
}

void sha256_transform::thread_add_ln62_47_fu_20096_p2() {
    add_ln62_47_fu_20096_p2 = (!add_ln62_110_fu_20091_p2.read().is_01() || !xor_ln54_189_reg_27064.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_110_fu_20091_p2.read()) + sc_biguint<32>(xor_ln54_189_reg_27064.read()));
}

void sha256_transform::thread_add_ln62_48_fu_20337_p2() {
    add_ln62_48_fu_20337_p2 = (!add_ln62_111_fu_20332_p2.read().is_01() || !xor_ln54_193_reg_27101.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_111_fu_20332_p2.read()) + sc_biguint<32>(xor_ln54_193_reg_27101.read()));
}

void sha256_transform::thread_add_ln62_49_fu_20559_p2() {
    add_ln62_49_fu_20559_p2 = (!add_ln62_112_fu_20554_p2.read().is_01() || !xor_ln54_197_reg_27139.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_112_fu_20554_p2.read()) + sc_biguint<32>(xor_ln54_197_reg_27139.read()));
}

void sha256_transform::thread_add_ln62_4_fu_3931_p2() {
    add_ln62_4_fu_3931_p2 = (!add_ln62_67_fu_3926_p2.read().is_01() || !xor_ln54_17_reg_24660.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_67_fu_3926_p2.read()) + sc_biguint<32>(xor_ln54_17_reg_24660.read()));
}

void sha256_transform::thread_add_ln62_50_fu_20800_p2() {
    add_ln62_50_fu_20800_p2 = (!add_ln62_113_fu_20795_p2.read().is_01() || !xor_ln54_201_reg_27176.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_113_fu_20795_p2.read()) + sc_biguint<32>(xor_ln54_201_reg_27176.read()));
}

void sha256_transform::thread_add_ln62_51_fu_21022_p2() {
    add_ln62_51_fu_21022_p2 = (!add_ln62_114_fu_21017_p2.read().is_01() || !xor_ln54_205_reg_27214.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_114_fu_21017_p2.read()) + sc_biguint<32>(xor_ln54_205_reg_27214.read()));
}

void sha256_transform::thread_add_ln62_52_fu_21263_p2() {
    add_ln62_52_fu_21263_p2 = (!add_ln62_115_fu_21258_p2.read().is_01() || !xor_ln54_209_reg_27251.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_115_fu_21258_p2.read()) + sc_biguint<32>(xor_ln54_209_reg_27251.read()));
}

void sha256_transform::thread_add_ln62_53_fu_21485_p2() {
    add_ln62_53_fu_21485_p2 = (!add_ln62_116_fu_21480_p2.read().is_01() || !xor_ln54_213_reg_27289.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_116_fu_21480_p2.read()) + sc_biguint<32>(xor_ln54_213_reg_27289.read()));
}

void sha256_transform::thread_add_ln62_54_fu_21726_p2() {
    add_ln62_54_fu_21726_p2 = (!add_ln62_117_fu_21721_p2.read().is_01() || !xor_ln54_217_reg_27326.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_117_fu_21721_p2.read()) + sc_biguint<32>(xor_ln54_217_reg_27326.read()));
}

void sha256_transform::thread_add_ln62_55_fu_21948_p2() {
    add_ln62_55_fu_21948_p2 = (!add_ln62_118_fu_21943_p2.read().is_01() || !xor_ln54_221_reg_27364.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_118_fu_21943_p2.read()) + sc_biguint<32>(xor_ln54_221_reg_27364.read()));
}

void sha256_transform::thread_add_ln62_56_fu_22189_p2() {
    add_ln62_56_fu_22189_p2 = (!add_ln62_119_fu_22184_p2.read().is_01() || !xor_ln54_225_reg_27401.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_119_fu_22184_p2.read()) + sc_biguint<32>(xor_ln54_225_reg_27401.read()));
}

void sha256_transform::thread_add_ln62_57_fu_22410_p2() {
    add_ln62_57_fu_22410_p2 = (!add_ln62_120_fu_22405_p2.read().is_01() || !xor_ln54_229_reg_27439.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_120_fu_22405_p2.read()) + sc_biguint<32>(xor_ln54_229_reg_27439.read()));
}

void sha256_transform::thread_add_ln62_58_fu_22652_p2() {
    add_ln62_58_fu_22652_p2 = (!add_ln62_121_fu_22647_p2.read().is_01() || !xor_ln54_233_reg_27476.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_121_fu_22647_p2.read()) + sc_biguint<32>(xor_ln54_233_reg_27476.read()));
}

void sha256_transform::thread_add_ln62_59_fu_22873_p2() {
    add_ln62_59_fu_22873_p2 = (!add_ln62_122_fu_22868_p2.read().is_01() || !xor_ln54_237_reg_27514.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_122_fu_22868_p2.read()) + sc_biguint<32>(xor_ln54_237_reg_27514.read()));
}

void sha256_transform::thread_add_ln62_5_fu_4153_p2() {
    add_ln62_5_fu_4153_p2 = (!add_ln62_68_fu_4148_p2.read().is_01() || !xor_ln54_21_reg_24686.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_68_fu_4148_p2.read()) + sc_biguint<32>(xor_ln54_21_reg_24686.read()));
}

void sha256_transform::thread_add_ln62_60_fu_23115_p2() {
    add_ln62_60_fu_23115_p2 = (!add_ln62_123_fu_23110_p2.read().is_01() || !xor_ln54_241_reg_27551.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_123_fu_23110_p2.read()) + sc_biguint<32>(xor_ln54_241_reg_27551.read()));
}

void sha256_transform::thread_add_ln62_61_fu_23337_p2() {
    add_ln62_61_fu_23337_p2 = (!add_ln62_124_fu_23332_p2.read().is_01() || !xor_ln54_245_reg_27589.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_124_fu_23332_p2.read()) + sc_biguint<32>(xor_ln54_245_reg_27589.read()));
}

void sha256_transform::thread_add_ln62_62_fu_23553_p2() {
    add_ln62_62_fu_23553_p2 = (!add_ln62_125_fu_23548_p2.read().is_01() || !xor_ln54_249_reg_27623.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_125_fu_23548_p2.read()) + sc_biguint<32>(xor_ln54_249_reg_27623.read()));
}

void sha256_transform::thread_add_ln62_63_fu_2641_p2() {
    add_ln62_63_fu_2641_p2 = (!xor_ln54_3_fu_2635_p2.read().is_01() || !add_ln53_3_reg_24012.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_3_fu_2635_p2.read()) + sc_biguint<32>(add_ln53_3_reg_24012.read()));
}

void sha256_transform::thread_add_ln62_64_fu_2966_p2() {
    add_ln62_64_fu_2966_p2 = (!xor_ln54_7_fu_2960_p2.read().is_01() || !add_ln53_7_reg_24109.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_7_fu_2960_p2.read()) + sc_biguint<32>(add_ln53_7_reg_24109.read()));
}

void sha256_transform::thread_add_ln62_65_fu_3557_p2() {
    add_ln62_65_fu_3557_p2 = (!xor_ln54_11_fu_3551_p2.read().is_01() || !add_ln53_11_reg_24313.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_11_fu_3551_p2.read()) + sc_biguint<32>(add_ln53_11_reg_24313.read()));
}

void sha256_transform::thread_add_ln62_66_fu_3786_p2() {
    add_ln62_66_fu_3786_p2 = (!xor_ln54_15_fu_3780_p2.read().is_01() || !add_ln53_15_reg_24435.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_15_fu_3780_p2.read()) + sc_biguint<32>(add_ln53_15_reg_24435.read()));
}

void sha256_transform::thread_add_ln62_67_fu_3926_p2() {
    add_ln62_67_fu_3926_p2 = (!xor_ln54_19_fu_3920_p2.read().is_01() || !add_ln53_19_reg_24623.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_19_fu_3920_p2.read()) + sc_biguint<32>(add_ln53_19_reg_24623.read()));
}

void sha256_transform::thread_add_ln62_68_fu_4148_p2() {
    add_ln62_68_fu_4148_p2 = (!xor_ln54_23_fu_4142_p2.read().is_01() || !add_ln53_23_reg_24665.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_23_fu_4142_p2.read()) + sc_biguint<32>(add_ln53_23_reg_24665.read()));
}

void sha256_transform::thread_add_ln62_69_fu_4407_p2() {
    add_ln62_69_fu_4407_p2 = (!xor_ln54_27_fu_4401_p2.read().is_01() || !add_ln53_27_reg_24718.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_27_fu_4401_p2.read()) + sc_biguint<32>(add_ln53_27_reg_24718.read()));
}

void sha256_transform::thread_add_ln62_6_fu_4412_p2() {
    add_ln62_6_fu_4412_p2 = (!add_ln62_69_fu_4407_p2.read().is_01() || !xor_ln54_25_reg_24723.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_69_fu_4407_p2.read()) + sc_biguint<32>(xor_ln54_25_reg_24723.read()));
}

void sha256_transform::thread_add_ln62_70_fu_4630_p2() {
    add_ln62_70_fu_4630_p2 = (!xor_ln54_31_fu_4624_p2.read().is_01() || !add_ln53_31_reg_24750.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_31_fu_4624_p2.read()) + sc_biguint<32>(add_ln53_31_reg_24750.read()));
}

void sha256_transform::thread_add_ln62_71_fu_4892_p2() {
    add_ln62_71_fu_4892_p2 = (!xor_ln54_35_fu_4886_p2.read().is_01() || !add_ln53_35_reg_24803.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_35_fu_4886_p2.read()) + sc_biguint<32>(add_ln53_35_reg_24803.read()));
}

void sha256_transform::thread_add_ln62_72_fu_5115_p2() {
    add_ln62_72_fu_5115_p2 = (!xor_ln54_39_fu_5109_p2.read().is_01() || !add_ln53_39_reg_24836.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_39_fu_5109_p2.read()) + sc_biguint<32>(add_ln53_39_reg_24836.read()));
}

void sha256_transform::thread_add_ln62_73_fu_5377_p2() {
    add_ln62_73_fu_5377_p2 = (!xor_ln54_43_fu_5371_p2.read().is_01() || !add_ln53_43_reg_24890.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_43_fu_5371_p2.read()) + sc_biguint<32>(add_ln53_43_reg_24890.read()));
}

void sha256_transform::thread_add_ln62_74_fu_5600_p2() {
    add_ln62_74_fu_5600_p2 = (!xor_ln54_47_fu_5594_p2.read().is_01() || !add_ln53_47_reg_24923.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_47_fu_5594_p2.read()) + sc_biguint<32>(add_ln53_47_reg_24923.read()));
}

void sha256_transform::thread_add_ln62_75_fu_5858_p2() {
    add_ln62_75_fu_5858_p2 = (!xor_ln54_51_fu_5852_p2.read().is_01() || !add_ln53_51_reg_24977.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_51_fu_5852_p2.read()) + sc_biguint<32>(add_ln53_51_reg_24977.read()));
}

void sha256_transform::thread_add_ln62_76_fu_6080_p2() {
    add_ln62_76_fu_6080_p2 = (!xor_ln54_55_fu_6074_p2.read().is_01() || !add_ln53_55_reg_25010.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_55_fu_6074_p2.read()) + sc_biguint<32>(add_ln53_55_reg_25010.read()));
}

void sha256_transform::thread_add_ln62_77_fu_6484_p2() {
    add_ln62_77_fu_6484_p2 = (!xor_ln54_59_fu_6478_p2.read().is_01() || !add_ln53_59_reg_25064.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_59_fu_6478_p2.read()) + sc_biguint<32>(add_ln53_59_reg_25064.read()));
}

void sha256_transform::thread_add_ln62_78_fu_6861_p2() {
    add_ln62_78_fu_6861_p2 = (!xor_ln54_63_fu_6855_p2.read().is_01() || !add_ln53_63_reg_25102.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_63_fu_6855_p2.read()) + sc_biguint<32>(add_ln53_63_reg_25102.read()));
}

void sha256_transform::thread_add_ln62_79_fu_7255_p2() {
    add_ln62_79_fu_7255_p2 = (!xor_ln54_67_fu_7249_p2.read().is_01() || !add_ln53_67_reg_25183.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_67_fu_7249_p2.read()) + sc_biguint<32>(add_ln53_67_reg_25183.read()));
}

void sha256_transform::thread_add_ln62_7_fu_4635_p2() {
    add_ln62_7_fu_4635_p2 = (!add_ln62_70_fu_4630_p2.read().is_01() || !xor_ln54_29_reg_24771.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_70_fu_4630_p2.read()) + sc_biguint<32>(xor_ln54_29_reg_24771.read()));
}

void sha256_transform::thread_add_ln62_80_fu_7632_p2() {
    add_ln62_80_fu_7632_p2 = (!xor_ln54_71_fu_7626_p2.read().is_01() || !add_ln53_71_reg_25215.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_71_fu_7626_p2.read()) + sc_biguint<32>(add_ln53_71_reg_25215.read()));
}

void sha256_transform::thread_add_ln62_81_fu_8026_p2() {
    add_ln62_81_fu_8026_p2 = (!xor_ln54_75_fu_8020_p2.read().is_01() || !add_ln53_75_reg_25296.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_75_fu_8020_p2.read()) + sc_biguint<32>(add_ln53_75_reg_25296.read()));
}

void sha256_transform::thread_add_ln62_82_fu_8403_p2() {
    add_ln62_82_fu_8403_p2 = (!xor_ln54_79_fu_8397_p2.read().is_01() || !add_ln53_79_reg_25328.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_79_fu_8397_p2.read()) + sc_biguint<32>(add_ln53_79_reg_25328.read()));
}

void sha256_transform::thread_add_ln62_83_fu_8801_p2() {
    add_ln62_83_fu_8801_p2 = (!xor_ln54_83_fu_8795_p2.read().is_01() || !add_ln53_83_reg_25409.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_83_fu_8795_p2.read()) + sc_biguint<32>(add_ln53_83_reg_25409.read()));
}

void sha256_transform::thread_add_ln62_84_fu_9178_p2() {
    add_ln62_84_fu_9178_p2 = (!xor_ln54_87_fu_9172_p2.read().is_01() || !add_ln53_87_reg_25446.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_87_fu_9172_p2.read()) + sc_biguint<32>(add_ln53_87_reg_25446.read()));
}

void sha256_transform::thread_add_ln62_85_fu_9577_p2() {
    add_ln62_85_fu_9577_p2 = (!xor_ln54_91_fu_9571_p2.read().is_01() || !add_ln53_91_reg_25527.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_91_fu_9571_p2.read()) + sc_biguint<32>(add_ln53_91_reg_25527.read()));
}

void sha256_transform::thread_add_ln62_86_fu_9953_p2() {
    add_ln62_86_fu_9953_p2 = (!xor_ln54_95_fu_9947_p2.read().is_01() || !add_ln53_95_reg_25559.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_95_fu_9947_p2.read()) + sc_biguint<32>(add_ln53_95_reg_25559.read()));
}

void sha256_transform::thread_add_ln62_87_fu_10806_p2() {
    add_ln62_87_fu_10806_p2 = (!xor_ln54_99_fu_10800_p2.read().is_01() || !add_ln53_99_reg_25644.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_99_fu_10800_p2.read()) + sc_biguint<32>(add_ln53_99_reg_25644.read()));
}

void sha256_transform::thread_add_ln62_88_fu_11330_p2() {
    add_ln62_88_fu_11330_p2 = (!xor_ln54_103_fu_11324_p2.read().is_01() || !add_ln53_103_reg_25705.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_103_fu_11324_p2.read()) + sc_biguint<32>(add_ln53_103_reg_25705.read()));
}

void sha256_transform::thread_add_ln62_89_fu_12188_p2() {
    add_ln62_89_fu_12188_p2 = (!xor_ln54_107_fu_12182_p2.read().is_01() || !add_ln53_107_reg_25821.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_107_fu_12182_p2.read()) + sc_biguint<32>(add_ln53_107_reg_25821.read()));
}

void sha256_transform::thread_add_ln62_8_fu_4897_p2() {
    add_ln62_8_fu_4897_p2 = (!add_ln62_71_fu_4892_p2.read().is_01() || !xor_ln54_33_reg_24808.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_71_fu_4892_p2.read()) + sc_biguint<32>(xor_ln54_33_reg_24808.read()));
}

void sha256_transform::thread_add_ln62_90_fu_12718_p2() {
    add_ln62_90_fu_12718_p2 = (!xor_ln54_111_fu_12712_p2.read().is_01() || !add_ln53_111_reg_25882.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_111_fu_12712_p2.read()) + sc_biguint<32>(add_ln53_111_reg_25882.read()));
}

void sha256_transform::thread_add_ln62_91_fu_13575_p2() {
    add_ln62_91_fu_13575_p2 = (!xor_ln54_115_fu_13569_p2.read().is_01() || !add_ln53_115_reg_25998.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_115_fu_13569_p2.read()) + sc_biguint<32>(add_ln53_115_reg_25998.read()));
}

void sha256_transform::thread_add_ln62_92_fu_14105_p2() {
    add_ln62_92_fu_14105_p2 = (!xor_ln54_119_fu_14099_p2.read().is_01() || !add_ln53_119_reg_26059.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_119_fu_14099_p2.read()) + sc_biguint<32>(add_ln53_119_reg_26059.read()));
}

void sha256_transform::thread_add_ln62_93_fu_14964_p2() {
    add_ln62_93_fu_14964_p2 = (!xor_ln54_123_fu_14958_p2.read().is_01() || !add_ln53_123_reg_26175.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_123_fu_14958_p2.read()) + sc_biguint<32>(add_ln53_123_reg_26175.read()));
}

void sha256_transform::thread_add_ln62_94_fu_15425_p2() {
    add_ln62_94_fu_15425_p2 = (!xor_ln54_127_fu_15419_p2.read().is_01() || !add_ln53_127_reg_26246.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_127_fu_15419_p2.read()) + sc_biguint<32>(add_ln53_127_reg_26246.read()));
}

void sha256_transform::thread_add_ln62_95_fu_16008_p2() {
    add_ln62_95_fu_16008_p2 = (!xor_ln54_131_fu_16002_p2.read().is_01() || !add_ln53_131_reg_26354.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_131_fu_16002_p2.read()) + sc_biguint<32>(add_ln53_131_reg_26354.read()));
}

void sha256_transform::thread_add_ln62_96_fu_16398_p2() {
    add_ln62_96_fu_16398_p2 = (!xor_ln54_135_fu_16392_p2.read().is_01() || !add_ln53_135_reg_26408.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_135_fu_16392_p2.read()) + sc_biguint<32>(add_ln53_135_reg_26408.read()));
}

void sha256_transform::thread_add_ln62_97_fu_16975_p2() {
    add_ln62_97_fu_16975_p2 = (!xor_ln54_139_fu_16969_p2.read().is_01() || !add_ln53_139_reg_26500.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_139_fu_16969_p2.read()) + sc_biguint<32>(add_ln53_139_reg_26500.read()));
}

void sha256_transform::thread_add_ln62_98_fu_17304_p2() {
    add_ln62_98_fu_17304_p2 = (!xor_ln54_143_fu_17298_p2.read().is_01() || !add_ln53_143_reg_26548.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_143_fu_17298_p2.read()) + sc_biguint<32>(add_ln53_143_reg_26548.read()));
}

void sha256_transform::thread_add_ln62_99_fu_17554_p2() {
    add_ln62_99_fu_17554_p2 = (!xor_ln54_147_fu_17548_p2.read().is_01() || !add_ln53_147_reg_26641.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_147_fu_17548_p2.read()) + sc_biguint<32>(add_ln53_147_reg_26641.read()));
}

void sha256_transform::thread_add_ln62_9_fu_5120_p2() {
    add_ln62_9_fu_5120_p2 = (!add_ln62_72_fu_5115_p2.read().is_01() || !xor_ln54_37_reg_24858.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_72_fu_5115_p2.read()) + sc_biguint<32>(xor_ln54_37_reg_24858.read()));
}

void sha256_transform::thread_add_ln62_fu_2646_p2() {
    add_ln62_fu_2646_p2 = (!add_ln62_63_fu_2641_p2.read().is_01() || !xor_ln54_1_fu_2615_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln62_63_fu_2641_p2.read()) + sc_biguint<32>(xor_ln54_1_fu_2615_p2.read()));
}

void sha256_transform::thread_add_ln65_1_fu_23766_p2() {
    add_ln65_1_fu_23766_p2 = (!xor_ln54_253_reg_27660.read().is_01() || !xor_ln54_255_reg_27665.read().is_01())? sc_lv<32>(): (sc_biguint<32>(xor_ln54_253_reg_27660.read()) + sc_biguint<32>(xor_ln54_255_reg_27665.read()));
}

void sha256_transform::thread_add_ln65_2_fu_23770_p2() {
    add_ln65_2_fu_23770_p2 = (!ctx_state_0_read_1_reg_24335_pp0_iter2_reg.read().is_01() || !add_ln53_255_reg_27654.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ctx_state_0_read_1_reg_24335_pp0_iter2_reg.read()) + sc_biguint<32>(add_ln53_255_reg_27654.read()));
}

void sha256_transform::thread_add_ln65_fu_23774_p2() {
    add_ln65_fu_23774_p2 = (!add_ln65_2_fu_23770_p2.read().is_01() || !add_ln65_1_fu_23766_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln65_2_fu_23770_p2.read()) + sc_biguint<32>(add_ln65_1_fu_23766_p2.read()));
}

void sha256_transform::thread_add_ln66_fu_23749_p2() {
    add_ln66_fu_23749_p2 = (!ctx_state_1_read_1_reg_24214_pp0_iter2_reg.read().is_01() || !add_ln62_62_fu_23553_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ctx_state_1_read_1_reg_24214_pp0_iter2_reg.read()) + sc_biguint<32>(add_ln62_62_fu_23553_p2.read()));
}

void sha256_transform::thread_add_ln67_fu_23754_p2() {
    add_ln67_fu_23754_p2 = (!ctx_state_2_read_1_reg_24115_pp0_iter2_reg.read().is_01() || !add_ln62_61_reg_27610.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ctx_state_2_read_1_reg_24115_pp0_iter2_reg.read()) + sc_biguint<32>(add_ln62_61_reg_27610.read()));
}

void sha256_transform::thread_add_ln68_fu_23758_p2() {
    add_ln68_fu_23758_p2 = (!ctx_state_3_read_1_reg_23957_pp0_iter2_reg.read().is_01() || !add_ln62_60_reg_27579.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ctx_state_3_read_1_reg_23957_pp0_iter2_reg.read()) + sc_biguint<32>(add_ln62_60_reg_27579.read()));
}

void sha256_transform::thread_add_ln69_1_fu_23780_p2() {
    add_ln69_1_fu_23780_p2 = (!ctx_state_4_read_1_reg_23884_pp0_iter2_reg.read().is_01() || !add_ln62_59_reg_27536.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ctx_state_4_read_1_reg_23884_pp0_iter2_reg.read()) + sc_biguint<32>(add_ln62_59_reg_27536.read()));
}

void sha256_transform::thread_add_ln69_fu_23784_p2() {
    add_ln69_fu_23784_p2 = (!add_ln69_1_fu_23780_p2.read().is_01() || !add_ln53_255_reg_27654.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln69_1_fu_23780_p2.read()) + sc_biguint<32>(add_ln53_255_reg_27654.read()));
}

void sha256_transform::thread_add_ln70_fu_23762_p2() {
    add_ln70_fu_23762_p2 = (!ctx_state_5_read_1_reg_23877_pp0_iter2_reg.read().is_01() || !add_ln58_62_reg_27628.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ctx_state_5_read_1_reg_23877_pp0_iter2_reg.read()) + sc_biguint<32>(add_ln58_62_reg_27628.read()));
}

void sha256_transform::thread_add_ln71_fu_23456_p2() {
    add_ln71_fu_23456_p2 = (!ctx_state_6_read_1_reg_23871_pp0_iter2_reg.read().is_01() || !add_ln58_61_reg_27594.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ctx_state_6_read_1_reg_23871_pp0_iter2_reg.read()) + sc_biguint<32>(add_ln58_61_reg_27594.read()));
}

void sha256_transform::thread_add_ln72_fu_23460_p2() {
    add_ln72_fu_23460_p2 = (!ctx_state_7_read_1_reg_23952_pp0_iter2_reg.read().is_01() || !add_ln58_60_reg_27556.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ctx_state_7_read_1_reg_23952_pp0_iter2_reg.read()) + sc_biguint<32>(add_ln58_60_reg_27556.read()));
}

void sha256_transform::thread_and_ln53_100_fu_17156_p2() {
    and_ln53_100_fu_17156_p2 = (add_ln58_33_reg_26451.read() & xor_ln53_146_fu_17150_p2.read());
}

void sha256_transform::thread_and_ln53_101_fu_17495_p2() {
    and_ln53_101_fu_17495_p2 = (add_ln58_34_reg_26510.read() & xor_ln53_150_fu_17489_p2.read());
}

void sha256_transform::thread_and_ln53_102_fu_17735_p2() {
    and_ln53_102_fu_17735_p2 = (add_ln58_35_reg_26589.read() & xor_ln53_154_fu_17729_p2.read());
}

void sha256_transform::thread_and_ln53_103_fu_17967_p2() {
    and_ln53_103_fu_17967_p2 = (add_ln58_36_reg_26651.read() & xor_ln53_158_fu_17961_p2.read());
}

void sha256_transform::thread_and_ln53_104_fu_18198_p2() {
    and_ln53_104_fu_18198_p2 = (add_ln58_37_reg_26694.read() & xor_ln53_162_fu_18192_p2.read());
}

void sha256_transform::thread_and_ln53_105_fu_18430_p2() {
    and_ln53_105_fu_18430_p2 = (add_ln58_38_reg_26731.read() & xor_ln53_166_fu_18424_p2.read());
}

void sha256_transform::thread_and_ln53_106_fu_18661_p2() {
    and_ln53_106_fu_18661_p2 = (add_ln58_39_reg_26769.read() & xor_ln53_170_fu_18655_p2.read());
}

void sha256_transform::thread_and_ln53_107_fu_18893_p2() {
    and_ln53_107_fu_18893_p2 = (add_ln58_40_reg_26806.read() & xor_ln53_174_fu_18887_p2.read());
}

void sha256_transform::thread_and_ln53_108_fu_19124_p2() {
    and_ln53_108_fu_19124_p2 = (add_ln58_41_reg_26844.read() & xor_ln53_178_fu_19118_p2.read());
}

void sha256_transform::thread_and_ln53_109_fu_19356_p2() {
    and_ln53_109_fu_19356_p2 = (add_ln58_42_reg_26881.read() & xor_ln53_182_fu_19350_p2.read());
}

void sha256_transform::thread_and_ln53_10_fu_5062_p2() {
    and_ln53_10_fu_5062_p2 = (add_ln58_9_fu_4980_p2.read() & add_ln58_8_reg_24813.read());
}

void sha256_transform::thread_and_ln53_110_fu_19587_p2() {
    and_ln53_110_fu_19587_p2 = (add_ln58_43_reg_26919.read() & xor_ln53_186_fu_19581_p2.read());
}

void sha256_transform::thread_and_ln53_111_fu_19819_p2() {
    and_ln53_111_fu_19819_p2 = (add_ln58_44_reg_26956.read() & xor_ln53_190_fu_19813_p2.read());
}

void sha256_transform::thread_and_ln53_112_fu_20050_p2() {
    and_ln53_112_fu_20050_p2 = (add_ln58_45_reg_26994.read() & xor_ln53_194_fu_20044_p2.read());
}

void sha256_transform::thread_and_ln53_113_fu_20282_p2() {
    and_ln53_113_fu_20282_p2 = (add_ln58_46_reg_27031.read() & xor_ln53_198_fu_20276_p2.read());
}

void sha256_transform::thread_and_ln53_114_fu_20513_p2() {
    and_ln53_114_fu_20513_p2 = (add_ln58_47_reg_27069.read() & xor_ln53_202_fu_20507_p2.read());
}

void sha256_transform::thread_and_ln53_115_fu_20745_p2() {
    and_ln53_115_fu_20745_p2 = (add_ln58_48_reg_27106.read() & xor_ln53_206_fu_20739_p2.read());
}

void sha256_transform::thread_and_ln53_116_fu_20976_p2() {
    and_ln53_116_fu_20976_p2 = (add_ln58_49_reg_27144.read() & xor_ln53_210_fu_20970_p2.read());
}

void sha256_transform::thread_and_ln53_117_fu_21208_p2() {
    and_ln53_117_fu_21208_p2 = (add_ln58_50_reg_27181.read() & xor_ln53_214_fu_21202_p2.read());
}

void sha256_transform::thread_and_ln53_118_fu_21439_p2() {
    and_ln53_118_fu_21439_p2 = (add_ln58_51_reg_27219.read() & xor_ln53_218_fu_21433_p2.read());
}

void sha256_transform::thread_and_ln53_119_fu_21671_p2() {
    and_ln53_119_fu_21671_p2 = (add_ln58_52_reg_27256.read() & xor_ln53_222_fu_21665_p2.read());
}

void sha256_transform::thread_and_ln53_11_fu_5295_p2() {
    and_ln53_11_fu_5295_p2 = (add_ln58_10_fu_5212_p2.read() & add_ln58_9_reg_24863.read());
}

void sha256_transform::thread_and_ln53_120_fu_21902_p2() {
    and_ln53_120_fu_21902_p2 = (add_ln58_53_reg_27294.read() & xor_ln53_226_fu_21896_p2.read());
}

void sha256_transform::thread_and_ln53_121_fu_22134_p2() {
    and_ln53_121_fu_22134_p2 = (add_ln58_54_reg_27331.read() & xor_ln53_230_fu_22128_p2.read());
}

void sha256_transform::thread_and_ln53_122_fu_22365_p2() {
    and_ln53_122_fu_22365_p2 = (add_ln58_55_reg_27369.read() & xor_ln53_234_fu_22359_p2.read());
}

void sha256_transform::thread_and_ln53_123_fu_22597_p2() {
    and_ln53_123_fu_22597_p2 = (add_ln58_56_reg_27406.read() & xor_ln53_238_fu_22591_p2.read());
}

void sha256_transform::thread_and_ln53_124_fu_22828_p2() {
    and_ln53_124_fu_22828_p2 = (add_ln58_57_reg_27444.read() & xor_ln53_242_fu_22822_p2.read());
}

void sha256_transform::thread_and_ln53_125_fu_23060_p2() {
    and_ln53_125_fu_23060_p2 = (add_ln58_58_reg_27481.read() & xor_ln53_246_fu_23054_p2.read());
}

void sha256_transform::thread_and_ln53_126_fu_23291_p2() {
    and_ln53_126_fu_23291_p2 = (add_ln58_59_reg_27519.read() & xor_ln53_250_fu_23285_p2.read());
}

void sha256_transform::thread_and_ln53_127_fu_23445_p2() {
    and_ln53_127_fu_23445_p2 = (add_ln58_60_reg_27556.read() & xor_ln53_254_fu_23439_p2.read());
}

void sha256_transform::thread_and_ln53_12_fu_5547_p2() {
    and_ln53_12_fu_5547_p2 = (add_ln58_11_fu_5465_p2.read() & add_ln58_10_reg_24900.read());
}

void sha256_transform::thread_and_ln53_13_fu_5780_p2() {
    and_ln53_13_fu_5780_p2 = (add_ln58_12_fu_5697_p2.read() & add_ln58_11_reg_24950.read());
}

void sha256_transform::thread_and_ln53_14_fu_6028_p2() {
    and_ln53_14_fu_6028_p2 = (add_ln58_13_fu_5946_p2.read() & add_ln58_12_reg_24987.read());
}

void sha256_transform::thread_and_ln53_15_fu_6261_p2() {
    and_ln53_15_fu_6261_p2 = (add_ln58_14_fu_6178_p2.read() & add_ln58_13_reg_25037.read());
}

void sha256_transform::thread_and_ln53_16_fu_6654_p2() {
    and_ln53_16_fu_6654_p2 = (add_ln58_15_fu_6572_p2.read() & add_ln58_14_reg_25074.read());
}

void sha256_transform::thread_and_ln53_17_fu_7041_p2() {
    and_ln53_17_fu_7041_p2 = (add_ln58_16_fu_6958_p2.read() & add_ln58_15_reg_25139.read());
}

void sha256_transform::thread_and_ln53_18_fu_7425_p2() {
    and_ln53_18_fu_7425_p2 = (add_ln58_17_fu_7343_p2.read() & add_ln58_16_reg_25193.read());
}

void sha256_transform::thread_and_ln53_19_fu_7812_p2() {
    and_ln53_19_fu_7812_p2 = (add_ln58_18_fu_7729_p2.read() & add_ln58_17_reg_25252.read());
}

void sha256_transform::thread_and_ln53_1_fu_1194_p2() {
    and_ln53_1_fu_1194_p2 = (ap_port_reg_ctx_state_6_read.read() & xor_ln53_2_fu_1188_p2.read());
}

void sha256_transform::thread_and_ln53_20_fu_8196_p2() {
    and_ln53_20_fu_8196_p2 = (add_ln58_19_fu_8114_p2.read() & add_ln58_18_reg_25306.read());
}

void sha256_transform::thread_and_ln53_21_fu_8583_p2() {
    and_ln53_21_fu_8583_p2 = (add_ln58_20_fu_8500_p2.read() & add_ln58_19_reg_25365.read());
}

void sha256_transform::thread_and_ln53_22_fu_8971_p2() {
    and_ln53_22_fu_8971_p2 = (add_ln58_21_fu_8889_p2.read() & add_ln58_20_reg_25419.read());
}

void sha256_transform::thread_and_ln53_23_fu_9358_p2() {
    and_ln53_23_fu_9358_p2 = (add_ln58_22_fu_9275_p2.read() & add_ln58_21_reg_25483.read());
}

void sha256_transform::thread_and_ln53_24_fu_9747_p2() {
    and_ln53_24_fu_9747_p2 = (add_ln58_23_fu_9665_p2.read() & add_ln58_22_reg_25537.read());
}

void sha256_transform::thread_and_ln53_25_fu_10134_p2() {
    and_ln53_25_fu_10134_p2 = (add_ln58_24_fu_10051_p2.read() & add_ln58_23_reg_25600.read());
}

void sha256_transform::thread_and_ln53_26_fu_10976_p2() {
    and_ln53_26_fu_10976_p2 = (add_ln58_25_fu_10894_p2.read() & add_ln58_24_reg_25654.read());
}

void sha256_transform::thread_and_ln53_27_fu_11511_p2() {
    and_ln53_27_fu_11511_p2 = (add_ln58_26_fu_11428_p2.read() & add_ln58_25_reg_25760.read());
}

void sha256_transform::thread_and_ln53_28_fu_12358_p2() {
    and_ln53_28_fu_12358_p2 = (add_ln58_27_fu_12276_p2.read() & add_ln58_26_reg_25831.read());
}

void sha256_transform::thread_and_ln53_29_fu_12898_p2() {
    and_ln53_29_fu_12898_p2 = (add_ln58_28_fu_12815_p2.read() & add_ln58_27_reg_25937.read());
}

void sha256_transform::thread_and_ln53_2_fu_2014_p2() {
    and_ln53_2_fu_2014_p2 = (add_ln58_1_fu_1931_p2.read() & add_ln58_reg_24017.read());
}

void sha256_transform::thread_and_ln53_30_fu_13745_p2() {
    and_ln53_30_fu_13745_p2 = (add_ln58_29_fu_13663_p2.read() & add_ln58_28_reg_26008.read());
}

void sha256_transform::thread_and_ln53_31_fu_14285_p2() {
    and_ln53_31_fu_14285_p2 = (add_ln58_30_fu_14202_p2.read() & add_ln58_29_reg_26114.read());
}

void sha256_transform::thread_and_ln53_32_fu_15134_p2() {
    and_ln53_32_fu_15134_p2 = (add_ln58_31_fu_15052_p2.read() & add_ln58_30_reg_26185.read());
}

void sha256_transform::thread_and_ln53_33_fu_15605_p2() {
    and_ln53_33_fu_15605_p2 = (add_ln58_32_fu_15522_p2.read() & add_ln58_31_reg_26300.read());
}

void sha256_transform::thread_and_ln53_34_fu_16178_p2() {
    and_ln53_34_fu_16178_p2 = (add_ln58_33_fu_16096_p2.read() & add_ln58_32_reg_26364.read());
}

void sha256_transform::thread_and_ln53_35_fu_16578_p2() {
    and_ln53_35_fu_16578_p2 = (add_ln58_34_fu_16495_p2.read() & add_ln58_33_reg_26451.read());
}

void sha256_transform::thread_and_ln53_36_fu_17145_p2() {
    and_ln53_36_fu_17145_p2 = (add_ln58_35_fu_17063_p2.read() & add_ln58_34_reg_26510.read());
}

void sha256_transform::thread_and_ln53_37_fu_17484_p2() {
    and_ln53_37_fu_17484_p2 = (add_ln58_36_fu_17401_p2.read() & add_ln58_35_reg_26589.read());
}

void sha256_transform::thread_and_ln53_38_fu_17724_p2() {
    and_ln53_38_fu_17724_p2 = (add_ln58_37_fu_17642_p2.read() & add_ln58_36_reg_26651.read());
}

void sha256_transform::thread_and_ln53_39_fu_17956_p2() {
    and_ln53_39_fu_17956_p2 = (add_ln58_38_fu_17873_p2.read() & add_ln58_37_reg_26694.read());
}

void sha256_transform::thread_and_ln53_3_fu_2325_p2() {
    and_ln53_3_fu_2325_p2 = (add_ln58_2_fu_2241_p2.read() & add_ln58_1_reg_24197.read());
}

void sha256_transform::thread_and_ln53_40_fu_18187_p2() {
    and_ln53_40_fu_18187_p2 = (add_ln58_39_fu_18105_p2.read() & add_ln58_38_reg_26731.read());
}

void sha256_transform::thread_and_ln53_41_fu_18419_p2() {
    and_ln53_41_fu_18419_p2 = (add_ln58_40_fu_18336_p2.read() & add_ln58_39_reg_26769.read());
}

void sha256_transform::thread_and_ln53_42_fu_18650_p2() {
    and_ln53_42_fu_18650_p2 = (add_ln58_41_fu_18568_p2.read() & add_ln58_40_reg_26806.read());
}

void sha256_transform::thread_and_ln53_43_fu_18882_p2() {
    and_ln53_43_fu_18882_p2 = (add_ln58_42_fu_18799_p2.read() & add_ln58_41_reg_26844.read());
}

void sha256_transform::thread_and_ln53_44_fu_19113_p2() {
    and_ln53_44_fu_19113_p2 = (add_ln58_43_fu_19031_p2.read() & add_ln58_42_reg_26881.read());
}

void sha256_transform::thread_and_ln53_45_fu_19345_p2() {
    and_ln53_45_fu_19345_p2 = (add_ln58_44_fu_19262_p2.read() & add_ln58_43_reg_26919.read());
}

void sha256_transform::thread_and_ln53_46_fu_19576_p2() {
    and_ln53_46_fu_19576_p2 = (add_ln58_45_fu_19494_p2.read() & add_ln58_44_reg_26956.read());
}

void sha256_transform::thread_and_ln53_47_fu_19808_p2() {
    and_ln53_47_fu_19808_p2 = (add_ln58_46_fu_19725_p2.read() & add_ln58_45_reg_26994.read());
}

void sha256_transform::thread_and_ln53_48_fu_20039_p2() {
    and_ln53_48_fu_20039_p2 = (add_ln58_47_fu_19957_p2.read() & add_ln58_46_reg_27031.read());
}

void sha256_transform::thread_and_ln53_49_fu_20271_p2() {
    and_ln53_49_fu_20271_p2 = (add_ln58_48_fu_20188_p2.read() & add_ln58_47_reg_27069.read());
}

void sha256_transform::thread_and_ln53_4_fu_3136_p2() {
    and_ln53_4_fu_3136_p2 = (add_ln58_3_fu_3054_p2.read() & add_ln58_2_reg_24318.read());
}

void sha256_transform::thread_and_ln53_50_fu_20502_p2() {
    and_ln53_50_fu_20502_p2 = (add_ln58_49_fu_20420_p2.read() & add_ln58_48_reg_27106.read());
}

void sha256_transform::thread_and_ln53_51_fu_20734_p2() {
    and_ln53_51_fu_20734_p2 = (add_ln58_50_fu_20651_p2.read() & add_ln58_49_reg_27144.read());
}

void sha256_transform::thread_and_ln53_52_fu_20965_p2() {
    and_ln53_52_fu_20965_p2 = (add_ln58_51_fu_20883_p2.read() & add_ln58_50_reg_27181.read());
}

void sha256_transform::thread_and_ln53_53_fu_21197_p2() {
    and_ln53_53_fu_21197_p2 = (add_ln58_52_fu_21114_p2.read() & add_ln58_51_reg_27219.read());
}

void sha256_transform::thread_and_ln53_54_fu_21428_p2() {
    and_ln53_54_fu_21428_p2 = (add_ln58_53_fu_21346_p2.read() & add_ln58_52_reg_27256.read());
}

void sha256_transform::thread_and_ln53_55_fu_21660_p2() {
    and_ln53_55_fu_21660_p2 = (add_ln58_54_fu_21577_p2.read() & add_ln58_53_reg_27294.read());
}

void sha256_transform::thread_and_ln53_56_fu_21891_p2() {
    and_ln53_56_fu_21891_p2 = (add_ln58_55_fu_21809_p2.read() & add_ln58_54_reg_27331.read());
}

void sha256_transform::thread_and_ln53_57_fu_22123_p2() {
    and_ln53_57_fu_22123_p2 = (add_ln58_56_fu_22040_p2.read() & add_ln58_55_reg_27369.read());
}

void sha256_transform::thread_and_ln53_58_fu_22354_p2() {
    and_ln53_58_fu_22354_p2 = (add_ln58_57_fu_22272_p2.read() & add_ln58_56_reg_27406.read());
}

void sha256_transform::thread_and_ln53_59_fu_22586_p2() {
    and_ln53_59_fu_22586_p2 = (add_ln58_58_fu_22503_p2.read() & add_ln58_57_reg_27444.read());
}

void sha256_transform::thread_and_ln53_5_fu_3737_p2() {
    and_ln53_5_fu_3737_p2 = (add_ln58_4_fu_3654_p2.read() & add_ln58_3_reg_24531.read());
}

void sha256_transform::thread_and_ln53_60_fu_22817_p2() {
    and_ln53_60_fu_22817_p2 = (add_ln58_59_fu_22735_p2.read() & add_ln58_58_reg_27481.read());
}

void sha256_transform::thread_and_ln53_61_fu_23049_p2() {
    and_ln53_61_fu_23049_p2 = (add_ln58_60_fu_22966_p2.read() & add_ln58_59_reg_27519.read());
}

void sha256_transform::thread_and_ln53_62_fu_23280_p2() {
    and_ln53_62_fu_23280_p2 = (add_ln58_61_fu_23198_p2.read() & add_ln58_60_reg_27556.read());
}

void sha256_transform::thread_and_ln53_63_fu_23434_p2() {
    and_ln53_63_fu_23434_p2 = (add_ln58_62_fu_23429_p2.read() & add_ln58_61_reg_27594.read());
}

void sha256_transform::thread_and_ln53_64_fu_1496_p2() {
    and_ln53_64_fu_1496_p2 = (add_ln58_fu_1412_p2.read() & ctx_state_4_read_1_reg_23884.read());
}

void sha256_transform::thread_and_ln53_65_fu_1507_p2() {
    and_ln53_65_fu_1507_p2 = (ctx_state_5_read_1_reg_23877.read() & xor_ln53_6_fu_1501_p2.read());
}

void sha256_transform::thread_and_ln53_66_fu_2025_p2() {
    and_ln53_66_fu_2025_p2 = (ctx_state_4_read_1_reg_23884.read() & xor_ln53_10_fu_2019_p2.read());
}

void sha256_transform::thread_and_ln53_67_fu_2336_p2() {
    and_ln53_67_fu_2336_p2 = (add_ln58_reg_24017.read() & xor_ln53_14_fu_2330_p2.read());
}

void sha256_transform::thread_and_ln53_68_fu_3147_p2() {
    and_ln53_68_fu_3147_p2 = (add_ln58_1_reg_24197.read() & xor_ln53_18_fu_3141_p2.read());
}

void sha256_transform::thread_and_ln53_69_fu_3748_p2() {
    and_ln53_69_fu_3748_p2 = (add_ln58_2_reg_24318.read() & xor_ln53_22_fu_3742_p2.read());
}

void sha256_transform::thread_and_ln53_6_fu_4096_p2() {
    and_ln53_6_fu_4096_p2 = (add_ln58_5_fu_4014_p2.read() & add_ln58_4_reg_24628.read());
}

void sha256_transform::thread_and_ln53_70_fu_4107_p2() {
    and_ln53_70_fu_4107_p2 = (add_ln58_3_reg_24531.read() & xor_ln53_26_fu_4101_p2.read());
}

void sha256_transform::thread_and_ln53_71_fu_4340_p2() {
    and_ln53_71_fu_4340_p2 = (add_ln58_4_reg_24628.read() & xor_ln53_30_fu_4334_p2.read());
}

void sha256_transform::thread_and_ln53_72_fu_4588_p2() {
    and_ln53_72_fu_4588_p2 = (add_ln58_5_reg_24691.read() & xor_ln53_34_fu_4582_p2.read());
}

void sha256_transform::thread_and_ln53_73_fu_4821_p2() {
    and_ln53_73_fu_4821_p2 = (add_ln58_6_reg_24728.read() & xor_ln53_38_fu_4815_p2.read());
}

void sha256_transform::thread_and_ln53_74_fu_5073_p2() {
    and_ln53_74_fu_5073_p2 = (add_ln58_7_reg_24776.read() & xor_ln53_42_fu_5067_p2.read());
}

void sha256_transform::thread_and_ln53_75_fu_5306_p2() {
    and_ln53_75_fu_5306_p2 = (add_ln58_8_reg_24813.read() & xor_ln53_46_fu_5300_p2.read());
}

void sha256_transform::thread_and_ln53_76_fu_5558_p2() {
    and_ln53_76_fu_5558_p2 = (add_ln58_9_reg_24863.read() & xor_ln53_50_fu_5552_p2.read());
}

void sha256_transform::thread_and_ln53_77_fu_5791_p2() {
    and_ln53_77_fu_5791_p2 = (add_ln58_10_reg_24900.read() & xor_ln53_54_fu_5785_p2.read());
}

void sha256_transform::thread_and_ln53_78_fu_6039_p2() {
    and_ln53_78_fu_6039_p2 = (add_ln58_11_reg_24950.read() & xor_ln53_58_fu_6033_p2.read());
}

void sha256_transform::thread_and_ln53_79_fu_6272_p2() {
    and_ln53_79_fu_6272_p2 = (add_ln58_12_reg_24987.read() & xor_ln53_62_fu_6266_p2.read());
}

void sha256_transform::thread_and_ln53_7_fu_4329_p2() {
    and_ln53_7_fu_4329_p2 = (add_ln58_6_fu_4246_p2.read() & add_ln58_5_reg_24691.read());
}

void sha256_transform::thread_and_ln53_80_fu_6665_p2() {
    and_ln53_80_fu_6665_p2 = (add_ln58_13_reg_25037.read() & xor_ln53_66_fu_6659_p2.read());
}

void sha256_transform::thread_and_ln53_81_fu_7052_p2() {
    and_ln53_81_fu_7052_p2 = (add_ln58_14_reg_25074.read() & xor_ln53_70_fu_7046_p2.read());
}

void sha256_transform::thread_and_ln53_82_fu_7436_p2() {
    and_ln53_82_fu_7436_p2 = (add_ln58_15_reg_25139.read() & xor_ln53_74_fu_7430_p2.read());
}

void sha256_transform::thread_and_ln53_83_fu_7823_p2() {
    and_ln53_83_fu_7823_p2 = (add_ln58_16_reg_25193.read() & xor_ln53_78_fu_7817_p2.read());
}

void sha256_transform::thread_and_ln53_84_fu_8207_p2() {
    and_ln53_84_fu_8207_p2 = (add_ln58_17_reg_25252.read() & xor_ln53_82_fu_8201_p2.read());
}

void sha256_transform::thread_and_ln53_85_fu_8594_p2() {
    and_ln53_85_fu_8594_p2 = (add_ln58_18_reg_25306.read() & xor_ln53_86_fu_8588_p2.read());
}

void sha256_transform::thread_and_ln53_86_fu_8982_p2() {
    and_ln53_86_fu_8982_p2 = (add_ln58_19_reg_25365.read() & xor_ln53_90_fu_8976_p2.read());
}

void sha256_transform::thread_and_ln53_87_fu_9369_p2() {
    and_ln53_87_fu_9369_p2 = (add_ln58_20_reg_25419.read() & xor_ln53_94_fu_9363_p2.read());
}

void sha256_transform::thread_and_ln53_88_fu_9758_p2() {
    and_ln53_88_fu_9758_p2 = (add_ln58_21_reg_25483.read() & xor_ln53_98_fu_9752_p2.read());
}

void sha256_transform::thread_and_ln53_89_fu_10145_p2() {
    and_ln53_89_fu_10145_p2 = (add_ln58_22_reg_25537.read() & xor_ln53_102_fu_10139_p2.read());
}

void sha256_transform::thread_and_ln53_8_fu_4577_p2() {
    and_ln53_8_fu_4577_p2 = (add_ln58_7_fu_4495_p2.read() & add_ln58_6_reg_24728.read());
}

void sha256_transform::thread_and_ln53_90_fu_10987_p2() {
    and_ln53_90_fu_10987_p2 = (add_ln58_23_reg_25600.read() & xor_ln53_106_fu_10981_p2.read());
}

void sha256_transform::thread_and_ln53_91_fu_11522_p2() {
    and_ln53_91_fu_11522_p2 = (add_ln58_24_reg_25654.read() & xor_ln53_110_fu_11516_p2.read());
}

void sha256_transform::thread_and_ln53_92_fu_12369_p2() {
    and_ln53_92_fu_12369_p2 = (add_ln58_25_reg_25760.read() & xor_ln53_114_fu_12363_p2.read());
}

void sha256_transform::thread_and_ln53_93_fu_12909_p2() {
    and_ln53_93_fu_12909_p2 = (add_ln58_26_reg_25831.read() & xor_ln53_118_fu_12903_p2.read());
}

void sha256_transform::thread_and_ln53_94_fu_13756_p2() {
    and_ln53_94_fu_13756_p2 = (add_ln58_27_reg_25937.read() & xor_ln53_122_fu_13750_p2.read());
}

void sha256_transform::thread_and_ln53_95_fu_14296_p2() {
    and_ln53_95_fu_14296_p2 = (add_ln58_28_reg_26008.read() & xor_ln53_126_fu_14290_p2.read());
}

void sha256_transform::thread_and_ln53_96_fu_15145_p2() {
    and_ln53_96_fu_15145_p2 = (add_ln58_29_reg_26114.read() & xor_ln53_130_fu_15139_p2.read());
}

void sha256_transform::thread_and_ln53_97_fu_15616_p2() {
    and_ln53_97_fu_15616_p2 = (add_ln58_30_reg_26185.read() & xor_ln53_134_fu_15610_p2.read());
}

void sha256_transform::thread_and_ln53_98_fu_16189_p2() {
    and_ln53_98_fu_16189_p2 = (add_ln58_31_reg_26300.read() & xor_ln53_138_fu_16183_p2.read());
}

void sha256_transform::thread_and_ln53_99_fu_16589_p2() {
    and_ln53_99_fu_16589_p2 = (add_ln58_32_reg_26364.read() & xor_ln53_142_fu_16583_p2.read());
}

void sha256_transform::thread_and_ln53_9_fu_4810_p2() {
    and_ln53_9_fu_4810_p2 = (add_ln58_8_fu_4727_p2.read() & add_ln58_7_reg_24776.read());
}

void sha256_transform::thread_and_ln53_fu_1182_p2() {
    and_ln53_fu_1182_p2 = (ap_port_reg_ctx_state_4_read.read() & ap_port_reg_ctx_state_5_read.read());
}

void sha256_transform::thread_and_ln54_100_fu_17544_p2() {
    and_ln54_100_fu_17544_p2 = (add_ln62_34_reg_26574.read() & add_ln62_33_reg_26490.read());
}

void sha256_transform::thread_and_ln54_101_fu_17765_p2() {
    and_ln54_101_fu_17765_p2 = (add_ln62_35_reg_26631.read() & add_ln62_34_reg_26574.read());
}

void sha256_transform::thread_and_ln54_102_fu_18007_p2() {
    and_ln54_102_fu_18007_p2 = (add_ln62_36_reg_26679.read() & add_ln62_35_reg_26631.read());
}

void sha256_transform::thread_and_ln54_103_fu_18228_p2() {
    and_ln54_103_fu_18228_p2 = (add_ln62_37_reg_26711.read() & add_ln62_36_reg_26679.read());
}

void sha256_transform::thread_and_ln54_104_fu_18470_p2() {
    and_ln54_104_fu_18470_p2 = (add_ln62_38_reg_26754.read() & add_ln62_37_reg_26711.read());
}

void sha256_transform::thread_and_ln54_105_fu_18692_p2() {
    and_ln54_105_fu_18692_p2 = (add_ln62_39_reg_26786.read() & add_ln62_38_reg_26754.read());
}

void sha256_transform::thread_and_ln54_106_fu_18933_p2() {
    and_ln54_106_fu_18933_p2 = (add_ln62_40_reg_26829.read() & add_ln62_39_reg_26786.read());
}

void sha256_transform::thread_and_ln54_107_fu_19155_p2() {
    and_ln54_107_fu_19155_p2 = (add_ln62_41_reg_26861.read() & add_ln62_40_reg_26829.read());
}

void sha256_transform::thread_and_ln54_108_fu_19396_p2() {
    and_ln54_108_fu_19396_p2 = (add_ln62_42_reg_26904.read() & add_ln62_41_reg_26861.read());
}

void sha256_transform::thread_and_ln54_109_fu_19618_p2() {
    and_ln54_109_fu_19618_p2 = (add_ln62_43_reg_26936.read() & add_ln62_42_reg_26904.read());
}

void sha256_transform::thread_and_ln54_10_fu_5362_p2() {
    and_ln54_10_fu_5362_p2 = (add_ln62_9_reg_24880.read() & xor_ln54_42_fu_5358_p2.read());
}

void sha256_transform::thread_and_ln54_110_fu_19859_p2() {
    and_ln54_110_fu_19859_p2 = (add_ln62_44_reg_26979.read() & add_ln62_43_reg_26936.read());
}

void sha256_transform::thread_and_ln54_111_fu_20081_p2() {
    and_ln54_111_fu_20081_p2 = (add_ln62_45_reg_27011.read() & add_ln62_44_reg_26979.read());
}

void sha256_transform::thread_and_ln54_112_fu_20322_p2() {
    and_ln54_112_fu_20322_p2 = (add_ln62_46_reg_27054.read() & add_ln62_45_reg_27011.read());
}

void sha256_transform::thread_and_ln54_113_fu_20544_p2() {
    and_ln54_113_fu_20544_p2 = (add_ln62_47_reg_27086.read() & add_ln62_46_reg_27054.read());
}

void sha256_transform::thread_and_ln54_114_fu_20785_p2() {
    and_ln54_114_fu_20785_p2 = (add_ln62_48_reg_27129.read() & add_ln62_47_reg_27086.read());
}

void sha256_transform::thread_and_ln54_115_fu_21007_p2() {
    and_ln54_115_fu_21007_p2 = (add_ln62_49_reg_27161.read() & add_ln62_48_reg_27129.read());
}

void sha256_transform::thread_and_ln54_116_fu_21248_p2() {
    and_ln54_116_fu_21248_p2 = (add_ln62_50_reg_27204.read() & add_ln62_49_reg_27161.read());
}

void sha256_transform::thread_and_ln54_117_fu_21470_p2() {
    and_ln54_117_fu_21470_p2 = (add_ln62_51_reg_27236.read() & add_ln62_50_reg_27204.read());
}

void sha256_transform::thread_and_ln54_118_fu_21711_p2() {
    and_ln54_118_fu_21711_p2 = (add_ln62_52_reg_27279.read() & add_ln62_51_reg_27236.read());
}

void sha256_transform::thread_and_ln54_119_fu_21933_p2() {
    and_ln54_119_fu_21933_p2 = (add_ln62_53_reg_27311.read() & add_ln62_52_reg_27279.read());
}

void sha256_transform::thread_and_ln54_11_fu_5585_p2() {
    and_ln54_11_fu_5585_p2 = (add_ln62_10_reg_24935.read() & xor_ln54_46_fu_5581_p2.read());
}

void sha256_transform::thread_and_ln54_120_fu_22174_p2() {
    and_ln54_120_fu_22174_p2 = (add_ln62_54_reg_27354.read() & add_ln62_53_reg_27311.read());
}

void sha256_transform::thread_and_ln54_121_fu_22395_p2() {
    and_ln54_121_fu_22395_p2 = (add_ln62_55_reg_27386.read() & add_ln62_54_reg_27354.read());
}

void sha256_transform::thread_and_ln54_122_fu_22637_p2() {
    and_ln54_122_fu_22637_p2 = (add_ln62_56_reg_27429.read() & add_ln62_55_reg_27386.read());
}

void sha256_transform::thread_and_ln54_123_fu_22858_p2() {
    and_ln54_123_fu_22858_p2 = (add_ln62_57_reg_27461.read() & add_ln62_56_reg_27429.read());
}

void sha256_transform::thread_and_ln54_124_fu_23100_p2() {
    and_ln54_124_fu_23100_p2 = (add_ln62_58_reg_27504.read() & add_ln62_57_reg_27461.read());
}

void sha256_transform::thread_and_ln54_125_fu_23322_p2() {
    and_ln54_125_fu_23322_p2 = (add_ln62_59_reg_27536.read() & add_ln62_58_reg_27504.read());
}

void sha256_transform::thread_and_ln54_126_fu_23538_p2() {
    and_ln54_126_fu_23538_p2 = (add_ln62_60_reg_27579.read() & add_ln62_59_reg_27536.read());
}

void sha256_transform::thread_and_ln54_127_fu_23739_p2() {
    and_ln54_127_fu_23739_p2 = (add_ln62_61_reg_27610.read() & add_ln62_60_reg_27579.read());
}

void sha256_transform::thread_and_ln54_12_fu_5843_p2() {
    and_ln54_12_fu_5843_p2 = (add_ln62_11_reg_24967.read() & xor_ln54_50_fu_5839_p2.read());
}

void sha256_transform::thread_and_ln54_13_fu_6065_p2() {
    and_ln54_13_fu_6065_p2 = (add_ln62_12_reg_25022.read() & xor_ln54_54_fu_6061_p2.read());
}

void sha256_transform::thread_and_ln54_14_fu_6469_p2() {
    and_ln54_14_fu_6469_p2 = (add_ln62_13_reg_25054.read() & xor_ln54_58_fu_6465_p2.read());
}

void sha256_transform::thread_and_ln54_15_fu_6846_p2() {
    and_ln54_15_fu_6846_p2 = (add_ln62_14_reg_25124.read() & xor_ln54_62_fu_6842_p2.read());
}

void sha256_transform::thread_and_ln54_16_fu_7240_p2() {
    and_ln54_16_fu_7240_p2 = (add_ln62_15_reg_25173.read() & xor_ln54_66_fu_7236_p2.read());
}

void sha256_transform::thread_and_ln54_17_fu_7617_p2() {
    and_ln54_17_fu_7617_p2 = (add_ln62_16_reg_25237.read() & xor_ln54_70_fu_7613_p2.read());
}

void sha256_transform::thread_and_ln54_18_fu_8011_p2() {
    and_ln54_18_fu_8011_p2 = (add_ln62_17_reg_25286.read() & xor_ln54_74_fu_8007_p2.read());
}

void sha256_transform::thread_and_ln54_19_fu_8388_p2() {
    and_ln54_19_fu_8388_p2 = (add_ln62_18_reg_25350.read() & xor_ln54_78_fu_8384_p2.read());
}

void sha256_transform::thread_and_ln54_1_fu_2631_p2() {
    and_ln54_1_fu_2631_p2 = (ctx_state_1_read_1_reg_24214.read() & ctx_state_2_read_1_reg_24115.read());
}

void sha256_transform::thread_and_ln54_20_fu_8786_p2() {
    and_ln54_20_fu_8786_p2 = (add_ln62_19_reg_25399.read() & xor_ln54_82_fu_8782_p2.read());
}

void sha256_transform::thread_and_ln54_21_fu_9163_p2() {
    and_ln54_21_fu_9163_p2 = (add_ln62_20_reg_25468.read() & xor_ln54_86_fu_9159_p2.read());
}

void sha256_transform::thread_and_ln54_22_fu_9562_p2() {
    and_ln54_22_fu_9562_p2 = (add_ln62_21_reg_25517.read() & xor_ln54_90_fu_9558_p2.read());
}

void sha256_transform::thread_and_ln54_23_fu_9938_p2() {
    and_ln54_23_fu_9938_p2 = (add_ln62_22_reg_25585.read() & xor_ln54_94_fu_9934_p2.read());
}

void sha256_transform::thread_and_ln54_24_fu_10791_p2() {
    and_ln54_24_fu_10791_p2 = (add_ln62_23_reg_25634.read() & xor_ln54_98_fu_10787_p2.read());
}

void sha256_transform::thread_and_ln54_25_fu_11315_p2() {
    and_ln54_25_fu_11315_p2 = (add_ln62_24_reg_25745.read() & xor_ln54_102_fu_11311_p2.read());
}

void sha256_transform::thread_and_ln54_26_fu_12173_p2() {
    and_ln54_26_fu_12173_p2 = (add_ln62_25_reg_25811.read() & xor_ln54_106_fu_12169_p2.read());
}

void sha256_transform::thread_and_ln54_27_fu_12703_p2() {
    and_ln54_27_fu_12703_p2 = (add_ln62_26_reg_25922.read() & xor_ln54_110_fu_12699_p2.read());
}

void sha256_transform::thread_and_ln54_28_fu_13560_p2() {
    and_ln54_28_fu_13560_p2 = (add_ln62_27_reg_25988.read() & xor_ln54_114_fu_13556_p2.read());
}

void sha256_transform::thread_and_ln54_29_fu_14090_p2() {
    and_ln54_29_fu_14090_p2 = (add_ln62_28_reg_26099.read() & xor_ln54_118_fu_14086_p2.read());
}

void sha256_transform::thread_and_ln54_2_fu_3542_p2() {
    and_ln54_2_fu_3542_p2 = (add_ln62_1_reg_24516.read() & xor_ln54_10_fu_3538_p2.read());
}

void sha256_transform::thread_and_ln54_30_fu_14949_p2() {
    and_ln54_30_fu_14949_p2 = (add_ln62_29_reg_26165.read() & xor_ln54_122_fu_14945_p2.read());
}

void sha256_transform::thread_and_ln54_31_fu_15410_p2() {
    and_ln54_31_fu_15410_p2 = (add_ln62_30_reg_26285.read() & xor_ln54_126_fu_15406_p2.read());
}

void sha256_transform::thread_and_ln54_32_fu_15993_p2() {
    and_ln54_32_fu_15993_p2 = (add_ln62_31_reg_26344.read() & xor_ln54_130_fu_15989_p2.read());
}

void sha256_transform::thread_and_ln54_33_fu_16383_p2() {
    and_ln54_33_fu_16383_p2 = (add_ln62_32_reg_26436.read() & xor_ln54_134_fu_16379_p2.read());
}

void sha256_transform::thread_and_ln54_34_fu_16960_p2() {
    and_ln54_34_fu_16960_p2 = (add_ln62_33_reg_26490.read() & xor_ln54_138_fu_16956_p2.read());
}

void sha256_transform::thread_and_ln54_35_fu_17289_p2() {
    and_ln54_35_fu_17289_p2 = (add_ln62_34_reg_26574.read() & xor_ln54_142_fu_17285_p2.read());
}

void sha256_transform::thread_and_ln54_36_fu_17539_p2() {
    and_ln54_36_fu_17539_p2 = (add_ln62_35_reg_26631.read() & xor_ln54_146_fu_17535_p2.read());
}

void sha256_transform::thread_and_ln54_37_fu_17760_p2() {
    and_ln54_37_fu_17760_p2 = (add_ln62_36_reg_26679.read() & xor_ln54_150_fu_17756_p2.read());
}

void sha256_transform::thread_and_ln54_38_fu_18002_p2() {
    and_ln54_38_fu_18002_p2 = (add_ln62_37_reg_26711.read() & xor_ln54_154_fu_17998_p2.read());
}

void sha256_transform::thread_and_ln54_39_fu_18223_p2() {
    and_ln54_39_fu_18223_p2 = (add_ln62_38_reg_26754.read() & xor_ln54_158_fu_18219_p2.read());
}

void sha256_transform::thread_and_ln54_3_fu_3771_p2() {
    and_ln54_3_fu_3771_p2 = (add_ln62_2_reg_24608.read() & xor_ln54_14_fu_3767_p2.read());
}

void sha256_transform::thread_and_ln54_40_fu_18465_p2() {
    and_ln54_40_fu_18465_p2 = (add_ln62_39_reg_26786.read() & xor_ln54_162_fu_18461_p2.read());
}

void sha256_transform::thread_and_ln54_41_fu_18687_p2() {
    and_ln54_41_fu_18687_p2 = (add_ln62_40_reg_26829.read() & xor_ln54_166_fu_18683_p2.read());
}

void sha256_transform::thread_and_ln54_42_fu_18928_p2() {
    and_ln54_42_fu_18928_p2 = (add_ln62_41_reg_26861.read() & xor_ln54_170_fu_18924_p2.read());
}

void sha256_transform::thread_and_ln54_43_fu_19150_p2() {
    and_ln54_43_fu_19150_p2 = (add_ln62_42_reg_26904.read() & xor_ln54_174_fu_19146_p2.read());
}

void sha256_transform::thread_and_ln54_44_fu_19391_p2() {
    and_ln54_44_fu_19391_p2 = (add_ln62_43_reg_26936.read() & xor_ln54_178_fu_19387_p2.read());
}

void sha256_transform::thread_and_ln54_45_fu_19613_p2() {
    and_ln54_45_fu_19613_p2 = (add_ln62_44_reg_26979.read() & xor_ln54_182_fu_19609_p2.read());
}

void sha256_transform::thread_and_ln54_46_fu_19854_p2() {
    and_ln54_46_fu_19854_p2 = (add_ln62_45_reg_27011.read() & xor_ln54_186_fu_19850_p2.read());
}

void sha256_transform::thread_and_ln54_47_fu_20076_p2() {
    and_ln54_47_fu_20076_p2 = (add_ln62_46_reg_27054.read() & xor_ln54_190_fu_20072_p2.read());
}

void sha256_transform::thread_and_ln54_48_fu_20317_p2() {
    and_ln54_48_fu_20317_p2 = (add_ln62_47_reg_27086.read() & xor_ln54_194_fu_20313_p2.read());
}

void sha256_transform::thread_and_ln54_49_fu_20539_p2() {
    and_ln54_49_fu_20539_p2 = (add_ln62_48_reg_27129.read() & xor_ln54_198_fu_20535_p2.read());
}

void sha256_transform::thread_and_ln54_4_fu_3911_p2() {
    and_ln54_4_fu_3911_p2 = (add_ln62_3_reg_24650.read() & xor_ln54_18_fu_3907_p2.read());
}

void sha256_transform::thread_and_ln54_50_fu_20780_p2() {
    and_ln54_50_fu_20780_p2 = (add_ln62_49_reg_27161.read() & xor_ln54_202_fu_20776_p2.read());
}

void sha256_transform::thread_and_ln54_51_fu_21002_p2() {
    and_ln54_51_fu_21002_p2 = (add_ln62_50_reg_27204.read() & xor_ln54_206_fu_20998_p2.read());
}

void sha256_transform::thread_and_ln54_52_fu_21243_p2() {
    and_ln54_52_fu_21243_p2 = (add_ln62_51_reg_27236.read() & xor_ln54_210_fu_21239_p2.read());
}

void sha256_transform::thread_and_ln54_53_fu_21465_p2() {
    and_ln54_53_fu_21465_p2 = (add_ln62_52_reg_27279.read() & xor_ln54_214_fu_21461_p2.read());
}

void sha256_transform::thread_and_ln54_54_fu_21706_p2() {
    and_ln54_54_fu_21706_p2 = (add_ln62_53_reg_27311.read() & xor_ln54_218_fu_21702_p2.read());
}

void sha256_transform::thread_and_ln54_55_fu_21928_p2() {
    and_ln54_55_fu_21928_p2 = (add_ln62_54_reg_27354.read() & xor_ln54_222_fu_21924_p2.read());
}

void sha256_transform::thread_and_ln54_56_fu_22169_p2() {
    and_ln54_56_fu_22169_p2 = (add_ln62_55_reg_27386.read() & xor_ln54_226_fu_22165_p2.read());
}

void sha256_transform::thread_and_ln54_57_fu_22390_p2() {
    and_ln54_57_fu_22390_p2 = (add_ln62_56_reg_27429.read() & xor_ln54_230_fu_22386_p2.read());
}

void sha256_transform::thread_and_ln54_58_fu_22632_p2() {
    and_ln54_58_fu_22632_p2 = (add_ln62_57_reg_27461.read() & xor_ln54_234_fu_22628_p2.read());
}

void sha256_transform::thread_and_ln54_59_fu_22853_p2() {
    and_ln54_59_fu_22853_p2 = (add_ln62_58_reg_27504.read() & xor_ln54_238_fu_22849_p2.read());
}

void sha256_transform::thread_and_ln54_5_fu_4133_p2() {
    and_ln54_5_fu_4133_p2 = (add_ln62_4_reg_24676.read() & xor_ln54_22_fu_4129_p2.read());
}

void sha256_transform::thread_and_ln54_60_fu_23095_p2() {
    and_ln54_60_fu_23095_p2 = (add_ln62_59_reg_27536.read() & xor_ln54_242_fu_23091_p2.read());
}

void sha256_transform::thread_and_ln54_61_fu_23317_p2() {
    and_ln54_61_fu_23317_p2 = (add_ln62_60_reg_27579.read() & xor_ln54_246_fu_23313_p2.read());
}

void sha256_transform::thread_and_ln54_62_fu_23533_p2() {
    and_ln54_62_fu_23533_p2 = (add_ln62_61_reg_27610.read() & xor_ln54_250_fu_23529_p2.read());
}

void sha256_transform::thread_and_ln54_63_fu_23733_p2() {
    and_ln54_63_fu_23733_p2 = (add_ln62_62_fu_23553_p2.read() & xor_ln54_254_fu_23729_p2.read());
}

void sha256_transform::thread_and_ln54_64_fu_2951_p2() {
    and_ln54_64_fu_2951_p2 = (add_ln62_reg_24420.read() & xor_ln54_6_fu_2947_p2.read());
}

void sha256_transform::thread_and_ln54_65_fu_2956_p2() {
    and_ln54_65_fu_2956_p2 = (ctx_state_0_read_1_reg_24335.read() & ctx_state_1_read_1_reg_24214.read());
}

void sha256_transform::thread_and_ln54_66_fu_3547_p2() {
    and_ln54_66_fu_3547_p2 = (add_ln62_reg_24420.read() & ctx_state_0_read_1_reg_24335.read());
}

void sha256_transform::thread_and_ln54_67_fu_3776_p2() {
    and_ln54_67_fu_3776_p2 = (add_ln62_1_reg_24516.read() & add_ln62_reg_24420.read());
}

void sha256_transform::thread_and_ln54_68_fu_3916_p2() {
    and_ln54_68_fu_3916_p2 = (add_ln62_2_reg_24608.read() & add_ln62_1_reg_24516.read());
}

void sha256_transform::thread_and_ln54_69_fu_4138_p2() {
    and_ln54_69_fu_4138_p2 = (add_ln62_3_reg_24650.read() & add_ln62_2_reg_24608.read());
}

void sha256_transform::thread_and_ln54_6_fu_4392_p2() {
    and_ln54_6_fu_4392_p2 = (add_ln62_5_reg_24708.read() & xor_ln54_26_fu_4388_p2.read());
}

void sha256_transform::thread_and_ln54_70_fu_4397_p2() {
    and_ln54_70_fu_4397_p2 = (add_ln62_4_reg_24676.read() & add_ln62_3_reg_24650.read());
}

void sha256_transform::thread_and_ln54_71_fu_4620_p2() {
    and_ln54_71_fu_4620_p2 = (add_ln62_5_reg_24708.read() & add_ln62_4_reg_24676.read());
}

void sha256_transform::thread_and_ln54_72_fu_4882_p2() {
    and_ln54_72_fu_4882_p2 = (add_ln62_6_reg_24761.read() & add_ln62_5_reg_24708.read());
}

void sha256_transform::thread_and_ln54_73_fu_5105_p2() {
    and_ln54_73_fu_5105_p2 = (add_ln62_7_reg_24793.read() & add_ln62_6_reg_24761.read());
}

void sha256_transform::thread_and_ln54_74_fu_5367_p2() {
    and_ln54_74_fu_5367_p2 = (add_ln62_8_reg_24848.read() & add_ln62_7_reg_24793.read());
}

void sha256_transform::thread_and_ln54_75_fu_5590_p2() {
    and_ln54_75_fu_5590_p2 = (add_ln62_9_reg_24880.read() & add_ln62_8_reg_24848.read());
}

void sha256_transform::thread_and_ln54_76_fu_5848_p2() {
    and_ln54_76_fu_5848_p2 = (add_ln62_10_reg_24935.read() & add_ln62_9_reg_24880.read());
}

void sha256_transform::thread_and_ln54_77_fu_6070_p2() {
    and_ln54_77_fu_6070_p2 = (add_ln62_11_reg_24967.read() & add_ln62_10_reg_24935.read());
}

void sha256_transform::thread_and_ln54_78_fu_6474_p2() {
    and_ln54_78_fu_6474_p2 = (add_ln62_12_reg_25022.read() & add_ln62_11_reg_24967.read());
}

void sha256_transform::thread_and_ln54_79_fu_6851_p2() {
    and_ln54_79_fu_6851_p2 = (add_ln62_13_reg_25054.read() & add_ln62_12_reg_25022.read());
}

void sha256_transform::thread_and_ln54_7_fu_4615_p2() {
    and_ln54_7_fu_4615_p2 = (add_ln62_6_reg_24761.read() & xor_ln54_30_fu_4611_p2.read());
}

void sha256_transform::thread_and_ln54_80_fu_7245_p2() {
    and_ln54_80_fu_7245_p2 = (add_ln62_14_reg_25124.read() & add_ln62_13_reg_25054.read());
}

void sha256_transform::thread_and_ln54_81_fu_7622_p2() {
    and_ln54_81_fu_7622_p2 = (add_ln62_15_reg_25173.read() & add_ln62_14_reg_25124.read());
}

void sha256_transform::thread_and_ln54_82_fu_8016_p2() {
    and_ln54_82_fu_8016_p2 = (add_ln62_16_reg_25237.read() & add_ln62_15_reg_25173.read());
}

void sha256_transform::thread_and_ln54_83_fu_8393_p2() {
    and_ln54_83_fu_8393_p2 = (add_ln62_17_reg_25286.read() & add_ln62_16_reg_25237.read());
}

void sha256_transform::thread_and_ln54_84_fu_8791_p2() {
    and_ln54_84_fu_8791_p2 = (add_ln62_18_reg_25350.read() & add_ln62_17_reg_25286.read());
}

void sha256_transform::thread_and_ln54_85_fu_9168_p2() {
    and_ln54_85_fu_9168_p2 = (add_ln62_19_reg_25399.read() & add_ln62_18_reg_25350.read());
}

void sha256_transform::thread_and_ln54_86_fu_9567_p2() {
    and_ln54_86_fu_9567_p2 = (add_ln62_20_reg_25468.read() & add_ln62_19_reg_25399.read());
}

void sha256_transform::thread_and_ln54_87_fu_9943_p2() {
    and_ln54_87_fu_9943_p2 = (add_ln62_21_reg_25517.read() & add_ln62_20_reg_25468.read());
}

void sha256_transform::thread_and_ln54_88_fu_10796_p2() {
    and_ln54_88_fu_10796_p2 = (add_ln62_22_reg_25585.read() & add_ln62_21_reg_25517.read());
}

void sha256_transform::thread_and_ln54_89_fu_11320_p2() {
    and_ln54_89_fu_11320_p2 = (add_ln62_23_reg_25634.read() & add_ln62_22_reg_25585.read());
}

void sha256_transform::thread_and_ln54_8_fu_4877_p2() {
    and_ln54_8_fu_4877_p2 = (add_ln62_7_reg_24793.read() & xor_ln54_34_fu_4873_p2.read());
}

void sha256_transform::thread_and_ln54_90_fu_12178_p2() {
    and_ln54_90_fu_12178_p2 = (add_ln62_24_reg_25745.read() & add_ln62_23_reg_25634.read());
}

void sha256_transform::thread_and_ln54_91_fu_12708_p2() {
    and_ln54_91_fu_12708_p2 = (add_ln62_25_reg_25811.read() & add_ln62_24_reg_25745.read());
}

void sha256_transform::thread_and_ln54_92_fu_13565_p2() {
    and_ln54_92_fu_13565_p2 = (add_ln62_26_reg_25922.read() & add_ln62_25_reg_25811.read());
}

void sha256_transform::thread_and_ln54_93_fu_14095_p2() {
    and_ln54_93_fu_14095_p2 = (add_ln62_27_reg_25988.read() & add_ln62_26_reg_25922.read());
}

void sha256_transform::thread_and_ln54_94_fu_14954_p2() {
    and_ln54_94_fu_14954_p2 = (add_ln62_28_reg_26099.read() & add_ln62_27_reg_25988.read());
}

void sha256_transform::thread_and_ln54_95_fu_15415_p2() {
    and_ln54_95_fu_15415_p2 = (add_ln62_29_reg_26165.read() & add_ln62_28_reg_26099.read());
}

void sha256_transform::thread_and_ln54_96_fu_15998_p2() {
    and_ln54_96_fu_15998_p2 = (add_ln62_30_reg_26285.read() & add_ln62_29_reg_26165.read());
}

void sha256_transform::thread_and_ln54_97_fu_16388_p2() {
    and_ln54_97_fu_16388_p2 = (add_ln62_31_reg_26344.read() & add_ln62_30_reg_26285.read());
}

void sha256_transform::thread_and_ln54_98_fu_16965_p2() {
    and_ln54_98_fu_16965_p2 = (add_ln62_32_reg_26436.read() & add_ln62_31_reg_26344.read());
}

void sha256_transform::thread_and_ln54_99_fu_17294_p2() {
    and_ln54_99_fu_17294_p2 = (add_ln62_33_reg_26490.read() & add_ln62_32_reg_26436.read());
}

void sha256_transform::thread_and_ln54_9_fu_5100_p2() {
    and_ln54_9_fu_5100_p2 = (add_ln62_8_reg_24848.read() & xor_ln54_38_fu_5096_p2.read());
}

void sha256_transform::thread_and_ln54_fu_2625_p2() {
    and_ln54_fu_2625_p2 = (xor_ln54_2_fu_2621_p2.read() & ap_port_reg_ctx_state_0_read.read());
}

void sha256_transform::thread_ap_CS_fsm_pp0_stage0() {
    ap_CS_fsm_pp0_stage0 = ap_CS_fsm.read()[0];
}

void sha256_transform::thread_ap_CS_fsm_pp0_stage1() {
    ap_CS_fsm_pp0_stage1 = ap_CS_fsm.read()[1];
}

void sha256_transform::thread_ap_CS_fsm_pp0_stage10() {
    ap_CS_fsm_pp0_stage10 = ap_CS_fsm.read()[10];
}

void sha256_transform::thread_ap_CS_fsm_pp0_stage11() {
    ap_CS_fsm_pp0_stage11 = ap_CS_fsm.read()[11];
}

void sha256_transform::thread_ap_CS_fsm_pp0_stage12() {
    ap_CS_fsm_pp0_stage12 = ap_CS_fsm.read()[12];
}

void sha256_transform::thread_ap_CS_fsm_pp0_stage13() {
    ap_CS_fsm_pp0_stage13 = ap_CS_fsm.read()[13];
}

void sha256_transform::thread_ap_CS_fsm_pp0_stage14() {
    ap_CS_fsm_pp0_stage14 = ap_CS_fsm.read()[14];
}

void sha256_transform::thread_ap_CS_fsm_pp0_stage15() {
    ap_CS_fsm_pp0_stage15 = ap_CS_fsm.read()[15];
}

void sha256_transform::thread_ap_CS_fsm_pp0_stage16() {
    ap_CS_fsm_pp0_stage16 = ap_CS_fsm.read()[16];
}

void sha256_transform::thread_ap_CS_fsm_pp0_stage17() {
    ap_CS_fsm_pp0_stage17 = ap_CS_fsm.read()[17];
}

void sha256_transform::thread_ap_CS_fsm_pp0_stage18() {
    ap_CS_fsm_pp0_stage18 = ap_CS_fsm.read()[18];
}

void sha256_transform::thread_ap_CS_fsm_pp0_stage19() {
    ap_CS_fsm_pp0_stage19 = ap_CS_fsm.read()[19];
}

void sha256_transform::thread_ap_CS_fsm_pp0_stage2() {
    ap_CS_fsm_pp0_stage2 = ap_CS_fsm.read()[2];
}

void sha256_transform::thread_ap_CS_fsm_pp0_stage20() {
    ap_CS_fsm_pp0_stage20 = ap_CS_fsm.read()[20];
}

void sha256_transform::thread_ap_CS_fsm_pp0_stage21() {
    ap_CS_fsm_pp0_stage21 = ap_CS_fsm.read()[21];
}

void sha256_transform::thread_ap_CS_fsm_pp0_stage22() {
    ap_CS_fsm_pp0_stage22 = ap_CS_fsm.read()[22];
}

void sha256_transform::thread_ap_CS_fsm_pp0_stage23() {
    ap_CS_fsm_pp0_stage23 = ap_CS_fsm.read()[23];
}

void sha256_transform::thread_ap_CS_fsm_pp0_stage24() {
    ap_CS_fsm_pp0_stage24 = ap_CS_fsm.read()[24];
}

void sha256_transform::thread_ap_CS_fsm_pp0_stage25() {
    ap_CS_fsm_pp0_stage25 = ap_CS_fsm.read()[25];
}

void sha256_transform::thread_ap_CS_fsm_pp0_stage26() {
    ap_CS_fsm_pp0_stage26 = ap_CS_fsm.read()[26];
}

void sha256_transform::thread_ap_CS_fsm_pp0_stage27() {
    ap_CS_fsm_pp0_stage27 = ap_CS_fsm.read()[27];
}

void sha256_transform::thread_ap_CS_fsm_pp0_stage28() {
    ap_CS_fsm_pp0_stage28 = ap_CS_fsm.read()[28];
}

void sha256_transform::thread_ap_CS_fsm_pp0_stage29() {
    ap_CS_fsm_pp0_stage29 = ap_CS_fsm.read()[29];
}

void sha256_transform::thread_ap_CS_fsm_pp0_stage3() {
    ap_CS_fsm_pp0_stage3 = ap_CS_fsm.read()[3];
}

void sha256_transform::thread_ap_CS_fsm_pp0_stage30() {
    ap_CS_fsm_pp0_stage30 = ap_CS_fsm.read()[30];
}

void sha256_transform::thread_ap_CS_fsm_pp0_stage31() {
    ap_CS_fsm_pp0_stage31 = ap_CS_fsm.read()[31];
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

void sha256_transform::thread_ap_CS_fsm_pp0_stage8() {
    ap_CS_fsm_pp0_stage8 = ap_CS_fsm.read()[8];
}

void sha256_transform::thread_ap_CS_fsm_pp0_stage9() {
    ap_CS_fsm_pp0_stage9 = ap_CS_fsm.read()[9];
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

void sha256_transform::thread_ap_block_pp0_stage10() {
    ap_block_pp0_stage10 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_pp0_stage10_11001() {
    ap_block_pp0_stage10_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_pp0_stage10_subdone() {
    ap_block_pp0_stage10_subdone = esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_0);
}

void sha256_transform::thread_ap_block_pp0_stage11() {
    ap_block_pp0_stage11 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_pp0_stage11_11001() {
    ap_block_pp0_stage11_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_pp0_stage11_subdone() {
    ap_block_pp0_stage11_subdone = esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_0);
}

void sha256_transform::thread_ap_block_pp0_stage12() {
    ap_block_pp0_stage12 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_pp0_stage12_11001() {
    ap_block_pp0_stage12_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_pp0_stage12_subdone() {
    ap_block_pp0_stage12_subdone = esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_0);
}

void sha256_transform::thread_ap_block_pp0_stage13() {
    ap_block_pp0_stage13 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_pp0_stage13_11001() {
    ap_block_pp0_stage13_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_pp0_stage13_subdone() {
    ap_block_pp0_stage13_subdone = esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_0);
}

void sha256_transform::thread_ap_block_pp0_stage14() {
    ap_block_pp0_stage14 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_pp0_stage14_11001() {
    ap_block_pp0_stage14_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_pp0_stage14_subdone() {
    ap_block_pp0_stage14_subdone = esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_0);
}

void sha256_transform::thread_ap_block_pp0_stage15() {
    ap_block_pp0_stage15 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_pp0_stage15_11001() {
    ap_block_pp0_stage15_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_pp0_stage15_subdone() {
    ap_block_pp0_stage15_subdone = esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_0);
}

void sha256_transform::thread_ap_block_pp0_stage16() {
    ap_block_pp0_stage16 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_pp0_stage16_11001() {
    ap_block_pp0_stage16_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_pp0_stage16_subdone() {
    ap_block_pp0_stage16_subdone = esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_0);
}

void sha256_transform::thread_ap_block_pp0_stage17() {
    ap_block_pp0_stage17 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_pp0_stage17_11001() {
    ap_block_pp0_stage17_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_pp0_stage17_subdone() {
    ap_block_pp0_stage17_subdone = esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_0);
}

void sha256_transform::thread_ap_block_pp0_stage18() {
    ap_block_pp0_stage18 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_pp0_stage18_11001() {
    ap_block_pp0_stage18_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_pp0_stage18_subdone() {
    ap_block_pp0_stage18_subdone = esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_0);
}

void sha256_transform::thread_ap_block_pp0_stage19() {
    ap_block_pp0_stage19 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_pp0_stage19_11001() {
    ap_block_pp0_stage19_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_pp0_stage19_subdone() {
    ap_block_pp0_stage19_subdone = esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_0);
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

void sha256_transform::thread_ap_block_pp0_stage20() {
    ap_block_pp0_stage20 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_pp0_stage20_11001() {
    ap_block_pp0_stage20_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_pp0_stage20_subdone() {
    ap_block_pp0_stage20_subdone = esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_0);
}

void sha256_transform::thread_ap_block_pp0_stage21() {
    ap_block_pp0_stage21 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_pp0_stage21_11001() {
    ap_block_pp0_stage21_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_pp0_stage21_subdone() {
    ap_block_pp0_stage21_subdone = esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_0);
}

void sha256_transform::thread_ap_block_pp0_stage22() {
    ap_block_pp0_stage22 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_pp0_stage22_11001() {
    ap_block_pp0_stage22_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_pp0_stage22_subdone() {
    ap_block_pp0_stage22_subdone = esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_0);
}

void sha256_transform::thread_ap_block_pp0_stage23() {
    ap_block_pp0_stage23 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_pp0_stage23_11001() {
    ap_block_pp0_stage23_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_pp0_stage23_subdone() {
    ap_block_pp0_stage23_subdone = esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_0);
}

void sha256_transform::thread_ap_block_pp0_stage24() {
    ap_block_pp0_stage24 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_pp0_stage24_11001() {
    ap_block_pp0_stage24_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_pp0_stage24_subdone() {
    ap_block_pp0_stage24_subdone = esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_0);
}

void sha256_transform::thread_ap_block_pp0_stage25() {
    ap_block_pp0_stage25 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_pp0_stage25_11001() {
    ap_block_pp0_stage25_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_pp0_stage25_subdone() {
    ap_block_pp0_stage25_subdone = esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_0);
}

void sha256_transform::thread_ap_block_pp0_stage26() {
    ap_block_pp0_stage26 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_pp0_stage26_11001() {
    ap_block_pp0_stage26_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_pp0_stage26_subdone() {
    ap_block_pp0_stage26_subdone = esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_0);
}

void sha256_transform::thread_ap_block_pp0_stage27() {
    ap_block_pp0_stage27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_pp0_stage27_11001() {
    ap_block_pp0_stage27_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_pp0_stage27_subdone() {
    ap_block_pp0_stage27_subdone = esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_0);
}

void sha256_transform::thread_ap_block_pp0_stage28() {
    ap_block_pp0_stage28 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_pp0_stage28_11001() {
    ap_block_pp0_stage28_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_pp0_stage28_subdone() {
    ap_block_pp0_stage28_subdone = esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_0);
}

void sha256_transform::thread_ap_block_pp0_stage29() {
    ap_block_pp0_stage29 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_pp0_stage29_11001() {
    ap_block_pp0_stage29_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_pp0_stage29_subdone() {
    ap_block_pp0_stage29_subdone = esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_0);
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

void sha256_transform::thread_ap_block_pp0_stage30() {
    ap_block_pp0_stage30 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_pp0_stage30_11001() {
    ap_block_pp0_stage30_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_pp0_stage30_subdone() {
    ap_block_pp0_stage30_subdone = esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_0);
}

void sha256_transform::thread_ap_block_pp0_stage31() {
    ap_block_pp0_stage31 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_pp0_stage31_11001() {
    ap_block_pp0_stage31_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_pp0_stage31_subdone() {
    ap_block_pp0_stage31_subdone = esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_0);
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

void sha256_transform::thread_ap_block_pp0_stage8() {
    ap_block_pp0_stage8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_pp0_stage8_11001() {
    ap_block_pp0_stage8_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_pp0_stage8_subdone() {
    ap_block_pp0_stage8_subdone = esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_0);
}

void sha256_transform::thread_ap_block_pp0_stage9() {
    ap_block_pp0_stage9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_pp0_stage9_11001() {
    ap_block_pp0_stage9_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_pp0_stage9_subdone() {
    ap_block_pp0_stage9_subdone = esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_0);
}

void sha256_transform::thread_ap_block_state10_pp0_stage9_iter0() {
    ap_block_state10_pp0_stage9_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state11_pp0_stage10_iter0() {
    ap_block_state11_pp0_stage10_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state12_pp0_stage11_iter0() {
    ap_block_state12_pp0_stage11_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state13_pp0_stage12_iter0() {
    ap_block_state13_pp0_stage12_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state14_pp0_stage13_iter0() {
    ap_block_state14_pp0_stage13_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state15_pp0_stage14_iter0() {
    ap_block_state15_pp0_stage14_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state16_pp0_stage15_iter0() {
    ap_block_state16_pp0_stage15_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state17_pp0_stage16_iter0() {
    ap_block_state17_pp0_stage16_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state18_pp0_stage17_iter0() {
    ap_block_state18_pp0_stage17_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state19_pp0_stage18_iter0() {
    ap_block_state19_pp0_stage18_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state1_pp0_stage0_iter0() {
    ap_block_state1_pp0_stage0_iter0 = esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read());
}

void sha256_transform::thread_ap_block_state20_pp0_stage19_iter0() {
    ap_block_state20_pp0_stage19_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state21_pp0_stage20_iter0() {
    ap_block_state21_pp0_stage20_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state22_pp0_stage21_iter0() {
    ap_block_state22_pp0_stage21_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state23_pp0_stage22_iter0() {
    ap_block_state23_pp0_stage22_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state24_pp0_stage23_iter0() {
    ap_block_state24_pp0_stage23_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state25_pp0_stage24_iter0() {
    ap_block_state25_pp0_stage24_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state26_pp0_stage25_iter0() {
    ap_block_state26_pp0_stage25_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state27_pp0_stage26_iter0() {
    ap_block_state27_pp0_stage26_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state28_pp0_stage27_iter0() {
    ap_block_state28_pp0_stage27_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state29_pp0_stage28_iter0() {
    ap_block_state29_pp0_stage28_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state2_pp0_stage1_iter0() {
    ap_block_state2_pp0_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state30_pp0_stage29_iter0() {
    ap_block_state30_pp0_stage29_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state31_pp0_stage30_iter0() {
    ap_block_state31_pp0_stage30_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state32_pp0_stage31_iter0() {
    ap_block_state32_pp0_stage31_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state33_pp0_stage0_iter1() {
    ap_block_state33_pp0_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state34_pp0_stage1_iter1() {
    ap_block_state34_pp0_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state35_pp0_stage2_iter1() {
    ap_block_state35_pp0_stage2_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state36_pp0_stage3_iter1() {
    ap_block_state36_pp0_stage3_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state37_pp0_stage4_iter1() {
    ap_block_state37_pp0_stage4_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state38_pp0_stage5_iter1() {
    ap_block_state38_pp0_stage5_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state39_pp0_stage6_iter1() {
    ap_block_state39_pp0_stage6_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state3_pp0_stage2_iter0() {
    ap_block_state3_pp0_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state40_pp0_stage7_iter1() {
    ap_block_state40_pp0_stage7_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state41_pp0_stage8_iter1() {
    ap_block_state41_pp0_stage8_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state42_pp0_stage9_iter1() {
    ap_block_state42_pp0_stage9_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state43_pp0_stage10_iter1() {
    ap_block_state43_pp0_stage10_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state44_pp0_stage11_iter1() {
    ap_block_state44_pp0_stage11_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state45_pp0_stage12_iter1() {
    ap_block_state45_pp0_stage12_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state46_pp0_stage13_iter1() {
    ap_block_state46_pp0_stage13_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state47_pp0_stage14_iter1() {
    ap_block_state47_pp0_stage14_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state48_pp0_stage15_iter1() {
    ap_block_state48_pp0_stage15_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state49_pp0_stage16_iter1() {
    ap_block_state49_pp0_stage16_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state4_pp0_stage3_iter0() {
    ap_block_state4_pp0_stage3_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state50_pp0_stage17_iter1() {
    ap_block_state50_pp0_stage17_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state51_pp0_stage18_iter1() {
    ap_block_state51_pp0_stage18_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state52_pp0_stage19_iter1() {
    ap_block_state52_pp0_stage19_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state53_pp0_stage20_iter1() {
    ap_block_state53_pp0_stage20_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state54_pp0_stage21_iter1() {
    ap_block_state54_pp0_stage21_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state55_pp0_stage22_iter1() {
    ap_block_state55_pp0_stage22_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state56_pp0_stage23_iter1() {
    ap_block_state56_pp0_stage23_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state57_pp0_stage24_iter1() {
    ap_block_state57_pp0_stage24_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state58_pp0_stage25_iter1() {
    ap_block_state58_pp0_stage25_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state59_pp0_stage26_iter1() {
    ap_block_state59_pp0_stage26_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state5_pp0_stage4_iter0() {
    ap_block_state5_pp0_stage4_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state60_pp0_stage27_iter1() {
    ap_block_state60_pp0_stage27_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state61_pp0_stage28_iter1() {
    ap_block_state61_pp0_stage28_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state62_pp0_stage29_iter1() {
    ap_block_state62_pp0_stage29_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state63_pp0_stage30_iter1() {
    ap_block_state63_pp0_stage30_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state64_pp0_stage31_iter1() {
    ap_block_state64_pp0_stage31_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state65_pp0_stage0_iter2() {
    ap_block_state65_pp0_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void sha256_transform::thread_ap_block_state66_pp0_stage1_iter2() {
    ap_block_state66_pp0_stage1_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

}

