// FUN_18026b670 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18026b670 */

void FUN_18026b670(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  if (param_1 != param_2) {
    puVar2 = param_1 + 2;
    do {
      param_2 = param_2 + -4;
      puVar1 = puVar2 + -2;
      if (puVar1 == param_2) {
        return;
      }
      local_28 = *puVar1;
      local_18 = *puVar2;
      local_10 = puVar2[1];
      local_20 = puVar2[-1];
      puVar2[1] = 0;
      *puVar2 = 0;
      puVar2[-1] = 0;
      FUN_1802668f0(puVar1,param_2);
      FUN_1802668f0(param_2,&local_28);
      FUN_180159650(&local_20);
      puVar1 = puVar2 + 2;
      puVar2 = puVar2 + 4;
    } while (puVar1 != param_2);
  }
  return;
}



