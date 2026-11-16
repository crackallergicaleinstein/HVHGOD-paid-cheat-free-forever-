// FUN_180489fc0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180489fc0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180489fc0(longlong param_1,longlong param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [32];
  longlong *plVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  undefined8 extraout_XMM0_Qa;
  longlong lVar8;
  undefined1 auStack_1c8 [32];
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 local_198;
  undefined4 *local_190;
  undefined8 local_188;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined4 local_158;
  uint uStack_154;
  longlong lStack_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined8 uStack_140;
  longlong local_138;
  undefined1 auStack_130 [16];
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  longlong lStack_110;
  undefined1 auStack_108 [16];
  undefined1 local_f8;
  undefined7 uStack_f7;
  longlong local_e8;
  longlong lStack_e0;
  longlong lStack_d8;
  longlong lStack_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined1 local_78 [32];
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_1c8;
  if (DAT_180bbecdb == '\0') {
    local_188 = 0;
    local_190 = &local_178;
    local_198 = 0;
    uStack_170 = 0;
    uStack_16c = 0;
    local_58 = 0;
    local_1a0 = 0x429c0000;
    local_1a8 = 0;
    local_178 = 0;
    uStack_174 = 0;
    puVar7 = (undefined8 *)FUN_180487810(local_78,param_1,param_4,param_3);
    uStack_168 = puVar7[2];
    uStack_160 = puVar7[3];
    local_178 = (undefined4)*puVar7;
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
    auVar2 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 12.7 + 0.5)),1);
    auVar3 = vshufps_avx(auVar4._16_16_,auVar4._16_16_,0x55);
    auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)((auVar3._0_4_ - auVar2._0_4_) + 0.5)),1);
    auVar2 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(((float)uStack_168 - auVar2._0_4_ * 0.5) + 0.5))
                          ,1);
    local_198 = CONCAT31(local_198._1_3_,param_6);
    local_58 = CONCAT44(auVar2._0_4_,auVar3._0_4_);
    local_1a8 = CONCAT71(local_1a8._1_7_,param_3);
    FUN_1804ab860();
    iVar1 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
    if (iVar1 < 2) {
      FUN_1804c5a40("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar1 + -1;
    }
  }
  else {
    local_158 = 0;
    uStack_148 = 2;
    uStack_140 = 0;
    lStack_110 = 0;
    lVar8 = CONCAT71(uStack_f7,param_3);
    auStack_130 = (undefined1  [16])0x0;
    uStack_11c = 0x3f800000;
    local_118 = 0x3f800000;
    auStack_108 = ZEXT816(0);
    local_e8 = (ulonglong)uStack_154 << 0x20;
    lStack_d8 = CONCAT44(uStack_144,2);
    lStack_d0 = 0;
    uStack_120 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0x3f80000000000000;
    local_a8 = CONCAT44(uStack_114,0x3f800000);
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    if (param_1 != 0) {
      lStack_150 = param_1;
      local_138 = param_2;
      local_f8 = param_3;
      lStack_e0 = param_1;
      local_c8 = param_2;
      local_88 = lVar8;
      uVar6 = FUN_180493b90();
      plVar5 = DAT_180c62d38;
      local_e8 = CONCAT44(local_e8._4_4_,uVar6);
      if (DAT_180c62d38 == DAT_180c62d40) {
        FUN_1804948a0(extraout_XMM0_Qa,DAT_180c62d38,&local_e8);
      }
      else {
        *DAT_180c62d38 = local_e8;
        plVar5[1] = lStack_e0;
        plVar5[2] = lStack_d8;
        plVar5[3] = lStack_d0;
        plVar5[4] = local_138;
        plVar5[5] = auStack_130._0_8_;
        plVar5[6] = auStack_130._8_8_;
        plVar5[7] = CONCAT44(uStack_11c,uStack_120);
        plVar5[8] = CONCAT44(uStack_114,local_118);
        plVar5[9] = lStack_110;
        plVar5[10] = auStack_108._0_8_;
        plVar5[0xb] = auStack_108._8_8_;
        plVar5[0xc] = lVar8;
        DAT_180c62d38 = DAT_180c62d38 + 0xd;
      }
    }
  }
}



