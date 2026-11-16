// FUN_18054c7c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18054c7c0 */

undefined8 FUN_18054c7c0(void)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  iVar1 = FUN_1805f68d0(&DAT_1808e6940);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_1808e698c == 0x7fffffff) {
    DAT_1808e698c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  if ((((DAT_180bda4dc == 0) && (DAT_180c62f48 == 0)) && (DAT_180c62fe0 == 0)) &&
     ((DAT_1808e4f84 < 0 && (DAT_180bbecde == '\0')))) {
    lVar2 = FUN_180439770();
    if ((*(longlong *)(lVar2 + 0x428) == 0) && (DAT_180c63119 == '\0')) {
      if ((DAT_180ccaa20 != '\0') && (-1 < DAT_1808e4fc0)) {
        plVar3 = (longlong *)FUN_180439710();
        if ((*plVar3 != plVar3[1]) || (DAT_180c63119 != '\0')) goto LAB_18054c88b;
      }
      if ((DAT_180c62ff0 == 0) || (*(char *)(DAT_180bb8ae8 + 0xe2) == '\0')) {
        uVar4 = 0;
        goto LAB_18054c88d;
      }
    }
  }
LAB_18054c88b:
  uVar4 = 1;
LAB_18054c88d:
  FUN_1805f68fc(&DAT_1808e6940);
  return uVar4;
}



