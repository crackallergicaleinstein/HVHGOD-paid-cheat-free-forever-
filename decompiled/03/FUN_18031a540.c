// FUN_18031a540 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18031a540 */

int FUN_18031a540(void)

{
  int iVar1;
  ULONGLONG UVar2;
  
  iVar1 = DAT_180c6f468;
  if (DAT_180c6f468 == 0) {
    UVar2 = GetTickCount64();
    if (UVar2 < DAT_180c6f460) {
      return 0;
    }
    iVar1 = FUN_1805f68d0(&DAT_1808ffd30);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1808ffd7c == 0x7fffffff) {
      DAT_1808ffd7c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c6f468 == 0) && (DAT_180c6f460 <= UVar2)) {
      DAT_180c6f468 = FUN_1804174b0("C_BaseEntity",0x5600aa92);
      if (DAT_180c6f468 == 0) {
        DAT_180c6f460 = UVar2 + 1000;
      }
      else {
        DAT_180c6f460 = 0xffffffffffffffff;
      }
    }
    iVar1 = DAT_180c6f468;
    FUN_1805f68fc(&DAT_1808ffd30);
  }
  return iVar1;
}



