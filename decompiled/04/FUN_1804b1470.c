// FUN_1804b1470 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804b1470 */

ulonglong FUN_1804b1470(int *param_1,uint param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint *puVar3;
  
  uVar2 = (longlong)*param_1;
  puVar3 = *(uint **)(param_1 + 2);
  while (uVar1 = uVar2, uVar1 != 0) {
    uVar2 = uVar1 >> 1;
    if (puVar3[uVar2 * 4] < param_2) {
      puVar3 = puVar3 + uVar2 * 4 + 4;
      uVar2 = uVar1 + (-1 - uVar2);
    }
  }
  if ((puVar3 == *(uint **)(param_1 + 2) + (longlong)*param_1 * 4) || (*puVar3 != param_2)) {
    return param_3;
  }
  return (ulonglong)puVar3[2];
}



