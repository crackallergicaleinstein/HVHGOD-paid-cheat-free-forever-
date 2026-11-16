// FUN_1805aaab0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805aaab0 */

int FUN_1805aaab0(longlong param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  uVar2 = *param_2 + 1;
  if (uVar2 <= uVar1) {
    *param_2 = uVar1;
    return 1;
  }
  if (uVar2 - uVar1 < *(uint *)(param_1 + 0x1c)) {
    *param_2 = uVar2;
    return (uVar2 - uVar1) + 1;
  }
  *param_2 = 0;
  return 0;
}



