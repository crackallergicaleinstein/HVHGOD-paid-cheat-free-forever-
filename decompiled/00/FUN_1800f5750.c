// FUN_1800f5750 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800f5750 */

undefined8 * FUN_1800f5750(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_2 + 2;
    if (0xf < (ulonglong)param_2[3]) {
      param_2 = (undefined8 *)*param_2;
    }
    FUN_180113930(param_1,param_2,*puVar1);
  }
  return param_1;
}



