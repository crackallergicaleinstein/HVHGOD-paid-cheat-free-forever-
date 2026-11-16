// FUN_18015b360 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18015b360 */

undefined1 (*) [16] FUN_18015b360(undefined1 (*param_1) [16],undefined8 *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  *param_1 = (undefined1  [16])0x0;
  *(undefined8 *)param_1[1] = 0;
  *(undefined8 *)(param_1[1] + 8) = 0;
  uVar1 = param_2[2];
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  if (0x7fffffffffffffff < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_18015bb70();
  }
  if (uVar1 < 0x10) {
    *(ulonglong *)param_1[1] = uVar1;
    *(undefined8 *)(param_1[1] + 8) = 0xf;
    uVar3 = param_2[1];
    *(undefined8 *)*param_1 = *param_2;
    *(undefined8 *)(*param_1 + 8) = uVar3;
    return param_1;
  }
  uVar2 = uVar1 | 0xf;
  uVar4 = 0x7fffffffffffffff;
  if ((uVar2 < 0x8000000000000000) && (uVar4 = uVar2, uVar2 < 0x16)) {
    uVar4 = 0x16;
  }
  uVar3 = FUN_18015bca0(uVar4 + 1);
  *(undefined8 *)*param_1 = uVar3;
  *(ulonglong *)param_1[1] = uVar1;
  *(ulonglong *)(param_1[1] + 8) = uVar4;
  FUN_18063aed0(uVar3,param_2,uVar1 + 1);
  return param_1;
}



