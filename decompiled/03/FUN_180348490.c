// FUN_180348490 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180348490 */

int FUN_180348490(void)

{
  int iVar1;
  ULONGLONG UVar2;
  
  iVar1 = DAT_180c6f688;
  if (DAT_180c6f688 == 0) {
    UVar2 = GetTickCount64();
    if (UVar2 < DAT_180c6f680) {
      return 0;
    }
    iVar1 = FUN_1805f68d0(&DAT_180900830);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_18090087c == 0x7fffffff) {
      DAT_18090087c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c6f688 == 0) && (DAT_180c6f680 <= UVar2)) {
      DAT_180c6f688 = FUN_1804174b0("C_BaseEntity",0x9d930423);
      if (DAT_180c6f688 == 0) {
        DAT_180c6f680 = UVar2 + 1000;
      }
      else {
        DAT_180c6f680 = 0xffffffffffffffff;
      }
    }
    iVar1 = DAT_180c6f688;
    FUN_1805f68fc(&DAT_180900830);
  }
  return iVar1;
}



