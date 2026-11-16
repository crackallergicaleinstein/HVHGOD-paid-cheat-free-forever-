// FUN_1804fb820 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804fb820 */

void FUN_1804fb820(int param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  lVar3 = DAT_180bb8ae8;
  if ((((param_1 != 0) && (piVar1 = (int *)(DAT_180bb8ae8 + 0x24fc), *piVar1 == param_1)) &&
      (*(int *)(DAT_180bb8ae8 + 0x1550) == param_1)) && (*(char *)(DAT_180bb8ae8 + 0x255b) != '\0'))
  {
    *(undefined1 *)(DAT_180bb8ae8 + 0x255b) = 0;
    *(int *)(lVar3 + 0x2580) = *piVar1;
    *(int *)(lVar3 + 0x2584) = *(int *)(lVar3 + 4) + 1;
    piVar1 = (int *)(lVar3 + 0x2588);
    iVar4 = *(int *)(lVar3 + 0x258c);
    if ((*(uint *)(lVar3 + 0x24f8) & 0x200) != 0) {
      if (iVar4 < 0) {
        iVar4 = iVar4 + iVar4 / 2;
        iVar5 = 0;
        if (0 < iVar4) {
          iVar5 = iVar4;
        }
        FUN_1804d0ea0(piVar1,iVar5);
      }
      *piVar1 = 0;
      return;
    }
    iVar5 = *(int *)(lVar3 + 0x2500) + 1;
    if (iVar4 < iVar5) {
      if (iVar4 == 0) {
        iVar4 = 8;
      }
      else {
        iVar4 = iVar4 / 2 + iVar4;
      }
      iVar2 = iVar5;
      if (iVar5 < iVar4) {
        iVar2 = iVar4;
      }
      FUN_1804d0ea0(piVar1,iVar2);
    }
    *piVar1 = iVar5;
    FUN_18063aed0(*(undefined8 *)(lVar3 + 0x2590),*(undefined8 *)(lVar3 + 0x2518),
                  (longlong)(*(int *)(lVar3 + 0x2500) + 1));
  }
  return;
}



