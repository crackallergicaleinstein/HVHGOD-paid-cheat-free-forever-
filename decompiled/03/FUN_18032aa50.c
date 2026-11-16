// FUN_18032aa50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18032aa50 */

int FUN_18032aa50(void)

{
  int iVar1;
  ULONGLONG UVar2;
  
  iVar1 = DAT_180c6f428;
  if (DAT_180c6f428 == 0) {
    UVar2 = GetTickCount64();
    if (UVar2 < DAT_180c6f420) {
      return 0;
    }
    iVar1 = FUN_1805f68d0(&DAT_1808ffb50);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1808ffb9c == 0x7fffffff) {
      DAT_1808ffb9c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c6f428 == 0) && (DAT_180c6f420 <= UVar2)) {
      DAT_180c6f428 = FUN_1804174b0("C_BaseEntity",0xa4a37590);
      if (DAT_180c6f428 == 0) {
        DAT_180c6f420 = UVar2 + 1000;
      }
      else {
        DAT_180c6f420 = 0xffffffffffffffff;
      }
    }
    iVar1 = DAT_180c6f428;
    FUN_1805f68fc(&DAT_1808ffb50);
  }
  return iVar1;
}



