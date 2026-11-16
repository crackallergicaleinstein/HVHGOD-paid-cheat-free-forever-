// FUN_180369280 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180369280 */

int FUN_180369280(void)

{
  int iVar1;
  ULONGLONG UVar2;
  
  iVar1 = DAT_180c6f940;
  if (DAT_180c6f940 == 0) {
    UVar2 = GetTickCount64();
    if (UVar2 < DAT_180c6f920) {
      return 0;
    }
    iVar1 = FUN_1805f68d0(&DAT_180901230);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_18090127c == 0x7fffffff) {
      DAT_18090127c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c6f940 == 0) && (DAT_180c6f920 <= UVar2)) {
      DAT_180c6f940 = FUN_1804174b0("C_BaseEntity",0x253120d3);
      if (DAT_180c6f940 == 0) {
        DAT_180c6f920 = UVar2 + 1000;
      }
      else {
        DAT_180c6f920 = 0xffffffffffffffff;
      }
    }
    iVar1 = DAT_180c6f940;
    FUN_1805f68fc(&DAT_180901230);
  }
  return iVar1;
}



