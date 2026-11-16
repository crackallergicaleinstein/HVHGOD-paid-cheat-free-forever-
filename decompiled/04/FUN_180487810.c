// FUN_180487810 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180487810 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180487810(float *param_1,char *param_2,longlong param_3,char param_4,char *param_5,
                  float param_6,float param_7,longlong *param_8,char *param_9)

{
  char *pcVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  float fVar6;
  undefined4 uVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  float *pfVar11;
  undefined8 *puVar12;
  longlong lVar13;
  char cVar14;
  char *pcVar15;
  longlong lVar16;
  byte bVar17;
  uint uVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  ulonglong uVar22;
  undefined8 uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  undefined1 auVar28 [64];
  undefined1 auVar29 [64];
  undefined1 auVar30 [64];
  float fVar31;
  undefined1 auVar32 [64];
  undefined1 auVar33 [64];
  float fVar34;
  undefined1 auStack_1b8 [32];
  float *local_198;
  char *local_190;
  char *local_188;
  char *local_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_168;
  char local_158;
  char local_157;
  byte local_156;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  undefined8 local_128;
  float local_120;
  undefined4 local_11c;
  longlong local_118;
  undefined8 local_108;
  longlong lStack_100;
  longlong local_f8;
  char *local_f0;
  ulonglong local_e8;
  
  lVar16 = DAT_180bb8ae8;
  local_e8 = DAT_1808d5f00 ^ (ulonglong)auStack_1b8;
  local_f0 = param_5;
  local_128 = param_9;
  *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
  plVar3 = *(longlong **)(lVar16 + 0x14d0);
  local_144 = *(float *)((longlong)plVar3 + 0x11c);
  lVar4 = plVar3[0x59];
  fVar21 = *(float *)(plVar3 + 0x23);
  if ((plVar3[0x39] != 0) ||
     (pfVar11 = (float *)(plVar3 + 0x50), *(longlong *)(lVar16 + 0x2338) != 0)) {
    pfVar11 = (float *)(plVar3 + 0x4a);
  }
  local_f8 = DAT_180c62ca8;
  fVar20 = *pfVar11 - fVar21;
  pcVar15 = param_2;
  if (param_2 != (char *)0xffffffffffffffff) {
    while( true ) {
      if (*pcVar15 == '\0') break;
      pcVar1 = pcVar15 + 1;
      if (((*pcVar15 == '#') && (*pcVar1 == '#')) ||
         (pcVar15 = pcVar1, pcVar1 == (char *)0xffffffffffffffff)) break;
    }
  }
  lVar16 = DAT_180c62ca8;
  local_157 = param_4;
  local_118 = param_3;
  if (((param_5 == (char *)0x0) || (param_4 == '\0')) || (cVar8 = FUN_18045f360(), cVar8 == '\0')) {
    local_156 = 0;
  }
  else {
    local_156 = 1;
  }
  auVar5._12_4_ = 0;
  auVar5._0_12_ = ZEXT812(0);
  auVar29 = ZEXT1264(ZEXT812(0)) << 0x20;
  if (((*param_8 == 0) || (*(float *)(param_8 + 1) <= 0.0)) ||
     (*(float *)((longlong)param_8 + 0xc) <= 0.0)) {
    auVar24._0_8_ = -(ulonglong)(param_3 == 0);
    auVar24._8_8_ = 0xffffffffffffffff;
    auVar24 = vblendvps_avx(SUB6416(ZEXT464(0x420d999a),0),SUB6416(ZEXT464(0x416ccccd),0),auVar24);
    auVar28 = ZEXT1664(auVar24);
    local_158 = '\0';
  }
  else {
    auVar28 = ZEXT464(0x42580000);
    local_158 = '\x01';
  }
  fVar27 = 16.2;
  auVar32 = ZEXT464(0x41533333);
  fVar31 = 0.5;
  auVar33 = ZEXT464(0x3f800000);
  local_168 = 0;
  local_178 = 0;
  auVar24 = vpcmpeqd_avx(ZEXT116(local_156),SUB6416(ZEXT464(0),0));
  auVar5 = vblendvps_avx(SUB6416(ZEXT464(0x41600000),0),auVar5 << 0x20,auVar24);
  local_120 = auVar5._0_4_;
  auVar5 = vmaxss_avx(ZEXT416((uint)(DAT_180b0a41c * 30.0)),
                      ZEXT416((uint)(fVar20 - (auVar28._0_4_ + 16.2 + local_120) * DAT_180b0a41c)));
  auVar24 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 13.2 + 0.5)),1);
  local_11c = auVar5._0_4_;
  local_198 = (float *)CONCAT44(local_198._4_4_,local_11c);
  auVar5 = vmaxss_avx(auVar33._0_16_,auVar24);
  local_190 = param_2;
  local_188 = pcVar15;
  local_180 = pcVar15;
  FUN_1804ea040(&local_150,lVar16,auVar5._0_8_,0x7f7fffff);
  if (param_7 <= auVar29._0_4_) {
    fVar26 = 0.0;
  }
  else {
    auVar5 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * auVar32._0_4_ + fVar31)),1);
    auVar5 = vmaxss_avx(auVar33._0_16_,auVar5);
    auVar5 = vmaxss_avx(auVar29._0_16_,ZEXT416((uint)(local_14c - auVar5._0_4_)));
    fVar26 = auVar5._0_4_;
  }
  auVar25._0_8_ = -(ulonglong)(param_9 == (char *)0x0);
  auVar25._8_8_ = 0xffffffffffffffff;
  auVar5 = vblendvps_avx(SUB6416(ZEXT464(0x42240000),0),SUB6416(ZEXT464(0x41cc0000),0),auVar25);
  auVar24 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * param_7 + fVar31)),1);
  auVar5 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(auVar5._0_4_ * DAT_180b0a41c + fVar26 + fVar31)),1
                       );
  local_148 = auVar5._0_4_;
  fVar26 = auVar24._0_4_ + local_148;
  fVar34 = local_14c;
  local_140 = fVar20;
  local_13c = fVar26;
  FUN_1804c6420(&local_140,0xbf800000);
  fVar6 = DAT_180b0a41c;
  auVar5 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 3.0 + fVar31)),1);
  *param_1 = fVar21 + auVar5._0_4_;
  param_1[2] = (fVar21 + fVar20) - auVar5._0_4_;
  param_1[3] = local_144 + fVar26;
  param_1[4] = fVar31 * local_148 + local_144;
  param_1[6] = local_144 + local_148;
  auVar5 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(((fVar21 + fVar20) - fVar6 * fVar27) + fVar31)),1)
  ;
  param_1[5] = auVar5._0_4_;
  param_1[1] = local_144;
  if (((param_4 != '\0') && (lVar16 = *(longlong *)(DAT_180bb8ae8 + 0x14d8), lVar16 != 0)) &&
     (lVar16 == *(longlong *)(DAT_180bb8ae8 + 0x14d0))) {
    cVar14 = '\0';
    lVar13 = DAT_180bb8ae8;
    cVar8 = FUN_1804b7ab0(lVar16);
    if ((cVar8 != '\0') &&
       (((*(int *)(lVar13 + 0x1550) == 0 || (*(char *)(lVar13 + 0x155f) != cVar14)) ||
        (*(int *)(lVar13 + 0x1550) == *(int *)(lVar16 + 0x8c))))) {
      bVar17 = 1;
      cVar8 = FUN_1804c3600(param_1,param_1 + 2);
      if (cVar8 != '\0') goto LAB_180487c27;
    }
  }
  bVar17 = 0;
LAB_180487c27:
  *(byte *)(param_1 + 7) = bVar17;
  iVar9 = FUN_1804b0a90(param_2,0,
                        *(undefined4 *)(plVar3[0x22] + -4 + (longlong)(int)plVar3[0x21] * 4));
  if (*(int *)(*plVar3 + 0x1534) == iVar9) {
    FUN_1804cf810(iVar9,0xb,param_2);
  }
  auVar5 = vpcmpeqd_avx(ZEXT116(bVar17),SUB6416(ZEXT464(0),0));
  auVar5 = vblendvps_avx(auVar33._0_16_,auVar29._0_16_,auVar5);
  fVar20 = (float)FUN_1804aaa10(iVar9 + 7,auVar5._0_8_,0x41900000);
  fVar27 = auVar28._0_4_;
  if (auVar29._0_4_ < fVar20) {
    fVar20 = ((float)(DAT_180b0a42c >> 0x18) / 255.0) * fVar20;
    if (auVar29._0_4_ <= fVar20) {
      auVar5 = vminss_avx(auVar33._0_16_,ZEXT416((uint)fVar20));
      fVar20 = auVar5._0_4_;
    }
    else {
      fVar20 = 0.0;
    }
    local_190 = (char *)((ulonglong)local_190 & 0xffffffff00000000);
    local_198 = (float *)CONCAT44(local_198._4_4_,DAT_180b0a41c * 5.0);
    FUN_1804df870(lVar4,param_1,param_1 + 2,
                  (int)(longlong)(fVar20 * 255.0 + fVar31) << 0x18 | DAT_180b0a42c & 0xffffff);
    fVar27 = auVar28._0_4_;
  }
  cVar8 = local_157;
  uVar19 = DAT_180b0a450;
  if (local_157 != '\0') {
    uVar19 = DAT_1808da478;
  }
  auVar28 = ZEXT464((uint)(DAT_180b0a41c * fVar27 + fVar21));
  if (local_158 == '\0') {
    if (local_118 != 0) {
      local_14c = param_1[4];
      local_150 = DAT_180b0a41c * 18.4 + fVar21;
      uVar18 = DAT_180b0a450;
      if (local_157 != '\0') {
        uVar18 = DAT_180b0a438;
      }
      local_198 = (float *)CONCAT44(local_198._4_4_,0x41300000);
      FUN_180463dc0(lVar4,&local_150,uVar18);
    }
  }
  else {
    uVar18 = DAT_180b0a450;
    if (local_157 != '\0') {
      uVar18 = DAT_180b0a438;
    }
    auVar5 = vminss_avx(ZEXT416((uint)((DAT_180b0a41c * 34.0) / *(float *)(param_8 + 1))),
                        ZEXT416((uint)((DAT_180b0a41c * 21.0) / *(float *)((longlong)param_8 + 0xc))
                               ));
    fVar21 = DAT_180b0a41c * 29.0 + fVar21;
    local_118 = *param_8;
    local_150 = auVar5._0_4_ * *(float *)(param_8 + 1) * fVar31;
    local_14c = auVar5._0_4_ * *(float *)((longlong)param_8 + 0xc) * fVar31;
    local_130 = fVar21 + local_150;
    local_12c = local_14c + param_1[4];
    local_150 = fVar21 - local_150;
    local_14c = param_1[4] - local_14c;
    local_140 = auVar33._0_4_;
    local_138 = auVar29._0_4_;
    local_13c = local_140;
    local_134 = local_138;
    if ((uVar18 & 0xff000000) != 0) {
      if ((local_118 == *(longlong *)(lVar4 + 0x78)) && (*(longlong *)(lVar4 + 0x70) == 0)) {
        local_158 = '\0';
      }
      else {
        piVar2 = (int *)(lVar4 + 0xb0);
        local_158 = '\x01';
        iVar9 = *(int *)(lVar4 + 0xb4);
        local_108 = 0;
        lStack_100 = local_118;
        if (*piVar2 == iVar9) {
          iVar10 = *piVar2 + 1;
          if (iVar9 == 0) {
            iVar9 = 8;
          }
          else {
            iVar9 = iVar9 / 2 + iVar9;
          }
          if (iVar10 < iVar9) {
            iVar10 = iVar9;
          }
          FUN_1804aec70(piVar2,iVar10);
        }
        iVar9 = *piVar2;
        lVar16 = *(longlong *)(lVar4 + 0xb8);
        *(undefined8 *)(lVar16 + (longlong)iVar9 * 0x10) = 0;
        *(longlong *)(lVar16 + 8 + (longlong)iVar9 * 0x10) = local_118;
        *piVar2 = *piVar2 + 1;
        *(undefined8 *)(lVar4 + 0x70) = local_108;
        *(longlong *)(lVar4 + 0x78) = lStack_100;
        FUN_1804d92c0(lVar4);
      }
      cVar8 = local_157;
      FUN_1804d9590(lVar4,6,4);
      local_198 = &local_140;
      local_190 = (char *)CONCAT44(local_190._4_4_,uVar18);
      FUN_1804d97d0(lVar4,&local_150,&local_130,&local_138);
      if (local_158 != '\0') {
        FUN_1804d9530(lVar4);
      }
    }
  }
  lVar16 = local_f8;
  fVar21 = param_1[4];
  auVar5 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(auVar28._0_4_ + fVar31)),1);
  auVar30 = ZEXT1664(auVar5);
  local_138 = auVar5._0_4_;
  fVar20 = (float)FUN_180463350(local_f8,auVar32._0_8_);
  fVar21 = fVar21 - fVar20 * fVar31;
  local_14c = param_1[3];
  auVar5 = vmaxss_avx(auVar28._0_16_,
                      ZEXT416((uint)(param_1[5] - (param_6 + local_120) * DAT_180b0a41c)));
  local_150 = auVar5._0_4_;
  local_12c = param_1[1];
  local_130 = auVar28._0_4_;
  local_134 = fVar21;
  FUN_1804d9420(lVar4,&local_130,&local_150,1);
  fVar20 = auVar30._0_4_;
  if (param_7 <= auVar29._0_4_) {
    local_198 = (float *)CONCAT44(local_198._4_4_,uVar19);
    uVar23 = auVar32._0_8_;
    if (local_128 == (char *)0x0) {
      pfVar11 = &local_138;
      local_190 = param_2;
      local_188 = pcVar15;
    }
    else {
      local_14c = fVar21 - DAT_180b0a41c * 7.0;
      local_190 = param_2;
      local_188 = pcVar15;
      local_150 = fVar20;
      FUN_180463450(lVar4,lVar16,uVar23,&local_150);
      pfVar11 = &local_150;
      local_188 = (char *)0x0;
      local_14c = DAT_180b0a41c * 9.0 + fVar21;
      local_190 = local_128;
      uVar23 = SUB648(ZEXT464(0x413b3333),0);
      local_198 = (float *)CONCAT44(local_198._4_4_,DAT_1808da474);
      local_150 = auVar30._0_4_;
    }
    FUN_180463450(lVar4,lVar16,uVar23,pfVar11);
  }
  else {
    local_14c = (local_148 - fVar34) * fVar31 + local_144;
    auVar5 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(auVar32._0_4_ * DAT_180b0a41c + fVar31)),1);
    auVar5 = vmaxss_avx(auVar33._0_16_,auVar5);
    uVar22 = auVar5._0_8_;
    local_150 = fVar20;
    if ((((uVar19 & 0xff000000) != 0) && (param_2 != pcVar15)) && (*param_2 != '\0')) {
      lVar13 = lVar16;
      if (lVar16 == 0) {
        lVar13 = *(longlong *)(*(longlong *)(lVar4 + 0x38) + 0x20);
      }
      if (auVar5._0_4_ == auVar29._0_4_) {
        uVar22 = (ulonglong)*(uint *)(*(longlong *)(lVar4 + 0x38) + 0x28);
      }
      local_108 = *(undefined8 *)(lVar4 + 0x60);
      lStack_100 = *(longlong *)(lVar4 + 0x68);
      local_170 = 0;
      local_178 = CONCAT44(local_178._4_4_,local_11c);
      local_190 = (char *)&local_108;
      local_198 = (float *)CONCAT44(local_198._4_4_,uVar19);
      local_188 = param_2;
      local_180 = pcVar15;
      FUN_1804ea5f0(lVar13,lVar4,uVar22,&local_150);
    }
  }
  iVar9 = *(int *)(lVar4 + 0xa0);
  iVar10 = iVar9 + -1;
  *(int *)(lVar4 + 0xa0) = iVar10;
  if (iVar10 == 0) {
    puVar12 = (undefined8 *)(*(longlong *)(lVar4 + 0x38) + 0x3c);
  }
  else {
    puVar12 = (undefined8 *)((longlong)(iVar9 + -2) * 0x10 + *(longlong *)(lVar4 + 0xa8));
  }
  uVar23 = puVar12[1];
  *(undefined8 *)(lVar4 + 0x60) = *puVar12;
  *(undefined8 *)(lVar4 + 0x68) = uVar23;
  FUN_1804d9200(lVar4);
  pcVar1 = local_f0;
  uVar7 = DAT_180b0a4d0;
  if ((local_f0 != (char *)0x0) && (cVar8 != '\0')) {
    if (local_156 != 0) {
      fVar20 = 10.0;
      auVar29 = ZEXT464((uint)(param_1[5] - (param_6 + 10.0) * DAT_180b0a41c));
      fVar21 = (float)FUN_1804633e0(lVar16,auVar32._0_8_,param_2,pcVar15);
      auVar5 = vminss_avx(ZEXT416((uint)(fVar21 + auVar30._0_4_)),auVar29._0_16_);
      auVar5 = vroundss_avx(ZEXT816(0),
                            ZEXT416((uint)(fVar20 * DAT_180b0a41c + auVar5._0_4_ + fVar31)),1);
      local_128 = (char *)CONCAT44(param_1[4],auVar5._0_4_);
      local_198 = (float *)CONCAT44(local_198._4_4_,0x41180000);
      FUN_180463dc0(lVar4,&local_128,uVar7,&DAT_180829dc4);
    }
    FUN_1804c2800(param_2);
    if (DAT_180cd65b8 == 0) {
      FUN_18045efc0(pcVar1,param_1,param_1 + 2);
    }
    else {
      local_f0 = *(char **)(pcVar1 + 8);
      (**(code **)(*(longlong *)DAT_180cd65b8 + 0x10))(DAT_180cd65b8,&local_f0,param_1,param_1 + 2);
    }
    iVar9 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
    if (iVar9 < 2) {
      FUN_1804c5a40("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar9 + -1;
    }
  }
  if (DAT_180cd6f38 != 0) {
    local_f0 = param_2;
    (**(code **)(*(longlong *)DAT_180cd6f38 + 0x10))(DAT_180cd6f38,&local_f0,param_1,param_1 + 2);
  }
}



