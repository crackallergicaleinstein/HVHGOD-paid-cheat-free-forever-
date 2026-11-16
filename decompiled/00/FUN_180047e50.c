// FUN_180047e50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180047e50 */

void Unwind_180047e50(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x1f0);
  if (lVar1 != *(longlong *)(param_2 + 0x1f8)) {
    FUN_18063ab10(lVar1,0,*(longlong *)(param_2 + 0x1f8) - lVar1);
  }
  lVar1 = *(longlong *)(param_2 + 0x210);
  if (lVar1 != *(longlong *)(param_2 + 0x218)) {
    FUN_18063ab10(lVar1,0,*(longlong *)(param_2 + 0x218) - lVar1);
  }
  thunk_FUN_180113710(param_2 + 0x1f0);
  thunk_FUN_180113710(param_2 + 0x210);
  return;
}



