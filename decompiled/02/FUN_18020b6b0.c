// FUN_18020b6b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18020b6b0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18020b6b0(void)

{
  undefined8 *puVar1;
  short *psVar2;
  undefined8 *puVar3;
  short sVar4;
  undefined8 uVar5;
  undefined8 _Size;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined1 *_Buf1;
  undefined1 *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  longlong lVar18;
  ulonglong *puVar19;
  ulonglong uVar20;
  ulonglong *puVar21;
  ulonglong *puVar22;
  undefined1 auVar25 [12];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auStack_1a8 [32];
  undefined1 local_188;
  short local_178;
  longlong local_170;
  short local_168;
  undefined2 uStack_166;
  undefined4 uStack_164;
  ulonglong local_160;
  longlong local_158;
  undefined1 local_150 [16];
  undefined1 local_140 [16];
  longlong local_130 [2];
  undefined1 local_120 [16];
  undefined1 local_110 [16];
  char *local_f8;
  undefined8 local_f0;
  undefined1 local_e8 [16];
  ulonglong local_d8;
  ulonglong local_d0;
  float local_c8;
  undefined4 uStack_c4;
  longlong lStack_c0;
  ulonglong uStack_b8;
  longlong lStack_b0;
  undefined1 local_a8 [16];
  ulonglong uStack_98;
  undefined1 *puStack_90;
  undefined8 local_88;
  longlong lStack_80;
  ulonglong uStack_78;
  longlong lStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong uStack_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_1a8;
  if (DAT_180cc9c70 != DAT_180cc9c78) {
    DAT_180cc9c78 = DAT_180cc9c70;
  }
  local_88 = 0;
  lStack_80 = 0;
  uStack_78 = 0;
  lStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  FUN_1801ab100(&local_88);
  uVar14 = (DAT_180cc9bb8 - DAT_180cc9bb0) / 0x98;
  auVar25 = SUB1612(ZEXT816(0),4);
  if ((longlong)uVar14 < 0) {
    auVar25 = (undefined1  [12])0x0;
  }
  auVar23._0_4_ = (float)uVar14 / (float)local_88;
  auVar23._4_12_ = auVar25;
  auVar23 = vroundss_avx(ZEXT816(0),auVar23,2);
  lVar7 = 0;
  fVar28 = 9.223372e+18;
  fVar26 = auVar23._0_4_;
  if ((9.223372e+18 <= fVar26) && (fVar26 = fVar26 - 9.223372e+18, fVar26 < 9.223372e+18)) {
    lVar7 = -0x8000000000000000;
  }
  auVar23 = vroundss_avx(ZEXT816(0),ZEXT416((uint)((float)uStack_78 / (float)local_88)),2);
  fVar27 = auVar23._0_4_;
  lVar8 = 0;
  if ((9.223372e+18 <= fVar27) && (fVar27 = fVar27 - 9.223372e+18, fVar27 < 9.223372e+18)) {
    lVar8 = -0x8000000000000000;
  }
  uVar14 = (longlong)fVar27 + lVar8;
  if ((ulonglong)((longlong)fVar27 + lVar8) < (ulonglong)((longlong)fVar26 + lVar7)) {
    uVar14 = (longlong)fVar26 + lVar7;
  }
  lVar7 = DAT_180cc9bb0;
  lVar8 = DAT_180cc9bb8;
  if (uStack_50 < uVar14) {
    FUN_1801b7e40(&local_88);
    lVar7 = DAT_180cc9bb0;
    lVar8 = DAT_180cc9bb8;
  }
  for (; lVar10 = DAT_180cc9bb8, lVar7 != DAT_180cc9bb8; lVar7 = lVar7 + 0x98) {
    DAT_180cc9bb8 = lVar8;
    FUN_18020ec30(&local_88,&local_f8,lVar7 + 8,lVar7);
    lVar8 = DAT_180cc9bb8;
    DAT_180cc9bb8 = lVar10;
  }
  uStack_c4 = 0;
  lStack_b0 = 0;
  local_a8 = ZEXT816(0);
  uStack_98 = 0;
  puStack_90 = (undefined1 *)0x0;
  local_c8 = 0.0;
  lStack_c0 = 0;
  uStack_b8 = 0;
  DAT_180cc9bb8 = lVar8;
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_f8 = "tier0.dll:g_pMemAlloc";
    local_f0 = 0x15;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_f8);
  }
  lStack_c0 = (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x38);
  *(longlong *)lStack_c0 = lStack_c0;
  *(longlong *)(lStack_c0 + 8) = lStack_c0;
  lStack_b0 = 0;
  local_a8 = (undefined1  [16])0x0;
  uStack_98 = 7;
  puStack_90 = &DAT_00000008;
  local_c8 = 1.0;
  FUN_1801406e0(&lStack_b0,0x10,lStack_c0);
  lVar7 = SUB168(SEXT816(-0x4de9bd37a6f4de9b) * SEXT816(DAT_180cc9c00 - DAT_180cc9bf8),8) +
          (DAT_180cc9c00 - DAT_180cc9bf8);
  uVar14 = (lVar7 >> 7) - (lVar7 >> 0x3f);
  auVar25 = SUB1612(ZEXT816(0),4);
  if ((longlong)uVar14 < 0) {
    auVar25 = (undefined1  [12])0x0;
  }
  auVar24._0_4_ = (float)uVar14 / local_c8;
  auVar24._4_12_ = auVar25;
  auVar23 = vroundss_avx(ZEXT816(0),auVar24,2);
  lVar7 = 0;
  fVar26 = auVar23._0_4_;
  if ((fVar28 <= fVar26) && (fVar26 = fVar26 - fVar28, fVar26 < fVar28)) {
    lVar7 = -0x8000000000000000;
  }
  auVar23 = vroundss_avx(ZEXT816(0),ZEXT416((uint)((float)uStack_b8 / local_c8)),2);
  fVar27 = auVar23._0_4_;
  lVar8 = 0;
  if ((fVar28 <= fVar27) && (fVar27 = fVar27 - fVar28, fVar27 < fVar28)) {
    lVar8 = -0x8000000000000000;
  }
  puVar13 = (undefined1 *)((longlong)fVar27 + lVar8);
  if ((undefined1 *)((longlong)fVar27 + lVar8) < (undefined1 *)((longlong)fVar26 + lVar7)) {
    puVar13 = (undefined1 *)((longlong)fVar26 + lVar7);
  }
  if (puStack_90 < puVar13) {
    FUN_1801b7e40(&local_c8);
  }
  lVar7 = DAT_180cc9c00;
  if (DAT_180cc9bf8 != DAT_180cc9c00) {
    puVar19 = (ulonglong *)(DAT_180cc9bf8 + 0xa0);
    lVar8 = DAT_180cc9bf8;
    do {
      if (puVar19[-0xd] != 0) {
        FUN_18020ef40(&local_c8,&local_f8,puVar19 + -0xf,lVar8);
      }
      if (puVar19[-1] != 0) {
        puVar21 = puVar19 + -3;
        puVar22 = puVar21;
        if (0xf < *puVar19) {
          puVar22 = (ulonglong *)*puVar21;
        }
        lVar11 = puVar19[-1] - 1;
        lVar10 = -1;
        if (lVar11 != -1) {
          lVar10 = lVar11;
        }
        lVar18 = lVar10 + 1 + (longlong)puVar22;
        lVar11 = thunk_FUN_1805f7d20(puVar22,lVar18,0x2f);
        lVar10 = -1;
        if (lVar11 != lVar18) {
          lVar10 = lVar11 - (longlong)puVar22;
        }
        uVar14 = 0;
        if (lVar10 != -1) {
          uVar14 = lVar10 + 1;
        }
        local_120 = (undefined1  [16])0x0;
        local_110 = (undefined1  [16])0x0;
        if (puVar19[-1] < uVar14) {
                    /* WARNING: Subroutine does not return */
          FUN_180141470();
        }
        lVar11 = puVar19[-1] - uVar14;
        lVar10 = -1;
        if (lVar11 != -1) {
          lVar10 = lVar11;
        }
        if (0xf < *puVar19) {
          puVar21 = (ulonglong *)*puVar21;
        }
        FUN_18015ba30(local_120,uVar14 + (longlong)puVar21,lVar10);
        FUN_18020f250(&local_c8,local_130,local_120,lVar8);
        FUN_18015c010(local_120);
      }
      lVar8 = lVar8 + 0xb8;
      puVar19 = puVar19 + 0x17;
    } while (lVar8 != lVar7);
  }
  puVar3 = DAT_180cc9d10;
  puVar1 = (undefined8 *)*DAT_180cc9d10;
  do {
    if (puVar1 == puVar3) {
      local_188 = 0;
      FUN_18020fc90(DAT_180cc9c70,DAT_180cc9c78,
                    (longlong)DAT_180cc9c78 - (longlong)DAT_180cc9c70 >> 3,(undefined1)local_178);
      FUN_1800f0160(&lStack_b0);
      FUN_1801aac60(&lStack_c0);
      FUN_1800f0160(&lStack_70);
      FUN_1801aac60(&lStack_80);
    }
    puVar17 = puVar1 + 2;
    uVar14 = puVar1[5];
    puVar9 = puVar17;
    if (0xf < uVar14) {
      puVar9 = (undefined8 *)*puVar17;
    }
    uVar16 = puVar1[4];
    if ((0x16 < uVar16) && (iVar6 = memcmp(puVar9,"econ/default_generated/",0x17), iVar6 == 0)) {
      puVar9 = puVar17;
      if (0xf < uVar14) {
        puVar9 = (undefined8 *)*puVar17;
      }
      lVar7 = *(longlong *)((longlong)puVar9 + (uVar16 - 10)) + -0x705f746867696c5f;
      if (lVar7 == 0) {
        lVar7 = (ulonglong)*(ushort *)((longlong)puVar9 + (uVar16 - 2)) - 0x676e;
      }
      if (lVar7 == 0) {
        if (0xf < (ulonglong)puVar1[5]) {
          puVar17 = (undefined8 *)puVar1[2];
        }
        local_170 = (longlong)puVar17 + 0x17;
        uVar14 = uVar16 - 0x21;
        uVar20 = 0xffffffffffffffff;
        local_178 = -1;
        local_130[0] = 0;
        local_158 = 0;
        local_160 = uVar14;
        if (1 < uVar14) {
          lVar8 = (uVar16 - 10) + (longlong)puVar17;
          lVar7 = thunk_FUN_1805f7e70(puVar17 + 3,lVar8,0x5f);
          if (lVar7 != lVar8) {
            uVar20 = (lVar7 - (longlong)puVar17) - 0x17;
          }
        }
        if (uVar20 != 0xffffffffffffffff) {
          lVar7 = local_170;
          do {
            uVar16 = uVar20;
            if (uVar14 < uVar20) {
              uVar16 = uVar14;
            }
            local_e8 = (undefined1  [16])0x0;
            local_d8 = 0;
            local_d0 = 0;
            FUN_18015ba30(local_e8,lVar7,uVar16);
            lVar8 = lStack_c0;
            uVar16 = local_d8;
            puVar13 = local_e8;
            if (0xf < local_d0) {
              puVar13 = (undefined1 *)local_e8._0_8_;
            }
            uVar12 = 0xcbf29ce484222325;
            uVar15 = 0;
            if (local_d8 != 0) {
              do {
                uVar12 = (uVar12 ^ (byte)puVar13[uVar15]) * 0x100000001b3;
                uVar15 = uVar15 + 1;
              } while (uVar15 < local_d8);
            }
            lVar10 = *(longlong *)(lStack_b0 + 8 + (uVar12 & uStack_98) * 0x10);
            if (lVar10 != lStack_c0) {
              lVar7 = *(longlong *)(lStack_b0 + (uVar12 & uStack_98) * 0x10);
              puVar13 = (undefined1 *)local_e8._0_8_;
              uVar14 = local_d0;
              while( true ) {
                puVar17 = (undefined8 *)(lVar10 + 0x10);
                if (0xf < *(ulonglong *)(lVar10 + 0x28)) {
                  puVar17 = (undefined8 *)*puVar17;
                }
                _Buf1 = local_e8;
                if (0xf < uVar14) {
                  _Buf1 = puVar13;
                }
                if (uVar16 == *(ulonglong *)(lVar10 + 0x20)) {
                  if ((uVar16 == 0) || (iVar6 = memcmp(_Buf1,puVar17,uVar16), iVar6 == 0)) {
                    uVar14 = local_160;
                    goto LAB_18020bd13;
                  }
                  puVar13 = (undefined1 *)local_e8._0_8_;
                  uVar14 = local_d0;
                }
                if (lVar10 == lVar7) break;
                lVar10 = *(longlong *)(lVar10 + 8);
              }
              uVar14 = local_160;
            }
            lVar10 = 0;
LAB_18020bd13:
            lVar7 = local_170;
            lVar11 = lVar8;
            if (lVar10 != 0) {
              lVar11 = lVar10;
            }
            if (lVar11 != lVar8) {
              local_178 = *(short *)(lVar11 + 0x30);
              uVar16 = uVar20 + 1;
              if (uVar14 < uVar16) {
                    /* WARNING: Subroutine does not return */
                FUN_18015ac40();
              }
              local_130[0] = uVar16 + local_170;
              local_158 = -1;
              if (uVar14 - uVar16 != -1) {
                local_158 = uVar14 - uVar16;
              }
            }
            lVar8 = local_158;
            FUN_18015c010(local_e8);
            if (uVar20 + 1 < uVar14) {
              lVar10 = thunk_FUN_1805f7e70(lVar7 + uVar20 + 1,lVar7 + uVar14,0x5f);
              uVar20 = 0xffffffffffffffff;
              if (lVar10 != lVar7 + uVar14) {
                uVar20 = lVar10 - lVar7;
              }
            }
            else {
              uVar20 = 0xffffffffffffffff;
            }
            sVar4 = local_178;
          } while (uVar20 != 0xffffffffffffffff);
          if ((local_178 != -1) && (lVar8 != 0)) {
            local_150 = (undefined1  [16])0x0;
            local_140 = (undefined1  [16])0x0;
            FUN_18015ba30(local_150,local_130[0],lVar8);
            lVar7 = lStack_80;
            uVar5 = local_150._0_8_;
            puVar13 = local_150;
            if (0xf < (ulonglong)local_140._8_8_) {
              puVar13 = (undefined1 *)local_150._0_8_;
            }
            uVar14 = 0xcbf29ce484222325;
            uVar16 = 0;
            _Size = local_140._0_8_;
            if (local_140._0_8_ != 0) {
              do {
                uVar14 = (uVar14 ^ (byte)puVar13[uVar16]) * 0x100000001b3;
                uVar16 = uVar16 + 1;
                local_178 = sVar4;
              } while (uVar16 < (ulonglong)local_140._0_8_);
            }
            lVar8 = *(longlong *)(lStack_70 + 8 + (uVar14 & uStack_58) * 0x10);
            if (lVar8 != lStack_80) {
              lVar10 = *(longlong *)(lStack_70 + (uVar14 & uStack_58) * 0x10);
              uVar14 = local_140._8_8_;
              while( true ) {
                puVar17 = (undefined8 *)(lVar8 + 0x10);
                if (0xf < *(ulonglong *)(lVar8 + 0x28)) {
                  puVar17 = (undefined8 *)*puVar17;
                }
                puVar13 = local_150;
                if (0xf < uVar14) {
                  puVar13 = (undefined1 *)uVar5;
                }
                if (_Size == *(ulonglong *)(lVar8 + 0x20)) {
                  if ((_Size == 0) || (iVar6 = memcmp(puVar13,puVar17,_Size), iVar6 == 0))
                  goto LAB_18020beb6;
                  uVar14 = local_140._8_8_;
                }
                if (lVar8 == lVar10) break;
                lVar8 = *(longlong *)(lVar8 + 8);
              }
            }
            lVar8 = 0;
LAB_18020beb6:
            if (lVar8 != 0) {
              lVar7 = lVar8;
            }
            FUN_18015c010(local_150);
            psVar2 = DAT_180cc9c70;
            if (lVar7 != lStack_80) {
              for (; psVar2 != DAT_180cc9c78; psVar2 = psVar2 + 4) {
                if ((*psVar2 == local_178) && (*(int *)(psVar2 + 2) == *(int *)(lVar7 + 0x30)))
                goto LAB_18020bf4b;
              }
              local_168 = local_178;
              uStack_164 = *(undefined4 *)(lVar7 + 0x30);
              if (DAT_180cc9c78 == DAT_180cc9c80) {
                FUN_1801b6250(&DAT_180cc9c70,DAT_180cc9c78,&local_168);
              }
              else {
                *(ulonglong *)DAT_180cc9c78 = CONCAT44(uStack_164,CONCAT22(uStack_166,local_178));
                DAT_180cc9c78 = DAT_180cc9c78 + 4;
              }
            }
          }
        }
      }
    }
LAB_18020bf4b:
    puVar1 = (undefined8 *)*puVar1;
  } while( true );
}



