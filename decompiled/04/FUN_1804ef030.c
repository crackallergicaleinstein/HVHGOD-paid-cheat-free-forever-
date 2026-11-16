// FUN_1804ef030 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804ef030 */

void FUN_1804ef030(undefined4 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  byte *pbVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined2 uVar6;
  short sVar7;
  short sVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  longlong lVar26;
  int iVar27;
  longlong *plVar28;
  longlong lVar29;
  short *psVar30;
  longlong lVar31;
  undefined8 *puVar32;
  undefined4 *puVar33;
  undefined4 *puVar34;
  longlong *plVar35;
  uint uVar36;
  int *piVar37;
  undefined **ppuVar38;
  int iVar39;
  int *piVar40;
  longlong lVar41;
  float fVar42;
  undefined8 unaff_XMM6_Qa;
  undefined8 unaff_XMM6_Qb;
  undefined8 unaff_XMM7_Qa;
  undefined8 unaff_XMM7_Qb;
  undefined1 auVar43 [64];
  
  lVar26 = DAT_180bb8ae8;
  lVar11 = *(longlong *)(param_1 + 4);
  if ((*(uint *)(DAT_180bb8ae8 + 0x28cc) & 0x1000) != 0) {
    FUN_1804cf3e0("[table] Reconcile columns for table 0x%08X\n",*param_1);
  }
  piVar37 = *(int **)(lVar11 + 0x28);
  piVar1 = (int *)(lVar11 + 0x20);
  plVar2 = (longlong *)(param_1 + 6);
  plVar28 = (longlong *)(*(longlong *)(param_1 + 4) + 0x38);
  plVar35 = plVar2;
  if (*plVar28 != *(longlong *)(*(longlong *)(param_1 + 4) + 0x40)) {
    plVar35 = plVar28;
  }
  iVar27 = 0;
  piVar40 = piVar37 + (longlong)*piVar1 * 0x24;
  for (; piVar37 != piVar40; piVar37 = piVar37 + 0x24) {
    if (*piVar37 != 0) {
      for (puVar32 = (undefined8 *)*plVar35; puVar32 != (undefined8 *)plVar35[1];
          puVar32 = puVar32 + 0xf) {
        if ((*(int *)((longlong)puVar32 + 0x34) == *piVar37) &&
           ((*(byte *)((longlong)puVar32 + 0x71) & 8) != 0)) {
          pbVar3 = (byte *)((longlong)(short)piVar37[5] * 0x78 + 0x71 + *plVar2);
          *pbVar3 = *pbVar3 & 0xef;
          *(byte *)((longlong)puVar32 + 0x71) = *(byte *)((longlong)puVar32 + 0x71) & 0xf7;
          lVar41 = SUB168(SEXT816(-0x7777777777777777) * SEXT816((longlong)puVar32 - *plVar35),8) +
                   ((longlong)puVar32 - *plVar35);
          *(short *)((longlong)piVar37 + 0x16) = (short)(lVar41 >> 6) - (short)(lVar41 >> 0x3f);
          iVar27 = iVar27 + 1;
          uVar5 = puVar32[1];
          uVar13 = puVar32[2];
          uVar14 = puVar32[3];
          *(undefined8 *)(piVar37 + 6) = *puVar32;
          *(undefined8 *)(piVar37 + 8) = uVar5;
          *(undefined8 *)(piVar37 + 10) = uVar13;
          *(undefined8 *)(piVar37 + 0xc) = uVar14;
          uVar5 = puVar32[5];
          uVar13 = puVar32[6];
          uVar14 = puVar32[7];
          *(undefined8 *)(piVar37 + 0xe) = puVar32[4];
          *(undefined8 *)(piVar37 + 0x10) = uVar5;
          *(undefined8 *)(piVar37 + 0x12) = uVar13;
          *(undefined8 *)(piVar37 + 0x14) = uVar14;
          uVar5 = puVar32[9];
          uVar13 = puVar32[10];
          uVar14 = puVar32[0xb];
          *(undefined8 *)(piVar37 + 0x16) = puVar32[8];
          *(undefined8 *)(piVar37 + 0x18) = uVar5;
          *(undefined8 *)(piVar37 + 0x1a) = uVar13;
          *(undefined8 *)(piVar37 + 0x1c) = uVar14;
          uVar5 = puVar32[0xd];
          *(undefined8 *)(piVar37 + 0x1e) = puVar32[0xc];
          *(undefined8 *)(piVar37 + 0x20) = uVar5;
          *(undefined8 *)(piVar37 + 0x22) = puVar32[0xe];
          break;
        }
      }
    }
  }
  iVar39 = 0;
  if (iVar27 != *piVar1) {
    puVar32 = (undefined8 *)*plVar35;
    puVar12 = (undefined8 *)plVar35[1];
    if (puVar32 != puVar12) {
      lVar41 = 0;
      do {
        if ((*(byte *)((longlong)puVar32 + 0x71) & 8) != 0) {
          iVar27 = *piVar1;
          if (iVar39 < iVar27) {
            psVar30 = (short *)(*(longlong *)(lVar11 + 0x28) + 0x16 + lVar41 * 0x90);
            do {
              if (*psVar30 == -1) goto LAB_1804ef1f3;
              iVar39 = iVar39 + 1;
              lVar41 = lVar41 + 1;
              psVar30 = psVar30 + 0x48;
            } while (iVar39 < iVar27);
          }
          if (iVar39 == iVar27) break;
LAB_1804ef1f3:
          lVar29 = *(longlong *)(lVar11 + 0x28);
          pbVar3 = (byte *)((longlong)*(short *)(lVar29 + 0x14 + lVar41 * 0x90) * 0x78 + 0x71 +
                           *plVar2);
          *pbVar3 = *pbVar3 & 0xef;
          *(byte *)((longlong)puVar32 + 0x71) = *(byte *)((longlong)puVar32 + 0x71) & 0xf7;
          lVar31 = SUB168(SEXT816(-0x7777777777777777) * SEXT816((longlong)puVar32 - *plVar35),8) +
                   ((longlong)puVar32 - *plVar35);
          *(short *)(lVar29 + 0x16 + lVar41 * 0x90) = (short)(lVar31 >> 6) - (short)(lVar31 >> 0x3f)
          ;
          uVar5 = puVar32[1];
          uVar13 = puVar32[2];
          uVar14 = puVar32[3];
          puVar4 = (undefined8 *)(lVar29 + 0x18 + lVar41 * 0x90);
          *puVar4 = *puVar32;
          puVar4[1] = uVar5;
          puVar4[2] = uVar13;
          puVar4[3] = uVar14;
          uVar5 = puVar32[5];
          uVar13 = puVar32[6];
          uVar14 = puVar32[7];
          puVar4 = (undefined8 *)(lVar29 + 0x38 + lVar41 * 0x90);
          *puVar4 = puVar32[4];
          puVar4[1] = uVar5;
          puVar4[2] = uVar13;
          puVar4[3] = uVar14;
          uVar5 = puVar32[9];
          uVar13 = puVar32[10];
          uVar14 = puVar32[0xb];
          puVar4 = (undefined8 *)(lVar29 + 0x58 + lVar41 * 0x90);
          *puVar4 = puVar32[8];
          puVar4[1] = uVar5;
          puVar4[2] = uVar13;
          puVar4[3] = uVar14;
          uVar5 = puVar32[0xd];
          puVar4 = (undefined8 *)(lVar29 + 0x78 + lVar41 * 0x90);
          *puVar4 = puVar32[0xc];
          puVar4[1] = uVar5;
          *(undefined8 *)(lVar29 + 0x88 + lVar41 * 0x90) = puVar32[0xe];
        }
        puVar32 = puVar32 + 0xf;
      } while (puVar32 != puVar12);
    }
  }
  puVar33 = *(undefined4 **)(lVar11 + 0x28);
  puVar34 = puVar33 + (longlong)*piVar1 * 0x24;
  if (puVar33 != puVar34) {
    auVar43 = ZEXT864(0);
    do {
      uVar15 = *(undefined8 *)(puVar33 + 8);
      uVar16 = *(undefined8 *)(puVar33 + 10);
      uVar17 = *(undefined8 *)(puVar33 + 0xc);
      uVar18 = *(undefined8 *)(puVar33 + 0xe);
      uVar19 = *(undefined8 *)(puVar33 + 0x10);
      uVar20 = *(undefined8 *)(puVar33 + 0x12);
      uVar21 = *(undefined8 *)(puVar33 + 0x14);
      uVar22 = *(undefined8 *)(puVar33 + 0x16);
      uVar23 = *(undefined8 *)(puVar33 + 0x18);
      uVar24 = *(undefined8 *)(puVar33 + 0x1a);
      uVar25 = *(undefined8 *)(puVar33 + 0x1c);
      uVar13 = *(undefined8 *)(puVar33 + 0x1e);
      uVar14 = *(undefined8 *)(puVar33 + 0x20);
      uVar5 = *(undefined8 *)(puVar33 + 0x22);
      lVar29 = (longlong)*(short *)(puVar33 + 5) * 0x78;
      lVar41 = *(longlong *)(param_1 + 6);
      puVar32 = (undefined8 *)(lVar29 + lVar41);
      *puVar32 = *(undefined8 *)(puVar33 + 6);
      puVar32[1] = uVar15;
      puVar32[2] = uVar16;
      puVar32[3] = uVar17;
      puVar32 = (undefined8 *)(lVar29 + 0x20 + lVar41);
      *puVar32 = uVar18;
      puVar32[1] = uVar19;
      puVar32[2] = uVar20;
      puVar32[3] = uVar21;
      puVar32 = (undefined8 *)(lVar29 + 0x40 + lVar41);
      *puVar32 = uVar22;
      puVar32[1] = uVar23;
      puVar32[2] = uVar24;
      puVar32[3] = uVar25;
      puVar32 = (undefined8 *)(lVar29 + 0x60 + lVar41);
      *puVar32 = uVar13;
      puVar32[1] = uVar14;
      *(undefined8 *)(lVar29 + 0x70 + lVar41) = uVar5;
      uVar9 = puVar33[4];
      fVar42 = (float)puVar33[3];
      uVar36 = puVar33[2];
      uVar6 = *(undefined2 *)(puVar33 + 1);
      uVar10 = *puVar33;
      lVar41 = (longlong)*(short *)(puVar33 + 5) * 0x78 + *(longlong *)(param_1 + 6);
      if (((*(char *)((longlong)param_1 + 0x24e) == '\0') || ((uVar36 & 0x1000018) != 0)) ||
         (fVar42 <= auVar43._0_4_)) {
        if ((((uVar36 & 0x18) == 0) && (auVar43._0_4_ < fVar42)) &&
           (((param_1[1] & 0xe000) == 0x2000 || ((param_1[1] & 0xe000) == 0x4000)))) {
          uVar36 = uVar36 | 0x10;
        }
        if ((uVar36 >> 0x12 & 1) != 0) {
          uVar36 = uVar36 | 0x1000;
          *(short *)(param_1 + 0x83) = *(short *)(param_1 + 0x83) + 1;
        }
        auVar43 = ZEXT1664(auVar43._0_16_);
        FUN_1804ec6d0(param_1,lVar41,uVar36);
        *(float *)(lVar41 + 0x20) = fVar42;
        *(undefined4 *)(lVar41 + 0x34) = uVar10;
        *(undefined4 *)(lVar41 + 0x38) = uVar9;
        *(undefined2 *)(lVar41 + 0x58) = uVar6;
      }
      else {
        auVar43 = ZEXT1664(auVar43._0_16_);
        FUN_1804c5a40(
                     "TableSetupColumn(): can only specify width/weight if sizing policy is set explicitly in either Table or Column."
                     );
      }
      if ((*(uint *)(lVar26 + 0x28cc) & 0x1000) != 0) {
        sVar7 = *(short *)(puVar33 + 5);
        if ((*(char *)((longlong)param_1 + 0x23d) == '\0') &&
           (*(short *)((longlong)param_1 + 0x20a) <= sVar7)) {
          ppuVar38 = &PTR_180700558;
        }
        else {
          sVar8 = *(short *)((longlong)sVar7 * 0x78 + 0x58 + *(longlong *)(param_1 + 6));
          if (sVar8 == -1) {
            ppuVar38 = &PTR_180700558;
          }
          else {
            ppuVar38 = (undefined **)((longlong)sVar8 + *(longlong *)(param_1 + 0x68));
          }
        }
        FUN_1804cf3e0("[table] - old %d -> new %d \"%s\"\n",
                      (int)*(short *)((longlong)puVar33 + 0x16),(int)sVar7,ppuVar38,unaff_XMM7_Qa,
                      unaff_XMM7_Qb,unaff_XMM6_Qa,unaff_XMM6_Qb);
      }
      puVar33 = puVar33 + 0x24;
    } while (puVar33 != puVar34);
  }
  FUN_1804f2a20(param_1);
  *(undefined1 *)((longlong)param_1 + 0x247) = 1;
  *(undefined1 *)((longlong)param_1 + 0x241) = 0;
  iVar27 = *(int *)(lVar11 + 0x24);
  if (iVar27 < 0) {
    iVar27 = iVar27 + iVar27 / 2;
    iVar39 = 0;
    if (0 < iVar27) {
      iVar39 = iVar27;
    }
    FUN_1804f3fb0(piVar1,iVar39);
  }
  *piVar1 = 0;
  return;
}



