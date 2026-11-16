// FUN_180181810 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180181810 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_180181810(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *local_58;
  undefined8 local_50;
  undefined *local_48;
  undefined *local_38;
  
  local_38 = &DAT_180cc98a0;
  local_48 = &DAT_180cc98a0;
  uVar1 = 0;
  _DAT_180cc98a0 = 0;
  _DAT_180cc98a8 = 0;
  _DAT_180cc98b0 = 0;
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_58 = "tier0.dll:g_pMemAlloc";
    local_50 = 0x15;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_58);
  }
  _DAT_180cc98a8 = (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x60);
  *(longlong *)_DAT_180cc98a8 = _DAT_180cc98a8;
  *(longlong *)(_DAT_180cc98a8 + 8) = _DAT_180cc98a8;
  _DAT_180cc98b8 = 0;
  _DAT_180cc98c0 = (undefined1  [16])0x0;
  _DAT_180cc98d0 = 7;
  _DAT_180cc98d8 = 8;
  uVar2 = 0x3f800000;
  _DAT_180cc98a0 = 0x3f800000;
  FUN_1801406e0(&DAT_180cc98b8,0x10,_DAT_180cc98a8);
  local_48 = &DAT_180cc98e0;
  DAT_180cc98e8 = 0;
  DAT_180cc98f0 = 0;
  _DAT_180cc98e0 = uVar1;
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_58 = "tier0.dll:g_pMemAlloc";
    local_50 = 0x15;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_58);
  }
  DAT_180cc98e8 = (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x30);
  *(longlong *)DAT_180cc98e8 = DAT_180cc98e8;
  *(longlong *)(DAT_180cc98e8 + 8) = DAT_180cc98e8;
  DAT_180cc98f8 = 0;
  _DAT_180cc9900 = (undefined1  [16])0x0;
  _DAT_180cc9910 = 7;
  _DAT_180cc9918 = 8;
  _DAT_180cc98e0 = uVar2;
  FUN_1801406e0(&DAT_180cc98f8,0x10,DAT_180cc98e8);
  local_48 = &DAT_180cc9920;
  DAT_180cc9928 = 0;
  _DAT_180cc9930 = 0;
  _DAT_180cc9920 = uVar1;
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_58 = "tier0.dll:g_pMemAlloc";
    local_50 = 0x15;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_58);
  }
  DAT_180cc9928 = (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x50);
  *(longlong *)DAT_180cc9928 = DAT_180cc9928;
  *(longlong *)(DAT_180cc9928 + 8) = DAT_180cc9928;
  DAT_180cc9938 = 0;
  _DAT_180cc9940 = (undefined1  [16])0x0;
  _DAT_180cc9950 = 7;
  _DAT_180cc9958 = 8;
  _DAT_180cc9920 = uVar2;
  FUN_1801406e0(&DAT_180cc9938,0x10,DAT_180cc9928);
  local_48 = &DAT_180cc9960;
  DAT_180cc9968 = 0;
  _DAT_180cc9970 = 0;
  _DAT_180cc9960 = uVar1;
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_58 = "tier0.dll:g_pMemAlloc";
    local_50 = 0x15;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_58);
  }
  DAT_180cc9968 = (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x50);
  *(longlong *)DAT_180cc9968 = DAT_180cc9968;
  *(longlong *)(DAT_180cc9968 + 8) = DAT_180cc9968;
  DAT_180cc9978 = 0;
  _DAT_180cc9980 = (undefined1  [16])0x0;
  _DAT_180cc9990 = 7;
  _DAT_180cc9998 = 8;
  _DAT_180cc9960 = uVar2;
  FUN_1801406e0(&DAT_180cc9978,0x10,DAT_180cc9968);
  DAT_180cc99a0 = 0;
  DAT_180cc99a8 = 0;
  _DAT_180cc99b0 = 0;
  return &DAT_180cc98a0;
}



