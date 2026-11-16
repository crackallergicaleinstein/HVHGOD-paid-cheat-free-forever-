// FUN_1800f5370 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800f5370 */

undefined1 (*) [16] FUN_1800f5370(undefined1 (*param_1) [16],undefined8 *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  *param_1 = (undefined1  [16])0x0;
  *(undefined8 *)param_1[1] = 0;
  *(undefined8 *)(param_1[1] + 8) = 0;
  uVar1 = param_2[2];
  if (7 < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  if (0x7ffffffffffffffe < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_18015bb70();
  }
  if (uVar1 < 8) {
    *(ulonglong *)param_1[1] = uVar1;
    *(undefined8 *)(param_1[1] + 8) = 7;
    uVar3 = param_2[1];
    *(undefined8 *)*param_1 = *param_2;
    *(undefined8 *)(*param_1 + 8) = uVar3;
    return param_1;
  }
  uVar2 = uVar1 | 7;
  if (uVar2 < 0x7fffffffffffffff) {
    if (uVar2 < 10) {
      uVar2 = 10;
    }
    uVar4 = uVar2 + 1;
    if (0x7fffffffffffffff < uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
  }
  else {
    uVar4 = 0x7fffffffffffffff;
    uVar2 = 0x7ffffffffffffffe;
  }
  uVar3 = FUN_18015bca0(uVar4 * 2);
  *(undefined8 *)*param_1 = uVar3;
  *(ulonglong *)param_1[1] = uVar1;
  *(ulonglong *)(param_1[1] + 8) = uVar2;
  FUN_18063aed0(uVar3,param_2,uVar1 * 2 + 2);
  return param_1;
}



