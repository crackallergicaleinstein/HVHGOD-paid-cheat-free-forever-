// FUN_180363b90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180363b90 */

int FUN_180363b90(void)

{
  int iVar1;
  ULONGLONG UVar2;
  
  iVar1 = DAT_180c6f7f8;
  if (DAT_180c6f7f8 == 0) {
    UVar2 = GetTickCount64();
    if (UVar2 < DAT_180c6f7e0) {
      return 0;
    }
    iVar1 = FUN_1805f68d0(&DAT_180900ec0);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_180900f0c == 0x7fffffff) {
      DAT_180900f0c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c6f7f8 == 0) && (DAT_180c6f7e0 <= UVar2)) {
      DAT_180c6f7f8 = FUN_1804174b0("C_BaseEntity",0x328a3947);
      if (DAT_180c6f7f8 == 0) {
        DAT_180c6f7e0 = UVar2 + 1000;
      }
      else {
        DAT_180c6f7e0 = 0xffffffffffffffff;
      }
    }
    iVar1 = DAT_180c6f7f8;
    FUN_1805f68fc(&DAT_180900ec0);
  }
  return iVar1;
}



