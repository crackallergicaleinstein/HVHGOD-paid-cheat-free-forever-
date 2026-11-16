// FUN_180099e50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180099e50 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180099e50(void)

{
  char *local_18;
  undefined8 local_10;
  
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_18 = "tier0.dll:g_pMemAlloc";
    local_10 = 0x15;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_18);
  }
  DAT_180bbeb68 = (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x68);
  *(longlong *)DAT_180bbeb68 = DAT_180bbeb68;
  *(longlong *)(DAT_180bbeb68 + 8) = DAT_180bbeb68;
  DAT_180bbeb78 = 0;
  _DAT_180bbeb80 = (undefined1  [16])0x0;
  DAT_180bbeb90 = 7;
  DAT_180bbeb98 = 8;
  DAT_180bbeb60 = 0x3f800000;
  FUN_1801b77b0(&DAT_180bbeb78,0x10,DAT_180bbeb68);
  atexit(FUN_1806627d0);
  return;
}



