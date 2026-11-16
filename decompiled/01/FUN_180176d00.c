// FUN_180176d00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180176d00 */

void FUN_180176d00(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1[2] + -1;
  param_1[2] = lVar1;
  if ((ulonglong)param_1[3] < 0x10) {
    *(undefined1 *)((longlong)param_1 + lVar1) = 0;
    return;
  }
  *(undefined1 *)(*param_1 + lVar1) = 0;
  return;
}



