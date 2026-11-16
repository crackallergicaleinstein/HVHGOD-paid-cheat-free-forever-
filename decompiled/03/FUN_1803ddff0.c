// FUN_1803ddff0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803ddff0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803ddff0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [32];
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 (*pauVar7) [32];
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  short sVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *plVar16;
  ulonglong uVar17;
  float fVar18;
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  undefined1 auStack_278 [32];
  longlong local_258 [66];
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_278;
  if (param_1 != 0) {
    uVar4 = *(uint *)(param_1 + 0x10);
    lVar14 = (longlong)(int)uVar4;
    if (uVar4 < 0x41) {
      FUN_18063ab10(local_258 + 2,0,0x200);
      if (0 < (int)uVar4) {
        plVar16 = *(longlong **)(param_1 + 0x18);
        lVar15 = 0;
        fVar18 = 1.0;
        fVar21 = 0.0;
        do {
          plVar16 = plVar16 + 1;
          lVar13 = 0;
          if (*plVar16 != 0) {
            lVar13 = *plVar16 + 0x10;
          }
          local_258[lVar15 + 2] = lVar13;
          if (lVar13 == 0) {
          }
          fVar20 = *(float *)(lVar13 + 0x14);
          sVar11 = thunk_FUN_180624430(fVar20);
          if (0 < sVar11) {
          }
          if (fVar20 < fVar21) {
          }
          if (fVar18 < fVar20) {
          }
          lVar15 = lVar15 + 1;
        } while (lVar15 < lVar14);
      }
      if (1 < lVar14) {
        uVar17 = 1;
        do {
          auVar3 = *(undefined1 (*) [32])local_258[uVar17 + 2];
          uVar1 = *(undefined8 *)((undefined1 (*) [32])local_258[uVar17 + 2])[1];
          auVar19 = auVar3._16_16_;
          auVar19 = vshufps_avx(auVar19,auVar19,0x55);
          fVar18 = auVar19._0_4_;
          uVar12 = uVar17;
          if (uVar17 < 4) goto LAB_1803de1bd;
          plVar16 = local_258 + uVar17;
          do {
            puVar5 = (undefined8 *)plVar16[1];
            if (*(float *)((longlong)puVar5 + 0x14) <= fVar18) goto LAB_1803de1ee;
            puVar6 = (undefined8 *)plVar16[2];
            uVar2 = puVar5[4];
            uVar8 = puVar5[1];
            uVar9 = puVar5[2];
            uVar10 = puVar5[3];
            *puVar6 = *puVar5;
            puVar6[1] = uVar8;
            puVar6[2] = uVar9;
            puVar6[3] = uVar10;
            puVar6[4] = uVar2;
            puVar6 = (undefined8 *)*plVar16;
            if (*(float *)((longlong)puVar6 + 0x14) <= fVar18) {
              uVar12 = uVar12 - 1;
              goto LAB_1803de1ee;
            }
            uVar2 = puVar6[4];
            uVar8 = puVar6[1];
            uVar9 = puVar6[2];
            uVar10 = puVar6[3];
            *puVar5 = *puVar6;
            puVar5[1] = uVar8;
            puVar5[2] = uVar9;
            puVar5[3] = uVar10;
            puVar5[4] = uVar2;
            puVar5 = (undefined8 *)plVar16[-1];
            if (*(float *)((longlong)puVar5 + 0x14) <= fVar18) {
              uVar12 = uVar12 - 2;
              goto LAB_1803de1ee;
            }
            uVar2 = puVar5[4];
            uVar8 = puVar5[1];
            uVar9 = puVar5[2];
            uVar10 = puVar5[3];
            *puVar6 = *puVar5;
            puVar6[1] = uVar8;
            puVar6[2] = uVar9;
            puVar6[3] = uVar10;
            puVar6[4] = uVar2;
            puVar6 = (undefined8 *)plVar16[-2];
            if (*(float *)((longlong)puVar6 + 0x14) <= fVar18) {
              uVar12 = uVar12 - 3;
              goto LAB_1803de1ee;
            }
            uVar8 = puVar6[1];
            uVar9 = puVar6[2];
            uVar10 = puVar6[3];
            uVar2 = puVar6[4];
            uVar12 = uVar12 - 4;
            plVar16 = plVar16 + -4;
            *puVar5 = *puVar6;
            puVar5[1] = uVar8;
            puVar5[2] = uVar9;
            puVar5[3] = uVar10;
            puVar5[4] = uVar2;
          } while (3 < (longlong)uVar12);
          for (; 0 < (longlong)uVar12; uVar12 = uVar12 - 1) {
LAB_1803de1bd:
            puVar5 = (undefined8 *)local_258[uVar12 + 1];
            if (*(float *)((longlong)puVar5 + 0x14) <= fVar18) break;
            uVar8 = puVar5[1];
            uVar9 = puVar5[2];
            uVar10 = puVar5[3];
            uVar2 = puVar5[4];
            puVar6 = (undefined8 *)local_258[uVar12 + 2];
            *puVar6 = *puVar5;
            puVar6[1] = uVar8;
            puVar6[2] = uVar9;
            puVar6[3] = uVar10;
            puVar6[4] = uVar2;
          }
LAB_1803de1ee:
          pauVar7 = (undefined1 (*) [32])local_258[uVar12 + 2];
          uVar17 = uVar17 + 1;
          *pauVar7 = auVar3;
          *(undefined8 *)pauVar7[1] = uVar1;
        } while ((longlong)uVar17 < lVar14);
      }
    }
  }
}



