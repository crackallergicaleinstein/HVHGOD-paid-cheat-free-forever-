// FUN_18015ac20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18015ac20 */

undefined8 * FUN_18015ac20(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar1 = (undefined8 *)*param_1;
  }
  *param_2 = puVar1;
  param_2[1] = param_1[2];
  return param_2;
}



