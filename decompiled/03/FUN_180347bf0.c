// FUN_180347bf0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180347bf0 */

int FUN_180347bf0(void)

{
  int iVar1;
  ULONGLONG UVar2;
  
  iVar1 = DAT_180c6f708;
  if (DAT_180c6f708 == 0) {
    UVar2 = GetTickCount64();
    if (UVar2 < DAT_180c6f700) {
      return 0;
    }
    iVar1 = FUN_1805f68d0(&DAT_180900a10);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_180900a5c == 0x7fffffff) {
      DAT_180900a5c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c6f708 == 0) && (DAT_180c6f700 <= UVar2)) {
      DAT_180c6f708 = FUN_1804174b0("C_BaseEntity",0x5600aa92);
      if (DAT_180c6f708 == 0) {
        DAT_180c6f700 = UVar2 + 1000;
      }
      else {
        DAT_180c6f700 = 0xffffffffffffffff;
      }
    }
    iVar1 = DAT_180c6f708;
    FUN_1805f68fc(&DAT_180900a10);
  }
  return iVar1;
}



