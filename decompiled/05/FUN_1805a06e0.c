// FUN_1805a06e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805a06e0 */

void FUN_1805a06e0(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined8 local_18;
  undefined4 local_10;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xd0) + 0x50);
  if (plVar1 != (longlong *)0x0) {
    local_18 = *param_2;
    local_10 = param_3;
    (**(code **)(*plVar1 + 8))(plVar1[1],&local_18);
    return;
  }
  if (*(longlong *)(*(longlong *)(param_1 + 0x3e0) + 0x518) == 0) {
    FUN_180578860(*(undefined8 *)(*(longlong *)(param_1 + 0x3e0) + 0x4f0));
    return;
  }
  return;
}



