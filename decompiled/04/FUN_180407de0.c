// FUN_180407de0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180407de0 */

int FUN_180407de0(void)

{
  int iVar1;
  ULONGLONG UVar2;
  
  iVar1 = DAT_180c7d228;
  if (DAT_180c7d228 == 0) {
    UVar2 = GetTickCount64();
    if (UVar2 < DAT_180c7d220) {
      return 0;
    }
    iVar1 = FUN_1805f68d0(&DAT_1809bea70);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1809beabc == 0x7fffffff) {
      DAT_1809beabc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c7d228 == 0) && (DAT_180c7d220 <= UVar2)) {
      DAT_180c7d228 = FUN_1804174b0("CGameSceneNode",0xe8b4eae5);
      if (DAT_180c7d228 == 0) {
        DAT_180c7d220 = UVar2 + 1000;
      }
      else {
        DAT_180c7d220 = 0xffffffffffffffff;
      }
    }
    iVar1 = DAT_180c7d228;
    FUN_1805f68fc(&DAT_1809bea70);
  }
  return iVar1;
}



