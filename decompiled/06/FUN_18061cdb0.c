// FUN_18061cdb0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18061cdb0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_18061cdb0(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 in_ZMM0 [64];
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  
  dVar4 = in_ZMM0._0_8_;
  auVar5 = in_ZMM0._0_16_;
  if (DAT_180bb2128 == 0) {
    dVar3 = ABS(dVar4);
    if ((ulonglong)dVar3 < 0x7ff0000000000000) {
      dVar11 = (double)(int)(((ulonglong)dVar4 >> 0x34) - 0x3ff);
      dVar7 = (double)((ulonglong)dVar4 & (ulonglong)DAT_1806afdb0);
      dVar6 = dVar4;
      if (dVar11 == -1023.0) {
        dVar7 = (double)((ulonglong)dVar7 | DAT_1806afe10) - 1.0;
        dVar6 = (double)((ulonglong)dVar7 & (ulonglong)DAT_1806afdb0);
        dVar11 = (double)(int)((uint)((ulonglong)dVar7 >> 0x34) - 0x7fd);
        dVar7 = dVar6;
      }
      uVar1 = ((ulonglong)dVar6 & 0xff00000000000) + ((ulonglong)dVar6 & 0x80000000000) * 2;
      if (ABS(dVar4 - 1.0) < 0.0625) {
        dVar4 = dVar4 - 1.0;
        dVar3 = dVar4 / (dVar4 + 2.0);
        dVar6 = dVar3 + dVar3;
        dVar7 = dVar6 * dVar6;
        dVar11 = dVar7 * dVar6;
        return dVar4 + (((dVar7 * 0.012500000003771751 + 0.08333333333333179) * dVar11 +
                        (dVar7 * 0.0004348877777076146 + 0.0022321399879194482) *
                        dVar11 * dVar11 * dVar6) - dVar4 * dVar3);
      }
      uVar2 = uVar1 >> 0x2c;
      if (0.0 < dVar4) {
        dVar3 = ((double)(uVar1 | (ulonglong)DAT_1806afe40) -
                (double)((ulonglong)dVar7 | (ulonglong)DAT_1806afe40)) *
                *(double *)(&DAT_1806b3410 + uVar2 * 8);
        dVar4 = dVar3 * dVar3;
        return *(double *)(&DAT_1806b23f0 + uVar2 * 8) + dVar11 * 0.6931471228599548 +
               *(double *)(&DAT_1806b2c00 + uVar2 * 8) +
               (dVar11 * 5.7699990475432854e-08 -
               ((dVar3 * 0.3333333333333333 + 0.5) * dVar4 + dVar3 +
               ((dVar3 * 0.16666666666666666 + 0.2) * dVar3 + 0.25) * dVar4 * dVar4));
      }
      if (dVar4 == 0.0) {
        dVar4 = (double)FUN_18062db30(dVar3,param_2,1);
        return dVar4;
      }
    }
    else {
      if (dVar4 == INFINITY) {
        return INFINITY;
      }
      if (dVar4 != -INFINITY) {
        return (double)((ulonglong)dVar4 | 0x8000000000000);
      }
    }
    dVar4 = (double)FUN_18062db30(dVar3,param_2,2);
                    /* WARNING: Read-only address (ram,0x0001806afd70) is written */
                    /* WARNING: Read-only address (ram,0x0001806afdb0) is written */
                    /* WARNING: Read-only address (ram,0x0001806afdc0) is written */
                    /* WARNING: Read-only address (ram,0x0001806afde0) is written */
                    /* WARNING: Read-only address (ram,0x0001806afdf0) is written */
                    /* WARNING: Read-only address (ram,0x0001806afe10) is written */
                    /* WARNING: Read-only address (ram,0x0001806afe40) is written */
                    /* WARNING: Read-only address (ram,0x0001806afed0) is written */
                    /* WARNING: Read-only address (ram,0x0001806afef0) is written */
    return dVar4;
  }
  auVar8 = vpsrlq_avx(auVar5,0x34);
  auVar8 = vpsubq_avx(auVar8,_DAT_1806afdc0);
  auVar8 = vcvtdq2pd_avx(auVar8);
  dVar3 = auVar8._0_8_;
  auVar8 = vpand_avx(auVar5,_DAT_1806afd70);
  if (auVar8._0_8_ == INFINITY) {
    if (dVar4 != INFINITY) {
      if (dVar4 == -INFINITY) goto LAB_18061d280;
      dVar4 = (double)FUN_18062db30(param_1,(ulonglong)dVar4 | 0x8000000000000,3);
    }
    return dVar4;
  }
  if (0.0 < dVar4) {
    auVar8 = vpand_avx(auVar5,_DAT_1806afdb0);
    if (dVar3 == -1023.0) {
      auVar5 = vpor_avx(auVar8,_DAT_1806afe10);
      auVar8._8_8_ = 0;
      auVar8._0_8_ = auVar5._0_8_ - 1.0;
      auVar10 = vpsrlq_avx(auVar8,0x34);
      auVar5 = vpand_avx(auVar8,_DAT_1806afdb0);
      auVar8 = vpsubd_avx(auVar10,_DAT_1806afed0);
      auVar8 = vcvtdq2pd_avx(auVar8);
      dVar3 = auVar8._0_8_;
      auVar8 = auVar5;
    }
    auVar10 = vpand_avx(auVar5,_DAT_1806afde0);
    auVar9 = vpand_avx(auVar5,_DAT_1806afdf0);
    auVar9 = vpsllq_avx(auVar9,1);
    auVar10 = vpaddq_avx(auVar9,auVar10);
    auVar9._8_8_ = 0;
    auVar9._0_8_ = dVar4 - 1.0;
    auVar9 = vpand_avx(auVar9,_DAT_1806afef0);
    if (auVar9._0_8_ < 0.0625) {
      dVar7 = auVar5._0_8_ - 1.0;
      dVar11 = dVar7 / (dVar7 + 2.0);
      dVar4 = dVar11 + dVar11;
      dVar3 = dVar4 * dVar4;
      dVar6 = dVar3 * dVar4;
      return dVar7 + (((dVar3 * 0.0004348877777076146 + 0.0022321399879194482) *
                       dVar6 * dVar6 * dVar4 +
                      (dVar3 * 0.012500000003771751 + 0.08333333333333179) * dVar6) - dVar7 * dVar11
                     );
    }
    uVar1 = auVar10._0_8_ >> 0x2c;
    auVar5 = vpor_avx(auVar8,_DAT_1806afe40);
    auVar8 = vpor_avx(auVar10,_DAT_1806afe40);
    dVar4 = (auVar8._0_8_ - auVar5._0_8_) * *(double *)(&DAT_1806b3410 + uVar1 * 8);
    dVar6 = dVar4 * dVar4;
    return dVar3 * 0.6931471228599548 + *(double *)(&DAT_1806b23f0 + uVar1 * 8) +
           *(double *)(&DAT_1806b2c00 + uVar1 * 8) +
           (dVar3 * 5.7699990475432854e-08 -
           ((dVar4 * (dVar4 * 0.16666666666666666 + 0.2) + 0.25) * dVar6 * dVar6 +
           (dVar4 * 0.3333333333333333 + 0.5) * dVar6 + dVar4));
  }
  if (dVar4 == 0.0) {
    dVar4 = (double)FUN_18062db30(param_1,0xfff0000000000000,1);
    return dVar4;
  }
LAB_18061d280:
  dVar4 = (double)FUN_18062db30(param_1,0xfff8000000000000,2);
  return dVar4;
}



