// FUN_180156de0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180156de0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

ulonglong FUN_180156de0(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  undefined1 local_18 [8];
  longlong *local_10;
  
  local_10 = *(longlong **)(*(longlong *)(param_1 + 0x40) + 8);
  (**(code **)(*local_10 + 8))();
  plVar1 = (longlong *)FUN_1801593f0(local_18);
  uVar2 = (**(code **)(*plVar1 + 0x40))(plVar1,param_2);
  if (local_10 != (longlong *)0x0) {
    puVar3 = (undefined8 *)(**(code **)(*local_10 + 0x10))();
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
    uVar2 = uVar2 & 0xff;
  }
  return uVar2;
}



