// FUN_180409be0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180409be0 */

int FUN_180409be0(void)

{
  int iVar1;
  ULONGLONG UVar2;
  
  iVar1 = DAT_180c7d070;
  if (DAT_180c7d070 == 0) {
    UVar2 = GetTickCount64();
    if (UVar2 < DAT_180c7d068) {
      return 0;
    }
    iVar1 = FUN_1805f68d0(&DAT_1809be160);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1809be1ac == 0x7fffffff) {
      DAT_1809be1ac = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c7d070 == 0) && (DAT_180c7d068 <= UVar2)) {
      DAT_180c7d070 = FUN_1804174b0("CCSPlayer_AimPunchServices",0xd8b95a17);
      if (DAT_180c7d070 == 0) {
        DAT_180c7d068 = UVar2 + 1000;
      }
      else {
        DAT_180c7d068 = 0xffffffffffffffff;
      }
    }
    iVar1 = DAT_180c7d070;
    FUN_1805f68fc(&DAT_1809be160);
  }
  return iVar1;
}



