// FUN_180408ce0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180408ce0 */

int FUN_180408ce0(void)

{
  int iVar1;
  ULONGLONG UVar2;
  
  iVar1 = DAT_180c7d144;
  if (DAT_180c7d144 == 0) {
    UVar2 = GetTickCount64();
    if (UVar2 < DAT_180c7d148) {
      return 0;
    }
    iVar1 = FUN_1805f68d0(&DAT_1809be6b0);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1809be6fc == 0x7fffffff) {
      DAT_1809be6fc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c7d144 == 0) && (DAT_180c7d148 <= UVar2)) {
      DAT_180c7d144 = FUN_1804174b0("C_CSPlayerPawn",0x86725fe0);
      if (DAT_180c7d144 == 0) {
        DAT_180c7d148 = UVar2 + 1000;
      }
      else {
        DAT_180c7d148 = 0xffffffffffffffff;
      }
    }
    iVar1 = DAT_180c7d144;
    FUN_1805f68fc(&DAT_1809be6b0);
  }
  return iVar1;
}



