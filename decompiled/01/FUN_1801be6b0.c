// FUN_1801be6b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801be6b0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1801be6b0(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 in_R9;
  undefined4 uVar3;
  undefined4 uVar4;
  char *local_48;
  undefined8 local_40;
  undefined *local_38;
  
  _DAT_180ccaa20 = 1;
  _DAT_180ccaa24 = 0;
  uVar4 = 0x3f800000;
  DAT_180ccaa28 = 0x3f800000;
  _DAT_180ccaa2c = 0x3f800000;
  uVar3 = 0;
  _DAT_180ccaa30 = 0;
  _DAT_180ccaa34 = 0;
  DAT_180ccaa36 = 0;
  DAT_180ccaa38 = 0;
  DAT_180ccaa40 = 0;
  DAT_180ccaa44 = 0xffffffff;
  DAT_180ccaa48 = 0;
  _DAT_180ccaa4c = 0;
  DAT_180ccaa54 = 0x42c80000;
  DAT_180ccaa58 = 0x42c80000;
  _DAT_180ccaa5c = 0x44898000;
  _DAT_180ccaa60 = 0x44340000;
  _DAT_180ccaa68 = 0;
  DAT_180ccaa70 = 0;
  _DAT_180ccaa74 = 0;
  _DAT_180ccaa7c = 0;
  DAT_180ccaa80 = 0;
  _DAT_180ccaa84 = 0;
  _DAT_180ccaa88 = 0x2d0000002e;
  uRam0000000180ccaa90 = 0x77;
  _DAT_180ccaa98 = 0;
  DAT_180ccaaa0 = 0;
  FUN_18063ab10(&DAT_180ccaaa8,0,0x32f8,in_R9,&DAT_180ccaa20);
  FUN_1801be480(&DAT_180ccaaa8);
  _DAT_180ccdda0 = 0;
  _DAT_180ccdda4 = 0xffffffff;
  _DAT_180ccdda8 = 0xbf800000;
  _DAT_180ccddb0 = 0;
  _DAT_180ccddb4 = 0;
  _DAT_180ccddb8 = 0;
  DAT_180ccddc0 = 0;
  DAT_180ccddd8 = 0;
  DAT_180ccdde0 = 0xf;
  ram0x000180ccddc9 = SUB1615((undefined1  [16])0x0,1);
  auVar1[0xf] = 0;
  auVar1._0_15_ = ram0x000180ccddc9;
  _DAT_180ccddc8 = auVar1 << 8;
  _DAT_180ccddf8 = 0;
  _DAT_180ccde00 = 0xf;
  DAT_180ccdde8_1 = SUB1615((undefined1  [16])0x0,1);
  auVar2[0xf] = 0;
  auVar2._0_15_ = DAT_180ccdde8_1;
  _DAT_180ccdde8 = auVar2 << 8;
  _DAT_180ccde08 = 0;
  _DAT_180ccde10 = 0;
  uRam0000000180ccde18 = 0;
  _DAT_180ccde20 = 0;
  uRam0000000180ccde28 = 0;
  _DAT_180ccde30 = 0;
  DAT_180ccde38 = 0;
  _DAT_180ccde40 = 0;
  DAT_180ccde48 = 0;
  _DAT_180ccde50 = 0;
  _DAT_180ccddac = uVar3;
  DAT_180ccddc4 = uVar3;
  FUN_18063ab10(&DAT_180ccde58,0,0xe0);
  FUN_1801c6020(&DAT_180ccde58,0xe);
  FUN_18063ab10(&DAT_180ccdf38,0,0x290);
  FUN_1801c6020(&DAT_180ccdf38,0x29);
  DAT_180cce1c8 = 0;
  _DAT_180cce1d0 = 0;
  uRam0000000180cce1d8 = 0;
  uRam0000000180cce1e0 = 0;
  _DAT_180cce1e8 = 0;
  uRam0000000180cce1f0 = 0;
  uRam0000000180cce1f8 = 0;
  _DAT_180cce200 = 0;
  _DAT_180cce208 = 0;
  uRam0000000180cce210 = 0;
  uRam0000000180cce218 = 0;
  uRam0000000180cce220 = 0;
  FUN_1801c6020(&DAT_180cce1c8,6);
  DAT_180cce228 = 0;
  _DAT_180cce230 = 0;
  DAT_180cce238 = 0;
  _DAT_180cce240 = 0;
  DAT_180cce248 = 0;
  _DAT_180cce250 = 0;
  DAT_180cce258 = 0;
  _DAT_180cce260 = 0;
  DAT_180cce268 = 0;
  _DAT_180cce270 = 0;
  DAT_180cce278 = 0;
  _DAT_180cce280 = 0;
  DAT_180cce288 = 0;
  _DAT_180cce290 = 0;
  DAT_180cce298 = 0;
  _DAT_180cce2a0 = 0;
  local_38 = &DAT_180cce2a8;
  DAT_180cce2b0 = 0;
  _DAT_180cce2b8 = 0;
  _DAT_180cce2a8 = uVar3;
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_48 = "tier0.dll:g_pMemAlloc";
    local_40 = 0x15;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_48);
  }
  DAT_180cce2b0 = (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x48);
  *(longlong *)DAT_180cce2b0 = DAT_180cce2b0;
  *(longlong *)(DAT_180cce2b0 + 8) = DAT_180cce2b0;
  _DAT_180cce2c0 = (undefined1  [16])0x0;
  _DAT_180cce2d0 = 0;
  _DAT_180cce2d8 = 7;
  _DAT_180cce2e0 = 8;
  _DAT_180cce2a8 = uVar4;
  FUN_1801406e0(&DAT_180cce2c0,0x10,DAT_180cce2b0);
  return &DAT_180ccaa20;
}



