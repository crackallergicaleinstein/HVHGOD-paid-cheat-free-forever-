// FUN_1800f6670 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800f6670 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1800f6670(longlong *param_1)

{
  longlong *plVar1;
  
  FUN_18015c010(param_1 + 0x13);
  FUN_180113710(param_1 + 0x10);
  plVar1 = (longlong *)param_1[7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1);
    param_1[7] = 0;
  }
  return;
}



