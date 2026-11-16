// FUN_180409ee0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180409ee0 */

int FUN_180409ee0(void)

{
  int iVar1;
  ULONGLONG UVar2;
  
  iVar1 = DAT_180c7d048;
  if (DAT_180c7d048 == 0) {
    UVar2 = GetTickCount64();
    if (UVar2 < DAT_180c7d050) {
      return 0;
    }
    iVar1 = FUN_1805f68d0(&DAT_1809be0c0);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1809be10c == 0x7fffffff) {
      DAT_1809be10c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c7d048 == 0) && (DAT_180c7d050 <= UVar2)) {
      DAT_180c7d048 = FUN_1804174b0("CCSPlayer_WeaponServices",0xc79619bf);
      if (DAT_180c7d048 == 0) {
        DAT_180c7d050 = UVar2 + 1000;
      }
      else {
        DAT_180c7d050 = 0xffffffffffffffff;
      }
    }
    iVar1 = DAT_180c7d048;
    FUN_1805f68fc(&DAT_1809be0c0);
  }
  return iVar1;
}



