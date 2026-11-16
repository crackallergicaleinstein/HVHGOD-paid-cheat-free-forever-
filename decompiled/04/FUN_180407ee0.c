// FUN_180407ee0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180407ee0 */

int FUN_180407ee0(void)

{
  int iVar1;
  ULONGLONG UVar2;
  
  iVar1 = DAT_180c7d1e8;
  if (DAT_180c7d1e8 == 0) {
    UVar2 = GetTickCount64();
    if (UVar2 < DAT_180c7d1f0) {
      return 0;
    }
    iVar1 = FUN_1805f68d0(&DAT_1809beac0);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1809beb0c == 0x7fffffff) {
      DAT_1809beb0c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c7d1e8 == 0) && (DAT_180c7d1f0 <= UVar2)) {
      DAT_180c7d1e8 = FUN_1804174b0("CGameSceneNode",0xb731a42f);
      if (DAT_180c7d1e8 == 0) {
        DAT_180c7d1f0 = UVar2 + 1000;
      }
      else {
        DAT_180c7d1f0 = 0xffffffffffffffff;
      }
    }
    iVar1 = DAT_180c7d1e8;
    FUN_1805f68fc(&DAT_1809beac0);
  }
  return iVar1;
}



