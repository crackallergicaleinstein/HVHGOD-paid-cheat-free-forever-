// FUN_18048aae0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18048aae0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18048aae0(ulonglong param_1,ulonglong param_2,ulonglong *param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  undefined1 auVar5 [32];
  undefined4 uVar6;
  ulonglong *puVar7;
  undefined8 extraout_XMM0_Qa;
  ulonglong uVar8;
  undefined1 auStack_1b8 [32];
  ulonglong *local_198;
  undefined4 local_190;
  undefined1 *local_188;
  float *local_180;
  undefined8 local_178;
  float local_168;
  float local_164;
  undefined4 local_160;
  undefined4 local_15c;
  ulonglong local_158;
  ulonglong uStack_150;
  ulonglong uStack_148;
  ulonglong uStack_140;
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  ulonglong local_118;
  ulonglong uStack_110;
  ulonglong uStack_108;
  ulonglong uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  ulonglong uStack_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  ulonglong uStack_c8;
  ulonglong uStack_c0;
  ulonglong local_b8;
  undefined8 local_a8;
  ulonglong local_98;
  ulonglong uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined1 auStack_80 [16];
  ulonglong uStack_70;
  ulonglong uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  ulonglong uStack_50;
  ulonglong uStack_48;
  ulonglong uStack_40;
  undefined1 local_38;
  undefined7 uStack_37;
  ulonglong local_30;
  
  local_30 = DAT_1808d5f00 ^ (ulonglong)auStack_1b8;
  if (DAT_180bbecdb == '\0') {
    local_178 = 0;
    local_a8 = 0;
    uStack_70 = *param_3;
    uStack_68 = param_3[1];
    auStack_80 = ZEXT816(0x3f8000003f800000);
    local_168 = 0.0;
    local_180 = &local_168;
    local_198 = &local_98;
    local_188 = (undefined1 *)((ulonglong)local_188 & 0xffffffff00000000);
    local_190 = 0x429c0000;
    uStack_84 = 0;
    local_164 = 0.0;
    local_160 = 0;
    local_15c = 0;
    uStack_88 = 2;
    local_98 = param_1;
    uStack_90 = param_2;
    puVar7 = (ulonglong *)FUN_180487810(&local_158,param_1,0,1);
    local_158 = *puVar7;
    uStack_150 = puVar7[1];
    uStack_148 = puVar7[2];
    uStack_140 = puVar7[3];
    FUN_1804c2800(param_1);
    auVar5._8_8_ = uStack_150;
    auVar5._0_8_ = local_158;
    auVar5._16_8_ = uStack_148;
    auVar5._24_8_ = uStack_140;
    auVar2 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 105.0 + 0.5)),1);
    auVar3 = vshufps_avx(auVar5._16_16_,auVar5._16_16_,0x55);
    fVar4 = auVar3._0_4_ - auVar2._0_4_;
    auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 20.2 + 0.5)),1);
    local_168 = fVar4 + auVar2._0_4_;
    auVar2 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(((float)uStack_148 - auVar3._0_4_ * 0.5) + 0.5))
                          ,1);
    local_164 = auVar2._0_4_ + auVar3._0_4_;
    local_180 = (float *)local_138;
    local_138 = (undefined1  [16])0x0;
    local_158 = *param_3;
    uStack_150 = param_3[1];
    local_188 = local_128;
    local_128 = (undefined1  [16])0x0;
    local_a8 = CONCAT44(auVar2._0_4_,fVar4);
    local_198 = (ulonglong *)param_2;
    FUN_1804abea0("##combo",&local_a8,&local_168,&local_158);
    iVar1 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
    if (iVar1 < 2) {
      FUN_1804c5a40("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar1 + -1;
    }
  }
  else {
    uStack_70 = 0;
    local_98 = local_98 & 0xffffffff00000000;
    uStack_88 = 4;
    uStack_50 = 0;
    local_38 = 1;
    uVar8 = CONCAT71(uStack_37,1);
    auStack_80 = (undefined1  [16])0x0;
    uStack_60 = 0;
    uStack_c8 = *param_3;
    uStack_c0 = param_3[1];
    uStack_5c = 0x3f800000;
    local_58 = 0x3f800000;
    uStack_108 = CONCAT44(uStack_84,4);
    local_f8 = 0;
    uStack_f0 = 0;
    uStack_e0 = 0x3f80000000000000;
    local_d8 = CONCAT44(uStack_54,0x3f800000);
    uStack_d0 = 0;
    local_118 = local_98;
    uStack_100 = 0;
    if (param_1 != 0) {
      uStack_110 = param_1;
      uStack_e8 = param_2;
      local_b8 = uVar8;
      uStack_90 = param_1;
      uStack_68 = param_2;
      uStack_48 = uStack_c8;
      uStack_40 = uStack_c0;
      uVar6 = FUN_180493b90();
      puVar7 = DAT_180c62d38;
      local_118 = CONCAT44(local_118._4_4_,uVar6);
      if (DAT_180c62d38 == DAT_180c62d40) {
        FUN_1804948a0(extraout_XMM0_Qa,DAT_180c62d38,&local_118);
      }
      else {
        *DAT_180c62d38 = local_118;
        puVar7[1] = uStack_110;
        puVar7[2] = uStack_108;
        puVar7[3] = uStack_100;
        puVar7[4] = auStack_80._8_8_;
        puVar7[5] = uStack_70;
        puVar7[6] = uStack_68;
        puVar7[7] = CONCAT44(uStack_5c,uStack_60);
        puVar7[8] = CONCAT44(uStack_54,local_58);
        puVar7[9] = uStack_50;
        puVar7[10] = uStack_48;
        puVar7[0xb] = uStack_40;
        puVar7[0xc] = uVar8;
        DAT_180c62d38 = DAT_180c62d38 + 0xd;
      }
    }
  }
}



