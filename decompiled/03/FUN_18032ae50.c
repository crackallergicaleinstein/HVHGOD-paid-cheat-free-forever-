// FUN_18032ae50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18032ae50 */

int FUN_18032ae50(void)

{
  int iVar1;
  ULONGLONG UVar2;
  
  iVar1 = DAT_180c6f3e0;
  if (DAT_180c6f3e0 == 0) {
    UVar2 = GetTickCount64();
    if (UVar2 < DAT_180c6f3f8) {
      return 0;
    }
    iVar1 = FUN_1805f68d0(&DAT_1808ffb00);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1808ffb4c == 0x7fffffff) {
      DAT_1808ffb4c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c6f3e0 == 0) && (DAT_180c6f3f8 <= UVar2)) {
      DAT_180c6f3e0 = FUN_1804174b0("CGameSceneNode",0xe8b4eae5);
      if (DAT_180c6f3e0 == 0) {
        DAT_180c6f3f8 = UVar2 + 1000;
      }
      else {
        DAT_180c6f3f8 = 0xffffffffffffffff;
      }
    }
    iVar1 = DAT_180c6f3e0;
    FUN_1805f68fc(&DAT_1808ffb00);
  }
  return iVar1;
}



