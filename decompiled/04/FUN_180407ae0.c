// FUN_180407ae0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180407ae0 */

int FUN_180407ae0(void)

{
  int iVar1;
  ULONGLONG UVar2;
  
  iVar1 = DAT_180c7d244;
  if (DAT_180c7d244 == 0) {
    UVar2 = GetTickCount64();
    if (UVar2 < DAT_180c7d248) {
      return 0;
    }
    iVar1 = FUN_1805f68d0(&DAT_1809beca0);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1809becec == 0x7fffffff) {
      DAT_1809becec = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c7d244 == 0) && (DAT_180c7d248 <= UVar2)) {
      DAT_180c7d244 = FUN_1804174b0("C_BaseEntity",0x7fcb378d);
      if (DAT_180c7d244 == 0) {
        DAT_180c7d248 = UVar2 + 1000;
      }
      else {
        DAT_180c7d248 = 0xffffffffffffffff;
      }
    }
    iVar1 = DAT_180c7d244;
    FUN_1805f68fc(&DAT_1809beca0);
  }
  return iVar1;
}



