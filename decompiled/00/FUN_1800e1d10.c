// FUN_1800e1d10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800e1d10 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800e1d10(void)

{
  int *piVar1;
  undefined1 auVar2 [16];
  byte bVar3;
  short sVar4;
  undefined1 (*pauVar5) [16];
  int *piVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  int *piVar10;
  undefined *puVar11;
  undefined4 *puVar12;
  int *piVar13;
  byte *pbVar14;
  longlong lVar15;
  float fVar16;
  ulonglong uVar17;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  float fVar20;
  undefined1 auVar21 [64];
  undefined1 auVar22 [64];
  float fVar23;
  float fVar24;
  undefined1 auVar25 [64];
  undefined1 auVar26 [64];
  float fVar27;
  float fVar28;
  undefined1 auVar29 [64];
  float fVar30;
  float local_res8 [6];
  float local_res20 [2];
  byte local_168 [16];
  float local_158 [2];
  int local_150 [6];
  float local_138 [2];
  float local_130 [2];
  float local_128 [2];
  float local_120 [2];
  undefined4 local_118;
  undefined4 local_114;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  undefined1 local_f8 [200];
  
  _DAT_180cc83e1 = local_110._1_4_;
  _DAT_180cc83e5 = local_110._5_2_;
  DAT_180cc83e7 = local_110._7_1_;
  DAT_180cc83d0 = 0;
  _DAT_180cc83d8 = 0;
  DAT_180cc83e0 = 0;
  _DAT_180cc83e8 = 0;
  FUN_1800d39c0();
  auVar21 = ZEXT464((uint)DAT_180cadbd8);
  sVar4 = thunk_FUN_180624430(DAT_180cadbd8);
  auVar22 = ZEXT864(0);
  if (sVar4 < 1) {
    pfVar8 = local_res8;
    if (0.0 <= auVar21._0_4_) {
      pfVar8 = &DAT_180cadbd8;
    }
    local_res8[2] = 180.0;
    pfVar9 = local_res8 + 2;
    if (auVar21._0_4_ <= 180.0) {
      pfVar9 = pfVar8;
    }
    local_res8[0] = 0.0;
    DAT_180cadbd8 = *pfVar9;
  }
  else {
    DAT_180cadbd8 = 180.0;
  }
  auVar21 = ZEXT464((uint)DAT_180cadbdc);
  sVar4 = thunk_FUN_180624430(DAT_180cadbdc);
  auVar29 = ZEXT464(0x42c80000);
  if (sVar4 < 1) {
    pfVar8 = local_res8;
    if (auVar22._0_4_ <= auVar21._0_4_) {
      pfVar8 = &DAT_180cadbdc;
    }
    local_res8[2] = 100.0;
    pfVar9 = local_res8 + 2;
    if (auVar21._0_4_ <= 100.0) {
      pfVar9 = pfVar8;
    }
    local_res8[0] = auVar22._0_4_;
    DAT_180cadbdc = *pfVar9;
  }
  else {
    DAT_180cadbdc = 100.0;
  }
  local_res8[2] = 7.00649e-43;
  local_res8[0] = 0.0;
  pfVar8 = local_res8;
  if (-1 < (int)DAT_180cadbe0) {
    pfVar8 = &DAT_180cadbe0;
  }
  pfVar9 = local_res8 + 2;
  if ((int)DAT_180cadbe0 < 0x1f5) {
    pfVar9 = pfVar8;
  }
  pfVar8 = local_res8;
  DAT_180cadbe0 = *pfVar9;
  if (-1 < (int)DAT_180cadbe4) {
    pfVar8 = &DAT_180cadbe4;
  }
  local_res8[2] = 1.4013e-42;
  local_res8[0] = 0.0;
  pfVar9 = local_res8 + 2;
  if ((int)DAT_180cadbe4 < 0x3e9) {
    pfVar9 = pfVar8;
  }
  pfVar8 = local_res8;
  DAT_180cadbe4 = *pfVar9;
  if (-1 < (int)DAT_180cadbe8) {
    pfVar8 = &DAT_180cadbe8;
  }
  local_res8[2] = 5.60519e-45;
  local_res8[0] = 0.0;
  pfVar9 = local_res8 + 2;
  if ((int)DAT_180cadbe8 < 5) {
    pfVar9 = pfVar8;
  }
  pfVar8 = local_res8;
  DAT_180cadbe8 = *pfVar9;
  if (-1 < (int)DAT_180cadbec) {
    pfVar8 = &DAT_180cadbec;
  }
  local_res8[2] = 2.8026e-43;
  local_res8[0] = 0.0;
  pfVar9 = local_res8 + 2;
  if ((int)DAT_180cadbec < 0xc9) {
    pfVar9 = pfVar8;
  }
  pfVar8 = local_res8;
  DAT_180cadbec = *pfVar9;
  if (-1 < (int)DAT_180cad2e0) {
    pfVar8 = &DAT_180cad2e0;
  }
  local_res8[2] = 1.4013e-45;
  local_res8[0] = 0.0;
  pfVar9 = local_res8 + 2;
  if ((int)DAT_180cad2e0 < 2) {
    pfVar9 = pfVar8;
  }
  pfVar8 = local_res8;
  DAT_180cad2e0 = *pfVar9;
  if (-1 < (int)DAT_180cad2e4) {
    pfVar8 = &DAT_180cad2e4;
  }
  local_res8[2] = 3.57331e-43;
  local_res8[0] = 0.0;
  pfVar9 = local_res8 + 2;
  if ((int)DAT_180cad2e4 < 0x100) {
    pfVar9 = pfVar8;
  }
  pfVar8 = local_res8;
  DAT_180cad2e4 = *pfVar9;
  if (-1 < (int)DAT_180c7e258) {
    pfVar8 = &DAT_180c7e258;
  }
  local_res8[2] = 1.4013e-45;
  local_res8[0] = 0.0;
  pfVar9 = local_res8 + 2;
  if ((int)DAT_180c7e258 < 2) {
    pfVar9 = pfVar8;
  }
  pfVar8 = local_res8;
  local_110 = CONCAT44(_DAT_180cb1984,_DAT_180cb1980);
  uStack_108 = CONCAT44(_DAT_180cb198c,_DAT_180cb1988);
  DAT_180c7e258 = *pfVar9;
  if (-1 < (int)DAT_180cad72c) {
    pfVar8 = &DAT_180cad72c;
  }
  local_res8[0] = 0.0;
  local_res8[2] = 1.4013e-45;
  pfVar9 = local_res8 + 2;
  if ((int)DAT_180cad72c < 2) {
    pfVar9 = pfVar8;
  }
  local_100 = DAT_180cb1990;
  DAT_180cad72c = *pfVar9;
  pfVar8 = local_res8;
  if (-1 < (int)DAT_180cad428) {
    pfVar8 = &DAT_180cad428;
  }
  local_res8[0] = 0.0;
  local_res8[2] = 2.24208e-44;
  if (200 < (int)DAT_180cad428) {
    pfVar8 = (float *)&DAT_1806ff9a8;
  }
  pfVar9 = local_res8;
  DAT_180cad428 = *pfVar8;
  if (0 < (int)DAT_180cad498) {
    pfVar9 = &DAT_180cad498;
  }
  local_res8[0] = 1.4013e-45;
  pfVar8 = local_res8 + 2;
  if ((int)DAT_180cad498 < 0x11) {
    pfVar8 = pfVar9;
  }
  DAT_180cad498 = *pfVar8;
  local_118 = DAT_180cb1978;
  local_114 = DAT_180cb197c;
  pauVar5 = (undefined1 (*) [16])FUN_1800ba9f0(local_f8,&local_118);
  auVar19._8_8_ = 0;
  auVar19._0_8_ = *(ulonglong *)pauVar5[1];
  DAT_180cb1990 = *(undefined4 *)(pauVar5[1] + 8);
  auVar2 = *pauVar5;
  auVar19 = vshufps_avx(auVar19,auVar19,0x55);
  DAT_180cb197c = auVar2._4_4_;
  _DAT_180cb1980 = vextractps_avx(auVar2,2);
  _DAT_180cb1984 = vextractps_avx(auVar2,3);
  _DAT_180cb1988 = (undefined4)*(ulonglong *)pauVar5[1];
  _DAT_180cb198c = auVar19._0_4_;
  DAT_180cb1978 = auVar2._0_4_;
  FUN_1800b5ba0(&DAT_180c7e290);
  puVar11 = &DAT_180c7e978;
  do {
    FUN_1800b5ba0(puVar11);
    puVar11 = puVar11 + 0x6e8;
  } while (puVar11 != &DAT_180c812e8);
  puVar12 = (undefined4 *)&DAT_180c812e8;
  do {
    FUN_1800b5ba0(puVar12);
    puVar12 = puVar12 + 0x1ba;
  } while (puVar12 != &DAT_180c8fdb8);
  auVar21 = ZEXT464((uint)DAT_180cc8ee4);
  fVar24 = 3.0;
  fVar28 = -3.0;
  local_res8[4] = 3.0;
  local_res8[0] = -3.0;
  local_res8[2] = DAT_180cc8ee4;
  sVar4 = thunk_FUN_180624430(DAT_180cc8ee4);
  local_res8[0] = auVar22._0_4_;
  DAT_180cc8ee4 = local_res8[0];
  if (sVar4 < 1) {
    pfVar8 = local_res8;
    if (fVar28 <= auVar21._0_4_) {
      pfVar8 = local_res8 + 2;
    }
    pfVar9 = local_res8 + 4;
    if (auVar21._0_4_ <= fVar24) {
      pfVar9 = pfVar8;
    }
    DAT_180cc8ee4 = *pfVar9;
  }
  auVar25 = ZEXT464((uint)DAT_180cc8fdc);
  auVar21 = ZEXT464(0x3f800000);
  local_res8[4] = 1.0;
  local_res8[2] = DAT_180cc8fdc;
  sVar4 = thunk_FUN_180624430(DAT_180cc8fdc);
  local_res8[0] = auVar22._0_4_;
  local_res8[4] = auVar21._0_4_;
  DAT_180cc8fdc = local_res8[4];
  if (sVar4 < 1) {
    pfVar8 = local_res8;
    if (local_res8[0] <= auVar25._0_4_) {
      pfVar8 = local_res8 + 2;
    }
    pfVar9 = local_res8 + 4;
    if (auVar25._0_4_ <= local_res8[4]) {
      pfVar9 = pfVar8;
    }
    DAT_180cc8fdc = *pfVar9;
  }
  auVar25 = ZEXT464((uint)DAT_180cc8fe0);
  local_res8[2] = DAT_180cc8fe0;
  sVar4 = thunk_FUN_180624430(DAT_180cc8fe0);
  local_res8[0] = auVar22._0_4_;
  local_res8[4] = auVar21._0_4_;
  if (sVar4 < 1) {
    pfVar8 = local_res8;
    if (local_res8[0] <= auVar25._0_4_) {
      pfVar8 = local_res8 + 2;
    }
    pfVar9 = local_res8 + 4;
    if (auVar25._0_4_ <= local_res8[4]) {
      pfVar9 = pfVar8;
    }
    DAT_180cc8fe0 = *pfVar9;
  }
  else {
    DAT_180cc8fe0 = 0.35;
  }
  auVar25 = ZEXT464((uint)DAT_180cc9054);
  local_res8[2] = DAT_180cc9054;
  sVar4 = thunk_FUN_180624430(DAT_180cc9054);
  local_res8[0] = auVar22._0_4_;
  DAT_180cc9054 = auVar21._0_4_;
  if (sVar4 < 1) {
    pfVar8 = local_res8;
    if (local_res8[0] <= auVar25._0_4_) {
      pfVar8 = local_res8 + 2;
    }
    pfVar9 = local_res8 + 4;
    if (auVar25._0_4_ <= DAT_180cc9054) {
      pfVar9 = pfVar8;
    }
    DAT_180cc9054 = *pfVar9;
  }
  auVar25 = ZEXT464((uint)DAT_180cc8f5c);
  fVar24 = 4.0;
  local_res8[4] = 4.0;
  local_res8[2] = DAT_180cc8f5c;
  sVar4 = thunk_FUN_180624430(DAT_180cc8f5c);
  if (sVar4 < 1) {
    pfVar8 = local_res8;
    if (auVar22._0_4_ <= auVar25._0_4_) {
      pfVar8 = local_res8 + 2;
    }
    pfVar9 = local_res8 + 4;
    if (auVar25._0_4_ <= fVar24) {
      pfVar9 = pfVar8;
    }
    DAT_180cc8f5c = *pfVar9;
  }
  else {
    DAT_180cc8f5c = 0.85;
  }
  auVar25 = ZEXT464((uint)DAT_180cc90c0);
  fVar28 = 5.0;
  local_res8[2] = 2.8026e-45;
  local_res8[0] = 0.0;
  pfVar8 = local_res8;
  if (-1 < (int)DAT_180cc90c4) {
    pfVar8 = &DAT_180cc90c4;
  }
  pfVar9 = local_res8 + 2;
  if ((int)DAT_180cc90c4 < 3) {
    pfVar9 = pfVar8;
  }
  local_res8[4] = 5.0;
  DAT_180cc90c4 = *pfVar9;
  local_res8[2] = DAT_180cc90c0;
  local_res8[0] = auVar22._0_4_;
  sVar4 = thunk_FUN_180624430(DAT_180cc90c0);
  fVar30 = 2.0;
  local_res8[0] = auVar22._0_4_;
  if (sVar4 < 1) {
    pfVar8 = local_res8;
    if (local_res8[0] <= auVar25._0_4_) {
      pfVar8 = local_res8 + 2;
    }
    pfVar9 = local_res8 + 4;
    if (auVar25._0_4_ <= fVar28) {
      pfVar9 = pfVar8;
    }
    DAT_180cc90c0 = *pfVar9;
  }
  else {
    DAT_180cc90c0 = 2.0;
  }
  auVar25 = ZEXT464((uint)DAT_180cc90c8);
  fVar27 = 8.0;
  local_res8[4] = 8.0;
  local_res8[2] = DAT_180cc90c8;
  sVar4 = thunk_FUN_180624430(DAT_180cc90c8);
  if (sVar4 < 1) {
    pfVar8 = local_res8;
    if (auVar22._0_4_ <= auVar25._0_4_) {
      pfVar8 = local_res8 + 2;
    }
    pfVar9 = local_res8 + 4;
    if (auVar25._0_4_ <= fVar27) {
      pfVar9 = pfVar8;
    }
    DAT_180cc90c8 = *pfVar9;
  }
  else {
    DAT_180cc90c8 = auVar21._0_4_;
  }
  auVar25 = ZEXT464((uint)DAT_180cc90cc);
  local_res8[0] = 0.05;
  local_res8[2] = DAT_180cc90cc;
  local_res8[4] = fVar24;
  sVar4 = thunk_FUN_180624430(DAT_180cc90cc);
  auVar26 = ZEXT464(0x3f000000);
  if (sVar4 < 1) {
    pfVar8 = local_res8;
    if (0.05 <= auVar25._0_4_) {
      pfVar8 = local_res8 + 2;
    }
    pfVar9 = local_res8 + 4;
    if (auVar25._0_4_ <= fVar24) {
      pfVar9 = pfVar8;
    }
    DAT_180cc90cc = *pfVar9;
  }
  else {
    DAT_180cc90cc = 0.5;
  }
  auVar25 = ZEXT464((uint)DAT_180cc90d0);
  local_res8[0] = auVar22._0_4_;
  local_res8[2] = DAT_180cc90d0;
  local_res8[4] = fVar28;
  sVar4 = thunk_FUN_180624430(DAT_180cc90d0);
  DAT_180cc90d0 = auVar21._0_4_;
  if (sVar4 < 1) {
    pfVar8 = local_res8;
    if (auVar22._0_4_ <= auVar25._0_4_) {
      pfVar8 = local_res8 + 2;
    }
    pfVar9 = local_res8 + 4;
    if (auVar25._0_4_ <= fVar28) {
      pfVar9 = pfVar8;
    }
    DAT_180cc90d0 = *pfVar9;
  }
  auVar25 = ZEXT464((uint)DAT_180cc9140);
  local_res8[2] = 2.8026e-45;
  local_res8[0] = 0.0;
  pfVar8 = local_res8;
  if (-1 < (int)DAT_180cc9144) {
    pfVar8 = &DAT_180cc9144;
  }
  pfVar9 = local_res8 + 2;
  if ((int)DAT_180cc9144 < 3) {
    pfVar9 = pfVar8;
  }
  local_res8[4] = fVar28;
  DAT_180cc9144 = *pfVar9;
  local_res8[2] = DAT_180cc9140;
  local_res8[0] = auVar21._0_4_;
  sVar4 = thunk_FUN_180624430(DAT_180cc9140);
  if (sVar4 < 1) {
    pfVar8 = local_res8;
    if (auVar21._0_4_ <= auVar25._0_4_) {
      pfVar8 = local_res8 + 2;
    }
    pfVar9 = local_res8 + 4;
    if (auVar25._0_4_ <= fVar28) {
      pfVar9 = pfVar8;
    }
    DAT_180cc9140 = *pfVar9;
  }
  else {
    DAT_180cc9140 = 2.2;
  }
  auVar25 = ZEXT464((uint)DAT_180cc91c4);
  local_res8[2] = 2.8026e-45;
  local_res8[0] = 0.0;
  pfVar8 = local_res8;
  if (-1 < (int)DAT_180cc91c0) {
    pfVar8 = &DAT_180cc91c0;
  }
  pfVar9 = local_res8 + 2;
  if ((int)DAT_180cc91c0 < 3) {
    pfVar9 = pfVar8;
  }
  local_res8[4] = auVar21._0_4_;
  DAT_180cc91c0 = *pfVar9;
  local_res8[0] = auVar22._0_4_;
  local_res8[2] = DAT_180cc91c4;
  sVar4 = thunk_FUN_180624430(DAT_180cc91c4);
  if (sVar4 < 1) {
    pfVar8 = local_res8;
    if (auVar22._0_4_ <= auVar25._0_4_) {
      pfVar8 = local_res8 + 2;
    }
    pfVar9 = local_res8 + 4;
    if (auVar25._0_4_ <= auVar21._0_4_) {
      pfVar9 = pfVar8;
    }
    DAT_180cc91c4 = *pfVar9;
  }
  else {
    DAT_180cc91c4 = 0.65;
  }
  FUN_1800c0a10(&DAT_180cb6200);
  local_res8[4] = auVar21._0_4_;
  local_res8[0] = auVar22._0_4_;
  pfVar8 = (float *)&DAT_180b0b688;
  lVar15 = 5;
  do {
    fVar24 = *pfVar8;
    local_res8[2] = fVar24;
    sVar4 = thunk_FUN_180624430(fVar24);
    fVar20 = auVar21._0_4_;
    fVar28 = fVar20;
    if (sVar4 < 1) {
      pfVar9 = local_res8;
      if (auVar22._0_4_ <= fVar24) {
        pfVar9 = local_res8 + 2;
      }
      pfVar7 = local_res8 + 4;
      if (fVar24 <= fVar20) {
        pfVar7 = pfVar9;
      }
      fVar28 = *pfVar7;
    }
    *pfVar8 = fVar28;
    pfVar8 = pfVar8 + 0x54;
    lVar15 = lVar15 + -1;
  } while (lVar15 != 0);
  auVar25 = ZEXT464((uint)DAT_180b0bd18);
  local_res8[2] = 1.4013e-45;
  local_res8[0] = 0.0;
  pfVar8 = local_res8;
  if (-1 < (int)DAT_180b0bd20) {
    pfVar8 = &DAT_180b0bd20;
  }
  pfVar9 = local_res8 + 2;
  if ((int)DAT_180b0bd20 < 2) {
    pfVar9 = pfVar8;
  }
  local_res8[4] = fVar20;
  DAT_180b0bd20 = *pfVar9;
  local_res8[2] = DAT_180b0bd18;
  local_res8[0] = auVar22._0_4_;
  sVar4 = thunk_FUN_180624430(DAT_180b0bd18);
  DAT_180b0bd18 = auVar21._0_4_;
  if (sVar4 < 1) {
    pfVar8 = local_res8;
    if (auVar22._0_4_ <= auVar25._0_4_) {
      pfVar8 = local_res8 + 2;
    }
    pfVar9 = local_res8 + 4;
    if (auVar25._0_4_ <= DAT_180b0bd18) {
      pfVar9 = pfVar8;
    }
    DAT_180b0bd18 = *pfVar9;
  }
  fVar24 = 0.25;
  fVar28 = 1.25;
  fVar20 = 1.5;
  local_res20[0] = 0.25;
  local_res8[0] = auVar26._0_4_;
  pfVar8 = (float *)&DAT_180cc78b0;
  lVar15 = 3;
  local_res8[4] = fVar30;
  local_158[0] = fVar27;
  do {
    fVar16 = pfVar8[-1];
    local_res8[2] = fVar16;
    sVar4 = thunk_FUN_180624430(fVar16);
    if (sVar4 < 1) {
      pfVar9 = local_res8;
      if (auVar26._0_4_ <= fVar16) {
        pfVar9 = local_res8 + 2;
      }
      pfVar7 = local_res8 + 4;
      if (fVar16 <= fVar30) {
        pfVar7 = pfVar9;
      }
      fVar16 = *pfVar7;
    }
    else {
      fVar16 = fVar28;
    }
    fVar23 = *pfVar8;
    pfVar8[-1] = fVar16;
    local_res8[2] = fVar23;
    sVar4 = thunk_FUN_180624430(fVar23);
    if (sVar4 < 1) {
      pfVar9 = local_res20;
      if (fVar24 <= fVar23) {
        pfVar9 = local_res8 + 2;
      }
      pfVar7 = local_158;
      if (fVar23 <= fVar27) {
        pfVar7 = pfVar9;
      }
      fVar16 = *pfVar7;
    }
    else {
      fVar16 = fVar20;
    }
    *pfVar8 = fVar16;
    pfVar8 = pfVar8 + 0x72;
    lVar15 = lVar15 + -1;
  } while (lVar15 != 0);
  fVar24 = 200.0;
  fVar28 = 50.0;
  fVar27 = 180.0;
  local_res8[4] = 200.0;
  local_130[0] = 200.0;
  local_120[0] = 200.0;
  local_res8[0] = auVar21._0_4_;
  local_158[0] = 1.4013e-45;
  pbVar14 = &DAT_180cb4898;
  local_res20[0] = 0.0;
  piVar13 = &DAT_180cb5bb0;
  local_150[1] = 1;
  pfVar8 = (float *)&DAT_180cb39d0;
  local_150[0] = 0;
  local_150[3] = 1;
  local_150[2] = 0;
  local_150[5] = 1;
  local_150[4] = 0;
  local_168[0] = 0;
  local_168[1] = 2;
  local_168[2] = 3;
  local_168[3] = 4;
  local_168[4] = 5;
  local_168[5] = 6;
  local_168[6] = 8;
  local_168[7] = 9;
  local_168[8] = 0;
  local_168[9] = 2;
  local_168[10] = 3;
  local_168[0xb] = 4;
  local_168[0xc] = 5;
  local_168[0xd] = 6;
  local_168[0xe] = 8;
  local_168[0xf] = 9;
  local_138[0] = local_res8[0];
  local_128[0] = local_res8[0];
  do {
    fVar20 = pfVar8[-1];
    local_res8[2] = fVar20;
    sVar4 = thunk_FUN_180624430(fVar20);
    if (sVar4 < 1) {
      pfVar9 = local_res8;
      if (auVar21._0_4_ <= fVar20) {
        pfVar9 = local_res8 + 2;
      }
      pfVar7 = local_res8 + 4;
      if (fVar20 <= fVar24) {
        pfVar7 = pfVar9;
      }
      fVar20 = *pfVar7;
    }
    else {
      fVar20 = fVar28;
    }
    pfVar8[-1] = fVar20;
    piVar1 = piVar13 + 0x188;
    pfVar9 = local_res20;
    if (-1 < (int)*pfVar8) {
      pfVar9 = pfVar8;
    }
    pfVar7 = local_158;
    if ((int)*pfVar8 < 2) {
      pfVar7 = pfVar9;
    }
    *pfVar8 = *pfVar7;
    piVar10 = local_150;
    if (-1 < *piVar1) {
      piVar10 = piVar1;
    }
    piVar6 = local_150 + 1;
    if (*piVar1 < 2) {
      piVar6 = piVar10;
    }
    *piVar1 = *piVar6;
    piVar1 = piVar13 + 6;
    piVar10 = local_150 + 2;
    if (-1 < *piVar13) {
      piVar10 = piVar13;
    }
    piVar6 = local_150 + 3;
    if (*piVar13 < 2) {
      piVar6 = piVar10;
    }
    *piVar13 = *piVar6;
    piVar10 = local_150 + 4;
    if (-1 < *piVar1) {
      piVar10 = piVar1;
    }
    piVar6 = local_150 + 5;
    if (*piVar1 < 2) {
      piVar6 = piVar10;
    }
    *piVar1 = *piVar6;
    fVar20 = (float)piVar13[0x18e];
    local_res8[2] = fVar20;
    sVar4 = thunk_FUN_180624430(fVar20);
    if (sVar4 < 1) {
      pfVar9 = local_138;
      if (auVar21._0_4_ <= fVar20) {
        pfVar9 = local_res8 + 2;
      }
      pfVar7 = local_130;
      if (fVar20 <= fVar24) {
        pfVar7 = pfVar9;
      }
      fVar20 = *pfVar7;
    }
    else {
      fVar20 = auVar29._0_4_;
    }
    piVar13[0x18e] = (int)fVar20;
    fVar20 = (float)piVar13[0xc];
    local_res8[2] = fVar20;
    sVar4 = thunk_FUN_180624430(fVar20);
    if (sVar4 < 1) {
      pfVar9 = local_128;
      if (auVar21._0_4_ <= fVar20) {
        pfVar9 = local_res8 + 2;
      }
      pfVar7 = local_120;
      if (fVar20 <= fVar24) {
        pfVar7 = pfVar9;
      }
      fVar20 = *pfVar7;
    }
    else {
      fVar20 = auVar29._0_4_;
    }
    piVar13[0xc] = (int)fVar20;
    bVar3 = pbVar14[-0x108];
    if (10 < bVar3) {
      if (bVar3 < 0x13) {
        bVar3 = local_168[bVar3 - 0xb];
      }
      else {
        bVar3 = 2;
      }
    }
    pbVar14[-0x108] = bVar3;
    bVar3 = *pbVar14;
    if (10 < bVar3) {
      if (bVar3 < 0x13) {
        bVar3 = local_168[(ulonglong)(bVar3 - 0xb) + 8];
      }
      else {
        bVar3 = 2;
      }
    }
    *pbVar14 = bVar3;
    pfVar8 = pfVar8 + 0x7a;
    pbVar14 = pbVar14 + 0x380;
    piVar13 = piVar13 + 1;
  } while ((longlong)pfVar8 < 0x180cb4540);
  pfVar8 = local_res8;
  auVar29 = ZEXT464((uint)DAT_180b0bee0);
  fVar28 = 10.0;
  if (0 < (int)DAT_180b0b3a8) {
    pfVar8 = &DAT_180b0b3a8;
  }
  local_res8[2] = 1.12104e-44;
  local_res8[0] = 1.4013e-45;
  pfVar9 = local_res8 + 2;
  if ((int)DAT_180b0b3a8 < 9) {
    pfVar9 = pfVar8;
  }
  pfVar8 = local_res8;
  local_res8[4] = 10.0;
  DAT_180b0b3a8 = *pfVar9;
  if (-1 < (int)DAT_180b0b3ac) {
    pfVar8 = &DAT_180b0b3ac;
  }
  local_res8[2] = 1.4013e-45;
  local_res8[0] = 0.0;
  pfVar9 = local_res8 + 2;
  if ((int)DAT_180b0b3ac < 2) {
    pfVar9 = pfVar8;
  }
  DAT_180b0b3ac = *pfVar9;
  local_res8[0] = auVar26._0_4_;
  local_res8[2] = DAT_180b0bee0;
  sVar4 = thunk_FUN_180624430(DAT_180b0bee0);
  local_res8[0] = auVar26._0_4_;
  if (sVar4 < 1) {
    pfVar8 = local_res8;
    if (local_res8[0] <= auVar29._0_4_) {
      pfVar8 = local_res8 + 2;
    }
    pfVar9 = local_res8 + 4;
    if (auVar29._0_4_ <= fVar28) {
      pfVar9 = pfVar8;
    }
    DAT_180b0bee0 = *pfVar9;
  }
  else {
    DAT_180b0bee0 = 3.5;
  }
  auVar29 = ZEXT464((uint)DAT_180b0c0f0);
  local_res8[2] = DAT_180b0c0f0;
  local_res8[4] = fVar28;
  sVar4 = thunk_FUN_180624430(DAT_180b0c0f0);
  if (sVar4 < 1) {
    pfVar8 = local_res8;
    if (auVar26._0_4_ <= auVar29._0_4_) {
      pfVar8 = local_res8 + 2;
    }
    pfVar9 = local_res8 + 4;
    if (auVar29._0_4_ <= fVar28) {
      pfVar9 = pfVar8;
    }
    DAT_180b0c0f0 = *pfVar9;
  }
  else {
    DAT_180b0c0f0 = 4.5;
  }
  auVar29 = ZEXT464((uint)DAT_180b0d5e0);
  local_res8[2] = 2.8026e-45;
  local_res8[0] = 0.0;
  pfVar8 = local_res8;
  if (-1 < (int)DAT_180b0d5bc) {
    pfVar8 = &DAT_180b0d5bc;
  }
  pfVar9 = local_res8 + 2;
  if ((int)DAT_180b0d5bc < 3) {
    pfVar9 = pfVar8;
  }
  local_res8[4] = (float)auVar21._0_4_;
  DAT_180b0d5bc = *pfVar9;
  local_res8[0] = auVar22._0_4_;
  local_res8[2] = DAT_180b0d5e0;
  sVar4 = thunk_FUN_180624430(DAT_180b0d5e0);
  local_res8[0] = auVar22._0_4_;
  local_res8[4] = auVar21._0_4_;
  if (sVar4 < 1) {
    pfVar8 = local_res8;
    if (local_res8[0] <= auVar29._0_4_) {
      pfVar8 = local_res8 + 2;
    }
    pfVar9 = local_res8 + 4;
    if (auVar29._0_4_ <= local_res8[4]) {
      pfVar9 = pfVar8;
    }
    DAT_180b0d5e0 = *pfVar9;
  }
  else {
    DAT_180b0d5e0 = auVar26._0_4_;
  }
  auVar29 = ZEXT464((uint)DAT_180b0d5e4);
  local_res8[2] = DAT_180b0d5e4;
  sVar4 = thunk_FUN_180624430(DAT_180b0d5e4);
  DAT_180b0d5e4 = auVar21._0_4_;
  if (sVar4 < 1) {
    pfVar8 = local_res8;
    if (auVar22._0_4_ <= auVar29._0_4_) {
      pfVar8 = local_res8 + 2;
    }
    pfVar9 = local_res8 + 4;
    if (auVar29._0_4_ <= DAT_180b0d5e4) {
      pfVar9 = pfVar8;
    }
    DAT_180b0d5e4 = *pfVar9;
  }
  auVar29 = ZEXT464(DAT_180b0d5e8);
  local_res8[0] = auVar26._0_4_;
  local_res8[2] = (float)DAT_180b0d5e8;
  local_res8[4] = fVar30;
  sVar4 = thunk_FUN_180624430(DAT_180b0d5e8);
  if (sVar4 < 1) {
    pfVar8 = local_res8;
    if (auVar26._0_4_ <= auVar29._0_4_) {
      pfVar8 = local_res8 + 2;
    }
    pfVar9 = local_res8 + 4;
    if (auVar29._0_4_ <= fVar30) {
      pfVar9 = pfVar8;
    }
    uVar17 = (ulonglong)(uint)*pfVar9;
  }
  else {
    uVar17 = auVar21._0_8_;
  }
  DAT_180b0d5e8 = (uint)uVar17;
  uVar18 = FUN_1800e3700(uVar17,DAT_180b0d69c,auVar26._0_8_,auVar22._0_8_,auVar21._0_4_);
  DAT_180b0d69c = (undefined4)uVar18;
  uVar18 = FUN_1800e3700(uVar18,DAT_180b0d6a0,auVar22._0_8_,auVar22._0_8_,auVar21._0_4_);
  DAT_180b0d6a0 = (undefined4)uVar18;
  uVar18 = FUN_1800e3700(uVar18,DAT_180b0d6a4,auVar21._0_8_,auVar26._0_8_,fVar30);
  DAT_180b0d6a4 = (undefined4)uVar18;
  uVar18 = FUN_1800e3700(uVar18,DAT_180b0d6d0,auVar21._0_8_,auVar22._0_8_,auVar21._0_4_);
  DAT_180b0d6d0 = (undefined4)uVar18;
  uVar18 = FUN_1800e3700(uVar18,DAT_180b0d6d4,auVar26._0_8_,auVar22._0_8_,auVar21._0_4_);
  DAT_180b0d6d4 = (undefined4)uVar18;
  uVar18 = FUN_1800e3700(uVar18,DAT_180b0d6d8,auVar21._0_8_,auVar26._0_8_,fVar30);
  DAT_180b0d6d8 = (undefined4)uVar18;
  uVar18 = FUN_1800e3700(uVar18,DAT_180b0d674,auVar22._0_8_,auVar22._0_8_,auVar21._0_4_);
  DAT_180b0d674 = (undefined4)uVar18;
  uVar18 = FUN_1800e3700(uVar18,DAT_180b0d678,auVar26._0_8_,auVar22._0_8_,auVar21._0_4_);
  DAT_180b0d678 = (undefined4)uVar18;
  DAT_180b0d67c = FUN_1800e3700(uVar18,DAT_180b0d67c,auVar21._0_8_,auVar26._0_8_,fVar30);
  auVar29 = ZEXT464((uint)DAT_180b0d5a0);
  fVar28 = 320.0;
  fVar20 = 120.0;
  local_res8[4] = 320.0;
  local_res8[0] = 120.0;
  local_res8[2] = DAT_180b0d5a0;
  sVar4 = thunk_FUN_180624430(DAT_180b0d5a0);
  if (sVar4 < 1) {
    pfVar8 = local_res8;
    if (fVar20 <= auVar29._0_4_) {
      pfVar8 = local_res8 + 2;
    }
    pfVar9 = local_res8 + 4;
    if (auVar29._0_4_ <= fVar28) {
      pfVar9 = pfVar8;
    }
    fVar24 = *pfVar9;
  }
  auVar29 = ZEXT464((uint)DAT_180b0d5a4);
  fVar20 = 24.0;
  fVar28 = 80.0;
  local_res8[4] = 80.0;
  local_res8[0] = 24.0;
  local_res8[2] = DAT_180b0d5a4;
  DAT_180b0d5a0 = fVar24;
  sVar4 = thunk_FUN_180624430(DAT_180b0d5a4);
  if (sVar4 < 1) {
    pfVar8 = local_res8;
    if (fVar20 <= auVar29._0_4_) {
      pfVar8 = local_res8 + 2;
    }
    pfVar9 = local_res8 + 4;
    if (auVar29._0_4_ <= fVar28) {
      pfVar9 = pfVar8;
    }
    DAT_180b0d5a4 = *pfVar9;
  }
  else {
    DAT_180b0d5a4 = 44.0;
  }
  auVar29 = ZEXT464((uint)DAT_180b0d59c);
  fVar24 = 220.0;
  fVar20 = 20.0;
  local_res8[4] = 220.0;
  local_res8[0] = 20.0;
  local_res8[2] = DAT_180b0d59c;
  sVar4 = thunk_FUN_180624430(DAT_180b0d59c);
  if (sVar4 < 1) {
    pfVar8 = local_res8;
    if (fVar20 <= auVar29._0_4_) {
      pfVar8 = local_res8 + 2;
    }
    pfVar9 = local_res8 + 4;
    if (auVar29._0_4_ <= fVar24) {
      pfVar9 = pfVar8;
    }
    fVar28 = *pfVar9;
  }
  auVar29 = ZEXT464((uint)DAT_180b0d5c0);
  fVar24 = 4.0;
  local_res8[4] = 4.0;
  local_res8[0] = auVar26._0_4_;
  local_res8[2] = DAT_180b0d5c0;
  DAT_180b0d59c = fVar28;
  sVar4 = thunk_FUN_180624430(DAT_180b0d5c0);
  if (sVar4 < 1) {
    pfVar8 = local_res8;
    if (auVar26._0_4_ <= auVar29._0_4_) {
      pfVar8 = local_res8 + 2;
    }
    pfVar9 = local_res8 + 4;
    if (auVar29._0_4_ <= fVar24) {
      pfVar9 = pfVar8;
    }
    DAT_180b0d5c0 = *pfVar9;
  }
  else {
    DAT_180b0d5c0 = 1.5;
  }
  auVar29 = ZEXT464((uint)DAT_180b0d5c8);
  fVar28 = 0.05;
  local_res8[0] = 0.05;
  local_res8[2] = DAT_180b0d5c8;
  local_res8[4] = fVar30;
  sVar4 = thunk_FUN_180624430(DAT_180b0d5c8);
  fVar24 = 0.35;
  if (sVar4 < 1) {
    pfVar8 = local_res8;
    if (fVar28 <= auVar29._0_4_) {
      pfVar8 = local_res8 + 2;
    }
    pfVar9 = local_res8 + 4;
    if (auVar29._0_4_ <= fVar30) {
      pfVar9 = pfVar8;
    }
    DAT_180b0d5c8 = *pfVar9;
  }
  else {
    DAT_180b0d5c8 = 0.35;
  }
  auVar29 = ZEXT464((uint)DAT_180b0d5d0);
  fVar28 = 60.0;
  local_res8[4] = 60.0;
  local_res8[0] = auVar22._0_4_;
  local_res8[2] = DAT_180b0d5d0;
  sVar4 = thunk_FUN_180624430(DAT_180b0d5d0);
  local_res8[0] = auVar22._0_4_;
  if (sVar4 < 1) {
    pfVar8 = local_res8;
    if (local_res8[0] <= auVar29._0_4_) {
      pfVar8 = local_res8 + 2;
    }
    pfVar9 = local_res8 + 4;
    if (auVar29._0_4_ <= fVar28) {
      pfVar9 = pfVar8;
    }
    DAT_180b0d5d0 = *pfVar9;
  }
  else {
    DAT_180b0d5d0 = 18.0;
  }
  auVar29 = ZEXT464((uint)DAT_180b0d5d8);
  local_res8[4] = auVar21._0_4_;
  local_res8[2] = DAT_180b0d5d8;
  sVar4 = thunk_FUN_180624430(DAT_180b0d5d8);
  if (sVar4 < 1) {
    pfVar8 = local_res8;
    if (auVar22._0_4_ <= auVar29._0_4_) {
      pfVar8 = local_res8 + 2;
    }
    pfVar9 = local_res8 + 4;
    if (auVar29._0_4_ <= auVar21._0_4_) {
      pfVar9 = pfVar8;
    }
    fVar24 = *pfVar9;
  }
  if (3 < DAT_180cad720) {
    DAT_180cad720 = 1;
  }
  if (1 < DAT_180cad728) {
    DAT_180cad728 = 1;
  }
  auVar29 = ZEXT464((uint)DAT_180cad724);
  fVar28 = 89.0;
  fVar30 = -89.0;
  local_res8[4] = 89.0;
  local_res8[0] = -89.0;
  local_res8[2] = DAT_180cad724;
  DAT_180b0d5d8 = fVar24;
  sVar4 = thunk_FUN_180624430(DAT_180cad724);
  if (sVar4 < 1) {
    pfVar8 = local_res8;
    if (fVar30 <= auVar29._0_4_) {
      pfVar8 = local_res8 + 2;
    }
    pfVar9 = local_res8 + 4;
    if (auVar29._0_4_ <= fVar28) {
      pfVar9 = pfVar8;
    }
    DAT_180cad724 = *pfVar9;
  }
  else {
    DAT_180cad724 = 30.0;
  }
  auVar29 = ZEXT464((uint)DAT_180cad950);
  local_res8[2] = DAT_180cad950;
  sVar4 = thunk_FUN_180624430(DAT_180cad950);
  DAT_180cad950 = -90.0;
  if ((sVar4 < 1) && (fVar24 = auVar29._0_4_, auVar22._0_4_ < fVar24 * -90.0)) {
    pfVar8 = local_res8;
    if (-105.0 <= fVar24) {
      pfVar8 = local_res8 + 2;
    }
    local_res8[4] = -75.0;
    pfVar9 = local_res8 + 4;
    if (fVar24 <= -75.0) {
      pfVar9 = pfVar8;
    }
    local_res8[0] = -105.0;
    DAT_180cad950 = *pfVar9;
  }
  auVar29 = ZEXT464((uint)DAT_180cad954);
  local_res8[2] = DAT_180cad954;
  sVar4 = thunk_FUN_180624430(DAT_180cad954);
  DAT_180cad954 = 90.0;
  if ((sVar4 < 1) && (fVar24 = auVar29._0_4_, auVar22._0_4_ < fVar24 * 90.0)) {
    pfVar8 = local_res8;
    if (75.0 <= fVar24) {
      pfVar8 = local_res8 + 2;
    }
    local_res8[4] = 105.0;
    pfVar9 = local_res8 + 4;
    if (fVar24 <= 105.0) {
      pfVar9 = pfVar8;
    }
    local_res8[0] = 75.0;
    DAT_180cad954 = *pfVar9;
  }
  auVar29 = ZEXT464((uint)DAT_180cad878);
  fVar24 = -180.0;
  local_res8[0] = -180.0;
  local_res8[2] = DAT_180cad878;
  local_res8[4] = fVar27;
  sVar4 = thunk_FUN_180624430(DAT_180cad878);
  if (sVar4 < 1) {
    pfVar8 = local_res8;
    if (fVar24 <= auVar29._0_4_) {
      pfVar8 = local_res8 + 2;
    }
    pfVar9 = local_res8 + 4;
    if (auVar29._0_4_ <= fVar27) {
      pfVar9 = pfVar8;
    }
    DAT_180cad878 = *pfVar9;
  }
  else {
    DAT_180cad878 = 33.0;
  }
  auVar29 = ZEXT464((uint)DAT_180cad798);
  local_res8[0] = auVar22._0_4_;
  local_res8[2] = DAT_180cad798;
  local_res8[4] = fVar27;
  sVar4 = thunk_FUN_180624430(DAT_180cad798);
  if (sVar4 < 1) {
    pfVar8 = local_res8;
    if (auVar22._0_4_ <= auVar29._0_4_) {
      pfVar8 = local_res8 + 2;
    }
    pfVar9 = local_res8 + 4;
    if (auVar29._0_4_ <= fVar27) {
      pfVar9 = pfVar8;
    }
    DAT_180cad798 = *pfVar9;
  }
  else {
    DAT_180cad798 = 45.0;
  }
  auVar22 = ZEXT464((uint)DAT_180cad808);
  fVar28 = 5.0;
  fVar24 = -5.0;
  local_res8[4] = 5.0;
  local_res8[0] = -5.0;
  local_res8[2] = DAT_180cad808;
  sVar4 = thunk_FUN_180624430(DAT_180cad808);
  DAT_180cad808 = auVar21._0_4_;
  if (sVar4 < 1) {
    pfVar8 = local_res8;
    if (fVar24 <= auVar22._0_4_) {
      pfVar8 = local_res8 + 2;
    }
    pfVar9 = local_res8 + 4;
    if (auVar22._0_4_ <= fVar28) {
      pfVar9 = pfVar8;
    }
    DAT_180cad808 = *pfVar9;
  }
  _DAT_180cad898 = &DAT_180cad8e8;
  _DAT_180cad900 = &DAT_180cad880;
  if ((DAT_180cad880 != '\0') && (DAT_180cad8e8 != '\0')) {
    DAT_180cad8e8 = '\0';
    DAT_180cad8f8 = 0;
  }
  return;
}



