// FUN_1800994e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800994e0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800994e0(void)

{
  char *local_18;
  undefined8 local_10;
  
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_18 = "tier0.dll:g_pMemAlloc";
    local_10 = 0x15;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_18);
  }
  DAT_180bbe958 = (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x378);
  *(longlong *)DAT_180bbe958 = DAT_180bbe958;
  *(longlong *)(DAT_180bbe958 + 8) = DAT_180bbe958;
  DAT_180bbe968 = 0;
  _DAT_180bbe970 = (undefined1  [16])0x0;
  DAT_180bbe980 = 7;
  DAT_180bbe988 = 8;
  DAT_180bbe950 = 0x3f800000;
  FUN_1801b77b0(&DAT_180bbe968,0x10,DAT_180bbe958);
  atexit(FUN_1806620f0);
  return;
}



