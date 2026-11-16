// FUN_1801f5ec0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801f5ec0 */

void FUN_1801f5ec0(longlong param_1,longlong param_2,ulonglong param_3,longlong param_4)

{
  size_t sVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  void *pvVar5;
  longlong lVar6;
  void *pvVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  
  lVar10 = (longlong)(param_3 - 1) >> 1;
  lVar8 = param_2;
  if (param_2 < lVar10) {
    do {
      lVar9 = (lVar8 * 2 + 2) * 0xd8 + param_1;
      pvVar7 = (void *)(lVar9 + -0xb8);
      if (0xf < *(ulonglong *)(lVar9 + -0xa0)) {
        pvVar7 = *(void **)(lVar9 + -0xb8);
      }
      pvVar5 = (void *)(lVar9 + 0x20);
      sVar1 = *(size_t *)(lVar9 + 0x30);
      if (0xf < *(ulonglong *)(lVar9 + 0x38)) {
        pvVar5 = *(void **)(lVar9 + 0x20);
      }
      if ((sVar1 == *(size_t *)(lVar9 + -0xa8)) &&
         ((sVar1 == 0 || (iVar3 = memcmp(pvVar5,pvVar7,sVar1), iVar3 == 0)))) {
        lVar6 = lVar9;
        lVar4 = lVar9 + -0xd8;
      }
      else {
        lVar4 = lVar9 + -0xb8;
        lVar6 = lVar9 + 0x20;
      }
      cVar2 = FUN_180114040(lVar6,lVar4);
      if ((byte)-(cVar2 >> 7) != 0) {
        lVar9 = lVar9 + -0xd8;
      }
      lVar4 = lVar8 * 0xd8;
      lVar8 = ((ulonglong)(byte)-(cVar2 >> 7) ^ 1) + 1 + lVar8 * 2;
      FUN_180195b10(lVar4 + param_1,lVar9);
    } while (lVar8 < lVar10);
  }
  if ((lVar8 == lVar10) && ((param_3 & 1) == 0)) {
    FUN_180195b10(lVar8 * 0xd8 + param_1,param_3 * 0xd8 + -0xd8 + param_1);
    lVar8 = param_3 - 1;
  }
  while (param_2 < lVar8) {
    lVar10 = lVar8 + -1 >> 1;
    pvVar7 = (void *)(param_4 + 0x20);
    lVar9 = lVar10 * 0xd8 + param_1;
    if (0xf < *(ulonglong *)(param_4 + 0x38)) {
      pvVar7 = *(void **)(param_4 + 0x20);
    }
    pvVar5 = (void *)(lVar9 + 0x20);
    sVar1 = *(size_t *)(lVar9 + 0x30);
    if (0xf < *(ulonglong *)(lVar9 + 0x38)) {
      pvVar5 = *(void **)(lVar9 + 0x20);
    }
    if ((sVar1 == *(size_t *)(param_4 + 0x30)) &&
       ((sVar1 == 0 || (iVar3 = memcmp(pvVar5,pvVar7,sVar1), iVar3 == 0)))) {
      lVar6 = lVar9;
      lVar4 = param_4;
    }
    else {
      lVar4 = param_4 + 0x20;
      lVar6 = lVar9 + 0x20;
    }
    cVar2 = FUN_180114040(lVar6,lVar4);
    if (-1 < cVar2) break;
    FUN_180195b10(lVar8 * 0xd8 + param_1,lVar9);
    lVar8 = lVar10;
  }
  FUN_180195b10(lVar8 * 0xd8 + param_1,param_4);
  return;
}



