// FUN_180486b50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180486b50 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180486b50(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 (*param_4) [16]
                  ,undefined8 param_5)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_1c8 [32];
  undefined8 local_1a8;
  char **local_1a0;
  undefined1 local_198;
  undefined8 local_190;
  float local_188;
  float local_184;
  char *local_180;
  char *pcStack_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined1 auStack_158 [16];
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 local_120;
  undefined7 uStack_11f;
  undefined8 local_118;
  undefined8 uStack_110;
  char *local_108;
  char *pcStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  float local_98;
  float local_94;
  float local_90;
  float local_88;
  undefined4 local_84;
  ulonglong local_80;
  
  local_80 = DAT_1808d5f00 ^ (ulonglong)auStack_1c8;
  if (DAT_180bbecdb == '\0') {
    FUN_1804c2800("Log Events");
    local_180 = "Log Events";
    local_190 = 0;
    fVar8 = 0.0;
    local_160 = 0;
    local_1a0 = &local_180;
    pcStack_178 = (char *)param_5;
    uStack_168 = 0x3f8000003f800000;
    auStack_158 = *param_4;
    uStack_170 = 3;
    local_1a8 = (ulonglong)local_1a8._4_4_ << 0x20;
    uStack_16c = 0;
    FUN_180485a70(param_1,&local_98,"Log Events",1);
    fVar9 = 0.5;
    auVar2 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 12.7 + 0.5)),1);
    auVar3 = vroundss_avx(ZEXT816(0),
                          ZEXT416((uint)(((*(float *)(param_1 + 0x18) + *(float *)(param_1 + 0x10))
                                         - *(float *)(param_1 + 0x20)) * DAT_180b0a41c + 0.5)),1);
    auVar4 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 105.0 + 0.5)),1);
    auVar3 = vroundss_avx(ZEXT816(0),
                          ZEXT416((uint)((((auVar3._0_4_ + *(float *)(param_1 + 8)) - auVar4._0_4_)
                                         - DAT_180b0a41c * 7.4) + 0.5)),1);
    local_88 = auVar3._0_4_ - auVar2._0_4_;
    auVar3 = vroundss_avx(ZEXT816(0),
                          ZEXT416((uint)((local_90 - auVar2._0_4_ * 0.5) + DAT_180b0a41c * fVar8 +
                                        0.5)),1);
    local_198 = 1;
    local_1a8 = CONCAT71(local_1a8._1_7_,1);
    local_84 = auVar3._0_4_;
    FUN_1804ab860(DAT_180b0a41c * fVar8,param_3,&local_88,auVar2._0_8_);
    auVar2 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 105.0 + fVar9)),1);
    auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 20.2 + fVar9)),1);
    auVar4 = vroundss_avx(ZEXT816(0),
                          ZEXT416((uint)(((*(float *)(param_1 + 0x18) + *(float *)(param_1 + 0x10))
                                         - *(float *)(param_1 + 0x20)) * DAT_180b0a41c + fVar9)),1);
    local_98 = (auVar4._0_4_ + *(float *)(param_1 + 8)) - auVar2._0_4_;
    local_188 = local_98 + auVar2._0_4_;
    auVar2 = vroundss_avx(ZEXT816(0),
                          ZEXT416((uint)((local_90 - auVar3._0_4_ * fVar9) + DAT_180b0a41c * 0.1 +
                                        fVar9)),1);
    local_118 = *(undefined8 *)*param_4;
    uStack_110 = *(undefined8 *)(*param_4 + 8);
    local_94 = auVar2._0_4_;
    local_184 = local_94 + auVar3._0_4_;
    local_1a0 = (char **)0x180829d5c;
    local_1a8 = param_5;
    FUN_1804ac430("##multi",&local_98,&local_188,&local_118);
    iVar1 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
    if (iVar1 < 2) {
      FUN_1804c5a40("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar1 + -1;
    }
  }
  else {
    auStack_158 = (undefined1  [16])0x0;
    uStack_144 = 0x3f800000;
    local_140 = 0x3f800000;
    uStack_130 = *(undefined8 *)*param_4;
    uStack_128 = *(undefined8 *)(*param_4 + 8);
    uStack_148 = 0;
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0x3f80000000000000;
    local_180 = (char *)((ulonglong)local_180 & 0xffffffff00000000);
    pcStack_178 = "Log Events";
    uStack_170 = 5;
    uStack_168 = param_5;
    uStack_f8 = CONCAT44(uStack_16c,5);
    uStack_138 = 0;
    local_c8 = CONCAT44(uStack_13c,0x3f800000);
    local_120 = 1;
    uVar7 = CONCAT71(uStack_11f,1);
    uStack_c0 = 0;
    local_108 = local_180;
    pcStack_100 = "Log Events";
    uStack_f0 = param_5;
    local_160 = param_3;
    local_e8 = param_3;
    uStack_b8 = uStack_130;
    uStack_b0 = uStack_128;
    local_a8 = uVar7;
    uVar6 = FUN_180493b90();
    puVar5 = DAT_180c62d38;
    local_108 = (char *)CONCAT44(local_108._4_4_,uVar6);
    if (DAT_180c62d38 == DAT_180c62d40) {
      FUN_1804948a0(extraout_XMM0_Qa,DAT_180c62d38,&local_108);
    }
    else {
      *DAT_180c62d38 = local_108;
      puVar5[1] = pcStack_100;
      puVar5[2] = uStack_f8;
      puVar5[3] = uStack_f0;
      puVar5[4] = local_160;
      puVar5[5] = auStack_158._0_8_;
      puVar5[6] = auStack_158._8_8_;
      puVar5[7] = CONCAT44(uStack_144,uStack_148);
      puVar5[8] = CONCAT44(uStack_13c,local_140);
      puVar5[9] = uStack_138;
      puVar5[10] = uStack_130;
      puVar5[0xb] = uStack_128;
      puVar5[0xc] = uVar7;
      DAT_180c62d38 = DAT_180c62d38 + 0xd;
    }
  }
}



