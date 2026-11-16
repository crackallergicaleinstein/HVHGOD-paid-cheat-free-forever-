// FUN_180348910 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180348910 */

void FUN_180348910(undefined8 *param_1,uint param_2,float param_3,uint param_4,byte *param_5,
                  float param_6,uint param_7)

{
  float fVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  short sVar7;
  float *pfVar8;
  float *pfVar9;
  int iVar10;
  float fVar11;
  uint uVar12;
  undefined4 uVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [64];
  undefined1 auVar17 [64];
  uint uVar18;
  float local_238;
  float local_234 [3];
  uint local_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  uint uStack_218;
  byte bStack_214;
  undefined2 uStack_213;
  undefined1 uStack_211;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  uint uStack_160;
  undefined4 uStack_15c;
  float fStack_158;
  float fStack_154;
  undefined4 uStack_150;
  undefined2 uStack_14c;
  ushort uStack_14a;
  float local_148;
  float fStack_144;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
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
  
  if ((*param_5 != 0) || (*(int *)(param_5 + 8) != 0)) {
    uStack_130 = *(undefined8 *)(param_5 + 8);
    uStack_128 = *(undefined8 *)(param_5 + 0x10);
    uStack_120 = *(undefined8 *)(param_5 + 0x18);
    local_b8 = *(undefined8 *)(param_5 + 0x80);
    uStack_b0 = *(undefined8 *)(param_5 + 0x88);
    uStack_a8 = *(undefined8 *)(param_5 + 0x90);
    uStack_a0 = *(undefined8 *)(param_5 + 0x98);
    local_118 = *(undefined8 *)(param_5 + 0x20);
    uStack_110 = *(undefined8 *)(param_5 + 0x28);
    uStack_108 = *(undefined8 *)(param_5 + 0x30);
    uStack_100 = *(undefined8 *)(param_5 + 0x38);
    local_f8 = *(undefined8 *)(param_5 + 0x40);
    uStack_f0 = *(undefined8 *)(param_5 + 0x48);
    uStack_e8 = *(undefined8 *)(param_5 + 0x50);
    uStack_e0 = *(undefined8 *)(param_5 + 0x58);
    local_d8 = *(undefined8 *)(param_5 + 0x60);
    uStack_d0 = *(undefined8 *)(param_5 + 0x68);
    uStack_c8 = *(undefined8 *)(param_5 + 0x70);
    uStack_c0 = *(undefined8 *)(param_5 + 0x78);
    local_98 = *(undefined8 *)(param_5 + 0xa0);
    uStack_90 = *(undefined8 *)(param_5 + 0xa8);
    local_138._4_4_ = (int)((ulonglong)*(undefined8 *)param_5 >> 0x20);
    iVar10 = local_138._4_4_;
    if (local_138._4_4_ == 0) {
      iVar10 = (int)uStack_130;
    }
    local_138 = CONCAT44(iVar10,(int)*(undefined8 *)param_5);
    auVar17 = ZEXT464((uint)(param_3 + *(float *)*param_1));
    sVar7 = thunk_FUN_180624430();
    auVar16 = ZEXT864(0);
    if (sVar7 < 1) {
      fVar11 = (float)FUN_180615070(auVar17._0_8_,0x43b40000);
    }
    else {
      fVar11 = 0.0;
    }
    auVar15 = auVar16._0_16_;
    uVar18 = 0x7fffffff;
    if (*(char *)(param_1[1] + 1) == '\0') {
      fVar14 = 0.0;
    }
    else {
      fVar14 = fVar11 - *(float *)(param_1[1] + 0x38);
      auVar17 = ZEXT464((uint)fVar14);
      sVar7 = thunk_FUN_180624430(fVar14);
      auVar15 = auVar16._0_16_;
      if (sVar7 < 1) {
        uVar12 = FUN_180615070(auVar17._0_8_,0x43b40000);
        auVar15 = auVar16._0_16_;
        fVar14 = (float)(uVar12 & uVar18);
      }
      else {
        fVar14 = 0.0;
      }
    }
    bStack_214 = *param_5;
    lVar2 = param_1[3];
    fVar1 = *(float *)(param_1[2] + 0x300);
    fStack_158 = auVar15._0_4_;
    fStack_220 = param_3;
    pfVar9 = &local_238;
    if (fStack_158 <= fVar1) {
      pfVar9 = (float *)(param_1[2] + 0x300);
    }
    fStack_224 = fVar11;
    local_228 = param_2;
    pfVar8 = local_234;
    if (fVar1 <= 1.0) {
      pfVar8 = pfVar9;
    }
    uStack_213 = 0;
    local_234[0] = 1.0;
    local_238 = fStack_158;
    puVar3 = *(undefined8 **)(lVar2 + 8);
    auVar4 = vpcmpeqd_avx(ZEXT116(bStack_214),SUB6416(ZEXT464(0),0));
    auVar4 = vblendvps_avx(auVar15,SUB6416(ZEXT464(0x40400000),0),auVar4);
    auVar5 = vpcmpeqd_avx(ZEXT416(param_2),SUB6416(ZEXT464(1),0));
    auVar5 = vblendvps_avx(auVar15,SUB6416(ZEXT464(0x3e800000),0),auVar5);
    auVar6 = vpcmpeqd_avx(ZEXT416(param_7),SUB6416(ZEXT464(0),0));
    uStack_218 = (uint)(param_2 == 1);
    if ((int)(uint)(param_2 == 1) < (int)param_4) {
      uStack_218 = param_4;
    }
    auVar6 = vblendvps_avx(SUB6416(ZEXT464(0x3e99999a),0),auVar15,auVar6);
    fStack_21c = (float)((uint)param_3 & uVar18) * 0.06 + (float)iVar10 * 0.18 + fVar14 * *pfVar8 +
                 auVar4._0_4_ + auVar5._0_4_ + auVar6._0_4_;
    uStack_210 = local_138;
    uStack_208 = uStack_130;
    uStack_200 = uStack_128;
    uStack_1f8 = uStack_120;
    uStack_1f0 = local_118;
    uStack_1e8 = uStack_110;
    uStack_1e0 = uStack_108;
    uStack_1d8 = uStack_100;
    local_1d0 = local_f8;
    uStack_1c8 = uStack_f0;
    uStack_1c0 = uStack_e8;
    uStack_1b8 = uStack_e0;
    uStack_1b0 = local_d8;
    uStack_1a8 = uStack_d0;
    uStack_1a0 = uStack_c8;
    uStack_198 = uStack_c0;
    local_190 = local_b8;
    uStack_188 = uStack_b0;
    uStack_180 = uStack_a8;
    uStack_178 = uStack_a0;
    local_170 = local_98;
    uStack_168 = uStack_90;
    uStack_160 = uStack_160 & 0xffffff00;
    uStack_15c = 0;
    uStack_150 = 0;
    uStack_14c = 0;
    fStack_154 = fStack_158;
    local_148 = fStack_158;
    fStack_144 = fStack_158;
    if (puVar3 == *(undefined8 **)(lVar2 + 0x10)) {
      auVar16 = ZEXT1664(auVar15);
      FUN_180351c00(lVar2,puVar3,&local_228);
      auVar15 = auVar16._0_16_;
    }
    else {
      *puVar3 = CONCAT44(fVar11,param_2);
      puVar3[1] = CONCAT44(fStack_21c,param_3);
      puVar3[2] = CONCAT17(uStack_211,(uint7)CONCAT14(bStack_214,uStack_218));
      puVar3[3] = local_138;
      puVar3[4] = uStack_130;
      puVar3[5] = uStack_128;
      puVar3[6] = uStack_120;
      puVar3[7] = local_118;
      puVar3[8] = uStack_110;
      puVar3[9] = uStack_108;
      puVar3[10] = uStack_100;
      puVar3[0xb] = local_f8;
      puVar3[0xc] = uStack_f0;
      puVar3[0xd] = uStack_e8;
      puVar3[0xe] = uStack_e0;
      puVar3[0xf] = local_d8;
      puVar3[0x10] = uStack_d0;
      puVar3[0x11] = uStack_c8;
      puVar3[0x12] = uStack_c0;
      puVar3[0x13] = local_b8;
      puVar3[0x14] = uStack_b0;
      puVar3[0x15] = uStack_a8;
      puVar3[0x16] = uStack_a0;
      puVar3[0x17] = local_98;
      puVar3[0x18] = uStack_90;
      puVar3[0x19] = (ulonglong)uStack_160;
      puVar3[0x1a] = CONCAT44(fStack_158,fStack_158);
      puVar3[0x1b] = (ulonglong)uStack_14a << 0x30;
      puVar3[0x1c] = CONCAT44(fStack_158,fStack_158);
      *(longlong *)(lVar2 + 8) = *(longlong *)(lVar2 + 8) + 0xe8;
    }
    auVar16 = ZEXT1664(auVar15);
    auVar17 = ZEXT464((uint)(param_6 + *(float *)*param_1));
    sVar7 = thunk_FUN_180624430();
    uVar13 = auVar16._0_4_;
    if (sVar7 < 1) {
      uVar13 = FUN_180615070(auVar17._0_8_,0x43b40000);
    }
    *(undefined4 *)(*(longlong *)(param_1[3] + 8) + -0x14) = uVar13;
    *(uint *)(*(longlong *)(param_1[3] + 8) + -0x10) = param_7;
    *(undefined1 *)(*(longlong *)(param_1[3] + 8) + -0xc) = DAT_180bbeabf;
  }
  return;
}



