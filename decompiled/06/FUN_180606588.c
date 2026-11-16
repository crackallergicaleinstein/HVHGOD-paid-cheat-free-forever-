// FUN_180606588 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180606588 */

undefined8 FUN_180606588(undefined8 *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  piVar1 = (int *)*param_1;
  if ((*piVar1 == -0x1fbcbcae) || (*piVar1 == -0x1fbcb0b3)) {
    lVar3 = FUN_180606ee8();
    if (0 < *(int *)(lVar3 + 0x30)) {
      lVar3 = FUN_180606ee8();
      *(int *)(lVar3 + 0x30) = *(int *)(lVar3 + 0x30) + -1;
    }
  }
  else if (*piVar1 == -0x1f928c9d) {
    lVar3 = FUN_180606ee8();
    *(int **)(lVar3 + 0x20) = piVar1;
    uVar2 = param_1[1];
    lVar3 = FUN_180606ee8();
    *(undefined8 *)(lVar3 + 0x28) = uVar2;
                    /* WARNING: Subroutine does not return */
    FUN_18060ab3c();
  }
  return 0;
}



