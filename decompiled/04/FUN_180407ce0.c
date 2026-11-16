// FUN_180407ce0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180407ce0 */

int FUN_180407ce0(void)

{
  int iVar1;
  ULONGLONG UVar2;
  
  iVar1 = DAT_180c7d214;
  if (DAT_180c7d214 == 0) {
    UVar2 = GetTickCount64();
    if (UVar2 < DAT_180c7d218) {
      return 0;
    }
    iVar1 = FUN_1805f68d0(&DAT_1809bebb0);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1809bebfc == 0x7fffffff) {
      DAT_1809bebfc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c7d214 == 0) && (DAT_180c7d218 <= UVar2)) {
      DAT_180c7d214 = FUN_1804174b0("C_BaseEntity",0x6cc4285c);
      if (DAT_180c7d214 == 0) {
        DAT_180c7d218 = UVar2 + 1000;
      }
      else {
        DAT_180c7d218 = 0xffffffffffffffff;
      }
    }
    iVar1 = DAT_180c7d214;
    FUN_1805f68fc(&DAT_1809bebb0);
  }
  return iVar1;
}



