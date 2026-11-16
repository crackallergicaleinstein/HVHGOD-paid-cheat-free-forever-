// FUN_180409ce0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180409ce0 */

int FUN_180409ce0(void)

{
  int iVar1;
  ULONGLONG UVar2;
  
  iVar1 = DAT_180c7d074;
  if (DAT_180c7d074 == 0) {
    UVar2 = GetTickCount64();
    if (UVar2 < DAT_180c7d078) {
      return 0;
    }
    iVar1 = FUN_1805f68d0(&DAT_1809be1b0);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1809be1fc == 0x7fffffff) {
      DAT_1809be1fc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c7d074 == 0) && (DAT_180c7d078 <= UVar2)) {
      DAT_180c7d074 = FUN_1804174b0("CCSPlayer_AimPunchServices",0xd6be4de1);
      if (DAT_180c7d074 == 0) {
        DAT_180c7d078 = UVar2 + 1000;
      }
      else {
        DAT_180c7d078 = 0xffffffffffffffff;
      }
    }
    iVar1 = DAT_180c7d074;
    FUN_1805f68fc(&DAT_1809be1b0);
  }
  return iVar1;
}



