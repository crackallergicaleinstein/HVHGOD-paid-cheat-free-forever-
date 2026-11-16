// FUN_18040c2e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18040c2e0 */

int FUN_18040c2e0(void)

{
  int iVar1;
  ULONGLONG UVar2;
  
  iVar1 = DAT_180c7ce9c;
  if (DAT_180c7ce9c == 0) {
    UVar2 = GetTickCount64();
    if (UVar2 < DAT_180c7cea0) {
      return 0;
    }
    iVar1 = FUN_1805f68d0(&DAT_1809bd620);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1809bd66c == 0x7fffffff) {
      DAT_1809bd66c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c7ce9c == 0) && (DAT_180c7cea0 <= UVar2)) {
      DAT_180c7ce9c = FUN_1804174b0("CPlayer_MovementServices",0xc4cf0d13);
      if (DAT_180c7ce9c == 0) {
        DAT_180c7cea0 = UVar2 + 1000;
      }
      else {
        DAT_180c7cea0 = 0xffffffffffffffff;
      }
    }
    iVar1 = DAT_180c7ce9c;
    FUN_1805f68fc(&DAT_1809bd620);
  }
  return iVar1;
}



