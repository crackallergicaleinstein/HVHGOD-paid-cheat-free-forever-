// FUN_1800a7ff0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800a7ff0 */

undefined8 * FUN_1800a7ff0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_2 + 2;
    if (7 < (ulonglong)param_2[3]) {
      param_2 = (undefined8 *)*param_2;
    }
    FUN_1800f5190(param_1,param_2,*puVar1);
  }
  return param_1;
}



