// FUN_1800f9610 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800f9610 */

void FUN_1800f9610(longlong param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  uint7 uStack_ff;
  undefined8 local_e8;
  longlong lStack_e0;
  undefined8 local_d8;
  undefined1 local_c8 [16];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28 [16];
  undefined8 local_18;
  undefined8 local_10;
  
  local_b8 = 0;
  local_b0 = 0xf;
  local_c8._1_15_ = SUB1615((undefined1  [16])0x0,1);
  auVar1[0xf] = 0;
  auVar1._0_15_ = local_c8._1_15_;
  local_c8 = auVar1 << 8;
  local_98 = 0;
  local_90 = 0xf;
  local_a8._1_15_ = SUB1615((undefined1  [16])0x0,1);
  auVar2[0xf] = 0;
  auVar2._0_15_ = local_a8._1_15_;
  local_a8 = auVar2 << 8;
  lStack_e0 = (ulonglong)uStack_ff << 8;
  local_e8 = 0;
  local_d8 = 0;
  FUN_18015a8b0(0,0,&local_e8,local_a8,local_c8,0);
  local_78 = 0;
  local_70 = 0xf;
  local_88._1_15_ = SUB1615((undefined1  [16])0x0,1);
  auVar3[0xf] = 0;
  auVar3._0_15_ = local_88._1_15_;
  local_88 = auVar3 << 8;
  local_58 = 0;
  local_50 = 0xf;
  local_68._1_15_ = SUB1615((undefined1  [16])0x0,1);
  auVar4[0xf] = 0;
  auVar4._0_15_ = local_68._1_15_;
  local_68 = auVar4 << 8;
  lStack_e0 = (ulonglong)uStack_ff << 8;
  local_e8 = 0;
  local_d8 = 0;
  FUN_18015a8b0(param_1 + 0x68,0,&local_e8,local_68,local_88,0);
  local_38 = 0;
  local_30 = 0xf;
  local_48._1_15_ = SUB1615((undefined1  [16])0x0,1);
  auVar5[0xf] = 0;
  auVar5._0_15_ = local_48._1_15_;
  local_48 = auVar5 << 8;
  local_18 = 0;
  local_10 = 0xf;
  local_28._1_15_ = SUB1615((undefined1  [16])0x0,1);
  auVar6[0xf] = 0;
  auVar6._0_15_ = local_28._1_15_;
  local_28 = auVar6 << 8;
  lStack_e0 = (ulonglong)uStack_ff << 8;
  local_e8 = 0;
  local_d8 = 0;
  FUN_18015a8b0(param_1 + 0xd0,0,&local_e8,local_28,local_48,0);
  *(undefined4 *)(param_1 + 0x138) = 0xffeeeeee;
  *(undefined4 *)(param_1 + 0x13c) = 0xffd2d2d2;
  *(undefined4 *)(param_1 + 0x140) = 0xff6e6eeb;
  *(undefined4 *)(param_1 + 0x144) = 0xff6e6eeb;
  *(undefined4 *)(param_1 + 0x148) = 0x3f800000;
  return;
}



