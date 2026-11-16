// FUN_180098e50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180098e50 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180098e50(void)

{
  undefined4 uVar1;
  char *local_28;
  undefined8 local_20;
  
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_28 = "tier0.dll:g_pMemAlloc";
    local_20 = 0x15;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_28);
  }
  DAT_180b8f838 = (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0xf58);
  *(longlong *)DAT_180b8f838 = DAT_180b8f838;
  *(longlong *)(DAT_180b8f838 + 8) = DAT_180b8f838;
  DAT_180b8f848 = 0;
  _DAT_180b8f850 = (undefined1  [16])0x0;
  DAT_180b8f860 = 7;
  DAT_180b8f868 = 8;
  uVar1 = 0x3f800000;
  DAT_180b8f830 = 0x3f800000;
  FUN_1801406e0(&DAT_180b8f848,0x10,DAT_180b8f838);
  _DAT_180b8f870 = 0;
  DAT_180b8f878 = 0;
  _DAT_180b8f880 = 0;
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_28 = "tier0.dll:g_pMemAlloc";
    local_20 = 0x15;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_28);
  }
  DAT_180b8f878 = (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x20);
  *(longlong *)DAT_180b8f878 = DAT_180b8f878;
  *(longlong *)(DAT_180b8f878 + 8) = DAT_180b8f878;
  DAT_180b8f888 = 0;
  _DAT_180b8f890 = (undefined1  [16])0x0;
  _DAT_180b8f8a0 = 7;
  _DAT_180b8f8a8 = 8;
  _DAT_180b8f870 = uVar1;
  FUN_1801406e0(&DAT_180b8f888,0x10,DAT_180b8f878);
  atexit(FUN_1806619c0);
  return;
}



