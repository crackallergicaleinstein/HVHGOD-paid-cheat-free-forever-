// FUN_1804304e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804304e0 */

void FUN_1804304e0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,float param_7,undefined4 param_8,
                  undefined4 param_9,uint param_10,uint param_11,float param_12)

{
  undefined4 *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined1 in_ZMM3 [64];
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  
  auVar4 = ZEXT816(0);
  auVar2 = vmaxss_avx(auVar4,ZEXT416(param_10));
  auVar3 = vmaxss_avx(auVar4,ZEXT416(param_11));
  puVar1 = *(undefined4 **)(param_1 + 0x80);
  local_b8 = 0;
  auVar4 = vmaxss_avx(auVar4,in_ZMM3._0_16_);
  local_b0 = param_2;
  local_b4 = 0x3f800000;
  puVar6 = &local_b8;
  if (0.0 <= param_7) {
    puVar6 = &param_7;
  }
  puVar5 = &local_b4;
  if (param_7 <= 1.0) {
    puVar5 = puVar6;
  }
  local_ac = param_3;
  local_a8 = auVar4._0_4_;
  local_9c = *puVar5;
  puVar6 = &local_b4;
  if (0.0 <= param_12) {
    puVar6 = &param_12;
  }
  local_b8 = 0x3f800000;
  puVar5 = &local_b8;
  if (param_12 <= 1.0) {
    puVar5 = puVar6;
  }
  local_b4 = 0;
  local_a4 = param_5;
  local_a0 = param_6;
  local_88 = *puVar5;
  local_98 = param_8;
  local_94 = param_9;
  local_90 = auVar2._0_4_;
  local_8c = auVar3._0_4_;
  if (puVar1 == *(undefined4 **)(param_1 + 0x88)) {
    FUN_180439480(param_1 + 0x78,puVar1,&local_b0);
  }
  else {
    *puVar1 = param_2;
    puVar1[1] = param_3;
    puVar1[2] = auVar4._0_4_;
    puVar1[3] = param_5;
    puVar1[4] = param_6;
    puVar1[5] = local_9c;
    puVar1[6] = param_8;
    puVar1[7] = param_9;
    puVar1[8] = local_90;
    puVar1[9] = local_8c;
    puVar1[10] = local_88;
    *(longlong *)(param_1 + 0x80) = *(longlong *)(param_1 + 0x80) + 0x2c;
  }
  return;
}



