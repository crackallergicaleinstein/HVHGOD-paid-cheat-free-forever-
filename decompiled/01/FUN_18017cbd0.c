// FUN_18017cbd0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18017cbd0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 * FUN_18017cbd0(undefined8 *param_1)

{
  undefined4 *puVar1;
  char *local_18;
  undefined8 local_10;
  
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_10 = 0x15;
    local_18 = "tier0.dll:g_pMemAlloc";
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_18);
  }
  puVar1 = (undefined4 *)
           (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x20);
  if (puVar1 == (undefined4 *)0x0) {
    *param_1 = 0;
    return param_1;
  }
  *puVar1 = 1;
  puVar1[1] = 2;
  *(undefined8 *)(puVar1 + 2) = 0;
  *(undefined8 *)(puVar1 + 4) = 0;
  puVar1[6] = 0;
  *param_1 = puVar1;
  return param_1;
}



