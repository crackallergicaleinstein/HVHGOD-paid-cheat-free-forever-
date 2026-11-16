// FUN_1800f2bc0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800f2bc0 */

void FUN_1800f2bc0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 local_100 [16];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 local_e0 [16];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined1 local_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 local_30 [16];
  undefined8 local_20;
  
  local_a8 = *param_3;
  uStack_a0 = param_3[1];
  local_98 = *param_2;
  uStack_90 = param_2[1];
  uVar3 = FUN_1800aa290(&local_98,&local_a8);
  uVar4 = 0x22;
  local_100 = (undefined1  [16])0x0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  FUN_18015ba30(local_100,*param_2,param_2[1],param_4,uVar3,param_1,0x22);
  local_e0 = (undefined1  [16])0x0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  FUN_18015ba30(local_e0,*param_3,param_3[1]);
  local_84 = 7;
  local_70 = local_100._0_8_;
  uStack_68 = local_100._8_8_;
  uStack_60 = uStack_f0;
  uStack_58 = uStack_e8;
  uStack_f0 = 0;
  uStack_e8 = 0xf;
  auVar1[0xf] = 0;
  auVar1._0_15_ = local_100._1_15_;
  local_100 = auVar1 << 8;
  local_50 = local_e0._0_8_;
  uStack_48 = local_e0._8_8_;
  uStack_40 = uStack_d0;
  uStack_38 = uStack_c8;
  uStack_d0 = 0;
  uStack_c8 = 0xf;
  auVar2[0xf] = 0;
  auVar2._0_15_ = local_e0._1_15_;
  local_e0 = auVar2 << 8;
  local_b0 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_30 = (undefined1  [16])0x0;
  local_20 = 0;
  local_88 = uVar3;
  local_80 = param_1;
  local_78 = uVar4;
  FUN_1800aa3b0(&local_88);
  FUN_180111b90(&local_c0);
  FUN_18015c010(local_e0);
  FUN_18015c010(local_100);
  return;
}



