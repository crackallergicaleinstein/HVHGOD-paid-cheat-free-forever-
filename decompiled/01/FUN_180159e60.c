// FUN_180159e60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180159e60 */

void FUN_180159e60(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (0x7ffffffffffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_18015bb70();
  }
  if (param_3 < 8) {
    param_1[2] = param_3;
    param_1[3] = 7;
    FUN_18063aed0(param_1,param_2,param_3 * 2);
    *(undefined2 *)(param_3 * 2 + (longlong)param_1) = 0;
    return;
  }
  uVar1 = param_3 | 7;
  if (uVar1 < 0x7fffffffffffffff) {
    if (uVar1 < 10) {
      uVar1 = 10;
    }
    uVar3 = uVar1 + 1;
    if (0x7fffffffffffffff < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
  }
  else {
    uVar3 = 0x7fffffffffffffff;
    uVar1 = 0x7ffffffffffffffe;
  }
  lVar2 = FUN_18015bca0(uVar3 * 2);
  param_1[2] = param_3;
  *param_1 = lVar2;
  param_1[3] = uVar1;
  FUN_18063aed0(lVar2,param_2,param_3 * 2);
  *(undefined2 *)(param_3 * 2 + lVar2) = 0;
  return;
}



