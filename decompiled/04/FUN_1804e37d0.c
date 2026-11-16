// FUN_1804e37d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804e37d0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804e37d0(longlong param_1)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined *puVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [64];
  undefined1 auVar11 [64];
  undefined1 auVar12 [64];
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 uStack_158;
  undefined1 uStack_154;
  undefined2 uStack_153;
  undefined1 uStack_151;
  undefined1 uStack_150;
  byte bStack_14f;
  undefined2 uStack_14e;
  float fStack_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 uStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  ulonglong uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  float fStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulonglong uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_1b8;
  auVar12 = ZEXT464(0x3f800000);
  auVar10 = ZEXT464(0x41500000);
  lVar1 = *(longlong *)(param_1 + 200);
  auVar3._12_4_ = 0;
  auVar3._0_12_ = ZEXT812(0);
  auVar11 = ZEXT1264(ZEXT812(0)) << 0x20;
  if (lVar1 != 0) {
    fVar9 = *(float *)(lVar1 + 0x38);
    auVar2 = vcmpss_avx(ZEXT416((uint)fVar9),auVar3 << 0x20,4);
    auVar2 = vblendvps_avx(auVar12._0_16_,ZEXT416((uint)fVar9),auVar2);
    fVar8 = auVar2._0_4_;
    if ((fVar9 == 1.0) && (*(float *)(lVar1 + 0x30) <= 0.0)) {
      auVar4 = vpcmpeqd_avx(ZEXT116(*(byte *)(lVar1 + 0x78)),SUB6416(ZEXT464(0),0));
      auVar2 = vblendvps_avx(SUB6416(ZEXT464(0x40000000),0),auVar2,auVar4);
      fVar8 = auVar2._0_4_;
    }
    auVar3 = vcmpss_avx(auVar3 << 0x20,ZEXT416(*(uint *)(lVar1 + 0xc78)),1);
    auVar3 = vblendvps_avx(auVar10._0_16_,ZEXT416(*(uint *)(lVar1 + 0xc78)),auVar3);
    if (auVar3._0_4_ * *(float *)(lVar1 + 0xc80) * *(float *)(lVar1 + 0xc7c) * fVar8 < 15.0) {
      FUN_18063ab10(&local_188,0,0xa0);
      fVar9 = auVar10._0_4_;
      uStack_154 = 1;
      uStack_12c = 0x7f7fffff;
      fStack_11c = auVar12._0_4_;
      uStack_151 = 0;
      uStack_150 = 0;
      uStack_14e = 0;
      local_e8 = local_188;
      uVar5 = local_e8;
      uStack_e0 = uStack_180;
      uStack_d8 = uStack_178;
      uStack_d0 = uStack_170;
      local_c8 = local_168;
      uStack_c0 = uStack_160;
      uStack_90 = CONCAT44(0x7f7fffff,uStack_130);
      local_a8 = local_148;
      uStack_a0 = uStack_140;
      uStack_98 = uStack_138;
      uStack_80 = CONCAT44(fStack_11c,uStack_120);
      uStack_78 = CONCAT44(fStack_11c,fStack_11c);
      local_88 = local_128;
      uStack_70 = uStack_110;
      local_68 = local_108;
      uStack_60 = uStack_100;
      uStack_58 = uStack_f8;
      uStack_50 = uStack_f0;
      uStack_b8._0_6_ = (undefined6)CONCAT25(uStack_153,CONCAT14(1,uStack_158));
      uStack_b8._0_7_ = CONCAT16(1,(undefined6)uStack_b8);
      uStack_b8 = (ulonglong)(uint7)uStack_b8;
      if (fStack_14c <= auVar11._0_4_) {
        uStack_70 = uStack_110 | 0x10;
        fStack_14c = fVar9;
      }
      _uStack_b0 = CONCAT44(fStack_14c,(uint)bStack_14f << 8);
      local_e8._0_1_ = (char)local_188;
      bVar7 = (char)local_e8 == '\0';
      fStack_118 = fStack_11c;
      fStack_114 = fStack_11c;
      local_e8 = uVar5;
      if (bVar7) {
        auVar10 = ZEXT1664(auVar10._0_16_);
        FUN_1804b08d0(&local_e8,0x28,"ProggyClean.ttf");
        fVar9 = auVar10._0_4_;
        fStack_14c = fStack_ac;
      }
      puVar6 = &DAT_1807bbea0;
      uStack_b0 = CONCAT22(0x85,(undefined2)uStack_b0);
      fStack_14c = fStack_14c / fVar9;
      goto LAB_1804e3a5f;
    }
  }
  FUN_18063ab10(&local_188,0,0xa0);
  uStack_154 = 1;
  uStack_12c = 0x7f7fffff;
  fStack_11c = auVar12._0_4_;
  uStack_151 = 0;
  uStack_150 = 0;
  uStack_14e = 0;
  local_e8 = local_188;
  uVar5 = local_e8;
  uStack_e0 = uStack_180;
  uStack_d8 = uStack_178;
  uStack_d0 = uStack_170;
  uStack_b0 = (uint)bStack_14f << 8;
  fStack_ac = fStack_14c;
  local_c8 = local_168;
  uStack_c0 = uStack_160;
  uStack_90 = CONCAT44(0x7f7fffff,uStack_130);
  local_a8 = local_148;
  uStack_a0 = uStack_140;
  uStack_98 = uStack_138;
  uStack_80 = CONCAT44(fStack_11c,uStack_120);
  local_88 = local_128;
  uStack_70 = uStack_110;
  local_68 = local_108;
  uStack_60 = uStack_100;
  uStack_58 = uStack_f8;
  uStack_50 = uStack_f0;
  uStack_b8._0_6_ = (undefined6)CONCAT25(uStack_153,CONCAT14(1,uStack_158));
  uStack_b8._0_7_ = CONCAT16(1,(undefined6)uStack_b8);
  uStack_b8 = (ulonglong)(uint7)uStack_b8;
  if (fStack_14c <= auVar11._0_4_) {
    uStack_70 = uStack_110 | 0x10;
    fStack_ac = auVar10._0_4_;
  }
  local_e8._0_1_ = (char)local_188;
  bVar7 = (char)local_e8 == '\0';
  fStack_118 = fStack_11c;
  fStack_114 = fStack_11c;
  local_e8 = uVar5;
  uStack_78._0_4_ = fStack_11c;
  uStack_78._4_4_ = fStack_11c;
  if (bVar7) {
    FUN_1804b08d0(&local_e8,0x28,"ProggyForever.ttf");
  }
  uStack_78 = CONCAT44(uStack_78._4_4_ * 1.015,(float)uStack_78);
  fStack_14c = fStack_ac * 0.0625 * 0.5;
  puVar6 = &DAT_1807b85b0;
LAB_1804e3a5f:
  local_198 = &local_e8;
  uStack_98 = CONCAT44(fStack_14c + uStack_98._4_4_,(undefined4)uStack_98);
  FUN_1804e3ab0(param_1,puVar6);
}



