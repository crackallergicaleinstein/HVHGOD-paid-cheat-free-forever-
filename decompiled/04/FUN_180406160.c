// FUN_180406160 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180406160 */

int FUN_180406160(void)

{
  int iVar1;
  ULONGLONG UVar2;
  
  iVar1 = DAT_180c7d364;
  if (DAT_180c7d364 == 0) {
    UVar2 = GetTickCount64();
    if (UVar2 < DAT_180c7d368) {
      return 0;
    }
    iVar1 = FUN_1805f68d0(&DAT_1809bf3d0);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1809bf41c == 0x7fffffff) {
      DAT_1809bf41c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c7d364 == 0) && (DAT_180c7d368 <= UVar2)) {
      DAT_180c7d364 = FUN_1804174b0("C_BaseModelEntity",0xd6ed67c5);
      if (DAT_180c7d364 == 0) {
        DAT_180c7d368 = UVar2 + 1000;
      }
      else {
        DAT_180c7d368 = 0xffffffffffffffff;
      }
    }
    iVar1 = DAT_180c7d364;
    FUN_1805f68fc(&DAT_1809bf3d0);
  }
  return iVar1;
}



