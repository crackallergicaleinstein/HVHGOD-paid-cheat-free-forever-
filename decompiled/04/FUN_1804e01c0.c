// FUN_1804e01c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804e01c0 */

void FUN_1804e01c0(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
                  int param_5)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 in_ZMM2 [64];
  float fVar6;
  undefined1 auVar7 [64];
  
  uVar3 = (uint)param_4;
  if ((param_4 & 0xff000000) == 0) {
    return;
  }
  fVar1 = *(float *)(param_1 + 0xe0) * 1.4142135;
  auVar5 = in_ZMM2._0_16_;
  fVar2 = fVar1 * 0.5;
  fVar6 = in_ZMM2._0_4_;
  if (fVar6 < fVar2) {
    if (fVar6 < fVar2 * 0.003921569) {
      return;
    }
    fVar1 = (fVar6 / fVar2) * (float)(param_4 >> 0x18 & 0xff);
    uVar3 = (int)(longlong)fVar1 << 0x18 | uVar3 & 0xffffff;
    auVar5 = ZEXT416((uint)fVar2);
  }
  uVar4 = auVar5._0_8_;
  auVar7 = ZEXT1664(auVar5);
  if (param_5 < 1) {
    fVar2 = *(float *)(*(longlong *)(param_1 + 0x38) + 0x1f8);
    if (auVar5._0_4_ <= fVar2) {
      FUN_1804dbc10(fVar2,fVar1,uVar4,0,0x30,0);
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -1;
      goto LAB_1804e02a6;
    }
    param_5 = FUN_1804d9380(fVar2,uVar4);
    uVar4 = auVar7._0_8_;
  }
  if (param_5 < 3) {
    param_5 = 3;
  }
  else if (0x200 < param_5) {
    param_5 = 0x200;
  }
  FUN_1804dc050(param_1,param_2,uVar4,0,(((float)param_5 - 1.0) * 6.2831855) / (float)param_5,
                param_5 + -1);
LAB_1804e02a6:
  FUN_1804dafe0(param_1,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x50),uVar3,0x400)
  ;
  *(undefined4 *)(param_1 + 0x50) = 0;
  return;
}



