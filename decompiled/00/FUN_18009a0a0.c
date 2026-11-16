// FUN_18009a0a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18009a0a0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18009a0a0(void)

{
  char *local_18;
  undefined8 local_10;
  
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_18 = "tier0.dll:g_pMemAlloc";
    local_10 = 0x15;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_18);
  }
  DAT_180bbee58 = (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x38);
  *(longlong *)DAT_180bbee58 = DAT_180bbee58;
  *(longlong *)(DAT_180bbee58 + 8) = DAT_180bbee58;
  DAT_180bbee68 = 0;
  _DAT_180bbee70 = (undefined1  [16])0x0;
  DAT_180bbee80 = 7;
  DAT_180bbee88 = 8;
  DAT_180bbee50 = 0x3f800000;
  FUN_1801b77b0(&DAT_180bbee68,0x10,DAT_180bbee58);
  atexit(FUN_180662880);
  return;
}



