// FUN_180176650 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180176650 */

void FUN_180176650(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180178f40(param_1,lVar1,param_2);
    return;
  }
  FUN_18016c8d0(lVar1);
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x168;
  return;
}



