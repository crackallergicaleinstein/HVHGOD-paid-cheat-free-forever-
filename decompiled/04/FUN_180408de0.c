// FUN_180408de0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180408de0 */

int FUN_180408de0(void)

{
  int iVar1;
  ULONGLONG UVar2;
  
  iVar1 = DAT_180c7d158;
  if (DAT_180c7d158 == 0) {
    UVar2 = GetTickCount64();
    if (UVar2 < DAT_180c7d150) {
      return 0;
    }
    iVar1 = FUN_1805f68d0(&DAT_1809be570);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1809be5bc == 0x7fffffff) {
      DAT_1809be5bc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c7d158 == 0) && (DAT_180c7d150 <= UVar2)) {
      DAT_180c7d158 = FUN_1804174b0("C_CSPlayerPawn",0xdc90c1f);
      if (DAT_180c7d158 == 0) {
        DAT_180c7d150 = UVar2 + 1000;
      }
      else {
        DAT_180c7d150 = 0xffffffffffffffff;
      }
    }
    iVar1 = DAT_180c7d158;
    FUN_1805f68fc(&DAT_1809be570);
  }
  return iVar1;
}



