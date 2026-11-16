// FUN_1804108e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804108e0 */

int FUN_1804108e0(void)

{
  int iVar1;
  ULONGLONG UVar2;
  
  iVar1 = DAT_180c7cb1c;
  if (DAT_180c7cb1c == 0) {
    UVar2 = GetTickCount64();
    if (UVar2 < DAT_180c7cae0) {
      return 0;
    }
    iVar1 = FUN_1805f68d0(&DAT_1809bbf00);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1809bbf4c == 0x7fffffff) {
      DAT_1809bbf4c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c7cb1c == 0) && (DAT_180c7cae0 <= UVar2)) {
      DAT_180c7cb1c = FUN_1804174b0("CCSPlayer_MovementServices",0x9a6c0ada);
      if (DAT_180c7cb1c == 0) {
        DAT_180c7cae0 = UVar2 + 1000;
      }
      else {
        DAT_180c7cae0 = 0xffffffffffffffff;
      }
    }
    iVar1 = DAT_180c7cb1c;
    FUN_1805f68fc(&DAT_1809bbf00);
  }
  return iVar1;
}



