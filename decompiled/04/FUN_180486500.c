// FUN_180486500 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180486500 */

void FUN_180486500(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ulonglong *puVar4;
  undefined4 uVar5;
  undefined8 extraout_XMM0_Qa;
  ulonglong uVar6;
  float local_118;
  undefined4 local_114;
  ulonglong local_110;
  ulonglong uStack_108;
  undefined4 uStack_100;
  uint uStack_fc;
  ulonglong uStack_f8;
  ulonglong local_f0;
  ulonglong uStack_e8;
  ulonglong uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  ulonglong uStack_c8;
  undefined1 auStack_c0 [16];
  undefined1 local_b0;
  undefined7 uStack_af;
  undefined1 local_a8 [8];
  float local_a0;
  ulonglong local_98;
  ulonglong uStack_90;
  ulonglong uStack_88;
  ulonglong uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  if (DAT_180bbecdb == '\0') {
    FUN_1804c2800(param_2);
    uVar5 = 0x3f800000;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_100 = 0;
    local_f0 = 0;
    uStack_fc = 0;
    uStack_f8 = 0x3f8000003f800000;
    local_110 = param_2;
    uStack_108 = param_3;
    FUN_180485a70(param_1,local_a8,param_2,1,0,&local_110);
    auVar2 = vroundss_avx(ZEXT816(0),
                          ZEXT416((uint)(((*(float *)(param_1 + 0x18) + *(float *)(param_1 + 0x10))
                                         - *(float *)(param_1 + 0x20)) * DAT_180b0a41c + 0.5)),1);
    auVar2 = vroundss_avx(ZEXT816(0),
                          ZEXT416((uint)(((auVar2._0_4_ + *(float *)(param_1 + 8)) -
                                         DAT_180b0a41c * 0.6) + 0.5)),1);
    auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 25.2 + 0.5)),1);
    local_118 = auVar2._0_4_ - auVar3._0_4_;
    auVar2 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 15.55 + 0.5)),1);
    auVar2 = vroundss_avx(ZEXT816(0),
                          ZEXT416((uint)((local_a0 - auVar2._0_4_ * 0.5) + DAT_180b0a41c * 0.11 +
                                        0.5)),1);
    local_114 = auVar2._0_4_;
    FUN_1804aaf40("##toggle",param_3,&local_118,1,uVar5);
    iVar1 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
    if (iVar1 < 2) {
      FUN_1804c5a40("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar1 + -1;
    }
  }
  else {
    local_110 = local_110 & 0xffffffff00000000;
    uStack_100 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    local_b0 = 1;
    uVar6 = CONCAT71(uStack_af,1);
    local_f0 = 0;
    uStack_e8 = 0;
    uStack_d4 = 0x3f800000;
    local_d0 = 0x3f800000;
    auStack_c0 = ZEXT816(0);
    uStack_88 = (ulonglong)uStack_fc << 0x20;
    local_98 = local_110;
    uStack_d8 = 0;
    local_78 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0x3f80000000000000;
    local_58 = CONCAT44(uStack_cc,0x3f800000);
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    if (param_2 != 0) {
      uStack_108 = param_2;
      uStack_f8 = param_3;
      uStack_90 = param_2;
      uStack_80 = param_3;
      local_38 = uVar6;
      uVar5 = FUN_180493b90();
      puVar4 = DAT_180c62d38;
      local_98 = CONCAT44(local_98._4_4_,uVar5);
      if (DAT_180c62d38 == DAT_180c62d40) {
        FUN_1804948a0(extraout_XMM0_Qa,DAT_180c62d38,&local_98);
      }
      else {
        *DAT_180c62d38 = local_98;
        puVar4[1] = uStack_90;
        puVar4[2] = uStack_88;
        puVar4[3] = uStack_80;
        puVar4[4] = local_f0;
        puVar4[5] = uStack_e8;
        puVar4[6] = uStack_e0;
        puVar4[7] = CONCAT44(uStack_d4,uStack_d8);
        puVar4[8] = CONCAT44(uStack_cc,local_d0);
        puVar4[9] = uStack_c8;
        puVar4[10] = auStack_c0._0_8_;
        puVar4[0xb] = auStack_c0._8_8_;
        puVar4[0xc] = uVar6;
        DAT_180c62d38 = DAT_180c62d38 + 0xd;
      }
    }
  }
  return;
}



