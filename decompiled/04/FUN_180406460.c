// FUN_180406460 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180406460 */

int FUN_180406460(void)

{
  int iVar1;
  ULONGLONG UVar2;
  
  iVar1 = DAT_180c7d34c;
  if (DAT_180c7d34c == 0) {
    UVar2 = GetTickCount64();
    if (UVar2 < DAT_180c7d350) {
      return 0;
    }
    iVar1 = FUN_1805f68d0(&DAT_1809bf330);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1809bf37c == 0x7fffffff) {
      DAT_1809bf37c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c7d34c == 0) && (DAT_180c7d350 <= UVar2)) {
      DAT_180c7d34c = FUN_1804174b0("CPlayer_MovementServices",0x98ccef82);
      if (DAT_180c7d34c == 0) {
        DAT_180c7d350 = UVar2 + 1000;
      }
      else {
        DAT_180c7d350 = 0xffffffffffffffff;
      }
    }
    iVar1 = DAT_180c7d34c;
    FUN_1805f68fc(&DAT_1809bf330);
  }
  return iVar1;
}



