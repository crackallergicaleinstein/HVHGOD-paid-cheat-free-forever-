// FUN_180405d60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180405d60 */

int FUN_180405d60(void)

{
  int iVar1;
  ULONGLONG UVar2;
  
  iVar1 = DAT_180c7d3e4;
  if (DAT_180c7d3e4 == 0) {
    UVar2 = GetTickCount64();
    if (UVar2 < DAT_180c7d3a8) {
      return 0;
    }
    iVar1 = FUN_1805f68d0(&DAT_1809bf510);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1809bf55c == 0x7fffffff) {
      DAT_1809bf55c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c7d3e4 == 0) && (DAT_180c7d3a8 <= UVar2)) {
      DAT_180c7d3e4 = FUN_1804174b0("CCollisionProperty",0xe57f80c);
      if (DAT_180c7d3e4 == 0) {
        DAT_180c7d3a8 = UVar2 + 1000;
      }
      else {
        DAT_180c7d3a8 = 0xffffffffffffffff;
      }
    }
    iVar1 = DAT_180c7d3e4;
    FUN_1805f68fc(&DAT_1809bf510);
  }
  return iVar1;
}



