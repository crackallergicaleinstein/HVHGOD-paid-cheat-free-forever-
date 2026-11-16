// FUN_180663fb0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180663fb0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180663fb0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  while (puVar1 = DAT_180bb18d8, DAT_180bb18d8 != (undefined8 *)0x0) {
    puVar2 = DAT_180bb18d8 + 1;
    DAT_180bb18d8 = (undefined8 *)*DAT_180bb18d8;
    puVar2 = (undefined8 *)(**(code **)(*(longlong *)*puVar2 + 0x10))();
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    thunk_FUN_180621380(puVar1);
  }
  return;
}



