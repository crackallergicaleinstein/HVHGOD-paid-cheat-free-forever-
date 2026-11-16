// FUN_1805001f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805001f0 */

void FUN_1805001f0(longlong param_1,longlong param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  longlong lVar5;
  int iVar6;
  float fVar7;
  undefined1 auVar8 [16];
  float fVar9;
  undefined1 auVar10 [16];
  float fVar11;
  
  lVar5 = DAT_180bb8ae8;
  fVar1 = *(float *)(DAT_180bb8ae8 + 0x110);
  auVar3 = ZEXT816(0);
  if (fVar1 <= param_3[2]) {
    if (*param_3 <= fVar1) {
      auVar8 = ZEXT816(0);
    }
    else {
      auVar8 = ZEXT416((uint)(fVar1 - *param_3));
    }
  }
  else {
    auVar8 = ZEXT416((uint)(fVar1 - param_3[2]));
  }
  fVar1 = *(float *)(param_2 + 0x98);
  fVar11 = -1.0;
  fVar7 = auVar8._0_4_;
  auVar10 = SUB6416(ZEXT464(0x3f800000),0);
  if (((fVar7 != 0.0) && ((0.0 <= fVar7 || (0.0 <= fVar1)))) &&
     ((fVar7 <= 0.0 || (fVar1 < *(float *)(param_2 + 0xa0))))) {
    fVar2 = *(float *)(DAT_180bb8ae8 + 0x11e0);
    fVar9 = (ABS(fVar7) - fVar2) / (fVar2 * 5.0 - fVar2);
    if (0.0 <= fVar9) {
      auVar4 = vminss_avx(auVar10,ZEXT416((uint)fVar9));
      fVar9 = auVar4._0_4_;
    }
    else {
      fVar9 = 0.0;
    }
    if (0.0 <= fVar7) {
      auVar8 = vcmpss_avx(auVar3,auVar8,1);
      auVar8 = vblendvps_avx(auVar3,auVar10,auVar8);
      fVar7 = auVar8._0_4_;
    }
    else {
      fVar7 = -1.0;
    }
    fVar7 = (fVar9 * 3.0 + 1.0) * fVar2 * 35.0 * fVar7 * *(float *)(DAT_180bb8ae8 + 0x40) +
            *(float *)(param_1 + 0x20);
    *(float *)(param_1 + 0x20) = fVar7;
    iVar6 = (int)fVar7;
    if ((fVar7 < 0.0) && ((float)iVar6 != fVar7)) {
      iVar6 = iVar6 + -1;
    }
    fVar7 = (float)iVar6;
    if (fVar7 != 0.0) {
      *(float *)(param_2 + 0xa8) = fVar7 + fVar1;
      *(undefined4 *)(param_2 + 0xb0) = 0;
      *(undefined4 *)(param_2 + 0xb8) = 0;
      *(float *)(param_1 + 0x20) = *(float *)(param_1 + 0x20) - fVar7;
    }
  }
  fVar1 = *(float *)(lVar5 + 0x114);
  if (fVar1 <= param_3[3]) {
    if (param_3[1] <= fVar1) {
      auVar8 = ZEXT816(0);
    }
    else {
      auVar8 = ZEXT416((uint)(fVar1 - param_3[1]));
    }
  }
  else {
    auVar8 = ZEXT416((uint)(fVar1 - param_3[3]));
  }
  fVar7 = auVar8._0_4_;
  fVar1 = *(float *)(param_2 + 0x9c);
  if (((fVar7 != 0.0) && ((0.0 <= fVar7 || (0.0 <= fVar1)))) &&
     ((fVar7 <= 0.0 || (fVar1 < *(float *)(param_2 + 0xa4))))) {
    fVar2 = *(float *)(lVar5 + 0x11e0);
    fVar9 = (ABS(fVar7) - fVar2) / (fVar2 * 5.0 - fVar2);
    if (0.0 <= fVar9) {
      auVar4 = vminss_avx(auVar10,ZEXT416((uint)fVar9));
      fVar9 = auVar4._0_4_;
    }
    else {
      fVar9 = 0.0;
    }
    if (0.0 <= fVar7) {
      auVar8 = vcmpss_avx(auVar3,auVar8,1);
      auVar3 = vblendvps_avx(auVar3,auVar10,auVar8);
      fVar11 = auVar3._0_4_;
    }
    fVar7 = (fVar9 * 3.0 + 1.0) * fVar2 * 35.0 * fVar11 * *(float *)(lVar5 + 0x40) +
            *(float *)(param_1 + 0x24);
    *(float *)(param_1 + 0x24) = fVar7;
    iVar6 = (int)fVar7;
    if ((fVar7 < 0.0) && ((float)iVar6 != fVar7)) {
      iVar6 = iVar6 + -1;
    }
    fVar7 = (float)iVar6;
    if (fVar7 != 0.0) {
      *(float *)(param_2 + 0xac) = fVar7 + fVar1;
      *(undefined4 *)(param_2 + 0xb4) = 0;
      *(undefined4 *)(param_2 + 0xbc) = 0;
      *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) - fVar7;
    }
  }
  return;
}



