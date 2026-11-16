// FUN_18015ae30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18015ae30 */

undefined1 (*) [16] FUN_18015ae30(undefined1 (*param_1) [16],ulonglong param_2,char param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  *param_1 = (undefined1  [16])0x0;
  *(undefined8 *)param_1[1] = 0;
  *(undefined8 *)(param_1[1] + 8) = 0;
  if (0x7fffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_18015bb70();
  }
  if (param_2 < 0x10) {
    *(ulonglong *)param_1[1] = param_2;
    *(undefined8 *)(param_1[1] + 8) = 0xf;
    FUN_18063ab10(0,(int)param_3,param_2);
    (*param_1)[param_2] = 0;
    return param_1;
  }
  uVar1 = param_2 | 0xf;
  uVar3 = 0x7fffffffffffffff;
  if ((uVar1 < 0x8000000000000000) && (uVar3 = uVar1, uVar1 < 0x16)) {
    uVar3 = 0x16;
  }
  lVar2 = FUN_18015bca0(uVar3 + 1);
  *(longlong *)*param_1 = lVar2;
  *(ulonglong *)param_1[1] = param_2;
  *(ulonglong *)(param_1[1] + 8) = uVar3;
  FUN_18063ab10(lVar2,(int)param_3,param_2);
  *(undefined1 *)(lVar2 + param_2) = 0;
  return param_1;
}



