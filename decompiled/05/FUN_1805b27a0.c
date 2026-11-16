// FUN_1805b27a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805b27a0 */

void FUN_1805b27a0(longlong param_1)

{
  int *piVar1;
  ushort uVar2;
  ushort *puVar3;
  longlong lVar4;
  ushort uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  puVar3 = *(ushort **)(param_1 + 0x28);
  if (puVar3 == (ushort *)0x0) {
    return;
  }
  uVar2 = *puVar3;
  if (uVar2 < 2) {
    uVar6 = 0;
    if (uVar2 == 0) goto LAB_1805b27e7;
  }
  else {
    uVar6 = (ulonglong)(*(ushort *)(*(longlong *)(puVar3 + 0xc) + -4 + (ulonglong)uVar2 * 2) + 1);
  }
  if ((uint)uVar6 == (uint)puVar3[1]) {
    *puVar3 = uVar2 - 1;
    return;
  }
LAB_1805b27e7:
  uVar5 = puVar3[1];
  uVar7 = (ulonglong)uVar5;
  if (1 < uVar5) {
    lVar4 = *(longlong *)(puVar3 + 4);
    piVar1 = (int *)(lVar4 + uVar6 * 8);
    if (((*piVar1 == *(int *)(lVar4 + -8 + uVar7 * 8)) &&
        (piVar1[1] == *(int *)(lVar4 + uVar7 * 8 + -4))) &&
       (*(char *)(*(longlong *)(puVar3 + 8) + -1 + uVar7) == '\x01')) {
      uVar5 = uVar5 - 1;
      puVar3[1] = uVar5;
    }
  }
  if (uVar2 != 0) {
    if ((int)uVar6 == uVar5 - 1) {
      puVar3[1] = uVar5 - 1;
      *puVar3 = uVar2 - 1;
      return;
    }
    *(ushort *)(*(longlong *)(puVar3 + 0xc) + -2 + (ulonglong)uVar2 * 2) = uVar5 - 1;
  }
  return;
}



