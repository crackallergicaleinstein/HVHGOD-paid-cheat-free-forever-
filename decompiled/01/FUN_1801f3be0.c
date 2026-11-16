// FUN_1801f3be0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801f3be0 */

undefined8 *
FUN_1801f3be0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,ulonglong param_4)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  bool bVar6;
  
  plVar4 = (longlong *)((DAT_180bbeaf0 & param_4) * 0x10 + DAT_180bbead8);
  puVar5 = (undefined8 *)plVar4[1];
  if (puVar5 == DAT_180bbeac8) {
    *param_2 = DAT_180bbeac8;
    param_2[1] = 0;
    return param_2;
  }
  puVar1 = (undefined8 *)*plVar4;
  while( true ) {
    plVar4 = puVar5 + 2;
    if (7 < (ulonglong)puVar5[5]) {
      plVar4 = (longlong *)*plVar4;
    }
    puVar3 = param_3;
    if (7 < (ulonglong)param_3[3]) {
      puVar3 = (undefined8 *)*param_3;
    }
    if (param_3[2] == puVar5[4]) {
      if (param_3[2] == 0) {
        bVar6 = false;
      }
      else {
        iVar2 = FUN_1801594c0(puVar3,plVar4);
        bVar6 = iVar2 != 0;
      }
    }
    else {
      bVar6 = true;
    }
    if (!bVar6) break;
    if (puVar5 == puVar1) {
      *param_2 = puVar5;
      param_2[1] = 0;
      return param_2;
    }
    puVar5 = (undefined8 *)puVar5[1];
  }
  *param_2 = *puVar5;
  param_2[1] = puVar5;
  return param_2;
}



