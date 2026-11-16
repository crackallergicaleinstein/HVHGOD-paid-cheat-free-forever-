// FUN_18042b2e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18042b2e0 */

void FUN_18042b2e0(char *param_1,char *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  short sVar6;
  short sVar7;
  undefined4 uVar8;
  int iVar9;
  char *pcVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint *puVar18;
  uint *puVar19;
  longlong lVar20;
  float fVar21;
  float fVar22;
  undefined1 in_XMM2 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [64];
  float fVar25;
  undefined1 auVar26 [64];
  undefined1 auVar27 [64];
  undefined1 auVar28 [64];
  undefined1 auVar29 [64];
  undefined1 auVar30 [64];
  float fVar31;
  int local_res10;
  
  *param_1 = *param_2;
  auVar30 = ZEXT1664(in_XMM2);
  if (*param_2 == '\x01') {
    uVar8 = FUN_18042a740(*(undefined4 *)(param_2 + 8),in_XMM2._0_8_);
    *(undefined4 *)(param_1 + 0x1c) = uVar8;
  }
  else {
    puVar3 = *(undefined8 **)(param_2 + 8);
    param_1[1] = *(char *)(puVar3 + 3);
    uVar5 = puVar3[1];
    *(undefined8 *)(param_1 + 4) = *puVar3;
    *(undefined8 *)(param_1 + 0xc) = uVar5;
    *(undefined8 *)(param_1 + 0x14) = puVar3[2];
    iVar15 = *(int *)((longlong)puVar3 + 0x24);
    if (iVar15 == 0) {
      lVar14 = 8;
      pcVar10 = param_1 + 0x1c;
      do {
        pcVar10[0] = '\0';
        pcVar10[1] = '\0';
        pcVar10[2] = '\0';
        pcVar10[3] = '\0';
        pcVar10[4] = '\0';
        pcVar10[5] = '\0';
        pcVar10[6] = '\0';
        pcVar10[7] = '\0';
        pcVar10[8] = '\0';
        pcVar10[9] = '\0';
        pcVar10[10] = '\0';
        pcVar10[0xb] = '\0';
        pcVar10[0xc] = '\0';
        pcVar10[0xd] = '\0';
        pcVar10[0xe] = '\0';
        pcVar10[0xf] = '\0';
        pcVar10[0x10] = '\0';
        pcVar10[0x11] = '\0';
        pcVar10[0x12] = '\0';
        pcVar10[0x13] = '\0';
        pcVar10[0x14] = '\0';
        pcVar10[0x15] = '\0';
        pcVar10[0x16] = '\0';
        pcVar10[0x17] = '\0';
        pcVar10[0x18] = '\0';
        pcVar10[0x19] = '\0';
        pcVar10[0x1a] = '\0';
        pcVar10[0x1b] = '\0';
        pcVar10[0x1c] = '\0';
        pcVar10[0x1d] = '\0';
        pcVar10[0x1e] = '\0';
        pcVar10[0x1f] = '\0';
        pcVar10[0x20] = '\0';
        pcVar10[0x21] = '\0';
        pcVar10[0x22] = '\0';
        pcVar10[0x23] = '\0';
        pcVar10[0x24] = '\0';
        pcVar10[0x25] = '\0';
        pcVar10[0x26] = '\0';
        pcVar10[0x27] = '\0';
        pcVar10[0x28] = '\0';
        pcVar10[0x29] = '\0';
        pcVar10[0x2a] = '\0';
        pcVar10[0x2b] = '\0';
        pcVar10[0x2c] = '\0';
        pcVar10[0x2d] = '\0';
        pcVar10[0x2e] = '\0';
        pcVar10[0x2f] = '\0';
        pcVar10[0x30] = '\0';
        pcVar10[0x31] = '\0';
        pcVar10[0x32] = '\0';
        pcVar10[0x33] = '\0';
        pcVar10[0x34] = '\0';
        pcVar10[0x35] = '\0';
        pcVar10[0x36] = '\0';
        pcVar10[0x37] = '\0';
        pcVar10[0x38] = '\0';
        pcVar10[0x39] = '\0';
        pcVar10[0x3a] = '\0';
        pcVar10[0x3b] = '\0';
        pcVar10[0x3c] = '\0';
        pcVar10[0x3d] = '\0';
        pcVar10[0x3e] = '\0';
        pcVar10[0x3f] = '\0';
        pcVar10[0x40] = '\0';
        pcVar10[0x41] = '\0';
        pcVar10[0x42] = '\0';
        pcVar10[0x43] = '\0';
        pcVar10[0x44] = '\0';
        pcVar10[0x45] = '\0';
        pcVar10[0x46] = '\0';
        pcVar10[0x47] = '\0';
        pcVar10[0x48] = '\0';
        pcVar10[0x49] = '\0';
        pcVar10[0x4a] = '\0';
        pcVar10[0x4b] = '\0';
        pcVar10[0x4c] = '\0';
        pcVar10[0x4d] = '\0';
        pcVar10[0x4e] = '\0';
        pcVar10[0x4f] = '\0';
        pcVar10[0x50] = '\0';
        pcVar10[0x51] = '\0';
        pcVar10[0x52] = '\0';
        pcVar10[0x53] = '\0';
        pcVar10[0x54] = '\0';
        pcVar10[0x55] = '\0';
        pcVar10[0x56] = '\0';
        pcVar10[0x57] = '\0';
        pcVar10[0x58] = '\0';
        pcVar10[0x59] = '\0';
        pcVar10[0x5a] = '\0';
        pcVar10[0x5b] = '\0';
        pcVar10[0x5c] = '\0';
        pcVar10[0x5d] = '\0';
        pcVar10[0x5e] = '\0';
        pcVar10[0x5f] = '\0';
        *(undefined1 (*) [16])(pcVar10 + 0x60) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(pcVar10 + 0x70) = (undefined1  [16])0x0;
        lVar14 = lVar14 + -1;
        pcVar10 = pcVar10 + 0x80;
      } while (lVar14 != 0);
    }
    else {
      uVar8 = FUN_18042a740(*(undefined4 *)(puVar3 + 5),in_XMM2._0_8_);
      if (iVar15 == 1) {
        pcVar10 = param_1 + 0x1c;
        for (lVar14 = 0x100; lVar14 != 0; lVar14 = lVar14 + -1) {
          *(undefined4 *)pcVar10 = uVar8;
          pcVar10 = pcVar10 + 4;
        }
      }
      else {
        uVar17 = 0;
        auVar26 = ZEXT464(*(uint *)((longlong)puVar3 + 0x2c));
        sVar6 = thunk_FUN_180624430(*(uint *)((longlong)puVar3 + 0x2c));
        auVar28 = ZEXT464(0x3f800000);
        auVar24 = ZEXT864(0);
        if (sVar6 == 2) {
          auVar26 = ZEXT864(0);
        }
        else if (0.0 <= auVar26._0_4_) {
          auVar4 = vminss_avx(auVar28._0_16_,auVar26._0_16_);
          auVar26 = ZEXT1664(auVar4);
        }
        else {
          auVar26 = ZEXT864(0);
        }
        uVar1 = *(uint *)((longlong)puVar3 + (longlong)iVar15 * 8 + 0x24);
        auVar29 = ZEXT464(uVar1);
        sVar6 = thunk_FUN_180624430(uVar1);
        fVar25 = auVar26._0_4_;
        fVar21 = fVar25;
        if ((sVar6 != 2) && (fVar25 <= auVar29._0_4_)) {
          auVar4 = vminss_avx(auVar28._0_16_,auVar29._0_16_);
          fVar21 = auVar4._0_4_;
        }
        fVar31 = 255.0;
        lVar14 = (longlong)(int)(fVar25 * 255.0);
        iVar15 = (int)(fVar21 * 255.0);
        if (0 < (int)(fVar25 * 255.0)) {
          pcVar10 = param_1 + 0x1c;
          for (; lVar14 != 0; lVar14 = lVar14 + -1) {
            *(undefined4 *)pcVar10 = uVar8;
            pcVar10 = pcVar10 + 4;
          }
        }
        local_res10 = 0;
        if (0 < *(int *)((longlong)puVar3 + 0x24) + -1) {
          sVar6 = thunk_FUN_180624430(auVar30._0_8_);
          fVar21 = 256.0;
          auVar4 = vminss_avx(auVar28._0_16_,auVar30._0_16_);
          auVar26 = ZEXT1664(auVar4);
          puVar18 = (uint *)(puVar3 + 5);
          do {
            uVar1 = *puVar18;
            auVar23 = auVar24._0_16_;
            auVar4 = auVar23;
            if (sVar6 != 2) {
              auVar4 = vcmpss_avx(auVar30._0_16_,auVar23,1);
              auVar4 = vblendvps_avx(auVar26._0_16_,auVar23,auVar4);
            }
            fVar25 = auVar4._0_4_ * fVar21;
            uVar2 = puVar18[2];
            if (sVar6 != 2) {
              auVar4 = vcmpss_avx(auVar30._0_16_,auVar23,1);
              auVar23 = vblendvps_avx(auVar26._0_16_,auVar23,auVar4);
            }
            auVar29 = ZEXT464(puVar18[1]);
            uVar16 = (int)(auVar23._0_4_ * fVar21) * (uVar2 >> 0x18) >> 8 & 0xff;
            uVar11 = uVar2 >> 0x10 & 0xff;
            uVar12 = uVar2 >> 8 & 0xff;
            uVar17 = ((uVar16 << 8 | uVar11) << 8 | uVar12) << 8 | uVar2 & 0xff;
            sVar7 = thunk_FUN_180624430(puVar18[1]);
            if (sVar7 == 2) {
              auVar29 = ZEXT1664(auVar24._0_16_);
            }
            else if (auVar24._0_4_ <= auVar29._0_4_) {
              auVar4 = vminss_avx(auVar28._0_16_,auVar29._0_16_);
              auVar29 = ZEXT1664(auVar4);
            }
            else {
              auVar29 = ZEXT1664(auVar24._0_16_);
            }
            auVar27 = ZEXT464(puVar18[3]);
            sVar7 = thunk_FUN_180624430(puVar18[3]);
            fVar22 = auVar24._0_4_;
            if ((sVar7 != 2) && (fVar22 <= auVar27._0_4_)) {
              auVar4 = vminss_avx(auVar28._0_16_,auVar27._0_16_);
              fVar22 = auVar4._0_4_;
            }
            iVar15 = (int)(fVar22 * fVar31);
            iVar13 = (int)(auVar29._0_4_ * fVar31);
            iVar9 = iVar15 - iVar13;
            if (0 < iVar9) {
              lVar14 = (longlong)iVar9;
              auVar29 = ZEXT1664(auVar24._0_16_);
              auVar27 = ZEXT1664(CONCAT124(auVar28._4_12_,auVar28._0_4_ / (float)iVar9));
              puVar19 = (uint *)(param_1 + (longlong)iVar13 * 4 + 0x1c);
              do {
                sVar7 = thunk_FUN_180624430(auVar29._0_8_);
                fVar22 = auVar24._0_4_;
                if ((sVar7 != 2) && (fVar22 <= auVar29._0_4_)) {
                  auVar4 = vminss_avx(auVar28._0_16_,auVar29._0_16_);
                  fVar22 = auVar4._0_4_;
                }
                iVar13 = (int)(fVar22 * fVar21);
                iVar9 = 0x100 - iVar13;
                auVar29 = ZEXT464((uint)(auVar29._0_4_ + auVar27._0_4_));
                *puVar19 = (((((int)fVar25 * (uVar1 >> 0x18) >> 8 & 0xff) * iVar9 + uVar16 * iVar13
                              >> 8 & 0xff) << 8 |
                            iVar9 * (uVar1 >> 0x10 & 0xff) + uVar11 * iVar13 >> 8 & 0xff) << 8 |
                           (uVar1 >> 8 & 0xff) * iVar9 + uVar12 * iVar13 >> 8 & 0xff) << 8 |
                           (uVar1 & 0xff) * iVar9 + (uVar2 & 0xff) * iVar13 >> 8 & 0xff;
                puVar19 = puVar19 + 1;
                lVar14 = lVar14 + -1;
              } while (lVar14 != 0);
            }
            local_res10 = local_res10 + 1;
            puVar18 = puVar18 + 2;
          } while (local_res10 < *(int *)((longlong)puVar3 + 0x24) + -1);
        }
        lVar14 = (longlong)iVar15;
        if (lVar14 < 0x100) {
          puVar18 = (uint *)(param_1 + (lVar14 + 7) * 4);
          for (lVar20 = 0x100 - lVar14; lVar20 != 0; lVar20 = lVar20 + -1) {
            *puVar18 = uVar17;
            puVar18 = puVar18 + 1;
          }
        }
      }
    }
  }
  return;
}



