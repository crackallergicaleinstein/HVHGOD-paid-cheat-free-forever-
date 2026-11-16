// FUN_18040a9e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18040a9e0 */

int FUN_18040a9e0(void)

{
  int iVar1;
  ULONGLONG UVar2;
  
  iVar1 = DAT_180c7cfd0;
  if (DAT_180c7cfd0 == 0) {
    UVar2 = GetTickCount64();
    if (UVar2 < DAT_180c7cfc8) {
      return 0;
    }
    iVar1 = FUN_1805f68d0(&DAT_1809bdd50);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1809bdd9c == 0x7fffffff) {
      DAT_1809bdd9c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c7cfd0 == 0) && (DAT_180c7cfc8 <= UVar2)) {
      DAT_180c7cfd0 = FUN_1804174b0("C_CSWeaponBase",0x8d5552cc);
      if (DAT_180c7cfd0 == 0) {
        DAT_180c7cfc8 = UVar2 + 1000;
      }
      else {
        DAT_180c7cfc8 = 0xffffffffffffffff;
      }
    }
    iVar1 = DAT_180c7cfd0;
    FUN_1805f68fc(&DAT_1809bdd50);
  }
  return iVar1;
}



