// FUN_180406360 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180406360 */

int FUN_180406360(void)

{
  int iVar1;
  ULONGLONG UVar2;
  
  iVar1 = DAT_180c7d348;
  if (DAT_180c7d348 == 0) {
    UVar2 = GetTickCount64();
    if (UVar2 < DAT_180c7d340) {
      return 0;
    }
    iVar1 = FUN_1805f68d0(&DAT_1809bf2e0);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1809bf32c == 0x7fffffff) {
      DAT_1809bf32c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c7d348 == 0) && (DAT_180c7d340 <= UVar2)) {
      DAT_180c7d348 = FUN_1804174b0("CGameSceneNode",0x80bd51e5);
      if (DAT_180c7d348 == 0) {
        DAT_180c7d340 = UVar2 + 1000;
      }
      else {
        DAT_180c7d340 = 0xffffffffffffffff;
      }
    }
    iVar1 = DAT_180c7d348;
    FUN_1805f68fc(&DAT_1809bf2e0);
  }
  return iVar1;
}



