// FUN_1804dff40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804dff40 */

void FUN_1804dff40(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
                  int param_5,float param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  ulonglong uVar5;
  float fVar6;
  undefined1 in_ZMM2 [64];
  float fVar7;
  float fVar8;
  undefined1 auVar9 [64];
  
  if ((param_4 & 0xff000000) == 0) {
    return;
  }
  uVar3 = *(uint *)(param_1 + 0x30) & 0xe0000;
  auVar4 = SUB6416(ZEXT464(0x3c23d70a),0);
  if (uVar3 == 0) {
    uVar3 = 0x20000;
    auVar4 = vmaxss_avx(auVar4,in_ZMM2._0_16_);
    auVar9 = ZEXT1664(auVar4);
LAB_1804e0031:
    uVar5 = auVar9._0_8_;
  }
  else if (uVar3 == 0xe0000) {
    auVar4 = vmaxss_avx(auVar4,ZEXT416((uint)(in_ZMM2._0_4_ - 0.5)));
    auVar9 = ZEXT1664(auVar4);
    uVar5 = (ulonglong)(uint)(param_6 * 0.5 + auVar4._0_4_);
    uVar3 = 0x40000;
  }
  else {
    auVar4 = vmaxss_avx(auVar4,in_ZMM2._0_16_);
    auVar9 = ZEXT1664(auVar4);
    fVar7 = auVar4._0_4_;
    if (uVar3 == 0x40000) {
      uVar5 = (ulonglong)(uint)(param_6 * 0.5 + fVar7);
    }
    else {
      uVar5 = auVar4._0_8_;
      if (uVar3 == 0x60000) {
        fVar8 = param_6 * *(float *)(param_1 + 0xe4);
        uVar1 = (uint)fVar8;
        uVar5 = (ulonglong)
                (uint)(((fVar8 - (float)(int)uVar1) * (float)(uVar1 & 1) + (float)((int)uVar1 / 2))
                       * *(float *)(param_1 + 0xe0) + fVar7);
      }
      else {
        if (uVar3 == 0x20000) goto LAB_1804e0031;
        if (uVar3 == 0x80000) {
          uVar5 = (ulonglong)(uint)(fVar7 + param_6);
        }
      }
    }
  }
  if ((float)uVar5 <= param_6) {
    FUN_1804e01c0(param_1,param_2,uVar5,param_4,param_5);
    return;
  }
  fVar7 = 1.0;
  if (param_5 < 1) {
    if ((float)uVar5 <= *(float *)(*(longlong *)(param_1 + 0x38) + 0x1f8)) {
      iVar2 = FUN_1804d9380(param_1);
      FUN_1804dbc10(param_1,param_2,auVar9._0_8_,0,0x30,(int)(0x30 / (longlong)iVar2));
      fVar8 = auVar9._0_4_;
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -1;
      goto LAB_1804e00f2;
    }
    param_5 = FUN_1804d9380(param_1);
  }
  if (param_5 < 3) {
    param_5 = 3;
  }
  else if (0x200 < param_5) {
    param_5 = 0x200;
  }
  FUN_1804dc050(param_1,param_2,auVar9._0_8_,0,
                (((float)param_5 - fVar7) * 6.2831855) / (float)param_5,param_5 + -1);
  fVar8 = auVar9._0_4_;
LAB_1804e00f2:
  iVar2 = *(int *)(param_1 + 0x50);
  if (2 < iVar2) {
    fVar6 = fVar7 / (float)iVar2;
    FUN_1804d9a00(param_1,*(undefined8 *)(param_1 + 0x58),iVar2,param_4 & 0xffffffff,param_6,
                  uVar3 | 0x600,
                  ((fVar6 * 4.058712 * fVar6 - 4.934802) * fVar6 * fVar6 + fVar7) * fVar8);
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  return;
}



