// FUN_1804098e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804098e0 */

int FUN_1804098e0(void)

{
  int iVar1;
  ULONGLONG UVar2;
  
  iVar1 = DAT_180c7d0cc;
  if (DAT_180c7d0cc == 0) {
    UVar2 = GetTickCount64();
    if (UVar2 < DAT_180c7d090) {
      return 0;
    }
    iVar1 = FUN_1805f68d0(&DAT_1809be200);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1809be24c == 0x7fffffff) {
      DAT_1809be24c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c7d0cc == 0) && (DAT_180c7d090 <= UVar2)) {
      DAT_180c7d0cc = FUN_1804174b0("CCSPlayer_AimPunchServices",0x8b6226dc);
      if (DAT_180c7d0cc == 0) {
        DAT_180c7d090 = UVar2 + 1000;
      }
      else {
        DAT_180c7d090 = 0xffffffffffffffff;
      }
    }
    iVar1 = DAT_180c7d0cc;
    FUN_1805f68fc(&DAT_1809be200);
  }
  return iVar1;
}



