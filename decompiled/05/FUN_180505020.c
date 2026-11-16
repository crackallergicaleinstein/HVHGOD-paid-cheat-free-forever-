// FUN_180505020 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180505020 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180505020(longlong param_1)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  int iVar3;
  byte bVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 uVar16;
  undefined1 auVar17 [64];
  undefined1 auVar18 [64];
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_a8 [32];
  int local_88;
  ushort local_84;
  byte local_82;
  byte local_81;
  short local_80;
  short local_7e;
  short local_7c;
  short local_7a;
  undefined1 local_78 [16];
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_1808d5f00 ^ (ulonglong)auStack_a8;
  lVar1 = *(longlong *)(param_1 + 0xa0);
  if (*(char *)(lVar1 + 0x41) != '\0') {
    local_68 = 0;
    local_78 = (undefined1  [16])0x0;
    if (*(code **)(lVar1 + 0x50) == (code *)0x0) {
      bVar5 = false;
    }
    else {
      iVar3 = (**(code **)(lVar1 + 0x50))(0,1,local_78);
      bVar5 = iVar3 == 0;
    }
    *(bool *)(lVar1 + 0x40) = bVar5;
    *(undefined1 *)(lVar1 + 0x41) = 0;
  }
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  if ((*(char *)(lVar1 + 0x40) != '\0') && (*(code **)(lVar1 + 0x58) != (code *)0x0)) {
    iVar3 = (**(code **)(lVar1 + 0x58))(0,&local_88);
    if (iVar3 == 0) {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
      if ((*(int *)(lVar1 + 0x60) == 0) || (*(int *)(lVar1 + 0x60) != local_88)) {
        *(int *)(lVar1 + 0x60) = local_88;
        auVar18 = ZEXT464(0x3f800000);
        bVar4 = (byte)local_84 >> 4 & 1;
        auVar2._12_4_ = 0;
        auVar2._0_12_ = ZEXT812(0);
        auVar17 = ZEXT1264(ZEXT812(0)) << 0x20;
        if (*(char *)(param_1 + 0xbb5) != '\0') {
          auVar6 = vpcmpeqd_avx(ZEXT116(bVar4),SUB6416(ZEXT464(0),0));
          auVar2 = vblendvps_avx(auVar18._0_16_,auVar2 << 0x20,auVar6);
          FUN_1804b0130(param_1,0x278,bVar4,auVar2._0_8_);
        }
        bVar4 = (byte)local_84 >> 5 & 1;
        if (*(char *)(param_1 + 0xbb5) != '\0') {
          auVar2 = vpcmpeqd_avx(ZEXT116(bVar4),SUB6416(ZEXT464(0),0));
          auVar2 = vblendvps_avx(auVar18._0_16_,auVar17._0_16_,auVar2);
          FUN_1804b0130(param_1,0x279,bVar4,auVar2._0_8_);
        }
        bVar4 = (byte)(local_84 >> 0xe) & 1;
        if (*(char *)(param_1 + 0xbb5) != '\0') {
          auVar2 = vpcmpeqd_avx(ZEXT116(bVar4),SUB6416(ZEXT464(0),0));
          auVar2 = vblendvps_avx(auVar18._0_16_,auVar17._0_16_,auVar2);
          FUN_1804b0130(param_1,0x27a,bVar4,auVar2._0_8_);
        }
        bVar4 = (byte)(local_84 >> 0xd) & 1;
        if (*(char *)(param_1 + 0xbb5) != '\0') {
          auVar2 = vpcmpeqd_avx(ZEXT116(bVar4),SUB6416(ZEXT464(0),0));
          auVar2 = vblendvps_avx(auVar18._0_16_,auVar17._0_16_,auVar2);
          FUN_1804b0130(param_1,0x27b,bVar4,auVar2._0_8_);
        }
        if (*(char *)(param_1 + 0xbb5) != '\0') {
          auVar2 = vpcmpeqd_avx(ZEXT216(local_84 >> 0xf),SUB6416(ZEXT464(0),0));
          auVar2 = vblendvps_avx(auVar18._0_16_,auVar17._0_16_,auVar2);
          FUN_1804b0130(param_1,0x27c,local_84 >> 0xf,auVar2._0_8_);
        }
        bVar4 = (byte)(local_84 >> 0xc) & 1;
        if (*(char *)(param_1 + 0xbb5) != '\0') {
          auVar2 = vpcmpeqd_avx(ZEXT116(bVar4),SUB6416(ZEXT464(0),0));
          auVar2 = vblendvps_avx(auVar18._0_16_,auVar17._0_16_,auVar2);
          FUN_1804b0130(param_1,0x27d,bVar4,auVar2._0_8_);
        }
        bVar4 = (byte)local_84 >> 2 & 1;
        if (*(char *)(param_1 + 0xbb5) != '\0') {
          auVar2 = vpcmpeqd_avx(ZEXT116(bVar4),SUB6416(ZEXT464(0),0));
          auVar2 = vblendvps_avx(auVar18._0_16_,auVar17._0_16_,auVar2);
          FUN_1804b0130(param_1,0x27e,bVar4,auVar2._0_8_);
        }
        bVar4 = (byte)local_84 >> 3 & 1;
        if (*(char *)(param_1 + 0xbb5) != '\0') {
          auVar2 = vpcmpeqd_avx(ZEXT116(bVar4),SUB6416(ZEXT464(0),0));
          auVar2 = vblendvps_avx(auVar18._0_16_,auVar17._0_16_,auVar2);
          FUN_1804b0130(param_1,0x27f,bVar4,auVar2._0_8_);
        }
        bVar4 = (byte)local_84 & 1;
        if (*(char *)(param_1 + 0xbb5) != '\0') {
          auVar2 = vpcmpeqd_avx(ZEXT116(bVar4),SUB6416(ZEXT464(0),0));
          auVar2 = vblendvps_avx(auVar18._0_16_,auVar17._0_16_,auVar2);
          FUN_1804b0130(param_1,0x280,bVar4,auVar2._0_8_);
        }
        bVar4 = (byte)local_84 >> 1 & 1;
        if (*(char *)(param_1 + 0xbb5) != '\0') {
          auVar2 = vpcmpeqd_avx(ZEXT116(bVar4),SUB6416(ZEXT464(0),0));
          auVar2 = vblendvps_avx(auVar18._0_16_,auVar17._0_16_,auVar2);
          FUN_1804b0130(param_1,0x281,bVar4,auVar2._0_8_);
        }
        bVar4 = (byte)(local_84 >> 8) & 1;
        if (*(char *)(param_1 + 0xbb5) != '\0') {
          auVar2 = vpcmpeqd_avx(ZEXT116(bVar4),SUB6416(ZEXT464(0),0));
          auVar2 = vblendvps_avx(auVar18._0_16_,auVar17._0_16_,auVar2);
          FUN_1804b0130(param_1,0x282,bVar4,auVar2._0_8_);
        }
        bVar4 = (byte)(local_84 >> 9);
        if (*(char *)(param_1 + 0xbb5) != '\0') {
          auVar2 = vpcmpeqd_avx(ZEXT416(bVar4 & 1),SUB6416(ZEXT464(0),0));
          auVar2 = vblendvps_avx(auVar18._0_16_,auVar17._0_16_,auVar2);
          FUN_1804b0130(param_1,0x283,bVar4 & 1,auVar2._0_8_);
        }
        fVar20 = 225.0;
        auVar6._0_4_ = (float)(int)(local_82 - 0x1e) / 225.0;
        auVar6._4_12_ = SUB1612(ZEXT816(0),4);
        if (auVar17._0_4_ <= auVar6._0_4_) {
          auVar2 = vminss_avx(auVar18._0_16_,auVar6);
          uVar16 = auVar2._0_8_;
        }
        else {
          uVar16 = 0;
        }
        fVar19 = 0.1;
        FUN_1804b0130(param_1,0x284,0.1 < auVar6._0_4_,uVar16);
        auVar7._0_4_ = (float)(int)(local_81 - 0x1e) / fVar20;
        auVar7._4_12_ = SUB1612(ZEXT816(0),4);
        if (auVar17._0_4_ <= auVar7._0_4_) {
          auVar2 = vminss_avx(auVar18._0_16_,auVar7);
          uVar16 = auVar2._0_8_;
        }
        else {
          uVar16 = 0;
        }
        FUN_1804b0130(param_1,0x285,fVar19 < auVar7._0_4_,uVar16);
        bVar4 = (byte)local_84 >> 6 & 1;
        if (*(char *)(param_1 + 0xbb5) != '\0') {
          auVar2 = vpcmpeqd_avx(ZEXT116(bVar4),SUB6416(ZEXT464(0),0));
          auVar2 = vblendvps_avx(auVar18._0_16_,auVar17._0_16_,auVar2);
          FUN_1804b0130(param_1,0x286,bVar4,auVar2._0_8_);
        }
        if (*(char *)(param_1 + 0xbb5) != '\0') {
          auVar2 = vpcmpeqd_avx(ZEXT116((byte)local_84 >> 7),SUB6416(ZEXT464(0),0));
          auVar2 = vblendvps_avx(auVar18._0_16_,auVar17._0_16_,auVar2);
          FUN_1804b0130(param_1,0x287,(byte)local_84 >> 7,auVar2._0_8_);
        }
        fVar20 = -24919.0;
        auVar8._0_4_ = (float)(local_80 + 0x1ea9) / -24919.0;
        auVar8._4_12_ = SUB1612(ZEXT816(0),4);
        if (auVar17._0_4_ <= auVar8._0_4_) {
          auVar2 = vminss_avx(auVar18._0_16_,auVar8);
          uVar16 = auVar2._0_8_;
        }
        else {
          uVar16 = 0;
        }
        FUN_1804b0130(param_1,0x288,fVar19 < auVar8._0_4_,uVar16);
        fVar21 = 24918.0;
        auVar9._0_4_ = (float)(local_80 + -0x1ea9) / 24918.0;
        auVar9._4_12_ = SUB1612(ZEXT816(0),4);
        if (auVar17._0_4_ <= auVar9._0_4_) {
          auVar2 = vminss_avx(auVar18._0_16_,auVar9);
          uVar16 = auVar2._0_8_;
        }
        else {
          uVar16 = 0;
        }
        FUN_1804b0130(param_1,0x289,fVar19 < auVar9._0_4_,uVar16);
        auVar10._0_4_ = (float)(local_7e + -0x1ea9) / fVar21;
        auVar10._4_12_ = SUB1612(ZEXT816(0),4);
        if (auVar17._0_4_ <= auVar10._0_4_) {
          auVar2 = vminss_avx(auVar18._0_16_,auVar10);
          uVar16 = auVar2._0_8_;
        }
        else {
          uVar16 = 0;
        }
        FUN_1804b0130(param_1,0x28a,fVar19 < auVar10._0_4_,uVar16);
        auVar11._0_4_ = (float)(local_7e + 0x1ea9) / fVar20;
        auVar11._4_12_ = SUB1612(ZEXT816(0),4);
        if (auVar17._0_4_ <= auVar11._0_4_) {
          auVar2 = vminss_avx(auVar18._0_16_,auVar11);
          uVar16 = auVar2._0_8_;
        }
        else {
          uVar16 = 0;
        }
        FUN_1804b0130(param_1,0x28b,fVar19 < auVar11._0_4_,uVar16);
        auVar12._0_4_ = (float)(local_7c + 0x1ea9) / fVar20;
        auVar12._4_12_ = SUB1612(ZEXT816(0),4);
        if (auVar17._0_4_ <= auVar12._0_4_) {
          auVar2 = vminss_avx(auVar18._0_16_,auVar12);
          uVar16 = auVar2._0_8_;
        }
        else {
          uVar16 = 0;
        }
        FUN_1804b0130(param_1,0x28c,fVar19 < auVar12._0_4_,uVar16);
        auVar13._0_4_ = (float)(local_7c + -0x1ea9) / fVar21;
        auVar13._4_12_ = SUB1612(ZEXT816(0),4);
        if (auVar17._0_4_ <= auVar13._0_4_) {
          auVar2 = vminss_avx(auVar18._0_16_,auVar13);
          uVar16 = auVar2._0_8_;
        }
        else {
          uVar16 = 0;
        }
        FUN_1804b0130(param_1,0x28d,fVar19 < auVar13._0_4_,uVar16);
        auVar14._0_4_ = (float)(local_7a + -0x1ea9) / fVar21;
        auVar14._4_12_ = SUB1612(ZEXT816(0),4);
        if (auVar17._0_4_ <= auVar14._0_4_) {
          auVar2 = vminss_avx(auVar18._0_16_,auVar14);
          uVar16 = auVar2._0_8_;
        }
        else {
          uVar16 = 0;
        }
        FUN_1804b0130(param_1,0x28e,fVar19 < auVar14._0_4_,uVar16);
        uVar16 = auVar17._0_8_;
        auVar15._0_4_ = (float)(local_7a + 0x1ea9) / fVar20;
        auVar15._4_12_ = SUB1612(ZEXT816(0),4);
        if (auVar17._0_4_ <= auVar15._0_4_) {
          auVar2 = vminss_avx(auVar18._0_16_,auVar15);
          uVar16 = auVar2._0_8_;
        }
        FUN_1804b0130(param_1,0x28f,fVar19 < auVar15._0_4_,uVar16);
      }
    }
  }
}



