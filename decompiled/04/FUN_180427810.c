// FUN_180427810 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180427810 */

void FUN_180427810(longlong param_1,uint *param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auVar8 [64];
  undefined1 auVar9 [64];
  undefined1 auVar10 [64];
  undefined1 auVar11 [64];
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x9c20) + 8);
  if (lVar1 == 0) {
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[0] = 0;
    param_2[1] = 0;
    return;
  }
  uVar6 = *(undefined8 *)(lVar1 + 0xa0);
  lVar7 = *(longlong *)(lVar1 + 0x148);
  *(undefined8 *)param_2 = *(undefined8 *)(lVar1 + 0x98);
  *(undefined8 *)(param_2 + 2) = uVar6;
  if (lVar7 != 0) {
    auVar8 = ZEXT464(param_2[3]);
    auVar9 = ZEXT464(param_2[2]);
    auVar10 = ZEXT464(param_2[1]);
    auVar11 = ZEXT464(*param_2);
    do {
      auVar4 = vminss_avx(auVar11._0_16_,ZEXT416(*(uint *)(lVar7 + 0x98)));
      auVar11 = ZEXT1664(auVar4);
      auVar5 = vminss_avx(auVar10._0_16_,ZEXT416(*(uint *)(lVar7 + 0x9c)));
      auVar10 = ZEXT1664(auVar5);
      auVar2 = vmaxss_avx(auVar9._0_16_,ZEXT416(*(uint *)(lVar7 + 0xa0)));
      auVar9 = ZEXT1664(auVar2);
      auVar3 = vmaxss_avx(auVar8._0_16_,ZEXT416(*(uint *)(lVar7 + 0xa4)));
      auVar8 = ZEXT1664(auVar3);
      lVar7 = *(longlong *)(lVar7 + 0x148);
    } while (lVar7 != 0);
    *param_2 = auVar4._0_4_;
    param_2[3] = auVar3._0_4_;
    param_2[2] = auVar2._0_4_;
    param_2[1] = auVar5._0_4_;
  }
  return;
}



