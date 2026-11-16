// FUN_1801b3980 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801b3980 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1801b3980(undefined8 param_1)

{
  char *local_18;
  undefined8 local_10;
  
  if (DAT_180c7df30 == (undefined8 *)0x0) {
    local_18 = "tier0.dll:g_pMemAlloc";
    local_10 = 0x15;
    DAT_180c7df30 = (undefined8 *)FUN_180451750(&local_18);
  }
  (**(code **)(*(longlong *)*DAT_180c7df30 + 0x18))((longlong *)*DAT_180c7df30,param_1);
  return;
}



