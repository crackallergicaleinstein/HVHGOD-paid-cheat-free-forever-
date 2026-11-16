// FUN_1804f6880 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804f6880 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804f6880(void)

{
  char *pcVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  undefined4 uVar9;
  char *pcVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined1 auVar13 [16];
  undefined1 extraout_var [56];
  undefined1 auVar14 [16];
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [64];
  undefined1 auVar20 [64];
  undefined1 auVar21 [64];
  undefined1 auVar22 [64];
  undefined1 auStack_128 [32];
  float *local_108;
  float *local_100;
  char *local_f8;
  char *local_f0;
  undefined8 local_e8;
  undefined4 local_d8;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  undefined1 local_b8 [16];
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  char local_98;
  byte local_97 [7];
  float local_90;
  float fStack_8c;
  float local_88;
  float local_84;
  ulonglong local_80;
  
  lVar6 = DAT_180bb8ae8;
  local_80 = DAT_1808d5f00 ^ (ulonglong)auStack_128;
  *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
  plVar2 = *(longlong **)(lVar6 + 0x14d0);
  if (*(char *)((longlong)plVar2 + 0xd1) == '\0') {
    lVar12 = lVar6;
    iVar8 = FUN_1804b0a90("read FAQ \"About ID Stack System\"",0,
                          *(undefined4 *)(plVar2[0x22] + -4 + (longlong)(int)plVar2[0x21] * 4));
    if (*(int *)(*plVar2 + 0x1534) == iVar8) {
      FUN_1804cf810(iVar8,0xb,"read FAQ \"About ID Stack System\"");
      lVar12 = DAT_180bb8ae8;
    }
    pcVar10 = "read FAQ \"About ID Stack System\"";
    while (*pcVar10 != '\0') {
      pcVar1 = pcVar10 + 1;
      if (((*pcVar10 == '#') && (*pcVar1 == '#')) ||
         (pcVar10 = pcVar1, pcVar1 == (char *)0xffffffffffffffff)) break;
    }
    fVar18 = *(float *)(plVar2 + 0x23);
    fVar16 = *(float *)(plVar2 + 0x2a) + *(float *)((longlong)plVar2 + 0x11c);
    auVar19 = ZEXT464(0xbf800000);
    fVar17 = 0.0;
    if (pcVar10 == "read FAQ \"About ID Stack System\"") {
      local_88 = 0.0;
      local_c4 = *(float *)(lVar12 + 0x11e0);
    }
    else {
      local_d8 = 0;
      local_e8 = 0;
      local_100 = (float *)0x18085aa80;
      local_108 = (float *)CONCAT44(local_108._4_4_,0xbf800000);
      local_f8 = pcVar10;
      local_f0 = pcVar10;
      FUN_1804ea040(&local_c8,*(undefined8 *)(lVar12 + 0x11d0),*(float *)(lVar12 + 0x11e0),
                    0x7f7fffff);
      local_88 = (float)(int)((uint)((float)(int)local_c8 < local_c8) + (int)local_c8);
    }
    local_b8._4_4_ = local_c4;
    local_84 = fVar16 + local_c4;
    local_b8._0_4_ = local_88;
    local_88 = fVar18 + local_88;
    local_90 = fVar18;
    fStack_8c = fVar16;
    FUN_1804c6420(local_b8,0);
    cVar7 = FUN_1804c6190(&local_90,iVar8,0,0);
    if (cVar7 != '\0') {
      local_108 = (float *)((ulonglong)local_108 & 0xffffffff00000000);
      FUN_1804f4d40(&local_90,iVar8,&local_98,local_97);
      uVar9 = 0;
      FUN_1804b4250(&local_90,iVar8,0,auVar19._0_8_);
      lVar12 = DAT_180bb8ae8;
      if (local_98 != '\0') {
        *(undefined4 *)(DAT_180bb8ae8 + 0x24d8) = 7;
      }
      local_b8 = *(undefined1 (*) [16])(lVar6 + 0x10f8);
      auVar13 = vshufps_avx(local_b8,local_b8,0x55);
      auVar4 = vshufps_avx(local_b8,local_b8,0xaa);
      local_c0 = auVar4._0_4_;
      local_c4 = auVar13._0_4_;
      local_c8 = local_b8._0_4_;
      local_bc = (float)vextractps_avx(local_b8,3);
      fVar18 = 0.0;
      auVar14 = auVar13;
      if (local_c4 < local_c0) {
        fVar18 = auVar19._0_4_;
        auVar14 = auVar4;
        auVar4 = auVar13;
      }
      auVar13 = local_b8;
      if (local_c8 < auVar14._0_4_) {
        fVar18 = -0.33333334 - fVar18;
        auVar13 = auVar14;
        auVar14 = local_b8;
      }
      auVar19 = ZEXT1664(auVar13);
      auVar21 = ZEXT464(0x3f800000);
      auVar3 = vminss_avx(auVar14,auVar4);
      fVar16 = auVar13._0_4_;
      fVar5 = fVar16 - auVar3._0_4_;
      fVar18 = ABS((auVar14._0_4_ - auVar4._0_4_) / (fVar5 * 6.0 + 1e-20) + fVar18);
      auVar13 = ZEXT416((uint)fVar18);
      auVar22 = ZEXT464((uint)(fVar5 / (fVar16 + 1e-20)));
      if ((local_97[0] != 0) || (local_98 != '\0')) {
        auVar13 = vpcmpeqd_avx(ZEXT116(local_97[0]),SUB6416(ZEXT464(0),0));
        auVar13 = vblendvps_avx(SUB6416(ZEXT464(0x3ecccccd),0),SUB6416(ZEXT464(0x3e99999a),0),
                                auVar13);
        fVar16 = auVar13._0_4_ + fVar16;
        if (fVar17 <= fVar16) {
          auVar13 = vminss_avx(auVar21._0_16_,ZEXT416((uint)fVar16));
        }
        else {
          auVar13 = ZEXT816(0);
        }
        auVar19 = ZEXT1664(auVar13);
        auVar20._0_8_ = FUN_180637760(fVar18 + 0.02,auVar21._0_8_);
        auVar20._8_56_ = extraout_var;
        auVar13 = auVar20._0_16_;
      }
      auVar20 = ZEXT1664(auVar13);
      local_100 = (float *)(local_b8 + 8);
      local_108 = (float *)(local_b8 + 4);
      FUN_1804b11e0(auVar13._0_8_,auVar22._0_8_,auVar19._0_8_,local_b8);
      fVar18 = auVar19._0_4_ - 0.2;
      if (fVar17 <= fVar18) {
        auVar13 = vminss_avx(auVar21._0_16_,ZEXT416((uint)fVar18));
        uVar15 = auVar13._0_8_;
      }
      else {
        uVar15 = 0;
      }
      local_100 = &local_c0;
      local_108 = &local_c4;
      FUN_1804b11e0(auVar20._0_8_,auVar22._0_8_,uVar15,&local_c8);
      fVar18 = *(float *)(*(longlong *)(lVar6 + 0x11d8) + 0x48) * *(float *)(lVar6 + 0x11e8) * 0.2;
      iVar8 = (int)fVar18;
      uVar11 = CONCAT44(uVar9,iVar8);
      if ((fVar18 < fVar17) && ((float)iVar8 != fVar18)) {
        uVar11 = (ulonglong)(iVar8 - 1);
      }
      local_a4 = local_c4;
      local_9c = local_bc * *(float *)(lVar12 + 0xc84);
      local_a8 = local_c8;
      local_a0 = local_c0;
      fVar18 = (float)(int)*(float *)(lVar6 + 0x11ac);
      uVar9 = FUN_1804b1120(&local_a8,local_bc,uVar11);
      local_f8 = (char *)((ulonglong)local_f8 & 0xffffffff00000000);
      local_100 = (float *)CONCAT44(local_100._4_4_,fVar18);
      local_108 = (float *)CONCAT44(local_108._4_4_,uVar9);
      FUN_1804dcfb0(plVar2[0x59],local_90,local_88,(float)(int)uVar11 + local_84);
      local_a8 = (float)local_b8._0_4_;
      local_a4 = (float)local_b8._4_4_;
      local_a0 = (float)local_b8._8_4_;
      local_9c = (float)local_b8._12_4_ * *(float *)(DAT_180bb8ae8 + 0xc84);
      uVar9 = FUN_1804b1120(&local_a8);
      FUN_1804b2a10(0,uVar9);
      FUN_1804b3060(CONCAT44(fStack_8c,local_90),"read FAQ \"About ID Stack System\"",pcVar10,0);
      FUN_1804b2b70(1);
    }
  }
}



