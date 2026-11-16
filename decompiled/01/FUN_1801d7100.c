// FUN_1801d7100 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801d7100 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_1801d7100(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined4 uVar5;
  undefined4 uVar6;
  char *local_48;
  undefined8 local_40;
  undefined *local_38;
  
  FUN_1801d6b90(&DAT_180ccf000,1,param_3,param_4,&DAT_180ccf000);
  DAT_180ccf440 = 0;
  DAT_180ccf448 = 0;
  _DAT_180ccf450 = (undefined1  [16])0x0;
  local_38 = &DAT_180ccf460;
  uVar6 = 0;
  _DAT_180ccf460 = 0;
  DAT_180ccf468 = 0;
  DAT_180ccf470 = 0;
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_48 = "tier0.dll:g_pMemAlloc";
    local_40 = 0x15;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_48);
  }
  DAT_180ccf468 = (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x38);
  *(longlong *)DAT_180ccf468 = DAT_180ccf468;
  *(longlong *)(DAT_180ccf468 + 8) = DAT_180ccf468;
  DAT_180ccf478 = 0;
  _DAT_180ccf480 = (undefined1  [16])0x0;
  DAT_180ccf490 = 7;
  _DAT_180ccf498 = 8;
  uVar5 = 0x3f800000;
  _DAT_180ccf460 = 0x3f800000;
  FUN_1801406e0(&DAT_180ccf478,0x10,DAT_180ccf468);
  FUN_1801abb20(&DAT_180ccf4a0);
  FUN_1801abb20(&DAT_180ccf4e0);
  DAT_180ccf530 = 0;
  DAT_180ccf538 = 0xf;
  ram0x000180ccf521 = SUB1615((undefined1  [16])0x0,1);
  auVar1[0xf] = 0;
  auVar1._0_15_ = ram0x000180ccf521;
  _DAT_180ccf520 = auVar1 << 8;
  _DAT_180ccf540 = 0;
  DAT_180ccf548 = 0;
  _DAT_180ccf560 = 0;
  _DAT_180ccf568 = 0xf;
  DAT_180ccf550_1 = SUB1615((undefined1  [16])0x0,1);
  auVar2[0xf] = 0;
  auVar2._0_15_ = DAT_180ccf550_1;
  _DAT_180ccf550 = auVar2 << 8;
  _DAT_180ccf570 = (undefined1  [16])0x0;
  _DAT_180ccf580 = 0;
  _DAT_180ccf588 = uVar6;
  _DAT_180ccf58c = uVar6;
  _DAT_180ccf590 = uVar5;
  _DAT_180ccf598 = 0;
  _DAT_180ccf5a0 = 0;
  _DAT_180ccf5a8 = 0;
  DAT_180ccf5b0 = 0;
  _DAT_180ccf5c8 = 0;
  _DAT_180ccf5d0 = 0xf;
  DAT_180ccf5b8_1 = SUB1615((undefined1  [16])0x0,1);
  auVar3[0xf] = 0;
  auVar3._0_15_ = DAT_180ccf5b8_1;
  _DAT_180ccf5b8 = auVar3 << 8;
  _DAT_180ccf5d8 = 0;
  _DAT_180ccf5e0 = 0;
  _DAT_180ccf5e8 = 0;
  _DAT_180ccf5f0 = uVar6;
  DAT_180ccf5f4 = 0;
  _DAT_180ccf5f8 = uVar6;
  _DAT_180ccf5fc = uVar6;
  _DAT_180ccf600 = uVar6;
  DAT_180ccf604 = 0;
  _DAT_180ccf608 = 0xffffffff;
  _DAT_180ccf60c = 0;
  _DAT_180ccf620 = 0;
  _DAT_180ccf628 = 0xf;
  DAT_180ccf610_1 = SUB1615((undefined1  [16])0x0,1);
  auVar4[0xf] = 0;
  auVar4._0_15_ = DAT_180ccf610_1;
  _DAT_180ccf610 = auVar4 << 8;
  _DAT_180ccf630 = 0;
  _DAT_180ccf638 = 0;
  _DAT_180ccf63c = 0x3f000000;
  _DAT_180ccf640 = 0x3f000000;
  _DAT_180ccf644 = 0x101010;
  _DAT_180ccf648 = 0x808080;
  _DAT_180ccf64c = 0xffffffff;
  DAT_180ccf650 = 0;
  DAT_180ccf654 = uVar5;
  DAT_180ccf658 = 0x3f000000;
  DAT_180ccf65c = 0x3f000000;
  DAT_180ccf660 = 0;
  DAT_180ccf668 = 0;
  _DAT_180ccf670 = (undefined1  [16])0x0;
  DAT_180ccf680 = 0;
  DAT_180ccf688 = 0;
  return &DAT_180ccf000;
}



