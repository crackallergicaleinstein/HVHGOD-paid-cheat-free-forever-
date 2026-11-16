// FUN_1801646b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801646b0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1801646b0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  FUN_1800f0160(param_1 + 0x40);
  FUN_180159a00(param_1 + 0x20);
  plVar2 = *(longlong **)(param_1 + 0x18);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  FUN_1800efed0(param_1);
  return;
}



