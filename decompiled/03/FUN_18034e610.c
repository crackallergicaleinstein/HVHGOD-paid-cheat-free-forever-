// FUN_18034e610 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18034e610 */

undefined1 FUN_18034e610(int *param_1,int *param_2)

{
  while( true ) {
    if (param_1 == param_2) {
      return 0;
    }
    if ((*param_1 == 0) && ((char)param_1[5] != '\0')) break;
    param_1 = param_1 + 0x3a;
  }
  return 1;
}



