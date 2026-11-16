// FUN_18040cce0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18040cce0 */

int FUN_18040cce0(void)

{
  int iVar1;
  ULONGLONG UVar2;
  
  iVar1 = DAT_180c7ce04;
  if (DAT_180c7ce04 == 0) {
    UVar2 = GetTickCount64();
    if (UVar2 < DAT_180c7ce08) {
      return 0;
    }
    iVar1 = FUN_1805f68d0(&DAT_1809bd2b0);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1809bd2fc == 0x7fffffff) {
      DAT_1809bd2fc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c7ce04 == 0) && (DAT_180c7ce08 <= UVar2)) {
      DAT_180c7ce04 = FUN_1804174b0("CCSPlayerAnimationState",0x3b647d35);
      if (DAT_180c7ce04 == 0) {
        DAT_180c7ce08 = UVar2 + 1000;
      }
      else {
        DAT_180c7ce08 = 0xffffffffffffffff;
      }
    }
    iVar1 = DAT_180c7ce04;
    FUN_1805f68fc(&DAT_1809bd2b0);
  }
  return iVar1;
}



