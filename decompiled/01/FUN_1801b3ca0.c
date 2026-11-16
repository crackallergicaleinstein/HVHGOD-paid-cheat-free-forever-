// FUN_1801b3ca0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801b3ca0 */

undefined8 *
FUN_1801b3ca0(undefined8 *param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
             ulonglong param_5)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 local_58;
  
  uVar3 = param_1[2];
  if (uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_180141470();
  }
  if (uVar3 - param_2 < param_3) {
    param_3 = uVar3 - param_2;
  }
  if (param_3 == param_5) {
    puVar2 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      puVar2 = (undefined8 *)*param_1;
    }
    FUN_18063aed0(param_2 + (longlong)puVar2,param_4,param_5);
    return param_1;
  }
  lVar4 = (uVar3 - param_3) - param_2;
  if (param_5 < param_3) {
    puVar2 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      puVar2 = (undefined8 *)*param_1;
    }
    lVar1 = param_2 + (longlong)puVar2;
    FUN_18063aed0(lVar1,param_4,param_5);
    FUN_18063aed0(lVar1 + param_5,lVar1 + param_3,lVar4 + 1);
    param_1[2] = (param_5 - param_3) + uVar3;
  }
  else {
    uVar5 = param_5 - param_3;
    if (param_1[3] - uVar3 < uVar5) {
      param_1 = (undefined8 *)FUN_1801b7220(param_1,uVar5,local_58,param_2,param_3,param_4,param_5);
    }
    else {
      param_1[2] = uVar3 + uVar5;
      puVar2 = param_1;
      if (0xf < (ulonglong)param_1[3]) {
        puVar2 = (undefined8 *)*param_1;
      }
      param_2 = param_2 + (longlong)puVar2;
      param_3 = param_2 + param_3;
      if ((param_2 < param_5 + param_4) && (param_4 <= (longlong)puVar2 + uVar3)) {
        if (param_4 < param_3) {
          uVar3 = param_3 - param_4;
        }
        else {
          uVar3 = 0;
        }
      }
      else {
        uVar3 = param_5;
      }
      FUN_18063aed0(param_3 + uVar5,param_3,lVar4 + 1);
      FUN_18063aed0(param_2,param_4,uVar3);
      FUN_18063aed0(uVar3 + param_2,param_4 + uVar3 + uVar5,param_5 - uVar3);
    }
  }
  return param_1;
}



