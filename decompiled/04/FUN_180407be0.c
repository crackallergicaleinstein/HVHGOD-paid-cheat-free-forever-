// FUN_180407be0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180407be0 */

int FUN_180407be0(void)

{
  int iVar1;
  ULONGLONG UVar2;
  
  iVar1 = DAT_180c7d210;
  if (DAT_180c7d210 == 0) {
    UVar2 = GetTickCount64();
    if (UVar2 < DAT_180c7d208) {
      return 0;
    }
    iVar1 = FUN_1805f68d0(&DAT_1809beb60);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1809bebac == 0x7fffffff) {
      DAT_1809bebac = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c7d210 == 0) && (DAT_180c7d208 <= UVar2)) {
      DAT_180c7d210 = FUN_1804174b0("C_BaseEntity",0x144f0737);
      if (DAT_180c7d210 == 0) {
        DAT_180c7d208 = UVar2 + 1000;
      }
      else {
        DAT_180c7d208 = 0xffffffffffffffff;
      }
    }
    iVar1 = DAT_180c7d210;
    FUN_1805f68fc(&DAT_1809beb60);
  }
  return iVar1;
}



