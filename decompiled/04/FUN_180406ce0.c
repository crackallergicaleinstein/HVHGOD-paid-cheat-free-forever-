// FUN_180406ce0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180406ce0 */

int FUN_180406ce0(void)

{
  int iVar1;
  ULONGLONG UVar2;
  
  iVar1 = DAT_180c7d2e4;
  if (DAT_180c7d2e4 == 0) {
    UVar2 = GetTickCount64();
    if (UVar2 < DAT_180c7d2e8) {
      return 0;
    }
    iVar1 = FUN_1805f68d0(&DAT_1809bf0b0);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1809bf0fc == 0x7fffffff) {
      DAT_1809bf0fc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c7d2e4 == 0) && (DAT_180c7d2e8 <= UVar2)) {
      DAT_180c7d2e4 = FUN_1804174b0("CBasePlayerController",0x9a8c76d);
      if (DAT_180c7d2e4 == 0) {
        DAT_180c7d2e8 = UVar2 + 1000;
      }
      else {
        DAT_180c7d2e8 = 0xffffffffffffffff;
      }
    }
    iVar1 = DAT_180c7d2e4;
    FUN_1805f68fc(&DAT_1809bf0b0);
  }
  return iVar1;
}



