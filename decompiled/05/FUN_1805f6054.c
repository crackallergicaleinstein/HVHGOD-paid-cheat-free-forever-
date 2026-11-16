// FUN_1805f6054 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805f6054 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1805f6054(longlong param_1,longlong param_2,longlong param_3,code *param_4)

{
  longlong lVar1;
  
  for (lVar1 = 0; lVar1 != param_3; lVar1 = lVar1 + 1) {
    param_1 = param_1 - param_2;
    (*param_4)(param_1);
  }
  return;
}



