// FUN_180221b40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180221b40 */

uint FUN_180221b40(undefined8 param_1,short param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = FUN_1805f68d0(&DAT_180cc9e50);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_180cc9e9c == 0x7fffffff) {
    DAT_180cc9e9c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  uVar4 = 0;
  lVar1 = DAT_180cc9fe8;
  if (DAT_180cca114 != '\0') {
    for (; lVar1 != DAT_180cc9ff0; lVar1 = lVar1 + 0x128) {
      if ((*(short *)(lVar1 + 0x10) == param_2) &&
         ((param_3 < 0 || (*(int *)(lVar1 + 0x18) == param_3)))) {
        if (*(int *)(lVar1 + 0x108) == 2) {
          uVar3 = 1;
        }
        else {
          uVar3 = 0;
          if (*(int *)(lVar1 + 0x108) == 3) {
            uVar3 = 2;
          }
        }
        uVar4 = uVar4 | uVar3;
      }
    }
  }
  FUN_1805f68fc(&DAT_180cc9e50);
  return uVar4;
}



