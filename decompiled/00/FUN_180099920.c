// FUN_180099920 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180099920 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180099920(void)

{
  char *local_18;
  undefined8 local_10;
  
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_18 = "tier0.dll:g_pMemAlloc";
    local_10 = 0x15;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_18);
  }
  DAT_180b90978 = (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x48);
  *(longlong *)DAT_180b90978 = DAT_180b90978;
  *(longlong *)(DAT_180b90978 + 8) = DAT_180b90978;
  _DAT_180b90988 = 0;
  _DAT_180b90990 = (undefined1  [16])0x0;
  _DAT_180b909a0 = 7;
  _DAT_180b909a8 = 8;
  _DAT_180b90970 = 0x3f800000;
  FUN_1801406e0(&DAT_180b90988,0x10,DAT_180b90978);
  atexit(FUN_180662370);
  return;
}



