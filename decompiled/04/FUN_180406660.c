// FUN_180406660 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180406660 */

int FUN_180406660(void)

{
  int iVar1;
  ULONGLONG UVar2;
  
  iVar1 = DAT_180c7d320;
  if (DAT_180c7d320 == 0) {
    UVar2 = GetTickCount64();
    if (UVar2 < DAT_180c7d328) {
      return 0;
    }
    iVar1 = FUN_1805f68d0(&DAT_1809bf240);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1809bf28c == 0x7fffffff) {
      DAT_1809bf28c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c7d320 == 0) && (DAT_180c7d328 <= UVar2)) {
      DAT_180c7d320 = FUN_1804174b0("CPlayer_MovementServices",0x7e86f99);
      if (DAT_180c7d320 == 0) {
        DAT_180c7d328 = UVar2 + 1000;
      }
      else {
        DAT_180c7d328 = 0xffffffffffffffff;
      }
    }
    iVar1 = DAT_180c7d320;
    FUN_1805f68fc(&DAT_1809bf240);
  }
  return iVar1;
}



