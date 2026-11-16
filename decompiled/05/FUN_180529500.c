// FUN_180529500 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180529500 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180529500(int param_1,int param_2)

{
  float fVar1;
  short sVar2;
  uint uVar3;
  size_t _Size;
  longlong lVar4;
  size_t sVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined1 (*pauVar11) [16];
  longlong lVar12;
  longlong lVar13;
  undefined8 *_Buf1;
  float *pfVar14;
  undefined1 *puVar15;
  undefined **ppuVar16;
  undefined4 *puVar17;
  longlong *plVar18;
  float *pfVar19;
  longlong lVar20;
  longlong lVar21;
  undefined4 *puVar22;
  undefined1 auStack_478 [32];
  longlong local_458;
  longlong local_450;
  longlong lStack_448;
  longlong lStack_440;
  longlong lStack_438;
  undefined1 local_430 [16];
  undefined1 auStack_420 [16];
  undefined1 local_410 [32];
  undefined1 local_3f0 [32];
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined1 local_3b0 [32];
  undefined1 local_390 [32];
  undefined1 local_370 [32];
  undefined1 local_350 [16];
  size_t sStack_340;
  ulonglong uStack_338;
  undefined4 local_328;
  undefined4 uStack_324;
  uint uStack_320;
  undefined4 uStack_31c;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined2 local_298;
  ushort uStack_296;
  undefined4 local_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined8 uStack_280;
  undefined8 uStack_278;
  uint uStack_270;
  undefined4 uStack_26c;
  int local_238 [6];
  undefined1 local_220 [216];
  char local_148;
  undefined1 local_138 [24];
  undefined1 local_120 [216];
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_478;
  lVar21 = (longlong)param_2;
  lVar20 = (longlong)param_1;
  local_458 = *(longlong *)(*DAT_180c62f50 + (longlong)(int)DAT_180c62f50[3] * 8);
  sVar2 = *(short *)(local_458 + 0x4970 + (lVar20 * 0x15 + lVar21) * 4);
  if (((DAT_180b909b0 == 0) || (sVar2 < 0)) ||
     ((int)((*(longlong *)(DAT_180b909b0 + 0x60) - *(longlong *)(DAT_180b909b0 + 0x58)) / 0x68) <=
      (int)sVar2)) {
    puVar22 = (undefined4 *)0x0;
  }
  else {
    puVar22 = (undefined4 *)((longlong)sVar2 * 0x68 + *(longlong *)(DAT_180b909b0 + 0x58));
  }
  if ((DAT_180cd7310 & 1) == 0) {
    DAT_180cd7310 = DAT_180cd7310 | 1;
    atexit(FUN_180663e70);
  }
  if (puVar22 == (undefined4 *)0x0) {
  }
  plVar18 = (longlong *)(puVar22 + 2);
  FUN_18015bea0(local_370,puVar22[1]);
  FUN_18015bea0(local_390,*puVar22);
  uVar8 = FUN_18015bea0(local_3b0,param_1);
  puVar9 = (undefined8 *)FUN_18015b2a0(uVar8,&DAT_1807c47a0,1);
  local_3d0 = *puVar9;
  uStack_3c8 = puVar9[1];
  uStack_3c0 = puVar9[2];
  uStack_3b8 = puVar9[3];
  puVar9[3] = 0xf;
  *(undefined1 *)puVar9 = 0;
  puVar9[2] = 0;
  FUN_18015a6e0(local_3f0);
  plVar10 = (longlong *)FUN_18015b2a0(local_3f0,&DAT_1807c47a0,1);
  local_450 = *plVar10;
  lStack_448 = plVar10[1];
  lStack_440 = plVar10[2];
  lStack_438 = plVar10[3];
  plVar10[3] = 0xf;
  *(undefined1 *)plVar10 = 0;
  plVar10[2] = 0;
  FUN_18015a6e0(local_410);
  pauVar11 = (undefined1 (*) [16])FUN_18015b2a0(local_410,&DAT_1807c47a0,1);
  local_430 = *pauVar11;
  auStack_420 = pauVar11[1];
  (*pauVar11)[0] = 0;
  *(undefined8 *)pauVar11[1] = 0;
  *(undefined8 *)(pauVar11[1] + 8) = 0xf;
  plVar10 = plVar18;
  if (0xf < *(ulonglong *)(puVar22 + 8)) {
    plVar10 = (longlong *)*plVar18;
  }
  pauVar11 = (undefined1 (*) [16])FUN_18015b2a0(local_430,plVar10,*(undefined8 *)(puVar22 + 6));
  local_350 = *pauVar11;
  sStack_340 = *(size_t *)pauVar11[1];
  uStack_338 = *(ulonglong *)(pauVar11[1] + 8);
  (*pauVar11)[0] = 0;
  *(undefined8 *)pauVar11[1] = 0;
  *(undefined8 *)(pauVar11[1] + 8) = 0xf;
  FUN_18015c010(local_430);
  FUN_18015c010(local_410);
  FUN_18015c010(&local_450);
  FUN_18015c010(local_3f0);
  FUN_18015c010(&local_3d0);
  FUN_18015c010(local_3b0);
  FUN_18015c010(local_390);
  uVar8 = FUN_18015c010(local_370);
  FUN_180562970(uVar8,&local_450,local_350);
  lVar4 = local_450;
  puVar17 = (undefined4 *)(local_450 + 0x30);
  if ((char)lStack_448 == '\0') {
    cVar6 = FUN_1801d8910(puVar17,local_450 + 0x120);
    if (cVar6 == '\0') goto LAB_180529a09;
    FUN_1801d6430(&DAT_180cc8068,local_238,*(undefined2 *)puVar22,-(uint)(param_1 != 0) + 3);
    if ((local_148 != '\0') && (local_238[0] == puVar22[1])) {
      lVar12 = FUN_18019f170(local_138,local_238);
      local_450 = lVar12;
      FUN_1800cb400(lVar12);
      lVar13 = FUN_180208890(&DAT_180cc9bb0,puVar22[1]);
      if (lVar13 != 0) {
        pfVar19 = (float *)(lVar12 + 4);
        if (*(float *)(lVar12 + 4) < *(float *)(lVar13 + 0x88)) {
          pfVar19 = (float *)(lVar13 + 0x88);
        }
        if (*(float *)(lVar13 + 0x8c) < *(float *)(lVar12 + 4)) {
          pfVar19 = (float *)(lVar13 + 0x8c);
        }
        *(float *)(lVar12 + 4) = *pfVar19;
      }
      FUN_1801a4ee0(&local_328,lVar12);
      FUN_18015c010(lVar12 + 0x18);
      cVar6 = FUN_1801d8910(&local_328,lVar4 + 0x120);
      if (cVar6 == '\0') {
        uVar8 = FUN_18017edf0(lVar4 + 0x120,&local_328);
        FUN_18017edf0(puVar17,uVar8);
        lVar12 = lVar20 * 0x15 + lVar21;
        puVar9 = &DAT_1808e4ff0 + lVar12 * 4;
        (&DAT_1808e5000)[lVar12 * 4] = 0;
        if (0xf < (ulonglong)(&DAT_1808e5008)[lVar12 * 4]) {
          puVar9 = (undefined8 *)*puVar9;
        }
        *(undefined1 *)puVar9 = 0;
      }
      FUN_18015c010(&uStack_310);
    }
  }
  else {
    FUN_1801d6430(&DAT_180cc8068,local_238,*(undefined2 *)puVar22,-(uint)(param_1 != 0) + 3);
    if ((local_148 != '\0') && (local_238[0] == puVar22[1])) {
      FUN_18017edf0(puVar17,local_238);
    }
    *puVar17 = puVar22[1];
    if ((longlong *)(lVar4 + 0x210) != plVar18) {
      if (0xf < *(ulonglong *)(puVar22 + 8)) {
        plVar18 = (longlong *)*plVar18;
      }
      FUN_180113930((longlong *)(lVar4 + 0x210),plVar18,*(undefined8 *)(puVar22 + 6));
    }
    FUN_18017edf0(lVar4 + 0x120,puVar17);
    lVar12 = FUN_18019f170(local_138,puVar17);
    local_450 = lVar12;
    FUN_1800cb400(lVar12);
    lVar13 = FUN_180208890(&DAT_180cc9bb0,puVar22[1]);
    if (lVar13 != 0) {
      pfVar19 = (float *)(lVar12 + 4);
      if (*(float *)(lVar12 + 4) < *(float *)(lVar13 + 0x88)) {
        pfVar19 = (float *)(lVar13 + 0x88);
      }
      if (*(float *)(lVar13 + 0x8c) < *(float *)(lVar12 + 4)) {
        pfVar19 = (float *)(lVar13 + 0x8c);
      }
      *(float *)(lVar12 + 4) = *pfVar19;
    }
    FUN_1801a4ee0(&local_328,lVar12);
    FUN_18015c010(lVar12 + 0x18);
    FUN_1800cf9c0(puVar17,&local_328);
    FUN_18015c010(&uStack_310);
    FUN_18017edf0(lVar4 + 0x120,puVar17);
  }
  if (local_148 != '\0') {
    FUN_18015c010(local_220);
  }
LAB_180529a09:
  FUN_18019f170(local_138,puVar17);
  sVar5 = sStack_340;
  pfVar19 = (float *)(local_458 + 0x4a18 + (lVar20 * 0x15 + lVar21) * 0xc0);
  lVar21 = lVar20 * 0x15 + lVar21;
  puVar9 = &DAT_1808e4ff0 + lVar21 * 4;
  uVar8 = local_350._0_8_;
  puVar15 = local_350;
  if (0xf < uStack_338) {
    puVar15 = (undefined1 *)local_350._0_8_;
  }
  _Size = (&DAT_1808e5000)[lVar21 * 4];
  _Buf1 = puVar9;
  if (0xf < (ulonglong)(&DAT_1808e5008)[lVar21 * 4]) {
    _Buf1 = (undefined8 *)*puVar9;
  }
  lVar20 = -1;
  if ((_Size != sStack_340) || ((_Size != 0 && (iVar7 = memcmp(_Buf1,puVar15,_Size), iVar7 != 0))))
  {
    if (puVar9 != (undefined8 *)local_350) {
      puVar15 = local_350;
      if (0xf < uStack_338) {
        puVar15 = (undefined1 *)uVar8;
      }
      FUN_180113930(puVar9,puVar15,sVar5);
    }
    local_328 = 0x3c23d70a;
    uStack_324 = 0;
    uStack_320 = uStack_320 & 0xffffff00;
    uStack_31c = 0;
    uStack_318 = 0;
    uStack_310 = 0;
    uStack_308 = 0;
    uStack_300 = 0;
    uStack_2f8 = 0;
    uStack_2f0 = 0;
    uStack_2e8 = 0;
    uStack_2e0 = 0;
    local_2d8 = 0;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    uStack_2c0 = 0;
    local_2b8 = 0;
    uStack_2b0 = 0;
    uStack_2a8 = 0;
    uStack_2a0 = 0;
    local_298 = 0;
    local_294 = 0x3f800000;
    uStack_290 = 0x3f800000;
    uStack_28c = 0x3f800000;
    uStack_288 = 0x3f800000;
    uStack_284 = 0;
    uStack_280 = 0x3f8000003f800000;
    uStack_278 = 0x3f8000003f800000;
    uStack_270 = uStack_270 & 0xffffff00;
    uStack_26c = 0x42480000;
    pfVar19[0] = 0.01;
    pfVar19[1] = 0.0;
    *(ulonglong *)(pfVar19 + 2) = (ulonglong)uStack_320;
    pfVar19[4] = 0.0;
    pfVar19[5] = 0.0;
    pfVar19[6] = 0.0;
    pfVar19[7] = 0.0;
    pfVar19[8] = 0.0;
    pfVar19[9] = 0.0;
    pfVar19[10] = 0.0;
    pfVar19[0xb] = 0.0;
    pfVar19[0xc] = 0.0;
    pfVar19[0xd] = 0.0;
    pfVar19[0xe] = 0.0;
    pfVar19[0xf] = 0.0;
    pfVar19[0x10] = 0.0;
    pfVar19[0x11] = 0.0;
    pfVar19[0x12] = 0.0;
    pfVar19[0x13] = 0.0;
    pfVar19[0x14] = 0.0;
    pfVar19[0x15] = 0.0;
    pfVar19[0x16] = 0.0;
    pfVar19[0x17] = 0.0;
    pfVar19[0x18] = 0.0;
    pfVar19[0x19] = 0.0;
    pfVar19[0x1a] = 0.0;
    pfVar19[0x1b] = 0.0;
    pfVar19[0x1c] = 0.0;
    pfVar19[0x1d] = 0.0;
    pfVar19[0x1e] = 0.0;
    pfVar19[0x1f] = 0.0;
    pfVar19[0x20] = 0.0;
    pfVar19[0x21] = 0.0;
    pfVar19[0x22] = 0.0;
    pfVar19[0x23] = 0.0;
    *(ulonglong *)(pfVar19 + 0x24) = CONCAT44(0x3f800000,(uint)uStack_296 << 0x10);
    pfVar19[0x26] = 1.0;
    pfVar19[0x27] = 1.0;
    pfVar19[0x28] = 1.0;
    pfVar19[0x29] = 0.0;
    pfVar19[0x2a] = 1.0;
    pfVar19[0x2b] = 1.0;
    pfVar19[0x2c] = 1.0;
    pfVar19[0x2d] = 1.0;
    *(ulonglong *)(pfVar19 + 0x2e) = CONCAT44(0x42480000,uStack_270);
    *pfVar19 = *(float *)(lVar4 + 0x34);
    pfVar19[1] = *(float *)(lVar4 + 0x38);
    *(undefined1 *)(pfVar19 + 2) = *(undefined1 *)(lVar4 + 0x3c);
    pfVar19[3] = *(float *)(lVar4 + 0x40);
    plVar18 = (longlong *)(lVar4 + 0x48);
    if (0xf < *(ulonglong *)(lVar4 + 0x60)) {
      plVar18 = (longlong *)*plVar18;
    }
    FUN_1806157a0(pfVar19 + 4,0x81,plVar18,0xffffffffffffffff);
    pfVar19[0x29] = (float)(*(int *)(lVar4 + 0x70) + 1);
    *(undefined1 *)((longlong)pfVar19 + 0x91) = *(undefined1 *)(lVar4 + 0x68);
    uVar3 = *(uint *)(lVar4 + 0x6c);
    pfVar19[0x25] = (float)(uVar3 & 0xff) / 255.0;
    pfVar19[0x26] = (float)(uVar3 >> 8 & 0xff) / 255.0;
    pfVar19[0x27] = (float)(uVar3 >> 0x10 & 0xff) / 255.0;
    pfVar19[0x28] = (float)(uVar3 >> 0x18) / 255.0;
    uVar3 = *(uint *)(lVar4 + 0x74);
    pfVar19[0x2a] = (float)(uVar3 & 0xff) / 255.0;
    pfVar19[0x2b] = (float)(uVar3 >> 8 & 0xff) / 255.0;
    pfVar19[0x2c] = (float)(uVar3 >> 0x10 & 0xff) / 255.0;
    pfVar19[0x2d] = (float)(uVar3 >> 0x18) / 255.0;
  }
  *puVar17 = puVar22[1];
  *(float *)(lVar4 + 0x34) = *pfVar19;
  *(float *)(lVar4 + 0x38) = pfVar19[1];
  *(undefined1 *)(lVar4 + 0x3c) = *(undefined1 *)(pfVar19 + 2);
  *(float *)(lVar4 + 0x40) = pfVar19[3];
  lVar21 = -1;
  do {
    lVar12 = lVar21 + 0x11;
    lVar21 = lVar21 + 1;
  } while (*(char *)((longlong)pfVar19 + lVar12) != '\0');
  FUN_180113930(lVar4 + 0x48);
  lVar21 = FUN_180208890(&DAT_180cc9bb0,puVar22[1]);
  if (lVar21 != 0) {
    pfVar14 = (float *)(lVar4 + 0x34);
    if (*(float *)(lVar4 + 0x34) < *(float *)(lVar21 + 0x88)) {
      pfVar14 = (float *)(lVar21 + 0x88);
    }
    if (*(float *)(lVar21 + 0x8c) < *(float *)(lVar4 + 0x34)) {
      pfVar14 = (float *)(lVar21 + 0x8c);
    }
    fVar1 = *pfVar14;
    *(float *)(lVar4 + 0x34) = fVar1;
    *pfVar19 = fVar1;
  }
  *(int *)(lVar4 + 0x70) = (int)pfVar19[0x29] + -1;
  *(undefined1 *)(lVar4 + 0x68) = *(undefined1 *)((longlong)pfVar19 + 0x91);
  puVar22 = (undefined4 *)FUN_1805206f0(&local_458,pfVar19 + 0x25);
  *(undefined4 *)(lVar4 + 0x6c) = *puVar22;
  puVar22 = (undefined4 *)FUN_1805206f0(&local_458,pfVar19 + 0x2a);
  *(undefined4 *)(lVar4 + 0x74) = *puVar22;
  FUN_1800cb400(puVar17);
  cVar6 = FUN_1801d8910(puVar17,local_138);
  if (cVar6 == '\0') {
    cVar6 = FUN_1801d8910(puVar17,lVar4 + 0x120);
    ppuVar16 = &PTR_180700558;
    if (cVar6 == '\0') {
      ppuVar16 = (undefined **)"Unsaved changes";
    }
    do {
      lVar20 = lVar20 + 1;
    } while (*(char *)((longlong)ppuVar16 + lVar20) != '\0');
    FUN_180113930(lVar4 + 0x230,ppuVar16,lVar20);
  }
  FUN_18015c010(local_120);
  FUN_18015c010(local_350);
}



