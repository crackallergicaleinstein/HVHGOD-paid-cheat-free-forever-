// FUN_18040d0e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18040d0e0 */

int FUN_18040d0e0(void)

{
  int iVar1;
  ULONGLONG UVar2;
  
  iVar1 = DAT_180c7cdf4;
  if (DAT_180c7cdf4 == 0) {
    UVar2 = GetTickCount64();
    if (UVar2 < DAT_180c7cdb8) {
      return 0;
    }
    iVar1 = FUN_1805f68d0(&DAT_1809bd080);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1809bd0cc == 0x7fffffff) {
      DAT_1809bd0cc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c7cdf4 == 0) && (DAT_180c7cdb8 <= UVar2)) {
      DAT_180c7cdf4 = FUN_1804174b0("CCSPlayerAnimationState",0x5731d994);
      if (DAT_180c7cdf4 == 0) {
        DAT_180c7cdb8 = UVar2 + 1000;
      }
      else {
        DAT_180c7cdb8 = 0xffffffffffffffff;
      }
    }
    iVar1 = DAT_180c7cdf4;
    FUN_1805f68fc(&DAT_1809bd080);
  }
  return iVar1;
}



