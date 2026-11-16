// FUN_1801bd710 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801bd710 */

undefined1 (*) [16] FUN_1801bd710(undefined1 (*param_1) [16],longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  *param_1 = (undefined1  [16])0x0;
  *(undefined8 *)param_1[1] = 0;
  *(undefined8 *)(param_1[1] + 8) = 0;
  if (param_2 == param_3) {
    *(undefined8 *)(param_1[1] + 8) = 7;
    *(undefined2 *)*param_1 = 0;
    return param_1;
  }
  uVar4 = param_3 - param_2 >> 1;
  if (0x7ffffffffffffffe < uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_18015bb70();
  }
  if (uVar4 < 8) {
    *(ulonglong *)param_1[1] = uVar4;
    *(undefined8 *)(param_1[1] + 8) = 7;
    FUN_18063aed0(0,param_2,uVar4 * 2);
    *(undefined2 *)(*param_1 + uVar4 * 2) = 0;
    return param_1;
  }
  uVar1 = uVar4 | 7;
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
  *(ulonglong *)param_1[1] = uVar4;
  *(longlong *)*param_1 = lVar2;
  *(ulonglong *)(param_1[1] + 8) = uVar1;
  FUN_18063aed0(lVar2,param_2,uVar4 * 2);
  *(undefined2 *)(uVar4 * 2 + lVar2) = 0;
  return param_1;
}



