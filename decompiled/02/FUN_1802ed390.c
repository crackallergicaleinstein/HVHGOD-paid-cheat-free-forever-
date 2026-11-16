// FUN_1802ed390 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802ed390 */

undefined4
FUN_1802ed390(ulonglong param_1,int param_2,byte param_3,undefined1 param_4,uint *param_5)

{
  longlong lVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = 0;
  lVar1 = 0x3f;
  if (param_1 != 0) {
    for (; param_1 >> lVar1 == 0; lVar1 = lVar1 + -1) {
    }
  }
  if (param_1 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = (int)lVar1 + 1;
  }
  uVar2 = 0x18 - iVar4;
  iVar4 = param_2 - uVar2;
  if (0x7f < iVar4) {
    *param_5 = (uint)param_3 << 0x1f | 0x7f800000;
    return 0x22;
  }
  if (iVar4 < -0x7e) {
    uVar2 = param_2 + 0x7e;
    iVar4 = -0x7e;
    if ((int)uVar2 < 0) {
      param_1 = FUN_1802ed320(param_1,-uVar2,param_4);
      uVar3 = 0x22;
      if (param_1 != 0) {
        uVar3 = 0;
      }
      goto LAB_1802ed448;
    }
  }
  else if ((int)uVar2 < 0) {
    param_1 = FUN_1802ed320(param_1,-uVar2,param_4);
    if ((0xffffff < param_1) && (iVar4 == 0x7f)) {
      uVar3 = 0x22;
    }
    goto LAB_1802ed448;
  }
  param_1 = param_1 << ((ulonglong)uVar2 & 0x3f);
LAB_1802ed448:
  *param_5 = (iVar4 + 0x7e) * 0x800000 + (int)param_1 | (uint)param_3 << 0x1f;
  return uVar3;
}



