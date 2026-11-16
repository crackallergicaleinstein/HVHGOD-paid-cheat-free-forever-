// FUN_1804f6160 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804f6160 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804f6160(float *param_1,undefined4 param_2,uint param_3,longlong *param_4,longlong param_5
                  ,longlong param_6,undefined4 param_7)

{
  short sVar1;
  longlong lVar2;
  char cVar3;
  char cVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  float fVar11;
  undefined1 auVar12 [16];
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  undefined1 auVar18 [64];
  undefined1 auVar19 [16];
  undefined1 auVar20 [64];
  float fVar21;
  undefined1 auVar22 [64];
  undefined1 auVar23 [64];
  undefined1 auVar24 [64];
  undefined1 auVar25 [64];
  float fVar26;
  float fVar27;
  undefined1 auVar28 [64];
  undefined1 auStack_168 [32];
  undefined4 local_148;
  undefined4 local_140;
  float local_138 [4];
  undefined1 local_128 [8];
  undefined8 uStack_120;
  uint local_118;
  longlong local_110;
  char local_108;
  char local_107 [7];
  float local_100 [4];
  undefined8 local_f0;
  undefined8 uStack_e8;
  ulonglong local_e0;
  
  lVar2 = DAT_180bb8ae8;
  local_e0 = DAT_1808d5f00 ^ (ulonglong)auStack_168;
  local_118 = param_3;
  local_110 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
  if (*(char *)(local_110 + 0xd1) != '\0') {
  }
  fVar27 = param_1[2] - *param_1;
  fVar26 = param_1[3] - param_1[1];
  auVar18 = ZEXT864(0);
  if (fVar27 <= 0.0) {
  }
  if (fVar26 <= 0.0) {
  }
  auVar20 = ZEXT464(0x3f800000);
  auVar19 = auVar20._0_16_;
  auVar25 = ZEXT1664(auVar19);
  if ((param_3 == 1) && (fVar26 < fVar27)) {
    auVar14 = vmaxss_avx(ZEXT416((uint)(fVar27 + fVar27)),auVar19);
    fVar16 = fVar26 / auVar14._0_4_;
    if (0.0 <= fVar16) {
      auVar19 = vminss_avx(auVar19,ZEXT416((uint)fVar16));
    }
    else {
      auVar19 = ZEXT416(0);
    }
    auVar25 = ZEXT1664(auVar19);
    if (auVar19._0_4_ <= 0.0) {
    }
  }
  auVar19 = vminss_avx(ZEXT416((uint)fVar27),ZEXT416((uint)fVar26));
  auVar19 = vminss_avx(ZEXT416(*(uint *)(DAT_180bb8ae8 + 0xd04)),
                       ZEXT416((uint)(auVar19._0_4_ * 0.5)));
  fVar16 = -(float)(int)auVar19._0_4_;
  fVar27 = param_1[1] - fVar16;
  fVar26 = *param_1 - fVar16;
  fVar11 = auVar25._0_4_;
  local_100[1] = (fVar16 + param_1[3]) - fVar27;
  local_100[0] = (fVar16 + param_1[2]) - fVar26;
  local_138[3] = fVar16 + param_1[3];
  local_138[2] = fVar16 + param_1[2];
  auVar19 = vpcmpeqd_avx(ZEXT416(param_3),ZEXT416(0));
  auVar19 = vblendvps_avx(ZEXT416((uint)local_100[1]),ZEXT416((uint)local_100[0]),auVar19);
  auVar23 = ZEXT1664(auVar19);
  fVar16 = auVar19._0_4_;
  local_138[0] = fVar26;
  local_138[1] = fVar27;
  if (fVar16 < 1.0) {
  }
  lVar8 = param_5;
  if (param_5 <= param_6) {
    lVar8 = param_6;
  }
  uVar9 = (ulonglong)(int)param_3;
  lVar7 = 1;
  if (0 < lVar8) {
    lVar7 = lVar8;
  }
  auVar14 = vminss_avx(ZEXT416((uint)local_100[uVar9]),ZEXT416(*(uint *)(DAT_180bb8ae8 + 0xd08)));
  fVar17 = ((float)param_5 / (float)lVar7) * fVar16;
  if (auVar14._0_4_ <= fVar17) {
    auVar14 = vminss_avx(auVar19,ZEXT416((uint)fVar17));
  }
  auVar28 = ZEXT1664(auVar14);
  fVar17 = *(float *)(DAT_180bb8ae8 + 0xc98);
  local_f0 = *(undefined8 *)param_1;
  uStack_e8 = *(undefined8 *)(param_1 + 2);
  auVar22 = ZEXT1664(CONCAT124(SUB1612(ZEXT816(0),4),(float)(int)auVar14._0_4_));
  lVar8 = *(longlong *)(local_110 + 0x3d8);
  auVar24 = ZEXT1664(CONCAT124(SUB1612(ZEXT816(0),4),(float)(int)auVar14._0_4_ / fVar16));
  local_100[0] = *(float *)(lVar8 + 0x28);
  local_100[1] = *(float *)(lVar8 + 0x2c);
  local_100[2] = *(float *)(lVar8 + 0x28) + *(float *)(lVar8 + 0x30);
  local_100[3] = *(float *)(lVar8 + 0x2c) + *(float *)(lVar8 + 0x34);
  lVar8 = *(longlong *)(local_110 + 0x20);
  local_128._4_4_ = *(float *)(lVar8 + 0xc);
  local_128._0_4_ = *(float *)(lVar8 + 8);
  uVar6 = uVar9 ^ 1;
  uStack_120._0_4_ = *(float *)(lVar8 + 8) + *(float *)(lVar8 + 0x10);
  uStack_120._4_4_ = *(float *)(lVar8 + 0xc) + *(float *)(lVar8 + 0x14);
  fVar16 = local_100[uVar6];
  if (((fVar16 == *(float *)(local_128 + uVar6 * 4)) && (fVar16 < local_100[uVar6 + 4])) &&
     (local_100[uVar6 + 4] - fVar17 <= fVar16)) {
    local_100[uVar6 + 4] = fVar16;
  }
  fVar16 = local_100[uVar6 + 2];
  if (((fVar16 == *(float *)(local_128 + uVar6 * 4 + 8)) &&
      (fVar21 = *(float *)((longlong)&uStack_e8 + uVar6 * 4), fVar21 < fVar16)) &&
     (fVar16 <= fVar21 + fVar17)) {
    *(float *)((longlong)&uStack_e8 + uVar6 * 4) = fVar16;
  }
  local_108 = '\0';
  local_107[0] = '\0';
  FUN_1804c6190(param_1,param_2,0,2);
  local_148 = 0x40000;
  FUN_1804f4d40(&local_f0,param_2,local_107,&local_108);
  cVar3 = local_108;
  fVar16 = auVar23._0_4_;
  auVar19 = auVar20._0_16_;
  param_6 = param_6 - param_5;
  if (param_6 < 2) {
    param_6 = 1;
  }
  auVar14._0_4_ = (float)*param_4 / (float)param_6;
  auVar14._4_8_ = SUB128(ZEXT812(0),4);
  auVar14._12_4_ = 0;
  fVar17 = auVar18._0_4_;
  if (fVar17 <= auVar14._0_4_) {
    auVar14 = vminss_avx(auVar19,auVar14);
    fVar21 = auVar14._0_4_;
  }
  else {
    fVar21 = 0.0;
  }
  fVar21 = ((fVar16 - auVar22._0_4_) * fVar21) / fVar16;
  if ((local_108 == '\0') || (fVar11 < 1.0)) goto LAB_1804f668d;
  fVar11 = auVar24._0_4_;
  if (auVar20._0_4_ <= fVar11) goto LAB_1804f668d;
  fVar13 = (*(float *)(lVar2 + 0x110 + uVar9 * 4) - local_138[uVar9]) / fVar16;
  if (fVar17 <= fVar13) {
    auVar14 = vminss_avx(auVar19,ZEXT416((uint)fVar13));
    fVar13 = auVar14._0_4_;
  }
  else {
    fVar13 = 0.0;
  }
  if (fVar21 <= fVar13) {
    uVar10 = (uint)(fVar21 + fVar11 < fVar13);
  }
  else {
    uVar10 = 0xffffffff;
  }
  if (*(char *)(lVar2 + 0x155c) != '\0') {
    if (((*(char *)(lVar2 + 0x84) == '\0') || (*(char *)(lVar2 + 0x12d) != '\0')) || (uVar10 == 0))
    {
      *(undefined2 *)(lVar2 + 0x268a) = 0;
      if ((uVar10 != 0) || (*(char *)(lVar2 + 0x12d) != '\0')) goto LAB_1804f6571;
      fVar21 = (fVar13 - fVar21) - fVar11 * 0.5;
    }
    else {
      *(short *)(lVar2 + 0x268a) = (short)uVar10;
LAB_1804f6571:
      fVar21 = 0.0;
    }
    *(float *)(lVar2 + 0x268c) = fVar21;
  }
  sVar1 = *(short *)(lVar2 + 0x268a);
  if (sVar1 == 0) {
    fVar11 = ((fVar13 - *(float *)(lVar2 + 0x268c)) - fVar11 * 0.5) / (auVar20._0_4_ - fVar11);
    if (fVar17 <= fVar11) {
      auVar14 = vminss_avx(auVar19,ZEXT416((uint)fVar11));
      fVar11 = auVar14._0_4_;
    }
    else {
      fVar11 = 0.0;
    }
    *param_4 = (longlong)((float)param_6 * fVar11);
  }
  else {
    cVar4 = FUN_1804c3510(0,1,0);
    fVar16 = auVar23._0_4_;
    auVar19 = auVar20._0_16_;
    if ((cVar4 != '\0') && (uVar10 == (int)sVar1)) {
      auVar12._0_4_ = (float)(int)sVar1;
      auVar12._4_8_ = SUB128(ZEXT812(0),4);
      auVar12._12_4_ = 0;
      auVar14 = vcmpss_avx(auVar18._0_16_,auVar12,1);
      auVar14 = vblendvps_avx(SUB6416(ZEXT464(0xbf800000),0),auVar19,auVar14);
      lVar8 = (longlong)(auVar14._0_4_ * (float)param_5) + *param_4;
      if (lVar8 < 0) {
        lVar8 = 0;
      }
      else if (param_6 < lVar8) {
        lVar8 = param_6;
      }
      *param_4 = lVar8;
    }
  }
  auVar15._0_4_ = (float)*param_4 / (float)param_6;
  auVar15._4_12_ = SUB1612(ZEXT816(0),4);
  fVar11 = auVar18._0_4_;
  if (fVar11 <= auVar15._0_4_) {
    auVar19 = vminss_avx(auVar19,auVar15);
    fVar11 = auVar19._0_4_;
  }
  fVar21 = ((fVar16 - (float)(int)auVar28._0_4_) * fVar11) / fVar16;
LAB_1804f668d:
  auVar19 = *(undefined1 (*) [16])(DAT_180bb8ae8 + 0xea8);
  fVar16 = *(float *)(DAT_180bb8ae8 + 0xc84);
  auVar14 = vshufps_avx(auVar19,auVar19,0xff);
  _local_128 = auVar19._0_12_;
  uStack_120._4_4_ = auVar14._0_4_ * fVar16;
  lVar8 = DAT_180bb8ae8;
  FUN_1804b1120(local_128);
  if (cVar3 == '\0') {
    lVar7 = (ulonglong)(local_107[0] != '\0') + 0xf;
  }
  else {
    lVar7 = 0x11;
  }
  auVar19 = *(undefined1 (*) [16])(lVar8 + 0xdc8 + lVar7 * 0x10);
  auVar14 = vshufps_avx(auVar19,auVar19,0xff);
  _local_128 = auVar19._0_12_;
  uStack_120._4_4_ = auVar14._0_4_ * fVar16 * auVar25._0_4_;
  uVar5 = FUN_1804b1120(local_128);
  lVar8 = local_110;
  local_140 = param_7;
  local_148 = *(undefined4 *)(local_110 + 0x60);
  FUN_1804df870(*(undefined8 *)(local_110 + 0x2c8),param_1,param_1 + 2);
  if (local_118 == 0) {
    local_100[0] = (local_138[2] - fVar26) * fVar21 + fVar26;
    local_100[2] = local_100[0] + (float)(int)auVar28._0_4_;
    local_100[3] = local_138[3];
    local_100[1] = fVar27;
  }
  else {
    local_100[1] = (local_138[3] - fVar27) * fVar21 + fVar27;
    local_100[2] = local_138[2];
    local_100[3] = local_100[1] + (float)(int)auVar28._0_4_;
    local_100[0] = fVar26;
  }
  local_148 = *(undefined4 *)(lVar2 + 0xd00);
  local_140 = 0;
  FUN_1804df870(*(undefined8 *)(lVar8 + 0x2c8),local_100,local_100 + 2,uVar5);
}



