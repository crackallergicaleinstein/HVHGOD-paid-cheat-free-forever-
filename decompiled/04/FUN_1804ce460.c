// FUN_1804ce460 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804ce460 */

undefined1 (*) [16] FUN_1804ce460(char *param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  longlong lVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  char cVar8;
  longlong lVar10;
  longlong lVar9;
  int iVar11;
  int *piVar12;
  undefined1 (*pauVar13) [16];
  uint uVar14;
  
  lVar4 = DAT_180bb8ae8;
  if (*(char *)(DAT_180bb8ae8 + 0x8c) == '\0') {
    cVar8 = *param_1;
    pcVar7 = param_1;
    while (pcVar3 = pcVar7, cVar8 != '\0') {
      while (((pcVar7 = pcVar3 + 1, cVar8 == '#' && (*pcVar7 == '#')) && (pcVar3[2] == '#'))) {
        cVar8 = *pcVar7;
        param_1 = pcVar3 + 3;
        pcVar3 = pcVar7;
      }
      cVar8 = *pcVar7;
    }
  }
  lVar9 = -1;
  do {
    lVar10 = lVar9;
    lVar9 = lVar10 + 1;
  } while (param_1[lVar9] != '\0');
  piVar12 = (int *)(DAT_180bb8ae8 + 0x27a0);
  uVar14 = (int)lVar10 + 0x19U & 0xfffffffc;
  iVar1 = *piVar12;
  iVar5 = *(int *)(DAT_180bb8ae8 + 0x27a4);
  iVar11 = uVar14 + iVar1;
  if (iVar5 < iVar11) {
    if (iVar5 == 0) {
      iVar5 = 8;
    }
    else {
      iVar5 = iVar5 / 2 + iVar5;
    }
    iVar2 = iVar11;
    if (iVar11 < iVar5) {
      iVar2 = iVar5;
    }
    FUN_1804d0ea0(piVar12,iVar2);
  }
  *piVar12 = iVar11;
  *(uint *)((longlong)iVar1 + *(longlong *)(lVar4 + 0x27a8)) = uVar14;
  pauVar13 = (undefined1 (*) [16])(*(longlong *)(lVar4 + 0x27a8) + 4 + (longlong)iVar1);
  if (pauVar13 != (undefined1 (*) [16])0x0) {
    *pauVar13 = (undefined1  [16])0x0;
  }
  uVar6 = FUN_1804b0a90(param_1,lVar9,0);
  *(undefined4 *)*pauVar13 = uVar6;
  FUN_18063aed0(pauVar13 + 1,param_1,lVar10 + 2);
  return pauVar13;
}



