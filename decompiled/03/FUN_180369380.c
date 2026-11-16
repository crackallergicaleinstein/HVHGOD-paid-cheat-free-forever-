// FUN_180369380 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180369380 */

int FUN_180369380(void)

{
  int iVar1;
  ULONGLONG UVar2;
  
  iVar1 = DAT_180c6f918;
  if (DAT_180c6f918 == 0) {
    UVar2 = GetTickCount64();
    if (UVar2 < DAT_180c6f910) {
      return 0;
    }
    iVar1 = FUN_1805f68d0(&DAT_180901280);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1809012cc == 0x7fffffff) {
      DAT_1809012cc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c6f918 == 0) && (DAT_180c6f910 <= UVar2)) {
      DAT_180c6f918 = FUN_1804174b0("C_BaseEntity",0x5600aa92);
      if (DAT_180c6f918 == 0) {
        DAT_180c6f910 = UVar2 + 1000;
      }
      else {
        DAT_180c6f910 = 0xffffffffffffffff;
      }
    }
    iVar1 = DAT_180c6f918;
    FUN_1805f68fc(&DAT_180901280);
  }
  return iVar1;
}



