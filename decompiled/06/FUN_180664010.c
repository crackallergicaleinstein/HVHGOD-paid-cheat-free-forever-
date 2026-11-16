// FUN_180664010 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180664010 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180664010(void)

{
  undefined8 *puVar1;
  
  if (DAT_180bb18c8 != 0) {
    puVar1 = (undefined8 *)(**(code **)(*(longlong *)DAT_180bb18c8 + 0x10))();
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  return;
}



