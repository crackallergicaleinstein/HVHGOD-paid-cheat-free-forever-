// FUN_18040cfe0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18040cfe0 */

int FUN_18040cfe0(void)

{
  int iVar1;
  ULONGLONG UVar2;
  
  iVar1 = DAT_180c7cdf0;
  if (DAT_180c7cdf0 == 0) {
    UVar2 = GetTickCount64();
    if (UVar2 < DAT_180c7cde8) {
      return 0;
    }
    iVar1 = FUN_1805f68d0(&DAT_1809bd210);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1809bd25c == 0x7fffffff) {
      DAT_1809bd25c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c7cdf0 == 0) && (DAT_180c7cde8 <= UVar2)) {
      DAT_180c7cdf0 = FUN_1804174b0("CCSPlayerAnimationState",0x201635bd);
      if (DAT_180c7cdf0 == 0) {
        DAT_180c7cde8 = UVar2 + 1000;
      }
      else {
        DAT_180c7cde8 = 0xffffffffffffffff;
      }
    }
    iVar1 = DAT_180c7cdf0;
    FUN_1805f68fc(&DAT_1809bd210);
  }
  return iVar1;
}



