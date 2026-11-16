// FUN_180282f00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180282f00 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180282f00(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_1 != param_2) {
    plVar2 = param_1 + 9;
    do {
      plVar1 = (longlong *)*plVar2;
      if (plVar1 != (longlong *)0x0) {
        *plVar2 = 0;
        (**(code **)(*plVar1 + 0x10))();
      }
      FUN_18015c010(plVar2 + -8);
      plVar1 = plVar2 + 1;
      plVar2 = plVar2 + 10;
    } while (plVar1 != param_2);
  }
  return;
}



