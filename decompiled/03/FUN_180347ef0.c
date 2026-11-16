// FUN_180347ef0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180347ef0 */

int FUN_180347ef0(void)

{
  int iVar1;
  ULONGLONG UVar2;
  
  iVar1 = DAT_180c6f6ec;
  if (DAT_180c6f6ec == 0) {
    UVar2 = GetTickCount64();
    if (UVar2 < DAT_180c6f6c8) {
      return 0;
    }
    iVar1 = FUN_1805f68d0(&DAT_1809008d0);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_18090091c == 0x7fffffff) {
      DAT_18090091c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c6f6ec == 0) && (DAT_180c6f6c8 <= UVar2)) {
      DAT_180c6f6ec = FUN_1804174b0("C_BasePlayerPawn",0xcf73e28a);
      if (DAT_180c6f6ec == 0) {
        DAT_180c6f6c8 = UVar2 + 1000;
      }
      else {
        DAT_180c6f6c8 = 0xffffffffffffffff;
      }
    }
    iVar1 = DAT_180c6f6ec;
    FUN_1805f68fc(&DAT_1809008d0);
  }
  return iVar1;
}



