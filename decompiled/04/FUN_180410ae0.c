// FUN_180410ae0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180410ae0 */

int FUN_180410ae0(void)

{
  int iVar1;
  ULONGLONG UVar2;
  
  iVar1 = DAT_180c7caf4;
  if (DAT_180c7caf4 == 0) {
    UVar2 = GetTickCount64();
    if (UVar2 < DAT_180c7caf8) {
      return 0;
    }
    iVar1 = FUN_1805f68d0(&DAT_1809bbfa0);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1809bbfec == 0x7fffffff) {
      DAT_1809bbfec = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c7caf4 == 0) && (DAT_180c7caf8 <= UVar2)) {
      DAT_180c7caf4 = FUN_1804174b0("CPlayer_MovementServices_Humanoid",0x6d8d7d9d);
      if (DAT_180c7caf4 == 0) {
        DAT_180c7caf8 = UVar2 + 1000;
      }
      else {
        DAT_180c7caf8 = 0xffffffffffffffff;
      }
    }
    iVar1 = DAT_180c7caf4;
    FUN_1805f68fc(&DAT_1809bbfa0);
  }
  return iVar1;
}



