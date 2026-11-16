// FUN_180609ed8 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180609ed8 */

undefined8 FUN_180609ed8(int *param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = 0;
  if (0 < *param_1) {
    lVar4 = 0;
    do {
      iVar1 = param_1[1];
      lVar2 = FUN_180606310();
      if (*(int *)(lVar2 + lVar4 + 4 + (longlong)iVar1) == 0) {
        lVar2 = 0;
      }
      else {
        iVar1 = param_1[1];
        lVar2 = FUN_180606310();
        iVar1 = *(int *)(lVar2 + lVar4 + 4 + (longlong)iVar1);
        lVar2 = FUN_180606310();
        lVar2 = lVar2 + iVar1;
      }
      iVar1 = FUN_180606e20(lVar2 + 8,0x180ba5dd0);
      if (iVar1 == 0) {
        return 1;
      }
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 0x14;
    } while (iVar3 < *param_1);
  }
  return 0;
}



