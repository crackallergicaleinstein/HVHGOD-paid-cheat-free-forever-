// FUN_1801a6320 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801a6320 */

undefined1 (*) [16]
FUN_1801a6320(undefined1 (*param_1) [16],undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  
  uVar5 = 0xffffffffffffffff;
  do {
    uVar5 = uVar5 + 1;
  } while (*(short *)((longlong)param_2 + uVar5 * 2) != 0);
  lVar1 = param_3[2];
  if ((ulonglong)(param_3[3] - lVar1) < uVar5) {
    param_3 = (undefined8 *)FUN_1801b70a0(param_3,uVar5,lVar1,param_4,param_2,uVar5);
  }
  else {
    param_3[2] = lVar1 + uVar5;
    puVar6 = param_3;
    if (7 < (ulonglong)param_3[3]) {
      puVar6 = (undefined8 *)*param_3;
    }
    if ((puVar6 < (undefined8 *)((longlong)param_2 + uVar5 * 2)) &&
       (param_2 <= (undefined8 *)((longlong)puVar6 + lVar1 * 2))) {
      if (param_2 < puVar6) {
        uVar7 = (longlong)puVar6 - (longlong)param_2 >> 1;
      }
      else {
        uVar7 = 0;
      }
    }
    else {
      uVar7 = uVar5;
    }
    FUN_18063aed0((undefined2 *)((longlong)puVar6 + uVar5 * 2),puVar6,lVar1 * 2 + 2);
    FUN_18063aed0(puVar6,param_2,uVar7 * 2);
    FUN_18063aed0((undefined2 *)(uVar7 * 2 + (longlong)puVar6),
                  (undefined2 *)((longlong)param_2 + (uVar7 + uVar5) * 2),(uVar5 - uVar7) * 2);
  }
  *param_1 = (undefined1  [16])0x0;
  *(undefined8 *)param_1[1] = 0;
  *(undefined8 *)(param_1[1] + 8) = 0;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  *(undefined8 *)*param_1 = *param_3;
  *(undefined8 *)(*param_1 + 8) = uVar2;
  *(undefined8 *)param_1[1] = uVar3;
  *(undefined8 *)(param_1[1] + 8) = uVar4;
  *(undefined2 *)param_3 = 0;
  param_3[2] = 0;
  param_3[3] = 7;
  return param_1;
}



