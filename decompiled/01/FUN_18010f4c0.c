// FUN_18010f4c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18010f4c0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_18010f4c0(void)

{
  undefined8 *puVar1;
  char *local_18;
  undefined8 local_10;
  
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_10 = 0x15;
    local_18 = "tier0.dll:g_pMemAlloc";
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_18);
  }
  puVar1 = (undefined8 *)
           (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x18);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  return;
}



