// FUN_180508d20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180508d20 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180508d20(void)

{
  longlong *plVar1;
  bool bVar2;
  
  plVar1 = &DAT_180c62e38;
  do {
    if ((longlong *)plVar1[1] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar1[1] + 0x10))();
      plVar1[1] = 0;
    }
    if ((longlong *)*plVar1 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar1 + 0x10))();
      *plVar1 = 0;
    }
    if ((longlong *)plVar1[-1] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar1[-1] + 0x10))();
      plVar1[-1] = 0;
    }
    plVar1[2] = 0;
    bVar2 = plVar1 != (longlong *)0x180c62e98;
    plVar1 = plVar1 + 4;
  } while (bVar2);
  if (DAT_180c62df8 != 0) {
    (**(code **)(*(longlong *)DAT_180c62df8 + 0x10))();
    DAT_180c62df8 = 0;
  }
  if (DAT_180c62df0 != 0) {
    (**(code **)(*(longlong *)DAT_180c62df0 + 0x10))();
    DAT_180c62df0 = 0;
  }
  _DAT_180c62eb0 = 0;
  return;
}



