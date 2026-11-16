// FUN_1801aceb0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801aceb0 */

undefined1 FUN_1801aceb0(undefined1 *param_1,undefined1 param_2)

{
  undefined1 uVar1;
  
  LOCK();
  uVar1 = *param_1;
  *param_1 = param_2;
  UNLOCK();
  return uVar1;
}



