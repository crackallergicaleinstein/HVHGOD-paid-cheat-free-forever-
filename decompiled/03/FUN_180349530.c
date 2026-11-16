// FUN_180349530 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180349530 */

void FUN_180349530(undefined8 *param_1,uint param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 (*param_5) [24],undefined8 *param_6)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  longlong *plVar13;
  int iVar14;
  ulonglong uVar15;
  undefined1 auVar16 [16];
  undefined8 uVar18;
  undefined1 auVar17 [64];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 in_ZMM7 [64];
  undefined1 auVar21 [64];
  float fVar22;
  undefined1 auVar23 [64];
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  undefined1 auVar27 [64];
  undefined8 uVar28;
  undefined1 auVar29 [64];
  undefined8 local_1c8;
  char cStack_1c0;
  undefined7 uStack_1bf;
  float local_1b8;
  float fStack_1b4;
  undefined1 local_1b0 [32];
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined4 local_180;
  undefined1 local_178 [16];
  undefined8 uStack_168;
  undefined8 uStack_158;
  int local_148;
  undefined1 local_144 [16];
  undefined8 uStack_12c;
  undefined8 uStack_124;
  undefined8 uStack_11c;
  int local_114;
  undefined1 local_110 [32];
  undefined1 auStack_f0 [16];
  undefined1 local_58 [16];
  
  uVar15 = (ulonglong)param_2;
  if (*(char *)*param_1 != '\0') {
    cVar10 = FUN_1803494b0();
    local_58 = in_ZMM7._0_16_;
    if (cVar10 != '\0') {
      plVar13 = (longlong *)param_1[2];
      if (*plVar13 != plVar13[1]) {
        plVar13[1] = *plVar13;
      }
      local_1b0._0_24_ = *param_5;
      lVar2 = param_1[2];
      local_1b0._24_8_ = *param_6;
      uStack_190 = param_6[1];
      puVar3 = *(undefined8 **)(lVar2 + 8);
      uStack_188 = param_6[2];
      local_180 = 0;
      if (puVar3 == *(undefined8 **)(lVar2 + 0x10)) {
        FUN_180351aa0(lVar2,puVar3,local_1b0);
        local_58 = in_ZMM7._0_16_;
        uVar15 = (ulonglong)param_2;
      }
      else {
        *puVar3 = local_1b0._0_8_;
        puVar3[1] = local_1b0._8_8_;
        puVar3[2] = local_1b0._16_8_;
        puVar3[3] = local_1b0._24_8_;
        puVar3[4] = uStack_190;
        puVar3[5] = uStack_188;
        *(undefined4 *)(puVar3 + 6) = 0;
        *(longlong *)(lVar2 + 8) = *(longlong *)(lVar2 + 8) + 0x34;
      }
      plVar13 = (longlong *)param_1[2];
      if (*plVar13 != plVar13[1]) {
        auVar27 = ZEXT464(0x42c80000);
        uVar28 = 0x7fffffff7fffffff;
        auVar29 = ZEXT464(0x3d4ccccd);
        do {
          if (*(int *)param_1[3] < 1) {
            return;
          }
          lVar2 = plVar13[1];
          local_1b0 = *(undefined1 (*) [32])(lVar2 + -0x34);
          auStack_f0 = *(undefined1 (*) [16])(lVar2 + -0x14);
          iVar1 = *(int *)(lVar2 + -4);
          plVar13[1] = lVar2 + -0x34;
          if ((iVar1 < 7) &&
             (auVar19 = vshufps_avx(local_1b0._16_16_,local_1b0._16_16_,0xaa),
             auVar29._0_4_ < (float)((uint)(auVar19._0_4_ - local_1b0._0_4_) & (uint)uVar28))) {
            auVar17 = ZEXT1664(auStack_f0);
            auVar27 = ZEXT1664(auVar27._0_16_);
            auVar29 = ZEXT1664(auVar29._0_16_);
            local_110 = local_1b0;
            FUN_180348db0(param_1[4],&local_1c8,uVar15 & 0xffffffff);
            auVar19 = auVar17._0_16_;
            if (cStack_1c0 == '\0') {
              return;
            }
            auVar20[8] = cStack_1c0;
            auVar20._0_8_ = local_1c8;
            auVar20._9_7_ = uStack_1bf;
            auVar17 = ZEXT3264(local_1b0);
            uVar26 = CONCAT44(fStack_1b4,local_1b8);
            auVar16 = local_1b0._0_16_;
            auVar5 = vshufps_avx(auVar20,auVar20,0xff);
            fVar22 = auVar5._0_4_;
            cVar10 = (char)((uint7)uStack_1bf >> 8);
            cVar4 = (char)uStack_1bf;
            iVar14 = (int)((ulonglong)local_1c8 >> 0x20);
            fVar25 = local_1b8;
            fVar24 = fStack_1b4;
            if (local_1b0[8] != '\0') {
              uVar18 = local_1b0._16_8_;
              if (local_1b0[9] == cVar4) {
                if (local_1b0[9] == '\0') goto LAB_180349871;
                if (local_1b0[10] == cVar10) {
                  iVar12 = local_1b0._4_4_ - iVar14;
                  iVar11 = -iVar12;
                  if (iVar11 < 0) {
                    iVar11 = iVar12;
                  }
                  if (iVar11 < 2) {
                    auVar6 = vshufps_avx(auVar16,auVar16,0xff);
                    fVar7 = auVar6._0_4_ - fVar22;
                    fVar8 = local_1b0._16_4_ - local_1b8;
                    auVar6 = vshufps_avx(local_1b0._16_16_,local_1b0._16_16_,0x55);
                    fVar9 = auVar6._0_4_ - fStack_1b4;
                    if (fVar8 * fVar8 + fVar7 * fVar7 + fVar9 * fVar9 <= auVar27._0_4_)
                    goto LAB_180349871;
                  }
                }
              }
              lVar2 = param_1[2];
              local_148 = iVar1 + 1;
              puVar3 = *(undefined8 **)(lVar2 + 8);
              local_178 = auVar16;
              uStack_168 = uVar18;
              if (puVar3 == *(undefined8 **)(lVar2 + 0x10)) {
                auVar17 = ZEXT1664(auVar19);
                auVar21 = ZEXT1664(auVar20);
                auVar23 = ZEXT1664(auVar5);
                auVar27 = ZEXT1664(auVar27._0_16_);
                auVar29 = ZEXT1664(auVar29._0_16_);
                FUN_180351aa0(lVar2,puVar3,local_178);
                auVar20 = auVar21._0_16_;
                fVar22 = auVar23._0_4_;
                auVar19 = auVar17._0_16_;
                auVar17 = ZEXT3264(local_1b0);
              }
              else {
                local_178._0_8_ = local_1b0._0_8_;
                local_178._8_8_ = local_1b0._8_8_;
                uStack_158 = auVar20._8_8_;
                *puVar3 = local_178._0_8_;
                puVar3[1] = local_178._8_8_;
                puVar3[2] = uVar18;
                puVar3[3] = local_1c8;
                puVar3[4] = uStack_158;
                puVar3[5] = uVar26;
                *(int *)(puVar3 + 6) = local_148;
                *(longlong *)(lVar2 + 8) = *(longlong *)(lVar2 + 8) + 0x34;
              }
            }
LAB_180349871:
            if (auVar19[0] != '\0') {
              if (cVar4 == auVar19[1]) {
                if (cVar4 == '\0') goto LAB_180349943;
                if (cVar10 == auVar19[2]) {
                  iVar14 = iVar14 - auVar17._28_4_;
                  iVar11 = -iVar14;
                  if (iVar11 < 0) {
                    iVar11 = iVar14;
                  }
                  if (iVar11 < 2) {
                    auVar5 = vshufps_avx(auVar19,auVar19,0x55);
                    fVar22 = fVar22 - auVar5._0_4_;
                    auVar5 = vshufps_avx(auVar19,auVar19,0xaa);
                    fVar25 = fVar25 - auVar5._0_4_;
                    auVar5 = vshufps_avx(auVar19,auVar19,0xff);
                    fVar24 = fVar24 - auVar5._0_4_;
                    if (fVar25 * fVar25 + fVar22 * fVar22 + fVar24 * fVar24 <= auVar27._0_4_)
                    goto LAB_180349943;
                  }
                }
              }
              lVar2 = param_1[2];
              local_114 = iVar1 + 1;
              puVar3 = *(undefined8 **)(lVar2 + 8);
              uStack_12c = local_110._24_8_;
              uStack_124 = auStack_f0._0_8_;
              uStack_11c = vmovhpd_avx(auVar19);
              local_144 = auVar20;
              if (puVar3 == *(undefined8 **)(lVar2 + 0x10)) {
                auVar27 = ZEXT1664(auVar27._0_16_);
                auVar29 = ZEXT1664(auVar29._0_16_);
                FUN_180351aa0(lVar2,puVar3,local_144);
              }
              else {
                local_144._0_8_ = auVar20._0_8_;
                local_144._8_8_ = auVar20._8_8_;
                *puVar3 = local_144._0_8_;
                puVar3[1] = local_144._8_8_;
                puVar3[2] = uVar26;
                puVar3[3] = local_110._24_8_;
                puVar3[4] = auStack_f0._0_8_;
                puVar3[5] = uStack_11c;
                *(int *)(puVar3 + 6) = local_114;
                *(longlong *)(lVar2 + 8) = *(longlong *)(lVar2 + 8) + 0x34;
              }
            }
          }
LAB_180349943:
          plVar13 = (longlong *)param_1[2];
          uVar15 = (ulonglong)param_2;
        } while (*plVar13 != plVar13[1]);
      }
    }
  }
  return;
}



