// FUN_180608a68 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180608a68 */

undefined8 FUN_180608a68(longlong param_1,byte *param_2,byte *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  byte *pbVar4;
  undefined8 uVar5;
  
  iVar1 = *(int *)(param_1 + 8);
  uVar5 = 0;
  if ((iVar1 != 0) && (lVar2 = FUN_180606310(), lVar2 + iVar1 != 0)) {
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = FUN_180606310();
      lVar2 = iVar1 + lVar2;
    }
    if ((*(char *)(lVar2 + 0x10) != '\0') &&
       (((*(byte *)(param_1 + 4) & 0x80) == 0 || ((*param_2 & 0x10) == 0)))) {
      iVar1 = *(int *)(param_1 + 8);
      if (iVar1 == 0) {
        lVar2 = 0;
      }
      else {
        lVar2 = FUN_180606310();
        lVar2 = iVar1 + lVar2;
      }
      lVar3 = FUN_180606324();
      if (lVar2 != *(int *)(param_2 + 4) + lVar3) {
        iVar1 = *(int *)(param_1 + 8);
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
      pbVar4 = (byte *)(param_1 + 4);
      if ((((((*param_2 & 2) == 0) || ((*pbVar4 & 8) != 0)) &&
           (((*param_3 & 1) == 0 || ((*pbVar4 & 1) != 0)))) &&
          (((*param_3 & 4) == 0 || ((*pbVar4 & 4) != 0)))) &&
         (((*param_3 & 2) == 0 || ((*(byte *)(param_1 + 4) & 2) != 0)))) {
        uVar5 = 1;
      }
      return uVar5;
    }
  }
  return 1;
}



