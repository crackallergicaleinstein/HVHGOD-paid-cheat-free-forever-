// FUN_1801933d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801933d0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1801933d0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = param_1 + 7;
  if ((longlong *)*plVar1 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805fa874();
  }
  (**(code **)(*(longlong *)*plVar1 + 0x10))();
  plVar2 = (longlong *)*plVar1;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != param_1);
    *plVar1 = 0;
  }
  return;
}



