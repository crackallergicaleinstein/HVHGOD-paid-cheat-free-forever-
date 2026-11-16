// FUN_180099040 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180099040 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180099040(void)

{
  char *local_18;
  undefined8 local_10;
  
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_18 = "tier0.dll:g_pMemAlloc";
    local_10 = 0x15;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_18);
  }
  DAT_180b8fb40 = (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x70);
  *(longlong *)DAT_180b8fb40 = DAT_180b8fb40;
  *(longlong *)(DAT_180b8fb40 + 8) = DAT_180b8fb40;
  _DAT_180b8fb50 = (undefined1  [16])0x0;
  _DAT_180b8fb60 = 0;
  _DAT_180b8fb68 = 7;
  _DAT_180b8fb70 = 8;
  _DAT_180b8fb38 = 0x3f800000;
  FUN_1801406e0(&DAT_180b8fb50,0x10,DAT_180b8fb40);
  _DAT_180b8fb78 = 0;
  _DAT_180b8fb80 = (undefined1  [16])0x0;
  atexit(FUN_180661b90);
  return;
}



