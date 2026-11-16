// FUN_180453ce0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180453ce0 */

undefined4 FUN_180453ce0(short *param_1)

{
  if (((param_1 == (short *)0x0) || (*param_1 != 0x5a4d)) ||
     (*(int *)((longlong)*(int *)(param_1 + 0x1e) + (longlong)param_1) != 0x4550)) {
    return 0;
  }
  return *(undefined4 *)((longlong)*(int *)(param_1 + 0x1e) + 0x50 + (longlong)param_1);
}



