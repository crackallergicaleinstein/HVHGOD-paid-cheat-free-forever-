// FUN_180159fa0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180159fa0 */

void FUN_180159fa0(longlong param_1)

{
  LOCK();
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  UNLOCK();
  return;
}



