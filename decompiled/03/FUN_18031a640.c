// FUN_18031a640 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18031a640 */

int FUN_18031a640(void)

{
  int iVar1;
  ULONGLONG UVar2;
  
  iVar1 = DAT_180c6f448;
  if (DAT_180c6f448 == 0) {
    UVar2 = GetTickCount64();
    if (UVar2 < DAT_180c6f440) {
      return 0;
    }
    iVar1 = FUN_1805f68d0(&DAT_1808ffce0);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1808ffd2c == 0x7fffffff) {
      DAT_1808ffd2c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c6f448 == 0) && (DAT_180c6f440 <= UVar2)) {
      DAT_180c6f448 = FUN_1804174b0("C_BasePlayerPawn",0xcf73e28a);
      if (DAT_180c6f448 == 0) {
        DAT_180c6f440 = UVar2 + 1000;
      }
      else {
        DAT_180c6f440 = 0xffffffffffffffff;
      }
    }
    iVar1 = DAT_180c6f448;
    FUN_1805f68fc(&DAT_1808ffce0);
  }
  return iVar1;
}



