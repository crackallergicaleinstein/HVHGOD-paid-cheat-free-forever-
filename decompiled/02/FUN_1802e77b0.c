// FUN_1802e77b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802e77b0 */

longlong FUN_1802e77b0(longlong *param_1,undefined8 *param_2)

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
  longlong lVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  float fVar13;
  
  puVar1 = (undefined8 *)param_1[1];
  puVar12 = (undefined8 *)*param_1;
  lVar10 = (longlong)puVar1 - (longlong)puVar12;
  if (puVar12 != puVar1) {
    do {
      uVar2 = puVar12[3];
      if (uVar2 == 0) {
        auVar4 = vmaxss_avx(ZEXT416((uint)(*(float *)*param_2 - *(float *)((longlong)puVar12 + 0xc))
                                   ),ZEXT816(0));
        fVar13 = auVar4._0_4_;
      }
      else {
        uVar11 = *(ulonglong *)param_2[1] - uVar2;
        if (*(ulonglong *)param_2[1] < uVar2) {
          uVar11 = 0;
        }
        if ((longlong)uVar11 < 0) {
          fVar13 = (float)uVar11 * 0.001;
        }
        else {
          fVar13 = (float)(longlong)uVar11 * 0.001;
        }
      }
    } while ((fVar13 <= *(float *)(puVar12 + 2)) && (puVar12 = puVar12 + 5, puVar12 != puVar1));
    puVar9 = puVar12;
    if (puVar12 != puVar1) {
      while (puVar8 = puVar9 + 5, puVar8 != puVar1) {
        uVar2 = puVar8[3];
        if (uVar2 == 0) {
          auVar4 = vmaxss_avx(ZEXT416((uint)(*(float *)*param_2 -
                                            *(float *)((longlong)puVar9 + 0x34))),ZEXT816(0));
          fVar13 = auVar4._0_4_;
        }
        else {
          uVar11 = *(ulonglong *)param_2[1] - uVar2;
          if (*(ulonglong *)param_2[1] < uVar2) {
            uVar11 = 0;
          }
          if ((longlong)uVar11 < 0) {
            fVar13 = (float)uVar11 * 0.001;
          }
          else {
            fVar13 = (float)(longlong)uVar11 * 0.001;
          }
        }
        puVar9 = puVar8;
        if (fVar13 <= *(float *)(puVar8 + 2)) {
          uVar5 = puVar8[1];
          uVar6 = puVar8[2];
          uVar7 = puVar8[3];
          *puVar12 = *puVar8;
          puVar12[1] = uVar5;
          puVar12[2] = uVar6;
          puVar12[3] = uVar7;
          puVar12[4] = puVar8[4];
          puVar12 = puVar12 + 5;
        }
      }
      if (puVar12 != puVar1) {
        lVar3 = param_1[1];
        FUN_18063aed0(puVar12,puVar1,lVar3 - (longlong)puVar1);
        param_1[1] = (lVar3 - (longlong)puVar1) + (longlong)puVar12;
      }
    }
  }
  return lVar10 / 0x28 - (param_1[1] - *param_1) / 0x28;
}



