// FUN_18031d720 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18031d720 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_18031d720(longlong *param_1,int param_2)

{
  int *piVar1;
  undefined1 auVar2 [16];
  char *pcVar3;
  undefined1 auVar4 [16];
  short sVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined1 (*pauVar8) [16];
  undefined1 (*pauVar9) [32];
  bool bVar10;
  undefined1 uVar11;
  longlong lVar12;
  longlong lVar13;
  char cVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [64];
  undefined1 auVar18 [64];
  undefined1 auVar19 [64];
  undefined1 auVar20 [64];
  undefined1 auStack_1e8 [32];
  undefined8 local_1c8;
  double local_1c0;
  double local_1b8;
  undefined8 local_1b0;
  uint local_1a8;
  uint local_1a0;
  uint local_198;
  undefined1 local_188 [8];
  undefined1 local_180 [16];
  undefined8 local_170;
  undefined4 local_168;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined1 local_120 [32];
  undefined8 local_e8;
  undefined4 uStack_e0;
  uint uStack_dc;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  ulonglong local_78;
  
  local_78 = DAT_1808d5f00 ^ (ulonglong)auStack_1e8;
  lVar12 = *param_1;
  piVar1 = (int *)(lVar12 + 0x98);
  *piVar1 = *piVar1 + 1;
  if (0x6e < *(int *)(lVar12 + 0x98)) {
LAB_18031d78d:
    *(undefined1 *)(*param_1 + 0x9d) = 1;
  }
  if (DAT_180bda168 != 0) {
    plVar6 = (longlong *)FUN_18017bf40(local_188);
    if ((*plVar6 == DAT_180bda168) || (DAT_180bda168 <= *plVar6)) {
      if (DAT_180bbeaba == '\0') {
        DAT_180bda164 = DAT_180bda164 + 1;
        DAT_180bbeaba = '\x01';
      }
      goto LAB_18031d78d;
    }
  }
  puVar7 = (undefined8 *)FUN_18030d7f0(local_120,&DAT_180b8e110);
  local_150 = *puVar7;
  uStack_148 = puVar7[1];
  uStack_140 = puVar7[2];
  uStack_138 = puVar7[3];
  local_130 = puVar7[4];
  uStack_128 = puVar7[5];
  local_1c0 = (double)CONCAT44(local_1c0._4_4_,0x41400000);
  local_1c8 = (double)(param_1[2] + 4);
  auVar20 = ZEXT1664(SUB6416(ZEXT464(0x41400000),0));
  pauVar8 = (undefined1 (*) [16])FUN_18030d8f0(local_120,*param_1,param_1[1],&local_150);
  local_170 = *(undefined8 *)pauVar8[1];
  auVar2 = *pauVar8;
  auVar17 = ZEXT1664(auVar2);
  local_168 = *(undefined4 *)(pauVar8[1] + 8);
  if (*(int *)param_1[4] == 0) {
    fVar15 = *(float *)param_1[5];
  }
  else {
    fVar15 = 0.0;
  }
  pcVar3 = (char *)param_1[3];
  auVar16 = vshufps_avx(auVar2,auVar2,0xff);
  if ((((auVar2[0] != '\0') && (auVar2[1] != 0)) && (auVar2[2] != '\0')) &&
     (-(fVar15 + 0.35) <= auVar16._0_4_)) {
    if (*pcVar3 != '\0') {
      bVar10 = ABS((float)local_170 - *(float *)(pcVar3 + 4)) <= *(float *)(pcVar3 + 8);
      goto LAB_18031d8f4;
    }
    if ((*(float *)(pcVar3 + 0xc) <= (float)local_170) &&
       ((float)local_170 <= *(float *)(pcVar3 + 0x10))) {
      bVar10 = true;
      goto LAB_18031d8f4;
    }
  }
  bVar10 = false;
LAB_18031d8f4:
  auVar19 = ZEXT464(0x4cbebc20);
  auVar4 = vshufps_avx(auVar2,auVar2,0x55);
  auVar18 = ZEXT1664(auVar4);
  if (auVar4._0_4_ < 1e+08) {
    *(float *)param_1[5] = auVar4._0_4_;
  }
  local_198 = (uint)bVar10;
  local_1a0 = (uint)auVar2[1];
  local_1a8 = (uint)auVar2[3];
  local_1b0 = (double)(CONCAT44(local_1b0._4_4_,auVar2._2_4_) & 0xffffffff000000ff);
  local_1c0 = (double)auVar16._0_4_;
  auVar2 = vcmpss_avx(auVar4,auVar19._0_16_,1);
  local_1b8 = (double)(float)local_170;
  auVar2 = vblendvps_avx(SUB6416(ZEXT464(0xbf800000),0),auVar4,auVar2);
  local_1c8 = (double)auVar2._0_4_;
  fVar15 = (float)local_170;
  FUN_18015abc0(param_1[6],0x100,
                "s%d[engine gap=%.3f dz=%.3f vz=%.3f contact=%d clip=%d air=%d stat=%d] ",param_2);
  lVar12 = -1;
  lVar13 = -1;
  do {
    lVar13 = lVar13 + 1;
  } while (*(char *)(param_1[6] + lVar13) != '\0');
  FUN_18015b2a0(param_1[7] + 0x20);
  if (bVar10 == false) {
    if (0 < *(int *)param_1[4]) {
      *(undefined1 *)param_1[0xb] = 1;
    }
  }
  else {
    if (*(int *)param_1[8] == 0) {
      *(int *)param_1[8] = param_2;
    }
    *(int *)param_1[4] = *(int *)param_1[4] + 1;
    if ((2 < *(int *)param_1[4]) && (ABS(fVar15 - *(float *)param_1[9]) <= *(float *)param_1[10])) {
      *(undefined1 *)param_1[7] = 1;
      *(undefined4 *)(param_1[7] + 4) = *(undefined4 *)param_1[8];
    }
    *(float *)param_1[9] = fVar15;
  }
  puVar7 = (undefined8 *)param_1[1];
  *puVar7 = local_150;
  puVar7[1] = uStack_148;
  puVar7[2] = uStack_140;
  puVar7[3] = uStack_138;
  puVar7[4] = local_130;
  puVar7[5] = uStack_128;
  if ((param_2 < *(int *)param_1[0xc]) && (auVar17[1] != '\0')) {
    lVar13 = param_1[0xd];
    uStack_d8 = *(undefined8 *)(lVar13 + 0x10);
    uStack_d0 = *(undefined8 *)(lVar13 + 0x18);
    local_c8 = *(undefined8 *)(lVar13 + 0x20);
    uStack_c0 = *(undefined8 *)(lVar13 + 0x28);
    uStack_b8 = *(undefined8 *)(lVar13 + 0x30);
    uStack_b0 = *(undefined8 *)(lVar13 + 0x38);
    local_a8 = *(undefined8 *)(lVar13 + 0x40);
    uStack_a0 = (undefined4)*(undefined8 *)(lVar13 + 0x48);
    auVar2 = vcmpss_avx(auVar18._0_16_,auVar19._0_16_,1);
    local_e8 = uStack_140;
    auVar2 = vblendvps_avx(auVar20._0_16_,auVar18._0_16_,auVar2);
    uStack_dc = auVar2._0_4_;
    uStack_e0 = (undefined4)uStack_138;
    uStack_9c = 0x3f800000;
    uStack_98 = 0;
    uStack_94 = 0;
    uStack_90 = 0;
    uStack_8c = 0;
    local_88 = 0;
    uStack_84 = 0;
    uStack_80 = 0;
    uStack_7c = 1;
    pauVar9 = (undefined1 (*) [32])FUN_180308b90(local_180,&local_e8);
    local_120 = *pauVar9;
    cVar14 = local_120[0];
    if ((local_120[1] == '\0') || (cVar14 == '\0')) {
      uVar11 = 0;
    }
    else {
      uVar11 = 1;
    }
    auVar16 = local_120._0_16_;
    auVar2 = vshufps_avx(local_120._16_16_,local_120._16_16_,0xaa);
    local_1b0 = (double)auVar2._0_4_;
    auVar2 = vshufps_avx(auVar16,auVar16,0xaa);
    auVar16 = vshufps_avx(auVar16,auVar16,0x55);
    local_1b8 = (double)(auVar2._0_4_ + *(float *)param_1[0xe]);
    local_1c0 = (double)auVar16._0_4_;
    local_1c8 = (double)(CONCAT44(local_1c8._4_4_,local_120._0_4_) & 0xffffffff000000ff);
    FUN_18015abc0(param_1[6],0x100,"s%d[model k=%d yaw=%.3f exp_vz=%.2f exp_gap=%.3f] ",param_2 + 1)
    ;
    do {
      lVar12 = lVar12 + 1;
    } while (*(char *)(param_1[6] + lVar12) != '\0');
    FUN_18015b2a0(param_1[7] + 0x20,param_1[6],lVar12);
    if (((cVar14 == '\x01') && (local_120[1] != '\0')) && (*(int *)(*param_1 + 0x98) + 0xb < 0x6f))
    {
      local_1b0 = (double)param_1[0x11];
      local_1a8 = uStack_dc;
      local_1b8 = (double)((ulonglong)local_1b8 & 0xffffffffffffff00);
      local_1c0 = (double)CONCAT44(local_1c0._4_4_,*(undefined4 *)param_1[0x10]);
      local_1c8._0_4_ = local_120._16_4_;
      FUN_18031cbd0(param_1[0xf],local_120,&local_150);
      sVar5 = thunk_FUN_180624430(local_120._8_4_);
      if (sVar5 < 1) {
        uVar11 = 1;
      }
    }
    FUN_18031a940(param_1[0x12],uVar11);
  }
}



