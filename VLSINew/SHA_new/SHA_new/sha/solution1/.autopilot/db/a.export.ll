; ModuleID = 'C:/Student/SHA_new/sha/solution1/.autopilot/db/a.o.2.bc'
target datalayout = "e-p:32:32:32-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-f80:128:128-v64:64:64-v128:128:128-a0:0:64-f80:32:32-n8:16:32-S32"
target triple = "i686-pc-mingw32"

@sha256_str = internal unnamed_addr constant [7 x i8] c"sha256\00"
@k = constant [64 x i32] [i32 1116352408, i32 1899447441, i32 -1245643825, i32 -373957723, i32 961987163, i32 1508970993, i32 -1841331548, i32 -1424204075, i32 -670586216, i32 310598401, i32 607225278, i32 1426881987, i32 1925078388, i32 -2132889090, i32 -1680079193, i32 -1046744716, i32 -459576895, i32 -272742522, i32 264347078, i32 604807628, i32 770255983, i32 1249150122, i32 1555081692, i32 1996064986, i32 -1740746414, i32 -1473132947, i32 -1341970488, i32 -1084653625, i32 -958395405, i32 -710438585, i32 113926993, i32 338241895, i32 666307205, i32 773529912, i32 1294757372, i32 1396182291, i32 1695183700, i32 1986661051, i32 -2117940946, i32 -1838011259, i32 -1564481375, i32 -1474664885, i32 -1035236496, i32 -949202525, i32 -778901479, i32 -694614492, i32 -200395387, i32 275423344, i32 430227734, i32 506948616, i32 659060556, i32 883997877, i32 958139571, i32 1322822218, i32 1537002063, i32 1747873779, i32 1955562222, i32 2024104815, i32 -2067236844, i32 -1933114872, i32 -1866530822, i32 -1538233109, i32 -1090935817, i32 -965641998], align 4
@RAM_1P_str = internal unnamed_addr constant [7 x i8] c"RAM_1P\00"
@p_str8 = private unnamed_addr constant [12 x i8] c"hls_label_7\00", align 1
@p_str7 = private unnamed_addr constant [10 x i8] c"s_axilite\00", align 1
@p_str1 = private unnamed_addr constant [1 x i8] zeroinitializer, align 1
@p_str = internal unnamed_addr constant [1 x i8] zeroinitializer

define internal fastcc { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } @sha256_update([64 x i8]* nocapture %ctx_data, i32 %ctx_datalen_read, i32 %p_read1, i32 %p_read2, i32 %p_read3, i32 %p_read4, i32 %p_read5, i32 %p_read6, i32 %p_read7, i32 %p_read8, i32 %p_read9, i32 %p_read10, [64 x i8]* nocapture %data, i32 %len) {
  %ctx_state_7 = alloca i32
  %ctx_state_6 = alloca i32
  %ctx_state_5 = alloca i32
  %ctx_state_4 = alloca i32
  %ctx_state_3 = alloca i32
  %ctx_state_2 = alloca i32
  %ctx_state_1 = alloca i32
  %ctx_state = alloca i32
  %ctx_bitlen_1 = alloca i32
  %ctx_bitlen = alloca i32
  %len_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %len)
  %p_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %p_read10)
  %p_read_1 = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %p_read9)
  %p_read_2 = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %p_read8)
  %p_read_3 = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %p_read7)
  %p_read_4 = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %p_read6)
  %p_read_5 = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %p_read5)
  %p_read45 = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %p_read4)
  %p_read34 = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %p_read3)
  %p_read23 = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %p_read2)
  %p_read12 = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %p_read1)
  %ctx_datalen_read_1 = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %ctx_datalen_read)
  %tmp = trunc i32 %len_read to i8
  store i32 %p_read12, i32* %ctx_bitlen
  store i32 %p_read23, i32* %ctx_bitlen_1
  store i32 %p_read34, i32* %ctx_state
  store i32 %p_read45, i32* %ctx_state_1
  store i32 %p_read_5, i32* %ctx_state_2
  store i32 %p_read_4, i32* %ctx_state_3
  store i32 %p_read_3, i32* %ctx_state_4
  store i32 %p_read_2, i32* %ctx_state_5
  store i32 %p_read_1, i32* %ctx_state_6
  store i32 %p_read, i32* %ctx_state_7
  br label %1

; <label>:1                                       ; preds = %._crit_edge, %0
  %ctx_datalen = phi i32 [ %ctx_datalen_read_1, %0 ], [ %ctx_datalen_1_cast, %._crit_edge ]
  %i = phi i7 [ 0, %0 ], [ %i_1, %._crit_edge ]
  %i_cast2 = zext i7 %i to i32
  %i_cast = zext i7 %i to i8
  %exitcond = icmp eq i8 %i_cast, %tmp
  call void (...)* @_ssdm_op_SpecLoopTripCount(i64 12, i64 64, i64 56)
  %i_1 = add i7 %i, 1
  br i1 %exitcond, label %3, label %2

; <label>:2                                       ; preds = %1
  %data_addr = getelementptr [64 x i8]* %data, i32 0, i32 %i_cast2
  %data_load = load i8* %data_addr, align 1
  %ctx_data_addr = getelementptr [64 x i8]* %ctx_data, i32 0, i32 %ctx_datalen
  store i8 %data_load, i8* %ctx_data_addr, align 1
  %tmp_5 = trunc i32 %ctx_datalen to i8
  %tmp_6 = trunc i32 %ctx_datalen to i7
  %ctx_datalen_assign_c = add i7 1, %tmp_6
  %tmp_1 = icmp eq i8 %tmp_5, 63
  br i1 %tmp_1, label %._crit_edge1, label %._crit_edge

._crit_edge1:                                     ; preds = %2
  %ctx_state_7_load_1 = load i32* %ctx_state_7
  %ctx_state_6_load_1 = load i32* %ctx_state_6
  %ctx_state_5_load_1 = load i32* %ctx_state_5
  %ctx_state_4_load_1 = load i32* %ctx_state_4
  %ctx_state_3_load_1 = load i32* %ctx_state_3
  %ctx_state_2_load_1 = load i32* %ctx_state_2
  %ctx_state_1_load_1 = load i32* %ctx_state_1
  %ctx_state_load_1 = load i32* %ctx_state
  %ctx_bitlen_1_load = load i32* %ctx_bitlen_1
  %ctx_bitlen_load = load i32* %ctx_bitlen
  %call_ret = call fastcc { i32, i32, i32, i32, i32, i32, i32, i32 } @sha256_transform(i32 %ctx_state_load_1, i32 %ctx_state_1_load_1, i32 %ctx_state_2_load_1, i32 %ctx_state_3_load_1, i32 %ctx_state_4_load_1, i32 %ctx_state_5_load_1, i32 %ctx_state_6_load_1, i32 %ctx_state_7_load_1, [64 x i8]* %ctx_data)
  %ctx_state_0_ret = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32 } %call_ret, 0
  %ctx_state_1_ret = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32 } %call_ret, 1
  %ctx_state_2_ret = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32 } %call_ret, 2
  %ctx_state_3_ret = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32 } %call_ret, 3
  %ctx_state_4_ret = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32 } %call_ret, 4
  %ctx_state_5_ret = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32 } %call_ret, 5
  %ctx_state_6_ret = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32 } %call_ret, 6
  %ctx_state_7_ret = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32 } %call_ret, 7
  %tmp_2 = icmp ugt i32 %ctx_bitlen_load, -513
  %tmp_3 = add i32 %ctx_bitlen_1_load, 1
  %tmp_3_ctx_bitlen_1 = select i1 %tmp_2, i32 %tmp_3, i32 %ctx_bitlen_1_load
  %tmp_4 = add i32 %ctx_bitlen_load, 512
  store i32 %tmp_4, i32* %ctx_bitlen
  store i32 %tmp_3_ctx_bitlen_1, i32* %ctx_bitlen_1
  store i32 %ctx_state_0_ret, i32* %ctx_state
  store i32 %ctx_state_1_ret, i32* %ctx_state_1
  store i32 %ctx_state_2_ret, i32* %ctx_state_2
  store i32 %ctx_state_3_ret, i32* %ctx_state_3
  store i32 %ctx_state_4_ret, i32* %ctx_state_4
  store i32 %ctx_state_5_ret, i32* %ctx_state_5
  store i32 %ctx_state_6_ret, i32* %ctx_state_6
  store i32 %ctx_state_7_ret, i32* %ctx_state_7
  br label %._crit_edge

._crit_edge:                                      ; preds = %._crit_edge1, %2
  %ctx_datalen_1 = phi i7 [ 0, %._crit_edge1 ], [ %ctx_datalen_assign_c, %2 ]
  %ctx_datalen_1_cast = zext i7 %ctx_datalen_1 to i32
  br label %1

; <label>:3                                       ; preds = %1
  %ctx_state_7_load = load i32* %ctx_state_7
  %ctx_state_6_load = load i32* %ctx_state_6
  %ctx_state_5_load = load i32* %ctx_state_5
  %ctx_state_4_load = load i32* %ctx_state_4
  %ctx_state_3_load = load i32* %ctx_state_3
  %ctx_state_2_load = load i32* %ctx_state_2
  %ctx_state_1_load = load i32* %ctx_state_1
  %ctx_state_load = load i32* %ctx_state
  %ctx_bitlen_1_load_1 = load i32* %ctx_bitlen_1
  %ctx_bitlen_load_1 = load i32* %ctx_bitlen
  %mrv_s = insertvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } undef, i32 %ctx_datalen, 0
  %mrv_1 = insertvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %mrv_s, i32 %ctx_bitlen_load_1, 1
  %mrv_2 = insertvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %mrv_1, i32 %ctx_bitlen_1_load_1, 2
  %mrv_3 = insertvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %mrv_2, i32 %ctx_state_load, 3
  %mrv_4 = insertvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %mrv_3, i32 %ctx_state_1_load, 4
  %mrv_5 = insertvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %mrv_4, i32 %ctx_state_2_load, 5
  %mrv_6 = insertvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %mrv_5, i32 %ctx_state_3_load, 6
  %mrv_7 = insertvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %mrv_6, i32 %ctx_state_4_load, 7
  %mrv_8 = insertvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %mrv_7, i32 %ctx_state_5_load, 8
  %mrv_9 = insertvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %mrv_8, i32 %ctx_state_6_load, 9
  %mrv_10 = insertvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %mrv_9, i32 %ctx_state_7_load, 10
  ret { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %mrv_10
}

define internal fastcc { i32, i32, i32, i32, i32, i32, i32, i32 } @sha256_transform(i32 %ctx_state_0_read, i32 %ctx_state_1_read, i32 %ctx_state_2_read, i32 %ctx_state_3_read, i32 %ctx_state_4_read, i32 %ctx_state_5_read, i32 %ctx_state_6_read, i32 %ctx_state_7_read, [64 x i8]* nocapture %data) readonly {
  %ctx_state_7_read_1 = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %ctx_state_7_read)
  %ctx_state_6_read_1 = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %ctx_state_6_read)
  %ctx_state_5_read_1 = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %ctx_state_5_read)
  %ctx_state_4_read_1 = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %ctx_state_4_read)
  %ctx_state_3_read_1 = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %ctx_state_3_read)
  %ctx_state_2_read_1 = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %ctx_state_2_read)
  %ctx_state_1_read_1 = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %ctx_state_1_read)
  %ctx_state_0_read_1 = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %ctx_state_0_read)
  %m = alloca [64 x i32], align 4
  br label %1

; <label>:1                                       ; preds = %2, %0
  %i = phi i5 [ 0, %0 ], [ %tmp_5, %2 ]
  %j = phi i7 [ 0, %0 ], [ %j_1, %2 ]
  %i_cast = zext i5 %i to i32
  %tmp = icmp eq i5 %i, -16
  call void (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  %tmp_5 = add i5 %i, 1
  br i1 %tmp, label %.preheader.preheader, label %2

.preheader.preheader:                             ; preds = %1
  br label %.preheader

; <label>:2                                       ; preds = %1
  %j_cast4 = zext i7 %j to i32
  %data_addr = getelementptr [64 x i8]* %data, i32 0, i32 %j_cast4
  %data_load = load i8* %data_addr, align 1
  %tmp_10 = trunc i7 %j to i6
  %tmp_8 = or i6 %tmp_10, 1
  %tmp_8_cast = zext i6 %tmp_8 to i32
  %data_addr_1 = getelementptr [64 x i8]* %data, i32 0, i32 %tmp_8_cast
  %data_load_1 = load i8* %data_addr_1, align 1
  %tmp_1 = or i6 %tmp_10, 2
  %tmp_1_cast = zext i6 %tmp_1 to i32
  %data_addr_2 = getelementptr [64 x i8]* %data, i32 0, i32 %tmp_1_cast
  %data_load_2 = load i8* %data_addr_2, align 1
  %tmp_4 = or i6 %tmp_10, 3
  %tmp_4_cast = zext i6 %tmp_4 to i32
  %data_addr_3 = getelementptr [64 x i8]* %data, i32 0, i32 %tmp_4_cast
  %data_load_3 = load i8* %data_addr_3, align 1
  %tmp_2 = call i32 @_ssdm_op_BitConcatenate.i32.i8.i8.i8.i8(i8 %data_load, i8 %data_load_1, i8 %data_load_2, i8 %data_load_3)
  %m_addr = getelementptr inbounds [64 x i32]* %m, i32 0, i32 %i_cast
  store i32 %tmp_2, i32* %m_addr, align 4
  %j_1 = add i7 4, %j
  br label %1

.preheader:                                       ; preds = %.preheader.preheader, %3
  %i_1 = phi i7 [ %i_3, %3 ], [ 16, %.preheader.preheader ]
  %i_1_cast = zext i7 %i_1 to i32
  %exitcond = icmp eq i7 %i_1, -64
  call void (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48)
  br i1 %exitcond, label %.preheader1.preheader, label %3

.preheader1.preheader:                            ; preds = %.preheader
  br label %.preheader1

; <label>:3                                       ; preds = %.preheader
  %tmp_s = add i7 -2, %i_1
  %tmp_14_cast = zext i7 %tmp_s to i32
  %m_addr_1 = getelementptr inbounds [64 x i32]* %m, i32 0, i32 %tmp_14_cast
  %m_load = load i32* %m_addr_1, align 4
  %tmp_3 = call i15 @_ssdm_op_PartSelect.i15.i32.i32.i32(i32 %m_load, i32 17, i32 31)
  %tmp_18 = trunc i32 %m_load to i17
  %tmp_7 = call i32 @_ssdm_op_BitConcatenate.i32.i17.i15(i17 %tmp_18, i15 %tmp_3)
  %tmp_9 = call i13 @_ssdm_op_PartSelect.i13.i32.i32.i32(i32 %m_load, i32 19, i32 31)
  %tmp_21 = trunc i32 %m_load to i19
  %tmp_6 = call i32 @_ssdm_op_BitConcatenate.i32.i19.i13(i19 %tmp_21, i13 %tmp_9)
  %tmp_11 = call i22 @_ssdm_op_PartSelect.i22.i32.i32.i32(i32 %m_load, i32 10, i32 31)
  %tmp_12 = zext i22 %tmp_11 to i32
  %tmp2 = xor i32 %tmp_12, %tmp_6
  %tmp_13 = xor i32 %tmp2, %tmp_7
  %tmp_14 = add i7 -7, %i_1
  %tmp_24_cast = zext i7 %tmp_14 to i32
  %m_addr_2 = getelementptr inbounds [64 x i32]* %m, i32 0, i32 %tmp_24_cast
  %m_load_1 = load i32* %m_addr_2, align 4
  %tmp_15 = add i7 -15, %i_1
  %tmp_25_cast = zext i7 %tmp_15 to i32
  %m_addr_3 = getelementptr inbounds [64 x i32]* %m, i32 0, i32 %tmp_25_cast
  %m_load_2 = load i32* %m_addr_3, align 4
  %tmp_16 = call i25 @_ssdm_op_PartSelect.i25.i32.i32.i32(i32 %m_load_2, i32 7, i32 31)
  %tmp_30 = trunc i32 %m_load_2 to i7
  %tmp_17 = call i32 @_ssdm_op_BitConcatenate.i32.i7.i25(i7 %tmp_30, i25 %tmp_16)
  %tmp_19 = call i14 @_ssdm_op_PartSelect.i14.i32.i32.i32(i32 %m_load_2, i32 18, i32 31)
  %tmp_33 = trunc i32 %m_load_2 to i18
  %tmp_20 = call i32 @_ssdm_op_BitConcatenate.i32.i18.i14(i18 %tmp_33, i14 %tmp_19)
  %tmp_22 = call i29 @_ssdm_op_PartSelect.i29.i32.i32.i32(i32 %m_load_2, i32 3, i32 31)
  %tmp_23 = zext i29 %tmp_22 to i32
  %tmp3 = xor i32 %tmp_23, %tmp_20
  %tmp_24 = xor i32 %tmp3, %tmp_17
  %tmp_25 = add i7 -16, %i_1
  %tmp_35_cast = zext i7 %tmp_25 to i32
  %m_addr_4 = getelementptr inbounds [64 x i32]* %m, i32 0, i32 %tmp_35_cast
  %m_load_3 = load i32* %m_addr_4, align 4
  %tmp4 = add i32 %m_load_1, %m_load_3
  %tmp5 = add i32 %tmp_13, %tmp_24
  %tmp_26 = add i32 %tmp5, %tmp4
  %m_addr_5 = getelementptr inbounds [64 x i32]* %m, i32 0, i32 %i_1_cast
  store i32 %tmp_26, i32* %m_addr_5, align 4
  %i_3 = add i7 1, %i_1
  br label %.preheader

.preheader1:                                      ; preds = %.preheader1.preheader, %4
  %h1 = phi i32 [ %h, %4 ], [ %ctx_state_7_read_1, %.preheader1.preheader ]
  %h = phi i32 [ %g, %4 ], [ %ctx_state_6_read_1, %.preheader1.preheader ]
  %g = phi i32 [ %f, %4 ], [ %ctx_state_5_read_1, %.preheader1.preheader ]
  %f = phi i32 [ %e, %4 ], [ %ctx_state_4_read_1, %.preheader1.preheader ]
  %d1 = phi i32 [ %d, %4 ], [ %ctx_state_3_read_1, %.preheader1.preheader ]
  %d = phi i32 [ %c, %4 ], [ %ctx_state_2_read_1, %.preheader1.preheader ]
  %c = phi i32 [ %b, %4 ], [ %ctx_state_1_read_1, %.preheader1.preheader ]
  %b = phi i32 [ %a, %4 ], [ %ctx_state_0_read_1, %.preheader1.preheader ]
  %i_2 = phi i7 [ %i_4, %4 ], [ 0, %.preheader1.preheader ]
  %i_2_cast = zext i7 %i_2 to i32
  %tmp_27 = icmp eq i7 %i_2, -64
  call void (...)* @_ssdm_op_SpecLoopTripCount(i64 64, i64 64, i64 64)
  %i_4 = add i7 %i_2, 1
  br i1 %tmp_27, label %5, label %4

; <label>:4                                       ; preds = %.preheader1
  %tmp_28 = call i26 @_ssdm_op_PartSelect.i26.i32.i32.i32(i32 %f, i32 6, i32 31)
  %tmp_36 = trunc i32 %f to i6
  %tmp_29 = call i32 @_ssdm_op_BitConcatenate.i32.i6.i26(i6 %tmp_36, i26 %tmp_28)
  %tmp_31 = call i21 @_ssdm_op_PartSelect.i21.i32.i32.i32(i32 %f, i32 11, i32 31)
  %tmp_44 = trunc i32 %f to i11
  %tmp_32 = call i32 @_ssdm_op_BitConcatenate.i32.i11.i21(i11 %tmp_44, i21 %tmp_31)
  %tmp_34 = call i7 @_ssdm_op_PartSelect.i7.i32.i32.i32(i32 %f, i32 25, i32 31)
  %tmp_47 = trunc i32 %f to i25
  %tmp_35 = call i32 @_ssdm_op_BitConcatenate.i32.i25.i7(i25 %tmp_47, i7 %tmp_34)
  %tmp6 = xor i32 %tmp_29, %tmp_32
  %tmp_37 = xor i32 %tmp6, %tmp_35
  %tmp_38 = and i32 %f, %g
  %tmp_39 = xor i32 %f, -1
  %tmp_40 = and i32 %h, %tmp_39
  %tmp_41 = xor i32 %tmp_38, %tmp_40
  %k_addr = getelementptr inbounds [64 x i32]* @k, i32 0, i32 %i_2_cast
  %k_load = load i32* %k_addr, align 4
  %m_addr_6 = getelementptr inbounds [64 x i32]* %m, i32 0, i32 %i_2_cast
  %m_load_4 = load i32* %m_addr_6, align 4
  %tmp9 = add i32 %k_load, %m_load_4
  %tmp11 = add i32 %tmp_37, %tmp_41
  %tmp10 = add i32 %tmp11, %h1
  %t1 = add i32 %tmp10, %tmp9
  %tmp_42 = call i30 @_ssdm_op_PartSelect.i30.i32.i32.i32(i32 %b, i32 2, i32 31)
  %tmp_50 = trunc i32 %b to i2
  %tmp_43 = call i32 @_ssdm_op_BitConcatenate.i32.i2.i30(i2 %tmp_50, i30 %tmp_42)
  %tmp_45 = call i19 @_ssdm_op_PartSelect.i19.i32.i32.i32(i32 %b, i32 13, i32 31)
  %tmp_57 = trunc i32 %b to i13
  %tmp_46 = call i32 @_ssdm_op_BitConcatenate.i32.i13.i19(i13 %tmp_57, i19 %tmp_45)
  %tmp_48 = call i10 @_ssdm_op_PartSelect.i10.i32.i32.i32(i32 %b, i32 22, i32 31)
  %tmp_58 = trunc i32 %b to i22
  %tmp_49 = call i32 @_ssdm_op_BitConcatenate.i32.i22.i10(i22 %tmp_58, i10 %tmp_48)
  %tmp12 = xor i32 %tmp_43, %tmp_46
  %tmp_51 = xor i32 %tmp12, %tmp_49
  %tmp_52 = xor i32 %c, %d
  %tmp_53 = and i32 %b, %tmp_52
  %tmp_54 = and i32 %c, %d
  %tmp_55 = xor i32 %tmp_53, %tmp_54
  %e = add i32 %t1, %d1
  %tmp13 = add i32 %tmp_55, %t1
  %a = add i32 %tmp13, %tmp_51
  br label %.preheader1

; <label>:5                                       ; preds = %.preheader1
  %ctx_state = add i32 %b, %ctx_state_0_read_1
  %ctx_state_1 = add i32 %c, %ctx_state_1_read_1
  %ctx_state_2 = add i32 %d, %ctx_state_2_read_1
  %ctx_state_3 = add i32 %d1, %ctx_state_3_read_1
  %ctx_state_4 = add i32 %f, %ctx_state_4_read_1
  %ctx_state_5 = add i32 %g, %ctx_state_5_read_1
  %ctx_state_6 = add i32 %h, %ctx_state_6_read_1
  %ctx_state_7 = add i32 %h1, %ctx_state_7_read_1
  %mrv = insertvalue { i32, i32, i32, i32, i32, i32, i32, i32 } undef, i32 %ctx_state, 0
  %mrv_1 = insertvalue { i32, i32, i32, i32, i32, i32, i32, i32 } %mrv, i32 %ctx_state_1, 1
  %mrv_2 = insertvalue { i32, i32, i32, i32, i32, i32, i32, i32 } %mrv_1, i32 %ctx_state_2, 2
  %mrv_3 = insertvalue { i32, i32, i32, i32, i32, i32, i32, i32 } %mrv_2, i32 %ctx_state_3, 3
  %mrv_4 = insertvalue { i32, i32, i32, i32, i32, i32, i32, i32 } %mrv_3, i32 %ctx_state_4, 4
  %mrv_5 = insertvalue { i32, i32, i32, i32, i32, i32, i32, i32 } %mrv_4, i32 %ctx_state_5, 5
  %mrv_6 = insertvalue { i32, i32, i32, i32, i32, i32, i32, i32 } %mrv_5, i32 %ctx_state_6, 6
  %mrv_7 = insertvalue { i32, i32, i32, i32, i32, i32, i32, i32 } %mrv_6, i32 %ctx_state_7, 7
  ret { i32, i32, i32, i32, i32, i32, i32, i32 } %mrv_7
}

define internal fastcc void @sha256_final([64 x i8]* nocapture %ctx_data, i32 %ctx_datalen_read, i32 %ctx_bitlen_0_read, i32 %p_read3, i32 %p_read1, i32 %p_read2, i32 %p_read4, i32 %p_read5, i32 %p_read6, i32 %p_read7, i32 %p_read8, i32 %p_read9, [64 x i8]* nocapture %hash) {
  %p_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %p_read9)
  %p_read_6 = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %p_read8)
  %p_read_7 = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %p_read7)
  %p_read_8 = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %p_read6)
  %p_read_9 = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %p_read5)
  %p_read48 = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %p_read4)
  %p_read27 = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %p_read2)
  %p_read16 = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %p_read1)
  %p_read35 = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %p_read3)
  %ctx_bitlen_0_read_1 = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %ctx_bitlen_0_read)
  %ctx_datalen_read_2 = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %ctx_datalen_read)
  %tmp = icmp ult i32 %ctx_datalen_read_2, 56
  %ctx_data_addr = getelementptr [64 x i8]* %ctx_data, i32 0, i32 %ctx_datalen_read_2
  store i8 -128, i8* %ctx_data_addr, align 1
  br i1 %tmp, label %.preheader3.preheader, label %.preheader.preheader

.preheader3.preheader:                            ; preds = %0
  br label %.preheader3

.preheader.preheader:                             ; preds = %0
  br label %.preheader

.preheader3:                                      ; preds = %.preheader3.preheader, %1
  %i_0_in = phi i32 [ %i, %1 ], [ %ctx_datalen_read_2, %.preheader3.preheader ]
  %i = add i32 %i_0_in, 1
  %exitcond = icmp eq i32 %i_0_in, 55
  br i1 %exitcond, label %.loopexit.loopexit15, label %1

; <label>:1                                       ; preds = %.preheader3
  %ctx_data_addr_1 = getelementptr [64 x i8]* %ctx_data, i32 0, i32 %i
  store i8 0, i8* %ctx_data_addr_1, align 1
  br label %.preheader3

.preheader:                                       ; preds = %.preheader.preheader, %2
  %i_1_in = phi i32 [ %i_1, %2 ], [ %ctx_datalen_read_2, %.preheader.preheader ]
  %i_1 = add i32 %i_1_in, 1
  %tmp_66 = call i26 @_ssdm_op_PartSelect.i26.i32.i32.i32(i32 %i_1, i32 6, i32 31)
  %icmp = icmp eq i26 %tmp_66, 0
  br i1 %icmp, label %2, label %3

; <label>:2                                       ; preds = %.preheader
  %ctx_data_addr_2 = getelementptr [64 x i8]* %ctx_data, i32 0, i32 %i_1
  store i8 0, i8* %ctx_data_addr_2, align 1
  br label %.preheader

; <label>:3                                       ; preds = %.preheader
  %call_ret1 = call fastcc { i32, i32, i32, i32, i32, i32, i32, i32 } @sha256_transform(i32 %p_read16, i32 %p_read27, i32 %p_read48, i32 %p_read_9, i32 %p_read_8, i32 %p_read_7, i32 %p_read_6, i32 %p_read, [64 x i8]* %ctx_data)
  %ctx_state_0_ret4 = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32 } %call_ret1, 0
  %ctx_state_1_ret5 = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32 } %call_ret1, 1
  %ctx_state_2_ret6 = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32 } %call_ret1, 2
  %ctx_state_3_ret7 = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32 } %call_ret1, 3
  %ctx_state_4_ret8 = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32 } %call_ret1, 4
  %ctx_state_5_ret9 = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32 } %call_ret1, 5
  %ctx_state_6_ret1 = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32 } %call_ret1, 6
  %ctx_state_7_ret1 = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32 } %call_ret1, 7
  br label %4

; <label>:4                                       ; preds = %5, %3
  %i_2 = phi i6 [ 0, %3 ], [ %i_5, %5 ]
  %i_2_cast5 = zext i6 %i_2 to i32
  %tmp_s = icmp eq i6 %i_2, -8
  call void (...)* @_ssdm_op_SpecLoopTripCount(i64 56, i64 56, i64 56)
  %i_5 = add i6 %i_2, 1
  br i1 %tmp_s, label %.loopexit.loopexit, label %5

; <label>:5                                       ; preds = %4
  %ctx_data_addr_6 = getelementptr [64 x i8]* %ctx_data, i32 0, i32 %i_2_cast5
  store i8 0, i8* %ctx_data_addr_6, align 1
  br label %4

.loopexit.loopexit:                               ; preds = %4
  br label %.loopexit

.loopexit.loopexit15:                             ; preds = %.preheader3
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit15, %.loopexit.loopexit
  %ctx_state = phi i32 [ %ctx_state_0_ret4, %.loopexit.loopexit ], [ %p_read16, %.loopexit.loopexit15 ]
  %ctx_state_1 = phi i32 [ %ctx_state_1_ret5, %.loopexit.loopexit ], [ %p_read27, %.loopexit.loopexit15 ]
  %ctx_state_2 = phi i32 [ %ctx_state_2_ret6, %.loopexit.loopexit ], [ %p_read48, %.loopexit.loopexit15 ]
  %ctx_state_3 = phi i32 [ %ctx_state_3_ret7, %.loopexit.loopexit ], [ %p_read_9, %.loopexit.loopexit15 ]
  %ctx_state_4 = phi i32 [ %ctx_state_4_ret8, %.loopexit.loopexit ], [ %p_read_8, %.loopexit.loopexit15 ]
  %ctx_state_5 = phi i32 [ %ctx_state_5_ret9, %.loopexit.loopexit ], [ %p_read_7, %.loopexit.loopexit15 ]
  %ctx_state_6 = phi i32 [ %ctx_state_6_ret1, %.loopexit.loopexit ], [ %p_read_6, %.loopexit.loopexit15 ]
  %ctx_state_7 = phi i32 [ %ctx_state_7_ret1, %.loopexit.loopexit ], [ %p_read, %.loopexit.loopexit15 ]
  %tmp_74 = trunc i32 %ctx_datalen_read_2 to i6
  %tmp_56 = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %tmp_74, i3 0)
  %tmp_74_cast = zext i9 %tmp_56 to i32
  %tmp_57 = xor i32 %tmp_74_cast, -1
  %tmp_58 = icmp ugt i32 %ctx_bitlen_0_read_1, %tmp_57
  %tmp_59 = add i32 1, %p_read35
  %tmp_86_read3 = select i1 %tmp_58, i32 %tmp_59, i32 %p_read35
  %tmp_76 = trunc i32 %ctx_datalen_read_2 to i5
  %tmp_12 = call i8 @_ssdm_op_BitConcatenate.i8.i5.i3(i5 %tmp_76, i3 0)
  %tmp_78 = trunc i32 %ctx_bitlen_0_read_1 to i8
  %tmp_14 = zext i9 %tmp_56 to i16
  %tmp_80 = trunc i32 %ctx_bitlen_0_read_1 to i16
  %tmp_16 = zext i9 %tmp_56 to i24
  %tmp_82 = trunc i32 %ctx_bitlen_0_read_1 to i24
  %ctx_bitlen = add i32 %ctx_bitlen_0_read_1, %tmp_74_cast
  %ctx_bitlen_cast3 = add i24 %tmp_16, %tmp_82
  %ctx_bitlen_cast = add i16 %tmp_14, %tmp_80
  %tmp_60 = add i8 %tmp_78, %tmp_12
  %ctx_data_addr_3 = getelementptr [64 x i8]* %ctx_data, i32 0, i32 63
  store i8 %tmp_60, i8* %ctx_data_addr_3, align 1
  %tmp_61 = call i8 @_ssdm_op_PartSelect.i8.i16.i32.i32(i16 %ctx_bitlen_cast, i32 8, i32 15)
  %ctx_data_addr_4 = getelementptr [64 x i8]* %ctx_data, i32 0, i32 62
  store i8 %tmp_61, i8* %ctx_data_addr_4, align 1
  %tmp_62 = call i8 @_ssdm_op_PartSelect.i8.i24.i32.i32(i24 %ctx_bitlen_cast3, i32 16, i32 23)
  %ctx_data_addr_5 = getelementptr [64 x i8]* %ctx_data, i32 0, i32 61
  store i8 %tmp_62, i8* %ctx_data_addr_5, align 1
  %tmp_63 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %ctx_bitlen, i32 24, i32 31)
  %ctx_data_addr_7 = getelementptr [64 x i8]* %ctx_data, i32 0, i32 60
  store i8 %tmp_63, i8* %ctx_data_addr_7, align 1
  %tmp_84 = trunc i32 %tmp_86_read3 to i8
  %ctx_data_addr_8 = getelementptr [64 x i8]* %ctx_data, i32 0, i32 59
  store i8 %tmp_84, i8* %ctx_data_addr_8, align 1
  %tmp_64 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %tmp_86_read3, i32 8, i32 15)
  %ctx_data_addr_9 = getelementptr [64 x i8]* %ctx_data, i32 0, i32 58
  store i8 %tmp_64, i8* %ctx_data_addr_9, align 1
  %tmp_65 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %tmp_86_read3, i32 16, i32 23)
  %ctx_data_addr_10 = getelementptr [64 x i8]* %ctx_data, i32 0, i32 57
  store i8 %tmp_65, i8* %ctx_data_addr_10, align 1
  %tmp_67 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %tmp_86_read3, i32 24, i32 31)
  %ctx_data_addr_11 = getelementptr [64 x i8]* %ctx_data, i32 0, i32 56
  store i8 %tmp_67, i8* %ctx_data_addr_11, align 1
  %call_ret = call fastcc { i32, i32, i32, i32, i32, i32, i32, i32 } @sha256_transform(i32 %ctx_state, i32 %ctx_state_1, i32 %ctx_state_2, i32 %ctx_state_3, i32 %ctx_state_4, i32 %ctx_state_5, i32 %ctx_state_6, i32 %ctx_state_7, [64 x i8]* %ctx_data)
  %ctx_state_0_ret = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32 } %call_ret, 0
  %ctx_state_1_ret = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32 } %call_ret, 1
  %ctx_state_2_ret = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32 } %call_ret, 2
  %ctx_state_3_ret = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32 } %call_ret, 3
  %ctx_state_4_ret = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32 } %call_ret, 4
  %ctx_state_5_ret = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32 } %call_ret, 5
  %ctx_state_6_ret = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32 } %call_ret, 6
  %ctx_state_7_ret = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32 } %call_ret, 7
  br label %6

; <label>:6                                       ; preds = %7, %.loopexit
  %i_3 = phi i3 [ 0, %.loopexit ], [ %i_6, %7 ]
  %i_3_cast2 = zext i3 %i_3 to i32
  %i_3_cast1 = zext i3 %i_3 to i5
  %tmp_68 = icmp eq i3 %i_3, -4
  call void (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  %i_6 = add i3 %i_3, 1
  br i1 %tmp_68, label %8, label %7

; <label>:7                                       ; preds = %6
  %tmp_86 = trunc i3 %i_3 to i2
  %tmp_69 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_86, i3 0)
  %tmp_70 = sub i5 -8, %tmp_69
  %tmp_94_cast = zext i5 %tmp_70 to i32
  %tmp_71 = lshr i32 %ctx_state_0_ret, %tmp_94_cast
  %tmp_88 = trunc i32 %tmp_71 to i8
  %hash_addr = getelementptr [64 x i8]* %hash, i32 0, i32 %i_3_cast2
  store i8 %tmp_88, i8* %hash_addr, align 1
  %tmp_72 = lshr i32 %ctx_state_1_ret, %tmp_94_cast
  %tmp_89 = trunc i32 %tmp_72 to i8
  %sum2 = xor i3 %i_3, -4
  %sum2_cast = zext i3 %sum2 to i32
  %hash_addr_1 = getelementptr [64 x i8]* %hash, i32 0, i32 %sum2_cast
  store i8 %tmp_89, i8* %hash_addr_1, align 1
  %tmp_73 = lshr i32 %ctx_state_2_ret, %tmp_94_cast
  %tmp_90 = trunc i32 %tmp_73 to i8
  %sum1 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 true, i3 %i_3)
  %sum4_cast = zext i4 %sum1 to i32
  %hash_addr_2 = getelementptr [64 x i8]* %hash, i32 0, i32 %sum4_cast
  store i8 %tmp_90, i8* %hash_addr_2, align 1
  %tmp_75 = lshr i32 %ctx_state_3_ret, %tmp_94_cast
  %tmp_91 = trunc i32 %tmp_75 to i8
  %sum6_cast8 = sext i3 %sum2 to i4
  %sum6_cast = zext i4 %sum6_cast8 to i32
  %hash_addr_3 = getelementptr [64 x i8]* %hash, i32 0, i32 %sum6_cast
  store i8 %tmp_91, i8* %hash_addr_3, align 1
  %tmp_77 = lshr i32 %ctx_state_4_ret, %tmp_94_cast
  %tmp_92 = trunc i32 %tmp_77 to i8
  %sum4 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 -2, i3 %i_3)
  %sum8_cast = zext i5 %sum4 to i32
  %hash_addr_4 = getelementptr [64 x i8]* %hash, i32 0, i32 %sum8_cast
  store i8 %tmp_92, i8* %hash_addr_4, align 1
  %tmp_79 = lshr i32 %ctx_state_5_ret, %tmp_94_cast
  %tmp_93 = trunc i32 %tmp_79 to i8
  %sum = add i5 -12, %i_3_cast1
  %sum_cast = zext i5 %sum to i32
  %hash_addr_5 = getelementptr [64 x i8]* %hash, i32 0, i32 %sum_cast
  store i8 %tmp_93, i8* %hash_addr_5, align 1
  %tmp_81 = lshr i32 %ctx_state_6_ret, %tmp_94_cast
  %tmp_94 = trunc i32 %tmp_81 to i8
  %sum1_cast7 = sext i4 %sum1 to i5
  %sum1_cast = zext i5 %sum1_cast7 to i32
  %hash_addr_6 = getelementptr [64 x i8]* %hash, i32 0, i32 %sum1_cast
  store i8 %tmp_94, i8* %hash_addr_6, align 1
  %tmp_83 = lshr i32 %ctx_state_7_ret, %tmp_94_cast
  %tmp_95 = trunc i32 %tmp_83 to i8
  %sum3_cast6 = sext i3 %sum2 to i5
  %sum3_cast = zext i5 %sum3_cast6 to i32
  %hash_addr_7 = getelementptr [64 x i8]* %hash, i32 0, i32 %sum3_cast
  store i8 %tmp_95, i8* %hash_addr_7, align 1
  br label %6

; <label>:8                                       ; preds = %6
  ret void
}

define void @sha256([256 x i8]* %data, i32 %base_offset, i32 %bytes, [32 x i8]* %digest) nounwind {
  %n = alloca i32
  %sha256ctx_datalen = alloca i32
  %sha256ctx_bitlen_0_2 = alloca i32
  %sha256ctx_bitlen_1_2 = alloca i32
  %sha256ctx_state_0_2 = alloca i32
  %sha256ctx_state_1_2 = alloca i32
  %sha256ctx_state_2_2 = alloca i32
  %sha256ctx_state_3_2 = alloca i32
  %sha256ctx_state_4_2 = alloca i32
  %sha256ctx_state_5_2 = alloca i32
  %sha256ctx_state_6_2 = alloca i32
  %sha256ctx_state_7_2 = alloca i32
  %seg_offset = alloca i32
  call void (...)* @_ssdm_op_SpecBitsMap([256 x i8]* %data) nounwind, !map !27
  call void (...)* @_ssdm_op_SpecBitsMap(i32 %base_offset) nounwind, !map !33
  call void (...)* @_ssdm_op_SpecBitsMap(i32 %bytes) nounwind, !map !39
  call void (...)* @_ssdm_op_SpecBitsMap([32 x i8]* %digest) nounwind, !map !43
  call void (...)* @_ssdm_op_SpecTopModule([7 x i8]* @sha256_str) nounwind
  %bytes_read = call i32 @_ssdm_op_Read.s_axilite.i32(i32 %bytes) nounwind
  %base_offset_read = call i32 @_ssdm_op_Read.s_axilite.i32(i32 %base_offset) nounwind
  %seg_buf = alloca [64 x i8], align 1
  %sha256ctx_data = alloca [64 x i8], align 1
  %empty = call i32 (...)* @_ssdm_op_SpecMemCore([256 x i8]* %data, [1 x i8]* @p_str, [7 x i8]* @RAM_1P_str, [1 x i8]* @p_str, i32 -1, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str) nounwind
  call void (...)* @_ssdm_op_SpecInterface([256 x i8]* %data, [10 x i8]* @p_str7, i32 0, i32 0, [1 x i8]* @p_str1, i32 0, i32 0, [1 x i8]* @p_str1, [1 x i8]* @p_str1, [1 x i8]* @p_str1, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str1, [1 x i8]* @p_str1) nounwind
  %empty_9 = call i32 (...)* @_ssdm_op_SpecMemCore([32 x i8]* %digest, [1 x i8]* @p_str, [7 x i8]* @RAM_1P_str, [1 x i8]* @p_str, i32 -1, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str) nounwind
  call void (...)* @_ssdm_op_SpecInterface([32 x i8]* %digest, [10 x i8]* @p_str7, i32 0, i32 0, [1 x i8]* @p_str1, i32 0, i32 0, [1 x i8]* @p_str1, [1 x i8]* @p_str1, [1 x i8]* @p_str1, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str1, [1 x i8]* @p_str1) nounwind
  call void (...)* @_ssdm_op_SpecInterface(i32 %base_offset, [10 x i8]* @p_str7, i32 0, i32 0, [1 x i8]* @p_str1, i32 0, i32 0, [1 x i8]* @p_str1, [1 x i8]* @p_str1, [1 x i8]* @p_str1, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str1, [1 x i8]* @p_str1) nounwind
  call void (...)* @_ssdm_op_SpecInterface(i32 %bytes, [10 x i8]* @p_str7, i32 0, i32 0, [1 x i8]* @p_str1, i32 0, i32 0, [1 x i8]* @p_str1, [1 x i8]* @p_str1, [1 x i8]* @p_str1, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str1, [1 x i8]* @p_str1) nounwind
  call void (...)* @_ssdm_op_SpecInterface(i32 0, [10 x i8]* @p_str7, i32 0, i32 0, [1 x i8]* @p_str1, i32 0, i32 0, [1 x i8]* @p_str1, [1 x i8]* @p_str1, [1 x i8]* @p_str1, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str1, [1 x i8]* @p_str1) nounwind
  %tmp_96 = trunc i32 %base_offset_read to i10
  store i32 0, i32* %seg_offset
  store i32 1541459225, i32* %sha256ctx_state_7_2
  store i32 528734635, i32* %sha256ctx_state_6_2
  store i32 -1694144372, i32* %sha256ctx_state_5_2
  store i32 1359893119, i32* %sha256ctx_state_4_2
  store i32 -1521486534, i32* %sha256ctx_state_3_2
  store i32 1013904242, i32* %sha256ctx_state_2_2
  store i32 -1150833019, i32* %sha256ctx_state_1_2
  store i32 1779033703, i32* %sha256ctx_state_0_2
  store i32 0, i32* %sha256ctx_bitlen_1_2
  store i32 0, i32* %sha256ctx_bitlen_0_2
  store i32 0, i32* %sha256ctx_datalen
  store i32 %bytes_read, i32* %n
  br label %1

; <label>:1                                       ; preds = %7, %0
  %n_load = load i32* %n
  %tmp = icmp eq i32 %n_load, 0
  br i1 %tmp, label %8, label %2

; <label>:2                                       ; preds = %1
  %tmp_14 = call i32 (...)* @_ssdm_op_SpecRegionBegin([12 x i8]* @p_str8) nounwind
  call void (...)* @_ssdm_op_SpecLoopTripCount(i32 12, i32 100, i32 56, [1 x i8]* @p_str1) nounwind
  %tmp_97 = call i26 @_ssdm_op_PartSelect.i26.i32.i32.i32(i32 %n_load, i32 6, i32 31)
  %icmp = icmp eq i26 %tmp_97, 0
  br i1 %icmp, label %.preheader.preheader, label %.preheader6.preheader

.preheader6.preheader:                            ; preds = %2
  br label %.preheader6

.preheader.preheader:                             ; preds = %2
  br label %.preheader

.preheader6:                                      ; preds = %.preheader6.preheader, %3
  %i9 = phi i7 [ %i, %3 ], [ 0, %.preheader6.preheader ]
  %i9_cast5 = zext i7 %i9 to i10
  %i9_cast4 = zext i7 %i9 to i32
  %exitcond5 = icmp eq i7 %i9, -64
  call void (...)* @_ssdm_op_SpecLoopTripCount(i64 64, i64 64, i64 64)
  %i = add i7 %i9, 1
  br i1 %exitcond5, label %4, label %3

; <label>:3                                       ; preds = %.preheader6
  %seg_offset_load_2 = load i32* %seg_offset
  %tmp1 = add i10 %tmp_96, %i9_cast5
  %tmp_99 = trunc i32 %seg_offset_load_2 to i10
  %sum = add i10 %tmp_99, %tmp1
  %sum_cast = zext i10 %sum to i32
  %data_addr = getelementptr [256 x i8]* %data, i32 0, i32 %sum_cast
  %data_load = load i8* %data_addr, align 1
  %seg_buf_addr_2 = getelementptr inbounds [64 x i8]* %seg_buf, i32 0, i32 %i9_cast4
  store i8 %data_load, i8* %seg_buf_addr_2, align 1
  br label %.preheader6

; <label>:4                                       ; preds = %.preheader6
  %sha256ctx_datalen_lo = load i32* %sha256ctx_datalen
  %sha256ctx_bitlen_0_s = load i32* %sha256ctx_bitlen_0_2
  %sha256ctx_bitlen_1_s = load i32* %sha256ctx_bitlen_1_2
  %sha256ctx_state_0_2_1 = load i32* %sha256ctx_state_0_2
  %sha256ctx_state_1_2_1 = load i32* %sha256ctx_state_1_2
  %sha256ctx_state_2_2_1 = load i32* %sha256ctx_state_2_2
  %sha256ctx_state_3_2_1 = load i32* %sha256ctx_state_3_2
  %sha256ctx_state_4_2_1 = load i32* %sha256ctx_state_4_2
  %sha256ctx_state_5_2_1 = load i32* %sha256ctx_state_5_2
  %sha256ctx_state_6_2_1 = load i32* %sha256ctx_state_6_2
  %sha256ctx_state_7_2_1 = load i32* %sha256ctx_state_7_2
  %seg_offset_load = load i32* %seg_offset
  %n_1 = add i32 %n_load, -64
  %seg_offset_1 = add i32 %seg_offset_load, 64
  %call_ret = call fastcc { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } @sha256_update([64 x i8]* %sha256ctx_data, i32 %sha256ctx_datalen_lo, i32 %sha256ctx_bitlen_0_s, i32 %sha256ctx_bitlen_1_s, i32 %sha256ctx_state_0_2_1, i32 %sha256ctx_state_1_2_1, i32 %sha256ctx_state_2_2_1, i32 %sha256ctx_state_3_2_1, i32 %sha256ctx_state_4_2_1, i32 %sha256ctx_state_5_2_1, i32 %sha256ctx_state_6_2_1, i32 %sha256ctx_state_7_2_1, [64 x i8]* %seg_buf, i32 64) nounwind
  %sha256ctx_datalen_2 = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %call_ret, 0
  %sha256ctx_bitlen_0 = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %call_ret, 1
  %sha256ctx_bitlen_1 = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %call_ret, 2
  %sha256ctx_state_0 = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %call_ret, 3
  %sha256ctx_state_1 = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %call_ret, 4
  %sha256ctx_state_2 = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %call_ret, 5
  %sha256ctx_state_3 = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %call_ret, 6
  %sha256ctx_state_4 = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %call_ret, 7
  %sha256ctx_state_5 = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %call_ret, 8
  %sha256ctx_state_6 = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %call_ret, 9
  %sha256ctx_state_7 = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %call_ret, 10
  store i32 %seg_offset_1, i32* %seg_offset
  store i32 %sha256ctx_state_7, i32* %sha256ctx_state_7_2
  store i32 %sha256ctx_state_6, i32* %sha256ctx_state_6_2
  store i32 %sha256ctx_state_5, i32* %sha256ctx_state_5_2
  store i32 %sha256ctx_state_4, i32* %sha256ctx_state_4_2
  store i32 %sha256ctx_state_3, i32* %sha256ctx_state_3_2
  store i32 %sha256ctx_state_2, i32* %sha256ctx_state_2_2
  store i32 %sha256ctx_state_1, i32* %sha256ctx_state_1_2
  store i32 %sha256ctx_state_0, i32* %sha256ctx_state_0_2
  store i32 %sha256ctx_bitlen_1, i32* %sha256ctx_bitlen_1_2
  store i32 %sha256ctx_bitlen_0, i32* %sha256ctx_bitlen_0_2
  store i32 %sha256ctx_datalen_2, i32* %sha256ctx_datalen
  store i32 %n_1, i32* %n
  br label %7

.preheader:                                       ; preds = %.preheader.preheader, %5
  %i_1 = phi i6 [ %i_7, %5 ], [ 0, %.preheader.preheader ]
  %i_1_cast3 = zext i6 %i_1 to i10
  %i_1_cast = zext i6 %i_1 to i32
  %exitcond4 = icmp eq i32 %i_1_cast, %n_load
  call void (...)* @_ssdm_op_SpecLoopTripCount(i64 12, i64 63, i64 56)
  %i_7 = add i6 %i_1, 1
  br i1 %exitcond4, label %6, label %5

; <label>:5                                       ; preds = %.preheader
  %seg_offset_load_1 = load i32* %seg_offset
  %tmp2 = add i10 %tmp_96, %i_1_cast3
  %tmp_98 = trunc i32 %seg_offset_load_1 to i10
  %sum2 = add i10 %tmp_98, %tmp2
  %sum2_cast = zext i10 %sum2 to i32
  %data_addr_4 = getelementptr [256 x i8]* %data, i32 0, i32 %sum2_cast
  %data_load_4 = load i8* %data_addr_4, align 1
  %seg_buf_addr_3 = getelementptr inbounds [64 x i8]* %seg_buf, i32 0, i32 %i_1_cast
  store i8 %data_load_4, i8* %seg_buf_addr_3, align 1
  br label %.preheader

; <label>:6                                       ; preds = %.preheader
  %sha256ctx_datalen_lo_1 = load i32* %sha256ctx_datalen
  %sha256ctx_bitlen_0_1 = load i32* %sha256ctx_bitlen_0_2
  %sha256ctx_bitlen_1_1 = load i32* %sha256ctx_bitlen_1_2
  %sha256ctx_state_0_2_2 = load i32* %sha256ctx_state_0_2
  %sha256ctx_state_1_2_2 = load i32* %sha256ctx_state_1_2
  %sha256ctx_state_2_2_2 = load i32* %sha256ctx_state_2_2
  %sha256ctx_state_3_2_2 = load i32* %sha256ctx_state_3_2
  %sha256ctx_state_4_2_2 = load i32* %sha256ctx_state_4_2
  %sha256ctx_state_5_2_2 = load i32* %sha256ctx_state_5_2
  %sha256ctx_state_6_2_2 = load i32* %sha256ctx_state_6_2
  %sha256ctx_state_7_2_2 = load i32* %sha256ctx_state_7_2
  %call_ret1 = call fastcc { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } @sha256_update([64 x i8]* %sha256ctx_data, i32 %sha256ctx_datalen_lo_1, i32 %sha256ctx_bitlen_0_1, i32 %sha256ctx_bitlen_1_1, i32 %sha256ctx_state_0_2_2, i32 %sha256ctx_state_1_2_2, i32 %sha256ctx_state_2_2_2, i32 %sha256ctx_state_3_2_2, i32 %sha256ctx_state_4_2_2, i32 %sha256ctx_state_5_2_2, i32 %sha256ctx_state_6_2_2, i32 %sha256ctx_state_7_2_2, [64 x i8]* %seg_buf, i32 %n_load) nounwind
  %sha256ctx_datalen_1 = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %call_ret1, 0
  %sha256ctx_bitlen_0_1_10 = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %call_ret1, 1
  %sha256ctx_bitlen_1_1_11 = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %call_ret1, 2
  %sha256ctx_state_0_1 = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %call_ret1, 3
  %sha256ctx_state_1_1 = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %call_ret1, 4
  %sha256ctx_state_2_1 = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %call_ret1, 5
  %sha256ctx_state_3_1 = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %call_ret1, 6
  %sha256ctx_state_4_1 = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %call_ret1, 7
  %sha256ctx_state_5_1 = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %call_ret1, 8
  %sha256ctx_state_6_1 = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %call_ret1, 9
  %sha256ctx_state_7_1 = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %call_ret1, 10
  store i32 %sha256ctx_state_7_1, i32* %sha256ctx_state_7_2
  store i32 %sha256ctx_state_6_1, i32* %sha256ctx_state_6_2
  store i32 %sha256ctx_state_5_1, i32* %sha256ctx_state_5_2
  store i32 %sha256ctx_state_4_1, i32* %sha256ctx_state_4_2
  store i32 %sha256ctx_state_3_1, i32* %sha256ctx_state_3_2
  store i32 %sha256ctx_state_2_1, i32* %sha256ctx_state_2_2
  store i32 %sha256ctx_state_1_1, i32* %sha256ctx_state_1_2
  store i32 %sha256ctx_state_0_1, i32* %sha256ctx_state_0_2
  store i32 %sha256ctx_bitlen_1_1_11, i32* %sha256ctx_bitlen_1_2
  store i32 %sha256ctx_bitlen_0_1_10, i32* %sha256ctx_bitlen_0_2
  store i32 %sha256ctx_datalen_1, i32* %sha256ctx_datalen
  store i32 0, i32* %n
  br label %7

; <label>:7                                       ; preds = %6, %4
  %empty_12 = call i32 (...)* @_ssdm_op_SpecRegionEnd([12 x i8]* @p_str8, i32 %tmp_14) nounwind
  br label %1

; <label>:8                                       ; preds = %1
  %sha256ctx_datalen_lo_2 = load i32* %sha256ctx_datalen
  %sha256ctx_bitlen_0_2_13 = load i32* %sha256ctx_bitlen_0_2
  %sha256ctx_bitlen_1_2_14 = load i32* %sha256ctx_bitlen_1_2
  %sha256ctx_state_0_2_3 = load i32* %sha256ctx_state_0_2
  %sha256ctx_state_1_2_3 = load i32* %sha256ctx_state_1_2
  %sha256ctx_state_2_2_3 = load i32* %sha256ctx_state_2_2
  %sha256ctx_state_3_2_3 = load i32* %sha256ctx_state_3_2
  %sha256ctx_state_4_2_3 = load i32* %sha256ctx_state_4_2
  %sha256ctx_state_5_2_3 = load i32* %sha256ctx_state_5_2
  %sha256ctx_state_6_2_3 = load i32* %sha256ctx_state_6_2
  %sha256ctx_state_7_2_3 = load i32* %sha256ctx_state_7_2
  call fastcc void @sha256_final([64 x i8]* %sha256ctx_data, i32 %sha256ctx_datalen_lo_2, i32 %sha256ctx_bitlen_0_2_13, i32 %sha256ctx_bitlen_1_2_14, i32 %sha256ctx_state_0_2_3, i32 %sha256ctx_state_1_2_3, i32 %sha256ctx_state_2_2_3, i32 %sha256ctx_state_3_2_3, i32 %sha256ctx_state_4_2_3, i32 %sha256ctx_state_5_2_3, i32 %sha256ctx_state_6_2_3, i32 %sha256ctx_state_7_2_3, [64 x i8]* %seg_buf) nounwind
  %seg_buf_addr = getelementptr inbounds [64 x i8]* %seg_buf, i32 0, i32 0
  %seg_buf_load = load i8* %seg_buf_addr, align 1
  %digest_addr = getelementptr [32 x i8]* %digest, i32 0, i32 0
  store i8 %seg_buf_load, i8* %digest_addr, align 1
  %seg_buf_addr_1 = getelementptr inbounds [64 x i8]* %seg_buf, i32 0, i32 1
  %seg_buf_load_1 = load i8* %seg_buf_addr_1, align 1
  %digest_addr_1 = getelementptr [32 x i8]* %digest, i32 0, i32 1
  store i8 %seg_buf_load_1, i8* %digest_addr_1, align 1
  %seg_buf_addr_4 = getelementptr inbounds [64 x i8]* %seg_buf, i32 0, i32 2
  %seg_buf_load_2 = load i8* %seg_buf_addr_4, align 1
  %digest_addr_2 = getelementptr [32 x i8]* %digest, i32 0, i32 2
  store i8 %seg_buf_load_2, i8* %digest_addr_2, align 1
  %seg_buf_addr_5 = getelementptr inbounds [64 x i8]* %seg_buf, i32 0, i32 3
  %seg_buf_load_3 = load i8* %seg_buf_addr_5, align 1
  %digest_addr_3 = getelementptr [32 x i8]* %digest, i32 0, i32 3
  store i8 %seg_buf_load_3, i8* %digest_addr_3, align 1
  %seg_buf_addr_6 = getelementptr inbounds [64 x i8]* %seg_buf, i32 0, i32 4
  %seg_buf_load_4 = load i8* %seg_buf_addr_6, align 1
  %digest_addr_4 = getelementptr [32 x i8]* %digest, i32 0, i32 4
  store i8 %seg_buf_load_4, i8* %digest_addr_4, align 1
  %seg_buf_addr_7 = getelementptr inbounds [64 x i8]* %seg_buf, i32 0, i32 5
  %seg_buf_load_5 = load i8* %seg_buf_addr_7, align 1
  %digest_addr_5 = getelementptr [32 x i8]* %digest, i32 0, i32 5
  store i8 %seg_buf_load_5, i8* %digest_addr_5, align 1
  %seg_buf_addr_8 = getelementptr inbounds [64 x i8]* %seg_buf, i32 0, i32 6
  %seg_buf_load_6 = load i8* %seg_buf_addr_8, align 1
  %digest_addr_6 = getelementptr [32 x i8]* %digest, i32 0, i32 6
  store i8 %seg_buf_load_6, i8* %digest_addr_6, align 1
  %seg_buf_addr_9 = getelementptr inbounds [64 x i8]* %seg_buf, i32 0, i32 7
  %seg_buf_load_7 = load i8* %seg_buf_addr_9, align 1
  %digest_addr_7 = getelementptr [32 x i8]* %digest, i32 0, i32 7
  store i8 %seg_buf_load_7, i8* %digest_addr_7, align 1
  %seg_buf_addr_10 = getelementptr inbounds [64 x i8]* %seg_buf, i32 0, i32 8
  %seg_buf_load_8 = load i8* %seg_buf_addr_10, align 1
  %digest_addr_8 = getelementptr [32 x i8]* %digest, i32 0, i32 8
  store i8 %seg_buf_load_8, i8* %digest_addr_8, align 1
  %seg_buf_addr_11 = getelementptr inbounds [64 x i8]* %seg_buf, i32 0, i32 9
  %seg_buf_load_9 = load i8* %seg_buf_addr_11, align 1
  %digest_addr_9 = getelementptr [32 x i8]* %digest, i32 0, i32 9
  store i8 %seg_buf_load_9, i8* %digest_addr_9, align 1
  %seg_buf_addr_12 = getelementptr inbounds [64 x i8]* %seg_buf, i32 0, i32 10
  %seg_buf_load_10 = load i8* %seg_buf_addr_12, align 1
  %digest_addr_10 = getelementptr [32 x i8]* %digest, i32 0, i32 10
  store i8 %seg_buf_load_10, i8* %digest_addr_10, align 1
  %seg_buf_addr_13 = getelementptr inbounds [64 x i8]* %seg_buf, i32 0, i32 11
  %seg_buf_load_11 = load i8* %seg_buf_addr_13, align 1
  %digest_addr_11 = getelementptr [32 x i8]* %digest, i32 0, i32 11
  store i8 %seg_buf_load_11, i8* %digest_addr_11, align 1
  %seg_buf_addr_14 = getelementptr inbounds [64 x i8]* %seg_buf, i32 0, i32 12
  %seg_buf_load_12 = load i8* %seg_buf_addr_14, align 1
  %digest_addr_12 = getelementptr [32 x i8]* %digest, i32 0, i32 12
  store i8 %seg_buf_load_12, i8* %digest_addr_12, align 1
  %seg_buf_addr_15 = getelementptr inbounds [64 x i8]* %seg_buf, i32 0, i32 13
  %seg_buf_load_13 = load i8* %seg_buf_addr_15, align 1
  %digest_addr_13 = getelementptr [32 x i8]* %digest, i32 0, i32 13
  store i8 %seg_buf_load_13, i8* %digest_addr_13, align 1
  %seg_buf_addr_16 = getelementptr inbounds [64 x i8]* %seg_buf, i32 0, i32 14
  %seg_buf_load_14 = load i8* %seg_buf_addr_16, align 1
  %digest_addr_14 = getelementptr [32 x i8]* %digest, i32 0, i32 14
  store i8 %seg_buf_load_14, i8* %digest_addr_14, align 1
  %seg_buf_addr_17 = getelementptr inbounds [64 x i8]* %seg_buf, i32 0, i32 15
  %seg_buf_load_15 = load i8* %seg_buf_addr_17, align 1
  %digest_addr_15 = getelementptr [32 x i8]* %digest, i32 0, i32 15
  store i8 %seg_buf_load_15, i8* %digest_addr_15, align 1
  %seg_buf_addr_18 = getelementptr inbounds [64 x i8]* %seg_buf, i32 0, i32 16
  %seg_buf_load_16 = load i8* %seg_buf_addr_18, align 1
  %digest_addr_16 = getelementptr [32 x i8]* %digest, i32 0, i32 16
  store i8 %seg_buf_load_16, i8* %digest_addr_16, align 1
  %seg_buf_addr_19 = getelementptr inbounds [64 x i8]* %seg_buf, i32 0, i32 17
  %seg_buf_load_17 = load i8* %seg_buf_addr_19, align 1
  %digest_addr_17 = getelementptr [32 x i8]* %digest, i32 0, i32 17
  store i8 %seg_buf_load_17, i8* %digest_addr_17, align 1
  %seg_buf_addr_20 = getelementptr inbounds [64 x i8]* %seg_buf, i32 0, i32 18
  %seg_buf_load_18 = load i8* %seg_buf_addr_20, align 1
  %digest_addr_18 = getelementptr [32 x i8]* %digest, i32 0, i32 18
  store i8 %seg_buf_load_18, i8* %digest_addr_18, align 1
  %seg_buf_addr_21 = getelementptr inbounds [64 x i8]* %seg_buf, i32 0, i32 19
  %seg_buf_load_19 = load i8* %seg_buf_addr_21, align 1
  %digest_addr_19 = getelementptr [32 x i8]* %digest, i32 0, i32 19
  store i8 %seg_buf_load_19, i8* %digest_addr_19, align 1
  %seg_buf_addr_22 = getelementptr inbounds [64 x i8]* %seg_buf, i32 0, i32 20
  %seg_buf_load_20 = load i8* %seg_buf_addr_22, align 1
  %digest_addr_20 = getelementptr [32 x i8]* %digest, i32 0, i32 20
  store i8 %seg_buf_load_20, i8* %digest_addr_20, align 1
  %seg_buf_addr_23 = getelementptr inbounds [64 x i8]* %seg_buf, i32 0, i32 21
  %seg_buf_load_21 = load i8* %seg_buf_addr_23, align 1
  %digest_addr_21 = getelementptr [32 x i8]* %digest, i32 0, i32 21
  store i8 %seg_buf_load_21, i8* %digest_addr_21, align 1
  %seg_buf_addr_24 = getelementptr inbounds [64 x i8]* %seg_buf, i32 0, i32 22
  %seg_buf_load_22 = load i8* %seg_buf_addr_24, align 1
  %digest_addr_22 = getelementptr [32 x i8]* %digest, i32 0, i32 22
  store i8 %seg_buf_load_22, i8* %digest_addr_22, align 1
  %seg_buf_addr_25 = getelementptr inbounds [64 x i8]* %seg_buf, i32 0, i32 23
  %seg_buf_load_23 = load i8* %seg_buf_addr_25, align 1
  %digest_addr_23 = getelementptr [32 x i8]* %digest, i32 0, i32 23
  store i8 %seg_buf_load_23, i8* %digest_addr_23, align 1
  %seg_buf_addr_26 = getelementptr inbounds [64 x i8]* %seg_buf, i32 0, i32 24
  %seg_buf_load_24 = load i8* %seg_buf_addr_26, align 1
  %digest_addr_24 = getelementptr [32 x i8]* %digest, i32 0, i32 24
  store i8 %seg_buf_load_24, i8* %digest_addr_24, align 1
  %seg_buf_addr_27 = getelementptr inbounds [64 x i8]* %seg_buf, i32 0, i32 25
  %seg_buf_load_25 = load i8* %seg_buf_addr_27, align 1
  %digest_addr_25 = getelementptr [32 x i8]* %digest, i32 0, i32 25
  store i8 %seg_buf_load_25, i8* %digest_addr_25, align 1
  %seg_buf_addr_28 = getelementptr inbounds [64 x i8]* %seg_buf, i32 0, i32 26
  %seg_buf_load_26 = load i8* %seg_buf_addr_28, align 1
  %digest_addr_26 = getelementptr [32 x i8]* %digest, i32 0, i32 26
  store i8 %seg_buf_load_26, i8* %digest_addr_26, align 1
  %seg_buf_addr_29 = getelementptr inbounds [64 x i8]* %seg_buf, i32 0, i32 27
  %seg_buf_load_27 = load i8* %seg_buf_addr_29, align 1
  %digest_addr_27 = getelementptr [32 x i8]* %digest, i32 0, i32 27
  store i8 %seg_buf_load_27, i8* %digest_addr_27, align 1
  %seg_buf_addr_30 = getelementptr inbounds [64 x i8]* %seg_buf, i32 0, i32 28
  %seg_buf_load_28 = load i8* %seg_buf_addr_30, align 1
  %digest_addr_28 = getelementptr [32 x i8]* %digest, i32 0, i32 28
  store i8 %seg_buf_load_28, i8* %digest_addr_28, align 1
  %seg_buf_addr_31 = getelementptr inbounds [64 x i8]* %seg_buf, i32 0, i32 29
  %seg_buf_load_29 = load i8* %seg_buf_addr_31, align 1
  %digest_addr_29 = getelementptr [32 x i8]* %digest, i32 0, i32 29
  store i8 %seg_buf_load_29, i8* %digest_addr_29, align 1
  %seg_buf_addr_32 = getelementptr inbounds [64 x i8]* %seg_buf, i32 0, i32 30
  %seg_buf_load_30 = load i8* %seg_buf_addr_32, align 1
  %digest_addr_30 = getelementptr [32 x i8]* %digest, i32 0, i32 30
  store i8 %seg_buf_load_30, i8* %digest_addr_30, align 1
  %seg_buf_addr_33 = getelementptr inbounds [64 x i8]* %seg_buf, i32 0, i32 31
  %seg_buf_load_31 = load i8* %seg_buf_addr_33, align 1
  %digest_addr_31 = getelementptr [32 x i8]* %digest, i32 0, i32 31
  store i8 %seg_buf_load_31, i8* %digest_addr_31, align 1
  ret void
}

declare i32 @llvm.part.select.i32(i32, i32, i32) nounwind readnone

declare i24 @llvm.part.select.i24(i24, i32, i32) nounwind readnone

declare i16 @llvm.part.select.i16(i16, i32, i32) nounwind readnone

declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

declare void @llvm.dbg.declare(metadata, metadata) nounwind readnone

define weak void @_ssdm_op_SpecTopModule(...) {
entry:
  ret void
}

define weak i32 @_ssdm_op_SpecRegionEnd(...) {
entry:
  ret i32 0
}

define weak i32 @_ssdm_op_SpecRegionBegin(...) {
entry:
  ret i32 0
}

define weak i32 @_ssdm_op_SpecMemCore(...) {
entry:
  ret i32 0
}

define weak void @_ssdm_op_SpecLoopTripCount(...) nounwind {
entry:
  ret void
}

define weak void @_ssdm_op_SpecInterface(...) nounwind {
entry:
  ret void
}

define weak void @_ssdm_op_SpecBitsMap(...) {
entry:
  ret void
}

define weak i32 @_ssdm_op_Read.s_axilite.i32(i32) {
entry:
  ret i32 %0
}

define weak i32 @_ssdm_op_Read.ap_auto.i32(i32) {
entry:
  ret i32 %0
}

define weak i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32, i32, i32) nounwind readnone {
entry:
  %empty = call i32 @llvm.part.select.i32(i32 %0, i32 %1, i32 %2)
  %empty_15 = trunc i32 %empty to i8
  ret i8 %empty_15
}

define weak i8 @_ssdm_op_PartSelect.i8.i24.i32.i32(i24, i32, i32) nounwind readnone {
entry:
  %empty = call i24 @llvm.part.select.i24(i24 %0, i32 %1, i32 %2)
  %empty_16 = trunc i24 %empty to i8
  ret i8 %empty_16
}

define weak i8 @_ssdm_op_PartSelect.i8.i16.i32.i32(i16, i32, i32) nounwind readnone {
entry:
  %empty = call i16 @llvm.part.select.i16(i16 %0, i32 %1, i32 %2)
  %empty_17 = trunc i16 %empty to i8
  ret i8 %empty_17
}

define weak i7 @_ssdm_op_PartSelect.i7.i32.i32.i32(i32, i32, i32) nounwind readnone {
entry:
  %empty = call i32 @llvm.part.select.i32(i32 %0, i32 %1, i32 %2)
  %empty_18 = trunc i32 %empty to i7
  ret i7 %empty_18
}

declare i6 @_ssdm_op_PartSelect.i6.i7.i32.i32(i7, i32, i32) nounwind readnone

declare i6 @_ssdm_op_PartSelect.i6.i32.i32.i32(i32, i32, i32) nounwind readnone

declare i5 @_ssdm_op_PartSelect.i5.i32.i32.i32(i32, i32, i32) nounwind readnone

define weak i30 @_ssdm_op_PartSelect.i30.i32.i32.i32(i32, i32, i32) nounwind readnone {
entry:
  %empty = call i32 @llvm.part.select.i32(i32 %0, i32 %1, i32 %2)
  %empty_19 = trunc i32 %empty to i30
  ret i30 %empty_19
}

define weak i29 @_ssdm_op_PartSelect.i29.i32.i32.i32(i32, i32, i32) nounwind readnone {
entry:
  %empty = call i32 @llvm.part.select.i32(i32 %0, i32 %1, i32 %2)
  %empty_20 = trunc i32 %empty to i29
  ret i29 %empty_20
}

define weak i26 @_ssdm_op_PartSelect.i26.i32.i32.i32(i32, i32, i32) nounwind readnone {
entry:
  %empty = call i32 @llvm.part.select.i32(i32 %0, i32 %1, i32 %2)
  %empty_21 = trunc i32 %empty to i26
  ret i26 %empty_21
}

define weak i25 @_ssdm_op_PartSelect.i25.i32.i32.i32(i32, i32, i32) nounwind readnone {
entry:
  %empty = call i32 @llvm.part.select.i32(i32 %0, i32 %1, i32 %2)
  %empty_22 = trunc i32 %empty to i25
  ret i25 %empty_22
}

declare i24 @_ssdm_op_PartSelect.i24.i32.i32.i32(i32, i32, i32) nounwind readnone

define weak i22 @_ssdm_op_PartSelect.i22.i32.i32.i32(i32, i32, i32) nounwind readnone {
entry:
  %empty = call i32 @llvm.part.select.i32(i32 %0, i32 %1, i32 %2)
  %empty_23 = trunc i32 %empty to i22
  ret i22 %empty_23
}

define weak i21 @_ssdm_op_PartSelect.i21.i32.i32.i32(i32, i32, i32) nounwind readnone {
entry:
  %empty = call i32 @llvm.part.select.i32(i32 %0, i32 %1, i32 %2)
  %empty_24 = trunc i32 %empty to i21
  ret i21 %empty_24
}

declare i2 @_ssdm_op_PartSelect.i2.i32.i32.i32(i32, i32, i32) nounwind readnone

declare i2 @_ssdm_op_PartSelect.i2.i3.i32.i32(i3, i32, i32) nounwind readnone

define weak i19 @_ssdm_op_PartSelect.i19.i32.i32.i32(i32, i32, i32) nounwind readnone {
entry:
  %empty = call i32 @llvm.part.select.i32(i32 %0, i32 %1, i32 %2)
  %empty_25 = trunc i32 %empty to i19
  ret i19 %empty_25
}

declare i18 @_ssdm_op_PartSelect.i18.i32.i32.i32(i32, i32, i32) nounwind readnone

declare i17 @_ssdm_op_PartSelect.i17.i32.i32.i32(i32, i32, i32) nounwind readnone

declare i16 @_ssdm_op_PartSelect.i16.i32.i32.i32(i32, i32, i32) nounwind readnone

define weak i15 @_ssdm_op_PartSelect.i15.i32.i32.i32(i32, i32, i32) nounwind readnone {
entry:
  %empty = call i32 @llvm.part.select.i32(i32 %0, i32 %1, i32 %2)
  %empty_26 = trunc i32 %empty to i15
  ret i15 %empty_26
}

define weak i14 @_ssdm_op_PartSelect.i14.i32.i32.i32(i32, i32, i32) nounwind readnone {
entry:
  %empty = call i32 @llvm.part.select.i32(i32 %0, i32 %1, i32 %2)
  %empty_27 = trunc i32 %empty to i14
  ret i14 %empty_27
}

define weak i13 @_ssdm_op_PartSelect.i13.i32.i32.i32(i32, i32, i32) nounwind readnone {
entry:
  %empty = call i32 @llvm.part.select.i32(i32 %0, i32 %1, i32 %2)
  %empty_28 = trunc i32 %empty to i13
  ret i13 %empty_28
}

declare i11 @_ssdm_op_PartSelect.i11.i32.i32.i32(i32, i32, i32) nounwind readnone

define weak i10 @_ssdm_op_PartSelect.i10.i32.i32.i32(i32, i32, i32) nounwind readnone {
entry:
  %empty = call i32 @llvm.part.select.i32(i32 %0, i32 %1, i32 %2)
  %empty_29 = trunc i32 %empty to i10
  ret i10 %empty_29
}

define weak i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6, i3) nounwind readnone {
entry:
  %empty = zext i6 %0 to i9
  %empty_30 = zext i3 %1 to i9
  %empty_31 = shl i9 %empty, 3
  %empty_32 = or i9 %empty_31, %empty_30
  ret i9 %empty_32
}

define weak i8 @_ssdm_op_BitConcatenate.i8.i5.i3(i5, i3) nounwind readnone {
entry:
  %empty = zext i5 %0 to i8
  %empty_33 = zext i3 %1 to i8
  %empty_34 = shl i8 %empty, 3
  %empty_35 = or i8 %empty_34, %empty_33
  ret i8 %empty_35
}

define weak i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2, i3) nounwind readnone {
entry:
  %empty = zext i2 %0 to i5
  %empty_36 = zext i3 %1 to i5
  %empty_37 = shl i5 %empty, 3
  %empty_38 = or i5 %empty_37, %empty_36
  ret i5 %empty_38
}

define weak i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1, i3) nounwind readnone {
entry:
  %empty = zext i1 %0 to i4
  %empty_39 = zext i3 %1 to i4
  %empty_40 = shl i4 %empty, 3
  %empty_41 = or i4 %empty_40, %empty_39
  ret i4 %empty_41
}

define weak i32 @_ssdm_op_BitConcatenate.i32.i8.i8.i8.i8(i8, i8, i8, i8) nounwind readnone {
entry:
  %empty = zext i8 %2 to i16
  %empty_42 = zext i8 %3 to i16
  %empty_43 = shl i16 %empty, 8
  %empty_44 = or i16 %empty_43, %empty_42
  %empty_45 = zext i8 %1 to i24
  %empty_46 = zext i16 %empty_44 to i24
  %empty_47 = shl i24 %empty_45, 16
  %empty_48 = or i24 %empty_47, %empty_46
  %empty_49 = zext i8 %0 to i32
  %empty_50 = zext i24 %empty_48 to i32
  %empty_51 = shl i32 %empty_49, 24
  %empty_52 = or i32 %empty_51, %empty_50
  ret i32 %empty_52
}

define weak i32 @_ssdm_op_BitConcatenate.i32.i7.i25(i7, i25) nounwind readnone {
entry:
  %empty = zext i7 %0 to i32
  %empty_53 = zext i25 %1 to i32
  %empty_54 = shl i32 %empty, 25
  %empty_55 = or i32 %empty_54, %empty_53
  ret i32 %empty_55
}

define weak i32 @_ssdm_op_BitConcatenate.i32.i6.i26(i6, i26) nounwind readnone {
entry:
  %empty = zext i6 %0 to i32
  %empty_56 = zext i26 %1 to i32
  %empty_57 = shl i32 %empty, 26
  %empty_58 = or i32 %empty_57, %empty_56
  ret i32 %empty_58
}

define weak i32 @_ssdm_op_BitConcatenate.i32.i25.i7(i25, i7) nounwind readnone {
entry:
  %empty = zext i25 %0 to i32
  %empty_59 = zext i7 %1 to i32
  %empty_60 = shl i32 %empty, 7
  %empty_61 = or i32 %empty_60, %empty_59
  ret i32 %empty_61
}

define weak i32 @_ssdm_op_BitConcatenate.i32.i22.i10(i22, i10) nounwind readnone {
entry:
  %empty = zext i22 %0 to i32
  %empty_62 = zext i10 %1 to i32
  %empty_63 = shl i32 %empty, 10
  %empty_64 = or i32 %empty_63, %empty_62
  ret i32 %empty_64
}

define weak i32 @_ssdm_op_BitConcatenate.i32.i2.i30(i2, i30) nounwind readnone {
entry:
  %empty = zext i2 %0 to i32
  %empty_65 = zext i30 %1 to i32
  %empty_66 = shl i32 %empty, 30
  %empty_67 = or i32 %empty_66, %empty_65
  ret i32 %empty_67
}

define weak i32 @_ssdm_op_BitConcatenate.i32.i19.i13(i19, i13) nounwind readnone {
entry:
  %empty = zext i19 %0 to i32
  %empty_68 = zext i13 %1 to i32
  %empty_69 = shl i32 %empty, 13
  %empty_70 = or i32 %empty_69, %empty_68
  ret i32 %empty_70
}

define weak i32 @_ssdm_op_BitConcatenate.i32.i18.i14(i18, i14) nounwind readnone {
entry:
  %empty = zext i18 %0 to i32
  %empty_71 = zext i14 %1 to i32
  %empty_72 = shl i32 %empty, 14
  %empty_73 = or i32 %empty_72, %empty_71
  ret i32 %empty_73
}

define weak i32 @_ssdm_op_BitConcatenate.i32.i17.i15(i17, i15) nounwind readnone {
entry:
  %empty = zext i17 %0 to i32
  %empty_74 = zext i15 %1 to i32
  %empty_75 = shl i32 %empty, 15
  %empty_76 = or i32 %empty_75, %empty_74
  ret i32 %empty_76
}

define weak i32 @_ssdm_op_BitConcatenate.i32.i13.i19(i13, i19) nounwind readnone {
entry:
  %empty = zext i13 %0 to i32
  %empty_77 = zext i19 %1 to i32
  %empty_78 = shl i32 %empty, 19
  %empty_79 = or i32 %empty_78, %empty_77
  ret i32 %empty_79
}

define weak i32 @_ssdm_op_BitConcatenate.i32.i11.i21(i11, i21) nounwind readnone {
entry:
  %empty = zext i11 %0 to i32
  %empty_80 = zext i21 %1 to i32
  %empty_81 = shl i32 %empty, 21
  %empty_82 = or i32 %empty_81, %empty_80
  ret i32 %empty_82
}

!opencl.kernels = !{!0, !7, !13, !19, !21}
!hls.encrypted.func = !{}
!llvm.map.gv = !{}

!0 = metadata !{null, metadata !1, metadata !2, metadata !3, metadata !4, metadata !5, metadata !6}
!1 = metadata !{metadata !"kernel_arg_addr_space", i32 1, i32 1}
!2 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none", metadata !"none"}
!3 = metadata !{metadata !"kernel_arg_type", metadata !"SHA256_CTX*", metadata !"uchar*"}
!4 = metadata !{metadata !"kernel_arg_type_qual", metadata !"", metadata !""}
!5 = metadata !{metadata !"kernel_arg_name", metadata !"ctx", metadata !"data"}
!6 = metadata !{metadata !"reqd_work_group_size", i32 1, i32 1, i32 1}
!7 = metadata !{null, metadata !8, metadata !9, metadata !10, metadata !11, metadata !12, metadata !6}
!8 = metadata !{metadata !"kernel_arg_addr_space", i32 1}
!9 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none"}
!10 = metadata !{metadata !"kernel_arg_type", metadata !"SHA256_CTX*"}
!11 = metadata !{metadata !"kernel_arg_type_qual", metadata !""}
!12 = metadata !{metadata !"kernel_arg_name", metadata !"ctx"}
!13 = metadata !{null, metadata !14, metadata !15, metadata !16, metadata !17, metadata !18, metadata !6}
!14 = metadata !{metadata !"kernel_arg_addr_space", i32 1, i32 1, i32 0}
!15 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none", metadata !"none", metadata !"none"}
!16 = metadata !{metadata !"kernel_arg_type", metadata !"SHA256_CTX*", metadata !"uchar*", metadata !"uint"}
!17 = metadata !{metadata !"kernel_arg_type_qual", metadata !"", metadata !"", metadata !""}
!18 = metadata !{metadata !"kernel_arg_name", metadata !"ctx", metadata !"data", metadata !"len"}
!19 = metadata !{null, metadata !1, metadata !2, metadata !3, metadata !4, metadata !20, metadata !6}
!20 = metadata !{metadata !"kernel_arg_name", metadata !"ctx", metadata !"hash"}
!21 = metadata !{null, metadata !22, metadata !23, metadata !24, metadata !25, metadata !26, metadata !6}
!22 = metadata !{metadata !"kernel_arg_addr_space", i32 1, i32 0, i32 0, i32 1}
!23 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none", metadata !"none", metadata !"none", metadata !"none"}
!24 = metadata !{metadata !"kernel_arg_type", metadata !"uchar*", metadata !"uint", metadata !"uint", metadata !"uchar*"}
!25 = metadata !{metadata !"kernel_arg_type_qual", metadata !"", metadata !"", metadata !"", metadata !""}
!26 = metadata !{metadata !"kernel_arg_name", metadata !"data", metadata !"base_offset", metadata !"bytes", metadata !"digest"}
!27 = metadata !{metadata !28}
!28 = metadata !{i32 0, i32 7, metadata !29}
!29 = metadata !{metadata !30}
!30 = metadata !{metadata !"data", metadata !31, metadata !"unsigned char", i32 0, i32 7}
!31 = metadata !{metadata !32}
!32 = metadata !{i32 0, i32 255, i32 1}
!33 = metadata !{metadata !34}
!34 = metadata !{i32 0, i32 31, metadata !35}
!35 = metadata !{metadata !36}
!36 = metadata !{metadata !"base_offset", metadata !37, metadata !"unsigned int", i32 0, i32 31}
!37 = metadata !{metadata !38}
!38 = metadata !{i32 0, i32 0, i32 0}
!39 = metadata !{metadata !40}
!40 = metadata !{i32 0, i32 31, metadata !41}
!41 = metadata !{metadata !42}
!42 = metadata !{metadata !"bytes", metadata !37, metadata !"unsigned int", i32 0, i32 31}
!43 = metadata !{metadata !44}
!44 = metadata !{i32 0, i32 7, metadata !45}
!45 = metadata !{metadata !46}
!46 = metadata !{metadata !"digest", metadata !47, metadata !"unsigned char", i32 0, i32 7}
!47 = metadata !{metadata !48}
!48 = metadata !{i32 0, i32 31, i32 1}
