// FUN_18051fb50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18051fb50 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18051fb50(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  float *pfVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined **ppuVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [64];
  undefined1 auVar10 [64];
  float fVar11;
  undefined1 auVar12 [64];
  undefined1 auStackY_178 [32];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  longlong local_108;
  longlong lStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [16];
  undefined8 *local_d8;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  undefined1 local_c0 [16];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined *local_88;
  char *local_80;
  char *local_78;
  char *local_70;
  ulonglong local_68;
  
  local_68 = DAT_1808d5f00 ^ (ulonglong)auStackY_178;
  local_80 = "Global";
  local_78 = "Per Group";
  local_70 = "Per Weapon";
  local_98 = &DAT_180830b38;
  local_90 = &DAT_18082a240;
  local_88 = &DAT_180829fa4;
  uVar1 = *param_2;
  auVar8 = vpcmpeqd_avx(ZEXT416(uVar1),SUB6416(ZEXT464(0),0));
  auVar8 = vblendvps_avx(SUB6416(ZEXT464(0x430a0000),0),SUB6416(ZEXT464(0x43680000),0),auVar8);
  auVar12 = ZEXT1664(auVar8);
  local_c0 = (undefined1  [16])0x0;
  local_b0 = 0;
  local_e8 = (undefined1  [16])0x0;
  local_d8 = (undefined8 *)0x0;
  auVar10 = ZEXT464(0x3f800000);
  auVar9 = ZEXT864(0);
  if (uVar1 == 1) {
    FUN_1801780e0(local_c0,&PTR_s_Pistols_1806ffe00,6);
    ppuVar5 = &PTR_s_glock_18086c1d0;
    do {
      local_128 = (undefined1  [16])0x0;
      local_118 = (undefined1  [16])0x0;
      lVar6 = -1;
      do {
        lVar6 = lVar6 + 1;
      } while ((*ppuVar5)[lVar6] != '\0');
      uVar7 = FUN_18015ba30(local_128);
      puVar4 = (undefined8 *)FUN_1803db750(uVar7,local_128,auVar10._0_8_);
      FUN_18015c010(local_128);
      if (puVar4 == (undefined8 *)0x0) {
        local_f8 = (undefined **)0x0;
        uStack_f0 = CONCAT44(auVar9._0_4_,auVar9._0_4_);
      }
      else {
        local_f8 = (undefined **)*puVar4;
        uStack_f0 = CONCAT44((float)*(int *)((longlong)puVar4 + 0x24),(float)*(int *)(puVar4 + 4));
      }
      local_138._8_8_ = uStack_f0;
      local_138._0_8_ = local_f8;
      if ((undefined8 *)local_e8._8_8_ == local_d8) {
        FUN_180178c40(local_e8,local_e8._8_8_,local_138);
      }
      else {
        *(undefined ***)local_e8._8_8_ = local_f8;
        *(undefined8 *)(local_e8._8_8_ + 8) = uStack_f0;
        local_e8._8_8_ = (undefined8 *)(local_e8._8_8_ + 0x10);
      }
      ppuVar5 = ppuVar5 + 1;
    } while (ppuVar5 != &PTR_s_glock_18086c200);
  }
  fVar11 = auVar12._0_4_;
  if (*param_2 == 2) {
    ppuVar5 = &PTR_s_Glock_18_1806ff9c0;
    do {
      FUN_1801543a0(local_c0,ppuVar5);
      local_128 = (undefined1  [16])0x0;
      local_118 = (undefined1  [16])0x0;
      lVar6 = -1;
      do {
        lVar6 = lVar6 + 1;
      } while (ppuVar5[2][lVar6] != '\0');
      uVar7 = FUN_18015ba30(local_128);
      puVar4 = (undefined8 *)FUN_1803db750(uVar7,local_128,auVar10._0_8_);
      FUN_18015c010(local_128);
      if (puVar4 == (undefined8 *)0x0) {
        local_f8 = (undefined **)0x0;
        uStack_f0 = CONCAT44(auVar9._0_4_,auVar9._0_4_);
      }
      else {
        local_f8 = (undefined **)*puVar4;
        uStack_f0 = CONCAT44((float)*(int *)((longlong)puVar4 + 0x24),(float)*(int *)(puVar4 + 4));
      }
      local_138._8_8_ = uStack_f0;
      local_138._0_8_ = local_f8;
      if ((undefined8 *)local_e8._8_8_ == local_d8) {
        FUN_180178c40(local_e8,local_e8._8_8_,local_138);
      }
      else {
        *(undefined ***)local_e8._8_8_ = local_f8;
        *(undefined8 *)(local_e8._8_8_ + 8) = uStack_f0;
        local_e8._8_8_ = (undefined8 *)(local_e8._8_8_ + 0x10);
      }
      fVar11 = auVar12._0_4_;
      ppuVar5 = ppuVar5 + 4;
    } while (ppuVar5 != &PTR_s_Pistols_1806ffe00);
  }
  auVar8._0_8_ = -(ulonglong)(local_c0._0_8_ == local_c0._8_8_);
  auVar8._8_8_ = 0xffffffffffffffff;
  auVar8 = vblendvps_avx(SUB6416(ZEXT464(0x43160000),0),auVar9._0_16_,auVar8);
  auVar10 = ZEXT1664(auVar8);
  if (uVar1 != 0) {
    auVar9 = ZEXT464((uint)(auVar8._0_4_ + 8.0));
  }
  pfVar2 = (float *)*param_1;
  local_c8 = ((352.0 - (auVar9._0_4_ + fVar11)) * 0.5 + 146.0) * DAT_180b0a41c + *pfVar2;
  local_c4 = DAT_180b0a41c * 11.0 + pfVar2[1];
  local_cc = DAT_180b0a41c * 33.0 + pfVar2[1];
  local_d0 = DAT_180b0a41c * fVar11 + local_c8;
  local_138 = (undefined1  [16])0x0;
  local_f8 = &local_98;
  uStack_f0 = 3;
  local_a8 = &local_80;
  local_a0 = 3;
  cVar3 = FUN_1804abea0("##profile_scope",&local_c8,&local_d0);
  if (cVar3 != '\0') {
    DAT_180c62f48 = 0;
    DAT_180c62fe0 = 0;
    DAT_1808e4f84 = 0xffffffff;
    DAT_180bbecdf = 0;
    DAT_180bbecde = 0;
    lVar6 = FUN_180439770();
    *(undefined8 *)(lVar6 + 0x420) = 0;
  }
  FUN_18050ce60("Profile",&local_c8);
  if (uVar1 != 0) {
    if (local_c0._0_8_ != local_c0._8_8_) {
      fVar11 = DAT_180b0a41c * 8.0 + local_d0;
      local_f8 = (undefined **)CONCAT44(local_c4,fVar11);
      local_a8 = (char **)CONCAT44(local_cc,auVar10._0_4_ * DAT_180b0a41c + fVar11);
      lStack_100 = (longlong)(local_c0._8_8_ - local_c0._0_8_) >> 3;
      local_138._8_8_ = (longlong)(local_e8._8_8_ - local_e8._0_8_) >> 4;
      local_138._0_8_ = local_e8._0_8_;
      local_128 = (undefined1  [16])0x0;
      local_108 = local_c0._0_8_;
      cVar3 = FUN_1804abea0("##profile_target",&local_f8,&local_a8);
      if (cVar3 != '\0') {
        DAT_180c62f48 = 0;
        DAT_180c62fe0 = 0;
        DAT_1808e4f84 = 0xffffffff;
        DAT_180bbecdf = 0;
        DAT_180bbecde = 0;
        lVar6 = FUN_180439770();
        *(undefined8 *)(lVar6 + 0x420) = 0;
      }
      FUN_18050ce60("Profile",&local_f8);
    }
  }
  if (local_e8._0_8_ != 0) {
    if ((0xfff < ((longlong)local_d8 - local_e8._0_8_ & 0xfffffffffffffff0U)) &&
       (0x1f < (local_e8._0_8_ - *(longlong *)(local_e8._0_8_ + -8)) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0();
    local_e8 = (undefined1  [16])0x0;
    local_d8 = (undefined8 *)0x0;
  }
  FUN_1800f0160(local_c0);
}



