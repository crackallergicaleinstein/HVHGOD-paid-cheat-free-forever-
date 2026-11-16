// FUN_1802f2080 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802f2080 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802f2080(undefined8 param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  float fVar1;
  undefined1 (*pauVar2) [16];
  bool bVar3;
  char cVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  ULONGLONG UVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong *plVar13;
  undefined1 auVar15 [16];
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar14;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 extraout_XMM0_Qa_06;
  undefined8 extraout_XMM0_Qa_07;
  undefined8 extraout_XMM0_Qa_08;
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  undefined1 extraout_var_01 [56];
  undefined1 extraout_var_02 [56];
  undefined1 extraout_var_03 [56];
  undefined1 extraout_var_04 [56];
  undefined1 extraout_var_05 [56];
  undefined1 extraout_var_06 [56];
  undefined1 extraout_var_07 [56];
  undefined1 extraout_var_08 [56];
  undefined1 extraout_var_09 [56];
  undefined1 extraout_var_10 [56];
  undefined1 extraout_var_11 [56];
  undefined1 extraout_var_12 [56];
  undefined1 auVar16 [64];
  undefined1 extraout_var_13 [56];
  undefined1 extraout_var_14 [56];
  undefined1 extraout_var_15 [56];
  undefined1 in_ZMM6 [64];
  undefined1 auVar17 [64];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auStack_308 [32];
  undefined8 *local_2e8;
  longlong *local_2d8;
  undefined *local_2d0;
  float local_2c8;
  float local_2c4;
  float local_2c0;
  undefined8 local_2b8;
  undefined4 local_2b0;
  undefined8 local_2a8;
  int local_298;
  undefined4 uStack_294;
  undefined8 uStack_290;
  float local_288;
  longlong *local_280;
  longlong *local_278;
  float local_270;
  float fStack_26c;
  float local_268;
  float local_260;
  float local_25c;
  float local_258;
  undefined1 local_250 [16];
  undefined8 local_240;
  undefined8 local_238 [10];
  undefined1 local_1e8 [8];
  longlong local_1e0;
  float local_13c;
  ulonglong local_d8;
  undefined1 local_48 [16];
  
  local_48 = in_ZMM6._0_16_;
  local_d8 = DAT_1808d5f00 ^ (ulonglong)auStack_308;
  if (*param_3 != param_3[1]) {
    param_3[1] = *param_3;
  }
  if (((*(char *)((longlong)param_2 + 0x4c) != '\0') && (-1 < (int)param_2[9])) &&
     (*param_2 == 0xbbe43941)) {
    local_2d8 = param_4;
    local_280 = param_2;
    puVar8 = (undefined8 *)FUN_1802af0d0(&local_2a8);
    local_2b8 = *puVar8;
    local_2b0 = *(undefined4 *)(puVar8 + 1);
    fVar19 = 0.0;
    local_260 = *(float *)(param_2 + 7) + 0.0;
    local_25c = *(float *)((longlong)param_2 + 0x3c) + 0.0;
    local_258 = *(float *)(param_2 + 8) + 1.0;
    local_250 = (undefined1  [16])0x0;
    local_240 = 0;
    auVar16._0_8_ = FUN_1803d44c0(local_258,local_250,1);
    auVar16._8_56_ = extraout_var;
    local_278 = (longlong *)local_250._8_8_;
    if (local_250._0_8_ != local_250._8_8_) {
      fVar24 = 16.0;
      fVar22 = 80.0;
      fVar25 = 0.97;
      plVar13 = (longlong *)local_250._0_8_;
      fVar18 = local_2d8._0_4_;
      fVar20 = local_2d8._0_4_;
      fVar21 = local_2d8._0_4_;
      fVar23 = local_2b8._4_4_;
      do {
        iVar6 = DAT_180c6ecd4;
        if (*plVar13 != 0) {
          if (*plVar13 != *param_4) {
            if (DAT_180c6ecd4 == 0) {
              UVar9 = GetTickCount64();
              auVar16._8_56_ = extraout_var_00;
              auVar16._0_8_ = extraout_XMM0_Qa;
              if (DAT_180c6ecd8 <= UVar9) {
                local_2d0 = &DAT_1808fdc10;
                iVar6 = FUN_1805f68d0(&DAT_1808fdc10);
                if (iVar6 != 0) goto LAB_1802f2ae6;
                if (DAT_1808fdc5c == 0x7fffffff) {
                  DAT_1808fdc5c = 0x7ffffffe;
                  goto LAB_1802f2adb;
                }
                if ((DAT_180c6ecd4 == 0) && (DAT_180c6ecd8 <= UVar9)) {
                  DAT_180c6ecd4 = FUN_1804174b0("CCSPlayerController",0x3db3c8d0);
                  DAT_180c6ecd8 = 0xffffffffffffffff;
                  if (DAT_180c6ecd4 == 0) {
                    DAT_180c6ecd8 = UVar9 + 1000;
                  }
                }
                iVar6 = DAT_180c6ecd4;
                auVar16._0_8_ = FUN_1805f68fc(&DAT_1808fdc10);
                auVar16._8_56_ = extraout_var_01;
              }
            }
            iVar7 = DAT_180c6ecc0;
            uVar14 = auVar16._0_8_;
            if (*(char *)((longlong)iVar6 + *plVar13) != '\0') {
              if (DAT_180c6ecc0 == 0) {
                UVar9 = GetTickCount64();
                uVar14 = extraout_XMM0_Qa_00;
                if (DAT_180c6ecc8 <= UVar9) {
                  local_2d0 = &DAT_1808fdbc0;
                  iVar6 = FUN_1805f68d0(&DAT_1808fdbc0);
                  if (iVar6 != 0) goto LAB_1802f2ae6;
                  if (DAT_1808fdc0c == 0x7fffffff) {
                    DAT_1808fdc0c = 0x7ffffffe;
                    goto LAB_1802f2adb;
                  }
                  if ((DAT_180c6ecc0 == 0) && (DAT_180c6ecc8 <= UVar9)) {
                    DAT_180c6ecc0 = FUN_1804174b0("CBasePlayerController",0x7c628c1d);
                    DAT_180c6ecc8 = 0xffffffffffffffff;
                    if (DAT_180c6ecc0 == 0) {
                      DAT_180c6ecc8 = UVar9 + 1000;
                    }
                  }
                  iVar7 = DAT_180c6ecc0;
                  uVar14 = FUN_1805f68fc(&DAT_1808fdbc0);
                }
              }
              lVar10 = FUN_1803d4150(uVar14,*(undefined4 *)((longlong)iVar7 + *plVar13));
              iVar6 = DAT_180c6ecd0;
              auVar16._8_56_ = extraout_var_02;
              auVar16._0_8_ = extraout_XMM0_Qa_01;
              if (lVar10 != 0) {
                if (lVar10 != param_4[1]) {
                  if (DAT_180c6ecd0 == 0) {
                    UVar9 = GetTickCount64();
                    auVar16._8_56_ = extraout_var_03;
                    auVar16._0_8_ = extraout_XMM0_Qa_02;
                    if (DAT_180c6eca8 <= UVar9) {
                      local_2d0 = &DAT_1808fdb70;
                      iVar6 = FUN_1805f68d0(&DAT_1808fdb70);
                      if (iVar6 != 0) goto LAB_1802f2ae6;
                      if (DAT_1808fdbbc == 0x7fffffff) {
                        DAT_1808fdbbc = 0x7ffffffe;
                        goto LAB_1802f2adb;
                      }
                      if ((DAT_180c6ecd0 == 0) && (DAT_180c6eca8 <= UVar9)) {
                        DAT_180c6ecd0 = FUN_1804174b0("C_BaseEntity",0xa5bfefb3);
                        DAT_180c6eca8 = 0xffffffffffffffff;
                        if (DAT_180c6ecd0 == 0) {
                          DAT_180c6eca8 = UVar9 + 1000;
                        }
                      }
                      iVar6 = DAT_180c6ecd0;
                      auVar16._0_8_ = FUN_1805f68fc(&DAT_1808fdb70);
                      auVar16._8_56_ = extraout_var_04;
                    }
                  }
                  iVar7 = DAT_180c6ecb0;
                  if (*(char *)((longlong)param_4 + 0x29) != '\0') {
                    if (*(int *)((longlong)param_4 + 0x24) == *(int *)(iVar6 + lVar10))
                    goto LAB_1802f2a03;
                  }
                  if (DAT_180c6ecb0 == 0) {
                    UVar9 = GetTickCount64();
                    auVar16._8_56_ = extraout_var_05;
                    auVar16._0_8_ = extraout_XMM0_Qa_03;
                    if (DAT_180c6ecb8 <= UVar9) {
                      local_2d0 = &DAT_1808fdad0;
                      iVar6 = FUN_1805f68d0(&DAT_1808fdad0);
                      if (iVar6 != 0) goto LAB_1802f2ae6;
                      if (DAT_1808fdb1c == 0x7fffffff) {
                        DAT_1808fdb1c = 0x7ffffffe;
                        goto LAB_1802f2adb;
                      }
                      if ((DAT_180c6ecb0 == 0) && (DAT_180c6ecb8 <= UVar9)) {
                        DAT_180c6ecb0 = FUN_1804174b0("C_BaseEntity",0x84cdad2);
                        DAT_180c6ecb8 = 0xffffffffffffffff;
                        if (DAT_180c6ecb0 == 0) {
                          DAT_180c6ecb8 = UVar9 + 1000;
                        }
                      }
                      iVar7 = DAT_180c6ecb0;
                      auVar16._0_8_ = FUN_1805f68fc(&DAT_1808fdad0);
                      auVar16._8_56_ = extraout_var_06;
                    }
                  }
                  iVar12 = DAT_180c6ec9c;
                  iVar6 = *(int *)(iVar7 + lVar10);
                  if (0 < iVar6) {
                    if (DAT_180c6ec9c == 0) {
                      UVar9 = GetTickCount64();
                      auVar16._8_56_ = extraout_var_07;
                      auVar16._0_8_ = extraout_XMM0_Qa_04;
                      if (DAT_180c6eca0 <= UVar9) {
                        local_2d0 = &DAT_1808fdb20;
                        iVar7 = FUN_1805f68d0(&DAT_1808fdb20);
                        if (iVar7 != 0) goto LAB_1802f2ae6;
                        if (DAT_1808fdb6c == 0x7fffffff) {
                          DAT_1808fdb6c = 0x7ffffffe;
                          goto LAB_1802f2adb;
                        }
                        if ((DAT_180c6ec9c == 0) && (DAT_180c6eca0 <= UVar9)) {
                          DAT_180c6ec9c = FUN_1804174b0("C_BaseEntity",0x9d930423);
                          DAT_180c6eca0 = 0xffffffffffffffff;
                          if (DAT_180c6ec9c == 0) {
                            DAT_180c6eca0 = UVar9 + 1000;
                          }
                        }
                        iVar12 = DAT_180c6ec9c;
                        auVar16._0_8_ = FUN_1805f68fc(&DAT_1808fdb20);
                        auVar16._8_56_ = extraout_var_08;
                      }
                    }
                    iVar7 = DAT_180c6ec88;
                    lVar11 = *(longlong *)(iVar12 + lVar10);
                    param_4 = local_2d8;
                    if (lVar11 != 0) {
                      if (DAT_180c6ec88 == 0) {
                        UVar9 = GetTickCount64();
                        auVar16._8_56_ = extraout_var_09;
                        auVar16._0_8_ = extraout_XMM0_Qa_05;
                        if (DAT_180c6ec90 <= UVar9) {
                          local_2d0 = &DAT_1808fda80;
                          iVar7 = FUN_1805f68d0(&DAT_1808fda80);
                          if (iVar7 != 0) goto LAB_1802f2ae6;
                          if (DAT_1808fdacc == 0x7fffffff) {
                            DAT_1808fdacc = 0x7ffffffe;
                            goto LAB_1802f2adb;
                          }
                          if ((DAT_180c6ec88 == 0) && (DAT_180c6ec90 <= UVar9)) {
                            DAT_180c6ec88 = FUN_1804174b0("CGameSceneNode",0xf9373b5e);
                            DAT_180c6ec90 = 0xffffffffffffffff;
                            if (DAT_180c6ec88 == 0) {
                              DAT_180c6ec90 = UVar9 + 1000;
                            }
                          }
                          iVar7 = DAT_180c6ec88;
                          auVar16._0_8_ = FUN_1805f68fc(&DAT_1808fda80);
                          auVar16._8_56_ = extraout_var_10;
                        }
                      }
                      iVar12 = DAT_180c6ec98;
                      param_4 = local_2d8;
                      if (*(char *)(iVar7 + lVar11) == '\0') {
                        if ((DAT_180c6ec98 == 0) &&
                           (UVar9 = GetTickCount64(), DAT_180c6ec70 <= UVar9)) {
                          local_2d0 = &DAT_1808fda30;
                          iVar7 = FUN_1805f68d0(&DAT_1808fda30);
                          if (iVar7 != 0) goto LAB_1802f2ae6;
                          if (DAT_1808fda7c == 0x7fffffff) {
                            DAT_1808fda7c = 0x7ffffffe;
                            goto LAB_1802f2adb;
                          }
                          if ((DAT_180c6ec98 == 0) && (DAT_180c6ec70 <= UVar9)) {
                            DAT_180c6ec98 = FUN_1804174b0("CGameSceneNode",0xe8b4eae5);
                            DAT_180c6ec70 = 0xffffffffffffffff;
                            if (DAT_180c6ec98 == 0) {
                              DAT_180c6ec70 = UVar9 + 1000;
                            }
                          }
                          iVar12 = DAT_180c6ec98;
                          FUN_1805f68fc(&DAT_1808fda30);
                        }
                        iVar7 = DAT_180c6ec78;
                        local_2a8 = *(undefined8 *)(iVar12 + lVar11);
                        fVar1 = *(float *)((longlong)iVar12 + 8 + lVar11);
                        if ((DAT_180c6ec78 == 0) &&
                           (UVar9 = GetTickCount64(), DAT_180c6ec80 <= UVar9)) {
                          local_2d0 = &DAT_1808fd990;
                          iVar7 = FUN_1805f68d0(&DAT_1808fd990);
                          if (iVar7 != 0) goto LAB_1802f2ae6;
                          if (DAT_1808fd9dc == 0x7fffffff) {
                            DAT_1808fd9dc = 0x7ffffffe;
LAB_1802f2adb:
                    /* WARNING: Subroutine does not return */
                            FUN_1805f6d44(6);
                          }
                          if ((DAT_180c6ec78 == 0) && (DAT_180c6ec80 <= UVar9)) {
                            DAT_180c6ec78 = FUN_1804174b0("C_BaseModelEntity",0x39db834b);
                            DAT_180c6ec80 = 0xffffffffffffffff;
                            if (DAT_180c6ec78 == 0) {
                              DAT_180c6ec80 = UVar9 + 1000;
                            }
                          }
                          iVar7 = DAT_180c6ec78;
                          FUN_1805f68fc(&DAT_1808fd990);
                        }
                        lVar11 = FUN_18017ea70();
                        *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + 1;
                        bVar3 = false;
                        if (iVar7 + lVar10 != 0) {
                          local_2c8 = fVar19;
                          local_2c4 = fVar19;
                          local_2c0 = fVar19;
                          cVar4 = FUN_1804514f0(&local_2c8,iVar7 + lVar10,0xc);
                          if (cVar4 == '\0') {
                            bVar3 = false;
                          }
                          else {
                            bVar3 = true;
                            fVar18 = local_2c0;
                            fVar20 = local_2c8;
                            fVar21 = local_2c4;
                          }
                        }
                        lVar11 = FUN_18017ea70();
                        auVar16._8_56_ = extraout_var_11;
                        auVar16._0_8_ = extraout_XMM0_Qa_06;
                        if (*(int *)(lVar11 + 4) != 0) {
                          *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + -1;
                        }
                        param_4 = local_2d8;
                        if (bVar3) {
                          sVar5 = thunk_FUN_180624430(fVar21 + fVar20 + fVar18);
                          auVar16._8_56_ = extraout_var_12;
                          auVar16._0_8_ = extraout_XMM0_Qa_07;
                          param_4 = local_2d8;
                          if (((sVar5 < 1) && (fVar24 <= fVar18)) && (fVar18 <= fVar22)) {
                            local_268 = fVar18 + fVar1;
                            fStack_26c = fVar21 + local_2a8._4_4_;
                            local_270 = fVar20 + (float)local_2a8;
                            fVar1 = fStack_26c - *(float *)((longlong)local_280 + 0x3c);
                            fVar1 = fVar1 * fVar1 +
                                    (local_270 - *(float *)(local_280 + 7)) *
                                    (local_270 - *(float *)(local_280 + 7)) +
                                    (local_268 - *(float *)(local_280 + 8)) *
                                    (local_268 - *(float *)(local_280 + 8));
                            auVar16 = ZEXT864(0);
                            if (fVar1 < 0.0) {
                              auVar16._0_8_ = FUN_18061e150(fVar1);
                              auVar16._8_56_ = extraout_var_13;
                              auVar15 = auVar16._0_16_;
                            }
                            else {
                              auVar15 = ZEXT416((uint)SQRT(fVar1));
                            }
                            param_4 = local_2d8;
                            auVar17 = ZEXT1664(auVar15);
                            if (auVar15._0_4_ <= fVar23) {
                              uVar14 = FUN_180419410(auVar16._0_8_,local_238,local_2d8[1]);
                              local_2e8 = local_238;
                              FUN_180417b00(uVar14,local_1e8,&local_260,&local_270);
                              iVar7 = DAT_180c6ec64;
                              uVar14 = auVar17._0_8_;
                              auVar16 = ZEXT464((uint)local_13c);
                              if (local_13c < fVar25) {
                                if (local_1e0 != lVar10) goto LAB_1802f2a03;
                              }
                              if (DAT_180c6ec64 == 0) {
                                UVar9 = GetTickCount64();
                                uVar14 = auVar17._0_8_;
                                if (DAT_180c6ec68 <= UVar9) {
                                  local_2d0 = &DAT_1808fd9e0;
                                  iVar7 = FUN_1805f68d0(&DAT_1808fd9e0);
                                  if (iVar7 != 0) {
LAB_1802f2ae6:
                    /* WARNING: Subroutine does not return */
                                    FUN_1805f6d44(5);
                                  }
                                  if (DAT_1808fda2c == 0x7fffffff) {
                                    DAT_1808fda2c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
                                    FUN_1805f6d44(6);
                                  }
                                  if ((DAT_180c6ec64 == 0) && (DAT_180c6ec68 <= UVar9)) {
                                    DAT_180c6ec64 = FUN_1804174b0("C_CSPlayerPawn",0x8937152d);
                                    DAT_180c6ec68 = 0xffffffffffffffff;
                                    if (DAT_180c6ec64 == 0) {
                                      DAT_180c6ec68 = UVar9 + 1000;
                                    }
                                  }
                                  iVar7 = DAT_180c6ec64;
                                  FUN_1805f68fc(&DAT_1808fd9e0);
                                  uVar14 = auVar17._0_8_;
                                }
                              }
                              local_2e8 = &local_2b8;
                              iVar7 = FUN_1802aee30(uVar14,*(undefined4 *)(iVar7 + lVar10),iVar6,1);
                              auVar16._8_56_ = extraout_var_14;
                              auVar16._0_8_ = extraout_XMM0_Qa_08;
                              if (0 < iVar7) {
                                uStack_294 = CONCAT31(uStack_294._1_3_,iVar6 <= iVar7);
                                uStack_290 = CONCAT44(fStack_26c,local_270);
                                local_288 = local_268;
                                pauVar2 = (undefined1 (*) [16])param_3[1];
                                local_298 = iVar7;
                                if (pauVar2 == (undefined1 (*) [16])param_3[2]) {
                                  auVar16._0_8_ = FUN_180268a40(param_3,pauVar2,&local_298);
                                  auVar16._8_56_ = extraout_var_15;
                                }
                                else {
                                  auVar15._4_4_ = uStack_294;
                                  auVar15._0_4_ = iVar7;
                                  auVar15._8_8_ = uStack_290;
                                  auVar16 = ZEXT1664(auVar15);
                                  *pauVar2 = auVar15;
                                  *(float *)pauVar2[1] = local_268;
                                  param_3[1] = param_3[1] + 0x14;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
LAB_1802f2a03:
        plVar13 = plVar13 + 3;
      } while (plVar13 != local_278);
    }
    FUN_1801abba0(local_250);
  }
}



