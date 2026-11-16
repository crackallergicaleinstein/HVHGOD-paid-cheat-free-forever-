// FUN_1804e3ab0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804e3ab0 */

void FUN_1804e3ab0(undefined8 param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  ulonglong uVar6;
  bool bVar7;
  undefined1 in_XMM3 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [64];
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  ulonglong uStack_1d0;
  int iStack_1c8;
  undefined1 uStack_1c4;
  undefined2 uStack_1c3;
  undefined1 uStack_1c1;
  undefined1 uStack_1c0;
  byte bStack_1bf;
  undefined2 uStack_1be;
  uint uStack_1bc;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  ulonglong uStack_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
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
  undefined1 uStack_84;
  undefined3 uStack_83;
  undefined8 uStack_80;
  undefined8 local_78;
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
  
  iVar5 = (uint)(byte)param_2[10] * 0x100 + (uint)(byte)param_2[9] * 0x10000 +
          (uint)(byte)param_2[8] * 0x1000000 + (uint)(byte)param_2[0xb];
  auVar9 = ZEXT1664(in_XMM3);
  uVar2 = FUN_1804b8110(iVar5);
  if ((CONCAT31(CONCAT21(CONCAT11(*param_2,param_2[1]),param_2[2]),param_2[3]) == 0x57bc0000) &&
     (CONCAT31(CONCAT21(CONCAT11(param_2[4],param_2[5]),param_2[6]),param_2[7]) == 0)) {
    uVar6 = (ulonglong)(byte)param_2[0xb] +
            (ulonglong)CONCAT21(CONCAT11(param_2[8],param_2[9]),param_2[10]) * 0x100 + uVar2;
    DAT_180c62d60 = param_2;
    DAT_180c62d68 = uVar6;
    DAT_180c62d90 = uVar2;
    DAT_180c62d98 = uVar2;
    puVar3 = (undefined1 *)FUN_1804eb240(param_2 + 0x10);
    if (puVar3 != param_2 + 0x10) {
      do {
        if (uVar6 < DAT_180c62d98) break;
        puVar4 = (undefined1 *)FUN_1804eb240(puVar3);
        bVar7 = puVar4 != puVar3;
        puVar3 = puVar4;
      } while (bVar7);
    }
  }
  auVar8 = auVar9._0_16_;
  if (param_5 == (undefined8 *)0x0) {
    FUN_18063ab10(&local_1f8,0,0xa0);
    auVar8 = auVar9._0_16_;
    uStack_1a0 = CONCAT44(0x7f7fffff,(undefined4)uStack_1a0);
    uStack_190 = CONCAT44(0x3f800000,(undefined4)uStack_190);
    local_158 = local_1f8;
    uStack_150 = uStack_1f0;
    uStack_148 = uStack_1e8;
    uStack_140 = uStack_1e0;
    uStack_128 = (ulonglong)CONCAT25(uStack_1c3,CONCAT14(1,iStack_1c8));
    uStack_120 = CONCAT44(uStack_1bc,(uint)bStack_1bf << 8);
    local_138 = local_1d8;
    uStack_130 = uStack_1d0;
    local_118 = local_1b8;
    uStack_110 = uStack_1b0;
    uStack_108 = uStack_1a8;
    uStack_100 = uStack_1a0;
    local_f8 = local_198;
    uStack_f0 = uStack_190;
    uStack_e8 = 0x3f8000003f800000;
    uStack_e0 = uStack_180;
    local_d8 = local_178;
    uStack_d0 = uStack_170;
    uStack_c8 = uStack_168;
    uStack_c0 = uStack_160;
  }
  else {
    local_158 = *param_5;
    uStack_150 = param_5[1];
    uStack_148 = param_5[2];
    uStack_140 = param_5[3];
    local_d8 = param_5[0x10];
    uStack_d0 = param_5[0x11];
    uStack_c8 = param_5[0x12];
    uStack_c0 = param_5[0x13];
    local_138 = param_5[4];
    uStack_130 = param_5[5];
    uStack_128 = param_5[6];
    uStack_120 = param_5[7];
    local_118 = param_5[8];
    uStack_110 = param_5[9];
    uStack_108 = param_5[10];
    uStack_100 = param_5[0xb];
    local_f8 = param_5[0xc];
    uStack_f0 = param_5[0xd];
    uStack_e8 = param_5[0xe];
    uStack_e0 = param_5[0xf];
  }
  local_b8 = local_158;
  uStack_b0 = uStack_150;
  uStack_a8 = uStack_148;
  uStack_a0 = uStack_140;
  local_98 = local_138;
  uStack_90 = uStack_130;
  uStack_80 = uStack_120;
  local_78 = local_118;
  uStack_70 = uStack_110;
  uStack_68 = uStack_108;
  uStack_60 = uStack_100;
  local_58 = local_f8;
  uStack_50 = uStack_f0;
  uStack_48 = uStack_e8;
  uStack_40 = uStack_e0;
  local_38 = local_d8;
  uStack_30 = uStack_d0;
  uStack_28 = uStack_c8;
  uStack_20 = uStack_c0;
  uStack_83 = (undefined3)(uStack_128 >> 0x28);
  _uStack_88 = CONCAT14(1,(int)uStack_128);
  local_1f8 = local_158;
  uStack_1f0 = uStack_150;
  uStack_1e8 = uStack_148;
  uStack_1e0 = uStack_140;
  local_1d8 = local_138;
  uStack_1c4 = 1;
  uStack_1c3 = (undefined2)(uStack_128 >> 0x28);
  uStack_1c1 = (undefined1)(uStack_128 >> 0x38);
  uStack_1c0 = (undefined1)uStack_120;
  bStack_1bf = (byte)((ulonglong)uStack_120 >> 8);
  uStack_1be = (undefined2)((ulonglong)uStack_120 >> 0x10);
  uStack_1bc = (uint)((ulonglong)uStack_120 >> 0x20);
  local_1b8 = local_118;
  uStack_1b0 = uStack_110;
  uStack_1a8 = uStack_108;
  uStack_1a0 = uStack_100;
  local_198 = local_f8;
  uStack_190 = uStack_f0;
  uStack_188 = uStack_e8;
  uStack_180 = uStack_e0;
  local_178 = local_d8;
  uStack_170 = uStack_d0;
  uStack_168 = uStack_c8;
  uStack_160 = uStack_c0;
  auVar1 = vcmpss_avx(ZEXT816(0),auVar8,1);
  auVar8 = vblendvps_avx(ZEXT416(uStack_1bc),auVar8,auVar1);
  uStack_1bc = auVar8._0_4_;
  uStack_1d0 = uVar2;
  iStack_1c8 = iVar5;
  FUN_1804e3570(param_1,&local_1f8);
  return;
}



