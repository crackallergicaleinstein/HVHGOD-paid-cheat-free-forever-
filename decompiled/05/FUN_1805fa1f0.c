// FUN_1805fa1f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805fa1f0 */

void FUN_1805fa1f0(ulonglong *param_1)

{
  ulonglong uVar1;
  
  uVar1 = _Xtime_get_ticks();
  *param_1 = uVar1 / 10000000;
  *(int *)(param_1 + 1) = ((int)uVar1 + (int)(uVar1 / 10000000) * -10000000) * 100;
  return;
}



