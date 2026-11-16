// FUN_18036c6a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18036c6a0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18036c6a0(void)

{
  int *piVar1;
  short *psVar2;
  short sVar3;
  size_t _Size;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  short *psVar11;
  char cVar12;
  int iVar13;
  int iVar14;
  undefined8 uVar15;
  short *psVar16;
  undefined8 uVar17;
  undefined1 (*pauVar18) [16];
  undefined8 uVar19;
  undefined8 *puVar20;
  undefined8 ****ppppuVar21;
  undefined8 *puVar22;
  ulonglong uVar23;
  undefined1 *_Buf2;
  longlong lVar24;
  ulonglong uVar25;
  short *psVar26;
  ulonglong uVar27;
  byte *pbVar28;
  byte *pbVar29;
  longlong lVar30;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar31;
  undefined1 auStack_258 [32];
  undefined4 local_238;
  undefined1 local_218 [16];
  undefined1 local_208 [16];
  undefined1 auStack_1f8 [16];
  undefined1 local_1e8 [16];
  undefined1 auStack_1d8 [16];
  undefined1 local_1c8 [16];
  undefined1 auStack_1b8 [16];
  undefined1 local_1a8;
  undefined7 uStack_1a7;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  longlong local_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  longlong local_138;
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined8 *local_f8;
  undefined1 local_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 local_d0 [16];
  ulonglong local_c0;
  ulonglong local_b8;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined8 ****local_88 [2];
  ulonglong local_78;
  ulonglong local_70;
  undefined1 local_68 [16];
  ulonglong local_58;
  
  puVar20 = DAT_180b901b0;
  local_58 = DAT_1808d5f00 ^ (ulonglong)auStack_258;
  puVar22 = DAT_180b901a8;
  if (DAT_180b901a8 != DAT_180b901b0) {
    do {
      FUN_18015c010(puVar22 + 4);
      FUN_18015c010(puVar22);
      puVar22 = puVar22 + 8;
    } while (puVar22 != puVar20);
    DAT_180b901b0 = DAT_180b901a8;
  }
  puVar22 = DAT_180b901b0;
  puVar20 = DAT_180b901a8;
  if ((ulonglong)((longlong)DAT_180b901b8 - (longlong)DAT_180b901a8 >> 6) < 0x10) {
    uVar15 = FUN_18015bca0(0x400);
    FUN_18036fb90(DAT_180b901a8,DAT_180b901b0,uVar15);
    FUN_18036fe10(&DAT_180b901a8,uVar15,(longlong)puVar22 - (longlong)puVar20 >> 6,0x10);
  }
  lVar30 = DAT_180b90210;
  lVar24 = DAT_180b90208;
  if (DAT_180b90208 != DAT_180b90210) {
    do {
      FUN_18015c010(lVar24 + 0x20);
      FUN_18015c010(lVar24);
      lVar24 = lVar24 + 0x40;
    } while (lVar24 != lVar30);
    DAT_180b90210 = DAT_180b90208;
  }
  uVar25 = 0;
  uVar15 = 0;
  uVar31 = 0xf;
  do {
    local_1e8 = (undefined1  [16])0x0;
    auStack_1d8 = (undefined1  [16])0x0;
    lVar30 = -1;
    do {
      lVar30 = lVar30 + 1;
    } while (*(char *)(*(longlong *)((longlong)&PTR_s_Map_default_180701e60 + uVar25) + lVar30) !=
             '\0');
    FUN_18015ba30(local_1e8);
    local_1c8 = (undefined1  [16])0x0;
    auStack_1b8 = (undefined1  [16])0x0;
    lVar30 = -1;
    do {
      lVar30 = lVar30 + 1;
    } while (*(char *)(*(longlong *)((longlong)&PTR_PTR_180701ee0 + uVar25) + lVar30) != '\0');
    FUN_18015ba30(local_1c8);
    puVar20 = DAT_180b901b0;
    if (DAT_180b901b0 == DAT_180b901b8) {
      FUN_18036fc30(&DAT_180b901a8,DAT_180b901b0,local_1e8);
    }
    else {
      *DAT_180b901b0 = local_1e8._0_8_;
      puVar20[1] = local_1e8._8_8_;
      puVar20[2] = auStack_1d8._0_8_;
      puVar20[3] = auStack_1d8._8_8_;
      auStack_1d8._8_8_ = uVar31;
      auStack_1d8._0_8_ = uVar15;
      auVar5[0xf] = 0;
      auVar5._0_15_ = local_1e8._1_15_;
      local_1e8 = auVar5 << 8;
      puVar20[4] = local_1c8._0_8_;
      puVar20[5] = local_1c8._8_8_;
      puVar20[6] = auStack_1b8._0_8_;
      puVar20[7] = auStack_1b8._8_8_;
      auStack_1b8._8_8_ = uVar31;
      auStack_1b8._0_8_ = uVar15;
      auVar6[0xf] = 0;
      auVar6._0_15_ = local_1c8._1_15_;
      local_1c8 = auVar6 << 8;
      DAT_180b901b0 = DAT_180b901b0 + 8;
    }
    FUN_18015c010(local_1c8);
    FUN_18015c010(local_1e8);
    uVar25 = uVar25 + 8;
  } while (uVar25 < 0x80);
  FUN_18036b9d0(local_148);
  if (local_138 != 0) {
    local_108 = (undefined1  [16])0x0;
    local_f8 = (undefined8 *)0x0;
    local_98 = (undefined1  [16])0x0;
    iVar13 = FUN_1801c5780(local_98,local_148,2);
    uVar19 = local_98._8_8_;
    if (local_98._8_8_ != 0) {
      LOCK();
      *(int *)(local_98._8_8_ + 8) = *(int *)(local_98._8_8_ + 8) + 1;
      UNLOCK();
    }
    local_a8 = local_98;
    local_218 = (undefined1  [16])0x0;
    uVar17 = local_98._0_8_;
    lVar30 = local_98._8_8_;
    FUN_1800efed0(local_218);
    if (uVar19 != 0) {
      LOCK();
      piVar1 = (int *)(uVar19 + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    local_218._8_8_ = lVar30;
    local_218._0_8_ = uVar17;
    local_68 = (undefined1  [16])0x0;
    FUN_1800efed0(local_218);
    while ((uVar19 = local_a8._0_8_, local_a8._0_8_ != 0 && (iVar13 == 0))) {
      FUN_1801eb060(local_a8._0_8_,local_218);
      iVar13 = local_218._8_4_;
      if (local_218._0_4_ == 2) {
        puVar20 = (undefined8 *)(uVar19 + 0x20);
        if (7 < *(ulonglong *)(uVar19 + 0x38)) {
          puVar20 = (undefined8 *)*puVar20;
        }
        psVar2 = (short *)((longlong)puVar20 + *(longlong *)(uVar19 + 0x30) * 2);
        psVar16 = (short *)FUN_1800a7b00(puVar20,psVar2);
        psVar26 = psVar2;
        if (psVar16 != psVar2) {
          do {
            psVar11 = psVar2;
            if ((*psVar16 != 0x5c) && (*psVar16 != 0x2f)) break;
            psVar16 = psVar16 + 1;
          } while (psVar16 != psVar2);
          do {
            psVar26 = psVar11;
            if (psVar16 == psVar26) break;
            sVar3 = psVar26[-1];
            if ((sVar3 == 0x5c) || (psVar11 = psVar26 + -1, sVar3 == 0x2f)) break;
          } while( true );
        }
        local_208 = (undefined1  [16])0x0;
        auStack_1f8 = ZEXT816(0);
        FUN_180159e60(local_208,psVar26,(longlong)psVar2 - (longlong)psVar26 >> 1);
        FUN_180162b60(local_208,local_88);
        FUN_18015b930(local_208);
        if (7 < local_78) {
          ppppuVar21 = local_88;
          if (0xf < local_70) {
            ppppuVar21 = local_88[0];
          }
          if ((((6 < local_78) && (*(int *)((longlong)ppppuVar21 + (local_78 - 7)) == 0x6574762e))
              && (*(short *)((longlong)ppppuVar21 + (local_78 - 3)) == 0x5f78)) &&
             (*(char *)((longlong)ppppuVar21 + (local_78 - 1)) == 'c')) {
            local_d0 = (undefined1  [16])0x0;
            local_c0 = 0;
            local_b8 = 0;
            uVar25 = local_78 - 7;
            if (local_78 < local_78 - 7) {
              uVar25 = local_78;
            }
            ppppuVar21 = local_88;
            if (0xf < local_70) {
              ppppuVar21 = local_88[0];
            }
            FUN_18015ba30(local_d0,ppppuVar21,uVar25);
            uVar10 = local_b8;
            uVar25 = local_c0;
            local_128 = (undefined1  [16])0x0;
            local_118 = (undefined1  [16])0x0;
            uVar19 = local_d0._0_8_;
            pauVar18 = &local_d0;
            if (0xf < local_b8) {
              pauVar18 = (undefined1 (*) [16])local_d0._0_8_;
            }
            if (0x7fffffffffffffff < local_c0) {
                    /* WARNING: Subroutine does not return */
              FUN_18015bb70();
            }
            if (local_c0 < 0x10) {
              local_118._8_8_ = 0xf;
              local_118._0_8_ = local_c0;
              local_128 = *pauVar18;
              uVar27 = local_c0;
              uVar23 = 0xf;
            }
            else {
              uVar27 = local_c0 | 0xf;
              if (uVar27 < 0x8000000000000000) {
                if (uVar27 < 0x16) {
                  uVar27 = 0x16;
                }
              }
              else {
                uVar27 = 0x7fffffffffffffff;
              }
              uVar17 = FUN_18015bca0(uVar27 + 1);
              local_128._0_8_ = uVar17;
              local_118._8_8_ = uVar27;
              local_118._0_8_ = uVar25;
              FUN_18063aed0(uVar17,pauVar18,uVar25 + 1);
              uVar27 = local_118._0_8_;
              uVar23 = local_118._8_8_;
            }
            pbVar28 = local_128;
            if (0xf < uVar23) {
              pbVar28 = (byte *)local_128._0_8_;
            }
            pbVar29 = pbVar28 + uVar27;
            if (pbVar28 != pbVar29) {
              do {
                iVar14 = tolower((uint)*pbVar28);
                *pbVar28 = (byte)iVar14;
                pbVar28 = pbVar28 + 1;
              } while (pbVar28 != pbVar29);
              uVar27 = local_118._0_8_;
              uVar23 = local_118._8_8_;
            }
            pbVar28 = local_128;
            if (0xf < uVar23) {
              pbVar28 = (byte *)local_128._0_8_;
            }
            pbVar29 = (byte *)local_128._0_8_;
            if (uVar27 < 4) {
LAB_18036cc41:
              pbVar28 = local_128;
              if (0xf < uVar23) {
                pbVar28 = pbVar29;
              }
              if (8 < uVar27) {
                pbVar29 = (byte *)thunk_FUN_1805f9970(pbVar28,pbVar28 + uVar27,"_lighting");
                if ((pbVar29 != pbVar28 + uVar27) && ((longlong)pbVar29 - (longlong)pbVar28 != -1))
                goto LAB_18036ccc5;
                uVar27 = local_118._0_8_;
                uVar23 = local_118._8_8_;
                pbVar29 = (byte *)local_128._0_8_;
              }
              pbVar28 = local_128;
              if (0xf < uVar23) {
                pbVar28 = pbVar29;
              }
              if (((uVar27 < 3) ||
                  (pbVar29 = (byte *)thunk_FUN_1805f9970(pbVar28,pbVar28 + uVar27,&DAT_180805604),
                  pbVar29 == pbVar28 + uVar27)) || ((longlong)pbVar29 - (longlong)pbVar28 == -1)) {
                local_168 = (undefined1  [16])0x0;
                local_158 = (undefined1  [16])0x0;
                FUN_18015ba30(local_168,"materials/skybox/",0x11);
                pauVar18 = &local_d0;
                if (0xf < uVar10) {
                  pauVar18 = (undefined1 (*) [16])uVar19;
                }
                pauVar18 = (undefined1 (*) [16])FUN_18015b2a0(local_168,pauVar18,uVar25);
                local_208 = *pauVar18;
                auStack_1f8 = pauVar18[1];
                *(undefined8 *)(pauVar18[1] + 8) = 0xf;
                (*pauVar18)[0] = 0;
                *(undefined8 *)pauVar18[1] = 0;
                pauVar18 = (undefined1 (*) [16])FUN_18015b2a0(local_208,&DAT_1808055d8,5);
                local_f0 = *pauVar18;
                auStack_e0 = pauVar18[1];
                (*pauVar18)[0] = 0;
                *(undefined8 *)pauVar18[1] = 0;
                *(undefined8 *)(pauVar18[1] + 8) = 0xf;
                FUN_18015c010(local_208);
                FUN_18015c010(local_168);
                cVar12 = FUN_18036eb90(&DAT_180b901a8,local_f0);
                if (cVar12 == '\0') {
                  uVar19 = local_108._8_8_;
                  if (local_108._0_8_ != local_108._8_8_) {
                    uVar9 = auStack_e0._8_8_;
                    uVar8 = auStack_e0._0_8_;
                    uVar17 = local_f0._0_8_;
                    puVar20 = (undefined8 *)(local_108._0_8_ + 0x20);
                    do {
                      _Buf2 = local_f0;
                      if (0xf < (ulonglong)uVar9) {
                        _Buf2 = (undefined1 *)uVar17;
                      }
                      _Size = puVar20[2];
                      puVar22 = puVar20;
                      if (0xf < (ulonglong)puVar20[3]) {
                        puVar22 = (undefined8 *)*puVar20;
                      }
                      if ((_Size == uVar8) &&
                         ((_Size == 0 || (iVar14 = memcmp(puVar22,_Buf2,_Size), iVar14 == 0))))
                      goto LAB_18036cedd;
                      puVar22 = puVar20 + 4;
                      puVar20 = puVar20 + 8;
                    } while (puVar22 != (undefined8 *)uVar19);
                  }
                  uVar19 = FUN_18015b360(local_1e8,local_d0);
                  FUN_18036bbc0(&local_1a8,uVar19);
                  auVar5 = local_f0;
                  uVar19 = local_f0._0_8_;
                  uVar17 = local_f0._8_8_;
                  uVar8 = auStack_e0._0_8_;
                  uVar9 = auStack_e0._8_8_;
                  local_188 = local_f0._0_8_;
                  uStack_180 = local_f0._8_8_;
                  uStack_178 = auStack_e0._0_8_;
                  uStack_170 = auStack_e0._8_8_;
                  auStack_e0._8_8_ = uVar31;
                  auStack_e0._0_8_ = uVar15;
                  auVar7[0xf] = 0;
                  auVar7._0_15_ = local_f0._1_15_;
                  local_f0 = auVar7 << 8;
                  if ((undefined8 *)local_108._8_8_ == local_f8) {
                    FUN_18036fc30(local_108,local_108._8_8_,&local_1a8);
                  }
                  else {
                    *(ulonglong *)local_108._8_8_ = CONCAT71(uStack_1a7,local_1a8);
                    *(undefined8 *)(local_108._8_8_ + 8) = uStack_1a0;
                    *(undefined8 *)(local_108._8_8_ + 0x10) = uStack_198;
                    *(undefined8 *)(local_108._8_8_ + 0x18) = uStack_190;
                    local_1a8 = 0;
                    *(undefined8 *)(local_108._8_8_ + 0x20) = uVar19;
                    *(undefined8 *)(local_108._8_8_ + 0x28) = uVar17;
                    *(undefined8 *)(local_108._8_8_ + 0x30) = uVar8;
                    *(undefined8 *)(local_108._8_8_ + 0x38) = uVar9;
                    local_188._1_7_ = auVar5._1_7_;
                    local_188 = (ulonglong)local_188._1_7_ << 8;
                    local_108._8_8_ = (undefined8 *)(local_108._8_8_ + 0x40);
                    uStack_198 = uVar15;
                    uStack_190 = uVar31;
                    uStack_178 = uVar15;
                    uStack_170 = uVar31;
                  }
                  FUN_18015c010(&local_188);
                  FUN_18015c010(&local_1a8);
                }
LAB_18036cedd:
                FUN_18015c010(local_f0);
              }
            }
            else {
              pbVar29 = (byte *)thunk_FUN_1805f9970(pbVar28,pbVar28 + uVar27,&DAT_180805638);
              if ((pbVar29 == pbVar28 + uVar27) || ((longlong)pbVar29 - (longlong)pbVar28 == -1)) {
                uVar27 = local_118._0_8_;
                uVar23 = local_118._8_8_;
                pbVar29 = (byte *)local_128._0_8_;
                goto LAB_18036cc41;
              }
            }
LAB_18036ccc5:
            FUN_18015c010(local_128);
            FUN_18015c010(local_d0);
            FUN_18015c010(local_88);
            goto LAB_18036cef7;
          }
        }
        FUN_18015c010(local_88);
      }
LAB_18036cef7:
      iVar14 = FUN_1801bde70(local_a8);
      if (iVar14 != 0) {
        FUN_1801bdd80(extraout_XMM0_Qa,iVar14);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    FUN_1800efed0(local_68);
    FUN_1800efed0(local_a8);
    FUN_1800efed0(local_98);
    local_238 = 0;
    FUN_18036ef50(local_108._0_8_,local_108._8_8_,(longlong)(local_108._8_8_ - local_108._0_8_) >> 6
                  ,0);
    FUN_1801b3410(&DAT_180b90208);
    DAT_180b90208 = local_108._0_8_;
    DAT_180b90210 = local_108._8_8_;
    _DAT_180b90218 = local_f8;
    local_108 = (undefined1  [16])0x0;
    local_f8 = (undefined8 *)0x0;
    FUN_1801b3410(local_108);
  }
  FUN_18015b930(local_148);
}



