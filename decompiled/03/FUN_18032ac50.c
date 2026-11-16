// FUN_18032ac50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18032ac50 */

int FUN_18032ac50(void)

{
  int iVar1;
  ULONGLONG UVar2;
  
  iVar1 = DAT_180c6f418;
  if (DAT_180c6f418 == 0) {
    UVar2 = GetTickCount64();
    if (UVar2 < DAT_180c6f410) {
      return 0;
    }
    iVar1 = FUN_1805f68d0(&DAT_1808ffba0);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1808ffbec == 0x7fffffff) {
      DAT_1808ffbec = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c6f418 == 0) && (DAT_180c6f410 <= UVar2)) {
      DAT_180c6f418 = FUN_1804174b0("C_BaseEntity",0x16c096cc);
      if (DAT_180c6f418 == 0) {
        DAT_180c6f410 = UVar2 + 1000;
      }
      else {
        DAT_180c6f410 = 0xffffffffffffffff;
      }
    }
    iVar1 = DAT_180c6f418;
    FUN_1805f68fc(&DAT_1808ffba0);
  }
  return iVar1;
}



