// FUN_180157940 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180157940 */

ulonglong FUN_180157940(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  undefined4 local_18 [4];
  
  uVar7 = (*param_2 - *param_1 >> 2) * 0x20 + param_2[1];
  if (param_1[3] == 0x7fffffffffffffff) {
    FUN_180141380();
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return uVar7;
  }
  local_18[0] = 0;
  FUN_180158d30(param_1,param_1[3] + 0x20U >> 5,local_18);
  uVar6 = param_1[3];
  if (uVar6 == 0) {
    param_1[3] = 1;
    return uVar7;
  }
  lVar4 = *param_1;
  if (((longlong)uVar6 < 0) && (uVar6 != 0)) {
    lVar1 = -((~uVar6 >> 5) * 4 + 4);
  }
  else {
    lVar1 = (uVar6 >> 5) * 4;
  }
  uVar8 = (ulonglong)((uint)uVar6 & 0x1f);
  uVar6 = uVar6 + 1;
  param_1[3] = uVar6;
  if (((longlong)uVar6 < 0) && (uVar6 != 0)) {
    lVar2 = -((~uVar6 >> 5) * 4 + 4);
  }
  else {
    lVar2 = (uVar6 >> 5) * 4;
  }
  uVar6 = uVar6 & 0x1f;
  if (((longlong)uVar7 < 0) && (uVar7 != 0)) {
    lVar3 = -((~uVar7 >> 5) * 4 + 4);
  }
  else {
    lVar3 = (uVar7 >> 5) * 4;
  }
  puVar9 = (uint *)(lVar4 + lVar1);
  puVar11 = (uint *)(lVar4 + lVar2);
  while (((uint *)(lVar4 + lVar3) != puVar9 || ((uVar7 & 0x1f) != uVar8))) {
    puVar10 = puVar9 + -1;
    if (uVar8 == 0) {
      uVar8 = 0x1f;
    }
    else {
      uVar8 = uVar8 - 1;
      puVar10 = puVar9;
    }
    puVar12 = puVar11 + -1;
    if (uVar6 == 0) {
      uVar6 = 0x1f;
    }
    else {
      uVar6 = uVar6 - 1;
      puVar12 = puVar11;
    }
    puVar9 = puVar10;
    puVar11 = puVar12;
    if ((*puVar10 >> ((uint)uVar8 & 0x1f) & 1) == 0) {
      *puVar12 = *puVar12 & ~(1 << ((uint)uVar6 & 0x1f));
    }
    else {
      *puVar12 = *puVar12 | 1 << ((uint)uVar6 & 0x1f);
    }
  }
  return uVar7;
}



