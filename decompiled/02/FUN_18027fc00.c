// FUN_18027fc00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18027fc00 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18027fc00(float *param_1)

{
  double dVar1;
  bool bVar2;
  longlong lVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  double *pdVar8;
  undefined1 (*pauVar9) [32];
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  double *pdVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  undefined1 (*pauVar20) [32];
  double *pdVar21;
  uint uVar22;
  int *piVar23;
  int iVar24;
  longlong lVar25;
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auStack_148 [32];
  int local_128 [4];
  longlong local_118;
  float *local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  double local_c8 [12];
  ulonglong local_68;
  
  local_68 = DAT_1808d5f00 ^ (ulonglong)auStack_148;
  local_110 = param_1;
  if (DAT_180b8e2b0 != '\0') {
    iVar5 = FUN_1805f68d0(&DAT_180b8e260);
    if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_180b8e2ac == 0x7fffffff) {
      DAT_180b8e2ac = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    local_108 = _DAT_180b8e220;
    uStack_100 = uRam0000000180b8e228;
    uStack_f8 = uRam0000000180b8e230;
    uStack_f0 = uRam0000000180b8e238;
    local_e8 = _DAT_180b8e240;
    uStack_e0 = uRam0000000180b8e248;
    uStack_d8 = uRam0000000180b8e250;
    uStack_d0 = uRam0000000180b8e258;
    FUN_1805f68fc(&DAT_180b8e260);
    local_128[0] = 0;
    iVar24 = 0;
    local_128[1] = 1;
    local_c8[0] = 0.0;
    local_c8[1] = 0.0;
    local_c8[2] = 0.0;
    local_c8[3] = 0.0;
    local_c8[4] = 0.0;
    local_c8[5] = 0.0;
    local_c8[6] = 0.0;
    local_c8[7] = 0.0;
    local_c8[8] = 0.0;
    local_c8[9] = 0.0;
    local_c8[10] = 0.0;
    local_c8[0xb] = 0.0;
    local_128[2] = 3;
    pdVar21 = local_c8;
    piVar23 = local_128;
    iVar5 = 0;
    while( true ) {
      iVar12 = 0;
      pdVar8 = local_c8 + (longlong)iVar5 * 2 + -8;
      pdVar15 = pdVar21;
      do {
        *pdVar15 = (double)*(float *)pdVar8;
        sVar4 = thunk_FUN_1806243d0();
        if (0 < sVar4) goto LAB_180280283;
        iVar12 = iVar12 + 1;
        pdVar8 = (double *)((longlong)pdVar8 + 4);
        pdVar15 = pdVar15 + 1;
      } while (iVar12 < 4);
      iVar24 = iVar24 + 1;
      piVar23 = piVar23 + 1;
      pdVar21 = pdVar21 + 4;
      if (2 < iVar24) break;
      iVar5 = *piVar23;
    }
    lVar17 = 0;
    pdVar21 = local_c8 + 1;
    pdVar15 = local_c8 + 1;
    uVar14 = 4;
    local_118 = 0x40 - (longlong)(local_c8 + 1);
    lVar25 = 4;
    lVar18 = 0x40 - (longlong)(local_c8 + 1);
    uVar22 = 1;
    do {
      lVar16 = lVar17 + 1;
      lVar11 = lVar17;
      if ((int)uVar22 < 3) {
        uVar6 = uVar22;
        if ((int)(uVar14 - 2) < 4) {
LAB_18027fea7:
          lVar10 = lVar16 << 5;
          lVar19 = (longlong)(int)(3 - uVar6);
          lVar18 = lVar11 << 5;
          do {
            lVar7 = lVar10;
            lVar3 = lVar16;
            if (ABS(*(double *)((longlong)local_c8 + lVar10 + lVar17 * 8)) <=
                ABS(*(double *)((longlong)local_c8 + lVar18 + lVar17 * 8))) {
              lVar7 = lVar18;
              lVar3 = lVar11;
            }
            lVar11 = lVar3;
            lVar16 = lVar16 + 1;
            lVar10 = lVar10 + 0x20;
            lVar19 = lVar19 + -1;
            lVar18 = lVar7;
          } while (lVar19 != 0);
        }
        else {
          lVar18 = lVar17 + 3;
          uVar6 = (~uVar22 >> 2) + 1;
          uVar13 = (ulonglong)uVar6;
          uVar6 = uVar6 * 4 + uVar22;
          pdVar8 = local_c8 + lVar17 * 5 + 8;
          do {
            lVar10 = lVar16;
            if (ABS(pdVar8[-4]) <= ABS(local_c8[lVar17 + lVar11 * 4])) {
              lVar10 = lVar11;
            }
            lVar11 = lVar18 + -1;
            if (ABS(*pdVar8) <= ABS(local_c8[lVar17 + lVar10 * 4])) {
              lVar11 = lVar10;
            }
            lVar10 = lVar18;
            if (ABS(pdVar8[4]) <= ABS(local_c8[lVar17 + lVar11 * 4])) {
              lVar10 = lVar11;
            }
            lVar11 = lVar18 + 1;
            if (ABS(pdVar8[8]) <= ABS(local_c8[lVar17 + lVar10 * 4])) {
              lVar11 = lVar10;
            }
            lVar16 = lVar16 + 4;
            lVar18 = lVar18 + 4;
            uVar13 = uVar13 - 1;
            pdVar8 = pdVar8 + 0x10;
          } while (uVar13 != 0);
          if ((int)uVar6 < 3) goto LAB_18027fea7;
        }
        lVar18 = local_118;
      }
      if (ABS(local_c8[lVar17 + lVar11 * 4]) < 1e-09) goto LAB_180280283;
      dVar1 = pdVar15[-1];
      pdVar15[-1] = local_c8[lVar11 * 4];
      local_c8[lVar11 * 4] = dVar1;
      dVar1 = *pdVar15;
      *pdVar15 = local_c8[lVar11 * 4 + 1];
      local_c8[lVar11 * 4 + 1] = dVar1;
      dVar1 = pdVar15[1];
      pdVar15[1] = local_c8[lVar11 * 4 + 2];
      local_c8[lVar11 * 4 + 2] = dVar1;
      dVar1 = pdVar15[2];
      pdVar15[2] = local_c8[lVar11 * 4 + 3];
      local_c8[lVar11 * 4 + 3] = dVar1;
      dVar1 = pdVar21[-1];
      auVar30._8_8_ = dVar1;
      auVar30._0_8_ = dVar1;
      auVar30._16_8_ = dVar1;
      auVar30._24_8_ = dVar1;
      if (lVar17 < 4) {
        lVar16 = lVar17;
        if (3 < lVar25) {
          lVar11 = ((ulonglong)-lVar17 >> 2) + 1;
          lVar16 = lVar17 + lVar11 * 4;
          pdVar8 = pdVar21;
          do {
            auVar26 = vdivpd_avx(*(undefined1 (*) [32])(pdVar8 + -1),auVar30);
            *(undefined1 (*) [32])(pdVar8 + -1) = auVar26;
            lVar11 = lVar11 + -1;
            pdVar8 = pdVar8 + 4;
          } while (lVar11 != 0);
          if (3 < lVar16) goto LAB_18028000f;
        }
        lVar11 = 4 - lVar16;
        pdVar8 = local_c8 + lVar16 + lVar17 * 4;
        do {
          *pdVar8 = *pdVar8 / dVar1;
          lVar11 = lVar11 + -1;
          pdVar8 = pdVar8 + 1;
        } while (lVar11 != 0);
      }
LAB_18028000f:
      lVar18 = lVar18 + (longlong)pdVar15;
      lVar16 = 0;
      pauVar20 = (undefined1 (*) [32])(local_c8 + lVar17);
      do {
        if ((lVar16 != lVar17) && (dVar1 = *(double *)*pauVar20, 0 < lVar25)) {
          lVar11 = lVar17;
          if (0xf < uVar14) {
            uVar6 = uVar14 & 0x8000000f;
            if ((int)uVar6 < 0) {
              uVar6 = (uVar6 - 1 | 0xfffffff0) + 1;
            }
            pauVar9 = pauVar20;
            do {
              pdVar8 = (double *)(pauVar9[-2] + lVar18);
              auVar26._0_8_ = dVar1 * *pdVar8;
              auVar26._8_8_ = dVar1 * pdVar8[1];
              auVar26._16_8_ = dVar1 * pdVar8[2];
              auVar26._24_8_ = dVar1 * pdVar8[3];
              auVar30 = vsubpd_avx(*pauVar9,auVar26);
              *pauVar9 = auVar30;
              pdVar8 = (double *)(pauVar9[-1] + lVar18);
              auVar27._0_8_ = dVar1 * *pdVar8;
              auVar27._8_8_ = dVar1 * pdVar8[1];
              auVar27._16_8_ = dVar1 * pdVar8[2];
              auVar27._24_8_ = dVar1 * pdVar8[3];
              auVar30 = vsubpd_avx(pauVar9[1],auVar27);
              pauVar9[1] = auVar30;
              pdVar8 = (double *)(*pauVar9 + lVar18);
              auVar28._0_8_ = dVar1 * *pdVar8;
              auVar28._8_8_ = dVar1 * pdVar8[1];
              auVar28._16_8_ = dVar1 * pdVar8[2];
              auVar28._24_8_ = dVar1 * pdVar8[3];
              auVar30 = vsubpd_avx(pauVar9[2],auVar28);
              pauVar9[2] = auVar30;
              pdVar8 = (double *)(pauVar9[1] + lVar18);
              auVar29._0_8_ = dVar1 * *pdVar8;
              auVar29._8_8_ = dVar1 * pdVar8[1];
              auVar29._16_8_ = dVar1 * pdVar8[2];
              auVar29._24_8_ = dVar1 * pdVar8[3];
              auVar30 = vsubpd_avx(pauVar9[3],auVar29);
              lVar11 = lVar11 + 0x10;
              pauVar9[3] = auVar30;
              pauVar9 = pauVar9 + 4;
            } while (lVar11 < (int)(4 - uVar6));
          }
          if (lVar11 < 4) {
            if (3 < 4 - lVar11) {
              lVar10 = lVar11 + lVar16 * 4;
              lVar19 = ((ulonglong)-lVar11 >> 2) + 1;
              lVar11 = lVar11 + lVar19 * 4;
              pdVar8 = local_c8 + lVar10;
              do {
                *pdVar8 = *pdVar8 - dVar1 * *(double *)((longlong)pdVar8 + lVar18 + -0x40);
                pdVar8[1] = pdVar8[1] - dVar1 * *(double *)((longlong)pdVar8 + lVar18 + -0x38);
                pdVar8[2] = pdVar8[2] - dVar1 * *(double *)((longlong)pdVar8 + lVar18 + -0x30);
                pdVar8[3] = pdVar8[3] - dVar1 * *(double *)((longlong)pdVar8 + lVar18 + -0x28);
                lVar19 = lVar19 + -1;
                pdVar8 = pdVar8 + 4;
              } while (lVar19 != 0);
            }
            if (lVar11 < 4) {
              lVar10 = 4 - lVar11;
              pdVar8 = local_c8 + lVar11 + lVar16 * 4;
              do {
                *pdVar8 = *pdVar8 - dVar1 * *(double *)((longlong)pdVar8 + lVar18 + -0x40);
                lVar10 = lVar10 + -1;
                pdVar8 = pdVar8 + 1;
              } while (lVar10 != 0);
            }
          }
        }
        lVar16 = lVar16 + 1;
        pauVar20 = pauVar20 + 1;
        lVar18 = lVar18 + -0x20;
      } while (lVar16 < 3);
      uVar14 = uVar14 - 1;
      lVar17 = lVar17 + 1;
      pdVar15 = pdVar15 + 4;
      lVar25 = lVar25 + -1;
      pdVar21 = pdVar21 + 5;
      bVar2 = (int)uVar22 < 3;
      lVar18 = local_118;
      uVar22 = uVar22 + 1;
    } while (bVar2);
    fVar31 = (float)-local_c8[3];
    fVar32 = (float)-local_c8[7];
    fVar33 = (float)-local_c8[0xb];
    sVar4 = thunk_FUN_180624430();
    if ((((sVar4 < 1) && (ABS(fVar31) <= 32768.0)) && (ABS(fVar32) <= 32768.0)) &&
       (ABS(fVar33) <= 32768.0)) {
      *local_110 = fVar31;
      local_110[1] = fVar32;
      local_110[2] = fVar33;
      *(undefined1 *)(local_110 + 3) = 1;
    }
  }
LAB_180280283:
  *(undefined1 *)(local_110 + 3) = 0;
}



