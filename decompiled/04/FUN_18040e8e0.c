// FUN_18040e8e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18040e8e0 */

int FUN_18040e8e0(void)

{
  int iVar1;
  ULONGLONG UVar2;
  
  iVar1 = DAT_180c7ccbc;
  if (DAT_180c7ccbc == 0) {
    UVar2 = GetTickCount64();
    if (UVar2 < DAT_180c7cc80) {
      return 0;
    }
    iVar1 = FUN_1805f68d0(&DAT_1809bc900);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1809bc94c == 0x7fffffff) {
      DAT_1809bc94c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c7ccbc == 0) && (DAT_180c7cc80 <= UVar2)) {
      DAT_180c7ccbc = FUN_1804174b0("CCSPlayer_MovementServices",0xe36df24a);
      if (DAT_180c7ccbc == 0) {
        DAT_180c7cc80 = UVar2 + 1000;
      }
      else {
        DAT_180c7cc80 = 0xffffffffffffffff;
      }
    }
    iVar1 = DAT_180c7ccbc;
    FUN_1805f68fc(&DAT_1809bc900);
  }
  return iVar1;
}



