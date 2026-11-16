// FUN_1802fbe90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802fbe90 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802fbe90(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong param_4,
                  float *param_5,float *param_6,longlong param_7,float *param_8,undefined8 param_9)

{
  byte bVar1;
  longlong lVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined8 uVar5;
  longlong *plVar6;
  ULONGLONG UVar7;
  longlong lVar8;
  uint uVar10;
  uint uVar9;
  float fVar11;
  float fVar12;
  undefined8 extraout_XMM0_Qa;
  undefined1 in_ZMM0 [64];
  undefined1 extraout_var [56];
  undefined1 in_ZMM1 [64];
  float fVar13;
  undefined1 auVar14 [64];
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  undefined1 auVar18 [64];
  float fVar19;
  float fVar20;
  undefined1 auVar21 [64];
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auStack_898 [32];
  undefined **local_878;
  char *local_870;
  undefined8 local_868;
  longlong local_860;
  longlong local_858;
  longlong local_850;
  double local_848;
  double local_840;
  double local_838;
  double local_830;
  double local_828;
  double local_820;
  double local_818;
  double local_810;
  double local_808;
  double local_800;
  double local_7f8;
  double local_7f0;
  undefined8 local_7e8;
  double local_7e0;
  double local_7d8;
  double local_7d0;
  double local_7c8;
  uint local_7c0;
  double local_7b8;
  double local_7b0;
  undefined8 local_7a8;
  undefined4 local_7a0;
  uint local_798;
  float local_788;
  float local_784;
  double local_780;
  float local_778;
  float *local_770;
  double local_768;
  float *local_760;
  undefined8 local_758;
  longlong local_750;
  undefined8 local_748;
  undefined1 auStack_740 [16];
  undefined1 auStack_730 [16];
  undefined4 uStack_720;
  undefined4 uStack_71c;
  undefined4 uStack_718;
  uint uStack_714;
  undefined8 uStack_710;
  undefined8 local_708;
  undefined8 uStack_700;
  char local_6f8 [1536];
  ulonglong local_f8;
  
  local_f8 = DAT_1808d5f00 ^ (ulonglong)auStack_898;
  local_760 = param_6;
  local_770 = param_8;
  local_758 = param_9;
  local_768 = (double)CONCAT44(local_768._4_4_,param_3);
  local_788 = in_ZMM1._0_4_;
  local_784 = in_ZMM0._0_4_;
  auVar18 = ZEXT1664(in_ZMM1._0_16_);
  auVar21 = ZEXT1664(in_ZMM0._0_16_);
  local_750 = param_4;
  plVar6 = (longlong *)FUN_1802ff060();
  auVar14._8_56_ = extraout_var;
  auVar14._0_8_ = extraout_XMM0_Qa;
  if (DAT_180b0dfb0 == 0) {
  }
  lVar2 = *(longlong *)(DAT_180b0dfb0 + 8);
  if ((*plVar6 != param_4) || (lVar2 < plVar6[1])) {
    auStack_740 = vpcmpeqd_avx(auVar14._0_16_,auVar14._0_16_);
    local_748 = 0;
    *plVar6 = 0;
    plVar6[1] = auStack_740._0_8_;
    plVar6[2] = auStack_740._8_8_;
    plVar6[3] = 0;
    uStack_720 = 0;
    uStack_71c = 0;
    uStack_718 = 0;
    uStack_710 = 0;
    auStack_730._8_8_ = SUB168(ZEXT816(0),4);
    local_708 = 0;
    uStack_700 = 0;
    plVar6[4] = auStack_730._8_8_;
    plVar6[5] = 0;
    plVar6[6] = (ulonglong)uStack_714 << 0x20;
    plVar6[7] = 0;
    plVar6[8] = 0;
    plVar6[9] = 0;
    auStack_730 = ZEXT816(0);
  }
  lVar8 = plVar6[1];
  if (((lVar8 < 0) || (lVar2 <= lVar8)) || (lVar8 + 2 < lVar2)) {
    auVar14 = ZEXT1664(SUB6416(ZEXT464(0x43b40000),0));
    auVar18 = ZEXT1664(auVar18._0_16_);
    auVar21 = ZEXT1664(auVar21._0_16_);
    FUN_180615070();
    uVar16 = auVar18._0_4_;
    fVar19 = auVar21._0_4_;
LAB_1802fc127:
    bVar4 = false;
  }
  else {
    fVar13 = 0.0;
    auVar14 = ZEXT1664(SUB6416(ZEXT464(0x43b40000),0));
    auVar18 = ZEXT1664(auVar18._0_16_);
    auVar21 = ZEXT1664(auVar21._0_16_);
    fVar11 = (float)FUN_180615070();
    uVar16 = auVar18._0_4_;
    fVar19 = auVar21._0_4_;
    if (ABS(fVar11) <= 45.0) {
LAB_1802fc11f:
      auVar14 = ZEXT464(0x43b40000);
      goto LAB_1802fc127;
    }
    fVar11 = (float)FUN_180615070(fVar19 - *(float *)((longlong)plVar6 + 0x24),auVar14._0_8_);
    uVar16 = auVar18._0_4_;
    fVar19 = auVar21._0_4_;
    if (5.0 <= ABS(fVar11)) goto LAB_1802fc11f;
    fVar11 = param_5[1] - *(float *)((longlong)plVar6 + 0x1c);
    fVar11 = fVar11 * fVar11 +
             (*param_5 - *(float *)(plVar6 + 3)) * (*param_5 - *(float *)(plVar6 + 3)) +
             (param_5[2] - *(float *)(plVar6 + 4)) * (param_5[2] - *(float *)(plVar6 + 4));
    if (fVar11 != fVar13) {
      if (fVar11 < 0.0) {
        fVar11 = (float)FUN_18061e150(fVar11);
        uVar16 = auVar18._0_4_;
        fVar19 = auVar21._0_4_;
      }
      else {
        fVar11 = SQRT(fVar11);
      }
      if (64.0 <= fVar11) goto LAB_1802fc11f;
    }
    bVar4 = true;
    plVar6[9] = plVar6[9] + 1;
    auVar14 = ZEXT464(0x43b40000);
    *(int *)((longlong)plVar6 + 0x2c) = (int)plVar6[5];
    *(undefined4 *)(plVar6 + 6) = uVar16;
    plVar6[2] = lVar2;
  }
  plVar6[8] = plVar6[8] + 1;
  *plVar6 = param_4;
  plVar6[1] = lVar2;
  plVar6[3] = *(longlong *)param_5;
  fVar11 = param_5[2];
  *(float *)((longlong)plVar6 + 0x24) = fVar19;
  *(undefined4 *)(plVar6 + 5) = uVar16;
  *(float *)(plVar6 + 4) = fVar11;
  UVar7 = GetTickCount64();
  if (UVar7 < (ulonglong)plVar6[7]) {
  }
  lVar8 = 1000;
  if (bVar4) {
    lVar8 = 0xfa;
  }
  uVar16 = 1;
  plVar6[7] = lVar8 + UVar7;
  uVar5 = DAT_180b0dfd8;
  uVar9 = 0;
  if (DAT_180cc8360 != '\0') {
    uVar9 = (uint)(DAT_180cc83c9 != '\0');
    uVar10 = (uint)(DAT_180cc83c9 != '\0');
    if ((DAT_180cc8360 != '\0') && (DAT_180cc83c9 != '\0')) goto LAB_1802fc1e1;
  }
  uVar10 = uVar9;
  uVar16 = 0;
LAB_1802fc1e1:
  local_778 = *(float *)(param_7 + 0x98);
  bVar1 = *(byte *)(param_7 + 0xbb);
  fVar19 = *(float *)(param_7 + 0xac);
  fVar11 = local_770[1];
  fVar13 = *local_770;
  fVar22 = param_5[2];
  fVar23 = param_5[1];
  fVar24 = *param_5;
  fVar15 = local_760[2];
  fVar17 = local_760[1];
  fVar20 = *local_760;
  local_770 = (float *)CONCAT44(local_770._4_4_,*(undefined4 *)(param_7 + 0x94));
  uVar3 = *(undefined8 *)(param_7 + 8);
  local_780 = (double)CONCAT44(local_780._4_4_,*(undefined4 *)(param_7 + 0x90));
  fVar12 = (float)FUN_180615070(local_788 - local_784,auVar14._0_8_);
  FUN_18063ab10(local_6f8,0,0x600);
  local_7a8 = uVar5;
  local_7f0 = (double)fVar15;
  local_840 = (double)*(float *)(plVar6 + 6);
  local_7b0 = (double)fVar11;
  local_7b8 = (double)fVar13;
  local_7c0 = (uint)bVar1;
  local_7c8 = (double)fVar19;
  local_848 = (double)*(float *)((longlong)plVar6 + 0x2c);
  local_7d0 = (double)local_778;
  local_7d8 = (double)local_770._0_4_;
  local_7e0 = (double)local_780._0_4_;
  local_7f8 = (double)fVar17;
  local_800 = (double)fVar20;
  local_808 = (double)fVar22;
  local_810 = (double)fVar23;
  local_818 = (double)fVar24;
  local_820 = (double)fVar12;
  local_828 = (double)local_788;
  local_830 = (double)local_768._0_4_;
  local_838 = (double)local_784;
  local_850 = plVar6[2];
  local_858 = plVar6[9];
  local_860 = plVar6[8];
  local_868 = local_758;
  local_870 = (char *)local_750;
  local_878 = (undefined **)lVar2;
  local_7e8 = uVar3;
  local_7a0 = uVar16;
  local_798 = uVar10;
  local_780 = local_848;
  local_768 = local_840;
  local_760 = (float *)local_7f0;
  FUN_18015ad60(local_6f8,0x600,0xffffffffffffffff,
                "command=%lld pawn=0x%llx reason=%s samples=%llu nearby_direction_switches=%llu last_switch_command=%lld switch_yaw=(%.3f,%.3f) requested_yaw=%.3f travel_yaw=%.3f chosen_yaw=%.3f avoidance_delta=%.3f origin=(%.3f,%.3f,%.3f) velocity=(%.3f,%.3f,%.3f) hit_entity=0x%llx normal=(%.7f,%.7f,%.7f) fraction=%.5f all_solid=%d tangent_fractions=(%.5f,%.5f) captured_buttons=0x%llx slide_walk=%d ramp_boost=%d writer=air_collision_avoidance server_ack=unverified"
               );
  local_878 = &PTR_180700558;
  if (local_6f8[0] != '\0') {
    local_878 = (undefined **)&DAT_1806bcfc0;
  }
  local_870 = local_6f8;
  FUN_1800f6900(0);
  plVar6[9] = 0;
  plVar6[8] = 0;
}



