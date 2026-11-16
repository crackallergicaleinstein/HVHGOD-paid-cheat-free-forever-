// FUN_180099d00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180099d00 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180099d00(void)

{
  char *local_18;
  undefined8 local_10;
  
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_18 = "tier0.dll:g_pMemAlloc";
    local_10 = 0x15;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_18);
  }
  DAT_180bbeac8 = (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x38);
  *(longlong *)DAT_180bbeac8 = DAT_180bbeac8;
  *(longlong *)(DAT_180bbeac8 + 8) = DAT_180bbeac8;
  DAT_180bbead8 = 0;
  _DAT_180bbeae0 = (undefined1  [16])0x0;
  DAT_180bbeaf0 = 7;
  DAT_180bbeaf8 = 8;
  DAT_180bbeac0 = 0x3f800000;
  FUN_1801406e0(&DAT_180bbead8,0x10,DAT_180bbeac8);
  atexit(FUN_180662740);
  return;
}



