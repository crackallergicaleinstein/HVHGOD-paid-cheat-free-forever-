// FUN_180486f50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180486f50 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180486f50(longlong param_1,ulonglong param_2,ulonglong *param_3,ulonglong param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ulonglong *puVar5;
  undefined4 uVar6;
  undefined8 extraout_XMM0_Qa;
  ulonglong uVar7;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  ulonglong *local_190;
  undefined8 local_180;
  float local_178;
  float local_174;
  float local_170;
  ulonglong local_168;
  ulonglong uStack_160;
  undefined4 uStack_158;
  undefined4 uStack_154;
  ulonglong uStack_150;
  undefined1 local_148 [16];
  ulonglong uStack_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  ulonglong uStack_120;
  ulonglong uStack_118;
  ulonglong uStack_110;
  undefined1 local_108;
  undefined7 uStack_107;
  ulonglong local_f8;
  ulonglong uStack_f0;
  ulonglong local_e8;
  ulonglong uStack_e0;
  ulonglong uStack_d8;
  ulonglong uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ulonglong uStack_98;
  ulonglong uStack_90;
  ulonglong local_88;
  float local_78;
  float local_74;
  ulonglong local_70;
  
  local_70 = DAT_1808d5f00 ^ (ulonglong)auStack_1b8;
  if (DAT_180bbecdb == '\0') {
    FUN_1804c2800(param_2);
    local_180 = 0;
    local_190 = &local_168;
    uStack_150 = 0x3f8000003f800000;
    uStack_138 = param_3[1];
    uStack_158 = 3;
    local_198 = (ulonglong)local_198._4_4_ << 0x20;
    uStack_154 = 0;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = *param_3;
    local_148 = auVar2 << 0x40;
    local_168 = param_2;
    uStack_160 = param_4;
    FUN_180485a70(param_1,&local_178,param_2,1);
    auVar2 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 105.0 + 0.5)),1);
    auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 20.2 + 0.5)),1);
    auVar4 = vroundss_avx(ZEXT816(0),
                          ZEXT416((uint)(((*(float *)(param_1 + 0x18) + *(float *)(param_1 + 0x10))
                                         - *(float *)(param_1 + 0x20)) * DAT_180b0a41c + 0.5)),1);
    local_78 = (auVar4._0_4_ + *(float *)(param_1 + 8)) - auVar2._0_4_;
    local_178 = local_78 + auVar2._0_4_;
    auVar2 = vroundss_avx(ZEXT816(0),
                          ZEXT416((uint)((local_170 - auVar3._0_4_ * 0.5) + DAT_180b0a41c * 0.1 +
                                        0.5)),1);
    local_f8 = *param_3;
    uStack_f0 = param_3[1];
    local_74 = auVar2._0_4_;
    local_174 = local_74 + auVar3._0_4_;
    local_190 = (ulonglong *)param_5;
    local_198 = param_4;
    FUN_1804ac430("##multi",&local_78,&local_178,&local_f8);
    iVar1 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
    if (iVar1 < 2) {
      FUN_1804c5a40("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar1 + -1;
    }
  }
  else {
    local_148 = (undefined1  [16])0x0;
    uStack_138 = 0;
    local_168 = local_168 & 0xffffffff00000000;
    uStack_158 = 5;
    uStack_120 = 0;
    local_108 = 1;
    uVar7 = CONCAT71(uStack_107,1);
    uStack_12c = 0x3f800000;
    local_128 = 0x3f800000;
    uStack_118 = *param_3;
    uStack_110 = param_3[1];
    uStack_130 = 0;
    uStack_d8 = CONCAT44(uStack_154,5);
    local_c8 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0x3f80000000000000;
    local_a8 = CONCAT44(uStack_124,0x3f800000);
    uStack_a0 = 0;
    local_e8 = local_168;
    if (param_2 != 0) {
      uStack_160 = param_2;
      uStack_150 = param_4;
      uStack_e0 = param_2;
      uStack_d0 = param_4;
      uStack_98 = uStack_118;
      uStack_90 = uStack_110;
      local_88 = uVar7;
      uVar6 = FUN_180493b90();
      puVar5 = DAT_180c62d38;
      local_e8 = CONCAT44(local_e8._4_4_,uVar6);
      if (DAT_180c62d38 == DAT_180c62d40) {
        FUN_1804948a0(extraout_XMM0_Qa,DAT_180c62d38,&local_e8);
      }
      else {
        *DAT_180c62d38 = local_e8;
        puVar5[1] = uStack_e0;
        puVar5[2] = uStack_d8;
        puVar5[3] = uStack_d0;
        puVar5[4] = local_148._0_8_;
        puVar5[5] = local_148._8_8_;
        puVar5[6] = uStack_138;
        puVar5[7] = CONCAT44(uStack_12c,uStack_130);
        puVar5[8] = CONCAT44(uStack_124,local_128);
        puVar5[9] = uStack_120;
        puVar5[10] = uStack_118;
        puVar5[0xb] = uStack_110;
        puVar5[0xc] = uVar7;
        DAT_180c62d38 = DAT_180c62d38 + 0xd;
      }
    }
  }
}



