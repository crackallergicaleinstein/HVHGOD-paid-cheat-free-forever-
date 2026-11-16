// FUN_1802cb260 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802cb260 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1802cb260(void)

{
  longlong *plVar1;
  
  plVar1 = &DAT_1808fd868;
  do {
    if ((longlong *)*plVar1 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar1 + 0x90))();
      *plVar1 = 0;
    }
    plVar1 = plVar1 + 1;
  } while (plVar1 != (longlong *)&DAT_1808fd888);
  if (DAT_1808fd860 != 0) {
    (**(code **)(*(longlong *)DAT_1808fd860 + 0x90))();
    DAT_1808fd860 = 0;
  }
  if (DAT_1808fd858 != 0) {
    (**(code **)(*(longlong *)DAT_1808fd858 + 0x10))();
    DAT_1808fd858 = 0;
  }
  if (DAT_1808fd850 != (HMODULE)0x0) {
    FreeLibrary(DAT_1808fd850);
    DAT_1808fd850 = (HMODULE)0x0;
  }
  return;
}



