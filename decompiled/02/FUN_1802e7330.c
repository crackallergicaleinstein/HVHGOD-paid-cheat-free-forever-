// FUN_1802e7330 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802e7330 */

longlong FUN_1802e7330(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ULONGLONG UVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [64];
  
  puVar1 = (undefined8 *)param_1[1];
  puVar13 = (undefined8 *)*param_1;
  fVar15 = 0.001;
  lVar12 = ((longlong)puVar1 - (longlong)puVar13) / 6 +
           ((longlong)puVar1 - (longlong)puVar13 >> 0x3f);
  auVar16 = ZEXT864(0);
  if (puVar13 != puVar1) {
    while (*(char *)(*param_2 + 0x850) != '\0') {
      UVar10 = GetTickCount64();
      uVar2 = puVar13[4];
      if (uVar2 == 0) {
        auVar4 = vmaxss_avx(ZEXT416((uint)(*(float *)param_2[1] - *(float *)(puVar13 + 3))),
                            auVar16._0_16_);
        fVar14 = auVar4._0_4_;
      }
      else {
        uVar11 = UVar10 - uVar2;
        if (UVar10 < uVar2) {
          uVar11 = 0;
        }
        if ((longlong)uVar11 < 0) {
          fVar14 = (float)uVar11 * fVar15;
        }
        else {
          fVar14 = (float)(longlong)uVar11 * fVar15;
        }
      }
      if ((*(float *)((longlong)puVar13 + 0x1c) < fVar14) ||
         (puVar13 = puVar13 + 6, puVar13 == puVar1)) break;
    }
    puVar9 = puVar13;
    if (puVar13 != puVar1) {
      while (puVar8 = puVar9, puVar9 = puVar8 + 6, puVar9 != puVar1) {
        if (*(char *)(*param_2 + 0x850) != '\0') {
          auVar16 = ZEXT1664(auVar16._0_16_);
          UVar10 = GetTickCount64();
          uVar2 = puVar9[4];
          if (uVar2 == 0) {
            auVar4 = vmaxss_avx(ZEXT416((uint)(*(float *)param_2[1] - *(float *)(puVar9 + 3))),
                                auVar16._0_16_);
            fVar14 = auVar4._0_4_;
          }
          else {
            uVar11 = UVar10 - uVar2;
            if (UVar10 < uVar2) {
              uVar11 = 0;
            }
            if ((longlong)uVar11 < 0) {
              fVar14 = (float)uVar11 * fVar15;
            }
            else {
              fVar14 = (float)(longlong)uVar11 * fVar15;
            }
          }
          if (fVar14 <= *(float *)((longlong)puVar8 + 0x4c)) {
            uVar5 = puVar9[1];
            uVar6 = puVar9[2];
            uVar7 = puVar9[3];
            *puVar13 = *puVar9;
            puVar13[1] = uVar5;
            puVar13[2] = uVar6;
            puVar13[3] = uVar7;
            uVar5 = puVar9[5];
            puVar13[4] = puVar9[4];
            puVar13[5] = uVar5;
            puVar13 = puVar13 + 6;
          }
        }
      }
    }
  }
  if (puVar13 != puVar1) {
    lVar3 = param_1[1];
    FUN_18063aed0(puVar13,puVar1,lVar3 - (longlong)puVar1);
    param_1[1] = (lVar3 - (longlong)puVar1) + (longlong)puVar13;
  }
  return ((lVar12 >> 3) - (lVar12 >> 0x3f)) - (param_1[1] - *param_1) / 0x30;
}



