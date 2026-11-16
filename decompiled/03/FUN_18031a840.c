// FUN_18031a840 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18031a840 */

int FUN_18031a840(void)

{
  int iVar1;
  ULONGLONG UVar2;
  
  iVar1 = DAT_180c6f44c;
  if (DAT_180c6f44c == 0) {
    UVar2 = GetTickCount64();
    if (UVar2 < DAT_180c6f438) {
      return 0;
    }
    iVar1 = FUN_1805f68d0(&DAT_1808ffc90);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1808ffcdc == 0x7fffffff) {
      DAT_1808ffcdc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c6f44c == 0) && (DAT_180c6f438 <= UVar2)) {
      DAT_180c6f44c = FUN_1804174b0("CCSPlayer_MovementServices",0xe4f7740e);
      if (DAT_180c6f44c == 0) {
        DAT_180c6f438 = UVar2 + 1000;
      }
      else {
        DAT_180c6f438 = 0xffffffffffffffff;
      }
    }
    iVar1 = DAT_180c6f44c;
    FUN_1805f68fc(&DAT_1808ffc90);
  }
  return iVar1;
}



