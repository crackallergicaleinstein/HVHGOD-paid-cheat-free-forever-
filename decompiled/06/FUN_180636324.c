// FUN_180636324 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180636324 */

void FUN_180636324(int *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = FUN_180606780();
  if ((((*(byte *)(param_1 + 1) & 0x66) == 0) && (*param_1 == -0x1f928c9d)) && (iVar2 == 1)) {
    lVar1 = FUN_180606ee8();
    *(int **)(lVar1 + 0x20) = param_1;
    lVar1 = FUN_180606ee8();
    *(undefined8 *)(lVar1 + 0x28) = param_3;
                    /* WARNING: Subroutine does not return */
    FUN_18060ab3c();
  }
  return;
}



