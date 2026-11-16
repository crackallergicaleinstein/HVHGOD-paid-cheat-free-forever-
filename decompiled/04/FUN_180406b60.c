// FUN_180406b60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180406b60 */

int FUN_180406b60(void)

{
  int iVar1;
  ULONGLONG UVar2;
  
  iVar1 = DAT_180c7d2e0;
  if (DAT_180c7d2e0 == 0) {
    UVar2 = GetTickCount64();
    if (UVar2 < DAT_180c7d2d8) {
      return 0;
    }
    iVar1 = FUN_1805f68d0(&DAT_1809bf060);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1809bf0ac == 0x7fffffff) {
      DAT_1809bf0ac = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c7d2e0 == 0) && (DAT_180c7d2d8 <= UVar2)) {
      DAT_180c7d2e0 = FUN_1804174b0("CPlayer_MovementServices",0x99115a07);
      if (DAT_180c7d2e0 == 0) {
        DAT_180c7d2d8 = UVar2 + 1000;
      }
      else {
        DAT_180c7d2d8 = 0xffffffffffffffff;
      }
    }
    iVar1 = DAT_180c7d2e0;
    FUN_1805f68fc(&DAT_1809bf060);
  }
  return iVar1;
}



