// FUN_18035f1e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18035f1e0 */

ulonglong * FUN_18035f1e0(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  float fVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  ulonglong *puVar8;
  longlong lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [64];
  
  if (param_1 == param_2) {
    return param_2;
  }
  puVar1 = (ulonglong *)((longlong)param_1 + 0xc);
  if (puVar1 != param_2) {
    lVar9 = 0xc;
    puVar8 = puVar1;
    do {
      uVar3 = *puVar8;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar3;
      auVar11 = ZEXT1664(auVar10);
      uVar6 = puVar8[1];
      auVar10 = vshufps_avx(auVar10,auVar10,0x55);
      if (*(float *)((longlong)param_1 + 4) <= auVar10._0_4_) {
        fVar2 = *(float *)((longlong)param_1 + lVar9 + -8);
        puVar7 = (ulonglong *)((longlong)param_1 + lVar9 + -0xc);
        puVar5 = puVar8;
        while (puVar4 = puVar7, auVar10._0_4_ < fVar2) {
          *puVar5 = *puVar4;
          *(int *)(puVar5 + 1) = (int)puVar4[1];
          puVar7 = (ulonglong *)((longlong)puVar4 + -0xc);
          puVar5 = puVar4;
          fVar2 = *(float *)(puVar4 + -1);
        }
        *puVar5 = uVar3;
        *(int *)(puVar5 + 1) = (int)uVar6;
      }
      else {
        FUN_18063aed0(puVar1,param_1,lVar9);
        *param_1 = auVar11._0_8_;
        *(int *)(param_1 + 1) = (int)uVar6;
      }
      puVar8 = (ulonglong *)((longlong)puVar8 + 0xc);
      lVar9 = lVar9 + 0xc;
    } while (puVar8 != param_2);
  }
  return param_2;
}



