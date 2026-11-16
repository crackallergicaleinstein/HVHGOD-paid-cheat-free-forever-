// FUN_1802ce030 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802ce030 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802ce030(undefined8 param_1,longlong param_2)

{
  undefined1 auVar1 [16];
  bool bVar2;
  longlong *plVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  ULONGLONG UVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 (*pauVar11) [16];
  ulonglong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  float fVar17;
  longlong lVar18;
  char *pcVar19;
  undefined8 *puVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  undefined8 ******ppppppuVar23;
  bool bVar24;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar25;
  ulonglong uVar26;
  undefined8 extraout_XMM0_Qa_01;
  undefined1 auVar27 [16];
  undefined1 extraout_var [56];
  undefined1 auVar28 [64];
  float fVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [64];
  float fVar32;
  undefined1 auVar33 [64];
  undefined1 auStack_328 [32];
  undefined1 *local_308;
  longlong local_2f8;
  char *local_2e8;
  ulonglong local_2e0;
  undefined8 local_2d8;
  float local_2d0;
  undefined1 local_2c8 [8];
  undefined8 uStack_2c0;
  undefined1 auStack_2b8 [16];
  undefined1 local_2a8 [8];
  longlong lStack_2a0;
  undefined8 local_298;
  undefined8 local_290;
  char *local_288;
  undefined8 local_280;
  undefined1 *local_278;
  undefined8 local_270;
  char *local_268;
  undefined8 local_260;
  longlong local_258;
  longlong local_250;
  char *local_248;
  undefined8 local_240;
  undefined8 ******local_238;
  undefined8 local_230;
  char *local_228;
  undefined8 local_220;
  undefined8 ******local_218;
  undefined8 local_210;
  char *local_208;
  undefined8 local_200;
  undefined8 ******local_1f8;
  undefined8 local_1f0;
  undefined1 local_1e8 [32];
  undefined1 local_1c8 [32];
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  char *local_190;
  undefined8 local_188;
  char *local_180;
  undefined1 local_178 [16];
  undefined4 local_168;
  undefined8 ******local_160 [2];
  undefined8 local_150;
  ulonglong local_148;
  undefined1 local_140 [16];
  undefined8 uStack_130;
  ulonglong uStack_128;
  undefined8 ******local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  ulonglong uStack_108;
  undefined8 ******local_100 [2];
  undefined8 local_f0;
  ulonglong local_e8;
  longlong local_d8;
  longlong local_d0;
  undefined4 local_c8;
  int local_c4;
  undefined8 *****local_b0 [5];
  undefined1 local_88 [40];
  ulonglong local_60;
  
  if (param_2 == 0) {
    return;
  }
  local_60 = DAT_1808d5f00 ^ (ulonglong)auStack_328;
  local_168 = 0;
  local_2f8 = param_2;
  AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  local_120 = _DAT_180bb8890;
  uStack_118 = uRam0000000180bb8898;
  uStack_110 = uRam0000000180bb88a0;
  uStack_108 = uRam0000000180bb88a8;
  local_1a8 = _DAT_180bb88b0;
  uStack_1a0 = uRam0000000180bb88b8;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  local_2d8 = local_120;
  if (local_120 == (undefined8 ******)0x0) {
  }
  local_198 = 0;
  local_190 = "userid";
  local_188 = 0;
  local_180 = "attacker";
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar10 = DAT_1808fd428;
  lVar9 = DAT_1808da460;
  uVar21 = 0xffffffffffffffff;
  if ((DAT_1808fd428 != DAT_1808da460) || (lVar18 = DAT_180c6eba0, DAT_180c6eba0 == 0)) {
    UVar8 = GetTickCount64();
    if ((lVar10 == lVar9) && (UVar8 < DAT_180c6eba8)) {
      lVar18 = 0;
    }
    else {
      local_178._0_8_ = &DAT_1808fd430;
      iVar7 = FUN_1805f68d0(&DAT_1808fd430);
      if (iVar7 != 0) goto LAB_1802cf529;
      if (DAT_1808fd47c == 0x7fffffff) {
        DAT_1808fd47c = 0x7ffffffe;
        goto LAB_1802cf53e;
      }
      if (DAT_1808fd428 == lVar9) {
        if ((DAT_180c6eba0 == 0) && (DAT_180c6eba8 <= UVar8)) goto LAB_1802ce1ea;
      }
      else {
        DAT_1808fd418 = 1000;
LAB_1802ce1ea:
        lVar10 = -1;
        do {
          lStack_2a0 = lVar10 + 1;
          pcVar19 = "lient.dll:488D05*????????4D8BF8488901+80~" + lVar10;
          lVar10 = lStack_2a0;
        } while (*pcVar19 != '\0');
        local_2a8 = (undefined1  [8])&DAT_1808267c0;
        local_2e8 = "patterns::game_event_get_controller";
        local_2e0 = 0x23;
        DAT_180c6eba0 = FUN_1800e5d20(&local_2e8,local_2a8);
        DAT_1808fd428 = lVar9;
        DAT_180c6eba8 = 0xffffffffffffffff;
        if (DAT_180c6eba0 == 0) {
          DAT_180c6eba8 = DAT_1808fd418 + UVar8;
          if (DAT_1808fd418 < 60000) {
            DAT_1808fd418 = DAT_1808fd418 * 2;
          }
          else {
            DAT_1808fd418 = 60000;
          }
        }
        else {
          DAT_1808fd418 = 1000;
        }
      }
      lVar18 = DAT_180c6eba0;
      FUN_1805f68fc(&DAT_1808fd430);
    }
    param_2 = local_2f8;
  }
  cVar4 = FUN_1804513c0(lVar18,1,2);
  cVar5 = '\0';
  if (cVar4 != '\0') {
    lVar9 = FUN_18017ea70();
    *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
    FUN_180252bd0(local_178,lVar18,param_2,&local_198);
    lVar9 = FUN_18017ea70();
    if (*(int *)(lVar9 + 4) != 0) {
      *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
    }
    cVar5 = local_178[8];
  }
  ppppppuVar23 = (undefined8 ******)local_178._0_8_;
  if (cVar5 == '\0') {
    ppppppuVar23 = (undefined8 ******)0x0;
  }
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar10 = DAT_1808fd420;
  lVar9 = DAT_1808da460;
  if ((DAT_1808fd420 != DAT_1808da460) || (lVar18 = DAT_180c6eb98, DAT_180c6eb98 == 0)) {
    UVar8 = GetTickCount64();
    if ((lVar10 == lVar9) && (UVar8 < DAT_180c6eb88)) {
      lVar18 = 0;
    }
    else {
      local_178._0_8_ = &DAT_1808fd3c0;
      iVar7 = FUN_1805f68d0(&DAT_1808fd3c0);
      if (iVar7 != 0) {
LAB_1802cf529:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808fd40c == 0x7fffffff) {
        DAT_1808fd40c = 0x7ffffffe;
LAB_1802cf53e:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if (DAT_1808fd420 == lVar9) {
        if ((DAT_180c6eb98 == 0) && (DAT_180c6eb88 <= UVar8)) goto LAB_1802ce3a9;
      }
      else {
        DAT_1808fd410 = 1000;
LAB_1802ce3a9:
        uVar26 = 0xffffffffffffffff;
        do {
          local_2e0 = uVar26 + 1;
          pcVar19 = "lient.dll:488D05*????????4D8BF8488901+80~" + uVar26;
          uVar26 = local_2e0;
        } while (*pcVar19 != '\0');
        local_2e8 = "client.dll:488D05*????????4D8BF8488901+80~";
        lStack_2a0 = 0x23;
        local_2a8 = (undefined1  [8])"patterns::game_event_get_controller";
        DAT_180c6eb98 = FUN_1800e5d20(local_2a8,&local_2e8);
        DAT_1808fd420 = lVar9;
        DAT_180c6eb88 = 0xffffffffffffffff;
        if (DAT_180c6eb98 == 0) {
          DAT_180c6eb88 = DAT_1808fd410 + UVar8;
          if (DAT_1808fd410 < 60000) {
            DAT_1808fd410 = DAT_1808fd410 * 2;
          }
          else {
            DAT_1808fd410 = 60000;
          }
        }
        else {
          DAT_1808fd410 = 1000;
        }
      }
      lVar18 = DAT_180c6eb98;
      FUN_1805f68fc(&DAT_1808fd3c0);
    }
  }
  cVar5 = FUN_1804513c0(lVar18,1,2);
  if (cVar5 == '\0') {
    lVar9 = local_2f8;
    cVar5 = '\0';
  }
  else {
    lVar10 = FUN_18017ea70();
    lVar9 = local_2f8;
    *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
    FUN_180252bd0(local_178,lVar18,local_2f8,&local_188);
    lVar10 = FUN_18017ea70();
    if (*(int *)(lVar10 + 4) != 0) {
      *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
    }
    cVar5 = local_178[8];
  }
  uVar15 = local_178._0_8_;
  if (cVar5 == '\0') {
    uVar15 = 0;
  }
  local_178._0_8_ = uVar15;
  if ((ppppppuVar23 == (undefined8 ******)0x0) || (ppppppuVar23 != local_2d8)) {
    uVar26 = FUN_1802d58b0(&DAT_180cc99c0,&local_d8,lVar9);
    if (local_d8 != 0) {
      bVar24 = local_c4 < 1;
      if (local_d0 != 0) {
        uVar26 = FUN_180292550(&DAT_180cc96d0,local_d0,bVar24);
      }
      if ((DAT_180b0c770 != '\0') && (local_d0 != 0)) {
        fVar32 = *(float *)(*DAT_180bb8958 + 0x30);
        local_2d8 = (undefined8 ******)0x0;
        local_2d0 = 0.0;
        bVar2 = false;
        iVar7 = DAT_180c6eb50;
        if (DAT_180c6eb50 == 0) {
          UVar8 = GetTickCount64();
          if (UVar8 < DAT_180c6eb58) {
            iVar7 = 0;
          }
          else {
            local_178._0_8_ = &DAT_1808fd1f0;
            iVar7 = FUN_1805f68d0(&DAT_1808fd1f0);
            if (iVar7 != 0) goto LAB_1802cf51e;
            if (DAT_1808fd23c == 0x7fffffff) {
              DAT_1808fd23c = 0x7ffffffe;
              goto LAB_1802cf593;
            }
            if ((DAT_180c6eb50 == 0) && (DAT_180c6eb58 <= UVar8)) {
              DAT_180c6eb50 = FUN_1804174b0("C_BaseEntity",0x9d930423);
              if (DAT_180c6eb50 == 0) {
                DAT_180c6eb58 = UVar8 + 1000;
              }
              else {
                DAT_180c6eb58 = 0xffffffffffffffff;
              }
            }
            iVar7 = DAT_180c6eb50;
            FUN_1805f68fc(&DAT_1808fd1f0);
          }
        }
        lVar9 = *(longlong *)(iVar7 + local_d0);
        if (lVar9 != 0) {
          iVar7 = DAT_180c6eb40;
          if (DAT_180c6eb40 == 0) {
            UVar8 = GetTickCount64();
            if (UVar8 < DAT_180c6eb48) {
              iVar7 = 0;
            }
            else {
              local_178._0_8_ = &DAT_1808fd240;
              iVar7 = FUN_1805f68d0(&DAT_1808fd240);
              if (iVar7 != 0) goto LAB_1802cf51e;
              if (DAT_1808fd28c == 0x7fffffff) {
                DAT_1808fd28c = 0x7ffffffe;
                goto LAB_1802cf593;
              }
              if ((DAT_180c6eb40 == 0) && (DAT_180c6eb48 <= UVar8)) {
                DAT_180c6eb40 = FUN_1804174b0("CGameSceneNode",0xe8b4eae5);
                if (DAT_180c6eb40 == 0) {
                  DAT_180c6eb48 = UVar8 + 1000;
                }
                else {
                  DAT_180c6eb48 = 0xffffffffffffffff;
                }
              }
              iVar7 = DAT_180c6eb40;
              FUN_1805f68fc(&DAT_1808fd240);
            }
          }
          local_2a8 = (undefined1  [8])*(undefined8 *)(iVar7 + lVar9);
          fVar17 = *(float *)((longlong)iVar7 + 8 + lVar9);
          iVar7 = DAT_180c6eb30;
          if (DAT_180c6eb30 == 0) {
            UVar8 = GetTickCount64();
            if (UVar8 < DAT_180c6eb38) {
              iVar7 = 0;
            }
            else {
              local_178._0_8_ = &DAT_1808fd1a0;
              iVar7 = FUN_1805f68d0(&DAT_1808fd1a0);
              if (iVar7 != 0) goto LAB_1802cf51e;
              if (DAT_1808fd1ec == 0x7fffffff) {
                DAT_1808fd1ec = 0x7ffffffe;
                goto LAB_1802cf593;
              }
              if ((DAT_180c6eb30 == 0) && (DAT_180c6eb38 <= UVar8)) {
                DAT_180c6eb30 = FUN_1804174b0("C_BaseModelEntity",0x39db834b);
                if (DAT_180c6eb30 == 0) {
                  DAT_180c6eb38 = UVar8 + 1000;
                }
                else {
                  DAT_180c6eb38 = 0xffffffffffffffff;
                }
              }
              iVar7 = DAT_180c6eb30;
              FUN_1805f68fc(&DAT_1808fd1a0);
            }
          }
          uVar26 = *(ulonglong *)(iVar7 + local_d0);
          auVar30._8_8_ = 0;
          auVar30._0_8_ = uVar26;
          auVar30 = vshufps_avx(auVar30,auVar30,0x55);
          local_2d8 = (undefined8 ******)
                      CONCAT44(auVar30._0_4_ * 0.75 + (float)local_2a8._4_4_,
                               (float)uVar26 * 0.75 + (float)local_2a8._0_4_);
          local_2d0 = *(float *)((longlong)iVar7 + 8 + local_d0) * 0.75 + fVar17;
          bVar2 = true;
        }
        local_178 = ZEXT816(0x180cc9b08);
        iVar7 = FUN_1805f68d0(&DAT_180cc9b08);
        auVar28._8_56_ = extraout_var;
        auVar28._0_8_ = extraout_XMM0_Qa_01;
        if (iVar7 != 0) {
LAB_1802cf51e:
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(5);
        }
        if (DAT_180cc9b54 == 0x7fffffff) {
          DAT_180cc9b54 = 0x7ffffffe;
LAB_1802cf593:
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(6);
        }
        local_178[8] = 1;
        auVar33 = ZEXT464(0x3f000000);
        fVar17 = 0.5;
        auVar30 = auVar33._0_16_;
        auVar31 = ZEXT1664(auVar30);
        uVar22 = (longlong)DAT_180cc99f8 - (longlong)DAT_180cc99f0 >> 4;
        uVar26 = 0;
        if (uVar22 < 4) {
          uVar12 = uVar21;
          if (uVar22 != 0) goto LAB_1802cf1a0;
LAB_1802cf202:
          uVar21 = auVar28._0_8_;
          for (plVar3 = DAT_180cc9a10; plVar3 != DAT_180cc9a08; plVar3 = plVar3 + -0x27a) {
            if ((plVar3[-0x27a] == local_d0) && (*(char *)((longlong)plVar3 + -0x27) != '\0')) {
              fVar29 = fVar32 - *(float *)((longlong)plVar3 + -0x1364);
              auVar28 = ZEXT464((uint)fVar29);
              uVar21 = (ulonglong)(uint)fVar29;
              if (fVar29 <= 1.0) {
                ppppppuVar23 = *(undefined8 *******)((longlong)plVar3 + -0x137c);
                fVar17 = *(float *)((longlong)plVar3 + -0x1374);
                goto LAB_1802cf265;
              }
            }
            uVar21 = auVar28._0_8_;
          }
          if (bVar2) {
            fVar17 = local_2d0;
            ppppppuVar23 = local_2d8;
            goto LAB_1802cf265;
          }
        }
        else {
          do {
            fVar29 = ABS(fVar32 - *(float *)((longlong)DAT_180cc99f0 + uVar26 * 0x10 + 0xc));
            auVar30 = vcmpss_avx(ZEXT416((uint)fVar29),auVar31._0_16_,1);
            auVar30 = vblendvps_avx(auVar31._0_16_,ZEXT416((uint)fVar29),auVar30);
            uVar12 = uVar26;
            if (auVar31._0_4_ <= fVar29) {
              uVar12 = uVar21;
            }
            fVar29 = ABS(fVar32 - *(float *)((longlong)DAT_180cc99f0 + uVar26 * 0x10 + 0x1c));
            uVar21 = uVar12;
            if (fVar29 < auVar30._0_4_) {
              uVar21 = uVar26 + 1;
              auVar30 = ZEXT416((uint)fVar29);
            }
            fVar29 = ABS(fVar32 - *(float *)((longlong)DAT_180cc99f0 + uVar26 * 0x10 + 0x2c));
            if (fVar29 < auVar30._0_4_) {
              uVar21 = uVar26 + 2;
              auVar30 = ZEXT416((uint)fVar29);
            }
            fVar29 = ABS(fVar32 - *(float *)((longlong)DAT_180cc99f0 + uVar26 * 0x10 + 0x3c));
            auVar27 = ZEXT416((uint)fVar29);
            if (fVar29 < auVar30._0_4_) {
              uVar21 = uVar26 + 3;
              auVar30 = auVar27;
            }
            auVar31 = ZEXT1664(auVar30);
            uVar26 = uVar26 + 4;
          } while (uVar26 < uVar22 - 3);
          while( true ) {
            auVar28 = ZEXT1664(auVar27);
            auVar30 = auVar31._0_16_;
            uVar12 = uVar21;
            if (uVar22 <= uVar26) break;
LAB_1802cf1a0:
            fVar29 = ABS(fVar32 - *(float *)((longlong)DAT_180cc99f0 + uVar26 * 0x10 + 0xc));
            auVar27 = vcmpss_avx(ZEXT416((uint)fVar29),auVar30,1);
            auVar1 = vblendvps_avx(auVar30,ZEXT416((uint)fVar29),auVar27);
            auVar31 = ZEXT1664(auVar1);
            uVar21 = uVar26;
            if (auVar30._0_4_ <= fVar29) {
              uVar21 = uVar12;
            }
            uVar26 = uVar26 + 1;
          }
          if (uVar21 == 0xffffffffffffffff) goto LAB_1802cf202;
          puVar14 = DAT_180cc99f0 + uVar21 * 2;
          ppppppuVar23 = (undefined8 ******)*puVar14;
          fVar17 = *(float *)(puVar14 + 1);
          uVar21 = FUN_18063aed0(puVar14,puVar14 + 2,
                                 (longlong)DAT_180cc99f8 - (longlong)(puVar14 + 2));
          DAT_180cc99f8 = DAT_180cc99f8 + -2;
LAB_1802cf265:
          puVar14 = DAT_180cc99c8;
          uStack_2c0._0_4_ = fVar17;
          local_2c8 = (undefined1  [8])ppppppuVar23;
          uStack_2c0._4_4_ = fVar32;
          auStack_2b8._0_4_ = local_c8;
          if (DAT_180cc99c8 == DAT_180cc99d0) {
            FUN_1802eaa70(uVar21,DAT_180cc99c8,local_2c8);
          }
          else {
            *DAT_180cc99c8 = ppppppuVar23;
            puVar14[1] = uStack_2c0;
            *(undefined4 *)(puVar14 + 2) = local_c8;
            DAT_180cc99c8 = (undefined8 *)((longlong)DAT_180cc99c8 + 0x14);
          }
          fVar17 = auVar33._0_4_;
          if (10 < (ulonglong)(((longlong)DAT_180cc99c8 - DAT_180cc99c0) / 0x14)) {
            FUN_18063aed0(DAT_180cc99c0,DAT_180cc99c0 + 0x14,
                          (longlong)DAT_180cc99c8 - (DAT_180cc99c0 + 0x14));
            fVar17 = auVar33._0_4_;
            DAT_180cc99c8 = (undefined8 *)((longlong)DAT_180cc99c8 + -0x14);
          }
        }
        puVar14 = DAT_180cc99f8;
        puVar20 = DAT_180cc99f0;
        if (DAT_180cc99f0 == DAT_180cc99f8) {
LAB_1802cf37b:
          if (puVar20 != puVar14) goto LAB_1802cf380;
        }
        else {
          do {
            if (fVar17 < fVar32 - *(float *)((longlong)puVar20 + 0xc)) break;
            puVar20 = puVar20 + 2;
          } while (puVar20 != DAT_180cc99f8);
          if (puVar20 == DAT_180cc99f8) goto LAB_1802cf37b;
          puVar13 = puVar20 + 2;
          if (puVar13 != DAT_180cc99f8) {
            do {
              if (fVar32 - *(float *)((longlong)puVar13 + 0xc) <= fVar17) {
                uVar15 = puVar13[1];
                *puVar20 = *puVar13;
                puVar20[1] = uVar15;
                puVar20 = puVar20 + 2;
              }
              puVar13 = puVar13 + 2;
            } while (puVar13 != puVar14);
            goto LAB_1802cf37b;
          }
LAB_1802cf380:
          lVar9 = (longlong)DAT_180cc99f8 - (longlong)puVar14;
          FUN_18063aed0(puVar20,puVar14,lVar9);
          DAT_180cc99f8 = (undefined8 *)(lVar9 + (longlong)puVar20);
        }
        uVar26 = FUN_1805f68fc(&DAT_180cc9b08);
      }
      if ((!bVar24) || (DAT_180b0c188 == '\0')) {
        if (DAT_180b0c0f8 != '\0') {
          puVar14 = &DAT_180b0c168;
          if (0xf < DAT_180b0c180) {
            puVar14 = DAT_180b0c168;
          }
          if (DAT_180b0c160 == 9) {
            uStack_2c0 = DAT_180b0c178;
            local_2c8 = (undefined1  [8])puVar14;
            uVar26 = FUN_1802e0770(9,local_2c8,DAT_180b0c164);
          }
          else if (((ulonglong)(longlong)DAT_180b0c160 < 10) &&
                  ((&PTR_s_sounds_ui_panorama_mainmenu_pres_180800448)[(longlong)DAT_180b0c160 * 2]
                   != (undefined *)0x0)) {
            uVar26 = FUN_1802e04f0();
          }
        }
        if (bVar24) goto LAB_1802cf4b5;
      }
      else {
        puVar14 = &DAT_180b0c1f8;
        if (0xf < DAT_180b0c210) {
          puVar14 = DAT_180b0c1f8;
        }
        if (DAT_180b0c1f0 == 9) {
          uStack_2c0 = DAT_180b0c208;
          local_2c8 = (undefined1  [8])puVar14;
          uVar26 = FUN_1802e0770(9,local_2c8,DAT_180b0c1f4);
        }
        else if (((ulonglong)(longlong)DAT_180b0c1f0 < 10) &&
                ((&PTR_s_sounds_ui_panorama_mainmenu_pres_180800448)[(longlong)DAT_180b0c1f0 * 2] !=
                 (undefined *)0x0)) {
          uVar26 = FUN_1802e04f0();
        }
LAB_1802cf4b5:
        if ((DAT_180b0c290 != '\0') && (local_d0 != 0)) {
          uVar26 = FUN_1802dd370();
        }
      }
      if ((DAT_180b0c218 != '\0') && (local_d0 != 0)) {
        DAT_180cc9b5c = *(uint *)(*DAT_180bb8958 + 0x30);
        uVar26 = (ulonglong)DAT_180cc9b5c;
      }
      FUN_1802d8470(uVar26,&local_d8);
    }
    FUN_18015c010(local_88);
    ppppppuVar23 = local_b0;
    goto LAB_1802ced15;
  }
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar10 = DAT_1808fd350;
  lVar9 = DAT_1808da460;
  if ((DAT_1808fd350 != DAT_1808da460) || (lVar18 = DAT_180c6eb90, DAT_180c6eb90 == 0)) {
    UVar8 = GetTickCount64();
    if ((lVar10 == lVar9) && (UVar8 < DAT_180c6eb80)) {
      lVar18 = 0;
    }
    else {
      local_2a8 = (undefined1  [8])&DAT_1808fd360;
      iVar7 = FUN_1805f68d0(&DAT_1808fd360);
      if (iVar7 != 0) goto LAB_1802cf57e;
      if (DAT_1808fd3ac == 0x7fffffff) {
        DAT_1808fd3ac = 0x7ffffffe;
        goto LAB_1802cf553;
      }
      if (DAT_1808fd350 == lVar9) {
        if ((DAT_180c6eb90 == 0) && (DAT_180c6eb80 <= UVar8)) goto LAB_1802ce59b;
      }
      else {
        DAT_1808fd3b0 = 1000;
LAB_1802ce59b:
        uVar26 = 0xffffffffffffffff;
        do {
          local_2e0 = uVar26 + 1;
          lVar10 = uVar26 + 1;
          uVar26 = local_2e0;
        } while ("client.dll:>E8????????3D00800000"[lVar10] != '\0');
        local_2e8 = "client.dll:>E8????????3D00800000";
        uStack_2c0 = 0x1c;
        local_2c8 = (undefined1  [8])"patterns::game_event_get_int";
        DAT_180c6eb90 = FUN_1800e5d20(local_2c8,&local_2e8);
        DAT_1808fd350 = lVar9;
        DAT_180c6eb80 = 0xffffffffffffffff;
        if (DAT_180c6eb90 == 0) {
          DAT_180c6eb80 = DAT_1808fd3b0 + UVar8;
          if (DAT_1808fd3b0 < 60000) {
            DAT_1808fd3b0 = DAT_1808fd3b0 * 2;
          }
          else {
            DAT_1808fd3b0 = 60000;
          }
        }
        else {
          DAT_1808fd3b0 = 1000;
        }
      }
      lVar18 = DAT_180c6eb90;
      FUN_1805f68fc(&DAT_1808fd360);
    }
  }
  cVar5 = FUN_1804513c0(lVar18,1,2);
  if (cVar5 == '\0') {
LAB_1802ce684:
    iVar7 = -1;
  }
  else {
    lVar9 = FUN_18017ea70();
    *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
    local_308 = (undefined1 *)CONCAT44(local_308._4_4_,0xffffffff);
    FUN_1802875b0(local_2a8,lVar18,local_2f8,"dmg_health");
    lVar9 = FUN_18017ea70();
    if (*(int *)(lVar9 + 4) != 0) {
      *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
    }
    iVar7 = local_2a8._0_4_;
    if (local_2a8[4] == '\0') goto LAB_1802ce684;
  }
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar10 = DAT_1808fd2f8;
  lVar9 = DAT_1808da460;
  if ((DAT_1808fd2f8 != DAT_1808da460) || (lVar18 = DAT_180c6eb70, DAT_180c6eb70 == 0)) {
    UVar8 = GetTickCount64();
    if ((lVar10 == lVar9) && (UVar8 < DAT_180c6eb78)) {
      lVar18 = 0;
    }
    else {
      local_2a8 = (undefined1  [8])&DAT_1808fd300;
      iVar6 = FUN_1805f68d0(&DAT_1808fd300);
      if (iVar6 != 0) {
LAB_1802cf57e:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808fd34c == 0x7fffffff) {
        DAT_1808fd34c = 0x7ffffffe;
LAB_1802cf553:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if (DAT_1808fd2f8 == lVar9) {
        if ((DAT_180c6eb70 == 0) && (DAT_180c6eb78 <= UVar8)) goto LAB_1802ce74f;
      }
      else {
        DAT_1808fd2e8 = 1000;
LAB_1802ce74f:
        lVar10 = -1;
        do {
          uStack_2c0 = lVar10 + 1;
          lVar18 = lVar10 + 1;
          lVar10 = uStack_2c0;
        } while ("client.dll:>E8????????3D00800000"[lVar18] != '\0');
        local_2c8 = (undefined1  [8])"client.dll:>E8????????3D00800000";
        local_2e8 = "patterns::game_event_get_int";
        local_2e0 = 0x1c;
        DAT_180c6eb70 = FUN_1800e5d20(&local_2e8,local_2c8);
        DAT_1808fd2f8 = lVar9;
        DAT_180c6eb78 = 0xffffffffffffffff;
        if (DAT_180c6eb70 == 0) {
          DAT_180c6eb78 = DAT_1808fd2e8 + UVar8;
          if (DAT_1808fd2e8 < 60000) {
            DAT_1808fd2e8 = DAT_1808fd2e8 * 2;
          }
          else {
            DAT_1808fd2e8 = 60000;
          }
        }
        else {
          DAT_1808fd2e8 = 1000;
        }
      }
      lVar18 = DAT_180c6eb70;
      FUN_1805f68fc(&DAT_1808fd300);
    }
  }
  cVar5 = FUN_1804513c0(lVar18,1,2);
  if (cVar5 == '\0') {
LAB_1802ce842:
    iVar6 = -1;
  }
  else {
    lVar9 = FUN_18017ea70();
    *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
    local_308 = (undefined1 *)CONCAT44(local_308._4_4_,0xffffffff);
    FUN_1802875b0(local_2a8,lVar18,local_2f8,"health");
    lVar9 = FUN_18017ea70();
    if (*(int *)(lVar9 + 4) != 0) {
      *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
    }
    iVar6 = local_2a8._0_4_;
    if (local_2a8[4] == '\0') goto LAB_1802ce842;
  }
  if (iVar7 < 1) {
  }
  if (iVar6 < 0) {
  }
  FUN_18015bea0(&local_120,iVar7);
  FUN_18015bea0(local_100,iVar6);
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar10 = DAT_1808fd2f0;
  lVar9 = DAT_1808da460;
  if ((DAT_1808fd2f0 != DAT_1808da460) || (lVar18 = DAT_180c6eb60, DAT_180c6eb60 == 0)) {
    UVar8 = GetTickCount64();
    if ((lVar10 == lVar9) && (UVar8 < DAT_180c6eb68)) {
      lVar18 = 0;
    }
    else {
      local_2a8 = (undefined1  [8])&DAT_1808fd290;
      iVar7 = FUN_1805f68d0(&DAT_1808fd290);
      if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808fd2dc == 0x7fffffff) {
        DAT_1808fd2dc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if (DAT_1808fd2f0 == lVar9) {
        if ((DAT_180c6eb60 == 0) && (DAT_180c6eb68 <= UVar8)) goto LAB_1802ce93c;
      }
      else {
        DAT_1808fd2e0 = 1000;
LAB_1802ce93c:
        lVar10 = -1;
        do {
          uStack_2c0 = lVar10 + 1;
          lVar18 = lVar10 + 1;
          lVar10 = uStack_2c0;
        } while ("client.dll:>E8????????3D00800000"[lVar18] != '\0');
        local_2c8 = (undefined1  [8])"client.dll:>E8????????3D00800000";
        local_2e8 = "patterns::game_event_get_int";
        local_2e0 = 0x1c;
        DAT_180c6eb60 = FUN_1800e5d20(&local_2e8,local_2c8);
        DAT_1808fd2f0 = lVar9;
        DAT_180c6eb68 = 0xffffffffffffffff;
        if (DAT_180c6eb60 == 0) {
          DAT_180c6eb68 = DAT_1808fd2e0 + UVar8;
          if (DAT_1808fd2e0 < 60000) {
            DAT_1808fd2e0 = DAT_1808fd2e0 * 2;
          }
          else {
            DAT_1808fd2e0 = 60000;
          }
        }
        else {
          DAT_1808fd2e0 = 1000;
        }
      }
      lVar18 = DAT_180c6eb60;
      FUN_1805f68fc(&DAT_1808fd290);
    }
  }
  cVar4 = FUN_1804513c0(lVar18,1,2);
  cVar5 = '\0';
  uVar15 = extraout_XMM0_Qa;
  if (cVar4 != '\0') {
    lVar9 = FUN_18017ea70();
    *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
    local_308 = (undefined1 *)((ulonglong)local_308 & 0xffffffff00000000);
    FUN_1802875b0(local_2a8,lVar18,local_2f8,"hitgroup");
    lVar9 = FUN_18017ea70();
    if (*(int *)(lVar9 + 4) != 0) {
      *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
    }
    cVar5 = local_2a8[4];
    uVar15 = extraout_XMM0_Qa_00;
  }
  uVar16 = local_2a8._0_4_;
  if (cVar5 == '\0') {
    uVar16 = 0;
  }
  lVar9 = FUN_1803db490(uVar15,uVar16);
  uVar25 = FUN_1802cc9c0(local_160,local_2f8);
  uVar15 = local_178._0_8_;
  bVar24 = (undefined8 ******)local_178._0_8_ == (undefined8 ******)0x0;
  if (bVar24) {
    _local_2c8 = (undefined1  [16])0x0;
    auStack_2b8 = (undefined1  [16])0x0;
    FUN_18015ba30(local_2c8,"world",5);
    pauVar11 = (undefined1 (*) [16])local_2c8;
  }
  else {
    pauVar11 = (undefined1 (*) [16])FUN_1802d7110(uVar25,local_1e8,local_178._0_8_);
  }
  local_140 = (undefined1  [16])0x0;
  uStack_130 = 0;
  uStack_128 = 0;
  local_140 = *pauVar11;
  uStack_130 = *(undefined8 *)pauVar11[1];
  uStack_128 = *(ulonglong *)(pauVar11[1] + 8);
  (*pauVar11)[0] = 0;
  *(undefined8 *)pauVar11[1] = 0;
  *(undefined8 *)(pauVar11[1] + 8) = 0xf;
  if (bVar24) {
    FUN_18015c010(local_2c8);
LAB_1802ceb52:
    pcVar19 = "logevents_damagereceived_taken";
  }
  else {
    FUN_18015c010(local_1e8);
    if ((undefined8 ******)uVar15 == local_2d8) goto LAB_1802ceb52;
    local_2c8 = (undefined1  [8])local_160;
    if (0xf < local_148) {
      local_2c8 = (undefined1  [8])local_160[0];
    }
    uStack_2c0 = local_150;
    cVar5 = FUN_1802cccd0(local_2c8);
    pcVar19 = "logevents_damagereceived_other";
    if (cVar5 != '\0') {
      pcVar19 = "logevents_damagereceived_gun";
    }
  }
  local_178._0_8_ = local_2a8;
  local_298 = 0;
  local_290 = 0xf;
  stack0xfffffffffffffd59 = SUB1615((undefined1  [16])0x0,1);
  auVar27[0xf] = 0;
  auVar27._0_15_ = stack0xfffffffffffffd59;
  _local_2a8 = auVar27 << 8;
  local_288 = "attacker";
  local_280 = 8;
  local_278 = local_140;
  if (0xf < uStack_128) {
    local_278 = (undefined1 *)local_140._0_8_;
  }
  local_270 = uStack_130;
  local_268 = "hitgroup";
  local_260 = 8;
  local_250 = -1;
  do {
    local_250 = local_250 + 1;
  } while (*(char *)(lVar9 + local_250) != '\0');
  local_248 = "weapon";
  local_240 = 6;
  local_238 = local_160;
  if (0xf < local_148) {
    local_238 = local_160[0];
  }
  local_230 = local_150;
  local_228 = "damage";
  local_220 = 6;
  local_218 = &local_120;
  if (0xf < uStack_108) {
    local_218 = local_120;
  }
  local_210 = uStack_110;
  local_208 = "health_left";
  local_200 = 0xb;
  local_1f8 = local_100;
  if (0xf < local_e8) {
    local_1f8 = local_100[0];
  }
  local_1f0 = local_f0;
  do {
    uVar21 = uVar21 + 1;
  } while (pcVar19[uVar21] != '\0');
  uStack_2c0 = (longlong)local_1e8;
  local_2c8 = (undefined1  [8])&local_288;
  local_2e8 = pcVar19;
  local_2e0 = uVar21;
  local_258 = lVar9;
  uVar15 = FUN_1802c8120(local_1c8,&local_2e8,local_2c8);
  local_308 = local_2a8;
  FUN_1802d0f20(local_308,uVar15,1,pcVar19);
  FUN_18015c010(local_140);
  FUN_18015c010(local_160);
  FUN_18015c010(local_100);
  ppppppuVar23 = &local_120;
LAB_1802ced15:
  FUN_18015c010(ppppppuVar23);
}



