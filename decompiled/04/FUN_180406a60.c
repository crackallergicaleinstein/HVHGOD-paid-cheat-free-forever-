// FUN_180406a60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180406a60 */

int FUN_180406a60(void)

{
  int iVar1;
  ULONGLONG UVar2;
  
  iVar1 = DAT_180c7d314;
  if (DAT_180c7d314 == 0) {
    UVar2 = GetTickCount64();
    if (UVar2 < DAT_180c7d318) {
      return 0;
    }
    iVar1 = FUN_1805f68d0(&DAT_1809bf1a0);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1809bf1ec == 0x7fffffff) {
      DAT_1809bf1ec = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c7d314 == 0) && (DAT_180c7d318 <= UVar2)) {
      DAT_180c7d314 = FUN_1804174b0("CPlayer_MovementServices",0x806c78a9);
      if (DAT_180c7d314 == 0) {
        DAT_180c7d318 = UVar2 + 1000;
      }
      else {
        DAT_180c7d318 = 0xffffffffffffffff;
      }
    }
    iVar1 = DAT_180c7d314;
    FUN_1805f68fc(&DAT_1809bf1a0);
  }
  return iVar1;
}



