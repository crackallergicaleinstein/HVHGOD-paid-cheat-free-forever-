// FUN_180176cd0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180176cd0 */

undefined8 FUN_180176cd0(undefined8 *param_1,char param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar1 = (undefined8 *)*param_1;
  }
  if ((param_1[2] == 0) || (*(char *)(param_1[2] + -1 + (longlong)puVar1) != param_2)) {
    return 0;
  }
  return 1;
}



