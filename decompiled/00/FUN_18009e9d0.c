// FUN_18009e9d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18009e9d0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18009e9d0(void)

{
  char *local_18;
  undefined8 local_10;
  
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_18 = "tier0.dll:g_pMemAlloc";
    local_10 = 0x15;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_18);
  }
  DAT_180c63018 = (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x20);
  *(longlong *)DAT_180c63018 = DAT_180c63018;
  *(longlong *)(DAT_180c63018 + 8) = DAT_180c63018;
  DAT_180c63028 = 0;
  _DAT_180c63030 = (undefined1  [16])0x0;
  DAT_180c63040 = 7;
  DAT_180c63048 = 8;
  DAT_180c63010 = 0x3f800000;
  FUN_1801406e0(&DAT_180c63028,0x10,DAT_180c63018);
  atexit(FUN_180663c70);
  return;
}



