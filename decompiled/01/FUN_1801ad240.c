// FUN_1801ad240 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801ad240 */

void FUN_1801ad240(undefined4 *param_1,undefined4 param_2,int param_3)

{
  if ((param_3 == 0) || (param_3 == 3)) {
    *param_1 = param_2;
    return;
  }
  LOCK();
  *param_1 = param_2;
  UNLOCK();
  return;
}



