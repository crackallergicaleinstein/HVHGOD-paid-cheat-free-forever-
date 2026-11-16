// FUN_18009c7f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18009c7f0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18009c7f0(void)

{
  char *local_18;
  undefined8 local_10;
  
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_18 = "tier0.dll:g_pMemAlloc";
    local_10 = 0x15;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_18);
  }
  DAT_180c62cd8 = (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x28);
  *(longlong *)DAT_180c62cd8 = DAT_180c62cd8;
  *(longlong *)(DAT_180c62cd8 + 8) = DAT_180c62cd8;
  DAT_180c62ce8 = 0;
  _DAT_180c62cf0 = (undefined1  [16])0x0;
  DAT_180c62d00 = 7;
  DAT_180c62d08 = 8;
  DAT_180c62cd0 = 0x3f800000;
  FUN_1801b77b0(&DAT_180c62ce8,0x10,DAT_180c62cd8);
  atexit(FUN_180663750);
  return;
}



