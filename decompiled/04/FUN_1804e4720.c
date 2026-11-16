// FUN_1804e4720 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804e4720 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804e4720(float param_1,float param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5,longlong param_6)

{
  float *pfVar1;
  float fVar2;
  undefined1 auVar3 [16];
  float fVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined8 *puVar9;
  float *pfVar10;
  longlong lVar11;
  longlong lVar12;
  float *pfVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 in_ZMM2 [64];
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 in_ZMM3 [64];
  undefined1 auVar23 [64];
  undefined1 auVar24 [64];
  float fVar25;
  undefined1 auStack_168 [32];
  longlong local_148;
  float afStack_140 [2];
  undefined8 local_138;
  float local_130 [30];
  ulonglong local_b8;
  
  local_b8 = DAT_1808d5f00 ^ (ulonglong)auStack_168;
  fVar25 = 1.0;
  auVar3 = vminss_avx(in_ZMM3._0_16_,in_ZMM2._0_16_);
  auVar24 = ZEXT1664(in_ZMM2._0_16_);
  local_148 = param_6;
  fVar17 = (float)FUN_180636820(1.0 - auVar3._0_4_ / in_ZMM2._0_4_);
  fVar18 = auVar24._0_4_;
  auVar23 = ZEXT464(0x40490fdb);
  auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(3.1415927 / fVar17)),2);
  iVar16 = 1;
  iVar7 = (((int)auVar3._0_4_ + 1) / 2) * 2;
  if (iVar7 < 4) {
    iVar7 = 0xc;
  }
  else {
    if (0x200 < iVar7) {
      iVar7 = 0x200;
    }
    iVar7 = (int)(0x30 / (longlong)iVar7);
    if (iVar7 < 1) {
      iVar7 = 1;
      iVar6 = 0xc;
      goto LAB_1804e480f;
    }
  }
  if (0xc < iVar7) {
    iVar7 = 0xc;
  }
  iVar6 = (int)(0xc / (longlong)iVar7);
  if (iVar6 * iVar7 != 0xc) {
    iVar7 = (int)(0xc / (longlong)iVar6);
  }
LAB_1804e480f:
  puVar9 = &local_138;
  iVar15 = 0;
  lVar11 = 0xf;
  do {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  local_138._0_4_ = param_1 - fVar18;
  local_138._4_4_ = param_2 + fVar25;
  fVar17 = ((float)iVar7 / 48.0) * 3.1415927;
  fVar17 = fVar17 + fVar17;
  if (0 < (int)(iVar6 + 1U)) {
    uVar14 = (ulonglong)(iVar6 + 1U);
    iVar16 = iVar6 + 2;
    pfVar10 = local_130;
    do {
      fVar18 = (float)FUN_180637540(auVar23._0_8_);
      *pfVar10 = fVar18 * auVar24._0_4_ + param_1;
      fVar19 = (float)FUN_180638e00(auVar23._0_8_);
      fVar18 = auVar24._0_4_;
      pfVar10[1] = fVar19 * fVar18 + param_2;
      auVar23 = ZEXT464((uint)(auVar23._0_4_ + fVar17));
      uVar14 = uVar14 - 1;
      pfVar10 = pfVar10 + 2;
    } while (uVar14 != 0);
    param_6 = local_148;
  }
  afStack_140[(longlong)iVar16 * 2 + 2] = param_1 + fVar25;
  *(float *)((longlong)&local_138 + ((longlong)iVar16 * 2 + 1) * 4) = param_2 - fVar18;
  if (iVar16 < 4) {
    if (iVar16 < 1) {
    }
    lVar11 = 0;
  }
  else {
    lVar12 = (longlong)afStack_140 + (8 - param_5);
    lVar5 = -param_5;
    uVar8 = (iVar16 - 4U >> 2) + 1;
    uVar14 = (ulonglong)uVar8;
    iVar15 = uVar8 * 4;
    lVar11 = (ulonglong)uVar8 * 4;
    pfVar10 = (float *)(param_5 + 8);
    pfVar13 = (float *)(param_6 + 8);
    do {
      fVar17 = *(float *)((longlong)pfVar10 + (longlong)&local_138 + lVar5 + 4);
      fVar21 = fVar17 - *(float *)((longlong)pfVar10 + (longlong)afStack_140 + lVar5 + 4);
      fVar18 = *(float *)((longlong)pfVar10 + lVar12);
      fVar4 = fVar18 - *(float *)((longlong)pfVar10 + lVar12 + -8);
      fVar25 = *(float *)((longlong)pfVar10 + ((longlong)local_130 - param_5));
      fVar19 = *(float *)((longlong)pfVar10 + (longlong)local_130 + (4 - param_5));
      fVar22 = *(float *)((longlong)pfVar10 + (longlong)local_130 + (0xc - param_5));
      fVar2 = fVar21 * fVar21 + fVar4 * fVar4;
      auVar3 = vrsqrtss_avx(ZEXT416((uint)fVar2),ZEXT416((uint)fVar2));
      fVar20 = auVar3._0_4_;
      fVar20 = (1.5 - fVar2 * 0.5 * fVar20 * fVar20) * fVar20;
      fVar21 = fVar20 * fVar21;
      pfVar10[-2] = fVar21;
      fVar20 = -fVar4 * fVar20;
      fVar2 = *(float *)((longlong)pfVar10 + (longlong)afStack_140 + lVar5 + 4);
      fVar4 = *(float *)((longlong)pfVar10 + lVar12 + -8);
      pfVar10[-1] = fVar20;
      pfVar13[-2] = -(fVar20 * fVar2 + fVar21 * fVar4);
      fVar4 = fVar19 - fVar17;
      fVar20 = fVar25 - fVar18;
      fVar2 = fVar4 * fVar4 + fVar20 * fVar20;
      auVar3 = vrsqrtss_avx(ZEXT416((uint)fVar2),ZEXT416((uint)fVar2));
      fVar21 = auVar3._0_4_;
      fVar21 = (1.5 - fVar2 * 0.5 * fVar21 * fVar21) * fVar21;
      fVar4 = fVar21 * fVar4;
      *pfVar10 = fVar4;
      fVar21 = -fVar20 * fVar21;
      fVar2 = *(float *)((longlong)pfVar10 + (longlong)local_130 + (8 - param_5));
      pfVar10[1] = fVar21;
      pfVar13[-1] = -(fVar17 * fVar21 + fVar18 * fVar4);
      fVar18 = fVar2 - fVar25;
      fVar4 = fVar22 - fVar19;
      fVar17 = fVar4 * fVar4 + fVar18 * fVar18;
      auVar3 = vrsqrtss_avx(ZEXT416((uint)fVar17),ZEXT416((uint)fVar17));
      fVar21 = auVar3._0_4_;
      fVar21 = (1.5 - fVar17 * 0.5 * fVar21 * fVar21) * fVar21;
      fVar4 = fVar21 * fVar4;
      fVar21 = -fVar18 * fVar21;
      pfVar10[3] = fVar21;
      fVar17 = *(float *)((longlong)pfVar10 + (longlong)local_130 + (0x10 - param_5));
      fVar18 = *(float *)((longlong)pfVar10 + (longlong)local_130 + (0x14 - param_5));
      pfVar10[2] = fVar4;
      fVar18 = fVar18 - fVar22;
      fVar17 = fVar17 - fVar2;
      *pfVar13 = -(fVar19 * fVar21 + fVar25 * fVar4);
      fVar25 = fVar18 * fVar18 + fVar17 * fVar17;
      auVar3 = vrsqrtss_avx(ZEXT416((uint)fVar25),ZEXT416((uint)fVar25));
      fVar19 = auVar3._0_4_;
      fVar19 = (1.5 - fVar25 * 0.5 * fVar19 * fVar19) * fVar19;
      fVar18 = fVar19 * fVar18;
      fVar19 = -fVar17 * fVar19;
      pfVar10[5] = fVar19;
      pfVar10[4] = fVar18;
      pfVar13[1] = -(fVar22 * fVar19 + fVar2 * fVar18);
      uVar14 = uVar14 - 1;
      pfVar10 = pfVar10 + 8;
      pfVar13 = pfVar13 + 4;
    } while (uVar14 != 0);
    if (iVar16 <= iVar15) {
    }
  }
  uVar14 = (ulonglong)(uint)(iVar16 - iVar15);
  pfVar10 = afStack_140 + lVar11 * 2 + 2;
  pfVar13 = (float *)(local_148 + lVar11 * 4);
  fVar17 = afStack_140[lVar11 * 2 + 2];
  do {
    fVar18 = pfVar10[2];
    fVar19 = pfVar10[3] - pfVar10[1];
    pfVar1 = pfVar10 + 2;
    fVar2 = fVar18 - fVar17;
    fVar25 = fVar19 * fVar19 + fVar2 * fVar2;
    auVar3 = vrsqrtss_avx(ZEXT416((uint)fVar25),ZEXT416((uint)fVar25));
    fVar22 = auVar3._0_4_;
    fVar22 = (1.5 - fVar25 * 0.5 * fVar22 * fVar22) * fVar22;
    fVar19 = fVar22 * fVar19;
    fVar22 = -fVar2 * fVar22;
    fVar25 = pfVar10[1];
    *(float *)((param_5 - (longlong)&local_138) + -4 + (longlong)pfVar1) = fVar22;
    *(float *)((param_5 - (longlong)&local_138) + -8 + (longlong)pfVar1) = fVar19;
    *pfVar13 = -(fVar19 * fVar17 + fVar22 * fVar25);
    uVar14 = uVar14 - 1;
    pfVar10 = pfVar1;
    pfVar13 = pfVar13 + 1;
    fVar17 = fVar18;
  } while (uVar14 != 0);
}



