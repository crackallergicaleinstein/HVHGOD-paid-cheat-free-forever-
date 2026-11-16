// FUN_180099f10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180099f10 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180099f10(void)

{
  char *local_18;
  undefined8 local_10;
  
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_18 = "tier0.dll:g_pMemAlloc";
    local_10 = 0x15;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_18);
  }
  DAT_180bbeba8 = (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x40);
  *(longlong *)DAT_180bbeba8 = DAT_180bbeba8;
  *(longlong *)(DAT_180bbeba8 + 8) = DAT_180bbeba8;
  DAT_180bbebb8 = 0;
  _DAT_180bbebc0 = (undefined1  [16])0x0;
  DAT_180bbebd0 = 7;
  DAT_180bbebd8 = 8;
  DAT_180bbeba0 = 0x3f800000;
  FUN_1801406e0(&DAT_180bbebb8,0x10,DAT_180bbeba8);
  atexit(FUN_1806627f0);
  return;
}



