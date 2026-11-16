// FUN_18040efe0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18040efe0 */

int FUN_18040efe0(void)

{
  int iVar1;
  ULONGLONG UVar2;
  
  iVar1 = DAT_180c7cc50;
  if (DAT_180c7cc50 == 0) {
    UVar2 = GetTickCount64();
    if (UVar2 < DAT_180c7cc48) {
      return 0;
    }
    iVar1 = FUN_1805f68d0(&DAT_1809bc810);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1809bc85c == 0x7fffffff) {
      DAT_1809bc85c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c7cc50 == 0) && (DAT_180c7cc48 <= UVar2)) {
      DAT_180c7cc50 = FUN_1804174b0("CCSPlayer_MovementServices",0xc965c1d0);
      if (DAT_180c7cc50 == 0) {
        DAT_180c7cc48 = UVar2 + 1000;
      }
      else {
        DAT_180c7cc48 = 0xffffffffffffffff;
      }
    }
    iVar1 = DAT_180c7cc50;
    FUN_1805f68fc(&DAT_1809bc810);
  }
  return iVar1;
}



