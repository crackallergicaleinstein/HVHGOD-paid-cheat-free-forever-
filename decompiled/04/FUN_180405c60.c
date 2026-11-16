// FUN_180405c60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180405c60 */

int FUN_180405c60(void)

{
  int iVar1;
  ULONGLONG UVar2;
  
  iVar1 = DAT_180c7d3e0;
  if (DAT_180c7d3e0 == 0) {
    UVar2 = GetTickCount64();
    if (UVar2 < DAT_180c7d3d8) {
      return 0;
    }
    iVar1 = FUN_1805f68d0(&DAT_1809bf6a0);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1809bf6ec == 0x7fffffff) {
      DAT_1809bf6ec = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c7d3e0 == 0) && (DAT_180c7d3d8 <= UVar2)) {
      DAT_180c7d3e0 = FUN_1804174b0("C_BaseModelEntity",0xae8e690f);
      if (DAT_180c7d3e0 == 0) {
        DAT_180c7d3d8 = UVar2 + 1000;
      }
      else {
        DAT_180c7d3d8 = 0xffffffffffffffff;
      }
    }
    iVar1 = DAT_180c7d3e0;
    FUN_1805f68fc(&DAT_1809bf6a0);
  }
  return iVar1;
}



