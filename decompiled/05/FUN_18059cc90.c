// FUN_18059cc90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18059cc90 */

short FUN_18059cc90(longlong param_1,uint *param_2)

{
  short sVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)*param_2;
  if (0xfe < *param_2) {
    return 0;
  }
  do {
    uVar2 = (int)uVar3 + 1;
    uVar3 = (ulonglong)uVar2;
    sVar1 = *(short *)(*(longlong *)(param_1 + 0x18) + uVar3 * 2);
    if (sVar1 != 0) {
      *param_2 = uVar2;
      return sVar1;
    }
  } while (uVar2 < 0xff);
  return 0;
}



