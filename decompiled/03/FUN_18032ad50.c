// FUN_18032ad50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18032ad50 */

int FUN_18032ad50(void)

{
  int iVar1;
  ULONGLONG UVar2;
  
  iVar1 = DAT_180c6f3f0;
  if (DAT_180c6f3f0 == 0) {
    UVar2 = GetTickCount64();
    if (UVar2 < DAT_180c6f3e8) {
      return 0;
    }
    iVar1 = FUN_1805f68d0(&DAT_1808ffab0);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1808ffafc == 0x7fffffff) {
      DAT_1808ffafc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c6f3f0 == 0) && (DAT_180c6f3e8 <= UVar2)) {
      DAT_180c6f3f0 = FUN_1804174b0("C_BaseEntity",0x9d930423);
      if (DAT_180c6f3f0 == 0) {
        DAT_180c6f3e8 = UVar2 + 1000;
      }
      else {
        DAT_180c6f3e8 = 0xffffffffffffffff;
      }
    }
    iVar1 = DAT_180c6f3f0;
    FUN_1805f68fc(&DAT_1808ffab0);
  }
  return iVar1;
}



