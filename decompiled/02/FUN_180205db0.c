// FUN_180205db0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180205db0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Type propagation algorithm not settling */

void FUN_180205db0(undefined8 *param_1,longlong param_2,char param_3)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  bool bVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  ulonglong uVar20;
  undefined8 uVar21;
  longlong lVar22;
  ulonglong uVar23;
  uint uVar24;
  int iVar25;
  byte *******pppppppbVar26;
  int *piVar27;
  size_t sVar28;
  size_t sVar29;
  longlong lVar30;
  byte *******pppppppbVar31;
  undefined8 *_Buf1;
  undefined1 *puVar32;
  uint uVar33;
  char *pcVar34;
  byte bVar35;
  byte *******pppppppbVar36;
  longlong lVar37;
  longlong lVar38;
  undefined8 uVar39;
  undefined1 auStack_378 [32];
  undefined8 local_358;
  byte *******local_350;
  longlong local_348;
  char local_338;
  undefined8 *local_330;
  char *local_318;
  undefined8 local_310;
  undefined4 local_308;
  undefined1 local_300 [16];
  ulonglong uStack_2f0;
  ulonglong uStack_2e8;
  undefined1 local_2e0 [16];
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined1 local_2c0 [16];
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined1 local_2a0 [16];
  longlong lStack_290;
  undefined8 uStack_288;
  undefined1 local_280 [16];
  longlong lStack_270;
  undefined8 uStack_268;
  undefined1 local_260 [16];
  undefined8 uStack_250;
  undefined8 uStack_248;
  longlong local_230;
  ulonglong *local_228;
  longlong local_220;
  undefined8 *local_218;
  char *local_210;
  undefined1 local_208;
  undefined7 uStack_207;
  undefined8 uStack_200;
  longlong lStack_1f8;
  undefined8 uStack_1f0;
  char local_1e8 [8];
  undefined1 local_1e0 [16];
  longlong local_1d0;
  byte *******local_1c8 [2];
  size_t local_1b8;
  ulonglong local_1b0;
  undefined1 local_1a8 [16];
  longlong local_198;
  ulonglong local_190;
  byte *******local_188 [2];
  longlong local_178;
  ulonglong local_170;
  undefined8 local_168 [2];
  uint local_158 [2];
  undefined1 local_150 [16];
  ulonglong uStack_140;
  ulonglong uStack_138;
  undefined1 local_130 [16];
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 local_110 [16];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 local_f0 [16];
  longlong lStack_e0;
  undefined8 uStack_d8;
  undefined1 local_d0 [16];
  longlong lStack_c0;
  undefined8 uStack_b8;
  undefined1 local_b0 [16];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 local_88;
  undefined4 uStack_84;
  longlong lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 local_68 [16];
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_378;
  if (0x1000000 < *(ulonglong *)(param_2 + 8)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  local_190 = 0;
  local_168[0] = 0;
  local_1e8[0] = '\x01';
  local_228 = &local_190;
  local_218 = local_168;
  local_210 = local_1e8;
  local_1e0 = (undefined1  [16])0x0;
  local_1d0 = 0;
  local_1a8 = (undefined1  [16])0x0;
  local_198 = 0;
  uStack_84 = 0;
  uStack_70 = 0;
  local_68 = ZEXT816(0);
  uStack_58 = 0;
  uStack_50 = 0;
  local_88 = 0;
  lStack_80 = 0;
  uStack_78 = 0;
  local_338 = param_3;
  local_330 = param_1;
  local_230 = param_2;
  local_220 = param_2;
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_318 = "tier0.dll:g_pMemAlloc";
    local_310 = 0x15;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_318);
  }
  lStack_80 = (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x18);
  *(longlong *)lStack_80 = lStack_80;
  *(longlong *)(lStack_80 + 8) = lStack_80;
  uStack_70 = 0;
  local_68 = (undefined1  [16])0x0;
  uStack_58 = 7;
  uStack_50 = 8;
  local_88 = 0x3f800000;
  FUN_1801406e0(&uStack_70,0x10,lStack_80);
  local_158[0] = 0;
  uStack_140 = 0;
  uStack_138 = 0xf;
  local_150._1_15_ = SUB1615((undefined1  [16])0x0,1);
  auVar2[0xf] = 0;
  auVar2._0_15_ = local_150._1_15_;
  local_150 = auVar2 << 8;
  uStack_120 = 0;
  uStack_118 = 0xf;
  local_130._1_15_ = SUB1615((undefined1  [16])0x0,1);
  auVar3[0xf] = 0;
  auVar3._0_15_ = local_130._1_15_;
  local_130 = auVar3 << 8;
  uStack_100 = 0;
  uStack_f8 = 0xf;
  local_110._1_15_ = SUB1615((undefined1  [16])0x0,1);
  auVar4[0xf] = 0;
  auVar4._0_15_ = local_110._1_15_;
  local_110 = auVar4 << 8;
  lStack_e0 = 0;
  uStack_d8 = 0xf;
  local_f0._1_15_ = SUB1615((undefined1  [16])0x0,1);
  auVar5[0xf] = 0;
  auVar5._0_15_ = local_f0._1_15_;
  local_f0 = auVar5 << 8;
  lStack_c0 = 0;
  uStack_b8 = 0xf;
  local_d0._1_15_ = SUB1615((undefined1  [16])0x0,1);
  auVar6[0xf] = 0;
  auVar6._0_15_ = local_d0._1_15_;
  local_d0 = auVar6 << 8;
  uStack_a0 = 0;
  uStack_98 = 0xf;
  local_b0._1_15_ = SUB1615((undefined1  [16])0x0,1);
  auVar7[0xf] = 0;
  auVar7._0_15_ = local_b0._1_15_;
  local_b0 = auVar7 << 8;
  lVar37 = 0;
  if (local_190 < *(ulonglong *)(param_2 + 8)) {
    lVar38 = 0;
    uVar39 = 0xf;
    do {
      if (local_1e8[0] == '\0') {
        param_1 = local_330;
        goto LAB_1802068b3;
      }
      FUN_180206970(&local_228,local_1c8);
      if (local_1b8 == 0) {
LAB_180206824:
        FUN_18015c010(local_1c8);
        break;
      }
      pppppppbVar26 = (byte *******)local_1c8;
      if (0xf < local_1b0) {
        pppppppbVar26 = local_1c8[0];
      }
      if ((local_1b8 == 1) && (*(byte *)pppppppbVar26 == 0x7d)) {
        if (local_1e0._0_8_ == local_1e0._8_8_) {
          local_1e8[0] = '\0';
          goto LAB_180206824;
        }
        if (lVar37 == (longlong)(local_1e0._8_8_ - local_1e0._0_8_) >> 5) {
          if (((0 < (int)local_158[0]) && (lStack_e0 != 0)) &&
             ((param_3 == '\0' || (lStack_c0 != 0)))) {
            piVar27 = (int *)local_150;
            if (0xf < uStack_138) {
              piVar27 = (int *)local_150._0_8_;
            }
            if (((uStack_140 < 6) || (*piVar27 != 0x61727073)) || ((short)piVar27[1] != 0x5f79)) {
              piVar27 = (int *)local_150;
              if (0xf < uStack_138) {
                piVar27 = (int *)local_150._0_8_;
              }
              if (((uStack_140 < 6) || (*piVar27 != 0x63746170)) || ((short)piVar27[1] != 0x5f68)) {
                FUN_1801af9d0(&local_88,&local_318,local_158);
                if ((char)local_310 != '\0') {
                  if (local_1a8._8_8_ == local_198) {
                    FUN_1802119c0(local_1a8,local_1a8._8_8_,local_158);
                  }
                  else {
                    FUN_180212600();
                    local_1a8._8_8_ = local_1a8._8_8_ + 200;
                  }
                }
              }
            }
          }
          lVar37 = 0;
        }
        FUN_18015c010(local_1e0._8_8_ + -0x20);
        local_1e0._8_8_ = local_1e0._8_8_ + -0x20;
      }
      else {
        FUN_180206970(&local_228,local_188);
        uVar23 = local_170;
        lVar22 = local_178;
        pppppppbVar36 = local_188[0];
        uVar20 = local_1b0;
        sVar28 = local_1b8;
        pppppppbVar26 = local_1c8[0];
        pppppppbVar31 = (byte *******)local_188;
        if (0xf < local_170) {
          pppppppbVar31 = local_188[0];
        }
        lVar30 = local_1e0._8_8_;
        if (local_178 == 1) {
          if (*(byte *)pppppppbVar31 == 0x7b) {
            uVar24 = 0;
          }
          else {
            uVar24 = -(uint)(*(byte *)pppppppbVar31 < 0x7b) | 1;
          }
          if (uVar24 != 0) goto LAB_1802065ae;
          if (0x1f < (ulonglong)((longlong)(local_1e0._8_8_ - local_1e0._0_8_) >> 5)) {
            local_1e8[0] = '\0';
            FUN_18015c010(local_188);
            goto LAB_180206824;
          }
          if (local_1e0._0_8_ != local_1e0._8_8_) {
            pcVar34 = "sticker_kits";
            if (param_3 != '\0') {
              pcVar34 = "keychain_definitions";
            }
            sVar28 = 0xffffffffffffffff;
            do {
              sVar28 = sVar28 + 1;
            } while (pcVar34[sVar28] != '\0');
            sVar29 = *(size_t *)(local_1e0._8_8_ + -0x10);
            _Buf1 = (undefined8 *)(local_1e0._8_8_ + -0x20);
            if (0xf < *(ulonglong *)(local_1e0._8_8_ + -8)) {
              _Buf1 = (undefined8 *)*_Buf1;
            }
            if (sVar29 == sVar28) {
              if (sVar29 != 0) {
                iVar25 = memcmp(_Buf1,pcVar34,sVar29);
                if (iVar25 != 0) goto LAB_18020656e;
              }
              pppppppbVar26 = (byte *******)local_1c8;
              if (0xf < local_1b0) {
                pppppppbVar26 = local_1c8[0];
              }
              bVar35 = 0;
              pppppppbVar36 = pppppppbVar26;
              if ((pppppppbVar26 != (byte *******)((longlong)pppppppbVar26 + local_1b8)) &&
                 (*(byte *)pppppppbVar26 == 0x2d)) {
                bVar35 = 1;
                pppppppbVar36 = (byte *******)((longlong)pppppppbVar26 + 1);
              }
              uVar24 = 0;
              bVar8 = false;
              for (; pppppppbVar36 != (byte *******)((longlong)pppppppbVar26 + local_1b8);
                  pppppppbVar36 = (byte *******)((longlong)pppppppbVar36 + 1)) {
                bVar1 = (&DAT_1807c5b10)[*(byte *)pppppppbVar36];
                if (9 < bVar1) break;
                if ((uVar24 < 0xccccccc) || ((uVar24 == 0xccccccc && (bVar1 <= (byte)(bVar35 + 7))))
                   ) {
                  uVar24 = (uint)bVar1 + uVar24 * 10;
                }
                else {
                  bVar8 = true;
                }
              }
              uVar33 = 0;
              if ((longlong)pppppppbVar36 - (longlong)pppppppbVar26 == (ulonglong)bVar35) {
                iVar25 = 0x16;
                pppppppbVar36 = pppppppbVar26;
              }
              else if (bVar8) {
                iVar25 = 0x22;
              }
              else {
                uVar33 = uVar24;
                if (bVar35 != 0) {
                  uVar33 = -uVar24;
                }
                iVar25 = 0;
              }
              local_308 = 0;
              uStack_2f0 = 0;
              uStack_2e8 = 0xf;
              local_300._1_15_ = SUB1615((undefined1  [16])0x0,1);
              auVar9[0xf] = 0;
              auVar9._0_15_ = local_300._1_15_;
              local_300 = auVar9 << 8;
              uStack_2d0 = 0;
              uStack_2c8 = 0xf;
              local_2e0._1_15_ = SUB1615((undefined1  [16])0x0,1);
              auVar10[0xf] = 0;
              auVar10._0_15_ = local_2e0._1_15_;
              local_2e0 = auVar10 << 8;
              uStack_2b0 = 0;
              uStack_2a8 = 0xf;
              local_2c0._1_15_ = SUB1615((undefined1  [16])0x0,1);
              auVar11[0xf] = 0;
              auVar11._0_15_ = local_2c0._1_15_;
              local_2c0 = auVar11 << 8;
              lStack_290 = 0;
              uStack_288 = 0xf;
              local_2a0._1_15_ = SUB1615((undefined1  [16])0x0,1);
              auVar12[0xf] = 0;
              auVar12._0_15_ = local_2a0._1_15_;
              local_2a0 = auVar12 << 8;
              lStack_270 = 0;
              uStack_268 = 0xf;
              local_280._1_15_ = SUB1615((undefined1  [16])0x0,1);
              auVar13[0xf] = 0;
              auVar13._0_15_ = local_280._1_15_;
              local_280 = auVar13 << 8;
              uStack_250 = 0;
              uStack_248 = 0xf;
              local_260._1_15_ = SUB1615((undefined1  [16])0x0,1);
              auVar14[0xf] = 0;
              auVar14._0_15_ = local_260._1_15_;
              local_260 = auVar14 << 8;
              local_158[0] = 0;
              FUN_18015c010(local_150);
              local_150 = local_300;
              uStack_140 = uStack_2f0;
              uStack_138 = uStack_2e8;
              uStack_2f0 = 0;
              uStack_2e8 = 0xf;
              auVar15[0xf] = 0;
              auVar15._0_15_ = local_300._1_15_;
              local_300 = auVar15 << 8;
              FUN_18015c010(local_130);
              local_130 = local_2e0;
              uStack_120 = uStack_2d0;
              uStack_118 = uStack_2c8;
              uStack_2d0 = 0;
              uStack_2c8 = 0xf;
              auVar16[0xf] = 0;
              auVar16._0_15_ = local_2e0._1_15_;
              local_2e0 = auVar16 << 8;
              FUN_18015c010(local_110);
              local_110 = local_2c0;
              uStack_100 = uStack_2b0;
              uStack_f8 = uStack_2a8;
              uStack_2b0 = 0;
              uStack_2a8 = 0xf;
              auVar17[0xf] = 0;
              auVar17._0_15_ = local_2c0._1_15_;
              local_2c0 = auVar17 << 8;
              FUN_18015c010(local_f0);
              local_f0 = local_2a0;
              lStack_e0 = lStack_290;
              uStack_d8 = uStack_288;
              lStack_290 = 0;
              uStack_288 = 0xf;
              auVar18[0xf] = 0;
              auVar18._0_15_ = local_2a0._1_15_;
              local_2a0 = auVar18 << 8;
              FUN_18015c010(local_d0);
              local_d0 = local_280;
              lStack_c0 = lStack_270;
              uStack_b8 = uStack_268;
              lStack_270 = 0;
              uStack_268 = 0xf;
              auVar19[0xf] = 0;
              auVar19._0_15_ = local_280._1_15_;
              local_280 = auVar19 << 8;
              FUN_18015c010(local_b0);
              local_b0 = local_260;
              uStack_a0 = uStack_250;
              uStack_98 = uStack_248;
              FUN_18015c010(local_260);
              FUN_18015c010(local_280);
              FUN_18015c010(local_2a0);
              FUN_18015c010(local_2c0);
              FUN_18015c010(local_2e0);
              FUN_18015c010(local_300);
              if (iVar25 == 0) {
                pppppppbVar26 = (byte *******)local_1c8;
                if (0xf < local_1b0) {
                  pppppppbVar26 = local_1c8[0];
                }
                if (pppppppbVar36 == (byte *******)((longlong)pppppppbVar26 + local_1b8)) {
                  local_158[0] = uVar33;
                }
              }
              lVar37 = ((longlong)(local_1e0._8_8_ - local_1e0._0_8_) >> 5) + 1;
              lVar30 = local_1e0._8_8_;
            }
          }
LAB_18020656e:
          if (lVar30 == local_1d0) {
            FUN_1802117e0(local_1e0,lVar30,local_1c8);
          }
          else {
            FUN_18015b360(lVar30,local_1c8);
            local_1e0._8_8_ = local_1e0._8_8_ + 0x20;
          }
        }
        else {
LAB_1802065ae:
          if ((lVar37 != 0) && ((longlong)(local_1e0._8_8_ - local_1e0._0_8_) >> 5 == lVar37)) {
            pppppppbVar31 = (byte *******)local_1c8;
            if (0xf < local_1b0) {
              pppppppbVar31 = local_1c8[0];
            }
            if ((local_1b8 == 4) && (*(int *)pppppppbVar31 == 0x656d616e)) {
              puVar32 = local_150;
            }
            else {
              pcVar34 = "item_name";
              if (local_338 != '\0') {
                pcVar34 = "loc_name";
              }
              sVar29 = 0xffffffffffffffff;
              do {
                sVar29 = sVar29 + 1;
              } while (pcVar34[sVar29] != '\0');
              pppppppbVar31 = (byte *******)local_1c8;
              if (0xf < local_1b0) {
                pppppppbVar31 = local_1c8[0];
              }
              if ((local_1b8 == sVar29) &&
                 ((local_1b8 == 0 || (iVar25 = memcmp(pppppppbVar31,pcVar34,local_1b8), iVar25 == 0)
                  ))) {
                puVar32 = local_130;
              }
              else if (local_338 == '\0') {
                pppppppbVar31 = (byte *******)local_1c8;
                if (0xf < uVar20) {
                  pppppppbVar31 = pppppppbVar26;
                }
                if (sVar28 == 0x10) {
                  lVar30 = (longlong)*pppppppbVar31 + -0x5f72656b63697473;
                  if (lVar30 == 0) {
                    lVar30 = (longlong)pppppppbVar31[1] + -0x6c6169726574616d;
                  }
                  if (lVar30 == 0) {
                    if (0x7fffffffffffffffU - lVar22 < 0xe) {
                    /* WARNING: Subroutine does not return */
                      FUN_18015bb70();
                    }
                    local_350 = (byte *******)local_188;
                    if (0xf < uVar23) {
                      local_350 = pppppppbVar36;
                    }
                    local_348 = lVar22;
                    local_358 = 0xe;
                    FUN_18015a9c0(&local_208);
                    FUN_18015c010(local_f0);
                    local_f0._1_7_ = uStack_207;
                    local_f0[0] = local_208;
                    local_f0._8_8_ = uStack_200;
                    lStack_e0 = lStack_1f8;
                    uStack_d8 = uStack_1f0;
                    local_208 = 0;
                    lStack_1f8 = lVar38;
                    uStack_1f0 = uVar39;
                    FUN_18015c010(&local_208);
                    goto LAB_1802067e5;
                  }
                }
LAB_180206794:
                pppppppbVar31 = (byte *******)local_1c8;
                if (0xf < uVar20) {
                  pppppppbVar31 = pppppppbVar26;
                }
                if ((((sVar28 != 0xb) || (*pppppppbVar31 != (byte ******)0x7261725f6d657469)) ||
                    (*(short *)(pppppppbVar31 + 1) != 0x7469)) ||
                   (*(byte *)((longlong)pppppppbVar31 + 10) != 0x79)) goto LAB_1802067e5;
                puVar32 = local_b0;
              }
              else {
                pppppppbVar31 = (byte *******)local_1c8;
                if (0xf < uVar20) {
                  pppppppbVar31 = pppppppbVar26;
                }
                if ((sVar28 == 0xf) &&
                   (iVar25 = memcmp(pppppppbVar31,"image_inventory",0xf), iVar25 == 0)) {
                  puVar32 = local_f0;
                }
                else {
                  pppppppbVar31 = (byte *******)local_1c8;
                  if (0xf < uVar20) {
                    pppppppbVar31 = pppppppbVar26;
                  }
                  if ((sVar28 != 0x16) ||
                     (iVar25 = memcmp(pppppppbVar31,"pedestal_display_model",0x16), iVar25 != 0))
                  goto LAB_180206794;
                  puVar32 = local_d0;
                }
              }
            }
            pppppppbVar26 = (byte *******)local_188;
            if (0xf < uVar23) {
              pppppppbVar26 = pppppppbVar36;
            }
            FUN_180113930(puVar32,pppppppbVar26,lVar22);
          }
        }
LAB_1802067e5:
        FUN_18015c010(local_188);
        param_2 = local_230;
        param_3 = local_338;
      }
      FUN_18015c010(local_1c8);
    } while (local_190 < *(ulonglong *)(param_2 + 8));
    param_1 = local_330;
  }
  lVar37 = local_198;
  if (local_1e8[0] != '\0') {
    if (local_1e0._0_8_ == local_1e0._8_8_) {
      local_198 = 0;
      uVar21 = local_1a8._8_8_;
      uVar39 = local_1a8._0_8_;
      local_1a8 = ZEXT816(0);
      *param_1 = uVar39;
      param_1[1] = uVar21;
      param_1[2] = lVar37;
      goto LAB_1802068be;
    }
  }
LAB_1802068b3:
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
LAB_1802068be:
  FUN_18015c010(local_b0);
  FUN_18015c010(local_d0);
  FUN_18015c010(local_f0);
  FUN_18015c010(local_110);
  FUN_18015c010(local_130);
  FUN_18015c010(local_150);
  FUN_18017e9a0(&local_88);
  FUN_1801b3370(local_1a8);
  FUN_180111b90(local_1e0);
}



