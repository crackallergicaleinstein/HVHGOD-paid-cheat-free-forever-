// FUN_180485a70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180485a70 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180485a70(undefined8 *param_1,float *param_2,char *param_3,char param_4,float param_5,
                  longlong param_6,undefined8 param_7,char *param_8)

{
  char *pcVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  char cVar7;
  undefined4 uVar8;
  uint uVar9;
  char *pcVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [64];
  undefined1 auVar17 [16];
  undefined1 auVar18 [64];
  float fVar19;
  undefined1 auStack_148 [32];
  float local_128;
  char *local_120;
  char *local_118;
  float local_108;
  float local_104;
  char local_100;
  float local_fc;
  float local_f8;
  char *local_f0;
  ulonglong local_e8;
  
  fVar13 = DAT_180b0a41c;
  local_e8 = DAT_1808d5f00 ^ (ulonglong)auStack_148;
  fVar15 = 0.5;
  fVar19 = 0.25;
  auVar18 = ZEXT464(0x3f800000);
  fVar14 = *(float *)((longlong)param_1 + 0x14) + 0.1 +
           (float)*(int *)((longlong)param_1 + 0x2c) * 30.855553;
  auVar17 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(fVar14 * DAT_180b0a41c + 0.5)),1);
  fVar12 = (fVar14 + 30.855553) * DAT_180b0a41c;
  fVar14 = auVar17._0_4_ + *(float *)((longlong)param_1 + 0xc);
  *param_2 = fVar14;
  auVar17 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(fVar12 + 0.5)),1);
  fVar12 = auVar17._0_4_ + *(float *)((longlong)param_1 + 0xc);
  param_2[1] = fVar12;
  param_2[2] = (fVar12 + fVar14) * 0.5;
  local_f0 = param_8;
  local_100 = param_4;
  if (0 < *(int *)((longlong)param_1 + 0x2c)) {
    auVar17 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(fVar13 + 0.25)),1);
    auVar17 = vmaxss_avx(auVar18._0_16_,auVar17);
    auVar17 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(auVar17._0_4_ * 0.5)),1);
    auVar4 = vroundss_avx(ZEXT816(0),
                          ZEXT416((uint)(((*(float *)(param_1 + 2) + *(float *)(param_1 + 3)) -
                                         *(float *)((longlong)param_1 + 0x24)) * fVar13 + 0.5)),1);
    auVar5 = vroundss_avx(ZEXT816(0),
                          ZEXT416((uint)((*(float *)(param_1 + 2) + 11.8) * fVar13 + 0.5)),1);
    local_128 = DAT_180b0a4c0;
    FUN_180463160(*param_1,auVar5._0_4_ + *(float *)(param_1 + 1),
                  auVar4._0_4_ + *(float *)(param_1 + 1),fVar14 - auVar17._0_4_);
    fVar13 = DAT_180b0a41c;
  }
  auVar17 = ZEXT816(0);
  if (0.0 < param_5) {
    uVar2 = *(uint *)((longlong)param_1 + 0x2c);
    uVar9 = 0x130;
    if (uVar2 != 0) {
      uVar9 = 0x100;
    }
    auVar4 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(fVar13 + fVar19)),1);
    auVar4 = vmaxss_avx(auVar18._0_16_,auVar4);
    local_108 = auVar4._0_4_;
    local_128 = fVar13 * 8.0 - local_108;
    uVar11 = uVar9 | 0xc0;
    if (uVar2 != *(int *)(param_1 + 5) - 1U) {
      uVar11 = uVar9;
    }
    auVar5 = vpcmpeqd_avx(ZEXT416(uVar2),ZEXT416(0));
    auVar5 = vblendvps_avx(auVar17,auVar4,auVar5);
    auVar3 = vpcmpeqd_avx(ZEXT416(uVar2),ZEXT416(*(int *)(param_1 + 5) - 1U));
    param_5 = ((float)(DAT_180b0a538 >> 0x18) / 255.0) * param_5;
    auVar4 = vblendvps_avx(auVar17,auVar4,auVar3);
    if (0.0 <= param_5) {
      auVar17 = vminss_avx(auVar18._0_16_,ZEXT416((uint)param_5));
    }
    local_120 = (char *)CONCAT44(local_120._4_4_,uVar11);
    auVar3 = vroundss_avx(ZEXT816(0),
                          ZEXT416((uint)((*(float *)(param_1 + 2) + *(float *)(param_1 + 3)) *
                                         fVar13 + fVar15)),1);
    local_fc = (auVar3._0_4_ + *(float *)(param_1 + 1)) - local_108;
    local_f8 = param_2[1] - auVar4._0_4_;
    auVar4 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(*(float *)(param_1 + 2) * fVar13 + fVar15)),1);
    local_104 = auVar5._0_4_ + *param_2;
    local_108 = auVar4._0_4_ + *(float *)(param_1 + 1) + local_108;
    FUN_1804df870(*param_1,&local_108,&local_fc,
                  (int)(longlong)(auVar17._0_4_ * 255.0 + fVar15) << 0x18 | DAT_180b0a538 & 0xffffff
                 );
    fVar13 = DAT_180b0a41c;
  }
  uVar6 = DAT_180c62ca8;
  auVar16 = ZEXT464(0x4157851f);
  fVar13 = fVar13 * 0.3;
  fVar14 = param_2[2];
  fVar12 = (float)FUN_180463350(DAT_180c62ca8,auVar16._0_8_);
  fVar13 = (fVar14 - fVar12 * fVar15) + fVar13;
  if (param_4 == '\0') {
    uVar8 = FUN_180462ad0(DAT_1808da488,DAT_180b0a410,0x3ee66666);
  }
  else {
    uVar8 = DAT_180b0a410;
  }
  pcVar10 = param_3;
  if (param_3 != (char *)0xffffffffffffffff) {
    while (*pcVar10 != '\0') {
      pcVar1 = pcVar10 + 1;
      if (((*pcVar10 == '#') && (*pcVar1 == '#')) ||
         (pcVar10 = pcVar1, pcVar1 == (char *)0xffffffffffffffff)) break;
    }
  }
  fVar12 = 10.0;
  fVar14 = (*(float *)((longlong)param_1 + 0x1c) + *(float *)(param_1 + 2)) * DAT_180b0a41c +
           *(float *)(param_1 + 1);
  if (local_f0 != (char *)0x0) {
    local_104 = param_2[2];
    local_108 = DAT_180b0a41c * 5.0 + fVar14;
    local_128 = 10.0;
    FUN_180463dc0(*param_1,&local_108,DAT_180b0a438,local_f0);
    fVar14 = fVar14 + DAT_180b0a41c * 16.0;
  }
  local_128 = (float)uVar8;
  local_120 = param_3;
  local_118 = pcVar10;
  local_108 = fVar14;
  local_104 = fVar13;
  FUN_180463450(*param_1,uVar6,auVar16._0_8_,&local_108);
  auVar17 = auVar18._0_16_;
  if ((param_6 != 0) && (local_100 != '\0')) {
    cVar7 = FUN_18045f360(*(undefined8 *)(param_6 + 8));
    uVar8 = DAT_180b0a4d0;
    if (cVar7 != '\0') {
      fVar13 = (float)FUN_1804633e0(uVar6,auVar16._0_8_,param_3,pcVar10);
      local_104 = param_2[2];
      auVar17 = vroundss_avx(ZEXT816(0),
                             ZEXT416((uint)(fVar12 * DAT_180b0a41c + fVar13 + fVar14 + fVar15)),1);
      local_108 = auVar17._0_4_;
      local_128 = 9.5;
      FUN_180463dc0(*param_1,&local_108,uVar8,&DAT_180829dc4);
    }
    local_f8 = *param_2;
    local_104 = param_2[1];
    auVar17 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c + fVar19)),1);
    auVar17 = vmaxss_avx(auVar18._0_16_,auVar17);
    auVar4 = vroundss_avx(ZEXT816(0),
                          ZEXT416((uint)((*(float *)(param_1 + 2) + *(float *)(param_1 + 3)) *
                                         DAT_180b0a41c + fVar15)),1);
    local_108 = (auVar4._0_4_ + *(float *)(param_1 + 1)) - auVar17._0_4_;
    auVar4 = vroundss_avx(ZEXT816(0),
                          ZEXT416((uint)(*(float *)(param_1 + 2) * DAT_180b0a41c + fVar15)),1);
    local_fc = auVar4._0_4_ + *(float *)(param_1 + 1) + auVar17._0_4_;
    if (DAT_180cd65b8 == 0) {
      FUN_18045efc0(param_6,&local_fc,&local_108);
      auVar17 = auVar18._0_16_;
    }
    else {
      local_f0 = *(char **)(param_6 + 8);
      (**(code **)(*(longlong *)DAT_180cd65b8 + 0x10))(DAT_180cd65b8,&local_f0,&local_fc,&local_108)
      ;
      auVar17 = auVar18._0_16_;
    }
  }
  if (DAT_180cd6f38 != 0) {
    auVar4 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c + fVar19)),1);
    auVar17 = vmaxss_avx(auVar17,auVar4);
    auVar4 = vroundss_avx(ZEXT816(0),
                          ZEXT416((uint)((*(float *)(param_1 + 2) + *(float *)(param_1 + 3)) *
                                         DAT_180b0a41c + fVar15)),1);
    local_104 = param_2[1];
    local_108 = (auVar4._0_4_ + *(float *)(param_1 + 1)) - auVar17._0_4_;
    auVar4 = vroundss_avx(ZEXT816(0),
                          ZEXT416((uint)(*(float *)(param_1 + 2) * DAT_180b0a41c + fVar15)),1);
    local_f8 = *param_2;
    local_fc = auVar4._0_4_ + *(float *)(param_1 + 1) + auVar17._0_4_;
    local_f0 = param_3;
    (**(code **)(*(longlong *)DAT_180cd6f38 + 0x10))(DAT_180cd6f38,&local_f0,&local_fc,&local_108);
  }
  *(int *)((longlong)param_1 + 0x2c) = *(int *)((longlong)param_1 + 0x2c) + 1;
}



