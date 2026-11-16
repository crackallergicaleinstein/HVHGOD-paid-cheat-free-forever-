// FUN_18034e750 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18034e750 */

longlong * FUN_18034e750(longlong *param_1,longlong param_2,longlong param_3)

{
  for (; (param_2 != param_3 &&
         (((*(char *)(param_2 + 0x14) == '\0' || (*(char *)(param_2 + 0x15) != '\0')) ||
          (*(int *)(param_2 + 0xc4) < 1)))); param_2 = param_2 + 0xe8) {
  }
  *param_1 = param_2;
  return param_1;
}



