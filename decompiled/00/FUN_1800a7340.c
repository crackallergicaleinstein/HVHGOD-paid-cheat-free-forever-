// FUN_1800a7340 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800a7340 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800a7340(void)

{
  char *local_18;
  undefined8 local_10;
  
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_18 = "tier0.dll:g_pMemAlloc";
    local_10 = 0x15;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_18);
  }
  DAT_180c63058 = (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x278);
  *(longlong *)DAT_180c63058 = DAT_180c63058;
  *(longlong *)(DAT_180c63058 + 8) = DAT_180c63058;
  DAT_180c63068 = 0;
  _DAT_180c63070 = (undefined1  [16])0x0;
  DAT_180c63080 = 7;
  DAT_180c63088 = 8;
  DAT_180c63050 = 0x3f800000;
  FUN_1801b77b0(&DAT_180c63068,0x10,DAT_180c63058);
  atexit(FUN_180663d40);
  return;
}



