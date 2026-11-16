// FUN_18048d220 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18048d220 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18048d220(ulonglong param_1,int *param_2,ulonglong *param_3,undefined1 param_4,
                  ulonglong param_5,ulonglong *param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ulonglong *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 (*pauVar6) [16];
  int iVar7;
  ulonglong uVar8;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar9 [64];
  undefined1 auStack_218 [32];
  ulonglong *local_1f8;
  undefined8 local_1f0;
  ulonglong *local_1e8;
  undefined1 *local_1e0;
  undefined8 local_1d8;
  undefined4 local_1c8;
  undefined1 local_1b8 [16];
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  ulonglong local_198;
  ulonglong uStack_190;
  ulonglong uStack_188;
  undefined1 auStack_180 [16];
  ulonglong uStack_170;
  int *piStack_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  ulonglong uStack_150;
  ulonglong uStack_148;
  ulonglong uStack_140;
  undefined1 local_138;
  undefined7 uStack_137;
  ulonglong local_128;
  ulonglong uStack_120;
  ulonglong local_108;
  ulonglong uStack_100;
  ulonglong uStack_f8;
  ulonglong uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  int *piStack_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  ulonglong uStack_b8;
  ulonglong uStack_b0;
  ulonglong local_a8;
  ulonglong local_98;
  int *local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  ulonglong local_70;
  ulonglong uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_1808d5f00 ^ (ulonglong)auStack_218;
  local_128 = param_5;
  if (DAT_180bbecdb == '\0') {
    local_88 = 2;
    local_78 = 0;
    local_70 = *param_3;
    uStack_68 = param_3[1];
    auVar9 = ZEXT864(0);
    local_84 = 0;
    local_80 = 0x3f800000;
    local_7c = 0x3f800000;
    if (param_3[1] != 0) {
      iVar7 = (int)param_3[1] + -1;
      iVar5 = *param_2;
      if (iVar5 < 0) {
        iVar5 = 0;
      }
      else if (iVar7 < iVar5) {
        iVar5 = iVar7;
      }
      local_1c8 = 0;
      local_1d8 = 0;
      uVar8 = (ulonglong)iVar5;
      local_1e0 = (undefined1 *)0x0;
      auVar2 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 13.2 + 0.5)),1);
      local_1f0 = *(undefined8 *)(*param_3 + uVar8 * 8);
      auVar2 = vmaxss_avx(SUB6416(ZEXT464(0x3f800000),0),auVar2);
      local_1e8 = (ulonglong *)0x0;
      local_1f8 = (ulonglong *)((ulonglong)local_1f8 & 0xffffffff00000000);
      local_98 = param_1;
      local_90 = param_2;
      FUN_1804ea040(local_1b8,DAT_180c62ca8,auVar2._0_8_,0x7f7fffff);
      auVar2 = vmaxss_avx(SUB6416(ZEXT464(0x429c0000),0),
                          ZEXT416((uint)((float)local_1b8._0_4_ / DAT_180b0a41c + 14.0)));
      if (param_6[5] == 0) {
        if (uVar8 < param_6[3]) {
          local_1b8 = *(undefined1 (*) [16])(param_6[2] + uVar8 * 0x10);
        }
        else {
          auVar1._8_8_ = 0;
          auVar1._0_8_ = local_1b8._8_8_;
          local_1b8 = auVar1 << 0x40;
          auVar1 = vinsertps_avx(local_1b8,auVar9._0_16_,0x20);
          local_1b8 = vinsertps_avx(auVar1,auVar9._0_16_,0x30);
        }
      }
      else {
        local_1b8 = *(undefined1 (*) [16])(param_6 + 5);
      }
      local_1e0 = local_1b8;
      local_1d8 = 0;
      local_1f8 = &local_98;
      if ((char)param_6[4] == '\0') {
        local_1f8 = (ulonglong *)0x0;
      }
      local_1e8 = (ulonglong *)CONCAT44(local_1e8._4_4_,auVar9._0_4_);
      local_1f0 = CONCAT44(local_1f0._4_4_,auVar2._0_4_);
      pauVar6 = (undefined1 (*) [16])FUN_180487810(&local_128,param_1,local_128,param_4);
      local_1b8 = *pauVar6;
      uStack_1a8 = *(undefined8 *)pauVar6[1];
      uStack_1a0 = *(undefined8 *)(pauVar6[1] + 8);
      FUN_1804c2800(param_1);
      local_198 = *param_6;
      uStack_190 = param_6[1];
      uStack_188 = param_6[2];
      auStack_180 = *(undefined1 (*) [16])(param_6 + 3);
      uStack_170 = param_6[5];
      piStack_168 = (int *)param_6[6];
      local_128 = *param_3;
      uStack_120 = param_3[1];
      local_1e8 = &local_198;
      local_1f8 = (ulonglong *)CONCAT71(local_1f8._1_7_,param_4);
      FUN_18048b4f0(local_1b8,local_1b8,param_2,&local_128);
      iVar5 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
      if (iVar5 < 2) {
        FUN_1804c5a40("Calling PopID() too many times!");
      }
      else {
        *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar5 + -1;
      }
    }
  }
  else if ((char)param_6[4] != '\0') {
    auStack_180 = (undefined1  [16])0x0;
    uStack_170 = 0;
    local_198 = local_198 & 0xffffffff00000000;
    uStack_188 = CONCAT44(uStack_188._4_4_,4);
    uStack_150 = 0;
    uVar8 = CONCAT71(uStack_137,param_4);
    uStack_160 = 0;
    uStack_148 = *param_3;
    uStack_140 = param_3[1];
    uStack_15c = 0x3f800000;
    local_158 = 0x3f800000;
    local_e8 = 0;
    uStack_e0 = 0;
    uStack_d0 = 0x3f80000000000000;
    local_c8 = CONCAT44(uStack_154,0x3f800000);
    uStack_c0 = 0;
    local_108 = local_198;
    uStack_f8 = uStack_188;
    uStack_f0 = 0;
    if (param_1 != 0) {
      uStack_190 = param_1;
      piStack_168 = param_2;
      local_138 = param_4;
      uStack_100 = param_1;
      piStack_d8 = param_2;
      uStack_b8 = uStack_148;
      uStack_b0 = uStack_140;
      local_a8 = uVar8;
      uVar4 = FUN_180493b90();
      puVar3 = DAT_180c62d38;
      local_108 = CONCAT44(local_108._4_4_,uVar4);
      if (DAT_180c62d38 == DAT_180c62d40) {
        FUN_1804948a0(extraout_XMM0_Qa,DAT_180c62d38,&local_108);
      }
      else {
        *DAT_180c62d38 = local_108;
        puVar3[1] = uStack_100;
        puVar3[2] = uStack_f8;
        puVar3[3] = uStack_f0;
        puVar3[4] = auStack_180._8_8_;
        puVar3[5] = uStack_170;
        puVar3[6] = (ulonglong)piStack_168;
        puVar3[7] = CONCAT44(uStack_15c,uStack_160);
        puVar3[8] = CONCAT44(uStack_154,local_158);
        puVar3[9] = uStack_150;
        puVar3[10] = uStack_148;
        puVar3[0xb] = uStack_140;
        puVar3[0xc] = uVar8;
        DAT_180c62d38 = DAT_180c62d38 + 0xd;
      }
    }
  }
}



