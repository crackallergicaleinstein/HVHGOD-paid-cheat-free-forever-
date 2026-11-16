// FUN_18015e9b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18015e9b0 */

void FUN_18015e9b0(undefined8 *param_1,undefined8 param_2,int param_3)

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



