// FUN_1802ecbd0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802ecbd0 */

undefined8 FUN_1802ecbd0(uint *param_1,uint param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  if (param_2 == 0) {
    *param_1 = 0;
  }
  else if ((param_2 != 1) && (uVar1 = *param_1, uVar1 != 0)) {
    uVar3 = 0;
    uVar5 = 0;
    do {
      uVar4 = (int)uVar5 + 1;
      uVar2 = uVar3 + (ulonglong)param_1[uVar5 + 1] * (ulonglong)param_2;
      param_1[uVar5 + 1] = (uint)uVar2;
      uVar3 = uVar2 >> 0x20;
      uVar5 = (ulonglong)uVar4;
    } while (uVar4 != uVar1);
    uVar1 = (uint)(uVar2 >> 0x20);
    if (uVar1 != 0) {
      if (*param_1 < 0x73) {
        param_1[(ulonglong)*param_1 + 1] = uVar1;
        *param_1 = *param_1 + 1;
        return 1;
      }
      *param_1 = 0;
      return 0;
    }
  }
  return 1;
}



