// FUN_18015ba30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18015ba30 */

void FUN_18015ba30(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (0x7fffffffffffffff < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_18015bb70();
  }
  if (param_3 < 0x10) {
    param_1[2] = param_3;
    param_1[3] = 0xf;
    FUN_18063aed0();
    *(undefined1 *)(param_3 + (longlong)param_1) = 0;
    return;
  }
  uVar1 = param_3 | 0xf;
  uVar3 = 0x7fffffffffffffff;
  if ((uVar1 < 0x8000000000000000) && (uVar3 = uVar1, uVar1 < 0x16)) {
    uVar3 = 0x16;
  }
  lVar2 = FUN_18015bca0(uVar3 + 1);
  *param_1 = lVar2;
  param_1[2] = param_3;
  param_1[3] = uVar3;
  FUN_18063aed0(lVar2,param_2,param_3);
  *(undefined1 *)(param_3 + lVar2) = 0;
  return;
}



