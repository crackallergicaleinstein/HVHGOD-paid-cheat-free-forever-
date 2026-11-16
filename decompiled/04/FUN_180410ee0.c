// FUN_180410ee0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180410ee0 */

int FUN_180410ee0(void)

{
  int iVar1;
  ULONGLONG UVar2;
  
  iVar1 = DAT_180c7ca9c;
  if (DAT_180c7ca9c == 0) {
    UVar2 = GetTickCount64();
    if (UVar2 < DAT_180c7caa0) {
      return 0;
    }
    iVar1 = FUN_1805f68d0(&DAT_1809bbdc0);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1809bbe0c == 0x7fffffff) {
      DAT_1809bbe0c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c7ca9c == 0) && (DAT_180c7caa0 <= UVar2)) {
      DAT_180c7ca9c = FUN_1804174b0("CPlayer_MovementServices_Humanoid",0x74007b42);
      if (DAT_180c7ca9c == 0) {
        DAT_180c7caa0 = UVar2 + 1000;
      }
      else {
        DAT_180c7caa0 = 0xffffffffffffffff;
      }
    }
    iVar1 = DAT_180c7ca9c;
    FUN_1805f68fc(&DAT_1809bbdc0);
  }
  return iVar1;
}



