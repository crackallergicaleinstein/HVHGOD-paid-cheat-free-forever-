// FUN_180141490 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180141490 */

undefined8 *
FUN_180141490(undefined8 *param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  
  uVar2 = param_1[2];
  if (uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_180141470();
  }
  if (param_1[3] - uVar2 < param_4) {
    puVar3 = (undefined8 *)FUN_18014ff00(param_1,param_4,uVar2,param_2,param_3,param_4);
    return puVar3;
  }
  param_1[2] = uVar2 + param_4;
  puVar3 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar3 = (undefined8 *)*param_1;
  }
  uVar1 = (longlong)puVar3 + param_2;
  if ((uVar1 < param_3 + param_4) && (param_3 <= uVar2 + (longlong)puVar3)) {
    if (param_3 < uVar1) {
      uVar4 = uVar1 - param_3;
    }
    else {
      uVar4 = 0;
    }
  }
  else {
    uVar4 = param_4;
  }
  FUN_18063aed0(uVar1 + param_4,uVar1,(uVar2 - param_2) + 1);
  FUN_18063aed0(uVar1,param_3,uVar4);
  FUN_18063aed0(uVar4 + uVar1,uVar4 + param_3 + param_4,param_4 - uVar4);
  return param_1;
}



