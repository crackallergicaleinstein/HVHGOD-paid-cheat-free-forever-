// FUN_1804b13e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804b13e0 */

uint FUN_1804b13e0(int *param_1,uint param_2,uint param_3)

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
  return puVar3[2];
}



