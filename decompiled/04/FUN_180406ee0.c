// FUN_180406ee0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180406ee0 */

int FUN_180406ee0(void)

{
  int iVar1;
  ULONGLONG UVar2;
  
  iVar1 = DAT_180c7d2b8;
  if (DAT_180c7d2b8 == 0) {
    UVar2 = GetTickCount64();
    if (UVar2 < DAT_180c7d2c0) {
      return 0;
    }
    iVar1 = FUN_1805f68d0(&DAT_1809befc0);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1809bf00c == 0x7fffffff) {
      DAT_1809bf00c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c7d2b8 == 0) && (DAT_180c7d2c0 <= UVar2)) {
      DAT_180c7d2b8 = FUN_1804174b0("CCollisionProperty",0xe57f80c);
      if (DAT_180c7d2b8 == 0) {
        DAT_180c7d2c0 = UVar2 + 1000;
      }
      else {
        DAT_180c7d2c0 = 0xffffffffffffffff;
      }
    }
    iVar1 = DAT_180c7d2b8;
    FUN_1805f68fc(&DAT_1809befc0);
  }
  return iVar1;
}



