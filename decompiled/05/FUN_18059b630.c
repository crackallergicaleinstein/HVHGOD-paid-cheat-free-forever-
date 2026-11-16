// FUN_18059b630 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18059b630 */

ulonglong FUN_18059b630(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined1 local_res18 [16];
  undefined1 local_18 [16];
  
  local_res18[0] = 0;
  uVar2 = FUN_18059b690(param_1,param_2,local_18,local_res18);
  if (((int)uVar2 == 0) &&
     (plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xd0) + 0x50),
     plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 8))(plVar1[1],local_18);
    uVar2 = uVar2 & 0xffffffff;
  }
  return uVar2;
}



