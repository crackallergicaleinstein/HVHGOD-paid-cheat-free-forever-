// FUN_18055e940 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18055e940 */

longlong * FUN_18055e940(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  lVar2 = *param_2;
  lVar4 = param_2[1] - lVar2;
  *param_1 = 0;
  param_1[1] = 0;
  uVar5 = lVar4 >> 3;
  param_1[2] = 0;
  if (uVar5 != 0) {
    if (0x1fffffffffffffff < uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_1801136f0();
    }
    lVar1 = uVar5 * 8;
    lVar3 = FUN_18015bca0(lVar1);
    *param_1 = lVar3;
    param_1[1] = lVar3;
    param_1[2] = lVar1 + lVar3;
    FUN_18063aed0(lVar3,lVar2,lVar4);
    param_1[1] = lVar1 + lVar3;
  }
  return param_1;
}



