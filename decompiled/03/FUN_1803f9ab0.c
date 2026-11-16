// FUN_1803f9ab0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803f9ab0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1803f9ab0(longlong *param_1)

{
  longlong *plVar1;
  
  _eh_vector_destructor_iterator_(param_1 + 0x14,8,2,FUN_1801bd340);
  _eh_vector_destructor_iterator_(param_1 + 0x12,8,2,FUN_1801bd340);
  _eh_vector_destructor_iterator_(param_1 + 0x10,8,2,FUN_1801bd340);
  plVar1 = (longlong *)param_1[0xf];
  if (plVar1 != (longlong *)0x0) {
    param_1[0xf] = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  plVar1 = (longlong *)param_1[0xe];
  if (plVar1 != (longlong *)0x0) {
    param_1[0xe] = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  plVar1 = (longlong *)param_1[0xd];
  if (plVar1 != (longlong *)0x0) {
    param_1[0xd] = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  plVar1 = (longlong *)param_1[0xc];
  if (plVar1 != (longlong *)0x0) {
    param_1[0xc] = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  plVar1 = (longlong *)param_1[0xb];
  if (plVar1 != (longlong *)0x0) {
    param_1[0xb] = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  plVar1 = (longlong *)param_1[10];
  if (plVar1 != (longlong *)0x0) {
    param_1[10] = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  plVar1 = (longlong *)param_1[9];
  if (plVar1 != (longlong *)0x0) {
    param_1[9] = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  plVar1 = (longlong *)param_1[8];
  if (plVar1 != (longlong *)0x0) {
    param_1[8] = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  plVar1 = (longlong *)param_1[7];
  if (plVar1 != (longlong *)0x0) {
    param_1[7] = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  plVar1 = (longlong *)param_1[6];
  if (plVar1 != (longlong *)0x0) {
    param_1[6] = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  plVar1 = (longlong *)param_1[5];
  if (plVar1 != (longlong *)0x0) {
    param_1[5] = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  plVar1 = (longlong *)param_1[4];
  if (plVar1 != (longlong *)0x0) {
    param_1[4] = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  plVar1 = (longlong *)param_1[3];
  if (plVar1 != (longlong *)0x0) {
    param_1[3] = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  plVar1 = (longlong *)param_1[2];
  if (plVar1 != (longlong *)0x0) {
    param_1[2] = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  plVar1 = (longlong *)param_1[1];
  if (plVar1 != (longlong *)0x0) {
    param_1[1] = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  plVar1 = (longlong *)*param_1;
  if (plVar1 != (longlong *)0x0) {
    *param_1 = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}



