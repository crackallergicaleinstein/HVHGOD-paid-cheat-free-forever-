// FUN_1804a0570 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804a0570 */

void FUN_1804a0570(longlong param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ulonglong *puVar5;
  char cVar6;
  undefined4 uVar7;
  undefined8 extraout_XMM0_Qa;
  ulonglong uVar8;
  float fVar9;
  float local_148;
  float local_144;
  ulonglong local_140;
  ulonglong uStack_138;
  undefined4 uStack_130;
  uint uStack_12c;
  ulonglong uStack_128;
  ulonglong local_120;
  ulonglong uStack_118;
  ulonglong uStack_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  ulonglong uStack_f8;
  undefined1 auStack_f0 [16];
  undefined1 local_e0;
  undefined7 uStack_df;
  undefined1 local_d8 [8];
  float local_d0;
  ulonglong local_c8;
  ulonglong uStack_c0;
  ulonglong uStack_b8;
  ulonglong uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulonglong local_68;
  
  if (DAT_180bbecdb == '\0') {
    FUN_1804c2800(param_2);
    uStack_130 = 0;
    uStack_12c = 0;
    uVar7 = 0x3f800000;
    uStack_128 = 0x3f8000003f800000;
    local_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    local_140 = param_2;
    uStack_138 = param_3;
    FUN_180485a70(param_1,local_d8,param_2,1,0,&local_140);
    fVar9 = 0.5;
    auVar2 = vroundss_avx(ZEXT816(0),
                          ZEXT416((uint)(((*(float *)(param_1 + 0x18) + *(float *)(param_1 + 0x10))
                                         - *(float *)(param_1 + 0x20)) * DAT_180b0a41c + 0.5)),1);
    auVar2 = vroundss_avx(ZEXT816(0),
                          ZEXT416((uint)(((auVar2._0_4_ + *(float *)(param_1 + 8)) -
                                         DAT_180b0a41c * 0.6) + 0.5)),1);
    auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 25.2 + 0.5)),1);
    local_148 = (auVar2._0_4_ - auVar3._0_4_) - DAT_180b0a41c * 13.85;
    local_144 = DAT_180b0a41c * 0.22 + local_d0;
    cVar6 = FUN_1804ab580(local_144,&local_148,1);
    auVar2 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 15.55 + fVar9)),1);
    auVar2 = vroundss_avx(ZEXT816(0),
                          ZEXT416((uint)((local_d0 - auVar2._0_4_ * fVar9) + DAT_180b0a41c * 0.11 +
                                        fVar9)),1);
    auVar3 = vroundss_avx(ZEXT816(0),
                          ZEXT416((uint)(((*(float *)(param_1 + 0x18) + *(float *)(param_1 + 0x10))
                                         - *(float *)(param_1 + 0x20)) * DAT_180b0a41c + fVar9)),1);
    auVar3 = vroundss_avx(ZEXT816(0),
                          ZEXT416((uint)(((auVar3._0_4_ + *(float *)(param_1 + 8)) -
                                         DAT_180b0a41c * 0.6) + fVar9)),1);
    auVar4 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 25.2 + fVar9)),1);
    local_148 = auVar3._0_4_ - auVar4._0_4_;
    local_144 = auVar2._0_4_;
    FUN_1804aaf40("##toggle",param_3,&local_148,1,uVar7);
    if (DAT_180bbecdb == '\0') {
      if (cVar6 != '\0') {
        FUN_180488320("##settings");
      }
      cVar6 = FUN_180488630("##settings",param_2,param_6);
      if (cVar6 != '\0') {
        FUN_18049d430(param_4);
        FUN_1804aeac0();
      }
    }
    else {
      FUN_180493f00(param_2);
      FUN_18049d430(param_4);
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
    local_140 = local_140 & 0xffffffff00000000;
    uStack_130 = 0;
    local_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_104 = 0x3f800000;
    local_100 = 0x3f800000;
    uStack_f8 = 0;
    auStack_f0 = ZEXT816(0);
    local_e0 = 1;
    uStack_b8 = (ulonglong)uStack_12c << 0x20;
    local_c8 = local_140;
    local_a8 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_90 = 0x3f80000000000000;
    local_88 = CONCAT44(uStack_fc,0x3f800000);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uVar8 = CONCAT71(uStack_df,1);
    uStack_138 = param_2;
    uStack_128 = param_3;
    uStack_c0 = param_2;
    uStack_b0 = param_3;
    local_68 = uVar8;
    if (param_2 != 0) {
      uVar7 = FUN_180493b90();
      puVar5 = DAT_180c62d38;
      local_c8 = CONCAT44(local_c8._4_4_,uVar7);
      if (DAT_180c62d38 == DAT_180c62d40) {
        FUN_1804948a0(extraout_XMM0_Qa,DAT_180c62d38,&local_c8);
      }
      else {
        *DAT_180c62d38 = local_c8;
        puVar5[1] = uStack_c0;
        puVar5[2] = uStack_b8;
        puVar5[3] = uStack_b0;
        puVar5[4] = local_120;
        puVar5[5] = uStack_118;
        puVar5[6] = uStack_110;
        puVar5[7] = CONCAT44(uStack_104,uStack_108);
        puVar5[8] = CONCAT44(uStack_fc,local_100);
        puVar5[9] = uStack_f8;
        puVar5[10] = auStack_f0._0_8_;
        puVar5[0xb] = auStack_f0._8_8_;
        puVar5[0xc] = uVar8;
        DAT_180c62d38 = DAT_180c62d38 + 0xd;
      }
    }
    FUN_180493f00(param_2);
    FUN_18049d430(param_4);
    if (DAT_180c62d18 != DAT_180c62d20) {
      FUN_18015c010(DAT_180c62d20 + -0x20);
      DAT_180c62d20 = DAT_180c62d20 + -0x20;
    }
    DAT_1808e4e38 = 0xffffffff;
  }
  return;
}



