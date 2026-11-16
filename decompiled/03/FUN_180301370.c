// FUN_180301370 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180301370 */

int FUN_180301370(void)

{
  int iVar1;
  ULONGLONG UVar2;
  
  iVar1 = DAT_180c6f138;
  if (DAT_180c6f138 == 0) {
    UVar2 = GetTickCount64();
    if (UVar2 < DAT_180c6f120) {
      return 0;
    }
    iVar1 = FUN_1805f68d0(&DAT_1808fef00);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1808fef4c == 0x7fffffff) {
      DAT_1808fef4c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c6f138 == 0) && (DAT_180c6f120 <= UVar2)) {
      DAT_180c6f138 = FUN_1804174b0("C_BasePlayerPawn",0xcf73e28a);
      if (DAT_180c6f138 == 0) {
        DAT_180c6f120 = UVar2 + 1000;
      }
      else {
        DAT_180c6f120 = 0xffffffffffffffff;
      }
    }
    iVar1 = DAT_180c6f138;
    FUN_1805f68fc(&DAT_1808fef00);
  }
  return iVar1;
}



