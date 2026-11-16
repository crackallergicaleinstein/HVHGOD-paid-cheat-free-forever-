// FUN_18017cd90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18017cd90 */

undefined8 * FUN_18017cd90(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  
  piVar1 = (int *)*param_2;
  *param_1 = piVar1;
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  return param_1;
}



