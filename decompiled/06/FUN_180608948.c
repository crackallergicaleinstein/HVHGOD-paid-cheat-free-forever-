// FUN_180608948 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180608948 */

undefined8 FUN_180608948(byte *param_1,byte *param_2,byte *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  iVar1 = *(int *)(param_1 + 4);
  uVar4 = 0;
  if ((iVar1 != 0) && (lVar2 = FUN_180606310(), lVar2 + iVar1 != 0)) {
    iVar1 = *(int *)(param_1 + 4);
    if (iVar1 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = FUN_180606310();
      lVar2 = iVar1 + lVar2;
    }
    if ((*(char *)(lVar2 + 0x10) != '\0') && (((*param_1 & 0x80) == 0 || ((*param_2 & 0x10) == 0))))
    {
      iVar1 = *(int *)(param_1 + 4);
      if (iVar1 == 0) {
        lVar2 = 0;
      }
      else {
        lVar2 = FUN_180606310();
        lVar2 = lVar2 + iVar1;
      }
      lVar3 = FUN_180606324();
      if (lVar2 != *(int *)(param_2 + 4) + lVar3) {
        iVar1 = *(int *)(param_1 + 4);
        if (iVar1 == 0) {
          lVar2 = 0;
        }
        else {
          lVar2 = FUN_180606310();
          lVar2 = iVar1 + lVar2;
        }
        iVar1 = *(int *)(param_2 + 4);
        lVar3 = FUN_180606324();
        iVar1 = strcmp((char *)(lVar2 + 0x10),(char *)((longlong)iVar1 + 0x10 + lVar3));
        if (iVar1 != 0) {
          return 0;
        }
      }
      if ((((((*param_2 & 2) == 0) || ((*param_1 & 8) != 0)) &&
           (((*param_3 & 1) == 0 || ((*param_1 & 1) != 0)))) &&
          (((*param_3 & 4) == 0 || ((*param_1 & 4) != 0)))) &&
         (((*param_3 & 2) == 0 || ((*param_1 & 2) != 0)))) {
        uVar4 = 1;
      }
      return uVar4;
    }
  }
  return 1;
}



