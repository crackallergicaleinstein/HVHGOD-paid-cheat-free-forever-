// FUN_18040dde0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18040dde0 */

int FUN_18040dde0(void)

{
  int iVar1;
  ULONGLONG UVar2;
  
  iVar1 = DAT_180c7cd48;
  if (DAT_180c7cd48 == 0) {
    UVar2 = GetTickCount64();
    if (UVar2 < DAT_180c7cd40) {
      return 0;
    }
    iVar1 = FUN_1805f68d0(&DAT_1809bcc70);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1809bccbc == 0x7fffffff) {
      DAT_1809bccbc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c7cd48 == 0) && (DAT_180c7cd40 <= UVar2)) {
      DAT_180c7cd48 = FUN_1804174b0("CCSPlayer_MovementServices",0xa4034739);
      if (DAT_180c7cd48 == 0) {
        DAT_180c7cd40 = UVar2 + 1000;
      }
      else {
        DAT_180c7cd40 = 0xffffffffffffffff;
      }
    }
    iVar1 = DAT_180c7cd48;
    FUN_1805f68fc(&DAT_1809bcc70);
  }
  return iVar1;
}



