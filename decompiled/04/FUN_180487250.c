// FUN_180487250 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180487250 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180487250(longlong param_1,ulonglong param_2,ulonglong param_3,ulonglong *param_4)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ulonglong *puVar5;
  undefined4 uVar6;
  undefined8 extraout_XMM0_Qa;
  ulonglong uVar7;
  undefined1 auStack_1c8 [32];
  undefined8 local_1a8;
  ulonglong *local_1a0;
  undefined1 *local_198;
  undefined1 *local_190;
  float local_188;
  float local_184;
  float local_180;
  ulonglong local_178;
  ulonglong uStack_170;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined1 auStack_160 [16];
  ulonglong uStack_150;
  ulonglong uStack_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  ulonglong uStack_130;
  ulonglong uStack_128;
  ulonglong uStack_120;
  undefined1 local_118;
  undefined7 uStack_117;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  ulonglong local_e8;
  ulonglong uStack_e0;
  ulonglong local_d8;
  ulonglong uStack_d0;
  ulonglong uStack_c8;
  ulonglong uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulonglong uStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ulonglong uStack_88;
  ulonglong uStack_80;
  ulonglong local_78;
  float local_68;
  float local_64;
  ulonglong local_60;
  
  local_60 = DAT_1808d5f00 ^ (ulonglong)auStack_1c8;
  if (DAT_180bbecdb == '\0') {
    FUN_1804c2800(param_2);
    local_190 = (undefined1 *)0x0;
    local_1a0 = &local_178;
    auStack_160 = ZEXT816(0x3f8000003f800000);
    uStack_150 = *param_4;
    uStack_148 = param_4[1];
    uStack_168 = 2;
    local_1a8 = (ulonglong)local_1a8._4_4_ << 0x20;
    uStack_164 = 0;
    local_178 = param_2;
    uStack_170 = param_3;
    FUN_180485a70(param_1,&local_188,param_2,1);
    auVar2 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 105.0 + 0.5)),1);
    auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 20.2 + 0.5)),1);
    auVar4 = vroundss_avx(ZEXT816(0),
                          ZEXT416((uint)(((*(float *)(param_1 + 0x18) + *(float *)(param_1 + 0x10))
                                         - *(float *)(param_1 + 0x20)) * DAT_180b0a41c + 0.5)),1);
    local_68 = (auVar4._0_4_ + *(float *)(param_1 + 8)) - auVar2._0_4_;
    local_188 = local_68 + auVar2._0_4_;
    auVar2 = vroundss_avx(ZEXT816(0),
                          ZEXT416((uint)((local_180 - auVar3._0_4_ * 0.5) + DAT_180b0a41c * 0.1 +
                                        0.5)),1);
    local_64 = auVar2._0_4_;
    local_184 = local_64 + auVar3._0_4_;
    local_190 = local_108;
    local_108 = (undefined1  [16])0x0;
    local_e8 = *param_4;
    uStack_e0 = param_4[1];
    local_198 = local_f8;
    local_f8 = (undefined1  [16])0x0;
    local_1a8 = param_3;
    FUN_1804abea0("##combo",&local_68,&local_188,&local_e8);
    iVar1 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
    if (iVar1 < 2) {
      FUN_1804c5a40("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar1 + -1;
    }
  }
  else {
    auStack_160 = (undefined1  [16])0x0;
    uStack_150 = 0;
    local_178 = local_178 & 0xffffffff00000000;
    uStack_168 = 4;
    uStack_130 = 0;
    local_118 = 1;
    uVar7 = CONCAT71(uStack_117,1);
    uStack_140 = 0;
    uStack_128 = *param_4;
    uStack_120 = param_4[1];
    uStack_13c = 0x3f800000;
    local_138 = 0x3f800000;
    uStack_c8 = CONCAT44(uStack_164,4);
    local_b8 = 0;
    uStack_b0 = 0;
    uStack_a0 = 0x3f80000000000000;
    local_98 = CONCAT44(uStack_134,0x3f800000);
    uStack_90 = 0;
    local_d8 = local_178;
    uStack_c0 = 0;
    if (param_2 != 0) {
      uStack_170 = param_2;
      uStack_148 = param_3;
      uStack_d0 = param_2;
      uStack_a8 = param_3;
      uStack_88 = uStack_128;
      uStack_80 = uStack_120;
      local_78 = uVar7;
      uVar6 = FUN_180493b90();
      puVar5 = DAT_180c62d38;
      local_d8 = CONCAT44(local_d8._4_4_,uVar6);
      if (DAT_180c62d38 == DAT_180c62d40) {
        FUN_1804948a0(extraout_XMM0_Qa,DAT_180c62d38,&local_d8);
      }
      else {
        *DAT_180c62d38 = local_d8;
        puVar5[1] = uStack_d0;
        puVar5[2] = uStack_c8;
        puVar5[3] = uStack_c0;
        puVar5[4] = auStack_160._8_8_;
        puVar5[5] = uStack_150;
        puVar5[6] = uStack_148;
        puVar5[7] = CONCAT44(uStack_13c,uStack_140);
        puVar5[8] = CONCAT44(uStack_134,local_138);
        puVar5[9] = uStack_130;
        puVar5[10] = uStack_128;
        puVar5[0xb] = uStack_120;
        puVar5[0xc] = uVar7;
        DAT_180c62d38 = DAT_180c62d38 + 0xd;
      }
    }
  }
}



