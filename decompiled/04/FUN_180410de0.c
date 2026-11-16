// FUN_180410de0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180410de0 */

int FUN_180410de0(void)

{
  int iVar1;
  ULONGLONG UVar2;
  
  iVar1 = DAT_180c7cad8;
  if (DAT_180c7cad8 == 0) {
    UVar2 = GetTickCount64();
    if (UVar2 < DAT_180c7cad0) {
      return 0;
    }
    iVar1 = FUN_1805f68d0(&DAT_1809bbd70);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1809bbdbc == 0x7fffffff) {
      DAT_1809bbdbc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c7cad8 == 0) && (DAT_180c7cad0 <= UVar2)) {
      DAT_180c7cad8 = FUN_1804174b0("CPlayer_MovementServices_Humanoid",0x19fc0520);
      if (DAT_180c7cad8 == 0) {
        DAT_180c7cad0 = UVar2 + 1000;
      }
      else {
        DAT_180c7cad0 = 0xffffffffffffffff;
      }
    }
    iVar1 = DAT_180c7cad8;
    FUN_1805f68fc(&DAT_1809bbd70);
  }
  return iVar1;
}



