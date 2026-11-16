// FUN_1804b14f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804b14f0 */

uint * FUN_1804b14f0(int *param_1,uint param_2,undefined4 param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint *puVar4;
  uint local_18 [2];
  undefined4 local_10;
  
  uVar3 = (longlong)*param_1;
  puVar4 = *(uint **)(param_1 + 2);
  while (uVar1 = uVar3, uVar1 != 0) {
    uVar3 = uVar1 >> 1;
    if (puVar4[uVar3 * 4] < param_2) {
      puVar4 = puVar4 + uVar3 * 4 + 4;
      uVar3 = uVar1 + (-1 - uVar3);
    }
  }
  if ((puVar4 == *(uint **)(param_1 + 2) + (longlong)*param_1 * 4) || (*puVar4 != param_2)) {
    local_18[0] = param_2;
    local_10 = param_3;
    lVar2 = FUN_1804d0dd0(param_1,puVar4,local_18);
    return (uint *)(lVar2 + 8);
  }
  return puVar4 + 2;
}



