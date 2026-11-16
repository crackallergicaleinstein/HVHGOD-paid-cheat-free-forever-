// FUN_18015ea00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18015ea00 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_18015ea00(longlong *param_1)

{
  longlong *plVar1;
  
  FUN_18015c010(param_1 + 0x13);
  FUN_180113710(param_1 + 0x10);
  FUN_18015c3e0(param_1 + 9);
  plVar1 = (longlong *)param_1[7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1);
    param_1[7] = 0;
  }
  return;
}



