// FUN_18025e1d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18025e1d0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18025e1d0(undefined8 param_1,undefined1 (*param_2) [16],float *param_3,float *param_4,
                  longlong *param_5,longlong param_6)

{
  int *piVar1;
  float fVar2;
  longlong lVar3;
  undefined8 *puVar4;
  uint uVar5;
  short sVar6;
  int iVar7;
  ULONGLONG UVar8;
  float *pfVar9;
  longlong *plVar10;
  longlong *plVar11;
  float *pfVar12;
  int *piVar13;
  int iVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  float fVar17;
  undefined8 uVar18;
  ulonglong uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  float fVar22;
  undefined1 auVar23 [64];
  undefined1 auVar24 [64];
  float fVar25;
  undefined1 auVar26 [64];
  float fVar27;
  undefined1 auVar28 [64];
  undefined1 auVar29 [64];
  float fVar30;
  undefined4 uVar31;
  float fVar32;
  undefined4 uVar33;
  float fVar34;
  undefined4 uVar35;
  undefined1 auVar36 [64];
  float fVar37;
  undefined1 auVar38 [64];
  float fVar39;
  undefined1 auVar40 [64];
  undefined1 auVar41 [64];
  undefined1 auStack_9e8 [32];
  float local_9c8;
  longlong local_9c0;
  undefined8 local_9b8;
  longlong *local_9a8;
  int local_9a0;
  int *local_998;
  undefined4 local_990;
  int *local_988;
  float local_980;
  float local_97c;
  float local_978;
  float local_970;
  float local_96c;
  uint local_968;
  float *local_960;
  longlong *local_958;
  float local_948;
  float fStack_944;
  float fStack_940;
  undefined4 uStack_93c;
  undefined4 uStack_938;
  undefined4 uStack_934;
  undefined4 uStack_930;
  float fStack_92c;
  undefined4 local_928;
  float fStack_924;
  undefined4 uStack_920;
  float fStack_91c;
  undefined8 uStack_918;
  undefined8 uStack_910;
  undefined8 uStack_908;
  undefined8 uStack_900;
  undefined8 uStack_8f8;
  undefined1 uStack_8f0;
  undefined2 uStack_8ef;
  undefined1 uStack_8ed;
  undefined4 uStack_8ec;
  undefined4 local_8e8;
  undefined4 uStack_8e4;
  undefined4 uStack_8e0;
  undefined4 uStack_8dc;
  undefined4 uStack_8d8;
  undefined4 uStack_8d4;
  undefined4 uStack_8d0;
  uint uStack_8cc;
  longlong local_8c8;
  undefined4 uStack_8c0;
  undefined4 uStack_8bc;
  int *local_8b8;
  undefined1 (*local_8a8) [16];
  undefined1 local_8a0 [24];
  undefined1 local_888 [8];
  longlong local_880;
  float local_778 [216];
  undefined1 local_418 [8];
  float afStack_410 [198];
  uint local_f8;
  ulonglong local_e8;
  
  local_e8 = DAT_1808d5f00 ^ (ulonglong)auStack_9e8;
  *param_2 = (undefined1  [16])0x0;
  *(undefined8 *)*param_2 = 0;
  *(undefined8 *)(*param_2 + 8) = 0;
  *(undefined8 *)param_2[1] = 0;
  local_990 = 1;
  local_960 = param_4;
  local_8a8 = param_2;
  sVar6 = thunk_FUN_180624430(*param_3);
  if ((((sVar6 < 1) && (sVar6 = thunk_FUN_180624430(param_3[1]), sVar6 < 1)) &&
      (sVar6 = thunk_FUN_180624430(param_3[2]), sVar6 < 1)) &&
     (((sVar6 = thunk_FUN_180624430(*param_4), sVar6 < 1 &&
       (sVar6 = thunk_FUN_180624430(param_4[1]), sVar6 < 1)) &&
      (sVar6 = thunk_FUN_180624430(param_4[2]), sVar6 < 1)))) {
    auVar23 = ZEXT464((uint)DAT_180cc936c);
    sVar6 = thunk_FUN_180624430(DAT_180cc936c);
    if ((sVar6 < 1) && (auVar41 = ZEXT864(0), 0.0 < auVar23._0_4_)) {
      local_9a8 = (longlong *)*param_5;
      plVar10 = (longlong *)param_5[1];
      local_958 = plVar10;
      if (local_9a8 == plVar10) {
      }
      do {
        local_9a0 = 0;
        plVar11 = local_9a8;
        if (0 < (int)local_9a8[0xd6b]) {
          local_998 = (int *)((longlong)local_9a8 + 900);
          do {
            iVar14 = local_9a0;
            iVar7 = DAT_180c647f4;
            piVar13 = local_998;
            if ((char)local_998[0x813] != '\0') {
              if (DAT_180c647f4 == 0) {
                auVar41 = ZEXT1664(auVar41._0_16_);
                UVar8 = GetTickCount64();
                if (DAT_180c647f8 <= UVar8) {
                  local_988 = (int *)&DAT_1808ef3b0;
                  iVar7 = FUN_1805f68d0(&DAT_1808ef3b0);
                  if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_1805f6d44(5);
                  }
                  if (DAT_1808ef3fc == 0x7fffffff) {
                    DAT_1808ef3fc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
                    FUN_1805f6d44(6);
                  }
                  if ((DAT_180c647f4 == 0) && (DAT_180c647f8 <= UVar8)) {
                    DAT_180c647f4 = FUN_1804174b0("C_BaseEntity",0x9d930423);
                    if (DAT_180c647f4 == 0) {
                      DAT_180c647f8 = UVar8 + 1000;
                    }
                    else {
                      DAT_180c647f8 = 0xffffffffffffffff;
                    }
                  }
                  iVar7 = DAT_180c647f4;
                  FUN_1805f68fc(&DAT_1808ef3b0);
                }
              }
              piVar13 = local_998;
              lVar3 = *(longlong *)((longlong)iVar7 + *plVar11);
              if (lVar3 != 0) {
                auVar41 = ZEXT1664(auVar41._0_16_);
                FUN_1803dad10((longlong)iVar7,local_418,lVar3,0);
                uVar5 = local_f8;
                if (0 < (int)local_f8) {
                  piVar1 = piVar13 + -0xdb;
                  local_988 = piVar1;
                  uVar18 = FUN_180270fb0(piVar1);
                  FUN_180273740(uVar18,local_778,piVar1);
                  if (0 < (int)uVar5) {
                    pfVar12 = afStack_410;
                    uVar15 = (ulonglong)uVar5;
                    do {
                      fVar2 = pfVar12[-1];
                      uVar16 = (ulonglong)(int)fVar2;
                      if (-1 < (int)fVar2) {
                        if (uVar16 < 0x1b) {
                          fVar17 = *pfVar12;
                          auVar41 = ZEXT1664(auVar41._0_16_);
                          sVar6 = thunk_FUN_180624430();
                          if (sVar6 < 1) {
                            fVar37 = pfVar12[1];
                            sVar6 = thunk_FUN_180624430(fVar37);
                            if (sVar6 < 1) {
                              fVar39 = pfVar12[2];
                              sVar6 = thunk_FUN_180624430(fVar39);
                              if (sVar6 < 1) {
                                fVar34 = pfVar12[3];
                                sVar6 = thunk_FUN_180624430(fVar34);
                                if (sVar6 < 1) {
                                  fVar32 = pfVar12[4];
                                  sVar6 = thunk_FUN_180624430(fVar32);
                                  if (sVar6 < 1) {
                                    fVar30 = pfVar12[5];
                                    sVar6 = thunk_FUN_180624430(fVar30);
                                    if (sVar6 < 1) {
                                      sVar6 = thunk_FUN_180624430(pfVar12[6]);
                                      if (sVar6 < 1) {
                                        fVar27 = local_778[uVar16 * 8];
                                        sVar6 = thunk_FUN_180624430(fVar27);
                                        if (sVar6 < 1) {
                                          fVar25 = local_778[uVar16 * 8 + 1];
                                          sVar6 = thunk_FUN_180624430(fVar25);
                                          if (sVar6 < 1) {
                                            fVar22 = local_778[uVar16 * 8 + 2];
                                            sVar6 = thunk_FUN_180624430(fVar22);
                                            if (sVar6 < 1) {
                                              sVar6 = thunk_FUN_180624430(local_778[uVar16 * 8 + 4])
                                              ;
                                              if (((((sVar6 < 1) &&
                                                    (sVar6 = thunk_FUN_180624430(local_778[uVar16 * 
                                                  8 + 5]), sVar6 < 1)) &&
                                                  (sVar6 = thunk_FUN_180624430(local_778[uVar16 * 8
                                                                                         + 6]),
                                                  sVar6 < 1)) &&
                                                  ((sVar6 = thunk_FUN_180624430(local_778[uVar16 * 8
                                                                                          + 7]),
                                                   sVar6 < 1 &&
                                                   (sVar6 = thunk_FUN_180624430(local_778[uVar16 * 8
                                                                                          + 3]),
                                                   sVar6 < 1)))) &&
                                                 (1.0 <= fVar27 * fVar27 + fVar25 * fVar25 +
                                                         fVar22 * fVar22)) {
                                                local_980 = (fVar17 + fVar34) * 0.5;
                                                local_97c = (fVar37 + fVar32) * 0.5;
                                                local_978 = (fVar39 + fVar30) * 0.5;
                                                pfVar9 = (float *)FUN_180451010(local_778 +
                                                                                uVar16 * 8 + 4,
                                                                                local_8a0,&local_980
                                                                               );
                                                auVar36 = ZEXT464((uint)(fVar22 + pfVar9[2]));
                                                auVar38 = ZEXT464((uint)(fVar25 + pfVar9[1]));
                                                auVar40 = ZEXT464((uint)(fVar27 + *pfVar9));
                                                fVar17 = (fVar22 + pfVar9[2]) - param_3[2];
                                                auVar28 = ZEXT464((uint)fVar17);
                                                uVar16 = (ulonglong)(uint)fVar17;
                                                fVar17 = (fVar25 + pfVar9[1]) - param_3[1];
                                                auVar23 = ZEXT464((uint)fVar17);
                                                fVar37 = (fVar27 + *pfVar9) - *param_3;
                                                auVar26 = ZEXT464((uint)fVar37);
                                                fVar17 = fVar37 * fVar37 + fVar17 * fVar17;
                                                if (fVar17 == auVar41._0_4_) {
                                                  uVar19 = auVar41._0_8_;
                                                }
                                                else if (fVar17 < 0.0) {
                                                  uVar19 = FUN_18061e150(fVar17);
                                                  uVar16 = auVar28._0_8_;
                                                }
                                                else {
                                                  uVar19 = (ulonglong)(uint)SQRT(fVar17);
                                                }
                                                fVar17 = (float)FUN_180636c80(uVar16 ^ 
                                                  0x8000000080000000,uVar19);
                                                auVar28 = ZEXT464((uint)(fVar17 * 57.295776));
                                                fVar17 = (float)FUN_180636c80(auVar23._0_8_,
                                                                              auVar26._0_8_);
                                                auVar23 = ZEXT464((uint)(fVar17 * 57.295776));
                                                fVar37 = auVar28._0_4_ - *local_960;
                                                for (fVar17 = fVar17 * 57.295776 - local_960[1];
                                                    180.0 < fVar17; fVar17 = fVar17 + -360.0) {
                                                }
                                                for (; fVar17 < -180.0; fVar17 = fVar17 + 360.0) {
                                                }
                                                fVar17 = fVar17 * fVar17 + fVar37 * fVar37;
                                                if (fVar17 < 0.0) {
                                                  auVar26._0_8_ = FUN_18061e150();
                                                  auVar26._8_56_ = extraout_var;
                                                  auVar20 = auVar26._0_16_;
                                                }
                                                else {
                                                  auVar20 = ZEXT416((uint)SQRT(fVar17));
                                                }
                                                auVar26 = ZEXT1664(auVar20);
                                                sVar6 = thunk_FUN_180624430(auVar40._0_8_);
                                                if (((sVar6 < 1) &&
                                                    (sVar6 = thunk_FUN_180624430(auVar38._0_8_),
                                                    sVar6 < 1)) &&
                                                   ((sVar6 = thunk_FUN_180624430(auVar36._0_8_),
                                                    sVar6 < 1 &&
                                                    (((sVar6 = thunk_FUN_180624430(auVar28._0_8_),
                                                      sVar6 < 1 &&
                                                      (sVar6 = thunk_FUN_180624430(auVar23._0_8_),
                                                      sVar6 < 1)) &&
                                                     (sVar6 = thunk_FUN_180624430(auVar26._0_8_),
                                                     sVar6 < 1)))))) {
                                                  if (DAT_180cad570 < auVar26._0_4_) {
                                                    plVar11 = local_9a8;
                                                  }
                                                  else {
                                                    fVar17 = auVar28._0_4_ * 0.017453292;
                                                    auVar29 = ZEXT464((uint)fVar17);
                                                    auVar24 = ZEXT464((uint)(auVar23._0_4_ *
                                                                            0.017453292));
                                                    fVar17 = (float)FUN_180637540(fVar17);
                                                    local_970 = (float)FUN_180637540(auVar24._0_8_);
                                                    local_970 = local_970 * fVar17;
                                                    local_96c = (float)FUN_180638e00(auVar24._0_8_);
                                                    local_96c = local_96c * fVar17;
                                                    local_968 = FUN_180638e00(auVar29._0_8_);
                                                    plVar11 = local_9a8;
                                                    local_968 = local_968 ^ 0x80000000;
                                                    local_9c8 = DAT_180cc936c * 0.85;
                                                    local_9b8 = *(undefined8 *)(param_6 + 8);
                                                    local_9c0 = *local_9a8;
                                                    FUN_180263500(local_9c8,local_888,param_3);
                                                    uVar31 = auVar26._0_4_;
                                                    uVar35 = auVar23._0_4_;
                                                    uVar33 = auVar28._0_4_;
                                                    fVar17 = auVar36._0_4_;
                                                    fVar37 = auVar38._0_4_;
                                                    fVar39 = auVar40._0_4_;
                                                    lVar3 = *plVar11;
                                                    if (local_880 == lVar3) {
                                                      fVar34 = (fVar39 - *param_3) *
                                                               (fVar39 - *param_3) +
                                                               (fVar37 - param_3[1]) *
                                                               (fVar37 - param_3[1]) +
                                                               (fVar17 - param_3[2]) *
                                                               (fVar17 - param_3[2]);
                                                      if (fVar34 == auVar41._0_4_) {
                                                        auVar20 = auVar41._0_16_;
                                                      }
                                                      else if (fVar34 < 0.0) {
                                                        auVar24._0_8_ = FUN_18061e150(fVar34);
                                                        uVar31 = auVar26._0_4_;
                                                        uVar35 = auVar23._0_4_;
                                                        uVar33 = auVar28._0_4_;
                                                        fVar17 = auVar36._0_4_;
                                                        fVar37 = auVar38._0_4_;
                                                        fVar39 = auVar40._0_4_;
                                                        auVar24._8_56_ = extraout_var_00;
                                                        auVar20 = auVar24._0_16_;
                                                      }
                                                      else {
                                                        auVar20 = ZEXT416((uint)SQRT(fVar34));
                                                      }
                                                      uStack_8ef = 0;
                                                      uStack_8ec = 0;
                                                      uStack_934 = auVar41._0_4_;
                                                      uStack_8dc = 0;
                                                      uStack_8d4 = 0;
                                                      uStack_8cc = uStack_8cc & 0xffffff00;
                                                      uStack_930 = 0x43fa0000;
                                                      auVar21._0_4_ = auVar20._0_4_ / DAT_180cc936c;
                                                      auVar21._4_12_ = auVar20._4_12_;
                                                      auVar21 = vcmpss_avx(SUB6416(ZEXT464(
                                                  0x3f6b851f),0),auVar21,1);
                                                  auVar21 = vblendvps_avx(SUB6416(ZEXT464(0x3f800000
                                                                                         ),0),
                                                                          SUB6416(ZEXT464(0x3f4ccccd
                                                                                         ),0),
                                                                          auVar21);
                                                  fStack_92c = auVar21._0_4_ *
                                                               (10000.0 - auVar20._0_4_);
                                                  fStack_924 = pfVar12[-2];
                                                  local_948 = fVar39;
                                                  fStack_944 = fVar37;
                                                  fStack_940 = fVar17;
                                                  uStack_93c = uVar33;
                                                  uStack_938 = uVar35;
                                                  local_928 = uVar31;
                                                  local_8e8 = uStack_934;
                                                  uStack_8e4 = uStack_934;
                                                  uStack_8e0 = uStack_934;
                                                  uStack_8d8 = uStack_934;
                                                  uStack_8d0 = uStack_934;
                                                  uStack_920 = FUN_1803db3f0();
                                                  uStack_918 = *(undefined8 *)(pfVar12 + -2);
                                                  uStack_910 = *(undefined8 *)pfVar12;
                                                  uStack_908 = *(undefined8 *)(pfVar12 + 2);
                                                  uStack_900 = *(undefined8 *)(pfVar12 + 4);
                                                  uStack_8f8 = *(undefined8 *)(pfVar12 + 6);
                                                  uStack_8f0 = 1;
                                                  uStack_8c0 = (undefined4)plVar11[1];
                                                  local_8b8 = local_988;
                                                  puVar4 = *(undefined8 **)(*param_2 + 8);
                                                  fStack_91c = fVar2;
                                                  local_8c8 = lVar3;
                                                  if (puVar4 == *(undefined8 **)param_2[1]) {
                                                    auVar41 = ZEXT1664(auVar41._0_16_);
                                                    FUN_180268c10(param_2,puVar4,&local_948);
                                                  }
                                                  else {
                                                    *puVar4 = CONCAT44(fStack_944,local_948);
                                                    puVar4[1] = CONCAT44(uStack_93c,fStack_940);
                                                    puVar4[2] = CONCAT44(uStack_934,uStack_938);
                                                    puVar4[3] = CONCAT44(fStack_92c,uStack_930);
                                                    puVar4[4] = CONCAT44(fStack_924,local_928);
                                                    puVar4[5] = CONCAT44(fVar2,uStack_920);
                                                    puVar4[6] = uStack_918;
                                                    puVar4[7] = uStack_910;
                                                    puVar4[8] = uStack_908;
                                                    puVar4[9] = uStack_900;
                                                    puVar4[10] = uStack_8f8;
                                                    puVar4[0xb] = CONCAT44(uStack_8ec,
                                                                           CONCAT13(uStack_8ed,
                                                                                    CONCAT21(
                                                  uStack_8ef,1)));
                                                  puVar4[0xc] = CONCAT44(uStack_8e4,local_8e8);
                                                  puVar4[0xd] = CONCAT44(uStack_8dc,uStack_8e0);
                                                  puVar4[0xe] = CONCAT44(uStack_8d4,uStack_8d8);
                                                  puVar4[0xf] = CONCAT44(uStack_8cc,uStack_8d0);
                                                  puVar4[0x10] = lVar3;
                                                  puVar4[0x11] = CONCAT44(uStack_8bc,uStack_8c0);
                                                  puVar4[0x12] = local_988;
                                                  *(longlong *)(*param_2 + 8) =
                                                       *(longlong *)(*param_2 + 8) + 0x98;
                                                  }
                                                  }
                                                  }
                                                  goto LAB_18025ea3f;
                                                }
                                              }
                                              plVar11 = local_9a8;
                                            }
                                          }
                                        }
                                        LOCK();
                                        _DAT_180b8e6d8 = _DAT_180b8e6d8 + 1;
                                        UNLOCK();
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
LAB_18025ea3f:
                      pfVar12 = pfVar12 + 10;
                      uVar15 = uVar15 - 1;
                    } while (uVar15 != 0);
                    piVar13 = local_998;
                    iVar14 = local_9a0;
                  }
                  if ((((char)piVar13[0x813] != '\0') &&
                      (*(char *)((longlong)piVar13 + 0x204e) != '\0')) &&
                     (*(longlong *)(piVar13 + -0xd7) != 0)) {
                    auVar41 = ZEXT1664(auVar41._0_16_);
                    FUN_18063aed0(*(longlong *)(piVar13 + -0xd7),piVar13 + 0x401,
                                  (longlong)*piVar13 << 5);
                    *(undefined1 *)((longlong)piVar13 + 0x204e) = 0;
                  }
                }
              }
            }
            local_9a0 = iVar14 + 1;
            local_998 = piVar13 + 0x8f0;
          } while (local_9a0 < (int)plVar11[0xd6b]);
          plVar10 = local_958;
        }
        local_9a8 = plVar11 + 0xd6c;
        if (local_9a8 == plVar10) {
        }
      } while( true );
    }
  }
  LOCK();
  _DAT_180b8e6d8 = _DAT_180b8e6d8 + 1;
  UNLOCK();
}



