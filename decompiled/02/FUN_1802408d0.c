// FUN_1802408d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802408d0 */

undefined8 FUN_1802408d0(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [32];
  uint uVar3;
  short sVar4;
  longlong lVar5;
  uint *puVar6;
  uint *puVar7;
  undefined8 *puVar8;
  float *pfVar9;
  undefined1 (*pauVar10) [32];
  longlong lVar11;
  undefined1 (*pauVar12) [32];
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar17;
  undefined8 extraout_XMM0_Qa_01;
  undefined1 extraout_var [56];
  undefined1 auVar18 [64];
  undefined1 in_ZMM2 [64];
  undefined1 auVar19 [16];
  float fVar20;
  undefined1 auVar21 [64];
  undefined1 auVar22 [64];
  
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 1;
  lVar15 = *(longlong *)(param_1 + 0x40);
  auVar22 = ZEXT1664(in_ZMM2._0_16_);
  lVar5 = 0;
  if (lVar15 != 0) {
    lVar5 = lVar15 + 0x10;
  }
  if ((lVar5 != 0) && (sVar4 = thunk_FUN_180624430(in_ZMM2._0_8_), sVar4 < 1)) {
    auVar18 = ZEXT864(0);
    if ((0.0 <= auVar22._0_4_) && (auVar21 = ZEXT464(0x3f800000), auVar22._0_4_ < 1.0)) {
      puVar6 = (uint *)&DAT_00000010;
      lVar5 = 8;
      if (lVar15 != 0) {
        puVar6 = (uint *)(lVar15 + 0x20);
        lVar5 = lVar15 + 0x18;
      }
      uVar3 = *puVar6;
      if ((lVar5 != 0) && (uVar3 < 0x3f)) {
        uVar17 = extraout_XMM0_Qa;
        if (0 < (int)uVar3) {
          lVar14 = 0;
          puVar8 = (undefined8 *)&DAT_00000018;
          if (lVar15 != 0) {
            puVar8 = (undefined8 *)(lVar15 + 0x28);
          }
          plVar13 = (longlong *)*puVar8;
          do {
            plVar13 = plVar13 + 1;
            lVar11 = 0;
            if (*plVar13 != 0) {
              lVar11 = *plVar13 + 0x10;
            }
            if (lVar11 == 0) {
              return 0;
            }
            fVar20 = *(float *)(lVar11 + 0x14);
            sVar4 = thunk_FUN_180624430(fVar20);
            if (0 < sVar4) {
              return 0;
            }
            if (fVar20 < auVar18._0_4_) {
              return 0;
            }
            if (auVar21._0_4_ < fVar20) {
              return 0;
            }
            lVar14 = lVar14 + 1;
            uVar17 = extraout_XMM0_Qa_00;
          } while (lVar14 < (int)uVar3);
        }
        puVar6 = (uint *)FUN_1803dfb00(uVar17,lVar5);
        if ((puVar6 != (uint *)0x0) && (puVar7 = (uint *)FUN_1803dfb00(), puVar7 != (uint *)0x0)) {
          *puVar6 = *puVar6 | 7;
          puVar6[5] = auVar22._0_4_;
          puVar6[2] = 0x800;
          puVar6[3] = 0;
          *(undefined1 *)(puVar6 + 4) = 1;
          *puVar7 = *puVar7 | 3;
          puVar7[2] = 0x800;
          puVar7[3] = 0;
          *(undefined1 *)(puVar7 + 4) = 0;
          FUN_180615620(auVar21._0_8_,auVar18._0_8_);
          auVar18._8_56_ = extraout_var;
          auVar18._0_8_ = extraout_XMM0_Qa_01;
          *puVar7 = *puVar7 | 4;
          iVar16 = 1;
          auVar19 = vmaxss_avx(auVar18._0_16_,auVar22._0_16_);
          puVar7[5] = auVar19._0_4_;
          if (1 < *(int *)(lVar5 + 8)) {
            lVar14 = 1;
            plVar13 = (longlong *)&DAT_00000018;
            if (lVar15 != 0) {
              plVar13 = (longlong *)(lVar15 + 0x28);
            }
            do {
              lVar15 = *(longlong *)(*plVar13 + 8 + lVar14 * 8);
              pauVar10 = (undefined1 (*) [32])0x0;
              if (lVar15 != 0) {
                pauVar10 = (undefined1 (*) [32])(lVar15 + 0x10);
              }
              auVar2 = *pauVar10;
              uVar17 = *(undefined8 *)pauVar10[1];
              lVar15 = lVar14;
              if (lVar14 != 0) {
                auVar19 = auVar2._16_16_;
                auVar19 = vshufps_avx(auVar19,auVar19,0x55);
                do {
                  lVar11 = *(longlong *)(*plVar13 + lVar15 * 8);
                  pfVar9 = (float *)&DAT_00000014;
                  if (lVar11 != 0) {
                    pfVar9 = (float *)(lVar11 + 0x24);
                  }
                  if (*pfVar9 <= auVar19._0_4_) break;
                  pauVar10 = (undefined1 (*) [32])0x0;
                  if (lVar11 != 0) {
                    pauVar10 = (undefined1 (*) [32])(lVar11 + 0x10);
                  }
                  uVar1 = *(undefined8 *)pauVar10[1];
                  lVar11 = *(longlong *)(*plVar13 + 8 + lVar15 * 8);
                  pauVar12 = (undefined1 (*) [32])0x0;
                  if (lVar11 != 0) {
                    pauVar12 = (undefined1 (*) [32])(lVar11 + 0x10);
                  }
                  *pauVar12 = *pauVar10;
                  *(undefined8 *)pauVar12[1] = uVar1;
                  lVar15 = lVar15 + -1;
                } while (lVar15 != 0);
              }
              lVar15 = *(longlong *)(*plVar13 + 8 + lVar15 * 8);
              pauVar10 = (undefined1 (*) [32])0x0;
              if (lVar15 != 0) {
                pauVar10 = (undefined1 (*) [32])(lVar15 + 0x10);
              }
              iVar16 = iVar16 + 1;
              lVar14 = lVar14 + 1;
              *pauVar10 = auVar2;
              *(undefined8 *)pauVar10[1] = uVar17;
            } while (iVar16 < *(int *)(lVar5 + 8));
          }
          *(ulonglong *)(param_1 + 0x60) = *(ulonglong *)(param_1 + 0x60) & 0xfffffffffffff7ff;
          *(ulonglong *)(param_1 + 0x68) = *(ulonglong *)(param_1 + 0x68) | 0x800;
          *(ulonglong *)(param_1 + 0x70) = *(ulonglong *)(param_1 + 0x70) & 0xfffffffffffff7ff;
          return 1;
        }
        *(uint *)(lVar5 + 8) = uVar3;
      }
    }
  }
  return 0;
}



