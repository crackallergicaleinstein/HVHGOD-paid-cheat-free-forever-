// FUN_1804980d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804980d0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804980d0(longlong param_1,undefined8 param_2,ulonglong *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 *puVar6;
  char cVar7;
  undefined4 uVar8;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar9;
  float fVar10;
  undefined1 auStack_1c8 [32];
  undefined8 local_1a8;
  char **local_1a0;
  undefined8 local_190;
  float local_188;
  float local_184;
  char *local_180;
  char *pcStack_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 uStack_168;
  undefined1 local_160 [16];
  ulonglong uStack_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined8 uStack_138;
  ulonglong uStack_130;
  ulonglong uStack_128;
  undefined1 local_120;
  undefined7 uStack_11f;
  ulonglong local_118;
  ulonglong uStack_110;
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
  ulonglong uStack_b8;
  ulonglong uStack_b0;
  undefined8 local_a8;
  float local_98;
  float local_94;
  float local_90;
  ulonglong local_88;
  
  local_88 = DAT_1808d5f00 ^ (ulonglong)auStack_1c8;
  if (DAT_180bbecdb == '\0') {
    FUN_1804c2800("Delay Shot");
    local_180 = "Delay Shot";
    uStack_170 = 3;
    uStack_16c = 0;
    uStack_168 = 0x3f8000003f800000;
    uStack_150 = param_3[1];
    auVar2._8_8_ = 0;
    auVar2._0_8_ = *param_3;
    local_160 = auVar2 << 0x40;
    local_190 = 0;
    local_1a0 = &local_180;
    local_1a8 = (ulonglong)local_1a8._4_4_ << 0x20;
    pcStack_178 = (char *)param_4;
    FUN_180485a70(param_1,&local_98,"Delay Shot",1);
    fVar10 = 0.5;
    auVar2 = vroundss_avx(ZEXT816(0),
                          ZEXT416((uint)(((*(float *)(param_1 + 0x18) + *(float *)(param_1 + 0x10))
                                         - *(float *)(param_1 + 0x20)) * DAT_180b0a41c + 0.5)),1);
    auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 105.0 + 0.5)),1);
    local_188 = ((auVar2._0_4_ + *(float *)(param_1 + 8)) - auVar3._0_4_) - DAT_180b0a41c * 14.6;
    local_184 = DAT_180b0a41c * 0.22 + local_90;
    cVar7 = FUN_1804ab580(local_184,&local_188,1);
    auVar2 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 20.2 + fVar10)),1);
    auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 105.0 + fVar10)),1);
    auVar4 = vroundss_avx(ZEXT816(0),
                          ZEXT416((uint)((local_90 - auVar2._0_4_ * fVar10) + DAT_180b0a41c * 0.1 +
                                        fVar10)),1);
    auVar5 = vroundss_avx(ZEXT816(0),
                          ZEXT416((uint)(((*(float *)(param_1 + 0x18) + *(float *)(param_1 + 0x10))
                                         - *(float *)(param_1 + 0x20)) * DAT_180b0a41c + fVar10)),1)
    ;
    local_98 = (auVar5._0_4_ + *(float *)(param_1 + 8)) - auVar3._0_4_;
    local_94 = auVar4._0_4_;
    local_188 = local_98 + auVar3._0_4_;
    local_184 = local_94 + auVar2._0_4_;
    local_118 = *param_3;
    uStack_110 = param_3[1];
    local_1a0 = (char **)0x180829d5c;
    local_1a8 = param_4;
    FUN_1804ac430("##multi",&local_98,&local_188,&local_118);
    if (DAT_180bbecdb == '\0') {
      if (cVar7 != '\0') {
        FUN_180488320("##settings");
      }
      cVar7 = FUN_180488630("##settings","Delay Shot",0);
      if (cVar7 != '\0') {
        FUN_180495ae0(param_5);
        FUN_1804aeac0();
      }
    }
    else {
      FUN_180493f00("Delay Shot");
      FUN_180495ae0(param_5);
      if (DAT_180c62d18 != DAT_180c62d20) {
        FUN_18015c010(DAT_180c62d20 + -0x20);
        DAT_180c62d20 = DAT_180c62d20 + -0x20;
      }
      DAT_1808e4e38 = 0xffffffff;
    }
    iVar1 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
    if (iVar1 < 2) {
      FUN_1804c5a40("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar1 + -1;
    }
  }
  else {
    local_180 = (char *)((ulonglong)local_180 & 0xffffffff00000000);
    pcStack_178 = "Delay Shot";
    uStack_170 = 5;
    local_160 = (undefined1  [16])0x0;
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_144 = 0x3f800000;
    local_140 = 0x3f800000;
    uStack_138 = 0;
    uStack_130 = *param_3;
    uStack_128 = param_3[1];
    local_120 = 1;
    uStack_f8 = CONCAT44(uStack_16c,5);
    local_108 = local_180;
    pcStack_100 = "Delay Shot";
    local_e8 = 0;
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0x3f80000000000000;
    local_c8 = CONCAT44(uStack_13c,0x3f800000);
    uStack_c0 = 0;
    uVar9 = CONCAT71(uStack_11f,1);
    uStack_168 = param_4;
    uStack_f0 = param_4;
    uStack_b8 = uStack_130;
    uStack_b0 = uStack_128;
    local_a8 = uVar9;
    uVar8 = FUN_180493b90();
    puVar6 = DAT_180c62d38;
    local_108 = (char *)CONCAT44(local_108._4_4_,uVar8);
    if (DAT_180c62d38 == DAT_180c62d40) {
      FUN_1804948a0(extraout_XMM0_Qa,DAT_180c62d38,&local_108);
    }
    else {
      *DAT_180c62d38 = local_108;
      puVar6[1] = pcStack_100;
      puVar6[2] = uStack_f8;
      puVar6[3] = uStack_f0;
      puVar6[4] = local_160._0_8_;
      puVar6[5] = local_160._8_8_;
      puVar6[6] = uStack_150;
      puVar6[7] = CONCAT44(uStack_144,uStack_148);
      puVar6[8] = CONCAT44(uStack_13c,local_140);
      puVar6[9] = uStack_138;
      puVar6[10] = uStack_130;
      puVar6[0xb] = uStack_128;
      puVar6[0xc] = uVar9;
      DAT_180c62d38 = DAT_180c62d38 + 0xd;
    }
    FUN_180493f00("Delay Shot");
    FUN_180495ae0(param_5);
    if (DAT_180c62d18 != DAT_180c62d20) {
      FUN_18015c010(DAT_180c62d20 + -0x20);
      DAT_180c62d20 = DAT_180c62d20 + -0x20;
    }
    DAT_1808e4e38 = 0xffffffff;
  }
}



