// FUN_1800a9120 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800a9120 */

bool FUN_1800a9120(longlong param_1)

{
  bool bVar1;
  undefined8 local_18;
  undefined **local_10;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    bVar1 = false;
  }
  else {
    local_18 = 0;
    local_10 = &PTR_vftable_1808d7db8;
    FUN_1800a81d0(param_1,&local_18);
    bVar1 = (int)local_18 == 0;
  }
  return bVar1;
}



