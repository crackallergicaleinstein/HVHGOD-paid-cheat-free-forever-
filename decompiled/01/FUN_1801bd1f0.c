// FUN_1801bd1f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801bd1f0 */

void FUN_1801bd1f0(ulonglong *param_1,ulonglong *param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  
  uVar1 = *param_1;
  lVar3 = (longlong)param_3 - (longlong)param_1 >> 3;
  if (lVar3 < 0x29) {
    uVar2 = *param_2;
    if (uVar2 < uVar1) {
      *param_2 = uVar1;
      *param_1 = uVar2;
    }
    uVar1 = *param_3;
    if (uVar1 < *param_2) {
      *param_3 = *param_2;
      *param_2 = uVar1;
      if (uVar1 < *param_1) {
        *param_2 = *param_1;
        *param_1 = uVar1;
        return;
      }
    }
  }
  else {
    lVar3 = lVar3 + 1 >> 3;
    uVar2 = param_1[lVar3];
    if (uVar2 < uVar1) {
      param_1[lVar3] = uVar1;
      *param_1 = uVar2;
    }
    uVar1 = param_1[lVar3 * 2];
    if (uVar1 < param_1[lVar3]) {
      param_1[lVar3 * 2] = param_1[lVar3];
      param_1[lVar3] = uVar1;
      if (uVar1 < *param_1) {
        param_1[lVar3] = *param_1;
        *param_1 = uVar1;
      }
    }
    uVar1 = *param_2;
    puVar4 = param_2 + -lVar3;
    if (uVar1 < *puVar4) {
      *param_2 = *puVar4;
      *puVar4 = uVar1;
    }
    uVar1 = param_2[lVar3];
    if (uVar1 < *param_2) {
      param_2[lVar3] = *param_2;
      *param_2 = uVar1;
      if (uVar1 < *puVar4) {
        *param_2 = *puVar4;
        *puVar4 = uVar1;
      }
    }
    puVar5 = param_3 + lVar3 * -2;
    puVar4 = param_3 + -lVar3;
    uVar1 = *puVar4;
    if (uVar1 < *puVar5) {
      *puVar4 = *puVar5;
      *puVar5 = uVar1;
    }
    uVar1 = *param_3;
    if (uVar1 < *puVar4) {
      *param_3 = *puVar4;
      *puVar4 = uVar1;
      if (uVar1 < *puVar5) {
        *puVar4 = *puVar5;
        *puVar5 = uVar1;
      }
    }
    uVar1 = *param_2;
    if (uVar1 < param_1[lVar3]) {
      *param_2 = param_1[lVar3];
      param_1[lVar3] = uVar1;
    }
    uVar1 = *puVar4;
    if (uVar1 < *param_2) {
      *puVar4 = *param_2;
      *param_2 = uVar1;
      if (uVar1 < param_1[lVar3]) {
        *param_2 = param_1[lVar3];
        param_1[lVar3] = uVar1;
      }
    }
  }
  return;
}



