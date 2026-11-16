// FUN_18040cbe0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18040cbe0 */

int FUN_18040cbe0(void)

{
  int iVar1;
  ULONGLONG UVar2;
  
  iVar1 = DAT_180c7ce00;
  if (DAT_180c7ce00 == 0) {
    UVar2 = GetTickCount64();
    if (UVar2 < DAT_180c7cdf8) {
      return 0;
    }
    iVar1 = FUN_1805f68d0(&DAT_1809bd260);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1809bd2ac == 0x7fffffff) {
      DAT_1809bd2ac = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c7ce00 == 0) && (DAT_180c7cdf8 <= UVar2)) {
      DAT_180c7ce00 = FUN_1804174b0("CCSPlayerAnimationState",0xb6ff548c);
      if (DAT_180c7ce00 == 0) {
        DAT_180c7cdf8 = UVar2 + 1000;
      }
      else {
        DAT_180c7cdf8 = 0xffffffffffffffff;
      }
    }
    iVar1 = DAT_180c7ce00;
    FUN_1805f68fc(&DAT_1809bd260);
  }
  return iVar1;
}



