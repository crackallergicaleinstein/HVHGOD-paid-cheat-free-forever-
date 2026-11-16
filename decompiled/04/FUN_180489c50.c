// FUN_180489c50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180489c50 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180489c50(ulonglong param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4,
                  undefined1 param_5)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [32];
  ulonglong *puVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  undefined8 extraout_XMM0_Qa;
  ulonglong uVar8;
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
  ulonglong uStack_140;
  ulonglong local_138;
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
  ulonglong uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  ulonglong uStack_b0;
  ulonglong local_a8;
  ulonglong uStack_a0;
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
  if (DAT_180bbecdb == '\0') {
    local_198 = 0;
    local_188 = 0;
    uStack_b8 = 0;
    uStack_98 = 0;
    local_178 = 0.0;
    local_1a0 = &local_178;
    local_1b8 = &local_c8;
    local_1a8 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    uVar6 = 0x3f800000;
    local_1b0 = 0x429c0000;
    uStack_b4 = 0;
    uStack_b0 = 0x3f8000003f800000;
    uStack_174 = 0;
    uStack_170 = 0;
    uStack_16c = 0;
    local_c8 = param_1;
    uStack_c0 = param_3;
    puVar7 = (undefined8 *)FUN_180487810(local_e8,param_1,param_4,param_5);
    uStack_168 = puVar7[2];
    uStack_160 = puVar7[3];
    local_178 = (float)*puVar7;
    uStack_174 = (undefined4)((ulonglong)*puVar7 >> 0x20);
    uStack_170 = (undefined4)puVar7[1];
    uStack_16c = (undefined4)((ulonglong)puVar7[1] >> 0x20);
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
    auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(((float)uStack_168 - auVar3._0_4_ * 0.5) + 0.5))
                          ,1);
    local_178 = auVar2._0_4_;
    uStack_174 = auVar3._0_4_;
    auVar2 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 12.7 + 0.5)),1);
    auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)((local_178 - DAT_180b0a41c * 7.4) + 0.5)),1);
    auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)((auVar3._0_4_ - auVar2._0_4_) + 0.5)),1);
    auVar2 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(((float)uStack_168 - auVar2._0_4_ * 0.5) + 0.5))
                          ,1);
    local_188 = CONCAT44(auVar2._0_4_,auVar3._0_4_);
    local_1a8 = CONCAT31(local_1a8._1_3_,1);
    local_1b8 = (ulonglong *)CONCAT71(local_1b8._1_7_,param_5);
    FUN_1804ab860();
    local_1b8 = (ulonglong *)CONCAT44(local_1b8._4_4_,uVar6);
    FUN_1804aaf40("##toggle",param_3,&local_178,param_5);
    iVar1 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
    if (iVar1 < 2) {
      FUN_1804c5a40("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar1 + -1;
    }
  }
  else {
    local_c8 = local_c8 & 0xffffffff00000000;
    uStack_b8 = 1;
    uStack_80 = 0;
    local_68 = param_5;
    uVar8 = CONCAT71(uStack_67,param_5);
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_8c = 0x3f800000;
    local_88 = 0x3f800000;
    auStack_78 = ZEXT816(0);
    uStack_148 = CONCAT44(uStack_b4,1);
    local_158 = local_c8;
    uStack_90 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_120 = 0x3f80000000000000;
    local_118 = CONCAT44(uStack_84,0x3f800000);
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    if (param_1 != 0) {
      uStack_150 = param_1;
      uStack_140 = param_3;
      local_138 = param_2;
      local_f8 = uVar8;
      uStack_c0 = param_1;
      uStack_b0 = param_3;
      local_a8 = param_2;
      uVar6 = FUN_180493b90();
      puVar5 = DAT_180c62d38;
      local_158 = CONCAT44(local_158._4_4_,uVar6);
      if (DAT_180c62d38 == DAT_180c62d40) {
        FUN_1804948a0(extraout_XMM0_Qa,DAT_180c62d38,&local_158);
      }
      else {
        *DAT_180c62d38 = local_158;
        puVar5[1] = uStack_150;
        puVar5[2] = uStack_148;
        puVar5[3] = uStack_140;
        puVar5[4] = local_a8;
        puVar5[5] = uStack_a0;
        puVar5[6] = uStack_98;
        puVar5[7] = CONCAT44(uStack_8c,uStack_90);
        puVar5[8] = CONCAT44(uStack_84,local_88);
        puVar5[9] = uStack_80;
        puVar5[10] = auStack_78._0_8_;
        puVar5[0xb] = auStack_78._8_8_;
        puVar5[0xc] = uVar8;
        DAT_180c62d38 = DAT_180c62d38 + 0xd;
      }
    }
  }
}



