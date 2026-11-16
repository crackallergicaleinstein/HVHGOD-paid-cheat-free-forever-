// FUN_180348590 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180348590 */

int FUN_180348590(void)

{
  int iVar1;
  ULONGLONG UVar2;
  
  iVar1 = DAT_180c6f6a0;
  if (DAT_180c6f6a0 == 0) {
    UVar2 = GetTickCount64();
    if (UVar2 < DAT_180c6f698) {
      return 0;
    }
    iVar1 = FUN_1805f68d0(&DAT_1809007e0);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_18090082c == 0x7fffffff) {
      DAT_18090082c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c6f6a0 == 0) && (DAT_180c6f698 <= UVar2)) {
      DAT_180c6f6a0 = FUN_1804174b0("CGameSceneNode",0xe8b4eae5);
      if (DAT_180c6f6a0 == 0) {
        DAT_180c6f698 = UVar2 + 1000;
      }
      else {
        DAT_180c6f698 = 0xffffffffffffffff;
      }
    }
    iVar1 = DAT_180c6f6a0;
    FUN_1805f68fc(&DAT_1809007e0);
  }
  return iVar1;
}



