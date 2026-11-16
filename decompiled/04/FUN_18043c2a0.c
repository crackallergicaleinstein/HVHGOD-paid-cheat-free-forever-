// FUN_18043c2a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18043c2a0 */

void FUN_18043c2a0(void)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  undefined3 uVar5;
  char cVar6;
  float *pfVar7;
  longlong lVar8;
  longlong *plVar9;
  char *pcVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  float fVar17;
  ulonglong uVar18;
  longlong *plVar19;
  int iVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  float *pfVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [64];
  undefined1 auVar27 [64];
  float fVar28;
  undefined1 auVar29 [64];
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auVar33 [64];
  undefined1 auVar34 [64];
  float fVar35;
  undefined1 auVar36 [64];
  undefined4 uVar37;
  float fVar38;
  float fVar39;
  undefined1 auVar40 [64];
  undefined1 auVar41 [64];
  undefined1 auVar42 [64];
  undefined4 local_res8;
  float local_res10;
  float local_res18 [2];
  float local_res20 [2];
  undefined8 in_stack_fffffffffffffe78;
  undefined8 uVar43;
  undefined4 uVar44;
  float local_158 [4];
  undefined8 local_148;
  undefined8 uStack_140;
  float local_138 [3];
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118 [3];
  float local_10c [3];
  float local_100;
  undefined1 local_f8 [184];
  
  uVar44 = (undefined4)((ulonglong)in_stack_fffffffffffffe78 >> 0x20);
  pfVar7 = (float *)FUN_180439770();
  lVar8 = FUN_180439770();
  lVar14 = 0;
  if (*(longlong *)(lVar8 + 0x478) != *(longlong *)(lVar8 + 0x480)) {
    lVar14 = *(longlong *)(lVar8 + 0x480) + -0x78;
  }
  if ((lVar14 != 0) && (*(longlong *)(lVar14 + 0x58) != 0)) {
    fVar32 = *(float *)(lVar14 + 0x6c) + *(float *)(lVar14 + 0x50) + pfVar7[0x7b];
    auVar34 = ZEXT464(0x3f800000);
    auVar3 = vmaxss_avx(ZEXT416((uint)(*(float *)(lVar14 + 0x2c) - *(float *)(lVar14 + 0x70))),
                        auVar34._0_16_);
    auVar40 = ZEXT1664(auVar3);
    local_res8 = auVar3._0_4_;
    auVar3 = vmaxss_avx(ZEXT416((uint)(fVar32 - *(float *)(lVar14 + 0x70))),auVar34._0_16_);
    local_res18[0] = auVar3._0_4_;
    if (*(char *)(lVar14 + 0x69) != '\0') {
      auVar26 = ZEXT1664(ZEXT816(0));
      auVar3 = vmaxss_avx(ZEXT416((uint)(local_res18[0] - local_res8)),ZEXT816(0));
      auVar33 = ZEXT1664(auVar3);
      local_158[0] = auVar3._0_4_;
      plVar9 = (longlong *)FUN_18043f3c0(pfVar7 + 0x154);
      lVar8 = *plVar9;
      pfVar23 = (float *)(lVar8 + 0x18);
      fVar17 = *(float *)(lVar14 + 0x28) + 14.0;
      fVar32 = *(float *)(lVar14 + 0x20);
      fVar39 = fVar32 + *(float *)(lVar14 + 0x28) + 14.0;
      fVar38 = *(float *)(lVar14 + 0x24);
      fVar31 = *(float *)(lVar14 + 0x2c);
      bVar4 = true;
      lVar15 = *(longlong *)(pfVar7 + 0x120) - *(longlong *)(pfVar7 + 0x11e);
      lVar15 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar15),8) + lVar15;
      uVar18 = (lVar15 >> 6) - (lVar15 >> 0x3f);
      if (1 < uVar18) {
        uVar16 = 1;
        pcVar10 = (char *)(*(longlong *)(pfVar7 + 0x11e) + 0x4e);
        do {
          if ((*(longlong *)(pfVar7 + 0x110) == 0) ||
             (*(longlong *)(pcVar10 + 0x12) != *(longlong *)(pfVar7 + 0x110))) {
            if (*pcVar10 != '\0') {
              fVar30 = *(float *)(pcVar10 + 0x22) + *(float *)(pcVar10 + -0x2a);
              auVar3 = vmaxss_avx(ZEXT416((uint)(*(float *)(pcVar10 + -0x22) -
                                                *(float *)(pcVar10 + 0x22))),auVar26._0_16_);
              if ((((*pfVar7 < *(float *)(pcVar10 + -0x2e)) ||
                   (*(float *)(pcVar10 + -0x2e) + *(float *)(pcVar10 + -0x26) < *pfVar7)) ||
                  (pfVar7[1] < fVar30)) || (auVar3._0_4_ + fVar30 < pfVar7[1])) {
                bVar4 = false;
              }
            }
          }
          else {
            bVar4 = true;
          }
          pcVar10 = pcVar10 + 0x78;
          uVar16 = uVar16 + 1;
        } while (uVar16 < uVar18);
      }
      local_res10 = fVar17;
      cVar6 = FUN_18043b5c0(pfVar7);
      local_138[0] = auVar26._0_4_;
      auVar25 = auVar26._0_16_;
      fVar30 = auVar33._0_4_;
      auVar3 = auVar25;
      if ((cVar6 != '\0') || (!bVar4)) {
LAB_18043c4df:
        bVar4 = false;
        if (*(char *)(lVar8 + 0x24) != '\0') goto LAB_18043c4e7;
      }
      else {
        if (((*pfVar7 < fVar32) || ((fVar32 + fVar17 < *pfVar7 || (pfVar7[1] < fVar38)))) ||
           (fVar31 + fVar38 < pfVar7[1])) goto LAB_18043c4df;
        bVar4 = true;
LAB_18043c4e7:
        if (local_138[0] < fVar30) {
          auVar3 = auVar34._0_16_;
        }
      }
      local_11c = DAT_180bbae00;
      fVar32 = *(float *)(lVar8 + 0x20);
      auVar24 = vcmpss_avx(ZEXT416((uint)fVar32),auVar3,1);
      auVar24 = vblendvps_avx(SUB6416(ZEXT464(0x41400000),0),SUB6416(ZEXT464(0x40e00000),0),auVar24)
      ;
      auVar24 = vminss_avx(auVar34._0_16_,ZEXT416((uint)(auVar24._0_4_ * DAT_180bbae00)));
      fVar32 = auVar24._0_4_ * (auVar3._0_4_ - fVar32) + fVar32;
      *(float *)(lVar8 + 0x20) = fVar32;
      local_138[2] = auVar34._0_4_;
      local_138[1] = (fVar32 - 0.3) / 0.7;
      pfVar13 = local_138;
      if (local_138[0] <= local_138[1]) {
        pfVar13 = local_138 + 1;
      }
      pfVar12 = local_138 + 2;
      if (local_138[1] <= local_138[2]) {
        pfVar12 = pfVar13;
      }
      fVar32 = *pfVar12 - local_138[2];
      local_100 = fVar32 * fVar32 * fVar32 + local_138[2];
      fVar32 = 6.0;
      auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)((fVar39 - 6.0) - 8.0)),1);
      auVar36 = ZEXT1664(auVar3);
      auVar3 = vroundss_avx(ZEXT816(0),
                            ZEXT416((uint)(*(float *)(lVar14 + 0x24) + *(float *)(lVar14 + 0x70) +
                                          8.0)),1);
      auVar42 = ZEXT1664(auVar3);
      auVar41 = ZEXT464(0x41800000);
      auVar24 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(auVar40._0_4_ - 16.0)),1);
      auVar40 = ZEXT1664(auVar24);
      fVar38 = auVar24._0_4_;
      if (local_138[0] < fVar30) {
        auVar24 = ZEXT416((uint)((local_res8 / local_res18[0]) * fVar38));
      }
      auVar24 = vmaxss_avx(auVar24,ZEXT416(0x41a00000));
      auVar24 = vroundss_avx(ZEXT816(0),auVar24,1);
      auVar27 = ZEXT1664(auVar24);
      if (local_138[0] < fVar30) {
        auVar25 = ZEXT416((uint)(*pfVar23 / fVar30));
      }
      auVar3 = vroundss_avx(ZEXT816(0),
                            ZEXT416((uint)((fVar38 - auVar24._0_4_) * auVar25._0_4_ + auVar3._0_4_))
                            ,1);
      auVar29 = ZEXT1664(auVar3);
      if ((local_138[0] < fVar30) && (cVar6 = FUN_18043b5c0(pfVar7), cVar6 == '\0')) {
        fVar38 = auVar27._0_4_;
        fVar31 = auVar33._0_4_;
        fVar17 = auVar34._0_4_;
        local_res8 = auVar26._0_4_;
        fVar30 = auVar42._0_4_;
        fVar39 = auVar40._0_4_;
        if (*(char *)((longlong)pfVar7 + 0x11) != '\0') {
          fVar1 = pfVar7[1];
          fVar2 = *pfVar7;
          fVar35 = auVar36._0_4_;
          if (fVar35 <= fVar2) {
            if (((fVar35 + fVar32 < fVar2) || (fVar28 = auVar29._0_4_, fVar1 < fVar28)) ||
               (fVar28 + fVar38 < fVar1)) {
              if (((fVar2 < fVar35) || (fVar35 + fVar32 < fVar2)) ||
                 ((fVar1 < fVar30 || (fVar39 + fVar30 < fVar1)))) goto LAB_18043c768;
              local_res20[0] = fVar17;
              local_res18[0] = ((fVar1 - fVar38 * 0.5) - fVar30) / (fVar39 - fVar38);
              pfVar13 = (float *)&local_res8;
              if (local_res8 <= local_res18[0]) {
                pfVar13 = local_res18;
              }
              pfVar12 = local_res20;
              if (local_res18[0] <= fVar17) {
                pfVar12 = pfVar13;
              }
              *(float *)(lVar8 + 0x1c) = fVar31 * *pfVar12;
              *(undefined1 *)(lVar8 + 0x24) = 1;
              *(float *)(lVar8 + 0x28) = fVar38 * 0.5;
            }
            else {
              *(undefined1 *)(lVar8 + 0x24) = 1;
              *(float *)(lVar8 + 0x28) = pfVar7[1] - fVar28;
            }
            uVar43 = *(undefined8 *)(lVar14 + 0x58);
            pfVar7[0x102] = 0.0;
            pfVar7[0x103] = 0.0;
            *(undefined8 *)(pfVar7 + 0x10e) = uVar43;
          }
        }
LAB_18043c768:
        if (*(char *)(lVar8 + 0x24) != '\0') {
          if (*(char *)(pfVar7 + 4) == '\0') {
            *(undefined1 *)(lVar8 + 0x24) = 0;
            if (*(longlong *)(pfVar7 + 0x10e) == *(longlong *)(lVar14 + 0x58)) {
              pfVar7[0x10e] = 0.0;
              pfVar7[0x10f] = 0.0;
            }
          }
          else {
            local_res20[0] = fVar17;
            local_res18[0] = ((pfVar7[1] - *(float *)(lVar8 + 0x28)) - fVar30) / (fVar39 - fVar38);
            pfVar13 = (float *)&local_res8;
            if (local_res8 <= local_res18[0]) {
              pfVar13 = local_res18;
            }
            pfVar12 = local_res20;
            if (local_res18[0] <= fVar17) {
              pfVar12 = pfVar13;
            }
            fVar32 = *pfVar12;
            *(float *)(lVar8 + 0x1c) = fVar31 * fVar32;
            *pfVar23 = fVar31 * fVar32;
          }
        }
        local_12c = local_res8;
        pfVar13 = (float *)(lVar8 + 0x1c);
        pfVar12 = &local_12c;
        if (local_res8 <= *pfVar13) {
          pfVar12 = pfVar13;
        }
        pfVar11 = local_158;
        if (*pfVar13 <= fVar31) {
          pfVar11 = pfVar12;
        }
        fVar32 = *pfVar11;
        *pfVar13 = fVar32;
        if (((bVar4) && (pfVar7[6] != local_res8)) && (*(char *)(lVar8 + 0x24) == '\0')) {
          local_128 = local_res8;
          local_124 = fVar32 - pfVar7[6] * 40.0;
          pfVar12 = &local_128;
          if (local_res8 <= local_124) {
            pfVar12 = &local_124;
          }
          pfVar11 = local_158;
          if (local_124 <= fVar31) {
            pfVar11 = pfVar12;
          }
          if (*pfVar11 != fVar32) {
            *pfVar13 = *pfVar11;
            pfVar7[6] = 0.0;
          }
        }
      }
      local_120 = auVar26._0_4_;
      pfVar13 = (float *)(lVar8 + 0x1c);
      pfVar12 = &local_120;
      if (local_120 <= *pfVar13) {
        pfVar12 = pfVar13;
      }
      pfVar11 = local_158;
      if (*pfVar13 <= auVar33._0_4_) {
        pfVar11 = pfVar12;
      }
      fVar32 = *pfVar11;
      *pfVar13 = fVar32;
      auVar3 = vminss_avx(auVar34._0_16_,ZEXT416((uint)(local_11c * 18.0)));
      fVar32 = auVar3._0_4_ * (fVar32 - *pfVar23) + *pfVar23;
      *pfVar23 = fVar32;
      local_res8 = local_120;
      pfVar13 = (float *)&local_res8;
      if (local_120 <= fVar32) {
        pfVar13 = pfVar23;
      }
      pfVar12 = local_158;
      if (fVar32 <= auVar33._0_4_) {
        pfVar12 = pfVar13;
      }
      *pfVar23 = *pfVar12;
      lVar15 = FUN_180439770();
      if (*(longlong *)(lVar15 + 0x4a8) == *(longlong *)(lVar15 + 0x4b0)) {
        plVar19 = &DAT_180bbace8;
        plVar9 = &DAT_180bbace0;
      }
      else {
        lVar15 = (longlong)*(int *)(*(longlong *)(lVar15 + 0x4b0) + -4) * 0x98;
        plVar19 = (longlong *)(&DAT_180bbac50 + lVar15);
        plVar9 = (longlong *)(&DAT_180bbac48 + lVar15);
      }
      if (*plVar9 != plVar9[1]) {
        *plVar19 = plVar9[1] + -0x10;
      }
      if (auVar26._0_4_ < auVar33._0_4_) {
        auVar3 = vminss_avx(auVar41._0_16_,ZEXT416((uint)pfVar7[0x6f]));
        auVar41 = ZEXT1664(auVar3);
        lVar15 = FUN_180439770();
        uVar37 = auVar41._0_4_;
        fVar32 = auVar33._0_4_;
        local_10c[0] = auVar26._0_4_;
        local_10c[2] = auVar34._0_4_;
        puVar21 = &DAT_180bbac80;
        if (*(longlong *)(lVar15 + 0x4a8) == *(longlong *)(lVar15 + 0x4b0)) {
          puVar22 = &DAT_180bbac80;
        }
        else {
          puVar22 = &DAT_180bbabe8 + (longlong)*(int *)(*(longlong *)(lVar15 + 0x4b0) + -4) * 0x13;
        }
        fVar38 = pfVar7[0x8c];
        fVar17 = (float)((uint)fVar38 >> 0x18);
        local_res8._0_3_ = SUB43(fVar38,0);
        uVar5 = (undefined3)local_res8;
        local_res8 = (float)((uint)fVar38 & 0xffffff);
        fVar31 = local_res8;
        local_118[2] = local_10c[2];
        local_118[0] = local_10c[0];
        local_118[1] = *pfVar23 * 0.0625;
        pfVar13 = local_118;
        if (local_10c[0] <= local_118[1]) {
          pfVar13 = local_118 + 1;
        }
        pfVar12 = local_118 + 2;
        if (local_118[1] <= local_10c[2]) {
          pfVar12 = pfVar13;
        }
        fVar39 = 0.01;
        if (0.01 < *pfVar12) {
          local_res8 = (float)CONCAT13((char)(int)((float)(int)fVar17 * *pfVar12),uVar5);
          local_148 = CONCAT44(uVar37,uVar37);
          uStack_140 = CONCAT44(local_10c[0],local_10c[0]);
          uVar43 = CONCAT44(uVar44,local_res8);
          local_res18[0] = fVar17;
          FUN_180430c00(puVar22,*(undefined4 *)(lVar14 + 0x20),
                        *(float *)(lVar14 + 0x24) + *(float *)(lVar14 + 0x70),local_res10,0x41800000
                        ,local_res8,uVar43,fVar31,fVar31,&local_148);
          uVar44 = (undefined4)((ulonglong)uVar43 >> 0x20);
          uVar37 = auVar41._0_4_;
          fVar32 = auVar33._0_4_;
          local_10c[0] = auVar26._0_4_;
          local_10c[2] = auVar34._0_4_;
          fVar17 = local_res18[0];
        }
        local_10c[1] = (fVar32 - *pfVar23) * 0.0625;
        pfVar23 = local_10c;
        if (local_10c[0] <= local_10c[1]) {
          pfVar23 = local_10c + 1;
        }
        pfVar13 = local_10c + 2;
        if (local_10c[1] <= local_10c[2]) {
          pfVar13 = pfVar23;
        }
        if (fVar39 < *pfVar13) {
          local_res8 = (float)CONCAT13((char)(int)((float)(int)fVar17 * *pfVar13),uVar5);
          local_148 = CONCAT44(local_10c[0],local_10c[0]);
          uStack_140 = CONCAT44(uVar37,uVar37);
          FUN_180430c00(puVar22,*(undefined4 *)(lVar14 + 0x20),
                        (*(float *)(lVar14 + 0x2c) + *(float *)(lVar14 + 0x24)) - 16.0,local_res10,
                        0x41800000,fVar31,CONCAT44(uVar44,fVar38) & 0xffffffff00ffffff,local_res8,
                        local_res8,&local_148);
        }
        if (fVar39 < local_100) {
          fVar32 = local_100;
          lVar14 = FUN_180439770();
          if (*(longlong *)(lVar14 + 0x4a8) != *(longlong *)(lVar14 + 0x4b0)) {
            puVar21 = &DAT_180bbabe8 + (longlong)*(int *)(*(longlong *)(lVar14 + 0x4b0) + -4) * 0x13
            ;
          }
          auVar34 = ZEXT464(0x40c00000);
          if (((((auVar36._0_4_ <= *pfVar7) && (*pfVar7 <= auVar36._0_4_ + 6.0)) &&
               (auVar29._0_4_ <= pfVar7[1])) && (pfVar7[1] <= auVar29._0_4_ + auVar27._0_4_)) ||
             (iVar20 = 100, *(char *)(lVar8 + 0x24) != '\0')) {
            iVar20 = 0x96;
          }
          local_148 = 0x4040000040400000;
          uStack_140 = 0x4040000040400000;
          FUN_180430970(puVar21,auVar36._0_8_,auVar42._0_8_,auVar34._0_8_,auVar40._0_4_,
                        (int)(fVar32 * 30.0) << 0x18 | 0xffffff,&local_148);
          local_148 = 0x4040000040400000;
          uStack_140 = 0x4040000040400000;
          FUN_180430970(puVar21,auVar36._0_8_,auVar29._0_8_,auVar34._0_8_,auVar27._0_4_,
                        (int)((float)iVar20 * fVar32) << 0x18 | 0xffffff,&local_148);
        }
      }
      goto LAB_18043cd0c;
    }
    plVar9 = (longlong *)FUN_18043f6d0(pfVar7 + 0x144,local_f8);
    *(float *)(*plVar9 + 0x18) = fVar32;
  }
  lVar14 = FUN_180439770();
  if (*(longlong *)(lVar14 + 0x4a8) == *(longlong *)(lVar14 + 0x4b0)) {
    plVar19 = &DAT_180bbace8;
    plVar9 = &DAT_180bbace0;
  }
  else {
    lVar14 = (longlong)*(int *)(*(longlong *)(lVar14 + 0x4b0) + -4) * 0x98;
    plVar19 = (longlong *)(&DAT_180bbac50 + lVar14);
    plVar9 = (longlong *)(&DAT_180bbac48 + lVar14);
  }
  if (*plVar9 != plVar9[1]) {
    *plVar19 = plVar9[1] + -0x10;
  }
LAB_18043cd0c:
  FUN_18015c010(*(longlong *)(pfVar7 + 0x120) + -0x78);
  *(longlong *)(pfVar7 + 0x120) = *(longlong *)(pfVar7 + 0x120) + -0x78;
  lVar14 = FUN_180439770();
  if (*(longlong *)(lVar14 + 0x490) != *(longlong *)(lVar14 + 0x498)) {
    *(longlong *)(lVar14 + 0x498) = *(longlong *)(lVar14 + 0x498) + -8;
  }
  return;
}



