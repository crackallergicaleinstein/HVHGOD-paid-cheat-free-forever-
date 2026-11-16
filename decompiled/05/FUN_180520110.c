// FUN_180520110 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180520110 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180520110(undefined8 *param_1,longlong param_2)

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
  float fVar12;
  undefined1 auVar13 [64];
  undefined1 auStackY_188 [32];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  longlong local_118;
  longlong lStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [16];
  undefined8 *local_e8;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  undefined1 local_d0 [16];
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined *local_a8;
  undefined *local_a0;
  undefined *local_98;
  char *local_90;
  char *local_88;
  char *local_80;
  ulonglong local_78;
  
  local_78 = DAT_1808d5f00 ^ (ulonglong)auStackY_188;
  local_90 = "Global";
  local_88 = "Per Group";
  local_80 = "Per Weapon";
  local_a8 = &DAT_180830b38;
  local_a0 = &DAT_18082a240;
  local_98 = &DAT_180829fa4;
  uVar1 = *(uint *)(param_2 + 0x6c);
  auVar8 = vpcmpeqd_avx(ZEXT416(uVar1),SUB6416(ZEXT464(0),0));
  auVar8 = vblendvps_avx(SUB6416(ZEXT464(0x430a0000),0),SUB6416(ZEXT464(0x43680000),0),auVar8);
  auVar13 = ZEXT1664(auVar8);
  local_d0 = (undefined1  [16])0x0;
  local_c0 = 0;
  local_f8 = (undefined1  [16])0x0;
  local_e8 = (undefined8 *)0x0;
  auVar10 = ZEXT464(0x3f800000);
  auVar9 = ZEXT864(0);
  if (uVar1 == 1) {
    FUN_1801780e0(local_d0,&PTR_s_Pistols_1806ffe00,6);
    ppuVar5 = &PTR_s_glock_18086c1d0;
    do {
      local_138 = (undefined1  [16])0x0;
      local_128 = (undefined1  [16])0x0;
      lVar6 = -1;
      do {
        lVar6 = lVar6 + 1;
      } while ((*ppuVar5)[lVar6] != '\0');
      uVar7 = FUN_18015ba30(local_138);
      puVar4 = (undefined8 *)FUN_1803db750(uVar7,local_138,auVar10._0_8_);
      FUN_18015c010(local_138);
      if (puVar4 == (undefined8 *)0x0) {
        local_108 = (undefined **)0x0;
        uStack_100 = CONCAT44(auVar9._0_4_,auVar9._0_4_);
      }
      else {
        local_108 = (undefined **)*puVar4;
        uStack_100 = CONCAT44((float)*(int *)((longlong)puVar4 + 0x24),(float)*(int *)(puVar4 + 4));
      }
      local_148._8_8_ = uStack_100;
      local_148._0_8_ = local_108;
      if ((undefined8 *)local_f8._8_8_ == local_e8) {
        FUN_180178c40(local_f8,local_f8._8_8_,local_148);
      }
      else {
        *(undefined ***)local_f8._8_8_ = local_108;
        *(undefined8 *)(local_f8._8_8_ + 8) = uStack_100;
        local_f8._8_8_ = (undefined8 *)(local_f8._8_8_ + 0x10);
      }
      ppuVar5 = ppuVar5 + 1;
    } while (ppuVar5 != &PTR_s_glock_18086c200);
  }
  fVar12 = auVar13._0_4_;
  if (*(uint *)(param_2 + 0x6c) == 2) {
    ppuVar5 = &PTR_s_Glock_18_1806ff9c0;
    do {
      FUN_1801543a0(local_d0,ppuVar5);
      local_138 = (undefined1  [16])0x0;
      local_128 = (undefined1  [16])0x0;
      lVar6 = -1;
      do {
        lVar6 = lVar6 + 1;
      } while (ppuVar5[2][lVar6] != '\0');
      uVar7 = FUN_18015ba30(local_138);
      puVar4 = (undefined8 *)FUN_1803db750(uVar7,local_138,auVar10._0_8_);
      FUN_18015c010(local_138);
      if (puVar4 == (undefined8 *)0x0) {
        local_108 = (undefined **)0x0;
        uStack_100 = CONCAT44(auVar9._0_4_,auVar9._0_4_);
      }
      else {
        local_108 = (undefined **)*puVar4;
        uStack_100 = CONCAT44((float)*(int *)((longlong)puVar4 + 0x24),(float)*(int *)(puVar4 + 4));
      }
      local_148._8_8_ = uStack_100;
      local_148._0_8_ = local_108;
      if ((undefined8 *)local_f8._8_8_ == local_e8) {
        FUN_180178c40(local_f8,local_f8._8_8_,local_148);
      }
      else {
        *(undefined ***)local_f8._8_8_ = local_108;
        *(undefined8 *)(local_f8._8_8_ + 8) = uStack_100;
        local_f8._8_8_ = (undefined8 *)(local_f8._8_8_ + 0x10);
      }
      fVar12 = auVar13._0_4_;
      ppuVar5 = ppuVar5 + 4;
    } while (ppuVar5 != &PTR_s_Pistols_1806ffe00);
  }
  auVar8._0_8_ = -(ulonglong)(local_d0._0_8_ == local_d0._8_8_);
  auVar8._8_8_ = 0xffffffffffffffff;
  auVar8 = vblendvps_avx(SUB6416(ZEXT464(0x43160000),0),auVar9._0_16_,auVar8);
  auVar10 = ZEXT1664(auVar8);
  fVar11 = 8.0;
  if (uVar1 != 0) {
    auVar9 = ZEXT464((uint)(auVar8._0_4_ + 8.0));
  }
  pfVar2 = (float *)*param_1;
  local_d8 = ((352.0 - (auVar9._0_4_ + fVar12)) * 0.5 + 146.0) * DAT_180b0a41c + *pfVar2;
  local_d4 = DAT_180b0a41c * 11.0 + pfVar2[1];
  local_dc = DAT_180b0a41c * 33.0 + pfVar2[1];
  local_e0 = DAT_180b0a41c * fVar12 + local_d8;
  local_148 = (undefined1  [16])0x0;
  local_108 = &local_a8;
  uStack_100 = 3;
  local_b8 = &local_90;
  local_b0 = 3;
  cVar3 = FUN_1804abea0("##profile_scope",&local_d8,&local_e0);
  if (cVar3 != '\0') {
    DAT_180c62f48 = 0;
    DAT_180c62fe0 = 0;
    DAT_1808e4f84 = 0xffffffff;
    DAT_180bbecdf = 0;
    DAT_180bbecde = 0;
    lVar6 = FUN_180439770();
    *(undefined8 *)(lVar6 + 0x420) = 0;
  }
  FUN_18050ce60("Profile",&local_d8);
  if (uVar1 != 0) {
    if (local_d0._0_8_ != local_d0._8_8_) {
      fVar12 = fVar11 * DAT_180b0a41c + local_e0;
      local_108 = (undefined **)CONCAT44(local_d4,fVar12);
      local_b8 = (char **)CONCAT44(local_dc,auVar10._0_4_ * DAT_180b0a41c + fVar12);
      lStack_110 = (longlong)(local_d0._8_8_ - local_d0._0_8_) >> 3;
      local_148._8_8_ = (longlong)(local_f8._8_8_ - local_f8._0_8_) >> 4;
      local_148._0_8_ = local_f8._0_8_;
      local_138 = (undefined1  [16])0x0;
      local_118 = local_d0._0_8_;
      cVar3 = FUN_1804abea0("##profile_target",&local_108,&local_b8);
      if (cVar3 != '\0') {
        DAT_180c62f48 = 0;
        DAT_180c62fe0 = 0;
        DAT_1808e4f84 = 0xffffffff;
        DAT_180bbecdf = 0;
        DAT_180bbecde = 0;
        lVar6 = FUN_180439770();
        *(undefined8 *)(lVar6 + 0x420) = 0;
      }
      FUN_18050ce60("Profile",&local_108);
    }
  }
  if (local_f8._0_8_ != 0) {
    if ((0xfff < ((longlong)local_e8 - local_f8._0_8_ & 0xfffffffffffffff0U)) &&
       (0x1f < (local_f8._0_8_ - *(longlong *)(local_f8._0_8_ + -8)) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0();
    local_f8 = (undefined1  [16])0x0;
    local_e8 = (undefined8 *)0x0;
  }
  FUN_1800f0160(local_d0);
}



