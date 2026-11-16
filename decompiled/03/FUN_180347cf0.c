// FUN_180347cf0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180347cf0 */

int FUN_180347cf0(void)

{
  int iVar1;
  ULONGLONG UVar2;
  
  iVar1 = DAT_180c6f6e8;
  if (DAT_180c6f6e8 == 0) {
    UVar2 = GetTickCount64();
    if (UVar2 < DAT_180c6f6e0) {
      return 0;
    }
    iVar1 = FUN_1805f68d0(&DAT_1809009c0);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_180900a0c == 0x7fffffff) {
      DAT_180900a0c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c6f6e8 == 0) && (DAT_180c6f6e0 <= UVar2)) {
      DAT_180c6f6e8 = FUN_1804174b0("C_BaseEntity",0xa4a37590);
      if (DAT_180c6f6e8 == 0) {
        DAT_180c6f6e0 = UVar2 + 1000;
      }
      else {
        DAT_180c6f6e0 = 0xffffffffffffffff;
      }
    }
    iVar1 = DAT_180c6f6e8;
    FUN_1805f68fc(&DAT_1809009c0);
  }
  return iVar1;
}



