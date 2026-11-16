// FUN_1805b41c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805b41c0 */

short FUN_1805b41c0(longlong param_1,uint *param_2)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 0x18);
  uVar2 = uVar3;
  if (uVar3 <= *param_2 + 1) {
    uVar2 = *param_2 + 1;
  }
  uVar3 = *(int *)(param_1 + 0x1c) + uVar3;
  if (uVar2 < uVar3) {
    do {
      sVar1 = *(short *)(*(longlong *)(param_1 + 0x20) + (ulonglong)uVar2 * 2);
      if (sVar1 != 0) {
        *param_2 = uVar2;
        return sVar1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  *param_2 = 0;
  return 0;
}



