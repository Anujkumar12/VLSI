; ModuleID = 'C:/Student/SHA_new/sha/solution1/.autopilot/db/a.o.2.bc'
target datalayout = "e-p:32:32:32-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-f80:128:128-v64:64:64-v128:128:128-a0:0:64-f80:32:32-n8:16:32-S32"
target triple = "i686-pc-mingw32"

@sha256.str = internal unnamed_addr constant [7 x i8] c"sha256\00" ; [#uses=1 type=[7 x i8]*]
@k = constant [64 x i32] [i32 1116352408, i32 1899447441, i32 -1245643825, i32 -373957723, i32 961987163, i32 1508970993, i32 -1841331548, i32 -1424204075, i32 -670586216, i32 310598401, i32 607225278, i32 1426881987, i32 1925078388, i32 -2132889090, i32 -1680079193, i32 -1046744716, i32 -459576895, i32 -272742522, i32 264347078, i32 604807628, i32 770255983, i32 1249150122, i32 1555081692, i32 1996064986, i32 -1740746414, i32 -1473132947, i32 -1341970488, i32 -1084653625, i32 -958395405, i32 -710438585, i32 113926993, i32 338241895, i32 666307205, i32 773529912, i32 1294757372, i32 1396182291, i32 1695183700, i32 1986661051, i32 -2117940946, i32 -1838011259, i32 -1564481375, i32 -1474664885, i32 -1035236496, i32 -949202525, i32 -778901479, i32 -694614492, i32 -200395387, i32 275423344, i32 430227734, i32 506948616, i32 659060556, i32 883997877, i32 958139571, i32 1322822218, i32 1537002063, i32 1747873779, i32 1955562222, i32 2024104815, i32 -2067236844, i32 -1933114872, i32 -1866530822, i32 -1538233109, i32 -1090935817, i32 -965641998], align 4 ; [#uses=1 type=[64 x i32]*]
@.str8 = private unnamed_addr constant [12 x i8] c"hls_label_7\00", align 1 ; [#uses=2 type=[12 x i8]*]
@.str7 = private unnamed_addr constant [10 x i8] c"s_axilite\00", align 1 ; [#uses=5 type=[10 x i8]*]
@.str1 = private unnamed_addr constant [1 x i8] zeroinitializer, align 1 ; [#uses=31 type=[1 x i8]*]

; [#uses=2]
define internal fastcc { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } @sha256_update([64 x i8]* nocapture %ctx.data, i32 %ctx.datalen.read, i32 %.read1, i32 %.read2, i32 %.read3, i32 %.read4, i32 %.read5, i32 %.read6, i32 %.read7, i32 %.read8, i32 %.read9, i32 %.read10, [64 x i8]* nocapture %data, i32 %len) {
  call void (...)* @_ssdm_SpecKeepAssert(i32 %len), !hlsrange !41
  call void @llvm.dbg.value(metadata !{[64 x i8]* %ctx.data}, i64 0, metadata !42), !dbg !70 ; [debug line = 89:32] [debug variable = ctx.data]
  call void @llvm.dbg.value(metadata !{i32 %ctx.datalen.read}, i64 0, metadata !71), !dbg !70 ; [debug line = 89:32] [debug variable = ctx.datalen]
  call void @llvm.dbg.value(metadata !{[64 x i8]* %data}, i64 0, metadata !75), !dbg !76 ; [debug line = 89:67] [debug variable = data]
  call void @llvm.dbg.value(metadata !{i32 %len}, i64 0, metadata !77), !dbg !78 ; [debug line = 89:105] [debug variable = len]
  br label %1, !dbg !79                           ; [debug line = 93:9]

; <label>:1                                       ; preds = %._crit_edge, %0
  %ctx.bitlen = phi i32 [ %.read1, %0 ], [ %ctx.bitlen.0.1, %._crit_edge ] ; [#uses=4 type=i32]
  %ctx.bitlen.1 = phi i32 [ %.read2, %0 ], [ %ctx.bitlen.1.2, %._crit_edge ] ; [#uses=4 type=i32]
  %ctx.state = phi i32 [ %.read3, %0 ], [ %ctx.state.0.1, %._crit_edge ] ; [#uses=3 type=i32]
  %ctx.state.1 = phi i32 [ %.read4, %0 ], [ %ctx.state.1.1, %._crit_edge ] ; [#uses=3 type=i32]
  %ctx.state.2 = phi i32 [ %.read5, %0 ], [ %ctx.state.2.1, %._crit_edge ] ; [#uses=3 type=i32]
  %ctx.state.3 = phi i32 [ %.read6, %0 ], [ %ctx.state.3.1, %._crit_edge ] ; [#uses=3 type=i32]
  %ctx.state.4 = phi i32 [ %.read7, %0 ], [ %ctx.state.4.1, %._crit_edge ] ; [#uses=3 type=i32]
  %ctx.state.5 = phi i32 [ %.read8, %0 ], [ %ctx.state.5.1, %._crit_edge ] ; [#uses=3 type=i32]
  %ctx.state.6 = phi i32 [ %.read9, %0 ], [ %ctx.state.6.1, %._crit_edge ] ; [#uses=3 type=i32]
  %ctx.state.7 = phi i32 [ %.read10, %0 ], [ %ctx.state.7.1, %._crit_edge ] ; [#uses=3 type=i32]
  %ctx.datalen = phi i32 [ %ctx.datalen.read, %0 ], [ %ctx.datalen.1.cast, %._crit_edge ] ; [#uses=4 type=i32]
  %i = phi i7 [ 0, %0 ], [ %i.1, %._crit_edge ]   ; [#uses=3 type=i7]
  %i.cast2 = zext i7 %i to i32, !dbg !79          ; [#uses=1 type=i32] [debug line = 93:9]
  %i.cast = zext i7 %i to i8, !dbg !79            ; [#uses=1 type=i8] [debug line = 93:9]
  %len.cast = trunc i32 %len to i8, !dbg !79      ; [#uses=1 type=i8] [debug line = 93:9]
  %exitcond = icmp eq i8 %i.cast, %len.cast, !dbg !79 ; [#uses=1 type=i1] [debug line = 93:9]
  call void (...)* @_ssdm_op_SpecLoopTripCount(i64 12, i64 64, i64 56)
  br i1 %exitcond, label %3, label %2, !dbg !79   ; [debug line = 93:9]

; <label>:2                                       ; preds = %1
  %data.addr = getelementptr [64 x i8]* %data, i32 0, i32 %i.cast2, !dbg !82 ; [#uses=1 type=i8*] [debug line = 95:2]
  %data.load = load i8* %data.addr, align 1, !dbg !82 ; [#uses=1 type=i8] [debug line = 95:2]
  %ctx.data.addr = getelementptr [64 x i8]* %ctx.data, i32 0, i32 %ctx.datalen, !dbg !82 ; [#uses=1 type=i8*] [debug line = 95:2]
  store i8 %data.load, i8* %ctx.data.addr, align 1, !dbg !82 ; [debug line = 95:2]
  %tmp = trunc i32 %ctx.datalen to i8             ; [#uses=1 type=i8]
  %tmp.5 = trunc i32 %ctx.datalen to i7           ; [#uses=1 type=i7]
  %ctx.datalen.assign.cast1 = add i7 %tmp.5, 1, !dbg !84 ; [#uses=1 type=i7] [debug line = 97:7]
  %tmp.1 = icmp eq i8 %tmp, 63, !dbg !84          ; [#uses=1 type=i1] [debug line = 97:7]
  br i1 %tmp.1, label %._crit_edge1, label %._crit_edge, !dbg !84 ; [debug line = 97:7]

._crit_edge1:                                     ; preds = %2
  %call.ret = call fastcc { i32, i32, i32, i32, i32, i32, i32, i32 } @sha256_transform(i32 %ctx.state, i32 %ctx.state.1, i32 %ctx.state.2, i32 %ctx.state.3, i32 %ctx.state.4, i32 %ctx.state.5, i32 %ctx.state.6, i32 %ctx.state.7, [64 x i8]* %ctx.data), !dbg !85 ; [#uses=8 type={ i32, i32, i32, i32, i32, i32, i32, i32 }] [debug line = 98:10]
  %ctx.state.0.ret = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32 } %call.ret, 0, !dbg !85 ; [#uses=1 type=i32] [debug line = 98:10]
  %ctx.state.1.ret = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32 } %call.ret, 1, !dbg !85 ; [#uses=1 type=i32] [debug line = 98:10]
  %ctx.state.2.ret = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32 } %call.ret, 2, !dbg !85 ; [#uses=1 type=i32] [debug line = 98:10]
  %ctx.state.3.ret = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32 } %call.ret, 3, !dbg !85 ; [#uses=1 type=i32] [debug line = 98:10]
  %ctx.state.4.ret = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32 } %call.ret, 4, !dbg !85 ; [#uses=1 type=i32] [debug line = 98:10]
  %ctx.state.5.ret = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32 } %call.ret, 5, !dbg !85 ; [#uses=1 type=i32] [debug line = 98:10]
  %ctx.state.6.ret = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32 } %call.ret, 6, !dbg !85 ; [#uses=1 type=i32] [debug line = 98:10]
  %ctx.state.7.ret = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32 } %call.ret, 7, !dbg !85 ; [#uses=1 type=i32] [debug line = 98:10]
  %tmp.2 = icmp ugt i32 %ctx.bitlen, -513, !dbg !87 ; [#uses=1 type=i1] [debug line = 99:10]
  %tmp.3 = add i32 %ctx.bitlen.1, 1, !dbg !88     ; [#uses=1 type=i32] [debug line = 99:51]
  %tmp.3.ctx.bitlen.1 = select i1 %tmp.2, i32 %tmp.3, i32 %ctx.bitlen.1, !dbg !87 ; [#uses=1 type=i32] [debug line = 99:10]
  %tmp.4 = add i32 %ctx.bitlen, 512, !dbg !89     ; [#uses=1 type=i32] [debug line = 99:69]
  br label %._crit_edge, !dbg !90                 ; [debug line = 101:7]

._crit_edge:                                      ; preds = %._crit_edge1, %2
  %ctx.bitlen.0.1 = phi i32 [ %tmp.4, %._crit_edge1 ], [ %ctx.bitlen, %2 ] ; [#uses=1 type=i32]
  %ctx.bitlen.1.2 = phi i32 [ %tmp.3.ctx.bitlen.1, %._crit_edge1 ], [ %ctx.bitlen.1, %2 ] ; [#uses=1 type=i32]
  %ctx.state.0.1 = phi i32 [ %ctx.state.0.ret, %._crit_edge1 ], [ %ctx.state, %2 ] ; [#uses=1 type=i32]
  %ctx.state.1.1 = phi i32 [ %ctx.state.1.ret, %._crit_edge1 ], [ %ctx.state.1, %2 ] ; [#uses=1 type=i32]
  %ctx.state.2.1 = phi i32 [ %ctx.state.2.ret, %._crit_edge1 ], [ %ctx.state.2, %2 ] ; [#uses=1 type=i32]
  %ctx.state.3.1 = phi i32 [ %ctx.state.3.ret, %._crit_edge1 ], [ %ctx.state.3, %2 ] ; [#uses=1 type=i32]
  %ctx.state.4.1 = phi i32 [ %ctx.state.4.ret, %._crit_edge1 ], [ %ctx.state.4, %2 ] ; [#uses=1 type=i32]
  %ctx.state.5.1 = phi i32 [ %ctx.state.5.ret, %._crit_edge1 ], [ %ctx.state.5, %2 ] ; [#uses=1 type=i32]
  %ctx.state.6.1 = phi i32 [ %ctx.state.6.ret, %._crit_edge1 ], [ %ctx.state.6, %2 ] ; [#uses=1 type=i32]
  %ctx.state.7.1 = phi i32 [ %ctx.state.7.ret, %._crit_edge1 ], [ %ctx.state.7, %2 ] ; [#uses=1 type=i32]
  %ctx.datalen.1 = phi i7 [ 0, %._crit_edge1 ], [ %ctx.datalen.assign.cast1, %2 ] ; [#uses=1 type=i7]
  %ctx.datalen.1.cast = zext i7 %ctx.datalen.1 to i32, !dbg !91 ; [#uses=1 type=i32] [debug line = 93:23]
  %i.1 = add i7 %i, 1, !dbg !91                   ; [#uses=1 type=i7] [debug line = 93:23]
  call void @llvm.dbg.value(metadata !{i7 %i.1}, i64 0, metadata !92), !dbg !91 ; [debug line = 93:23] [debug variable = i]
  br label %1, !dbg !91                           ; [debug line = 93:23]

; <label>:3                                       ; preds = %1
  %ctx.datalen.lcssa = phi i32 [ %ctx.datalen, %1 ] ; [#uses=1 type=i32]
  %ctx.state.7.lcssa = phi i32 [ %ctx.state.7, %1 ] ; [#uses=1 type=i32]
  %ctx.state.6.lcssa = phi i32 [ %ctx.state.6, %1 ] ; [#uses=1 type=i32]
  %ctx.state.5.lcssa = phi i32 [ %ctx.state.5, %1 ] ; [#uses=1 type=i32]
  %ctx.state.4.lcssa = phi i32 [ %ctx.state.4, %1 ] ; [#uses=1 type=i32]
  %ctx.state.3.lcssa = phi i32 [ %ctx.state.3, %1 ] ; [#uses=1 type=i32]
  %ctx.state.2.lcssa = phi i32 [ %ctx.state.2, %1 ] ; [#uses=1 type=i32]
  %ctx.state.1.lcssa = phi i32 [ %ctx.state.1, %1 ] ; [#uses=1 type=i32]
  %ctx.state.lcssa = phi i32 [ %ctx.state, %1 ]   ; [#uses=1 type=i32]
  %ctx.bitlen.1.lcssa = phi i32 [ %ctx.bitlen.1, %1 ] ; [#uses=1 type=i32]
  %ctx.bitlen.lcssa = phi i32 [ %ctx.bitlen, %1 ] ; [#uses=1 type=i32]
  %mrv. = insertvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } undef, i32 %ctx.datalen.lcssa, 0, !dbg !93 ; [#uses=1 type={ i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 }] [debug line = 103:1]
  %mrv.1 = insertvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %mrv., i32 %ctx.bitlen.lcssa, 1, !dbg !93 ; [#uses=1 type={ i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 }] [debug line = 103:1]
  %mrv.2 = insertvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %mrv.1, i32 %ctx.bitlen.1.lcssa, 2, !dbg !93 ; [#uses=1 type={ i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 }] [debug line = 103:1]
  %mrv.3 = insertvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %mrv.2, i32 %ctx.state.lcssa, 3, !dbg !93 ; [#uses=1 type={ i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 }] [debug line = 103:1]
  %mrv.4 = insertvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %mrv.3, i32 %ctx.state.1.lcssa, 4, !dbg !93 ; [#uses=1 type={ i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 }] [debug line = 103:1]
  %mrv.5 = insertvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %mrv.4, i32 %ctx.state.2.lcssa, 5, !dbg !93 ; [#uses=1 type={ i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 }] [debug line = 103:1]
  %mrv.6 = insertvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %mrv.5, i32 %ctx.state.3.lcssa, 6, !dbg !93 ; [#uses=1 type={ i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 }] [debug line = 103:1]
  %mrv.7 = insertvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %mrv.6, i32 %ctx.state.4.lcssa, 7, !dbg !93 ; [#uses=1 type={ i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 }] [debug line = 103:1]
  %mrv.8 = insertvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %mrv.7, i32 %ctx.state.5.lcssa, 8, !dbg !93 ; [#uses=1 type={ i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 }] [debug line = 103:1]
  %mrv.9 = insertvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %mrv.8, i32 %ctx.state.6.lcssa, 9, !dbg !93 ; [#uses=1 type={ i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 }] [debug line = 103:1]
  %mrv.10 = insertvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %mrv.9, i32 %ctx.state.7.lcssa, 10, !dbg !93 ; [#uses=1 type={ i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 }] [debug line = 103:1]
  ret { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %mrv.10, !dbg !93 ; [debug line = 103:1]
}

; [#uses=3]
define internal fastcc { i32, i32, i32, i32, i32, i32, i32, i32 } @sha256_transform(i32 %ctx.state.0.read, i32 %ctx.state.1.read, i32 %ctx.state.2.read, i32 %ctx.state.3.read, i32 %ctx.state.4.read, i32 %ctx.state.5.read, i32 %ctx.state.6.read, i32 %ctx.state.7.read, [64 x i8]* nocapture %data) readonly {
  %m = alloca [64 x i32], align 4                 ; [#uses=7 type=[64 x i32]*]
  call void @llvm.dbg.value(metadata !{[64 x i8]* %data}, i64 0, metadata !94), !dbg !98 ; [debug line = 30:70] [debug variable = data]
  call void @llvm.dbg.declare(metadata !{[64 x i32]* %m}, metadata !99), !dbg !101 ; [debug line = 32:60] [debug variable = m]
  br label %1, !dbg !102                          ; [debug line = 34:9]

; <label>:1                                       ; preds = %2, %0
  %i = phi i5 [ 0, %0 ], [ %tmp.5, %2 ]           ; [#uses=3 type=i5]
  %j = phi i7 [ 0, %0 ], [ %j.1, %2 ]             ; [#uses=3 type=i7]
  %i.cast = zext i5 %i to i32, !dbg !102          ; [#uses=1 type=i32] [debug line = 34:9]
  %j.cast1 = trunc i7 %j to i6, !dbg !102         ; [#uses=3 type=i6] [debug line = 34:9]
  %j.cast = zext i7 %j to i32, !dbg !102          ; [#uses=1 type=i32] [debug line = 34:9]
  %tmp = icmp eq i5 %i, -16, !dbg !102            ; [#uses=1 type=i1] [debug line = 34:9]
  call void (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  br i1 %tmp, label %.preheader.preheader, label %2, !dbg !102 ; [debug line = 34:9]

.preheader.preheader:                             ; preds = %1
  br label %.preheader, !dbg !104                 ; [debug line = 37:4]

; <label>:2                                       ; preds = %1
  %data.addr = getelementptr [64 x i8]* %data, i32 0, i32 %j.cast, !dbg !106 ; [#uses=1 type=i8*] [debug line = 36:2]
  %data.load = load i8* %data.addr, align 1, !dbg !106 ; [#uses=1 type=i8] [debug line = 36:2]
  %tmp.8 = or i6 %j.cast1, 1, !dbg !106           ; [#uses=1 type=i6] [debug line = 36:2]
  %tmp.8.cast = zext i6 %tmp.8 to i32, !dbg !106  ; [#uses=1 type=i32] [debug line = 36:2]
  %data.addr.1 = getelementptr [64 x i8]* %data, i32 0, i32 %tmp.8.cast, !dbg !106 ; [#uses=1 type=i8*] [debug line = 36:2]
  %data.load.1 = load i8* %data.addr.1, align 1, !dbg !106 ; [#uses=1 type=i8] [debug line = 36:2]
  %tmp.9.cast = zext i8 %data.load.1 to i24, !dbg !106 ; [#uses=1 type=i24] [debug line = 36:2]
  %tmp. = shl nuw i24 %tmp.9.cast, 16, !dbg !106  ; [#uses=1 type=i24] [debug line = 36:2]
  %tmp.1 = or i6 %j.cast1, 2, !dbg !106           ; [#uses=1 type=i6] [debug line = 36:2]
  %tmp.1.cast = zext i6 %tmp.1 to i32, !dbg !106  ; [#uses=1 type=i32] [debug line = 36:2]
  %data.addr.2 = getelementptr [64 x i8]* %data, i32 0, i32 %tmp.1.cast, !dbg !106 ; [#uses=1 type=i8*] [debug line = 36:2]
  %data.load.2 = load i8* %data.addr.2, align 1, !dbg !106 ; [#uses=1 type=i8] [debug line = 36:2]
  %tmp.2.cast = zext i8 %data.load.2 to i16, !dbg !106 ; [#uses=1 type=i16] [debug line = 36:2]
  %tmp.3 = shl nuw i16 %tmp.2.cast, 8, !dbg !106  ; [#uses=1 type=i16] [debug line = 36:2]
  %tmp.4 = or i6 %j.cast1, 3, !dbg !106           ; [#uses=1 type=i6] [debug line = 36:2]
  %tmp.4.cast = zext i6 %tmp.4 to i32, !dbg !106  ; [#uses=1 type=i32] [debug line = 36:2]
  %data.addr.3 = getelementptr [64 x i8]* %data, i32 0, i32 %tmp.4.cast, !dbg !106 ; [#uses=1 type=i8*] [debug line = 36:2]
  %data.load.3 = load i8* %data.addr.3, align 1, !dbg !106 ; [#uses=1 type=i8] [debug line = 36:2]
  %tmp.6 = call i24 @_ssdm_op_BitConcatenate.i24.i8.i16(i8 0, i16 %tmp.3) ; [#uses=1 type=i24]
  %tmp.7 = or i24 %tmp.6, %tmp.                   ; [#uses=1 type=i24]
  %tmp.9 = call i16 @_ssdm_op_PartSelect.i16.i24.i32.i32(i24 %tmp.7, i32 8, i32 23) ; [#uses=1 type=i16]
  %tmp.2 = call i32 @_ssdm_op_BitConcatenate.i32.i8.i16.i8(i8 %data.load, i16 %tmp.9, i8 %data.load.3), !dbg !106 ; [#uses=1 type=i32] [debug line = 36:2]
  %m.addr = getelementptr inbounds [64 x i32]* %m, i32 0, i32 %i.cast, !dbg !106 ; [#uses=1 type=i32*] [debug line = 36:2]
  store i32 %tmp.2, i32* %m.addr, align 4, !dbg !106 ; [debug line = 36:2]
  %tmp.5 = add i5 %i, 1, !dbg !108                ; [#uses=1 type=i5] [debug line = 34:26]
  %j.1 = add i7 %j, 4, !dbg !108                  ; [#uses=1 type=i7] [debug line = 34:26]
  call void @llvm.dbg.value(metadata !{i7 %j.1}, i64 0, metadata !109), !dbg !108 ; [debug line = 34:26] [debug variable = j]
  br label %1, !dbg !108                          ; [debug line = 34:26]

.preheader:                                       ; preds = %3, %.preheader.preheader
  %i.1 = phi i7 [ %i.3, %3 ], [ 16, %.preheader.preheader ] ; [#uses=7 type=i7]
  %i.1.cast = zext i7 %i.1 to i32, !dbg !104      ; [#uses=1 type=i32] [debug line = 37:4]
  %exitcond = icmp eq i7 %i.1, -64, !dbg !104     ; [#uses=1 type=i1] [debug line = 37:4]
  call void (...)* @_ssdm_op_SpecLoopTripCount(i64 48, i64 48, i64 48)
  br i1 %exitcond, label %.preheader1.preheader, label %3, !dbg !104 ; [debug line = 37:4]

.preheader1.preheader:                            ; preds = %.preheader
  br label %.preheader1, !dbg !110                ; [debug line = 50:9]

; <label>:3                                       ; preds = %.preheader
  %tmp.10 = add i7 %i.1, -2, !dbg !112            ; [#uses=1 type=i7] [debug line = 39:2]
  %tmp.14.cast = zext i7 %tmp.10 to i32, !dbg !112 ; [#uses=1 type=i32] [debug line = 39:2]
  %m.addr.1 = getelementptr inbounds [64 x i32]* %m, i32 0, i32 %tmp.14.cast, !dbg !112 ; [#uses=1 type=i32*] [debug line = 39:2]
  %m.load = load i32* %m.addr.1, align 4, !dbg !112 ; [#uses=5 type=i32] [debug line = 39:2]
  %tmp.11 = lshr i32 %m.load, 17, !dbg !112       ; [#uses=1 type=i32] [debug line = 39:2]
  %tmp.12 = shl i32 %m.load, 15, !dbg !112        ; [#uses=1 type=i32] [debug line = 39:2]
  %tmp.13 = or i32 %tmp.12, %tmp.11, !dbg !112    ; [#uses=1 type=i32] [debug line = 39:2]
  %tmp.14 = lshr i32 %m.load, 19, !dbg !112       ; [#uses=1 type=i32] [debug line = 39:2]
  %tmp.15 = shl i32 %m.load, 13, !dbg !112        ; [#uses=1 type=i32] [debug line = 39:2]
  %tmp.16 = or i32 %tmp.15, %tmp.14, !dbg !112    ; [#uses=1 type=i32] [debug line = 39:2]
  %tmp.17 = lshr i32 %m.load, 10, !dbg !112       ; [#uses=1 type=i32] [debug line = 39:2]
  %tmp2 = xor i32 %tmp.17, %tmp.16, !dbg !112     ; [#uses=1 type=i32] [debug line = 39:2]
  %tmp.18 = xor i32 %tmp2, %tmp.13, !dbg !112     ; [#uses=1 type=i32] [debug line = 39:2]
  %tmp.19 = add i7 %i.1, -7, !dbg !112            ; [#uses=1 type=i7] [debug line = 39:2]
  %tmp.24.cast = zext i7 %tmp.19 to i32, !dbg !112 ; [#uses=1 type=i32] [debug line = 39:2]
  %m.addr.2 = getelementptr inbounds [64 x i32]* %m, i32 0, i32 %tmp.24.cast, !dbg !112 ; [#uses=1 type=i32*] [debug line = 39:2]
  %m.load.1 = load i32* %m.addr.2, align 4, !dbg !112 ; [#uses=1 type=i32] [debug line = 39:2]
  %tmp.20 = add i7 %i.1, -15, !dbg !112           ; [#uses=1 type=i7] [debug line = 39:2]
  %tmp.25.cast = zext i7 %tmp.20 to i32, !dbg !112 ; [#uses=1 type=i32] [debug line = 39:2]
  %m.addr.3 = getelementptr inbounds [64 x i32]* %m, i32 0, i32 %tmp.25.cast, !dbg !112 ; [#uses=1 type=i32*] [debug line = 39:2]
  %m.load.2 = load i32* %m.addr.3, align 4, !dbg !112 ; [#uses=5 type=i32] [debug line = 39:2]
  %tmp.21 = lshr i32 %m.load.2, 7, !dbg !112      ; [#uses=1 type=i32] [debug line = 39:2]
  %tmp.22 = shl i32 %m.load.2, 25, !dbg !112      ; [#uses=1 type=i32] [debug line = 39:2]
  %tmp.23 = or i32 %tmp.22, %tmp.21, !dbg !112    ; [#uses=1 type=i32] [debug line = 39:2]
  %tmp.24 = lshr i32 %m.load.2, 18, !dbg !112     ; [#uses=1 type=i32] [debug line = 39:2]
  %tmp.25 = shl i32 %m.load.2, 14, !dbg !112      ; [#uses=1 type=i32] [debug line = 39:2]
  %tmp.26 = or i32 %tmp.25, %tmp.24, !dbg !112    ; [#uses=1 type=i32] [debug line = 39:2]
  %tmp.27 = lshr i32 %m.load.2, 3, !dbg !112      ; [#uses=1 type=i32] [debug line = 39:2]
  %tmp3 = xor i32 %tmp.27, %tmp.26, !dbg !112     ; [#uses=1 type=i32] [debug line = 39:2]
  %tmp.28 = xor i32 %tmp3, %tmp.23, !dbg !112     ; [#uses=1 type=i32] [debug line = 39:2]
  %tmp.29 = add i7 %i.1, -16, !dbg !112           ; [#uses=1 type=i7] [debug line = 39:2]
  %tmp.35.cast = zext i7 %tmp.29 to i32, !dbg !112 ; [#uses=1 type=i32] [debug line = 39:2]
  %m.addr.4 = getelementptr inbounds [64 x i32]* %m, i32 0, i32 %tmp.35.cast, !dbg !112 ; [#uses=1 type=i32*] [debug line = 39:2]
  %m.load.3 = load i32* %m.addr.4, align 4, !dbg !112 ; [#uses=1 type=i32] [debug line = 39:2]
  %tmp4 = add i32 %m.load.3, %m.load.1, !dbg !112 ; [#uses=1 type=i32] [debug line = 39:2]
  %tmp5 = add i32 %tmp.28, %tmp.18, !dbg !112     ; [#uses=1 type=i32] [debug line = 39:2]
  %tmp.30 = add i32 %tmp4, %tmp5, !dbg !112       ; [#uses=1 type=i32] [debug line = 39:2]
  %m.addr.5 = getelementptr inbounds [64 x i32]* %m, i32 0, i32 %i.1.cast, !dbg !112 ; [#uses=1 type=i32*] [debug line = 39:2]
  store i32 %tmp.30, i32* %m.addr.5, align 4, !dbg !112 ; [debug line = 39:2]
  %i.3 = add i7 %i.1, 1, !dbg !114                ; [#uses=1 type=i7] [debug line = 37:20]
  call void @llvm.dbg.value(metadata !{i7 %i.3}, i64 0, metadata !115), !dbg !114 ; [debug line = 37:20] [debug variable = i]
  br label %.preheader, !dbg !114                 ; [debug line = 37:20]

.preheader1:                                      ; preds = %4, %.preheader1.preheader
  %h1 = phi i32 [ %h, %4 ], [ %ctx.state.7.read, %.preheader1.preheader ] ; [#uses=2 type=i32]
  %h = phi i32 [ %g, %4 ], [ %ctx.state.6.read, %.preheader1.preheader ] ; [#uses=3 type=i32]
  %g = phi i32 [ %f, %4 ], [ %ctx.state.5.read, %.preheader1.preheader ] ; [#uses=3 type=i32]
  %f = phi i32 [ %e, %4 ], [ %ctx.state.4.read, %.preheader1.preheader ] ; [#uses=10 type=i32]
  %d1 = phi i32 [ %d, %4 ], [ %ctx.state.3.read, %.preheader1.preheader ] ; [#uses=2 type=i32]
  %d = phi i32 [ %c, %4 ], [ %ctx.state.2.read, %.preheader1.preheader ] ; [#uses=4 type=i32]
  %c = phi i32 [ %b, %4 ], [ %ctx.state.1.read, %.preheader1.preheader ] ; [#uses=4 type=i32]
  %b = phi i32 [ %a, %4 ], [ %ctx.state.0.read, %.preheader1.preheader ] ; [#uses=9 type=i32]
  %i.2 = phi i7 [ %i.4, %4 ], [ 0, %.preheader1.preheader ] ; [#uses=3 type=i7]
  %i.2.cast = zext i7 %i.2 to i32, !dbg !110      ; [#uses=2 type=i32] [debug line = 50:9]
  %tmp.31 = icmp eq i7 %i.2, -64, !dbg !110       ; [#uses=1 type=i1] [debug line = 50:9]
  call void (...)* @_ssdm_op_SpecLoopTripCount(i64 64, i64 64, i64 64)
  br i1 %tmp.31, label %5, label %4, !dbg !110    ; [debug line = 50:9]

; <label>:4                                       ; preds = %.preheader1
  %tmp.32 = lshr i32 %f, 6, !dbg !116             ; [#uses=1 type=i32] [debug line = 52:2]
  %tmp.33 = shl i32 %f, 26, !dbg !116             ; [#uses=1 type=i32] [debug line = 52:2]
  %tmp.34 = or i32 %tmp.32, %tmp.33, !dbg !116    ; [#uses=1 type=i32] [debug line = 52:2]
  %tmp.35 = lshr i32 %f, 11, !dbg !116            ; [#uses=1 type=i32] [debug line = 52:2]
  %tmp.36 = shl i32 %f, 21, !dbg !116             ; [#uses=1 type=i32] [debug line = 52:2]
  %tmp.37 = or i32 %tmp.35, %tmp.36, !dbg !116    ; [#uses=1 type=i32] [debug line = 52:2]
  %tmp.38 = lshr i32 %f, 25, !dbg !116            ; [#uses=1 type=i32] [debug line = 52:2]
  %tmp.39 = shl i32 %f, 7, !dbg !116              ; [#uses=1 type=i32] [debug line = 52:2]
  %tmp.40 = or i32 %tmp.38, %tmp.39, !dbg !116    ; [#uses=1 type=i32] [debug line = 52:2]
  %tmp6 = xor i32 %tmp.34, %tmp.37, !dbg !116     ; [#uses=1 type=i32] [debug line = 52:2]
  %tmp.41 = xor i32 %tmp6, %tmp.40, !dbg !116     ; [#uses=1 type=i32] [debug line = 52:2]
  %tmp.42 = and i32 %f, %g, !dbg !116             ; [#uses=1 type=i32] [debug line = 52:2]
  %tmp.43 = xor i32 %f, -1, !dbg !116             ; [#uses=1 type=i32] [debug line = 52:2]
  %tmp.44 = and i32 %h, %tmp.43, !dbg !116        ; [#uses=1 type=i32] [debug line = 52:2]
  %tmp.45 = xor i32 %tmp.42, %tmp.44, !dbg !116   ; [#uses=1 type=i32] [debug line = 52:2]
  %k.addr = getelementptr inbounds [64 x i32]* @k, i32 0, i32 %i.2.cast, !dbg !116 ; [#uses=1 type=i32*] [debug line = 52:2]
  %k.load = load i32* %k.addr, align 4, !dbg !116 ; [#uses=1 type=i32] [debug line = 52:2]
  %m.addr.6 = getelementptr inbounds [64 x i32]* %m, i32 0, i32 %i.2.cast, !dbg !116 ; [#uses=1 type=i32*] [debug line = 52:2]
  %m.load.4 = load i32* %m.addr.6, align 4, !dbg !116 ; [#uses=1 type=i32] [debug line = 52:2]
  %tmp9 = add i32 %m.load.4, %k.load, !dbg !116   ; [#uses=1 type=i32] [debug line = 52:2]
  %tmp11 = add i32 %tmp.45, %tmp.41, !dbg !116    ; [#uses=1 type=i32] [debug line = 52:2]
  %tmp10 = add i32 %h1, %tmp11, !dbg !116         ; [#uses=1 type=i32] [debug line = 52:2]
  %t1 = add i32 %tmp9, %tmp10, !dbg !116          ; [#uses=2 type=i32] [debug line = 52:2]
  call void @llvm.dbg.value(metadata !{i32 %t1}, i64 0, metadata !118), !dbg !116 ; [debug line = 52:2] [debug variable = t1]
  %tmp.46 = lshr i32 %b, 2, !dbg !119             ; [#uses=1 type=i32] [debug line = 53:7]
  %tmp.47 = shl i32 %b, 30, !dbg !119             ; [#uses=1 type=i32] [debug line = 53:7]
  %tmp.48 = or i32 %tmp.46, %tmp.47, !dbg !119    ; [#uses=1 type=i32] [debug line = 53:7]
  %tmp.49 = lshr i32 %b, 13, !dbg !119            ; [#uses=1 type=i32] [debug line = 53:7]
  %tmp.50 = shl i32 %b, 19, !dbg !119             ; [#uses=1 type=i32] [debug line = 53:7]
  %tmp.51 = or i32 %tmp.49, %tmp.50, !dbg !119    ; [#uses=1 type=i32] [debug line = 53:7]
  %tmp.52 = lshr i32 %b, 22, !dbg !119            ; [#uses=1 type=i32] [debug line = 53:7]
  %tmp.53 = shl i32 %b, 10, !dbg !119             ; [#uses=1 type=i32] [debug line = 53:7]
  %tmp.54 = or i32 %tmp.52, %tmp.53, !dbg !119    ; [#uses=1 type=i32] [debug line = 53:7]
  %tmp12 = xor i32 %tmp.48, %tmp.51, !dbg !119    ; [#uses=1 type=i32] [debug line = 53:7]
  %tmp.55 = xor i32 %tmp12, %tmp.54, !dbg !119    ; [#uses=1 type=i32] [debug line = 53:7]
  %tmp.56 = xor i32 %c, %d, !dbg !119             ; [#uses=1 type=i32] [debug line = 53:7]
  %tmp.57 = and i32 %b, %tmp.56, !dbg !119        ; [#uses=1 type=i32] [debug line = 53:7]
  %tmp.58 = and i32 %c, %d, !dbg !119             ; [#uses=1 type=i32] [debug line = 53:7]
  %tmp.59 = xor i32 %tmp.57, %tmp.58, !dbg !119   ; [#uses=1 type=i32] [debug line = 53:7]
  call void @llvm.dbg.value(metadata !{i32 %h}, i64 0, metadata !120), !dbg !121 ; [debug line = 54:7] [debug variable = h]
  call void @llvm.dbg.value(metadata !{i32 %g}, i64 0, metadata !122), !dbg !123 ; [debug line = 55:7] [debug variable = g]
  call void @llvm.dbg.value(metadata !{i32 %f}, i64 0, metadata !124), !dbg !125 ; [debug line = 56:7] [debug variable = f]
  %e = add i32 %d1, %t1, !dbg !126                ; [#uses=1 type=i32] [debug line = 57:7]
  call void @llvm.dbg.value(metadata !{i32 %e}, i64 0, metadata !127), !dbg !126 ; [debug line = 57:7] [debug variable = e]
  call void @llvm.dbg.value(metadata !{i32 %d}, i64 0, metadata !128), !dbg !129 ; [debug line = 58:7] [debug variable = d]
  call void @llvm.dbg.value(metadata !{i32 %c}, i64 0, metadata !130), !dbg !131 ; [debug line = 59:7] [debug variable = c]
  call void @llvm.dbg.value(metadata !{i32 %b}, i64 0, metadata !132), !dbg !133 ; [debug line = 60:7] [debug variable = b]
  %tmp13 = add i32 %t1, %tmp.59, !dbg !134        ; [#uses=1 type=i32] [debug line = 61:7]
  %a = add i32 %tmp.55, %tmp13, !dbg !134         ; [#uses=1 type=i32] [debug line = 61:7]
  call void @llvm.dbg.value(metadata !{i32 %a}, i64 0, metadata !135), !dbg !134 ; [debug line = 61:7] [debug variable = a]
  %i.4 = add i7 %i.2, 1, !dbg !136                ; [#uses=1 type=i7] [debug line = 50:24]
  call void @llvm.dbg.value(metadata !{i7 %i.4}, i64 0, metadata !115), !dbg !136 ; [debug line = 50:24] [debug variable = i]
  br label %.preheader1, !dbg !136                ; [debug line = 50:24]

; <label>:5                                       ; preds = %.preheader1
  %b.lcssa = phi i32 [ %b, %.preheader1 ]         ; [#uses=1 type=i32]
  %c.lcssa = phi i32 [ %c, %.preheader1 ]         ; [#uses=1 type=i32]
  %d.lcssa = phi i32 [ %d, %.preheader1 ]         ; [#uses=1 type=i32]
  %d1.lcssa = phi i32 [ %d1, %.preheader1 ]       ; [#uses=1 type=i32]
  %f.lcssa = phi i32 [ %f, %.preheader1 ]         ; [#uses=1 type=i32]
  %g.lcssa = phi i32 [ %g, %.preheader1 ]         ; [#uses=1 type=i32]
  %h.lcssa = phi i32 [ %h, %.preheader1 ]         ; [#uses=1 type=i32]
  %h1.lcssa = phi i32 [ %h1, %.preheader1 ]       ; [#uses=1 type=i32]
  %ctx.state = add i32 %b.lcssa, %ctx.state.0.read, !dbg !137 ; [#uses=1 type=i32] [debug line = 64:4]
  %ctx.state.1 = add i32 %c.lcssa, %ctx.state.1.read, !dbg !138 ; [#uses=1 type=i32] [debug line = 65:4]
  %ctx.state.2 = add i32 %d.lcssa, %ctx.state.2.read, !dbg !139 ; [#uses=1 type=i32] [debug line = 66:4]
  %ctx.state.3 = add i32 %d1.lcssa, %ctx.state.3.read, !dbg !140 ; [#uses=1 type=i32] [debug line = 67:4]
  %ctx.state.4 = add i32 %f.lcssa, %ctx.state.4.read, !dbg !141 ; [#uses=1 type=i32] [debug line = 68:4]
  %ctx.state.5 = add i32 %g.lcssa, %ctx.state.5.read, !dbg !142 ; [#uses=1 type=i32] [debug line = 69:4]
  %ctx.state.6 = add i32 %h.lcssa, %ctx.state.6.read, !dbg !143 ; [#uses=1 type=i32] [debug line = 70:4]
  %ctx.state.7 = add i32 %h1.lcssa, %ctx.state.7.read, !dbg !144 ; [#uses=1 type=i32] [debug line = 71:4]
  %mrv = insertvalue { i32, i32, i32, i32, i32, i32, i32, i32 } undef, i32 %ctx.state, 0, !dbg !145 ; [#uses=1 type={ i32, i32, i32, i32, i32, i32, i32, i32 }] [debug line = 72:1]
  %mrv.1 = insertvalue { i32, i32, i32, i32, i32, i32, i32, i32 } %mrv, i32 %ctx.state.1, 1, !dbg !145 ; [#uses=1 type={ i32, i32, i32, i32, i32, i32, i32, i32 }] [debug line = 72:1]
  %mrv.2 = insertvalue { i32, i32, i32, i32, i32, i32, i32, i32 } %mrv.1, i32 %ctx.state.2, 2, !dbg !145 ; [#uses=1 type={ i32, i32, i32, i32, i32, i32, i32, i32 }] [debug line = 72:1]
  %mrv.3 = insertvalue { i32, i32, i32, i32, i32, i32, i32, i32 } %mrv.2, i32 %ctx.state.3, 3, !dbg !145 ; [#uses=1 type={ i32, i32, i32, i32, i32, i32, i32, i32 }] [debug line = 72:1]
  %mrv.4 = insertvalue { i32, i32, i32, i32, i32, i32, i32, i32 } %mrv.3, i32 %ctx.state.4, 4, !dbg !145 ; [#uses=1 type={ i32, i32, i32, i32, i32, i32, i32, i32 }] [debug line = 72:1]
  %mrv.5 = insertvalue { i32, i32, i32, i32, i32, i32, i32, i32 } %mrv.4, i32 %ctx.state.5, 5, !dbg !145 ; [#uses=1 type={ i32, i32, i32, i32, i32, i32, i32, i32 }] [debug line = 72:1]
  %mrv.6 = insertvalue { i32, i32, i32, i32, i32, i32, i32, i32 } %mrv.5, i32 %ctx.state.6, 6, !dbg !145 ; [#uses=1 type={ i32, i32, i32, i32, i32, i32, i32, i32 }] [debug line = 72:1]
  %mrv.7 = insertvalue { i32, i32, i32, i32, i32, i32, i32, i32 } %mrv.6, i32 %ctx.state.7, 7, !dbg !145 ; [#uses=1 type={ i32, i32, i32, i32, i32, i32, i32, i32 }] [debug line = 72:1]
  ret { i32, i32, i32, i32, i32, i32, i32, i32 } %mrv.7, !dbg !145 ; [debug line = 72:1]
}

; [#uses=1]
define internal fastcc void @sha256_final([64 x i8]* nocapture %ctx.data, i32 %ctx.datalen.read, i32 %ctx.bitlen.0.read, i32 %.read3, i32 %.read1, i32 %.read2, i32 %.read4, i32 %.read5, i32 %.read6, i32 %.read7, i32 %.read8, i32 %.read9, [64 x i8]* nocapture %hash) {
  call void @llvm.dbg.value(metadata !{[64 x i8]* %ctx.data}, i64 0, metadata !146), !dbg !149 ; [debug line = 105:31] [debug variable = ctx.data]
  call void @llvm.dbg.value(metadata !{i32 %ctx.datalen.read}, i64 0, metadata !150), !dbg !149 ; [debug line = 105:31] [debug variable = ctx.datalen]
  call void @llvm.dbg.value(metadata !{[64 x i8]* %hash}, i64 0, metadata !151), !dbg !152 ; [debug line = 105:66] [debug variable = hash]
  call void @llvm.dbg.value(metadata !{i32 %ctx.datalen.read}, i64 0, metadata !153), !dbg !155 ; [debug line = 109:2] [debug variable = i]
  %tmp = icmp ult i32 %ctx.datalen.read, 56, !dbg !156 ; [#uses=1 type=i1] [debug line = 112:2]
  %ctx.data.addr = getelementptr [64 x i8]* %ctx.data, i32 0, i32 %ctx.datalen.read, !dbg !157 ; [#uses=1 type=i8*] [debug line = 113:3]
  store i8 -128, i8* %ctx.data.addr, align 1, !dbg !157 ; [debug line = 113:3]
  br i1 %tmp, label %.preheader3.preheader, label %.preheader.preheader, !dbg !156 ; [debug line = 112:2]

.preheader3.preheader:                            ; preds = %0
  br label %.preheader3, !dbg !157                ; [debug line = 113:3]

.preheader.preheader:                             ; preds = %0
  br label %.preheader, !dbg !159                 ; [debug line = 118:3]

.preheader3:                                      ; preds = %1, %.preheader3.preheader
  %i.0.in = phi i32 [ %i, %1 ], [ %ctx.datalen.read, %.preheader3.preheader ] ; [#uses=2 type=i32]
  %i = add i32 %i.0.in, 1, !dbg !157              ; [#uses=2 type=i32] [debug line = 113:3]
  call void @llvm.dbg.value(metadata !{i32 %i}, i64 0, metadata !153), !dbg !157 ; [debug line = 113:3] [debug variable = i]
  %exitcond = icmp eq i32 %i.0.in, 55, !dbg !161  ; [#uses=1 type=i1] [debug line = 114:3]
  br i1 %exitcond, label %.loopexit.loopexit14, label %1, !dbg !161 ; [debug line = 114:3]

; <label>:1                                       ; preds = %.preheader3
  %ctx.data.addr.1 = getelementptr [64 x i8]* %ctx.data, i32 0, i32 %i, !dbg !162 ; [#uses=1 type=i8*] [debug line = 115:4]
  store i8 0, i8* %ctx.data.addr.1, align 1, !dbg !162 ; [debug line = 115:4]
  br label %.preheader3, !dbg !162                ; [debug line = 115:4]

.preheader:                                       ; preds = %2, %.preheader.preheader
  %i.1.in = phi i32 [ %i.1, %2 ], [ %ctx.datalen.read, %.preheader.preheader ] ; [#uses=1 type=i32]
  %i.1 = add i32 %i.1.in, 1, !dbg !159            ; [#uses=3 type=i32] [debug line = 118:3]
  call void @llvm.dbg.value(metadata !{i32 %i.1}, i64 0, metadata !153), !dbg !159 ; [debug line = 118:3] [debug variable = i]
  %tmp. = icmp ult i32 %i.1, 64, !dbg !163        ; [#uses=1 type=i1] [debug line = 119:3]
  br i1 %tmp., label %2, label %3, !dbg !163      ; [debug line = 119:3]

; <label>:2                                       ; preds = %.preheader
  %ctx.data.addr.2 = getelementptr [64 x i8]* %ctx.data, i32 0, i32 %i.1, !dbg !164 ; [#uses=1 type=i8*] [debug line = 120:4]
  store i8 0, i8* %ctx.data.addr.2, align 1, !dbg !164 ; [debug line = 120:4]
  br label %.preheader, !dbg !164                 ; [debug line = 120:4]

; <label>:3                                       ; preds = %.preheader
  %call.ret1 = call fastcc { i32, i32, i32, i32, i32, i32, i32, i32 } @sha256_transform(i32 %.read1, i32 %.read2, i32 %.read4, i32 %.read5, i32 %.read6, i32 %.read7, i32 %.read8, i32 %.read9, [64 x i8]* %ctx.data), !dbg !165 ; [#uses=8 type={ i32, i32, i32, i32, i32, i32, i32, i32 }] [debug line = 121:3]
  %ctx.state.0.ret4 = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32 } %call.ret1, 0, !dbg !165 ; [#uses=1 type=i32] [debug line = 121:3]
  %ctx.state.1.ret5 = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32 } %call.ret1, 1, !dbg !165 ; [#uses=1 type=i32] [debug line = 121:3]
  %ctx.state.2.ret6 = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32 } %call.ret1, 2, !dbg !165 ; [#uses=1 type=i32] [debug line = 121:3]
  %ctx.state.3.ret7 = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32 } %call.ret1, 3, !dbg !165 ; [#uses=1 type=i32] [debug line = 121:3]
  %ctx.state.4.ret8 = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32 } %call.ret1, 4, !dbg !165 ; [#uses=1 type=i32] [debug line = 121:3]
  %ctx.state.5.ret9 = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32 } %call.ret1, 5, !dbg !165 ; [#uses=1 type=i32] [debug line = 121:3]
  %ctx.state.6.ret1 = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32 } %call.ret1, 6, !dbg !165 ; [#uses=1 type=i32] [debug line = 121:3]
  %ctx.state.7.ret1 = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32 } %call.ret1, 7, !dbg !165 ; [#uses=1 type=i32] [debug line = 121:3]
  br label %4, !dbg !166                          ; [debug line = 122:8]

; <label>:4                                       ; preds = %5, %3
  %i.2 = phi i6 [ 0, %3 ], [ %i.5, %5 ]           ; [#uses=3 type=i6]
  %i.2.cast5 = zext i6 %i.2 to i32, !dbg !166     ; [#uses=1 type=i32] [debug line = 122:8]
  %tmp.60 = icmp eq i6 %i.2, -8, !dbg !166        ; [#uses=1 type=i1] [debug line = 122:8]
  call void (...)* @_ssdm_op_SpecLoopTripCount(i64 56, i64 56, i64 56)
  br i1 %tmp.60, label %.loopexit.loopexit, label %5, !dbg !166 ; [debug line = 122:8]

; <label>:5                                       ; preds = %4
  %ctx.data.addr.6 = getelementptr [64 x i8]* %ctx.data, i32 0, i32 %i.2.cast5, !dbg !168 ; [#uses=1 type=i8*] [debug line = 124:2]
  store i8 0, i8* %ctx.data.addr.6, align 1, !dbg !168 ; [debug line = 124:2]
  %i.5 = add i6 %i.2, 1, !dbg !170                ; [#uses=1 type=i6] [debug line = 122:23]
  call void @llvm.dbg.value(metadata !{i6 %i.5}, i64 0, metadata !153), !dbg !170 ; [debug line = 122:23] [debug variable = i]
  br label %4, !dbg !170                          ; [debug line = 122:23]

.loopexit.loopexit:                               ; preds = %4
  br label %.loopexit

.loopexit.loopexit14:                             ; preds = %.preheader3
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit14, %.loopexit.loopexit
  %ctx.state = phi i32 [ %ctx.state.0.ret4, %.loopexit.loopexit ], [ %.read1, %.loopexit.loopexit14 ] ; [#uses=1 type=i32]
  %ctx.state.1 = phi i32 [ %ctx.state.1.ret5, %.loopexit.loopexit ], [ %.read2, %.loopexit.loopexit14 ] ; [#uses=1 type=i32]
  %ctx.state.2 = phi i32 [ %ctx.state.2.ret6, %.loopexit.loopexit ], [ %.read4, %.loopexit.loopexit14 ] ; [#uses=1 type=i32]
  %ctx.state.3 = phi i32 [ %ctx.state.3.ret7, %.loopexit.loopexit ], [ %.read5, %.loopexit.loopexit14 ] ; [#uses=1 type=i32]
  %ctx.state.4 = phi i32 [ %ctx.state.4.ret8, %.loopexit.loopexit ], [ %.read6, %.loopexit.loopexit14 ] ; [#uses=1 type=i32]
  %ctx.state.5 = phi i32 [ %ctx.state.5.ret9, %.loopexit.loopexit ], [ %.read7, %.loopexit.loopexit14 ] ; [#uses=1 type=i32]
  %ctx.state.6 = phi i32 [ %ctx.state.6.ret1, %.loopexit.loopexit ], [ %.read8, %.loopexit.loopexit14 ] ; [#uses=1 type=i32]
  %ctx.state.7 = phi i32 [ %ctx.state.7.ret1, %.loopexit.loopexit ], [ %.read9, %.loopexit.loopexit14 ] ; [#uses=1 type=i32]
  %ctx.datalen.read.cast = trunc i32 %ctx.datalen.read to i9, !dbg !171 ; [#uses=1 type=i9] [debug line = 130:4]
  %tmp.61 = shl i9 %ctx.datalen.read.cast, 3, !dbg !171 ; [#uses=4 type=i9] [debug line = 130:4]
  %tmp.74.cast = zext i9 %tmp.61 to i32, !dbg !171 ; [#uses=2 type=i32] [debug line = 130:4]
  %tmp.62 = xor i32 %tmp.74.cast, -1, !dbg !171   ; [#uses=1 type=i32] [debug line = 130:4]
  %tmp.63 = icmp ugt i32 %ctx.bitlen.0.read, %tmp.62, !dbg !171 ; [#uses=1 type=i1] [debug line = 130:4]
  %tmp.64 = add i32 %.read3, 1, !dbg !172         ; [#uses=1 type=i32] [debug line = 130:58]
  %tmp.86..read3 = select i1 %tmp.63, i32 %tmp.64, i32 %.read3, !dbg !171 ; [#uses=4 type=i32] [debug line = 130:4]
  %tmp.86..read3.cast4 = trunc i32 %tmp.86..read3 to i24 ; [#uses=1 type=i24]
  %tmp.86..read3.cast = trunc i32 %tmp.86..read3 to i16 ; [#uses=1 type=i16]
  %tmp.12 = trunc i9 %tmp.61 to i8                ; [#uses=1 type=i8]
  %tmp.13 = trunc i32 %ctx.bitlen.0.read to i8    ; [#uses=1 type=i8]
  %tmp.14 = zext i9 %tmp.61 to i16                ; [#uses=1 type=i16]
  %tmp.15 = trunc i32 %ctx.bitlen.0.read to i16   ; [#uses=1 type=i16]
  %tmp.16 = zext i9 %tmp.61 to i24                ; [#uses=1 type=i24]
  %tmp.17 = trunc i32 %ctx.bitlen.0.read to i24   ; [#uses=1 type=i24]
  %ctx.bitlen = add i32 %tmp.74.cast, %ctx.bitlen.0.read, !dbg !173 ; [#uses=1 type=i32] [debug line = 130:76]
  %ctx.bitlen.cast3 = add i24 %tmp.17, %tmp.16, !dbg !174 ; [#uses=1 type=i24] [debug line = 131:4]
  %ctx.bitlen.cast = add i16 %tmp.15, %tmp.14, !dbg !174 ; [#uses=1 type=i16] [debug line = 131:4]
  %tmp.65 = add i8 %tmp.12, %tmp.13, !dbg !174    ; [#uses=1 type=i8] [debug line = 131:4]
  %ctx.data.addr.3 = getelementptr [64 x i8]* %ctx.data, i32 0, i32 63, !dbg !174 ; [#uses=1 type=i8*] [debug line = 131:4]
  store i8 %tmp.65, i8* %ctx.data.addr.3, align 1, !dbg !174 ; [debug line = 131:4]
  %tmp.66 = lshr i16 %ctx.bitlen.cast, 8, !dbg !175 ; [#uses=1 type=i16] [debug line = 132:4]
  %tmp.67 = trunc i16 %tmp.66 to i8, !dbg !175    ; [#uses=1 type=i8] [debug line = 132:4]
  %ctx.data.addr.4 = getelementptr [64 x i8]* %ctx.data, i32 0, i32 62, !dbg !175 ; [#uses=1 type=i8*] [debug line = 132:4]
  store i8 %tmp.67, i8* %ctx.data.addr.4, align 1, !dbg !175 ; [debug line = 132:4]
  %tmp.68 = lshr i24 %ctx.bitlen.cast3, 16, !dbg !176 ; [#uses=1 type=i24] [debug line = 133:4]
  %tmp.69 = trunc i24 %tmp.68 to i8, !dbg !176    ; [#uses=1 type=i8] [debug line = 133:4]
  %ctx.data.addr.5 = getelementptr [64 x i8]* %ctx.data, i32 0, i32 61, !dbg !176 ; [#uses=1 type=i8*] [debug line = 133:4]
  store i8 %tmp.69, i8* %ctx.data.addr.5, align 1, !dbg !176 ; [debug line = 133:4]
  %tmp.70 = lshr i32 %ctx.bitlen, 24, !dbg !177   ; [#uses=1 type=i32] [debug line = 134:4]
  %tmp.71 = trunc i32 %tmp.70 to i8, !dbg !177    ; [#uses=1 type=i8] [debug line = 134:4]
  %ctx.data.addr.7 = getelementptr [64 x i8]* %ctx.data, i32 0, i32 60, !dbg !177 ; [#uses=1 type=i8*] [debug line = 134:4]
  store i8 %tmp.71, i8* %ctx.data.addr.7, align 1, !dbg !177 ; [debug line = 134:4]
  %tmp.72 = trunc i32 %tmp.86..read3 to i8, !dbg !178 ; [#uses=1 type=i8] [debug line = 135:4]
  %ctx.data.addr.8 = getelementptr [64 x i8]* %ctx.data, i32 0, i32 59, !dbg !178 ; [#uses=1 type=i8*] [debug line = 135:4]
  store i8 %tmp.72, i8* %ctx.data.addr.8, align 1, !dbg !178 ; [debug line = 135:4]
  %tmp.73 = lshr i16 %tmp.86..read3.cast, 8, !dbg !179 ; [#uses=1 type=i16] [debug line = 136:4]
  %tmp.74 = trunc i16 %tmp.73 to i8, !dbg !179    ; [#uses=1 type=i8] [debug line = 136:4]
  %ctx.data.addr.9 = getelementptr [64 x i8]* %ctx.data, i32 0, i32 58, !dbg !179 ; [#uses=1 type=i8*] [debug line = 136:4]
  store i8 %tmp.74, i8* %ctx.data.addr.9, align 1, !dbg !179 ; [debug line = 136:4]
  %tmp.75 = lshr i24 %tmp.86..read3.cast4, 16, !dbg !180 ; [#uses=1 type=i24] [debug line = 137:4]
  %tmp.76 = trunc i24 %tmp.75 to i8, !dbg !180    ; [#uses=1 type=i8] [debug line = 137:4]
  %ctx.data.addr.10 = getelementptr [64 x i8]* %ctx.data, i32 0, i32 57, !dbg !180 ; [#uses=1 type=i8*] [debug line = 137:4]
  store i8 %tmp.76, i8* %ctx.data.addr.10, align 1, !dbg !180 ; [debug line = 137:4]
  %tmp.77 = lshr i32 %tmp.86..read3, 24, !dbg !181 ; [#uses=1 type=i32] [debug line = 138:4]
  %tmp.78 = trunc i32 %tmp.77 to i8, !dbg !181    ; [#uses=1 type=i8] [debug line = 138:4]
  %ctx.data.addr.11 = getelementptr [64 x i8]* %ctx.data, i32 0, i32 56, !dbg !181 ; [#uses=1 type=i8*] [debug line = 138:4]
  store i8 %tmp.78, i8* %ctx.data.addr.11, align 1, !dbg !181 ; [debug line = 138:4]
  %call.ret = call fastcc { i32, i32, i32, i32, i32, i32, i32, i32 } @sha256_transform(i32 %ctx.state, i32 %ctx.state.1, i32 %ctx.state.2, i32 %ctx.state.3, i32 %ctx.state.4, i32 %ctx.state.5, i32 %ctx.state.6, i32 %ctx.state.7, [64 x i8]* %ctx.data), !dbg !182 ; [#uses=8 type={ i32, i32, i32, i32, i32, i32, i32, i32 }] [debug line = 139:4]
  %ctx.state.0.ret = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32 } %call.ret, 0, !dbg !182 ; [#uses=1 type=i32] [debug line = 139:4]
  %ctx.state.1.ret = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32 } %call.ret, 1, !dbg !182 ; [#uses=1 type=i32] [debug line = 139:4]
  %ctx.state.2.ret = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32 } %call.ret, 2, !dbg !182 ; [#uses=1 type=i32] [debug line = 139:4]
  %ctx.state.3.ret = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32 } %call.ret, 3, !dbg !182 ; [#uses=1 type=i32] [debug line = 139:4]
  %ctx.state.4.ret = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32 } %call.ret, 4, !dbg !182 ; [#uses=1 type=i32] [debug line = 139:4]
  %ctx.state.5.ret = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32 } %call.ret, 5, !dbg !182 ; [#uses=1 type=i32] [debug line = 139:4]
  %ctx.state.6.ret = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32 } %call.ret, 6, !dbg !182 ; [#uses=1 type=i32] [debug line = 139:4]
  %ctx.state.7.ret = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32 } %call.ret, 7, !dbg !182 ; [#uses=1 type=i32] [debug line = 139:4]
  br label %6, !dbg !183                          ; [debug line = 143:9]

; <label>:6                                       ; preds = %7, %.loopexit
  %i.3 = phi i3 [ 0, %.loopexit ], [ %i.6, %7 ]   ; [#uses=9 type=i3]
  %i.3.cast2 = zext i3 %i.3 to i32, !dbg !183     ; [#uses=1 type=i32] [debug line = 143:9]
  %i.3.cast1 = zext i3 %i.3 to i5, !dbg !183      ; [#uses=3 type=i5] [debug line = 143:9]
  %i.3.cast1.cast = zext i3 %i.3 to i4, !dbg !183 ; [#uses=1 type=i4] [debug line = 143:9]
  %i.3.cast = zext i3 %i.3 to i4, !dbg !183       ; [#uses=1 type=i4] [debug line = 143:9]
  %tmp.79 = icmp eq i3 %i.3, -4, !dbg !183        ; [#uses=1 type=i1] [debug line = 143:9]
  call void (...)* @_ssdm_op_SpecLoopTripCount(i64 4, i64 4, i64 4)
  br i1 %tmp.79, label %8, label %7, !dbg !183    ; [debug line = 143:9]

; <label>:7                                       ; preds = %6
  %tmp.80 = shl i5 %i.3.cast1, 3, !dbg !185       ; [#uses=1 type=i5] [debug line = 145:2]
  %tmp.81 = sub i5 -8, %tmp.80, !dbg !185         ; [#uses=1 type=i5] [debug line = 145:2]
  %tmp.94.cast = zext i5 %tmp.81 to i32, !dbg !185 ; [#uses=8 type=i32] [debug line = 145:2]
  %tmp.82 = lshr i32 %ctx.state.0.ret, %tmp.94.cast, !dbg !185 ; [#uses=1 type=i32] [debug line = 145:2]
  %tmp.83 = trunc i32 %tmp.82 to i8, !dbg !185    ; [#uses=1 type=i8] [debug line = 145:2]
  %hash.addr = getelementptr [64 x i8]* %hash, i32 0, i32 %i.3.cast2, !dbg !185 ; [#uses=1 type=i8*] [debug line = 145:2]
  store i8 %tmp.83, i8* %hash.addr, align 1, !dbg !185 ; [debug line = 145:2]
  %tmp.84 = lshr i32 %ctx.state.1.ret, %tmp.94.cast, !dbg !187 ; [#uses=1 type=i32] [debug line = 146:7]
  %tmp.85 = trunc i32 %tmp.84 to i8, !dbg !187    ; [#uses=1 type=i8] [debug line = 146:7]
  %sum2 = xor i3 %i.3, -4                         ; [#uses=1 type=i3]
  %sum2.cast = zext i3 %sum2 to i32               ; [#uses=1 type=i32]
  %hash.addr.1 = getelementptr [64 x i8]* %hash, i32 0, i32 %sum2.cast, !dbg !187 ; [#uses=1 type=i8*] [debug line = 146:7]
  store i8 %tmp.85, i8* %hash.addr.1, align 1, !dbg !187 ; [debug line = 146:7]
  %tmp.86 = lshr i32 %ctx.state.2.ret, %tmp.94.cast, !dbg !188 ; [#uses=1 type=i32] [debug line = 147:7]
  %tmp.87 = trunc i32 %tmp.86 to i8, !dbg !188    ; [#uses=1 type=i8] [debug line = 147:7]
  %sum1 = or i4 %i.3.cast, -8                     ; [#uses=1 type=i4]
  %sum4.cast = zext i4 %sum1 to i32               ; [#uses=1 type=i32]
  %hash.addr.2 = getelementptr [64 x i8]* %hash, i32 0, i32 %sum4.cast, !dbg !188 ; [#uses=1 type=i8*] [debug line = 147:7]
  store i8 %tmp.87, i8* %hash.addr.2, align 1, !dbg !188 ; [debug line = 147:7]
  %tmp.88 = lshr i32 %ctx.state.3.ret, %tmp.94.cast, !dbg !189 ; [#uses=1 type=i32] [debug line = 148:7]
  %tmp.89 = trunc i32 %tmp.88 to i8, !dbg !189    ; [#uses=1 type=i8] [debug line = 148:7]
  %sum6 = xor i3 %i.3, -4                         ; [#uses=1 type=i3]
  %sum6.cast8 = sext i3 %sum6 to i4               ; [#uses=1 type=i4]
  %sum6.cast = zext i4 %sum6.cast8 to i32         ; [#uses=1 type=i32]
  %hash.addr.3 = getelementptr [64 x i8]* %hash, i32 0, i32 %sum6.cast, !dbg !189 ; [#uses=1 type=i8*] [debug line = 148:7]
  store i8 %tmp.89, i8* %hash.addr.3, align 1, !dbg !189 ; [debug line = 148:7]
  %tmp.90 = lshr i32 %ctx.state.4.ret, %tmp.94.cast, !dbg !190 ; [#uses=1 type=i32] [debug line = 149:7]
  %tmp.91 = trunc i32 %tmp.90 to i8, !dbg !190    ; [#uses=1 type=i8] [debug line = 149:7]
  %sum4 = or i5 %i.3.cast1, -16                   ; [#uses=1 type=i5]
  %sum8.cast = zext i5 %sum4 to i32               ; [#uses=1 type=i32]
  %hash.addr.4 = getelementptr [64 x i8]* %hash, i32 0, i32 %sum8.cast, !dbg !190 ; [#uses=1 type=i8*] [debug line = 149:7]
  store i8 %tmp.91, i8* %hash.addr.4, align 1, !dbg !190 ; [debug line = 149:7]
  %tmp.92 = lshr i32 %ctx.state.5.ret, %tmp.94.cast, !dbg !191 ; [#uses=1 type=i32] [debug line = 150:7]
  %tmp.93 = trunc i32 %tmp.92 to i8, !dbg !191    ; [#uses=1 type=i8] [debug line = 150:7]
  %sum = add i5 %i.3.cast1, -12                   ; [#uses=1 type=i5]
  %sum.cast = zext i5 %sum to i32                 ; [#uses=1 type=i32]
  %hash.addr.5 = getelementptr [64 x i8]* %hash, i32 0, i32 %sum.cast, !dbg !191 ; [#uses=1 type=i8*] [debug line = 150:7]
  store i8 %tmp.93, i8* %hash.addr.5, align 1, !dbg !191 ; [debug line = 150:7]
  %tmp.94 = lshr i32 %ctx.state.6.ret, %tmp.94.cast, !dbg !192 ; [#uses=1 type=i32] [debug line = 151:7]
  %tmp.95 = trunc i32 %tmp.94 to i8, !dbg !192    ; [#uses=1 type=i8] [debug line = 151:7]
  %sum5 = or i4 %i.3.cast1.cast, -8               ; [#uses=1 type=i4]
  %sum1.cast7 = sext i4 %sum5 to i5               ; [#uses=1 type=i5]
  %sum1.cast = zext i5 %sum1.cast7 to i32         ; [#uses=1 type=i32]
  %hash.addr.6 = getelementptr [64 x i8]* %hash, i32 0, i32 %sum1.cast, !dbg !192 ; [#uses=1 type=i8*] [debug line = 151:7]
  store i8 %tmp.95, i8* %hash.addr.6, align 1, !dbg !192 ; [debug line = 151:7]
  %tmp.96 = lshr i32 %ctx.state.7.ret, %tmp.94.cast, !dbg !193 ; [#uses=1 type=i32] [debug line = 152:7]
  %tmp.97 = trunc i32 %tmp.96 to i8, !dbg !193    ; [#uses=1 type=i8] [debug line = 152:7]
  %sum3 = xor i3 %i.3, -4                         ; [#uses=1 type=i3]
  %sum3.cast6 = sext i3 %sum3 to i5               ; [#uses=1 type=i5]
  %sum3.cast = zext i5 %sum3.cast6 to i32         ; [#uses=1 type=i32]
  %hash.addr.7 = getelementptr [64 x i8]* %hash, i32 0, i32 %sum3.cast, !dbg !193 ; [#uses=1 type=i8*] [debug line = 152:7]
  store i8 %tmp.97, i8* %hash.addr.7, align 1, !dbg !193 ; [debug line = 152:7]
  %i.6 = add i3 %i.3, 1, !dbg !194                ; [#uses=1 type=i3] [debug line = 143:21]
  call void @llvm.dbg.value(metadata !{i3 %i.6}, i64 0, metadata !153), !dbg !194 ; [debug line = 143:21] [debug variable = i]
  br label %6, !dbg !194                          ; [debug line = 143:21]

; <label>:8                                       ; preds = %6
  ret void
}

; [#uses=0]
define void @sha256([256 x i8]* %data, i32 %base_offset, i32 %bytes, [32 x i8]* %digest) nounwind {
  call void (...)* @_ssdm_op_SpecBitsMap([256 x i8]* %data) nounwind, !map !195
  call void (...)* @_ssdm_op_SpecBitsMap(i32 %base_offset) nounwind, !map !201
  call void (...)* @_ssdm_op_SpecBitsMap(i32 %bytes) nounwind, !map !207
  call void (...)* @_ssdm_op_SpecBitsMap([32 x i8]* %digest) nounwind, !map !211
  call void (...)* @_ssdm_op_SpecTopModule([7 x i8]* @sha256.str) nounwind
  %seg_buf = alloca [64 x i8], align 1            ; [#uses=37 type=[64 x i8]*]
  %sha256ctx.data = alloca [64 x i8], align 1     ; [#uses=3 type=[64 x i8]*]
  call void @llvm.dbg.value(metadata !{[256 x i8]* %data}, i64 0, metadata !217), !dbg !225 ; [debug line = 9:28] [debug variable = data]
  call void @llvm.dbg.value(metadata !{i32 %base_offset}, i64 0, metadata !226), !dbg !227 ; [debug line = 10:18] [debug variable = base_offset]
  call void @llvm.dbg.value(metadata !{i32 %bytes}, i64 0, metadata !228), !dbg !229 ; [debug line = 11:18] [debug variable = bytes]
  call void @llvm.dbg.value(metadata !{[32 x i8]* %digest}, i64 0, metadata !230), !dbg !234 ; [debug line = 12:19] [debug variable = digest]
  call void (...)* @_ssdm_op_SpecInterface([256 x i8]* %data, [10 x i8]* @.str7, i32 0, i32 0, [1 x i8]* @.str1, i32 0, i32 0, [1 x i8]* @.str1, [1 x i8]* @.str1, [1 x i8]* @.str1, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @.str1, [1 x i8]* @.str1) nounwind
  call void (...)* @_ssdm_op_SpecInterface([32 x i8]* %digest, [10 x i8]* @.str7, i32 0, i32 0, [1 x i8]* @.str1, i32 0, i32 0, [1 x i8]* @.str1, [1 x i8]* @.str1, [1 x i8]* @.str1, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @.str1, [1 x i8]* @.str1) nounwind
  call void (...)* @_ssdm_op_SpecInterface(i32 %base_offset, [10 x i8]* @.str7, i32 0, i32 0, [1 x i8]* @.str1, i32 0, i32 0, [1 x i8]* @.str1, [1 x i8]* @.str1, [1 x i8]* @.str1, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @.str1, [1 x i8]* @.str1) nounwind, !dbg !235 ; [debug line = 18:1]
  call void (...)* @_ssdm_op_SpecInterface(i32 %bytes, [10 x i8]* @.str7, i32 0, i32 0, [1 x i8]* @.str1, i32 0, i32 0, [1 x i8]* @.str1, [1 x i8]* @.str1, [1 x i8]* @.str1, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @.str1, [1 x i8]* @.str1) nounwind, !dbg !237 ; [debug line = 19:1]
  call void (...)* @_ssdm_op_SpecInterface(i32 0, [10 x i8]* @.str7, i32 0, i32 0, [1 x i8]* @.str1, i32 0, i32 0, [1 x i8]* @.str1, [1 x i8]* @.str1, [1 x i8]* @.str1, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @.str1, [1 x i8]* @.str1) nounwind, !dbg !238 ; [debug line = 20:1]
  call void @llvm.dbg.declare(metadata !{[64 x i8]* %seg_buf}, metadata !239), !dbg !240 ; [debug line = 23:16] [debug variable = seg_buf]
  call void @llvm.dbg.value(metadata !{i32 %bytes}, i64 0, metadata !241), !dbg !242 ; [debug line = 26:24] [debug variable = n]
  call void @llvm.dbg.declare(metadata !{[64 x i8]* %sha256ctx.data}, metadata !243), !dbg !245 ; [debug line = 29:13] [debug variable = sha256ctx.data]
  br label %1, !dbg !246                          ; [debug line = 33:2]

; <label>:1                                       ; preds = %7, %0
  %sha256ctx.state.7 = phi i32 [ 1541459225, %0 ], [ %sha256ctx.state.7.1, %7 ] ; [#uses=3 type=i32]
  %sha256ctx.state.6 = phi i32 [ 528734635, %0 ], [ %sha256ctx.state.6.1, %7 ] ; [#uses=3 type=i32]
  %sha256ctx.state.5 = phi i32 [ -1694144372, %0 ], [ %sha256ctx.state.5.1, %7 ] ; [#uses=3 type=i32]
  %sha256ctx.state.4 = phi i32 [ 1359893119, %0 ], [ %sha256ctx.state.4.1, %7 ] ; [#uses=3 type=i32]
  %sha256ctx.state.3 = phi i32 [ -1521486534, %0 ], [ %sha256ctx.state.3.1, %7 ] ; [#uses=3 type=i32]
  %sha256ctx.state.2 = phi i32 [ 1013904242, %0 ], [ %sha256ctx.state.2.1, %7 ] ; [#uses=3 type=i32]
  %sha256ctx.state.1 = phi i32 [ -1150833019, %0 ], [ %sha256ctx.state.1.1, %7 ] ; [#uses=3 type=i32]
  %sha256ctx.state = phi i32 [ 1779033703, %0 ], [ %sha256ctx.state.0.1, %7 ] ; [#uses=3 type=i32]
  %sha256ctx.bitlen.1 = phi i32 [ 0, %0 ], [ %sha256ctx.bitlen.1.1, %7 ] ; [#uses=3 type=i32]
  %sha256ctx.bitlen = phi i32 [ 0, %0 ], [ %sha256ctx.bitlen.0.1, %7 ] ; [#uses=3 type=i32]
  %sha256ctx.datalen = phi i32 [ 0, %0 ], [ %sha256ctx.datalen.1, %7 ] ; [#uses=3 type=i32]
  %seg_offset = phi i32 [ 0, %0 ], [ %seg_offset.1, %7 ] ; [#uses=3 type=i32]
  %n = phi i32 [ %bytes, %0 ], [ %n.1, %7 ]       ; [#uses=5 type=i32]
  %seg_offset.cast = trunc i32 %seg_offset to i10, !dbg !246 ; [#uses=2 type=i10] [debug line = 33:2]
  %tmp = icmp eq i32 %n, 0, !dbg !246             ; [#uses=1 type=i1] [debug line = 33:2]
  br i1 %tmp, label %9, label %2, !dbg !246       ; [debug line = 33:2]

; <label>:2                                       ; preds = %1
  %tmp.14 = call i32 (...)* @_ssdm_op_SpecRegionBegin([12 x i8]* @.str8) nounwind, !dbg !247 ; [#uses=1 type=i32] [debug line = 34:3]
  call void (...)* @_ssdm_op_SpecLoopTripCount(i32 12, i32 100, i32 56, [1 x i8]* @.str1) nounwind, !dbg !249 ; [debug line = 35:1]
  %tmp. = icmp ugt i32 %n, 63, !dbg !250          ; [#uses=1 type=i1] [debug line = 36:2]
  br i1 %tmp., label %.preheader6.preheader, label %.preheader.preheader, !dbg !250 ; [debug line = 36:2]

.preheader6.preheader:                            ; preds = %2
  br label %.preheader6, !dbg !251                ; [debug line = 38:9]

.preheader.preheader:                             ; preds = %2
  br label %.preheader, !dbg !254                 ; [debug line = 46:9]

.preheader6:                                      ; preds = %3, %.preheader6.preheader
  %i9 = phi i7 [ %i, %3 ], [ 0, %.preheader6.preheader ] ; [#uses=4 type=i7]
  %i9.cast5 = zext i7 %i9 to i10, !dbg !251       ; [#uses=1 type=i10] [debug line = 38:9]
  %i9.cast4 = zext i7 %i9 to i32, !dbg !251       ; [#uses=1 type=i32] [debug line = 38:9]
  %exitcond5 = icmp eq i7 %i9, -64, !dbg !251     ; [#uses=1 type=i1] [debug line = 38:9]
  call void (...)* @_ssdm_op_SpecLoopTripCount(i64 64, i64 64, i64 64)
  br i1 %exitcond5, label %4, label %3, !dbg !251 ; [debug line = 38:9]

; <label>:3                                       ; preds = %.preheader6
  %base_offset.cast = trunc i32 %base_offset to i10 ; [#uses=1 type=i10]
  %tmp1 = add i10 %base_offset.cast, %i9.cast5    ; [#uses=1 type=i10]
  %sum = add i10 %seg_offset.cast, %tmp1          ; [#uses=1 type=i10]
  %sum.cast = zext i10 %sum to i32                ; [#uses=1 type=i32]
  %data.addr = getelementptr [256 x i8]* %data, i32 0, i32 %sum.cast, !dbg !257 ; [#uses=1 type=i8*] [debug line = 39:5]
  %data.load = load i8* %data.addr, align 1, !dbg !257 ; [#uses=1 type=i8] [debug line = 39:5]
  %seg_buf.addr.2 = getelementptr inbounds [64 x i8]* %seg_buf, i32 0, i32 %i9.cast4, !dbg !257 ; [#uses=1 type=i8*] [debug line = 39:5]
  store i8 %data.load, i8* %seg_buf.addr.2, align 1, !dbg !257 ; [debug line = 39:5]
  %i = add i7 %i9, 1, !dbg !258                   ; [#uses=1 type=i7] [debug line = 38:20]
  call void @llvm.dbg.value(metadata !{i7 %i}, i64 0, metadata !259), !dbg !258 ; [debug line = 38:20] [debug variable = i]
  br label %.preheader6, !dbg !258                ; [debug line = 38:20]

; <label>:4                                       ; preds = %.preheader6
  %n.2 = add i32 %n, -64, !dbg !260               ; [#uses=1 type=i32] [debug line = 40:4]
  call void @llvm.dbg.value(metadata !{i32 %n.2}, i64 0, metadata !241), !dbg !260 ; [debug line = 40:4] [debug variable = n]
  %seg_offset.2 = add i32 %seg_offset, 64, !dbg !261 ; [#uses=1 type=i32] [debug line = 41:4]
  call void @llvm.dbg.value(metadata !{i32 %seg_offset.2}, i64 0, metadata !262), !dbg !261 ; [debug line = 41:4] [debug variable = seg_offset]
  %call.ret = call fastcc { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } @sha256_update([64 x i8]* %sha256ctx.data, i32 %sha256ctx.datalen, i32 %sha256ctx.bitlen, i32 %sha256ctx.bitlen.1, i32 %sha256ctx.state, i32 %sha256ctx.state.1, i32 %sha256ctx.state.2, i32 %sha256ctx.state.3, i32 %sha256ctx.state.4, i32 %sha256ctx.state.5, i32 %sha256ctx.state.6, i32 %sha256ctx.state.7, [64 x i8]* %seg_buf, i32 64) nounwind, !dbg !263 ; [#uses=11 type={ i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 }] [debug line = 42:4]
  %sha256ctx.datalen.2 = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %call.ret, 0, !dbg !263 ; [#uses=1 type=i32] [debug line = 42:4]
  %"sha256ctx.bitlen[0]" = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %call.ret, 1, !dbg !263 ; [#uses=1 type=i32] [debug line = 42:4]
  %"sha256ctx.bitlen[1]" = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %call.ret, 2, !dbg !263 ; [#uses=1 type=i32] [debug line = 42:4]
  %"sha256ctx.state[0]" = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %call.ret, 3, !dbg !263 ; [#uses=1 type=i32] [debug line = 42:4]
  call void @llvm.dbg.value(metadata !{i32 %"sha256ctx.state[0]"}, i64 0, metadata !264), !dbg !263 ; [debug line = 42:4] [debug variable = sha256ctx.state[0]]
  %"sha256ctx.state[1]" = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %call.ret, 4, !dbg !263 ; [#uses=1 type=i32] [debug line = 42:4]
  call void @llvm.dbg.value(metadata !{i32 %"sha256ctx.state[1]"}, i64 0, metadata !267), !dbg !263 ; [debug line = 42:4] [debug variable = sha256ctx.state[1]]
  %"sha256ctx.state[2]" = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %call.ret, 5, !dbg !263 ; [#uses=1 type=i32] [debug line = 42:4]
  call void @llvm.dbg.value(metadata !{i32 %"sha256ctx.state[2]"}, i64 0, metadata !268), !dbg !263 ; [debug line = 42:4] [debug variable = sha256ctx.state[2]]
  %"sha256ctx.state[3]" = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %call.ret, 6, !dbg !263 ; [#uses=1 type=i32] [debug line = 42:4]
  call void @llvm.dbg.value(metadata !{i32 %"sha256ctx.state[3]"}, i64 0, metadata !269), !dbg !263 ; [debug line = 42:4] [debug variable = sha256ctx.state[3]]
  %"sha256ctx.state[4]" = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %call.ret, 7, !dbg !263 ; [#uses=1 type=i32] [debug line = 42:4]
  call void @llvm.dbg.value(metadata !{i32 %"sha256ctx.state[4]"}, i64 0, metadata !270), !dbg !263 ; [debug line = 42:4] [debug variable = sha256ctx.state[4]]
  %"sha256ctx.state[5]" = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %call.ret, 8, !dbg !263 ; [#uses=1 type=i32] [debug line = 42:4]
  call void @llvm.dbg.value(metadata !{i32 %"sha256ctx.state[5]"}, i64 0, metadata !271), !dbg !263 ; [debug line = 42:4] [debug variable = sha256ctx.state[5]]
  %"sha256ctx.state[6]" = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %call.ret, 9, !dbg !263 ; [#uses=1 type=i32] [debug line = 42:4]
  call void @llvm.dbg.value(metadata !{i32 %"sha256ctx.state[6]"}, i64 0, metadata !272), !dbg !263 ; [debug line = 42:4] [debug variable = sha256ctx.state[6]]
  %"sha256ctx.state[7]" = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %call.ret, 10, !dbg !263 ; [#uses=1 type=i32] [debug line = 42:4]
  call void @llvm.dbg.value(metadata !{i32 %"sha256ctx.state[7]"}, i64 0, metadata !273), !dbg !263 ; [debug line = 42:4] [debug variable = sha256ctx.state[7]]
  call void @llvm.dbg.value(metadata !{i32 %"sha256ctx.bitlen[0]"}, i64 0, metadata !274), !dbg !263 ; [debug line = 42:4] [debug variable = sha256ctx.bitlen[0]]
  call void @llvm.dbg.value(metadata !{i32 %"sha256ctx.bitlen[1]"}, i64 0, metadata !275), !dbg !263 ; [debug line = 42:4] [debug variable = sha256ctx.bitlen[1]]
  call void @llvm.dbg.value(metadata !{i32 %sha256ctx.datalen.2}, i64 0, metadata !276), !dbg !263 ; [debug line = 42:4] [debug variable = sha256ctx.datalen]
  br label %7, !dbg !277                          ; [debug line = 43:3]

.preheader:                                       ; preds = %5, %.preheader.preheader
  %i.1 = phi i6 [ %i.7, %5 ], [ 0, %.preheader.preheader ] ; [#uses=3 type=i6]
  %i.1.cast3 = zext i6 %i.1 to i10, !dbg !254     ; [#uses=1 type=i10] [debug line = 46:9]
  %i.1.cast = zext i6 %i.1 to i32, !dbg !254      ; [#uses=2 type=i32] [debug line = 46:9]
  %exitcond4 = icmp eq i32 %i.1.cast, %n, !dbg !254 ; [#uses=1 type=i1] [debug line = 46:9]
  call void (...)* @_ssdm_op_SpecLoopTripCount(i64 12, i64 63, i64 56)
  br i1 %exitcond4, label %6, label %5, !dbg !254 ; [debug line = 46:9]

; <label>:5                                       ; preds = %.preheader
  %base_offset.cast6 = trunc i32 %base_offset to i10 ; [#uses=1 type=i10]
  %tmp2 = add i10 %base_offset.cast6, %i.1.cast3  ; [#uses=1 type=i10]
  %sum2 = add i10 %seg_offset.cast, %tmp2         ; [#uses=1 type=i10]
  %sum2.cast = zext i10 %sum2 to i32              ; [#uses=1 type=i32]
  %data.addr.4 = getelementptr [256 x i8]* %data, i32 0, i32 %sum2.cast, !dbg !278 ; [#uses=1 type=i8*] [debug line = 48:2]
  %data.load.4 = load i8* %data.addr.4, align 1, !dbg !278 ; [#uses=1 type=i8] [debug line = 48:2]
  %seg_buf.addr.3 = getelementptr inbounds [64 x i8]* %seg_buf, i32 0, i32 %i.1.cast, !dbg !278 ; [#uses=1 type=i8*] [debug line = 48:2]
  store i8 %data.load.4, i8* %seg_buf.addr.3, align 1, !dbg !278 ; [debug line = 48:2]
  %i.7 = add i6 %i.1, 1, !dbg !280                ; [#uses=1 type=i6] [debug line = 46:19]
  call void @llvm.dbg.value(metadata !{i6 %i.7}, i64 0, metadata !259), !dbg !280 ; [debug line = 46:19] [debug variable = i]
  br label %.preheader, !dbg !280                 ; [debug line = 46:19]

; <label>:6                                       ; preds = %.preheader
  %call.ret1 = call fastcc { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } @sha256_update([64 x i8]* %sha256ctx.data, i32 %sha256ctx.datalen, i32 %sha256ctx.bitlen, i32 %sha256ctx.bitlen.1, i32 %sha256ctx.state, i32 %sha256ctx.state.1, i32 %sha256ctx.state.2, i32 %sha256ctx.state.3, i32 %sha256ctx.state.4, i32 %sha256ctx.state.5, i32 %sha256ctx.state.6, i32 %sha256ctx.state.7, [64 x i8]* %seg_buf, i32 %n) nounwind, !dbg !281 ; [#uses=11 type={ i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 }] [debug line = 49:4]
  %sha256ctx.datalen.3 = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %call.ret1, 0, !dbg !281 ; [#uses=1 type=i32] [debug line = 49:4]
  %"sha256ctx.bitlen[0].1" = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %call.ret1, 1, !dbg !281 ; [#uses=1 type=i32] [debug line = 49:4]
  %"sha256ctx.bitlen[1].1" = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %call.ret1, 2, !dbg !281 ; [#uses=1 type=i32] [debug line = 49:4]
  %"sha256ctx.state[0].1" = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %call.ret1, 3, !dbg !281 ; [#uses=1 type=i32] [debug line = 49:4]
  call void @llvm.dbg.value(metadata !{i32 %"sha256ctx.state[0].1"}, i64 0, metadata !264), !dbg !281 ; [debug line = 49:4] [debug variable = sha256ctx.state[0]]
  %"sha256ctx.state[1].1" = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %call.ret1, 4, !dbg !281 ; [#uses=1 type=i32] [debug line = 49:4]
  call void @llvm.dbg.value(metadata !{i32 %"sha256ctx.state[1].1"}, i64 0, metadata !267), !dbg !281 ; [debug line = 49:4] [debug variable = sha256ctx.state[1]]
  %"sha256ctx.state[2].1" = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %call.ret1, 5, !dbg !281 ; [#uses=1 type=i32] [debug line = 49:4]
  call void @llvm.dbg.value(metadata !{i32 %"sha256ctx.state[2].1"}, i64 0, metadata !268), !dbg !281 ; [debug line = 49:4] [debug variable = sha256ctx.state[2]]
  %"sha256ctx.state[3].1" = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %call.ret1, 6, !dbg !281 ; [#uses=1 type=i32] [debug line = 49:4]
  call void @llvm.dbg.value(metadata !{i32 %"sha256ctx.state[3].1"}, i64 0, metadata !269), !dbg !281 ; [debug line = 49:4] [debug variable = sha256ctx.state[3]]
  %"sha256ctx.state[4].1" = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %call.ret1, 7, !dbg !281 ; [#uses=1 type=i32] [debug line = 49:4]
  call void @llvm.dbg.value(metadata !{i32 %"sha256ctx.state[4].1"}, i64 0, metadata !270), !dbg !281 ; [debug line = 49:4] [debug variable = sha256ctx.state[4]]
  %"sha256ctx.state[5].1" = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %call.ret1, 8, !dbg !281 ; [#uses=1 type=i32] [debug line = 49:4]
  call void @llvm.dbg.value(metadata !{i32 %"sha256ctx.state[5].1"}, i64 0, metadata !271), !dbg !281 ; [debug line = 49:4] [debug variable = sha256ctx.state[5]]
  %"sha256ctx.state[6].1" = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %call.ret1, 9, !dbg !281 ; [#uses=1 type=i32] [debug line = 49:4]
  call void @llvm.dbg.value(metadata !{i32 %"sha256ctx.state[6].1"}, i64 0, metadata !272), !dbg !281 ; [debug line = 49:4] [debug variable = sha256ctx.state[6]]
  %"sha256ctx.state[7].1" = extractvalue { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 } %call.ret1, 10, !dbg !281 ; [#uses=1 type=i32] [debug line = 49:4]
  call void @llvm.dbg.value(metadata !{i32 %"sha256ctx.state[7].1"}, i64 0, metadata !273), !dbg !281 ; [debug line = 49:4] [debug variable = sha256ctx.state[7]]
  call void @llvm.dbg.value(metadata !{i32 %"sha256ctx.bitlen[0].1"}, i64 0, metadata !274), !dbg !281 ; [debug line = 49:4] [debug variable = sha256ctx.bitlen[0]]
  call void @llvm.dbg.value(metadata !{i32 %"sha256ctx.bitlen[1].1"}, i64 0, metadata !275), !dbg !281 ; [debug line = 49:4] [debug variable = sha256ctx.bitlen[1]]
  call void @llvm.dbg.value(metadata !{i32 %sha256ctx.datalen.3}, i64 0, metadata !276), !dbg !281 ; [debug line = 49:4] [debug variable = sha256ctx.datalen]
  br label %7

; <label>:7                                       ; preds = %6, %4
  %sha256ctx.state.7.1 = phi i32 [ %"sha256ctx.state[7]", %4 ], [ %"sha256ctx.state[7].1", %6 ] ; [#uses=1 type=i32]
  %sha256ctx.state.6.1 = phi i32 [ %"sha256ctx.state[6]", %4 ], [ %"sha256ctx.state[6].1", %6 ] ; [#uses=1 type=i32]
  %sha256ctx.state.5.1 = phi i32 [ %"sha256ctx.state[5]", %4 ], [ %"sha256ctx.state[5].1", %6 ] ; [#uses=1 type=i32]
  %sha256ctx.state.4.1 = phi i32 [ %"sha256ctx.state[4]", %4 ], [ %"sha256ctx.state[4].1", %6 ] ; [#uses=1 type=i32]
  %sha256ctx.state.3.1 = phi i32 [ %"sha256ctx.state[3]", %4 ], [ %"sha256ctx.state[3].1", %6 ] ; [#uses=1 type=i32]
  %sha256ctx.state.2.1 = phi i32 [ %"sha256ctx.state[2]", %4 ], [ %"sha256ctx.state[2].1", %6 ] ; [#uses=1 type=i32]
  %sha256ctx.state.1.1 = phi i32 [ %"sha256ctx.state[1]", %4 ], [ %"sha256ctx.state[1].1", %6 ] ; [#uses=1 type=i32]
  %sha256ctx.state.0.1 = phi i32 [ %"sha256ctx.state[0]", %4 ], [ %"sha256ctx.state[0].1", %6 ] ; [#uses=1 type=i32]
  %sha256ctx.bitlen.1.1 = phi i32 [ %"sha256ctx.bitlen[1]", %4 ], [ %"sha256ctx.bitlen[1].1", %6 ] ; [#uses=1 type=i32]
  %sha256ctx.bitlen.0.1 = phi i32 [ %"sha256ctx.bitlen[0]", %4 ], [ %"sha256ctx.bitlen[0].1", %6 ] ; [#uses=1 type=i32]
  %sha256ctx.datalen.1 = phi i32 [ %sha256ctx.datalen.2, %4 ], [ %sha256ctx.datalen.3, %6 ] ; [#uses=1 type=i32]
  %seg_offset.1 = phi i32 [ %seg_offset.2, %4 ], [ %seg_offset, %6 ] ; [#uses=1 type=i32]
  %n.1 = phi i32 [ %n.2, %4 ], [ 0, %6 ]          ; [#uses=1 type=i32]
  %8 = call i32 (...)* @_ssdm_op_SpecRegionEnd([12 x i8]* @.str8, i32 %tmp.14) nounwind, !dbg !282 ; [#uses=0 type=i32] [debug line = 52:2]
  br label %1, !dbg !282                          ; [debug line = 52:2]

; <label>:9                                       ; preds = %1
  %sha256ctx.datalen.lcssa = phi i32 [ %sha256ctx.datalen, %1 ] ; [#uses=1 type=i32]
  %sha256ctx.bitlen.lcssa = phi i32 [ %sha256ctx.bitlen, %1 ] ; [#uses=1 type=i32]
  %sha256ctx.bitlen.1.lcssa = phi i32 [ %sha256ctx.bitlen.1, %1 ] ; [#uses=1 type=i32]
  %sha256ctx.state.lcssa = phi i32 [ %sha256ctx.state, %1 ] ; [#uses=1 type=i32]
  %sha256ctx.state.1.lcssa = phi i32 [ %sha256ctx.state.1, %1 ] ; [#uses=1 type=i32]
  %sha256ctx.state.2.lcssa = phi i32 [ %sha256ctx.state.2, %1 ] ; [#uses=1 type=i32]
  %sha256ctx.state.3.lcssa = phi i32 [ %sha256ctx.state.3, %1 ] ; [#uses=1 type=i32]
  %sha256ctx.state.4.lcssa = phi i32 [ %sha256ctx.state.4, %1 ] ; [#uses=1 type=i32]
  %sha256ctx.state.5.lcssa = phi i32 [ %sha256ctx.state.5, %1 ] ; [#uses=1 type=i32]
  %sha256ctx.state.6.lcssa = phi i32 [ %sha256ctx.state.6, %1 ] ; [#uses=1 type=i32]
  %sha256ctx.state.7.lcssa = phi i32 [ %sha256ctx.state.7, %1 ] ; [#uses=1 type=i32]
  call fastcc void @sha256_final([64 x i8]* %sha256ctx.data, i32 %sha256ctx.datalen.lcssa, i32 %sha256ctx.bitlen.lcssa, i32 %sha256ctx.bitlen.1.lcssa, i32 %sha256ctx.state.lcssa, i32 %sha256ctx.state.1.lcssa, i32 %sha256ctx.state.2.lcssa, i32 %sha256ctx.state.3.lcssa, i32 %sha256ctx.state.4.lcssa, i32 %sha256ctx.state.5.lcssa, i32 %sha256ctx.state.6.lcssa, i32 %sha256ctx.state.7.lcssa, [64 x i8]* %seg_buf) nounwind, !dbg !283 ; [debug line = 55:2]
  %seg_buf.addr = getelementptr inbounds [64 x i8]* %seg_buf, i32 0, i32 0, !dbg !284 ; [#uses=1 type=i8*] [debug line = 60:2]
  %seg_buf.load = load i8* %seg_buf.addr, align 1, !dbg !284 ; [#uses=1 type=i8] [debug line = 60:2]
  %digest.addr = getelementptr [32 x i8]* %digest, i32 0, i32 0, !dbg !284 ; [#uses=1 type=i8*] [debug line = 60:2]
  store i8 %seg_buf.load, i8* %digest.addr, align 1, !dbg !284 ; [debug line = 60:2]
  %seg_buf.addr.1 = getelementptr inbounds [64 x i8]* %seg_buf, i32 0, i32 1, !dbg !284 ; [#uses=1 type=i8*] [debug line = 60:2]
  %seg_buf.load.1 = load i8* %seg_buf.addr.1, align 1, !dbg !284 ; [#uses=1 type=i8] [debug line = 60:2]
  %digest.addr.1 = getelementptr [32 x i8]* %digest, i32 0, i32 1, !dbg !284 ; [#uses=1 type=i8*] [debug line = 60:2]
  store i8 %seg_buf.load.1, i8* %digest.addr.1, align 1, !dbg !284 ; [debug line = 60:2]
  %seg_buf.addr.4 = getelementptr inbounds [64 x i8]* %seg_buf, i32 0, i32 2, !dbg !284 ; [#uses=1 type=i8*] [debug line = 60:2]
  %seg_buf.load.2 = load i8* %seg_buf.addr.4, align 1, !dbg !284 ; [#uses=1 type=i8] [debug line = 60:2]
  %digest.addr.2 = getelementptr [32 x i8]* %digest, i32 0, i32 2, !dbg !284 ; [#uses=1 type=i8*] [debug line = 60:2]
  store i8 %seg_buf.load.2, i8* %digest.addr.2, align 1, !dbg !284 ; [debug line = 60:2]
  %seg_buf.addr.5 = getelementptr inbounds [64 x i8]* %seg_buf, i32 0, i32 3, !dbg !284 ; [#uses=1 type=i8*] [debug line = 60:2]
  %seg_buf.load.3 = load i8* %seg_buf.addr.5, align 1, !dbg !284 ; [#uses=1 type=i8] [debug line = 60:2]
  %digest.addr.3 = getelementptr [32 x i8]* %digest, i32 0, i32 3, !dbg !284 ; [#uses=1 type=i8*] [debug line = 60:2]
  store i8 %seg_buf.load.3, i8* %digest.addr.3, align 1, !dbg !284 ; [debug line = 60:2]
  %seg_buf.addr.6 = getelementptr inbounds [64 x i8]* %seg_buf, i32 0, i32 4, !dbg !284 ; [#uses=1 type=i8*] [debug line = 60:2]
  %seg_buf.load.4 = load i8* %seg_buf.addr.6, align 1, !dbg !284 ; [#uses=1 type=i8] [debug line = 60:2]
  %digest.addr.4 = getelementptr [32 x i8]* %digest, i32 0, i32 4, !dbg !284 ; [#uses=1 type=i8*] [debug line = 60:2]
  store i8 %seg_buf.load.4, i8* %digest.addr.4, align 1, !dbg !284 ; [debug line = 60:2]
  %seg_buf.addr.7 = getelementptr inbounds [64 x i8]* %seg_buf, i32 0, i32 5, !dbg !284 ; [#uses=1 type=i8*] [debug line = 60:2]
  %seg_buf.load.5 = load i8* %seg_buf.addr.7, align 1, !dbg !284 ; [#uses=1 type=i8] [debug line = 60:2]
  %digest.addr.5 = getelementptr [32 x i8]* %digest, i32 0, i32 5, !dbg !284 ; [#uses=1 type=i8*] [debug line = 60:2]
  store i8 %seg_buf.load.5, i8* %digest.addr.5, align 1, !dbg !284 ; [debug line = 60:2]
  %seg_buf.addr.8 = getelementptr inbounds [64 x i8]* %seg_buf, i32 0, i32 6, !dbg !284 ; [#uses=1 type=i8*] [debug line = 60:2]
  %seg_buf.load.6 = load i8* %seg_buf.addr.8, align 1, !dbg !284 ; [#uses=1 type=i8] [debug line = 60:2]
  %digest.addr.6 = getelementptr [32 x i8]* %digest, i32 0, i32 6, !dbg !284 ; [#uses=1 type=i8*] [debug line = 60:2]
  store i8 %seg_buf.load.6, i8* %digest.addr.6, align 1, !dbg !284 ; [debug line = 60:2]
  %seg_buf.addr.9 = getelementptr inbounds [64 x i8]* %seg_buf, i32 0, i32 7, !dbg !284 ; [#uses=1 type=i8*] [debug line = 60:2]
  %seg_buf.load.7 = load i8* %seg_buf.addr.9, align 1, !dbg !284 ; [#uses=1 type=i8] [debug line = 60:2]
  %digest.addr.7 = getelementptr [32 x i8]* %digest, i32 0, i32 7, !dbg !284 ; [#uses=1 type=i8*] [debug line = 60:2]
  store i8 %seg_buf.load.7, i8* %digest.addr.7, align 1, !dbg !284 ; [debug line = 60:2]
  %seg_buf.addr.10 = getelementptr inbounds [64 x i8]* %seg_buf, i32 0, i32 8, !dbg !284 ; [#uses=1 type=i8*] [debug line = 60:2]
  %seg_buf.load.8 = load i8* %seg_buf.addr.10, align 1, !dbg !284 ; [#uses=1 type=i8] [debug line = 60:2]
  %digest.addr.8 = getelementptr [32 x i8]* %digest, i32 0, i32 8, !dbg !284 ; [#uses=1 type=i8*] [debug line = 60:2]
  store i8 %seg_buf.load.8, i8* %digest.addr.8, align 1, !dbg !284 ; [debug line = 60:2]
  %seg_buf.addr.11 = getelementptr inbounds [64 x i8]* %seg_buf, i32 0, i32 9, !dbg !284 ; [#uses=1 type=i8*] [debug line = 60:2]
  %seg_buf.load.9 = load i8* %seg_buf.addr.11, align 1, !dbg !284 ; [#uses=1 type=i8] [debug line = 60:2]
  %digest.addr.9 = getelementptr [32 x i8]* %digest, i32 0, i32 9, !dbg !284 ; [#uses=1 type=i8*] [debug line = 60:2]
  store i8 %seg_buf.load.9, i8* %digest.addr.9, align 1, !dbg !284 ; [debug line = 60:2]
  %seg_buf.addr.12 = getelementptr inbounds [64 x i8]* %seg_buf, i32 0, i32 10, !dbg !284 ; [#uses=1 type=i8*] [debug line = 60:2]
  %seg_buf.load.10 = load i8* %seg_buf.addr.12, align 1, !dbg !284 ; [#uses=1 type=i8] [debug line = 60:2]
  %digest.addr.10 = getelementptr [32 x i8]* %digest, i32 0, i32 10, !dbg !284 ; [#uses=1 type=i8*] [debug line = 60:2]
  store i8 %seg_buf.load.10, i8* %digest.addr.10, align 1, !dbg !284 ; [debug line = 60:2]
  %seg_buf.addr.13 = getelementptr inbounds [64 x i8]* %seg_buf, i32 0, i32 11, !dbg !284 ; [#uses=1 type=i8*] [debug line = 60:2]
  %seg_buf.load.11 = load i8* %seg_buf.addr.13, align 1, !dbg !284 ; [#uses=1 type=i8] [debug line = 60:2]
  %digest.addr.11 = getelementptr [32 x i8]* %digest, i32 0, i32 11, !dbg !284 ; [#uses=1 type=i8*] [debug line = 60:2]
  store i8 %seg_buf.load.11, i8* %digest.addr.11, align 1, !dbg !284 ; [debug line = 60:2]
  %seg_buf.addr.14 = getelementptr inbounds [64 x i8]* %seg_buf, i32 0, i32 12, !dbg !284 ; [#uses=1 type=i8*] [debug line = 60:2]
  %seg_buf.load.12 = load i8* %seg_buf.addr.14, align 1, !dbg !284 ; [#uses=1 type=i8] [debug line = 60:2]
  %digest.addr.12 = getelementptr [32 x i8]* %digest, i32 0, i32 12, !dbg !284 ; [#uses=1 type=i8*] [debug line = 60:2]
  store i8 %seg_buf.load.12, i8* %digest.addr.12, align 1, !dbg !284 ; [debug line = 60:2]
  %seg_buf.addr.15 = getelementptr inbounds [64 x i8]* %seg_buf, i32 0, i32 13, !dbg !284 ; [#uses=1 type=i8*] [debug line = 60:2]
  %seg_buf.load.13 = load i8* %seg_buf.addr.15, align 1, !dbg !284 ; [#uses=1 type=i8] [debug line = 60:2]
  %digest.addr.13 = getelementptr [32 x i8]* %digest, i32 0, i32 13, !dbg !284 ; [#uses=1 type=i8*] [debug line = 60:2]
  store i8 %seg_buf.load.13, i8* %digest.addr.13, align 1, !dbg !284 ; [debug line = 60:2]
  %seg_buf.addr.16 = getelementptr inbounds [64 x i8]* %seg_buf, i32 0, i32 14, !dbg !284 ; [#uses=1 type=i8*] [debug line = 60:2]
  %seg_buf.load.14 = load i8* %seg_buf.addr.16, align 1, !dbg !284 ; [#uses=1 type=i8] [debug line = 60:2]
  %digest.addr.14 = getelementptr [32 x i8]* %digest, i32 0, i32 14, !dbg !284 ; [#uses=1 type=i8*] [debug line = 60:2]
  store i8 %seg_buf.load.14, i8* %digest.addr.14, align 1, !dbg !284 ; [debug line = 60:2]
  %seg_buf.addr.17 = getelementptr inbounds [64 x i8]* %seg_buf, i32 0, i32 15, !dbg !284 ; [#uses=1 type=i8*] [debug line = 60:2]
  %seg_buf.load.15 = load i8* %seg_buf.addr.17, align 1, !dbg !284 ; [#uses=1 type=i8] [debug line = 60:2]
  %digest.addr.15 = getelementptr [32 x i8]* %digest, i32 0, i32 15, !dbg !284 ; [#uses=1 type=i8*] [debug line = 60:2]
  store i8 %seg_buf.load.15, i8* %digest.addr.15, align 1, !dbg !284 ; [debug line = 60:2]
  %seg_buf.addr.18 = getelementptr inbounds [64 x i8]* %seg_buf, i32 0, i32 16, !dbg !284 ; [#uses=1 type=i8*] [debug line = 60:2]
  %seg_buf.load.16 = load i8* %seg_buf.addr.18, align 1, !dbg !284 ; [#uses=1 type=i8] [debug line = 60:2]
  %digest.addr.16 = getelementptr [32 x i8]* %digest, i32 0, i32 16, !dbg !284 ; [#uses=1 type=i8*] [debug line = 60:2]
  store i8 %seg_buf.load.16, i8* %digest.addr.16, align 1, !dbg !284 ; [debug line = 60:2]
  %seg_buf.addr.19 = getelementptr inbounds [64 x i8]* %seg_buf, i32 0, i32 17, !dbg !284 ; [#uses=1 type=i8*] [debug line = 60:2]
  %seg_buf.load.17 = load i8* %seg_buf.addr.19, align 1, !dbg !284 ; [#uses=1 type=i8] [debug line = 60:2]
  %digest.addr.17 = getelementptr [32 x i8]* %digest, i32 0, i32 17, !dbg !284 ; [#uses=1 type=i8*] [debug line = 60:2]
  store i8 %seg_buf.load.17, i8* %digest.addr.17, align 1, !dbg !284 ; [debug line = 60:2]
  %seg_buf.addr.20 = getelementptr inbounds [64 x i8]* %seg_buf, i32 0, i32 18, !dbg !284 ; [#uses=1 type=i8*] [debug line = 60:2]
  %seg_buf.load.18 = load i8* %seg_buf.addr.20, align 1, !dbg !284 ; [#uses=1 type=i8] [debug line = 60:2]
  %digest.addr.18 = getelementptr [32 x i8]* %digest, i32 0, i32 18, !dbg !284 ; [#uses=1 type=i8*] [debug line = 60:2]
  store i8 %seg_buf.load.18, i8* %digest.addr.18, align 1, !dbg !284 ; [debug line = 60:2]
  %seg_buf.addr.21 = getelementptr inbounds [64 x i8]* %seg_buf, i32 0, i32 19, !dbg !284 ; [#uses=1 type=i8*] [debug line = 60:2]
  %seg_buf.load.19 = load i8* %seg_buf.addr.21, align 1, !dbg !284 ; [#uses=1 type=i8] [debug line = 60:2]
  %digest.addr.19 = getelementptr [32 x i8]* %digest, i32 0, i32 19, !dbg !284 ; [#uses=1 type=i8*] [debug line = 60:2]
  store i8 %seg_buf.load.19, i8* %digest.addr.19, align 1, !dbg !284 ; [debug line = 60:2]
  %seg_buf.addr.22 = getelementptr inbounds [64 x i8]* %seg_buf, i32 0, i32 20, !dbg !284 ; [#uses=1 type=i8*] [debug line = 60:2]
  %seg_buf.load.20 = load i8* %seg_buf.addr.22, align 1, !dbg !284 ; [#uses=1 type=i8] [debug line = 60:2]
  %digest.addr.20 = getelementptr [32 x i8]* %digest, i32 0, i32 20, !dbg !284 ; [#uses=1 type=i8*] [debug line = 60:2]
  store i8 %seg_buf.load.20, i8* %digest.addr.20, align 1, !dbg !284 ; [debug line = 60:2]
  %seg_buf.addr.23 = getelementptr inbounds [64 x i8]* %seg_buf, i32 0, i32 21, !dbg !284 ; [#uses=1 type=i8*] [debug line = 60:2]
  %seg_buf.load.21 = load i8* %seg_buf.addr.23, align 1, !dbg !284 ; [#uses=1 type=i8] [debug line = 60:2]
  %digest.addr.21 = getelementptr [32 x i8]* %digest, i32 0, i32 21, !dbg !284 ; [#uses=1 type=i8*] [debug line = 60:2]
  store i8 %seg_buf.load.21, i8* %digest.addr.21, align 1, !dbg !284 ; [debug line = 60:2]
  %seg_buf.addr.24 = getelementptr inbounds [64 x i8]* %seg_buf, i32 0, i32 22, !dbg !284 ; [#uses=1 type=i8*] [debug line = 60:2]
  %seg_buf.load.22 = load i8* %seg_buf.addr.24, align 1, !dbg !284 ; [#uses=1 type=i8] [debug line = 60:2]
  %digest.addr.22 = getelementptr [32 x i8]* %digest, i32 0, i32 22, !dbg !284 ; [#uses=1 type=i8*] [debug line = 60:2]
  store i8 %seg_buf.load.22, i8* %digest.addr.22, align 1, !dbg !284 ; [debug line = 60:2]
  %seg_buf.addr.25 = getelementptr inbounds [64 x i8]* %seg_buf, i32 0, i32 23, !dbg !284 ; [#uses=1 type=i8*] [debug line = 60:2]
  %seg_buf.load.23 = load i8* %seg_buf.addr.25, align 1, !dbg !284 ; [#uses=1 type=i8] [debug line = 60:2]
  %digest.addr.23 = getelementptr [32 x i8]* %digest, i32 0, i32 23, !dbg !284 ; [#uses=1 type=i8*] [debug line = 60:2]
  store i8 %seg_buf.load.23, i8* %digest.addr.23, align 1, !dbg !284 ; [debug line = 60:2]
  %seg_buf.addr.26 = getelementptr inbounds [64 x i8]* %seg_buf, i32 0, i32 24, !dbg !284 ; [#uses=1 type=i8*] [debug line = 60:2]
  %seg_buf.load.24 = load i8* %seg_buf.addr.26, align 1, !dbg !284 ; [#uses=1 type=i8] [debug line = 60:2]
  %digest.addr.24 = getelementptr [32 x i8]* %digest, i32 0, i32 24, !dbg !284 ; [#uses=1 type=i8*] [debug line = 60:2]
  store i8 %seg_buf.load.24, i8* %digest.addr.24, align 1, !dbg !284 ; [debug line = 60:2]
  %seg_buf.addr.27 = getelementptr inbounds [64 x i8]* %seg_buf, i32 0, i32 25, !dbg !284 ; [#uses=1 type=i8*] [debug line = 60:2]
  %seg_buf.load.25 = load i8* %seg_buf.addr.27, align 1, !dbg !284 ; [#uses=1 type=i8] [debug line = 60:2]
  %digest.addr.25 = getelementptr [32 x i8]* %digest, i32 0, i32 25, !dbg !284 ; [#uses=1 type=i8*] [debug line = 60:2]
  store i8 %seg_buf.load.25, i8* %digest.addr.25, align 1, !dbg !284 ; [debug line = 60:2]
  %seg_buf.addr.28 = getelementptr inbounds [64 x i8]* %seg_buf, i32 0, i32 26, !dbg !284 ; [#uses=1 type=i8*] [debug line = 60:2]
  %seg_buf.load.26 = load i8* %seg_buf.addr.28, align 1, !dbg !284 ; [#uses=1 type=i8] [debug line = 60:2]
  %digest.addr.26 = getelementptr [32 x i8]* %digest, i32 0, i32 26, !dbg !284 ; [#uses=1 type=i8*] [debug line = 60:2]
  store i8 %seg_buf.load.26, i8* %digest.addr.26, align 1, !dbg !284 ; [debug line = 60:2]
  %seg_buf.addr.29 = getelementptr inbounds [64 x i8]* %seg_buf, i32 0, i32 27, !dbg !284 ; [#uses=1 type=i8*] [debug line = 60:2]
  %seg_buf.load.27 = load i8* %seg_buf.addr.29, align 1, !dbg !284 ; [#uses=1 type=i8] [debug line = 60:2]
  %digest.addr.27 = getelementptr [32 x i8]* %digest, i32 0, i32 27, !dbg !284 ; [#uses=1 type=i8*] [debug line = 60:2]
  store i8 %seg_buf.load.27, i8* %digest.addr.27, align 1, !dbg !284 ; [debug line = 60:2]
  %seg_buf.addr.30 = getelementptr inbounds [64 x i8]* %seg_buf, i32 0, i32 28, !dbg !284 ; [#uses=1 type=i8*] [debug line = 60:2]
  %seg_buf.load.28 = load i8* %seg_buf.addr.30, align 1, !dbg !284 ; [#uses=1 type=i8] [debug line = 60:2]
  %digest.addr.28 = getelementptr [32 x i8]* %digest, i32 0, i32 28, !dbg !284 ; [#uses=1 type=i8*] [debug line = 60:2]
  store i8 %seg_buf.load.28, i8* %digest.addr.28, align 1, !dbg !284 ; [debug line = 60:2]
  %seg_buf.addr.31 = getelementptr inbounds [64 x i8]* %seg_buf, i32 0, i32 29, !dbg !284 ; [#uses=1 type=i8*] [debug line = 60:2]
  %seg_buf.load.29 = load i8* %seg_buf.addr.31, align 1, !dbg !284 ; [#uses=1 type=i8] [debug line = 60:2]
  %digest.addr.29 = getelementptr [32 x i8]* %digest, i32 0, i32 29, !dbg !284 ; [#uses=1 type=i8*] [debug line = 60:2]
  store i8 %seg_buf.load.29, i8* %digest.addr.29, align 1, !dbg !284 ; [debug line = 60:2]
  %seg_buf.addr.32 = getelementptr inbounds [64 x i8]* %seg_buf, i32 0, i32 30, !dbg !284 ; [#uses=1 type=i8*] [debug line = 60:2]
  %seg_buf.load.30 = load i8* %seg_buf.addr.32, align 1, !dbg !284 ; [#uses=1 type=i8] [debug line = 60:2]
  %digest.addr.30 = getelementptr [32 x i8]* %digest, i32 0, i32 30, !dbg !284 ; [#uses=1 type=i8*] [debug line = 60:2]
  store i8 %seg_buf.load.30, i8* %digest.addr.30, align 1, !dbg !284 ; [debug line = 60:2]
  %seg_buf.addr.33 = getelementptr inbounds [64 x i8]* %seg_buf, i32 0, i32 31, !dbg !284 ; [#uses=1 type=i8*] [debug line = 60:2]
  %seg_buf.load.31 = load i8* %seg_buf.addr.33, align 1, !dbg !284 ; [#uses=1 type=i8] [debug line = 60:2]
  %digest.addr.31 = getelementptr [32 x i8]* %digest, i32 0, i32 31, !dbg !284 ; [#uses=1 type=i8*] [debug line = 60:2]
  store i8 %seg_buf.load.31, i8* %digest.addr.31, align 1, !dbg !284 ; [debug line = 60:2]
  ret void, !dbg !287                             ; [debug line = 62:1]
}

; [#uses=57]
declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

; [#uses=3]
declare void @llvm.dbg.declare(metadata, metadata) nounwind readnone

; [#uses=1]
declare void @_ssdm_op_SpecTopModule(...)

; [#uses=1]
declare i32 @_ssdm_op_SpecRegionEnd(...)

; [#uses=1]
declare i32 @_ssdm_op_SpecRegionBegin(...)

; [#uses=9]
declare void @_ssdm_op_SpecLoopTripCount(...) nounwind

; [#uses=5]
declare void @_ssdm_op_SpecInterface(...) nounwind

; [#uses=4]
declare void @_ssdm_op_SpecBitsMap(...)

; [#uses=0]
declare i8 @_ssdm_op_PartSelect.i8.i8.i32.i32(i8, i32, i32) nounwind readnone

; [#uses=0]
declare i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32, i32, i32) nounwind readnone

; [#uses=0]
declare i8 @_ssdm_op_PartSelect.i8.i16.i32.i32(i16, i32, i32) nounwind readnone

; [#uses=0]
declare i24 @_ssdm_op_PartSelect.i24.i32.i32.i32(i32, i32, i32) nounwind readnone

; [#uses=0]
declare i16 @_ssdm_op_PartSelect.i16.i32.i32.i32(i32, i32, i32) nounwind readnone

; [#uses=1]
declare i16 @_ssdm_op_PartSelect.i16.i24.i32.i32(i24, i32, i32) nounwind readnone

; [#uses=0]
declare i32 @_ssdm_op_BitConcatenate.i32.i8.i24(i8, i24) nounwind readnone

; [#uses=1]
declare i32 @_ssdm_op_BitConcatenate.i32.i8.i16.i8(i8, i16, i8) nounwind readnone

; [#uses=0]
declare i32 @_ssdm_op_BitConcatenate.i32.i24.i8(i24, i8) nounwind readnone

; [#uses=0]
declare i32 @_ssdm_op_BitConcatenate.i32.i16.i16(i16, i16) nounwind readnone

; [#uses=1]
declare i24 @_ssdm_op_BitConcatenate.i24.i8.i16(i8, i16) nounwind readnone

; [#uses=0]
declare i16 @_ssdm_op_BitConcatenate.i16.i8.i8(i8, i8) nounwind readnone

; [#uses=1]
declare void @_ssdm_SpecKeepAssert(...)

!opencl.kernels = !{!0, !7, !13, !19, !21}
!hls.encrypted.func = !{}
!llvm.map.gv = !{}
!llvm.dbg.cu = !{!27}

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
!27 = metadata !{i32 786449, i32 0, i32 1, metadata !"C:/Student/SHA_new/sha/solution1/.autopilot/db/sha256.pragma.2.c", metadata !"C:\5CStudent\5CSHA_new", metadata !"clang version 3.1 ", i1 true, i1 false, metadata !"", i32 0, null, null, null, metadata !28} ; [ DW_TAG_compile_unit ]
!28 = metadata !{metadata !29}
!29 = metadata !{metadata !30, metadata !36, metadata !39}
!30 = metadata !{i32 786484, i32 0, null, metadata !"k", metadata !"k", metadata !"", metadata !31, i32 18, metadata !32, i32 0, i32 1, [64 x i32]* @k} ; [ DW_TAG_variable ]
!31 = metadata !{i32 786473, metadata !"./sha256_impl.c", metadata !"C:\5CStudent\5CSHA_new", null} ; [ DW_TAG_file_type ]
!32 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 2048, i64 32, i32 0, i32 0, metadata !33, metadata !34, i32 0, i32 0} ; [ DW_TAG_array_type ]
!33 = metadata !{i32 786468, null, metadata !"unsigned int", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 7} ; [ DW_TAG_base_type ]
!34 = metadata !{metadata !35}
!35 = metadata !{i32 786465, i64 0, i64 63}       ; [ DW_TAG_subrange_type ]
!36 = metadata !{i32 786484, i32 0, null, metadata !"_sys_nerr", metadata !"_sys_nerr", metadata !"", metadata !37, i32 157, metadata !38, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!37 = metadata !{i32 786473, metadata !"C:/Xilinx/Vivado_HLS/2017.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\5Cstdlib.h", metadata !"C:\5CStudent\5CSHA_new", null} ; [ DW_TAG_file_type ]
!38 = metadata !{i32 786468, null, metadata !"int", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!39 = metadata !{i32 786484, i32 0, null, metadata !"_amblksiz", metadata !"_amblksiz", metadata !"", metadata !40, i32 53, metadata !33, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!40 = metadata !{i32 786473, metadata !"C:/Xilinx/Vivado_HLS/2017.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\5Cmalloc.h", metadata !"C:\5CStudent\5CSHA_new", null} ; [ DW_TAG_file_type ]
!41 = metadata !{i32 0, i32 64, i32 0, i32 64}
!42 = metadata !{i32 790531, metadata !43, metadata !"ctx.data", null, i32 89, metadata !67, i32 0, i32 0} ; [ DW_TAG_arg_variable_field ]
!43 = metadata !{i32 786689, metadata !44, metadata !"ctx", metadata !31, i32 16777305, metadata !47, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!44 = metadata !{i32 786478, i32 0, metadata !31, metadata !"sha256_update", metadata !"sha256_update", metadata !"", metadata !31, i32 89, metadata !45, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !65, i32 90} ; [ DW_TAG_subprogram ]
!45 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !46, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!46 = metadata !{null, metadata !47, metadata !64, metadata !33}
!47 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 32, i64 32, i64 0, i32 0, metadata !48} ; [ DW_TAG_pointer_type ]
!48 = metadata !{i32 786454, null, metadata !"SHA256_CTX", metadata !31, i32 11, i64 0, i64 0, i64 0, i32 0, metadata !49} ; [ DW_TAG_typedef ]
!49 = metadata !{i32 786451, null, metadata !"", metadata !50, i32 6, i64 864, i64 32, i32 0, i32 0, null, metadata !51, i32 0, i32 0} ; [ DW_TAG_structure_type ]
!50 = metadata !{i32 786473, metadata !"./sha256_impl.h", metadata !"C:\5CStudent\5CSHA_new", null} ; [ DW_TAG_file_type ]
!51 = metadata !{metadata !52, metadata !55, metadata !56, metadata !60}
!52 = metadata !{i32 786445, metadata !49, metadata !"data", metadata !50, i32 7, i64 512, i64 8, i64 0, i32 0, metadata !53} ; [ DW_TAG_member ]
!53 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 512, i64 8, i32 0, i32 0, metadata !54, metadata !34, i32 0, i32 0} ; [ DW_TAG_array_type ]
!54 = metadata !{i32 786468, null, metadata !"unsigned char", null, i32 0, i64 8, i64 8, i64 0, i32 0, i32 8} ; [ DW_TAG_base_type ]
!55 = metadata !{i32 786445, metadata !49, metadata !"datalen", metadata !50, i32 8, i64 32, i64 32, i64 512, i32 0, metadata !33} ; [ DW_TAG_member ]
!56 = metadata !{i32 786445, metadata !49, metadata !"bitlen", metadata !50, i32 9, i64 64, i64 32, i64 544, i32 0, metadata !57} ; [ DW_TAG_member ]
!57 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 64, i64 32, i32 0, i32 0, metadata !33, metadata !58, i32 0, i32 0} ; [ DW_TAG_array_type ]
!58 = metadata !{metadata !59}
!59 = metadata !{i32 786465, i64 0, i64 1}        ; [ DW_TAG_subrange_type ]
!60 = metadata !{i32 786445, metadata !49, metadata !"state", metadata !50, i32 10, i64 256, i64 32, i64 608, i32 0, metadata !61} ; [ DW_TAG_member ]
!61 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 256, i64 32, i32 0, i32 0, metadata !33, metadata !62, i32 0, i32 0} ; [ DW_TAG_array_type ]
!62 = metadata !{metadata !63}
!63 = metadata !{i32 786465, i64 0, i64 7}        ; [ DW_TAG_subrange_type ]
!64 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 32, i64 32, i64 0, i32 0, metadata !54} ; [ DW_TAG_pointer_type ]
!65 = metadata !{metadata !66}
!66 = metadata !{i32 786468}                      ; [ DW_TAG_base_type ]
!67 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 32, i64 32, i64 0, i32 0, metadata !68} ; [ DW_TAG_pointer_type ]
!68 = metadata !{i32 786452, null, metadata !"", metadata !50, i32 6, i64 512, i64 32, i32 0, i32 0, null, metadata !69, i32 0, i32 0} ; [ DW_TAG_structure_field_type ]
!69 = metadata !{metadata !52}
!70 = metadata !{i32 89, i32 32, metadata !44, null}
!71 = metadata !{i32 790533, metadata !43, metadata !"ctx.datalen", null, i32 89, metadata !72, i32 0, i32 0} ; [ DW_TAG_arg_variable_field_ro ]
!72 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 32, i64 32, i64 0, i32 0, metadata !73} ; [ DW_TAG_pointer_type ]
!73 = metadata !{i32 786452, null, metadata !"", metadata !50, i32 6, i64 32, i64 32, i32 0, i32 0, null, metadata !74, i32 0, i32 0} ; [ DW_TAG_structure_field_type ]
!74 = metadata !{metadata !55}
!75 = metadata !{i32 786689, metadata !44, metadata !"data", null, i32 89, metadata !53, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!76 = metadata !{i32 89, i32 67, metadata !44, null}
!77 = metadata !{i32 786689, metadata !44, metadata !"len", metadata !31, i32 50331737, metadata !33, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!78 = metadata !{i32 89, i32 105, metadata !44, null}
!79 = metadata !{i32 93, i32 9, metadata !80, null}
!80 = metadata !{i32 786443, metadata !81, i32 93, i32 4, metadata !31, i32 9} ; [ DW_TAG_lexical_block ]
!81 = metadata !{i32 786443, metadata !44, i32 90, i32 1, metadata !31, i32 8} ; [ DW_TAG_lexical_block ]
!82 = metadata !{i32 95, i32 2, metadata !83, null}
!83 = metadata !{i32 786443, metadata !80, i32 93, i32 28, metadata !31, i32 10} ; [ DW_TAG_lexical_block ]
!84 = metadata !{i32 97, i32 7, metadata !83, null}
!85 = metadata !{i32 98, i32 10, metadata !86, null}
!86 = metadata !{i32 786443, metadata !83, i32 97, i32 31, metadata !31, i32 11} ; [ DW_TAG_lexical_block ]
!87 = metadata !{i32 99, i32 10, metadata !86, null}
!88 = metadata !{i32 99, i32 51, metadata !86, null}
!89 = metadata !{i32 99, i32 69, metadata !86, null}
!90 = metadata !{i32 101, i32 7, metadata !86, null}
!91 = metadata !{i32 93, i32 23, metadata !80, null}
!92 = metadata !{i32 786688, metadata !81, metadata !"i", metadata !31, i32 91, metadata !33, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!93 = metadata !{i32 103, i32 1, metadata !81, null}
!94 = metadata !{i32 786689, metadata !95, metadata !"data", null, i32 30, metadata !53, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!95 = metadata !{i32 786478, i32 0, metadata !31, metadata !"sha256_transform", metadata !"sha256_transform", metadata !"", metadata !31, i32 30, metadata !96, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !65, i32 31} ; [ DW_TAG_subprogram ]
!96 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !97, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!97 = metadata !{null, metadata !47, metadata !64}
!98 = metadata !{i32 30, i32 70, metadata !95, null}
!99 = metadata !{i32 786688, metadata !100, metadata !"m", metadata !31, i32 32, metadata !32, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!100 = metadata !{i32 786443, metadata !95, i32 31, i32 1, metadata !31, i32 0} ; [ DW_TAG_lexical_block ]
!101 = metadata !{i32 32, i32 60, metadata !100, null}
!102 = metadata !{i32 34, i32 9, metadata !103, null}
!103 = metadata !{i32 786443, metadata !100, i32 34, i32 4, metadata !31, i32 1} ; [ DW_TAG_lexical_block ]
!104 = metadata !{i32 37, i32 4, metadata !105, null}
!105 = metadata !{i32 786443, metadata !100, i32 37, i32 4, metadata !31, i32 3} ; [ DW_TAG_lexical_block ]
!106 = metadata !{i32 36, i32 2, metadata !107, null}
!107 = metadata !{i32 786443, metadata !103, i32 36, i32 2, metadata !31, i32 2} ; [ DW_TAG_lexical_block ]
!108 = metadata !{i32 34, i32 26, metadata !103, null}
!109 = metadata !{i32 786688, metadata !100, metadata !"j", metadata !31, i32 32, metadata !33, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!110 = metadata !{i32 50, i32 9, metadata !111, null}
!111 = metadata !{i32 786443, metadata !100, i32 50, i32 4, metadata !31, i32 5} ; [ DW_TAG_lexical_block ]
!112 = metadata !{i32 39, i32 2, metadata !113, null}
!113 = metadata !{i32 786443, metadata !105, i32 39, i32 2, metadata !31, i32 4} ; [ DW_TAG_lexical_block ]
!114 = metadata !{i32 37, i32 20, metadata !105, null}
!115 = metadata !{i32 786688, metadata !100, metadata !"i", metadata !31, i32 32, metadata !33, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!116 = metadata !{i32 52, i32 2, metadata !117, null}
!117 = metadata !{i32 786443, metadata !111, i32 50, i32 29, metadata !31, i32 6} ; [ DW_TAG_lexical_block ]
!118 = metadata !{i32 786688, metadata !100, metadata !"t1", metadata !31, i32 32, metadata !33, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!119 = metadata !{i32 53, i32 7, metadata !117, null}
!120 = metadata !{i32 786688, metadata !100, metadata !"h", metadata !31, i32 32, metadata !33, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!121 = metadata !{i32 54, i32 7, metadata !117, null}
!122 = metadata !{i32 786688, metadata !100, metadata !"g", metadata !31, i32 32, metadata !33, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!123 = metadata !{i32 55, i32 7, metadata !117, null}
!124 = metadata !{i32 786688, metadata !100, metadata !"f", metadata !31, i32 32, metadata !33, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!125 = metadata !{i32 56, i32 7, metadata !117, null}
!126 = metadata !{i32 57, i32 7, metadata !117, null}
!127 = metadata !{i32 786688, metadata !100, metadata !"e", metadata !31, i32 32, metadata !33, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!128 = metadata !{i32 786688, metadata !100, metadata !"d", metadata !31, i32 32, metadata !33, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!129 = metadata !{i32 58, i32 7, metadata !117, null}
!130 = metadata !{i32 786688, metadata !100, metadata !"c", metadata !31, i32 32, metadata !33, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!131 = metadata !{i32 59, i32 7, metadata !117, null}
!132 = metadata !{i32 786688, metadata !100, metadata !"b", metadata !31, i32 32, metadata !33, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!133 = metadata !{i32 60, i32 7, metadata !117, null}
!134 = metadata !{i32 61, i32 7, metadata !117, null}
!135 = metadata !{i32 786688, metadata !100, metadata !"a", metadata !31, i32 32, metadata !33, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!136 = metadata !{i32 50, i32 24, metadata !111, null}
!137 = metadata !{i32 64, i32 4, metadata !100, null}
!138 = metadata !{i32 65, i32 4, metadata !100, null}
!139 = metadata !{i32 66, i32 4, metadata !100, null}
!140 = metadata !{i32 67, i32 4, metadata !100, null}
!141 = metadata !{i32 68, i32 4, metadata !100, null}
!142 = metadata !{i32 69, i32 4, metadata !100, null}
!143 = metadata !{i32 70, i32 4, metadata !100, null}
!144 = metadata !{i32 71, i32 4, metadata !100, null}
!145 = metadata !{i32 72, i32 1, metadata !100, null}
!146 = metadata !{i32 790531, metadata !147, metadata !"ctx.data", null, i32 105, metadata !67, i32 0, i32 0} ; [ DW_TAG_arg_variable_field ]
!147 = metadata !{i32 786689, metadata !148, metadata !"ctx", metadata !31, i32 16777321, metadata !47, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!148 = metadata !{i32 786478, i32 0, metadata !31, metadata !"sha256_final", metadata !"sha256_final", metadata !"", metadata !31, i32 105, metadata !96, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !65, i32 106} ; [ DW_TAG_subprogram ]
!149 = metadata !{i32 105, i32 31, metadata !148, null}
!150 = metadata !{i32 790533, metadata !147, metadata !"ctx.datalen", null, i32 105, metadata !72, i32 0, i32 0} ; [ DW_TAG_arg_variable_field_ro ]
!151 = metadata !{i32 786689, metadata !148, metadata !"hash", null, i32 105, metadata !53, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!152 = metadata !{i32 105, i32 66, metadata !148, null}
!153 = metadata !{i32 786688, metadata !154, metadata !"i", metadata !31, i32 107, metadata !33, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!154 = metadata !{i32 786443, metadata !148, i32 106, i32 1, metadata !31, i32 12} ; [ DW_TAG_lexical_block ]
!155 = metadata !{i32 109, i32 2, metadata !154, null}
!156 = metadata !{i32 112, i32 2, metadata !154, null}
!157 = metadata !{i32 113, i32 3, metadata !158, null}
!158 = metadata !{i32 786443, metadata !154, i32 112, i32 25, metadata !31, i32 13} ; [ DW_TAG_lexical_block ]
!159 = metadata !{i32 118, i32 3, metadata !160, null}
!160 = metadata !{i32 786443, metadata !154, i32 117, i32 7, metadata !31, i32 14} ; [ DW_TAG_lexical_block ]
!161 = metadata !{i32 114, i32 3, metadata !158, null}
!162 = metadata !{i32 115, i32 4, metadata !158, null}
!163 = metadata !{i32 119, i32 3, metadata !160, null}
!164 = metadata !{i32 120, i32 4, metadata !160, null}
!165 = metadata !{i32 121, i32 3, metadata !160, null}
!166 = metadata !{i32 122, i32 8, metadata !167, null}
!167 = metadata !{i32 786443, metadata !160, i32 122, i32 3, metadata !31, i32 15} ; [ DW_TAG_lexical_block ]
!168 = metadata !{i32 124, i32 2, metadata !169, null}
!169 = metadata !{i32 786443, metadata !167, i32 122, i32 29, metadata !31, i32 16} ; [ DW_TAG_lexical_block ]
!170 = metadata !{i32 122, i32 23, metadata !167, null}
!171 = metadata !{i32 130, i32 4, metadata !154, null}
!172 = metadata !{i32 130, i32 58, metadata !154, null}
!173 = metadata !{i32 130, i32 76, metadata !154, null}
!174 = metadata !{i32 131, i32 4, metadata !154, null}
!175 = metadata !{i32 132, i32 4, metadata !154, null}
!176 = metadata !{i32 133, i32 4, metadata !154, null}
!177 = metadata !{i32 134, i32 4, metadata !154, null}
!178 = metadata !{i32 135, i32 4, metadata !154, null}
!179 = metadata !{i32 136, i32 4, metadata !154, null}
!180 = metadata !{i32 137, i32 4, metadata !154, null}
!181 = metadata !{i32 138, i32 4, metadata !154, null}
!182 = metadata !{i32 139, i32 4, metadata !154, null}
!183 = metadata !{i32 143, i32 9, metadata !184, null}
!184 = metadata !{i32 786443, metadata !154, i32 143, i32 4, metadata !31, i32 17} ; [ DW_TAG_lexical_block ]
!185 = metadata !{i32 145, i32 2, metadata !186, null}
!186 = metadata !{i32 786443, metadata !184, i32 143, i32 26, metadata !31, i32 18} ; [ DW_TAG_lexical_block ]
!187 = metadata !{i32 146, i32 7, metadata !186, null}
!188 = metadata !{i32 147, i32 7, metadata !186, null}
!189 = metadata !{i32 148, i32 7, metadata !186, null}
!190 = metadata !{i32 149, i32 7, metadata !186, null}
!191 = metadata !{i32 150, i32 7, metadata !186, null}
!192 = metadata !{i32 151, i32 7, metadata !186, null}
!193 = metadata !{i32 152, i32 7, metadata !186, null}
!194 = metadata !{i32 143, i32 21, metadata !184, null}
!195 = metadata !{metadata !196}
!196 = metadata !{i32 0, i32 7, metadata !197}
!197 = metadata !{metadata !198}
!198 = metadata !{metadata !"data", metadata !199, metadata !"unsigned char", i32 0, i32 7}
!199 = metadata !{metadata !200}
!200 = metadata !{i32 0, i32 255, i32 1}
!201 = metadata !{metadata !202}
!202 = metadata !{i32 0, i32 31, metadata !203}
!203 = metadata !{metadata !204}
!204 = metadata !{metadata !"base_offset", metadata !205, metadata !"unsigned int", i32 0, i32 31}
!205 = metadata !{metadata !206}
!206 = metadata !{i32 0, i32 0, i32 0}
!207 = metadata !{metadata !208}
!208 = metadata !{i32 0, i32 31, metadata !209}
!209 = metadata !{metadata !210}
!210 = metadata !{metadata !"bytes", metadata !205, metadata !"unsigned int", i32 0, i32 31}
!211 = metadata !{metadata !212}
!212 = metadata !{i32 0, i32 7, metadata !213}
!213 = metadata !{metadata !214}
!214 = metadata !{metadata !"digest", metadata !215, metadata !"unsigned char", i32 0, i32 7}
!215 = metadata !{metadata !216}
!216 = metadata !{i32 0, i32 31, i32 1}
!217 = metadata !{i32 786689, metadata !218, metadata !"data", null, i32 9, metadata !222, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!218 = metadata !{i32 786478, i32 0, metadata !219, metadata !"sha256", metadata !"sha256", metadata !"", metadata !219, i32 9, metadata !220, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !65, i32 12} ; [ DW_TAG_subprogram ]
!219 = metadata !{i32 786473, metadata !"sha256.c", metadata !"C:\5CStudent\5CSHA_new", null} ; [ DW_TAG_file_type ]
!220 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !221, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!221 = metadata !{null, metadata !64, metadata !33, metadata !33, metadata !64}
!222 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 2048, i64 8, i32 0, i32 0, metadata !54, metadata !223, i32 0, i32 0} ; [ DW_TAG_array_type ]
!223 = metadata !{metadata !224}
!224 = metadata !{i32 786465, i64 0, i64 255}     ; [ DW_TAG_subrange_type ]
!225 = metadata !{i32 9, i32 28, metadata !218, null}
!226 = metadata !{i32 786689, metadata !218, metadata !"base_offset", metadata !219, i32 33554442, metadata !33, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!227 = metadata !{i32 10, i32 18, metadata !218, null}
!228 = metadata !{i32 786689, metadata !218, metadata !"bytes", metadata !219, i32 50331659, metadata !33, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!229 = metadata !{i32 11, i32 18, metadata !218, null}
!230 = metadata !{i32 786689, metadata !218, metadata !"digest", null, i32 12, metadata !231, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!231 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 256, i64 8, i32 0, i32 0, metadata !54, metadata !232, i32 0, i32 0} ; [ DW_TAG_array_type ]
!232 = metadata !{metadata !233}
!233 = metadata !{i32 786465, i64 0, i64 31}      ; [ DW_TAG_subrange_type ]
!234 = metadata !{i32 12, i32 19, metadata !218, null}
!235 = metadata !{i32 18, i32 1, metadata !236, null}
!236 = metadata !{i32 786443, metadata !218, i32 12, i32 80, metadata !219, i32 19} ; [ DW_TAG_lexical_block ]
!237 = metadata !{i32 19, i32 1, metadata !236, null}
!238 = metadata !{i32 20, i32 1, metadata !236, null}
!239 = metadata !{i32 786688, metadata !236, metadata !"seg_buf", metadata !219, i32 23, metadata !53, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!240 = metadata !{i32 23, i32 16, metadata !236, null}
!241 = metadata !{i32 786688, metadata !236, metadata !"n", metadata !219, i32 26, metadata !33, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!242 = metadata !{i32 26, i32 24, metadata !236, null}
!243 = metadata !{i32 790529, metadata !244, metadata !"sha256ctx.data", null, i32 29, metadata !68, i32 0, i32 0} ; [ DW_TAG_auto_variable_field ]
!244 = metadata !{i32 786688, metadata !236, metadata !"sha256ctx", metadata !219, i32 29, metadata !48, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!245 = metadata !{i32 29, i32 13, metadata !236, null}
!246 = metadata !{i32 33, i32 2, metadata !236, null}
!247 = metadata !{i32 34, i32 3, metadata !248, null}
!248 = metadata !{i32 786443, metadata !236, i32 34, i32 2, metadata !219, i32 20} ; [ DW_TAG_lexical_block ]
!249 = metadata !{i32 35, i32 1, metadata !248, null}
!250 = metadata !{i32 36, i32 2, metadata !248, null}
!251 = metadata !{i32 38, i32 9, metadata !252, null}
!252 = metadata !{i32 786443, metadata !253, i32 38, i32 4, metadata !219, i32 22} ; [ DW_TAG_lexical_block ]
!253 = metadata !{i32 786443, metadata !248, i32 37, i32 3, metadata !219, i32 21} ; [ DW_TAG_lexical_block ]
!254 = metadata !{i32 46, i32 9, metadata !255, null}
!255 = metadata !{i32 786443, metadata !256, i32 46, i32 4, metadata !219, i32 24} ; [ DW_TAG_lexical_block ]
!256 = metadata !{i32 786443, metadata !248, i32 45, i32 3, metadata !219, i32 23} ; [ DW_TAG_lexical_block ]
!257 = metadata !{i32 39, i32 5, metadata !252, null}
!258 = metadata !{i32 38, i32 20, metadata !252, null}
!259 = metadata !{i32 786688, metadata !236, metadata !"i", metadata !219, i32 25, metadata !38, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!260 = metadata !{i32 40, i32 4, metadata !253, null}
!261 = metadata !{i32 41, i32 4, metadata !253, null}
!262 = metadata !{i32 786688, metadata !236, metadata !"seg_offset", metadata !219, i32 24, metadata !33, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!263 = metadata !{i32 42, i32 4, metadata !253, null}
!264 = metadata !{i32 790529, metadata !244, metadata !"sha256ctx.state[0]", null, i32 29, metadata !265, i32 0, i32 0} ; [ DW_TAG_auto_variable_field ]
!265 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 32, i64 32, i32 0, i32 0, null, metadata !266, i32 0, i32 0} ; [ DW_TAG_array_type ]
!266 = metadata !{metadata !33}
!267 = metadata !{i32 790529, metadata !244, metadata !"sha256ctx.state[1]", null, i32 29, metadata !265, i32 0, i32 0} ; [ DW_TAG_auto_variable_field ]
!268 = metadata !{i32 790529, metadata !244, metadata !"sha256ctx.state[2]", null, i32 29, metadata !265, i32 0, i32 0} ; [ DW_TAG_auto_variable_field ]
!269 = metadata !{i32 790529, metadata !244, metadata !"sha256ctx.state[3]", null, i32 29, metadata !265, i32 0, i32 0} ; [ DW_TAG_auto_variable_field ]
!270 = metadata !{i32 790529, metadata !244, metadata !"sha256ctx.state[4]", null, i32 29, metadata !265, i32 0, i32 0} ; [ DW_TAG_auto_variable_field ]
!271 = metadata !{i32 790529, metadata !244, metadata !"sha256ctx.state[5]", null, i32 29, metadata !265, i32 0, i32 0} ; [ DW_TAG_auto_variable_field ]
!272 = metadata !{i32 790529, metadata !244, metadata !"sha256ctx.state[6]", null, i32 29, metadata !265, i32 0, i32 0} ; [ DW_TAG_auto_variable_field ]
!273 = metadata !{i32 790529, metadata !244, metadata !"sha256ctx.state[7]", null, i32 29, metadata !265, i32 0, i32 0} ; [ DW_TAG_auto_variable_field ]
!274 = metadata !{i32 790529, metadata !244, metadata !"sha256ctx.bitlen[0]", null, i32 29, metadata !265, i32 0, i32 0} ; [ DW_TAG_auto_variable_field ]
!275 = metadata !{i32 790529, metadata !244, metadata !"sha256ctx.bitlen[1]", null, i32 29, metadata !265, i32 0, i32 0} ; [ DW_TAG_auto_variable_field ]
!276 = metadata !{i32 790529, metadata !244, metadata !"sha256ctx.datalen", null, i32 29, metadata !73, i32 0, i32 0} ; [ DW_TAG_auto_variable_field ]
!277 = metadata !{i32 43, i32 3, metadata !253, null}
!278 = metadata !{i32 48, i32 2, metadata !279, null}
!279 = metadata !{i32 786443, metadata !255, i32 48, i32 2, metadata !219, i32 25} ; [ DW_TAG_lexical_block ]
!280 = metadata !{i32 46, i32 19, metadata !255, null}
!281 = metadata !{i32 49, i32 4, metadata !256, null}
!282 = metadata !{i32 52, i32 2, metadata !248, null}
!283 = metadata !{i32 55, i32 2, metadata !236, null}
!284 = metadata !{i32 60, i32 2, metadata !285, null}
!285 = metadata !{i32 786443, metadata !286, i32 57, i32 23, metadata !219, i32 27} ; [ DW_TAG_lexical_block ]
!286 = metadata !{i32 786443, metadata !236, i32 57, i32 2, metadata !219, i32 26} ; [ DW_TAG_lexical_block ]
!287 = metadata !{i32 62, i32 1, metadata !236, null}
