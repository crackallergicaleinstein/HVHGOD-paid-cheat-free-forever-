// FUN_1802e7bb0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802e7bb0 */

longlong FUN_1802e7bb0(longlong *param_1,float *param_2)

{
  float *pfVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auVar4 [16];
  longlong lVar5;
  ULONGLONG UVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  float fVar11;
  undefined1 auVar12 [64];
  float fVar13;
  undefined1 auVar14 [64];
  
  lVar10 = *param_1;
  lVar9 = param_1[1];
  lVar2 = (lVar9 - lVar10) + SUB168(SEXT816(-0x4de9bd37a6f4de9b) * SEXT816(lVar9 - lVar10),8);
  fVar13 = 0.001;
  auVar12 = ZEXT864(0);
  auVar14 = ZEXT464(0x3f800000);
  if (lVar10 != lVar9) {
    do {
      UVar6 = GetTickCount64();
      uVar3 = *(ulonglong *)(lVar10 + 0x70);
      if (uVar3 == 0) {
        auVar4 = vmaxss_avx(ZEXT416((uint)(*param_2 - *(float *)(lVar10 + 0x28))),auVar12._0_16_);
        fVar11 = auVar4._0_4_;
      }
      else {
        uVar7 = UVar6 - uVar3;
        if (UVar6 < uVar3) {
          uVar7 = 0;
        }
        if ((longlong)uVar7 < 0) {
          fVar11 = (float)uVar7 * fVar13;
        }
        else {
          fVar11 = (float)(longlong)uVar7 * fVar13;
        }
      }
      auVar4 = vpcmpeqd_avx(ZEXT416(*(uint *)(lVar10 + 0x30)),SUB6416(ZEXT464(3),0));
      auVar4 = vblendvps_avx(auVar12._0_16_,auVar14._0_16_,auVar4);
    } while ((fVar11 <= auVar4._0_4_ + *(float *)(lVar10 + 0x3c)) &&
            (lVar10 = lVar10 + 0xb8, lVar10 != lVar9));
    lVar8 = lVar10;
    if (lVar10 != lVar9) {
      while (lVar5 = lVar8 + 0xb8, lVar5 != lVar9) {
        UVar6 = GetTickCount64();
        uVar3 = *(ulonglong *)(lVar8 + 0x128);
        if (uVar3 == 0) {
          auVar4 = vmaxss_avx(ZEXT416((uint)(*param_2 - *(float *)(lVar8 + 0xe0))),auVar12._0_16_);
          fVar11 = auVar4._0_4_;
        }
        else {
          uVar7 = UVar6 - uVar3;
          if (UVar6 < uVar3) {
            uVar7 = 0;
          }
          if ((longlong)uVar7 < 0) {
            fVar11 = (float)uVar7 * fVar13;
          }
          else {
            fVar11 = (float)(longlong)uVar7 * fVar13;
          }
        }
        auVar4 = vpcmpeqd_avx(ZEXT416(*(uint *)(lVar8 + 0xe8)),SUB6416(ZEXT464(3),0));
        auVar4 = vblendvps_avx(auVar12._0_16_,auVar14._0_16_,auVar4);
        pfVar1 = (float *)(lVar8 + 0xf4);
        lVar8 = lVar5;
        if (fVar11 <= auVar4._0_4_ + *pfVar1) {
          FUN_1802e9e00(lVar10,lVar5);
          lVar10 = lVar10 + 0xb8;
        }
      }
      if (lVar10 != lVar9) {
        lVar8 = param_1[1];
        for (; lVar9 != lVar8; lVar9 = lVar9 + 0xb8) {
          FUN_1802e9e00(lVar10,lVar9);
          lVar10 = lVar10 + 0xb8;
        }
        lVar9 = param_1[1];
        for (lVar8 = lVar10; lVar8 != lVar9; lVar8 = lVar8 + 0xb8) {
          FUN_1801b36e0(lVar8 + 0x10);
        }
        param_1[1] = lVar10;
      }
    }
  }
  lVar10 = SUB168(SEXT816(-0x4de9bd37a6f4de9b) * SEXT816(param_1[1] - *param_1),8) +
           (param_1[1] - *param_1);
  return ((lVar2 >> 7) - (lVar2 >> 0x3f)) - ((lVar10 >> 7) - (lVar10 >> 0x3f));
}



