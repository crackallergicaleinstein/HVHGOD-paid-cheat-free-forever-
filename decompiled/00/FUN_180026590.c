// FUN_180026590 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180026590 */

void Unwind_180026590(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  thunk_FUN_180113710(param_2 + 0x1f0);
  lVar1 = *(longlong *)(param_2 + 0x1d0);
  if (lVar1 != *(longlong *)(param_2 + 0x1d8)) {
    FUN_18063ab10(lVar1,0,*(longlong *)(param_2 + 0x1d8) - lVar1);
  }
  return;
}



