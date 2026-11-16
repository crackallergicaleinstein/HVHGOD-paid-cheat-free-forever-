// FUN_1800c0300 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800c0300 */

void FUN_1800c0300(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *local_18;
  undefined8 local_10;
  
  FUN_180113930(param_1 + 0x20,"enabled",7);
  puVar1 = param_2 + 2;
  if ((undefined8 *)(param_1 + 0x40) != param_2) {
    puVar2 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      puVar2 = (undefined8 *)*param_2;
    }
    FUN_180113930((undefined8 *)(param_1 + 0x40),puVar2,*puVar1);
  }
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  local_10 = *puVar1;
  local_18 = param_2;
  FUN_1800beb30(param_1 + 0x68,&local_18);
  return;
}



