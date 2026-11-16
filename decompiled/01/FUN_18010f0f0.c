// FUN_18010f0f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18010f0f0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_18010f0f0(longlong *param_1)

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
           (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x10);
  puVar1[1] = 0;
  *param_1 = (longlong)puVar1;
  *puVar1 = param_1;
  return;
}



