// FUN_1804a27c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804a27c0 */

void FUN_1804a27c0(longlong param_1,int param_2,int param_3,float param_4,float param_5,
                  float param_6,float param_7)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  
  lVar8 = (longlong)param_2;
  lVar10 = (longlong)param_3;
  if (lVar8 < lVar10) {
    plVar1 = (longlong *)(param_1 + 0x28);
    fVar14 = 0.0;
    auVar15 = SUB6416(ZEXT464(0x3f800000),0);
    if (3 < lVar10 - lVar8) {
      lVar7 = lVar8 * 0x14;
      lVar9 = ((lVar10 - lVar8) - 4U >> 2) + 1;
      auVar4 = vmaxss_avx(ZEXT416((uint)(param_5 - param_4)),auVar15);
      fVar6 = param_7 - param_6;
      lVar8 = lVar8 + lVar9 * 4;
      do {
        lVar3 = *plVar1;
        fVar12 = auVar4._0_4_;
        fVar11 = (*(float *)(lVar7 + 4 + lVar3) - param_4) / fVar12;
        fVar13 = fVar14;
        if (0.0 <= fVar11) {
          auVar5 = vminss_avx(auVar15,ZEXT416((uint)fVar11));
          fVar13 = auVar5._0_4_;
        }
        uVar2 = *(uint *)(lVar7 + 0x10 + lVar3);
        *(uint *)(lVar7 + 0x10 + lVar3) =
             (int)(longlong)
                  ((((fVar6 * fVar13 + param_6) * (float)(uVar2 >> 0x18)) / 255.0) * 255.0 + 0.5) <<
             0x18 | uVar2 & 0xffffff;
        lVar3 = *plVar1;
        fVar11 = (*(float *)(lVar7 + 0x18 + lVar3) - param_4) / fVar12;
        fVar13 = fVar14;
        if (0.0 <= fVar11) {
          auVar5 = vminss_avx(auVar15,ZEXT416((uint)fVar11));
          fVar13 = auVar5._0_4_;
        }
        uVar2 = *(uint *)(lVar7 + 0x24 + lVar3);
        *(uint *)(lVar7 + 0x24 + lVar3) =
             (int)(longlong)
                  ((((fVar6 * fVar13 + param_6) * (float)(uVar2 >> 0x18)) / 255.0) * 255.0 + 0.5) <<
             0x18 | uVar2 & 0xffffff;
        lVar3 = *plVar1;
        fVar11 = (*(float *)(lVar3 + 0x2c + lVar7) - param_4) / fVar12;
        fVar13 = fVar14;
        if (0.0 <= fVar11) {
          auVar5 = vminss_avx(auVar15,ZEXT416((uint)fVar11));
          fVar13 = auVar5._0_4_;
        }
        uVar2 = *(uint *)(lVar3 + 0x38 + lVar7);
        *(uint *)(lVar3 + 0x38 + lVar7) =
             (int)(longlong)
                  ((((fVar6 * fVar13 + param_6) * (float)(uVar2 >> 0x18)) / 255.0) * 255.0 + 0.5) <<
             0x18 | uVar2 & 0xffffff;
        lVar3 = *plVar1;
        fVar12 = (*(float *)(lVar3 + 0x40 + lVar7) - param_4) / fVar12;
        fVar13 = fVar14;
        if (0.0 <= fVar12) {
          auVar5 = vminss_avx(auVar15,ZEXT416((uint)fVar12));
          fVar13 = auVar5._0_4_;
        }
        uVar2 = *(uint *)(lVar3 + 0x4c + lVar7);
        *(uint *)(lVar3 + 0x4c + lVar7) =
             (int)(longlong)
                  ((((fVar6 * fVar13 + param_6) * (float)(uVar2 >> 0x18)) / 255.0) * 255.0 + 0.5) <<
             0x18 | uVar2 & 0xffffff;
        lVar7 = lVar7 + 0x50;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
      if (lVar10 <= lVar8) {
        return;
      }
    }
    lVar7 = lVar8 * 0x14;
    lVar10 = lVar10 - lVar8;
    auVar4 = vmaxss_avx(ZEXT416((uint)(param_5 - param_4)),auVar15);
    do {
      lVar8 = *plVar1;
      fVar13 = (*(float *)(lVar7 + 4 + lVar8) - param_4) / auVar4._0_4_;
      fVar6 = fVar14;
      if (0.0 <= fVar13) {
        auVar5 = vminss_avx(auVar15,ZEXT416((uint)fVar13));
        fVar6 = auVar5._0_4_;
      }
      uVar2 = *(uint *)(lVar7 + 0x10 + lVar8);
      *(uint *)(lVar7 + 0x10 + lVar8) =
           (int)(longlong)
                (((((param_7 - param_6) * fVar6 + param_6) * (float)(uVar2 >> 0x18)) / 255.0) *
                 255.0 + 0.5) << 0x18 | uVar2 & 0xffffff;
      lVar7 = lVar7 + 0x14;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return;
}



