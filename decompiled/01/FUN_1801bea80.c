// FUN_1801bea80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801bea80 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1801bea80(longlong *param_1)

{
  longlong *plVar1;
  
  FUN_1801c6980(param_1 + 0x45a);
  FUN_1801be220(param_1 + 0x21);
  FUN_180113710(param_1 + 0x15);
  FUN_180113710(param_1 + 0x12);
  FUN_1801c69f0(param_1 + 0xf);
  FUN_1801c6ab0(param_1 + 0xc);
  FUN_1801c6b70(param_1 + 9);
  FUN_180176390(param_1 + 6);
  FUN_1801c6c10(param_1 + 3);
  plVar1 = (longlong *)*param_1;
  if (plVar1 != (longlong *)0x0) {
    *param_1 = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}



