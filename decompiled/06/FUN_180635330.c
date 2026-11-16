// FUN_180635330 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180635330 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_180635330(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 in_ZMM0 [64];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  
  dVar3 = in_ZMM0._0_8_;
  auVar4 = in_ZMM0._0_16_;
  if (DAT_180bb2128 == 0) {
    if ((double)((ulonglong)dVar3 & 0x7ff0000000000000) == INFINITY) {
      if (dVar3 == INFINITY) {
        return INFINITY;
      }
      if (dVar3 != -INFINITY) {
        return (double)((ulonglong)dVar3 | 0x8000000000000);
      }
    }
    else {
      dVar12 = (double)(int)(((ulonglong)dVar3 >> 0x34) - 0x3ff);
      if (0.0 < dVar3) {
        dVar6 = (double)((ulonglong)dVar3 & (ulonglong)DAT_1806ba7b0);
        dVar5 = dVar3;
        if (dVar12 == -1023.0) {
          dVar12 = (double)((ulonglong)dVar6 | DAT_1806ba840) - 1.0;
          dVar5 = (double)((ulonglong)dVar12 & (ulonglong)DAT_1806ba7b0);
          dVar12 = (double)(int)((uint)((ulonglong)dVar12 >> 0x34) - 0x7fd);
          dVar6 = dVar5;
        }
        uVar1 = ((ulonglong)dVar5 & 0xff00000000000) + ((ulonglong)dVar5 & 0x80000000000) * 2;
        if (ABS(dVar3 - 1.0) < 0.0625) {
          dVar3 = dVar3 - 1.0;
          dVar12 = dVar3 / (dVar3 + 2.0);
          dVar5 = dVar12 + dVar12;
          dVar6 = dVar5 * dVar5;
          dVar7 = dVar6 * dVar5;
          dVar8 = (double)((ulonglong)dVar3 & (ulonglong)DAT_1806ba980);
          dVar3 = (((dVar6 * 0.012500000003771751 + 0.08333333333333179) * dVar7 +
                   (dVar6 * 0.0004348877777076146 + 0.0022321399879194482) * dVar7 * dVar7 * dVar5)
                  - dVar3 * dVar12) + (dVar3 - dVar8);
          return dVar8 * 7.349550096401511e-07 + dVar3 * 7.349550096401511e-07 +
                 dVar3 * 0.4342937469482422 + dVar8 * 0.4342937469482422;
        }
        uVar2 = uVar1 >> 0x2c;
        dVar5 = ((double)(uVar1 | DAT_1806ba850) - (double)((ulonglong)dVar6 | DAT_1806ba850)) *
                *(double *)(&DAT_1806b3410 + uVar2 * 8);
        dVar3 = dVar5 * dVar5;
        return *(double *)(&DAT_1806ba9b0 + uVar2 * 8) + dVar12 * 0.3010299950838089 +
               *(double *)(&DAT_1806bb1c0 + uVar2 * 8) +
               (dVar12 * 5.801722962879576e-10 -
               ((dVar5 * 0.3333333333333333 + 0.5) * dVar3 + dVar5 +
               ((dVar5 * 0.16666666666666666 + 0.2) * dVar5 + 0.25) * dVar3 * dVar3) *
               0.4342944819032518);
      }
      if (dVar3 == 0.0) {
        dVar3 = (double)FUN_18062db10();
        return dVar3;
      }
    }
    dVar3 = (double)FUN_18062db10();
                    /* WARNING: Read-only address (ram,0x0001806ba760) is written */
                    /* WARNING: Read-only address (ram,0x0001806ba790) is written */
                    /* WARNING: Read-only address (ram,0x0001806ba7b0) is written */
                    /* WARNING: Read-only address (ram,0x0001806ba7c0) is written */
                    /* WARNING: Read-only address (ram,0x0001806ba7d0) is written */
                    /* WARNING: Read-only address (ram,0x0001806ba840) is written */
                    /* WARNING: Read-only address (ram,0x0001806ba850) is written */
                    /* WARNING: Read-only address (ram,0x0001806ba8e0) is written */
                    /* WARNING: Read-only address (ram,0x0001806ba930) is written */
                    /* WARNING: Read-only address (ram,0x0001806ba980) is written */
    return dVar3;
  }
  auVar9 = vpsrlq_avx(auVar4,0x34);
  auVar9 = vpsubq_avx(auVar9,_DAT_1806ba790);
  auVar9 = vcvtdq2pd_avx(auVar9);
  dVar12 = auVar9._0_8_;
  auVar9 = vpand_avx(auVar4,_DAT_1806ba760);
  if (auVar9._0_8_ == INFINITY) {
    if (dVar3 != INFINITY) {
      if (dVar3 == -INFINITY) goto LAB_180635880;
      dVar3 = (double)FUN_18062db10();
    }
    return dVar3;
  }
  if (0.0 < dVar3) {
    auVar9 = vpand_avx(auVar4,_DAT_1806ba7b0);
    if (dVar12 == -1023.0) {
      auVar4 = vpor_avx(auVar9,_DAT_1806ba840);
      auVar9._8_8_ = 0;
      auVar9._0_8_ = auVar4._0_8_ - 1.0;
      auVar11 = vpsrlq_avx(auVar9,0x34);
      auVar4 = vpand_avx(auVar9,_DAT_1806ba7b0);
      auVar9 = vpsubd_avx(auVar11,_DAT_1806ba8e0);
      auVar9 = vcvtdq2pd_avx(auVar9);
      dVar12 = auVar9._0_8_;
      auVar9 = auVar4;
    }
    auVar11 = vpand_avx(auVar4,_DAT_1806ba7c0);
    auVar10 = vpand_avx(auVar4,_DAT_1806ba7d0);
    auVar10 = vpsllq_avx(auVar10,1);
    auVar11 = vpaddq_avx(auVar10,auVar11);
    auVar10._8_8_ = 0;
    auVar10._0_8_ = dVar3 - 1.0;
    auVar10 = vpand_avx(auVar10,_DAT_1806ba930);
    if (auVar10._0_8_ < 0.0625) {
      dVar6 = auVar4._0_8_ - 1.0;
      dVar7 = dVar6 / (dVar6 + 2.0);
      dVar3 = dVar7 + dVar7;
      dVar12 = dVar3 * dVar3;
      dVar5 = dVar12 * dVar3;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = dVar6;
      auVar4 = vpand_avx(auVar4,_DAT_1806ba980);
      dVar8 = auVar4._0_8_;
      dVar3 = (((dVar12 * 0.012500000003771751 + 0.08333333333333179) * dVar5 +
               (dVar12 * 0.0004348877777076146 + 0.0022321399879194482) * dVar5 * dVar5 * dVar3) -
              dVar6 * dVar7) + (dVar6 - dVar8);
      return dVar8 * 7.349550096401511e-07 + dVar3 * 7.349550096401511e-07 +
             dVar3 * 0.4342937469482422 + dVar8 * 0.4342937469482422;
    }
    uVar1 = auVar11._0_8_ >> 0x2c;
    auVar4 = vpor_avx(auVar9,_DAT_1806ba850);
    auVar9 = vpor_avx(auVar11,_DAT_1806ba850);
    dVar3 = (auVar9._0_8_ - auVar4._0_8_) * *(double *)(&DAT_1806b3410 + uVar1 * 8);
    dVar5 = dVar3 * dVar3;
    return dVar12 * 0.3010299950838089 + *(double *)(&DAT_1806ba9b0 + uVar1 * 8) +
           *(double *)(&DAT_1806bb1c0 + uVar1 * 8) +
           (dVar12 * 5.801722962879576e-10 -
           ((dVar3 * (dVar3 * 0.16666666666666666 + 0.2) + 0.25) * dVar5 * dVar5 +
           (dVar3 * 0.3333333333333333 + 0.5) * dVar5 + dVar3) * 0.4342944819032518);
  }
  if (dVar3 == 0.0) {
    dVar3 = (double)FUN_18062db10();
    return dVar3;
  }
LAB_180635880:
  dVar3 = (double)FUN_18062db10();
  return dVar3;
}



