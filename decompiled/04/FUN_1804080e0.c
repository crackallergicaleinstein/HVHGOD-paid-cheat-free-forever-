// FUN_1804080e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804080e0 */

int FUN_1804080e0(void)

{
  int iVar1;
  ULONGLONG UVar2;
  
  iVar1 = DAT_180c7d204;
  if (DAT_180c7d204 == 0) {
    UVar2 = GetTickCount64();
    if (UVar2 < DAT_180c7d1c8) {
      return 0;
    }
    iVar1 = FUN_1805f68d0(&DAT_1809be980);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1809be9cc == 0x7fffffff) {
      DAT_1809be9cc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c7d204 == 0) && (DAT_180c7d1c8 <= UVar2)) {
      DAT_180c7d204 = FUN_1804174b0("C_CSPlayerPawn",0x7ac97631);
      if (DAT_180c7d204 == 0) {
        DAT_180c7d1c8 = UVar2 + 1000;
      }
      else {
        DAT_180c7d1c8 = 0xffffffffffffffff;
      }
    }
    iVar1 = DAT_180c7d204;
    FUN_1805f68fc(&DAT_1809be980);
  }
  return iVar1;
}



