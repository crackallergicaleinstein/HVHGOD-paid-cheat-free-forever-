// FUN_180648738 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180648738 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_180648738(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x30) + 8);
  (**(code **)(*plVar1 + 8))(plVar1,CONCAT71((int7)((ulonglong)(plVar1 + 2) >> 8),1),0,0,plVar1 + 2)
  ;
  return 0;
}



