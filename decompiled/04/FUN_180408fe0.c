// FUN_180408fe0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180408fe0 */

int FUN_180408fe0(void)

{
  int iVar1;
  ULONGLONG UVar2;
  
  iVar1 = DAT_180c7d130;
  if (DAT_180c7d130 == 0) {
    UVar2 = GetTickCount64();
    if (UVar2 < DAT_180c7d128) {
      return 0;
    }
    iVar1 = FUN_1805f68d0(&DAT_1809be610);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1809be65c == 0x7fffffff) {
      DAT_1809be65c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c7d130 == 0) && (DAT_180c7d128 <= UVar2)) {
      DAT_180c7d130 = FUN_1804174b0("C_CSPlayerPawn",0xcc07e25a);
      if (DAT_180c7d130 == 0) {
        DAT_180c7d128 = UVar2 + 1000;
      }
      else {
        DAT_180c7d128 = 0xffffffffffffffff;
      }
    }
    iVar1 = DAT_180c7d130;
    FUN_1805f68fc(&DAT_1809be610);
  }
  return iVar1;
}



