// FUN_1800a70b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800a70b0 */

void FUN_1800a70b0(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [15];
  undefined1 auVar4 [15];
  undefined1 local_f0 [16];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 local_d0 [16];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  char *local_98;
  undefined8 local_90;
  char *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined1 local_74;
  undefined **local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined1 local_20 [16];
  undefined8 local_10;
  
  local_98 = "appearance";
  local_90 = 10;
  local_88 = "imported menu";
  local_80 = 0xd;
  local_78 = FUN_1800aa290(&local_88);
  local_f0._1_15_ = SUB1615((undefined1  [16])0x0,1);
  auVar3 = (undefined1  [15])local_f0._1_15_;
  local_d0._1_15_ = SUB1615((undefined1  [16])0x0,1);
  auVar4 = (undefined1  [15])local_d0._1_15_;
  local_74 = 9;
  local_70 = &PTR_vftable_1808e4f98;
  local_68 = 1;
  local_f0._8_8_ = SUB168((undefined1  [16])0x0,8);
  local_60 = 0;
  uStack_58 = local_f0._8_8_;
  uStack_50 = 0;
  uStack_48 = 0xf;
  uStack_e0 = 0;
  uStack_d8 = 0xf;
  auVar1[0xf] = 0;
  auVar1._0_15_ = auVar3;
  local_f0 = auVar1 << 8;
  local_d0._8_8_ = SUB168((undefined1  [16])0x0,8);
  local_40 = 0;
  uStack_38 = local_d0._8_8_;
  uStack_30 = 0;
  uStack_28 = 0xf;
  uStack_c0 = 0;
  uStack_b8 = 0xf;
  auVar2[0xf] = 0;
  auVar2._0_15_ = auVar4;
  local_d0 = auVar2 << 8;
  local_a0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_20 = (undefined1  [16])0x0;
  local_10 = 0;
  FUN_1800aa3b0(&local_78);
  FUN_180111b90(&local_b0);
  FUN_18015c010(local_d0);
  FUN_18015c010(local_f0);
  atexit(FUN_180663d00);
  return;
}



