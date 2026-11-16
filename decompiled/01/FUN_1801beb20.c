// FUN_1801beb20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801beb20 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1801beb20(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)param_1[0x8c];
  if (plVar1 != (longlong *)0x0) {
    param_1[0x8c] = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  plVar1 = (longlong *)param_1[0x8a];
  if (plVar1 != (longlong *)0x0) {
    param_1[0x8a] = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  plVar1 = (longlong *)param_1[0x88];
  if (plVar1 != (longlong *)0x0) {
    param_1[0x88] = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  plVar1 = (longlong *)param_1[0x86];
  if (plVar1 != (longlong *)0x0) {
    param_1[0x86] = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  plVar1 = (longlong *)param_1[0x84];
  if (plVar1 != (longlong *)0x0) {
    param_1[0x84] = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  plVar1 = (longlong *)param_1[0x82];
  if (plVar1 != (longlong *)0x0) {
    param_1[0x82] = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  plVar1 = (longlong *)param_1[0x80];
  if (plVar1 != (longlong *)0x0) {
    param_1[0x80] = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  plVar1 = (longlong *)param_1[0x7e];
  if (plVar1 != (longlong *)0x0) {
    param_1[0x7e] = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  _eh_vector_destructor_iterator_(param_1 + 0x72,0x10,6,FUN_1801bd340);
  _eh_vector_destructor_iterator_(param_1 + 0x20,0x10,0x29,FUN_1801bd340);
  _eh_vector_destructor_iterator_(param_1 + 4,0x10,0xe,FUN_1801bd340);
  plVar1 = (longlong *)param_1[2];
  if (plVar1 != (longlong *)0x0) {
    param_1[2] = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  plVar1 = (longlong *)*param_1;
  if (plVar1 != (longlong *)0x0) {
    *param_1 = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}



