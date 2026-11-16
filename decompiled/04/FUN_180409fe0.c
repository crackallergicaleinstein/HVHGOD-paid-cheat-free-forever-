// FUN_180409fe0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180409fe0 */

int FUN_180409fe0(void)

{
  int iVar1;
  ULONGLONG UVar2;
  
  iVar1 = DAT_180c7d060;
  if (DAT_180c7d060 == 0) {
    UVar2 = GetTickCount64();
    if (UVar2 < DAT_180c7d058) {
      return 0;
    }
    iVar1 = FUN_1805f68d0(&DAT_1809be110);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1809be15c == 0x7fffffff) {
      DAT_1809be15c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c7d060 == 0) && (DAT_180c7d058 <= UVar2)) {
      DAT_180c7d060 = FUN_1804174b0("CCSPlayer_WeaponServices",0xe6986027);
      if (DAT_180c7d060 == 0) {
        DAT_180c7d058 = UVar2 + 1000;
      }
      else {
        DAT_180c7d058 = 0xffffffffffffffff;
      }
    }
    iVar1 = DAT_180c7d060;
    FUN_1805f68fc(&DAT_1809be110);
  }
  return iVar1;
}



