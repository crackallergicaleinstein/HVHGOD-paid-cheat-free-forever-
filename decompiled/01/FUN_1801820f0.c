// FUN_1801820f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801820f0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1801820f0(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [64];
  undefined4 uVar4;
  char *local_58;
  undefined8 local_50;
  undefined *local_48;
  undefined8 *local_38;
  
  local_38 = &DAT_180cc9bb0;
  _DAT_180cc9bb0 = (undefined1  [16])0x0;
  _DAT_180cc9bc0 = 0;
  DAT_180cc9bc8 = 0;
  DAT_180cc9bd0 = 0;
  _DAT_180cc9bd8 = 0;
  DAT_180cc9be0 = 0;
  DAT_180cc9be8 = 0;
  _DAT_180cc9bf0 = 0;
  DAT_180cc9bf8 = 0;
  DAT_180cc9c00 = 0;
  DAT_180cc9c08 = 0;
  DAT_180cc9c10 = 0;
  DAT_180cc9c18 = 0;
  _DAT_180cc9c20 = 0;
  DAT_180cc9c28 = 0;
  DAT_180cc9c30 = 0;
  uRam0000000180cc9c38 = 0;
  DAT_180cc9c40 = 0;
  DAT_180cc9c48 = 0;
  _DAT_180cc9c50 = 0;
  DAT_180cc9c58 = 0;
  DAT_180cc9c60 = 0;
  uRam0000000180cc9c68 = 0;
  DAT_180cc9c70 = 0;
  DAT_180cc9c78 = 0;
  DAT_180cc9c80 = 0;
  local_48 = &DAT_180cc9c88;
  auVar2._12_4_ = 0;
  auVar2._0_12_ = ZEXT812(0);
  auVar2 = auVar2 << 0x20;
  _DAT_180cc9c88 = 0;
  DAT_180cc9c90 = 0;
  _DAT_180cc9c98 = 0;
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_58 = "tier0.dll:g_pMemAlloc";
    local_50 = 0x15;
    auVar3 = ZEXT1264(ZEXT812(0)) << 0x20;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_58);
    auVar2 = auVar3._0_16_;
  }
  auVar3 = ZEXT1664(auVar2);
  DAT_180cc9c90 = (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x20);
  *(longlong *)DAT_180cc9c90 = DAT_180cc9c90;
  *(longlong *)(DAT_180cc9c90 + 8) = DAT_180cc9c90;
  _DAT_180cc9ca0 = (undefined1  [16])0x0;
  _DAT_180cc9cb0 = 0;
  DAT_180cc9cb8 = 7;
  _DAT_180cc9cc0 = 8;
  uVar4 = 0x3f800000;
  _DAT_180cc9c88 = 0x3f800000;
  FUN_1801406e0(&DAT_180cc9ca0,0x10,DAT_180cc9c90);
  local_48 = &DAT_180cc9cc8;
  _DAT_180cc9cc8 = auVar3._0_4_;
  _DAT_180cc9cd0 = 0;
  _DAT_180cc9cd8 = 0;
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_58 = "tier0.dll:g_pMemAlloc";
    local_50 = 0x15;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_58);
  }
  _DAT_180cc9cd0 = (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x20);
  *(longlong *)_DAT_180cc9cd0 = _DAT_180cc9cd0;
  *(longlong *)(_DAT_180cc9cd0 + 8) = _DAT_180cc9cd0;
  _DAT_180cc9ce0 = (undefined1  [16])0x0;
  _DAT_180cc9cf0 = 0;
  _DAT_180cc9cf8 = 7;
  _DAT_180cc9d00 = 8;
  _DAT_180cc9cc8 = uVar4;
  FUN_1801406e0(&DAT_180cc9ce0,0x10,_DAT_180cc9cd0);
  local_48 = &DAT_180cc9d08;
  _DAT_180cc9d08 = auVar3._0_4_;
  DAT_180cc9d10 = 0;
  DAT_180cc9d18 = 0;
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_58 = "tier0.dll:g_pMemAlloc";
    local_50 = 0x15;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_58);
  }
  DAT_180cc9d10 = (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x48);
  *(longlong *)DAT_180cc9d10 = DAT_180cc9d10;
  *(longlong *)(DAT_180cc9d10 + 8) = DAT_180cc9d10;
  _DAT_180cc9d20 = (undefined1  [16])0x0;
  _DAT_180cc9d30 = 0;
  _DAT_180cc9d38 = 7;
  _DAT_180cc9d40 = 8;
  _DAT_180cc9d08 = uVar4;
  FUN_1801406e0(&DAT_180cc9d20,0x10,DAT_180cc9d10);
  DAT_180cc9d48 = 0;
  _DAT_180cc9d60 = 0;
  _DAT_180cc9d68 = 7;
  DAT_180cc9d50_2 = SUB1614((undefined1  [16])0x0,2);
  auVar1._14_2_ = 0;
  auVar1._0_14_ = DAT_180cc9d50_2;
  _DAT_180cc9d50 = auVar1 << 0x10;
  local_48 = &DAT_180cc9d70;
  _DAT_180cc9d70 = auVar3._0_4_;
  DAT_180cc9d78 = 0;
  _DAT_180cc9d80 = 0;
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_58 = "tier0.dll:g_pMemAlloc";
    local_50 = 0x15;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_58);
  }
  DAT_180cc9d78 = (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x40);
  *(longlong *)DAT_180cc9d78 = DAT_180cc9d78;
  *(longlong *)(DAT_180cc9d78 + 8) = DAT_180cc9d78;
  _DAT_180cc9d88 = 0;
  _DAT_180cc9d90 = (undefined1  [16])0x0;
  _DAT_180cc9da0 = 7;
  _DAT_180cc9da8 = 8;
  _DAT_180cc9d70 = uVar4;
  FUN_1801406e0(&DAT_180cc9d88,0x10,DAT_180cc9d78);
  _DAT_180cc9dc8 = 0;
  _DAT_180cc9dd0 = 0;
  uRam0000000180cc9dd8 = 0;
  uRam0000000180cc9de0 = 0;
  _DAT_180cc9de8 = 0;
  _DAT_180cc9df0 = 0;
  _DAT_180cc9db8 = 0;
  _DAT_180cc9dc0 = 0;
  _DAT_180cc9df8 = 0xffffffff;
  _DAT_180cc9db0 = 2;
  DAT_180cc9dfc = 0;
  _DAT_180cc9e18 = 0;
  _DAT_180cc9e20 = 0;
  uRam0000000180cc9e28 = 0;
  uRam0000000180cc9e30 = 0;
  _DAT_180cc9e38 = 0;
  _DAT_180cc9e40 = 0;
  _DAT_180cc9e08 = 0;
  _DAT_180cc9e10 = 0;
  _DAT_180cc9e48 = 0xffffffff;
  _DAT_180cc9e00 = 2;
  DAT_180cc9e4c = 0;
  return &DAT_180cc9bb0;
}



