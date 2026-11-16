// FUN_180195ab0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180195ab0 */

undefined8 * FUN_180195ab0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  if (param_1 != param_2) {
    puVar1 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      puVar1 = (undefined8 *)*param_2;
    }
    FUN_180113930(param_1,puVar1,param_2[2]);
  }
  plVar2 = param_2 + 4;
  if (param_1 + 4 != plVar2) {
    if (0xf < (ulonglong)param_2[7]) {
      plVar2 = (longlong *)*plVar2;
    }
    FUN_180113930(param_1 + 4,plVar2,param_2[6]);
  }
  param_1[8] = param_2[8];
  return param_1;
}



