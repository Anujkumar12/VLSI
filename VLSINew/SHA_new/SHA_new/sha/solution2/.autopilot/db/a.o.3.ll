; ModuleID = 'C:/Student/SHA_new/sha/solution2/.autopilot/db/a.o.3.bc'
target datalayout = "e-p:32:32:32-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-f80:128:128-v64:64:64-v128:128:128-a0:0:64-f80:32:32-n8:16:32-S32"
target triple = "i686-pc-mingw32"

@sha256_str = internal unnamed_addr constant [7 x i8] c"sha256\00" ; [#uses=1 type=[7 x i8]*]
@k = constant [64 x i32] [i32 1116352408, i32 1899447441, i32 -1245643825, i32 -373957723, i32 961987163, i32 1508970993, i32 -1841331548, i32 -1424204075, i32 -670586216, i32 310598401, i32 607225278, i32 1426881987, i32 1925078388, i32 -2132889090, i32 -1680079193, i32 -1046744716, i32 -459576895, i32 -272742522, i32 264347078, i32 604807628, i32 770255983, i32 1249150122, i32 1555081692, i32 1996064986, i32 -1740746414, i32 -1473132947, i32 -1341970488, i32 -1084653625, i32 -958395405, i32 -710438585, i32 113926993, i32 338241895, i32 666307205, i32 773529912, i32 1294757372, i32 1396182291, i32 1695183700, i32 1986661051, i32 -2117940946, i32 -1838011259, i32 -1564481375, i32 -1474664885, i32 -1035236496, i32 -949202525, i32 -778901479, i32 -694614492, i32 -200395387, i32 275423344, i32 430227734, i32 506948616, i32 659060556, i32 883997877, i32 958139571, i32 1322822218, i32 1537002063, i32 1747873779, i32 1955562222, i32 2024104815, i32 -2067236844, i32 -1933114872, i32 -1866530822, i32 -1538233109, i32 -1090935817, i32 -965641998], align 4 ; [#uses=1 type=[64 x i32]*]
@RAM_1P_str = internal unnamed_addr constant [7 x i8] c"RAM_1P\00" ; [#uses=2 type=[7 x i8]*]
@p_str8 = private unnamed_addr constant [12 x i8] c"hls_label_8\00", align 1 ; [#uses=2 type=[12 x i8]*]
@p_str7 = private unnamed_addr constant [10 x i8] c"s_axilite\00", align 1 ; [#uses=5 type=[10 x i8]*]
@p_str1 = private unnamed_addr constant [1 x i8] zeroinitializer, align 1 ; [#uses=31 type=[1 x i8]*]
@p_str = internal unnamed_addr constant [1 x i8] zeroinitializer ; [#uses=14 type=[1 x i8]*]

; [#uses=2]
define internal fastcc { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } @sha256_update([64 x i8]* nocapture %ctx_data, i32 %ctx_datalen_read, i32 %p_read1, i32 %p_read2, i32 %p_read3, i32 %p_read4, i32 %p_read5, i32 %p_read6, i32 %p_read7, i32 %p_read8, i32 %p_read9, i32 %p_read10, [64 x i8]* nocapture %data, i32 %len) {
  %ctx_state_7 = alloca i32                       ; [#uses=4 type=i32*]
  %ctx_state_6 = alloca i32                       ; [#uses=4 type=i32*]
  %ctx_state_5 = alloca i32                       ; [#uses=4 type=i32*]
  %ctx_state_4 = alloca i32                       ; [#uses=4 type=i32*]
  %ctx_state_3 = alloca i32                       ; [#uses=4 type=i32*]
  %ctx_state_2 = alloca i32                       ; [#uses=4 type=i32*]
  %ctx_state_1 = alloca i32                       ; [#uses=4 type=i32*]
  %ctx_state = alloca i32                         ; [#uses=4 type=i32*]
  %ctx_bitlen_1 = alloca i32                      ; [#uses=4 type=i32*]
  %ctx_bitlen = alloca i32                        ; [#uses=4 type=i32*]
  %len_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %len) ; [#uses=1 type=i32]
  call void @llvm.dbg.value(metadata !{i32 %len_read}, i64 0, metadata !27), !dbg !55 ; [debug line = 89:105] [debug variable = len]
  %p_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %p_read10) ; [#uses=1 type=i32]
  %p_read_1 = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %p_read9) ; [#uses=1 type=i32]
  %p_read_2 = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %p_read8) ; [#uses=1 type=i32]
  %p_read_3 = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %p_read7) ; [#uses=1 type=i32]
  %p_read_4 = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %p_read6) ; [#uses=1 type=i32]
  %p_read_5 = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %p_read5) ; [#uses=1 type=i32]
  %p_read45 = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %p_read4) ; [#uses=1 type=i32]
  %p_read34 = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %p_read3) ; [#uses=1 type=i32]
  %p_read23 = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %p_read2) ; [#uses=1 type=i32]
  %p_read12 = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %p_read1) ; [#uses=1 type=i32]
  %ctx_datalen_read_1 = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %ctx_datalen_read) ; [#uses=1 type=i32]
  call void @llvm.dbg.value(metadata !{i32 %ctx_datalen_read_1}, i64 0, metadata !56), !dbg !61 ; [debug line = 89:32] [debug variable = ctx.datalen]
  call void @llvm.dbg.value(metadata !{[64 x i8]* %ctx_data}, i64 0, metadata !62), !dbg !61 ; [debug line = 89:32] [debug variable = ctx.data]
  call void @llvm.dbg.value(metadata !{i32 %ctx_datalen_read}, i64 0, metadata !56), !dbg !61 ; [debug line = 89:32] [debug variable = ctx.datalen]
  call void @llvm.dbg.value(metadata !{[64 x i8]* %data}, i64 0, metadata !66), !dbg !67 ; [debug line = 89:67] [debug variable = data]
  call void @llvm.dbg.value(metadata !{i32 %len}, i64 0, metadata !27), !dbg !55 ; [debug line = 89:105] [debug variable = len]
  %tmp = trunc i32 %len_read to i8, !dbg !68      ; [#uses=1 type=i8] [debug line = 93:9]
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
  br label %1, !dbg !68                           ; [debug line = 93:9]

; <label>:1                                       ; preds = %._crit_edge, %0
  %ctx_datalen = phi i32 [ %ctx_datalen_read_1, %0 ], [ %ctx_datalen_1_cast, %._crit_edge ] ; [#uses=4 type=i32]
  %i = phi i7 [ 0, %0 ], [ %i_1, %._crit_edge ]   ; [#uses=3 type=i7]
  %i_cast2 = zext i7 %i to i32, !dbg !68          ; [#uses=1 type=i32] [debug line = 93:9]
  %i_cast = zext i7 %i to i8, !dbg !68            ; [#uses=1 type=i8] [debug line = 93:9]
  %exitcond = icmp eq i8 %i_cast, %tmp, !dbg !68  ; [#uses=1 type=i1] [debug line = 93:9]
  call void (...)* @_ssdm_op_SpecLoopTripCount(i64 12, i64 64, i64 56)
  %i_1 = add i7 %i, 1, !dbg !71                   ; [#uses=1 type=i7] [debug line = 93:23]
  br i1 %exitcond, label %3, label %2, !dbg !68   ; [debug line = 93:9]

; <label>:2                                       ; preds = %1
  %data_addr = getelementptr [64 x i8]* %data, i32 0, i32 %i_cast2, !dbg !72 ; [#uses=1 type=i8*] [debug line = 95:2]
  %data_load = load i8* %data_addr, align 1, !dbg !72 ; [#uses=1 type=i8] [debug line = 95:2]
  %ctx_data_addr = getelementptr [64 x i8]* %ctx_data, i32 0, i32 %ctx_datalen, !dbg !72 ; [#uses=1 type=i8*] [debug line = 95:2]
  store i8 %data_load, i8* %ctx_data_addr, align 1, !dbg !72 ; [debug line = 95:2]
  %tmp_5 = trunc i32 %ctx_datalen to i8           ; [#uses=1 type=i8]
  %tmp_6 = trunc i32 %ctx_datalen to i7           ; [#uses=1 type=i7]
  %ctx_datalen_assign_c = add i7 1, %tmp_6, !dbg !74 ; [#uses=1 type=i7] [debug line = 97:7]
  %tmp_1 = icmp eq i8 %tmp_5, 63, !dbg !74        ; [#uses=1 type=i1] [debug line = 97:7]
  br i1 %tmp_1, label %._crit_edge1, label %._crit_edge, !dbg !74 ; [debug line = 97:7]

._crit_edge1:                                     ; preds = %2
  %ctx_state_7_load_1 = load i32* %ctx_state_7, !dbg !75 ; [#uses=1 type=i32] [debug line = 98:10]
  %ctx_state_6_load_1 = load i32* %ctx_state_6, !dbg !75 ; [#uses=1 type=i32] [debug line = 98:10]
  %ctx_state_5_load_1 = load i32* %ctx_state_5, !dbg !75 ; [#uses=1 type=i32] [debug line = 98:10]
  %ctx_state_4_load_1 = load i32* %ctx_state_4, !dbg !75 ; [#uses=1 type=i32] [debug line = 98:10]
  %ctx_state_3_load_1 = load i32* %ctx_state_3, !dbg !75 ; [#uses=1 type=i32] [debug line = 98:10]
  %ctx_state_2_load_1 = load i32* %ctx_state_2, !dbg !75 ; [#uses=1 type=i32] [debug line = 98:10]
  %ctx_state_1_load_1 = load i32* %ctx_state_1, !dbg !75 ; [#uses=1 type=i32] [debug line = 98:10]
  %ctx_state_load_1 = load i32* %ctx_state, !dbg !75 ; [#uses=1 type=i32] [debug line = 98:10]
  %ctx_bitlen_1_load = load i32* %ctx_bitlen_1, !dbg !77 ; [#uses=2 type=i32] [debug line = 99:51]
  %ctx_bitlen_load = load i32* %ctx_bitlen, !dbg !78 ; [#uses=2 type=i32] [debug line = 99:69]
  %call_ret = call fastcc { i32, i32, i32, i32, i32, i32, i32, i32 } @sha256_transform(i32 %ctx_state_load_1, i32 %ctx_state_1_load_1, i32 %ctx_state_2_load_1, i32 %ctx_state_3_load_1, i32 %ctx_state_4_load_1, i32 %ctx_state_5_load_1, i32 %ctx_state_6_load_1, i32 %ctx_state_7_load_1, [64 x i8]* %ctx_data), !dbg !75 ; [#uses=8 type={ i32, i32, i32, i32, i32, i32, i32, i32 }] [debug line = 98:10]
  %ctx_state_0_ret = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32 } %call_ret, 0, !dbg !75 ; [#uses=1 type=i32] [debug line = 98:10]
  %ctx_state_1_ret = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32 } %call_ret, 1, !dbg !75 ; [#uses=1 type=i32] [debug line = 98:10]
  %ctx_state_2_ret = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32 } %call_ret, 2, !dbg !75 ; [#uses=1 type=i32] [debug line = 98:10]
  %ctx_state_3_ret = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32 } %call_ret, 3, !dbg !75 ; [#uses=1 type=i32] [debug line = 98:10]
  %ctx_state_4_ret = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32 } %call_ret, 4, !dbg !75 ; [#uses=1 type=i32] [debug line = 98:10]
  %ctx_state_5_ret = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32 } %call_ret, 5, !dbg !75 ; [#uses=1 type=i32] [debug line = 98:10]
  %ctx_state_6_ret = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32 } %call_ret, 6, !dbg !75 ; [#uses=1 type=i32] [debug line = 98:10]
  %ctx_state_7_ret = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32 } %call_ret, 7, !dbg !75 ; [#uses=1 type=i32] [debug line = 98:10]
  %tmp_2 = icmp ugt i32 %ctx_bitlen_load, -513, !dbg !79 ; [#uses=1 type=i1] [debug line = 99:10]
  %tmp_3 = add i32 %ctx_bitlen_1_load, 1, !dbg !77 ; [#uses=1 type=i32] [debug line = 99:51]
  %tmp_3_ctx_bitlen_1 = select i1 %tmp_2, i32 %tmp_3, i32 %ctx_bitlen_1_load, !dbg !79 ; [#uses=1 type=i32] [debug line = 99:10]
  %tmp_4 = add i32 %ctx_bitlen_load, 512, !dbg !78 ; [#uses=1 type=i32] [debug line = 99:69]
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
  br label %._crit_edge, !dbg !80                 ; [debug line = 101:7]

._crit_edge:                                      ; preds = %._crit_edge1, %2
  %ctx_datalen_1 = phi i7 [ 0, %._crit_edge1 ], [ %ctx_datalen_assign_c, %2 ] ; [#uses=1 type=i7]
  %ctx_datalen_1_cast = zext i7 %ctx_datalen_1 to i32, !dbg !71 ; [#uses=1 type=i32] [debug line = 93:23]
  call void @llvm.dbg.value(metadata !{i7 %i_1}, i64 0, metadata !81), !dbg !71 ; [debug line = 93:23] [debug variable = i]
  br label %1, !dbg !71                           ; [debug line = 93:23]

; <label>:3                                       ; preds = %1
  %ctx_state_7_load = load i32* %ctx_state_7, !dbg !82 ; [#uses=1 type=i32] [debug line = 103:1]
  %ctx_state_6_load = load i32* %ctx_state_6, !dbg !82 ; [#uses=1 type=i32] [debug line = 103:1]
  %ctx_state_5_load = load i32* %ctx_state_5, !dbg !82 ; [#uses=1 type=i32] [debug line = 103:1]
  %ctx_state_4_load = load i32* %ctx_state_4, !dbg !82 ; [#uses=1 type=i32] [debug line = 103:1]
  %ctx_state_3_load = load i32* %ctx_state_3, !dbg !82 ; [#uses=1 type=i32] [debug line = 103:1]
  %ctx_state_2_load = load i32* %ctx_state_2, !dbg !82 ; [#uses=1 type=i32] [debug line = 103:1]
  %ctx_state_1_load = load i32* %ctx_state_1, !dbg !82 ; [#uses=1 type=i32] [debug line = 103:1]
  %ctx_state_load = load i32* %ctx_state, !dbg !82 ; [#uses=1 type=i32] [debug line = 103:1]
  %ctx_bitlen_1_load_1 = load i32* %ctx_bitlen_1, !dbg !82 ; [#uses=1 type=i32] [debug line = 103:1]
  %ctx_bitlen_load_1 = load i32* %ctx_bitlen, !dbg !82 ; [#uses=1 type=i32] [debug line = 103:1]
  %mrv_s = insertvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } undef, i32 %ctx_datalen, 0, !dbg !82 ; [#uses=1 type={ i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 }] [debug line = 103:1]
  %mrv_1 = insertvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %mrv_s, i32 %ctx_bitlen_load_1, 1, !dbg !82 ; [#uses=1 type={ i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 }] [debug line = 103:1]
  %mrv_2 = insertvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %mrv_1, i32 %ctx_bitlen_1_load_1, 2, !dbg !82 ; [#uses=1 type={ i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 }] [debug line = 103:1]
  %mrv_3 = insertvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %mrv_2, i32 %ctx_state_load, 3, !dbg !82 ; [#uses=1 type={ i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 }] [debug line = 103:1]
  %mrv_4 = insertvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %mrv_3, i32 %ctx_state_1_load, 4, !dbg !82 ; [#uses=1 type={ i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 }] [debug line = 103:1]
  %mrv_5 = insertvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %mrv_4, i32 %ctx_state_2_load, 5, !dbg !82 ; [#uses=1 type={ i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 }] [debug line = 103:1]
  %mrv_6 = insertvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %mrv_5, i32 %ctx_state_3_load, 6, !dbg !82 ; [#uses=1 type={ i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 }] [debug line = 103:1]
  %mrv_7 = insertvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %mrv_6, i32 %ctx_state_4_load, 7, !dbg !82 ; [#uses=1 type={ i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 }] [debug line = 103:1]
  %mrv_8 = insertvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %mrv_7, i32 %ctx_state_5_load, 8, !dbg !82 ; [#uses=1 type={ i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 }] [debug line = 103:1]
  %mrv_9 = insertvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %mrv_8, i32 %ctx_state_6_load, 9, !dbg !82 ; [#uses=1 type={ i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 }] [debug line = 103:1]
  %mrv_10 = insertvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %mrv_9, i32 %ctx_state_7_load, 10, !dbg !82 ; [#uses=1 type={ i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 }] [debug line = 103:1]
  ret { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %mrv_10, !dbg !82 ; [debug line = 103:1]
}

; [#uses=3]
define internal fastcc { i32, i32, i32, i32, i32, i32, i32, i32 } @sha256_transform(i32 %ctx_state_0_read, i32 %ctx_state_1_read, i32 %ctx_state_2_read, i32 %ctx_state_3_read, i32 %ctx_state_4_read, i32 %ctx_state_5_read, i32 %ctx_state_6_read, i32 %ctx_state_7_read, [64 x i8]* nocapture %data) readonly {
  %ctx_state_7_read_1 = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %ctx_state_7_read) ; [#uses=2 type=i32]
  %ctx_state_6_read_1 = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %ctx_state_6_read) ; [#uses=2 type=i32]
  %ctx_state_5_read_1 = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %ctx_state_5_read) ; [#uses=2 type=i32]
  %ctx_state_4_read_1 = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %ctx_state_4_read) ; [#uses=2 type=i32]
  %ctx_state_3_read_1 = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %ctx_state_3_read) ; [#uses=2 type=i32]
  %ctx_state_2_read_1 = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %ctx_state_2_read) ; [#uses=2 type=i32]
  %ctx_state_1_read_1 = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %ctx_state_1_read) ; [#uses=2 type=i32]
  %ctx_state_0_read_1 = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %ctx_state_0_read) ; [#uses=2 type=i32]
  %m = alloca [64 x i32], align 4                 ; [#uses=7 type=[64 x i32]*]
  call void @llvm.dbg.value(metadata !{[64 x i8]* %data}, i64 0, metadata !83), !dbg !87 ; [debug line = 30:70] [debug variable = data]
  call void @llvm.dbg.declare(metadata !{[64 x i32]* %m}, metadata !88), !dbg !91 ; [debug line = 32:60] [debug variable = m]
  br label %1, !dbg !92                           ; [debug line = 34:9]

; <label>:1                                       ; preds = %2, %0
  %i = phi i5 [ 0, %0 ], [ %tmp_5, %2 ]           ; [#uses=3 type=i5]
  %j = phi i7 [ 0, %0 ], [ %j_1, %2 ]             ; [#uses=3 type=i7]
  %i_cast = zext i5 %i to i32, !dbg !92           ; [#uses=1 type=i32] [debug line = 34:9]
  %tmp = icmp eq i5 %i, -16, !dbg !92             ; [#uses=1 type=i1] [debug line = 34:9]
  call void (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  %tmp_5 = add i5 %i, 1, !dbg !94                 ; [#uses=1 type=i5] [debug line = 34:26]
  br i1 %tmp, label %.preheader.preheader, label %2, !dbg !92 ; [debug line = 34:9]

.preheader.preheader:                             ; preds = %1
  br label %.preheader, !dbg !95                  ; [debug line = 37:4]

; <label>:2                                       ; preds = %1
  %j_cast4 = zext i7 %j to i32, !dbg !92          ; [#uses=1 type=i32] [debug line = 34:9]
  %data_addr = getelementptr [64 x i8]* %data, i32 0, i32 %j_cast4, !dbg !97 ; [#uses=1 type=i8*] [debug line = 36:2]
  %data_load = load i8* %data_addr, align 1, !dbg !97 ; [#uses=1 type=i8] [debug line = 36:2]
  %tmp_10 = trunc i7 %j to i6, !dbg !92           ; [#uses=3 type=i6] [debug line = 34:9]
  %tmp_8 = or i6 %tmp_10, 1, !dbg !97             ; [#uses=1 type=i6] [debug line = 36:2]
  %tmp_8_cast = zext i6 %tmp_8 to i32, !dbg !97   ; [#uses=1 type=i32] [debug line = 36:2]
  %data_addr_1 = getelementptr [64 x i8]* %data, i32 0, i32 %tmp_8_cast, !dbg !97 ; [#uses=1 type=i8*] [debug line = 36:2]
  %data_load_1 = load i8* %data_addr_1, align 1, !dbg !97 ; [#uses=1 type=i8] [debug line = 36:2]
  %tmp_1 = or i6 %tmp_10, 2, !dbg !97             ; [#uses=1 type=i6] [debug line = 36:2]
  %tmp_1_cast = zext i6 %tmp_1 to i32, !dbg !97   ; [#uses=1 type=i32] [debug line = 36:2]
  %data_addr_2 = getelementptr [64 x i8]* %data, i32 0, i32 %tmp_1_cast, !dbg !97 ; [#uses=1 type=i8*] [debug line = 36:2]
  %data_load_2 = load i8* %data_addr_2, align 1, !dbg !97 ; [#uses=1 type=i8] [debug line = 36:2]
  %tmp_4 = or i6 %tmp_10, 3, !dbg !97             ; [#uses=1 type=i6] [debug line = 36:2]
  %tmp_4_cast = zext i6 %tmp_4 to i32, !dbg !97   ; [#uses=1 type=i32] [debug line = 36:2]
  %data_addr_3 = getelementptr [64 x i8]* %data, i32 0, i32 %tmp_4_cast, !dbg !97 ; [#uses=1 type=i8*] [debug line = 36:2]
  %data_load_3 = load i8* %data_addr_3, align 1, !dbg !97 ; [#uses=1 type=i8] [debug line = 36:2]
  %tmp_2 = call i32 @_ssdm_op_BitConcatenate.i32.i8.i8.i8.i8(i8 %data_load, i8 %data_load_1, i8 %data_load_2, i8 %data_load_3), !dbg !97 ; [#uses=1 type=i32] [debug line = 36:2]
  %m_addr = getelementptr inbounds [64 x i32]* %m, i32 0, i32 %i_cast, !dbg !97 ; [#uses=1 type=i32*] [debug line = 36:2]
  store i32 %tmp_2, i32* %m_addr, align 4, !dbg !97 ; [debug line = 36:2]
  %j_1 = add i7 4, %j, !dbg !94                   ; [#uses=1 type=i7] [debug line = 34:26]
  call void @llvm.dbg.value(metadata !{i7 %j_1}, i64 0, metadata !99), !dbg !94 ; [debug line = 34:26] [debug variable = j]
  br label %1, !dbg !94                           ; [debug line = 34:26]

.preheader:                                       ; preds = %3, %.preheader.preheader
  %i_1 = phi i7 [ %i_3, %3 ], [ 16, %.preheader.preheader ] ; [#uses=7 type=i7]
  %i_1_cast = zext i7 %i_1 to i32, !dbg !95       ; [#uses=1 type=i32] [debug line = 37:4]
  %exitcond = icmp eq i7 %i_1, -64, !dbg !95      ; [#uses=1 type=i1] [debug line = 37:4]
  call void (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48)
  br i1 %exitcond, label %.preheader1.preheader, label %3, !dbg !95 ; [debug line = 37:4]

.preheader1.preheader:                            ; preds = %.preheader
  br label %.preheader1, !dbg !100                ; [debug line = 50:9]

; <label>:3                                       ; preds = %.preheader
  %tmp_s = add i7 -2, %i_1, !dbg !102             ; [#uses=1 type=i7] [debug line = 39:2]
  %tmp_14_cast = zext i7 %tmp_s to i32, !dbg !102 ; [#uses=1 type=i32] [debug line = 39:2]
  %m_addr_1 = getelementptr inbounds [64 x i32]* %m, i32 0, i32 %tmp_14_cast, !dbg !102 ; [#uses=1 type=i32*] [debug line = 39:2]
  %m_load = load i32* %m_addr_1, align 4, !dbg !102 ; [#uses=5 type=i32] [debug line = 39:2]
  %tmp_3 = call i15 @_ssdm_op_PartSelect.i15.i32.i32.i32(i32 %m_load, i32 17, i32 31), !dbg !102 ; [#uses=1 type=i15] [debug line = 39:2]
  %tmp_18 = trunc i32 %m_load to i17              ; [#uses=1 type=i17]
  %tmp_7 = call i32 @_ssdm_op_BitConcatenate.i32.i17.i15(i17 %tmp_18, i15 %tmp_3), !dbg !102 ; [#uses=1 type=i32] [debug line = 39:2]
  %tmp_9 = call i13 @_ssdm_op_PartSelect.i13.i32.i32.i32(i32 %m_load, i32 19, i32 31), !dbg !102 ; [#uses=1 type=i13] [debug line = 39:2]
  %tmp_21 = trunc i32 %m_load to i19              ; [#uses=1 type=i19]
  %tmp_6 = call i32 @_ssdm_op_BitConcatenate.i32.i19.i13(i19 %tmp_21, i13 %tmp_9), !dbg !102 ; [#uses=1 type=i32] [debug line = 39:2]
  %tmp_11 = call i22 @_ssdm_op_PartSelect.i22.i32.i32.i32(i32 %m_load, i32 10, i32 31), !dbg !102 ; [#uses=1 type=i22] [debug line = 39:2]
  %tmp_12 = zext i22 %tmp_11 to i32, !dbg !102    ; [#uses=1 type=i32] [debug line = 39:2]
  %tmp2 = xor i32 %tmp_12, %tmp_6, !dbg !102      ; [#uses=1 type=i32] [debug line = 39:2]
  %tmp_13 = xor i32 %tmp2, %tmp_7, !dbg !102      ; [#uses=1 type=i32] [debug line = 39:2]
  %tmp_14 = add i7 -7, %i_1, !dbg !102            ; [#uses=1 type=i7] [debug line = 39:2]
  %tmp_24_cast = zext i7 %tmp_14 to i32, !dbg !102 ; [#uses=1 type=i32] [debug line = 39:2]
  %m_addr_2 = getelementptr inbounds [64 x i32]* %m, i32 0, i32 %tmp_24_cast, !dbg !102 ; [#uses=1 type=i32*] [debug line = 39:2]
  %m_load_1 = load i32* %m_addr_2, align 4, !dbg !102 ; [#uses=1 type=i32] [debug line = 39:2]
  %tmp_15 = add i7 -15, %i_1, !dbg !102           ; [#uses=1 type=i7] [debug line = 39:2]
  %tmp_25_cast = zext i7 %tmp_15 to i32, !dbg !102 ; [#uses=1 type=i32] [debug line = 39:2]
  %m_addr_3 = getelementptr inbounds [64 x i32]* %m, i32 0, i32 %tmp_25_cast, !dbg !102 ; [#uses=1 type=i32*] [debug line = 39:2]
  %m_load_2 = load i32* %m_addr_3, align 4, !dbg !102 ; [#uses=5 type=i32] [debug line = 39:2]
  %tmp_16 = call i25 @_ssdm_op_PartSelect.i25.i32.i32.i32(i32 %m_load_2, i32 7, i32 31), !dbg !102 ; [#uses=1 type=i25] [debug line = 39:2]
  %tmp_30 = trunc i32 %m_load_2 to i7             ; [#uses=1 type=i7]
  %tmp_17 = call i32 @_ssdm_op_BitConcatenate.i32.i7.i25(i7 %tmp_30, i25 %tmp_16), !dbg !102 ; [#uses=1 type=i32] [debug line = 39:2]
  %tmp_19 = call i14 @_ssdm_op_PartSelect.i14.i32.i32.i32(i32 %m_load_2, i32 18, i32 31), !dbg !102 ; [#uses=1 type=i14] [debug line = 39:2]
  %tmp_33 = trunc i32 %m_load_2 to i18            ; [#uses=1 type=i18]
  %tmp_20 = call i32 @_ssdm_op_BitConcatenate.i32.i18.i14(i18 %tmp_33, i14 %tmp_19), !dbg !102 ; [#uses=1 type=i32] [debug line = 39:2]
  %tmp_22 = call i29 @_ssdm_op_PartSelect.i29.i32.i32.i32(i32 %m_load_2, i32 3, i32 31), !dbg !102 ; [#uses=1 type=i29] [debug line = 39:2]
  %tmp_23 = zext i29 %tmp_22 to i32, !dbg !102    ; [#uses=1 type=i32] [debug line = 39:2]
  %tmp3 = xor i32 %tmp_23, %tmp_20, !dbg !102     ; [#uses=1 type=i32] [debug line = 39:2]
  %tmp_24 = xor i32 %tmp3, %tmp_17, !dbg !102     ; [#uses=1 type=i32] [debug line = 39:2]
  %tmp_25 = add i7 -16, %i_1, !dbg !102           ; [#uses=1 type=i7] [debug line = 39:2]
  %tmp_35_cast = zext i7 %tmp_25 to i32, !dbg !102 ; [#uses=1 type=i32] [debug line = 39:2]
  %m_addr_4 = getelementptr inbounds [64 x i32]* %m, i32 0, i32 %tmp_35_cast, !dbg !102 ; [#uses=1 type=i32*] [debug line = 39:2]
  %m_load_3 = load i32* %m_addr_4, align 4, !dbg !102 ; [#uses=1 type=i32] [debug line = 39:2]
  %tmp4 = add i32 %m_load_1, %m_load_3, !dbg !102 ; [#uses=1 type=i32] [debug line = 39:2]
  %tmp5 = add i32 %tmp_13, %tmp_24, !dbg !102     ; [#uses=1 type=i32] [debug line = 39:2]
  %tmp_26 = add i32 %tmp5, %tmp4, !dbg !102       ; [#uses=1 type=i32] [debug line = 39:2]
  %m_addr_5 = getelementptr inbounds [64 x i32]* %m, i32 0, i32 %i_1_cast, !dbg !102 ; [#uses=1 type=i32*] [debug line = 39:2]
  store i32 %tmp_26, i32* %m_addr_5, align 4, !dbg !102 ; [debug line = 39:2]
  %i_3 = add i7 1, %i_1, !dbg !104                ; [#uses=1 type=i7] [debug line = 37:20]
  call void @llvm.dbg.value(metadata !{i7 %i_3}, i64 0, metadata !105), !dbg !104 ; [debug line = 37:20] [debug variable = i]
  br label %.preheader, !dbg !104                 ; [debug line = 37:20]

.preheader1:                                      ; preds = %4, %.preheader1.preheader
  %h1 = phi i32 [ %h, %4 ], [ %ctx_state_7_read_1, %.preheader1.preheader ] ; [#uses=2 type=i32]
  %h = phi i32 [ %g, %4 ], [ %ctx_state_6_read_1, %.preheader1.preheader ] ; [#uses=3 type=i32]
  %g = phi i32 [ %f, %4 ], [ %ctx_state_5_read_1, %.preheader1.preheader ] ; [#uses=3 type=i32]
  %f = phi i32 [ %e, %4 ], [ %ctx_state_4_read_1, %.preheader1.preheader ] ; [#uses=10 type=i32]
  %d1 = phi i32 [ %d, %4 ], [ %ctx_state_3_read_1, %.preheader1.preheader ] ; [#uses=2 type=i32]
  %d = phi i32 [ %c, %4 ], [ %ctx_state_2_read_1, %.preheader1.preheader ] ; [#uses=4 type=i32]
  %c = phi i32 [ %b, %4 ], [ %ctx_state_1_read_1, %.preheader1.preheader ] ; [#uses=4 type=i32]
  %b = phi i32 [ %a, %4 ], [ %ctx_state_0_read_1, %.preheader1.preheader ] ; [#uses=9 type=i32]
  %i_2 = phi i7 [ %i_4, %4 ], [ 0, %.preheader1.preheader ] ; [#uses=3 type=i7]
  %i_2_cast = zext i7 %i_2 to i32, !dbg !100      ; [#uses=2 type=i32] [debug line = 50:9]
  %tmp_27 = icmp eq i7 %i_2, -64, !dbg !100       ; [#uses=1 type=i1] [debug line = 50:9]
  call void (...)* @_ssdm_op_SpecLoopTripCount(i64 64, i64 64, i64 64)
  %i_4 = add i7 %i_2, 1, !dbg !106                ; [#uses=1 type=i7] [debug line = 50:24]
  br i1 %tmp_27, label %5, label %4, !dbg !100    ; [debug line = 50:9]

; <label>:4                                       ; preds = %.preheader1
  %tmp_28 = call i26 @_ssdm_op_PartSelect.i26.i32.i32.i32(i32 %f, i32 6, i32 31), !dbg !107 ; [#uses=1 type=i26] [debug line = 52:2]
  %tmp_36 = trunc i32 %f to i6                    ; [#uses=1 type=i6]
  %tmp_29 = call i32 @_ssdm_op_BitConcatenate.i32.i6.i26(i6 %tmp_36, i26 %tmp_28), !dbg !107 ; [#uses=1 type=i32] [debug line = 52:2]
  %tmp_31 = call i21 @_ssdm_op_PartSelect.i21.i32.i32.i32(i32 %f, i32 11, i32 31), !dbg !107 ; [#uses=1 type=i21] [debug line = 52:2]
  %tmp_44 = trunc i32 %f to i11                   ; [#uses=1 type=i11]
  %tmp_32 = call i32 @_ssdm_op_BitConcatenate.i32.i11.i21(i11 %tmp_44, i21 %tmp_31), !dbg !107 ; [#uses=1 type=i32] [debug line = 52:2]
  %tmp_34 = call i7 @_ssdm_op_PartSelect.i7.i32.i32.i32(i32 %f, i32 25, i32 31), !dbg !107 ; [#uses=1 type=i7] [debug line = 52:2]
  %tmp_47 = trunc i32 %f to i25                   ; [#uses=1 type=i25]
  %tmp_35 = call i32 @_ssdm_op_BitConcatenate.i32.i25.i7(i25 %tmp_47, i7 %tmp_34), !dbg !107 ; [#uses=1 type=i32] [debug line = 52:2]
  %tmp6 = xor i32 %tmp_29, %tmp_32, !dbg !107     ; [#uses=1 type=i32] [debug line = 52:2]
  %tmp_37 = xor i32 %tmp6, %tmp_35, !dbg !107     ; [#uses=1 type=i32] [debug line = 52:2]
  %tmp_38 = and i32 %f, %g, !dbg !107             ; [#uses=1 type=i32] [debug line = 52:2]
  %tmp_39 = xor i32 %f, -1, !dbg !107             ; [#uses=1 type=i32] [debug line = 52:2]
  %tmp_40 = and i32 %h, %tmp_39, !dbg !107        ; [#uses=1 type=i32] [debug line = 52:2]
  %tmp_41 = xor i32 %tmp_38, %tmp_40, !dbg !107   ; [#uses=1 type=i32] [debug line = 52:2]
  %k_addr = getelementptr inbounds [64 x i32]* @k, i32 0, i32 %i_2_cast, !dbg !107 ; [#uses=1 type=i32*] [debug line = 52:2]
  %k_load = load i32* %k_addr, align 4, !dbg !107 ; [#uses=1 type=i32] [debug line = 52:2]
  %m_addr_6 = getelementptr inbounds [64 x i32]* %m, i32 0, i32 %i_2_cast, !dbg !107 ; [#uses=1 type=i32*] [debug line = 52:2]
  %m_load_4 = load i32* %m_addr_6, align 4, !dbg !107 ; [#uses=1 type=i32] [debug line = 52:2]
  %tmp9 = add i32 %k_load, %m_load_4, !dbg !107   ; [#uses=1 type=i32] [debug line = 52:2]
  %tmp11 = add i32 %tmp_37, %tmp_41, !dbg !107    ; [#uses=1 type=i32] [debug line = 52:2]
  %tmp10 = add i32 %tmp11, %h1, !dbg !107         ; [#uses=1 type=i32] [debug line = 52:2]
  %t1 = add i32 %tmp10, %tmp9, !dbg !107          ; [#uses=2 type=i32] [debug line = 52:2]
  call void @llvm.dbg.value(metadata !{i32 %t1}, i64 0, metadata !109), !dbg !107 ; [debug line = 52:2] [debug variable = t1]
  %tmp_42 = call i30 @_ssdm_op_PartSelect.i30.i32.i32.i32(i32 %b, i32 2, i32 31), !dbg !110 ; [#uses=1 type=i30] [debug line = 53:7]
  %tmp_50 = trunc i32 %b to i2                    ; [#uses=1 type=i2]
  %tmp_43 = call i32 @_ssdm_op_BitConcatenate.i32.i2.i30(i2 %tmp_50, i30 %tmp_42), !dbg !110 ; [#uses=1 type=i32] [debug line = 53:7]
  %tmp_45 = call i19 @_ssdm_op_PartSelect.i19.i32.i32.i32(i32 %b, i32 13, i32 31), !dbg !110 ; [#uses=1 type=i19] [debug line = 53:7]
  %tmp_57 = trunc i32 %b to i13                   ; [#uses=1 type=i13]
  %tmp_46 = call i32 @_ssdm_op_BitConcatenate.i32.i13.i19(i13 %tmp_57, i19 %tmp_45), !dbg !110 ; [#uses=1 type=i32] [debug line = 53:7]
  %tmp_48 = call i10 @_ssdm_op_PartSelect.i10.i32.i32.i32(i32 %b, i32 22, i32 31), !dbg !110 ; [#uses=1 type=i10] [debug line = 53:7]
  %tmp_58 = trunc i32 %b to i22                   ; [#uses=1 type=i22]
  %tmp_49 = call i32 @_ssdm_op_BitConcatenate.i32.i22.i10(i22 %tmp_58, i10 %tmp_48), !dbg !110 ; [#uses=1 type=i32] [debug line = 53:7]
  %tmp12 = xor i32 %tmp_43, %tmp_46, !dbg !110    ; [#uses=1 type=i32] [debug line = 53:7]
  %tmp_51 = xor i32 %tmp12, %tmp_49, !dbg !110    ; [#uses=1 type=i32] [debug line = 53:7]
  %tmp_52 = xor i32 %c, %d, !dbg !110             ; [#uses=1 type=i32] [debug line = 53:7]
  %tmp_53 = and i32 %b, %tmp_52, !dbg !110        ; [#uses=1 type=i32] [debug line = 53:7]
  %tmp_54 = and i32 %c, %d, !dbg !110             ; [#uses=1 type=i32] [debug line = 53:7]
  %tmp_55 = xor i32 %tmp_53, %tmp_54, !dbg !110   ; [#uses=1 type=i32] [debug line = 53:7]
  call void @llvm.dbg.value(metadata !{i32 %h}, i64 0, metadata !111), !dbg !112 ; [debug line = 54:7] [debug variable = h]
  call void @llvm.dbg.value(metadata !{i32 %g}, i64 0, metadata !113), !dbg !114 ; [debug line = 55:7] [debug variable = g]
  call void @llvm.dbg.value(metadata !{i32 %f}, i64 0, metadata !115), !dbg !116 ; [debug line = 56:7] [debug variable = f]
  %e = add i32 %t1, %d1, !dbg !117                ; [#uses=1 type=i32] [debug line = 57:7]
  call void @llvm.dbg.value(metadata !{i32 %e}, i64 0, metadata !118), !dbg !117 ; [debug line = 57:7] [debug variable = e]
  call void @llvm.dbg.value(metadata !{i32 %d}, i64 0, metadata !119), !dbg !120 ; [debug line = 58:7] [debug variable = d]
  call void @llvm.dbg.value(metadata !{i32 %c}, i64 0, metadata !121), !dbg !122 ; [debug line = 59:7] [debug variable = c]
  call void @llvm.dbg.value(metadata !{i32 %b}, i64 0, metadata !123), !dbg !124 ; [debug line = 60:7] [debug variable = b]
  %tmp13 = add i32 %tmp_55, %t1, !dbg !125        ; [#uses=1 type=i32] [debug line = 61:7]
  %a = add i32 %tmp13, %tmp_51, !dbg !125         ; [#uses=1 type=i32] [debug line = 61:7]
  call void @llvm.dbg.value(metadata !{i32 %a}, i64 0, metadata !126), !dbg !125 ; [debug line = 61:7] [debug variable = a]
  call void @llvm.dbg.value(metadata !{i7 %i_4}, i64 0, metadata !105), !dbg !106 ; [debug line = 50:24] [debug variable = i]
  br label %.preheader1, !dbg !106                ; [debug line = 50:24]

; <label>:5                                       ; preds = %.preheader1
  %ctx_state = add i32 %b, %ctx_state_0_read_1, !dbg !127 ; [#uses=1 type=i32] [debug line = 64:4]
  %ctx_state_1 = add i32 %c, %ctx_state_1_read_1, !dbg !128 ; [#uses=1 type=i32] [debug line = 65:4]
  %ctx_state_2 = add i32 %d, %ctx_state_2_read_1, !dbg !129 ; [#uses=1 type=i32] [debug line = 66:4]
  %ctx_state_3 = add i32 %d1, %ctx_state_3_read_1, !dbg !130 ; [#uses=1 type=i32] [debug line = 67:4]
  %ctx_state_4 = add i32 %f, %ctx_state_4_read_1, !dbg !131 ; [#uses=1 type=i32] [debug line = 68:4]
  %ctx_state_5 = add i32 %g, %ctx_state_5_read_1, !dbg !132 ; [#uses=1 type=i32] [debug line = 69:4]
  %ctx_state_6 = add i32 %h, %ctx_state_6_read_1, !dbg !133 ; [#uses=1 type=i32] [debug line = 70:4]
  %ctx_state_7 = add i32 %h1, %ctx_state_7_read_1, !dbg !134 ; [#uses=1 type=i32] [debug line = 71:4]
  %mrv = insertvalue { i32, i32, i32, i32, i32, i32, i32, i32 } undef, i32 %ctx_state, 0, !dbg !135 ; [#uses=1 type={ i32, i32, i32, i32, i32, i32, i32, i32 }] [debug line = 72:1]
  %mrv_1 = insertvalue { i32, i32, i32, i32, i32, i32, i32, i32 } %mrv, i32 %ctx_state_1, 1, !dbg !135 ; [#uses=1 type={ i32, i32, i32, i32, i32, i32, i32, i32 }] [debug line = 72:1]
  %mrv_2 = insertvalue { i32, i32, i32, i32, i32, i32, i32, i32 } %mrv_1, i32 %ctx_state_2, 2, !dbg !135 ; [#uses=1 type={ i32, i32, i32, i32, i32, i32, i32, i32 }] [debug line = 72:1]
  %mrv_3 = insertvalue { i32, i32, i32, i32, i32, i32, i32, i32 } %mrv_2, i32 %ctx_state_3, 3, !dbg !135 ; [#uses=1 type={ i32, i32, i32, i32, i32, i32, i32, i32 }] [debug line = 72:1]
  %mrv_4 = insertvalue { i32, i32, i32, i32, i32, i32, i32, i32 } %mrv_3, i32 %ctx_state_4, 4, !dbg !135 ; [#uses=1 type={ i32, i32, i32, i32, i32, i32, i32, i32 }] [debug line = 72:1]
  %mrv_5 = insertvalue { i32, i32, i32, i32, i32, i32, i32, i32 } %mrv_4, i32 %ctx_state_5, 5, !dbg !135 ; [#uses=1 type={ i32, i32, i32, i32, i32, i32, i32, i32 }] [debug line = 72:1]
  %mrv_6 = insertvalue { i32, i32, i32, i32, i32, i32, i32, i32 } %mrv_5, i32 %ctx_state_6, 6, !dbg !135 ; [#uses=1 type={ i32, i32, i32, i32, i32, i32, i32, i32 }] [debug line = 72:1]
  %mrv_7 = insertvalue { i32, i32, i32, i32, i32, i32, i32, i32 } %mrv_6, i32 %ctx_state_7, 7, !dbg !135 ; [#uses=1 type={ i32, i32, i32, i32, i32, i32, i32, i32 }] [debug line = 72:1]
  ret { i32, i32, i32, i32, i32, i32, i32, i32 } %mrv_7, !dbg !135 ; [debug line = 72:1]
}

; [#uses=1]
define internal fastcc void @sha256_final([64 x i8]* nocapture %ctx_data, i32 %ctx_datalen_read, i32 %ctx_bitlen_0_read, i32 %p_read3, i32 %p_read1, i32 %p_read2, i32 %p_read4, i32 %p_read5, i32 %p_read6, i32 %p_read7, i32 %p_read8, i32 %p_read9, [64 x i8]* nocapture %hash) {
  %p_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %p_read9) ; [#uses=2 type=i32]
  %p_read_6 = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %p_read8) ; [#uses=2 type=i32]
  %p_read_7 = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %p_read7) ; [#uses=2 type=i32]
  %p_read_8 = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %p_read6) ; [#uses=2 type=i32]
  %p_read_9 = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %p_read5) ; [#uses=2 type=i32]
  %p_read48 = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %p_read4) ; [#uses=2 type=i32]
  %p_read27 = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %p_read2) ; [#uses=2 type=i32]
  %p_read16 = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %p_read1) ; [#uses=2 type=i32]
  %p_read35 = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %p_read3) ; [#uses=2 type=i32]
  %ctx_bitlen_0_read_1 = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %ctx_bitlen_0_read) ; [#uses=5 type=i32]
  %ctx_datalen_read_2 = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %ctx_datalen_read) ; [#uses=6 type=i32]
  call void @llvm.dbg.value(metadata !{i32 %ctx_datalen_read_2}, i64 0, metadata !136), !dbg !139 ; [debug line = 105:31] [debug variable = ctx.datalen]
  call void @llvm.dbg.value(metadata !{[64 x i8]* %ctx_data}, i64 0, metadata !140), !dbg !139 ; [debug line = 105:31] [debug variable = ctx.data]
  call void @llvm.dbg.value(metadata !{i32 %ctx_datalen_read}, i64 0, metadata !136), !dbg !139 ; [debug line = 105:31] [debug variable = ctx.datalen]
  call void @llvm.dbg.value(metadata !{[64 x i8]* %hash}, i64 0, metadata !141), !dbg !142 ; [debug line = 105:66] [debug variable = hash]
  call void @llvm.dbg.value(metadata !{i32 %ctx_datalen_read}, i64 0, metadata !143), !dbg !145 ; [debug line = 109:2] [debug variable = i]
  %tmp = icmp ult i32 %ctx_datalen_read_2, 56, !dbg !146 ; [#uses=1 type=i1] [debug line = 112:2]
  %ctx_data_addr = getelementptr [64 x i8]* %ctx_data, i32 0, i32 %ctx_datalen_read_2, !dbg !147 ; [#uses=1 type=i8*] [debug line = 113:3]
  store i8 -128, i8* %ctx_data_addr, align 1, !dbg !147 ; [debug line = 113:3]
  br i1 %tmp, label %.preheader3.preheader, label %.preheader.preheader, !dbg !146 ; [debug line = 112:2]

.preheader3.preheader:                            ; preds = %0
  br label %.preheader3, !dbg !147                ; [debug line = 113:3]

.preheader.preheader:                             ; preds = %0
  br label %.preheader, !dbg !149                 ; [debug line = 118:3]

.preheader3:                                      ; preds = %1, %.preheader3.preheader
  %i_0_in = phi i32 [ %i, %1 ], [ %ctx_datalen_read_2, %.preheader3.preheader ] ; [#uses=2 type=i32]
  %i = add i32 %i_0_in, 1, !dbg !147              ; [#uses=2 type=i32] [debug line = 113:3]
  call void @llvm.dbg.value(metadata !{i32 %i}, i64 0, metadata !143), !dbg !147 ; [debug line = 113:3] [debug variable = i]
  %exitcond = icmp eq i32 %i_0_in, 55, !dbg !151  ; [#uses=1 type=i1] [debug line = 114:3]
  br i1 %exitcond, label %.loopexit.loopexit15, label %1, !dbg !151 ; [debug line = 114:3]

; <label>:1                                       ; preds = %.preheader3
  %ctx_data_addr_1 = getelementptr [64 x i8]* %ctx_data, i32 0, i32 %i, !dbg !152 ; [#uses=1 type=i8*] [debug line = 115:4]
  store i8 0, i8* %ctx_data_addr_1, align 1, !dbg !152 ; [debug line = 115:4]
  br label %.preheader3, !dbg !152                ; [debug line = 115:4]

.preheader:                                       ; preds = %2, %.preheader.preheader
  %i_1_in = phi i32 [ %i_1, %2 ], [ %ctx_datalen_read_2, %.preheader.preheader ] ; [#uses=1 type=i32]
  %i_1 = add i32 %i_1_in, 1, !dbg !149            ; [#uses=3 type=i32] [debug line = 118:3]
  call void @llvm.dbg.value(metadata !{i32 %i_1}, i64 0, metadata !143), !dbg !149 ; [debug line = 118:3] [debug variable = i]
  %tmp_66 = call i26 @_ssdm_op_PartSelect.i26.i32.i32.i32(i32 %i_1, i32 6, i32 31), !dbg !153 ; [#uses=1 type=i26] [debug line = 119:3]
  %icmp = icmp eq i26 %tmp_66, 0, !dbg !153       ; [#uses=1 type=i1] [debug line = 119:3]
  br i1 %icmp, label %2, label %3, !dbg !153      ; [debug line = 119:3]

; <label>:2                                       ; preds = %.preheader
  %ctx_data_addr_2 = getelementptr [64 x i8]* %ctx_data, i32 0, i32 %i_1, !dbg !154 ; [#uses=1 type=i8*] [debug line = 120:4]
  store i8 0, i8* %ctx_data_addr_2, align 1, !dbg !154 ; [debug line = 120:4]
  br label %.preheader, !dbg !154                 ; [debug line = 120:4]

; <label>:3                                       ; preds = %.preheader
  %call_ret1 = call fastcc { i32, i32, i32, i32, i32, i32, i32, i32 } @sha256_transform(i32 %p_read16, i32 %p_read27, i32 %p_read48, i32 %p_read_9, i32 %p_read_8, i32 %p_read_7, i32 %p_read_6, i32 %p_read, [64 x i8]* %ctx_data), !dbg !155 ; [#uses=8 type={ i32, i32, i32, i32, i32, i32, i32, i32 }] [debug line = 121:3]
  %ctx_state_0_ret4 = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32 } %call_ret1, 0, !dbg !155 ; [#uses=1 type=i32] [debug line = 121:3]
  %ctx_state_1_ret5 = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32 } %call_ret1, 1, !dbg !155 ; [#uses=1 type=i32] [debug line = 121:3]
  %ctx_state_2_ret6 = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32 } %call_ret1, 2, !dbg !155 ; [#uses=1 type=i32] [debug line = 121:3]
  %ctx_state_3_ret7 = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32 } %call_ret1, 3, !dbg !155 ; [#uses=1 type=i32] [debug line = 121:3]
  %ctx_state_4_ret8 = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32 } %call_ret1, 4, !dbg !155 ; [#uses=1 type=i32] [debug line = 121:3]
  %ctx_state_5_ret9 = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32 } %call_ret1, 5, !dbg !155 ; [#uses=1 type=i32] [debug line = 121:3]
  %ctx_state_6_ret1 = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32 } %call_ret1, 6, !dbg !155 ; [#uses=1 type=i32] [debug line = 121:3]
  %ctx_state_7_ret1 = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32 } %call_ret1, 7, !dbg !155 ; [#uses=1 type=i32] [debug line = 121:3]
  br label %4, !dbg !156                          ; [debug line = 122:8]

; <label>:4                                       ; preds = %5, %3
  %i_2 = phi i6 [ 0, %3 ], [ %i_5, %5 ]           ; [#uses=3 type=i6]
  %i_2_cast5 = zext i6 %i_2 to i32, !dbg !156     ; [#uses=1 type=i32] [debug line = 122:8]
  %tmp_s = icmp eq i6 %i_2, -8, !dbg !156         ; [#uses=1 type=i1] [debug line = 122:8]
  call void (...)* @_ssdm_op_SpecLoopTripCount(i64 56, i64 56, i64 56)
  %i_5 = add i6 %i_2, 1, !dbg !158                ; [#uses=1 type=i6] [debug line = 122:23]
  br i1 %tmp_s, label %.loopexit.loopexit, label %5, !dbg !156 ; [debug line = 122:8]

; <label>:5                                       ; preds = %4
  %ctx_data_addr_6 = getelementptr [64 x i8]* %ctx_data, i32 0, i32 %i_2_cast5, !dbg !159 ; [#uses=1 type=i8*] [debug line = 124:2]
  store i8 0, i8* %ctx_data_addr_6, align 1, !dbg !159 ; [debug line = 124:2]
  call void @llvm.dbg.value(metadata !{i6 %i_5}, i64 0, metadata !143), !dbg !158 ; [debug line = 122:23] [debug variable = i]
  br label %4, !dbg !158                          ; [debug line = 122:23]

.loopexit.loopexit:                               ; preds = %4
  br label %.loopexit

.loopexit.loopexit15:                             ; preds = %.preheader3
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit15, %.loopexit.loopexit
  %ctx_state = phi i32 [ %ctx_state_0_ret4, %.loopexit.loopexit ], [ %p_read16, %.loopexit.loopexit15 ] ; [#uses=1 type=i32]
  %ctx_state_1 = phi i32 [ %ctx_state_1_ret5, %.loopexit.loopexit ], [ %p_read27, %.loopexit.loopexit15 ] ; [#uses=1 type=i32]
  %ctx_state_2 = phi i32 [ %ctx_state_2_ret6, %.loopexit.loopexit ], [ %p_read48, %.loopexit.loopexit15 ] ; [#uses=1 type=i32]
  %ctx_state_3 = phi i32 [ %ctx_state_3_ret7, %.loopexit.loopexit ], [ %p_read_9, %.loopexit.loopexit15 ] ; [#uses=1 type=i32]
  %ctx_state_4 = phi i32 [ %ctx_state_4_ret8, %.loopexit.loopexit ], [ %p_read_8, %.loopexit.loopexit15 ] ; [#uses=1 type=i32]
  %ctx_state_5 = phi i32 [ %ctx_state_5_ret9, %.loopexit.loopexit ], [ %p_read_7, %.loopexit.loopexit15 ] ; [#uses=1 type=i32]
  %ctx_state_6 = phi i32 [ %ctx_state_6_ret1, %.loopexit.loopexit ], [ %p_read_6, %.loopexit.loopexit15 ] ; [#uses=1 type=i32]
  %ctx_state_7 = phi i32 [ %ctx_state_7_ret1, %.loopexit.loopexit ], [ %p_read, %.loopexit.loopexit15 ] ; [#uses=1 type=i32]
  %tmp_74 = trunc i32 %ctx_datalen_read_2 to i6   ; [#uses=1 type=i6]
  %tmp_56 = call i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6 %tmp_74, i3 0), !dbg !161 ; [#uses=3 type=i9] [debug line = 130:4]
  %tmp_74_cast = zext i9 %tmp_56 to i32, !dbg !161 ; [#uses=2 type=i32] [debug line = 130:4]
  %tmp_57 = xor i32 %tmp_74_cast, -1, !dbg !161   ; [#uses=1 type=i32] [debug line = 130:4]
  %tmp_58 = icmp ugt i32 %ctx_bitlen_0_read_1, %tmp_57, !dbg !161 ; [#uses=1 type=i1] [debug line = 130:4]
  %tmp_59 = add i32 1, %p_read35, !dbg !162       ; [#uses=1 type=i32] [debug line = 130:58]
  %tmp_86_read3 = select i1 %tmp_58, i32 %tmp_59, i32 %p_read35, !dbg !161 ; [#uses=4 type=i32] [debug line = 130:4]
  %tmp_76 = trunc i32 %ctx_datalen_read_2 to i5   ; [#uses=1 type=i5]
  %tmp_12 = call i8 @_ssdm_op_BitConcatenate.i8.i5.i3(i5 %tmp_76, i3 0) ; [#uses=1 type=i8]
  %tmp_78 = trunc i32 %ctx_bitlen_0_read_1 to i8  ; [#uses=1 type=i8]
  %tmp_14 = zext i9 %tmp_56 to i16                ; [#uses=1 type=i16]
  %tmp_80 = trunc i32 %ctx_bitlen_0_read_1 to i16 ; [#uses=1 type=i16]
  %tmp_16 = zext i9 %tmp_56 to i24                ; [#uses=1 type=i24]
  %tmp_82 = trunc i32 %ctx_bitlen_0_read_1 to i24 ; [#uses=1 type=i24]
  %ctx_bitlen = add i32 %ctx_bitlen_0_read_1, %tmp_74_cast, !dbg !163 ; [#uses=1 type=i32] [debug line = 130:76]
  %ctx_bitlen_cast3 = add i24 %tmp_16, %tmp_82, !dbg !164 ; [#uses=1 type=i24] [debug line = 131:4]
  %ctx_bitlen_cast = add i16 %tmp_14, %tmp_80, !dbg !164 ; [#uses=1 type=i16] [debug line = 131:4]
  %tmp_60 = add i8 %tmp_78, %tmp_12, !dbg !164    ; [#uses=1 type=i8] [debug line = 131:4]
  %ctx_data_addr_3 = getelementptr [64 x i8]* %ctx_data, i32 0, i32 63, !dbg !164 ; [#uses=1 type=i8*] [debug line = 131:4]
  store i8 %tmp_60, i8* %ctx_data_addr_3, align 1, !dbg !164 ; [debug line = 131:4]
  %tmp_61 = call i8 @_ssdm_op_PartSelect.i8.i16.i32.i32(i16 %ctx_bitlen_cast, i32 8, i32 15), !dbg !165 ; [#uses=1 type=i8] [debug line = 132:4]
  %ctx_data_addr_4 = getelementptr [64 x i8]* %ctx_data, i32 0, i32 62, !dbg !165 ; [#uses=1 type=i8*] [debug line = 132:4]
  store i8 %tmp_61, i8* %ctx_data_addr_4, align 1, !dbg !165 ; [debug line = 132:4]
  %tmp_62 = call i8 @_ssdm_op_PartSelect.i8.i24.i32.i32(i24 %ctx_bitlen_cast3, i32 16, i32 23), !dbg !166 ; [#uses=1 type=i8] [debug line = 133:4]
  %ctx_data_addr_5 = getelementptr [64 x i8]* %ctx_data, i32 0, i32 61, !dbg !166 ; [#uses=1 type=i8*] [debug line = 133:4]
  store i8 %tmp_62, i8* %ctx_data_addr_5, align 1, !dbg !166 ; [debug line = 133:4]
  %tmp_63 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %ctx_bitlen, i32 24, i32 31), !dbg !167 ; [#uses=1 type=i8] [debug line = 134:4]
  %ctx_data_addr_7 = getelementptr [64 x i8]* %ctx_data, i32 0, i32 60, !dbg !167 ; [#uses=1 type=i8*] [debug line = 134:4]
  store i8 %tmp_63, i8* %ctx_data_addr_7, align 1, !dbg !167 ; [debug line = 134:4]
  %tmp_84 = trunc i32 %tmp_86_read3 to i8, !dbg !168 ; [#uses=1 type=i8] [debug line = 135:4]
  %ctx_data_addr_8 = getelementptr [64 x i8]* %ctx_data, i32 0, i32 59, !dbg !168 ; [#uses=1 type=i8*] [debug line = 135:4]
  store i8 %tmp_84, i8* %ctx_data_addr_8, align 1, !dbg !168 ; [debug line = 135:4]
  %tmp_64 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %tmp_86_read3, i32 8, i32 15), !dbg !169 ; [#uses=1 type=i8] [debug line = 136:4]
  %ctx_data_addr_9 = getelementptr [64 x i8]* %ctx_data, i32 0, i32 58, !dbg !169 ; [#uses=1 type=i8*] [debug line = 136:4]
  store i8 %tmp_64, i8* %ctx_data_addr_9, align 1, !dbg !169 ; [debug line = 136:4]
  %tmp_65 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %tmp_86_read3, i32 16, i32 23), !dbg !170 ; [#uses=1 type=i8] [debug line = 137:4]
  %ctx_data_addr_10 = getelementptr [64 x i8]* %ctx_data, i32 0, i32 57, !dbg !170 ; [#uses=1 type=i8*] [debug line = 137:4]
  store i8 %tmp_65, i8* %ctx_data_addr_10, align 1, !dbg !170 ; [debug line = 137:4]
  %tmp_67 = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %tmp_86_read3, i32 24, i32 31), !dbg !171 ; [#uses=1 type=i8] [debug line = 138:4]
  %ctx_data_addr_11 = getelementptr [64 x i8]* %ctx_data, i32 0, i32 56, !dbg !171 ; [#uses=1 type=i8*] [debug line = 138:4]
  store i8 %tmp_67, i8* %ctx_data_addr_11, align 1, !dbg !171 ; [debug line = 138:4]
  %call_ret = call fastcc { i32, i32, i32, i32, i32, i32, i32, i32 } @sha256_transform(i32 %ctx_state, i32 %ctx_state_1, i32 %ctx_state_2, i32 %ctx_state_3, i32 %ctx_state_4, i32 %ctx_state_5, i32 %ctx_state_6, i32 %ctx_state_7, [64 x i8]* %ctx_data), !dbg !172 ; [#uses=8 type={ i32, i32, i32, i32, i32, i32, i32, i32 }] [debug line = 139:4]
  %ctx_state_0_ret = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32 } %call_ret, 0, !dbg !172 ; [#uses=1 type=i32] [debug line = 139:4]
  %ctx_state_1_ret = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32 } %call_ret, 1, !dbg !172 ; [#uses=1 type=i32] [debug line = 139:4]
  %ctx_state_2_ret = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32 } %call_ret, 2, !dbg !172 ; [#uses=1 type=i32] [debug line = 139:4]
  %ctx_state_3_ret = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32 } %call_ret, 3, !dbg !172 ; [#uses=1 type=i32] [debug line = 139:4]
  %ctx_state_4_ret = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32 } %call_ret, 4, !dbg !172 ; [#uses=1 type=i32] [debug line = 139:4]
  %ctx_state_5_ret = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32 } %call_ret, 5, !dbg !172 ; [#uses=1 type=i32] [debug line = 139:4]
  %ctx_state_6_ret = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32 } %call_ret, 6, !dbg !172 ; [#uses=1 type=i32] [debug line = 139:4]
  %ctx_state_7_ret = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32 } %call_ret, 7, !dbg !172 ; [#uses=1 type=i32] [debug line = 139:4]
  br label %6, !dbg !173                          ; [debug line = 143:9]

; <label>:6                                       ; preds = %7, %.loopexit
  %i_3 = phi i3 [ 0, %.loopexit ], [ %i_6, %7 ]   ; [#uses=8 type=i3]
  %i_3_cast2 = zext i3 %i_3 to i32, !dbg !173     ; [#uses=1 type=i32] [debug line = 143:9]
  %i_3_cast1 = zext i3 %i_3 to i5, !dbg !173      ; [#uses=1 type=i5] [debug line = 143:9]
  %tmp_68 = icmp eq i3 %i_3, -4, !dbg !173        ; [#uses=1 type=i1] [debug line = 143:9]
  call void (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  %i_6 = add i3 %i_3, 1, !dbg !175                ; [#uses=1 type=i3] [debug line = 143:21]
  br i1 %tmp_68, label %8, label %7, !dbg !173    ; [debug line = 143:9]

; <label>:7                                       ; preds = %6
  %tmp_86 = trunc i3 %i_3 to i2                   ; [#uses=1 type=i2]
  %tmp_69 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 %tmp_86, i3 0), !dbg !176 ; [#uses=1 type=i5] [debug line = 145:2]
  %tmp_70 = sub i5 -8, %tmp_69, !dbg !176         ; [#uses=1 type=i5] [debug line = 145:2]
  %tmp_94_cast = zext i5 %tmp_70 to i32, !dbg !176 ; [#uses=8 type=i32] [debug line = 145:2]
  %tmp_71 = lshr i32 %ctx_state_0_ret, %tmp_94_cast, !dbg !176 ; [#uses=1 type=i32] [debug line = 145:2]
  %tmp_88 = trunc i32 %tmp_71 to i8, !dbg !176    ; [#uses=1 type=i8] [debug line = 145:2]
  %hash_addr = getelementptr [64 x i8]* %hash, i32 0, i32 %i_3_cast2, !dbg !176 ; [#uses=1 type=i8*] [debug line = 145:2]
  store i8 %tmp_88, i8* %hash_addr, align 1, !dbg !176 ; [debug line = 145:2]
  %tmp_72 = lshr i32 %ctx_state_1_ret, %tmp_94_cast, !dbg !178 ; [#uses=1 type=i32] [debug line = 146:7]
  %tmp_89 = trunc i32 %tmp_72 to i8, !dbg !178    ; [#uses=1 type=i8] [debug line = 146:7]
  %sum2 = xor i3 %i_3, -4                         ; [#uses=3 type=i3]
  %sum2_cast = zext i3 %sum2 to i32               ; [#uses=1 type=i32]
  %hash_addr_1 = getelementptr [64 x i8]* %hash, i32 0, i32 %sum2_cast, !dbg !178 ; [#uses=1 type=i8*] [debug line = 146:7]
  store i8 %tmp_89, i8* %hash_addr_1, align 1, !dbg !178 ; [debug line = 146:7]
  %tmp_73 = lshr i32 %ctx_state_2_ret, %tmp_94_cast, !dbg !179 ; [#uses=1 type=i32] [debug line = 147:7]
  %tmp_90 = trunc i32 %tmp_73 to i8, !dbg !179    ; [#uses=1 type=i8] [debug line = 147:7]
  %sum1 = call i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1 true, i3 %i_3) ; [#uses=2 type=i4]
  %sum4_cast = zext i4 %sum1 to i32               ; [#uses=1 type=i32]
  %hash_addr_2 = getelementptr [64 x i8]* %hash, i32 0, i32 %sum4_cast, !dbg !179 ; [#uses=1 type=i8*] [debug line = 147:7]
  store i8 %tmp_90, i8* %hash_addr_2, align 1, !dbg !179 ; [debug line = 147:7]
  %tmp_75 = lshr i32 %ctx_state_3_ret, %tmp_94_cast, !dbg !180 ; [#uses=1 type=i32] [debug line = 148:7]
  %tmp_91 = trunc i32 %tmp_75 to i8, !dbg !180    ; [#uses=1 type=i8] [debug line = 148:7]
  %sum6_cast8 = sext i3 %sum2 to i4               ; [#uses=1 type=i4]
  %sum6_cast = zext i4 %sum6_cast8 to i32         ; [#uses=1 type=i32]
  %hash_addr_3 = getelementptr [64 x i8]* %hash, i32 0, i32 %sum6_cast, !dbg !180 ; [#uses=1 type=i8*] [debug line = 148:7]
  store i8 %tmp_91, i8* %hash_addr_3, align 1, !dbg !180 ; [debug line = 148:7]
  %tmp_77 = lshr i32 %ctx_state_4_ret, %tmp_94_cast, !dbg !181 ; [#uses=1 type=i32] [debug line = 149:7]
  %tmp_92 = trunc i32 %tmp_77 to i8, !dbg !181    ; [#uses=1 type=i8] [debug line = 149:7]
  %sum4 = call i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2 -2, i3 %i_3) ; [#uses=1 type=i5]
  %sum8_cast = zext i5 %sum4 to i32               ; [#uses=1 type=i32]
  %hash_addr_4 = getelementptr [64 x i8]* %hash, i32 0, i32 %sum8_cast, !dbg !181 ; [#uses=1 type=i8*] [debug line = 149:7]
  store i8 %tmp_92, i8* %hash_addr_4, align 1, !dbg !181 ; [debug line = 149:7]
  %tmp_79 = lshr i32 %ctx_state_5_ret, %tmp_94_cast, !dbg !182 ; [#uses=1 type=i32] [debug line = 150:7]
  %tmp_93 = trunc i32 %tmp_79 to i8, !dbg !182    ; [#uses=1 type=i8] [debug line = 150:7]
  %sum = add i5 -12, %i_3_cast1                   ; [#uses=1 type=i5]
  %sum_cast = zext i5 %sum to i32                 ; [#uses=1 type=i32]
  %hash_addr_5 = getelementptr [64 x i8]* %hash, i32 0, i32 %sum_cast, !dbg !182 ; [#uses=1 type=i8*] [debug line = 150:7]
  store i8 %tmp_93, i8* %hash_addr_5, align 1, !dbg !182 ; [debug line = 150:7]
  %tmp_81 = lshr i32 %ctx_state_6_ret, %tmp_94_cast, !dbg !183 ; [#uses=1 type=i32] [debug line = 151:7]
  %tmp_94 = trunc i32 %tmp_81 to i8, !dbg !183    ; [#uses=1 type=i8] [debug line = 151:7]
  %sum1_cast7 = sext i4 %sum1 to i5               ; [#uses=1 type=i5]
  %sum1_cast = zext i5 %sum1_cast7 to i32         ; [#uses=1 type=i32]
  %hash_addr_6 = getelementptr [64 x i8]* %hash, i32 0, i32 %sum1_cast, !dbg !183 ; [#uses=1 type=i8*] [debug line = 151:7]
  store i8 %tmp_94, i8* %hash_addr_6, align 1, !dbg !183 ; [debug line = 151:7]
  %tmp_83 = lshr i32 %ctx_state_7_ret, %tmp_94_cast, !dbg !184 ; [#uses=1 type=i32] [debug line = 152:7]
  %tmp_95 = trunc i32 %tmp_83 to i8, !dbg !184    ; [#uses=1 type=i8] [debug line = 152:7]
  %sum3_cast6 = sext i3 %sum2 to i5               ; [#uses=1 type=i5]
  %sum3_cast = zext i5 %sum3_cast6 to i32         ; [#uses=1 type=i32]
  %hash_addr_7 = getelementptr [64 x i8]* %hash, i32 0, i32 %sum3_cast, !dbg !184 ; [#uses=1 type=i8*] [debug line = 152:7]
  store i8 %tmp_95, i8* %hash_addr_7, align 1, !dbg !184 ; [debug line = 152:7]
  call void @llvm.dbg.value(metadata !{i3 %i_6}, i64 0, metadata !143), !dbg !175 ; [debug line = 143:21] [debug variable = i]
  br label %6, !dbg !175                          ; [debug line = 143:21]

; <label>:8                                       ; preds = %6
  ret void
}

; [#uses=0]
define void @sha256([256 x i8]* %data, i32 %base_offset, i32 %bytes, [32 x i8]* %digest) nounwind {
  %n = alloca i32                                 ; [#uses=4 type=i32*]
  call void @llvm.dbg.declare(metadata !{i32* %n}, metadata !185) ; [debug variable = bytes]
  %sha256ctx_datalen = alloca i32                 ; [#uses=6 type=i32*]
  call void @llvm.dbg.declare(metadata !{i32* %sha256ctx_datalen}, metadata !190) ; [debug variable = sha256ctx.datalen]
  %sha256ctx_bitlen_0_2 = alloca i32              ; [#uses=6 type=i32*]
  call void @llvm.dbg.declare(metadata !{i32* %sha256ctx_bitlen_0_2}, metadata !193) ; [debug variable = sha256ctx.bitlen[0]]
  %sha256ctx_bitlen_1_2 = alloca i32              ; [#uses=6 type=i32*]
  call void @llvm.dbg.declare(metadata !{i32* %sha256ctx_bitlen_1_2}, metadata !196) ; [debug variable = sha256ctx.bitlen[1]]
  %sha256ctx_state_0_2 = alloca i32               ; [#uses=6 type=i32*]
  call void @llvm.dbg.declare(metadata !{i32* %sha256ctx_state_0_2}, metadata !197) ; [debug variable = sha256ctx.state[0]]
  %sha256ctx_state_1_2 = alloca i32               ; [#uses=6 type=i32*]
  call void @llvm.dbg.declare(metadata !{i32* %sha256ctx_state_1_2}, metadata !198) ; [debug variable = sha256ctx.state[1]]
  %sha256ctx_state_2_2 = alloca i32               ; [#uses=6 type=i32*]
  call void @llvm.dbg.declare(metadata !{i32* %sha256ctx_state_2_2}, metadata !199) ; [debug variable = sha256ctx.state[2]]
  %sha256ctx_state_3_2 = alloca i32               ; [#uses=6 type=i32*]
  call void @llvm.dbg.declare(metadata !{i32* %sha256ctx_state_3_2}, metadata !200) ; [debug variable = sha256ctx.state[3]]
  %sha256ctx_state_4_2 = alloca i32               ; [#uses=6 type=i32*]
  call void @llvm.dbg.declare(metadata !{i32* %sha256ctx_state_4_2}, metadata !201) ; [debug variable = sha256ctx.state[4]]
  %sha256ctx_state_5_2 = alloca i32               ; [#uses=6 type=i32*]
  call void @llvm.dbg.declare(metadata !{i32* %sha256ctx_state_5_2}, metadata !202) ; [debug variable = sha256ctx.state[5]]
  %sha256ctx_state_6_2 = alloca i32               ; [#uses=6 type=i32*]
  call void @llvm.dbg.declare(metadata !{i32* %sha256ctx_state_6_2}, metadata !203) ; [debug variable = sha256ctx.state[6]]
  %sha256ctx_state_7_2 = alloca i32               ; [#uses=6 type=i32*]
  call void @llvm.dbg.declare(metadata !{i32* %sha256ctx_state_7_2}, metadata !204) ; [debug variable = sha256ctx.state[7]]
  %seg_offset = alloca i32                        ; [#uses=5 type=i32*]
  call void @llvm.dbg.declare(metadata !{i32* %seg_offset}, metadata !205) ; [debug variable = seg_offset]
  call void (...)* @_ssdm_op_SpecBitsMap([256 x i8]* %data) nounwind, !map !206
  call void (...)* @_ssdm_op_SpecBitsMap(i32 %base_offset) nounwind, !map !212
  call void (...)* @_ssdm_op_SpecBitsMap(i32 %bytes) nounwind, !map !218
  call void (...)* @_ssdm_op_SpecBitsMap([32 x i8]* %digest) nounwind, !map !222
  call void (...)* @_ssdm_op_SpecTopModule([7 x i8]* @sha256_str) nounwind
  %bytes_read = call i32 @_ssdm_op_Read.s_axilite.i32(i32 %bytes) nounwind ; [#uses=1 type=i32]
  call void @llvm.dbg.value(metadata !{i32 %bytes_read}, i64 0, metadata !185), !dbg !228 ; [debug line = 11:18] [debug variable = bytes]
  %base_offset_read = call i32 @_ssdm_op_Read.s_axilite.i32(i32 %base_offset) nounwind ; [#uses=1 type=i32]
  call void @llvm.dbg.value(metadata !{i32 %base_offset_read}, i64 0, metadata !229), !dbg !230 ; [debug line = 10:18] [debug variable = base_offset]
  %seg_buf = alloca [64 x i8], align 1            ; [#uses=6 type=[64 x i8]*]
  %sha256ctx_data = alloca [64 x i8], align 1     ; [#uses=3 type=[64 x i8]*]
  call void @llvm.dbg.value(metadata !{[256 x i8]* %data}, i64 0, metadata !231), !dbg !235 ; [debug line = 9:28] [debug variable = data]
  call void @llvm.dbg.value(metadata !{i32 %base_offset}, i64 0, metadata !229), !dbg !230 ; [debug line = 10:18] [debug variable = base_offset]
  call void @llvm.dbg.value(metadata !{i32 %bytes}, i64 0, metadata !185), !dbg !228 ; [debug line = 11:18] [debug variable = bytes]
  call void @llvm.dbg.value(metadata !{[32 x i8]* %digest}, i64 0, metadata !236), !dbg !240 ; [debug line = 12:19] [debug variable = digest]
  %empty = call i32 (...)* @_ssdm_op_SpecMemCore([256 x i8]* %data, [1 x i8]* @p_str, [7 x i8]* @RAM_1P_str, [1 x i8]* @p_str, i32 -1, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str) nounwind ; [#uses=0 type=i32]
  call void (...)* @_ssdm_op_SpecInterface([256 x i8]* %data, [10 x i8]* @p_str7, i32 0, i32 0, [1 x i8]* @p_str1, i32 0, i32 0, [1 x i8]* @p_str1, [1 x i8]* @p_str1, [1 x i8]* @p_str1, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str1, [1 x i8]* @p_str1) nounwind
  %empty_9 = call i32 (...)* @_ssdm_op_SpecMemCore([32 x i8]* %digest, [1 x i8]* @p_str, [7 x i8]* @RAM_1P_str, [1 x i8]* @p_str, i32 -1, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str) nounwind ; [#uses=0 type=i32]
  call void (...)* @_ssdm_op_SpecInterface([32 x i8]* %digest, [10 x i8]* @p_str7, i32 0, i32 0, [1 x i8]* @p_str1, i32 0, i32 0, [1 x i8]* @p_str1, [1 x i8]* @p_str1, [1 x i8]* @p_str1, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str1, [1 x i8]* @p_str1) nounwind
  call void (...)* @_ssdm_op_SpecInterface(i32 %base_offset, [10 x i8]* @p_str7, i32 0, i32 0, [1 x i8]* @p_str1, i32 0, i32 0, [1 x i8]* @p_str1, [1 x i8]* @p_str1, [1 x i8]* @p_str1, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str1, [1 x i8]* @p_str1) nounwind, !dbg !241 ; [debug line = 18:1]
  call void (...)* @_ssdm_op_SpecInterface(i32 %bytes, [10 x i8]* @p_str7, i32 0, i32 0, [1 x i8]* @p_str1, i32 0, i32 0, [1 x i8]* @p_str1, [1 x i8]* @p_str1, [1 x i8]* @p_str1, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str1, [1 x i8]* @p_str1) nounwind, !dbg !242 ; [debug line = 19:1]
  call void (...)* @_ssdm_op_SpecInterface(i32 0, [10 x i8]* @p_str7, i32 0, i32 0, [1 x i8]* @p_str1, i32 0, i32 0, [1 x i8]* @p_str1, [1 x i8]* @p_str1, [1 x i8]* @p_str1, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str1, [1 x i8]* @p_str1) nounwind, !dbg !243 ; [debug line = 20:1]
  call void @llvm.dbg.declare(metadata !{[64 x i8]* %seg_buf}, metadata !244), !dbg !245 ; [debug line = 23:16] [debug variable = seg_buf]
  call void @llvm.dbg.value(metadata !{i32 %bytes}, i64 0, metadata !246), !dbg !247 ; [debug line = 26:24] [debug variable = n]
  call void @llvm.dbg.declare(metadata !{[64 x i8]* %sha256ctx_data}, metadata !248), !dbg !249 ; [debug line = 29:13] [debug variable = sha256ctx.data]
  %tmp_96 = trunc i32 %base_offset_read to i10    ; [#uses=2 type=i10]
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
  store i32 %bytes_read, i32* %n, !dbg !228       ; [debug line = 11:18]
  br label %1, !dbg !250                          ; [debug line = 33:2]

; <label>:1                                       ; preds = %7, %0
  %n_load = load i32* %n, !dbg !251               ; [#uses=5 type=i32] [debug line = 40:4]
  %tmp = icmp eq i32 %n_load, 0, !dbg !250        ; [#uses=1 type=i1] [debug line = 33:2]
  br i1 %tmp, label %8, label %2, !dbg !250       ; [debug line = 33:2]

; <label>:2                                       ; preds = %1
  %tmp_14 = call i32 (...)* @_ssdm_op_SpecRegionBegin([12 x i8]* @p_str8) nounwind, !dbg !254 ; [#uses=1 type=i32] [debug line = 34:3]
  call void (...)* @_ssdm_op_SpecLoopTripCount(i32 12, i32 100, i32 56, [1 x i8]* @p_str1) nounwind, !dbg !255 ; [debug line = 35:1]
  %tmp_97 = call i26 @_ssdm_op_PartSelect.i26.i32.i32.i32(i32 %n_load, i32 6, i32 31), !dbg !256 ; [#uses=1 type=i26] [debug line = 36:2]
  %icmp = icmp eq i26 %tmp_97, 0, !dbg !256       ; [#uses=1 type=i1] [debug line = 36:2]
  br i1 %icmp, label %.preheader.preheader, label %.preheader6.preheader, !dbg !256 ; [debug line = 36:2]

.preheader6.preheader:                            ; preds = %2
  br label %.preheader6, !dbg !257                ; [debug line = 38:9]

.preheader.preheader:                             ; preds = %2
  br label %.preheader, !dbg !259                 ; [debug line = 46:9]

.preheader6:                                      ; preds = %3, %.preheader6.preheader
  %i9 = phi i7 [ %i_7, %3 ], [ 0, %.preheader6.preheader ] ; [#uses=4 type=i7]
  %i9_cast6 = zext i7 %i9 to i10, !dbg !257       ; [#uses=1 type=i10] [debug line = 38:9]
  %i9_cast5 = zext i7 %i9 to i32, !dbg !257       ; [#uses=1 type=i32] [debug line = 38:9]
  %exitcond5 = icmp eq i7 %i9, -64, !dbg !257     ; [#uses=1 type=i1] [debug line = 38:9]
  call void (...)* @_ssdm_op_SpecLoopTripCount(i64 64, i64 64, i64 64)
  %i_7 = add i7 %i9, 1, !dbg !262                 ; [#uses=1 type=i7] [debug line = 38:20]
  br i1 %exitcond5, label %4, label %3, !dbg !257 ; [debug line = 38:9]

; <label>:3                                       ; preds = %.preheader6
  %seg_offset_load_2 = load i32* %seg_offset, !dbg !250 ; [#uses=1 type=i32] [debug line = 33:2]
  %tmp1 = add i10 %tmp_96, %i9_cast6              ; [#uses=1 type=i10]
  %tmp_99 = trunc i32 %seg_offset_load_2 to i10, !dbg !250 ; [#uses=1 type=i10] [debug line = 33:2]
  %sum = add i10 %tmp_99, %tmp1                   ; [#uses=1 type=i10]
  %sum_cast = zext i10 %sum to i32                ; [#uses=1 type=i32]
  %data_addr = getelementptr [256 x i8]* %data, i32 0, i32 %sum_cast, !dbg !263 ; [#uses=1 type=i8*] [debug line = 39:5]
  %data_load = load i8* %data_addr, align 1, !dbg !263 ; [#uses=1 type=i8] [debug line = 39:5]
  %seg_buf_addr_1 = getelementptr inbounds [64 x i8]* %seg_buf, i32 0, i32 %i9_cast5, !dbg !263 ; [#uses=1 type=i8*] [debug line = 39:5]
  store i8 %data_load, i8* %seg_buf_addr_1, align 1, !dbg !263 ; [debug line = 39:5]
  call void @llvm.dbg.value(metadata !{i7 %i_7}, i64 0, metadata !264), !dbg !262 ; [debug line = 38:20] [debug variable = i]
  br label %.preheader6, !dbg !262                ; [debug line = 38:20]

; <label>:4                                       ; preds = %.preheader6
  %sha256ctx_datalen_lo = load i32* %sha256ctx_datalen, !dbg !266 ; [#uses=1 type=i32] [debug line = 42:4]
  %sha256ctx_bitlen_0_s = load i32* %sha256ctx_bitlen_0_2, !dbg !266 ; [#uses=1 type=i32] [debug line = 42:4]
  %sha256ctx_bitlen_1_s = load i32* %sha256ctx_bitlen_1_2, !dbg !266 ; [#uses=1 type=i32] [debug line = 42:4]
  %sha256ctx_state_0_2_1 = load i32* %sha256ctx_state_0_2, !dbg !266 ; [#uses=1 type=i32] [debug line = 42:4]
  %sha256ctx_state_1_2_1 = load i32* %sha256ctx_state_1_2, !dbg !266 ; [#uses=1 type=i32] [debug line = 42:4]
  %sha256ctx_state_2_2_1 = load i32* %sha256ctx_state_2_2, !dbg !266 ; [#uses=1 type=i32] [debug line = 42:4]
  %sha256ctx_state_3_2_1 = load i32* %sha256ctx_state_3_2, !dbg !266 ; [#uses=1 type=i32] [debug line = 42:4]
  %sha256ctx_state_4_2_1 = load i32* %sha256ctx_state_4_2, !dbg !266 ; [#uses=1 type=i32] [debug line = 42:4]
  %sha256ctx_state_5_2_1 = load i32* %sha256ctx_state_5_2, !dbg !266 ; [#uses=1 type=i32] [debug line = 42:4]
  %sha256ctx_state_6_2_1 = load i32* %sha256ctx_state_6_2, !dbg !266 ; [#uses=1 type=i32] [debug line = 42:4]
  %sha256ctx_state_7_2_1 = load i32* %sha256ctx_state_7_2, !dbg !266 ; [#uses=1 type=i32] [debug line = 42:4]
  %seg_offset_load = load i32* %seg_offset, !dbg !267 ; [#uses=1 type=i32] [debug line = 41:4]
  %n_1 = add i32 %n_load, -64, !dbg !251          ; [#uses=1 type=i32] [debug line = 40:4]
  call void @llvm.dbg.value(metadata !{i32 %n_1}, i64 0, metadata !246), !dbg !251 ; [debug line = 40:4] [debug variable = n]
  %seg_offset_1 = add i32 %seg_offset_load, 64, !dbg !267 ; [#uses=1 type=i32] [debug line = 41:4]
  call void @llvm.dbg.value(metadata !{i32 %seg_offset_1}, i64 0, metadata !205), !dbg !267 ; [debug line = 41:4] [debug variable = seg_offset]
  %call_ret = call fastcc { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } @sha256_update([64 x i8]* %sha256ctx_data, i32 %sha256ctx_datalen_lo, i32 %sha256ctx_bitlen_0_s, i32 %sha256ctx_bitlen_1_s, i32 %sha256ctx_state_0_2_1, i32 %sha256ctx_state_1_2_1, i32 %sha256ctx_state_2_2_1, i32 %sha256ctx_state_3_2_1, i32 %sha256ctx_state_4_2_1, i32 %sha256ctx_state_5_2_1, i32 %sha256ctx_state_6_2_1, i32 %sha256ctx_state_7_2_1, [64 x i8]* %seg_buf, i32 64) nounwind, !dbg !266 ; [#uses=11 type={ i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 }] [debug line = 42:4]
  %sha256ctx_datalen_2 = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %call_ret, 0, !dbg !266 ; [#uses=1 type=i32] [debug line = 42:4]
  %sha256ctx_bitlen_0 = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %call_ret, 1, !dbg !266 ; [#uses=1 type=i32] [debug line = 42:4]
  %sha256ctx_bitlen_1 = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %call_ret, 2, !dbg !266 ; [#uses=1 type=i32] [debug line = 42:4]
  %sha256ctx_state_0 = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %call_ret, 3, !dbg !266 ; [#uses=1 type=i32] [debug line = 42:4]
  call void @llvm.dbg.value(metadata !{i32 %sha256ctx_state_0}, i64 0, metadata !197), !dbg !266 ; [debug line = 42:4] [debug variable = sha256ctx.state[0]]
  %sha256ctx_state_1 = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %call_ret, 4, !dbg !266 ; [#uses=1 type=i32] [debug line = 42:4]
  call void @llvm.dbg.value(metadata !{i32 %sha256ctx_state_1}, i64 0, metadata !198), !dbg !266 ; [debug line = 42:4] [debug variable = sha256ctx.state[1]]
  %sha256ctx_state_2 = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %call_ret, 5, !dbg !266 ; [#uses=1 type=i32] [debug line = 42:4]
  call void @llvm.dbg.value(metadata !{i32 %sha256ctx_state_2}, i64 0, metadata !199), !dbg !266 ; [debug line = 42:4] [debug variable = sha256ctx.state[2]]
  %sha256ctx_state_3 = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %call_ret, 6, !dbg !266 ; [#uses=1 type=i32] [debug line = 42:4]
  call void @llvm.dbg.value(metadata !{i32 %sha256ctx_state_3}, i64 0, metadata !200), !dbg !266 ; [debug line = 42:4] [debug variable = sha256ctx.state[3]]
  %sha256ctx_state_4 = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %call_ret, 7, !dbg !266 ; [#uses=1 type=i32] [debug line = 42:4]
  call void @llvm.dbg.value(metadata !{i32 %sha256ctx_state_4}, i64 0, metadata !201), !dbg !266 ; [debug line = 42:4] [debug variable = sha256ctx.state[4]]
  %sha256ctx_state_5 = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %call_ret, 8, !dbg !266 ; [#uses=1 type=i32] [debug line = 42:4]
  call void @llvm.dbg.value(metadata !{i32 %sha256ctx_state_5}, i64 0, metadata !202), !dbg !266 ; [debug line = 42:4] [debug variable = sha256ctx.state[5]]
  %sha256ctx_state_6 = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %call_ret, 9, !dbg !266 ; [#uses=1 type=i32] [debug line = 42:4]
  call void @llvm.dbg.value(metadata !{i32 %sha256ctx_state_6}, i64 0, metadata !203), !dbg !266 ; [debug line = 42:4] [debug variable = sha256ctx.state[6]]
  %sha256ctx_state_7 = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %call_ret, 10, !dbg !266 ; [#uses=1 type=i32] [debug line = 42:4]
  call void @llvm.dbg.value(metadata !{i32 %sha256ctx_state_7}, i64 0, metadata !204), !dbg !266 ; [debug line = 42:4] [debug variable = sha256ctx.state[7]]
  call void @llvm.dbg.value(metadata !{i32 %sha256ctx_bitlen_0}, i64 0, metadata !193), !dbg !266 ; [debug line = 42:4] [debug variable = sha256ctx.bitlen[0]]
  call void @llvm.dbg.value(metadata !{i32 %sha256ctx_bitlen_1}, i64 0, metadata !196), !dbg !266 ; [debug line = 42:4] [debug variable = sha256ctx.bitlen[1]]
  call void @llvm.dbg.value(metadata !{i32 %sha256ctx_datalen_2}, i64 0, metadata !190), !dbg !266 ; [debug line = 42:4] [debug variable = sha256ctx.datalen]
  store i32 %seg_offset_1, i32* %seg_offset, !dbg !267 ; [debug line = 41:4]
  store i32 %sha256ctx_state_7, i32* %sha256ctx_state_7_2, !dbg !266 ; [debug line = 42:4]
  store i32 %sha256ctx_state_6, i32* %sha256ctx_state_6_2, !dbg !266 ; [debug line = 42:4]
  store i32 %sha256ctx_state_5, i32* %sha256ctx_state_5_2, !dbg !266 ; [debug line = 42:4]
  store i32 %sha256ctx_state_4, i32* %sha256ctx_state_4_2, !dbg !266 ; [debug line = 42:4]
  store i32 %sha256ctx_state_3, i32* %sha256ctx_state_3_2, !dbg !266 ; [debug line = 42:4]
  store i32 %sha256ctx_state_2, i32* %sha256ctx_state_2_2, !dbg !266 ; [debug line = 42:4]
  store i32 %sha256ctx_state_1, i32* %sha256ctx_state_1_2, !dbg !266 ; [debug line = 42:4]
  store i32 %sha256ctx_state_0, i32* %sha256ctx_state_0_2, !dbg !266 ; [debug line = 42:4]
  store i32 %sha256ctx_bitlen_1, i32* %sha256ctx_bitlen_1_2, !dbg !266 ; [debug line = 42:4]
  store i32 %sha256ctx_bitlen_0, i32* %sha256ctx_bitlen_0_2, !dbg !266 ; [debug line = 42:4]
  store i32 %sha256ctx_datalen_2, i32* %sha256ctx_datalen, !dbg !266 ; [debug line = 42:4]
  store i32 %n_1, i32* %n, !dbg !251              ; [debug line = 40:4]
  br label %7, !dbg !268                          ; [debug line = 43:3]

.preheader:                                       ; preds = %5, %.preheader.preheader
  %i_1 = phi i6 [ %i_8, %5 ], [ 0, %.preheader.preheader ] ; [#uses=3 type=i6]
  %i_1_cast4 = zext i6 %i_1 to i10, !dbg !259     ; [#uses=1 type=i10] [debug line = 46:9]
  %i_1_cast = zext i6 %i_1 to i32, !dbg !259      ; [#uses=2 type=i32] [debug line = 46:9]
  %exitcond4 = icmp eq i32 %i_1_cast, %n_load, !dbg !259 ; [#uses=1 type=i1] [debug line = 46:9]
  call void (...)* @_ssdm_op_SpecLoopTripCount(i64 12, i64 63, i64 56)
  %i_8 = add i6 %i_1, 1, !dbg !269                ; [#uses=1 type=i6] [debug line = 46:19]
  br i1 %exitcond4, label %6, label %5, !dbg !259 ; [debug line = 46:9]

; <label>:5                                       ; preds = %.preheader
  %seg_offset_load_1 = load i32* %seg_offset, !dbg !250 ; [#uses=1 type=i32] [debug line = 33:2]
  %tmp2 = add i10 %tmp_96, %i_1_cast4             ; [#uses=1 type=i10]
  %tmp_98 = trunc i32 %seg_offset_load_1 to i10, !dbg !250 ; [#uses=1 type=i10] [debug line = 33:2]
  %sum2 = add i10 %tmp_98, %tmp2                  ; [#uses=1 type=i10]
  %sum2_cast = zext i10 %sum2 to i32              ; [#uses=1 type=i32]
  %data_addr_4 = getelementptr [256 x i8]* %data, i32 0, i32 %sum2_cast, !dbg !270 ; [#uses=1 type=i8*] [debug line = 48:2]
  %data_load_4 = load i8* %data_addr_4, align 1, !dbg !270 ; [#uses=1 type=i8] [debug line = 48:2]
  %seg_buf_addr_2 = getelementptr inbounds [64 x i8]* %seg_buf, i32 0, i32 %i_1_cast, !dbg !270 ; [#uses=1 type=i8*] [debug line = 48:2]
  store i8 %data_load_4, i8* %seg_buf_addr_2, align 1, !dbg !270 ; [debug line = 48:2]
  call void @llvm.dbg.value(metadata !{i6 %i_8}, i64 0, metadata !264), !dbg !269 ; [debug line = 46:19] [debug variable = i]
  br label %.preheader, !dbg !269                 ; [debug line = 46:19]

; <label>:6                                       ; preds = %.preheader
  %sha256ctx_datalen_lo_1 = load i32* %sha256ctx_datalen, !dbg !272 ; [#uses=1 type=i32] [debug line = 49:4]
  %sha256ctx_bitlen_0_1 = load i32* %sha256ctx_bitlen_0_2, !dbg !272 ; [#uses=1 type=i32] [debug line = 49:4]
  %sha256ctx_bitlen_1_1 = load i32* %sha256ctx_bitlen_1_2, !dbg !272 ; [#uses=1 type=i32] [debug line = 49:4]
  %sha256ctx_state_0_2_2 = load i32* %sha256ctx_state_0_2, !dbg !272 ; [#uses=1 type=i32] [debug line = 49:4]
  %sha256ctx_state_1_2_2 = load i32* %sha256ctx_state_1_2, !dbg !272 ; [#uses=1 type=i32] [debug line = 49:4]
  %sha256ctx_state_2_2_2 = load i32* %sha256ctx_state_2_2, !dbg !272 ; [#uses=1 type=i32] [debug line = 49:4]
  %sha256ctx_state_3_2_2 = load i32* %sha256ctx_state_3_2, !dbg !272 ; [#uses=1 type=i32] [debug line = 49:4]
  %sha256ctx_state_4_2_2 = load i32* %sha256ctx_state_4_2, !dbg !272 ; [#uses=1 type=i32] [debug line = 49:4]
  %sha256ctx_state_5_2_2 = load i32* %sha256ctx_state_5_2, !dbg !272 ; [#uses=1 type=i32] [debug line = 49:4]
  %sha256ctx_state_6_2_2 = load i32* %sha256ctx_state_6_2, !dbg !272 ; [#uses=1 type=i32] [debug line = 49:4]
  %sha256ctx_state_7_2_2 = load i32* %sha256ctx_state_7_2, !dbg !272 ; [#uses=1 type=i32] [debug line = 49:4]
  %call_ret1 = call fastcc { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } @sha256_update([64 x i8]* %sha256ctx_data, i32 %sha256ctx_datalen_lo_1, i32 %sha256ctx_bitlen_0_1, i32 %sha256ctx_bitlen_1_1, i32 %sha256ctx_state_0_2_2, i32 %sha256ctx_state_1_2_2, i32 %sha256ctx_state_2_2_2, i32 %sha256ctx_state_3_2_2, i32 %sha256ctx_state_4_2_2, i32 %sha256ctx_state_5_2_2, i32 %sha256ctx_state_6_2_2, i32 %sha256ctx_state_7_2_2, [64 x i8]* %seg_buf, i32 %n_load) nounwind, !dbg !272 ; [#uses=11 type={ i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 }] [debug line = 49:4]
  %sha256ctx_datalen_1 = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %call_ret1, 0, !dbg !272 ; [#uses=1 type=i32] [debug line = 49:4]
  %sha256ctx_bitlen_0_1_10 = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %call_ret1, 1, !dbg !272 ; [#uses=1 type=i32] [debug line = 49:4]
  %sha256ctx_bitlen_1_1_11 = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %call_ret1, 2, !dbg !272 ; [#uses=1 type=i32] [debug line = 49:4]
  %sha256ctx_state_0_1 = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %call_ret1, 3, !dbg !272 ; [#uses=1 type=i32] [debug line = 49:4]
  call void @llvm.dbg.value(metadata !{i32 %sha256ctx_state_0_1}, i64 0, metadata !197), !dbg !272 ; [debug line = 49:4] [debug variable = sha256ctx.state[0]]
  %sha256ctx_state_1_1 = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %call_ret1, 4, !dbg !272 ; [#uses=1 type=i32] [debug line = 49:4]
  call void @llvm.dbg.value(metadata !{i32 %sha256ctx_state_1_1}, i64 0, metadata !198), !dbg !272 ; [debug line = 49:4] [debug variable = sha256ctx.state[1]]
  %sha256ctx_state_2_1 = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %call_ret1, 5, !dbg !272 ; [#uses=1 type=i32] [debug line = 49:4]
  call void @llvm.dbg.value(metadata !{i32 %sha256ctx_state_2_1}, i64 0, metadata !199), !dbg !272 ; [debug line = 49:4] [debug variable = sha256ctx.state[2]]
  %sha256ctx_state_3_1 = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %call_ret1, 6, !dbg !272 ; [#uses=1 type=i32] [debug line = 49:4]
  call void @llvm.dbg.value(metadata !{i32 %sha256ctx_state_3_1}, i64 0, metadata !200), !dbg !272 ; [debug line = 49:4] [debug variable = sha256ctx.state[3]]
  %sha256ctx_state_4_1 = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %call_ret1, 7, !dbg !272 ; [#uses=1 type=i32] [debug line = 49:4]
  call void @llvm.dbg.value(metadata !{i32 %sha256ctx_state_4_1}, i64 0, metadata !201), !dbg !272 ; [debug line = 49:4] [debug variable = sha256ctx.state[4]]
  %sha256ctx_state_5_1 = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %call_ret1, 8, !dbg !272 ; [#uses=1 type=i32] [debug line = 49:4]
  call void @llvm.dbg.value(metadata !{i32 %sha256ctx_state_5_1}, i64 0, metadata !202), !dbg !272 ; [debug line = 49:4] [debug variable = sha256ctx.state[5]]
  %sha256ctx_state_6_1 = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %call_ret1, 9, !dbg !272 ; [#uses=1 type=i32] [debug line = 49:4]
  call void @llvm.dbg.value(metadata !{i32 %sha256ctx_state_6_1}, i64 0, metadata !203), !dbg !272 ; [debug line = 49:4] [debug variable = sha256ctx.state[6]]
  %sha256ctx_state_7_1 = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %call_ret1, 10, !dbg !272 ; [#uses=1 type=i32] [debug line = 49:4]
  call void @llvm.dbg.value(metadata !{i32 %sha256ctx_state_7_1}, i64 0, metadata !204), !dbg !272 ; [debug line = 49:4] [debug variable = sha256ctx.state[7]]
  call void @llvm.dbg.value(metadata !{i32 %sha256ctx_bitlen_0_1_10}, i64 0, metadata !193), !dbg !272 ; [debug line = 49:4] [debug variable = sha256ctx.bitlen[0]]
  call void @llvm.dbg.value(metadata !{i32 %sha256ctx_bitlen_1_1_11}, i64 0, metadata !196), !dbg !272 ; [debug line = 49:4] [debug variable = sha256ctx.bitlen[1]]
  call void @llvm.dbg.value(metadata !{i32 %sha256ctx_datalen_1}, i64 0, metadata !190), !dbg !272 ; [debug line = 49:4] [debug variable = sha256ctx.datalen]
  store i32 %sha256ctx_state_7_1, i32* %sha256ctx_state_7_2, !dbg !272 ; [debug line = 49:4]
  store i32 %sha256ctx_state_6_1, i32* %sha256ctx_state_6_2, !dbg !272 ; [debug line = 49:4]
  store i32 %sha256ctx_state_5_1, i32* %sha256ctx_state_5_2, !dbg !272 ; [debug line = 49:4]
  store i32 %sha256ctx_state_4_1, i32* %sha256ctx_state_4_2, !dbg !272 ; [debug line = 49:4]
  store i32 %sha256ctx_state_3_1, i32* %sha256ctx_state_3_2, !dbg !272 ; [debug line = 49:4]
  store i32 %sha256ctx_state_2_1, i32* %sha256ctx_state_2_2, !dbg !272 ; [debug line = 49:4]
  store i32 %sha256ctx_state_1_1, i32* %sha256ctx_state_1_2, !dbg !272 ; [debug line = 49:4]
  store i32 %sha256ctx_state_0_1, i32* %sha256ctx_state_0_2, !dbg !272 ; [debug line = 49:4]
  store i32 %sha256ctx_bitlen_1_1_11, i32* %sha256ctx_bitlen_1_2, !dbg !272 ; [debug line = 49:4]
  store i32 %sha256ctx_bitlen_0_1_10, i32* %sha256ctx_bitlen_0_2, !dbg !272 ; [debug line = 49:4]
  store i32 %sha256ctx_datalen_1, i32* %sha256ctx_datalen, !dbg !272 ; [debug line = 49:4]
  store i32 0, i32* %n
  br label %7

; <label>:7                                       ; preds = %6, %4
  %empty_12 = call i32 (...)* @_ssdm_op_SpecRegionEnd([12 x i8]* @p_str8, i32 %tmp_14) nounwind, !dbg !273 ; [#uses=0 type=i32] [debug line = 52:2]
  br label %1, !dbg !273                          ; [debug line = 52:2]

; <label>:8                                       ; preds = %1
  %sha256ctx_datalen_lo_2 = load i32* %sha256ctx_datalen, !dbg !274 ; [#uses=1 type=i32] [debug line = 55:2]
  %sha256ctx_bitlen_0_2_13 = load i32* %sha256ctx_bitlen_0_2, !dbg !274 ; [#uses=1 type=i32] [debug line = 55:2]
  %sha256ctx_bitlen_1_2_14 = load i32* %sha256ctx_bitlen_1_2, !dbg !274 ; [#uses=1 type=i32] [debug line = 55:2]
  %sha256ctx_state_0_2_3 = load i32* %sha256ctx_state_0_2, !dbg !274 ; [#uses=1 type=i32] [debug line = 55:2]
  %sha256ctx_state_1_2_3 = load i32* %sha256ctx_state_1_2, !dbg !274 ; [#uses=1 type=i32] [debug line = 55:2]
  %sha256ctx_state_2_2_3 = load i32* %sha256ctx_state_2_2, !dbg !274 ; [#uses=1 type=i32] [debug line = 55:2]
  %sha256ctx_state_3_2_3 = load i32* %sha256ctx_state_3_2, !dbg !274 ; [#uses=1 type=i32] [debug line = 55:2]
  %sha256ctx_state_4_2_3 = load i32* %sha256ctx_state_4_2, !dbg !274 ; [#uses=1 type=i32] [debug line = 55:2]
  %sha256ctx_state_5_2_3 = load i32* %sha256ctx_state_5_2, !dbg !274 ; [#uses=1 type=i32] [debug line = 55:2]
  %sha256ctx_state_6_2_3 = load i32* %sha256ctx_state_6_2, !dbg !274 ; [#uses=1 type=i32] [debug line = 55:2]
  %sha256ctx_state_7_2_3 = load i32* %sha256ctx_state_7_2, !dbg !274 ; [#uses=1 type=i32] [debug line = 55:2]
  call fastcc void @sha256_final([64 x i8]* %sha256ctx_data, i32 %sha256ctx_datalen_lo_2, i32 %sha256ctx_bitlen_0_2_13, i32 %sha256ctx_bitlen_1_2_14, i32 %sha256ctx_state_0_2_3, i32 %sha256ctx_state_1_2_3, i32 %sha256ctx_state_2_2_3, i32 %sha256ctx_state_3_2_3, i32 %sha256ctx_state_4_2_3, i32 %sha256ctx_state_5_2_3, i32 %sha256ctx_state_6_2_3, i32 %sha256ctx_state_7_2_3, [64 x i8]* %seg_buf) nounwind, !dbg !274 ; [debug line = 55:2]
  br label %9, !dbg !275                          ; [debug line = 57:7]

; <label>:9                                       ; preds = %10, %8
  %i_2 = phi i6 [ 0, %8 ], [ %i, %10 ]            ; [#uses=3 type=i6]
  %i_2_cast3 = zext i6 %i_2 to i32, !dbg !275     ; [#uses=2 type=i32] [debug line = 57:7]
  %exitcond = icmp eq i6 %i_2, -32, !dbg !275     ; [#uses=1 type=i1] [debug line = 57:7]
  call void (...)* @_ssdm_op_SpecLoopTripCount(i64 32, i64 32, i64 32)
  %i = add i6 %i_2, 1, !dbg !277                  ; [#uses=1 type=i6] [debug line = 57:18]
  br i1 %exitcond, label %11, label %10, !dbg !275 ; [debug line = 57:7]

; <label>:10                                      ; preds = %9
  %seg_buf_addr = getelementptr inbounds [64 x i8]* %seg_buf, i32 0, i32 %i_2_cast3, !dbg !278 ; [#uses=1 type=i8*] [debug line = 60:3]
  %seg_buf_load = load i8* %seg_buf_addr, align 1, !dbg !278 ; [#uses=1 type=i8] [debug line = 60:3]
  %digest_addr = getelementptr [32 x i8]* %digest, i32 0, i32 %i_2_cast3, !dbg !278 ; [#uses=1 type=i8*] [debug line = 60:3]
  store i8 %seg_buf_load, i8* %digest_addr, align 1, !dbg !278 ; [debug line = 60:3]
  call void @llvm.dbg.value(metadata !{i6 %i}, i64 0, metadata !264), !dbg !277 ; [debug line = 57:18] [debug variable = i]
  br label %9, !dbg !277                          ; [debug line = 57:18]

; <label>:11                                      ; preds = %9
  ret void, !dbg !280                             ; [debug line = 62:1]
}

; [#uses=13]
declare i32 @llvm.part.select.i32(i32, i32, i32) nounwind readnone

; [#uses=1]
declare i24 @llvm.part.select.i24(i24, i32, i32) nounwind readnone

; [#uses=1]
declare i16 @llvm.part.select.i16(i16, i32, i32) nounwind readnone

; [#uses=63]
declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

; [#uses=16]
declare void @llvm.dbg.declare(metadata, metadata) nounwind readnone

; [#uses=1]
define weak void @_ssdm_op_SpecTopModule(...) {
entry:
  ret void
}

; [#uses=1]
define weak i32 @_ssdm_op_SpecRegionEnd(...) {
entry:
  ret i32 0
}

; [#uses=1]
define weak i32 @_ssdm_op_SpecRegionBegin(...) {
entry:
  ret i32 0
}

; [#uses=2]
define weak i32 @_ssdm_op_SpecMemCore(...) {
entry:
  ret i32 0
}

; [#uses=10]
define weak void @_ssdm_op_SpecLoopTripCount(...) nounwind {
entry:
  ret void
}

; [#uses=5]
define weak void @_ssdm_op_SpecInterface(...) nounwind {
entry:
  ret void
}

; [#uses=4]
define weak void @_ssdm_op_SpecBitsMap(...) {
entry:
  ret void
}

; [#uses=2]
define weak i32 @_ssdm_op_Read.s_axilite.i32(i32) {
entry:
  ret i32 %0
}

; [#uses=31]
define weak i32 @_ssdm_op_Read.ap_auto.i32(i32) {
entry:
  ret i32 %0
}

; [#uses=4]
define weak i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32, i32, i32) nounwind readnone {
entry:
  %empty = call i32 @llvm.part.select.i32(i32 %0, i32 %1, i32 %2) ; [#uses=1 type=i32]
  %empty_15 = trunc i32 %empty to i8              ; [#uses=1 type=i8]
  ret i8 %empty_15
}

; [#uses=1]
define weak i8 @_ssdm_op_PartSelect.i8.i24.i32.i32(i24, i32, i32) nounwind readnone {
entry:
  %empty = call i24 @llvm.part.select.i24(i24 %0, i32 %1, i32 %2) ; [#uses=1 type=i24]
  %empty_16 = trunc i24 %empty to i8              ; [#uses=1 type=i8]
  ret i8 %empty_16
}

; [#uses=1]
define weak i8 @_ssdm_op_PartSelect.i8.i16.i32.i32(i16, i32, i32) nounwind readnone {
entry:
  %empty = call i16 @llvm.part.select.i16(i16 %0, i32 %1, i32 %2) ; [#uses=1 type=i16]
  %empty_17 = trunc i16 %empty to i8              ; [#uses=1 type=i8]
  ret i8 %empty_17
}

; [#uses=1]
define weak i7 @_ssdm_op_PartSelect.i7.i32.i32.i32(i32, i32, i32) nounwind readnone {
entry:
  %empty = call i32 @llvm.part.select.i32(i32 %0, i32 %1, i32 %2) ; [#uses=1 type=i32]
  %empty_18 = trunc i32 %empty to i7              ; [#uses=1 type=i7]
  ret i7 %empty_18
}

; [#uses=0]
declare i6 @_ssdm_op_PartSelect.i6.i7.i32.i32(i7, i32, i32) nounwind readnone

; [#uses=0]
declare i6 @_ssdm_op_PartSelect.i6.i32.i32.i32(i32, i32, i32) nounwind readnone

; [#uses=0]
declare i5 @_ssdm_op_PartSelect.i5.i32.i32.i32(i32, i32, i32) nounwind readnone

; [#uses=1]
define weak i30 @_ssdm_op_PartSelect.i30.i32.i32.i32(i32, i32, i32) nounwind readnone {
entry:
  %empty = call i32 @llvm.part.select.i32(i32 %0, i32 %1, i32 %2) ; [#uses=1 type=i32]
  %empty_19 = trunc i32 %empty to i30             ; [#uses=1 type=i30]
  ret i30 %empty_19
}

; [#uses=1]
define weak i29 @_ssdm_op_PartSelect.i29.i32.i32.i32(i32, i32, i32) nounwind readnone {
entry:
  %empty = call i32 @llvm.part.select.i32(i32 %0, i32 %1, i32 %2) ; [#uses=1 type=i32]
  %empty_20 = trunc i32 %empty to i29             ; [#uses=1 type=i29]
  ret i29 %empty_20
}

; [#uses=3]
define weak i26 @_ssdm_op_PartSelect.i26.i32.i32.i32(i32, i32, i32) nounwind readnone {
entry:
  %empty = call i32 @llvm.part.select.i32(i32 %0, i32 %1, i32 %2) ; [#uses=1 type=i32]
  %empty_21 = trunc i32 %empty to i26             ; [#uses=1 type=i26]
  ret i26 %empty_21
}

; [#uses=1]
define weak i25 @_ssdm_op_PartSelect.i25.i32.i32.i32(i32, i32, i32) nounwind readnone {
entry:
  %empty = call i32 @llvm.part.select.i32(i32 %0, i32 %1, i32 %2) ; [#uses=1 type=i32]
  %empty_22 = trunc i32 %empty to i25             ; [#uses=1 type=i25]
  ret i25 %empty_22
}

; [#uses=0]
declare i24 @_ssdm_op_PartSelect.i24.i32.i32.i32(i32, i32, i32) nounwind readnone

; [#uses=1]
define weak i22 @_ssdm_op_PartSelect.i22.i32.i32.i32(i32, i32, i32) nounwind readnone {
entry:
  %empty = call i32 @llvm.part.select.i32(i32 %0, i32 %1, i32 %2) ; [#uses=1 type=i32]
  %empty_23 = trunc i32 %empty to i22             ; [#uses=1 type=i22]
  ret i22 %empty_23
}

; [#uses=1]
define weak i21 @_ssdm_op_PartSelect.i21.i32.i32.i32(i32, i32, i32) nounwind readnone {
entry:
  %empty = call i32 @llvm.part.select.i32(i32 %0, i32 %1, i32 %2) ; [#uses=1 type=i32]
  %empty_24 = trunc i32 %empty to i21             ; [#uses=1 type=i21]
  ret i21 %empty_24
}

; [#uses=0]
declare i2 @_ssdm_op_PartSelect.i2.i32.i32.i32(i32, i32, i32) nounwind readnone

; [#uses=0]
declare i2 @_ssdm_op_PartSelect.i2.i3.i32.i32(i3, i32, i32) nounwind readnone

; [#uses=1]
define weak i19 @_ssdm_op_PartSelect.i19.i32.i32.i32(i32, i32, i32) nounwind readnone {
entry:
  %empty = call i32 @llvm.part.select.i32(i32 %0, i32 %1, i32 %2) ; [#uses=1 type=i32]
  %empty_25 = trunc i32 %empty to i19             ; [#uses=1 type=i19]
  ret i19 %empty_25
}

; [#uses=0]
declare i18 @_ssdm_op_PartSelect.i18.i32.i32.i32(i32, i32, i32) nounwind readnone

; [#uses=0]
declare i17 @_ssdm_op_PartSelect.i17.i32.i32.i32(i32, i32, i32) nounwind readnone

; [#uses=0]
declare i16 @_ssdm_op_PartSelect.i16.i32.i32.i32(i32, i32, i32) nounwind readnone

; [#uses=1]
define weak i15 @_ssdm_op_PartSelect.i15.i32.i32.i32(i32, i32, i32) nounwind readnone {
entry:
  %empty = call i32 @llvm.part.select.i32(i32 %0, i32 %1, i32 %2) ; [#uses=1 type=i32]
  %empty_26 = trunc i32 %empty to i15             ; [#uses=1 type=i15]
  ret i15 %empty_26
}

; [#uses=1]
define weak i14 @_ssdm_op_PartSelect.i14.i32.i32.i32(i32, i32, i32) nounwind readnone {
entry:
  %empty = call i32 @llvm.part.select.i32(i32 %0, i32 %1, i32 %2) ; [#uses=1 type=i32]
  %empty_27 = trunc i32 %empty to i14             ; [#uses=1 type=i14]
  ret i14 %empty_27
}

; [#uses=1]
define weak i13 @_ssdm_op_PartSelect.i13.i32.i32.i32(i32, i32, i32) nounwind readnone {
entry:
  %empty = call i32 @llvm.part.select.i32(i32 %0, i32 %1, i32 %2) ; [#uses=1 type=i32]
  %empty_28 = trunc i32 %empty to i13             ; [#uses=1 type=i13]
  ret i13 %empty_28
}

; [#uses=0]
declare i11 @_ssdm_op_PartSelect.i11.i32.i32.i32(i32, i32, i32) nounwind readnone

; [#uses=1]
define weak i10 @_ssdm_op_PartSelect.i10.i32.i32.i32(i32, i32, i32) nounwind readnone {
entry:
  %empty = call i32 @llvm.part.select.i32(i32 %0, i32 %1, i32 %2) ; [#uses=1 type=i32]
  %empty_29 = trunc i32 %empty to i10             ; [#uses=1 type=i10]
  ret i10 %empty_29
}

; [#uses=1]
define weak i9 @_ssdm_op_BitConcatenate.i9.i6.i3(i6, i3) nounwind readnone {
entry:
  %empty = zext i6 %0 to i9                       ; [#uses=1 type=i9]
  %empty_30 = zext i3 %1 to i9                    ; [#uses=1 type=i9]
  %empty_31 = shl i9 %empty, 3                    ; [#uses=1 type=i9]
  %empty_32 = or i9 %empty_31, %empty_30          ; [#uses=1 type=i9]
  ret i9 %empty_32
}

; [#uses=1]
define weak i8 @_ssdm_op_BitConcatenate.i8.i5.i3(i5, i3) nounwind readnone {
entry:
  %empty = zext i5 %0 to i8                       ; [#uses=1 type=i8]
  %empty_33 = zext i3 %1 to i8                    ; [#uses=1 type=i8]
  %empty_34 = shl i8 %empty, 3                    ; [#uses=1 type=i8]
  %empty_35 = or i8 %empty_34, %empty_33          ; [#uses=1 type=i8]
  ret i8 %empty_35
}

; [#uses=2]
define weak i5 @_ssdm_op_BitConcatenate.i5.i2.i3(i2, i3) nounwind readnone {
entry:
  %empty = zext i2 %0 to i5                       ; [#uses=1 type=i5]
  %empty_36 = zext i3 %1 to i5                    ; [#uses=1 type=i5]
  %empty_37 = shl i5 %empty, 3                    ; [#uses=1 type=i5]
  %empty_38 = or i5 %empty_37, %empty_36          ; [#uses=1 type=i5]
  ret i5 %empty_38
}

; [#uses=1]
define weak i4 @_ssdm_op_BitConcatenate.i4.i1.i3(i1, i3) nounwind readnone {
entry:
  %empty = zext i1 %0 to i4                       ; [#uses=1 type=i4]
  %empty_39 = zext i3 %1 to i4                    ; [#uses=1 type=i4]
  %empty_40 = shl i4 %empty, 3                    ; [#uses=1 type=i4]
  %empty_41 = or i4 %empty_40, %empty_39          ; [#uses=1 type=i4]
  ret i4 %empty_41
}

; [#uses=1]
define weak i32 @_ssdm_op_BitConcatenate.i32.i8.i8.i8.i8(i8, i8, i8, i8) nounwind readnone {
entry:
  %empty = zext i8 %2 to i16                      ; [#uses=1 type=i16]
  %empty_42 = zext i8 %3 to i16                   ; [#uses=1 type=i16]
  %empty_43 = shl i16 %empty, 8                   ; [#uses=1 type=i16]
  %empty_44 = or i16 %empty_43, %empty_42         ; [#uses=1 type=i16]
  %empty_45 = zext i8 %1 to i24                   ; [#uses=1 type=i24]
  %empty_46 = zext i16 %empty_44 to i24           ; [#uses=1 type=i24]
  %empty_47 = shl i24 %empty_45, 16               ; [#uses=1 type=i24]
  %empty_48 = or i24 %empty_47, %empty_46         ; [#uses=1 type=i24]
  %empty_49 = zext i8 %0 to i32                   ; [#uses=1 type=i32]
  %empty_50 = zext i24 %empty_48 to i32           ; [#uses=1 type=i32]
  %empty_51 = shl i32 %empty_49, 24               ; [#uses=1 type=i32]
  %empty_52 = or i32 %empty_51, %empty_50         ; [#uses=1 type=i32]
  ret i32 %empty_52
}

; [#uses=1]
define weak i32 @_ssdm_op_BitConcatenate.i32.i7.i25(i7, i25) nounwind readnone {
entry:
  %empty = zext i7 %0 to i32                      ; [#uses=1 type=i32]
  %empty_53 = zext i25 %1 to i32                  ; [#uses=1 type=i32]
  %empty_54 = shl i32 %empty, 25                  ; [#uses=1 type=i32]
  %empty_55 = or i32 %empty_54, %empty_53         ; [#uses=1 type=i32]
  ret i32 %empty_55
}

; [#uses=1]
define weak i32 @_ssdm_op_BitConcatenate.i32.i6.i26(i6, i26) nounwind readnone {
entry:
  %empty = zext i6 %0 to i32                      ; [#uses=1 type=i32]
  %empty_56 = zext i26 %1 to i32                  ; [#uses=1 type=i32]
  %empty_57 = shl i32 %empty, 26                  ; [#uses=1 type=i32]
  %empty_58 = or i32 %empty_57, %empty_56         ; [#uses=1 type=i32]
  ret i32 %empty_58
}

; [#uses=1]
define weak i32 @_ssdm_op_BitConcatenate.i32.i25.i7(i25, i7) nounwind readnone {
entry:
  %empty = zext i25 %0 to i32                     ; [#uses=1 type=i32]
  %empty_59 = zext i7 %1 to i32                   ; [#uses=1 type=i32]
  %empty_60 = shl i32 %empty, 7                   ; [#uses=1 type=i32]
  %empty_61 = or i32 %empty_60, %empty_59         ; [#uses=1 type=i32]
  ret i32 %empty_61
}

; [#uses=1]
define weak i32 @_ssdm_op_BitConcatenate.i32.i22.i10(i22, i10) nounwind readnone {
entry:
  %empty = zext i22 %0 to i32                     ; [#uses=1 type=i32]
  %empty_62 = zext i10 %1 to i32                  ; [#uses=1 type=i32]
  %empty_63 = shl i32 %empty, 10                  ; [#uses=1 type=i32]
  %empty_64 = or i32 %empty_63, %empty_62         ; [#uses=1 type=i32]
  ret i32 %empty_64
}

; [#uses=1]
define weak i32 @_ssdm_op_BitConcatenate.i32.i2.i30(i2, i30) nounwind readnone {
entry:
  %empty = zext i2 %0 to i32                      ; [#uses=1 type=i32]
  %empty_65 = zext i30 %1 to i32                  ; [#uses=1 type=i32]
  %empty_66 = shl i32 %empty, 30                  ; [#uses=1 type=i32]
  %empty_67 = or i32 %empty_66, %empty_65         ; [#uses=1 type=i32]
  ret i32 %empty_67
}

; [#uses=1]
define weak i32 @_ssdm_op_BitConcatenate.i32.i19.i13(i19, i13) nounwind readnone {
entry:
  %empty = zext i19 %0 to i32                     ; [#uses=1 type=i32]
  %empty_68 = zext i13 %1 to i32                  ; [#uses=1 type=i32]
  %empty_69 = shl i32 %empty, 13                  ; [#uses=1 type=i32]
  %empty_70 = or i32 %empty_69, %empty_68         ; [#uses=1 type=i32]
  ret i32 %empty_70
}

; [#uses=1]
define weak i32 @_ssdm_op_BitConcatenate.i32.i18.i14(i18, i14) nounwind readnone {
entry:
  %empty = zext i18 %0 to i32                     ; [#uses=1 type=i32]
  %empty_71 = zext i14 %1 to i32                  ; [#uses=1 type=i32]
  %empty_72 = shl i32 %empty, 14                  ; [#uses=1 type=i32]
  %empty_73 = or i32 %empty_72, %empty_71         ; [#uses=1 type=i32]
  ret i32 %empty_73
}

; [#uses=1]
define weak i32 @_ssdm_op_BitConcatenate.i32.i17.i15(i17, i15) nounwind readnone {
entry:
  %empty = zext i17 %0 to i32                     ; [#uses=1 type=i32]
  %empty_74 = zext i15 %1 to i32                  ; [#uses=1 type=i32]
  %empty_75 = shl i32 %empty, 15                  ; [#uses=1 type=i32]
  %empty_76 = or i32 %empty_75, %empty_74         ; [#uses=1 type=i32]
  ret i32 %empty_76
}

; [#uses=1]
define weak i32 @_ssdm_op_BitConcatenate.i32.i13.i19(i13, i19) nounwind readnone {
entry:
  %empty = zext i13 %0 to i32                     ; [#uses=1 type=i32]
  %empty_77 = zext i19 %1 to i32                  ; [#uses=1 type=i32]
  %empty_78 = shl i32 %empty, 19                  ; [#uses=1 type=i32]
  %empty_79 = or i32 %empty_78, %empty_77         ; [#uses=1 type=i32]
  ret i32 %empty_79
}

; [#uses=1]
define weak i32 @_ssdm_op_BitConcatenate.i32.i11.i21(i11, i21) nounwind readnone {
entry:
  %empty = zext i11 %0 to i32                     ; [#uses=1 type=i32]
  %empty_80 = zext i21 %1 to i32                  ; [#uses=1 type=i32]
  %empty_81 = shl i32 %empty, 21                  ; [#uses=1 type=i32]
  %empty_82 = or i32 %empty_81, %empty_80         ; [#uses=1 type=i32]
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
!27 = metadata !{i32 786689, metadata !28, metadata !"len", metadata !29, i32 50331737, metadata !43, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!28 = metadata !{i32 786478, i32 0, metadata !29, metadata !"sha256_update", metadata !"sha256_update", metadata !"", metadata !29, i32 89, metadata !30, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !53, i32 90} ; [ DW_TAG_subprogram ]
!29 = metadata !{i32 786473, metadata !"./sha256_impl.c", metadata !"C:\5CStudent\5CSHA_new", null} ; [ DW_TAG_file_type ]
!30 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !31, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!31 = metadata !{null, metadata !32, metadata !52, metadata !43}
!32 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 32, i64 32, i64 0, i32 0, metadata !33} ; [ DW_TAG_pointer_type ]
!33 = metadata !{i32 786454, null, metadata !"SHA256_CTX", metadata !29, i32 11, i64 0, i64 0, i64 0, i32 0, metadata !34} ; [ DW_TAG_typedef ]
!34 = metadata !{i32 786451, null, metadata !"", metadata !35, i32 6, i64 864, i64 32, i32 0, i32 0, null, metadata !36, i32 0, i32 0} ; [ DW_TAG_structure_type ]
!35 = metadata !{i32 786473, metadata !"./sha256_impl.h", metadata !"C:\5CStudent\5CSHA_new", null} ; [ DW_TAG_file_type ]
!36 = metadata !{metadata !37, metadata !42, metadata !44, metadata !48}
!37 = metadata !{i32 786445, metadata !34, metadata !"data", metadata !35, i32 7, i64 512, i64 8, i64 0, i32 0, metadata !38} ; [ DW_TAG_member ]
!38 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 512, i64 8, i32 0, i32 0, metadata !39, metadata !40, i32 0, i32 0} ; [ DW_TAG_array_type ]
!39 = metadata !{i32 786468, null, metadata !"unsigned char", null, i32 0, i64 8, i64 8, i64 0, i32 0, i32 8} ; [ DW_TAG_base_type ]
!40 = metadata !{metadata !41}
!41 = metadata !{i32 786465, i64 0, i64 63}       ; [ DW_TAG_subrange_type ]
!42 = metadata !{i32 786445, metadata !34, metadata !"datalen", metadata !35, i32 8, i64 32, i64 32, i64 512, i32 0, metadata !43} ; [ DW_TAG_member ]
!43 = metadata !{i32 786468, null, metadata !"unsigned int", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 7} ; [ DW_TAG_base_type ]
!44 = metadata !{i32 786445, metadata !34, metadata !"bitlen", metadata !35, i32 9, i64 64, i64 32, i64 544, i32 0, metadata !45} ; [ DW_TAG_member ]
!45 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 64, i64 32, i32 0, i32 0, metadata !43, metadata !46, i32 0, i32 0} ; [ DW_TAG_array_type ]
!46 = metadata !{metadata !47}
!47 = metadata !{i32 786465, i64 0, i64 1}        ; [ DW_TAG_subrange_type ]
!48 = metadata !{i32 786445, metadata !34, metadata !"state", metadata !35, i32 10, i64 256, i64 32, i64 608, i32 0, metadata !49} ; [ DW_TAG_member ]
!49 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 256, i64 32, i32 0, i32 0, metadata !43, metadata !50, i32 0, i32 0} ; [ DW_TAG_array_type ]
!50 = metadata !{metadata !51}
!51 = metadata !{i32 786465, i64 0, i64 7}        ; [ DW_TAG_subrange_type ]
!52 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 32, i64 32, i64 0, i32 0, metadata !39} ; [ DW_TAG_pointer_type ]
!53 = metadata !{metadata !54}
!54 = metadata !{i32 786468}                      ; [ DW_TAG_base_type ]
!55 = metadata !{i32 89, i32 105, metadata !28, null}
!56 = metadata !{i32 790533, metadata !57, metadata !"ctx.datalen", null, i32 89, metadata !58, i32 0, i32 0} ; [ DW_TAG_arg_variable_field_ro ]
!57 = metadata !{i32 786689, metadata !28, metadata !"ctx", metadata !29, i32 16777305, metadata !32, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!58 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 32, i64 32, i64 0, i32 0, metadata !59} ; [ DW_TAG_pointer_type ]
!59 = metadata !{i32 786452, null, metadata !"", metadata !35, i32 6, i64 32, i64 32, i32 0, i32 0, null, metadata !60, i32 0, i32 0} ; [ DW_TAG_structure_field_type ]
!60 = metadata !{metadata !42}
!61 = metadata !{i32 89, i32 32, metadata !28, null}
!62 = metadata !{i32 790531, metadata !57, metadata !"ctx.data", null, i32 89, metadata !63, i32 0, i32 0} ; [ DW_TAG_arg_variable_field ]
!63 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 32, i64 32, i64 0, i32 0, metadata !64} ; [ DW_TAG_pointer_type ]
!64 = metadata !{i32 786452, null, metadata !"", metadata !35, i32 6, i64 512, i64 32, i32 0, i32 0, null, metadata !65, i32 0, i32 0} ; [ DW_TAG_structure_field_type ]
!65 = metadata !{metadata !37}
!66 = metadata !{i32 786689, metadata !28, metadata !"data", null, i32 89, metadata !38, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!67 = metadata !{i32 89, i32 67, metadata !28, null}
!68 = metadata !{i32 93, i32 9, metadata !69, null}
!69 = metadata !{i32 786443, metadata !70, i32 93, i32 4, metadata !29, i32 9} ; [ DW_TAG_lexical_block ]
!70 = metadata !{i32 786443, metadata !28, i32 90, i32 1, metadata !29, i32 8} ; [ DW_TAG_lexical_block ]
!71 = metadata !{i32 93, i32 23, metadata !69, null}
!72 = metadata !{i32 95, i32 2, metadata !73, null}
!73 = metadata !{i32 786443, metadata !69, i32 93, i32 28, metadata !29, i32 10} ; [ DW_TAG_lexical_block ]
!74 = metadata !{i32 97, i32 7, metadata !73, null}
!75 = metadata !{i32 98, i32 10, metadata !76, null}
!76 = metadata !{i32 786443, metadata !73, i32 97, i32 31, metadata !29, i32 11} ; [ DW_TAG_lexical_block ]
!77 = metadata !{i32 99, i32 51, metadata !76, null}
!78 = metadata !{i32 99, i32 69, metadata !76, null}
!79 = metadata !{i32 99, i32 10, metadata !76, null}
!80 = metadata !{i32 101, i32 7, metadata !76, null}
!81 = metadata !{i32 786688, metadata !70, metadata !"i", metadata !29, i32 91, metadata !43, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!82 = metadata !{i32 103, i32 1, metadata !70, null}
!83 = metadata !{i32 786689, metadata !84, metadata !"data", null, i32 30, metadata !38, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!84 = metadata !{i32 786478, i32 0, metadata !29, metadata !"sha256_transform", metadata !"sha256_transform", metadata !"", metadata !29, i32 30, metadata !85, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !53, i32 31} ; [ DW_TAG_subprogram ]
!85 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !86, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!86 = metadata !{null, metadata !32, metadata !52}
!87 = metadata !{i32 30, i32 70, metadata !84, null}
!88 = metadata !{i32 786688, metadata !89, metadata !"m", metadata !29, i32 32, metadata !90, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!89 = metadata !{i32 786443, metadata !84, i32 31, i32 1, metadata !29, i32 0} ; [ DW_TAG_lexical_block ]
!90 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 2048, i64 32, i32 0, i32 0, metadata !43, metadata !40, i32 0, i32 0} ; [ DW_TAG_array_type ]
!91 = metadata !{i32 32, i32 60, metadata !89, null}
!92 = metadata !{i32 34, i32 9, metadata !93, null}
!93 = metadata !{i32 786443, metadata !89, i32 34, i32 4, metadata !29, i32 1} ; [ DW_TAG_lexical_block ]
!94 = metadata !{i32 34, i32 26, metadata !93, null}
!95 = metadata !{i32 37, i32 4, metadata !96, null}
!96 = metadata !{i32 786443, metadata !89, i32 37, i32 4, metadata !29, i32 3} ; [ DW_TAG_lexical_block ]
!97 = metadata !{i32 36, i32 2, metadata !98, null}
!98 = metadata !{i32 786443, metadata !93, i32 36, i32 2, metadata !29, i32 2} ; [ DW_TAG_lexical_block ]
!99 = metadata !{i32 786688, metadata !89, metadata !"j", metadata !29, i32 32, metadata !43, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!100 = metadata !{i32 50, i32 9, metadata !101, null}
!101 = metadata !{i32 786443, metadata !89, i32 50, i32 4, metadata !29, i32 5} ; [ DW_TAG_lexical_block ]
!102 = metadata !{i32 39, i32 2, metadata !103, null}
!103 = metadata !{i32 786443, metadata !96, i32 39, i32 2, metadata !29, i32 4} ; [ DW_TAG_lexical_block ]
!104 = metadata !{i32 37, i32 20, metadata !96, null}
!105 = metadata !{i32 786688, metadata !89, metadata !"i", metadata !29, i32 32, metadata !43, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!106 = metadata !{i32 50, i32 24, metadata !101, null}
!107 = metadata !{i32 52, i32 2, metadata !108, null}
!108 = metadata !{i32 786443, metadata !101, i32 50, i32 29, metadata !29, i32 6} ; [ DW_TAG_lexical_block ]
!109 = metadata !{i32 786688, metadata !89, metadata !"t1", metadata !29, i32 32, metadata !43, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!110 = metadata !{i32 53, i32 7, metadata !108, null}
!111 = metadata !{i32 786688, metadata !89, metadata !"h", metadata !29, i32 32, metadata !43, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!112 = metadata !{i32 54, i32 7, metadata !108, null}
!113 = metadata !{i32 786688, metadata !89, metadata !"g", metadata !29, i32 32, metadata !43, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!114 = metadata !{i32 55, i32 7, metadata !108, null}
!115 = metadata !{i32 786688, metadata !89, metadata !"f", metadata !29, i32 32, metadata !43, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!116 = metadata !{i32 56, i32 7, metadata !108, null}
!117 = metadata !{i32 57, i32 7, metadata !108, null}
!118 = metadata !{i32 786688, metadata !89, metadata !"e", metadata !29, i32 32, metadata !43, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!119 = metadata !{i32 786688, metadata !89, metadata !"d", metadata !29, i32 32, metadata !43, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!120 = metadata !{i32 58, i32 7, metadata !108, null}
!121 = metadata !{i32 786688, metadata !89, metadata !"c", metadata !29, i32 32, metadata !43, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!122 = metadata !{i32 59, i32 7, metadata !108, null}
!123 = metadata !{i32 786688, metadata !89, metadata !"b", metadata !29, i32 32, metadata !43, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!124 = metadata !{i32 60, i32 7, metadata !108, null}
!125 = metadata !{i32 61, i32 7, metadata !108, null}
!126 = metadata !{i32 786688, metadata !89, metadata !"a", metadata !29, i32 32, metadata !43, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!127 = metadata !{i32 64, i32 4, metadata !89, null}
!128 = metadata !{i32 65, i32 4, metadata !89, null}
!129 = metadata !{i32 66, i32 4, metadata !89, null}
!130 = metadata !{i32 67, i32 4, metadata !89, null}
!131 = metadata !{i32 68, i32 4, metadata !89, null}
!132 = metadata !{i32 69, i32 4, metadata !89, null}
!133 = metadata !{i32 70, i32 4, metadata !89, null}
!134 = metadata !{i32 71, i32 4, metadata !89, null}
!135 = metadata !{i32 72, i32 1, metadata !89, null}
!136 = metadata !{i32 790533, metadata !137, metadata !"ctx.datalen", null, i32 105, metadata !58, i32 0, i32 0} ; [ DW_TAG_arg_variable_field_ro ]
!137 = metadata !{i32 786689, metadata !138, metadata !"ctx", metadata !29, i32 16777321, metadata !32, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!138 = metadata !{i32 786478, i32 0, metadata !29, metadata !"sha256_final", metadata !"sha256_final", metadata !"", metadata !29, i32 105, metadata !85, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !53, i32 106} ; [ DW_TAG_subprogram ]
!139 = metadata !{i32 105, i32 31, metadata !138, null}
!140 = metadata !{i32 790531, metadata !137, metadata !"ctx.data", null, i32 105, metadata !63, i32 0, i32 0} ; [ DW_TAG_arg_variable_field ]
!141 = metadata !{i32 786689, metadata !138, metadata !"hash", null, i32 105, metadata !38, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!142 = metadata !{i32 105, i32 66, metadata !138, null}
!143 = metadata !{i32 786688, metadata !144, metadata !"i", metadata !29, i32 107, metadata !43, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!144 = metadata !{i32 786443, metadata !138, i32 106, i32 1, metadata !29, i32 12} ; [ DW_TAG_lexical_block ]
!145 = metadata !{i32 109, i32 2, metadata !144, null}
!146 = metadata !{i32 112, i32 2, metadata !144, null}
!147 = metadata !{i32 113, i32 3, metadata !148, null}
!148 = metadata !{i32 786443, metadata !144, i32 112, i32 25, metadata !29, i32 13} ; [ DW_TAG_lexical_block ]
!149 = metadata !{i32 118, i32 3, metadata !150, null}
!150 = metadata !{i32 786443, metadata !144, i32 117, i32 7, metadata !29, i32 14} ; [ DW_TAG_lexical_block ]
!151 = metadata !{i32 114, i32 3, metadata !148, null}
!152 = metadata !{i32 115, i32 4, metadata !148, null}
!153 = metadata !{i32 119, i32 3, metadata !150, null}
!154 = metadata !{i32 120, i32 4, metadata !150, null}
!155 = metadata !{i32 121, i32 3, metadata !150, null}
!156 = metadata !{i32 122, i32 8, metadata !157, null}
!157 = metadata !{i32 786443, metadata !150, i32 122, i32 3, metadata !29, i32 15} ; [ DW_TAG_lexical_block ]
!158 = metadata !{i32 122, i32 23, metadata !157, null}
!159 = metadata !{i32 124, i32 2, metadata !160, null}
!160 = metadata !{i32 786443, metadata !157, i32 122, i32 29, metadata !29, i32 16} ; [ DW_TAG_lexical_block ]
!161 = metadata !{i32 130, i32 4, metadata !144, null}
!162 = metadata !{i32 130, i32 58, metadata !144, null}
!163 = metadata !{i32 130, i32 76, metadata !144, null}
!164 = metadata !{i32 131, i32 4, metadata !144, null}
!165 = metadata !{i32 132, i32 4, metadata !144, null}
!166 = metadata !{i32 133, i32 4, metadata !144, null}
!167 = metadata !{i32 134, i32 4, metadata !144, null}
!168 = metadata !{i32 135, i32 4, metadata !144, null}
!169 = metadata !{i32 136, i32 4, metadata !144, null}
!170 = metadata !{i32 137, i32 4, metadata !144, null}
!171 = metadata !{i32 138, i32 4, metadata !144, null}
!172 = metadata !{i32 139, i32 4, metadata !144, null}
!173 = metadata !{i32 143, i32 9, metadata !174, null}
!174 = metadata !{i32 786443, metadata !144, i32 143, i32 4, metadata !29, i32 17} ; [ DW_TAG_lexical_block ]
!175 = metadata !{i32 143, i32 21, metadata !174, null}
!176 = metadata !{i32 145, i32 2, metadata !177, null}
!177 = metadata !{i32 786443, metadata !174, i32 143, i32 26, metadata !29, i32 18} ; [ DW_TAG_lexical_block ]
!178 = metadata !{i32 146, i32 7, metadata !177, null}
!179 = metadata !{i32 147, i32 7, metadata !177, null}
!180 = metadata !{i32 148, i32 7, metadata !177, null}
!181 = metadata !{i32 149, i32 7, metadata !177, null}
!182 = metadata !{i32 150, i32 7, metadata !177, null}
!183 = metadata !{i32 151, i32 7, metadata !177, null}
!184 = metadata !{i32 152, i32 7, metadata !177, null}
!185 = metadata !{i32 786689, metadata !186, metadata !"bytes", metadata !187, i32 50331659, metadata !43, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!186 = metadata !{i32 786478, i32 0, metadata !187, metadata !"sha256", metadata !"sha256", metadata !"", metadata !187, i32 9, metadata !188, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !53, i32 12} ; [ DW_TAG_subprogram ]
!187 = metadata !{i32 786473, metadata !"sha256.c", metadata !"C:\5CStudent\5CSHA_new", null} ; [ DW_TAG_file_type ]
!188 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !189, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!189 = metadata !{null, metadata !52, metadata !43, metadata !43, metadata !52}
!190 = metadata !{i32 790529, metadata !191, metadata !"sha256ctx.datalen", null, i32 29, metadata !59, i32 0, i32 0} ; [ DW_TAG_auto_variable_field ]
!191 = metadata !{i32 786688, metadata !192, metadata !"sha256ctx", metadata !187, i32 29, metadata !33, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!192 = metadata !{i32 786443, metadata !186, i32 12, i32 80, metadata !187, i32 19} ; [ DW_TAG_lexical_block ]
!193 = metadata !{i32 790529, metadata !191, metadata !"sha256ctx.bitlen[0]", null, i32 29, metadata !194, i32 0, i32 0} ; [ DW_TAG_auto_variable_field ]
!194 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 32, i64 32, i32 0, i32 0, null, metadata !195, i32 0, i32 0} ; [ DW_TAG_array_type ]
!195 = metadata !{metadata !43}
!196 = metadata !{i32 790529, metadata !191, metadata !"sha256ctx.bitlen[1]", null, i32 29, metadata !194, i32 0, i32 0} ; [ DW_TAG_auto_variable_field ]
!197 = metadata !{i32 790529, metadata !191, metadata !"sha256ctx.state[0]", null, i32 29, metadata !194, i32 0, i32 0} ; [ DW_TAG_auto_variable_field ]
!198 = metadata !{i32 790529, metadata !191, metadata !"sha256ctx.state[1]", null, i32 29, metadata !194, i32 0, i32 0} ; [ DW_TAG_auto_variable_field ]
!199 = metadata !{i32 790529, metadata !191, metadata !"sha256ctx.state[2]", null, i32 29, metadata !194, i32 0, i32 0} ; [ DW_TAG_auto_variable_field ]
!200 = metadata !{i32 790529, metadata !191, metadata !"sha256ctx.state[3]", null, i32 29, metadata !194, i32 0, i32 0} ; [ DW_TAG_auto_variable_field ]
!201 = metadata !{i32 790529, metadata !191, metadata !"sha256ctx.state[4]", null, i32 29, metadata !194, i32 0, i32 0} ; [ DW_TAG_auto_variable_field ]
!202 = metadata !{i32 790529, metadata !191, metadata !"sha256ctx.state[5]", null, i32 29, metadata !194, i32 0, i32 0} ; [ DW_TAG_auto_variable_field ]
!203 = metadata !{i32 790529, metadata !191, metadata !"sha256ctx.state[6]", null, i32 29, metadata !194, i32 0, i32 0} ; [ DW_TAG_auto_variable_field ]
!204 = metadata !{i32 790529, metadata !191, metadata !"sha256ctx.state[7]", null, i32 29, metadata !194, i32 0, i32 0} ; [ DW_TAG_auto_variable_field ]
!205 = metadata !{i32 786688, metadata !192, metadata !"seg_offset", metadata !187, i32 24, metadata !43, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!206 = metadata !{metadata !207}
!207 = metadata !{i32 0, i32 7, metadata !208}
!208 = metadata !{metadata !209}
!209 = metadata !{metadata !"data", metadata !210, metadata !"unsigned char", i32 0, i32 7}
!210 = metadata !{metadata !211}
!211 = metadata !{i32 0, i32 255, i32 1}
!212 = metadata !{metadata !213}
!213 = metadata !{i32 0, i32 31, metadata !214}
!214 = metadata !{metadata !215}
!215 = metadata !{metadata !"base_offset", metadata !216, metadata !"unsigned int", i32 0, i32 31}
!216 = metadata !{metadata !217}
!217 = metadata !{i32 0, i32 0, i32 0}
!218 = metadata !{metadata !219}
!219 = metadata !{i32 0, i32 31, metadata !220}
!220 = metadata !{metadata !221}
!221 = metadata !{metadata !"bytes", metadata !216, metadata !"unsigned int", i32 0, i32 31}
!222 = metadata !{metadata !223}
!223 = metadata !{i32 0, i32 7, metadata !224}
!224 = metadata !{metadata !225}
!225 = metadata !{metadata !"digest", metadata !226, metadata !"unsigned char", i32 0, i32 7}
!226 = metadata !{metadata !227}
!227 = metadata !{i32 0, i32 31, i32 1}
!228 = metadata !{i32 11, i32 18, metadata !186, null}
!229 = metadata !{i32 786689, metadata !186, metadata !"base_offset", metadata !187, i32 33554442, metadata !43, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!230 = metadata !{i32 10, i32 18, metadata !186, null}
!231 = metadata !{i32 786689, metadata !186, metadata !"data", null, i32 9, metadata !232, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!232 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 2048, i64 8, i32 0, i32 0, metadata !39, metadata !233, i32 0, i32 0} ; [ DW_TAG_array_type ]
!233 = metadata !{metadata !234}
!234 = metadata !{i32 786465, i64 0, i64 255}     ; [ DW_TAG_subrange_type ]
!235 = metadata !{i32 9, i32 28, metadata !186, null}
!236 = metadata !{i32 786689, metadata !186, metadata !"digest", null, i32 12, metadata !237, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!237 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 256, i64 8, i32 0, i32 0, metadata !39, metadata !238, i32 0, i32 0} ; [ DW_TAG_array_type ]
!238 = metadata !{metadata !239}
!239 = metadata !{i32 786465, i64 0, i64 31}      ; [ DW_TAG_subrange_type ]
!240 = metadata !{i32 12, i32 19, metadata !186, null}
!241 = metadata !{i32 18, i32 1, metadata !192, null}
!242 = metadata !{i32 19, i32 1, metadata !192, null}
!243 = metadata !{i32 20, i32 1, metadata !192, null}
!244 = metadata !{i32 786688, metadata !192, metadata !"seg_buf", metadata !187, i32 23, metadata !38, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!245 = metadata !{i32 23, i32 16, metadata !192, null}
!246 = metadata !{i32 786688, metadata !192, metadata !"n", metadata !187, i32 26, metadata !43, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!247 = metadata !{i32 26, i32 24, metadata !192, null}
!248 = metadata !{i32 790529, metadata !191, metadata !"sha256ctx.data", null, i32 29, metadata !64, i32 0, i32 0} ; [ DW_TAG_auto_variable_field ]
!249 = metadata !{i32 29, i32 13, metadata !192, null}
!250 = metadata !{i32 33, i32 2, metadata !192, null}
!251 = metadata !{i32 40, i32 4, metadata !252, null}
!252 = metadata !{i32 786443, metadata !253, i32 37, i32 3, metadata !187, i32 21} ; [ DW_TAG_lexical_block ]
!253 = metadata !{i32 786443, metadata !192, i32 34, i32 2, metadata !187, i32 20} ; [ DW_TAG_lexical_block ]
!254 = metadata !{i32 34, i32 3, metadata !253, null}
!255 = metadata !{i32 35, i32 1, metadata !253, null}
!256 = metadata !{i32 36, i32 2, metadata !253, null}
!257 = metadata !{i32 38, i32 9, metadata !258, null}
!258 = metadata !{i32 786443, metadata !252, i32 38, i32 4, metadata !187, i32 22} ; [ DW_TAG_lexical_block ]
!259 = metadata !{i32 46, i32 9, metadata !260, null}
!260 = metadata !{i32 786443, metadata !261, i32 46, i32 4, metadata !187, i32 24} ; [ DW_TAG_lexical_block ]
!261 = metadata !{i32 786443, metadata !253, i32 45, i32 3, metadata !187, i32 23} ; [ DW_TAG_lexical_block ]
!262 = metadata !{i32 38, i32 20, metadata !258, null}
!263 = metadata !{i32 39, i32 5, metadata !258, null}
!264 = metadata !{i32 786688, metadata !192, metadata !"i", metadata !187, i32 25, metadata !265, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!265 = metadata !{i32 786468, null, metadata !"int", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!266 = metadata !{i32 42, i32 4, metadata !252, null}
!267 = metadata !{i32 41, i32 4, metadata !252, null}
!268 = metadata !{i32 43, i32 3, metadata !252, null}
!269 = metadata !{i32 46, i32 19, metadata !260, null}
!270 = metadata !{i32 48, i32 2, metadata !271, null}
!271 = metadata !{i32 786443, metadata !260, i32 48, i32 2, metadata !187, i32 25} ; [ DW_TAG_lexical_block ]
!272 = metadata !{i32 49, i32 4, metadata !261, null}
!273 = metadata !{i32 52, i32 2, metadata !253, null}
!274 = metadata !{i32 55, i32 2, metadata !192, null}
!275 = metadata !{i32 57, i32 7, metadata !276, null}
!276 = metadata !{i32 786443, metadata !192, i32 57, i32 2, metadata !187, i32 26} ; [ DW_TAG_lexical_block ]
!277 = metadata !{i32 57, i32 18, metadata !276, null}
!278 = metadata !{i32 60, i32 3, metadata !279, null}
!279 = metadata !{i32 786443, metadata !276, i32 57, i32 23, metadata !187, i32 27} ; [ DW_TAG_lexical_block ]
!280 = metadata !{i32 62, i32 1, metadata !192, null}
