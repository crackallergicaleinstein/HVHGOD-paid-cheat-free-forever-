// FUN_180514210 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180514210 */

undefined4 *
FUN_180514210(undefined4 *param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  uVar2 = *(longlong *)(param_2 + 4) - *(longlong *)(param_2 + 2) >> 3;
  if (uVar2 != 0) {
    if (0x1fffffffffffffff < uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_1801136f0();
    }
    puVar4 = param_1;
    lVar1 = FUN_18015bca0(uVar2 * 8);
    *(longlong *)(param_1 + 2) = lVar1;
    *(longlong *)(param_1 + 4) = lVar1;
    *(ulonglong *)(param_1 + 6) = lVar1 + uVar2 * 8;
    lVar1 = *(longlong *)(param_1 + 2);
    lVar3 = *(longlong *)(param_2 + 4) - *(longlong *)(param_2 + 2);
    FUN_18063aed0(lVar1,*(longlong *)(param_2 + 2),lVar3,param_4,puVar4);
    *(longlong *)(param_1 + 4) = lVar1 + (lVar3 >> 3) * 8;
  }
  return param_1;
}



