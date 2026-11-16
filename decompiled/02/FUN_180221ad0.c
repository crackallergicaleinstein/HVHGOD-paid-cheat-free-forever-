// FUN_180221ad0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180221ad0 */

undefined1 FUN_180221ad0(void)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = FUN_1805f68d0(&DAT_180cc9e50);
  uVar1 = DAT_180cca114;
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_180cc9e9c == 0x7fffffff) {
    DAT_180cc9e9c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  FUN_1805f68fc(&DAT_180cc9e50);
  return uVar1;
}



