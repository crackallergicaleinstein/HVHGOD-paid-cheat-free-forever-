// FUN_18009a730 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18009a730 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18009a730(void)

{
  char *local_18;
  undefined8 local_10;
  
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_18 = "tier0.dll:g_pMemAlloc";
    local_10 = 0x15;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_18);
  }
  DAT_180bbf098 = (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x40);
  *(longlong *)DAT_180bbf098 = DAT_180bbf098;
  *(longlong *)(DAT_180bbf098 + 8) = DAT_180bbf098;
  DAT_180bbf0a8 = 0;
  _DAT_180bbf0b0 = (undefined1  [16])0x0;
  DAT_180bbf0c0 = 7;
  DAT_180bbf0c8 = 8;
  DAT_180bbf090 = 0x3f800000;
  FUN_1801406e0(&DAT_180bbf0a8,0x10,DAT_180bbf098);
  atexit(FUN_180662d60);
  return;
}



