// FUN_180209610 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180209610 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180209610(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  undefined1 auVar2 [32];
  undefined1 auVar3 [16];
  char *pcVar4;
  int iVar5;
  undefined1 auVar6 [8];
  char cVar7;
  short sVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined1 (*pauVar13) [32];
  undefined1 (*pauVar14) [16];
  int iVar15;
  ulonglong uVar16;
  char *pcVar17;
  ulonglong uVar18;
  longlong lVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [64];
  undefined1 auVar24 [16];
  undefined1 auVar25 [64];
  undefined1 auStack_248 [32];
  ulonglong local_228;
  undefined1 local_220 [40];
  int local_1f8 [2];
  longlong local_1f0;
  longlong local_1e8;
  longlong local_1e0;
  undefined1 local_1b4;
  float local_18c;
  float local_188;
  undefined1 local_14a;
  undefined1 local_148 [16];
  longlong local_138;
  undefined1 local_130 [8];
  undefined1 (*pauStack_128) [16];
  undefined1 (*local_120) [16];
  int local_118 [2];
  undefined1 local_110 [32];
  undefined1 local_f0 [16];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 local_d0 [16];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 local_b0 [16];
  undefined8 local_a0;
  undefined8 local_98;
  float local_90;
  float local_8c;
  undefined2 local_88;
  ulonglong local_78;
  
  local_78 = DAT_1808d5f00 ^ (ulonglong)auStack_248;
  lVar9 = FUN_18017ea70();
  *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
  if (param_2 + 0x2a0 == 0) {
    bVar1 = false;
  }
  else {
    local_228 = local_228 & 0xffffffff00000000;
    cVar7 = FUN_1804514f0(&local_228,param_2 + 0x2a0,4);
    if (cVar7 == '\0') {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
  }
  iVar5 = (int)local_228;
  lVar9 = FUN_18017ea70();
  if (*(int *)(lVar9 + 4) != 0) {
    *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
  }
  iVar15 = 0;
  if (bVar1) {
    iVar15 = iVar5;
  }
  lVar9 = FUN_18017ea70();
  *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
  if (param_2 + 0x2a8 == 0) {
    bVar1 = false;
  }
  else {
    local_228 = 0;
    cVar7 = FUN_1804514f0(&local_228,param_2 + 0x2a8,8);
    if (cVar7 == '\0') {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
  }
  uVar16 = local_228;
  lVar9 = FUN_18017ea70();
  if (*(int *)(lVar9 + 4) != 0) {
    *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
  }
  if (((bVar1) && (uVar16 != 0)) && (iVar15 - 1U < 10000)) {
    local_148 = (undefined1  [16])0x0;
    local_138 = 0;
    uVar18 = (ulonglong)iVar15;
    if (iVar15 != 0) {
      if (0x1af286bca1af286 < uVar18) {
                    /* WARNING: Subroutine does not return */
        FUN_1801136f0();
      }
      lVar10 = FUN_18015bca0(uVar18 * 0x98);
      lVar9 = local_148._0_8_;
      lVar19 = local_148._8_8_;
      lVar12 = lVar10;
      if (local_148._0_8_ != local_148._8_8_) {
        do {
          FUN_180212a10(lVar10);
          lVar10 = lVar10 + 0x98;
          lVar9 = lVar9 + 0x98;
        } while (lVar9 != lVar19);
      }
      FUN_180212130(local_148,lVar12,0,uVar18);
    }
    _local_130 = (undefined1  [16])0x0;
    local_120 = (undefined1 (*) [16])0x0;
    if (iVar15 == 0) {
      pauStack_128 = (undefined1 (*) [16])0x0;
      pauVar14 = pauStack_128;
    }
    else {
      if (0x7ffffffffffffff < uVar18) {
                    /* WARNING: Subroutine does not return */
        FUN_1801baf80();
      }
      local_130 = (undefined1  [8])FUN_18015bca0(uVar18 * 0x20);
      local_120 = (undefined1 (*) [16])((longlong)local_130 + uVar18 * 2 * 0x10);
      uVar11 = uVar18;
      pauStack_128 = (undefined1 (*) [16])local_130;
      do {
        *pauStack_128 = (undefined1  [16])0x0;
        *(undefined8 *)pauStack_128[1] = 0;
        *(undefined8 *)(pauStack_128[1] + 8) = 0;
        pauStack_128 = pauStack_128 + 2;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
      pauVar14 = pauStack_128;
    }
    auVar6 = local_130;
    uVar11 = (longlong)pauVar14 - (longlong)local_130;
    lVar9 = FUN_18017ea70();
    *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
    cVar7 = FUN_1804514f0(auVar6,uVar16,uVar11 & 0xffffffffffffffe0);
    lVar9 = FUN_18017ea70();
    if (*(int *)(lVar9 + 4) != 0) {
      *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
    }
    if (cVar7 != '\0') {
      if (0 < iVar15) {
        lVar19 = 0;
        lVar9 = 0;
        auVar23 = ZEXT864(0);
        auVar25 = ZEXT464(0x3f800000);
        do {
          lVar12 = *(longlong *)(lVar9 + 0x18 + (longlong)local_130);
          if (lVar12 != 0) {
            FUN_18063ab10(local_1f8,0,0xb0);
            lVar10 = FUN_18017ea70();
            *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
            cVar7 = FUN_1804514f0(local_1f8,lVar12,0xb0);
            lVar12 = FUN_18017ea70();
            if (*(int *)(lVar12 + 4) != 0) {
              *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
            }
            if (cVar7 != '\0') {
              lVar12 = 0;
              local_110._0_24_ = ZEXT1624((undefined1  [16])0x0);
              uVar16 = 0xf;
              local_110._24_8_ = 0xf;
              auVar2[0x1f] = 0;
              auVar2._0_31_ = local_110._1_31_;
              local_110 = auVar2 << 8;
              uStack_e0 = 0;
              uStack_d8 = 0xf;
              local_f0._1_15_ = SUB1615((undefined1  [16])0x0,1);
              auVar22[0xf] = 0;
              auVar22._0_15_ = local_f0._1_15_;
              local_f0 = auVar22 << 8;
              uStack_c0 = 0;
              uStack_b8 = 0xf;
              local_d0._1_15_ = SUB1615((undefined1  [16])0x0,1);
              auVar24[0xf] = 0;
              auVar24._0_15_ = local_d0._1_15_;
              local_d0 = auVar24 << 8;
              local_a0 = 0;
              local_98 = 0xf;
              local_b0._1_15_ = SUB1615((undefined1  [16])0x0,1);
              auVar3[0xf] = 0;
              auVar3._0_15_ = local_b0._1_15_;
              local_b0 = auVar3 << 8;
              local_90 = auVar23._0_4_;
              local_88 = 0;
              local_118[0] = local_1f8[0];
              local_8c = local_90;
              if ((local_1f8[0] == *(int *)(lVar9 + 0x10 + (longlong)local_130)) &&
                 (-1 < local_1f8[0])) {
                local_90 = local_18c;
                local_8c = local_188;
                local_88 = CONCAT11(local_1b4,local_14a);
                if (local_1f0 != 0) {
                  pauVar13 = (undefined1 (*) [32])FUN_180454280(local_220,local_1f0,0x100);
                  auVar24 = auVar25._0_16_;
                  auVar22 = auVar23._0_16_;
                  if (&local_110 != pauVar13) {
                    FUN_18015c010(local_110);
                    auVar24 = auVar25._0_16_;
                    auVar22 = auVar23._0_16_;
                    local_110 = *pauVar13;
                    *(undefined8 *)(*pauVar13 + 0x10) = 0;
                    *(undefined8 *)(*pauVar13 + 0x18) = 0xf;
                    (*pauVar13)[0] = 0;
                    uVar16 = local_110._24_8_;
                    lVar12 = local_110._16_8_;
                  }
                  auVar23 = ZEXT1664(auVar22);
                  auVar25 = ZEXT1664(auVar24);
                  FUN_18015c010(local_220);
                }
                if (local_1e8 != 0) {
                  pauVar14 = (undefined1 (*) [16])FUN_180454280(local_220,local_1e8,0x100);
                  auVar24 = auVar25._0_16_;
                  auVar22 = auVar23._0_16_;
                  if (&local_f0 != pauVar14) {
                    FUN_18015c010(local_f0);
                    auVar24 = auVar25._0_16_;
                    auVar22 = auVar23._0_16_;
                    local_f0 = *pauVar14;
                    uStack_e0 = *(undefined8 *)pauVar14[1];
                    uStack_d8 = *(undefined8 *)(pauVar14[1] + 8);
                    *(undefined8 *)pauVar14[1] = 0;
                    *(undefined8 *)(pauVar14[1] + 8) = 0xf;
                    (*pauVar14)[0] = 0;
                    uVar16 = local_110._24_8_;
                    lVar12 = local_110._16_8_;
                  }
                  auVar23 = ZEXT1664(auVar22);
                  auVar25 = ZEXT1664(auVar24);
                  FUN_18015c010(local_220);
                }
                if (local_1e0 != 0) {
                  pauVar14 = (undefined1 (*) [16])FUN_180454280(local_220,local_1e0,0x100);
                  auVar24 = auVar25._0_16_;
                  auVar22 = auVar23._0_16_;
                  if (&local_d0 != pauVar14) {
                    FUN_18015c010(local_d0);
                    auVar24 = auVar25._0_16_;
                    auVar22 = auVar23._0_16_;
                    local_d0 = *pauVar14;
                    uStack_c0 = *(undefined8 *)pauVar14[1];
                    uStack_b8 = *(undefined8 *)(pauVar14[1] + 8);
                    *(undefined8 *)pauVar14[1] = 0;
                    *(undefined8 *)(pauVar14[1] + 8) = 0xf;
                    (*pauVar14)[0] = 0;
                    uVar16 = local_110._24_8_;
                    lVar12 = local_110._16_8_;
                  }
                  auVar23 = ZEXT1664(auVar22);
                  auVar25 = ZEXT1664(auVar24);
                  FUN_18015c010(local_220);
                }
                if (lVar12 != 0) {
                  pcVar17 = local_110;
                  if (0xf < uVar16) {
                    pcVar17 = (char *)local_110._0_8_;
                  }
                  pcVar4 = local_110;
                  if (0xf < uVar16) {
                    pcVar4 = (char *)local_110._0_8_;
                  }
                  for (; pcVar4 != pcVar17 + lVar12; pcVar4 = pcVar4 + 1) {
                    if (0x5e < (byte)(*pcVar4 - 0x20U)) goto LAB_180209bd7;
                  }
                  fVar21 = local_90;
                  sVar8 = thunk_FUN_180624430(local_90);
                  if (((sVar8 < 1) &&
                      (fVar20 = local_8c, sVar8 = thunk_FUN_180624430(local_8c), sVar8 < 1)) &&
                     ((auVar23._0_4_ <= fVar21 && ((fVar20 <= auVar25._0_4_ && (fVar21 <= fVar20))))
                     )) {
                    if (local_148._8_8_ == local_138) {
                      FUN_180211650(local_148,local_148._8_8_,local_118);
                    }
                    else {
                      FUN_180212a10();
                      local_148._8_8_ = local_148._8_8_ + 0x98;
                    }
                    FUN_18015c010(local_b0);
                    FUN_18015c010(local_d0);
                    FUN_18015c010(local_f0);
                    FUN_18015c010(local_110);
                    goto LAB_180209b7f;
                  }
                }
              }
LAB_180209bd7:
              FUN_18015c010(local_b0);
              FUN_18015c010(local_d0);
              FUN_18015c010(local_f0);
              FUN_18015c010(local_110);
            }
            goto LAB_180209c00;
          }
LAB_180209b7f:
          lVar19 = lVar19 + 1;
          lVar9 = lVar9 + 0x20;
        } while (lVar19 < (longlong)uVar18);
      }
      if (local_148._0_8_ != local_148._8_8_) {
        FUN_1801b3290(&DAT_180cc9bb0);
        DAT_180cc9bb0 = local_148._0_8_;
        DAT_180cc9bb8 = local_148._8_8_;
        _DAT_180cc9bc0 = local_138;
        local_148 = (undefined1  [16])0x0;
        local_138 = 0;
      }
    }
LAB_180209c00:
    FUN_18020f720(local_130);
    FUN_1801b3290(local_148);
  }
}



