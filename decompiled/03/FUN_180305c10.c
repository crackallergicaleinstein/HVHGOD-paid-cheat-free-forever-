// FUN_180305c10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180305c10 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180305c10(undefined8 param_1,longlong param_2)

{
  float fVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  short sVar5;
  ULONGLONG UVar6;
  longlong lVar7;
  float *pfVar8;
  float *pfVar9;
  int iVar10;
  ulonglong uVar11;
  uint *puVar12;
  bool bVar13;
  bool bVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 extraout_var [56];
  undefined1 auVar19 [64];
  float fVar20;
  float fVar21;
  undefined1 auVar22 [64];
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [64];
  float fVar27;
  undefined1 auVar28 [64];
  undefined1 auVar29 [64];
  float fVar30;
  undefined1 auStack_358 [32];
  float **local_338;
  longlong local_330;
  float local_318 [6];
  float local_300 [3];
  float local_2f4 [3];
  float local_2e8 [3];
  float local_2dc [3];
  float local_2d0 [6];
  float *local_2b8;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined8 uStack_2a0;
  undefined8 *local_298;
  undefined8 *local_290;
  float **local_288;
  undefined8 *local_280;
  longlong local_278;
  longlong *plStack_270;
  float *local_268;
  undefined1 local_258 [152];
  float local_1c0;
  float local_1ac;
  undefined8 local_148;
  longlong local_140;
  float local_138;
  float local_134;
  longlong local_130;
  longlong local_128;
  float local_120 [2];
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_108;
  float local_100;
  float *local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  ulonglong local_d8;
  
  local_d8 = DAT_1808d5f00 ^ (ulonglong)auStack_358;
  DAT_180c7135c = 0;
  if (DAT_180cc8b00 == '\0') {
    DAT_180c7135c = 0;
  }
  if (DAT_180cc8a98 != '\0') {
    DAT_180c7135c = 0;
  }
  if (DAT_180b8fc30 != '\0') {
    DAT_180c7135c = 0;
  }
  if (DAT_180b900c0 != '\0') {
    DAT_180c7135c = 0;
  }
  if (DAT_180b8fe80 != '\0') {
    DAT_180c7135c = 0;
  }
  AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  local_2b8 = _DAT_180bb8890;
  uStack_2b0 = (undefined4)uRam0000000180bb8898;
  uStack_2ac = (undefined4)((ulonglong)uRam0000000180bb8898 >> 0x20);
  uStack_2a8 = (undefined4)uRam0000000180bb88a0;
  uStack_2a4 = (undefined4)((ulonglong)uRam0000000180bb88a0 >> 0x20);
  uStack_2a0 = uRam0000000180bb88a8;
  local_278 = _DAT_180bb88b0;
  plStack_270 = (longlong *)uRam0000000180bb88b8;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  lVar7 = CONCAT44(uStack_2ac,uStack_2b0);
  if (lVar7 == 0) {
  }
  if ((DAT_180b8e114 & 1) == 0) {
  }
  auVar17._8_8_ = 0;
  auVar17._0_8_ = DAT_180b8e118;
  local_110 = DAT_180b8e120;
  auVar25 = vshufps_avx(auVar17,auVar17,0x55);
  local_118 = DAT_180b8e118;
  uVar11 = local_118;
  local_118._0_4_ = (float)DAT_180b8e118;
  fVar30 = auVar25._0_4_ * auVar25._0_4_ + (float)local_118 * (float)local_118;
  auVar25._12_4_ = 0;
  auVar25._0_12_ = ZEXT812(0);
  auVar25 = auVar25 << 0x20;
  local_118 = uVar11;
  if (fVar30 == 0.0) {
    auVar17 = ZEXT816(0);
  }
  else if (fVar30 < 0.0) {
    auVar22 = ZEXT1264(ZEXT812(0)) << 0x20;
    auVar19._0_8_ = FUN_18061e150();
    auVar25 = auVar22._0_16_;
    auVar19._8_56_ = extraout_var;
    auVar17 = auVar19._0_16_;
  }
  else {
    auVar17 = ZEXT416((uint)SQRT(fVar30));
  }
  uVar11 = 0xffffffffffffffff;
  iVar10 = DAT_180c6f328;
  if (DAT_180c6f328 == 0) {
    auVar19 = ZEXT1664(auVar25);
    auVar22 = ZEXT1664(auVar17);
    UVar6 = GetTickCount64();
    auVar17 = auVar22._0_16_;
    auVar25 = auVar19._0_16_;
    if (UVar6 < DAT_180c6f320) {
      iVar10 = 0;
    }
    else {
      local_148 = (float *)&DAT_1808ff6f0;
      iVar10 = FUN_1805f68d0(&DAT_1808ff6f0);
      if (iVar10 != 0) goto LAB_180306988;
      if (DAT_1808ff73c == 0x7fffffff) {
        DAT_1808ff73c = 0x7ffffffe;
        goto LAB_18030697d;
      }
      if ((DAT_180c6f328 == 0) && (DAT_180c6f320 <= UVar6)) {
        DAT_180c6f328 = FUN_1804174b0("C_BaseEntity",0x5600aa92);
        if (DAT_180c6f328 == 0) {
          DAT_180c6f320 = UVar6 + 1000;
        }
        else {
          DAT_180c6f320 = 0xffffffffffffffff;
        }
      }
      iVar10 = DAT_180c6f328;
      FUN_1805f68fc(&DAT_1808ff6f0);
      auVar17 = auVar22._0_16_;
      auVar25 = auVar19._0_16_;
    }
  }
  if (*(char *)(iVar10 + lVar7) == '\t') {
  }
  if (*(char *)(iVar10 + lVar7) == '\a') {
  }
  iVar10 = DAT_180c6f31c;
  if (DAT_180c6f31c == 0) {
    auVar19 = ZEXT1664(auVar25);
    auVar22 = ZEXT1664(auVar17);
    UVar6 = GetTickCount64();
    auVar17 = auVar22._0_16_;
    auVar25 = auVar19._0_16_;
    if (UVar6 < DAT_180c6f308) {
      iVar10 = 0;
    }
    else {
      local_148 = (float *)&DAT_1808ff600;
      iVar10 = FUN_1805f68d0(&DAT_1808ff600);
      if (iVar10 != 0) goto LAB_180306988;
      if (DAT_1808ff64c == 0x7fffffff) {
        DAT_1808ff64c = 0x7ffffffe;
        goto LAB_18030697d;
      }
      if ((DAT_180c6f31c == 0) && (DAT_180c6f308 <= UVar6)) {
        DAT_180c6f31c = FUN_1804174b0("C_BaseEntity",0x9d930423);
        if (DAT_180c6f31c == 0) {
          DAT_180c6f308 = UVar6 + 1000;
        }
        else {
          DAT_180c6f308 = 0xffffffffffffffff;
        }
      }
      iVar10 = DAT_180c6f31c;
      FUN_1805f68fc(&DAT_1808ff600);
      auVar17 = auVar22._0_16_;
      auVar25 = auVar19._0_16_;
    }
  }
  lVar3 = *(longlong *)(iVar10 + lVar7);
  if (lVar3 == 0) {
  }
  iVar10 = DAT_180c6f300;
  if (DAT_180c6f300 == 0) {
    auVar19 = ZEXT1664(auVar25);
    auVar22 = ZEXT1664(auVar17);
    UVar6 = GetTickCount64();
    auVar17 = auVar22._0_16_;
    auVar25 = auVar19._0_16_;
    if (UVar6 < DAT_180c6f2f8) {
      iVar10 = 0;
    }
    else {
      local_148 = (float *)&DAT_1808ff6a0;
      iVar10 = FUN_1805f68d0(&DAT_1808ff6a0);
      if (iVar10 != 0) goto LAB_180306988;
      if (DAT_1808ff6ec == 0x7fffffff) {
        DAT_1808ff6ec = 0x7ffffffe;
        goto LAB_18030697d;
      }
      if ((DAT_180c6f300 == 0) && (DAT_180c6f2f8 <= UVar6)) {
        DAT_180c6f300 = FUN_1804174b0("CGameSceneNode",0xe8b4eae5);
        if (DAT_180c6f300 == 0) {
          DAT_180c6f2f8 = UVar6 + 1000;
        }
        else {
          DAT_180c6f2f8 = 0xffffffffffffffff;
        }
      }
      iVar10 = DAT_180c6f300;
      FUN_1805f68fc(&DAT_1808ff6a0);
      auVar17 = auVar22._0_16_;
      auVar25 = auVar19._0_16_;
    }
  }
  local_108 = *(undefined8 *)(iVar10 + lVar3);
  local_100 = *(float *)((longlong)iVar10 + 8 + lVar3);
  iVar10 = DAT_180c6f318;
  if (DAT_180c6f318 == 0) {
    auVar19 = ZEXT1664(auVar25);
    auVar22 = ZEXT1664(auVar17);
    UVar6 = GetTickCount64();
    auVar17 = auVar22._0_16_;
    auVar25 = auVar19._0_16_;
    if (UVar6 < DAT_180c6f310) {
      iVar10 = 0;
    }
    else {
      local_148 = (float *)&DAT_1808ff650;
      iVar10 = FUN_1805f68d0(&DAT_1808ff650);
      if (iVar10 != 0) {
LAB_180306988:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808ff69c == 0x7fffffff) {
        DAT_1808ff69c = 0x7ffffffe;
LAB_18030697d:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if ((DAT_180c6f318 == 0) && (DAT_180c6f310 <= UVar6)) {
        DAT_180c6f318 = FUN_1804174b0("C_BasePlayerPawn",0xcf73e28a);
        if (DAT_180c6f318 == 0) {
          uVar11 = UVar6 + 1000;
        }
        DAT_180c6f310 = uVar11;
      }
      iVar10 = DAT_180c6f318;
      FUN_1805f68fc(&DAT_1808ff650);
      auVar17 = auVar22._0_16_;
      auVar25 = auVar19._0_16_;
    }
  }
  local_128 = *(longlong *)(iVar10 + lVar7);
  if (local_128 == 0) {
  }
  auVar19 = ZEXT1664(auVar25);
  auVar22 = ZEXT1664(auVar17);
  lVar7 = FUN_1803032c0(lVar7);
  if (*(char *)(lVar7 + 0x48) == '\0') {
  }
  cVar4 = FUN_180303860(0x18);
  if (cVar4 == '\0') {
  }
  local_f8 = *(float **)(lVar7 + 0x18);
  local_f0 = *(undefined4 *)(lVar7 + 0x20);
  local_e8 = *(undefined8 *)(lVar7 + 0x24);
  local_e0 = *(undefined4 *)(lVar7 + 0x2c);
  if ((DAT_180cd3f70 & 1) == 0) {
    DAT_180cd3f70 = DAT_180cd3f70 | 1;
    local_138 = 1.7354858e-12;
    local_130 = 0;
    local_148 = &local_138;
    local_140 = 1;
    FUN_18044c9c0(DAT_180c64058,&local_148);
    DAT_180cd3f78 = local_130;
  }
  local_120[0] = *(float *)(DAT_180cd3f78 + 0x58);
  local_298 = &local_108;
  local_290 = &local_118;
  local_288 = &local_f8;
  local_280 = &local_e8;
  plStack_270 = &local_128;
  local_268 = local_120;
  if (((DAT_180b8e111 == '\0') || ((DAT_180b8e114 & 1) == 0)) || ((DAT_180b8e18c & 1) != 0)) {
    bVar14 = false;
  }
  else {
    bVar14 = true;
  }
  local_278 = lVar7 + 0x30;
  cVar4 = FUN_1803069a0(&local_298,1);
  auVar26 = ZEXT464(0x3f800000);
  fVar23 = 0.001;
  fVar30 = 2.0;
  if ((cVar4 != '\0') || (bVar14)) {
    bVar14 = true;
  }
  else {
    bVar14 = false;
    if (auVar22._0_4_ <= 1.0) {
    }
    if ((DAT_180cd3f80 & 1) == 0) {
      DAT_180cd3f80 = DAT_180cd3f80 | 1;
      local_138 = -1.5797084e-11;
      local_130 = 0;
      local_148 = &local_138;
      local_140 = 1;
      FUN_18044c9c0(DAT_180c64058,&local_148);
      DAT_180cd3f88 = local_130;
    }
    fVar16 = *(float *)(DAT_180cd3f88 + 0x58);
    if ((DAT_180cd3f90 & 1) == 0) {
      DAT_180cd3f90 = DAT_180cd3f90 | 1;
      local_148 = (float *)CONCAT44(local_148._4_4_,0xa84213b4);
      local_140 = 0;
      local_2b8 = (float *)&local_148;
      uStack_2b0 = 1;
      uStack_2ac = 0;
      FUN_18044c9c0(DAT_180c64058,&local_2b8);
      DAT_180cd3f98 = local_140;
    }
    fVar20 = DAT_180b8e154;
    fVar15 = (float)FUN_180615630(auVar22._0_8_,*(undefined4 *)(DAT_180cd3f98 + 0x58));
    fVar21 = 0.015625;
    fVar16 = fVar15 * fVar16 * fVar20 * 0.015625;
    if ((DAT_180cd3fa0 & 1) == 0) {
      DAT_180cd3fa0 = DAT_180cd3fa0 | 1;
      local_138 = 3.3013306e-25;
      local_130 = 0;
      local_2b8 = &local_138;
      uStack_2b0 = 1;
      uStack_2ac = 0;
      fVar21 = 0.015625;
      FUN_18044c9c0(DAT_180c64058,&local_2b8);
      DAT_180cd3fa8 = local_130;
    }
    auVar25 = vmaxss_avx(auVar26._0_16_,ZEXT416(DAT_180cc9368));
    fVar16 = auVar25._0_4_ * *(float *)(DAT_180cd3fa8 + 0x58) * DAT_180b8e154 * fVar21 + fVar16;
    sVar5 = thunk_FUN_180624430(fVar16);
    if (0 < sVar5) {
    }
    if (fVar16 <= fVar23) {
    }
    local_318[2] = 16.0;
    local_318[0] = fVar30;
    auVar18._0_4_ = auVar22._0_4_ / fVar16;
    auVar18._4_12_ = auVar22._4_12_;
    auVar25 = vroundss_avx(ZEXT816(0),auVar18,2);
    local_318[1] = auVar25._0_4_;
    iVar10 = 2;
    pfVar9 = local_318;
    if (fVar30 <= local_318[1]) {
      pfVar9 = local_318 + 1;
    }
    pfVar8 = local_318 + 2;
    if (local_318[1] <= 16.0) {
      pfVar8 = pfVar9;
    }
    fVar16 = *pfVar8;
    if ((int)fVar16 + 2 < 2) {
    }
    while (cVar4 = FUN_1803069a0(&local_298,iVar10), cVar4 == '\0') {
      iVar10 = iVar10 + 1;
      if ((int)fVar16 + 2 < iVar10) {
      }
    }
  }
  *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) | 1;
  puVar12 = (uint *)0x0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    puVar12 = (uint *)(*(longlong *)(param_2 + 0x40) + 0x10);
  }
  if (puVar12 == (uint *)0x0) {
  }
  fVar16 = 0.017453292;
  auVar28 = ZEXT464((uint)(DAT_180b0dfc8._4_4_ * 0.017453292));
  if (bVar14) {
    fVar21 = DAT_180b0dfc8._4_4_;
    fVar16 = (float)FUN_180638e00(DAT_180b0dfc8._4_4_ * 0.017453292);
    fVar15 = (float)FUN_180637540(auVar28._0_8_);
    fVar20 = fVar15 * (float)puVar12[0x12] - fVar16 * (float)puVar12[0x13];
    auVar29 = ZEXT464((uint)fVar20);
    auVar17 = ZEXT416((uint)fVar20);
    fVar16 = fVar15 * (float)puVar12[0x13] + fVar16 * (float)puVar12[0x12];
    auVar28 = ZEXT464((uint)fVar16);
    auVar25 = ZEXT416((uint)fVar16);
    fVar16 = fVar16 * fVar16 + fVar20 * fVar20;
    if (fVar16 < 0.0) {
      fVar16 = (float)FUN_18061e150();
      auVar25 = auVar28._0_16_;
      auVar17 = auVar29._0_16_;
    }
    else {
      fVar16 = SQRT(fVar16);
    }
    fVar15 = auVar22._0_4_;
    fVar20 = -1.0;
    if (fVar16 <= fVar23) {
LAB_180306753:
      fVar16 = 180.0;
      fVar23 = 57.295776;
      fVar30 = 0.017453292;
    }
    else {
      fVar23 = auVar17._0_4_ / fVar16;
      auVar29 = ZEXT1664(CONCAT124(auVar17._4_12_,fVar23));
      fVar16 = auVar25._0_4_ / fVar16;
      auVar28 = ZEXT1664(CONCAT124(auVar25._4_12_,fVar16));
      local_138 = fVar23 * 4.0 + (float)local_108;
      local_134 = fVar16 * 4.0 + local_108._4_4_;
      local_130 = CONCAT44(local_130._4_4_,fVar30 + local_100);
      local_148 = (float *)CONCAT44(local_134,local_138);
      local_140 = CONCAT44(local_140._4_4_,local_100 - 4.0);
      local_2b8 = local_f8;
      uStack_2b0 = local_f0;
      uStack_2ac = (undefined4)local_e8;
      uStack_2a8 = (undefined4)((ulonglong)local_e8 >> 0x20);
      uStack_2a4 = local_e0;
      local_338 = &local_2b8;
      local_330 = lVar7 + 0x30;
      FUN_180419610(local_e8,local_258,&local_138,&local_148);
      fVar15 = auVar22._0_4_;
      if ((local_1ac < auVar26._0_4_) && (local_120[0] <= local_1c0)) goto LAB_180306753;
      fVar15 = (float)FUN_180636c80(auVar28._0_8_,auVar29._0_8_);
      fVar23 = 57.295776;
      fVar16 = 180.0;
      fVar30 = 0.017453292;
      fVar15 = (fVar21 - (fVar15 * 57.295776 + 180.0)) * 0.017453292;
      auVar28 = ZEXT464((uint)fVar15);
      DAT_180c7135c = 1;
      local_318[5] = auVar26._0_4_;
      local_318[3] = fVar20;
      local_318[4] = (float)FUN_180637540(fVar15);
      local_318[4] = local_318[4] * 0.3;
      uVar2 = *puVar12;
      pfVar9 = local_318 + 3;
      if (fVar20 <= local_318[4]) {
        pfVar9 = local_318 + 4;
      }
      local_300[2] = auVar26._0_4_;
      pfVar8 = local_318 + 5;
      if (local_318[4] <= local_300[2]) {
        pfVar8 = pfVar9;
      }
      fVar27 = *pfVar8;
      puVar12[0x12] = (uint)fVar27;
      local_300[0] = fVar20;
      local_300[1] = (float)FUN_180638e00(auVar28._0_8_);
      fVar15 = auVar22._0_4_;
      local_300[1] = local_300[1] * -0.3;
      *puVar12 = uVar2 | 0xc0;
      pfVar9 = local_300;
      if (fVar20 <= local_300[1]) {
        pfVar9 = local_300 + 1;
      }
      pfVar8 = local_300 + 2;
      if (local_300[1] <= auVar26._0_4_) {
        pfVar8 = pfVar9;
      }
      fVar1 = *pfVar8;
      puVar12[0x13] = (uint)fVar1;
      uVar11 = *(ulonglong *)(param_2 + 0x60) & 0xfffffffffffff9e7;
      fVar24 = auVar19._0_4_;
      if (fVar27 <= fVar24) {
        if (fVar27 < fVar24) {
          uVar11 = uVar11 | 0x10;
        }
      }
      else {
        uVar11 = uVar11 | 8;
      }
      if (fVar1 <= fVar24) {
        if (fVar1 < fVar24) {
          uVar11 = uVar11 | 0x400;
        }
      }
      else {
        uVar11 = uVar11 | 0x200;
      }
      *(ulonglong *)(param_2 + 0x60) = uVar11;
      if (fVar15 <= 5.0) {
      }
    }
    if (fVar15 <= auVar26._0_4_) {
    }
    fVar15 = (float)FUN_180636c80(local_118._4_4_,local_118 & 0xffffffff);
    fVar30 = (fVar21 - (fVar15 * fVar23 + fVar16)) * fVar30;
    auVar22 = ZEXT464((uint)fVar30);
    DAT_180c7135c = 1;
    local_2f4[2] = auVar26._0_4_;
    local_2f4[0] = fVar20;
    local_2f4[1] = (float)FUN_180637540(fVar30);
    uVar2 = *puVar12;
    pfVar9 = local_2f4;
    if (fVar20 <= local_2f4[1]) {
      pfVar9 = local_2f4 + 1;
    }
    local_2e8[2] = auVar26._0_4_;
    pfVar8 = local_2f4 + 2;
    if (local_2f4[1] <= local_2e8[2]) {
      pfVar8 = pfVar9;
    }
    fVar23 = *pfVar8;
    puVar12[0x12] = (uint)fVar23;
    local_2e8[0] = fVar20;
    local_2e8[1] = (float)FUN_180638e00(auVar22._0_8_);
    fVar16 = auVar19._0_4_;
    local_2e8[1] = local_2e8[1] * fVar20;
    *puVar12 = uVar2 | 0xc0;
    pfVar9 = local_2e8;
    if (fVar20 <= local_2e8[1]) {
      pfVar9 = local_2e8 + 1;
    }
    pfVar8 = local_2e8 + 2;
    if (local_2e8[1] <= auVar26._0_4_) {
      pfVar8 = pfVar9;
    }
    fVar30 = *pfVar8;
    puVar12[0x13] = (uint)fVar30;
    uVar11 = *(ulonglong *)(param_2 + 0x60) & 0xfffffffffffff9e7;
    if (fVar16 < fVar23) {
      uVar11 = uVar11 | 8;
      goto LAB_18030685d;
    }
    bVar14 = fVar16 == fVar23;
    bVar13 = fVar16 < fVar23;
  }
  else {
    fVar30 = DAT_180b0dfc8._4_4_;
    fVar23 = (float)FUN_180636c80(local_118._4_4_,local_118 & 0xffffffff);
    fVar16 = (fVar30 - (fVar23 * 57.295776 + 180.0)) * fVar16;
    auVar22 = ZEXT464((uint)fVar16);
    DAT_180c7135c = 1;
    local_2dc[2] = auVar26._0_4_;
    fVar30 = -1.0;
    local_2dc[0] = -1.0;
    local_2dc[1] = (float)FUN_180637540(fVar16);
    uVar2 = *puVar12;
    pfVar9 = local_2dc;
    if (fVar30 <= local_2dc[1]) {
      pfVar9 = local_2dc + 1;
    }
    local_2d0[2] = auVar26._0_4_;
    pfVar8 = local_2dc + 2;
    if (local_2dc[1] <= local_2d0[2]) {
      pfVar8 = pfVar9;
    }
    fVar23 = *pfVar8;
    puVar12[0x12] = (uint)fVar23;
    local_2d0[0] = fVar30;
    local_2d0[1] = (float)FUN_180638e00(auVar22._0_8_);
    fVar16 = auVar19._0_4_;
    local_2d0[1] = local_2d0[1] * fVar30;
    *puVar12 = uVar2 | 0xc0;
    pfVar9 = local_2d0;
    if (fVar30 <= local_2d0[1]) {
      pfVar9 = local_2d0 + 1;
    }
    pfVar8 = local_2d0 + 2;
    if (local_2d0[1] <= auVar26._0_4_) {
      pfVar8 = pfVar9;
    }
    fVar30 = *pfVar8;
    puVar12[0x13] = (uint)fVar30;
    uVar11 = *(ulonglong *)(param_2 + 0x60) & 0xfffffffffffff9e7;
    if (fVar16 < fVar23) {
      uVar11 = uVar11 | 8;
      goto LAB_18030685d;
    }
    bVar14 = fVar16 == fVar23;
    bVar13 = fVar16 < fVar23;
  }
  if (!bVar13 && !bVar14) {
    uVar11 = uVar11 | 0x10;
  }
LAB_18030685d:
  if (fVar30 <= fVar16) {
    if (fVar30 < fVar16) {
      uVar11 = uVar11 | 0x400;
    }
    *(ulonglong *)(param_2 + 0x60) = uVar11;
  }
  else {
    *(ulonglong *)(param_2 + 0x60) = uVar11 | 0x200;
  }
}



