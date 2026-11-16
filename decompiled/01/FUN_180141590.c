// FUN_180141590 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180141590 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

longlong FUN_180141590(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 local_18 [8];
  longlong *local_10;
  
  if (*(longlong *)(param_1 + 0x80) == 0) {
    lVar1 = FUN_1805fc250(param_2,param_3,0x40);
    if (lVar1 != 0) {
      FUN_180113ca0(param_1,lVar1,1);
      local_10 = *(longlong **)(*(longlong *)(param_1 + 0x60) + 8);
      (**(code **)(*local_10 + 8))();
      uVar2 = FUN_18010fba0(local_18);
      FUN_180113b10(param_1,uVar2);
      if (local_10 != (longlong *)0x0) {
        puVar3 = (undefined8 *)(**(code **)(*local_10 + 0x10))();
        if (puVar3 != (undefined8 *)0x0) {
          (**(code **)*puVar3)(puVar3,1);
        }
      }
      return param_1;
    }
  }
  return 0;
}



