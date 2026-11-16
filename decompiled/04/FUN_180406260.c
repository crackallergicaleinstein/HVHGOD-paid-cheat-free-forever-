// FUN_180406260 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180406260 */

int FUN_180406260(void)

{
  int iVar1;
  ULONGLONG UVar2;
  
  iVar1 = DAT_180c7d370;
  if (DAT_180c7d370 == 0) {
    UVar2 = GetTickCount64();
    if (UVar2 < DAT_180c7d378) {
      return 0;
    }
    iVar1 = FUN_1805f68d0(&DAT_1809bf420);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1809bf46c == 0x7fffffff) {
      DAT_1809bf46c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c7d370 == 0) && (DAT_180c7d378 <= UVar2)) {
      DAT_180c7d370 = FUN_1804174b0("CGameSceneNode",0xb731a42f);
      if (DAT_180c7d370 == 0) {
        DAT_180c7d378 = UVar2 + 1000;
      }
      else {
        DAT_180c7d378 = 0xffffffffffffffff;
      }
    }
    iVar1 = DAT_180c7d370;
    FUN_1805f68fc(&DAT_1809bf420);
  }
  return iVar1;
}



