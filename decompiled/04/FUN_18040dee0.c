// FUN_18040dee0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18040dee0 */

int FUN_18040dee0(void)

{
  int iVar1;
  ULONGLONG UVar2;
  
  iVar1 = DAT_180c7cd08;
  if (DAT_180c7cd08 == 0) {
    UVar2 = GetTickCount64();
    if (UVar2 < DAT_180c7cd10) {
      return 0;
    }
    iVar1 = FUN_1805f68d0(&DAT_1809bccc0);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1809bcd0c == 0x7fffffff) {
      DAT_1809bcd0c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c7cd08 == 0) && (DAT_180c7cd10 <= UVar2)) {
      DAT_180c7cd08 = FUN_1804174b0("CCSPlayer_MovementServices",0xbd1eb2e8);
      if (DAT_180c7cd08 == 0) {
        DAT_180c7cd10 = UVar2 + 1000;
      }
      else {
        DAT_180c7cd10 = 0xffffffffffffffff;
      }
    }
    iVar1 = DAT_180c7cd08;
    FUN_1805f68fc(&DAT_1809bccc0);
  }
  return iVar1;
}



