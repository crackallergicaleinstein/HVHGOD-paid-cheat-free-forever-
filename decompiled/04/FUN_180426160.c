// FUN_180426160 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180426160 */

void FUN_180426160(longlong param_1,longlong *param_2)

{
  int *piVar1;
  char *pcVar2;
  float fVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  undefined1 auVar10 [64];
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [64];
  undefined1 auVar16 [64];
  
  lVar5 = *param_2;
  auVar16 = ZEXT864(0);
  auVar10 = ZEXT864(0);
  auVar15 = ZEXT864(0);
  fVar14 = 0.0;
  fVar13 = 0.0;
  if (lVar5 != 0) {
    plVar6 = param_2 + 1;
    lVar8 = 0;
    uVar11 = 0x7fffffff;
    plVar7 = param_2;
    do {
      iVar4 = FUN_180423a20(param_1,lVar5,*plVar6);
      if (iVar4 == 0) {
        pcVar2 = (char *)*plVar7;
        if (((*pcVar2 == 'c') && (pcVar2[1] == 'x')) && (pcVar2[2] == '\0')) {
          auVar15._0_8_ =
               FUN_180422f50(param_1,*plVar6,*(undefined4 *)(param_1 + 0x9c38),
                             *(undefined4 *)(param_1 + 40000));
          auVar15._8_56_ = extraout_var;
          auVar15 = ZEXT1664(auVar15._0_16_);
        }
        pcVar2 = (char *)*plVar7;
        if (((*pcVar2 == 'c') && (pcVar2[1] == 'y')) && (pcVar2[2] == '\0')) {
          auVar16._0_8_ =
               FUN_180422f50(param_1,*plVar6,*(undefined4 *)(param_1 + 0x9c3c),
                             *(undefined4 *)(param_1 + 0x9c44));
          auVar16._8_56_ = extraout_var_00;
          auVar16 = ZEXT1664(auVar16._0_16_);
        }
        pcVar2 = (char *)*plVar7;
        if (((*pcVar2 == 'r') && (pcVar2[1] == 'x')) && (pcVar2[2] == '\0')) {
          uVar9 = FUN_180422f50(param_1,*plVar6,auVar10._0_8_,*(undefined4 *)(param_1 + 40000));
          fVar14 = (float)(uVar9 & uVar11);
        }
        pcVar2 = (char *)*plVar7;
        if (((*pcVar2 == 'r') && (pcVar2[1] == 'y')) && (pcVar2[2] == '\0')) {
          uVar9 = FUN_180422f50(param_1,*plVar6,auVar10._0_8_,*(undefined4 *)(param_1 + 0x9c44));
          fVar13 = (float)(uVar9 & uVar11);
        }
      }
      lVar8 = lVar8 + 0x10;
      plVar6 = plVar6 + 2;
      lVar5 = *(longlong *)(lVar8 + (longlong)param_2);
      plVar7 = (longlong *)(lVar8 + (longlong)param_2);
    } while (lVar5 != 0);
    if ((auVar10._0_4_ < fVar14) && (auVar10._0_4_ < fVar13)) {
      fVar12 = fVar14 + auVar15._0_4_;
      auVar10 = ZEXT464((uint)fVar12);
      piVar1 = (int *)(param_1 + 0x9c10);
      *piVar1 = 0;
      FUN_1804218b0(param_1,fVar12,auVar16._0_8_);
      fVar12 = 0.5522848;
      if (0 < *piVar1) {
        FUN_1804218b0(param_1,auVar10._0_8_,fVar13 * 0.5522848 + auVar16._0_4_);
        fVar3 = fVar13 + auVar16._0_4_;
        auVar10 = ZEXT464((uint)fVar3);
        FUN_1804218b0(param_1,fVar14 * fVar12 + auVar15._0_4_,fVar3);
        FUN_1804218b0(param_1,auVar15._0_8_,auVar10._0_8_);
      }
      if (0 < *piVar1) {
        FUN_1804218b0(param_1,auVar15._0_4_ - fVar14 * fVar12,fVar13 + auVar16._0_4_);
        fVar3 = auVar15._0_4_ - fVar14;
        auVar10 = ZEXT464((uint)fVar3);
        FUN_1804218b0(param_1,fVar3,fVar13 * fVar12 + auVar16._0_4_);
        FUN_1804218b0(param_1,auVar10._0_8_,auVar16._0_8_);
      }
      if (0 < *piVar1) {
        FUN_1804218b0(param_1,auVar15._0_4_ - fVar14,auVar16._0_4_ - fVar13 * fVar12);
        fVar3 = auVar16._0_4_ - fVar13;
        auVar10 = ZEXT464((uint)fVar3);
        FUN_1804218b0(param_1,auVar15._0_4_ - fVar14 * fVar12,fVar3);
        FUN_1804218b0(param_1,auVar15._0_8_,auVar10._0_8_);
      }
      if (0 < *(int *)(param_1 + 0x9c10)) {
        FUN_1804218b0(param_1,fVar14 * fVar12 + auVar15._0_4_,auVar16._0_4_ - fVar13);
        FUN_1804218b0(param_1,fVar14 + auVar15._0_4_,auVar16._0_4_ - fVar13 * fVar12);
        FUN_1804218b0(param_1,fVar14 + auVar15._0_4_,auVar16._0_8_);
      }
      FUN_1804225d0(param_1,1);
      FUN_180422270(param_1);
    }
  }
  return;
}



