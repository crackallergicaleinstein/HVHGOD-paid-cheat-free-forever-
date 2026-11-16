// FUN_1804107e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804107e0 */

int FUN_1804107e0(void)

{
  int iVar1;
  ULONGLONG UVar2;
  
  iVar1 = DAT_180c7cb18;
  if (DAT_180c7cb18 == 0) {
    UVar2 = GetTickCount64();
    if (UVar2 < DAT_180c7cb10) {
      return 0;
    }
    iVar1 = FUN_1805f68d0(&DAT_1809bc090);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1809bc0dc == 0x7fffffff) {
      DAT_1809bc0dc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c7cb18 == 0) && (DAT_180c7cb10 <= UVar2)) {
      DAT_180c7cb18 = FUN_1804174b0("CCSPlayer_MovementServices",0xa77b65fd);
      if (DAT_180c7cb18 == 0) {
        DAT_180c7cb10 = UVar2 + 1000;
      }
      else {
        DAT_180c7cb10 = 0xffffffffffffffff;
      }
    }
    iVar1 = DAT_180c7cb18;
    FUN_1805f68fc(&DAT_1809bc090);
  }
  return iVar1;
}



