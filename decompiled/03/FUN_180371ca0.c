// FUN_180371ca0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180371ca0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180371ca0(undefined8 param_1,longlong param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  bool bVar5;
  bool bVar6;
  undefined8 ****ppppuVar7;
  char cVar8;
  short sVar9;
  int iVar10;
  undefined4 uVar11;
  undefined *puVar12;
  longlong lVar13;
  longlong lVar14;
  uint *puVar15;
  longlong lVar16;
  undefined8 *puVar17;
  longlong lVar18;
  uint *puVar19;
  undefined8 ****ppppuVar20;
  undefined4 *puVar21;
  undefined *puVar22;
  longlong *plVar23;
  ulonglong uVar24;
  undefined1 auVar25 [64];
  undefined1 auVar26 [16];
  undefined1 auVar27 [64];
  undefined1 auVar28 [64];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [64];
  undefined1 auStack_178 [32];
  uint local_158 [2];
  longlong local_150;
  uint local_148;
  longlong local_140;
  longlong local_138;
  longlong local_130;
  longlong local_128;
  longlong local_120;
  undefined *local_118;
  ulonglong local_110;
  longlong local_108;
  undefined1 local_100;
  undefined1 local_f8 [16];
  undefined1 auStack_e8 [16];
  longlong local_d8;
  undefined1 local_d0 [32];
  undefined8 ****local_b0;
  undefined8 uStack_a8;
  longlong lStack_a0;
  ulonglong uStack_98;
  undefined8 ****local_90;
  undefined8 uStack_88;
  longlong lStack_80;
  ulonglong uStack_78;
  ulonglong local_70;
  
  local_70 = DAT_1808d5f00 ^ (ulonglong)auStack_178;
  bVar6 = false;
  bVar5 = false;
  local_148 = 0;
  puVar12 = (undefined *)FUN_1803728e0();
  puVar22 = &DAT_180bda4e0;
  if (puVar12 != (undefined *)0x0) {
    puVar22 = puVar12;
  }
  uVar1 = *(uint *)(puVar22 + 0x80020);
  *(uint *)(puVar22 + 0x80020) = uVar1 + 1;
  if (uVar1 < 4) {
    puVar22 = puVar22 + (ulonglong)uVar1 * 0x20008;
    *(undefined4 *)(puVar22 + 0x20000) = 0;
    if (((param_2 != 0) && (param_3 - 1 < 0x100000)) &&
       ((DAT_180cc8e70 != '\0' || (DAT_180cc8fe8 != '\0')))) {
      local_110 = (ulonglong)param_3;
      if (0x1000 < (int)param_3) {
        local_110 = 0x1000;
      }
      if (0 < (int)local_110) {
        param_2 = param_2 + 0x20;
        auVar27 = ZEXT464(0x3f800000);
        auVar31 = ZEXT1664(_DAT_18086d450);
        auVar28 = ZEXT864(0);
        local_130 = local_108;
        local_118 = puVar22;
        do {
          lVar13 = FUN_18017ea70();
          *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
          if (param_2 == 0) {
            bVar3 = false;
          }
          else {
            local_150 = 0;
            cVar8 = FUN_1804514f0(&local_150,param_2,8);
            if (cVar8 == '\0') {
              bVar3 = false;
            }
            else {
              bVar3 = true;
              local_128 = local_150;
            }
          }
          lVar13 = local_128;
          lVar14 = FUN_18017ea70();
          if (*(int *)(lVar14 + 4) != 0) {
            *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + -1;
          }
          local_140 = 0;
          if (bVar3) {
            local_140 = lVar13;
          }
          local_d8 = local_140;
          iVar10 = FUN_1803711b0(local_140);
          auVar25 = ZEXT1664(auVar27._0_16_);
          if (iVar10 == 4) {
            if (DAT_180cc8fe8 != '\0') {
              auVar25 = ZEXT464(DAT_180cc9054);
              puVar21 = &DAT_180cc9050;
              goto LAB_180371e99;
            }
          }
          else if (iVar10 == 2) {
            if (DAT_180cc8e70 != '\0') {
              puVar21 = (undefined4 *)&DAT_180cc8edc;
LAB_180371e99:
              lVar14 = FUN_18017ea70();
              lVar13 = param_2 + 0x30;
              *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + 1;
              if (lVar13 == 0) {
                bVar3 = false;
              }
              else {
                local_158[0] = 0;
                cVar8 = FUN_1804514f0(local_158,lVar13,4);
                if (cVar8 == '\0') {
                  bVar3 = false;
                }
                else {
                  bVar3 = true;
                  local_148 = local_158[0];
                }
              }
              lVar14 = FUN_18017ea70();
              if (*(int *)(lVar14 + 4) != 0) {
                *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + -1;
              }
              if (bVar3) {
                local_158[0] = auVar28._0_4_;
                local_138 = CONCAT44(local_138._4_4_,auVar25._0_4_);
                local_150._0_4_ = auVar27._0_4_;
                sVar9 = thunk_FUN_180624430(auVar25._0_8_);
                uVar1 = local_148;
                if (sVar9 < 1) {
                  puVar19 = local_158;
                  if (auVar28._0_4_ <= auVar25._0_4_) {
                    puVar19 = (uint *)&local_138;
                  }
                  puVar15 = (uint *)&local_150;
                  if (auVar25._0_4_ <= auVar27._0_4_) {
                    puVar15 = puVar19;
                  }
                  uVar24 = (ulonglong)*puVar15;
                }
                else {
                  uVar24 = auVar27._0_8_;
                }
                uVar11 = FUN_180370a40(local_148,*puVar21,uVar24);
                local_150 = CONCAT44(local_150._4_4_,uVar11);
                if (lVar13 != 0) {
                  lVar14 = FUN_18017ea70();
                  *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + 1;
                  cVar8 = FUN_1801ad800(lVar13,&local_150);
                  lVar16 = FUN_18017ea70();
                  lVar14 = local_140;
                  auVar30 = auVar31._0_16_;
                  auVar29 = auVar28._0_16_;
                  auVar26 = auVar27._0_16_;
                  if (*(int *)(lVar16 + 4) != 0) {
                    *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + -1;
                  }
                  if (cVar8 != '\0') {
                    uVar2 = *(uint *)(puVar22 + 0x20000);
                    local_f8._8_4_ = uVar1;
                    local_f8._0_8_ = lVar13;
                    *(uint *)(puVar22 + 0x20000) = uVar2 + 1;
                    plVar23 = (longlong *)(local_118 + (ulonglong)uVar2 * 0x20);
                    auStack_e8 = ZEXT816(0);
                    *plVar23 = lVar13;
                    plVar23[1] = local_f8._8_8_;
                    plVar23[2] = 0;
                    plVar23[3] = 0;
                    local_138 = DAT_180bda4d0;
                    if ((iVar10 == 3) && (DAT_180bda4d0 != 0)) {
                      lVar13 = local_140 + 0x10;
                      auVar28 = ZEXT1664(auVar26);
                      auVar27 = ZEXT1664(auVar29);
                      auVar31 = ZEXT1664(auVar30);
                      lVar16 = FUN_18017ea70();
                      *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + 1;
                      if (lVar13 == 0) {
                        bVar6 = false;
                      }
                      else {
                        local_150 = 0;
                        cVar8 = FUN_1804514f0(&local_150,lVar13,8);
                        if (cVar8 == '\0') {
                          bVar6 = false;
                        }
                        else {
                          bVar6 = true;
                          local_120 = local_150;
                        }
                      }
                      lVar13 = local_120;
                      lVar16 = FUN_18017ea70();
                      if (*(int *)(lVar16 + 4) != 0) {
                        *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + -1;
                      }
                      lVar16 = 0;
                      if (bVar6) {
                        lVar16 = lVar13;
                      }
                      puVar17 = (undefined8 *)FUN_180454030(local_d0,lVar16,0x80);
                      auVar30 = auVar31._0_16_;
                      auVar29 = auVar27._0_16_;
                      auVar26 = auVar28._0_16_;
                      bVar6 = true;
                    }
                    else {
                      puVar17 = (undefined8 *)local_f8;
                      local_f8._1_15_ = SUB1615((undefined1  [16])0x0,1);
                      auVar4[0xf] = 0;
                      auVar4._0_15_ = local_f8._1_15_;
                      local_f8 = auVar4 << 8;
                      bVar5 = true;
                      auStack_e8 = auVar30;
                    }
                    local_b0 = (undefined8 ****)*puVar17;
                    uStack_a8 = puVar17[1];
                    lStack_a0 = puVar17[2];
                    uStack_98 = puVar17[3];
                    local_90 = local_b0;
                    uStack_88 = uStack_a8;
                    lStack_80 = lStack_a0;
                    uStack_78 = uStack_98;
                    *(undefined1 *)puVar17 = 0;
                    puVar17[2] = 0;
                    puVar17[3] = 0xf;
                    if (bVar5) {
                      bVar5 = false;
                      auVar28 = ZEXT1664(auVar26);
                      auVar27 = ZEXT1664(auVar29);
                      auVar31 = ZEXT1664(auVar30);
                      FUN_18015c010(local_f8);
                      auVar30 = auVar31._0_16_;
                      auVar29 = auVar27._0_16_;
                      auVar26 = auVar28._0_16_;
                    }
                    if (bVar6) {
                      bVar6 = false;
                      auVar28 = ZEXT1664(auVar26);
                      auVar27 = ZEXT1664(auVar29);
                      auVar31 = ZEXT1664(auVar30);
                      FUN_18015c010(local_d0);
                      auVar30 = auVar31._0_16_;
                      auVar29 = auVar27._0_16_;
                      auVar26 = auVar28._0_16_;
                    }
                    uVar24 = uStack_98;
                    lVar13 = lStack_a0;
                    ppppuVar7 = local_b0;
                    ppppuVar20 = &local_90;
                    if (0xf < uStack_98) {
                      ppppuVar20 = local_b0;
                    }
                    if (lStack_a0 == 0x1a) {
                      auVar28 = ZEXT1664(auVar26);
                      auVar27 = ZEXT1664(auVar29);
                      auVar31 = ZEXT1664(auVar30);
                      iVar10 = memcmp(ppppuVar20,"materials/sun/overlay.vmat",0x1a);
                      auVar30 = auVar31._0_16_;
                      auVar29 = auVar27._0_16_;
                      auVar26 = auVar28._0_16_;
                      if (iVar10 != 0) goto LAB_180372110;
LAB_180372140:
                      lVar16 = FUN_18017ea70();
                      lVar13 = param_2 + 8;
                      *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + 1;
                      if (lVar13 == 0) {
                        bVar3 = false;
                        local_100 = 0;
                      }
                      else {
                        local_140 = 0;
                        cVar8 = FUN_1804514f0(&local_140,lVar13,8);
                        if (cVar8 == '\0') {
                          bVar3 = false;
                          local_100 = 0;
                        }
                        else {
                          bVar3 = true;
                          local_130 = local_140;
                          local_108 = local_140;
                          local_100 = 1;
                        }
                      }
                      lVar16 = local_130;
                      lVar18 = FUN_18017ea70();
                      auVar30 = auVar31._0_16_;
                      auVar29 = auVar27._0_16_;
                      auVar26 = auVar28._0_16_;
                      if (*(int *)(lVar18 + 4) != 0) {
                        *(int *)(lVar18 + 4) = *(int *)(lVar18 + 4) + -1;
                      }
                      if (bVar3) {
                        if (param_2 != 0) {
                          lVar18 = FUN_18017ea70();
                          *(int *)(lVar18 + 4) = *(int *)(lVar18 + 4) + 1;
                          cVar8 = FUN_1801fde60(param_2,&local_138);
                          lVar18 = FUN_18017ea70();
                          if (*(int *)(lVar18 + 4) != 0) {
                            *(int *)(lVar18 + 4) = *(int *)(lVar18 + 4) + -1;
                          }
                          if ((cVar8 != '\0') && (lVar13 != 0)) {
                            lVar18 = FUN_18017ea70();
                            *(int *)(lVar18 + 4) = *(int *)(lVar18 + 4) + 1;
                            cVar8 = FUN_1801fde60(lVar13,&local_138);
                            lVar18 = FUN_18017ea70();
                            auVar30 = auVar31._0_16_;
                            auVar29 = auVar27._0_16_;
                            auVar26 = auVar28._0_16_;
                            if (*(int *)(lVar18 + 4) != 0) {
                              *(int *)(lVar18 + 4) = *(int *)(lVar18 + 4) + -1;
                            }
                            if (cVar8 != '\0') {
                              plVar23[2] = lVar14;
                              plVar23[3] = lVar16;
                              goto LAB_18037227d;
                            }
                          }
                          lVar14 = FUN_18017ea70();
                          *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + 1;
                          FUN_1801fde60(param_2,&local_d8);
                          lVar14 = FUN_18017ea70();
                          if (*(int *)(lVar14 + 4) != 0) {
                            *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + -1;
                          }
                        }
                        auVar30 = auVar31._0_16_;
                        auVar29 = auVar27._0_16_;
                        auVar26 = auVar28._0_16_;
                        if (lVar13 != 0) {
                          lVar14 = FUN_18017ea70();
                          *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + 1;
                          FUN_1801fde60(lVar13,&local_108);
                          lVar13 = FUN_18017ea70();
                          auVar30 = auVar31._0_16_;
                          auVar29 = auVar27._0_16_;
                          auVar26 = auVar28._0_16_;
                          if (*(int *)(lVar13 + 4) != 0) {
                            *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + -1;
                          }
                        }
                      }
                    }
                    else {
LAB_180372110:
                      ppppuVar20 = &local_90;
                      if (0xf < uVar24) {
                        ppppuVar20 = ppppuVar7;
                      }
                      if (lVar13 == 0x1c) {
                        auVar28 = ZEXT1664(auVar26);
                        auVar27 = ZEXT1664(auVar29);
                        auVar31 = ZEXT1664(auVar30);
                        iVar10 = memcmp(ppppuVar20,"materials/sun/overlay.vmat_c",0x1c);
                        auVar30 = auVar31._0_16_;
                        auVar29 = auVar27._0_16_;
                        auVar26 = auVar28._0_16_;
                        if (iVar10 == 0) goto LAB_180372140;
                      }
                    }
LAB_18037227d:
                    auVar27 = ZEXT1664(auVar26);
                    auVar28 = ZEXT1664(auVar29);
                    auVar31 = ZEXT1664(auVar30);
                    FUN_18015c010(&local_90);
                    puVar22 = local_118;
                  }
                }
              }
            }
          }
          else if ((iVar10 == 3) && (DAT_180cc8e70 != '\0')) {
            puVar21 = (undefined4 *)&DAT_180cc8ee0;
            goto LAB_180371e99;
          }
          param_2 = param_2 + 0x70;
          local_110 = local_110 - 1;
        } while (local_110 != 0);
      }
    }
  }
}



