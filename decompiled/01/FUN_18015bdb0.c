// FUN_18015bdb0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18015bdb0 */

undefined1 (*) [16] FUN_18015bdb0(undefined1 (*param_1) [16],longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  *param_1 = (undefined1  [16])0x0;
  *(undefined8 *)param_1[1] = 0;
  *(undefined8 *)(param_1[1] + 8) = 0;
  if (param_2 == param_3) {
    *(undefined8 *)(param_1[1] + 8) = 0xf;
    (*param_1)[0] = 0;
    return param_1;
  }
  uVar4 = param_3 - param_2;
  if (0x7fffffffffffffff < uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_18015bb70();
  }
  if (uVar4 < 0x10) {
    *(ulonglong *)param_1[1] = uVar4;
    *(undefined8 *)(param_1[1] + 8) = 0xf;
    FUN_18063aed0(0,param_2,uVar4);
    *(undefined1 *)((longlong)param_1 + uVar4) = 0;
    return param_1;
  }
  uVar1 = uVar4 | 0xf;
  uVar3 = 0x7fffffffffffffff;
  if ((uVar1 < 0x8000000000000000) && (uVar3 = uVar1, uVar1 < 0x16)) {
    uVar3 = 0x16;
  }
  lVar2 = FUN_18015bca0(uVar3 + 1);
  *(longlong *)*param_1 = lVar2;
  *(ulonglong *)param_1[1] = uVar4;
  *(ulonglong *)(param_1[1] + 8) = uVar3;
  FUN_18063aed0(lVar2,param_2,uVar4);
  *(undefined1 *)(lVar2 + uVar4) = 0;
  return param_1;
}



