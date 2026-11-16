// FUN_1805fd2d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805fd2d0 */

void FUN_1805fd2d0(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar3 = (undefined8 *)FUN_1806065f0();
  piVar2 = (int *)*puVar3;
  if (((piVar2 != (int *)0x0) && (*piVar2 != -0x1fbcb0b3)) && (*piVar2 != -0x1fbcbcae)) {
    if (((*piVar2 == -0x1f928c9d) && (piVar2[6] == 4)) &&
       ((iVar1 = piVar2[8], iVar1 == 0x19930520 ||
        ((iVar1 + 0xe66cfadfU < 2 || (iVar1 == 0x1994000)))))) {
      FUN_1805fcd78(param_1,piVar2);
    }
    else {
      uVar4 = _malloc_base(0xb0);
      FUN_1805fcf3c(param_1,piVar2,uVar4);
    }
  }
  return;
}



