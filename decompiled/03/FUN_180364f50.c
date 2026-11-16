// FUN_180364f50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180364f50 */

undefined1 (*) [32] FUN_180364f50(undefined1 (*param_1) [32],undefined1 (*param_2) [32])

{
  undefined1 (*pauVar1) [32];
  float fVar2;
  undefined1 auVar3 [32];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 (*pauVar8) [32];
  undefined1 (*pauVar9) [32];
  undefined1 (*pauVar10) [32];
  undefined1 (*pauVar11) [32];
  longlong lVar12;
  undefined8 uVar13;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  if (param_1 == param_2) {
    return param_2;
  }
  pauVar1 = (undefined1 (*) [32])(param_1[1] + 8);
  if (pauVar1 != param_2) {
    lVar12 = 0x28;
    pauVar11 = pauVar1;
    do {
      auVar3 = *pauVar11;
      uVar13 = *(undefined8 *)pauVar11[1];
      auVar4 = vshufps_avx(auVar3._16_16_,auVar3._16_16_,0x55);
      if (*(float *)(*param_1 + 0x14) <= auVar4._0_4_) {
        fVar2 = *(float *)(param_1[-1] + lVar12 + 0xc);
        pauVar10 = (undefined1 (*) [32])(param_1[-2] + lVar12 + 0x18);
        pauVar9 = pauVar11;
        while (pauVar8 = pauVar10, auVar4._0_4_ < fVar2) {
          uVar5 = *(undefined8 *)(*pauVar8 + 8);
          uVar6 = *(undefined8 *)(*pauVar8 + 0x10);
          uVar7 = *(undefined8 *)(*pauVar8 + 0x18);
          *(undefined8 *)*pauVar9 = *(undefined8 *)*pauVar8;
          *(undefined8 *)(*pauVar9 + 8) = uVar5;
          *(undefined8 *)(*pauVar9 + 0x10) = uVar6;
          *(undefined8 *)(*pauVar9 + 0x18) = uVar7;
          *(undefined8 *)pauVar9[1] = *(undefined8 *)pauVar8[1];
          pauVar10 = (undefined1 (*) [32])(pauVar8[-2] + 0x18);
          pauVar9 = pauVar8;
          fVar2 = *(float *)(pauVar8[-1] + 0xc);
        }
        *pauVar9 = auVar3;
        *(undefined8 *)pauVar9[1] = uVar13;
      }
      else {
        FUN_18063aed0(pauVar1,param_1,lVar12);
        local_48 = auVar3._0_8_;
        uStack_40 = auVar3._8_8_;
        uStack_38 = auVar3._16_8_;
        uStack_30 = auVar3._24_8_;
        *(undefined8 *)*param_1 = local_48;
        *(undefined8 *)(*param_1 + 8) = uStack_40;
        *(undefined8 *)(*param_1 + 0x10) = uStack_38;
        *(undefined8 *)(*param_1 + 0x18) = uStack_30;
        *(undefined8 *)param_1[1] = uVar13;
      }
      pauVar11 = (undefined1 (*) [32])(pauVar11[1] + 8);
      lVar12 = lVar12 + 0x28;
    } while (pauVar11 != param_2);
  }
  return param_2;
}



