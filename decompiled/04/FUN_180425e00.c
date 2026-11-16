// FUN_180425e00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180425e00 */

void FUN_180425e00(longlong param_1,longlong *param_2)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  float fVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  undefined1 extraout_var_01 [56];
  undefined1 auVar11 [16];
  float fVar12;
  undefined1 auVar13 [64];
  undefined1 auVar14 [64];
  float fVar15;
  undefined1 auVar16 [64];
  float fVar17;
  undefined1 auVar18 [64];
  undefined1 auVar19 [64];
  uint uVar20;
  
  lVar4 = *param_2;
  auVar19 = ZEXT864(0);
  auVar14 = ZEXT864(0);
  auVar18 = ZEXT864(0);
  fVar8 = 0.0;
  if (lVar4 != 0) {
    plVar5 = param_2 + 1;
    lVar7 = 0;
    auVar16 = ZEXT464(0x40000000);
    uVar20 = 0x7fffffff;
    plVar6 = param_2;
    do {
      iVar3 = FUN_180423a20(param_1,lVar4,*plVar5);
      if (iVar3 == 0) {
        pcVar2 = (char *)*plVar6;
        if (((*pcVar2 == 'c') && (pcVar2[1] == 'x')) && (pcVar2[2] == '\0')) {
          auVar18._0_8_ =
               FUN_180422f50(param_1,*plVar5,*(undefined4 *)(param_1 + 0x9c38),
                             *(undefined4 *)(param_1 + 40000));
          auVar18._8_56_ = extraout_var;
          auVar18 = ZEXT1664(auVar18._0_16_);
        }
        pcVar2 = (char *)*plVar6;
        if (((*pcVar2 == 'c') && (pcVar2[1] == 'y')) && (pcVar2[2] == '\0')) {
          auVar19._0_8_ =
               FUN_180422f50(param_1,*plVar5,*(undefined4 *)(param_1 + 0x9c3c),
                             *(undefined4 *)(param_1 + 0x9c44));
          auVar19._8_56_ = extraout_var_00;
          auVar19 = ZEXT1664(auVar19._0_16_);
        }
        if ((*(char *)*plVar6 == 'r') && (((char *)*plVar6)[1] == '\0')) {
          fVar8 = *(float *)(param_1 + 0x9c44) * *(float *)(param_1 + 0x9c44) +
                  *(float *)(param_1 + 40000) * *(float *)(param_1 + 40000);
          if (fVar8 < 0.0) {
            auVar13._0_8_ = FUN_18061e150(fVar8);
            auVar13._8_56_ = extraout_var_01;
            auVar10 = auVar13._0_16_;
          }
          else {
            auVar10 = ZEXT416((uint)SQRT(fVar8));
          }
          auVar13 = ZEXT1664(auVar10);
          if (auVar16._0_4_ < 0.0) {
            fVar8 = (float)FUN_18061e150(auVar16._0_8_);
            auVar10 = auVar13._0_16_;
          }
          else {
            fVar8 = SQRT(auVar16._0_4_);
          }
          auVar11._0_4_ = auVar10._0_4_ / fVar8;
          auVar11._4_12_ = auVar10._4_12_;
          uVar9 = FUN_180422f50(param_1,*plVar5,auVar14._0_8_,auVar11._0_8_);
          fVar8 = (float)(uVar9 & uVar20);
        }
      }
      lVar7 = lVar7 + 0x10;
      plVar5 = plVar5 + 2;
      lVar4 = *(longlong *)(lVar7 + (longlong)param_2);
      plVar6 = (longlong *)(lVar7 + (longlong)param_2);
    } while (lVar4 != 0);
    if (auVar14._0_4_ < fVar8) {
      fVar17 = fVar8 + auVar18._0_4_;
      auVar14 = ZEXT464((uint)fVar17);
      piVar1 = (int *)(param_1 + 0x9c10);
      *piVar1 = 0;
      FUN_1804218b0(param_1,fVar17,auVar19._0_8_);
      fVar17 = 0.5522848;
      if (0 < *piVar1) {
        fVar15 = fVar8 * 0.5522848;
        FUN_1804218b0(param_1,auVar14._0_8_,fVar15 + auVar19._0_4_);
        fVar12 = fVar8 + auVar19._0_4_;
        auVar14 = ZEXT464((uint)fVar12);
        FUN_1804218b0(param_1,fVar15 + auVar18._0_4_,fVar12);
        FUN_1804218b0(param_1,auVar18._0_8_,auVar14._0_8_);
      }
      if (0 < *piVar1) {
        fVar12 = fVar8 * fVar17;
        FUN_1804218b0(param_1,auVar18._0_4_ - fVar12,fVar8 + auVar19._0_4_);
        fVar15 = auVar18._0_4_ - fVar8;
        auVar14 = ZEXT464((uint)fVar15);
        FUN_1804218b0(param_1,fVar15,fVar12 + auVar19._0_4_);
        FUN_1804218b0(param_1,auVar14._0_8_,auVar19._0_8_);
      }
      if (0 < *piVar1) {
        fVar12 = fVar8 * fVar17;
        FUN_1804218b0(param_1,auVar18._0_4_ - fVar8,auVar19._0_4_ - fVar12);
        fVar15 = auVar19._0_4_ - fVar8;
        auVar14 = ZEXT464((uint)fVar15);
        FUN_1804218b0(param_1,auVar18._0_4_ - fVar12,fVar15);
        FUN_1804218b0(param_1,auVar18._0_8_,auVar14._0_8_);
      }
      if (0 < *(int *)(param_1 + 0x9c10)) {
        fVar17 = fVar8 * fVar17;
        FUN_1804218b0(param_1,fVar17 + auVar18._0_4_,auVar19._0_4_ - fVar8);
        FUN_1804218b0(param_1,fVar8 + auVar18._0_4_,auVar19._0_4_ - fVar17);
        FUN_1804218b0(param_1,fVar8 + auVar18._0_4_,auVar19._0_8_);
      }
      FUN_1804225d0(param_1,1);
      FUN_180422270(param_1);
    }
  }
  return;
}



