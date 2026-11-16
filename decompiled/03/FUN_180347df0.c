// FUN_180347df0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180347df0 */

int FUN_180347df0(void)

{
  int iVar1;
  ULONGLONG UVar2;
  
  iVar1 = DAT_180c6f6f8;
  if (DAT_180c6f6f8 == 0) {
    UVar2 = GetTickCount64();
    if (UVar2 < DAT_180c6f6f0) {
      return 0;
    }
    iVar1 = FUN_1805f68d0(&DAT_180900a60);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_180900aac == 0x7fffffff) {
      DAT_180900aac = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c6f6f8 == 0) && (DAT_180c6f6f0 <= UVar2)) {
      DAT_180c6f6f8 = FUN_1804174b0("C_BaseEntity",0x16c096cc);
      if (DAT_180c6f6f8 == 0) {
        DAT_180c6f6f0 = UVar2 + 1000;
      }
      else {
        DAT_180c6f6f0 = 0xffffffffffffffff;
      }
    }
    iVar1 = DAT_180c6f6f8;
    FUN_1805f68fc(&DAT_180900a60);
  }
  return iVar1;
}



