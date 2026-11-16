// FUN_180347ff0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180347ff0 */

int FUN_180347ff0(void)

{
  int iVar1;
  ULONGLONG UVar2;
  
  iVar1 = DAT_180c6f6c0;
  if (DAT_180c6f6c0 == 0) {
    UVar2 = GetTickCount64();
    if (UVar2 < DAT_180c6f6b8) {
      return 0;
    }
    iVar1 = FUN_1805f68d0(&DAT_180900970);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1809009bc == 0x7fffffff) {
      DAT_1809009bc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c6f6c0 == 0) && (DAT_180c6f6b8 <= UVar2)) {
      DAT_180c6f6c0 = FUN_1804174b0("CCSPlayer_MovementServices",0xe4f7740e);
      if (DAT_180c6f6c0 == 0) {
        DAT_180c6f6b8 = UVar2 + 1000;
      }
      else {
        DAT_180c6f6b8 = 0xffffffffffffffff;
      }
    }
    iVar1 = DAT_180c6f6c0;
    FUN_1805f68fc(&DAT_180900970);
  }
  return iVar1;
}



