// FUN_18049fcb0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18049fcb0 */

void FUN_18049fcb0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6)

{
  int iVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 *puVar6;
  char cVar7;
  undefined4 uVar8;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar9;
  float fVar10;
  undefined8 local_res10;
  char *local_148;
  char *pcStack_140;
  undefined4 uStack_138;
  uint uStack_134;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined8 uStack_100;
  undefined1 auStack_f8 [16];
  undefined1 local_e8;
  undefined7 uStack_e7;
  undefined1 local_e0 [8];
  float local_d8;
  char *local_c8;
  char *pcStack_c0;
  longlong lStack_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  local_res10 = param_2;
  if (DAT_180bbecdb == '\0') {
    FUN_1804c2800("Offscreen Arrow");
    local_148 = "Offscreen Arrow";
    uStack_138 = 0;
    uStack_134 = 0;
    uVar8 = 0x3f800000;
    uStack_130 = 0x3f8000003f800000;
    local_128 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    pcStack_140 = (char *)param_3;
    FUN_180485a70(param_1,local_e0,"Offscreen Arrow",1,0,&local_148);
    fVar10 = 0.5;
    auVar3 = vroundss_avx(ZEXT816(0),
                          ZEXT416((uint)(((*(float *)(param_1 + 0x18) + *(float *)(param_1 + 0x10))
                                         - *(float *)(param_1 + 0x20)) * DAT_180b0a41c + 0.5)),1);
    auVar3 = vroundss_avx(ZEXT816(0),
                          ZEXT416((uint)(((auVar3._0_4_ + *(float *)(param_1 + 8)) -
                                         DAT_180b0a41c * 0.6) + 0.5)),1);
    auVar4 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 25.2 + 0.5)),1);
    fVar2 = DAT_180b0a41c * 0.22 + local_d8;
    local_res10 = CONCAT44(fVar2,(auVar3._0_4_ - auVar4._0_4_) - DAT_180b0a41c * 13.85);
    cVar7 = FUN_1804ab580(fVar2,&local_res10,1);
    auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 15.55 + fVar10)),1);
    auVar3 = vroundss_avx(ZEXT816(0),
                          ZEXT416((uint)((local_d8 - auVar3._0_4_ * fVar10) + DAT_180b0a41c * 0.11 +
                                        fVar10)),1);
    auVar4 = vroundss_avx(ZEXT816(0),
                          ZEXT416((uint)(((*(float *)(param_1 + 0x18) + *(float *)(param_1 + 0x10))
                                         - *(float *)(param_1 + 0x20)) * DAT_180b0a41c + fVar10)),1)
    ;
    auVar4 = vroundss_avx(ZEXT816(0),
                          ZEXT416((uint)(((auVar4._0_4_ + *(float *)(param_1 + 8)) -
                                         DAT_180b0a41c * 0.6) + fVar10)),1);
    auVar5 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 25.2 + fVar10)),1);
    local_res10 = CONCAT44(auVar3._0_4_,auVar4._0_4_ - auVar5._0_4_);
    FUN_1804aaf40("##toggle",param_3,&local_res10,1,uVar8);
    if (DAT_180bbecdb == '\0') {
      if (cVar7 != '\0') {
        FUN_180488320("##settings");
      }
      cVar7 = FUN_180488630("##settings","Offscreen Arrow",param_6);
      if (cVar7 != '\0') {
        FUN_18049cba0(param_4);
        FUN_1804aeac0();
      }
    }
    else {
      FUN_180493f00("Offscreen Arrow");
      FUN_18049cba0(param_4);
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
    local_148 = (char *)((ulonglong)local_148 & 0xffffffff00000000);
    pcStack_140 = "Offscreen Arrow";
    uStack_138 = 0;
    local_128 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_10c = 0x3f800000;
    local_108 = 0x3f800000;
    uStack_100 = 0;
    auStack_f8 = ZEXT816(0);
    local_e8 = 1;
    lStack_b8 = (ulonglong)uStack_134 << 0x20;
    local_c8 = local_148;
    pcStack_c0 = "Offscreen Arrow";
    local_a8 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_90 = 0x3f80000000000000;
    local_88 = CONCAT44(uStack_104,0x3f800000);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uVar9 = CONCAT71(uStack_e7,1);
    uStack_130 = param_3;
    uStack_b0 = param_3;
    local_68 = uVar9;
    uVar8 = FUN_180493b90();
    puVar6 = DAT_180c62d38;
    local_c8 = (char *)CONCAT44(local_c8._4_4_,uVar8);
    if (DAT_180c62d38 == DAT_180c62d40) {
      FUN_1804948a0(extraout_XMM0_Qa,DAT_180c62d38,&local_c8);
    }
    else {
      *DAT_180c62d38 = local_c8;
      puVar6[1] = pcStack_c0;
      puVar6[2] = lStack_b8;
      puVar6[3] = uStack_b0;
      puVar6[4] = local_128;
      puVar6[5] = uStack_120;
      puVar6[6] = uStack_118;
      puVar6[7] = CONCAT44(uStack_10c,uStack_110);
      puVar6[8] = CONCAT44(uStack_104,local_108);
      puVar6[9] = uStack_100;
      puVar6[10] = auStack_f8._0_8_;
      puVar6[0xb] = auStack_f8._8_8_;
      puVar6[0xc] = uVar9;
      DAT_180c62d38 = DAT_180c62d38 + 0xd;
    }
    FUN_180493f00("Offscreen Arrow");
    FUN_18049cba0(param_4);
    if (DAT_180c62d18 != DAT_180c62d20) {
      FUN_18015c010(DAT_180c62d20 + -0x20);
      DAT_180c62d20 = DAT_180c62d20 + -0x20;
    }
    DAT_1808e4e38 = 0xffffffff;
  }
  return;
}



