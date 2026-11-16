// FUN_1804078e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804078e0 */

int FUN_1804078e0(void)

{
  int iVar1;
  ULONGLONG UVar2;
  
  iVar1 = DAT_180c7d26c;
  if (DAT_180c7d26c == 0) {
    UVar2 = GetTickCount64();
    if (UVar2 < DAT_180c7d230) {
      return 0;
    }
    iVar1 = FUN_1805f68d0(&DAT_1809bec00);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1809bec4c == 0x7fffffff) {
      DAT_1809bec4c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c7d26c == 0) && (DAT_180c7d230 <= UVar2)) {
      DAT_180c7d26c = FUN_1804174b0("C_BaseEntity",0x328a3947);
      if (DAT_180c7d26c == 0) {
        DAT_180c7d230 = UVar2 + 1000;
      }
      else {
        DAT_180c7d230 = 0xffffffffffffffff;
      }
    }
    iVar1 = DAT_180c7d26c;
    FUN_1805f68fc(&DAT_1809bec00);
  }
  return iVar1;
}



