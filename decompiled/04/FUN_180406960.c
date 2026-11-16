// FUN_180406960 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180406960 */

int FUN_180406960(void)

{
  int iVar1;
  ULONGLONG UVar2;
  
  iVar1 = DAT_180c7d310;
  if (DAT_180c7d310 == 0) {
    UVar2 = GetTickCount64();
    if (UVar2 < DAT_180c7d308) {
      return 0;
    }
    iVar1 = FUN_1805f68d0(&DAT_1809bf150);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1809bf19c == 0x7fffffff) {
      DAT_1809bf19c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c7d310 == 0) && (DAT_180c7d308 <= UVar2)) {
      DAT_180c7d310 = FUN_1804174b0("CPlayer_MovementServices",0x3976c40f);
      if (DAT_180c7d310 == 0) {
        DAT_180c7d308 = UVar2 + 1000;
      }
      else {
        DAT_180c7d308 = 0xffffffffffffffff;
      }
    }
    iVar1 = DAT_180c7d310;
    FUN_1805f68fc(&DAT_1809bf150);
  }
  return iVar1;
}



