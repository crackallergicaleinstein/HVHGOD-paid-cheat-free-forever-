// FUN_180236a10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180236a10 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180236a10(undefined8 param_1,float *param_2,float *param_3,longlong param_4,
                  longlong *param_5)

{
  undefined4 *puVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  short sVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  ULONGLONG UVar11;
  longlong lVar12;
  int iVar13;
  undefined4 *puVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong *plVar17;
  float fVar18;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar19;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  ulonglong uVar20;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined1 auVar21 [16];
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  undefined1 extraout_var_01 [56];
  undefined1 extraout_var_02 [56];
  undefined1 extraout_var_03 [56];
  undefined1 auVar22 [64];
  undefined1 extraout_var_04 [56];
  undefined1 extraout_var_05 [56];
  undefined1 extraout_var_06 [56];
  float fVar23;
  undefined1 auVar24 [64];
  float fVar25;
  ulonglong uVar26;
  undefined1 auVar27 [64];
  undefined1 auVar28 [64];
  undefined1 auVar29 [64];
  undefined1 auVar30 [16];
  undefined1 auVar31 [64];
  undefined1 auVar32 [16];
  undefined1 auVar33 [64];
  undefined1 auVar34 [16];
  undefined1 auVar35 [64];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [64];
  undefined1 auStackY_1f8 [32];
  undefined4 local_1c0;
  undefined4 local_1bc;
  longlong *local_1b8;
  float *local_1b0;
  ULONGLONG local_1a8;
  float local_1a0;
  float local_19c;
  float local_198;
  longlong local_190;
  ulonglong uStack_188;
  longlong lStack_180;
  undefined1 uStack_178;
  uint7 uStack_177;
  longlong *local_170;
  undefined1 local_168 [36];
  float local_144;
  float local_140;
  float local_13c;
  char local_10c;
  undefined1 local_108 [16];
  longlong local_f8;
  undefined1 local_f0 [24];
  ulonglong local_d8;
  
  local_d8 = DAT_1808d5f00 ^ (ulonglong)auStackY_1f8;
  plVar17 = &DAT_180b8e7a8;
  puVar9 = &DAT_180b8e7a8;
  do {
    *(undefined1 *)(puVar9 + 3) = 0;
    puVar9 = puVar9 + 4;
  } while (puVar9 != &DAT_180b8f7a8);
  local_1b0 = param_3;
  local_1a8 = GetTickCount64();
  FUN_180234370(param_4,&local_1c0);
  auVar29 = ZEXT864(0);
  auVar38 = ZEXT464((uint)DAT_180b8f820);
  if (DAT_180b8f820 <= 0.0) {
    auVar38._0_8_ = FUN_180233fd0(*(undefined4 *)(param_4 + 0x68),0,0);
    auVar38._8_56_ = extraout_var;
    auVar38 = ZEXT1664(auVar38._0_16_);
  }
  sVar6 = thunk_FUN_180624430(*param_2);
  if (((((sVar6 < 1) && (sVar6 = thunk_FUN_180624430(param_2[1]), sVar6 < 1)) &&
       (sVar6 = thunk_FUN_180624430(param_2[2]), sVar6 < 1)) &&
      ((sVar6 = thunk_FUN_180624430(*param_3), sVar6 < 1 &&
       (sVar6 = thunk_FUN_180624430(param_3[1]), sVar6 < 1)))) &&
     (sVar6 = thunk_FUN_180624430(param_3[2]), sVar6 < 1)) {
    plVar10 = (longlong *)FUN_1803d44c0(extraout_XMM0_Qa,local_f0,1);
    local_1b8 = (longlong *)*plVar10;
    local_170 = (longlong *)plVar10[1];
    if (local_1b8 != local_170) {
      auVar31 = ZEXT464(0x43340000);
      auVar33 = ZEXT464(0xc3b40000);
      auVar28 = ZEXT464(0xc3340000);
      auVar35 = ZEXT464(0x43b40000);
LAB_180236bd0:
      plVar10 = local_1b8;
      iVar7 = DAT_180c64370;
      if ((*local_1b8 != 0) && (*local_1b8 != *param_5)) {
        if (DAT_180c64370 == 0) {
          auVar28 = ZEXT1664(auVar28._0_16_);
          auVar31 = ZEXT1664(auVar31._0_16_);
          auVar33 = ZEXT1664(auVar33._0_16_);
          auVar35 = ZEXT1664(auVar35._0_16_);
          auVar29 = ZEXT1664(auVar29._0_16_);
          auVar38 = ZEXT1664(auVar38._0_16_);
          UVar11 = GetTickCount64();
          if (DAT_180c64368 <= UVar11) {
            iVar7 = FUN_1805f68d0(&DAT_1808ed990);
            if (iVar7 != 0) goto LAB_1802375da;
            if (DAT_1808ed9dc == 0x7fffffff) {
              DAT_1808ed9dc = 0x7ffffffe;
              goto LAB_18023765d;
            }
            if ((DAT_180c64370 == 0) && (DAT_180c64368 <= UVar11)) {
              DAT_180c64370 = FUN_1804174b0("CCSPlayerController",0x3db3c8d0);
              DAT_180c64368 = 0xffffffffffffffff;
              if (DAT_180c64370 == 0) {
                DAT_180c64368 = UVar11 + 1000;
              }
            }
            iVar7 = DAT_180c64370;
            FUN_1805f68fc(&DAT_1808ed990);
          }
        }
        auVar37 = auVar38._0_16_;
        auVar36 = auVar29._0_16_;
        auVar34 = auVar35._0_16_;
        auVar32 = auVar33._0_16_;
        auVar30 = auVar31._0_16_;
        auVar21 = auVar28._0_16_;
        if (*(char *)((longlong)iVar7 + *plVar10) == '\0') goto LAB_180237484;
        if (DAT_180c64358 == 0) {
          auVar29 = ZEXT1664(auVar21);
          auVar38 = ZEXT1664(auVar30);
          auVar28 = ZEXT1664(auVar32);
          auVar31 = ZEXT1664(auVar34);
          auVar33 = ZEXT1664(auVar36);
          auVar35 = ZEXT1664(auVar37);
          UVar11 = GetTickCount64();
          auVar37 = auVar35._0_16_;
          auVar36 = auVar33._0_16_;
          auVar34 = auVar31._0_16_;
          auVar32 = auVar28._0_16_;
          auVar30 = auVar38._0_16_;
          auVar21 = auVar29._0_16_;
          if (DAT_180c64360 <= UVar11) {
            iVar7 = FUN_1805f68d0(&DAT_1808ed9e0);
            if (iVar7 != 0) goto LAB_1802375da;
            if (DAT_1808eda2c == 0x7fffffff) {
              DAT_1808eda2c = 0x7ffffffe;
              goto LAB_18023765d;
            }
            if ((DAT_180c64358 == 0) && (DAT_180c64360 <= UVar11)) {
              DAT_180c64358 = FUN_1804174b0("CCSPlayerController",0xd6c93e7c);
              DAT_180c64360 = 0xffffffffffffffff;
              if (DAT_180c64358 == 0) {
                DAT_180c64360 = UVar11 + 1000;
              }
            }
            FUN_1805f68fc(&DAT_1808ed9e0);
            auVar37 = auVar35._0_16_;
            auVar36 = auVar33._0_16_;
            auVar34 = auVar31._0_16_;
            auVar32 = auVar28._0_16_;
            auVar30 = auVar38._0_16_;
            auVar21 = auVar29._0_16_;
          }
        }
        auVar28 = ZEXT1664(auVar21);
        auVar31 = ZEXT1664(auVar30);
        auVar33 = ZEXT1664(auVar32);
        auVar35 = ZEXT1664(auVar34);
        auVar29 = ZEXT1664(auVar36);
        auVar38 = ZEXT1664(auVar37);
        lVar12 = FUN_1803d4150();
        if (DAT_180c64350 == 0) {
          UVar11 = GetTickCount64();
          uVar19 = extraout_XMM0_Qa_00;
          if (DAT_180c64348 <= UVar11) {
            iVar7 = FUN_1805f68d0(&DAT_1808ed940);
            if (iVar7 != 0) goto LAB_1802375da;
            if (DAT_1808ed98c == 0x7fffffff) {
              DAT_1808ed98c = 0x7ffffffe;
              goto LAB_18023765d;
            }
            if ((DAT_180c64350 == 0) && (DAT_180c64348 <= UVar11)) {
              DAT_180c64350 = FUN_1804174b0("CCSPlayerController",0xd6c93e7c);
              DAT_180c64348 = 0xffffffffffffffff;
              if (DAT_180c64350 == 0) {
                DAT_180c64348 = UVar11 + 1000;
              }
            }
            iVar7 = DAT_180c64350;
            uVar19 = FUN_1805f68fc(&DAT_1808ed940);
            if (iVar7 != 0) goto LAB_180236eb8;
          }
          iVar7 = DAT_180c64354;
          if (DAT_180c64354 == 0) {
            UVar11 = GetTickCount64();
            if (DAT_180c64330 <= UVar11) {
              iVar7 = FUN_1805f68d0(&DAT_1808ed8f0);
              if (iVar7 != 0) goto LAB_1802375da;
              if (DAT_1808ed93c == 0x7fffffff) {
                DAT_1808ed93c = 0x7ffffffe;
                goto LAB_18023765d;
              }
              if ((DAT_180c64354 == 0) && (DAT_180c64330 <= UVar11)) {
                DAT_180c64354 = FUN_1804174b0("CBasePlayerController",0x7c628c1d);
                DAT_180c64330 = 0xffffffffffffffff;
                if (DAT_180c64354 == 0) {
                  DAT_180c64330 = UVar11 + 1000;
                }
              }
              iVar7 = DAT_180c64354;
              uVar19 = FUN_1805f68fc(&DAT_1808ed8f0);
              if (iVar7 != 0) goto LAB_180236ea7;
            }
          }
          else {
LAB_180236ea7:
            lVar12 = FUN_1803d4150(uVar19,*(undefined4 *)((longlong)iVar7 + *plVar10));
          }
        }
LAB_180236eb8:
        iVar7 = DAT_180c64340;
        if ((lVar12 == 0) || (lVar12 == param_5[1])) goto LAB_180237484;
        if ((DAT_180c64340 == 0) && (UVar11 = GetTickCount64(), DAT_180c64338 <= UVar11)) {
          iVar7 = FUN_1805f68d0(&DAT_1808ed850);
          if (iVar7 != 0) goto LAB_1802375da;
          if (DAT_1808ed89c == 0x7fffffff) {
            DAT_1808ed89c = 0x7ffffffe;
            goto LAB_18023765d;
          }
          if ((DAT_180c64340 == 0) && (DAT_180c64338 <= UVar11)) {
            DAT_180c64340 = FUN_1804174b0("C_BaseEntity",0xa5bfefb3);
            DAT_180c64338 = 0xffffffffffffffff;
            if (DAT_180c64340 == 0) {
              DAT_180c64338 = UVar11 + 1000;
            }
          }
          iVar7 = DAT_180c64340;
          FUN_1805f68fc(&DAT_1808ed850);
        }
        iVar13 = DAT_180c64324;
        if ((*(char *)((longlong)param_5 + 0x29) != '\0') &&
           (*(uint *)((longlong)param_5 + 0x24) == (uint)*(byte *)(iVar7 + lVar12)))
        goto LAB_180237484;
        if ((DAT_180c64324 == 0) && (UVar11 = GetTickCount64(), DAT_180c64328 <= UVar11)) {
          iVar7 = FUN_1805f68d0(&DAT_1808ed8a0);
          if (iVar7 != 0) goto LAB_1802375da;
          if (DAT_1808ed8ec == 0x7fffffff) {
            DAT_1808ed8ec = 0x7ffffffe;
            goto LAB_18023765d;
          }
          if ((DAT_180c64324 == 0) && (DAT_180c64328 <= UVar11)) {
            DAT_180c64324 = FUN_1804174b0("C_BaseEntity",0x84cdad2);
            DAT_180c64328 = 0xffffffffffffffff;
            if (DAT_180c64324 == 0) {
              DAT_180c64328 = UVar11 + 1000;
            }
          }
          iVar13 = DAT_180c64324;
          FUN_1805f68fc(&DAT_1808ed8a0);
        }
        iVar7 = DAT_180c64320;
        if (*(int *)(iVar13 + lVar12) < 1) goto LAB_180237484;
        if ((DAT_180c64320 == 0) && (UVar11 = GetTickCount64(), DAT_180c64318 <= UVar11)) {
          iVar7 = FUN_1805f68d0(&DAT_1808ed800);
          if (iVar7 != 0) {
LAB_1802375da:
                    /* WARNING: Subroutine does not return */
            FUN_1805f6d44(5);
          }
          if (DAT_1808ed84c == 0x7fffffff) {
            DAT_1808ed84c = 0x7ffffffe;
LAB_18023765d:
                    /* WARNING: Subroutine does not return */
            FUN_1805f6d44(6);
          }
          if ((DAT_180c64320 == 0) && (DAT_180c64318 <= UVar11)) {
            DAT_180c64320 = FUN_1804174b0("C_CSPlayerPawn",0x9c15080d);
            DAT_180c64318 = 0xffffffffffffffff;
            if (DAT_180c64320 == 0) {
              DAT_180c64318 = UVar11 + 1000;
            }
          }
          iVar7 = DAT_180c64320;
          FUN_1805f68fc(&DAT_1808ed800);
        }
        if (*(char *)(iVar7 + lVar12) != '\0') goto LAB_180237484;
        if (*(char *)(param_4 + 0x9c) != '\0') {
          cVar5 = FUN_1802351c0(lVar12);
          if (cVar5 != '\0') goto LAB_180237484;
        }
        local_108 = (undefined1  [16])0x0;
        local_f8 = 0;
        auVar22._0_8_ = FUN_180273020(&DAT_180cc9398,local_108,lVar12);
        auVar22._8_56_ = extraout_var_00;
        if ((((local_108._0_8_ == local_108._8_8_) ||
             (lVar2 = *(longlong *)local_108._0_8_, lVar2 == 0)) ||
            (*(char *)(lVar2 + 0x23b8) == '\0')) ||
           ((0x7f < *(int *)(lVar2 + 0x36c) - 1U || (0x13 < *(int *)(lVar2 + 0x368) - 1U)))) {
          if ((longlong *)local_108._0_8_ != (longlong *)0x0) {
            plVar15 = (longlong *)local_108._0_8_;
            if ((0xfff < (local_f8 - local_108._0_8_ & 0xfffffffffffffff8U)) &&
               (plVar15 = *(longlong **)(local_108._0_8_ + -8),
               0x1f < (ulonglong)(local_108._0_8_ + (-8 - (longlong)plVar15)))) goto LAB_1802375ef;
            FUN_1804547d0(plVar15);
          }
          goto LAB_180237484;
        }
        puVar14 = (undefined4 *)(lVar2 + 0x48);
        puVar1 = puVar14 + (longlong)*(int *)(lVar2 + 0x368) * 10;
        if (puVar14 != puVar1) {
          do {
            iVar7 = puVar14[1];
            lVar16 = (longlong)iVar7;
            if ((-1 < iVar7) && (iVar7 < *(int *)(lVar2 + 0x36c))) {
              uVar8 = FUN_1803db3f0(auVar22._0_8_,*puVar14);
              cVar5 = FUN_1802404d0(param_4,uVar8);
              auVar22._8_56_ = extraout_var_01;
              auVar22._0_8_ = extraout_XMM0_Qa_01;
              if (cVar5 != '\0') {
                auVar22._0_8_ = FUN_180237670(local_168,puVar14,lVar16 * 0x20 + 0x370 + lVar2);
                auVar22._8_56_ = extraout_var_02;
                if (local_10c != '\0') {
                  local_1a0 = local_144;
                  local_19c = local_140;
                  local_198 = local_13c;
                  fVar18 = local_140;
                  fVar23 = local_13c;
                  fVar25 = local_144;
                  sVar6 = thunk_FUN_180624430(local_144);
                  auVar22._8_56_ = extraout_var_03;
                  auVar22._0_8_ = extraout_XMM0_Qa_02;
                  if ((((sVar6 < 1) && (((uint)fVar18 & 0x7f800000) != 0x7f800000)) &&
                      (((uint)fVar23 & 0x7f800000) != 0x7f800000)) &&
                     (auVar22 = ZEXT464(0x3f800000),
                     1.0 <= fVar18 * fVar18 + fVar25 * fVar25 + fVar23 * fVar23)) {
                    auVar27 = ZEXT464((uint)(fVar23 - param_2[2]));
                    uVar26 = (ulonglong)(uint)(fVar23 - param_2[2]);
                    fVar18 = fVar18 - param_2[1];
                    auVar22 = ZEXT464((uint)fVar18);
                    fVar25 = fVar25 - *param_2;
                    auVar24 = ZEXT464((uint)fVar25);
                    fVar18 = fVar25 * fVar25 + fVar18 * fVar18;
                    if (fVar18 == auVar29._0_4_) {
                      uVar20 = auVar29._0_8_;
                    }
                    else if (fVar18 < 0.0) {
                      uVar20 = FUN_18061e150(fVar18);
                      uVar26 = auVar27._0_8_;
                    }
                    else {
                      uVar20 = (ulonglong)(uint)SQRT(fVar18);
                    }
                    fVar18 = (float)FUN_180636c80(uVar26 ^ 0x8000000080000000,uVar20);
                    fVar25 = fVar18 * 57.295776 - *local_1b0;
                    fVar18 = (float)FUN_180636c80(auVar22._0_8_,auVar24._0_8_);
                    for (fVar18 = fVar18 * 57.295776 - local_1b0[1]; auVar31._0_4_ < fVar18;
                        fVar18 = fVar18 + auVar33._0_4_) {
                    }
                    for (; fVar18 < auVar28._0_4_; fVar18 = fVar18 + auVar35._0_4_) {
                    }
                    fVar18 = fVar18 * fVar18 + fVar25 * fVar25;
                    if (fVar18 < 0.0) {
                      auVar24._0_8_ = FUN_18061e150();
                      auVar24._8_56_ = extraout_var_04;
                      auVar21 = auVar24._0_16_;
                    }
                    else {
                      auVar21 = ZEXT416((uint)SQRT(fVar18));
                    }
                    auVar24 = ZEXT1664(auVar21);
                    sVar6 = thunk_FUN_180624430(auVar21._0_8_);
                    auVar22._8_56_ = extraout_var_05;
                    auVar22._0_8_ = extraout_XMM0_Qa_03;
                    if ((sVar6 < 1) && (auVar24._0_4_ <= auVar38._0_4_)) {
                      if (*(char *)(param_4 + 0x9a) != '\0') {
                        cVar5 = FUN_180235e70(extraout_XMM0_Qa_03,param_2,&local_1a0);
                        auVar22._8_56_ = extraout_var_06;
                        auVar22._0_8_ = extraout_XMM0_Qa_04;
                        if (cVar5 != '\0') goto LAB_180237393;
                      }
                      plVar10 = (longlong *)0x0;
                      plVar15 = &DAT_180b8e7a8;
                      goto LAB_1802373b0;
                    }
                  }
                }
              }
            }
LAB_180237393:
            puVar14 = puVar14 + 10;
          } while (puVar14 != puVar1);
          goto LAB_180237434;
        }
        goto LAB_180237438;
      }
      goto LAB_180237484;
    }
LAB_18023749e:
    FUN_1801abba0();
  }
  bVar4 = false;
  bVar3 = false;
  do {
    if ((char)plVar17[3] == '\0') {
      *plVar17 = 0;
      plVar17[1] = 0;
      plVar17[2] = 0;
      plVar17[3] = (ulonglong)uStack_177 << 8;
    }
    else {
      bVar3 = bVar4;
      if (*plVar17 == DAT_180b8e788) {
        bVar3 = true;
        bVar4 = true;
      }
    }
    plVar17 = plVar17 + 4;
  } while (plVar17 != &DAT_180b8f7a8);
  if (!bVar3) {
    DAT_180b8e788 = 0;
    DAT_180b8e798 = 0;
    DAT_180b8e790 = 0;
  }
  while( true ) {
    if ((*plVar15 == 0) && (plVar10 == (longlong *)0x0)) {
      plVar10 = plVar15;
    }
    plVar15 = plVar15 + 4;
    if (plVar15 == &DAT_180b8f7a8) break;
LAB_1802373b0:
    if (*plVar15 == lVar12) {
      if (local_1a8 < (ulonglong)plVar15[1]) {
        plVar15[1] = local_1a8;
        iVar7 = FUN_180454920(local_1c0,local_1bc);
        plVar15[2] = (longlong)iVar7;
      }
      *(undefined1 *)(plVar15 + 3) = 1;
      goto LAB_180237434;
    }
  }
  if (plVar10 != (longlong *)0x0) {
    uStack_188 = local_1a8;
    local_190 = lVar12;
    iVar7 = FUN_180454920(local_1c0,local_1bc);
    lStack_180 = (longlong)iVar7;
    uStack_178 = 1;
    *plVar10 = local_190;
    plVar10[1] = uStack_188;
    plVar10[2] = lStack_180;
    plVar10[3] = CONCAT71(uStack_177,1);
  }
LAB_180237434:
LAB_180237438:
  plVar10 = local_1b8;
  if ((longlong *)local_108._0_8_ != (longlong *)0x0) {
    plVar10 = (longlong *)local_108._0_8_;
    if ((0xfff < (local_f8 - local_108._0_8_ & 0xfffffffffffffff8U)) &&
       (plVar10 = *(longlong **)(local_108._0_8_ + -8),
       0x1f < (ulonglong)(local_108._0_8_ + (-8 - (longlong)plVar10)))) {
LAB_1802375ef:
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    auVar28 = ZEXT1664(auVar28._0_16_);
    auVar31 = ZEXT1664(auVar31._0_16_);
    auVar33 = ZEXT1664(auVar33._0_16_);
    auVar35 = ZEXT1664(auVar35._0_16_);
    auVar29 = ZEXT1664(auVar29._0_16_);
    auVar38 = ZEXT1664(auVar38._0_16_);
    FUN_1804547d0(plVar10);
    plVar10 = local_1b8;
  }
LAB_180237484:
  local_1b8 = plVar10 + 3;
  if (local_1b8 == local_170) goto LAB_18023749e;
  goto LAB_180236bd0;
}



