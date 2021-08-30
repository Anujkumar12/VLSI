; ModuleID = 'C:/Student/SHA_new/sha/solution2/.autopilot/db/a.o.bc'
target datalayout = "e-p:32:32:32-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-f80:128:128-v64:64:64-v128:128:128-a0:0:64-f80:32:32-n8:16:32-S32"
target triple = "i686-pc-mingw32"

%struct.SHA256_CTX = type { [64 x i8], i32, [2 x i32], [8 x i32] }

@k = global [64 x i32] [i32 1116352408, i32 1899447441, i32 -1245643825, i32 -373957723, i32 961987163, i32 1508970993, i32 -1841331548, i32 -1424204075, i32 -670586216, i32 310598401, i32 607225278, i32 1426881987, i32 1925078388, i32 -2132889090, i32 -1680079193, i32 -1046744716, i32 -459576895, i32 -272742522, i32 264347078, i32 604807628, i32 770255983, i32 1249150122, i32 1555081692, i32 1996064986, i32 -1740746414, i32 -1473132947, i32 -1341970488, i32 -1084653625, i32 -958395405, i32 -710438585, i32 113926993, i32 338241895, i32 666307205, i32 773529912, i32 1294757372, i32 1396182291, i32 1695183700, i32 1986661051, i32 -2117940946, i32 -1838011259, i32 -1564481375, i32 -1474664885, i32 -1035236496, i32 -949202525, i32 -778901479, i32 -694614492, i32 -200395387, i32 275423344, i32 430227734, i32 506948616, i32 659060556, i32 883997877, i32 958139571, i32 1322822218, i32 1537002063, i32 1747873779, i32 1955562222, i32 2024104815, i32 -2067236844, i32 -1933114872, i32 -1866530822, i32 -1538233109, i32 -1090935817, i32 -965641998], align 4 ; [#uses=1 type=[64 x i32]*]
@.str = private unnamed_addr constant [12 x i8] c"hls_label_1\00", align 1 ; [#uses=1 type=[12 x i8]*]
@.str1 = private unnamed_addr constant [1 x i8] zeroinitializer, align 1 ; [#uses=1 type=[1 x i8]*]
@.str2 = private unnamed_addr constant [12 x i8] c"hls_label_2\00", align 1 ; [#uses=1 type=[12 x i8]*]
@.str3 = private unnamed_addr constant [12 x i8] c"hls_label_0\00", align 1 ; [#uses=1 type=[12 x i8]*]
@.str4 = private unnamed_addr constant [12 x i8] c"hls_label_3\00", align 1 ; [#uses=1 type=[12 x i8]*]
@.str5 = private unnamed_addr constant [12 x i8] c"hls_label_5\00", align 1 ; [#uses=1 type=[12 x i8]*]
@.str6 = private unnamed_addr constant [12 x i8] c"hls_label_4\00", align 1 ; [#uses=1 type=[12 x i8]*]
@.str7 = private unnamed_addr constant [10 x i8] c"s_axilite\00", align 1 ; [#uses=1 type=[10 x i8]*]
@.str8 = private unnamed_addr constant [12 x i8] c"hls_label_8\00", align 1 ; [#uses=1 type=[12 x i8]*]
@.str9 = private unnamed_addr constant [12 x i8] c"hls_label_7\00", align 1 ; [#uses=1 type=[12 x i8]*]
@.str10 = private unnamed_addr constant [12 x i8] c"hls_label_6\00", align 1 ; [#uses=1 type=[12 x i8]*]
@_sys_nerr = dllimport global i32                 ; [#uses=0 type=i32*]
@_amblksiz = external global i32                  ; [#uses=0 type=i32*]

; [#uses=3]
define void @sha256_transform(%struct.SHA256_CTX* %ctx, i8* %data) nounwind {
  %1 = alloca %struct.SHA256_CTX*, align 4        ; [#uses=17 type=%struct.SHA256_CTX**]
  %2 = alloca i8*, align 4                        ; [#uses=5 type=i8**]
  %a = alloca i32, align 4                        ; [#uses=12 type=i32*]
  %b = alloca i32, align 4                        ; [#uses=6 type=i32*]
  %c = alloca i32, align 4                        ; [#uses=6 type=i32*]
  %d = alloca i32, align 4                        ; [#uses=4 type=i32*]
  %e = alloca i32, align 4                        ; [#uses=12 type=i32*]
  %f = alloca i32, align 4                        ; [#uses=5 type=i32*]
  %g = alloca i32, align 4                        ; [#uses=5 type=i32*]
  %h = alloca i32, align 4                        ; [#uses=4 type=i32*]
  %i = alloca i32, align 4                        ; [#uses=27 type=i32*]
  %j = alloca i32, align 4                        ; [#uses=7 type=i32*]
  %t1 = alloca i32, align 4                       ; [#uses=3 type=i32*]
  %t2 = alloca i32, align 4                       ; [#uses=2 type=i32*]
  %m = alloca [64 x i32], align 4                 ; [#uses=15 type=[64 x i32]*]
  store %struct.SHA256_CTX* %ctx, %struct.SHA256_CTX** %1, align 4
  call void @llvm.dbg.declare(metadata !{%struct.SHA256_CTX** %1}, metadata !79), !dbg !80 ; [debug line = 30:35] [debug variable = ctx]
  store i8* %data, i8** %2, align 4
  call void @llvm.dbg.declare(metadata !{i8** %2}, metadata !81), !dbg !82 ; [debug line = 30:70] [debug variable = data]
  call void @llvm.dbg.declare(metadata !{i32* %a}, metadata !83), !dbg !85 ; [debug line = 32:34] [debug variable = a]
  call void @llvm.dbg.declare(metadata !{i32* %b}, metadata !86), !dbg !87 ; [debug line = 32:36] [debug variable = b]
  call void @llvm.dbg.declare(metadata !{i32* %c}, metadata !88), !dbg !89 ; [debug line = 32:38] [debug variable = c]
  call void @llvm.dbg.declare(metadata !{i32* %d}, metadata !90), !dbg !91 ; [debug line = 32:40] [debug variable = d]
  call void @llvm.dbg.declare(metadata !{i32* %e}, metadata !92), !dbg !93 ; [debug line = 32:42] [debug variable = e]
  call void @llvm.dbg.declare(metadata !{i32* %f}, metadata !94), !dbg !95 ; [debug line = 32:44] [debug variable = f]
  call void @llvm.dbg.declare(metadata !{i32* %g}, metadata !96), !dbg !97 ; [debug line = 32:46] [debug variable = g]
  call void @llvm.dbg.declare(metadata !{i32* %h}, metadata !98), !dbg !99 ; [debug line = 32:48] [debug variable = h]
  call void @llvm.dbg.declare(metadata !{i32* %i}, metadata !100), !dbg !101 ; [debug line = 32:50] [debug variable = i]
  call void @llvm.dbg.declare(metadata !{i32* %j}, metadata !102), !dbg !103 ; [debug line = 32:52] [debug variable = j]
  call void @llvm.dbg.declare(metadata !{i32* %t1}, metadata !104), !dbg !105 ; [debug line = 32:54] [debug variable = t1]
  call void @llvm.dbg.declare(metadata !{i32* %t2}, metadata !106), !dbg !107 ; [debug line = 32:57] [debug variable = t2]
  call void @llvm.dbg.declare(metadata !{[64 x i32]* %m}, metadata !108), !dbg !109 ; [debug line = 32:60] [debug variable = m]
  store i32 0, i32* %i, align 4, !dbg !110        ; [debug line = 34:9]
  store i32 0, i32* %j, align 4, !dbg !110        ; [debug line = 34:9]
  br label %3, !dbg !110                          ; [debug line = 34:9]

; <label>:3                                       ; preds = %38, %0
  %4 = load i32* %i, align 4, !dbg !110           ; [#uses=1 type=i32] [debug line = 34:9]
  %5 = icmp ult i32 %4, 16, !dbg !110             ; [#uses=1 type=i1] [debug line = 34:9]
  br i1 %5, label %6, label %43, !dbg !110        ; [debug line = 34:9]

; <label>:6                                       ; preds = %3
  call void bitcast (void (...)* @_ssdm_RegionBegin to void (i8*)*)(i8* getelementptr inbounds ([12 x i8]* @.str, i32 0, i32 0)) nounwind, !dbg !112 ; [debug line = 36:3]
  call void bitcast (void (...)* @_ssdm_op_SpecLoopTripCount to void (i32, i32, i32, i8*)*)(i32 12, i32 100, i32 56, i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0)) nounwind, !dbg !114 ; [debug line = 35:1]
  %7 = load i32* %j, align 4, !dbg !115           ; [#uses=1 type=i32] [debug line = 36:2]
  %8 = load i8** %2, align 4, !dbg !115           ; [#uses=1 type=i8*] [debug line = 36:2]
  %9 = getelementptr inbounds i8* %8, i32 %7, !dbg !115 ; [#uses=1 type=i8*] [debug line = 36:2]
  %10 = load i8* %9, align 1, !dbg !115           ; [#uses=1 type=i8] [debug line = 36:2]
  %11 = zext i8 %10 to i32, !dbg !115             ; [#uses=1 type=i32] [debug line = 36:2]
  %12 = shl i32 %11, 24, !dbg !115                ; [#uses=1 type=i32] [debug line = 36:2]
  %13 = load i32* %j, align 4, !dbg !115          ; [#uses=1 type=i32] [debug line = 36:2]
  %14 = add i32 %13, 1, !dbg !115                 ; [#uses=1 type=i32] [debug line = 36:2]
  %15 = load i8** %2, align 4, !dbg !115          ; [#uses=1 type=i8*] [debug line = 36:2]
  %16 = getelementptr inbounds i8* %15, i32 %14, !dbg !115 ; [#uses=1 type=i8*] [debug line = 36:2]
  %17 = load i8* %16, align 1, !dbg !115          ; [#uses=1 type=i8] [debug line = 36:2]
  %18 = zext i8 %17 to i32, !dbg !115             ; [#uses=1 type=i32] [debug line = 36:2]
  %19 = shl i32 %18, 16, !dbg !115                ; [#uses=1 type=i32] [debug line = 36:2]
  %20 = or i32 %12, %19, !dbg !115                ; [#uses=1 type=i32] [debug line = 36:2]
  %21 = load i32* %j, align 4, !dbg !115          ; [#uses=1 type=i32] [debug line = 36:2]
  %22 = add i32 %21, 2, !dbg !115                 ; [#uses=1 type=i32] [debug line = 36:2]
  %23 = load i8** %2, align 4, !dbg !115          ; [#uses=1 type=i8*] [debug line = 36:2]
  %24 = getelementptr inbounds i8* %23, i32 %22, !dbg !115 ; [#uses=1 type=i8*] [debug line = 36:2]
  %25 = load i8* %24, align 1, !dbg !115          ; [#uses=1 type=i8] [debug line = 36:2]
  %26 = zext i8 %25 to i32, !dbg !115             ; [#uses=1 type=i32] [debug line = 36:2]
  %27 = shl i32 %26, 8, !dbg !115                 ; [#uses=1 type=i32] [debug line = 36:2]
  %28 = or i32 %20, %27, !dbg !115                ; [#uses=1 type=i32] [debug line = 36:2]
  %29 = load i32* %j, align 4, !dbg !115          ; [#uses=1 type=i32] [debug line = 36:2]
  %30 = add i32 %29, 3, !dbg !115                 ; [#uses=1 type=i32] [debug line = 36:2]
  %31 = load i8** %2, align 4, !dbg !115          ; [#uses=1 type=i8*] [debug line = 36:2]
  %32 = getelementptr inbounds i8* %31, i32 %30, !dbg !115 ; [#uses=1 type=i8*] [debug line = 36:2]
  %33 = load i8* %32, align 1, !dbg !115          ; [#uses=1 type=i8] [debug line = 36:2]
  %34 = zext i8 %33 to i32, !dbg !115             ; [#uses=1 type=i32] [debug line = 36:2]
  %35 = or i32 %28, %34, !dbg !115                ; [#uses=1 type=i32] [debug line = 36:2]
  %36 = load i32* %i, align 4, !dbg !115          ; [#uses=1 type=i32] [debug line = 36:2]
  %37 = getelementptr inbounds [64 x i32]* %m, i32 0, i32 %36, !dbg !115 ; [#uses=1 type=i32*] [debug line = 36:2]
  store i32 %35, i32* %37, align 4, !dbg !115     ; [debug line = 36:2]
  call void bitcast (void (...)* @_ssdm_RegionEnd to void (i8*)*)(i8* getelementptr inbounds ([12 x i8]* @.str, i32 0, i32 0)) nounwind, !dbg !116 ; [debug line = 36:76]
  br label %38, !dbg !116                         ; [debug line = 36:76]

; <label>:38                                      ; preds = %6
  %39 = load i32* %i, align 4, !dbg !117          ; [#uses=1 type=i32] [debug line = 34:26]
  %40 = add i32 %39, 1, !dbg !117                 ; [#uses=1 type=i32] [debug line = 34:26]
  store i32 %40, i32* %i, align 4, !dbg !117      ; [debug line = 34:26]
  %41 = load i32* %j, align 4, !dbg !117          ; [#uses=1 type=i32] [debug line = 34:26]
  %42 = add i32 %41, 4, !dbg !117                 ; [#uses=1 type=i32] [debug line = 34:26]
  store i32 %42, i32* %j, align 4, !dbg !117      ; [debug line = 34:26]
  br label %3, !dbg !117                          ; [debug line = 34:26]

; <label>:43                                      ; preds = %3
  br label %44, !dbg !118                         ; [debug line = 37:4]

; <label>:44                                      ; preds = %119, %43
  %45 = load i32* %i, align 4, !dbg !118          ; [#uses=1 type=i32] [debug line = 37:4]
  %46 = icmp ult i32 %45, 64, !dbg !118           ; [#uses=1 type=i1] [debug line = 37:4]
  br i1 %46, label %47, label %122, !dbg !118     ; [debug line = 37:4]

; <label>:47                                      ; preds = %44
  call void bitcast (void (...)* @_ssdm_RegionBegin to void (i8*)*)(i8* getelementptr inbounds ([12 x i8]* @.str2, i32 0, i32 0)) nounwind, !dbg !120 ; [debug line = 39:3]
  call void bitcast (void (...)* @_ssdm_op_SpecLoopTripCount to void (i32, i32, i32, i8*)*)(i32 12, i32 100, i32 56, i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0)) nounwind, !dbg !122 ; [debug line = 38:1]
  %48 = load i32* %i, align 4, !dbg !123          ; [#uses=1 type=i32] [debug line = 39:2]
  %49 = sub i32 %48, 2, !dbg !123                 ; [#uses=1 type=i32] [debug line = 39:2]
  %50 = getelementptr inbounds [64 x i32]* %m, i32 0, i32 %49, !dbg !123 ; [#uses=1 type=i32*] [debug line = 39:2]
  %51 = load i32* %50, align 4, !dbg !123         ; [#uses=1 type=i32] [debug line = 39:2]
  %52 = lshr i32 %51, 17, !dbg !123               ; [#uses=1 type=i32] [debug line = 39:2]
  %53 = load i32* %i, align 4, !dbg !123          ; [#uses=1 type=i32] [debug line = 39:2]
  %54 = sub i32 %53, 2, !dbg !123                 ; [#uses=1 type=i32] [debug line = 39:2]
  %55 = getelementptr inbounds [64 x i32]* %m, i32 0, i32 %54, !dbg !123 ; [#uses=1 type=i32*] [debug line = 39:2]
  %56 = load i32* %55, align 4, !dbg !123         ; [#uses=1 type=i32] [debug line = 39:2]
  %57 = shl i32 %56, 15, !dbg !123                ; [#uses=1 type=i32] [debug line = 39:2]
  %58 = or i32 %52, %57, !dbg !123                ; [#uses=1 type=i32] [debug line = 39:2]
  %59 = load i32* %i, align 4, !dbg !123          ; [#uses=1 type=i32] [debug line = 39:2]
  %60 = sub i32 %59, 2, !dbg !123                 ; [#uses=1 type=i32] [debug line = 39:2]
  %61 = getelementptr inbounds [64 x i32]* %m, i32 0, i32 %60, !dbg !123 ; [#uses=1 type=i32*] [debug line = 39:2]
  %62 = load i32* %61, align 4, !dbg !123         ; [#uses=1 type=i32] [debug line = 39:2]
  %63 = lshr i32 %62, 19, !dbg !123               ; [#uses=1 type=i32] [debug line = 39:2]
  %64 = load i32* %i, align 4, !dbg !123          ; [#uses=1 type=i32] [debug line = 39:2]
  %65 = sub i32 %64, 2, !dbg !123                 ; [#uses=1 type=i32] [debug line = 39:2]
  %66 = getelementptr inbounds [64 x i32]* %m, i32 0, i32 %65, !dbg !123 ; [#uses=1 type=i32*] [debug line = 39:2]
  %67 = load i32* %66, align 4, !dbg !123         ; [#uses=1 type=i32] [debug line = 39:2]
  %68 = shl i32 %67, 13, !dbg !123                ; [#uses=1 type=i32] [debug line = 39:2]
  %69 = or i32 %63, %68, !dbg !123                ; [#uses=1 type=i32] [debug line = 39:2]
  %70 = xor i32 %58, %69, !dbg !123               ; [#uses=1 type=i32] [debug line = 39:2]
  %71 = load i32* %i, align 4, !dbg !123          ; [#uses=1 type=i32] [debug line = 39:2]
  %72 = sub i32 %71, 2, !dbg !123                 ; [#uses=1 type=i32] [debug line = 39:2]
  %73 = getelementptr inbounds [64 x i32]* %m, i32 0, i32 %72, !dbg !123 ; [#uses=1 type=i32*] [debug line = 39:2]
  %74 = load i32* %73, align 4, !dbg !123         ; [#uses=1 type=i32] [debug line = 39:2]
  %75 = lshr i32 %74, 10, !dbg !123               ; [#uses=1 type=i32] [debug line = 39:2]
  %76 = xor i32 %70, %75, !dbg !123               ; [#uses=1 type=i32] [debug line = 39:2]
  %77 = load i32* %i, align 4, !dbg !123          ; [#uses=1 type=i32] [debug line = 39:2]
  %78 = sub i32 %77, 7, !dbg !123                 ; [#uses=1 type=i32] [debug line = 39:2]
  %79 = getelementptr inbounds [64 x i32]* %m, i32 0, i32 %78, !dbg !123 ; [#uses=1 type=i32*] [debug line = 39:2]
  %80 = load i32* %79, align 4, !dbg !123         ; [#uses=1 type=i32] [debug line = 39:2]
  %81 = add i32 %76, %80, !dbg !123               ; [#uses=1 type=i32] [debug line = 39:2]
  %82 = load i32* %i, align 4, !dbg !123          ; [#uses=1 type=i32] [debug line = 39:2]
  %83 = sub i32 %82, 15, !dbg !123                ; [#uses=1 type=i32] [debug line = 39:2]
  %84 = getelementptr inbounds [64 x i32]* %m, i32 0, i32 %83, !dbg !123 ; [#uses=1 type=i32*] [debug line = 39:2]
  %85 = load i32* %84, align 4, !dbg !123         ; [#uses=1 type=i32] [debug line = 39:2]
  %86 = lshr i32 %85, 7, !dbg !123                ; [#uses=1 type=i32] [debug line = 39:2]
  %87 = load i32* %i, align 4, !dbg !123          ; [#uses=1 type=i32] [debug line = 39:2]
  %88 = sub i32 %87, 15, !dbg !123                ; [#uses=1 type=i32] [debug line = 39:2]
  %89 = getelementptr inbounds [64 x i32]* %m, i32 0, i32 %88, !dbg !123 ; [#uses=1 type=i32*] [debug line = 39:2]
  %90 = load i32* %89, align 4, !dbg !123         ; [#uses=1 type=i32] [debug line = 39:2]
  %91 = shl i32 %90, 25, !dbg !123                ; [#uses=1 type=i32] [debug line = 39:2]
  %92 = or i32 %86, %91, !dbg !123                ; [#uses=1 type=i32] [debug line = 39:2]
  %93 = load i32* %i, align 4, !dbg !123          ; [#uses=1 type=i32] [debug line = 39:2]
  %94 = sub i32 %93, 15, !dbg !123                ; [#uses=1 type=i32] [debug line = 39:2]
  %95 = getelementptr inbounds [64 x i32]* %m, i32 0, i32 %94, !dbg !123 ; [#uses=1 type=i32*] [debug line = 39:2]
  %96 = load i32* %95, align 4, !dbg !123         ; [#uses=1 type=i32] [debug line = 39:2]
  %97 = lshr i32 %96, 18, !dbg !123               ; [#uses=1 type=i32] [debug line = 39:2]
  %98 = load i32* %i, align 4, !dbg !123          ; [#uses=1 type=i32] [debug line = 39:2]
  %99 = sub i32 %98, 15, !dbg !123                ; [#uses=1 type=i32] [debug line = 39:2]
  %100 = getelementptr inbounds [64 x i32]* %m, i32 0, i32 %99, !dbg !123 ; [#uses=1 type=i32*] [debug line = 39:2]
  %101 = load i32* %100, align 4, !dbg !123       ; [#uses=1 type=i32] [debug line = 39:2]
  %102 = shl i32 %101, 14, !dbg !123              ; [#uses=1 type=i32] [debug line = 39:2]
  %103 = or i32 %97, %102, !dbg !123              ; [#uses=1 type=i32] [debug line = 39:2]
  %104 = xor i32 %92, %103, !dbg !123             ; [#uses=1 type=i32] [debug line = 39:2]
  %105 = load i32* %i, align 4, !dbg !123         ; [#uses=1 type=i32] [debug line = 39:2]
  %106 = sub i32 %105, 15, !dbg !123              ; [#uses=1 type=i32] [debug line = 39:2]
  %107 = getelementptr inbounds [64 x i32]* %m, i32 0, i32 %106, !dbg !123 ; [#uses=1 type=i32*] [debug line = 39:2]
  %108 = load i32* %107, align 4, !dbg !123       ; [#uses=1 type=i32] [debug line = 39:2]
  %109 = lshr i32 %108, 3, !dbg !123              ; [#uses=1 type=i32] [debug line = 39:2]
  %110 = xor i32 %104, %109, !dbg !123            ; [#uses=1 type=i32] [debug line = 39:2]
  %111 = add i32 %81, %110, !dbg !123             ; [#uses=1 type=i32] [debug line = 39:2]
  %112 = load i32* %i, align 4, !dbg !123         ; [#uses=1 type=i32] [debug line = 39:2]
  %113 = sub i32 %112, 16, !dbg !123              ; [#uses=1 type=i32] [debug line = 39:2]
  %114 = getelementptr inbounds [64 x i32]* %m, i32 0, i32 %113, !dbg !123 ; [#uses=1 type=i32*] [debug line = 39:2]
  %115 = load i32* %114, align 4, !dbg !123       ; [#uses=1 type=i32] [debug line = 39:2]
  %116 = add i32 %111, %115, !dbg !123            ; [#uses=1 type=i32] [debug line = 39:2]
  %117 = load i32* %i, align 4, !dbg !123         ; [#uses=1 type=i32] [debug line = 39:2]
  %118 = getelementptr inbounds [64 x i32]* %m, i32 0, i32 %117, !dbg !123 ; [#uses=1 type=i32*] [debug line = 39:2]
  store i32 %116, i32* %118, align 4, !dbg !123   ; [debug line = 39:2]
  call void bitcast (void (...)* @_ssdm_RegionEnd to void (i8*)*)(i8* getelementptr inbounds ([12 x i8]* @.str2, i32 0, i32 0)) nounwind, !dbg !124 ; [debug line = 39:0]
  br label %119, !dbg !124                        ; [debug line = 39:0]

; <label>:119                                     ; preds = %47
  %120 = load i32* %i, align 4, !dbg !125         ; [#uses=1 type=i32] [debug line = 37:20]
  %121 = add i32 %120, 1, !dbg !125               ; [#uses=1 type=i32] [debug line = 37:20]
  store i32 %121, i32* %i, align 4, !dbg !125     ; [debug line = 37:20]
  br label %44, !dbg !125                         ; [debug line = 37:20]

; <label>:122                                     ; preds = %44
  %123 = load %struct.SHA256_CTX** %1, align 4, !dbg !126 ; [#uses=1 type=%struct.SHA256_CTX*] [debug line = 41:4]
  %124 = getelementptr inbounds %struct.SHA256_CTX* %123, i32 0, i32 3, !dbg !126 ; [#uses=1 type=[8 x i32]*] [debug line = 41:4]
  %125 = getelementptr inbounds [8 x i32]* %124, i32 0, i32 0, !dbg !126 ; [#uses=1 type=i32*] [debug line = 41:4]
  %126 = load i32* %125, align 4, !dbg !126       ; [#uses=1 type=i32] [debug line = 41:4]
  store i32 %126, i32* %a, align 4, !dbg !126     ; [debug line = 41:4]
  %127 = load %struct.SHA256_CTX** %1, align 4, !dbg !127 ; [#uses=1 type=%struct.SHA256_CTX*] [debug line = 42:4]
  %128 = getelementptr inbounds %struct.SHA256_CTX* %127, i32 0, i32 3, !dbg !127 ; [#uses=1 type=[8 x i32]*] [debug line = 42:4]
  %129 = getelementptr inbounds [8 x i32]* %128, i32 0, i32 1, !dbg !127 ; [#uses=1 type=i32*] [debug line = 42:4]
  %130 = load i32* %129, align 4, !dbg !127       ; [#uses=1 type=i32] [debug line = 42:4]
  store i32 %130, i32* %b, align 4, !dbg !127     ; [debug line = 42:4]
  %131 = load %struct.SHA256_CTX** %1, align 4, !dbg !128 ; [#uses=1 type=%struct.SHA256_CTX*] [debug line = 43:4]
  %132 = getelementptr inbounds %struct.SHA256_CTX* %131, i32 0, i32 3, !dbg !128 ; [#uses=1 type=[8 x i32]*] [debug line = 43:4]
  %133 = getelementptr inbounds [8 x i32]* %132, i32 0, i32 2, !dbg !128 ; [#uses=1 type=i32*] [debug line = 43:4]
  %134 = load i32* %133, align 4, !dbg !128       ; [#uses=1 type=i32] [debug line = 43:4]
  store i32 %134, i32* %c, align 4, !dbg !128     ; [debug line = 43:4]
  %135 = load %struct.SHA256_CTX** %1, align 4, !dbg !129 ; [#uses=1 type=%struct.SHA256_CTX*] [debug line = 44:4]
  %136 = getelementptr inbounds %struct.SHA256_CTX* %135, i32 0, i32 3, !dbg !129 ; [#uses=1 type=[8 x i32]*] [debug line = 44:4]
  %137 = getelementptr inbounds [8 x i32]* %136, i32 0, i32 3, !dbg !129 ; [#uses=1 type=i32*] [debug line = 44:4]
  %138 = load i32* %137, align 4, !dbg !129       ; [#uses=1 type=i32] [debug line = 44:4]
  store i32 %138, i32* %d, align 4, !dbg !129     ; [debug line = 44:4]
  %139 = load %struct.SHA256_CTX** %1, align 4, !dbg !130 ; [#uses=1 type=%struct.SHA256_CTX*] [debug line = 45:4]
  %140 = getelementptr inbounds %struct.SHA256_CTX* %139, i32 0, i32 3, !dbg !130 ; [#uses=1 type=[8 x i32]*] [debug line = 45:4]
  %141 = getelementptr inbounds [8 x i32]* %140, i32 0, i32 4, !dbg !130 ; [#uses=1 type=i32*] [debug line = 45:4]
  %142 = load i32* %141, align 4, !dbg !130       ; [#uses=1 type=i32] [debug line = 45:4]
  store i32 %142, i32* %e, align 4, !dbg !130     ; [debug line = 45:4]
  %143 = load %struct.SHA256_CTX** %1, align 4, !dbg !131 ; [#uses=1 type=%struct.SHA256_CTX*] [debug line = 46:4]
  %144 = getelementptr inbounds %struct.SHA256_CTX* %143, i32 0, i32 3, !dbg !131 ; [#uses=1 type=[8 x i32]*] [debug line = 46:4]
  %145 = getelementptr inbounds [8 x i32]* %144, i32 0, i32 5, !dbg !131 ; [#uses=1 type=i32*] [debug line = 46:4]
  %146 = load i32* %145, align 4, !dbg !131       ; [#uses=1 type=i32] [debug line = 46:4]
  store i32 %146, i32* %f, align 4, !dbg !131     ; [debug line = 46:4]
  %147 = load %struct.SHA256_CTX** %1, align 4, !dbg !132 ; [#uses=1 type=%struct.SHA256_CTX*] [debug line = 47:4]
  %148 = getelementptr inbounds %struct.SHA256_CTX* %147, i32 0, i32 3, !dbg !132 ; [#uses=1 type=[8 x i32]*] [debug line = 47:4]
  %149 = getelementptr inbounds [8 x i32]* %148, i32 0, i32 6, !dbg !132 ; [#uses=1 type=i32*] [debug line = 47:4]
  %150 = load i32* %149, align 4, !dbg !132       ; [#uses=1 type=i32] [debug line = 47:4]
  store i32 %150, i32* %g, align 4, !dbg !132     ; [debug line = 47:4]
  %151 = load %struct.SHA256_CTX** %1, align 4, !dbg !133 ; [#uses=1 type=%struct.SHA256_CTX*] [debug line = 48:4]
  %152 = getelementptr inbounds %struct.SHA256_CTX* %151, i32 0, i32 3, !dbg !133 ; [#uses=1 type=[8 x i32]*] [debug line = 48:4]
  %153 = getelementptr inbounds [8 x i32]* %152, i32 0, i32 7, !dbg !133 ; [#uses=1 type=i32*] [debug line = 48:4]
  %154 = load i32* %153, align 4, !dbg !133       ; [#uses=1 type=i32] [debug line = 48:4]
  store i32 %154, i32* %h, align 4, !dbg !133     ; [debug line = 48:4]
  store i32 0, i32* %i, align 4, !dbg !134        ; [debug line = 50:9]
  br label %155, !dbg !134                        ; [debug line = 50:9]

; <label>:155                                     ; preds = %236, %122
  %156 = load i32* %i, align 4, !dbg !134         ; [#uses=1 type=i32] [debug line = 50:9]
  %157 = icmp ult i32 %156, 64, !dbg !134         ; [#uses=1 type=i1] [debug line = 50:9]
  br i1 %157, label %158, label %239, !dbg !134   ; [debug line = 50:9]

; <label>:158                                     ; preds = %155
  call void bitcast (void (...)* @_ssdm_RegionBegin to void (i8*)*)(i8* getelementptr inbounds ([12 x i8]* @.str3, i32 0, i32 0)) nounwind, !dbg !136 ; [debug line = 50:30]
  call void bitcast (void (...)* @_ssdm_op_SpecLoopTripCount to void (i32, i32, i32, i8*)*)(i32 12, i32 100, i32 56, i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0)) nounwind, !dbg !138 ; [debug line = 51:1]
  %159 = load i32* %h, align 4, !dbg !139         ; [#uses=1 type=i32] [debug line = 52:2]
  %160 = load i32* %e, align 4, !dbg !139         ; [#uses=1 type=i32] [debug line = 52:2]
  %161 = lshr i32 %160, 6, !dbg !139              ; [#uses=1 type=i32] [debug line = 52:2]
  %162 = load i32* %e, align 4, !dbg !139         ; [#uses=1 type=i32] [debug line = 52:2]
  %163 = shl i32 %162, 26, !dbg !139              ; [#uses=1 type=i32] [debug line = 52:2]
  %164 = or i32 %161, %163, !dbg !139             ; [#uses=1 type=i32] [debug line = 52:2]
  %165 = load i32* %e, align 4, !dbg !139         ; [#uses=1 type=i32] [debug line = 52:2]
  %166 = lshr i32 %165, 11, !dbg !139             ; [#uses=1 type=i32] [debug line = 52:2]
  %167 = load i32* %e, align 4, !dbg !139         ; [#uses=1 type=i32] [debug line = 52:2]
  %168 = shl i32 %167, 21, !dbg !139              ; [#uses=1 type=i32] [debug line = 52:2]
  %169 = or i32 %166, %168, !dbg !139             ; [#uses=1 type=i32] [debug line = 52:2]
  %170 = xor i32 %164, %169, !dbg !139            ; [#uses=1 type=i32] [debug line = 52:2]
  %171 = load i32* %e, align 4, !dbg !139         ; [#uses=1 type=i32] [debug line = 52:2]
  %172 = lshr i32 %171, 25, !dbg !139             ; [#uses=1 type=i32] [debug line = 52:2]
  %173 = load i32* %e, align 4, !dbg !139         ; [#uses=1 type=i32] [debug line = 52:2]
  %174 = shl i32 %173, 7, !dbg !139               ; [#uses=1 type=i32] [debug line = 52:2]
  %175 = or i32 %172, %174, !dbg !139             ; [#uses=1 type=i32] [debug line = 52:2]
  %176 = xor i32 %170, %175, !dbg !139            ; [#uses=1 type=i32] [debug line = 52:2]
  %177 = add i32 %159, %176, !dbg !139            ; [#uses=1 type=i32] [debug line = 52:2]
  %178 = load i32* %e, align 4, !dbg !139         ; [#uses=1 type=i32] [debug line = 52:2]
  %179 = load i32* %f, align 4, !dbg !139         ; [#uses=1 type=i32] [debug line = 52:2]
  %180 = and i32 %178, %179, !dbg !139            ; [#uses=1 type=i32] [debug line = 52:2]
  %181 = load i32* %e, align 4, !dbg !139         ; [#uses=1 type=i32] [debug line = 52:2]
  %182 = xor i32 %181, -1, !dbg !139              ; [#uses=1 type=i32] [debug line = 52:2]
  %183 = load i32* %g, align 4, !dbg !139         ; [#uses=1 type=i32] [debug line = 52:2]
  %184 = and i32 %182, %183, !dbg !139            ; [#uses=1 type=i32] [debug line = 52:2]
  %185 = xor i32 %180, %184, !dbg !139            ; [#uses=1 type=i32] [debug line = 52:2]
  %186 = add i32 %177, %185, !dbg !139            ; [#uses=1 type=i32] [debug line = 52:2]
  %187 = load i32* %i, align 4, !dbg !139         ; [#uses=1 type=i32] [debug line = 52:2]
  %188 = getelementptr inbounds [64 x i32]* @k, i32 0, i32 %187, !dbg !139 ; [#uses=1 type=i32*] [debug line = 52:2]
  %189 = load i32* %188, align 4, !dbg !139       ; [#uses=1 type=i32] [debug line = 52:2]
  %190 = add i32 %186, %189, !dbg !139            ; [#uses=1 type=i32] [debug line = 52:2]
  %191 = load i32* %i, align 4, !dbg !139         ; [#uses=1 type=i32] [debug line = 52:2]
  %192 = getelementptr inbounds [64 x i32]* %m, i32 0, i32 %191, !dbg !139 ; [#uses=1 type=i32*] [debug line = 52:2]
  %193 = load i32* %192, align 4, !dbg !139       ; [#uses=1 type=i32] [debug line = 52:2]
  %194 = add i32 %190, %193, !dbg !139            ; [#uses=1 type=i32] [debug line = 52:2]
  store i32 %194, i32* %t1, align 4, !dbg !139    ; [debug line = 52:2]
  %195 = load i32* %a, align 4, !dbg !140         ; [#uses=1 type=i32] [debug line = 53:7]
  %196 = lshr i32 %195, 2, !dbg !140              ; [#uses=1 type=i32] [debug line = 53:7]
  %197 = load i32* %a, align 4, !dbg !140         ; [#uses=1 type=i32] [debug line = 53:7]
  %198 = shl i32 %197, 30, !dbg !140              ; [#uses=1 type=i32] [debug line = 53:7]
  %199 = or i32 %196, %198, !dbg !140             ; [#uses=1 type=i32] [debug line = 53:7]
  %200 = load i32* %a, align 4, !dbg !140         ; [#uses=1 type=i32] [debug line = 53:7]
  %201 = lshr i32 %200, 13, !dbg !140             ; [#uses=1 type=i32] [debug line = 53:7]
  %202 = load i32* %a, align 4, !dbg !140         ; [#uses=1 type=i32] [debug line = 53:7]
  %203 = shl i32 %202, 19, !dbg !140              ; [#uses=1 type=i32] [debug line = 53:7]
  %204 = or i32 %201, %203, !dbg !140             ; [#uses=1 type=i32] [debug line = 53:7]
  %205 = xor i32 %199, %204, !dbg !140            ; [#uses=1 type=i32] [debug line = 53:7]
  %206 = load i32* %a, align 4, !dbg !140         ; [#uses=1 type=i32] [debug line = 53:7]
  %207 = lshr i32 %206, 22, !dbg !140             ; [#uses=1 type=i32] [debug line = 53:7]
  %208 = load i32* %a, align 4, !dbg !140         ; [#uses=1 type=i32] [debug line = 53:7]
  %209 = shl i32 %208, 10, !dbg !140              ; [#uses=1 type=i32] [debug line = 53:7]
  %210 = or i32 %207, %209, !dbg !140             ; [#uses=1 type=i32] [debug line = 53:7]
  %211 = xor i32 %205, %210, !dbg !140            ; [#uses=1 type=i32] [debug line = 53:7]
  %212 = load i32* %a, align 4, !dbg !140         ; [#uses=1 type=i32] [debug line = 53:7]
  %213 = load i32* %b, align 4, !dbg !140         ; [#uses=1 type=i32] [debug line = 53:7]
  %214 = and i32 %212, %213, !dbg !140            ; [#uses=1 type=i32] [debug line = 53:7]
  %215 = load i32* %a, align 4, !dbg !140         ; [#uses=1 type=i32] [debug line = 53:7]
  %216 = load i32* %c, align 4, !dbg !140         ; [#uses=1 type=i32] [debug line = 53:7]
  %217 = and i32 %215, %216, !dbg !140            ; [#uses=1 type=i32] [debug line = 53:7]
  %218 = xor i32 %214, %217, !dbg !140            ; [#uses=1 type=i32] [debug line = 53:7]
  %219 = load i32* %b, align 4, !dbg !140         ; [#uses=1 type=i32] [debug line = 53:7]
  %220 = load i32* %c, align 4, !dbg !140         ; [#uses=1 type=i32] [debug line = 53:7]
  %221 = and i32 %219, %220, !dbg !140            ; [#uses=1 type=i32] [debug line = 53:7]
  %222 = xor i32 %218, %221, !dbg !140            ; [#uses=1 type=i32] [debug line = 53:7]
  %223 = add i32 %211, %222, !dbg !140            ; [#uses=1 type=i32] [debug line = 53:7]
  store i32 %223, i32* %t2, align 4, !dbg !140    ; [debug line = 53:7]
  %224 = load i32* %g, align 4, !dbg !141         ; [#uses=1 type=i32] [debug line = 54:7]
  store i32 %224, i32* %h, align 4, !dbg !141     ; [debug line = 54:7]
  %225 = load i32* %f, align 4, !dbg !142         ; [#uses=1 type=i32] [debug line = 55:7]
  store i32 %225, i32* %g, align 4, !dbg !142     ; [debug line = 55:7]
  %226 = load i32* %e, align 4, !dbg !143         ; [#uses=1 type=i32] [debug line = 56:7]
  store i32 %226, i32* %f, align 4, !dbg !143     ; [debug line = 56:7]
  %227 = load i32* %d, align 4, !dbg !144         ; [#uses=1 type=i32] [debug line = 57:7]
  %228 = load i32* %t1, align 4, !dbg !144        ; [#uses=1 type=i32] [debug line = 57:7]
  %229 = add i32 %227, %228, !dbg !144            ; [#uses=1 type=i32] [debug line = 57:7]
  store i32 %229, i32* %e, align 4, !dbg !144     ; [debug line = 57:7]
  %230 = load i32* %c, align 4, !dbg !145         ; [#uses=1 type=i32] [debug line = 58:7]
  store i32 %230, i32* %d, align 4, !dbg !145     ; [debug line = 58:7]
  %231 = load i32* %b, align 4, !dbg !146         ; [#uses=1 type=i32] [debug line = 59:7]
  store i32 %231, i32* %c, align 4, !dbg !146     ; [debug line = 59:7]
  %232 = load i32* %a, align 4, !dbg !147         ; [#uses=1 type=i32] [debug line = 60:7]
  store i32 %232, i32* %b, align 4, !dbg !147     ; [debug line = 60:7]
  %233 = load i32* %t1, align 4, !dbg !148        ; [#uses=1 type=i32] [debug line = 61:7]
  %234 = load i32* %t2, align 4, !dbg !148        ; [#uses=1 type=i32] [debug line = 61:7]
  %235 = add i32 %233, %234, !dbg !148            ; [#uses=1 type=i32] [debug line = 61:7]
  store i32 %235, i32* %a, align 4, !dbg !148     ; [debug line = 61:7]
  call void bitcast (void (...)* @_ssdm_RegionEnd to void (i8*)*)(i8* getelementptr inbounds ([12 x i8]* @.str3, i32 0, i32 0)) nounwind, !dbg !149 ; [debug line = 62:4]
  br label %236, !dbg !149                        ; [debug line = 62:4]

; <label>:236                                     ; preds = %158
  %237 = load i32* %i, align 4, !dbg !150         ; [#uses=1 type=i32] [debug line = 50:24]
  %238 = add i32 %237, 1, !dbg !150               ; [#uses=1 type=i32] [debug line = 50:24]
  store i32 %238, i32* %i, align 4, !dbg !150     ; [debug line = 50:24]
  br label %155, !dbg !150                        ; [debug line = 50:24]

; <label>:239                                     ; preds = %155
  %240 = load i32* %a, align 4, !dbg !151         ; [#uses=1 type=i32] [debug line = 64:4]
  %241 = load %struct.SHA256_CTX** %1, align 4, !dbg !151 ; [#uses=1 type=%struct.SHA256_CTX*] [debug line = 64:4]
  %242 = getelementptr inbounds %struct.SHA256_CTX* %241, i32 0, i32 3, !dbg !151 ; [#uses=1 type=[8 x i32]*] [debug line = 64:4]
  %243 = getelementptr inbounds [8 x i32]* %242, i32 0, i32 0, !dbg !151 ; [#uses=2 type=i32*] [debug line = 64:4]
  %244 = load i32* %243, align 4, !dbg !151       ; [#uses=1 type=i32] [debug line = 64:4]
  %245 = add i32 %244, %240, !dbg !151            ; [#uses=1 type=i32] [debug line = 64:4]
  store i32 %245, i32* %243, align 4, !dbg !151   ; [debug line = 64:4]
  %246 = load i32* %b, align 4, !dbg !152         ; [#uses=1 type=i32] [debug line = 65:4]
  %247 = load %struct.SHA256_CTX** %1, align 4, !dbg !152 ; [#uses=1 type=%struct.SHA256_CTX*] [debug line = 65:4]
  %248 = getelementptr inbounds %struct.SHA256_CTX* %247, i32 0, i32 3, !dbg !152 ; [#uses=1 type=[8 x i32]*] [debug line = 65:4]
  %249 = getelementptr inbounds [8 x i32]* %248, i32 0, i32 1, !dbg !152 ; [#uses=2 type=i32*] [debug line = 65:4]
  %250 = load i32* %249, align 4, !dbg !152       ; [#uses=1 type=i32] [debug line = 65:4]
  %251 = add i32 %250, %246, !dbg !152            ; [#uses=1 type=i32] [debug line = 65:4]
  store i32 %251, i32* %249, align 4, !dbg !152   ; [debug line = 65:4]
  %252 = load i32* %c, align 4, !dbg !153         ; [#uses=1 type=i32] [debug line = 66:4]
  %253 = load %struct.SHA256_CTX** %1, align 4, !dbg !153 ; [#uses=1 type=%struct.SHA256_CTX*] [debug line = 66:4]
  %254 = getelementptr inbounds %struct.SHA256_CTX* %253, i32 0, i32 3, !dbg !153 ; [#uses=1 type=[8 x i32]*] [debug line = 66:4]
  %255 = getelementptr inbounds [8 x i32]* %254, i32 0, i32 2, !dbg !153 ; [#uses=2 type=i32*] [debug line = 66:4]
  %256 = load i32* %255, align 4, !dbg !153       ; [#uses=1 type=i32] [debug line = 66:4]
  %257 = add i32 %256, %252, !dbg !153            ; [#uses=1 type=i32] [debug line = 66:4]
  store i32 %257, i32* %255, align 4, !dbg !153   ; [debug line = 66:4]
  %258 = load i32* %d, align 4, !dbg !154         ; [#uses=1 type=i32] [debug line = 67:4]
  %259 = load %struct.SHA256_CTX** %1, align 4, !dbg !154 ; [#uses=1 type=%struct.SHA256_CTX*] [debug line = 67:4]
  %260 = getelementptr inbounds %struct.SHA256_CTX* %259, i32 0, i32 3, !dbg !154 ; [#uses=1 type=[8 x i32]*] [debug line = 67:4]
  %261 = getelementptr inbounds [8 x i32]* %260, i32 0, i32 3, !dbg !154 ; [#uses=2 type=i32*] [debug line = 67:4]
  %262 = load i32* %261, align 4, !dbg !154       ; [#uses=1 type=i32] [debug line = 67:4]
  %263 = add i32 %262, %258, !dbg !154            ; [#uses=1 type=i32] [debug line = 67:4]
  store i32 %263, i32* %261, align 4, !dbg !154   ; [debug line = 67:4]
  %264 = load i32* %e, align 4, !dbg !155         ; [#uses=1 type=i32] [debug line = 68:4]
  %265 = load %struct.SHA256_CTX** %1, align 4, !dbg !155 ; [#uses=1 type=%struct.SHA256_CTX*] [debug line = 68:4]
  %266 = getelementptr inbounds %struct.SHA256_CTX* %265, i32 0, i32 3, !dbg !155 ; [#uses=1 type=[8 x i32]*] [debug line = 68:4]
  %267 = getelementptr inbounds [8 x i32]* %266, i32 0, i32 4, !dbg !155 ; [#uses=2 type=i32*] [debug line = 68:4]
  %268 = load i32* %267, align 4, !dbg !155       ; [#uses=1 type=i32] [debug line = 68:4]
  %269 = add i32 %268, %264, !dbg !155            ; [#uses=1 type=i32] [debug line = 68:4]
  store i32 %269, i32* %267, align 4, !dbg !155   ; [debug line = 68:4]
  %270 = load i32* %f, align 4, !dbg !156         ; [#uses=1 type=i32] [debug line = 69:4]
  %271 = load %struct.SHA256_CTX** %1, align 4, !dbg !156 ; [#uses=1 type=%struct.SHA256_CTX*] [debug line = 69:4]
  %272 = getelementptr inbounds %struct.SHA256_CTX* %271, i32 0, i32 3, !dbg !156 ; [#uses=1 type=[8 x i32]*] [debug line = 69:4]
  %273 = getelementptr inbounds [8 x i32]* %272, i32 0, i32 5, !dbg !156 ; [#uses=2 type=i32*] [debug line = 69:4]
  %274 = load i32* %273, align 4, !dbg !156       ; [#uses=1 type=i32] [debug line = 69:4]
  %275 = add i32 %274, %270, !dbg !156            ; [#uses=1 type=i32] [debug line = 69:4]
  store i32 %275, i32* %273, align 4, !dbg !156   ; [debug line = 69:4]
  %276 = load i32* %g, align 4, !dbg !157         ; [#uses=1 type=i32] [debug line = 70:4]
  %277 = load %struct.SHA256_CTX** %1, align 4, !dbg !157 ; [#uses=1 type=%struct.SHA256_CTX*] [debug line = 70:4]
  %278 = getelementptr inbounds %struct.SHA256_CTX* %277, i32 0, i32 3, !dbg !157 ; [#uses=1 type=[8 x i32]*] [debug line = 70:4]
  %279 = getelementptr inbounds [8 x i32]* %278, i32 0, i32 6, !dbg !157 ; [#uses=2 type=i32*] [debug line = 70:4]
  %280 = load i32* %279, align 4, !dbg !157       ; [#uses=1 type=i32] [debug line = 70:4]
  %281 = add i32 %280, %276, !dbg !157            ; [#uses=1 type=i32] [debug line = 70:4]
  store i32 %281, i32* %279, align 4, !dbg !157   ; [debug line = 70:4]
  %282 = load i32* %h, align 4, !dbg !158         ; [#uses=1 type=i32] [debug line = 71:4]
  %283 = load %struct.SHA256_CTX** %1, align 4, !dbg !158 ; [#uses=1 type=%struct.SHA256_CTX*] [debug line = 71:4]
  %284 = getelementptr inbounds %struct.SHA256_CTX* %283, i32 0, i32 3, !dbg !158 ; [#uses=1 type=[8 x i32]*] [debug line = 71:4]
  %285 = getelementptr inbounds [8 x i32]* %284, i32 0, i32 7, !dbg !158 ; [#uses=2 type=i32*] [debug line = 71:4]
  %286 = load i32* %285, align 4, !dbg !158       ; [#uses=1 type=i32] [debug line = 71:4]
  %287 = add i32 %286, %282, !dbg !158            ; [#uses=1 type=i32] [debug line = 71:4]
  store i32 %287, i32* %285, align 4, !dbg !158   ; [debug line = 71:4]
  ret void, !dbg !159                             ; [debug line = 72:1]
}

; [#uses=32]
declare void @llvm.dbg.declare(metadata, metadata) nounwind readnone

; [#uses=1]
declare void @_ssdm_RegionBegin(...) nounwind

; [#uses=1]
declare void @_ssdm_op_SpecLoopTripCount(...) nounwind

; [#uses=1]
declare void @_ssdm_RegionEnd(...) nounwind

; [#uses=1]
define void @sha256_init(%struct.SHA256_CTX* %ctx) nounwind {
  %1 = alloca %struct.SHA256_CTX*, align 4        ; [#uses=12 type=%struct.SHA256_CTX**]
  store %struct.SHA256_CTX* %ctx, %struct.SHA256_CTX** %1, align 4
  call void @llvm.dbg.declare(metadata !{%struct.SHA256_CTX** %1}, metadata !160), !dbg !161 ; [debug line = 74:30] [debug variable = ctx]
  %2 = load %struct.SHA256_CTX** %1, align 4, !dbg !162 ; [#uses=1 type=%struct.SHA256_CTX*] [debug line = 76:4]
  %3 = getelementptr inbounds %struct.SHA256_CTX* %2, i32 0, i32 1, !dbg !162 ; [#uses=1 type=i32*] [debug line = 76:4]
  store i32 0, i32* %3, align 4, !dbg !162        ; [debug line = 76:4]
  %4 = load %struct.SHA256_CTX** %1, align 4, !dbg !164 ; [#uses=1 type=%struct.SHA256_CTX*] [debug line = 77:4]
  %5 = getelementptr inbounds %struct.SHA256_CTX* %4, i32 0, i32 2, !dbg !164 ; [#uses=1 type=[2 x i32]*] [debug line = 77:4]
  %6 = getelementptr inbounds [2 x i32]* %5, i32 0, i32 0, !dbg !164 ; [#uses=1 type=i32*] [debug line = 77:4]
  store i32 0, i32* %6, align 4, !dbg !164        ; [debug line = 77:4]
  %7 = load %struct.SHA256_CTX** %1, align 4, !dbg !165 ; [#uses=1 type=%struct.SHA256_CTX*] [debug line = 78:4]
  %8 = getelementptr inbounds %struct.SHA256_CTX* %7, i32 0, i32 2, !dbg !165 ; [#uses=1 type=[2 x i32]*] [debug line = 78:4]
  %9 = getelementptr inbounds [2 x i32]* %8, i32 0, i32 1, !dbg !165 ; [#uses=1 type=i32*] [debug line = 78:4]
  store i32 0, i32* %9, align 4, !dbg !165        ; [debug line = 78:4]
  %10 = load %struct.SHA256_CTX** %1, align 4, !dbg !166 ; [#uses=1 type=%struct.SHA256_CTX*] [debug line = 79:4]
  %11 = getelementptr inbounds %struct.SHA256_CTX* %10, i32 0, i32 3, !dbg !166 ; [#uses=1 type=[8 x i32]*] [debug line = 79:4]
  %12 = getelementptr inbounds [8 x i32]* %11, i32 0, i32 0, !dbg !166 ; [#uses=1 type=i32*] [debug line = 79:4]
  store i32 1779033703, i32* %12, align 4, !dbg !166 ; [debug line = 79:4]
  %13 = load %struct.SHA256_CTX** %1, align 4, !dbg !167 ; [#uses=1 type=%struct.SHA256_CTX*] [debug line = 80:4]
  %14 = getelementptr inbounds %struct.SHA256_CTX* %13, i32 0, i32 3, !dbg !167 ; [#uses=1 type=[8 x i32]*] [debug line = 80:4]
  %15 = getelementptr inbounds [8 x i32]* %14, i32 0, i32 1, !dbg !167 ; [#uses=1 type=i32*] [debug line = 80:4]
  store i32 -1150833019, i32* %15, align 4, !dbg !167 ; [debug line = 80:4]
  %16 = load %struct.SHA256_CTX** %1, align 4, !dbg !168 ; [#uses=1 type=%struct.SHA256_CTX*] [debug line = 81:4]
  %17 = getelementptr inbounds %struct.SHA256_CTX* %16, i32 0, i32 3, !dbg !168 ; [#uses=1 type=[8 x i32]*] [debug line = 81:4]
  %18 = getelementptr inbounds [8 x i32]* %17, i32 0, i32 2, !dbg !168 ; [#uses=1 type=i32*] [debug line = 81:4]
  store i32 1013904242, i32* %18, align 4, !dbg !168 ; [debug line = 81:4]
  %19 = load %struct.SHA256_CTX** %1, align 4, !dbg !169 ; [#uses=1 type=%struct.SHA256_CTX*] [debug line = 82:4]
  %20 = getelementptr inbounds %struct.SHA256_CTX* %19, i32 0, i32 3, !dbg !169 ; [#uses=1 type=[8 x i32]*] [debug line = 82:4]
  %21 = getelementptr inbounds [8 x i32]* %20, i32 0, i32 3, !dbg !169 ; [#uses=1 type=i32*] [debug line = 82:4]
  store i32 -1521486534, i32* %21, align 4, !dbg !169 ; [debug line = 82:4]
  %22 = load %struct.SHA256_CTX** %1, align 4, !dbg !170 ; [#uses=1 type=%struct.SHA256_CTX*] [debug line = 83:4]
  %23 = getelementptr inbounds %struct.SHA256_CTX* %22, i32 0, i32 3, !dbg !170 ; [#uses=1 type=[8 x i32]*] [debug line = 83:4]
  %24 = getelementptr inbounds [8 x i32]* %23, i32 0, i32 4, !dbg !170 ; [#uses=1 type=i32*] [debug line = 83:4]
  store i32 1359893119, i32* %24, align 4, !dbg !170 ; [debug line = 83:4]
  %25 = load %struct.SHA256_CTX** %1, align 4, !dbg !171 ; [#uses=1 type=%struct.SHA256_CTX*] [debug line = 84:4]
  %26 = getelementptr inbounds %struct.SHA256_CTX* %25, i32 0, i32 3, !dbg !171 ; [#uses=1 type=[8 x i32]*] [debug line = 84:4]
  %27 = getelementptr inbounds [8 x i32]* %26, i32 0, i32 5, !dbg !171 ; [#uses=1 type=i32*] [debug line = 84:4]
  store i32 -1694144372, i32* %27, align 4, !dbg !171 ; [debug line = 84:4]
  %28 = load %struct.SHA256_CTX** %1, align 4, !dbg !172 ; [#uses=1 type=%struct.SHA256_CTX*] [debug line = 85:4]
  %29 = getelementptr inbounds %struct.SHA256_CTX* %28, i32 0, i32 3, !dbg !172 ; [#uses=1 type=[8 x i32]*] [debug line = 85:4]
  %30 = getelementptr inbounds [8 x i32]* %29, i32 0, i32 6, !dbg !172 ; [#uses=1 type=i32*] [debug line = 85:4]
  store i32 528734635, i32* %30, align 4, !dbg !172 ; [debug line = 85:4]
  %31 = load %struct.SHA256_CTX** %1, align 4, !dbg !173 ; [#uses=1 type=%struct.SHA256_CTX*] [debug line = 86:4]
  %32 = getelementptr inbounds %struct.SHA256_CTX* %31, i32 0, i32 3, !dbg !173 ; [#uses=1 type=[8 x i32]*] [debug line = 86:4]
  %33 = getelementptr inbounds [8 x i32]* %32, i32 0, i32 7, !dbg !173 ; [#uses=1 type=i32*] [debug line = 86:4]
  store i32 1541459225, i32* %33, align 4, !dbg !173 ; [debug line = 86:4]
  ret void, !dbg !174                             ; [debug line = 87:1]
}

; [#uses=2]
define void @sha256_update(%struct.SHA256_CTX* %ctx, i8* %data, i32 %len) nounwind {
  %1 = alloca %struct.SHA256_CTX*, align 4        ; [#uses=11 type=%struct.SHA256_CTX**]
  %2 = alloca i8*, align 4                        ; [#uses=2 type=i8**]
  %3 = alloca i32, align 4                        ; [#uses=2 type=i32*]
  %i = alloca i32, align 4                        ; [#uses=5 type=i32*]
  store %struct.SHA256_CTX* %ctx, %struct.SHA256_CTX** %1, align 4
  call void @llvm.dbg.declare(metadata !{%struct.SHA256_CTX** %1}, metadata !175), !dbg !176 ; [debug line = 89:32] [debug variable = ctx]
  store i8* %data, i8** %2, align 4
  call void @llvm.dbg.declare(metadata !{i8** %2}, metadata !177), !dbg !178 ; [debug line = 89:67] [debug variable = data]
  store i32 %len, i32* %3, align 4
  call void @llvm.dbg.declare(metadata !{i32* %3}, metadata !179), !dbg !180 ; [debug line = 89:105] [debug variable = len]
  call void @llvm.dbg.declare(metadata !{i32* %i}, metadata !181), !dbg !183 ; [debug line = 91:34] [debug variable = i]
  store i32 0, i32* %i, align 4, !dbg !184        ; [debug line = 93:9]
  br label %4, !dbg !184                          ; [debug line = 93:9]

; <label>:4                                       ; preds = %52, %0
  %5 = load i32* %i, align 4, !dbg !184           ; [#uses=1 type=i32] [debug line = 93:9]
  %6 = load i32* %3, align 4, !dbg !184           ; [#uses=1 type=i32] [debug line = 93:9]
  %7 = icmp ult i32 %5, %6, !dbg !184             ; [#uses=1 type=i1] [debug line = 93:9]
  br i1 %7, label %8, label %55, !dbg !184        ; [debug line = 93:9]

; <label>:8                                       ; preds = %4
  call void bitcast (void (...)* @_ssdm_RegionBegin to void (i8*)*)(i8* getelementptr inbounds ([12 x i8]* @.str4, i32 0, i32 0)) nounwind, !dbg !186 ; [debug line = 93:29]
  call void bitcast (void (...)* @_ssdm_op_SpecLoopTripCount to void (i32, i32, i32, i8*)*)(i32 12, i32 100, i32 56, i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0)) nounwind, !dbg !188 ; [debug line = 94:1]
  %9 = load i32* %i, align 4, !dbg !189           ; [#uses=1 type=i32] [debug line = 95:2]
  %10 = load i8** %2, align 4, !dbg !189          ; [#uses=1 type=i8*] [debug line = 95:2]
  %11 = getelementptr inbounds i8* %10, i32 %9, !dbg !189 ; [#uses=1 type=i8*] [debug line = 95:2]
  %12 = load i8* %11, align 1, !dbg !189          ; [#uses=1 type=i8] [debug line = 95:2]
  %13 = load %struct.SHA256_CTX** %1, align 4, !dbg !189 ; [#uses=1 type=%struct.SHA256_CTX*] [debug line = 95:2]
  %14 = getelementptr inbounds %struct.SHA256_CTX* %13, i32 0, i32 1, !dbg !189 ; [#uses=1 type=i32*] [debug line = 95:2]
  %15 = load i32* %14, align 4, !dbg !189         ; [#uses=1 type=i32] [debug line = 95:2]
  %16 = load %struct.SHA256_CTX** %1, align 4, !dbg !189 ; [#uses=1 type=%struct.SHA256_CTX*] [debug line = 95:2]
  %17 = getelementptr inbounds %struct.SHA256_CTX* %16, i32 0, i32 0, !dbg !189 ; [#uses=1 type=[64 x i8]*] [debug line = 95:2]
  %18 = getelementptr inbounds [64 x i8]* %17, i32 0, i32 %15, !dbg !189 ; [#uses=1 type=i8*] [debug line = 95:2]
  store i8 %12, i8* %18, align 1, !dbg !189       ; [debug line = 95:2]
  %19 = load %struct.SHA256_CTX** %1, align 4, !dbg !190 ; [#uses=1 type=%struct.SHA256_CTX*] [debug line = 96:7]
  %20 = getelementptr inbounds %struct.SHA256_CTX* %19, i32 0, i32 1, !dbg !190 ; [#uses=2 type=i32*] [debug line = 96:7]
  %21 = load i32* %20, align 4, !dbg !190         ; [#uses=1 type=i32] [debug line = 96:7]
  %22 = add i32 %21, 1, !dbg !190                 ; [#uses=1 type=i32] [debug line = 96:7]
  store i32 %22, i32* %20, align 4, !dbg !190     ; [debug line = 96:7]
  %23 = load %struct.SHA256_CTX** %1, align 4, !dbg !191 ; [#uses=1 type=%struct.SHA256_CTX*] [debug line = 97:7]
  %24 = getelementptr inbounds %struct.SHA256_CTX* %23, i32 0, i32 1, !dbg !191 ; [#uses=1 type=i32*] [debug line = 97:7]
  %25 = load i32* %24, align 4, !dbg !191         ; [#uses=1 type=i32] [debug line = 97:7]
  %26 = icmp eq i32 %25, 64, !dbg !191            ; [#uses=1 type=i1] [debug line = 97:7]
  br i1 %26, label %27, label %51, !dbg !191      ; [debug line = 97:7]

; <label>:27                                      ; preds = %8
  %28 = load %struct.SHA256_CTX** %1, align 4, !dbg !192 ; [#uses=1 type=%struct.SHA256_CTX*] [debug line = 98:10]
  %29 = load %struct.SHA256_CTX** %1, align 4, !dbg !192 ; [#uses=1 type=%struct.SHA256_CTX*] [debug line = 98:10]
  %30 = getelementptr inbounds %struct.SHA256_CTX* %29, i32 0, i32 0, !dbg !192 ; [#uses=1 type=[64 x i8]*] [debug line = 98:10]
  %31 = getelementptr inbounds [64 x i8]* %30, i32 0, i32 0, !dbg !192 ; [#uses=1 type=i8*] [debug line = 98:10]
  call void @sha256_transform(%struct.SHA256_CTX* %28, i8* %31), !dbg !192 ; [debug line = 98:10]
  %32 = load %struct.SHA256_CTX** %1, align 4, !dbg !194 ; [#uses=1 type=%struct.SHA256_CTX*] [debug line = 99:10]
  %33 = getelementptr inbounds %struct.SHA256_CTX* %32, i32 0, i32 2, !dbg !194 ; [#uses=1 type=[2 x i32]*] [debug line = 99:10]
  %34 = getelementptr inbounds [2 x i32]* %33, i32 0, i32 0, !dbg !194 ; [#uses=1 type=i32*] [debug line = 99:10]
  %35 = load i32* %34, align 4, !dbg !194         ; [#uses=1 type=i32] [debug line = 99:10]
  %36 = icmp ugt i32 %35, -513, !dbg !194         ; [#uses=1 type=i1] [debug line = 99:10]
  br i1 %36, label %37, label %43, !dbg !194      ; [debug line = 99:10]

; <label>:37                                      ; preds = %27
  %38 = load %struct.SHA256_CTX** %1, align 4, !dbg !195 ; [#uses=1 type=%struct.SHA256_CTX*] [debug line = 99:51]
  %39 = getelementptr inbounds %struct.SHA256_CTX* %38, i32 0, i32 2, !dbg !195 ; [#uses=1 type=[2 x i32]*] [debug line = 99:51]
  %40 = getelementptr inbounds [2 x i32]* %39, i32 0, i32 1, !dbg !195 ; [#uses=2 type=i32*] [debug line = 99:51]
  %41 = load i32* %40, align 4, !dbg !195         ; [#uses=1 type=i32] [debug line = 99:51]
  %42 = add i32 %41, 1, !dbg !195                 ; [#uses=1 type=i32] [debug line = 99:51]
  store i32 %42, i32* %40, align 4, !dbg !195     ; [debug line = 99:51]
  br label %43, !dbg !195                         ; [debug line = 99:51]

; <label>:43                                      ; preds = %37, %27
  %44 = load %struct.SHA256_CTX** %1, align 4, !dbg !196 ; [#uses=1 type=%struct.SHA256_CTX*] [debug line = 99:69]
  %45 = getelementptr inbounds %struct.SHA256_CTX* %44, i32 0, i32 2, !dbg !196 ; [#uses=1 type=[2 x i32]*] [debug line = 99:69]
  %46 = getelementptr inbounds [2 x i32]* %45, i32 0, i32 0, !dbg !196 ; [#uses=2 type=i32*] [debug line = 99:69]
  %47 = load i32* %46, align 4, !dbg !196         ; [#uses=1 type=i32] [debug line = 99:69]
  %48 = add i32 %47, 512, !dbg !196               ; [#uses=1 type=i32] [debug line = 99:69]
  store i32 %48, i32* %46, align 4, !dbg !196     ; [debug line = 99:69]
  %49 = load %struct.SHA256_CTX** %1, align 4, !dbg !197 ; [#uses=1 type=%struct.SHA256_CTX*] [debug line = 100:10]
  %50 = getelementptr inbounds %struct.SHA256_CTX* %49, i32 0, i32 1, !dbg !197 ; [#uses=1 type=i32*] [debug line = 100:10]
  store i32 0, i32* %50, align 4, !dbg !197       ; [debug line = 100:10]
  br label %51, !dbg !198                         ; [debug line = 101:7]

; <label>:51                                      ; preds = %43, %8
  call void bitcast (void (...)* @_ssdm_RegionEnd to void (i8*)*)(i8* getelementptr inbounds ([12 x i8]* @.str4, i32 0, i32 0)) nounwind, !dbg !199 ; [debug line = 102:4]
  br label %52, !dbg !199                         ; [debug line = 102:4]

; <label>:52                                      ; preds = %51
  %53 = load i32* %i, align 4, !dbg !200          ; [#uses=1 type=i32] [debug line = 93:23]
  %54 = add i32 %53, 1, !dbg !200                 ; [#uses=1 type=i32] [debug line = 93:23]
  store i32 %54, i32* %i, align 4, !dbg !200      ; [debug line = 93:23]
  br label %4, !dbg !200                          ; [debug line = 93:23]

; <label>:55                                      ; preds = %4
  ret void, !dbg !201                             ; [debug line = 103:1]
}

; [#uses=1]
define void @sha256_final(%struct.SHA256_CTX* %ctx, i8* %hash) nounwind {
  %1 = alloca %struct.SHA256_CTX*, align 4        ; [#uses=41 type=%struct.SHA256_CTX**]
  %2 = alloca i8*, align 4                        ; [#uses=9 type=i8**]
  %i = alloca i32, align 4                        ; [#uses=36 type=i32*]
  store %struct.SHA256_CTX* %ctx, %struct.SHA256_CTX** %1, align 4
  call void @llvm.dbg.declare(metadata !{%struct.SHA256_CTX** %1}, metadata !202), !dbg !203 ; [debug line = 105:31] [debug variable = ctx]
  store i8* %hash, i8** %2, align 4
  call void @llvm.dbg.declare(metadata !{i8** %2}, metadata !204), !dbg !205 ; [debug line = 105:66] [debug variable = hash]
  call void @llvm.dbg.declare(metadata !{i32* %i}, metadata !206), !dbg !208 ; [debug line = 107:32] [debug variable = i]
  %3 = load %struct.SHA256_CTX** %1, align 4, !dbg !209 ; [#uses=1 type=%struct.SHA256_CTX*] [debug line = 109:2]
  %4 = getelementptr inbounds %struct.SHA256_CTX* %3, i32 0, i32 1, !dbg !209 ; [#uses=1 type=i32*] [debug line = 109:2]
  %5 = load i32* %4, align 4, !dbg !209           ; [#uses=1 type=i32] [debug line = 109:2]
  store i32 %5, i32* %i, align 4, !dbg !209       ; [debug line = 109:2]
  %6 = load %struct.SHA256_CTX** %1, align 4, !dbg !210 ; [#uses=1 type=%struct.SHA256_CTX*] [debug line = 112:2]
  %7 = getelementptr inbounds %struct.SHA256_CTX* %6, i32 0, i32 1, !dbg !210 ; [#uses=1 type=i32*] [debug line = 112:2]
  %8 = load i32* %7, align 4, !dbg !210           ; [#uses=1 type=i32] [debug line = 112:2]
  %9 = icmp ult i32 %8, 56, !dbg !210             ; [#uses=1 type=i1] [debug line = 112:2]
  br i1 %9, label %10, label %26, !dbg !210       ; [debug line = 112:2]

; <label>:10                                      ; preds = %0
  %11 = load i32* %i, align 4, !dbg !211          ; [#uses=2 type=i32] [debug line = 113:3]
  %12 = add i32 %11, 1, !dbg !211                 ; [#uses=1 type=i32] [debug line = 113:3]
  store i32 %12, i32* %i, align 4, !dbg !211      ; [debug line = 113:3]
  %13 = load %struct.SHA256_CTX** %1, align 4, !dbg !211 ; [#uses=1 type=%struct.SHA256_CTX*] [debug line = 113:3]
  %14 = getelementptr inbounds %struct.SHA256_CTX* %13, i32 0, i32 0, !dbg !211 ; [#uses=1 type=[64 x i8]*] [debug line = 113:3]
  %15 = getelementptr inbounds [64 x i8]* %14, i32 0, i32 %11, !dbg !211 ; [#uses=1 type=i8*] [debug line = 113:3]
  store i8 -128, i8* %15, align 1, !dbg !211      ; [debug line = 113:3]
  br label %16, !dbg !213                         ; [debug line = 114:3]

; <label>:16                                      ; preds = %19, %10
  %17 = load i32* %i, align 4, !dbg !213          ; [#uses=1 type=i32] [debug line = 114:3]
  %18 = icmp ult i32 %17, 56, !dbg !213           ; [#uses=1 type=i1] [debug line = 114:3]
  br i1 %18, label %19, label %25, !dbg !213      ; [debug line = 114:3]

; <label>:19                                      ; preds = %16
  %20 = load i32* %i, align 4, !dbg !214          ; [#uses=2 type=i32] [debug line = 115:4]
  %21 = add i32 %20, 1, !dbg !214                 ; [#uses=1 type=i32] [debug line = 115:4]
  store i32 %21, i32* %i, align 4, !dbg !214      ; [debug line = 115:4]
  %22 = load %struct.SHA256_CTX** %1, align 4, !dbg !214 ; [#uses=1 type=%struct.SHA256_CTX*] [debug line = 115:4]
  %23 = getelementptr inbounds %struct.SHA256_CTX* %22, i32 0, i32 0, !dbg !214 ; [#uses=1 type=[64 x i8]*] [debug line = 115:4]
  %24 = getelementptr inbounds [64 x i8]* %23, i32 0, i32 %20, !dbg !214 ; [#uses=1 type=i8*] [debug line = 115:4]
  store i8 0, i8* %24, align 1, !dbg !214         ; [debug line = 115:4]
  br label %16, !dbg !214                         ; [debug line = 115:4]

; <label>:25                                      ; preds = %16
  br label %58, !dbg !215                         ; [debug line = 116:2]

; <label>:26                                      ; preds = %0
  %27 = load i32* %i, align 4, !dbg !216          ; [#uses=2 type=i32] [debug line = 118:3]
  %28 = add i32 %27, 1, !dbg !216                 ; [#uses=1 type=i32] [debug line = 118:3]
  store i32 %28, i32* %i, align 4, !dbg !216      ; [debug line = 118:3]
  %29 = load %struct.SHA256_CTX** %1, align 4, !dbg !216 ; [#uses=1 type=%struct.SHA256_CTX*] [debug line = 118:3]
  %30 = getelementptr inbounds %struct.SHA256_CTX* %29, i32 0, i32 0, !dbg !216 ; [#uses=1 type=[64 x i8]*] [debug line = 118:3]
  %31 = getelementptr inbounds [64 x i8]* %30, i32 0, i32 %27, !dbg !216 ; [#uses=1 type=i8*] [debug line = 118:3]
  store i8 -128, i8* %31, align 1, !dbg !216      ; [debug line = 118:3]
  br label %32, !dbg !218                         ; [debug line = 119:3]

; <label>:32                                      ; preds = %35, %26
  %33 = load i32* %i, align 4, !dbg !218          ; [#uses=1 type=i32] [debug line = 119:3]
  %34 = icmp ult i32 %33, 64, !dbg !218           ; [#uses=1 type=i1] [debug line = 119:3]
  br i1 %34, label %35, label %41, !dbg !218      ; [debug line = 119:3]

; <label>:35                                      ; preds = %32
  %36 = load i32* %i, align 4, !dbg !219          ; [#uses=2 type=i32] [debug line = 120:4]
  %37 = add i32 %36, 1, !dbg !219                 ; [#uses=1 type=i32] [debug line = 120:4]
  store i32 %37, i32* %i, align 4, !dbg !219      ; [debug line = 120:4]
  %38 = load %struct.SHA256_CTX** %1, align 4, !dbg !219 ; [#uses=1 type=%struct.SHA256_CTX*] [debug line = 120:4]
  %39 = getelementptr inbounds %struct.SHA256_CTX* %38, i32 0, i32 0, !dbg !219 ; [#uses=1 type=[64 x i8]*] [debug line = 120:4]
  %40 = getelementptr inbounds [64 x i8]* %39, i32 0, i32 %36, !dbg !219 ; [#uses=1 type=i8*] [debug line = 120:4]
  store i8 0, i8* %40, align 1, !dbg !219         ; [debug line = 120:4]
  br label %32, !dbg !219                         ; [debug line = 120:4]

; <label>:41                                      ; preds = %32
  %42 = load %struct.SHA256_CTX** %1, align 4, !dbg !220 ; [#uses=1 type=%struct.SHA256_CTX*] [debug line = 121:3]
  %43 = load %struct.SHA256_CTX** %1, align 4, !dbg !220 ; [#uses=1 type=%struct.SHA256_CTX*] [debug line = 121:3]
  %44 = getelementptr inbounds %struct.SHA256_CTX* %43, i32 0, i32 0, !dbg !220 ; [#uses=1 type=[64 x i8]*] [debug line = 121:3]
  %45 = getelementptr inbounds [64 x i8]* %44, i32 0, i32 0, !dbg !220 ; [#uses=1 type=i8*] [debug line = 121:3]
  call void @sha256_transform(%struct.SHA256_CTX* %42, i8* %45), !dbg !220 ; [debug line = 121:3]
  store i32 0, i32* %i, align 4, !dbg !221        ; [debug line = 122:8]
  br label %46, !dbg !221                         ; [debug line = 122:8]

; <label>:46                                      ; preds = %54, %41
  %47 = load i32* %i, align 4, !dbg !221          ; [#uses=1 type=i32] [debug line = 122:8]
  %48 = icmp ult i32 %47, 56, !dbg !221           ; [#uses=1 type=i1] [debug line = 122:8]
  br i1 %48, label %49, label %57, !dbg !221      ; [debug line = 122:8]

; <label>:49                                      ; preds = %46
  call void bitcast (void (...)* @_ssdm_RegionBegin to void (i8*)*)(i8* getelementptr inbounds ([12 x i8]* @.str5, i32 0, i32 0)) nounwind, !dbg !223 ; [debug line = 122:30]
  call void bitcast (void (...)* @_ssdm_op_SpecLoopTripCount to void (i32, i32, i32, i8*)*)(i32 12, i32 100, i32 56, i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0)) nounwind, !dbg !225 ; [debug line = 123:1]
  %50 = load i32* %i, align 4, !dbg !226          ; [#uses=1 type=i32] [debug line = 124:2]
  %51 = load %struct.SHA256_CTX** %1, align 4, !dbg !226 ; [#uses=1 type=%struct.SHA256_CTX*] [debug line = 124:2]
  %52 = getelementptr inbounds %struct.SHA256_CTX* %51, i32 0, i32 0, !dbg !226 ; [#uses=1 type=[64 x i8]*] [debug line = 124:2]
  %53 = getelementptr inbounds [64 x i8]* %52, i32 0, i32 %50, !dbg !226 ; [#uses=1 type=i8*] [debug line = 124:2]
  store i8 0, i8* %53, align 1, !dbg !226         ; [debug line = 124:2]
  call void bitcast (void (...)* @_ssdm_RegionEnd to void (i8*)*)(i8* getelementptr inbounds ([12 x i8]* @.str5, i32 0, i32 0)) nounwind, !dbg !227 ; [debug line = 125:3]
  br label %54, !dbg !227                         ; [debug line = 125:3]

; <label>:54                                      ; preds = %49
  %55 = load i32* %i, align 4, !dbg !228          ; [#uses=1 type=i32] [debug line = 122:23]
  %56 = add i32 %55, 1, !dbg !228                 ; [#uses=1 type=i32] [debug line = 122:23]
  store i32 %56, i32* %i, align 4, !dbg !228      ; [debug line = 122:23]
  br label %46, !dbg !228                         ; [debug line = 122:23]

; <label>:57                                      ; preds = %46
  br label %58

; <label>:58                                      ; preds = %57, %25
  %59 = load %struct.SHA256_CTX** %1, align 4, !dbg !229 ; [#uses=1 type=%struct.SHA256_CTX*] [debug line = 130:4]
  %60 = getelementptr inbounds %struct.SHA256_CTX* %59, i32 0, i32 2, !dbg !229 ; [#uses=1 type=[2 x i32]*] [debug line = 130:4]
  %61 = getelementptr inbounds [2 x i32]* %60, i32 0, i32 0, !dbg !229 ; [#uses=1 type=i32*] [debug line = 130:4]
  %62 = load i32* %61, align 4, !dbg !229         ; [#uses=1 type=i32] [debug line = 130:4]
  %63 = load %struct.SHA256_CTX** %1, align 4, !dbg !229 ; [#uses=1 type=%struct.SHA256_CTX*] [debug line = 130:4]
  %64 = getelementptr inbounds %struct.SHA256_CTX* %63, i32 0, i32 1, !dbg !229 ; [#uses=1 type=i32*] [debug line = 130:4]
  %65 = load i32* %64, align 4, !dbg !229         ; [#uses=1 type=i32] [debug line = 130:4]
  %66 = mul i32 %65, 8, !dbg !229                 ; [#uses=1 type=i32] [debug line = 130:4]
  %67 = sub i32 -1, %66, !dbg !229                ; [#uses=1 type=i32] [debug line = 130:4]
  %68 = icmp ugt i32 %62, %67, !dbg !229          ; [#uses=1 type=i1] [debug line = 130:4]
  br i1 %68, label %69, label %75, !dbg !229      ; [debug line = 130:4]

; <label>:69                                      ; preds = %58
  %70 = load %struct.SHA256_CTX** %1, align 4, !dbg !230 ; [#uses=1 type=%struct.SHA256_CTX*] [debug line = 130:58]
  %71 = getelementptr inbounds %struct.SHA256_CTX* %70, i32 0, i32 2, !dbg !230 ; [#uses=1 type=[2 x i32]*] [debug line = 130:58]
  %72 = getelementptr inbounds [2 x i32]* %71, i32 0, i32 1, !dbg !230 ; [#uses=2 type=i32*] [debug line = 130:58]
  %73 = load i32* %72, align 4, !dbg !230         ; [#uses=1 type=i32] [debug line = 130:58]
  %74 = add i32 %73, 1, !dbg !230                 ; [#uses=1 type=i32] [debug line = 130:58]
  store i32 %74, i32* %72, align 4, !dbg !230     ; [debug line = 130:58]
  br label %75, !dbg !230                         ; [debug line = 130:58]

; <label>:75                                      ; preds = %69, %58
  %76 = load %struct.SHA256_CTX** %1, align 4, !dbg !231 ; [#uses=1 type=%struct.SHA256_CTX*] [debug line = 130:76]
  %77 = getelementptr inbounds %struct.SHA256_CTX* %76, i32 0, i32 1, !dbg !231 ; [#uses=1 type=i32*] [debug line = 130:76]
  %78 = load i32* %77, align 4, !dbg !231         ; [#uses=1 type=i32] [debug line = 130:76]
  %79 = mul i32 %78, 8, !dbg !231                 ; [#uses=1 type=i32] [debug line = 130:76]
  %80 = load %struct.SHA256_CTX** %1, align 4, !dbg !231 ; [#uses=1 type=%struct.SHA256_CTX*] [debug line = 130:76]
  %81 = getelementptr inbounds %struct.SHA256_CTX* %80, i32 0, i32 2, !dbg !231 ; [#uses=1 type=[2 x i32]*] [debug line = 130:76]
  %82 = getelementptr inbounds [2 x i32]* %81, i32 0, i32 0, !dbg !231 ; [#uses=2 type=i32*] [debug line = 130:76]
  %83 = load i32* %82, align 4, !dbg !231         ; [#uses=1 type=i32] [debug line = 130:76]
  %84 = add i32 %83, %79, !dbg !231               ; [#uses=1 type=i32] [debug line = 130:76]
  store i32 %84, i32* %82, align 4, !dbg !231     ; [debug line = 130:76]
  %85 = load %struct.SHA256_CTX** %1, align 4, !dbg !232 ; [#uses=1 type=%struct.SHA256_CTX*] [debug line = 131:4]
  %86 = getelementptr inbounds %struct.SHA256_CTX* %85, i32 0, i32 2, !dbg !232 ; [#uses=1 type=[2 x i32]*] [debug line = 131:4]
  %87 = getelementptr inbounds [2 x i32]* %86, i32 0, i32 0, !dbg !232 ; [#uses=1 type=i32*] [debug line = 131:4]
  %88 = load i32* %87, align 4, !dbg !232         ; [#uses=1 type=i32] [debug line = 131:4]
  %89 = trunc i32 %88 to i8, !dbg !232            ; [#uses=1 type=i8] [debug line = 131:4]
  %90 = load %struct.SHA256_CTX** %1, align 4, !dbg !232 ; [#uses=1 type=%struct.SHA256_CTX*] [debug line = 131:4]
  %91 = getelementptr inbounds %struct.SHA256_CTX* %90, i32 0, i32 0, !dbg !232 ; [#uses=1 type=[64 x i8]*] [debug line = 131:4]
  %92 = getelementptr inbounds [64 x i8]* %91, i32 0, i32 63, !dbg !232 ; [#uses=1 type=i8*] [debug line = 131:4]
  store i8 %89, i8* %92, align 1, !dbg !232       ; [debug line = 131:4]
  %93 = load %struct.SHA256_CTX** %1, align 4, !dbg !233 ; [#uses=1 type=%struct.SHA256_CTX*] [debug line = 132:4]
  %94 = getelementptr inbounds %struct.SHA256_CTX* %93, i32 0, i32 2, !dbg !233 ; [#uses=1 type=[2 x i32]*] [debug line = 132:4]
  %95 = getelementptr inbounds [2 x i32]* %94, i32 0, i32 0, !dbg !233 ; [#uses=1 type=i32*] [debug line = 132:4]
  %96 = load i32* %95, align 4, !dbg !233         ; [#uses=1 type=i32] [debug line = 132:4]
  %97 = lshr i32 %96, 8, !dbg !233                ; [#uses=1 type=i32] [debug line = 132:4]
  %98 = trunc i32 %97 to i8, !dbg !233            ; [#uses=1 type=i8] [debug line = 132:4]
  %99 = load %struct.SHA256_CTX** %1, align 4, !dbg !233 ; [#uses=1 type=%struct.SHA256_CTX*] [debug line = 132:4]
  %100 = getelementptr inbounds %struct.SHA256_CTX* %99, i32 0, i32 0, !dbg !233 ; [#uses=1 type=[64 x i8]*] [debug line = 132:4]
  %101 = getelementptr inbounds [64 x i8]* %100, i32 0, i32 62, !dbg !233 ; [#uses=1 type=i8*] [debug line = 132:4]
  store i8 %98, i8* %101, align 1, !dbg !233      ; [debug line = 132:4]
  %102 = load %struct.SHA256_CTX** %1, align 4, !dbg !234 ; [#uses=1 type=%struct.SHA256_CTX*] [debug line = 133:4]
  %103 = getelementptr inbounds %struct.SHA256_CTX* %102, i32 0, i32 2, !dbg !234 ; [#uses=1 type=[2 x i32]*] [debug line = 133:4]
  %104 = getelementptr inbounds [2 x i32]* %103, i32 0, i32 0, !dbg !234 ; [#uses=1 type=i32*] [debug line = 133:4]
  %105 = load i32* %104, align 4, !dbg !234       ; [#uses=1 type=i32] [debug line = 133:4]
  %106 = lshr i32 %105, 16, !dbg !234             ; [#uses=1 type=i32] [debug line = 133:4]
  %107 = trunc i32 %106 to i8, !dbg !234          ; [#uses=1 type=i8] [debug line = 133:4]
  %108 = load %struct.SHA256_CTX** %1, align 4, !dbg !234 ; [#uses=1 type=%struct.SHA256_CTX*] [debug line = 133:4]
  %109 = getelementptr inbounds %struct.SHA256_CTX* %108, i32 0, i32 0, !dbg !234 ; [#uses=1 type=[64 x i8]*] [debug line = 133:4]
  %110 = getelementptr inbounds [64 x i8]* %109, i32 0, i32 61, !dbg !234 ; [#uses=1 type=i8*] [debug line = 133:4]
  store i8 %107, i8* %110, align 1, !dbg !234     ; [debug line = 133:4]
  %111 = load %struct.SHA256_CTX** %1, align 4, !dbg !235 ; [#uses=1 type=%struct.SHA256_CTX*] [debug line = 134:4]
  %112 = getelementptr inbounds %struct.SHA256_CTX* %111, i32 0, i32 2, !dbg !235 ; [#uses=1 type=[2 x i32]*] [debug line = 134:4]
  %113 = getelementptr inbounds [2 x i32]* %112, i32 0, i32 0, !dbg !235 ; [#uses=1 type=i32*] [debug line = 134:4]
  %114 = load i32* %113, align 4, !dbg !235       ; [#uses=1 type=i32] [debug line = 134:4]
  %115 = lshr i32 %114, 24, !dbg !235             ; [#uses=1 type=i32] [debug line = 134:4]
  %116 = trunc i32 %115 to i8, !dbg !235          ; [#uses=1 type=i8] [debug line = 134:4]
  %117 = load %struct.SHA256_CTX** %1, align 4, !dbg !235 ; [#uses=1 type=%struct.SHA256_CTX*] [debug line = 134:4]
  %118 = getelementptr inbounds %struct.SHA256_CTX* %117, i32 0, i32 0, !dbg !235 ; [#uses=1 type=[64 x i8]*] [debug line = 134:4]
  %119 = getelementptr inbounds [64 x i8]* %118, i32 0, i32 60, !dbg !235 ; [#uses=1 type=i8*] [debug line = 134:4]
  store i8 %116, i8* %119, align 1, !dbg !235     ; [debug line = 134:4]
  %120 = load %struct.SHA256_CTX** %1, align 4, !dbg !236 ; [#uses=1 type=%struct.SHA256_CTX*] [debug line = 135:4]
  %121 = getelementptr inbounds %struct.SHA256_CTX* %120, i32 0, i32 2, !dbg !236 ; [#uses=1 type=[2 x i32]*] [debug line = 135:4]
  %122 = getelementptr inbounds [2 x i32]* %121, i32 0, i32 1, !dbg !236 ; [#uses=1 type=i32*] [debug line = 135:4]
  %123 = load i32* %122, align 4, !dbg !236       ; [#uses=1 type=i32] [debug line = 135:4]
  %124 = trunc i32 %123 to i8, !dbg !236          ; [#uses=1 type=i8] [debug line = 135:4]
  %125 = load %struct.SHA256_CTX** %1, align 4, !dbg !236 ; [#uses=1 type=%struct.SHA256_CTX*] [debug line = 135:4]
  %126 = getelementptr inbounds %struct.SHA256_CTX* %125, i32 0, i32 0, !dbg !236 ; [#uses=1 type=[64 x i8]*] [debug line = 135:4]
  %127 = getelementptr inbounds [64 x i8]* %126, i32 0, i32 59, !dbg !236 ; [#uses=1 type=i8*] [debug line = 135:4]
  store i8 %124, i8* %127, align 1, !dbg !236     ; [debug line = 135:4]
  %128 = load %struct.SHA256_CTX** %1, align 4, !dbg !237 ; [#uses=1 type=%struct.SHA256_CTX*] [debug line = 136:4]
  %129 = getelementptr inbounds %struct.SHA256_CTX* %128, i32 0, i32 2, !dbg !237 ; [#uses=1 type=[2 x i32]*] [debug line = 136:4]
  %130 = getelementptr inbounds [2 x i32]* %129, i32 0, i32 1, !dbg !237 ; [#uses=1 type=i32*] [debug line = 136:4]
  %131 = load i32* %130, align 4, !dbg !237       ; [#uses=1 type=i32] [debug line = 136:4]
  %132 = lshr i32 %131, 8, !dbg !237              ; [#uses=1 type=i32] [debug line = 136:4]
  %133 = trunc i32 %132 to i8, !dbg !237          ; [#uses=1 type=i8] [debug line = 136:4]
  %134 = load %struct.SHA256_CTX** %1, align 4, !dbg !237 ; [#uses=1 type=%struct.SHA256_CTX*] [debug line = 136:4]
  %135 = getelementptr inbounds %struct.SHA256_CTX* %134, i32 0, i32 0, !dbg !237 ; [#uses=1 type=[64 x i8]*] [debug line = 136:4]
  %136 = getelementptr inbounds [64 x i8]* %135, i32 0, i32 58, !dbg !237 ; [#uses=1 type=i8*] [debug line = 136:4]
  store i8 %133, i8* %136, align 1, !dbg !237     ; [debug line = 136:4]
  %137 = load %struct.SHA256_CTX** %1, align 4, !dbg !238 ; [#uses=1 type=%struct.SHA256_CTX*] [debug line = 137:4]
  %138 = getelementptr inbounds %struct.SHA256_CTX* %137, i32 0, i32 2, !dbg !238 ; [#uses=1 type=[2 x i32]*] [debug line = 137:4]
  %139 = getelementptr inbounds [2 x i32]* %138, i32 0, i32 1, !dbg !238 ; [#uses=1 type=i32*] [debug line = 137:4]
  %140 = load i32* %139, align 4, !dbg !238       ; [#uses=1 type=i32] [debug line = 137:4]
  %141 = lshr i32 %140, 16, !dbg !238             ; [#uses=1 type=i32] [debug line = 137:4]
  %142 = trunc i32 %141 to i8, !dbg !238          ; [#uses=1 type=i8] [debug line = 137:4]
  %143 = load %struct.SHA256_CTX** %1, align 4, !dbg !238 ; [#uses=1 type=%struct.SHA256_CTX*] [debug line = 137:4]
  %144 = getelementptr inbounds %struct.SHA256_CTX* %143, i32 0, i32 0, !dbg !238 ; [#uses=1 type=[64 x i8]*] [debug line = 137:4]
  %145 = getelementptr inbounds [64 x i8]* %144, i32 0, i32 57, !dbg !238 ; [#uses=1 type=i8*] [debug line = 137:4]
  store i8 %142, i8* %145, align 1, !dbg !238     ; [debug line = 137:4]
  %146 = load %struct.SHA256_CTX** %1, align 4, !dbg !239 ; [#uses=1 type=%struct.SHA256_CTX*] [debug line = 138:4]
  %147 = getelementptr inbounds %struct.SHA256_CTX* %146, i32 0, i32 2, !dbg !239 ; [#uses=1 type=[2 x i32]*] [debug line = 138:4]
  %148 = getelementptr inbounds [2 x i32]* %147, i32 0, i32 1, !dbg !239 ; [#uses=1 type=i32*] [debug line = 138:4]
  %149 = load i32* %148, align 4, !dbg !239       ; [#uses=1 type=i32] [debug line = 138:4]
  %150 = lshr i32 %149, 24, !dbg !239             ; [#uses=1 type=i32] [debug line = 138:4]
  %151 = trunc i32 %150 to i8, !dbg !239          ; [#uses=1 type=i8] [debug line = 138:4]
  %152 = load %struct.SHA256_CTX** %1, align 4, !dbg !239 ; [#uses=1 type=%struct.SHA256_CTX*] [debug line = 138:4]
  %153 = getelementptr inbounds %struct.SHA256_CTX* %152, i32 0, i32 0, !dbg !239 ; [#uses=1 type=[64 x i8]*] [debug line = 138:4]
  %154 = getelementptr inbounds [64 x i8]* %153, i32 0, i32 56, !dbg !239 ; [#uses=1 type=i8*] [debug line = 138:4]
  store i8 %151, i8* %154, align 1, !dbg !239     ; [debug line = 138:4]
  %155 = load %struct.SHA256_CTX** %1, align 4, !dbg !240 ; [#uses=1 type=%struct.SHA256_CTX*] [debug line = 139:4]
  %156 = load %struct.SHA256_CTX** %1, align 4, !dbg !240 ; [#uses=1 type=%struct.SHA256_CTX*] [debug line = 139:4]
  %157 = getelementptr inbounds %struct.SHA256_CTX* %156, i32 0, i32 0, !dbg !240 ; [#uses=1 type=[64 x i8]*] [debug line = 139:4]
  %158 = getelementptr inbounds [64 x i8]* %157, i32 0, i32 0, !dbg !240 ; [#uses=1 type=i8*] [debug line = 139:4]
  call void @sha256_transform(%struct.SHA256_CTX* %155, i8* %158), !dbg !240 ; [debug line = 139:4]
  store i32 0, i32* %i, align 4, !dbg !241        ; [debug line = 143:9]
  br label %159, !dbg !241                        ; [debug line = 143:9]

; <label>:159                                     ; preds = %274, %75
  %160 = load i32* %i, align 4, !dbg !241         ; [#uses=1 type=i32] [debug line = 143:9]
  %161 = icmp ult i32 %160, 4, !dbg !241          ; [#uses=1 type=i1] [debug line = 143:9]
  br i1 %161, label %162, label %277, !dbg !241   ; [debug line = 143:9]

; <label>:162                                     ; preds = %159
  call void bitcast (void (...)* @_ssdm_RegionBegin to void (i8*)*)(i8* getelementptr inbounds ([12 x i8]* @.str6, i32 0, i32 0)) nounwind, !dbg !243 ; [debug line = 143:27]
  call void bitcast (void (...)* @_ssdm_op_SpecLoopTripCount to void (i32, i32, i32, i8*)*)(i32 12, i32 100, i32 56, i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0)) nounwind, !dbg !245 ; [debug line = 144:1]
  %163 = load %struct.SHA256_CTX** %1, align 4, !dbg !246 ; [#uses=1 type=%struct.SHA256_CTX*] [debug line = 145:2]
  %164 = getelementptr inbounds %struct.SHA256_CTX* %163, i32 0, i32 3, !dbg !246 ; [#uses=1 type=[8 x i32]*] [debug line = 145:2]
  %165 = getelementptr inbounds [8 x i32]* %164, i32 0, i32 0, !dbg !246 ; [#uses=1 type=i32*] [debug line = 145:2]
  %166 = load i32* %165, align 4, !dbg !246       ; [#uses=1 type=i32] [debug line = 145:2]
  %167 = load i32* %i, align 4, !dbg !246         ; [#uses=1 type=i32] [debug line = 145:2]
  %168 = mul i32 %167, 8, !dbg !246               ; [#uses=1 type=i32] [debug line = 145:2]
  %169 = sub i32 24, %168, !dbg !246              ; [#uses=1 type=i32] [debug line = 145:2]
  %170 = lshr i32 %166, %169, !dbg !246           ; [#uses=1 type=i32] [debug line = 145:2]
  %171 = and i32 %170, 255, !dbg !246             ; [#uses=1 type=i32] [debug line = 145:2]
  %172 = trunc i32 %171 to i8, !dbg !246          ; [#uses=1 type=i8] [debug line = 145:2]
  %173 = load i32* %i, align 4, !dbg !246         ; [#uses=1 type=i32] [debug line = 145:2]
  %174 = load i8** %2, align 4, !dbg !246         ; [#uses=1 type=i8*] [debug line = 145:2]
  %175 = getelementptr inbounds i8* %174, i32 %173, !dbg !246 ; [#uses=1 type=i8*] [debug line = 145:2]
  store i8 %172, i8* %175, align 1, !dbg !246     ; [debug line = 145:2]
  %176 = load %struct.SHA256_CTX** %1, align 4, !dbg !247 ; [#uses=1 type=%struct.SHA256_CTX*] [debug line = 146:7]
  %177 = getelementptr inbounds %struct.SHA256_CTX* %176, i32 0, i32 3, !dbg !247 ; [#uses=1 type=[8 x i32]*] [debug line = 146:7]
  %178 = getelementptr inbounds [8 x i32]* %177, i32 0, i32 1, !dbg !247 ; [#uses=1 type=i32*] [debug line = 146:7]
  %179 = load i32* %178, align 4, !dbg !247       ; [#uses=1 type=i32] [debug line = 146:7]
  %180 = load i32* %i, align 4, !dbg !247         ; [#uses=1 type=i32] [debug line = 146:7]
  %181 = mul i32 %180, 8, !dbg !247               ; [#uses=1 type=i32] [debug line = 146:7]
  %182 = sub i32 24, %181, !dbg !247              ; [#uses=1 type=i32] [debug line = 146:7]
  %183 = lshr i32 %179, %182, !dbg !247           ; [#uses=1 type=i32] [debug line = 146:7]
  %184 = and i32 %183, 255, !dbg !247             ; [#uses=1 type=i32] [debug line = 146:7]
  %185 = trunc i32 %184 to i8, !dbg !247          ; [#uses=1 type=i8] [debug line = 146:7]
  %186 = load i32* %i, align 4, !dbg !247         ; [#uses=1 type=i32] [debug line = 146:7]
  %187 = add i32 %186, 4, !dbg !247               ; [#uses=1 type=i32] [debug line = 146:7]
  %188 = load i8** %2, align 4, !dbg !247         ; [#uses=1 type=i8*] [debug line = 146:7]
  %189 = getelementptr inbounds i8* %188, i32 %187, !dbg !247 ; [#uses=1 type=i8*] [debug line = 146:7]
  store i8 %185, i8* %189, align 1, !dbg !247     ; [debug line = 146:7]
  %190 = load %struct.SHA256_CTX** %1, align 4, !dbg !248 ; [#uses=1 type=%struct.SHA256_CTX*] [debug line = 147:7]
  %191 = getelementptr inbounds %struct.SHA256_CTX* %190, i32 0, i32 3, !dbg !248 ; [#uses=1 type=[8 x i32]*] [debug line = 147:7]
  %192 = getelementptr inbounds [8 x i32]* %191, i32 0, i32 2, !dbg !248 ; [#uses=1 type=i32*] [debug line = 147:7]
  %193 = load i32* %192, align 4, !dbg !248       ; [#uses=1 type=i32] [debug line = 147:7]
  %194 = load i32* %i, align 4, !dbg !248         ; [#uses=1 type=i32] [debug line = 147:7]
  %195 = mul i32 %194, 8, !dbg !248               ; [#uses=1 type=i32] [debug line = 147:7]
  %196 = sub i32 24, %195, !dbg !248              ; [#uses=1 type=i32] [debug line = 147:7]
  %197 = lshr i32 %193, %196, !dbg !248           ; [#uses=1 type=i32] [debug line = 147:7]
  %198 = and i32 %197, 255, !dbg !248             ; [#uses=1 type=i32] [debug line = 147:7]
  %199 = trunc i32 %198 to i8, !dbg !248          ; [#uses=1 type=i8] [debug line = 147:7]
  %200 = load i32* %i, align 4, !dbg !248         ; [#uses=1 type=i32] [debug line = 147:7]
  %201 = add i32 %200, 8, !dbg !248               ; [#uses=1 type=i32] [debug line = 147:7]
  %202 = load i8** %2, align 4, !dbg !248         ; [#uses=1 type=i8*] [debug line = 147:7]
  %203 = getelementptr inbounds i8* %202, i32 %201, !dbg !248 ; [#uses=1 type=i8*] [debug line = 147:7]
  store i8 %199, i8* %203, align 1, !dbg !248     ; [debug line = 147:7]
  %204 = load %struct.SHA256_CTX** %1, align 4, !dbg !249 ; [#uses=1 type=%struct.SHA256_CTX*] [debug line = 148:7]
  %205 = getelementptr inbounds %struct.SHA256_CTX* %204, i32 0, i32 3, !dbg !249 ; [#uses=1 type=[8 x i32]*] [debug line = 148:7]
  %206 = getelementptr inbounds [8 x i32]* %205, i32 0, i32 3, !dbg !249 ; [#uses=1 type=i32*] [debug line = 148:7]
  %207 = load i32* %206, align 4, !dbg !249       ; [#uses=1 type=i32] [debug line = 148:7]
  %208 = load i32* %i, align 4, !dbg !249         ; [#uses=1 type=i32] [debug line = 148:7]
  %209 = mul i32 %208, 8, !dbg !249               ; [#uses=1 type=i32] [debug line = 148:7]
  %210 = sub i32 24, %209, !dbg !249              ; [#uses=1 type=i32] [debug line = 148:7]
  %211 = lshr i32 %207, %210, !dbg !249           ; [#uses=1 type=i32] [debug line = 148:7]
  %212 = and i32 %211, 255, !dbg !249             ; [#uses=1 type=i32] [debug line = 148:7]
  %213 = trunc i32 %212 to i8, !dbg !249          ; [#uses=1 type=i8] [debug line = 148:7]
  %214 = load i32* %i, align 4, !dbg !249         ; [#uses=1 type=i32] [debug line = 148:7]
  %215 = add i32 %214, 12, !dbg !249              ; [#uses=1 type=i32] [debug line = 148:7]
  %216 = load i8** %2, align 4, !dbg !249         ; [#uses=1 type=i8*] [debug line = 148:7]
  %217 = getelementptr inbounds i8* %216, i32 %215, !dbg !249 ; [#uses=1 type=i8*] [debug line = 148:7]
  store i8 %213, i8* %217, align 1, !dbg !249     ; [debug line = 148:7]
  %218 = load %struct.SHA256_CTX** %1, align 4, !dbg !250 ; [#uses=1 type=%struct.SHA256_CTX*] [debug line = 149:7]
  %219 = getelementptr inbounds %struct.SHA256_CTX* %218, i32 0, i32 3, !dbg !250 ; [#uses=1 type=[8 x i32]*] [debug line = 149:7]
  %220 = getelementptr inbounds [8 x i32]* %219, i32 0, i32 4, !dbg !250 ; [#uses=1 type=i32*] [debug line = 149:7]
  %221 = load i32* %220, align 4, !dbg !250       ; [#uses=1 type=i32] [debug line = 149:7]
  %222 = load i32* %i, align 4, !dbg !250         ; [#uses=1 type=i32] [debug line = 149:7]
  %223 = mul i32 %222, 8, !dbg !250               ; [#uses=1 type=i32] [debug line = 149:7]
  %224 = sub i32 24, %223, !dbg !250              ; [#uses=1 type=i32] [debug line = 149:7]
  %225 = lshr i32 %221, %224, !dbg !250           ; [#uses=1 type=i32] [debug line = 149:7]
  %226 = and i32 %225, 255, !dbg !250             ; [#uses=1 type=i32] [debug line = 149:7]
  %227 = trunc i32 %226 to i8, !dbg !250          ; [#uses=1 type=i8] [debug line = 149:7]
  %228 = load i32* %i, align 4, !dbg !250         ; [#uses=1 type=i32] [debug line = 149:7]
  %229 = add i32 %228, 16, !dbg !250              ; [#uses=1 type=i32] [debug line = 149:7]
  %230 = load i8** %2, align 4, !dbg !250         ; [#uses=1 type=i8*] [debug line = 149:7]
  %231 = getelementptr inbounds i8* %230, i32 %229, !dbg !250 ; [#uses=1 type=i8*] [debug line = 149:7]
  store i8 %227, i8* %231, align 1, !dbg !250     ; [debug line = 149:7]
  %232 = load %struct.SHA256_CTX** %1, align 4, !dbg !251 ; [#uses=1 type=%struct.SHA256_CTX*] [debug line = 150:7]
  %233 = getelementptr inbounds %struct.SHA256_CTX* %232, i32 0, i32 3, !dbg !251 ; [#uses=1 type=[8 x i32]*] [debug line = 150:7]
  %234 = getelementptr inbounds [8 x i32]* %233, i32 0, i32 5, !dbg !251 ; [#uses=1 type=i32*] [debug line = 150:7]
  %235 = load i32* %234, align 4, !dbg !251       ; [#uses=1 type=i32] [debug line = 150:7]
  %236 = load i32* %i, align 4, !dbg !251         ; [#uses=1 type=i32] [debug line = 150:7]
  %237 = mul i32 %236, 8, !dbg !251               ; [#uses=1 type=i32] [debug line = 150:7]
  %238 = sub i32 24, %237, !dbg !251              ; [#uses=1 type=i32] [debug line = 150:7]
  %239 = lshr i32 %235, %238, !dbg !251           ; [#uses=1 type=i32] [debug line = 150:7]
  %240 = and i32 %239, 255, !dbg !251             ; [#uses=1 type=i32] [debug line = 150:7]
  %241 = trunc i32 %240 to i8, !dbg !251          ; [#uses=1 type=i8] [debug line = 150:7]
  %242 = load i32* %i, align 4, !dbg !251         ; [#uses=1 type=i32] [debug line = 150:7]
  %243 = add i32 %242, 20, !dbg !251              ; [#uses=1 type=i32] [debug line = 150:7]
  %244 = load i8** %2, align 4, !dbg !251         ; [#uses=1 type=i8*] [debug line = 150:7]
  %245 = getelementptr inbounds i8* %244, i32 %243, !dbg !251 ; [#uses=1 type=i8*] [debug line = 150:7]
  store i8 %241, i8* %245, align 1, !dbg !251     ; [debug line = 150:7]
  %246 = load %struct.SHA256_CTX** %1, align 4, !dbg !252 ; [#uses=1 type=%struct.SHA256_CTX*] [debug line = 151:7]
  %247 = getelementptr inbounds %struct.SHA256_CTX* %246, i32 0, i32 3, !dbg !252 ; [#uses=1 type=[8 x i32]*] [debug line = 151:7]
  %248 = getelementptr inbounds [8 x i32]* %247, i32 0, i32 6, !dbg !252 ; [#uses=1 type=i32*] [debug line = 151:7]
  %249 = load i32* %248, align 4, !dbg !252       ; [#uses=1 type=i32] [debug line = 151:7]
  %250 = load i32* %i, align 4, !dbg !252         ; [#uses=1 type=i32] [debug line = 151:7]
  %251 = mul i32 %250, 8, !dbg !252               ; [#uses=1 type=i32] [debug line = 151:7]
  %252 = sub i32 24, %251, !dbg !252              ; [#uses=1 type=i32] [debug line = 151:7]
  %253 = lshr i32 %249, %252, !dbg !252           ; [#uses=1 type=i32] [debug line = 151:7]
  %254 = and i32 %253, 255, !dbg !252             ; [#uses=1 type=i32] [debug line = 151:7]
  %255 = trunc i32 %254 to i8, !dbg !252          ; [#uses=1 type=i8] [debug line = 151:7]
  %256 = load i32* %i, align 4, !dbg !252         ; [#uses=1 type=i32] [debug line = 151:7]
  %257 = add i32 %256, 24, !dbg !252              ; [#uses=1 type=i32] [debug line = 151:7]
  %258 = load i8** %2, align 4, !dbg !252         ; [#uses=1 type=i8*] [debug line = 151:7]
  %259 = getelementptr inbounds i8* %258, i32 %257, !dbg !252 ; [#uses=1 type=i8*] [debug line = 151:7]
  store i8 %255, i8* %259, align 1, !dbg !252     ; [debug line = 151:7]
  %260 = load %struct.SHA256_CTX** %1, align 4, !dbg !253 ; [#uses=1 type=%struct.SHA256_CTX*] [debug line = 152:7]
  %261 = getelementptr inbounds %struct.SHA256_CTX* %260, i32 0, i32 3, !dbg !253 ; [#uses=1 type=[8 x i32]*] [debug line = 152:7]
  %262 = getelementptr inbounds [8 x i32]* %261, i32 0, i32 7, !dbg !253 ; [#uses=1 type=i32*] [debug line = 152:7]
  %263 = load i32* %262, align 4, !dbg !253       ; [#uses=1 type=i32] [debug line = 152:7]
  %264 = load i32* %i, align 4, !dbg !253         ; [#uses=1 type=i32] [debug line = 152:7]
  %265 = mul i32 %264, 8, !dbg !253               ; [#uses=1 type=i32] [debug line = 152:7]
  %266 = sub i32 24, %265, !dbg !253              ; [#uses=1 type=i32] [debug line = 152:7]
  %267 = lshr i32 %263, %266, !dbg !253           ; [#uses=1 type=i32] [debug line = 152:7]
  %268 = and i32 %267, 255, !dbg !253             ; [#uses=1 type=i32] [debug line = 152:7]
  %269 = trunc i32 %268 to i8, !dbg !253          ; [#uses=1 type=i8] [debug line = 152:7]
  %270 = load i32* %i, align 4, !dbg !253         ; [#uses=1 type=i32] [debug line = 152:7]
  %271 = add i32 %270, 28, !dbg !253              ; [#uses=1 type=i32] [debug line = 152:7]
  %272 = load i8** %2, align 4, !dbg !253         ; [#uses=1 type=i8*] [debug line = 152:7]
  %273 = getelementptr inbounds i8* %272, i32 %271, !dbg !253 ; [#uses=1 type=i8*] [debug line = 152:7]
  store i8 %269, i8* %273, align 1, !dbg !253     ; [debug line = 152:7]
  call void bitcast (void (...)* @_ssdm_RegionEnd to void (i8*)*)(i8* getelementptr inbounds ([12 x i8]* @.str6, i32 0, i32 0)) nounwind, !dbg !254 ; [debug line = 153:4]
  br label %274, !dbg !254                        ; [debug line = 153:4]

; <label>:274                                     ; preds = %162
  %275 = load i32* %i, align 4, !dbg !255         ; [#uses=1 type=i32] [debug line = 143:21]
  %276 = add i32 %275, 1, !dbg !255               ; [#uses=1 type=i32] [debug line = 143:21]
  store i32 %276, i32* %i, align 4, !dbg !255     ; [debug line = 143:21]
  br label %159, !dbg !255                        ; [debug line = 143:21]

; <label>:277                                     ; preds = %159
  ret void, !dbg !256                             ; [debug line = 154:1]
}

; [#uses=0]
define void @sha256(i8* %data, i32 %base_offset, i32 %bytes, i8* %digest) nounwind {
  %1 = alloca i8*, align 4                        ; [#uses=5 type=i8**]
  %2 = alloca i32, align 4                        ; [#uses=4 type=i32*]
  %3 = alloca i32, align 4                        ; [#uses=3 type=i32*]
  %4 = alloca i8*, align 4                        ; [#uses=4 type=i8**]
  %seg_buf = alloca [64 x i8], align 1            ; [#uses=6 type=[64 x i8]*]
  %seg_offset = alloca i32, align 4               ; [#uses=5 type=i32*]
  %i = alloca i32, align 4                        ; [#uses=19 type=i32*]
  %n = alloca i32, align 4                        ; [#uses=8 type=i32*]
  %sha256ctx = alloca %struct.SHA256_CTX, align 4 ; [#uses=4 type=%struct.SHA256_CTX*]
  store i8* %data, i8** %1, align 4
  call void @llvm.dbg.declare(metadata !{i8** %1}, metadata !257), !dbg !258 ; [debug line = 9:28] [debug variable = data]
  store i32 %base_offset, i32* %2, align 4
  call void @llvm.dbg.declare(metadata !{i32* %2}, metadata !259), !dbg !260 ; [debug line = 10:18] [debug variable = base_offset]
  store i32 %bytes, i32* %3, align 4
  call void @llvm.dbg.declare(metadata !{i32* %3}, metadata !261), !dbg !262 ; [debug line = 11:18] [debug variable = bytes]
  store i8* %digest, i8** %4, align 4
  call void @llvm.dbg.declare(metadata !{i8** %4}, metadata !263), !dbg !264 ; [debug line = 12:19] [debug variable = digest]
  %5 = load i8** %1, align 4, !dbg !265           ; [#uses=1 type=i8*] [debug line = 12:81]
  call void bitcast (void (...)* @_ssdm_SpecArrayDimSize to void (i8*, i32)*)(i8* %5, i32 256) nounwind, !dbg !265 ; [debug line = 12:81]
  %6 = load i8** %4, align 4, !dbg !267           ; [#uses=1 type=i8*] [debug line = 12:114]
  call void bitcast (void (...)* @_ssdm_SpecArrayDimSize to void (i8*, i32)*)(i8* %6, i32 32) nounwind, !dbg !267 ; [debug line = 12:114]
  %7 = load i8** %1, align 4, !dbg !268           ; [#uses=1 type=i8*] [debug line = 16:1]
  call void bitcast (void (...)* @_ssdm_op_SpecInterface to void (i8*, i8*, i32, i32, i8*, i32, i32, i8*, i8*, i8*, i32, i32, i32, i32, i8*, i8*)*)(i8* %7, i8* getelementptr inbounds ([10 x i8]* @.str7, i32 0, i32 0), i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0), i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0), i32 0, i32 0, i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0)) nounwind, !dbg !268 ; [debug line = 16:1]
  %8 = load i8** %4, align 4, !dbg !269           ; [#uses=1 type=i8*] [debug line = 17:1]
  call void bitcast (void (...)* @_ssdm_op_SpecInterface to void (i8*, i8*, i32, i32, i8*, i32, i32, i8*, i8*, i8*, i32, i32, i32, i32, i8*, i8*)*)(i8* %8, i8* getelementptr inbounds ([10 x i8]* @.str7, i32 0, i32 0), i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0), i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0), i32 0, i32 0, i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0)) nounwind, !dbg !269 ; [debug line = 17:1]
  %9 = load i32* %2, align 4, !dbg !270           ; [#uses=1 type=i32] [debug line = 18:1]
  call void bitcast (void (...)* @_ssdm_op_SpecInterface to void (i32, i8*, i32, i32, i8*, i32, i32, i8*, i8*, i8*, i32, i32, i32, i32, i8*, i8*)*)(i32 %9, i8* getelementptr inbounds ([10 x i8]* @.str7, i32 0, i32 0), i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0), i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0), i32 0, i32 0, i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0)) nounwind, !dbg !270 ; [debug line = 18:1]
  %10 = load i32* %3, align 4, !dbg !271          ; [#uses=1 type=i32] [debug line = 19:1]
  call void bitcast (void (...)* @_ssdm_op_SpecInterface to void (i32, i8*, i32, i32, i8*, i32, i32, i8*, i8*, i8*, i32, i32, i32, i32, i8*, i8*)*)(i32 %10, i8* getelementptr inbounds ([10 x i8]* @.str7, i32 0, i32 0), i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0), i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0), i32 0, i32 0, i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0)) nounwind, !dbg !271 ; [debug line = 19:1]
  call void bitcast (void (...)* @_ssdm_op_SpecInterface to void (i32, i8*, i32, i32, i8*, i32, i32, i8*, i8*, i8*, i32, i32, i32, i32, i8*, i8*)*)(i32 0, i8* getelementptr inbounds ([10 x i8]* @.str7, i32 0, i32 0), i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0), i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0), i32 0, i32 0, i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0)) nounwind, !dbg !272 ; [debug line = 20:1]
  call void @llvm.dbg.declare(metadata !{[64 x i8]* %seg_buf}, metadata !273), !dbg !274 ; [debug line = 23:16] [debug variable = seg_buf]
  call void @llvm.dbg.declare(metadata !{i32* %seg_offset}, metadata !275), !dbg !276 ; [debug line = 24:15] [debug variable = seg_offset]
  store i32 0, i32* %seg_offset, align 4, !dbg !277 ; [debug line = 24:29]
  call void @llvm.dbg.declare(metadata !{i32* %i}, metadata !278), !dbg !279 ; [debug line = 25:6] [debug variable = i]
  store i32 0, i32* %i, align 4, !dbg !280        ; [debug line = 25:9]
  call void @llvm.dbg.declare(metadata !{i32* %n}, metadata !281), !dbg !282 ; [debug line = 26:15] [debug variable = n]
  %11 = load i32* %3, align 4, !dbg !283          ; [#uses=1 type=i32] [debug line = 26:24]
  store i32 %11, i32* %n, align 4, !dbg !283      ; [debug line = 26:24]
  call void @llvm.dbg.declare(metadata !{%struct.SHA256_CTX* %sha256ctx}, metadata !284), !dbg !285 ; [debug line = 29:13] [debug variable = sha256ctx]
  call void @sha256_init(%struct.SHA256_CTX* %sha256ctx), !dbg !286 ; [debug line = 30:2]
  br label %12, !dbg !287                         ; [debug line = 33:2]

; <label>:12                                      ; preds = %64, %0
  %13 = load i32* %n, align 4, !dbg !287          ; [#uses=1 type=i32] [debug line = 33:2]
  %14 = icmp ne i32 %13, 0, !dbg !287             ; [#uses=1 type=i1] [debug line = 33:2]
  br i1 %14, label %15, label %65, !dbg !287      ; [debug line = 33:2]

; <label>:15                                      ; preds = %12
  call void bitcast (void (...)* @_ssdm_RegionBegin to void (i8*)*)(i8* getelementptr inbounds ([12 x i8]* @.str8, i32 0, i32 0)) nounwind, !dbg !288 ; [debug line = 34:3]
  call void bitcast (void (...)* @_ssdm_op_SpecLoopTripCount to void (i32, i32, i32, i8*)*)(i32 12, i32 100, i32 56, i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0)) nounwind, !dbg !290 ; [debug line = 35:1]
  %16 = load i32* %n, align 4, !dbg !291          ; [#uses=1 type=i32] [debug line = 36:2]
  %17 = icmp uge i32 %16, 64, !dbg !291           ; [#uses=1 type=i1] [debug line = 36:2]
  br i1 %17, label %18, label %42, !dbg !291      ; [debug line = 36:2]

; <label>:18                                      ; preds = %15
  store i32 0, i32* %i, align 4, !dbg !292        ; [debug line = 38:9]
  br label %19, !dbg !292                         ; [debug line = 38:9]

; <label>:19                                      ; preds = %33, %18
  %20 = load i32* %i, align 4, !dbg !292          ; [#uses=1 type=i32] [debug line = 38:9]
  %21 = icmp slt i32 %20, 64, !dbg !292           ; [#uses=1 type=i1] [debug line = 38:9]
  br i1 %21, label %22, label %36, !dbg !292      ; [debug line = 38:9]

; <label>:22                                      ; preds = %19
  %23 = load i8** %1, align 4, !dbg !295          ; [#uses=1 type=i8*] [debug line = 39:5]
  %24 = load i32* %2, align 4, !dbg !295          ; [#uses=1 type=i32] [debug line = 39:5]
  %25 = getelementptr inbounds i8* %23, i32 %24, !dbg !295 ; [#uses=1 type=i8*] [debug line = 39:5]
  %26 = load i32* %seg_offset, align 4, !dbg !295 ; [#uses=1 type=i32] [debug line = 39:5]
  %27 = getelementptr inbounds i8* %25, i32 %26, !dbg !295 ; [#uses=1 type=i8*] [debug line = 39:5]
  %28 = load i32* %i, align 4, !dbg !295          ; [#uses=1 type=i32] [debug line = 39:5]
  %29 = getelementptr inbounds i8* %27, i32 %28, !dbg !295 ; [#uses=1 type=i8*] [debug line = 39:5]
  %30 = load i8* %29, align 1, !dbg !295          ; [#uses=1 type=i8] [debug line = 39:5]
  %31 = load i32* %i, align 4, !dbg !295          ; [#uses=1 type=i32] [debug line = 39:5]
  %32 = getelementptr inbounds [64 x i8]* %seg_buf, i32 0, i32 %31, !dbg !295 ; [#uses=1 type=i8*] [debug line = 39:5]
  store i8 %30, i8* %32, align 1, !dbg !295       ; [debug line = 39:5]
  br label %33, !dbg !295                         ; [debug line = 39:5]

; <label>:33                                      ; preds = %22
  %34 = load i32* %i, align 4, !dbg !296          ; [#uses=1 type=i32] [debug line = 38:20]
  %35 = add nsw i32 %34, 1, !dbg !296             ; [#uses=1 type=i32] [debug line = 38:20]
  store i32 %35, i32* %i, align 4, !dbg !296      ; [debug line = 38:20]
  br label %19, !dbg !296                         ; [debug line = 38:20]

; <label>:36                                      ; preds = %19
  %37 = load i32* %n, align 4, !dbg !297          ; [#uses=1 type=i32] [debug line = 40:4]
  %38 = sub i32 %37, 64, !dbg !297                ; [#uses=1 type=i32] [debug line = 40:4]
  store i32 %38, i32* %n, align 4, !dbg !297      ; [debug line = 40:4]
  %39 = load i32* %seg_offset, align 4, !dbg !298 ; [#uses=1 type=i32] [debug line = 41:4]
  %40 = add i32 %39, 64, !dbg !298                ; [#uses=1 type=i32] [debug line = 41:4]
  store i32 %40, i32* %seg_offset, align 4, !dbg !298 ; [debug line = 41:4]
  %41 = getelementptr inbounds [64 x i8]* %seg_buf, i32 0, i32 0, !dbg !299 ; [#uses=1 type=i8*] [debug line = 42:4]
  call void @sha256_update(%struct.SHA256_CTX* %sha256ctx, i8* %41, i32 64), !dbg !299 ; [debug line = 42:4]
  br label %64, !dbg !300                         ; [debug line = 43:3]

; <label>:42                                      ; preds = %15
  store i32 0, i32* %i, align 4, !dbg !301        ; [debug line = 46:9]
  br label %43, !dbg !301                         ; [debug line = 46:9]

; <label>:43                                      ; preds = %58, %42
  %44 = load i32* %i, align 4, !dbg !301          ; [#uses=1 type=i32] [debug line = 46:9]
  %45 = load i32* %n, align 4, !dbg !301          ; [#uses=1 type=i32] [debug line = 46:9]
  %46 = icmp ult i32 %44, %45, !dbg !301          ; [#uses=1 type=i1] [debug line = 46:9]
  br i1 %46, label %47, label %61, !dbg !301      ; [debug line = 46:9]

; <label>:47                                      ; preds = %43
  call void bitcast (void (...)* @_ssdm_RegionBegin to void (i8*)*)(i8* getelementptr inbounds ([12 x i8]* @.str9, i32 0, i32 0)) nounwind, !dbg !304 ; [debug line = 48:3]
  call void bitcast (void (...)* @_ssdm_op_SpecLoopTripCount to void (i32, i32, i32, i8*)*)(i32 12, i32 100, i32 56, i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0)) nounwind, !dbg !306 ; [debug line = 47:1]
  %48 = load i8** %1, align 4, !dbg !307          ; [#uses=1 type=i8*] [debug line = 48:2]
  %49 = load i32* %2, align 4, !dbg !307          ; [#uses=1 type=i32] [debug line = 48:2]
  %50 = getelementptr inbounds i8* %48, i32 %49, !dbg !307 ; [#uses=1 type=i8*] [debug line = 48:2]
  %51 = load i32* %seg_offset, align 4, !dbg !307 ; [#uses=1 type=i32] [debug line = 48:2]
  %52 = getelementptr inbounds i8* %50, i32 %51, !dbg !307 ; [#uses=1 type=i8*] [debug line = 48:2]
  %53 = load i32* %i, align 4, !dbg !307          ; [#uses=1 type=i32] [debug line = 48:2]
  %54 = getelementptr inbounds i8* %52, i32 %53, !dbg !307 ; [#uses=1 type=i8*] [debug line = 48:2]
  %55 = load i8* %54, align 1, !dbg !307          ; [#uses=1 type=i8] [debug line = 48:2]
  %56 = load i32* %i, align 4, !dbg !307          ; [#uses=1 type=i32] [debug line = 48:2]
  %57 = getelementptr inbounds [64 x i8]* %seg_buf, i32 0, i32 %56, !dbg !307 ; [#uses=1 type=i8*] [debug line = 48:2]
  store i8 %55, i8* %57, align 1, !dbg !307       ; [debug line = 48:2]
  call void bitcast (void (...)* @_ssdm_RegionEnd to void (i8*)*)(i8* getelementptr inbounds ([12 x i8]* @.str9, i32 0, i32 0)) nounwind, !dbg !308 ; [debug line = 48:50]
  br label %58, !dbg !308                         ; [debug line = 48:50]

; <label>:58                                      ; preds = %47
  %59 = load i32* %i, align 4, !dbg !309          ; [#uses=1 type=i32] [debug line = 46:19]
  %60 = add nsw i32 %59, 1, !dbg !309             ; [#uses=1 type=i32] [debug line = 46:19]
  store i32 %60, i32* %i, align 4, !dbg !309      ; [debug line = 46:19]
  br label %43, !dbg !309                         ; [debug line = 46:19]

; <label>:61                                      ; preds = %43
  %62 = getelementptr inbounds [64 x i8]* %seg_buf, i32 0, i32 0, !dbg !310 ; [#uses=1 type=i8*] [debug line = 49:4]
  %63 = load i32* %n, align 4, !dbg !310          ; [#uses=1 type=i32] [debug line = 49:4]
  call void @sha256_update(%struct.SHA256_CTX* %sha256ctx, i8* %62, i32 %63), !dbg !310 ; [debug line = 49:4]
  store i32 0, i32* %n, align 4, !dbg !311        ; [debug line = 50:4]
  br label %64

; <label>:64                                      ; preds = %61, %36
  call void bitcast (void (...)* @_ssdm_RegionEnd to void (i8*)*)(i8* getelementptr inbounds ([12 x i8]* @.str8, i32 0, i32 0)) nounwind, !dbg !312 ; [debug line = 52:2]
  br label %12, !dbg !312                         ; [debug line = 52:2]

; <label>:65                                      ; preds = %12
  %66 = getelementptr inbounds [64 x i8]* %seg_buf, i32 0, i32 0, !dbg !313 ; [#uses=1 type=i8*] [debug line = 55:2]
  call void @sha256_final(%struct.SHA256_CTX* %sha256ctx, i8* %66), !dbg !313 ; [debug line = 55:2]
  store i32 0, i32* %i, align 4, !dbg !314        ; [debug line = 57:7]
  br label %67, !dbg !314                         ; [debug line = 57:7]

; <label>:67                                      ; preds = %77, %65
  %68 = load i32* %i, align 4, !dbg !314          ; [#uses=1 type=i32] [debug line = 57:7]
  %69 = icmp slt i32 %68, 32, !dbg !314           ; [#uses=1 type=i1] [debug line = 57:7]
  br i1 %69, label %70, label %80, !dbg !314      ; [debug line = 57:7]

; <label>:70                                      ; preds = %67
  call void bitcast (void (...)* @_ssdm_RegionBegin to void (i8*)*)(i8* getelementptr inbounds ([12 x i8]* @.str10, i32 0, i32 0)) nounwind, !dbg !316 ; [debug line = 57:24]
  call void bitcast (void (...)* @_ssdm_op_SpecLoopTripCount to void (i32, i32, i32, i8*)*)(i32 12, i32 40, i32 26, i8* getelementptr inbounds ([1 x i8]* @.str1, i32 0, i32 0)) nounwind, !dbg !318 ; [debug line = 58:1]
  %71 = load i32* %i, align 4, !dbg !319          ; [#uses=1 type=i32] [debug line = 60:3]
  %72 = getelementptr inbounds [64 x i8]* %seg_buf, i32 0, i32 %71, !dbg !319 ; [#uses=1 type=i8*] [debug line = 60:3]
  %73 = load i8* %72, align 1, !dbg !319          ; [#uses=1 type=i8] [debug line = 60:3]
  %74 = load i32* %i, align 4, !dbg !319          ; [#uses=1 type=i32] [debug line = 60:3]
  %75 = load i8** %4, align 4, !dbg !319          ; [#uses=1 type=i8*] [debug line = 60:3]
  %76 = getelementptr inbounds i8* %75, i32 %74, !dbg !319 ; [#uses=1 type=i8*] [debug line = 60:3]
  store i8 %73, i8* %76, align 1, !dbg !319       ; [debug line = 60:3]
  call void bitcast (void (...)* @_ssdm_RegionEnd to void (i8*)*)(i8* getelementptr inbounds ([12 x i8]* @.str10, i32 0, i32 0)) nounwind, !dbg !320 ; [debug line = 61:2]
  br label %77, !dbg !320                         ; [debug line = 61:2]

; <label>:77                                      ; preds = %70
  %78 = load i32* %i, align 4, !dbg !321          ; [#uses=1 type=i32] [debug line = 57:18]
  %79 = add nsw i32 %78, 1, !dbg !321             ; [#uses=1 type=i32] [debug line = 57:18]
  store i32 %79, i32* %i, align 4, !dbg !321      ; [debug line = 57:18]
  br label %67, !dbg !321                         ; [debug line = 57:18]

; <label>:80                                      ; preds = %67
  ret void, !dbg !322                             ; [debug line = 62:1]
}

; [#uses=1]
declare void @_ssdm_SpecArrayDimSize(...) nounwind

; [#uses=2]
declare void @_ssdm_op_SpecInterface(...) nounwind

!llvm.dbg.cu = !{!0}
!opencl.kernels = !{!52, !59, !65, !71, !73}
!hls.encrypted.func = !{}

!0 = metadata !{i32 786449, i32 0, i32 1, metadata !"C:/Student/SHA_new/sha/solution2/.autopilot/db/sha256.pragma.2.c", metadata !"C:\5CStudent\5CSHA_new", metadata !"clang version 3.1 ", i1 true, i1 false, metadata !"", i32 0, metadata !1, metadata !1, metadata !3, metadata !43} ; [ DW_TAG_compile_unit ]
!1 = metadata !{metadata !2}
!2 = metadata !{i32 0}
!3 = metadata !{metadata !4}
!4 = metadata !{metadata !5, metadata !32, metadata !35, metadata !38, metadata !39}
!5 = metadata !{i32 786478, i32 0, metadata !6, metadata !"sha256_transform", metadata !"sha256_transform", metadata !"", metadata !6, i32 30, metadata !7, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, void (%struct.SHA256_CTX*, i8*)* @sha256_transform, null, null, metadata !30, i32 31} ; [ DW_TAG_subprogram ]
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
!32 = metadata !{i32 786478, i32 0, metadata !6, metadata !"sha256_init", metadata !"sha256_init", metadata !"", metadata !6, i32 74, metadata !33, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, void (%struct.SHA256_CTX*)* @sha256_init, null, null, metadata !30, i32 75} ; [ DW_TAG_subprogram ]
!33 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !34, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!34 = metadata !{null, metadata !9}
!35 = metadata !{i32 786478, i32 0, metadata !6, metadata !"sha256_update", metadata !"sha256_update", metadata !"", metadata !6, i32 89, metadata !36, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, void (%struct.SHA256_CTX*, i8*, i32)* @sha256_update, null, null, metadata !30, i32 90} ; [ DW_TAG_subprogram ]
!36 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !37, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!37 = metadata !{null, metadata !9, metadata !29, metadata !20}
!38 = metadata !{i32 786478, i32 0, metadata !6, metadata !"sha256_final", metadata !"sha256_final", metadata !"", metadata !6, i32 105, metadata !7, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, void (%struct.SHA256_CTX*, i8*)* @sha256_final, null, null, metadata !30, i32 106} ; [ DW_TAG_subprogram ]
!39 = metadata !{i32 786478, i32 0, metadata !40, metadata !"sha256", metadata !"sha256", metadata !"", metadata !40, i32 9, metadata !41, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, void (i8*, i32, i32, i8*)* @sha256, null, null, metadata !30, i32 12} ; [ DW_TAG_subprogram ]
!40 = metadata !{i32 786473, metadata !"sha256.c", metadata !"C:\5CStudent\5CSHA_new", null} ; [ DW_TAG_file_type ]
!41 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !42, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!42 = metadata !{null, metadata !29, metadata !20, metadata !20, metadata !29}
!43 = metadata !{metadata !44}
!44 = metadata !{metadata !45, metadata !47, metadata !50}
!45 = metadata !{i32 786484, i32 0, null, metadata !"k", metadata !"k", metadata !"", metadata !6, i32 18, metadata !46, i32 0, i32 1, [64 x i32]* @k} ; [ DW_TAG_variable ]
!46 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 2048, i64 32, i32 0, i32 0, metadata !20, metadata !17, i32 0, i32 0} ; [ DW_TAG_array_type ]
!47 = metadata !{i32 786484, i32 0, null, metadata !"_sys_nerr", metadata !"_sys_nerr", metadata !"", metadata !48, i32 157, metadata !49, i32 0, i32 1, i32* @_sys_nerr} ; [ DW_TAG_variable ]
!48 = metadata !{i32 786473, metadata !"C:/Xilinx/Vivado_HLS/2017.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\5Cstdlib.h", metadata !"C:\5CStudent\5CSHA_new", null} ; [ DW_TAG_file_type ]
!49 = metadata !{i32 786468, null, metadata !"int", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!50 = metadata !{i32 786484, i32 0, null, metadata !"_amblksiz", metadata !"_amblksiz", metadata !"", metadata !51, i32 53, metadata !20, i32 0, i32 1, i32* @_amblksiz} ; [ DW_TAG_variable ]
!51 = metadata !{i32 786473, metadata !"C:/Xilinx/Vivado_HLS/2017.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\5Cmalloc.h", metadata !"C:\5CStudent\5CSHA_new", null} ; [ DW_TAG_file_type ]
!52 = metadata !{void (%struct.SHA256_CTX*, i8*)* @sha256_transform, metadata !53, metadata !54, metadata !55, metadata !56, metadata !57, metadata !58}
!53 = metadata !{metadata !"kernel_arg_addr_space", i32 1, i32 1}
!54 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none", metadata !"none"}
!55 = metadata !{metadata !"kernel_arg_type", metadata !"SHA256_CTX*", metadata !"uchar*"}
!56 = metadata !{metadata !"kernel_arg_type_qual", metadata !"", metadata !""}
!57 = metadata !{metadata !"kernel_arg_name", metadata !"ctx", metadata !"data"}
!58 = metadata !{metadata !"reqd_work_group_size", i32 1, i32 1, i32 1}
!59 = metadata !{void (%struct.SHA256_CTX*)* @sha256_init, metadata !60, metadata !61, metadata !62, metadata !63, metadata !64, metadata !58}
!60 = metadata !{metadata !"kernel_arg_addr_space", i32 1}
!61 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none"}
!62 = metadata !{metadata !"kernel_arg_type", metadata !"SHA256_CTX*"}
!63 = metadata !{metadata !"kernel_arg_type_qual", metadata !""}
!64 = metadata !{metadata !"kernel_arg_name", metadata !"ctx"}
!65 = metadata !{void (%struct.SHA256_CTX*, i8*, i32)* @sha256_update, metadata !66, metadata !67, metadata !68, metadata !69, metadata !70, metadata !58}
!66 = metadata !{metadata !"kernel_arg_addr_space", i32 1, i32 1, i32 0}
!67 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none", metadata !"none", metadata !"none"}
!68 = metadata !{metadata !"kernel_arg_type", metadata !"SHA256_CTX*", metadata !"uchar*", metadata !"uint"}
!69 = metadata !{metadata !"kernel_arg_type_qual", metadata !"", metadata !"", metadata !""}
!70 = metadata !{metadata !"kernel_arg_name", metadata !"ctx", metadata !"data", metadata !"len"}
!71 = metadata !{void (%struct.SHA256_CTX*, i8*)* @sha256_final, metadata !53, metadata !54, metadata !55, metadata !56, metadata !72, metadata !58}
!72 = metadata !{metadata !"kernel_arg_name", metadata !"ctx", metadata !"hash"}
!73 = metadata !{void (i8*, i32, i32, i8*)* @sha256, metadata !74, metadata !75, metadata !76, metadata !77, metadata !78, metadata !58}
!74 = metadata !{metadata !"kernel_arg_addr_space", i32 1, i32 0, i32 0, i32 1}
!75 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none", metadata !"none", metadata !"none", metadata !"none"}
!76 = metadata !{metadata !"kernel_arg_type", metadata !"uchar*", metadata !"uint", metadata !"uint", metadata !"uchar*"}
!77 = metadata !{metadata !"kernel_arg_type_qual", metadata !"", metadata !"", metadata !"", metadata !""}
!78 = metadata !{metadata !"kernel_arg_name", metadata !"data", metadata !"base_offset", metadata !"bytes", metadata !"digest"}
!79 = metadata !{i32 786689, metadata !5, metadata !"ctx", metadata !6, i32 16777246, metadata !9, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!80 = metadata !{i32 30, i32 35, metadata !5, null}
!81 = metadata !{i32 786689, metadata !5, metadata !"data", metadata !6, i32 33554462, metadata !29, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!82 = metadata !{i32 30, i32 70, metadata !5, null}
!83 = metadata !{i32 786688, metadata !84, metadata !"a", metadata !6, i32 32, metadata !20, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!84 = metadata !{i32 786443, metadata !5, i32 31, i32 1, metadata !6, i32 0} ; [ DW_TAG_lexical_block ]
!85 = metadata !{i32 32, i32 34, metadata !84, null}
!86 = metadata !{i32 786688, metadata !84, metadata !"b", metadata !6, i32 32, metadata !20, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!87 = metadata !{i32 32, i32 36, metadata !84, null}
!88 = metadata !{i32 786688, metadata !84, metadata !"c", metadata !6, i32 32, metadata !20, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!89 = metadata !{i32 32, i32 38, metadata !84, null}
!90 = metadata !{i32 786688, metadata !84, metadata !"d", metadata !6, i32 32, metadata !20, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!91 = metadata !{i32 32, i32 40, metadata !84, null}
!92 = metadata !{i32 786688, metadata !84, metadata !"e", metadata !6, i32 32, metadata !20, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!93 = metadata !{i32 32, i32 42, metadata !84, null}
!94 = metadata !{i32 786688, metadata !84, metadata !"f", metadata !6, i32 32, metadata !20, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!95 = metadata !{i32 32, i32 44, metadata !84, null}
!96 = metadata !{i32 786688, metadata !84, metadata !"g", metadata !6, i32 32, metadata !20, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!97 = metadata !{i32 32, i32 46, metadata !84, null}
!98 = metadata !{i32 786688, metadata !84, metadata !"h", metadata !6, i32 32, metadata !20, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!99 = metadata !{i32 32, i32 48, metadata !84, null}
!100 = metadata !{i32 786688, metadata !84, metadata !"i", metadata !6, i32 32, metadata !20, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!101 = metadata !{i32 32, i32 50, metadata !84, null}
!102 = metadata !{i32 786688, metadata !84, metadata !"j", metadata !6, i32 32, metadata !20, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!103 = metadata !{i32 32, i32 52, metadata !84, null}
!104 = metadata !{i32 786688, metadata !84, metadata !"t1", metadata !6, i32 32, metadata !20, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!105 = metadata !{i32 32, i32 54, metadata !84, null}
!106 = metadata !{i32 786688, metadata !84, metadata !"t2", metadata !6, i32 32, metadata !20, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!107 = metadata !{i32 32, i32 57, metadata !84, null}
!108 = metadata !{i32 786688, metadata !84, metadata !"m", metadata !6, i32 32, metadata !46, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!109 = metadata !{i32 32, i32 60, metadata !84, null}
!110 = metadata !{i32 34, i32 9, metadata !111, null}
!111 = metadata !{i32 786443, metadata !84, i32 34, i32 4, metadata !6, i32 1} ; [ DW_TAG_lexical_block ]
!112 = metadata !{i32 36, i32 3, metadata !113, null}
!113 = metadata !{i32 786443, metadata !111, i32 36, i32 2, metadata !6, i32 2} ; [ DW_TAG_lexical_block ]
!114 = metadata !{i32 35, i32 1, metadata !113, null}
!115 = metadata !{i32 36, i32 2, metadata !113, null}
!116 = metadata !{i32 36, i32 76, metadata !113, null}
!117 = metadata !{i32 34, i32 26, metadata !111, null}
!118 = metadata !{i32 37, i32 4, metadata !119, null}
!119 = metadata !{i32 786443, metadata !84, i32 37, i32 4, metadata !6, i32 3} ; [ DW_TAG_lexical_block ]
!120 = metadata !{i32 39, i32 3, metadata !121, null}
!121 = metadata !{i32 786443, metadata !119, i32 39, i32 2, metadata !6, i32 4} ; [ DW_TAG_lexical_block ]
!122 = metadata !{i32 38, i32 1, metadata !121, null}
!123 = metadata !{i32 39, i32 2, metadata !121, null}
!124 = metadata !{i32 39, i32 0, metadata !121, null}
!125 = metadata !{i32 37, i32 20, metadata !119, null}
!126 = metadata !{i32 41, i32 4, metadata !84, null}
!127 = metadata !{i32 42, i32 4, metadata !84, null}
!128 = metadata !{i32 43, i32 4, metadata !84, null}
!129 = metadata !{i32 44, i32 4, metadata !84, null}
!130 = metadata !{i32 45, i32 4, metadata !84, null}
!131 = metadata !{i32 46, i32 4, metadata !84, null}
!132 = metadata !{i32 47, i32 4, metadata !84, null}
!133 = metadata !{i32 48, i32 4, metadata !84, null}
!134 = metadata !{i32 50, i32 9, metadata !135, null}
!135 = metadata !{i32 786443, metadata !84, i32 50, i32 4, metadata !6, i32 5} ; [ DW_TAG_lexical_block ]
!136 = metadata !{i32 50, i32 30, metadata !137, null}
!137 = metadata !{i32 786443, metadata !135, i32 50, i32 29, metadata !6, i32 6} ; [ DW_TAG_lexical_block ]
!138 = metadata !{i32 51, i32 1, metadata !137, null}
!139 = metadata !{i32 52, i32 2, metadata !137, null}
!140 = metadata !{i32 53, i32 7, metadata !137, null}
!141 = metadata !{i32 54, i32 7, metadata !137, null}
!142 = metadata !{i32 55, i32 7, metadata !137, null}
!143 = metadata !{i32 56, i32 7, metadata !137, null}
!144 = metadata !{i32 57, i32 7, metadata !137, null}
!145 = metadata !{i32 58, i32 7, metadata !137, null}
!146 = metadata !{i32 59, i32 7, metadata !137, null}
!147 = metadata !{i32 60, i32 7, metadata !137, null}
!148 = metadata !{i32 61, i32 7, metadata !137, null}
!149 = metadata !{i32 62, i32 4, metadata !137, null}
!150 = metadata !{i32 50, i32 24, metadata !135, null}
!151 = metadata !{i32 64, i32 4, metadata !84, null}
!152 = metadata !{i32 65, i32 4, metadata !84, null}
!153 = metadata !{i32 66, i32 4, metadata !84, null}
!154 = metadata !{i32 67, i32 4, metadata !84, null}
!155 = metadata !{i32 68, i32 4, metadata !84, null}
!156 = metadata !{i32 69, i32 4, metadata !84, null}
!157 = metadata !{i32 70, i32 4, metadata !84, null}
!158 = metadata !{i32 71, i32 4, metadata !84, null}
!159 = metadata !{i32 72, i32 1, metadata !84, null}
!160 = metadata !{i32 786689, metadata !32, metadata !"ctx", metadata !6, i32 16777290, metadata !9, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!161 = metadata !{i32 74, i32 30, metadata !32, null}
!162 = metadata !{i32 76, i32 4, metadata !163, null}
!163 = metadata !{i32 786443, metadata !32, i32 75, i32 1, metadata !6, i32 7} ; [ DW_TAG_lexical_block ]
!164 = metadata !{i32 77, i32 4, metadata !163, null}
!165 = metadata !{i32 78, i32 4, metadata !163, null}
!166 = metadata !{i32 79, i32 4, metadata !163, null}
!167 = metadata !{i32 80, i32 4, metadata !163, null}
!168 = metadata !{i32 81, i32 4, metadata !163, null}
!169 = metadata !{i32 82, i32 4, metadata !163, null}
!170 = metadata !{i32 83, i32 4, metadata !163, null}
!171 = metadata !{i32 84, i32 4, metadata !163, null}
!172 = metadata !{i32 85, i32 4, metadata !163, null}
!173 = metadata !{i32 86, i32 4, metadata !163, null}
!174 = metadata !{i32 87, i32 1, metadata !163, null}
!175 = metadata !{i32 786689, metadata !35, metadata !"ctx", metadata !6, i32 16777305, metadata !9, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!176 = metadata !{i32 89, i32 32, metadata !35, null}
!177 = metadata !{i32 786689, metadata !35, metadata !"data", metadata !6, i32 33554521, metadata !29, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!178 = metadata !{i32 89, i32 67, metadata !35, null}
!179 = metadata !{i32 786689, metadata !35, metadata !"len", metadata !6, i32 50331737, metadata !20, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!180 = metadata !{i32 89, i32 105, metadata !35, null}
!181 = metadata !{i32 786688, metadata !182, metadata !"i", metadata !6, i32 91, metadata !20, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!182 = metadata !{i32 786443, metadata !35, i32 90, i32 1, metadata !6, i32 8} ; [ DW_TAG_lexical_block ]
!183 = metadata !{i32 91, i32 34, metadata !182, null}
!184 = metadata !{i32 93, i32 9, metadata !185, null}
!185 = metadata !{i32 786443, metadata !182, i32 93, i32 4, metadata !6, i32 9} ; [ DW_TAG_lexical_block ]
!186 = metadata !{i32 93, i32 29, metadata !187, null}
!187 = metadata !{i32 786443, metadata !185, i32 93, i32 28, metadata !6, i32 10} ; [ DW_TAG_lexical_block ]
!188 = metadata !{i32 94, i32 1, metadata !187, null}
!189 = metadata !{i32 95, i32 2, metadata !187, null}
!190 = metadata !{i32 96, i32 7, metadata !187, null}
!191 = metadata !{i32 97, i32 7, metadata !187, null}
!192 = metadata !{i32 98, i32 10, metadata !193, null}
!193 = metadata !{i32 786443, metadata !187, i32 97, i32 31, metadata !6, i32 11} ; [ DW_TAG_lexical_block ]
!194 = metadata !{i32 99, i32 10, metadata !193, null}
!195 = metadata !{i32 99, i32 51, metadata !193, null}
!196 = metadata !{i32 99, i32 69, metadata !193, null}
!197 = metadata !{i32 100, i32 10, metadata !193, null}
!198 = metadata !{i32 101, i32 7, metadata !193, null}
!199 = metadata !{i32 102, i32 4, metadata !187, null}
!200 = metadata !{i32 93, i32 23, metadata !185, null}
!201 = metadata !{i32 103, i32 1, metadata !182, null}
!202 = metadata !{i32 786689, metadata !38, metadata !"ctx", metadata !6, i32 16777321, metadata !9, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!203 = metadata !{i32 105, i32 31, metadata !38, null}
!204 = metadata !{i32 786689, metadata !38, metadata !"hash", metadata !6, i32 33554537, metadata !29, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!205 = metadata !{i32 105, i32 66, metadata !38, null}
!206 = metadata !{i32 786688, metadata !207, metadata !"i", metadata !6, i32 107, metadata !20, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!207 = metadata !{i32 786443, metadata !38, i32 106, i32 1, metadata !6, i32 12} ; [ DW_TAG_lexical_block ]
!208 = metadata !{i32 107, i32 32, metadata !207, null}
!209 = metadata !{i32 109, i32 2, metadata !207, null}
!210 = metadata !{i32 112, i32 2, metadata !207, null}
!211 = metadata !{i32 113, i32 3, metadata !212, null}
!212 = metadata !{i32 786443, metadata !207, i32 112, i32 25, metadata !6, i32 13} ; [ DW_TAG_lexical_block ]
!213 = metadata !{i32 114, i32 3, metadata !212, null}
!214 = metadata !{i32 115, i32 4, metadata !212, null}
!215 = metadata !{i32 116, i32 2, metadata !212, null}
!216 = metadata !{i32 118, i32 3, metadata !217, null}
!217 = metadata !{i32 786443, metadata !207, i32 117, i32 7, metadata !6, i32 14} ; [ DW_TAG_lexical_block ]
!218 = metadata !{i32 119, i32 3, metadata !217, null}
!219 = metadata !{i32 120, i32 4, metadata !217, null}
!220 = metadata !{i32 121, i32 3, metadata !217, null}
!221 = metadata !{i32 122, i32 8, metadata !222, null}
!222 = metadata !{i32 786443, metadata !217, i32 122, i32 3, metadata !6, i32 15} ; [ DW_TAG_lexical_block ]
!223 = metadata !{i32 122, i32 30, metadata !224, null}
!224 = metadata !{i32 786443, metadata !222, i32 122, i32 29, metadata !6, i32 16} ; [ DW_TAG_lexical_block ]
!225 = metadata !{i32 123, i32 1, metadata !224, null}
!226 = metadata !{i32 124, i32 2, metadata !224, null}
!227 = metadata !{i32 125, i32 3, metadata !224, null}
!228 = metadata !{i32 122, i32 23, metadata !222, null}
!229 = metadata !{i32 130, i32 4, metadata !207, null}
!230 = metadata !{i32 130, i32 58, metadata !207, null}
!231 = metadata !{i32 130, i32 76, metadata !207, null}
!232 = metadata !{i32 131, i32 4, metadata !207, null}
!233 = metadata !{i32 132, i32 4, metadata !207, null}
!234 = metadata !{i32 133, i32 4, metadata !207, null}
!235 = metadata !{i32 134, i32 4, metadata !207, null}
!236 = metadata !{i32 135, i32 4, metadata !207, null}
!237 = metadata !{i32 136, i32 4, metadata !207, null}
!238 = metadata !{i32 137, i32 4, metadata !207, null}
!239 = metadata !{i32 138, i32 4, metadata !207, null}
!240 = metadata !{i32 139, i32 4, metadata !207, null}
!241 = metadata !{i32 143, i32 9, metadata !242, null}
!242 = metadata !{i32 786443, metadata !207, i32 143, i32 4, metadata !6, i32 17} ; [ DW_TAG_lexical_block ]
!243 = metadata !{i32 143, i32 27, metadata !244, null}
!244 = metadata !{i32 786443, metadata !242, i32 143, i32 26, metadata !6, i32 18} ; [ DW_TAG_lexical_block ]
!245 = metadata !{i32 144, i32 1, metadata !244, null}
!246 = metadata !{i32 145, i32 2, metadata !244, null}
!247 = metadata !{i32 146, i32 7, metadata !244, null}
!248 = metadata !{i32 147, i32 7, metadata !244, null}
!249 = metadata !{i32 148, i32 7, metadata !244, null}
!250 = metadata !{i32 149, i32 7, metadata !244, null}
!251 = metadata !{i32 150, i32 7, metadata !244, null}
!252 = metadata !{i32 151, i32 7, metadata !244, null}
!253 = metadata !{i32 152, i32 7, metadata !244, null}
!254 = metadata !{i32 153, i32 4, metadata !244, null}
!255 = metadata !{i32 143, i32 21, metadata !242, null}
!256 = metadata !{i32 154, i32 1, metadata !207, null}
!257 = metadata !{i32 786689, metadata !39, metadata !"data", metadata !40, i32 16777225, metadata !29, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!258 = metadata !{i32 9, i32 28, metadata !39, null}
!259 = metadata !{i32 786689, metadata !39, metadata !"base_offset", metadata !40, i32 33554442, metadata !20, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!260 = metadata !{i32 10, i32 18, metadata !39, null}
!261 = metadata !{i32 786689, metadata !39, metadata !"bytes", metadata !40, i32 50331659, metadata !20, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!262 = metadata !{i32 11, i32 18, metadata !39, null}
!263 = metadata !{i32 786689, metadata !39, metadata !"digest", metadata !40, i32 67108876, metadata !29, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!264 = metadata !{i32 12, i32 19, metadata !39, null}
!265 = metadata !{i32 12, i32 81, metadata !266, null}
!266 = metadata !{i32 786443, metadata !39, i32 12, i32 80, metadata !40, i32 19} ; [ DW_TAG_lexical_block ]
!267 = metadata !{i32 12, i32 114, metadata !266, null}
!268 = metadata !{i32 16, i32 1, metadata !266, null}
!269 = metadata !{i32 17, i32 1, metadata !266, null}
!270 = metadata !{i32 18, i32 1, metadata !266, null}
!271 = metadata !{i32 19, i32 1, metadata !266, null}
!272 = metadata !{i32 20, i32 1, metadata !266, null}
!273 = metadata !{i32 786688, metadata !266, metadata !"seg_buf", metadata !40, i32 23, metadata !15, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!274 = metadata !{i32 23, i32 16, metadata !266, null}
!275 = metadata !{i32 786688, metadata !266, metadata !"seg_offset", metadata !40, i32 24, metadata !20, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!276 = metadata !{i32 24, i32 15, metadata !266, null}
!277 = metadata !{i32 24, i32 29, metadata !266, null}
!278 = metadata !{i32 786688, metadata !266, metadata !"i", metadata !40, i32 25, metadata !49, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!279 = metadata !{i32 25, i32 6, metadata !266, null}
!280 = metadata !{i32 25, i32 9, metadata !266, null}
!281 = metadata !{i32 786688, metadata !266, metadata !"n", metadata !40, i32 26, metadata !20, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!282 = metadata !{i32 26, i32 15, metadata !266, null}
!283 = metadata !{i32 26, i32 24, metadata !266, null}
!284 = metadata !{i32 786688, metadata !266, metadata !"sha256ctx", metadata !40, i32 29, metadata !10, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!285 = metadata !{i32 29, i32 13, metadata !266, null}
!286 = metadata !{i32 30, i32 2, metadata !266, null}
!287 = metadata !{i32 33, i32 2, metadata !266, null}
!288 = metadata !{i32 34, i32 3, metadata !289, null}
!289 = metadata !{i32 786443, metadata !266, i32 34, i32 2, metadata !40, i32 20} ; [ DW_TAG_lexical_block ]
!290 = metadata !{i32 35, i32 1, metadata !289, null}
!291 = metadata !{i32 36, i32 2, metadata !289, null}
!292 = metadata !{i32 38, i32 9, metadata !293, null}
!293 = metadata !{i32 786443, metadata !294, i32 38, i32 4, metadata !40, i32 22} ; [ DW_TAG_lexical_block ]
!294 = metadata !{i32 786443, metadata !289, i32 37, i32 3, metadata !40, i32 21} ; [ DW_TAG_lexical_block ]
!295 = metadata !{i32 39, i32 5, metadata !293, null}
!296 = metadata !{i32 38, i32 20, metadata !293, null}
!297 = metadata !{i32 40, i32 4, metadata !294, null}
!298 = metadata !{i32 41, i32 4, metadata !294, null}
!299 = metadata !{i32 42, i32 4, metadata !294, null}
!300 = metadata !{i32 43, i32 3, metadata !294, null}
!301 = metadata !{i32 46, i32 9, metadata !302, null}
!302 = metadata !{i32 786443, metadata !303, i32 46, i32 4, metadata !40, i32 24} ; [ DW_TAG_lexical_block ]
!303 = metadata !{i32 786443, metadata !289, i32 45, i32 3, metadata !40, i32 23} ; [ DW_TAG_lexical_block ]
!304 = metadata !{i32 48, i32 3, metadata !305, null}
!305 = metadata !{i32 786443, metadata !302, i32 48, i32 2, metadata !40, i32 25} ; [ DW_TAG_lexical_block ]
!306 = metadata !{i32 47, i32 1, metadata !305, null}
!307 = metadata !{i32 48, i32 2, metadata !305, null}
!308 = metadata !{i32 48, i32 50, metadata !305, null}
!309 = metadata !{i32 46, i32 19, metadata !302, null}
!310 = metadata !{i32 49, i32 4, metadata !303, null}
!311 = metadata !{i32 50, i32 4, metadata !303, null}
!312 = metadata !{i32 52, i32 2, metadata !289, null}
!313 = metadata !{i32 55, i32 2, metadata !266, null}
!314 = metadata !{i32 57, i32 7, metadata !315, null}
!315 = metadata !{i32 786443, metadata !266, i32 57, i32 2, metadata !40, i32 26} ; [ DW_TAG_lexical_block ]
!316 = metadata !{i32 57, i32 24, metadata !317, null}
!317 = metadata !{i32 786443, metadata !315, i32 57, i32 23, metadata !40, i32 27} ; [ DW_TAG_lexical_block ]
!318 = metadata !{i32 58, i32 1, metadata !317, null}
!319 = metadata !{i32 60, i32 3, metadata !317, null}
!320 = metadata !{i32 61, i32 2, metadata !317, null}
!321 = metadata !{i32 57, i32 18, metadata !315, null}
!322 = metadata !{i32 62, i32 1, metadata !266, null}
