// FUN_18040f8e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18040f8e0 */

int FUN_18040f8e0(void)

{
  int iVar1;
  ULONGLONG UVar2;
  
  iVar1 = DAT_180c7cbec;
  if (DAT_180c7cbec == 0) {
    UVar2 = GetTickCount64();
    if (UVar2 < DAT_180c7cbb0) {
      return 0;
    }
    iVar1 = FUN_1805f68d0(&DAT_1809bc400);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1809bc44c == 0x7fffffff) {
      DAT_1809bc44c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c7cbec == 0) && (DAT_180c7cbb0 <= UVar2)) {
      DAT_180c7cbec = FUN_1804174b0("CCSPlayer_MovementServices",0xb873f5d3);
      if (DAT_180c7cbec == 0) {
        DAT_180c7cbb0 = UVar2 + 1000;
      }
      else {
        DAT_180c7cbb0 = 0xffffffffffffffff;
      }
    }
    iVar1 = DAT_180c7cbec;
    FUN_1805f68fc(&DAT_1809bc400);
  }
  return iVar1;
}



