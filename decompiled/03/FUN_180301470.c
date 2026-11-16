// FUN_180301470 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180301470 */

int FUN_180301470(void)

{
  int iVar1;
  ULONGLONG UVar2;
  
  iVar1 = DAT_180c6f128;
  if (DAT_180c6f128 == 0) {
    UVar2 = GetTickCount64();
    if (UVar2 < DAT_180c6f130) {
      return 0;
    }
    iVar1 = FUN_1805f68d0(&DAT_1808feeb0);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1808feefc == 0x7fffffff) {
      DAT_1808feefc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c6f128 == 0) && (DAT_180c6f130 <= UVar2)) {
      DAT_180c6f128 = FUN_1804174b0("CPlayer_MovementServices",0x468f90f2);
      if (DAT_180c6f128 == 0) {
        DAT_180c6f130 = UVar2 + 1000;
      }
      else {
        DAT_180c6f130 = 0xffffffffffffffff;
      }
    }
    iVar1 = DAT_180c6f128;
    FUN_1805f68fc(&DAT_1808feeb0);
  }
  return iVar1;
}



