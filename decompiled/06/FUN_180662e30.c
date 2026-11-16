// FUN_180662e30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180662e30 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180662e30(void)

{
  longlong lVar1;
  
  _eh_vector_destructor_iterator_(&DAT_180ba3160,8,2,FUN_1801bd340);
  _eh_vector_destructor_iterator_(&DAT_180ba3150,8,2,FUN_1801bd340);
  lVar1 = DAT_180ba3148;
  if (DAT_180ba3148 != 0) {
    DAT_180ba3148 = 0;
    (**(code **)(*(longlong *)lVar1 + 0x10))();
  }
  lVar1 = DAT_180ba3140;
  if (DAT_180ba3140 != 0) {
    DAT_180ba3140 = 0;
    (**(code **)(*(longlong *)lVar1 + 0x10))();
  }
  lVar1 = DAT_180ba3138;
  if (DAT_180ba3138 != 0) {
    DAT_180ba3138 = 0;
    (**(code **)(*(longlong *)lVar1 + 0x10))();
  }
  _eh_vector_destructor_iterator_(&DAT_180ba3030,0x10,0x10,FUN_1801bd340);
  return;
}



