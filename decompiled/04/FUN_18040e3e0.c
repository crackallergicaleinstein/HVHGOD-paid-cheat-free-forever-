// FUN_18040e3e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18040e3e0 */

int FUN_18040e3e0(void)

{
  int iVar1;
  ULONGLONG UVar2;
  
  iVar1 = DAT_180c7ccc8;
  if (DAT_180c7ccc8 == 0) {
    UVar2 = GetTickCount64();
    if (UVar2 < DAT_180c7ccc0) {
      return 0;
    }
    iVar1 = FUN_1805f68d0(&DAT_1809bcae0);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1809bcb2c == 0x7fffffff) {
      DAT_1809bcb2c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c7ccc8 == 0) && (DAT_180c7ccc0 <= UVar2)) {
      DAT_180c7ccc8 = FUN_1804174b0("CCSPlayer_MovementServices",0x8f382a43);
      if (DAT_180c7ccc8 == 0) {
        DAT_180c7ccc0 = UVar2 + 1000;
      }
      else {
        DAT_180c7ccc0 = 0xffffffffffffffff;
      }
    }
    iVar1 = DAT_180c7ccc8;
    FUN_1805f68fc(&DAT_1809bcae0);
  }
  return iVar1;
}



