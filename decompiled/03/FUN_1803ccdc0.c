// FUN_1803ccdc0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803ccdc0 */

undefined4 * FUN_1803ccdc0(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  if ((*(char *)*param_1 == '\0') || (*(char *)(param_1[1] + 8) == '\0')) {
    *(undefined1 *)(param_2 + 1) = 0;
    return param_2;
  }
  *param_2 = *param_3;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



