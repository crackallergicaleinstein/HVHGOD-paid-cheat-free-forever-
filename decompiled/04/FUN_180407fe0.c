// FUN_180407fe0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180407fe0 */

int FUN_180407fe0(void)

{
  int iVar1;
  ULONGLONG UVar2;
  
  iVar1 = DAT_180c7d200;
  if (DAT_180c7d200 == 0) {
    UVar2 = GetTickCount64();
    if (UVar2 < DAT_180c7d1f8) {
      return 0;
    }
    iVar1 = FUN_1805f68d0(&DAT_1809beb10);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1809beb5c == 0x7fffffff) {
      DAT_1809beb5c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c7d200 == 0) && (DAT_180c7d1f8 <= UVar2)) {
      DAT_180c7d200 = FUN_1804174b0("CGameSceneNode",0x80bd51e5);
      if (DAT_180c7d200 == 0) {
        DAT_180c7d1f8 = UVar2 + 1000;
      }
      else {
        DAT_180c7d1f8 = 0xffffffffffffffff;
      }
    }
    iVar1 = DAT_180c7d200;
    FUN_1805f68fc(&DAT_1809beb10);
  }
  return iVar1;
}



