// FUN_18040e4e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18040e4e0 */

int FUN_18040e4e0(void)

{
  int iVar1;
  ULONGLONG UVar2;
  
  iVar1 = DAT_180c7cccc;
  if (DAT_180c7cccc == 0) {
    UVar2 = GetTickCount64();
    if (UVar2 < DAT_180c7ccd0) {
      return 0;
    }
    iVar1 = FUN_1805f68d0(&DAT_1809bcb30);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1809bcb7c == 0x7fffffff) {
      DAT_1809bcb7c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c7cccc == 0) && (DAT_180c7ccd0 <= UVar2)) {
      DAT_180c7cccc = FUN_1804174b0("CCSPlayer_MovementServices",0x7fd144aa);
      if (DAT_180c7cccc == 0) {
        DAT_180c7ccd0 = UVar2 + 1000;
      }
      else {
        DAT_180c7ccd0 = 0xffffffffffffffff;
      }
    }
    iVar1 = DAT_180c7cccc;
    FUN_1805f68fc(&DAT_1809bcb30);
  }
  return iVar1;
}



