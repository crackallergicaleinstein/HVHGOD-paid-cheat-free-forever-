// FUN_180252e50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180252e50 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_180252e50(undefined8 param_1,longlong param_2,ulonglong param_3,ulonglong param_4,float param_5,
             float param_6,float param_7,float param_8,float param_9,int param_10,int param_11)

{
  ulonglong uVar1;
  short sVar2;
  float *pfVar3;
  int *piVar4;
  float *pfVar5;
  int *piVar6;
  ulonglong uVar7;
  float fVar8;
  undefined4 extraout_XMM0_Da;
  undefined1 extraout_var [56];
  undefined1 auVar9 [16];
  undefined1 auVar10 [64];
  float fVar11;
  undefined1 auVar12 [64];
  undefined1 auVar13 [64];
  float fVar14;
  undefined1 auVar15 [64];
  int local_98 [2];
  float local_90;
  float local_8c;
  int local_88 [32];
  
  if ((((param_2 == 0) || (sVar2 = thunk_FUN_180624430(param_5), 0 < sVar2)) ||
      (sVar2 = thunk_FUN_180624430(param_6), 0 < sVar2)) ||
     (sVar2 = thunk_FUN_180624430(param_7), 0 < sVar2)) {
    DAT_180b8e5d4 = 0.0;
    DAT_180b8e5d0 = 0.0;
    _DAT_180b8e5c0 = (undefined1  [16])0x0;
    DAT_180b8e5b8 = 0;
    return 0;
  }
  sVar2 = thunk_FUN_180624430(param_8);
  if (0 < sVar2) {
    DAT_180b8e5b8 = 0;
    _DAT_180b8e5c0 = (undefined1  [16])0x0;
    DAT_180b8e5d0 = 0.0;
    DAT_180b8e5d4 = 0.0;
    return 0;
  }
  if (((DAT_180b8e5b8 == param_2) && (DAT_180b8e5c8 <= param_3)) && (param_3 - DAT_180b8e5c8 < 0xfb)
     ) {
    uVar7 = DAT_180b8e5c8;
  }
  else {
    uVar7 = param_3;
    DAT_180b8e5b8 = param_2;
    DAT_180b8e5d0 = param_5;
    DAT_180b8e5d4 = param_6;
    DAT_180b8e5c0 = param_3;
  }
  local_98[1] = 500;
  local_98[0] = 0;
  DAT_180b8e5c8 = param_3;
  piVar6 = local_98;
  if (-1 < param_10) {
    piVar6 = &param_10;
  }
  piVar4 = local_98 + 1;
  if (param_10 < 0x1f5) {
    piVar4 = piVar6;
  }
  if (param_3 - DAT_180b8e5c0 < (ulonglong)(longlong)*piVar4) {
    return 0;
  }
  uVar1 = DAT_180b8e5c0 + (longlong)*piVar4;
  if (uVar7 < uVar1) {
    uVar7 = uVar1;
  }
  fVar14 = (float)(param_3 - uVar7) / 1000.0;
  auVar13 = ZEXT464(0x43b40000);
  auVar15 = ZEXT464((uint)(param_7 - DAT_180b8e5d0));
  fVar8 = (float)FUN_180615070(param_8 - DAT_180b8e5d4,auVar13._0_8_);
  auVar10._0_8_ = FUN_180636420(auVar15._0_8_);
  auVar10._8_56_ = extraout_var;
  auVar10 = ZEXT1664(auVar10._0_16_);
  fVar11 = param_9;
  sVar2 = thunk_FUN_180624430(param_9);
  if (sVar2 < 1) {
    pfVar5 = &local_90;
    if (0.0 <= fVar11) {
      pfVar5 = &param_9;
    }
    local_8c = 100.0;
    pfVar3 = &local_8c;
    if (fVar11 <= 100.0) {
      pfVar3 = pfVar5;
    }
    local_90 = 0.0;
    if (*pfVar3 < 100.0) {
      auVar12 = ZEXT464((uint)(*pfVar3 * 7.2 * fVar14));
      goto LAB_180253092;
    }
  }
  auVar12 = ZEXT1664(auVar10._0_16_);
LAB_180253092:
  fVar11 = 0.0001;
  if (auVar10._0_4_ <= 0.0001) {
    fVar14 = 1.0;
  }
  else {
    auVar9._0_4_ = auVar12._0_4_ / auVar10._0_4_;
    auVar9._4_12_ = auVar12._4_12_;
    auVar9 = vminss_avx(SUB6416(ZEXT464(0x3f800000),0),auVar9);
    fVar14 = auVar9._0_4_;
  }
  DAT_180b8e5d0 = fVar14 * auVar15._0_4_ + DAT_180b8e5d0;
  FUN_180615070(fVar14 * fVar8 + DAT_180b8e5d4,auVar13._0_8_);
  if (param_4 != 0) {
    if (param_3 < param_4) {
      DAT_180b8e5d4 = (float)extraout_XMM0_Da;
      return 0;
    }
    local_88[1] = 1000;
    local_88[0] = 0;
    piVar6 = local_88;
    if (-1 < param_11) {
      piVar6 = &param_11;
    }
    piVar4 = local_88 + 1;
    if (param_11 < 0x3e9) {
      piVar4 = piVar6;
    }
    if (param_3 - param_4 < (ulonglong)(longlong)*piVar4) {
      DAT_180b8e5d4 = (float)extraout_XMM0_Da;
      return 0;
    }
  }
  if (auVar10._0_4_ <= auVar12._0_4_ + fVar11) {
    DAT_180b8e5d4 = (float)extraout_XMM0_Da;
    return 1;
  }
  DAT_180b8e5d4 = (float)extraout_XMM0_Da;
  return 0;
}



