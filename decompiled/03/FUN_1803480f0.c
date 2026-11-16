// FUN_1803480f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803480f0 */

int FUN_1803480f0(void)

{
  int iVar1;
  ULONGLONG UVar2;
  
  iVar1 = DAT_180c6f6d8;
  if (DAT_180c6f6d8 == 0) {
    UVar2 = GetTickCount64();
    if (UVar2 < DAT_180c6f6d0) {
      return 0;
    }
    iVar1 = FUN_1805f68d0(&DAT_180900920);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_18090096c == 0x7fffffff) {
      DAT_18090096c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c6f6d8 == 0) && (DAT_180c6f6d0 <= UVar2)) {
      DAT_180c6f6d8 = FUN_1804174b0("C_BaseEntity",0x328a3947);
      if (DAT_180c6f6d8 == 0) {
        DAT_180c6f6d0 = UVar2 + 1000;
      }
      else {
        DAT_180c6f6d0 = 0xffffffffffffffff;
      }
    }
    iVar1 = DAT_180c6f6d8;
    FUN_1805f68fc(&DAT_180900920);
  }
  return iVar1;
}



