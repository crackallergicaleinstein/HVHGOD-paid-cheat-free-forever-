// FUN_180406060 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180406060 */

int FUN_180406060(void)

{
  int iVar1;
  ULONGLONG UVar2;
  
  iVar1 = DAT_180c7d3a0;
  if (DAT_180c7d3a0 == 0) {
    UVar2 = GetTickCount64();
    if (UVar2 < DAT_180c7d398) {
      return 0;
    }
    iVar1 = FUN_1805f68d0(&DAT_1809bf380);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1809bf3cc == 0x7fffffff) {
      DAT_1809bf3cc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c7d3a0 == 0) && (DAT_180c7d398 <= UVar2)) {
      DAT_180c7d3a0 = FUN_1804174b0("CNetworkViewOffsetVector",0x91eb7b8d);
      if (DAT_180c7d3a0 == 0) {
        DAT_180c7d398 = UVar2 + 1000;
      }
      else {
        DAT_180c7d398 = 0xffffffffffffffff;
      }
    }
    iVar1 = DAT_180c7d3a0;
    FUN_1805f68fc(&DAT_1809bf380);
  }
  return iVar1;
}



