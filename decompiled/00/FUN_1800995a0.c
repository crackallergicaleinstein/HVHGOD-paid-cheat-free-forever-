// FUN_1800995a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800995a0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800995a0(void)

{
  char *local_18;
  undefined8 local_10;
  
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_18 = "tier0.dll:g_pMemAlloc";
    local_10 = 0x15;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_18);
  }
  DAT_180bbe998 = (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x68);
  *(longlong *)DAT_180bbe998 = DAT_180bbe998;
  *(longlong *)(DAT_180bbe998 + 8) = DAT_180bbe998;
  DAT_180bbe9a8 = 0;
  _DAT_180bbe9b0 = (undefined1  [16])0x0;
  DAT_180bbe9c0 = 7;
  DAT_180bbe9c8 = 8;
  DAT_180bbe990 = 0x3f800000;
  FUN_1801b77b0(&DAT_180bbe9a8,0x10,DAT_180bbe998);
  atexit(FUN_180662110);
  return;
}



