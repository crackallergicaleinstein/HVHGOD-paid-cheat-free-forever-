// FUN_1806360c8 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806360c8 */

void FUN_1806360c8(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_4 + 0x38);
  FUN_1805f63bc(param_2,param_4,lVar1 + 4);
  if ((*(uint *)(lVar1 + 4) & ((*(uint *)(param_1 + 4) & 0x66) != 0) + 1) != 0) {
    FUN_1806063f8(param_1,param_2,param_3,param_4);
  }
  return;
}



