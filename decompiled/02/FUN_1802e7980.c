// FUN_1802e7980 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802e7980 */

longlong FUN_1802e7980(longlong *param_1,float *param_2)

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
  short sVar10;
  ULONGLONG UVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined1 auVar15 [64];
  float fVar16;
  undefined1 auVar17 [64];
  
  puVar1 = (undefined8 *)param_1[1];
  puVar14 = (undefined8 *)*param_1;
  fVar16 = 0.001;
  lVar13 = ((longlong)puVar1 - (longlong)puVar14) / 6 +
           ((longlong)puVar1 - (longlong)puVar14 >> 0x3f);
  auVar17 = ZEXT864(0);
  if (puVar14 != puVar1) {
    do {
      UVar11 = GetTickCount64();
      uVar2 = puVar14[4];
      if (uVar2 == 0) {
        auVar4 = vmaxss_avx(ZEXT416((uint)(*param_2 - *(float *)(puVar14 + 3))),auVar17._0_16_);
        auVar15 = ZEXT1664(auVar4);
      }
      else {
        uVar12 = UVar11 - uVar2;
        if (UVar11 < uVar2) {
          uVar12 = 0;
        }
        if ((longlong)uVar12 < 0) {
          auVar15 = ZEXT464((uint)((float)uVar12 * fVar16));
        }
        else {
          auVar15 = ZEXT464((uint)((float)(longlong)uVar12 * fVar16));
        }
      }
      sVar10 = thunk_FUN_180624430(auVar15._0_8_);
    } while (((sVar10 < 1) && (auVar15._0_4_ <= *(float *)((longlong)puVar14 + 0x1c))) &&
            (puVar14 = puVar14 + 6, puVar14 != puVar1));
    puVar9 = puVar14;
    if (puVar14 != puVar1) {
      while (puVar8 = puVar9, puVar9 = puVar8 + 6, puVar9 != puVar1) {
        auVar17 = ZEXT1664(auVar17._0_16_);
        UVar11 = GetTickCount64();
        uVar2 = puVar9[4];
        if (uVar2 == 0) {
          auVar4 = vmaxss_avx(ZEXT416((uint)(*param_2 - *(float *)(puVar9 + 3))),auVar17._0_16_);
          auVar15 = ZEXT1664(auVar4);
        }
        else {
          uVar12 = UVar11 - uVar2;
          if (UVar11 < uVar2) {
            uVar12 = 0;
          }
          if ((longlong)uVar12 < 0) {
            auVar15 = ZEXT464((uint)((float)uVar12 * fVar16));
          }
          else {
            auVar15 = ZEXT464((uint)((float)(longlong)uVar12 * fVar16));
          }
        }
        sVar10 = thunk_FUN_180624430(auVar15._0_8_);
        if ((sVar10 < 1) && (auVar15._0_4_ <= *(float *)((longlong)puVar8 + 0x4c))) {
          uVar5 = puVar9[1];
          uVar6 = puVar9[2];
          uVar7 = puVar9[3];
          *puVar14 = *puVar9;
          puVar14[1] = uVar5;
          puVar14[2] = uVar6;
          puVar14[3] = uVar7;
          *(undefined1 (*) [16])(puVar14 + 4) = *(undefined1 (*) [16])(puVar9 + 4);
          puVar14 = puVar14 + 6;
        }
      }
    }
  }
  if (puVar14 != puVar1) {
    lVar3 = param_1[1];
    FUN_18063aed0(puVar14,puVar1,lVar3 - (longlong)puVar1);
    param_1[1] = (lVar3 - (longlong)puVar1) + (longlong)puVar14;
  }
  return ((lVar13 >> 3) - (lVar13 >> 0x3f)) - (param_1[1] - *param_1) / 0x30;
}



