// FUN_18040c3e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18040c3e0 */

int FUN_18040c3e0(void)

{
  int iVar1;
  ULONGLONG UVar2;
  
  iVar1 = DAT_180c7ce68;
  if (DAT_180c7ce68 == 0) {
    UVar2 = GetTickCount64();
    if (UVar2 < DAT_180c7ce60) {
      return 0;
    }
    iVar1 = FUN_1805f68d0(&DAT_1809bd4e0);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1809bd52c == 0x7fffffff) {
      DAT_1809bd52c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c7ce68 == 0) && (DAT_180c7ce60 <= UVar2)) {
      DAT_180c7ce68 = FUN_1804174b0("CPlayer_MovementServices",0xb1e2d2b7);
      if (DAT_180c7ce68 == 0) {
        DAT_180c7ce60 = UVar2 + 1000;
      }
      else {
        DAT_180c7ce60 = 0xffffffffffffffff;
      }
    }
    iVar1 = DAT_180c7ce68;
    FUN_1805f68fc(&DAT_1809bd4e0);
  }
  return iVar1;
}



