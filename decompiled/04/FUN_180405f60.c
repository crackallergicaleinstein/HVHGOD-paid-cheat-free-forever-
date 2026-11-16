// FUN_180405f60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180405f60 */

int FUN_180405f60(void)

{
  int iVar1;
  ULONGLONG UVar2;
  
  iVar1 = DAT_180c7d38c;
  if (DAT_180c7d38c == 0) {
    UVar2 = GetTickCount64();
    if (UVar2 < DAT_180c7d390) {
      return 0;
    }
    iVar1 = FUN_1805f68d0(&DAT_1809bf4c0);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1809bf50c == 0x7fffffff) {
      DAT_1809bf50c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c7d38c == 0) && (DAT_180c7d390 <= UVar2)) {
      DAT_180c7d38c = FUN_1804174b0("CNetworkViewOffsetVector",0x8eeb76d4);
      if (DAT_180c7d38c == 0) {
        DAT_180c7d390 = UVar2 + 1000;
      }
      else {
        DAT_180c7d390 = 0xffffffffffffffff;
      }
    }
    iVar1 = DAT_180c7d38c;
    FUN_1805f68fc(&DAT_1809bf4c0);
  }
  return iVar1;
}



