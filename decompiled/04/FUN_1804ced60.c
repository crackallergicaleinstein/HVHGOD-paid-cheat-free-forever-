// FUN_1804ced60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804ced60 */

void FUN_1804ced60(void)

{
  int *piVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  short sVar7;
  int iVar8;
  int *piVar9;
  longlong *plVar10;
  longlong lVar11;
  float *pfVar12;
  longlong *plVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  undefined1 auVar18 [64];
  
  lVar11 = DAT_180bb8ae8;
  auVar18 = ZEXT864(0);
  lVar5 = **(longlong **)(DAT_180bb8ae8 + 0x2030);
  *(undefined8 *)(lVar5 + 4) = 5;
  *(undefined4 *)(lVar5 + 0xc) = 0;
  *(undefined8 *)(lVar5 + 0x10) = *(undefined8 *)(lVar11 + 0x30);
  *(undefined8 *)(lVar5 + 0x18) = *(undefined8 *)(lVar11 + 0x38);
  if ((*(char *)(lVar11 + 0x1f91) != '\0') || (*(float *)(lVar11 + 0x90) < 0.0)) {
    fVar17 = 3.4028235e+38;
  }
  else {
    auVar14._8_8_ = 0;
    auVar14._0_8_ = *(ulonglong *)(lVar11 + 0x10);
    auVar14 = vcvtpd2ps_avx(auVar14);
    fVar17 = auVar14._0_4_ - *(float *)(lVar11 + 0x90);
  }
  plVar13 = *(longlong **)(lVar11 + 0x2030);
  plVar2 = plVar13 + *(int *)(lVar11 + 0x2028);
  for (; plVar13 != plVar2; plVar13 = plVar13 + 1) {
    lVar5 = *plVar13;
    lVar11 = 2;
    uVar3 = *(ulonglong *)(lVar5 + 0xe0);
    auVar15._8_8_ = 0;
    auVar15._0_8_ = uVar3;
    uVar4 = *(ulonglong *)(lVar5 + 0xe8);
    auVar16._8_8_ = 0;
    auVar16._0_8_ = uVar4;
    *(float *)(lVar5 + 0x20) = (float)uVar3 + *(float *)(lVar5 + 8);
    auVar15 = vshufps_avx(auVar15,auVar15,0x55);
    *(float *)(lVar5 + 0x24) = auVar15._0_4_ + *(float *)(lVar5 + 0xc);
    auVar16 = vshufps_avx(auVar16,auVar16,0x55);
    auVar14 = vmaxss_avx(auVar18._0_16_,
                         ZEXT416((uint)((*(float *)(lVar5 + 0x10) - (float)uVar3) - (float)uVar4)));
    auVar15 = vmaxss_avx(auVar18._0_16_,
                         ZEXT416((uint)((*(float *)(lVar5 + 0x14) - auVar15._0_4_) - auVar16._0_4_))
                        );
    *(int *)(lVar5 + 0x28) = auVar14._0_4_;
    *(int *)(lVar5 + 0x2c) = auVar15._0_4_;
    *(undefined8 *)(lVar5 + 0xe8) = 0;
    plVar10 = (longlong *)(lVar5 + 0x40);
    *(undefined8 *)(lVar5 + 0xe0) = 0;
    pfVar12 = (float *)(lVar5 + 0x58);
    *(ulonglong *)(lVar5 + 0xd0) = uVar3;
    *(ulonglong *)(lVar5 + 0xd8) = uVar4;
    do {
      if ((*pfVar12 < fVar17) && (lVar5 = *plVar10, lVar5 != 0)) {
        FUN_1804d8c80(lVar5);
        lVar6 = DAT_180bb8ae8;
        if (DAT_180bb8ae8 != 0) {
          piVar1 = (int *)(DAT_180bb8ae8 + 4);
          piVar9 = (int *)(DAT_180bb8ae8 + 0x2998 + (longlong)*(short *)(DAT_180bb8ae8 + 0x2994) * 8
                          );
          if (*piVar9 != *piVar1) {
            iVar8 = *(short *)(DAT_180bb8ae8 + 0x2994) + 1;
            sVar7 = (short)iVar8 + (short)(iVar8 / 6) * -6;
            *(short *)(DAT_180bb8ae8 + 0x2994) = sVar7;
            piVar9 = (int *)(lVar6 + 0x2998 + (longlong)sVar7 * 8);
            *piVar9 = *piVar1;
            *(undefined4 *)(lVar6 + 0x299c + (longlong)sVar7 * 8) = 0;
          }
          *(short *)((longlong)piVar9 + 6) = *(short *)((longlong)piVar9 + 6) + 1;
          *(int *)(lVar6 + 0x2990) = *(int *)(lVar6 + 0x2990) + 1;
        }
        thunk_FUN_180621380(lVar5);
        *plVar10 = 0;
      }
      pfVar12 = pfVar12 + 1;
      plVar10 = plVar10 + 1;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  return;
}



