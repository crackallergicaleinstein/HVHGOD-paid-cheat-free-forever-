// FUN_1802e2da0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802e2da0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802e2da0(float *param_1,longlong param_2)

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
  float *pfVar12;
  ulonglong uVar13;
  uint uVar14;
  double *pdVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  undefined1 (*pauVar21) [32];
  uint uVar22;
  double *pdVar23;
  int *piVar24;
  int iVar25;
  longlong lVar26;
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auStack_108 [32];
  int local_e8 [4];
  longlong local_d8;
  float *local_d0;
  double local_c8 [12];
  ulonglong local_68;
  
  local_68 = DAT_1808d5f00 ^ (ulonglong)auStack_108;
  iVar25 = 0;
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
  iVar5 = 0;
  local_e8[0] = 0;
  local_e8[1] = 1;
  local_e8[2] = 3;
  pdVar23 = local_c8;
  piVar24 = local_e8;
  local_d0 = param_1;
  while( true ) {
    iVar16 = 0;
    pfVar12 = (float *)((longlong)iVar5 * 0x10 + param_2);
    pdVar15 = pdVar23;
    do {
      *pdVar15 = (double)*pfVar12;
      sVar4 = thunk_FUN_1806243d0();
      if (0 < sVar4) goto LAB_1802e337b;
      iVar16 = iVar16 + 1;
      pfVar12 = pfVar12 + 1;
      pdVar15 = pdVar15 + 1;
    } while (iVar16 < 4);
    iVar25 = iVar25 + 1;
    piVar24 = piVar24 + 1;
    pdVar23 = pdVar23 + 4;
    if (2 < iVar25) break;
    iVar5 = *piVar24;
  }
  lVar18 = 0;
  pdVar23 = local_c8 + 1;
  pdVar15 = local_c8 + 1;
  uVar14 = 4;
  local_d8 = 0x40 - (longlong)(local_c8 + 1);
  lVar26 = 4;
  lVar19 = 0x40 - (longlong)(local_c8 + 1);
  uVar22 = 1;
  do {
    lVar17 = lVar18 + 1;
    lVar11 = lVar18;
    if ((int)uVar22 < 3) {
      uVar6 = uVar22;
      if ((int)(uVar14 - 2) < 4) {
LAB_1802e2fbb:
        lVar10 = lVar17 << 5;
        lVar20 = (longlong)(int)(3 - uVar6);
        lVar19 = lVar11 << 5;
        do {
          lVar7 = lVar10;
          lVar3 = lVar17;
          if (ABS(*(double *)((longlong)local_c8 + lVar10 + lVar18 * 8)) <=
              ABS(*(double *)((longlong)local_c8 + lVar19 + lVar18 * 8))) {
            lVar7 = lVar19;
            lVar3 = lVar11;
          }
          lVar11 = lVar3;
          lVar17 = lVar17 + 1;
          lVar10 = lVar10 + 0x20;
          lVar20 = lVar20 + -1;
          lVar19 = lVar7;
        } while (lVar20 != 0);
      }
      else {
        lVar19 = lVar18 + 3;
        uVar6 = (~uVar22 >> 2) + 1;
        uVar13 = (ulonglong)uVar6;
        uVar6 = uVar22 + uVar6 * 4;
        pdVar8 = local_c8 + lVar18 * 5 + 8;
        do {
          lVar10 = lVar17;
          if (ABS(pdVar8[-4]) <= ABS(local_c8[lVar18 + lVar11 * 4])) {
            lVar10 = lVar11;
          }
          lVar11 = lVar19 + -1;
          if (ABS(*pdVar8) <= ABS(local_c8[lVar18 + lVar10 * 4])) {
            lVar11 = lVar10;
          }
          lVar10 = lVar19;
          if (ABS(pdVar8[4]) <= ABS(local_c8[lVar18 + lVar11 * 4])) {
            lVar10 = lVar11;
          }
          lVar11 = lVar19 + 1;
          if (ABS(pdVar8[8]) <= ABS(local_c8[lVar18 + lVar10 * 4])) {
            lVar11 = lVar10;
          }
          lVar17 = lVar17 + 4;
          lVar19 = lVar19 + 4;
          uVar13 = uVar13 - 1;
          pdVar8 = pdVar8 + 0x10;
        } while (uVar13 != 0);
        if ((int)uVar6 < 3) goto LAB_1802e2fbb;
      }
      lVar19 = local_d8;
    }
    if (ABS(local_c8[lVar18 + lVar11 * 4]) < 1e-09) goto LAB_1802e337b;
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
    dVar1 = pdVar23[-1];
    auVar31._8_8_ = dVar1;
    auVar31._0_8_ = dVar1;
    auVar31._16_8_ = dVar1;
    auVar31._24_8_ = dVar1;
    if (lVar18 < 4) {
      lVar17 = lVar18;
      if (3 < lVar26) {
        lVar11 = ((ulonglong)-lVar18 >> 2) + 1;
        lVar17 = lVar18 + lVar11 * 4;
        pdVar8 = pdVar23;
        do {
          auVar27 = vdivpd_avx(*(undefined1 (*) [32])(pdVar8 + -1),auVar31);
          *(undefined1 (*) [32])(pdVar8 + -1) = auVar27;
          lVar11 = lVar11 + -1;
          pdVar8 = pdVar8 + 4;
        } while (lVar11 != 0);
        if (3 < lVar17) goto LAB_1802e310a;
      }
      lVar11 = 4 - lVar17;
      pdVar8 = local_c8 + lVar17 + lVar18 * 4;
      do {
        *pdVar8 = *pdVar8 / dVar1;
        lVar11 = lVar11 + -1;
        pdVar8 = pdVar8 + 1;
      } while (lVar11 != 0);
    }
LAB_1802e310a:
    lVar19 = lVar19 + (longlong)pdVar15;
    lVar17 = 0;
    pauVar21 = (undefined1 (*) [32])(local_c8 + lVar18);
    do {
      if ((lVar17 != lVar18) && (dVar1 = *(double *)*pauVar21, 0 < lVar26)) {
        lVar11 = lVar18;
        if (0xf < uVar14) {
          uVar6 = uVar14 & 0x8000000f;
          if ((int)uVar6 < 0) {
            uVar6 = (uVar6 - 1 | 0xfffffff0) + 1;
          }
          pauVar9 = pauVar21;
          do {
            pdVar8 = (double *)(pauVar9[-2] + lVar19);
            auVar27._0_8_ = dVar1 * *pdVar8;
            auVar27._8_8_ = dVar1 * pdVar8[1];
            auVar27._16_8_ = dVar1 * pdVar8[2];
            auVar27._24_8_ = dVar1 * pdVar8[3];
            auVar31 = vsubpd_avx(*pauVar9,auVar27);
            *pauVar9 = auVar31;
            pdVar8 = (double *)(pauVar9[-1] + lVar19);
            auVar28._0_8_ = dVar1 * *pdVar8;
            auVar28._8_8_ = dVar1 * pdVar8[1];
            auVar28._16_8_ = dVar1 * pdVar8[2];
            auVar28._24_8_ = dVar1 * pdVar8[3];
            auVar31 = vsubpd_avx(pauVar9[1],auVar28);
            pauVar9[1] = auVar31;
            pdVar8 = (double *)(*pauVar9 + lVar19);
            auVar30._0_8_ = dVar1 * *pdVar8;
            auVar30._8_8_ = dVar1 * pdVar8[1];
            auVar30._16_8_ = dVar1 * pdVar8[2];
            auVar30._24_8_ = dVar1 * pdVar8[3];
            auVar31 = vsubpd_avx(pauVar9[2],auVar30);
            pauVar9[2] = auVar31;
            pdVar8 = (double *)(pauVar9[1] + lVar19);
            auVar29._0_8_ = dVar1 * *pdVar8;
            auVar29._8_8_ = dVar1 * pdVar8[1];
            auVar29._16_8_ = dVar1 * pdVar8[2];
            auVar29._24_8_ = dVar1 * pdVar8[3];
            auVar31 = vsubpd_avx(pauVar9[3],auVar29);
            lVar11 = lVar11 + 0x10;
            pauVar9[3] = auVar31;
            pauVar9 = pauVar9 + 4;
          } while (lVar11 < (int)(4 - uVar6));
        }
        if (lVar11 < 4) {
          if (3 < 4 - lVar11) {
            lVar10 = lVar11 + lVar17 * 4;
            lVar20 = ((ulonglong)-lVar11 >> 2) + 1;
            lVar11 = lVar11 + lVar20 * 4;
            pdVar8 = local_c8 + lVar10;
            do {
              *pdVar8 = *pdVar8 - dVar1 * *(double *)((longlong)pdVar8 + lVar19 + -0x40);
              pdVar8[1] = pdVar8[1] - dVar1 * *(double *)((longlong)pdVar8 + lVar19 + -0x38);
              pdVar8[2] = pdVar8[2] - dVar1 * *(double *)((longlong)pdVar8 + lVar19 + -0x30);
              pdVar8[3] = pdVar8[3] - dVar1 * *(double *)((longlong)pdVar8 + lVar19 + -0x28);
              lVar20 = lVar20 + -1;
              pdVar8 = pdVar8 + 4;
            } while (lVar20 != 0);
          }
          if (lVar11 < 4) {
            lVar10 = 4 - lVar11;
            pdVar8 = local_c8 + lVar11 + lVar17 * 4;
            do {
              *pdVar8 = *pdVar8 - dVar1 * *(double *)((longlong)pdVar8 + lVar19 + -0x40);
              lVar10 = lVar10 + -1;
              pdVar8 = pdVar8 + 1;
            } while (lVar10 != 0);
          }
        }
      }
      lVar17 = lVar17 + 1;
      pauVar21 = pauVar21 + 1;
      lVar19 = lVar19 + -0x20;
    } while (lVar17 < 3);
    uVar14 = uVar14 - 1;
    lVar18 = lVar18 + 1;
    pdVar15 = pdVar15 + 4;
    lVar26 = lVar26 + -1;
    pdVar23 = pdVar23 + 5;
    bVar2 = (int)uVar22 < 3;
    lVar19 = local_d8;
    uVar22 = uVar22 + 1;
  } while (bVar2);
  fVar32 = (float)-local_c8[3];
  fVar33 = (float)-local_c8[7];
  fVar34 = (float)-local_c8[0xb];
  sVar4 = thunk_FUN_180624430();
  if ((((0 < sVar4) || (32768.0 < ABS(fVar32))) || (32768.0 < ABS(fVar33))) ||
     (32768.0 < ABS(fVar34))) {
LAB_1802e337b:
    *(undefined1 *)(local_d0 + 3) = 0;
  }
  else {
    *local_d0 = fVar32;
    local_d0[1] = fVar33;
    local_d0[2] = fVar34;
    *(undefined1 *)(local_d0 + 3) = 1;
  }
}



