// FUN_18009a980 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18009a980 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18009a980(void)

{
  char *local_18;
  undefined8 local_10;
  
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_18 = "tier0.dll:g_pMemAlloc";
    local_10 = 0x15;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_18);
  }
  DAT_1808e48d8 = (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x20);
  *(longlong *)DAT_1808e48d8 = DAT_1808e48d8;
  *(longlong *)(DAT_1808e48d8 + 8) = DAT_1808e48d8;
  DAT_1808e48e8 = 0;
  _DAT_1808e48f0 = (undefined1  [16])0x0;
  _DAT_1808e4900 = 7;
  _DAT_1808e4908 = 8;
  _DAT_1808e48d0 = 0x3f800000;
  FUN_1801406e0(&DAT_1808e48e8,0x10,DAT_1808e48d8);
  DAT_1808e4910 = 0;
  DAT_1808e4914 = 0;
  DAT_1808e4918 = 0;
  DAT_1808e491c = 0;
  atexit(FUN_180662e20);
  return;
}



