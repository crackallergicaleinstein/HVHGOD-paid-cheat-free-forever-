// FUN_180038160 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180038160 */

void Unwind_180038160(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x1c0);
  if (lVar1 != *(longlong *)(param_2 + 0x1c8)) {
    FUN_18063ab10(lVar1,0,*(longlong *)(param_2 + 0x1c8) - lVar1);
  }
  lVar1 = *(longlong *)(param_2 + 0x2b0);
  if (lVar1 != *(longlong *)(param_2 + 0x2b8)) {
    FUN_18063ab10(lVar1,0,*(longlong *)(param_2 + 0x2b8) - lVar1);
  }
  thunk_FUN_180113710(param_2 + 0x1c0);
  thunk_FUN_180113710(param_2 + 0x2b0);
  return;
}



