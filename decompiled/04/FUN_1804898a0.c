// FUN_1804898a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804898a0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804898a0(ulonglong param_1,char *param_2,undefined1 *param_3,undefined1 param_4,
                  byte param_5,undefined1 *param_6)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [32];
  ulonglong *puVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 *puVar11;
  undefined8 extraout_XMM0_Qa;
  ulonglong uVar12;
  undefined1 auStack_1d8 [32];
  ulonglong *local_1b8;
  undefined4 local_1b0;
  undefined4 local_1a8;
  float *local_1a0;
  undefined8 local_198;
  undefined8 local_188;
  float local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 uStack_168;
  undefined8 uStack_160;
  ulonglong local_158;
  ulonglong uStack_150;
  ulonglong uStack_148;
  char *pcStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  ulonglong local_f8;
  undefined1 local_e8 [32];
  ulonglong local_c8;
  char *pcStack_c0;
  undefined4 uStack_b8;
  uint uStack_b4;
  char *pcStack_b0;
  undefined1 local_a8 [16];
  ulonglong uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  ulonglong uStack_80;
  undefined1 auStack_78 [16];
  undefined1 local_68;
  undefined7 uStack_67;
  ulonglong local_60;
  
  local_60 = DAT_1808d5f00 ^ (ulonglong)auStack_1d8;
  uStack_b8 = 0;
  uStack_98 = 0;
  local_a8 = (undefined1  [16])0x0;
  if (DAT_180bbecdb != '\0') {
    local_c8 = local_c8 & 0xffffffff00000000;
    uStack_80 = 0;
    uVar12 = CONCAT71(uStack_67,param_4);
    uStack_8c = 0x3f800000;
    local_88 = 0x3f800000;
    auStack_78 = ZEXT816(0);
    uStack_148 = (ulonglong)uStack_b4 << 0x20;
    local_158 = local_c8;
    uStack_90 = 0;
    local_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_120 = 0x3f80000000000000;
    local_118 = CONCAT44(uStack_84,0x3f800000);
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    if (param_1 == 0) {
    }
    uStack_150 = param_1;
    pcStack_140 = param_2;
    local_f8 = uVar12;
    pcStack_c0 = (char *)param_1;
    pcStack_b0 = param_2;
    local_68 = param_4;
    uVar7 = FUN_180493b90();
    puVar5 = DAT_180c62d38;
    local_158 = CONCAT44(local_158._4_4_,uVar7);
    if (DAT_180c62d38 == DAT_180c62d40) {
      FUN_1804948a0(extraout_XMM0_Qa,DAT_180c62d38,&local_158);
    }
    *DAT_180c62d38 = local_158;
    puVar5[1] = uStack_150;
    puVar5[2] = uStack_148;
    puVar5[3] = (ulonglong)pcStack_140;
    puVar5[4] = local_a8._0_8_;
    puVar5[5] = local_a8._8_8_;
    puVar5[6] = uStack_98;
    puVar5[7] = CONCAT44(uStack_8c,uStack_90);
    puVar5[8] = CONCAT44(uStack_84,local_88);
    puVar5[9] = uStack_80;
    puVar5[10] = auStack_78._0_8_;
    puVar5[0xb] = auStack_78._8_8_;
    puVar5[0xc] = uVar12;
    DAT_180c62d38 = DAT_180c62d38 + 0xd;
  }
  uVar7 = 0x3f800000;
  uStack_b4 = 0;
  pcStack_b0 = (char *)0x3f8000003f800000;
  if (param_3 == (undefined1 *)0x0) {
LAB_180489a5d:
    puVar11 = param_3;
  }
  else {
    lVar10 = 0;
    do {
      puVar11 = &DAT_180829dd0;
      lVar9 = lVar10 + 1;
      if (param_3[lVar10] != (&DAT_180829dd4)[lVar10]) {
        lVar10 = 0;
        goto LAB_180489a40;
      }
      lVar10 = lVar9;
    } while (lVar9 != 4);
    if (*param_2 != '\0') {
      puVar11 = &DAT_180829dd4;
    }
  }
  goto LAB_180489a60;
  while (lVar10 = lVar9, lVar9 != 4) {
LAB_180489a40:
    lVar9 = lVar10 + 1;
    if (param_3[lVar10] != (&DAT_180829dd0)[lVar10]) goto LAB_180489a5d;
  }
  if (*param_2 != '\0') {
    puVar11 = &DAT_180829dd4;
  }
LAB_180489a60:
  local_1a0 = &local_178;
  local_198 = 0;
  local_188 = 0;
  local_1b8 = &local_c8;
  uStack_174 = 0;
  auVar2 = vpcmpeqd_avx(ZEXT116(param_5),SUB6416(ZEXT464(0),0));
  local_1a8 = 0;
  auVar2 = vblendvps_avx(SUB6416(ZEXT464(0x42500000),0),SUB6416(ZEXT464(0x42180000),0),auVar2);
  local_178 = 0.0;
  local_1b0 = auVar2._0_4_;
  uStack_170 = 0;
  uStack_16c = 0;
  local_c8 = param_1;
  pcStack_c0 = param_2;
  puVar8 = (undefined8 *)FUN_180487810(local_e8,param_1,puVar11,param_4);
  uStack_168 = puVar8[2];
  uStack_160 = puVar8[3];
  local_178 = (float)*puVar8;
  uStack_174 = (undefined4)((ulonglong)*puVar8 >> 0x20);
  uStack_170 = (undefined4)puVar8[1];
  uStack_16c = (undefined4)((ulonglong)puVar8[1] >> 0x20);
  FUN_1804c2800(param_1);
  auVar4._4_4_ = uStack_174;
  auVar4._0_4_ = local_178;
  auVar4._8_4_ = uStack_170;
  auVar4._12_4_ = uStack_16c;
  auVar4._16_8_ = uStack_168;
  auVar4._24_8_ = uStack_160;
  auVar2 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 25.2 + 0.5)),1);
  auVar3 = vshufps_avx(auVar4._16_16_,auVar4._16_16_,0x55);
  auVar2 = vroundss_avx(ZEXT816(0),ZEXT416((uint)((auVar3._0_4_ - auVar2._0_4_) + 0.5)),1);
  auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 15.55 + 0.5)),1);
  auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(((float)uStack_168 - auVar3._0_4_ * 0.5) + 0.5)),1
                       );
  uStack_174 = auVar3._0_4_;
  local_178 = auVar2._0_4_;
  if (param_5 != 0) {
    local_188 = CONCAT44(DAT_180b0a41c * 0.22 + (float)uStack_168,local_178 - DAT_180b0a41c * 13.85)
    ;
    uVar6 = FUN_1804ab580();
    if (param_6 != (undefined1 *)0x0) {
      *param_6 = uVar6;
    }
  }
  local_1b8 = (ulonglong *)CONCAT44(local_1b8._4_4_,uVar7);
  FUN_1804aaf40("##toggle",param_2,&local_178,param_4);
  iVar1 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
  if (iVar1 < 2) {
    FUN_1804c5a40("Calling PopID() too many times!");
  }
  else {
    *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar1 + -1;
  }
}



