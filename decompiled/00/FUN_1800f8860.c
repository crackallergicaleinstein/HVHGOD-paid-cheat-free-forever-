// FUN_1800f8860 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800f8860 */

void FUN_1800f8860(undefined4 *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  uint7 uStack_14f;
  undefined8 local_138;
  longlong lStack_130;
  undefined8 local_128;
  undefined1 local_118 [16];
  undefined8 local_108;
  undefined8 local_100;
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined1 local_d8 [16];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_98 [16];
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38 [16];
  undefined8 local_28;
  undefined8 local_20;
  
  *param_1 = 3;
  param_1[1] = 1;
  local_118 = (undefined1  [16])0x0;
  local_108 = 0;
  local_100 = 0;
  FUN_18015ba30(local_118,&PTR_180700558,0);
  local_f8 = (undefined1  [16])0x0;
  local_e8 = 0;
  local_e0 = 0;
  FUN_18015ba30(local_f8,&PTR_180700558,0);
  lStack_130 = (ulonglong)uStack_14f << 8;
  local_138 = 0;
  local_128 = 0;
  FUN_18015a8b0(param_1 + 2,1,&local_138,local_f8,local_118,1);
  param_1[0x1c] = 0x3f800000;
  param_1[0x1d] = 0xe6000000;
  param_1[0x1e] = 3;
  param_1[0x1f] = 1;
  local_d8 = (undefined1  [16])0x0;
  local_c8 = 0;
  local_c0 = 0;
  FUN_18015ba30(local_d8,&PTR_180700558,0);
  local_b8 = (undefined1  [16])0x0;
  local_a8 = 0;
  local_a0 = 0;
  FUN_18015ba30(local_b8,&PTR_180700558,0);
  lStack_130 = (ulonglong)uStack_14f << 8;
  local_138 = 0;
  local_128 = 0;
  FUN_18015a8b0(param_1 + 0x20,1,&local_138,local_b8,local_d8,1);
  param_1[0x3a] = 0x3f800000;
  param_1[0x3b] = 0xe6000000;
  local_98 = (undefined1  [16])0x0;
  local_88 = 0;
  local_80 = 0;
  FUN_18015ba30(local_98,&PTR_180700558,0);
  local_78 = (undefined1  [16])0x0;
  local_68 = 0;
  local_60 = 0;
  FUN_18015ba30(local_78,&PTR_180700558,0);
  lStack_130 = (ulonglong)uStack_14f << 8;
  local_138 = 0;
  local_128 = 0;
  FUN_18015a8b0(param_1 + 0x3c,1,&local_138,local_78,local_98,1);
  param_1[0x56] = 0x3f800000;
  param_1[0x57] = 0xe6000000;
  *(undefined1 *)(param_1 + 0x58) = 1;
  *(undefined8 *)(param_1 + 0x59) = 0x42480000;
  local_48 = 0;
  local_40 = 0xf;
  local_58._1_15_ = SUB1615((undefined1  [16])0x0,1);
  auVar1[0xf] = 0;
  auVar1._0_15_ = local_58._1_15_;
  local_58 = auVar1 << 8;
  local_28 = 0;
  local_20 = 0xf;
  local_38._1_15_ = SUB1615((undefined1  [16])0x0,1);
  auVar2[0xf] = 0;
  auVar2._0_15_ = local_38._1_15_;
  local_38 = auVar2 << 8;
  lStack_130 = (ulonglong)uStack_14f << 8;
  local_138 = 0;
  local_128 = 0;
  FUN_18015a8b0(param_1 + 0x5c,0,&local_138,local_38,local_58,0);
  param_1[0x76] = 0xe1d2d2d2;
  param_1[0x77] = 0xe1ffffff;
  param_1[0x78] = 0xe1ffffff;
  return;
}



