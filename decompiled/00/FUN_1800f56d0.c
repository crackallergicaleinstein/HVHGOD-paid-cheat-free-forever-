// FUN_1800f56d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800f56d0 */

longlong * FUN_1800f56d0(undefined8 *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar1 = (undefined8 *)*param_1;
  }
  *param_2 = param_1[2] + (longlong)puVar1;
  return param_2;
}



