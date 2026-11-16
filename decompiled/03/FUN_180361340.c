// FUN_180361340 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180361340 */

void FUN_180361340(undefined8 *param_1,longlong param_2,undefined8 *param_3,longlong param_4,
                  longlong param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
joined_r0x00018036135e:
  if (param_5 <= param_4) {
    FUN_18063aed0(param_3,param_1,param_2 - (longlong)param_1);
    return;
  }
  param_5 = param_5 - param_4;
  puVar3 = (undefined8 *)((longlong)param_1 + param_4 * 0xc);
  lVar6 = param_4;
  if (param_5 < param_4) {
    lVar6 = param_5;
  }
  param_5 = param_5 - lVar6;
  puVar4 = (undefined8 *)((longlong)puVar3 + lVar6 * 0xc);
  puVar5 = puVar3;
  do {
    puVar1 = (undefined8 *)((longlong)param_3 + 0xc);
    if (*(float *)((longlong)param_1 + 4) <= *(float *)((longlong)puVar5 + 4)) {
      *param_3 = *param_1;
      puVar2 = param_1 + 1;
      param_1 = (undefined8 *)((longlong)param_1 + 0xc);
      *(undefined4 *)(param_3 + 1) = *(undefined4 *)puVar2;
      if (param_1 == puVar3) {
        lVar6 = (longlong)puVar4 - (longlong)puVar5;
        goto LAB_1803613f5;
      }
    }
    else {
      *param_3 = *puVar5;
      puVar2 = puVar5 + 1;
      puVar5 = (undefined8 *)((longlong)puVar5 + 0xc);
      *(undefined4 *)(param_3 + 1) = *(undefined4 *)puVar2;
      if (puVar5 == puVar4) break;
    }
    param_3 = puVar1;
  } while( true );
  lVar6 = (longlong)puVar3 - (longlong)param_1;
  puVar5 = param_1;
LAB_1803613f5:
  FUN_18063aed0(puVar1,puVar5,lVar6);
  param_3 = (undefined8 *)(lVar6 + (longlong)puVar1);
  param_1 = puVar4;
  goto joined_r0x00018036135e;
}



