// FUN_1805e93c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805e93c0 */

ulonglong FUN_1805e93c0(uint3 *param_1,ulonglong param_2,uint *param_3)

{
  uint3 uVar1;
  ulonglong uVar2;
  uint uVar3;
  
  if (param_2 < 3) {
    return 0xffffffffffffffb8;
  }
  uVar1 = *param_1;
  uVar3 = uVar1 >> 1 & 3;
  param_3[1] = uVar1 & 1;
  *param_3 = uVar3;
  param_3[2] = (uint)(uVar1 >> 3);
  if (uVar3 == 1) {
    return 1;
  }
  uVar2 = (ulonglong)(uint)(uVar1 >> 3);
  if (uVar3 == 3) {
    uVar2 = 0xffffffffffffffec;
  }
  return uVar2;
}



