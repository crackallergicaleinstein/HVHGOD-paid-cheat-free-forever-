// FUN_1800f9280 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800f9280 */

void FUN_1800f9280(longlong param_1)

{
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
  FUN_18015a8b0(param_1,1,&local_138,local_f8,local_118,0);
  *(undefined4 *)(param_1 + 0x68) = 0xe1eeeeee;
  *(undefined4 *)(param_1 + 0x6c) = 0xe1ffffff;
  *(undefined4 *)(param_1 + 0x70) = 0xaf000000;
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
  FUN_18015a8b0(param_1 + 0x78,1,&local_138,local_b8,local_d8,0);
  *(undefined4 *)(param_1 + 0xe0) = 0x3f800000;
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
  FUN_18015a8b0(param_1 + 0xe8,0,&local_138,local_78,local_98,0);
  local_58 = (undefined1  [16])0x0;
  local_48 = 0;
  local_40 = 0;
  FUN_18015ba30(local_58,&PTR_180700558,0);
  local_38 = (undefined1  [16])0x0;
  local_28 = 0;
  local_20 = 0;
  FUN_18015ba30(local_38,&PTR_180700558,0);
  lStack_130 = (ulonglong)uStack_14f << 8;
  local_138 = 0;
  local_128 = 0;
  FUN_18015a8b0(param_1 + 0x150,1,&local_138,local_38,local_58,0);
  *(undefined4 *)(param_1 + 0x1b8) = 0xff4646eb;
  *(undefined4 *)(param_1 + 0x1bc) = 0x3fa00000;
  *(undefined4 *)(param_1 + 0x1c0) = 0x3fc00000;
  return;
}



