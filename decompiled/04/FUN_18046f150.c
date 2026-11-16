// FUN_18046f150 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18046f150 */

void FUN_18046f150(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  undefined1 auVar1 [16];
  undefined1 in_ZMM1 [64];
  undefined1 auVar2 [64];
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined1 uStack_124;
  ushort uStack_123;
  undefined1 uStack_121;
  undefined1 uStack_120;
  undefined1 uStack_11f;
  undefined2 uStack_11e;
  uint uStack_11c;
  longlong local_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  uint uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  auVar2 = ZEXT1664(in_ZMM1._0_16_);
  FUN_18063ab10(&local_158,0,0xa0);
  uStack_121 = 3;
  uStack_120 = 1;
  uStack_11e = 0;
  uStack_124 = 0;
  uStack_fc = 0x7f7fffff;
  uStack_e4 = 0x3f800000;
  uStack_ec = 0x3f800000;
  uStack_e8 = 0x3f800000;
  local_b8 = local_158;
  uStack_b0 = uStack_150;
  uStack_a8 = uStack_148;
  uStack_a0 = uStack_140;
  local_98 = local_138;
  uStack_60 = CONCAT44(0x7f7fffff,uStack_100);
  uStack_70 = uStack_110;
  uStack_68 = uStack_108;
  uStack_50 = CONCAT44(0x3f800000,uStack_f0);
  uStack_90 = *param_1;
  local_58 = local_f8;
  uStack_48 = 0x3f8000003f800000;
  uStack_40 = uStack_e0;
  local_38 = local_d8;
  uStack_30 = uStack_d0;
  uStack_28 = uStack_c8;
  uStack_20 = uStack_c0;
  auVar1 = vcmpss_avx(ZEXT816(0),auVar2._0_16_,1);
  _uStack_88 = CONCAT44((int)(CONCAT17(3,(uint7)uStack_123 << 0x28) >> 0x20),
                        *(undefined4 *)(param_1 + 1));
  auVar1 = vblendvps_avx(ZEXT416(uStack_11c),auVar2._0_16_,auVar1);
  if (param_3 != 0) {
    local_118 = param_3;
  }
  _uStack_80 = CONCAT44(auVar1._0_4_,(uint)CONCAT11(uStack_11f,1));
  local_78 = local_118;
  FUN_1804e3570(*(undefined8 *)(DAT_180bb8ae8 + 0x60),&local_b8);
  return;
}



