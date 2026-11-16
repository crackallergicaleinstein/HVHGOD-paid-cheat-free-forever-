// FUN_1804d67c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804d67c0 */

void FUN_1804d67c0(undefined8 param_1,longlong param_2,int *param_3,uint param_4,float param_5,
                  float param_6,float param_7,float param_8)

{
  int *piVar1;
  undefined1 auVar2 [16];
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [32];
  undefined8 uVar7;
  undefined1 (*pauVar8) [16];
  longlong lVar9;
  undefined1 (*pauVar10) [16];
  short sVar11;
  int iVar12;
  longlong lVar13;
  undefined1 (*pauVar14) [16];
  undefined8 *puVar15;
  int *piVar16;
  int iVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  float *pfVar21;
  longlong lVar22;
  undefined4 *puVar23;
  int iVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  float fVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  uint local_58;
  
  iVar12 = 0;
  uVar25 = (ulonglong)param_4;
  iVar24 = 0;
  param_6 = -param_6;
  if ((0 < (int)param_4) && (0xf < param_4)) {
    lVar9 = 0;
    iVar24 = 0;
    iVar28 = 0;
    iVar29 = 0;
    iVar30 = 0;
    iVar31 = 0;
    iVar32 = 0;
    iVar33 = 0;
    iVar34 = 0;
    iVar17 = 0;
    iVar35 = 0;
    iVar36 = 0;
    iVar37 = 0;
    iVar38 = 0;
    iVar39 = 0;
    iVar40 = 0;
    iVar41 = 0;
    do {
      piVar1 = param_3 + lVar9;
      iVar24 = iVar24 + *piVar1;
      iVar28 = iVar28 + piVar1[1];
      iVar29 = iVar29 + piVar1[2];
      iVar30 = iVar30 + piVar1[3];
      iVar31 = iVar31 + piVar1[4];
      iVar32 = iVar32 + piVar1[5];
      iVar33 = iVar33 + piVar1[6];
      iVar34 = iVar34 + piVar1[7];
      piVar1 = param_3 + lVar9 + 8;
      iVar17 = iVar17 + *piVar1;
      iVar35 = iVar35 + piVar1[1];
      iVar36 = iVar36 + piVar1[2];
      iVar37 = iVar37 + piVar1[3];
      iVar38 = iVar38 + piVar1[4];
      iVar39 = iVar39 + piVar1[5];
      iVar40 = iVar40 + piVar1[6];
      iVar41 = iVar41 + piVar1[7];
      lVar9 = lVar9 + 0x10;
      iVar12 = iVar12 + 0x10;
    } while (lVar9 < (longlong)((longlong)(int)param_4 & 0xfffffffffffffff0U));
    auVar6._0_4_ = iVar17 + iVar24;
    auVar6._4_4_ = iVar35 + iVar28;
    auVar6._8_4_ = iVar36 + iVar29;
    auVar6._12_4_ = iVar37 + iVar30;
    auVar6._16_4_ = iVar38 + iVar31;
    auVar6._20_4_ = iVar39 + iVar32;
    auVar6._24_4_ = iVar40 + iVar33;
    auVar6._28_4_ = iVar41 + iVar34;
    auVar6 = vphaddd_avx2(auVar6,auVar6);
    auVar6 = vphaddd_avx2(auVar6,auVar6);
    iVar24 = auVar6._0_4_ + auVar6._16_4_;
  }
  iVar17 = 0;
  lVar9 = (longlong)iVar12;
  iVar12 = 0;
  lVar22 = (longlong)(int)param_4;
  if (lVar22 <= lVar9) goto LAB_1804d68a1;
  if (lVar22 - lVar9 < 2) {
LAB_1804d6896:
    iVar24 = iVar24 + param_3[lVar9];
  }
  else {
    do {
      iVar17 = iVar17 + param_3[lVar9];
      iVar12 = iVar12 + param_3[lVar9 + 1];
      lVar9 = lVar9 + 2;
    } while (lVar9 < lVar22 + -1);
    if (lVar9 < lVar22) goto LAB_1804d6896;
  }
  iVar24 = iVar24 + iVar12 + iVar17;
LAB_1804d68a1:
  pauVar10 = (undefined1 (*) [16])FUN_1804b8110(((longlong)iVar24 + 1) * 0x14);
  if (pauVar10 != (undefined1 (*) [16])0x0) {
    uVar19 = 1;
    uVar26 = 0;
    iVar24 = 0;
    local_58 = 0;
    if (0 < (int)param_4) {
      do {
        iVar17 = 0;
        lVar9 = param_2 + (longlong)iVar24 * 8;
        iVar12 = *param_3;
        iVar24 = iVar24 + iVar12;
        if (0 < iVar12) {
          pfVar21 = (float *)(lVar9 + 4);
          puVar23 = (undefined4 *)(uVar26 * 0x14 + 0x10 + (longlong)pauVar10);
          lVar22 = (longlong)(iVar12 + -1);
          lVar18 = 0;
          do {
            if (*(float *)(lVar9 + 4 + lVar22 * 8) != *pfVar21) {
              *puVar23 = 0;
              lVar13 = lVar22;
              lVar20 = lVar18;
              if (*pfVar21 < *(float *)(lVar9 + 4 + lVar22 * 8)) {
                *puVar23 = 1;
                lVar13 = lVar18;
                lVar20 = lVar22;
              }
              puVar23[-4] = param_5 * *(float *)(lVar9 + lVar20 * 8) + param_7;
              puVar23[-3] = param_6 * *(float *)(lVar9 + 4 + lVar20 * 8) + param_8;
              puVar23[-2] = param_5 * *(float *)(lVar9 + lVar13 * 8) + param_7;
              local_58 = local_58 + 1;
              uVar26 = uVar26 + 1;
              puVar23[-1] = param_6 * *(float *)(lVar9 + 4 + lVar13 * 8) + param_8;
              puVar23 = puVar23 + 5;
            }
            iVar17 = iVar17 + 1;
            pfVar21 = pfVar21 + 2;
            lVar22 = lVar18;
            lVar18 = lVar18 + 1;
          } while (iVar17 < *param_3);
        }
        param_3 = param_3 + 1;
        uVar25 = uVar25 - 1;
      } while (uVar25 != 0);
      uVar26 = (ulonglong)local_58;
    }
    FUN_1804d65e0(pauVar10,uVar26);
    pauVar14 = pauVar10;
    if (1 < (longlong)(int)uVar26) {
      do {
        pauVar8 = pauVar14 + 1;
        uVar3 = *(undefined4 *)(pauVar14[2] + 4);
        auVar2 = *(undefined1 (*) [16])(*pauVar8 + 4);
        auVar5 = vshufps_avx(auVar2,auVar2,0x55);
        fVar27 = auVar5._0_4_;
        uVar25 = uVar19;
        if (uVar19 < 4) {
LAB_1804d6b1d:
          puVar15 = (undefined8 *)(uVar25 * 0x14 + -0x14 + (longlong)pauVar10);
          do {
            if (*(float *)((longlong)puVar15 + 4) <= fVar27) break;
            uVar25 = uVar25 - 1;
            *(undefined8 *)((longlong)puVar15 + 0x14) = *puVar15;
            *(undefined8 *)((longlong)puVar15 + 0x1c) = puVar15[1];
            *(undefined4 *)((longlong)puVar15 + 0x24) = *(undefined4 *)(puVar15 + 2);
            puVar15 = (undefined8 *)((longlong)puVar15 + -0x14);
          } while (0 < (longlong)uVar25);
        }
        else {
          do {
            if (*(float *)(*pauVar14 + 4) <= fVar27) goto LAB_1804d6b59;
            uVar7 = *(undefined8 *)(*pauVar14 + 8);
            uVar4 = *(undefined4 *)pauVar14[1];
            *(undefined8 *)(pauVar14[1] + 4) = *(undefined8 *)*pauVar14;
            *(undefined8 *)(pauVar14[1] + 0xc) = uVar7;
            *(undefined4 *)(pauVar14[2] + 4) = uVar4;
            if (*(float *)pauVar14[-1] <= fVar27) {
              uVar25 = uVar25 - 1;
              goto LAB_1804d6b59;
            }
            uVar7 = *(undefined8 *)(pauVar14[-1] + 4);
            uVar4 = *(undefined4 *)(pauVar14[-1] + 0xc);
            *(undefined8 *)*pauVar14 = *(undefined8 *)(pauVar14[-2] + 0xc);
            *(undefined8 *)(*pauVar14 + 8) = uVar7;
            *(undefined4 *)pauVar14[1] = uVar4;
            if (*(float *)(pauVar14[-3] + 0xc) <= fVar27) {
              uVar25 = uVar25 - 2;
              goto LAB_1804d6b59;
            }
            uVar7 = *(undefined8 *)pauVar14[-2];
            uVar4 = *(undefined4 *)(pauVar14[-2] + 8);
            *(undefined8 *)(pauVar14[-2] + 0xc) = *(undefined8 *)(pauVar14[-3] + 8);
            *(undefined8 *)(pauVar14[-1] + 4) = uVar7;
            *(undefined4 *)(pauVar14[-1] + 0xc) = uVar4;
            if (*(float *)(pauVar14[-4] + 8) <= fVar27) {
              uVar25 = uVar25 - 3;
              goto LAB_1804d6b59;
            }
            uVar7 = *(undefined8 *)(pauVar14[-4] + 0xc);
            uVar4 = *(undefined4 *)(pauVar14[-3] + 4);
            uVar25 = uVar25 - 4;
            *(undefined8 *)(pauVar14[-3] + 8) = *(undefined8 *)(pauVar14[-4] + 4);
            *(undefined8 *)pauVar14[-2] = uVar7;
            *(undefined4 *)(pauVar14[-2] + 8) = uVar4;
            pauVar14 = pauVar14 + -5;
          } while (3 < (longlong)uVar25);
          if (0 < (longlong)uVar25) goto LAB_1804d6b1d;
        }
LAB_1804d6b59:
        if (uVar19 != uVar25) {
          *(undefined1 (*) [16])((longlong)pauVar10 + uVar25 * 0x14) = auVar2;
          *(undefined4 *)((longlong)pauVar10 + uVar25 * 0x14 + 0x10) = uVar3;
        }
        uVar19 = uVar19 + 1;
        pauVar14 = (undefined1 (*) [16])(*pauVar8 + 4);
      } while ((longlong)uVar19 < (longlong)(int)uVar26);
    }
    FUN_1804d6040(param_1,pauVar10,uVar26);
    lVar9 = DAT_180bb8ae8;
    if (DAT_180bb8ae8 != 0) {
      piVar1 = (int *)(DAT_180bb8ae8 + 4);
      piVar16 = (int *)(DAT_180bb8ae8 + 0x2998 + (longlong)*(short *)(DAT_180bb8ae8 + 0x2994) * 8);
      if (*piVar16 != *piVar1) {
        iVar24 = *(short *)(DAT_180bb8ae8 + 0x2994) + 1;
        sVar11 = (short)iVar24 + (short)(iVar24 / 6) * -6;
        *(short *)(DAT_180bb8ae8 + 0x2994) = sVar11;
        piVar16 = (int *)(lVar9 + ((longlong)sVar11 + 0x533) * 8);
        *piVar16 = *piVar1;
        piVar16[1] = 0;
      }
      *(short *)((longlong)piVar16 + 6) = *(short *)((longlong)piVar16 + 6) + 1;
      piVar1 = (int *)(lVar9 + 0x2990);
      *piVar1 = *piVar1 + 1;
    }
    thunk_FUN_180621380(pauVar10);
  }
  return;
}



