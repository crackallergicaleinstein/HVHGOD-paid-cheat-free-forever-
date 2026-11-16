// FUN_18032ab50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18032ab50 */

int FUN_18032ab50(void)

{
  int iVar1;
  ULONGLONG UVar2;
  
  iVar1 = DAT_180c6f408;
  if (DAT_180c6f408 == 0) {
    UVar2 = GetTickCount64();
    if (UVar2 < DAT_180c6f400) {
      return 0;
    }
    iVar1 = FUN_1805f68d0(&DAT_1808ffbf0);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1808ffc3c == 0x7fffffff) {
      DAT_1808ffc3c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c6f408 == 0) && (DAT_180c6f400 <= UVar2)) {
      DAT_180c6f408 = FUN_1804174b0("C_BasePlayerPawn",0xcf73e28a);
      if (DAT_180c6f408 == 0) {
        DAT_180c6f400 = UVar2 + 1000;
      }
      else {
        DAT_180c6f400 = 0xffffffffffffffff;
      }
    }
    iVar1 = DAT_180c6f408;
    FUN_1805f68fc(&DAT_1808ffbf0);
  }
  return iVar1;
}



