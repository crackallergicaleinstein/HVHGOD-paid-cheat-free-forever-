// FUN_180398380 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180398380 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180398380(char *param_1,longlong param_2,longlong param_3)

{
  undefined1 auVar1 [32];
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined8 uVar9;
  HWND pHVar10;
  char cVar11;
  int iVar12;
  undefined *puVar13;
  longlong lVar14;
  ULONGLONG UVar15;
  undefined8 *puVar16;
  HWND pHVar17;
  undefined4 uVar18;
  undefined *puVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [64];
  undefined1 auVar24 [16];
  undefined1 auVar25 [64];
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar29 [64];
  undefined1 auStack_888 [32];
  undefined **local_868;
  char *local_860;
  int local_858;
  undefined4 local_850;
  undefined8 local_848;
  longlong local_840;
  undefined8 local_838;
  longlong local_830;
  undefined8 local_828;
  longlong local_820;
  undefined8 local_818;
  longlong local_810;
  undefined4 local_808;
  undefined4 local_800;
  undefined4 local_7f8;
  undefined4 local_7f0;
  undefined8 local_7e8;
  longlong local_7e0;
  double local_7d8;
  double local_7d0;
  double local_7c8;
  double local_7c0;
  double local_7b8;
  double local_7b0;
  longlong local_7a8;
  longlong local_7a0;
  undefined8 local_798;
  char *local_790;
  longlong local_768;
  longlong lStack_760;
  longlong lStack_758;
  undefined8 uStack_750;
  undefined8 local_728;
  undefined8 uStack_720;
  longlong lStack_718;
  longlong lStack_710;
  undefined1 local_708 [96];
  char local_6a8 [1536];
  ulonglong local_a8;
  
  local_a8 = DAT_1808d5f00 ^ (ulonglong)auStack_888;
  local_790 = param_1;
  puVar13 = (undefined *)FUN_1803a70a0();
  puVar19 = &DAT_180ba31a0;
  if (puVar13 != (undefined *)0x0) {
    puVar19 = puVar13;
  }
  if (puVar19[0x2b54] == '\0') {
  }
  if (*(longlong *)(puVar19 + 11000) != param_3) {
  }
  if (param_2 == 0) {
  }
  if (param_2 + 8 == 0) {
  }
  local_7a8 = 0;
  lVar14 = FUN_18017ea70();
  *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + 1;
  cVar11 = FUN_1804514c0(&local_7a8,param_2 + 8,8);
  if (cVar11 == '\0') {
    lVar14 = FUN_18017ea70();
    if (*(int *)(lVar14 + 4) == 0) {
    }
    *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + -1;
  }
  lVar14 = FUN_18017ea70();
  if (*(int *)(lVar14 + 4) != 0) {
    *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + -1;
  }
  if (local_7a8 != *(longlong *)(puVar19 + 0x2b00)) {
  }
  UVar15 = GetTickCount64();
  iVar12 = strcmp(param_1,"before_native");
  lVar14 = 0x2b58;
  if (iVar12 != 0) {
    lVar14 = 0x2b60;
  }
  if (UVar15 < *(ulonglong *)(puVar19 + lVar14)) {
  }
  puVar16 = (undefined8 *)FUN_180398030(local_708,param_2,param_3);
  local_768 = puVar16[4];
  lStack_760 = puVar16[5];
  lStack_758 = puVar16[6];
  uVar9 = puVar16[7];
  auVar1 = *(undefined1 (*) [32])(puVar16 + 8);
  auVar20 = auVar1._0_16_;
  local_728 = *puVar16;
  uStack_720 = puVar16[1];
  local_7a0 = puVar16[2];
  local_7a8 = puVar16[3];
  auVar21 = auVar1._16_16_;
  if (auVar1[0x1c] == '\0') {
  }
  auVar24 = vshufps_avx(auVar21,auVar21,0x55);
  auVar22 = vshufps_avx(auVar20,auVar20,0xaa);
  if (((((local_7a0 == *(longlong *)(puVar19 + 0x2b08)) &&
        (local_7a8 == *(longlong *)(puVar19 + 0x2b10))) &&
       (local_768 == *(longlong *)(puVar19 + 0x2b18))) &&
      (((auVar1[0x1d] == puVar19[0x2b55] && (lStack_760 == *(longlong *)(puVar19 + 0x2b20))) &&
       ((lStack_758 == *(longlong *)(puVar19 + 0x2b28) &&
        ((uStack_750._0_4_ = (int)uVar9, (int)uStack_750 == *(int *)(puVar19 + 0x2b30) &&
         (uStack_750._4_4_ = (int)((ulonglong)uVar9 >> 0x20),
         uStack_750._4_4_ == *(int *)(puVar19 + 0x2b34))))))))) &&
     ((auVar1[0x1e] == puVar19[0x2b56] &&
      (((((auVar8 = vshufps_avx(auVar20,auVar20,0x55), auVar8._0_4_ == *(float *)(puVar19 + 0x2b3c)
          && (auVar22._0_4_ == *(float *)(puVar19 + 0x2b40))) &&
         (auVar20 = vshufps_avx(auVar20,auVar20,0xff), auVar20._0_4_ == *(float *)(puVar19 + 0x2b44)
         )) && ((auVar1._16_4_ == *(float *)(puVar19 + 0x2b48) &&
                (auVar24._0_4_ == *(float *)(puVar19 + 0x2b4c))))) &&
       (auVar20 = vshufps_avx(auVar21,auVar21,0xaa), auVar20._0_4_ == *(float *)(puVar19 + 0x2b50)))
      )))) {
    iVar12 = 0;
  }
  else {
    iVar12 = 1;
  }
  *(ULONGLONG *)(puVar19 + lVar14) = UVar15 + 1000;
  pHVar10 = DAT_180c6e520;
  local_798 = *(undefined8 *)(puVar19 + 0x2b08);
  fVar26 = *(float *)(puVar19 + 0x2b4c);
  fVar28 = *(float *)(puVar19 + 0x2b40);
  uVar4 = *(undefined8 *)(puVar19 + 0x2b28);
  uVar2 = *(undefined4 *)(puVar19 + 0x2b34);
  uVar3 = *(undefined4 *)(puVar19 + 0x2b30);
  uVar5 = *(undefined8 *)(puVar19 + 0x2b18);
  uVar6 = *(undefined8 *)(puVar19 + 0x2b10);
  uVar7 = *(undefined8 *)(puVar19 + 0x2b20);
  fVar27 = *(float *)(puVar19 + 0x2b48);
  uStack_750 = uVar9;
  lStack_718 = local_7a0;
  lStack_710 = local_7a8;
  if (DAT_180c6e520 != (HWND)0x0) {
    auVar23 = ZEXT1664(auVar22);
    auVar25 = ZEXT1664(auVar24);
    auVar29 = ZEXT1664(auVar21);
    pHVar17 = GetForegroundWindow();
    auVar21 = auVar29._0_16_;
    auVar24 = auVar25._0_16_;
    auVar22 = auVar23._0_16_;
    if (pHVar17 == pHVar10) {
      uVar18 = 1;
      goto LAB_180398722;
    }
  }
  uVar18 = 0;
LAB_180398722:
  auVar23 = ZEXT1664(auVar22);
  auVar25 = ZEXT1664(auVar24);
  auVar29 = ZEXT1664(auVar21);
  FUN_18063ab10(local_6a8,0,0x600);
  local_7b0 = (double)auVar25._0_4_;
  local_7b8 = (double)auVar29._0_4_;
  local_7c0 = (double)fVar26;
  local_7c8 = (double)fVar27;
  local_7d0 = (double)auVar23._0_4_;
  local_7d8 = (double)fVar28;
  local_7e0 = lStack_758;
  local_7f0 = uStack_750._4_4_;
  local_7f8 = (int)uStack_750;
  local_810 = local_768;
  local_820 = local_7a8;
  local_830 = lStack_760;
  local_840 = local_7a0;
  local_848 = local_798;
  local_860 = (char *)uStack_720;
  local_868 = (undefined **)local_790;
  local_858 = iVar12;
  local_850 = uVar18;
  local_838 = uVar7;
  local_828 = uVar6;
  local_818 = uVar5;
  local_808 = uVar3;
  local_800 = uVar2;
  local_7e8 = uVar4;
  FUN_18015ad60(local_6a8,0x600,0xffffffffffffffff,
                "phase=%s command=%lld mutated=%d foreground=%d expected_buttons=0x%llx actual_buttons=0x%llx expected_pb=0x%llx actual_pb=0x%llx expected_changed=0x%llx actual_changed=0x%llx expected_scroll=0x%llx actual_scroll=0x%llx expected_history=(%d,%d) actual_history=(%d,%d) expected_steps=0x%llx actual_steps=0x%llx expected_yaw=%.4f actual_yaw=%.4f expected_shot=(%.4f,%.4f) actual_shot=(%.4f,%.4f)"
               );
  local_860 = local_6a8;
  local_868 = &PTR_180700558;
  if (local_6a8[0] != '\0') {
    local_868 = (undefined **)&DAT_1806bcfc0;
  }
  FUN_1800f6900(iVar12 * 2,local_860,&DAT_1807cfc80,"RAGE_SHOT_BOUNDARY");
}



