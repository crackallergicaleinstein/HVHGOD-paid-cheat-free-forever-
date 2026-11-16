// FUN_180406760 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180406760 */

int FUN_180406760(void)

{
  int iVar1;
  ULONGLONG UVar2;
  
  iVar1 = DAT_180c7d338;
  if (DAT_180c7d338 == 0) {
    UVar2 = GetTickCount64();
    if (UVar2 < DAT_180c7d330) {
      return 0;
    }
    iVar1 = FUN_1805f68d0(&DAT_1809bf290);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1809bf2dc == 0x7fffffff) {
      DAT_1809bf2dc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c7d338 == 0) && (DAT_180c7d330 <= UVar2)) {
      DAT_180c7d338 = FUN_1804174b0("CPlayer_MovementServices",0x39cfb260);
      if (DAT_180c7d338 == 0) {
        DAT_180c7d330 = UVar2 + 1000;
      }
      else {
        DAT_180c7d330 = 0xffffffffffffffff;
      }
    }
    iVar1 = DAT_180c7d338;
    FUN_1805f68fc(&DAT_1809bf290);
  }
  return iVar1;
}



