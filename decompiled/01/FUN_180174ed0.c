// FUN_180174ed0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180174ed0 */

undefined4 FUN_180174ed0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  LOCK();
  uVar1 = *param_1;
  *param_1 = param_2;
  UNLOCK();
  return uVar1;
}



