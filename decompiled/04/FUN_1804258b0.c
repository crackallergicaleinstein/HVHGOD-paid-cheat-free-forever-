// FUN_1804258b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804258b0 */

void FUN_1804258b0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  char *pcVar2;
  undefined1 auVar3 [16];
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  undefined1 extraout_var_01 [56];
  undefined1 extraout_var_02 [56];
  undefined1 extraout_var_03 [56];
  undefined1 extraout_var_04 [56];
  undefined1 auVar11 [16];
  undefined1 auVar12 [64];
  undefined1 auVar13 [16];
  undefined1 auVar14 [64];
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [64];
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  undefined1 auVar22 [64];
  float fVar23;
  undefined1 auVar24 [64];
  undefined1 auVar25 [64];
  undefined1 auVar26 [64];
  undefined1 auVar27 [64];
  undefined1 auVar28 [64];
  
  lVar5 = *param_2;
  auVar14 = ZEXT464(0xbf800000);
  auVar16._12_4_ = 0;
  auVar16._0_12_ = ZEXT812(0);
  auVar16 = auVar16 << 0x20;
  auVar17 = ZEXT1264(ZEXT812(0)) << 0x20;
  auVar27 = ZEXT864(0);
  auVar28 = ZEXT864(0);
  auVar22 = ZEXT864(0);
  auVar24 = ZEXT864(0);
  auVar13 = auVar14._0_16_;
  auVar12 = ZEXT1664(auVar13);
  auVar11 = auVar13;
  if (lVar5 != 0) {
    uVar18 = 0x7fffffff;
    uVar19 = 0x7fffffff;
    uVar20 = 0x7fffffff;
    uVar21 = 0x7fffffff;
    plVar8 = param_2 + 1;
    lVar9 = 0;
    plVar7 = param_2;
    do {
      iVar4 = FUN_180423a20(param_1,lVar5,*plVar8);
      if (iVar4 == 0) {
        if ((*(char *)*plVar7 == 'x') && (((char *)*plVar7)[1] == '\0')) {
          auVar27._0_8_ =
               FUN_180422f50(param_1,*plVar8,*(undefined4 *)(param_1 + 0x9c38),
                             *(undefined4 *)(param_1 + 40000));
          auVar27._8_56_ = extraout_var;
          auVar27 = ZEXT1664(auVar27._0_16_);
        }
        if ((*(char *)*plVar7 == 'y') && (((char *)*plVar7)[1] == '\0')) {
          auVar28._0_8_ =
               FUN_180422f50(param_1,*plVar8,*(undefined4 *)(param_1 + 0x9c3c),
                             *(undefined4 *)(param_1 + 0x9c44));
          auVar28._8_56_ = extraout_var_00;
          auVar28 = ZEXT1664(auVar28._0_16_);
        }
        lVar5 = 0;
        do {
          lVar6 = lVar5;
          if (*(char *)(*plVar7 + lVar6) != "width"[lVar6]) goto LAB_180425a27;
          lVar5 = lVar6 + 1;
        } while (lVar6 + 1 != 6);
        if (*(char *)(*plVar7 + lVar6) == "width"[lVar6]) {
          auVar22._0_8_ =
               FUN_180422f50(param_1,*plVar8,auVar17._0_8_,*(undefined4 *)(param_1 + 40000));
          auVar22._8_56_ = extraout_var_01;
          auVar22 = ZEXT1664(auVar22._0_16_);
        }
LAB_180425a27:
        lVar5 = 0;
        do {
          lVar6 = lVar5;
          if (*(char *)(*plVar7 + lVar6) != "height"[lVar6]) goto LAB_180425a67;
          lVar5 = lVar6 + 1;
        } while (lVar6 + 1 != 7);
        if (*(char *)(*plVar7 + lVar6) == "height"[lVar6]) {
          auVar24._0_8_ =
               FUN_180422f50(param_1,*plVar8,auVar17._0_8_,*(undefined4 *)(param_1 + 0x9c44));
          auVar24._8_56_ = extraout_var_02;
          auVar24 = ZEXT1664(auVar24._0_16_);
        }
LAB_180425a67:
        pcVar2 = (char *)*plVar7;
        if (((*pcVar2 == 'r') && (pcVar2[1] == 'x')) && (pcVar2[2] == '\0')) {
          uVar10 = FUN_180422f50(param_1,*plVar8,auVar17._0_8_,*(undefined4 *)(param_1 + 40000));
          auVar14 = ZEXT1664(CONCAT412(extraout_var_03._4_4_ & uVar21,
                                       CONCAT48(extraout_var_03._0_4_ & uVar20,
                                                CONCAT44((uint)((ulonglong)uVar10 >> 0x20) & uVar19,
                                                         (uint)uVar10 & uVar18))));
        }
        pcVar2 = (char *)*plVar7;
        if (((*pcVar2 == 'r') && (pcVar2[1] == 'y')) && (pcVar2[2] == '\0')) {
          uVar10 = FUN_180422f50(param_1,*plVar8,auVar17._0_8_,*(undefined4 *)(param_1 + 0x9c44));
          auVar12 = ZEXT1664(CONCAT412(extraout_var_04._4_4_ & uVar21,
                                       CONCAT48(extraout_var_04._0_4_ & uVar20,
                                                CONCAT44((uint)((ulonglong)uVar10 >> 0x20) & uVar19,
                                                         (uint)uVar10 & uVar18))));
        }
      }
      auVar13 = auVar14._0_16_;
      auVar11 = auVar12._0_16_;
      auVar16 = auVar17._0_16_;
      lVar9 = lVar9 + 0x10;
      plVar8 = plVar8 + 2;
      lVar5 = *(longlong *)(lVar9 + (longlong)param_2);
      plVar7 = (longlong *)(lVar9 + (longlong)param_2);
    } while (lVar5 != 0);
    if (auVar14._0_4_ < auVar17._0_4_) {
      auVar3 = vcmpss_avx(auVar16,auVar11,1);
      auVar13 = vblendvps_avx(auVar13,auVar11,auVar3);
    }
    if (auVar12._0_4_ < auVar17._0_4_) {
      auVar3 = vcmpss_avx(auVar16,auVar13,1);
      auVar11 = vblendvps_avx(auVar11,auVar13,auVar3);
    }
  }
  auVar13 = vmaxss_avx(auVar16,auVar13);
  auVar3 = vminss_avx(ZEXT416((uint)(auVar22._0_4_ * 0.5)),auVar13);
  auVar14 = ZEXT1664(auVar3);
  auVar13 = vmaxss_avx(auVar16,auVar11);
  auVar13 = vminss_avx(ZEXT416((uint)(auVar24._0_4_ * 0.5)),auVar13);
  auVar12 = ZEXT1664(auVar13);
  if ((auVar22._0_4_ != auVar16._0_4_) && (auVar24._0_4_ != auVar16._0_4_)) {
    piVar1 = (int *)(param_1 + 0x9c10);
    *piVar1 = 0;
    if ((auVar3._0_4_ < 1e-05) || (auVar13._0_4_ < 0.0001)) {
      FUN_1804218b0(param_1,auVar27._0_8_,auVar28._0_8_);
      fVar23 = auVar22._0_4_ + auVar27._0_4_;
      auVar22 = ZEXT464((uint)fVar23);
      FUN_180421970(param_1,fVar23,auVar28._0_8_);
      fVar23 = auVar24._0_4_ + auVar28._0_4_;
      auVar28 = ZEXT464((uint)fVar23);
      FUN_180421970(param_1,auVar22._0_8_,fVar23);
      FUN_180421970(param_1,auVar27._0_8_,auVar28._0_8_);
    }
    else {
      fVar23 = auVar3._0_4_ + auVar27._0_4_;
      auVar17 = ZEXT464((uint)fVar23);
      FUN_1804218b0(param_1,fVar23,auVar28._0_8_);
      fVar23 = auVar22._0_4_ + auVar27._0_4_;
      auVar22 = ZEXT464((uint)fVar23);
      fVar23 = fVar23 - auVar14._0_4_;
      auVar26 = ZEXT464((uint)fVar23);
      FUN_180421970(param_1,fVar23,auVar28._0_8_);
      fVar23 = auVar24._0_4_;
      fVar15 = 0.44771522;
      if (0 < *piVar1) {
        FUN_1804218b0(param_1,auVar22._0_4_ - auVar14._0_4_ * 0.44771522,auVar28._0_8_);
        FUN_1804218b0(param_1,auVar22._0_8_,auVar12._0_4_ * fVar15 + auVar28._0_4_);
        FUN_1804218b0(param_1,auVar22._0_8_,auVar12._0_4_ + auVar28._0_4_);
        fVar23 = auVar24._0_4_;
      }
      fVar23 = fVar23 + auVar28._0_4_;
      auVar24 = ZEXT464((uint)fVar23);
      fVar23 = fVar23 - auVar12._0_4_;
      auVar25 = ZEXT464((uint)fVar23);
      FUN_180421970(param_1,auVar22._0_8_,fVar23);
      uVar10 = auVar17._0_8_;
      if (0 < *piVar1) {
        FUN_1804218b0(param_1,auVar22._0_8_,auVar24._0_4_ - auVar12._0_4_ * fVar15);
        FUN_1804218b0(param_1,auVar22._0_4_ - auVar14._0_4_ * fVar15,auVar24._0_8_);
        FUN_1804218b0(param_1,auVar26._0_8_,auVar24._0_8_);
        uVar10 = auVar17._0_8_;
      }
      FUN_180421970(param_1,uVar10,auVar24._0_8_);
      if (0 < *(int *)(param_1 + 0x9c10)) {
        FUN_1804218b0(param_1,auVar14._0_4_ * fVar15 + auVar27._0_4_,auVar24._0_8_);
        FUN_1804218b0(param_1,auVar27._0_8_,auVar24._0_4_ - auVar12._0_4_ * fVar15);
        FUN_1804218b0(param_1,auVar27._0_8_,auVar25._0_8_);
      }
      FUN_180421970(param_1,auVar27._0_8_,auVar12._0_4_ + auVar28._0_4_);
      if (0 < *(int *)(param_1 + 0x9c10)) {
        FUN_1804218b0(param_1,auVar27._0_8_,auVar12._0_4_ * fVar15 + auVar28._0_4_);
        FUN_1804218b0(param_1,auVar14._0_4_ * fVar15 + auVar27._0_4_,auVar28._0_8_);
        FUN_1804218b0(param_1,auVar14._0_4_ + auVar27._0_4_,auVar28._0_8_);
      }
    }
    FUN_1804225d0(param_1,1);
    FUN_180422270(param_1);
  }
  return;
}



