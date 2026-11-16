// FUN_18043bb90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18043bb90 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18043bb90(undefined1 (*param_1) [16],undefined8 param_2,undefined8 param_3,char param_4)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 (*pauVar8) [16];
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  float fVar15;
  undefined1 in_ZMM1 [64];
  undefined1 auVar16 [16];
  undefined1 in_ZMM2 [64];
  undefined1 auVar17 [16];
  float fVar18;
  undefined1 auVar19 [64];
  undefined8 uVar20;
  undefined1 auVar21 [64];
  undefined1 auVar22 [16];
  undefined1 auVar23 [64];
  undefined1 auVar24 [64];
  undefined1 auVar25 [64];
  undefined8 uVar26;
  undefined1 auVar27 [64];
  undefined1 auVar28 [64];
  undefined1 auVar29 [64];
  undefined1 auStack_228 [32];
  float local_208;
  longlong local_200;
  undefined1 *local_1f8;
  float local_1f0;
  undefined4 local_1e8;
  undefined4 local_1e0;
  undefined4 local_1d8;
  ulonglong local_1c8;
  undefined1 local_1c0 [16];
  undefined1 local_1a8 [16];
  undefined1 auStack_198 [16];
  undefined1 local_188 [16];
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 local_168 [12];
  undefined4 uStack_15c;
  undefined1 local_158 [16];
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined2 local_13b;
  undefined4 local_138;
  ulonglong local_130;
  undefined8 local_128;
  undefined2 local_120;
  float local_11c;
  float local_118;
  undefined4 local_114;
  undefined8 ****local_108 [2];
  longlong local_f8;
  ulonglong local_f0;
  ulonglong local_d8;
  
  local_d8 = DAT_1808d5f00 ^ (ulonglong)auStack_228;
  auVar21 = ZEXT1664(in_ZMM2._0_16_);
  auVar24 = ZEXT1664(in_ZMM1._0_16_);
  lVar5 = FUN_180439770();
  lVar6 = FUN_180439770();
  lVar10 = 0;
  if (*(longlong *)(lVar6 + 0x478) != *(longlong *)(lVar6 + 0x480)) {
    lVar10 = *(longlong *)(lVar6 + 0x480) + -0x78;
  }
  if (lVar10 != 0) {
    local_1a8 = *param_1;
    uVar13 = 0xcbf29ce484222325;
    uVar11 = 0;
    if (*(ulonglong *)(*param_1 + 8) != 0) {
      do {
        uVar13 = (uVar13 ^ *(byte *)(uVar11 + local_1a8._0_8_)) * 0x100000001b3;
        uVar11 = uVar11 + 1;
      } while (uVar11 < *(ulonglong *)(*param_1 + 8));
    }
    lVar6 = FUN_180439770();
    local_1c8 = uVar13;
    for (puVar12 = *(ulonglong **)(lVar6 + 0x490); puVar12 != *(ulonglong **)(lVar6 + 0x498);
        puVar12 = puVar12 + 1) {
      local_1c8 = (local_1c8 ^ *puVar12) * 0x100000001b3;
    }
    local_1a8 = *param_1;
    FUN_18043a0a0(local_108,local_1a8);
    uVar1 = *(undefined4 *)(lVar5 + 0x1bc);
    auVar23 = ZEXT1664(CONCAT412(uVar1,CONCAT48(uVar1,CONCAT44(uVar1,uVar1))));
    auVar16._0_8_ = -(ulonglong)(local_f8 == 0);
    auVar16._8_8_ = 0xffffffffffffffff;
    auVar22._12_4_ = 0;
    auVar22._0_12_ = ZEXT812(0);
    auVar19 = ZEXT1264(ZEXT812(0)) << 0x20;
    auVar22 = vblendvps_avx(SUB6416(ZEXT464(0x42300000),0),auVar22 << 0x20,auVar16);
    auVar25 = ZEXT1664(auVar22);
    if (auVar24._0_4_ <= 0.0) {
      FUN_18043b1e0(local_1c0);
      auVar24 = ZEXT464((uint)local_1c0._0_4_);
    }
    if (auVar21._0_4_ <= auVar19._0_4_) {
      if (param_4 == '\0') {
        uVar11 = ((((((((local_1c8 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                       local_1c8 >> 8 & 0xff) * 0x100000001b3 ^ local_1c8 >> 0x10 & 0xff) *
                      0x100000001b3 ^ local_1c8 >> 0x18 & 0xff) * 0x100000001b3 ^
                    local_1c8 >> 0x20 & 0xff) * 0x100000001b3 ^ local_1c8 >> 0x28 & 0xff) *
                   0x100000001b3 ^ local_1c8 >> 0x30 & 0xff) * 0x100000001b3 ^ local_1c8 >> 0x38) *
                 0x100000001b3 & *(ulonglong *)(lVar5 + 0x540);
        lVar6 = *(longlong *)(*(longlong *)(lVar5 + 0x528) + 8 + uVar11 * 0x10);
        lVar7 = *(longlong *)(lVar5 + 0x518);
        if (lVar6 == lVar7) {
LAB_18043bdd4:
          lVar6 = 0;
        }
        else {
          uVar13 = *(ulonglong *)(lVar6 + 0x10);
          while (local_1c8 != uVar13) {
            if (lVar6 == *(longlong *)(*(longlong *)(lVar5 + 0x528) + uVar11 * 0x10))
            goto LAB_18043bdd4;
            lVar6 = *(longlong *)(lVar6 + 8);
            uVar13 = *(ulonglong *)(lVar6 + 0x10);
          }
        }
        if (lVar6 == 0) {
          lVar6 = lVar7;
        }
        if (lVar6 == lVar7) {
          auVar21 = ZEXT464(0x42c80000);
        }
        else {
          auVar21 = ZEXT464(*(uint *)(lVar6 + 0x18));
        }
      }
      else {
        auVar21 = ZEXT464(0x43160000);
      }
    }
    lVar7 = FUN_180439770();
    uVar20 = auVar21._0_8_;
    lVar6 = 0;
    if (*(longlong *)(lVar7 + 0x478) != *(longlong *)(lVar7 + 0x480)) {
      lVar6 = *(longlong *)(lVar7 + 0x480) + -0x78;
    }
    fVar18 = auVar19._0_4_;
    fVar15 = fVar18;
    if (fVar18 < *(float *)(lVar6 + 0x38)) {
      fVar15 = *(float *)(lVar6 + 0x38) + *(float *)(lVar5 + 500);
    }
    fVar15 = (*(float *)(lVar10 + 0x2c) - (fVar15 + *(float *)(lVar6 + 0x34))) -
             *(float *)(lVar5 + 0x1ec);
    if ((fVar18 < fVar15) && (*(char *)(lVar10 + 0x69) == '\0')) {
      auVar22 = vminss_avx(ZEXT416((uint)fVar15),auVar21._0_16_);
      uVar20 = auVar22._0_8_;
    }
    pauVar8 = (undefined1 (*) [16])FUN_18043b290(local_1a8,auVar24._0_8_,uVar20,auVar19._0_8_);
    auVar21 = ZEXT1664(*pauVar8);
    auVar28 = ZEXT1664(auVar19._0_16_);
    auVar24 = ZEXT1664(auVar19._0_16_);
    if (param_4 != '\0') {
      plVar9 = (longlong *)FUN_18043f3c0(lVar5 + 0x550,local_1a8,&local_1c8);
      auVar28 = ZEXT464(*(uint *)(*plVar9 + 0x18));
      auVar24 = ZEXT464(0x41600000);
    }
    uStack_178 = 0;
    uStack_170 = 0xf;
    local_188._1_15_ = SUB1615((undefined1  [16])0x0,1);
    auVar2[0xf] = 0;
    auVar2._0_15_ = local_188._1_15_;
    local_188 = auVar2 << 8;
    _local_168 = (undefined1  [16])0x0;
    auStack_198 = ZEXT816(0);
    local_148 = auVar19._0_4_;
    local_13b = 0;
    local_130 = 0;
    local_128 = 0;
    local_120 = 0;
    local_1a8 = (undefined1  [16])0x0;
    local_158 = auStack_198;
    local_144 = local_148;
    local_140 = local_148;
    local_138 = local_148;
    local_11c = (float)local_148;
    local_118 = (float)local_148;
    local_114 = local_148;
    FUN_18015ba30(local_1a8,*(undefined8 *)*param_1,*(undefined8 *)(*param_1 + 8));
    FUN_18015c010(local_188);
    local_188 = local_1a8;
    uStack_178 = auStack_198._0_8_;
    uStack_170 = auStack_198._8_8_;
    auStack_198 = ZEXT816(0xf) << 0x40;
    auVar3[0xf] = 0;
    auVar3._0_15_ = local_1a8._1_15_;
    local_1a8 = auVar3 << 8;
    auVar19 = ZEXT1664(auVar19._0_16_);
    auVar21 = ZEXT1664(auVar21._0_16_);
    auVar23 = ZEXT1664(auVar23._0_16_);
    auVar25 = ZEXT1664(auVar25._0_16_);
    auVar27 = ZEXT1664(auVar24._0_16_);
    auVar29 = ZEXT1664(auVar28._0_16_);
    FUN_18015c010(local_1a8);
    auVar16 = auVar21._0_16_;
    auVar22 = vshufps_avx(auVar16,auVar16,0x55);
    auVar24 = ZEXT1664(auVar22);
    local_168._4_4_ = auVar22._0_4_;
    local_168._0_4_ = auVar21._0_4_;
    auVar22 = vshufps_avx(auVar16,auVar16,0xaa);
    auVar28 = ZEXT1664(auVar22);
    local_168._8_4_ = auVar22._0_4_ - auVar27._0_4_;
    auVar22 = vshufps_avx(auVar16,auVar16,0xff);
    auVar27 = ZEXT1664(auVar22);
    uStack_15c = auVar22._0_4_;
    local_118 = auVar25._0_4_;
    local_11c = auVar29._0_4_;
    local_158._4_4_ = (local_118 + *(float *)(lVar5 + 0x1ec)) - local_11c;
    local_158._0_4_ = *(undefined4 *)(lVar5 + 0x1e8);
    local_13b = CONCAT11(1,(undefined1)local_13b);
    local_130 = local_1c8;
    local_120 = CONCAT11(param_4,(undefined1)local_120);
    FUN_18043ea60(lVar5 + 0x478,local_188);
    lVar10 = FUN_180439770();
    if (*(longlong *)(lVar10 + 0x4a8) == *(longlong *)(lVar10 + 0x4b0)) {
      puVar14 = &DAT_180bbac80;
    }
    else {
      puVar14 = &DAT_180bbabe8 + (longlong)*(int *)(*(longlong *)(lVar10 + 0x4b0) + -4) * 0x13;
    }
    local_1c0 = auVar23._0_16_;
    local_1f8 = local_1a8;
    local_200 = CONCAT44(local_200._4_4_,*(undefined4 *)(lVar5 + 0x230));
    local_208 = auVar27._0_4_;
    local_1a8 = local_1c0;
    FUN_180430970(puVar14,auVar21._0_8_,auVar24._0_8_,auVar28._0_8_);
    auVar22 = auVar23._0_16_;
    if (auVar19._0_4_ < auVar25._0_4_) {
      local_1a8._0_8_ = local_108;
      if (0xf < local_f0) {
        local_1a8._0_8_ = local_108[0];
      }
      if (DAT_180bbadc8 == DAT_180bbadd0) {
        lVar10 = DAT_180bbade0;
      }
      else {
        lVar10 = *(longlong *)(DAT_180bbadd0 + -8);
      }
      if (lVar10 == 0) {
        auVar29 = ZEXT1664(auVar19._0_16_);
      }
      else {
        local_1a8._8_8_ = local_f8;
        FUN_180430010(lVar10,local_1c0,local_1a8);
        auVar29 = ZEXT464((uint)local_1c0._4_4_);
      }
      iVar4 = FUN_180440490(local_1a8);
      fVar15 = auVar29._0_4_;
      lVar10 = *(longlong *)(lVar5 + 0x2c0 + (longlong)iVar4 * 8);
      if (lVar10 != 0) {
        local_1d8 = *(undefined4 *)(lVar5 + 0x2b4);
        local_1e0 = 0x3f800000;
        local_1e8 = 0x3f800000;
        local_1f0 = auVar19._0_4_;
        local_1f8 = (undefined1 *)CONCAT44(local_1f8._4_4_,local_1f0);
        local_208 = 18.0;
        local_200 = lVar10;
        FUN_180435220(puVar14,auVar21._0_4_ + *(float *)(lVar5 + 0x1e8),
                      (auVar25._0_4_ - 18.0) * 0.5 + auVar24._0_4_);
        fVar15 = auVar29._0_4_;
      }
      local_208 = *(float *)(lVar5 + 0x2b0);
      local_1a8._0_8_ = local_108;
      if (0xf < local_f0) {
        local_1a8._0_8_ = local_108[0];
      }
      local_1a8._8_8_ = local_f8;
      auVar17._0_8_ = -(ulonglong)(lVar10 == 0);
      auVar17._8_8_ = 0xffffffffffffffff;
      auVar22 = vblendvps_avx(SUB6416(ZEXT464(0x41e00000),0),auVar19._0_16_,auVar17);
      local_200 = 0;
      FUN_1804340b0(puVar14,auVar22._0_4_ + auVar21._0_4_ + *(float *)(lVar5 + 0x1e8),
                    (auVar25._0_4_ - fVar15) * 0.5 + auVar24._0_4_,local_1a8);
      auVar22 = auVar23._0_16_;
    }
    uVar20 = auVar21._0_8_;
    uVar26 = auVar28._0_8_;
    auVar16 = auVar19._0_16_;
    local_208 = auVar27._0_4_;
    fVar15 = auVar25._0_4_;
    if (auVar19._0_4_ < *(float *)(lVar5 + 0x200)) {
      local_1f8 = local_1a8;
      local_200 = CONCAT44(local_200._4_4_,*(undefined4 *)(lVar5 + 0x234));
      local_1f0 = *(float *)(lVar5 + 0x200);
      local_1c0 = auVar22;
      local_1a8 = auVar22;
      FUN_1804330f0(puVar14,uVar20,auVar24._0_8_,uVar26);
      uVar20 = auVar21._0_8_;
      uVar26 = auVar28._0_8_;
      auVar16 = auVar19._0_16_;
      local_208 = auVar27._0_4_;
      fVar15 = auVar25._0_4_;
    }
    auVar22 = vmaxss_avx(ZEXT416((uint)(local_208 - fVar15)),auVar16);
    local_208 = auVar22._0_4_;
    FUN_180430680(puVar14,uVar20,auVar24._0_4_ + fVar15,uVar26);
    uVar11 = local_1c8;
    local_1c0._0_8_ = local_1c8;
    lVar10 = FUN_180439770();
    puVar12 = *(ulonglong **)(lVar10 + 0x498);
    if (puVar12 == *(ulonglong **)(lVar10 + 0x4a0)) {
      FUN_1801b6250(lVar10 + 0x490,puVar12,local_1c0);
    }
    else {
      *puVar12 = uVar11;
      *(longlong *)(lVar10 + 0x498) = *(longlong *)(lVar10 + 0x498) + 8;
    }
    FUN_18015c010(local_188);
    FUN_18015c010(local_108);
  }
}



