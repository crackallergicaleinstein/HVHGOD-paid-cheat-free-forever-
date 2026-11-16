// FUN_180334850 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180334850 */

undefined1 (*) [32] FUN_180334850(undefined1 (*param_1) [32],undefined1 (*param_2) [32])

{
  undefined1 auVar1 [32];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  short sVar5;
  short sVar6;
  undefined1 (*pauVar7) [32];
  undefined1 (*pauVar8) [32];
  undefined1 *puVar9;
  undefined1 auVar10 [64];
  undefined1 auVar11 [64];
  undefined1 auVar12 [64];
  undefined1 auVar13 [64];
  undefined8 uVar14;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  if (param_1 == param_2) {
    return param_2;
  }
  pauVar7 = (undefined1 (*) [32])(param_1[1] + 8);
  if (pauVar7 != param_2) {
    puVar9 = param_1[2] + 0x10;
    auVar12 = ZEXT464(0x3f800000);
    do {
      auVar1 = *pauVar7;
      uVar14 = *(undefined8 *)pauVar7[1];
      auVar2 = vshufps_avx(auVar1._16_16_,auVar1._16_16_,0x55);
      auVar12 = ZEXT1664(auVar12._0_16_);
      auVar13 = ZEXT1664(auVar2);
      sVar5 = thunk_FUN_180624430();
      auVar10 = ZEXT464(*(uint *)(*param_1 + 0x14));
      auVar2 = vpcmpgtd_avx(ZEXT416((uint)(int)sVar5),SUB6416(ZEXT464(0),0));
      auVar2 = vblendvps_avx(auVar13._0_16_,auVar12._0_16_,auVar2);
      auVar11 = ZEXT1664(auVar2);
      sVar6 = thunk_FUN_180624430(*(uint *)(*param_1 + 0x14));
      auVar2 = vpcmpgtd_avx(ZEXT416((uint)(int)sVar6),SUB6416(ZEXT464(0),0));
      auVar2 = vblendvps_avx(auVar10._0_16_,auVar12._0_16_,auVar2);
      local_98 = auVar1._0_8_;
      uStack_90 = auVar1._8_8_;
      uStack_88 = auVar1._16_8_;
      uStack_80 = auVar1._24_8_;
      if (auVar2._0_4_ <= auVar11._0_4_) {
        pauVar8 = pauVar7;
        while( true ) {
          auVar2 = vpcmpgtd_avx(ZEXT416((uint)(int)sVar5),SUB6416(ZEXT464(0),0));
          auVar2 = vblendvps_avx(auVar13._0_16_,auVar12._0_16_,auVar2);
          auVar10 = ZEXT464(*(uint *)(pauVar8[-1] + 0xc));
          auVar11 = ZEXT1664(auVar2);
          auVar12 = ZEXT1664(auVar12._0_16_);
          auVar13 = ZEXT1664(auVar13._0_16_);
          sVar6 = thunk_FUN_180624430();
          auVar2 = vpcmpgtd_avx(ZEXT416((uint)(int)sVar6),SUB6416(ZEXT464(0),0));
          auVar2 = vblendvps_avx(auVar10._0_16_,auVar12._0_16_,auVar2);
          if (auVar2._0_4_ <= auVar11._0_4_) break;
          uVar3 = *(undefined8 *)(pauVar8[-1] + 8);
          uVar4 = *(undefined8 *)(pauVar8[-1] + 0x10);
          *(undefined8 *)*pauVar8 = *(undefined8 *)*(undefined1 (*) [32])(pauVar8[-2] + 0x18);
          *(undefined8 *)(*pauVar8 + 8) = *(undefined8 *)pauVar8[-1];
          *(undefined8 *)(*pauVar8 + 0x10) = uVar3;
          *(undefined8 *)(*pauVar8 + 0x18) = uVar4;
          *(undefined8 *)pauVar8[1] = *(undefined8 *)(pauVar8[-1] + 0x18);
          pauVar8 = (undefined1 (*) [32])(pauVar8[-2] + 0x18);
        }
        *(undefined8 *)*pauVar8 = local_98;
        *(undefined8 *)(*pauVar8 + 8) = uStack_90;
        *(undefined8 *)(*pauVar8 + 0x10) = uStack_88;
        *(undefined8 *)(*pauVar8 + 0x18) = uStack_80;
        *(undefined8 *)pauVar8[1] = uVar14;
      }
      else {
        FUN_18063aed0((longlong)puVar9 - ((longlong)pauVar7 - (longlong)param_1),param_1);
        *(undefined8 *)*param_1 = local_98;
        *(undefined8 *)(*param_1 + 8) = uStack_90;
        *(undefined8 *)(*param_1 + 0x10) = uStack_88;
        *(undefined8 *)(*param_1 + 0x18) = uStack_80;
        *(undefined8 *)param_1[1] = uVar14;
      }
      pauVar7 = (undefined1 (*) [32])(pauVar7[1] + 8);
      puVar9 = puVar9 + 0x28;
    } while (pauVar7 != param_2);
  }
  return param_2;
}



