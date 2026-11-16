// FUN_1802bae10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802bae10 */

undefined1 *
FUN_1802bae10(undefined1 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             float param_5)

{
  short sVar1;
  float *pfVar2;
  float *pfVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [64];
  undefined1 auVar17 [64];
  undefined1 auVar18 [64];
  float fVar19;
  float local_78 [28];
  
  auVar17 = ZEXT464(0x3f800000);
  auVar16 = ZEXT864(0);
  local_78[4] = 1.0;
  local_78[0] = 0.0;
  local_78[2] = (float)param_3;
  sVar1 = thunk_FUN_180624430(param_3);
  local_78[4] = auVar16._0_4_;
  local_78[0] = auVar17._0_4_;
  if (sVar1 < 1) {
    pfVar3 = local_78;
    if (local_78[4] <= (float)param_3) {
      pfVar3 = local_78 + 2;
    }
    pfVar2 = local_78 + 4;
    if ((float)param_3 <= local_78[0]) {
      pfVar2 = pfVar3;
    }
    auVar18 = ZEXT464((uint)*pfVar2);
  }
  else {
    auVar18 = ZEXT864(0);
  }
  local_78[2] = (float)param_4;
  sVar1 = thunk_FUN_180624430(param_4);
  if (sVar1 < 1) {
    pfVar3 = local_78 + 4;
    if (auVar16._0_4_ <= (float)param_4) {
      pfVar3 = local_78 + 2;
    }
    pfVar2 = local_78;
    if ((float)param_4 <= auVar17._0_4_) {
      pfVar2 = pfVar3;
    }
    fVar19 = *pfVar2;
  }
  else {
    fVar19 = 0.0;
  }
  if (*(int *)(param_2 + 8) == 1) {
    if (*(char *)(param_2 + 0x11) == '\0') {
      auVar16 = ZEXT1664(auVar18._0_16_);
    }
    else {
      local_78[2] = param_5;
      local_78[0] = auVar17._0_4_;
      local_78[4] = auVar16._0_4_;
      sVar1 = thunk_FUN_180624430(param_5);
      fVar7 = auVar16._0_4_;
      if (sVar1 < 1) {
        pfVar3 = local_78 + 4;
        if (fVar7 <= param_5) {
          pfVar3 = local_78 + 2;
        }
        pfVar2 = local_78;
        if (param_5 <= auVar17._0_4_) {
          pfVar2 = pfVar3;
        }
        fVar7 = *pfVar2;
      }
      fVar7 = (fVar7 + auVar18._0_4_) * 3.1415927;
      fVar7 = (float)FUN_180637540(fVar7 + fVar7);
      auVar16 = ZEXT464((uint)(0.5 - fVar7 * 0.5));
    }
  }
  auVar12._0_4_ = (float)*(byte *)(param_2 + 0x18);
  auVar12._4_12_ = SUB1612(ZEXT816(0),4);
  auVar8._0_4_ = (float)*(byte *)(param_2 + 0x14);
  auVar8._4_12_ = SUB1612(ZEXT816(0),4);
  fVar7 = (float)FUN_180242260(auVar8._0_8_,auVar12._0_8_,auVar16._0_8_);
  uVar4 = (undefined1)(int)fVar7;
  auVar13._0_4_ = (float)*(byte *)(param_2 + 0x19);
  auVar13._4_12_ = SUB1612(ZEXT816(0),4);
  auVar9._0_4_ = (float)*(byte *)(param_2 + 0x15);
  auVar9._4_12_ = SUB1612(ZEXT816(0),4);
  fVar7 = (float)FUN_180242260(auVar9._0_8_,auVar13._0_8_,auVar16._0_8_);
  uVar5 = (undefined1)(int)fVar7;
  auVar14._0_4_ = (float)*(byte *)(param_2 + 0x1a);
  auVar14._4_12_ = SUB1612(ZEXT816(0),4);
  auVar10._0_4_ = (float)*(byte *)(param_2 + 0x16);
  auVar10._4_12_ = SUB1612(ZEXT816(0),4);
  fVar7 = (float)FUN_180242260(auVar10._0_8_,auVar14._0_8_,auVar16._0_8_);
  uVar6 = (undefined1)(int)fVar7;
  if (*(char *)(param_2 + 0x10) != '\0') {
    auVar8 = vminss_avx(auVar17._0_16_,ZEXT416((uint)(auVar18._0_4_ + auVar18._0_4_)));
    auVar17 = ZEXT1664(auVar8);
  }
  auVar15._0_4_ = (float)*(byte *)(param_2 + 0x1b);
  auVar15._4_12_ = SUB1612(ZEXT816(0),4);
  auVar11._0_4_ = (float)*(byte *)(param_2 + 0x17);
  auVar11._4_12_ = SUB1612(ZEXT816(0),4);
  fVar7 = (float)FUN_180242260(auVar11._0_8_,auVar15._0_8_,auVar16._0_8_);
  *param_1 = uVar4;
  param_1[3] = (char)(int)((float)((int)fVar7 & 0xff) * fVar19 * auVar17._0_4_);
  param_1[1] = uVar5;
  param_1[2] = uVar6;
  return param_1;
}



