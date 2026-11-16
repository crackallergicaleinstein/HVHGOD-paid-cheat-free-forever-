// FUN_180163ae0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180163ae0 */

undefined8 *
FUN_180163ae0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar2 = (longlong)(param_2[2] - param_2[1]) >> 3;
  if (uVar2 != 0) {
    if (0x1fffffffffffffff < uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_1801136f0();
    }
    puVar4 = param_1;
    lVar1 = FUN_18015bca0(uVar2 * 8);
    param_1[1] = lVar1;
    param_1[2] = lVar1;
    param_1[3] = lVar1 + uVar2 * 8;
    lVar1 = param_1[1];
    lVar3 = param_2[2] - param_2[1];
    FUN_18063aed0(lVar1,param_2[1],lVar3,param_4,puVar4);
    param_1[2] = lVar1 + (lVar3 >> 3) * 8;
  }
  return param_1;
}



