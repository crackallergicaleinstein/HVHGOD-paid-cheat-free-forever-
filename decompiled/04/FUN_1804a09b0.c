// FUN_1804a09b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804a09b0 */

void FUN_1804a09b0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                  undefined8 param_5,undefined4 param_6)

{
  int iVar1;
  longlong lVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 *puVar7;
  char cVar8;
  undefined4 uVar9;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar10;
  float fVar11;
  undefined8 local_res10;
  char *local_158;
  char *pcStack_150;
  undefined4 uStack_148;
  uint uStack_144;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined8 uStack_110;
  undefined1 auStack_108 [16];
  undefined1 local_f8;
  undefined7 uStack_f7;
  undefined1 local_f0 [8];
  float local_e8;
  char *local_d8;
  char *pcStack_d0;
  longlong lStack_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  
  local_res10 = param_2;
  if (DAT_180bbecdb == '\0') {
    FUN_1804c2800("Player Glow");
    uVar9 = 0x3f800000;
    local_158 = "Player Glow";
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_148 = 0;
    local_138 = 0;
    uStack_144 = 0;
    uStack_140 = 0x3f8000003f800000;
    pcStack_150 = (char *)param_3;
    FUN_180485a70(param_1,local_f0,"Player Glow",1,0,&local_158);
    fVar11 = 0.5;
    auVar4 = vroundss_avx(ZEXT816(0),
                          ZEXT416((uint)(((*(float *)(param_1 + 0x18) + *(float *)(param_1 + 0x10))
                                         - *(float *)(param_1 + 0x20)) * DAT_180b0a41c + 0.5)),1);
    auVar4 = vroundss_avx(ZEXT816(0),
                          ZEXT416((uint)(((auVar4._0_4_ + *(float *)(param_1 + 8)) -
                                         DAT_180b0a41c * 0.6) + 0.5)),1);
    auVar5 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 25.2 + 0.5)),1);
    fVar3 = DAT_180b0a41c * 0.22 + local_e8;
    local_res10 = CONCAT44(fVar3,(auVar4._0_4_ - auVar5._0_4_) - DAT_180b0a41c * 13.85);
    cVar8 = FUN_1804ab580(fVar3,&local_res10,1);
    auVar4 = vroundss_avx(ZEXT816(0),
                          ZEXT416((uint)(((*(float *)(param_1 + 0x18) + *(float *)(param_1 + 0x10))
                                         - *(float *)(param_1 + 0x20)) * DAT_180b0a41c + fVar11)),1)
    ;
    auVar5 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 25.2 + fVar11)),1);
    auVar4 = vroundss_avx(ZEXT816(0),
                          ZEXT416((uint)(((auVar4._0_4_ + *(float *)(param_1 + 8)) -
                                         DAT_180b0a41c * 0.6) + fVar11)),1);
    auVar6 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 15.55 + fVar11)),1);
    auVar6 = vroundss_avx(ZEXT816(0),
                          ZEXT416((uint)((local_e8 - auVar6._0_4_ * fVar11) + DAT_180b0a41c * 0.11 +
                                        fVar11)),1);
    local_res10 = CONCAT44(auVar6._0_4_,auVar4._0_4_ - auVar5._0_4_);
    uVar10 = FUN_1804aaf40("##toggle",param_3,&local_res10,1,uVar9);
    if (DAT_180bbecdb == '\0') {
      if (cVar8 != '\0') {
        FUN_180488320("##settings");
      }
      cVar8 = FUN_180488630("##settings","Player Glow",param_6);
      if (cVar8 != '\0') {
        lVar2 = *param_4;
        FUN_180488c60();
        FUN_180488a80("Appearance",&DAT_180858a0c);
        FUN_180489fc0("Glow Color",lVar2 + 0x36c8,1,&DAT_18082a268,uVar9,1);
        FUN_180488f10();
        FUN_1804aeac0();
      }
    }
    else {
      FUN_1804a1260(uVar10,param_4);
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
    pcStack_150 = "Player Glow";
    local_158 = (char *)((ulonglong)local_158 & 0xffffffff00000000);
    uStack_148 = 0;
    uStack_128 = 0;
    uStack_110 = 0;
    local_f8 = 1;
    uVar10 = CONCAT71(uStack_f7,1);
    local_138 = 0;
    uStack_130 = 0;
    uStack_11c = 0x3f800000;
    local_118 = 0x3f800000;
    auStack_108 = ZEXT816(0);
    lStack_c8 = (ulonglong)uStack_144 << 0x20;
    local_d8 = local_158;
    pcStack_d0 = "Player Glow";
    uStack_120 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0x3f80000000000000;
    local_98 = CONCAT44(uStack_114,0x3f800000);
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_140 = param_3;
    uStack_c0 = param_3;
    local_78 = uVar10;
    uVar9 = FUN_180493b90();
    puVar7 = DAT_180c62d38;
    local_d8 = (char *)CONCAT44(local_d8._4_4_,uVar9);
    if (DAT_180c62d38 == DAT_180c62d40) {
      FUN_1804948a0(extraout_XMM0_Qa,DAT_180c62d38,&local_d8);
      FUN_1804a1260();
    }
    else {
      *DAT_180c62d38 = local_d8;
      puVar7[1] = pcStack_d0;
      puVar7[2] = lStack_c8;
      puVar7[3] = uStack_c0;
      puVar7[4] = local_138;
      puVar7[5] = uStack_130;
      puVar7[6] = uStack_128;
      puVar7[7] = CONCAT44(uStack_11c,uStack_120);
      puVar7[8] = CONCAT44(uStack_114,local_118);
      puVar7[9] = uStack_110;
      puVar7[10] = auStack_108._0_8_;
      puVar7[0xb] = auStack_108._8_8_;
      puVar7[0xc] = uVar10;
      DAT_180c62d38 = DAT_180c62d38 + 0xd;
      FUN_1804a1260();
    }
  }
  return;
}



