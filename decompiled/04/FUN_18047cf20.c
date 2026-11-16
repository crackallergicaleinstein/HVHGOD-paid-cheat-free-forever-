// FUN_18047cf20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18047cf20 */

float FUN_18047cf20(uint param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 extraout_var [56];
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [64];
  float fVar9;
  
  fVar5 = (float)(param_1 & 0xff) / 255.0;
  fVar9 = 0.04045;
  if (0.04045 < fVar5) {
    auVar1._0_4_ = (fVar5 + 0.055) / 1.055;
    auVar1._4_12_ = SUB6012((undefined1  [60])0x0,0);
    fVar5 = (float)FUN_180637bd0(auVar1._0_8_,0x4019999a);
  }
  else {
    fVar5 = fVar5 / 12.92;
  }
  fVar6 = (float)(param_1 >> 8 & 0xff) / 255.0;
  if (fVar9 < fVar6) {
    auVar2._0_4_ = (fVar6 + 0.055) / 1.055;
    auVar2._4_12_ = SUB6012((undefined1  [60])0x0,0);
    auVar8._0_8_ = FUN_180637bd0(auVar2._0_8_,0x4019999a);
    auVar8._8_56_ = extraout_var;
    auVar3 = auVar8._0_16_;
  }
  else {
    auVar3._0_4_ = fVar6 / 12.92;
    auVar3._4_12_ = SUB1612(ZEXT816(0),4);
  }
  auVar8 = ZEXT1664(auVar3);
  fVar7 = auVar3._0_4_;
  fVar6 = (float)(param_1 >> 0x10 & 0xff) / 255.0;
  if (fVar9 < fVar6) {
    auVar4._0_4_ = (fVar6 + 0.055) / 1.055;
    auVar4._4_12_ = SUB6012((undefined1  [60])0x0,0);
    fVar6 = (float)FUN_180637bd0(auVar4._0_8_,0x4019999a);
    fVar7 = auVar8._0_4_;
  }
  else {
    fVar6 = fVar6 / 12.92;
  }
  return fVar7 * 0.7152 + fVar5 * 0.2126 + fVar6 * 0.0722;
}



