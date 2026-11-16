// FUN_180180da0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180180da0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_180180da0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *local_58;
  undefined8 local_50;
  undefined4 *local_48;
  undefined4 *local_38;
  
  local_48 = &DAT_180cc9270;
  local_38 = &DAT_180cc9270;
  uVar1 = 0;
  DAT_180cc9270 = 0;
  DAT_180cc9278 = 0;
  DAT_180cc9280 = 0;
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_58 = "tier0.dll:g_pMemAlloc";
    local_50 = 0x15;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_58);
  }
  DAT_180cc9278 = (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x60);
  *(longlong *)DAT_180cc9278 = DAT_180cc9278;
  *(longlong *)(DAT_180cc9278 + 8) = DAT_180cc9278;
  DAT_180cc9288 = 0;
  _DAT_180cc9290 = (undefined1  [16])0x0;
  DAT_180cc92a0 = 7;
  DAT_180cc92a8 = 8;
  uVar2 = 0x3f800000;
  DAT_180cc9270 = 0x3f800000;
  FUN_1801406e0(&DAT_180cc9288,0x10,DAT_180cc9278);
  local_38 = (undefined4 *)&DAT_180cc92b0;
  DAT_180cc92b8 = 0;
  _DAT_180cc92c0 = 0;
  _DAT_180cc92b0 = uVar1;
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_58 = "tier0.dll:g_pMemAlloc";
    local_50 = 0x15;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_58);
  }
  DAT_180cc92b8 = (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x38);
  *(longlong *)DAT_180cc92b8 = DAT_180cc92b8;
  *(longlong *)(DAT_180cc92b8 + 8) = DAT_180cc92b8;
  DAT_180cc92c8 = 0;
  _DAT_180cc92d0 = (undefined1  [16])0x0;
  _DAT_180cc92e0 = 7;
  _DAT_180cc92e8 = 8;
  _DAT_180cc92b0 = uVar2;
  FUN_1801406e0(&DAT_180cc92c8,0x10,DAT_180cc92b8);
  local_38 = (undefined4 *)&DAT_180cc92f0;
  DAT_180cc92f8 = 0;
  DAT_180cc9300 = 0;
  _DAT_180cc92f0 = uVar1;
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_58 = "tier0.dll:g_pMemAlloc";
    local_50 = 0x15;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_58);
  }
  DAT_180cc92f8 = (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x48);
  *(longlong *)DAT_180cc92f8 = DAT_180cc92f8;
  *(longlong *)(DAT_180cc92f8 + 8) = DAT_180cc92f8;
  _DAT_180cc9308 = 0;
  _DAT_180cc9310 = (undefined1  [16])0x0;
  _DAT_180cc9320 = 7;
  _DAT_180cc9328 = 8;
  _DAT_180cc92f0 = uVar2;
  FUN_1801406e0(&DAT_180cc9308,0x10,DAT_180cc92f8);
  return &DAT_180cc9270;
}



