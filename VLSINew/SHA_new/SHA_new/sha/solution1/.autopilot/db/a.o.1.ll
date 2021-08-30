; ModuleID = 'C:/Student/SHA_new/sha/solution1/.autopilot/db/a.g.1.bc'
target datalayout = "e-p:32:32:32-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-f80:128:128-v64:64:64-v128:128:128-a0:0:64-f80:32:32-n8:16:32-S32"
target triple = "i686-pc-mingw32"

%struct.SHA256_CTX.0 = type { [64 x i8], i32, [2 x i32], [8 x i32] }

@sha256.str = internal unnamed_addr constant [7 x i8] c"sha256\00" ; [#uses=1 type=[7 x i8]*]
@k = constant [64 x i32] [i32 1116352408, i32 1899447441, i32 -1245643825, i32 -373957723, i32 961987163, i32 1508970993, i32 -1841331548, i32 -1424204075, i32 -670586216, i32 310598401, i32 607225278, i32 1426881987, i32 1925078388, i32 -2132889090, i32 -1680079193, i32 -1046744716, i32 -459576895, i32 -272742522, i32 264347078, i32 604807628, i32 770255983, i32 1249150122, i32 1555081692, i32 1996064986, i32 -1740746414, i32 -1473132947, i32 -1341970488, i32 -1084653625, i32 -958395405, i32 -710438585, i32 113926993, i32 338241895, i32 666307205, i32 773529912, i32 1294757372, i32 1396182291, i32 1695183700, i32 1986661051, i32 -2117940946, i32 -1838011259, i32 -1564481375, i32 -1474664885, i32 -1035236496, i32 -949202525, i32 -778901479, i32 -694614492, i32 -200395387, i32 275423344, i32 430227734, i32 506948616, i32 659060556, i32 883997877, i32 958139571, i32 1322822218, i32 1537002063, i32 1747873779, i32 1955562222, i32 2024104815, i32 -2067236844, i32 -1933114872, i32 -1866530822, i32 -1538233109, i32 -1090935817, i32 -965641998], align 4 ; [#uses=1 type=[64 x i32]*]
@.str9 = private unnamed_addr constant [12 x i8] c"hls_label_6\00", align 1 ; [#uses=1 type=[12 x i8]*]
@.str8 = private unnamed_addr constant [12 x i8] c"hls_label_7\00", align 1 ; [#uses=1 type=[12 x i8]*]
@.str7 = private unnamed_addr constant [10 x i8] c"s_axilite\00", align 1 ; [#uses=1 type=[10 x i8]*]
@.str6 = private unnamed_addr constant [12 x i8] c"hls_label_4\00", align 1 ; [#uses=1 type=[12 x i8]*]
@.str5 = private unnamed_addr constant [12 x i8] c"hls_label_5\00", align 1 ; [#uses=1 type=[12 x i8]*]
@.str4 = private unnamed_addr constant [12 x i8] c"hls_label_3\00", align 1 ; [#uses=1 type=[12 x i8]*]
@.str3 = private unnamed_addr constant [12 x i8] c"hls_label_1\00", align 1 ; [#uses=1 type=[12 x i8]*]
@.str2 = private unnamed_addr constant [12 x i8] c"hls_label_2\00", align 1 ; [#uses=1 type=[12 x i8]*]
@.str10 = private unnamed_addr constant [12 x i8] c"hls_label_8\00", align 1 ; [#uses=1 type=[12 x i8]*]
@.str1 = private unnamed_addr constant [1 x i8] zeroinitializer, align 1 ; [#uses=1 type=[1 x i8]*]
@.str = private unnamed_addr constant [12 x i8] c"hls_label_0\00", align 1 ; [#uses=1 type=[12 x i8]*]

; [#uses=2]
define internal fastcc void @sha256_update(%struct.SHA256_CTX.0* %ctx, i8* %data, i32 %len) nounwind {
  call void @llvm.dbg.value(metadata !{%struct.SHA256_CTX.0* %ctx}, i64 0, metadata !79), !dbg !80 ; [debug line = 89:32] [debug variable = ctx]
  call void @llvm.dbg.value(metadata !{i8* %data}, i64 0, metadata !81), !dbg !82 ; [debug line = 89:67] [debug variable = data]
  call void @llvm.dbg.value(metadata !{i32 %len}, i64 0, metadata !83), !dbg !84 ; [debug line = 89:105] [debug variable = len]
  %ctx.addr = getelementptr inbounds %struct.SHA256_CTX.0* %ctx, i32 0, i32 1, !dbg !85 ; [#uses=4 type=i32*] [debug line = 95:2]
  %ctx.addr.1 = getelementptr inbounds %struct.SHA256_CTX.0* %ctx, i32 0, i32 0, i32 0, !dbg !89 ; [#uses=1 type=i8*] [debug line = 98:10]
  %ctx.addr.2 = getelementptr inbounds %struct.SHA256_CTX.0* %ctx, i32 0, i32 2, i32 0, !dbg !91 ; [#uses=2 type=i32*] [debug line = 99:10]
  %ctx.addr.3 = getelementptr inbounds %struct.SHA256_CTX.0* %ctx, i32 0, i32 2, i32 1, !dbg !92 ; [#uses=2 type=i32*] [debug line = 99:51]
  br label %1, !dbg !93                           ; [debug line = 93:9]

; <label>:1                                       ; preds = %._crit_edge, %0
  %i = phi i32 [ 0, %0 ], [ %i.1, %._crit_edge ]  ; [#uses=3 type=i32]
  %exitcond = icmp eq i32 %i, %len, !dbg !93      ; [#uses=1 type=i1] [debug line = 93:9]
  br i1 %exitcond, label %5, label %2, !dbg !93   ; [debug line = 93:9]

; <label>:2                                       ; preds = %1
  %rbegin = call i32 (...)* @_ssdm_op_SpecRegionBegin(i8* getelementptr inbounds ([12 x i8]* @.str4, i32 0, i32 0)) nounwind, !dbg !94 ; [#uses=1 type=i32] [debug line = 93:29]
  call void (...)* @_ssdm_op_SpecLoopTripCount(i32 12, i32 100, i32 56, i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0)), !dbg !95 ; [debug line = 94:1]
  %data.addr = getelementptr inbounds i8* %data, i32 %i, !dbg !85 ; [#uses=1 type=i8*] [debug line = 95:2]
  %data.load = load i8* %data.addr, align 1, !dbg !85 ; [#uses=2 type=i8] [debug line = 95:2]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i8 %data.load) nounwind
  %ctx.load = load i32* %ctx.addr, align 4, !dbg !85 ; [#uses=2 type=i32] [debug line = 95:2]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %ctx.load) nounwind
  %ctx.addr.4 = getelementptr inbounds %struct.SHA256_CTX.0* %ctx, i32 0, i32 0, i32 %ctx.load, !dbg !85 ; [#uses=1 type=i8*] [debug line = 95:2]
  store i8 %data.load, i8* %ctx.addr.4, align 1, !dbg !85 ; [debug line = 95:2]
  %ctx.load.1 = load i32* %ctx.addr, align 4, !dbg !96 ; [#uses=2 type=i32] [debug line = 96:7]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %ctx.load.1) nounwind
  %tmp = add i32 %ctx.load.1, 1, !dbg !96         ; [#uses=3 type=i32] [debug line = 96:7]
  store i32 %tmp, i32* %ctx.addr, align 4, !dbg !96 ; [debug line = 96:7]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %tmp) nounwind
  %tmp.1 = icmp eq i32 %tmp, 64, !dbg !97         ; [#uses=1 type=i1] [debug line = 97:7]
  br i1 %tmp.1, label %3, label %._crit_edge, !dbg !97 ; [debug line = 97:7]

; <label>:3                                       ; preds = %2
  call fastcc void @sha256_transform(%struct.SHA256_CTX.0* %ctx, i8* %ctx.addr.1), !dbg !89 ; [debug line = 98:10]
  %ctx.load.2 = load i32* %ctx.addr.2, align 4, !dbg !91 ; [#uses=4 type=i32] [debug line = 99:10]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %ctx.load.2) nounwind
  %tmp.2 = icmp ugt i32 %ctx.load.2, -513, !dbg !91 ; [#uses=1 type=i1] [debug line = 99:10]
  br i1 %tmp.2, label %4, label %._crit_edge1, !dbg !91 ; [debug line = 99:10]

; <label>:4                                       ; preds = %3
  %ctx.load.3 = load i32* %ctx.addr.3, align 4, !dbg !92 ; [#uses=2 type=i32] [debug line = 99:51]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %ctx.load.3) nounwind
  %tmp.3 = add i32 %ctx.load.3, 1, !dbg !92       ; [#uses=1 type=i32] [debug line = 99:51]
  store i32 %tmp.3, i32* %ctx.addr.3, align 4, !dbg !92 ; [debug line = 99:51]
  br label %._crit_edge1, !dbg !92                ; [debug line = 99:51]

._crit_edge1:                                     ; preds = %4, %3
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %ctx.load.2) nounwind
  %tmp.4 = add i32 %ctx.load.2, 512, !dbg !98     ; [#uses=1 type=i32] [debug line = 99:69]
  store i32 %tmp.4, i32* %ctx.addr.2, align 4, !dbg !98 ; [debug line = 99:69]
  store i32 0, i32* %ctx.addr, align 4, !dbg !99  ; [debug line = 100:10]
  br label %._crit_edge, !dbg !100                ; [debug line = 101:7]

._crit_edge:                                      ; preds = %._crit_edge1, %2
  %rend = call i32 (...)* @_ssdm_op_SpecRegionEnd(i8* getelementptr inbounds ([12 x i8]* @.str4, i32 0, i32 0), i32 %rbegin) nounwind, !dbg !101 ; [#uses=0 type=i32] [debug line = 102:4]
  %i.1 = add i32 %i, 1, !dbg !102                 ; [#uses=1 type=i32] [debug line = 93:23]
  call void @llvm.dbg.value(metadata !{i32 %i.1}, i64 0, metadata !103), !dbg !102 ; [debug line = 93:23] [debug variable = i]
  br label %1, !dbg !102                          ; [debug line = 93:23]

; <label>:5                                       ; preds = %1
  ret void, !dbg !104                             ; [debug line = 103:1]
}

; [#uses=3]
define internal fastcc void @sha256_transform(%struct.SHA256_CTX.0* %ctx, i8* %data) nounwind {
  %m = alloca [64 x i32], align 4                 ; [#uses=7 type=[64 x i32]*]
  call void @llvm.dbg.value(metadata !{%struct.SHA256_CTX.0* %ctx}, i64 0, metadata !105), !dbg !106 ; [debug line = 30:35] [debug variable = ctx]
  call void @llvm.dbg.value(metadata !{i8* %data}, i64 0, metadata !107), !dbg !108 ; [debug line = 30:70] [debug variable = data]
  call void @llvm.dbg.declare(metadata !{[64 x i32]* %m}, metadata !109), !dbg !111 ; [debug line = 32:60] [debug variable = m]
  br label %1, !dbg !112                          ; [debug line = 34:9]

; <label>:1                                       ; preds = %2, %0
  %i = phi i32 [ 0, %0 ], [ %tmp.19, %2 ]         ; [#uses=3 type=i32]
  %j = phi i32 [ 0, %0 ], [ %j.1, %2 ]            ; [#uses=5 type=i32]
  %tmp = icmp eq i32 %i, 16, !dbg !112            ; [#uses=1 type=i1] [debug line = 34:9]
  br i1 %tmp, label %.preheader.preheader, label %2, !dbg !112 ; [debug line = 34:9]

.preheader.preheader:                             ; preds = %1
  br label %.preheader, !dbg !114                 ; [debug line = 37:4]

; <label>:2                                       ; preds = %1
  %rbegin = call i32 (...)* @_ssdm_op_SpecRegionBegin(i8* getelementptr inbounds ([12 x i8]* @.str, i32 0, i32 0)) nounwind, !dbg !116 ; [#uses=1 type=i32] [debug line = 36:3]
  call void (...)* @_ssdm_op_SpecLoopTripCount(i32 12, i32 100, i32 56, i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0)), !dbg !118 ; [debug line = 35:1]
  %data.addr = getelementptr inbounds i8* %data, i32 %j, !dbg !119 ; [#uses=1 type=i8*] [debug line = 36:2]
  %data.load = load i8* %data.addr, align 1, !dbg !119 ; [#uses=2 type=i8] [debug line = 36:2]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i8 %data.load) nounwind
  %tmp.6 = zext i8 %data.load to i32, !dbg !119   ; [#uses=1 type=i32] [debug line = 36:2]
  %tmp.7 = shl nuw i32 %tmp.6, 24, !dbg !119      ; [#uses=1 type=i32] [debug line = 36:2]
  %tmp.8 = or i32 %j, 1, !dbg !119                ; [#uses=1 type=i32] [debug line = 36:2]
  %data.addr.1 = getelementptr inbounds i8* %data, i32 %tmp.8, !dbg !119 ; [#uses=1 type=i8*] [debug line = 36:2]
  %data.load.1 = load i8* %data.addr.1, align 1, !dbg !119 ; [#uses=2 type=i8] [debug line = 36:2]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i8 %data.load.1) nounwind
  %tmp.9 = zext i8 %data.load.1 to i32, !dbg !119 ; [#uses=1 type=i32] [debug line = 36:2]
  %tmp.10 = shl nuw nsw i32 %tmp.9, 16, !dbg !119 ; [#uses=1 type=i32] [debug line = 36:2]
  %tmp.11 = or i32 %j, 2, !dbg !119               ; [#uses=1 type=i32] [debug line = 36:2]
  %data.addr.2 = getelementptr inbounds i8* %data, i32 %tmp.11, !dbg !119 ; [#uses=1 type=i8*] [debug line = 36:2]
  %data.load.2 = load i8* %data.addr.2, align 1, !dbg !119 ; [#uses=2 type=i8] [debug line = 36:2]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i8 %data.load.2) nounwind
  %tmp.12 = zext i8 %data.load.2 to i32, !dbg !119 ; [#uses=1 type=i32] [debug line = 36:2]
  %tmp.13 = shl nuw nsw i32 %tmp.12, 8, !dbg !119 ; [#uses=1 type=i32] [debug line = 36:2]
  %tmp.14 = or i32 %j, 3, !dbg !119               ; [#uses=1 type=i32] [debug line = 36:2]
  %data.addr.3 = getelementptr inbounds i8* %data, i32 %tmp.14, !dbg !119 ; [#uses=1 type=i8*] [debug line = 36:2]
  %data.load.3 = load i8* %data.addr.3, align 1, !dbg !119 ; [#uses=2 type=i8] [debug line = 36:2]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i8 %data.load.3) nounwind
  %tmp.15 = zext i8 %data.load.3 to i32, !dbg !119 ; [#uses=1 type=i32] [debug line = 36:2]
  %tmp.16 = or i32 %tmp.10, %tmp.7, !dbg !119     ; [#uses=1 type=i32] [debug line = 36:2]
  %tmp.17 = or i32 %tmp.16, %tmp.13, !dbg !119    ; [#uses=1 type=i32] [debug line = 36:2]
  %tmp.18 = or i32 %tmp.17, %tmp.15, !dbg !119    ; [#uses=1 type=i32] [debug line = 36:2]
  %m.addr = getelementptr inbounds [64 x i32]* %m, i32 0, i32 %i, !dbg !119 ; [#uses=1 type=i32*] [debug line = 36:2]
  store i32 %tmp.18, i32* %m.addr, align 4, !dbg !119 ; [debug line = 36:2]
  %rend = call i32 (...)* @_ssdm_op_SpecRegionEnd(i8* getelementptr inbounds ([12 x i8]* @.str, i32 0, i32 0), i32 %rbegin) nounwind, !dbg !120 ; [#uses=0 type=i32] [debug line = 36:76]
  %tmp.19 = add i32 %i, 1, !dbg !121              ; [#uses=1 type=i32] [debug line = 34:26]
  %j.1 = add i32 %j, 4, !dbg !121                 ; [#uses=1 type=i32] [debug line = 34:26]
  call void @llvm.dbg.value(metadata !{i32 %j.1}, i64 0, metadata !122), !dbg !121 ; [debug line = 34:26] [debug variable = j]
  br label %1, !dbg !121                          ; [debug line = 34:26]

.preheader:                                       ; preds = %3, %.preheader.preheader
  %i.1 = phi i32 [ %i.3, %3 ], [ 16, %.preheader.preheader ] ; [#uses=7 type=i32]
  %exitcond = icmp eq i32 %i.1, 64, !dbg !114     ; [#uses=1 type=i1] [debug line = 37:4]
  br i1 %exitcond, label %4, label %3, !dbg !114  ; [debug line = 37:4]

; <label>:3                                       ; preds = %.preheader
  %rbegin3 = call i32 (...)* @_ssdm_op_SpecRegionBegin(i8* getelementptr inbounds ([12 x i8]* @.str2, i32 0, i32 0)) nounwind, !dbg !123 ; [#uses=1 type=i32] [debug line = 39:3]
  call void (...)* @_ssdm_op_SpecLoopTripCount(i32 12, i32 100, i32 56, i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0)), !dbg !125 ; [debug line = 38:1]
  %tmp.21 = add i32 %i.1, -2, !dbg !126           ; [#uses=1 type=i32] [debug line = 39:2]
  %m.addr.1 = getelementptr inbounds [64 x i32]* %m, i32 0, i32 %tmp.21, !dbg !126 ; [#uses=1 type=i32*] [debug line = 39:2]
  %m.load = load i32* %m.addr.1, align 4, !dbg !126 ; [#uses=10 type=i32] [debug line = 39:2]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %m.load) nounwind
  %tmp.22 = lshr i32 %m.load, 17, !dbg !126       ; [#uses=1 type=i32] [debug line = 39:2]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %m.load) nounwind
  %tmp.23 = shl i32 %m.load, 15, !dbg !126        ; [#uses=1 type=i32] [debug line = 39:2]
  %tmp.24 = or i32 %tmp.23, %tmp.22, !dbg !126    ; [#uses=1 type=i32] [debug line = 39:2]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %m.load) nounwind
  %tmp.25 = lshr i32 %m.load, 19, !dbg !126       ; [#uses=1 type=i32] [debug line = 39:2]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %m.load) nounwind
  %tmp.26 = shl i32 %m.load, 13, !dbg !126        ; [#uses=1 type=i32] [debug line = 39:2]
  %tmp.27 = or i32 %tmp.26, %tmp.25, !dbg !126    ; [#uses=1 type=i32] [debug line = 39:2]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %m.load) nounwind
  %tmp.28 = lshr i32 %m.load, 10, !dbg !126       ; [#uses=1 type=i32] [debug line = 39:2]
  %tmp.29 = xor i32 %tmp.24, %tmp.28, !dbg !126   ; [#uses=1 type=i32] [debug line = 39:2]
  %tmp.30 = xor i32 %tmp.29, %tmp.27, !dbg !126   ; [#uses=1 type=i32] [debug line = 39:2]
  %tmp.31 = add i32 %i.1, -7, !dbg !126           ; [#uses=1 type=i32] [debug line = 39:2]
  %m.addr.2 = getelementptr inbounds [64 x i32]* %m, i32 0, i32 %tmp.31, !dbg !126 ; [#uses=1 type=i32*] [debug line = 39:2]
  %m.load.1 = load i32* %m.addr.2, align 4, !dbg !126 ; [#uses=2 type=i32] [debug line = 39:2]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %m.load.1) nounwind
  %tmp.32 = add i32 %i.1, -15, !dbg !126          ; [#uses=1 type=i32] [debug line = 39:2]
  %m.addr.3 = getelementptr inbounds [64 x i32]* %m, i32 0, i32 %tmp.32, !dbg !126 ; [#uses=1 type=i32*] [debug line = 39:2]
  %m.load.2 = load i32* %m.addr.3, align 4, !dbg !126 ; [#uses=10 type=i32] [debug line = 39:2]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %m.load.2) nounwind
  %tmp.33 = lshr i32 %m.load.2, 7, !dbg !126      ; [#uses=1 type=i32] [debug line = 39:2]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %m.load.2) nounwind
  %tmp.34 = shl i32 %m.load.2, 25, !dbg !126      ; [#uses=1 type=i32] [debug line = 39:2]
  %tmp.35 = or i32 %tmp.34, %tmp.33, !dbg !126    ; [#uses=1 type=i32] [debug line = 39:2]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %m.load.2) nounwind
  %tmp.36 = lshr i32 %m.load.2, 18, !dbg !126     ; [#uses=1 type=i32] [debug line = 39:2]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %m.load.2) nounwind
  %tmp.37 = shl i32 %m.load.2, 14, !dbg !126      ; [#uses=1 type=i32] [debug line = 39:2]
  %tmp.38 = or i32 %tmp.37, %tmp.36, !dbg !126    ; [#uses=1 type=i32] [debug line = 39:2]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %m.load.2) nounwind
  %tmp.39 = lshr i32 %m.load.2, 3, !dbg !126      ; [#uses=1 type=i32] [debug line = 39:2]
  %tmp.40 = xor i32 %tmp.35, %tmp.39, !dbg !126   ; [#uses=1 type=i32] [debug line = 39:2]
  %tmp.41 = xor i32 %tmp.40, %tmp.38, !dbg !126   ; [#uses=1 type=i32] [debug line = 39:2]
  %tmp.42 = add i32 %i.1, -16, !dbg !126          ; [#uses=1 type=i32] [debug line = 39:2]
  %m.addr.4 = getelementptr inbounds [64 x i32]* %m, i32 0, i32 %tmp.42, !dbg !126 ; [#uses=1 type=i32*] [debug line = 39:2]
  %m.load.3 = load i32* %m.addr.4, align 4, !dbg !126 ; [#uses=2 type=i32] [debug line = 39:2]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %m.load.3) nounwind
  %tmp.43 = add i32 %m.load.1, %tmp.30, !dbg !126 ; [#uses=1 type=i32] [debug line = 39:2]
  %tmp.44 = add i32 %tmp.43, %tmp.41, !dbg !126   ; [#uses=1 type=i32] [debug line = 39:2]
  %tmp.45 = add i32 %tmp.44, %m.load.3, !dbg !126 ; [#uses=1 type=i32] [debug line = 39:2]
  %m.addr.5 = getelementptr inbounds [64 x i32]* %m, i32 0, i32 %i.1, !dbg !126 ; [#uses=1 type=i32*] [debug line = 39:2]
  store i32 %tmp.45, i32* %m.addr.5, align 4, !dbg !126 ; [debug line = 39:2]
  %rend4 = call i32 (...)* @_ssdm_op_SpecRegionEnd(i8* getelementptr inbounds ([12 x i8]* @.str2, i32 0, i32 0), i32 %rbegin3) nounwind, !dbg !127 ; [#uses=0 type=i32] [debug line = 39:0]
  %i.3 = add i32 %i.1, 1, !dbg !128               ; [#uses=1 type=i32] [debug line = 37:20]
  call void @llvm.dbg.value(metadata !{i32 %i.3}, i64 0, metadata !129), !dbg !128 ; [debug line = 37:20] [debug variable = i]
  br label %.preheader, !dbg !128                 ; [debug line = 37:20]

; <label>:4                                       ; preds = %.preheader
  %ctx.addr = getelementptr inbounds %struct.SHA256_CTX.0* %ctx, i32 0, i32 3, i32 0, !dbg !130 ; [#uses=2 type=i32*] [debug line = 41:4]
  %a = load i32* %ctx.addr, align 4, !dbg !130    ; [#uses=4 type=i32] [debug line = 41:4]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %a) nounwind
  call void @llvm.dbg.value(metadata !{i32 %a}, i64 0, metadata !131), !dbg !130 ; [debug line = 41:4] [debug variable = a]
  %ctx.addr.5 = getelementptr inbounds %struct.SHA256_CTX.0* %ctx, i32 0, i32 3, i32 1, !dbg !132 ; [#uses=2 type=i32*] [debug line = 42:4]
  %b = load i32* %ctx.addr.5, align 4, !dbg !132  ; [#uses=4 type=i32] [debug line = 42:4]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %b) nounwind
  call void @llvm.dbg.value(metadata !{i32 %b}, i64 0, metadata !133), !dbg !132 ; [debug line = 42:4] [debug variable = b]
  %ctx.addr.6 = getelementptr inbounds %struct.SHA256_CTX.0* %ctx, i32 0, i32 3, i32 2, !dbg !134 ; [#uses=2 type=i32*] [debug line = 43:4]
  %c = load i32* %ctx.addr.6, align 4, !dbg !134  ; [#uses=4 type=i32] [debug line = 43:4]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %c) nounwind
  call void @llvm.dbg.value(metadata !{i32 %c}, i64 0, metadata !135), !dbg !134 ; [debug line = 43:4] [debug variable = c]
  %ctx.addr.7 = getelementptr inbounds %struct.SHA256_CTX.0* %ctx, i32 0, i32 3, i32 3, !dbg !136 ; [#uses=2 type=i32*] [debug line = 44:4]
  %d = load i32* %ctx.addr.7, align 4, !dbg !136  ; [#uses=4 type=i32] [debug line = 44:4]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %d) nounwind
  call void @llvm.dbg.value(metadata !{i32 %d}, i64 0, metadata !137), !dbg !136 ; [debug line = 44:4] [debug variable = d]
  %ctx.addr.8 = getelementptr inbounds %struct.SHA256_CTX.0* %ctx, i32 0, i32 3, i32 4, !dbg !138 ; [#uses=2 type=i32*] [debug line = 45:4]
  %e = load i32* %ctx.addr.8, align 4, !dbg !138  ; [#uses=4 type=i32] [debug line = 45:4]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %e) nounwind
  call void @llvm.dbg.value(metadata !{i32 %e}, i64 0, metadata !139), !dbg !138 ; [debug line = 45:4] [debug variable = e]
  %ctx.addr.9 = getelementptr inbounds %struct.SHA256_CTX.0* %ctx, i32 0, i32 3, i32 5, !dbg !140 ; [#uses=2 type=i32*] [debug line = 46:4]
  %f = load i32* %ctx.addr.9, align 4, !dbg !140  ; [#uses=4 type=i32] [debug line = 46:4]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %f) nounwind
  call void @llvm.dbg.value(metadata !{i32 %f}, i64 0, metadata !141), !dbg !140 ; [debug line = 46:4] [debug variable = f]
  %ctx.addr.10 = getelementptr inbounds %struct.SHA256_CTX.0* %ctx, i32 0, i32 3, i32 6, !dbg !142 ; [#uses=2 type=i32*] [debug line = 47:4]
  %g = load i32* %ctx.addr.10, align 4, !dbg !142 ; [#uses=4 type=i32] [debug line = 47:4]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %g) nounwind
  call void @llvm.dbg.value(metadata !{i32 %g}, i64 0, metadata !143), !dbg !142 ; [debug line = 47:4] [debug variable = g]
  %ctx.addr.11 = getelementptr inbounds %struct.SHA256_CTX.0* %ctx, i32 0, i32 3, i32 7, !dbg !144 ; [#uses=2 type=i32*] [debug line = 48:4]
  %h = load i32* %ctx.addr.11, align 4, !dbg !144 ; [#uses=4 type=i32] [debug line = 48:4]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %h) nounwind
  call void @llvm.dbg.value(metadata !{i32 %h}, i64 0, metadata !145), !dbg !144 ; [debug line = 48:4] [debug variable = h]
  br label %5, !dbg !146                          ; [debug line = 50:9]

; <label>:5                                       ; preds = %6, %4
  %h1 = phi i32 [ %h, %4 ], [ %h.2, %6 ]          ; [#uses=2 type=i32]
  %h.2 = phi i32 [ %g, %4 ], [ %g.2, %6 ]         ; [#uses=3 type=i32]
  %g.2 = phi i32 [ %f, %4 ], [ %f.2, %6 ]         ; [#uses=3 type=i32]
  %f.2 = phi i32 [ %e, %4 ], [ %e.2, %6 ]         ; [#uses=10 type=i32]
  %d1 = phi i32 [ %d, %4 ], [ %d.2, %6 ]          ; [#uses=2 type=i32]
  %d.2 = phi i32 [ %c, %4 ], [ %c.2, %6 ]         ; [#uses=4 type=i32]
  %c.2 = phi i32 [ %b, %4 ], [ %b.2, %6 ]         ; [#uses=4 type=i32]
  %b.2 = phi i32 [ %a, %4 ], [ %a.2, %6 ]         ; [#uses=9 type=i32]
  %i.2 = phi i32 [ 0, %4 ], [ %i.4, %6 ]          ; [#uses=4 type=i32]
  %tmp.47 = icmp eq i32 %i.2, 64, !dbg !146       ; [#uses=1 type=i1] [debug line = 50:9]
  br i1 %tmp.47, label %7, label %6, !dbg !146    ; [debug line = 50:9]

; <label>:6                                       ; preds = %5
  %rbegin1 = call i32 (...)* @_ssdm_op_SpecRegionBegin(i8* getelementptr inbounds ([12 x i8]* @.str3, i32 0, i32 0)) nounwind, !dbg !148 ; [#uses=1 type=i32] [debug line = 50:30]
  call void (...)* @_ssdm_op_SpecLoopTripCount(i32 12, i32 100, i32 56, i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0)), !dbg !150 ; [debug line = 51:1]
  %tmp.56 = lshr i32 %f.2, 6, !dbg !151           ; [#uses=1 type=i32] [debug line = 52:2]
  %tmp.57 = shl i32 %f.2, 26, !dbg !151           ; [#uses=1 type=i32] [debug line = 52:2]
  %tmp.58 = or i32 %tmp.56, %tmp.57, !dbg !151    ; [#uses=1 type=i32] [debug line = 52:2]
  %tmp.59 = lshr i32 %f.2, 11, !dbg !151          ; [#uses=1 type=i32] [debug line = 52:2]
  %tmp.60 = shl i32 %f.2, 21, !dbg !151           ; [#uses=1 type=i32] [debug line = 52:2]
  %tmp.61 = or i32 %tmp.59, %tmp.60, !dbg !151    ; [#uses=1 type=i32] [debug line = 52:2]
  %tmp.62 = lshr i32 %f.2, 25, !dbg !151          ; [#uses=1 type=i32] [debug line = 52:2]
  %tmp.63 = shl i32 %f.2, 7, !dbg !151            ; [#uses=1 type=i32] [debug line = 52:2]
  %tmp.64 = or i32 %tmp.62, %tmp.63, !dbg !151    ; [#uses=1 type=i32] [debug line = 52:2]
  %tmp.65 = xor i32 %tmp.64, %tmp.58, !dbg !151   ; [#uses=1 type=i32] [debug line = 52:2]
  %tmp.66 = xor i32 %tmp.65, %tmp.61, !dbg !151   ; [#uses=1 type=i32] [debug line = 52:2]
  %tmp.67 = and i32 %f.2, %g.2, !dbg !151         ; [#uses=1 type=i32] [debug line = 52:2]
  %tmp.68 = xor i32 %f.2, -1, !dbg !151           ; [#uses=1 type=i32] [debug line = 52:2]
  %tmp.69 = and i32 %tmp.68, %h.2, !dbg !151      ; [#uses=1 type=i32] [debug line = 52:2]
  %tmp.70 = xor i32 %tmp.67, %tmp.69, !dbg !151   ; [#uses=1 type=i32] [debug line = 52:2]
  %k.addr = getelementptr inbounds [64 x i32]* @k, i32 0, i32 %i.2, !dbg !151 ; [#uses=1 type=i32*] [debug line = 52:2]
  %k.load = load i32* %k.addr, align 4, !dbg !151 ; [#uses=2 type=i32] [debug line = 52:2]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %k.load) nounwind
  %m.addr.6 = getelementptr inbounds [64 x i32]* %m, i32 0, i32 %i.2, !dbg !151 ; [#uses=1 type=i32*] [debug line = 52:2]
  %m.load.4 = load i32* %m.addr.6, align 4, !dbg !151 ; [#uses=2 type=i32] [debug line = 52:2]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %m.load.4) nounwind
  %tmp.71 = add i32 %tmp.70, %h1, !dbg !151       ; [#uses=1 type=i32] [debug line = 52:2]
  %tmp.72 = add i32 %tmp.71, %tmp.66, !dbg !151   ; [#uses=1 type=i32] [debug line = 52:2]
  %tmp.73 = add i32 %tmp.72, %k.load, !dbg !151   ; [#uses=1 type=i32] [debug line = 52:2]
  %t1 = add i32 %tmp.73, %m.load.4, !dbg !151     ; [#uses=2 type=i32] [debug line = 52:2]
  call void @llvm.dbg.value(metadata !{i32 %t1}, i64 0, metadata !152), !dbg !151 ; [debug line = 52:2] [debug variable = t1]
  %tmp.74 = lshr i32 %b.2, 2, !dbg !153           ; [#uses=1 type=i32] [debug line = 53:7]
  %tmp.75 = shl i32 %b.2, 30, !dbg !153           ; [#uses=1 type=i32] [debug line = 53:7]
  %tmp.76 = or i32 %tmp.74, %tmp.75, !dbg !153    ; [#uses=1 type=i32] [debug line = 53:7]
  %tmp.77 = lshr i32 %b.2, 13, !dbg !153          ; [#uses=1 type=i32] [debug line = 53:7]
  %tmp.78 = shl i32 %b.2, 19, !dbg !153           ; [#uses=1 type=i32] [debug line = 53:7]
  %tmp.79 = or i32 %tmp.77, %tmp.78, !dbg !153    ; [#uses=1 type=i32] [debug line = 53:7]
  %tmp.80 = lshr i32 %b.2, 22, !dbg !153          ; [#uses=1 type=i32] [debug line = 53:7]
  %tmp.81 = shl i32 %b.2, 10, !dbg !153           ; [#uses=1 type=i32] [debug line = 53:7]
  %tmp.82 = or i32 %tmp.80, %tmp.81, !dbg !153    ; [#uses=1 type=i32] [debug line = 53:7]
  %tmp.83 = xor i32 %tmp.82, %tmp.76, !dbg !153   ; [#uses=1 type=i32] [debug line = 53:7]
  %tmp.84 = xor i32 %tmp.83, %tmp.79, !dbg !153   ; [#uses=1 type=i32] [debug line = 53:7]
  %tmp.85 = xor i32 %c.2, %d.2, !dbg !153         ; [#uses=1 type=i32] [debug line = 53:7]
  %tmp.86 = and i32 %b.2, %tmp.85, !dbg !153      ; [#uses=1 type=i32] [debug line = 53:7]
  %tmp.87 = and i32 %c.2, %d.2, !dbg !153         ; [#uses=1 type=i32] [debug line = 53:7]
  %tmp.88 = xor i32 %tmp.86, %tmp.87, !dbg !153   ; [#uses=1 type=i32] [debug line = 53:7]
  call void @llvm.dbg.value(metadata !{i32 %t2}, i64 0, metadata !154), !dbg !153 ; [debug line = 53:7] [debug variable = t2]
  call void @llvm.dbg.value(metadata !{i32 %h.2}, i64 0, metadata !145), !dbg !155 ; [debug line = 54:7] [debug variable = h]
  call void @llvm.dbg.value(metadata !{i32 %g.2}, i64 0, metadata !143), !dbg !156 ; [debug line = 55:7] [debug variable = g]
  call void @llvm.dbg.value(metadata !{i32 %f.2}, i64 0, metadata !141), !dbg !157 ; [debug line = 56:7] [debug variable = f]
  %e.2 = add i32 %t1, %d1, !dbg !158              ; [#uses=1 type=i32] [debug line = 57:7]
  call void @llvm.dbg.value(metadata !{i32 %e.2}, i64 0, metadata !139), !dbg !158 ; [debug line = 57:7] [debug variable = e]
  call void @llvm.dbg.value(metadata !{i32 %d.2}, i64 0, metadata !137), !dbg !159 ; [debug line = 58:7] [debug variable = d]
  call void @llvm.dbg.value(metadata !{i32 %c.2}, i64 0, metadata !135), !dbg !160 ; [debug line = 59:7] [debug variable = c]
  call void @llvm.dbg.value(metadata !{i32 %b.2}, i64 0, metadata !133), !dbg !161 ; [debug line = 60:7] [debug variable = b]
  %t2 = add i32 %tmp.84, %tmp.88, !dbg !153       ; [#uses=1 type=i32] [debug line = 53:7]
  %a.2 = add i32 %t2, %t1, !dbg !162              ; [#uses=1 type=i32] [debug line = 61:7]
  call void @llvm.dbg.value(metadata !{i32 %a.2}, i64 0, metadata !131), !dbg !162 ; [debug line = 61:7] [debug variable = a]
  %rend2 = call i32 (...)* @_ssdm_op_SpecRegionEnd(i8* getelementptr inbounds ([12 x i8]* @.str3, i32 0, i32 0), i32 %rbegin1) nounwind, !dbg !163 ; [#uses=0 type=i32] [debug line = 62:4]
  %i.4 = add i32 %i.2, 1, !dbg !164               ; [#uses=1 type=i32] [debug line = 50:24]
  call void @llvm.dbg.value(metadata !{i32 %i.4}, i64 0, metadata !129), !dbg !164 ; [debug line = 50:24] [debug variable = i]
  br label %5, !dbg !164                          ; [debug line = 50:24]

; <label>:7                                       ; preds = %5
  %a.0.lcssa = phi i32 [ %b.2, %5 ]               ; [#uses=1 type=i32]
  %b.0.lcssa = phi i32 [ %c.2, %5 ]               ; [#uses=1 type=i32]
  %c.0.lcssa = phi i32 [ %d.2, %5 ]               ; [#uses=1 type=i32]
  %d.0.lcssa = phi i32 [ %d1, %5 ]                ; [#uses=1 type=i32]
  %e.0.lcssa = phi i32 [ %f.2, %5 ]               ; [#uses=1 type=i32]
  %f.0.lcssa = phi i32 [ %g.2, %5 ]               ; [#uses=1 type=i32]
  %g.0.lcssa = phi i32 [ %h.2, %5 ]               ; [#uses=1 type=i32]
  %h.0.lcssa = phi i32 [ %h1, %5 ]                ; [#uses=1 type=i32]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %a) nounwind
  %tmp.48 = add i32 %a.0.lcssa, %a, !dbg !165     ; [#uses=1 type=i32] [debug line = 64:4]
  store i32 %tmp.48, i32* %ctx.addr, align 4, !dbg !165 ; [debug line = 64:4]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %b) nounwind
  %tmp.49 = add i32 %b.0.lcssa, %b, !dbg !166     ; [#uses=1 type=i32] [debug line = 65:4]
  store i32 %tmp.49, i32* %ctx.addr.5, align 4, !dbg !166 ; [debug line = 65:4]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %c) nounwind
  %tmp.50 = add i32 %c.0.lcssa, %c, !dbg !167     ; [#uses=1 type=i32] [debug line = 66:4]
  store i32 %tmp.50, i32* %ctx.addr.6, align 4, !dbg !167 ; [debug line = 66:4]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %d) nounwind
  %tmp.51 = add i32 %d.0.lcssa, %d, !dbg !168     ; [#uses=1 type=i32] [debug line = 67:4]
  store i32 %tmp.51, i32* %ctx.addr.7, align 4, !dbg !168 ; [debug line = 67:4]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %e) nounwind
  %tmp.52 = add i32 %e.0.lcssa, %e, !dbg !169     ; [#uses=1 type=i32] [debug line = 68:4]
  store i32 %tmp.52, i32* %ctx.addr.8, align 4, !dbg !169 ; [debug line = 68:4]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %f) nounwind
  %tmp.53 = add i32 %f.0.lcssa, %f, !dbg !170     ; [#uses=1 type=i32] [debug line = 69:4]
  store i32 %tmp.53, i32* %ctx.addr.9, align 4, !dbg !170 ; [debug line = 69:4]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %g) nounwind
  %tmp.54 = add i32 %g.0.lcssa, %g, !dbg !171     ; [#uses=1 type=i32] [debug line = 70:4]
  store i32 %tmp.54, i32* %ctx.addr.10, align 4, !dbg !171 ; [debug line = 70:4]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %h) nounwind
  %tmp.55 = add i32 %h.0.lcssa, %h, !dbg !172     ; [#uses=1 type=i32] [debug line = 71:4]
  store i32 %tmp.55, i32* %ctx.addr.11, align 4, !dbg !172 ; [debug line = 71:4]
  ret void, !dbg !173                             ; [debug line = 72:1]
}

; [#uses=1]
define internal fastcc void @sha256_init(%struct.SHA256_CTX.0* %ctx) nounwind {
  call void @llvm.dbg.value(metadata !{%struct.SHA256_CTX.0* %ctx}, i64 0, metadata !174), !dbg !175 ; [debug line = 74:30] [debug variable = ctx]
  %ctx.addr = getelementptr inbounds %struct.SHA256_CTX.0* %ctx, i32 0, i32 1, !dbg !176 ; [#uses=1 type=i32*] [debug line = 76:4]
  store i32 0, i32* %ctx.addr, align 4, !dbg !176 ; [debug line = 76:4]
  %ctx.addr.12 = getelementptr inbounds %struct.SHA256_CTX.0* %ctx, i32 0, i32 2, i32 0, !dbg !178 ; [#uses=1 type=i32*] [debug line = 77:4]
  store i32 0, i32* %ctx.addr.12, align 4, !dbg !178 ; [debug line = 77:4]
  %ctx.addr.13 = getelementptr inbounds %struct.SHA256_CTX.0* %ctx, i32 0, i32 2, i32 1, !dbg !179 ; [#uses=1 type=i32*] [debug line = 78:4]
  store i32 0, i32* %ctx.addr.13, align 4, !dbg !179 ; [debug line = 78:4]
  %ctx.addr.14 = getelementptr inbounds %struct.SHA256_CTX.0* %ctx, i32 0, i32 3, i32 0, !dbg !180 ; [#uses=1 type=i32*] [debug line = 79:4]
  store i32 1779033703, i32* %ctx.addr.14, align 4, !dbg !180 ; [debug line = 79:4]
  %ctx.addr.15 = getelementptr inbounds %struct.SHA256_CTX.0* %ctx, i32 0, i32 3, i32 1, !dbg !181 ; [#uses=1 type=i32*] [debug line = 80:4]
  store i32 -1150833019, i32* %ctx.addr.15, align 4, !dbg !181 ; [debug line = 80:4]
  %ctx.addr.16 = getelementptr inbounds %struct.SHA256_CTX.0* %ctx, i32 0, i32 3, i32 2, !dbg !182 ; [#uses=1 type=i32*] [debug line = 81:4]
  store i32 1013904242, i32* %ctx.addr.16, align 4, !dbg !182 ; [debug line = 81:4]
  %ctx.addr.17 = getelementptr inbounds %struct.SHA256_CTX.0* %ctx, i32 0, i32 3, i32 3, !dbg !183 ; [#uses=1 type=i32*] [debug line = 82:4]
  store i32 -1521486534, i32* %ctx.addr.17, align 4, !dbg !183 ; [debug line = 82:4]
  %ctx.addr.18 = getelementptr inbounds %struct.SHA256_CTX.0* %ctx, i32 0, i32 3, i32 4, !dbg !184 ; [#uses=1 type=i32*] [debug line = 83:4]
  store i32 1359893119, i32* %ctx.addr.18, align 4, !dbg !184 ; [debug line = 83:4]
  %ctx.addr.19 = getelementptr inbounds %struct.SHA256_CTX.0* %ctx, i32 0, i32 3, i32 5, !dbg !185 ; [#uses=1 type=i32*] [debug line = 84:4]
  store i32 -1694144372, i32* %ctx.addr.19, align 4, !dbg !185 ; [debug line = 84:4]
  %ctx.addr.20 = getelementptr inbounds %struct.SHA256_CTX.0* %ctx, i32 0, i32 3, i32 6, !dbg !186 ; [#uses=1 type=i32*] [debug line = 85:4]
  store i32 528734635, i32* %ctx.addr.20, align 4, !dbg !186 ; [debug line = 85:4]
  %ctx.addr.21 = getelementptr inbounds %struct.SHA256_CTX.0* %ctx, i32 0, i32 3, i32 7, !dbg !187 ; [#uses=1 type=i32*] [debug line = 86:4]
  store i32 1541459225, i32* %ctx.addr.21, align 4, !dbg !187 ; [debug line = 86:4]
  ret void, !dbg !188                             ; [debug line = 87:1]
}

; [#uses=1]
define internal fastcc void @sha256_final(%struct.SHA256_CTX.0* %ctx, i8* %hash) nounwind {
  call void @llvm.dbg.value(metadata !{%struct.SHA256_CTX.0* %ctx}, i64 0, metadata !189), !dbg !190 ; [debug line = 105:31] [debug variable = ctx]
  call void @llvm.dbg.value(metadata !{i8* %hash}, i64 0, metadata !191), !dbg !192 ; [debug line = 105:66] [debug variable = hash]
  %ctx.addr = getelementptr inbounds %struct.SHA256_CTX.0* %ctx, i32 0, i32 1, !dbg !193 ; [#uses=2 type=i32*] [debug line = 109:2]
  %i = load i32* %ctx.addr, align 4, !dbg !193    ; [#uses=7 type=i32] [debug line = 109:2]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %i) nounwind
  call void @llvm.dbg.value(metadata !{i32 %i}, i64 0, metadata !195), !dbg !193 ; [debug line = 109:2] [debug variable = i]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %i) nounwind
  %tmp = icmp ult i32 %i, 56, !dbg !196           ; [#uses=1 type=i1] [debug line = 112:2]
  br i1 %tmp, label %1, label %4, !dbg !196       ; [debug line = 112:2]

; <label>:1                                       ; preds = %0
  %ctx.addr.22 = getelementptr inbounds %struct.SHA256_CTX.0* %ctx, i32 0, i32 0, i32 %i, !dbg !197 ; [#uses=1 type=i8*] [debug line = 113:3]
  store i8 -128, i8* %ctx.addr.22, align 1, !dbg !197 ; [debug line = 113:3]
  br label %2, !dbg !199                          ; [debug line = 114:3]

; <label>:2                                       ; preds = %3, %1
  %i.0.in = phi i32 [ %i, %1 ], [ %i.6, %3 ]      ; [#uses=1 type=i32]
  %i.6 = add i32 %i.0.in, 1, !dbg !197            ; [#uses=3 type=i32] [debug line = 113:3]
  call void @llvm.dbg.value(metadata !{i32 %i.6}, i64 0, metadata !195), !dbg !197 ; [debug line = 113:3] [debug variable = i]
  %tmp.92 = icmp ult i32 %i.6, 56, !dbg !199      ; [#uses=1 type=i1] [debug line = 114:3]
  br i1 %tmp.92, label %3, label %.loopexit.loopexit8, !dbg !199 ; [debug line = 114:3]

; <label>:3                                       ; preds = %2
  %ctx.addr.24 = getelementptr inbounds %struct.SHA256_CTX.0* %ctx, i32 0, i32 0, i32 %i.6, !dbg !200 ; [#uses=1 type=i8*] [debug line = 115:4]
  store i8 0, i8* %ctx.addr.24, align 1, !dbg !200 ; [debug line = 115:4]
  br label %2, !dbg !200                          ; [debug line = 115:4]

; <label>:4                                       ; preds = %0
  %ctx.addr.23 = getelementptr inbounds %struct.SHA256_CTX.0* %ctx, i32 0, i32 0, i32 %i, !dbg !201 ; [#uses=1 type=i8*] [debug line = 118:3]
  store i8 -128, i8* %ctx.addr.23, align 1, !dbg !201 ; [debug line = 118:3]
  br label %5, !dbg !203                          ; [debug line = 119:3]

; <label>:5                                       ; preds = %6, %4
  %i.1.in = phi i32 [ %i, %4 ], [ %i.1, %6 ]      ; [#uses=1 type=i32]
  %i.1 = add i32 %i.1.in, 1, !dbg !201            ; [#uses=3 type=i32] [debug line = 118:3]
  call void @llvm.dbg.value(metadata !{i32 %i.1}, i64 0, metadata !195), !dbg !201 ; [debug line = 118:3] [debug variable = i]
  %tmp.93 = icmp ult i32 %i.1, 64, !dbg !203      ; [#uses=1 type=i1] [debug line = 119:3]
  br i1 %tmp.93, label %6, label %7, !dbg !203    ; [debug line = 119:3]

; <label>:6                                       ; preds = %5
  %ctx.addr.25 = getelementptr inbounds %struct.SHA256_CTX.0* %ctx, i32 0, i32 0, i32 %i.1, !dbg !204 ; [#uses=1 type=i8*] [debug line = 120:4]
  store i8 0, i8* %ctx.addr.25, align 1, !dbg !204 ; [debug line = 120:4]
  br label %5, !dbg !204                          ; [debug line = 120:4]

; <label>:7                                       ; preds = %5
  %ctx.addr.26 = getelementptr inbounds %struct.SHA256_CTX.0* %ctx, i32 0, i32 0, i32 0, !dbg !205 ; [#uses=1 type=i8*] [debug line = 121:3]
  call fastcc void @sha256_transform(%struct.SHA256_CTX.0* %ctx, i8* %ctx.addr.26), !dbg !205 ; [debug line = 121:3]
  br label %8, !dbg !206                          ; [debug line = 122:8]

; <label>:8                                       ; preds = %9, %7
  %i.2 = phi i32 [ 0, %7 ], [ %i.7, %9 ]          ; [#uses=3 type=i32]
  %tmp.94 = icmp eq i32 %i.2, 56, !dbg !206       ; [#uses=1 type=i1] [debug line = 122:8]
  br i1 %tmp.94, label %.loopexit.loopexit, label %9, !dbg !206 ; [debug line = 122:8]

; <label>:9                                       ; preds = %8
  %rbegin6 = call i32 (...)* @_ssdm_op_SpecRegionBegin(i8* getelementptr inbounds ([12 x i8]* @.str5, i32 0, i32 0)) nounwind, !dbg !208 ; [#uses=1 type=i32] [debug line = 122:30]
  call void (...)* @_ssdm_op_SpecLoopTripCount(i32 12, i32 100, i32 56, i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0)), !dbg !210 ; [debug line = 123:1]
  %ctx.addr.27 = getelementptr inbounds %struct.SHA256_CTX.0* %ctx, i32 0, i32 0, i32 %i.2, !dbg !211 ; [#uses=1 type=i8*] [debug line = 124:2]
  store i8 0, i8* %ctx.addr.27, align 1, !dbg !211 ; [debug line = 124:2]
  %rend7 = call i32 (...)* @_ssdm_op_SpecRegionEnd(i8* getelementptr inbounds ([12 x i8]* @.str5, i32 0, i32 0), i32 %rbegin6) nounwind, !dbg !212 ; [#uses=0 type=i32] [debug line = 125:3]
  %i.7 = add i32 %i.2, 1, !dbg !213               ; [#uses=1 type=i32] [debug line = 122:23]
  call void @llvm.dbg.value(metadata !{i32 %i.7}, i64 0, metadata !195), !dbg !213 ; [debug line = 122:23] [debug variable = i]
  br label %8, !dbg !213                          ; [debug line = 122:23]

.loopexit.loopexit:                               ; preds = %8
  br label %.loopexit

.loopexit.loopexit8:                              ; preds = %2
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit8, %.loopexit.loopexit
  %ctx.addr.28 = getelementptr inbounds %struct.SHA256_CTX.0* %ctx, i32 0, i32 2, i32 0, !dbg !214 ; [#uses=2 type=i32*] [debug line = 130:4]
  %ctx.load = load i32* %ctx.addr.28, align 4, !dbg !214 ; [#uses=4 type=i32] [debug line = 130:4]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %ctx.load) nounwind
  %ctx.load.4 = load i32* %ctx.addr, align 4, !dbg !214 ; [#uses=3 type=i32] [debug line = 130:4]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %ctx.load.4) nounwind
  %tmp.96 = shl i32 %ctx.load.4, 3, !dbg !214     ; [#uses=2 type=i32] [debug line = 130:4]
  %tmp.97 = xor i32 %tmp.96, -1, !dbg !214        ; [#uses=1 type=i32] [debug line = 130:4]
  %tmp.98 = icmp ugt i32 %ctx.load, %tmp.97, !dbg !214 ; [#uses=1 type=i1] [debug line = 130:4]
  br i1 %tmp.98, label %10, label %.loopexit._crit_edge, !dbg !214 ; [debug line = 130:4]

; <label>:10                                      ; preds = %.loopexit
  %ctx.addr.29 = getelementptr inbounds %struct.SHA256_CTX.0* %ctx, i32 0, i32 2, i32 1, !dbg !215 ; [#uses=2 type=i32*] [debug line = 130:58]
  %ctx.load.5 = load i32* %ctx.addr.29, align 4, !dbg !215 ; [#uses=2 type=i32] [debug line = 130:58]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %ctx.load.5) nounwind
  %tmp.99 = add i32 %ctx.load.5, 1, !dbg !215     ; [#uses=1 type=i32] [debug line = 130:58]
  store i32 %tmp.99, i32* %ctx.addr.29, align 4, !dbg !215 ; [debug line = 130:58]
  br label %.loopexit._crit_edge, !dbg !215       ; [debug line = 130:58]

.loopexit._crit_edge:                             ; preds = %10, %.loopexit
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %ctx.load.4) nounwind
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %ctx.load) nounwind
  %tmp.100 = add i32 %tmp.96, %ctx.load, !dbg !216 ; [#uses=9 type=i32] [debug line = 130:76]
  store i32 %tmp.100, i32* %ctx.addr.28, align 4, !dbg !216 ; [debug line = 130:76]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %tmp.100) nounwind
  %tmp.101 = trunc i32 %tmp.100 to i8, !dbg !217  ; [#uses=1 type=i8] [debug line = 131:4]
  %ctx.addr.30 = getelementptr inbounds %struct.SHA256_CTX.0* %ctx, i32 0, i32 0, i32 63, !dbg !217 ; [#uses=1 type=i8*] [debug line = 131:4]
  store i8 %tmp.101, i8* %ctx.addr.30, align 1, !dbg !217 ; [debug line = 131:4]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %tmp.100) nounwind
  %tmp.102 = lshr i32 %tmp.100, 8, !dbg !218      ; [#uses=1 type=i32] [debug line = 132:4]
  %tmp.103 = trunc i32 %tmp.102 to i8, !dbg !218  ; [#uses=1 type=i8] [debug line = 132:4]
  %ctx.addr.31 = getelementptr inbounds %struct.SHA256_CTX.0* %ctx, i32 0, i32 0, i32 62, !dbg !218 ; [#uses=1 type=i8*] [debug line = 132:4]
  store i8 %tmp.103, i8* %ctx.addr.31, align 1, !dbg !218 ; [debug line = 132:4]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %tmp.100) nounwind
  %tmp.104 = lshr i32 %tmp.100, 16, !dbg !219     ; [#uses=1 type=i32] [debug line = 133:4]
  %tmp.105 = trunc i32 %tmp.104 to i8, !dbg !219  ; [#uses=1 type=i8] [debug line = 133:4]
  %ctx.addr.32 = getelementptr inbounds %struct.SHA256_CTX.0* %ctx, i32 0, i32 0, i32 61, !dbg !219 ; [#uses=1 type=i8*] [debug line = 133:4]
  store i8 %tmp.105, i8* %ctx.addr.32, align 1, !dbg !219 ; [debug line = 133:4]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %tmp.100) nounwind
  %tmp.106 = lshr i32 %tmp.100, 24, !dbg !220     ; [#uses=1 type=i32] [debug line = 134:4]
  %tmp.107 = trunc i32 %tmp.106 to i8, !dbg !220  ; [#uses=1 type=i8] [debug line = 134:4]
  %ctx.addr.33 = getelementptr inbounds %struct.SHA256_CTX.0* %ctx, i32 0, i32 0, i32 60, !dbg !220 ; [#uses=1 type=i8*] [debug line = 134:4]
  store i8 %tmp.107, i8* %ctx.addr.33, align 1, !dbg !220 ; [debug line = 134:4]
  %ctx.addr.34 = getelementptr inbounds %struct.SHA256_CTX.0* %ctx, i32 0, i32 2, i32 1, !dbg !221 ; [#uses=1 type=i32*] [debug line = 135:4]
  %ctx.load.6 = load i32* %ctx.addr.34, align 4, !dbg !221 ; [#uses=8 type=i32] [debug line = 135:4]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %ctx.load.6) nounwind
  %tmp.108 = trunc i32 %ctx.load.6 to i8, !dbg !221 ; [#uses=1 type=i8] [debug line = 135:4]
  %ctx.addr.35 = getelementptr inbounds %struct.SHA256_CTX.0* %ctx, i32 0, i32 0, i32 59, !dbg !221 ; [#uses=1 type=i8*] [debug line = 135:4]
  store i8 %tmp.108, i8* %ctx.addr.35, align 1, !dbg !221 ; [debug line = 135:4]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %ctx.load.6) nounwind
  %tmp.109 = lshr i32 %ctx.load.6, 8, !dbg !222   ; [#uses=1 type=i32] [debug line = 136:4]
  %tmp.110 = trunc i32 %tmp.109 to i8, !dbg !222  ; [#uses=1 type=i8] [debug line = 136:4]
  %ctx.addr.36 = getelementptr inbounds %struct.SHA256_CTX.0* %ctx, i32 0, i32 0, i32 58, !dbg !222 ; [#uses=1 type=i8*] [debug line = 136:4]
  store i8 %tmp.110, i8* %ctx.addr.36, align 1, !dbg !222 ; [debug line = 136:4]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %ctx.load.6) nounwind
  %tmp.111 = lshr i32 %ctx.load.6, 16, !dbg !223  ; [#uses=1 type=i32] [debug line = 137:4]
  %tmp.112 = trunc i32 %tmp.111 to i8, !dbg !223  ; [#uses=1 type=i8] [debug line = 137:4]
  %ctx.addr.37 = getelementptr inbounds %struct.SHA256_CTX.0* %ctx, i32 0, i32 0, i32 57, !dbg !223 ; [#uses=1 type=i8*] [debug line = 137:4]
  store i8 %tmp.112, i8* %ctx.addr.37, align 1, !dbg !223 ; [debug line = 137:4]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %ctx.load.6) nounwind
  %tmp.113 = lshr i32 %ctx.load.6, 24, !dbg !224  ; [#uses=1 type=i32] [debug line = 138:4]
  %tmp.114 = trunc i32 %tmp.113 to i8, !dbg !224  ; [#uses=1 type=i8] [debug line = 138:4]
  %ctx.addr.38 = getelementptr inbounds %struct.SHA256_CTX.0* %ctx, i32 0, i32 0, i32 56, !dbg !224 ; [#uses=1 type=i8*] [debug line = 138:4]
  store i8 %tmp.114, i8* %ctx.addr.38, align 1, !dbg !224 ; [debug line = 138:4]
  %ctx.addr.39 = getelementptr inbounds %struct.SHA256_CTX.0* %ctx, i32 0, i32 0, i32 0, !dbg !225 ; [#uses=1 type=i8*] [debug line = 139:4]
  call fastcc void @sha256_transform(%struct.SHA256_CTX.0* %ctx, i8* %ctx.addr.39), !dbg !225 ; [debug line = 139:4]
  %ctx.addr.40 = getelementptr inbounds %struct.SHA256_CTX.0* %ctx, i32 0, i32 3, i32 0, !dbg !226 ; [#uses=1 type=i32*] [debug line = 145:2]
  %ctx.addr.41 = getelementptr inbounds %struct.SHA256_CTX.0* %ctx, i32 0, i32 3, i32 1, !dbg !229 ; [#uses=1 type=i32*] [debug line = 146:7]
  %ctx.addr.42 = getelementptr inbounds %struct.SHA256_CTX.0* %ctx, i32 0, i32 3, i32 2, !dbg !230 ; [#uses=1 type=i32*] [debug line = 147:7]
  %ctx.addr.43 = getelementptr inbounds %struct.SHA256_CTX.0* %ctx, i32 0, i32 3, i32 3, !dbg !231 ; [#uses=1 type=i32*] [debug line = 148:7]
  %ctx.addr.44 = getelementptr inbounds %struct.SHA256_CTX.0* %ctx, i32 0, i32 3, i32 4, !dbg !232 ; [#uses=1 type=i32*] [debug line = 149:7]
  %ctx.addr.45 = getelementptr inbounds %struct.SHA256_CTX.0* %ctx, i32 0, i32 3, i32 5, !dbg !233 ; [#uses=1 type=i32*] [debug line = 150:7]
  %ctx.addr.46 = getelementptr inbounds %struct.SHA256_CTX.0* %ctx, i32 0, i32 3, i32 6, !dbg !234 ; [#uses=1 type=i32*] [debug line = 151:7]
  %ctx.addr.47 = getelementptr inbounds %struct.SHA256_CTX.0* %ctx, i32 0, i32 3, i32 7, !dbg !235 ; [#uses=1 type=i32*] [debug line = 152:7]
  br label %11, !dbg !236                         ; [debug line = 143:9]

; <label>:11                                      ; preds = %12, %.loopexit._crit_edge
  %i.3 = phi i32 [ 0, %.loopexit._crit_edge ], [ %i.8, %12 ] ; [#uses=11 type=i32]
  %tmp.115 = icmp eq i32 %i.3, 4, !dbg !236       ; [#uses=1 type=i1] [debug line = 143:9]
  br i1 %tmp.115, label %13, label %12, !dbg !236 ; [debug line = 143:9]

; <label>:12                                      ; preds = %11
  %rbegin = call i32 (...)* @_ssdm_op_SpecRegionBegin(i8* getelementptr inbounds ([12 x i8]* @.str6, i32 0, i32 0)) nounwind, !dbg !237 ; [#uses=1 type=i32] [debug line = 143:27]
  call void (...)* @_ssdm_op_SpecLoopTripCount(i32 12, i32 100, i32 56, i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0)), !dbg !238 ; [debug line = 144:1]
  %ctx.load.7 = load i32* %ctx.addr.40, align 4, !dbg !226 ; [#uses=2 type=i32] [debug line = 145:2]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %ctx.load.7) nounwind
  %tmp.116 = shl i32 %i.3, 3, !dbg !226           ; [#uses=1 type=i32] [debug line = 145:2]
  %tmp.117 = sub i32 24, %tmp.116, !dbg !226      ; [#uses=8 type=i32] [debug line = 145:2]
  %tmp.118 = lshr i32 %ctx.load.7, %tmp.117, !dbg !226 ; [#uses=1 type=i32] [debug line = 145:2]
  %tmp.119 = trunc i32 %tmp.118 to i8, !dbg !226  ; [#uses=1 type=i8] [debug line = 145:2]
  %hash.addr = getelementptr inbounds i8* %hash, i32 %i.3, !dbg !226 ; [#uses=1 type=i8*] [debug line = 145:2]
  store i8 %tmp.119, i8* %hash.addr, align 1, !dbg !226 ; [debug line = 145:2]
  %ctx.load.8 = load i32* %ctx.addr.41, align 4, !dbg !229 ; [#uses=2 type=i32] [debug line = 146:7]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %ctx.load.8) nounwind
  %tmp.120 = lshr i32 %ctx.load.8, %tmp.117, !dbg !229 ; [#uses=1 type=i32] [debug line = 146:7]
  %tmp.121 = trunc i32 %tmp.120 to i8, !dbg !229  ; [#uses=1 type=i8] [debug line = 146:7]
  %tmp.122 = add i32 %i.3, 4, !dbg !229           ; [#uses=1 type=i32] [debug line = 146:7]
  %hash.addr.1 = getelementptr inbounds i8* %hash, i32 %tmp.122, !dbg !229 ; [#uses=1 type=i8*] [debug line = 146:7]
  store i8 %tmp.121, i8* %hash.addr.1, align 1, !dbg !229 ; [debug line = 146:7]
  %ctx.load.9 = load i32* %ctx.addr.42, align 4, !dbg !230 ; [#uses=2 type=i32] [debug line = 147:7]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %ctx.load.9) nounwind
  %tmp.123 = lshr i32 %ctx.load.9, %tmp.117, !dbg !230 ; [#uses=1 type=i32] [debug line = 147:7]
  %tmp.124 = trunc i32 %tmp.123 to i8, !dbg !230  ; [#uses=1 type=i8] [debug line = 147:7]
  %tmp.125 = add i32 %i.3, 8, !dbg !230           ; [#uses=1 type=i32] [debug line = 147:7]
  %hash.addr.2 = getelementptr inbounds i8* %hash, i32 %tmp.125, !dbg !230 ; [#uses=1 type=i8*] [debug line = 147:7]
  store i8 %tmp.124, i8* %hash.addr.2, align 1, !dbg !230 ; [debug line = 147:7]
  %ctx.load.10 = load i32* %ctx.addr.43, align 4, !dbg !231 ; [#uses=2 type=i32] [debug line = 148:7]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %ctx.load.10) nounwind
  %tmp.126 = lshr i32 %ctx.load.10, %tmp.117, !dbg !231 ; [#uses=1 type=i32] [debug line = 148:7]
  %tmp.127 = trunc i32 %tmp.126 to i8, !dbg !231  ; [#uses=1 type=i8] [debug line = 148:7]
  %tmp.128 = add i32 %i.3, 12, !dbg !231          ; [#uses=1 type=i32] [debug line = 148:7]
  %hash.addr.3 = getelementptr inbounds i8* %hash, i32 %tmp.128, !dbg !231 ; [#uses=1 type=i8*] [debug line = 148:7]
  store i8 %tmp.127, i8* %hash.addr.3, align 1, !dbg !231 ; [debug line = 148:7]
  %ctx.load.11 = load i32* %ctx.addr.44, align 4, !dbg !232 ; [#uses=2 type=i32] [debug line = 149:7]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %ctx.load.11) nounwind
  %tmp.129 = lshr i32 %ctx.load.11, %tmp.117, !dbg !232 ; [#uses=1 type=i32] [debug line = 149:7]
  %tmp.130 = trunc i32 %tmp.129 to i8, !dbg !232  ; [#uses=1 type=i8] [debug line = 149:7]
  %tmp.131 = add i32 %i.3, 16, !dbg !232          ; [#uses=1 type=i32] [debug line = 149:7]
  %hash.addr.4 = getelementptr inbounds i8* %hash, i32 %tmp.131, !dbg !232 ; [#uses=1 type=i8*] [debug line = 149:7]
  store i8 %tmp.130, i8* %hash.addr.4, align 1, !dbg !232 ; [debug line = 149:7]
  %ctx.load.12 = load i32* %ctx.addr.45, align 4, !dbg !233 ; [#uses=2 type=i32] [debug line = 150:7]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %ctx.load.12) nounwind
  %tmp.132 = lshr i32 %ctx.load.12, %tmp.117, !dbg !233 ; [#uses=1 type=i32] [debug line = 150:7]
  %tmp.133 = trunc i32 %tmp.132 to i8, !dbg !233  ; [#uses=1 type=i8] [debug line = 150:7]
  %tmp.134 = add i32 %i.3, 20, !dbg !233          ; [#uses=1 type=i32] [debug line = 150:7]
  %hash.addr.5 = getelementptr inbounds i8* %hash, i32 %tmp.134, !dbg !233 ; [#uses=1 type=i8*] [debug line = 150:7]
  store i8 %tmp.133, i8* %hash.addr.5, align 1, !dbg !233 ; [debug line = 150:7]
  %ctx.load.13 = load i32* %ctx.addr.46, align 4, !dbg !234 ; [#uses=2 type=i32] [debug line = 151:7]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %ctx.load.13) nounwind
  %tmp.135 = lshr i32 %ctx.load.13, %tmp.117, !dbg !234 ; [#uses=1 type=i32] [debug line = 151:7]
  %tmp.136 = trunc i32 %tmp.135 to i8, !dbg !234  ; [#uses=1 type=i8] [debug line = 151:7]
  %tmp.137 = add i32 %i.3, 24, !dbg !234          ; [#uses=1 type=i32] [debug line = 151:7]
  %hash.addr.6 = getelementptr inbounds i8* %hash, i32 %tmp.137, !dbg !234 ; [#uses=1 type=i8*] [debug line = 151:7]
  store i8 %tmp.136, i8* %hash.addr.6, align 1, !dbg !234 ; [debug line = 151:7]
  %ctx.load.14 = load i32* %ctx.addr.47, align 4, !dbg !235 ; [#uses=2 type=i32] [debug line = 152:7]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %ctx.load.14) nounwind
  %tmp.138 = lshr i32 %ctx.load.14, %tmp.117, !dbg !235 ; [#uses=1 type=i32] [debug line = 152:7]
  %tmp.139 = trunc i32 %tmp.138 to i8, !dbg !235  ; [#uses=1 type=i8] [debug line = 152:7]
  %tmp.140 = add i32 %i.3, 28, !dbg !235          ; [#uses=1 type=i32] [debug line = 152:7]
  %hash.addr.7 = getelementptr inbounds i8* %hash, i32 %tmp.140, !dbg !235 ; [#uses=1 type=i8*] [debug line = 152:7]
  store i8 %tmp.139, i8* %hash.addr.7, align 1, !dbg !235 ; [debug line = 152:7]
  %rend = call i32 (...)* @_ssdm_op_SpecRegionEnd(i8* getelementptr inbounds ([12 x i8]* @.str6, i32 0, i32 0), i32 %rbegin) nounwind, !dbg !239 ; [#uses=0 type=i32] [debug line = 153:4]
  %i.8 = add i32 %i.3, 1, !dbg !240               ; [#uses=1 type=i32] [debug line = 143:21]
  call void @llvm.dbg.value(metadata !{i32 %i.8}, i64 0, metadata !195), !dbg !240 ; [debug line = 143:21] [debug variable = i]
  br label %11, !dbg !240                         ; [debug line = 143:21]

; <label>:13                                      ; preds = %11
  ret void, !dbg !241                             ; [debug line = 154:1]
}

; [#uses=0]
define void @sha256(i8* %data, i32 %base_offset, i32 %bytes, i8* %digest) nounwind {
  call void (...)* @_ssdm_op_SpecTopModule([7 x i8]* @sha256.str) nounwind
  %seg_buf = alloca [64 x i8], align 1            ; [#uses=4 type=[64 x i8]*]
  %sha256ctx = alloca %struct.SHA256_CTX.0, align 4 ; [#uses=4 type=%struct.SHA256_CTX.0*]
  call void @llvm.dbg.value(metadata !{i8* %data}, i64 0, metadata !242), !dbg !243 ; [debug line = 9:28] [debug variable = data]
  call void @llvm.dbg.value(metadata !{i32 %base_offset}, i64 0, metadata !244), !dbg !245 ; [debug line = 10:18] [debug variable = base_offset]
  call void @llvm.dbg.value(metadata !{i32 %bytes}, i64 0, metadata !246), !dbg !247 ; [debug line = 11:18] [debug variable = bytes]
  call void @llvm.dbg.value(metadata !{i8* %digest}, i64 0, metadata !248), !dbg !249 ; [debug line = 12:19] [debug variable = digest]
  call void (...)* @_ssdm_SpecArrayDimSize(i8* %data, i32 256), !dbg !250 ; [debug line = 12:81]
  call void (...)* @_ssdm_SpecArrayDimSize(i8* %digest, i32 32), !dbg !252 ; [debug line = 12:114]
  call void (...)* @_ssdm_op_SpecInterface(i8* %data, i8* getelementptr inbounds ([10 x i8]* @.str7, i32 0, i32 0), i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0), i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0), i32 0, i32 0, i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0)), !dbg !253 ; [debug line = 16:1]
  call void (...)* @_ssdm_op_SpecInterface(i8* %digest, i8* getelementptr inbounds ([10 x i8]* @.str7, i32 0, i32 0), i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0), i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0), i32 0, i32 0, i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0)), !dbg !254 ; [debug line = 17:1]
  call void (...)* @_ssdm_op_SpecInterface(i32 %base_offset, i8* getelementptr inbounds ([10 x i8]* @.str7, i32 0, i32 0), i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0), i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0), i32 0, i32 0, i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0)), !dbg !255 ; [debug line = 18:1]
  call void (...)* @_ssdm_op_SpecInterface(i32 %bytes, i8* getelementptr inbounds ([10 x i8]* @.str7, i32 0, i32 0), i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0), i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0), i32 0, i32 0, i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0)), !dbg !256 ; [debug line = 19:1]
  call void (...)* @_ssdm_op_SpecInterface(i32 0, i8* getelementptr inbounds ([10 x i8]* @.str7, i32 0, i32 0), i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0), i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0), i32 0, i32 0, i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0)), !dbg !257 ; [debug line = 20:1]
  call void @llvm.dbg.declare(metadata !{[64 x i8]* %seg_buf}, metadata !258), !dbg !259 ; [debug line = 23:16] [debug variable = seg_buf]
  call void @llvm.dbg.value(metadata !{i32 %bytes}, i64 0, metadata !260), !dbg !261 ; [debug line = 26:24] [debug variable = n]
  call void @llvm.dbg.declare(metadata !{%struct.SHA256_CTX.0* %sha256ctx}, metadata !262), !dbg !263 ; [debug line = 29:13] [debug variable = sha256ctx]
  call fastcc void @sha256_init(%struct.SHA256_CTX.0* %sha256ctx), !dbg !264 ; [debug line = 30:2]
  %seg_buf.addr = getelementptr inbounds [64 x i8]* %seg_buf, i32 0, i32 0, !dbg !265 ; [#uses=3 type=i8*] [debug line = 49:4]
  br label %1, !dbg !268                          ; [debug line = 33:2]

; <label>:1                                       ; preds = %7, %0
  %seg_offset = phi i32 [ 0, %0 ], [ %seg_offset.1, %7 ] ; [#uses=4 type=i32]
  %n = phi i32 [ %bytes, %0 ], [ %n.1, %7 ]       ; [#uses=5 type=i32]
  %tmp = icmp eq i32 %n, 0, !dbg !268             ; [#uses=1 type=i1] [debug line = 33:2]
  br i1 %tmp, label %8, label %2, !dbg !268       ; [debug line = 33:2]

; <label>:2                                       ; preds = %1
  %rbegin7 = call i32 (...)* @_ssdm_op_SpecRegionBegin(i8* getelementptr inbounds ([12 x i8]* @.str8, i32 0, i32 0)) nounwind, !dbg !269 ; [#uses=1 type=i32] [debug line = 34:3]
  call void (...)* @_ssdm_op_SpecLoopTripCount(i32 12, i32 100, i32 56, i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0)), !dbg !270 ; [debug line = 35:1]
  %tmp.142 = icmp ugt i32 %n, 63, !dbg !271       ; [#uses=1 type=i1] [debug line = 36:2]
  br i1 %tmp.142, label %.preheader6.preheader, label %.preheader.preheader, !dbg !271 ; [debug line = 36:2]

.preheader6.preheader:                            ; preds = %2
  br label %.preheader6, !dbg !272                ; [debug line = 38:9]

.preheader.preheader:                             ; preds = %2
  br label %.preheader, !dbg !275                 ; [debug line = 46:9]

.preheader6:                                      ; preds = %3, %.preheader6.preheader
  %i9 = phi i32 [ %i.10, %3 ], [ 0, %.preheader6.preheader ] ; [#uses=4 type=i32]
  %exitcond5 = icmp eq i32 %i9, 64, !dbg !272     ; [#uses=1 type=i1] [debug line = 38:9]
  br i1 %exitcond5, label %4, label %3, !dbg !272 ; [debug line = 38:9]

; <label>:3                                       ; preds = %.preheader6
  %.sum2 = add i32 %seg_offset, %base_offset, !dbg !277 ; [#uses=1 type=i32] [debug line = 39:5]
  %.sum3 = add i32 %.sum2, %i9, !dbg !277         ; [#uses=1 type=i32] [debug line = 39:5]
  %data.addr = getelementptr inbounds i8* %data, i32 %.sum3, !dbg !277 ; [#uses=1 type=i8*] [debug line = 39:5]
  %data.load = load i8* %data.addr, align 1, !dbg !277 ; [#uses=2 type=i8] [debug line = 39:5]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i8 %data.load) nounwind
  %seg_buf.addr.2 = getelementptr inbounds [64 x i8]* %seg_buf, i32 0, i32 %i9, !dbg !277 ; [#uses=1 type=i8*] [debug line = 39:5]
  store i8 %data.load, i8* %seg_buf.addr.2, align 1, !dbg !277 ; [debug line = 39:5]
  %i.10 = add nsw i32 %i9, 1, !dbg !278           ; [#uses=1 type=i32] [debug line = 38:20]
  call void @llvm.dbg.value(metadata !{i32 %i.10}, i64 0, metadata !279), !dbg !278 ; [debug line = 38:20] [debug variable = i]
  br label %.preheader6, !dbg !278                ; [debug line = 38:20]

; <label>:4                                       ; preds = %.preheader6
  %n.2 = add i32 %n, -64, !dbg !280               ; [#uses=1 type=i32] [debug line = 40:4]
  call void @llvm.dbg.value(metadata !{i32 %n.2}, i64 0, metadata !260), !dbg !280 ; [debug line = 40:4] [debug variable = n]
  %seg_offset.2 = add i32 %seg_offset, 64, !dbg !281 ; [#uses=1 type=i32] [debug line = 41:4]
  call void @llvm.dbg.value(metadata !{i32 %seg_offset.2}, i64 0, metadata !282), !dbg !281 ; [debug line = 41:4] [debug variable = seg_offset]
  call fastcc void @sha256_update(%struct.SHA256_CTX.0* %sha256ctx, i8* %seg_buf.addr, i32 64), !dbg !283 ; [debug line = 42:4]
  br label %7, !dbg !284                          ; [debug line = 43:3]

.preheader:                                       ; preds = %5, %.preheader.preheader
  %i.1 = phi i32 [ %i.11, %5 ], [ 0, %.preheader.preheader ] ; [#uses=4 type=i32]
  %exitcond4 = icmp eq i32 %i.1, %n, !dbg !275    ; [#uses=1 type=i1] [debug line = 46:9]
  br i1 %exitcond4, label %6, label %5, !dbg !275 ; [debug line = 46:9]

; <label>:5                                       ; preds = %.preheader
  %rbegin = call i32 (...)* @_ssdm_op_SpecRegionBegin(i8* getelementptr inbounds ([12 x i8]* @.str9, i32 0, i32 0)) nounwind, !dbg !285 ; [#uses=1 type=i32] [debug line = 48:3]
  call void (...)* @_ssdm_op_SpecLoopTripCount(i32 12, i32 100, i32 56, i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0)), !dbg !287 ; [debug line = 47:1]
  %.sum = add i32 %seg_offset, %base_offset, !dbg !288 ; [#uses=1 type=i32] [debug line = 48:2]
  %.sum1 = add i32 %.sum, %i.1, !dbg !288         ; [#uses=1 type=i32] [debug line = 48:2]
  %data.addr.4 = getelementptr inbounds i8* %data, i32 %.sum1, !dbg !288 ; [#uses=1 type=i8*] [debug line = 48:2]
  %data.load.4 = load i8* %data.addr.4, align 1, !dbg !288 ; [#uses=2 type=i8] [debug line = 48:2]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i8 %data.load.4) nounwind
  %seg_buf.addr.3 = getelementptr inbounds [64 x i8]* %seg_buf, i32 0, i32 %i.1, !dbg !288 ; [#uses=1 type=i8*] [debug line = 48:2]
  store i8 %data.load.4, i8* %seg_buf.addr.3, align 1, !dbg !288 ; [debug line = 48:2]
  %rend = call i32 (...)* @_ssdm_op_SpecRegionEnd(i8* getelementptr inbounds ([12 x i8]* @.str9, i32 0, i32 0), i32 %rbegin) nounwind, !dbg !289 ; [#uses=0 type=i32] [debug line = 48:50]
  %i.11 = add nsw i32 %i.1, 1, !dbg !290          ; [#uses=1 type=i32] [debug line = 46:19]
  call void @llvm.dbg.value(metadata !{i32 %i.11}, i64 0, metadata !279), !dbg !290 ; [debug line = 46:19] [debug variable = i]
  br label %.preheader, !dbg !290                 ; [debug line = 46:19]

; <label>:6                                       ; preds = %.preheader
  call fastcc void @sha256_update(%struct.SHA256_CTX.0* %sha256ctx, i8* %seg_buf.addr, i32 %n), !dbg !265 ; [debug line = 49:4]
  br label %7

; <label>:7                                       ; preds = %6, %4
  %seg_offset.1 = phi i32 [ %seg_offset.2, %4 ], [ %seg_offset, %6 ] ; [#uses=1 type=i32]
  %n.1 = phi i32 [ %n.2, %4 ], [ 0, %6 ]          ; [#uses=1 type=i32]
  %rend8 = call i32 (...)* @_ssdm_op_SpecRegionEnd(i8* getelementptr inbounds ([12 x i8]* @.str8, i32 0, i32 0), i32 %rbegin7) nounwind, !dbg !291 ; [#uses=0 type=i32] [debug line = 52:2]
  br label %1, !dbg !291                          ; [debug line = 52:2]

; <label>:8                                       ; preds = %1
  call fastcc void @sha256_final(%struct.SHA256_CTX.0* %sha256ctx, i8* %seg_buf.addr), !dbg !292 ; [debug line = 55:2]
  br label %9, !dbg !293                          ; [debug line = 57:7]

; <label>:9                                       ; preds = %10, %8
  %i.2 = phi i32 [ 0, %8 ], [ %i, %10 ]           ; [#uses=4 type=i32]
  %exitcond = icmp eq i32 %i.2, 32, !dbg !293     ; [#uses=1 type=i1] [debug line = 57:7]
  br i1 %exitcond, label %11, label %10, !dbg !293 ; [debug line = 57:7]

; <label>:10                                      ; preds = %9
  %rbegin9 = call i32 (...)* @_ssdm_op_SpecRegionBegin(i8* getelementptr inbounds ([12 x i8]* @.str10, i32 0, i32 0)) nounwind, !dbg !295 ; [#uses=1 type=i32] [debug line = 57:24]
  call void (...)* @_ssdm_op_SpecLoopTripCount(i32 12, i32 40, i32 26, i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0)), !dbg !297 ; [debug line = 58:1]
  call void (...)* @_ssdm_Unroll(i32 0, i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0)), !dbg !298 ; [debug line = 59:1]
  %seg_buf.addr.1 = getelementptr inbounds [64 x i8]* %seg_buf, i32 0, i32 %i.2, !dbg !299 ; [#uses=1 type=i8*] [debug line = 60:2]
  %seg_buf.load = load i8* %seg_buf.addr.1, align 1, !dbg !299 ; [#uses=2 type=i8] [debug line = 60:2]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i8 %seg_buf.load) nounwind
  %digest.addr = getelementptr inbounds i8* %digest, i32 %i.2, !dbg !299 ; [#uses=1 type=i8*] [debug line = 60:2]
  store i8 %seg_buf.load, i8* %digest.addr, align 1, !dbg !299 ; [debug line = 60:2]
  %rend10 = call i32 (...)* @_ssdm_op_SpecRegionEnd(i8* getelementptr inbounds ([12 x i8]* @.str10, i32 0, i32 0), i32 %rbegin9) nounwind, !dbg !300 ; [#uses=0 type=i32] [debug line = 61:2]
  %i = add nsw i32 %i.2, 1, !dbg !301             ; [#uses=1 type=i32] [debug line = 57:18]
  call void @llvm.dbg.value(metadata !{i32 %i}, i64 0, metadata !279), !dbg !301 ; [debug line = 57:18] [debug variable = i]
  br label %9, !dbg !301                          ; [debug line = 57:18]

; <label>:11                                      ; preds = %9
  ret void, !dbg !302                             ; [debug line = 62:1]
}

; [#uses=45]
declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

; [#uses=3]
declare void @llvm.dbg.declare(metadata, metadata) nounwind readnone

; [#uses=1]
declare void @_ssdm_op_SpecTopModule(...)

; [#uses=9]
declare i32 @_ssdm_op_SpecRegionEnd(...)

; [#uses=9]
declare i32 @_ssdm_op_SpecRegionBegin(...)

; [#uses=9]
declare void @_ssdm_op_SpecLoopTripCount(...) nounwind

; [#uses=5]
declare void @_ssdm_op_SpecInterface(...) nounwind

; [#uses=1]
declare void @_ssdm_Unroll(...) nounwind

; [#uses=67]
declare void @_ssdm_SpecKeepArrayLoad(...)

; [#uses=2]
declare void @_ssdm_SpecArrayDimSize(...) nounwind

!llvm.dbg.cu = !{!0}
!opencl.kernels = !{!52, !59, !65, !71, !73}
!hls.encrypted.func = !{}

!0 = metadata !{i32 786449, i32 0, i32 1, metadata !"C:/Student/SHA_new/sha/solution1/.autopilot/db/sha256.pragma.2.c", metadata !"C:\5CStudent\5CSHA_new", metadata !"clang version 3.1 ", i1 true, i1 false, metadata !"", i32 0, metadata !1, metadata !1, metadata !3, metadata !43} ; [ DW_TAG_compile_unit ]
!1 = metadata !{metadata !2}
!2 = metadata !{i32 0}
!3 = metadata !{metadata !4}
!4 = metadata !{metadata !5, metadata !32, metadata !35, metadata !38, metadata !39}
!5 = metadata !{i32 786478, i32 0, metadata !6, metadata !"sha256_transform", metadata !"sha256_transform", metadata !"", metadata !6, i32 30, metadata !7, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, void (%struct.SHA256_CTX.0*, i8*)* @sha256_transform, null, null, metadata !30, i32 31} ; [ DW_TAG_subprogram ]
!6 = metadata !{i32 786473, metadata !"./sha256_impl.c", metadata !"C:\5CStudent\5CSHA_new", null} ; [ DW_TAG_file_type ]
!7 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !8, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!8 = metadata !{null, metadata !9, metadata !29}
!9 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 32, i64 32, i64 0, i32 0, metadata !10} ; [ DW_TAG_pointer_type ]
!10 = metadata !{i32 786454, null, metadata !"SHA256_CTX", metadata !6, i32 11, i64 0, i64 0, i64 0, i32 0, metadata !11} ; [ DW_TAG_typedef ]
!11 = metadata !{i32 786451, null, metadata !"", metadata !12, i32 6, i64 864, i64 32, i32 0, i32 0, null, metadata !13, i32 0, i32 0} ; [ DW_TAG_structure_type ]
!12 = metadata !{i32 786473, metadata !"./sha256_impl.h", metadata !"C:\5CStudent\5CSHA_new", null} ; [ DW_TAG_file_type ]
!13 = metadata !{metadata !14, metadata !19, metadata !21, metadata !25}
!14 = metadata !{i32 786445, metadata !11, metadata !"data", metadata !12, i32 7, i64 512, i64 8, i64 0, i32 0, metadata !15} ; [ DW_TAG_member ]
!15 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 512, i64 8, i32 0, i32 0, metadata !16, metadata !17, i32 0, i32 0} ; [ DW_TAG_array_type ]
!16 = metadata !{i32 786468, null, metadata !"unsigned char", null, i32 0, i64 8, i64 8, i64 0, i32 0, i32 8} ; [ DW_TAG_base_type ]
!17 = metadata !{metadata !18}
!18 = metadata !{i32 786465, i64 0, i64 63}       ; [ DW_TAG_subrange_type ]
!19 = metadata !{i32 786445, metadata !11, metadata !"datalen", metadata !12, i32 8, i64 32, i64 32, i64 512, i32 0, metadata !20} ; [ DW_TAG_member ]
!20 = metadata !{i32 786468, null, metadata !"unsigned int", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 7} ; [ DW_TAG_base_type ]
!21 = metadata !{i32 786445, metadata !11, metadata !"bitlen", metadata !12, i32 9, i64 64, i64 32, i64 544, i32 0, metadata !22} ; [ DW_TAG_member ]
!22 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 64, i64 32, i32 0, i32 0, metadata !20, metadata !23, i32 0, i32 0} ; [ DW_TAG_array_type ]
!23 = metadata !{metadata !24}
!24 = metadata !{i32 786465, i64 0, i64 1}        ; [ DW_TAG_subrange_type ]
!25 = metadata !{i32 786445, metadata !11, metadata !"state", metadata !12, i32 10, i64 256, i64 32, i64 608, i32 0, metadata !26} ; [ DW_TAG_member ]
!26 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 256, i64 32, i32 0, i32 0, metadata !20, metadata !27, i32 0, i32 0} ; [ DW_TAG_array_type ]
!27 = metadata !{metadata !28}
!28 = metadata !{i32 786465, i64 0, i64 7}        ; [ DW_TAG_subrange_type ]
!29 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 32, i64 32, i64 0, i32 0, metadata !16} ; [ DW_TAG_pointer_type ]
!30 = metadata !{metadata !31}
!31 = metadata !{i32 786468}                      ; [ DW_TAG_base_type ]
!32 = metadata !{i32 786478, i32 0, metadata !6, metadata !"sha256_init", metadata !"sha256_init", metadata !"", metadata !6, i32 74, metadata !33, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, void (%struct.SHA256_CTX.0*)* @sha256_init, null, null, metadata !30, i32 75} ; [ DW_TAG_subprogram ]
!33 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !34, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!34 = metadata !{null, metadata !9}
!35 = metadata !{i32 786478, i32 0, metadata !6, metadata !"sha256_update", metadata !"sha256_update", metadata !"", metadata !6, i32 89, metadata !36, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, void (%struct.SHA256_CTX.0*, i8*, i32)* @sha256_update, null, null, metadata !30, i32 90} ; [ DW_TAG_subprogram ]
!36 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !37, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!37 = metadata !{null, metadata !9, metadata !29, metadata !20}
!38 = metadata !{i32 786478, i32 0, metadata !6, metadata !"sha256_final", metadata !"sha256_final", metadata !"", metadata !6, i32 105, metadata !7, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, void (%struct.SHA256_CTX.0*, i8*)* @sha256_final, null, null, metadata !30, i32 106} ; [ DW_TAG_subprogram ]
!39 = metadata !{i32 786478, i32 0, metadata !40, metadata !"sha256", metadata !"sha256", metadata !"", metadata !40, i32 9, metadata !41, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, void (i8*, i32, i32, i8*)* @sha256, null, null, metadata !30, i32 12} ; [ DW_TAG_subprogram ]
!40 = metadata !{i32 786473, metadata !"sha256.c", metadata !"C:\5CStudent\5CSHA_new", null} ; [ DW_TAG_file_type ]
!41 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !42, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!42 = metadata !{null, metadata !29, metadata !20, metadata !20, metadata !29}
!43 = metadata !{metadata !44}
!44 = metadata !{metadata !45, metadata !47, metadata !50}
!45 = metadata !{i32 786484, i32 0, null, metadata !"k", metadata !"k", metadata !"", metadata !6, i32 18, metadata !46, i32 0, i32 1, [64 x i32]* @k} ; [ DW_TAG_variable ]
!46 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 2048, i64 32, i32 0, i32 0, metadata !20, metadata !17, i32 0, i32 0} ; [ DW_TAG_array_type ]
!47 = metadata !{i32 786484, i32 0, null, metadata !"_sys_nerr", metadata !"_sys_nerr", metadata !"", metadata !48, i32 157, metadata !49, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!48 = metadata !{i32 786473, metadata !"C:/Xilinx/Vivado_HLS/2017.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\5Cstdlib.h", metadata !"C:\5CStudent\5CSHA_new", null} ; [ DW_TAG_file_type ]
!49 = metadata !{i32 786468, null, metadata !"int", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!50 = metadata !{i32 786484, i32 0, null, metadata !"_amblksiz", metadata !"_amblksiz", metadata !"", metadata !51, i32 53, metadata !20, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!51 = metadata !{i32 786473, metadata !"C:/Xilinx/Vivado_HLS/2017.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\5Cmalloc.h", metadata !"C:\5CStudent\5CSHA_new", null} ; [ DW_TAG_file_type ]
!52 = metadata !{void (%struct.SHA256_CTX.0*, i8*)* @sha256_transform, metadata !53, metadata !54, metadata !55, metadata !56, metadata !57, metadata !58}
!53 = metadata !{metadata !"kernel_arg_addr_space", i32 1, i32 1}
!54 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none", metadata !"none"}
!55 = metadata !{metadata !"kernel_arg_type", metadata !"SHA256_CTX*", metadata !"uchar*"}
!56 = metadata !{metadata !"kernel_arg_type_qual", metadata !"", metadata !""}
!57 = metadata !{metadata !"kernel_arg_name", metadata !"ctx", metadata !"data"}
!58 = metadata !{metadata !"reqd_work_group_size", i32 1, i32 1, i32 1}
!59 = metadata !{void (%struct.SHA256_CTX.0*)* @sha256_init, metadata !60, metadata !61, metadata !62, metadata !63, metadata !64, metadata !58}
!60 = metadata !{metadata !"kernel_arg_addr_space", i32 1}
!61 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none"}
!62 = metadata !{metadata !"kernel_arg_type", metadata !"SHA256_CTX*"}
!63 = metadata !{metadata !"kernel_arg_type_qual", metadata !""}
!64 = metadata !{metadata !"kernel_arg_name", metadata !"ctx"}
!65 = metadata !{void (%struct.SHA256_CTX.0*, i8*, i32)* @sha256_update, metadata !66, metadata !67, metadata !68, metadata !69, metadata !70, metadata !58}
!66 = metadata !{metadata !"kernel_arg_addr_space", i32 1, i32 1, i32 0}
!67 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none", metadata !"none", metadata !"none"}
!68 = metadata !{metadata !"kernel_arg_type", metadata !"SHA256_CTX*", metadata !"uchar*", metadata !"uint"}
!69 = metadata !{metadata !"kernel_arg_type_qual", metadata !"", metadata !"", metadata !""}
!70 = metadata !{metadata !"kernel_arg_name", metadata !"ctx", metadata !"data", metadata !"len"}
!71 = metadata !{void (%struct.SHA256_CTX.0*, i8*)* @sha256_final, metadata !53, metadata !54, metadata !55, metadata !56, metadata !72, metadata !58}
!72 = metadata !{metadata !"kernel_arg_name", metadata !"ctx", metadata !"hash"}
!73 = metadata !{void (i8*, i32, i32, i8*)* @sha256, metadata !74, metadata !75, metadata !76, metadata !77, metadata !78, metadata !58}
!74 = metadata !{metadata !"kernel_arg_addr_space", i32 1, i32 0, i32 0, i32 1}
!75 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none", metadata !"none", metadata !"none", metadata !"none"}
!76 = metadata !{metadata !"kernel_arg_type", metadata !"uchar*", metadata !"uint", metadata !"uint", metadata !"uchar*"}
!77 = metadata !{metadata !"kernel_arg_type_qual", metadata !"", metadata !"", metadata !"", metadata !""}
!78 = metadata !{metadata !"kernel_arg_name", metadata !"data", metadata !"base_offset", metadata !"bytes", metadata !"digest"}
!79 = metadata !{i32 786689, metadata !35, metadata !"ctx", metadata !6, i32 16777305, metadata !9, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!80 = metadata !{i32 89, i32 32, metadata !35, null}
!81 = metadata !{i32 786689, metadata !35, metadata !"data", metadata !6, i32 33554521, metadata !29, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!82 = metadata !{i32 89, i32 67, metadata !35, null}
!83 = metadata !{i32 786689, metadata !35, metadata !"len", metadata !6, i32 50331737, metadata !20, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!84 = metadata !{i32 89, i32 105, metadata !35, null}
!85 = metadata !{i32 95, i32 2, metadata !86, null}
!86 = metadata !{i32 786443, metadata !87, i32 93, i32 28, metadata !6, i32 10} ; [ DW_TAG_lexical_block ]
!87 = metadata !{i32 786443, metadata !88, i32 93, i32 4, metadata !6, i32 9} ; [ DW_TAG_lexical_block ]
!88 = metadata !{i32 786443, metadata !35, i32 90, i32 1, metadata !6, i32 8} ; [ DW_TAG_lexical_block ]
!89 = metadata !{i32 98, i32 10, metadata !90, null}
!90 = metadata !{i32 786443, metadata !86, i32 97, i32 31, metadata !6, i32 11} ; [ DW_TAG_lexical_block ]
!91 = metadata !{i32 99, i32 10, metadata !90, null}
!92 = metadata !{i32 99, i32 51, metadata !90, null}
!93 = metadata !{i32 93, i32 9, metadata !87, null}
!94 = metadata !{i32 93, i32 29, metadata !86, null}
!95 = metadata !{i32 94, i32 1, metadata !86, null}
!96 = metadata !{i32 96, i32 7, metadata !86, null}
!97 = metadata !{i32 97, i32 7, metadata !86, null}
!98 = metadata !{i32 99, i32 69, metadata !90, null}
!99 = metadata !{i32 100, i32 10, metadata !90, null}
!100 = metadata !{i32 101, i32 7, metadata !90, null}
!101 = metadata !{i32 102, i32 4, metadata !86, null}
!102 = metadata !{i32 93, i32 23, metadata !87, null}
!103 = metadata !{i32 786688, metadata !88, metadata !"i", metadata !6, i32 91, metadata !20, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!104 = metadata !{i32 103, i32 1, metadata !88, null}
!105 = metadata !{i32 786689, metadata !5, metadata !"ctx", metadata !6, i32 16777246, metadata !9, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!106 = metadata !{i32 30, i32 35, metadata !5, null}
!107 = metadata !{i32 786689, metadata !5, metadata !"data", metadata !6, i32 33554462, metadata !29, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!108 = metadata !{i32 30, i32 70, metadata !5, null}
!109 = metadata !{i32 786688, metadata !110, metadata !"m", metadata !6, i32 32, metadata !46, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!110 = metadata !{i32 786443, metadata !5, i32 31, i32 1, metadata !6, i32 0} ; [ DW_TAG_lexical_block ]
!111 = metadata !{i32 32, i32 60, metadata !110, null}
!112 = metadata !{i32 34, i32 9, metadata !113, null}
!113 = metadata !{i32 786443, metadata !110, i32 34, i32 4, metadata !6, i32 1} ; [ DW_TAG_lexical_block ]
!114 = metadata !{i32 37, i32 4, metadata !115, null}
!115 = metadata !{i32 786443, metadata !110, i32 37, i32 4, metadata !6, i32 3} ; [ DW_TAG_lexical_block ]
!116 = metadata !{i32 36, i32 3, metadata !117, null}
!117 = metadata !{i32 786443, metadata !113, i32 36, i32 2, metadata !6, i32 2} ; [ DW_TAG_lexical_block ]
!118 = metadata !{i32 35, i32 1, metadata !117, null}
!119 = metadata !{i32 36, i32 2, metadata !117, null}
!120 = metadata !{i32 36, i32 76, metadata !117, null}
!121 = metadata !{i32 34, i32 26, metadata !113, null}
!122 = metadata !{i32 786688, metadata !110, metadata !"j", metadata !6, i32 32, metadata !20, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!123 = metadata !{i32 39, i32 3, metadata !124, null}
!124 = metadata !{i32 786443, metadata !115, i32 39, i32 2, metadata !6, i32 4} ; [ DW_TAG_lexical_block ]
!125 = metadata !{i32 38, i32 1, metadata !124, null}
!126 = metadata !{i32 39, i32 2, metadata !124, null}
!127 = metadata !{i32 39, i32 0, metadata !124, null}
!128 = metadata !{i32 37, i32 20, metadata !115, null}
!129 = metadata !{i32 786688, metadata !110, metadata !"i", metadata !6, i32 32, metadata !20, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!130 = metadata !{i32 41, i32 4, metadata !110, null}
!131 = metadata !{i32 786688, metadata !110, metadata !"a", metadata !6, i32 32, metadata !20, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!132 = metadata !{i32 42, i32 4, metadata !110, null}
!133 = metadata !{i32 786688, metadata !110, metadata !"b", metadata !6, i32 32, metadata !20, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!134 = metadata !{i32 43, i32 4, metadata !110, null}
!135 = metadata !{i32 786688, metadata !110, metadata !"c", metadata !6, i32 32, metadata !20, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!136 = metadata !{i32 44, i32 4, metadata !110, null}
!137 = metadata !{i32 786688, metadata !110, metadata !"d", metadata !6, i32 32, metadata !20, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!138 = metadata !{i32 45, i32 4, metadata !110, null}
!139 = metadata !{i32 786688, metadata !110, metadata !"e", metadata !6, i32 32, metadata !20, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!140 = metadata !{i32 46, i32 4, metadata !110, null}
!141 = metadata !{i32 786688, metadata !110, metadata !"f", metadata !6, i32 32, metadata !20, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!142 = metadata !{i32 47, i32 4, metadata !110, null}
!143 = metadata !{i32 786688, metadata !110, metadata !"g", metadata !6, i32 32, metadata !20, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!144 = metadata !{i32 48, i32 4, metadata !110, null}
!145 = metadata !{i32 786688, metadata !110, metadata !"h", metadata !6, i32 32, metadata !20, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!146 = metadata !{i32 50, i32 9, metadata !147, null}
!147 = metadata !{i32 786443, metadata !110, i32 50, i32 4, metadata !6, i32 5} ; [ DW_TAG_lexical_block ]
!148 = metadata !{i32 50, i32 30, metadata !149, null}
!149 = metadata !{i32 786443, metadata !147, i32 50, i32 29, metadata !6, i32 6} ; [ DW_TAG_lexical_block ]
!150 = metadata !{i32 51, i32 1, metadata !149, null}
!151 = metadata !{i32 52, i32 2, metadata !149, null}
!152 = metadata !{i32 786688, metadata !110, metadata !"t1", metadata !6, i32 32, metadata !20, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!153 = metadata !{i32 53, i32 7, metadata !149, null}
!154 = metadata !{i32 786688, metadata !110, metadata !"t2", metadata !6, i32 32, metadata !20, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!155 = metadata !{i32 54, i32 7, metadata !149, null}
!156 = metadata !{i32 55, i32 7, metadata !149, null}
!157 = metadata !{i32 56, i32 7, metadata !149, null}
!158 = metadata !{i32 57, i32 7, metadata !149, null}
!159 = metadata !{i32 58, i32 7, metadata !149, null}
!160 = metadata !{i32 59, i32 7, metadata !149, null}
!161 = metadata !{i32 60, i32 7, metadata !149, null}
!162 = metadata !{i32 61, i32 7, metadata !149, null}
!163 = metadata !{i32 62, i32 4, metadata !149, null}
!164 = metadata !{i32 50, i32 24, metadata !147, null}
!165 = metadata !{i32 64, i32 4, metadata !110, null}
!166 = metadata !{i32 65, i32 4, metadata !110, null}
!167 = metadata !{i32 66, i32 4, metadata !110, null}
!168 = metadata !{i32 67, i32 4, metadata !110, null}
!169 = metadata !{i32 68, i32 4, metadata !110, null}
!170 = metadata !{i32 69, i32 4, metadata !110, null}
!171 = metadata !{i32 70, i32 4, metadata !110, null}
!172 = metadata !{i32 71, i32 4, metadata !110, null}
!173 = metadata !{i32 72, i32 1, metadata !110, null}
!174 = metadata !{i32 786689, metadata !32, metadata !"ctx", metadata !6, i32 16777290, metadata !9, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!175 = metadata !{i32 74, i32 30, metadata !32, null}
!176 = metadata !{i32 76, i32 4, metadata !177, null}
!177 = metadata !{i32 786443, metadata !32, i32 75, i32 1, metadata !6, i32 7} ; [ DW_TAG_lexical_block ]
!178 = metadata !{i32 77, i32 4, metadata !177, null}
!179 = metadata !{i32 78, i32 4, metadata !177, null}
!180 = metadata !{i32 79, i32 4, metadata !177, null}
!181 = metadata !{i32 80, i32 4, metadata !177, null}
!182 = metadata !{i32 81, i32 4, metadata !177, null}
!183 = metadata !{i32 82, i32 4, metadata !177, null}
!184 = metadata !{i32 83, i32 4, metadata !177, null}
!185 = metadata !{i32 84, i32 4, metadata !177, null}
!186 = metadata !{i32 85, i32 4, metadata !177, null}
!187 = metadata !{i32 86, i32 4, metadata !177, null}
!188 = metadata !{i32 87, i32 1, metadata !177, null}
!189 = metadata !{i32 786689, metadata !38, metadata !"ctx", metadata !6, i32 16777321, metadata !9, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!190 = metadata !{i32 105, i32 31, metadata !38, null}
!191 = metadata !{i32 786689, metadata !38, metadata !"hash", metadata !6, i32 33554537, metadata !29, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!192 = metadata !{i32 105, i32 66, metadata !38, null}
!193 = metadata !{i32 109, i32 2, metadata !194, null}
!194 = metadata !{i32 786443, metadata !38, i32 106, i32 1, metadata !6, i32 12} ; [ DW_TAG_lexical_block ]
!195 = metadata !{i32 786688, metadata !194, metadata !"i", metadata !6, i32 107, metadata !20, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!196 = metadata !{i32 112, i32 2, metadata !194, null}
!197 = metadata !{i32 113, i32 3, metadata !198, null}
!198 = metadata !{i32 786443, metadata !194, i32 112, i32 25, metadata !6, i32 13} ; [ DW_TAG_lexical_block ]
!199 = metadata !{i32 114, i32 3, metadata !198, null}
!200 = metadata !{i32 115, i32 4, metadata !198, null}
!201 = metadata !{i32 118, i32 3, metadata !202, null}
!202 = metadata !{i32 786443, metadata !194, i32 117, i32 7, metadata !6, i32 14} ; [ DW_TAG_lexical_block ]
!203 = metadata !{i32 119, i32 3, metadata !202, null}
!204 = metadata !{i32 120, i32 4, metadata !202, null}
!205 = metadata !{i32 121, i32 3, metadata !202, null}
!206 = metadata !{i32 122, i32 8, metadata !207, null}
!207 = metadata !{i32 786443, metadata !202, i32 122, i32 3, metadata !6, i32 15} ; [ DW_TAG_lexical_block ]
!208 = metadata !{i32 122, i32 30, metadata !209, null}
!209 = metadata !{i32 786443, metadata !207, i32 122, i32 29, metadata !6, i32 16} ; [ DW_TAG_lexical_block ]
!210 = metadata !{i32 123, i32 1, metadata !209, null}
!211 = metadata !{i32 124, i32 2, metadata !209, null}
!212 = metadata !{i32 125, i32 3, metadata !209, null}
!213 = metadata !{i32 122, i32 23, metadata !207, null}
!214 = metadata !{i32 130, i32 4, metadata !194, null}
!215 = metadata !{i32 130, i32 58, metadata !194, null}
!216 = metadata !{i32 130, i32 76, metadata !194, null}
!217 = metadata !{i32 131, i32 4, metadata !194, null}
!218 = metadata !{i32 132, i32 4, metadata !194, null}
!219 = metadata !{i32 133, i32 4, metadata !194, null}
!220 = metadata !{i32 134, i32 4, metadata !194, null}
!221 = metadata !{i32 135, i32 4, metadata !194, null}
!222 = metadata !{i32 136, i32 4, metadata !194, null}
!223 = metadata !{i32 137, i32 4, metadata !194, null}
!224 = metadata !{i32 138, i32 4, metadata !194, null}
!225 = metadata !{i32 139, i32 4, metadata !194, null}
!226 = metadata !{i32 145, i32 2, metadata !227, null}
!227 = metadata !{i32 786443, metadata !228, i32 143, i32 26, metadata !6, i32 18} ; [ DW_TAG_lexical_block ]
!228 = metadata !{i32 786443, metadata !194, i32 143, i32 4, metadata !6, i32 17} ; [ DW_TAG_lexical_block ]
!229 = metadata !{i32 146, i32 7, metadata !227, null}
!230 = metadata !{i32 147, i32 7, metadata !227, null}
!231 = metadata !{i32 148, i32 7, metadata !227, null}
!232 = metadata !{i32 149, i32 7, metadata !227, null}
!233 = metadata !{i32 150, i32 7, metadata !227, null}
!234 = metadata !{i32 151, i32 7, metadata !227, null}
!235 = metadata !{i32 152, i32 7, metadata !227, null}
!236 = metadata !{i32 143, i32 9, metadata !228, null}
!237 = metadata !{i32 143, i32 27, metadata !227, null}
!238 = metadata !{i32 144, i32 1, metadata !227, null}
!239 = metadata !{i32 153, i32 4, metadata !227, null}
!240 = metadata !{i32 143, i32 21, metadata !228, null}
!241 = metadata !{i32 154, i32 1, metadata !194, null}
!242 = metadata !{i32 786689, metadata !39, metadata !"data", metadata !40, i32 16777225, metadata !29, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!243 = metadata !{i32 9, i32 28, metadata !39, null}
!244 = metadata !{i32 786689, metadata !39, metadata !"base_offset", metadata !40, i32 33554442, metadata !20, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!245 = metadata !{i32 10, i32 18, metadata !39, null}
!246 = metadata !{i32 786689, metadata !39, metadata !"bytes", metadata !40, i32 50331659, metadata !20, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!247 = metadata !{i32 11, i32 18, metadata !39, null}
!248 = metadata !{i32 786689, metadata !39, metadata !"digest", metadata !40, i32 67108876, metadata !29, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!249 = metadata !{i32 12, i32 19, metadata !39, null}
!250 = metadata !{i32 12, i32 81, metadata !251, null}
!251 = metadata !{i32 786443, metadata !39, i32 12, i32 80, metadata !40, i32 19} ; [ DW_TAG_lexical_block ]
!252 = metadata !{i32 12, i32 114, metadata !251, null}
!253 = metadata !{i32 16, i32 1, metadata !251, null}
!254 = metadata !{i32 17, i32 1, metadata !251, null}
!255 = metadata !{i32 18, i32 1, metadata !251, null}
!256 = metadata !{i32 19, i32 1, metadata !251, null}
!257 = metadata !{i32 20, i32 1, metadata !251, null}
!258 = metadata !{i32 786688, metadata !251, metadata !"seg_buf", metadata !40, i32 23, metadata !15, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!259 = metadata !{i32 23, i32 16, metadata !251, null}
!260 = metadata !{i32 786688, metadata !251, metadata !"n", metadata !40, i32 26, metadata !20, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!261 = metadata !{i32 26, i32 24, metadata !251, null}
!262 = metadata !{i32 786688, metadata !251, metadata !"sha256ctx", metadata !40, i32 29, metadata !10, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!263 = metadata !{i32 29, i32 13, metadata !251, null}
!264 = metadata !{i32 30, i32 2, metadata !251, null}
!265 = metadata !{i32 49, i32 4, metadata !266, null}
!266 = metadata !{i32 786443, metadata !267, i32 45, i32 3, metadata !40, i32 23} ; [ DW_TAG_lexical_block ]
!267 = metadata !{i32 786443, metadata !251, i32 34, i32 2, metadata !40, i32 20} ; [ DW_TAG_lexical_block ]
!268 = metadata !{i32 33, i32 2, metadata !251, null}
!269 = metadata !{i32 34, i32 3, metadata !267, null}
!270 = metadata !{i32 35, i32 1, metadata !267, null}
!271 = metadata !{i32 36, i32 2, metadata !267, null}
!272 = metadata !{i32 38, i32 9, metadata !273, null}
!273 = metadata !{i32 786443, metadata !274, i32 38, i32 4, metadata !40, i32 22} ; [ DW_TAG_lexical_block ]
!274 = metadata !{i32 786443, metadata !267, i32 37, i32 3, metadata !40, i32 21} ; [ DW_TAG_lexical_block ]
!275 = metadata !{i32 46, i32 9, metadata !276, null}
!276 = metadata !{i32 786443, metadata !266, i32 46, i32 4, metadata !40, i32 24} ; [ DW_TAG_lexical_block ]
!277 = metadata !{i32 39, i32 5, metadata !273, null}
!278 = metadata !{i32 38, i32 20, metadata !273, null}
!279 = metadata !{i32 786688, metadata !251, metadata !"i", metadata !40, i32 25, metadata !49, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!280 = metadata !{i32 40, i32 4, metadata !274, null}
!281 = metadata !{i32 41, i32 4, metadata !274, null}
!282 = metadata !{i32 786688, metadata !251, metadata !"seg_offset", metadata !40, i32 24, metadata !20, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!283 = metadata !{i32 42, i32 4, metadata !274, null}
!284 = metadata !{i32 43, i32 3, metadata !274, null}
!285 = metadata !{i32 48, i32 3, metadata !286, null}
!286 = metadata !{i32 786443, metadata !276, i32 48, i32 2, metadata !40, i32 25} ; [ DW_TAG_lexical_block ]
!287 = metadata !{i32 47, i32 1, metadata !286, null}
!288 = metadata !{i32 48, i32 2, metadata !286, null}
!289 = metadata !{i32 48, i32 50, metadata !286, null}
!290 = metadata !{i32 46, i32 19, metadata !276, null}
!291 = metadata !{i32 52, i32 2, metadata !267, null}
!292 = metadata !{i32 55, i32 2, metadata !251, null}
!293 = metadata !{i32 57, i32 7, metadata !294, null}
!294 = metadata !{i32 786443, metadata !251, i32 57, i32 2, metadata !40, i32 26} ; [ DW_TAG_lexical_block ]
!295 = metadata !{i32 57, i32 24, metadata !296, null}
!296 = metadata !{i32 786443, metadata !294, i32 57, i32 23, metadata !40, i32 27} ; [ DW_TAG_lexical_block ]
!297 = metadata !{i32 58, i32 1, metadata !296, null}
!298 = metadata !{i32 59, i32 1, metadata !296, null}
!299 = metadata !{i32 60, i32 2, metadata !296, null}
!300 = metadata !{i32 61, i32 2, metadata !296, null}
!301 = metadata !{i32 57, i32 18, metadata !294, null}
!302 = metadata !{i32 62, i32 1, metadata !251, null}
