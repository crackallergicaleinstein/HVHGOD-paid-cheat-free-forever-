// FUN_1804c67b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804c67b0 */

ulonglong * FUN_1804c67b0(ulonglong *param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 in_ZMM2 [64];
  undefined1 in_XMM3 [16];
  float fVar7;
  undefined1 auVar8 [16];
  float fVar9;
  ulonglong local_res8;
  
  local_res8._0_4_ = (float)param_2;
  fVar4 = 0.0;
  fVar9 = 0.0;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = param_2;
  auVar8 = vshufps_avx(auVar8,auVar8,0x55);
  fVar7 = auVar8._0_4_;
  if (((float)local_res8 < 0.0) || (fVar7 < 0.0)) {
    lVar1 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
    if ((*(longlong *)(lVar1 + 0x1c8) != 0) ||
       (lVar3 = 0x280, *(longlong *)(DAT_180bb8ae8 + 0x2338) != 0)) {
      lVar3 = 0x250;
    }
    fVar4 = *(float *)(lVar3 + lVar1) - *(float *)(lVar1 + 0x118);
    fVar9 = *(float *)(lVar3 + 4 + lVar1) - *(float *)(lVar1 + 0x11c);
  }
  if ((float)local_res8 == 0.0) {
    auVar8 = vunpcklps_avx(in_ZMM2._0_16_,auVar8);
    uVar2 = auVar8._0_8_;
  }
  else {
    uVar2 = param_2;
    if ((float)local_res8 < 0.0) {
      auVar6 = vmaxss_avx(SUB6416(ZEXT464(0x40800000),0),ZEXT416((uint)(fVar4 + (float)local_res8)))
      ;
      auVar8 = vunpcklps_avx(auVar6,auVar8);
      uVar2 = auVar8._0_8_;
    }
  }
  local_res8 = uVar2;
  if (fVar7 == 0.0) {
    auVar5._8_8_ = 0;
    auVar5._0_8_ = local_res8;
    auVar8 = vinsertps_avx(auVar5,in_XMM3,0x10);
    *param_1 = auVar8._0_8_;
  }
  else if (0.0 <= fVar7) {
    *param_1 = local_res8;
  }
  else {
    auVar8 = vmaxss_avx(SUB6416(ZEXT464(0x40800000),0),ZEXT416((uint)(fVar9 + fVar7)));
    auVar6._8_8_ = 0;
    auVar6._0_8_ = local_res8;
    auVar8 = vinsertps_avx(auVar6,auVar8,0x10);
    *param_1 = auVar8._0_8_;
  }
  return param_1;
}



