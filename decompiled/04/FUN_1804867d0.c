// FUN_1804867d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804867d0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804867d0(longlong param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ulonglong *puVar4;
  undefined4 uVar5;
  undefined8 extraout_XMM0_Qa;
  ulonglong uVar6;
  float fVar7;
  undefined1 auStack_1a8 [32];
  undefined4 local_188;
  char **local_180;
  undefined1 local_178;
  undefined8 local_170;
  float local_168;
  undefined4 local_164;
  char *local_160;
  char *pcStack_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  ulonglong uStack_148;
  ulonglong local_140;
  undefined1 auStack_138 [16];
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  ulonglong uStack_118;
  undefined1 auStack_110 [16];
  undefined1 local_100;
  undefined7 uStack_ff;
  undefined1 local_f8 [8];
  float local_f0;
  char *local_e8;
  char *pcStack_e0;
  ulonglong uStack_d8;
  ulonglong uStack_d0;
  ulonglong local_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulonglong local_88;
  float local_78;
  undefined4 local_74;
  ulonglong local_70;
  
  local_70 = DAT_1808d5f00 ^ (ulonglong)auStack_1a8;
  if (DAT_180bbecdb == '\0') {
    FUN_1804c2800("Inaccuracy Overlay");
    uVar5 = 0x3f800000;
    local_160 = "Inaccuracy Overlay";
    local_170 = 0;
    fVar7 = 0.0;
    auStack_138 = ZEXT816(0);
    uStack_150 = 0;
    local_140 = 0;
    local_180 = &local_160;
    local_188 = 0;
    uStack_14c = 0;
    uStack_148 = 0x3f8000003f800000;
    pcStack_158 = (char *)param_4;
    FUN_180485a70(param_1,local_f8,"Inaccuracy Overlay",1);
    auVar2 = vroundss_avx(ZEXT816(0),
                          ZEXT416((uint)(((*(float *)(param_1 + 0x18) + *(float *)(param_1 + 0x10))
                                         - *(float *)(param_1 + 0x20)) * DAT_180b0a41c + 0.5)),1);
    auVar2 = vroundss_avx(ZEXT816(0),
                          ZEXT416((uint)(((auVar2._0_4_ + *(float *)(param_1 + 8)) -
                                         DAT_180b0a41c * 0.6) + 0.5)),1);
    auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 25.2 + 0.5)),1);
    local_168 = auVar2._0_4_ - auVar3._0_4_;
    auVar2 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 15.55 + 0.5)),1);
    auVar2 = vroundss_avx(ZEXT816(0),
                          ZEXT416((uint)((local_f0 - auVar2._0_4_ * 0.5) + DAT_180b0a41c * 0.11 +
                                        0.5)),1);
    local_164 = auVar2._0_4_;
    auVar2 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 12.7 + 0.5)),1);
    auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)((local_168 - DAT_180b0a41c * 7.4) + 0.5)),1);
    local_78 = auVar3._0_4_ - auVar2._0_4_;
    auVar2 = vroundss_avx(ZEXT816(0),
                          ZEXT416((uint)((local_f0 - auVar2._0_4_ * 0.5) + DAT_180b0a41c * fVar7 +
                                        0.5)),1);
    local_74 = auVar2._0_4_;
    local_178 = 1;
    local_188 = CONCAT31(local_188._1_3_,1);
    FUN_1804ab860(DAT_180b0a41c * fVar7,param_3,&local_78);
    local_188 = uVar5;
    FUN_1804aaf40("##toggle",param_4,&local_168,1);
    iVar1 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
    if (iVar1 < 2) {
      FUN_1804c5a40("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar1 + -1;
    }
  }
  else {
    auStack_138 = (undefined1  [16])0x0;
    pcStack_158 = "Inaccuracy Overlay";
    local_160 = (char *)((ulonglong)local_160 & 0xffffffff00000000);
    uStack_150 = 1;
    uStack_118 = 0;
    local_100 = 1;
    uVar6 = CONCAT71(uStack_ff,1);
    uStack_124 = 0x3f800000;
    local_120 = 0x3f800000;
    auStack_110 = ZEXT816(0);
    uStack_d8 = CONCAT44(uStack_14c,1);
    local_e8 = local_160;
    pcStack_e0 = "Inaccuracy Overlay";
    uStack_128 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0x3f80000000000000;
    local_a8 = CONCAT44(uStack_11c,0x3f800000);
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_148 = param_4;
    local_140 = param_3;
    uStack_d0 = param_4;
    local_c8 = param_3;
    local_88 = uVar6;
    uVar5 = FUN_180493b90();
    puVar4 = DAT_180c62d38;
    local_e8 = (char *)CONCAT44(local_e8._4_4_,uVar5);
    if (DAT_180c62d38 == DAT_180c62d40) {
      FUN_1804948a0(extraout_XMM0_Qa,DAT_180c62d38,&local_e8);
    }
    else {
      *DAT_180c62d38 = (ulonglong)local_e8;
      puVar4[1] = (ulonglong)pcStack_e0;
      puVar4[2] = uStack_d8;
      puVar4[3] = uStack_d0;
      puVar4[4] = local_140;
      puVar4[5] = auStack_138._0_8_;
      puVar4[6] = auStack_138._8_8_;
      puVar4[7] = CONCAT44(uStack_124,uStack_128);
      puVar4[8] = CONCAT44(uStack_11c,local_120);
      puVar4[9] = uStack_118;
      puVar4[10] = auStack_110._0_8_;
      puVar4[0xb] = auStack_110._8_8_;
      puVar4[0xc] = uVar6;
      DAT_180c62d38 = DAT_180c62d38 + 0xd;
    }
  }
}



