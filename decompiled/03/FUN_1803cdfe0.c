// FUN_1803cdfe0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803cdfe0 */

undefined4 * FUN_1803cdfe0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_2;
  if (*(char *)(param_1 + 1) == '\0') {
    *(undefined1 *)(param_1 + 1) = 1;
  }
  *param_1 = uVar1;
  return param_1;
}



