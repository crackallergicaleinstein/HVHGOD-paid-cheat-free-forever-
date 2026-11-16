// FUN_180406fe0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180406fe0 */

int FUN_180406fe0(void)

{
  int iVar1;
  ULONGLONG UVar2;
  
  iVar1 = DAT_180c7d2d0;
  if (DAT_180c7d2d0 == 0) {
    UVar2 = GetTickCount64();
    if (UVar2 < DAT_180c7d2c8) {
      return 0;
    }
    iVar1 = FUN_1805f68d0(&DAT_1809bf010);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1809bf05c == 0x7fffffff) {
      DAT_1809bf05c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c7d2d0 == 0) && (DAT_180c7d2c8 <= UVar2)) {
      DAT_180c7d2d0 = FUN_1804174b0("CCollisionProperty",0x7d388d3e);
      if (DAT_180c7d2d0 == 0) {
        DAT_180c7d2c8 = UVar2 + 1000;
      }
      else {
        DAT_180c7d2c8 = 0xffffffffffffffff;
      }
    }
    iVar1 = DAT_180c7d2d0;
    FUN_1805f68fc(&DAT_1809bf010);
  }
  return iVar1;
}



