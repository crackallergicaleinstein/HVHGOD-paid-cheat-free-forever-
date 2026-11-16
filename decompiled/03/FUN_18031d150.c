// FUN_18031d150 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18031d150 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_18031d150(longlong *param_1,char *param_2,undefined4 param_3,undefined4 param_4,
                  float param_5)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  short sVar12;
  undefined1 (*pauVar13) [32];
  char cVar14;
  longlong lVar15;
  char cVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [64];
  undefined1 auVar19 [16];
  undefined1 auVar20 [64];
  undefined4 uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [64];
  undefined4 local_res20 [2];
  undefined1 auStack_3f8 [32];
  longlong *local_3d8;
  double local_3d0;
  double local_3c8;
  undefined1 *local_3c0;
  undefined4 local_3b8;
  char *local_3a8;
  undefined1 local_388 [32];
  longlong local_368 [7];
  longlong *local_330;
  char local_328 [8];
  undefined4 local_320 [2];
  char local_318 [4];
  undefined4 local_314;
  char local_310;
  undefined4 local_30c;
  undefined4 local_308;
  int local_304;
  char local_300;
  undefined1 local_2f8 [16];
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined4 local_2d8;
  undefined4 local_2d4;
  undefined4 local_2d0;
  undefined4 local_2cc;
  undefined4 local_2c8 [2];
  undefined1 local_2c0;
  undefined1 auStack_2bf [7];
  ulonglong uStack_2b8;
  undefined4 local_2b0;
  ulonglong local_2a8;
  ulonglong uStack_2a0;
  undefined4 local_298;
  undefined1 local_290 [4];
  uint local_28c;
  undefined4 local_288;
  int local_284;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  char local_1b8 [256];
  ulonglong local_b8;
  
  local_b8 = DAT_1808d5f00 ^ (ulonglong)auStack_3f8;
  local_318[0] = '\0';
  local_314 = 0;
  local_310 = 0;
  auVar19._12_4_ = 0;
  auVar19._0_12_ = ZEXT812(0);
  local_30c = 0;
  local_308 = 0x7fc00000;
  local_304 = 0;
  local_300 = '\x1d';
  uStack_2e8 = 0;
  uStack_2e0 = 0xf;
  local_2f8._1_15_ = SUB1615((undefined1  [16])0x0,1);
  auVar22[0xf] = 0;
  auVar22._0_15_ = local_2f8._1_15_;
  local_2f8 = auVar22 << 8;
  uVar21 = *(undefined4 *)*param_1;
  puVar1 = (ulonglong *)param_1[1];
  uStack_2b8 = puVar1[1];
  local_2b0 = (undefined4)puVar1[2];
  _local_2c0 = CONCAT71(SUB87(*puVar1 >> 8,0),*(undefined1 *)(param_1[2] + 0x5c));
  _local_2c0 = CONCAT44(*(undefined4 *)*param_1,_local_2c0);
  uStack_2a0 = puVar1[1];
  local_298 = (undefined4)puVar1[2];
  local_2a8 = *puVar1 & 0xffffffffffffff00;
  auVar22 = vmaxss_avx(SUB6416(ZEXT464(0x3fc00000),0),ZEXT416(*(uint *)param_1[3]));
  local_2c8[0] = auVar22._0_4_;
  local_2cc = 0;
  puVar2 = (undefined8 *)param_1[4];
  local_228 = *puVar2;
  uStack_218 = puVar2[2];
  uStack_210 = puVar2[3];
  local_208 = puVar2[4];
  uStack_200 = puVar2[5];
  uStack_1f8 = puVar2[6];
  uStack_1f0 = puVar2[7];
  local_1e8 = puVar2[8];
  uStack_1e0 = puVar2[9];
  uStack_1d8 = puVar2[10];
  uStack_1d0 = puVar2[0xb];
  local_1c8 = puVar2[0xc];
  uStack_1c0 = puVar2[0xd];
  auVar22 = vmaxss_avx(ZEXT416((uint)(param_5 + *(float *)((longlong)puVar2 + 0xc))),auVar19 << 0x20
                      );
  uStack_21c = auVar22._0_4_;
  uStack_220 = (undefined4)puVar2[1];
  auVar18 = ZEXT1264(ZEXT812(0)) << 0x20;
  local_res20[0] = param_4;
  local_3a8 = param_2;
  local_320[0] = param_3;
  pauVar13 = (undefined1 (*) [32])FUN_180308b90(local_290,&local_228);
  auVar22 = auVar18._0_16_;
  local_388 = *pauVar13;
  local_270 = *(undefined8 *)pauVar13[1];
  uStack_268 = *(undefined8 *)(pauVar13[1] + 8);
  cVar16 = local_388[0];
  if ((local_388[1] == '\0') || (cVar16 == '\0')) {
    cVar14 = '\0';
  }
  else {
    cVar14 = '\x01';
  }
  auVar19 = vshufps_avx(local_388._0_16_,local_388._0_16_,0x55);
  auVar17 = auVar19;
  if (((*(char *)param_1[5] != '\0') && (cVar16 == '\x01')) && (local_388[1] != '\0')) {
    local_3b8 = uStack_21c;
    local_3c0 = &local_2c0;
    local_3c8 = (double)CONCAT71(local_3c8._1_7_,1);
    local_3d0 = (double)CONCAT44(local_3d0._4_4_,local_res20[0]);
    local_3d8 = (longlong *)CONCAT44(local_3d8._4_4_,local_388._16_4_);
    auVar18 = ZEXT1664(auVar19);
    auVar20 = ZEXT1664(auVar19);
    auVar23 = ZEXT1664(auVar22);
    FUN_18031cbd0(param_1[6],local_290,param_1[7]);
    local_304 = local_304 + local_284;
    sVar12 = thunk_FUN_180624430(local_288);
    auVar22 = auVar23._0_16_;
    auVar17 = auVar18._0_16_;
    auVar19 = auVar20._0_16_;
    if (sVar12 < 1) {
      auVar17 = ZEXT416(local_28c);
      cVar14 = '\x01';
      local_308 = local_288;
    }
  }
  auVar7 = vshufps_avx(local_388._16_16_,local_388._16_16_,0xaa);
  local_3c8 = (double)auVar7._0_4_;
  auVar7 = vshufps_avx(local_388._0_16_,local_388._0_16_,0xaa);
  local_3d0 = (double)(auVar7._0_4_ + *(float *)*param_1);
  local_3d8 = (longlong *)(double)auVar19._0_4_;
  local_3c0 = (undefined1 *)CONCAT44(local_3c0._4_4_,*(undefined4 *)(param_1[8] + 0x30));
  auVar18 = ZEXT1664(auVar17);
  auVar20 = ZEXT1664(auVar22);
  FUN_18015abc0(local_1b8,0x100,"s1[model k=%d yaw=%.3f exp_vz=%.2f exp_gap=%.3f eta=%d] ",cVar16);
  lVar15 = -1;
  do {
    lVar3 = lVar15 + 1;
    lVar15 = lVar15 + 1;
  } while (local_1b8[lVar3] != '\0');
  FUN_18015b2a0(local_2f8,local_1b8);
  local_30c = auVar18._0_4_;
  local_310 = cVar14;
  if (*(char *)(param_1[9] + 0x9d) == '\0') {
    FUN_18031a940(param_1[0xd],cVar14,auVar18._0_8_,local_res20[0]);
    puVar2 = (undefined8 *)param_1[7];
    local_260 = *puVar2;
    uStack_258 = puVar2[1];
    uStack_250 = puVar2[2];
    uStack_248 = puVar2[3];
    local_240 = puVar2[4];
    uStack_238 = puVar2[5];
    lVar15 = param_1[4];
    auVar22 = vmaxss_avx(ZEXT416((uint)(param_5 + *(float *)(lVar15 + 0xc))),auVar20._0_16_);
    local_2d4 = auVar22._0_4_;
    local_2d8 = 0;
    local_2d0 = 0;
    local_328[0] = '\0';
    lVar3 = param_1[0xd];
    lVar4 = param_1[6];
    lVar5 = *param_1;
    lVar6 = param_1[0xf];
    local_3a8 = (char *)param_1[9];
    local_330 = (longlong *)0x0;
    if (DAT_180c7df28 == (undefined8 *)0x0) {
      local_388._8_8_ = 0x15;
      local_388._0_8_ = "tier0.dll:g_pMemAlloc";
      DAT_180c7df28 = (undefined8 *)FUN_180451750(local_388);
    }
    local_330 = (longlong *)
                (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0xa0);
    *local_330 = (longlong)
                 std::
                 _Func_impl_no_alloc<`public:_struct_`private:_void___cdecl_features::movement::pixelsurf::on_create_move_planes(systems::input::usercmd*___ptr64)___ptr64'::`2'::proof_t___cdecl_`private:_void___cdecl_features::movement::pixelsurf::on_create_move_planes(systems::input::usercmd*___ptr64)___ptr64'::`2'::<lambda_25>::operator()(int,int,float)const___ptr64'::`2'::<lambda_1>,bool,int>
                 ::vftable;
    local_330[1] = (longlong)local_3a8;
    local_330[2] = (longlong)&local_260;
    local_330[3] = lVar6;
    local_330[4] = (longlong)&local_2a8;
    local_330[5] = (longlong)&local_2d8;
    local_330[6] = (longlong)&local_2d4;
    local_330[7] = (longlong)local_1b8;
    local_330[8] = (longlong)local_318;
    local_330[9] = (longlong)&local_2d0;
    local_330[10] = (longlong)&local_2cc;
    local_330[0xb] = (longlong)local_2c8;
    local_330[0xc] = (longlong)local_328;
    local_330[0xd] = (longlong)local_320;
    local_330[0xe] = lVar15;
    local_330[0xf] = lVar5;
    local_330[0x10] = lVar4;
    local_330[0x11] = (longlong)local_res20;
    local_330[0x12] = (longlong)&local_2c0;
    local_330[0x13] = lVar3;
    local_3d8 = local_368;
    FUN_180413b80(&local_2c0,*(undefined8 *)param_1[10],param_1[0xe],local_320[0]);
    if (local_330 != (longlong *)0x0) {
      (**(code **)(*local_330 + 0x20))(local_330,local_330 != local_368);
    }
    FUN_18030afc0(*(undefined8 *)param_1[10],*(undefined8 *)param_1[0xb],param_1[0xc]);
    *(undefined4 *)*param_1 = uVar21;
    if (local_318[0] == '\0') {
      if (local_328[0] == '\0') {
        local_300 = '\x1d';
        if (*(char *)(param_1[9] + 0x9d) != '\0') {
          local_300 = '\x1a';
        }
      }
      else {
        local_300 = '\x1c';
      }
    }
    *param_2 = local_318[0];
    *(undefined4 *)(param_2 + 4) = local_314;
    param_2[8] = local_310;
    *(int *)(param_2 + 0x14) = local_304;
    param_2[0x18] = local_300;
  }
  else {
    FUN_18030afc0(*(undefined8 *)param_1[10],*(undefined8 *)param_1[0xb],param_1[0xc]);
    *(undefined4 *)*param_1 = uVar21;
    local_300 = '\x1a';
    *param_2 = local_318[0];
    *(undefined4 *)(param_2 + 4) = local_314;
    param_2[8] = local_310;
    *(int *)(param_2 + 0x14) = local_304;
    param_2[0x18] = '\x1a';
  }
  uVar11 = uStack_2e0;
  uVar10 = uStack_2e8;
  *(undefined4 *)(param_2 + 0xc) = local_30c;
  *(undefined4 *)(param_2 + 0x10) = local_308;
  uVar8 = local_2f8._0_8_;
  uVar9 = local_2f8._8_8_;
  auVar17[0xf] = 0;
  auVar17._0_15_ = local_2f8._1_15_;
  local_2f8 = auVar17 << 8;
  uStack_2e8 = 0;
  uStack_2e0 = 0xf;
  *(undefined8 *)(param_2 + 0x20) = uVar8;
  *(undefined8 *)(param_2 + 0x28) = uVar9;
  *(undefined8 *)(param_2 + 0x30) = uVar10;
  *(undefined8 *)(param_2 + 0x38) = uVar11;
  FUN_18015c010(local_2f8);
}



