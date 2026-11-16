// FUN_1801812b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801812b0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1801812b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [64];
  char *local_28;
  undefined8 local_20;
  
  DAT_180cc9330 = 0;
  DAT_180cc9338 = 0;
  DAT_180cc9340 = 0;
  DAT_180cc9348 = 0;
  DAT_180cc934c = 0;
  DAT_180cc9350 = 0;
  DAT_180cc9354 = 0xffffffff;
  auVar1._12_4_ = 0;
  auVar1._0_12_ = ZEXT812(0);
  auVar1 = auVar1 << 0x20;
  DAT_180cc9358 = 0;
  _DAT_180cc935c = 0;
  DAT_180cc9364 = 0;
  DAT_180cc9368 = 0;
  DAT_180cc936c = 0;
  _DAT_180cc9370 = 0;
  DAT_180cc9372 = 0;
  DAT_180cc9374 = 0;
  DAT_180cc9378 = 0;
  _DAT_180cc9380 = (undefined1  [16])0x0;
  _DAT_180cc9390 = 0;
  _DAT_180cc93b0 = ZEXT816(0);
  _DAT_180cc93c0 = 0;
  _DAT_180cc93c8 = 0;
  _DAT_180cc93d0 = 0;
  _DAT_180cc93d8 = (undefined1  [16])0x0;
  _DAT_180cc9398 = 0;
  DAT_180cc93a0 = 0;
  _DAT_180cc93a8 = 0;
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_28 = "tier0.dll:g_pMemAlloc";
    local_20 = 0x15;
    auVar2 = ZEXT1264(ZEXT812(0)) << 0x20;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_28,param_2,param_3,param_4,&DAT_180cc9398);
    auVar1 = auVar2._0_16_;
  }
  auVar2 = ZEXT1664(auVar1);
  DAT_180cc93a0 = (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x40);
  *(longlong *)DAT_180cc93a0 = DAT_180cc93a0;
  *(longlong *)(DAT_180cc93a0 + 8) = DAT_180cc93a0;
  _DAT_180cc93b0 = (undefined1  [16])0x0;
  _DAT_180cc93c0 = 0;
  _DAT_180cc93c8 = 7;
  _DAT_180cc93d0 = 8;
  _DAT_180cc9398 = CONCAT44(DAT_180cc9398_4,0x3f800000);
  FUN_1801406e0(&DAT_180cc93b0,0x10,DAT_180cc93a0);
  _DAT_180cc93d8 = ZEXT812(0);
  _DAT_180cc9668 = 0;
  _DAT_180cc9670 = 0;
  _DAT_180cc9674 = 0;
  _DAT_180cc9678 = 0;
  _DAT_180cc967c = 0;
  FUN_18063ab10(&DAT_180cc93e8,0,0x280);
  FUN_1801a5440(&DAT_180cc93e8);
  _DAT_180cc9668 = 0;
  _DAT_180cc9670 = auVar2._0_4_;
  _DAT_180cc9674 = 0;
  _DAT_180cc9678 = 0;
  _DAT_180cc967c = auVar2._0_4_;
  DAT_180cc9680 = 0;
  return &DAT_180cc9330;
}



