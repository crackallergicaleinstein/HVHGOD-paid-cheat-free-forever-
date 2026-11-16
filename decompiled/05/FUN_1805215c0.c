// FUN_1805215c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805215c0 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1805215c0(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [15];
  undefined1 auVar4 [15];
  undefined8 uVar5;
  undefined1 local_3600 [16];
  undefined8 uStack_35f0;
  undefined8 uStack_35e8;
  undefined1 local_35e0 [16];
  undefined8 uStack_35d0;
  undefined8 uStack_35c8;
  undefined8 local_35c0;
  undefined8 local_35b8;
  undefined8 local_35b0;
  char *local_35a8;
  undefined8 local_35a0;
  char *local_3598;
  undefined8 local_3590;
  undefined4 local_3588;
  undefined1 local_3584;
  undefined *local_3580;
  undefined4 local_3578;
  undefined8 local_3570;
  undefined8 uStack_3568;
  undefined8 uStack_3560;
  undefined8 uStack_3558;
  undefined8 local_3550;
  undefined8 uStack_3548;
  undefined8 uStack_3540;
  undefined8 uStack_3538;
  undefined1 local_3530 [16];
  undefined8 local_3520;
  undefined1 local_3518 [4528];
  undefined1 local_2368 [4528];
  undefined1 local_11b8 [4520];
  undefined8 uStack_10;
  
  uStack_10 = 0x1805215d8;
  _DAT_180bbb2e0 = rendering::forge::_anon_C6659A99::player_layout_field::vftable;
  uVar5 = FUN_18045ffa0(local_3518);
  FUN_18063aed0(&DAT_180bbb2e8,uVar5,0x11ac);
  uVar5 = FUN_18045ffa0(local_2368);
  FUN_18063aed0(&DAT_180bbc494,uVar5,0x11ac);
  uVar5 = FUN_18045ffa0(local_11b8);
  FUN_18063aed0(&DAT_180bbd640,uVar5,0x11ac);
  DAT_180bbe7ec = 1;
  local_35a8 = "layout";
  local_35a0 = 6;
  local_3598 = "players menu";
  local_3590 = 0xc;
  local_3588 = FUN_1800aa290(&local_3598,&local_35a8);
  local_3600._1_15_ = SUB1615((undefined1  [16])0x0,1);
  auVar3 = (undefined1  [15])local_3600._1_15_;
  local_35e0._1_15_ = SUB1615((undefined1  [16])0x0,1);
  auVar4 = (undefined1  [15])local_35e0._1_15_;
  local_3584 = 9;
  local_3580 = &DAT_180bbb2e0;
  local_3578 = 1;
  local_3600._8_8_ = SUB168((undefined1  [16])0x0,8);
  local_3570 = 0;
  uStack_3568 = local_3600._8_8_;
  uStack_3560 = 0;
  uStack_3558 = 0xf;
  uStack_35f0 = 0;
  uStack_35e8 = 0xf;
  auVar1[0xf] = 0;
  auVar1._0_15_ = auVar3;
  local_3600 = auVar1 << 8;
  local_35e0._8_8_ = SUB168((undefined1  [16])0x0,8);
  local_3550 = 0;
  uStack_3548 = local_35e0._8_8_;
  uStack_3540 = 0;
  uStack_3538 = 0xf;
  uStack_35d0 = 0;
  uStack_35c8 = 0xf;
  auVar2[0xf] = 0;
  auVar2._0_15_ = auVar4;
  local_35e0 = auVar2 << 8;
  local_35b0 = 0;
  local_35b8 = 0;
  local_35c0 = 0;
  local_3530 = (undefined1  [16])0x0;
  local_3520 = 0;
  FUN_1800aa3b0(&local_3588);
  FUN_180111b90(&local_35c0);
  FUN_18015c010(local_35e0);
  FUN_18015c010(local_3600);
  return &DAT_180bbb2e0;
}



