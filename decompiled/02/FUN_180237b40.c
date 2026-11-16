// FUN_180237b40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180237b40 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180237b40(undefined8 param_1,longlong *param_2,float *param_3,undefined8 param_4,
                  longlong param_5,longlong *param_6)

{
  longlong lVar1;
  float fVar2;
  float *pfVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  ULONGLONG UVar7;
  longlong lVar8;
  int iVar9;
  longlong *plVar10;
  float fVar11;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar12;
  ulonglong uVar13;
  undefined1 auVar14 [16];
  ulonglong uVar15;
  undefined1 auVar16 [64];
  undefined1 auVar17 [64];
  undefined1 auVar18 [64];
  undefined1 auVar19 [16];
  undefined1 auVar20 [64];
  undefined1 auVar21 [64];
  undefined1 auVar22 [64];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [64];
  undefined1 auVar26 [16];
  undefined1 auVar27 [64];
  undefined1 auStackY_228 [32];
  char local_1e8;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float local_1c8;
  undefined4 uStack_1c4;
  undefined4 local_1c0;
  undefined1 local_1b8 [32];
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined8 uStack_180;
  undefined8 local_178;
  float *local_170;
  longlong *local_168;
  longlong local_158;
  undefined4 local_138;
  float fStack_134;
  float fStack_130;
  undefined4 uStack_12c;
  float fStack_128;
  undefined4 uStack_124;
  longlong lStack_120;
  undefined1 local_118 [32];
  undefined1 local_f8 [16];
  longlong local_e8;
  undefined1 local_e0 [24];
  ulonglong local_c8;
  
  local_c8 = DAT_1808d5f00 ^ (ulonglong)auStackY_228;
  auVar20 = ZEXT1264(ZEXT812(0)) << 0x20;
  auVar21 = ZEXT864(0);
  local_1e8 = '\0';
  local_1b8._0_29_ = ZEXT1229(ZEXT812(0)) << 0x60;
  local_198 = 0;
  uStack_194 = 0;
  uStack_190 = 0;
  uStack_18c = 0;
  auVar22 = ZEXT864(0);
  uStack_188 = 0;
  uStack_180 = 0;
  local_178 = param_4;
  local_170 = param_3;
  plVar6 = (longlong *)FUN_1803d44c0(param_1,local_e0,1);
  plVar10 = (longlong *)*plVar6;
  local_168 = (longlong *)plVar6[1];
  local_118._4_4_ = uStack_194;
  local_118._0_4_ = local_198;
  local_118._12_4_ = uStack_18c;
  local_118._8_4_ = uStack_190;
  local_118._20_4_ = uStack_184;
  local_118._16_4_ = uStack_188;
  local_118._24_8_ = uStack_180;
  if (plVar10 != local_168) {
    auVar25 = ZEXT464(0x80000000);
    auVar27 = ZEXT464(0x42652ee0);
    do {
      iVar5 = DAT_180c64310;
      if ((*plVar10 != 0) && (*plVar10 != *param_6)) {
        if (DAT_180c64310 == 0) {
          auVar20 = ZEXT1664(auVar20._0_16_);
          auVar21 = ZEXT1664(auVar21._0_16_);
          auVar22 = ZEXT1664(auVar22._0_16_);
          auVar25 = ZEXT1664(auVar25._0_16_);
          auVar27 = ZEXT1664(auVar27._0_16_);
          UVar7 = GetTickCount64();
          if (DAT_180c64308 <= UVar7) {
            iVar5 = FUN_1805f68d0(&DAT_1808ed760);
            if (iVar5 != 0) goto LAB_180238552;
            if (DAT_1808ed7ac == 0x7fffffff) {
              DAT_1808ed7ac = 0x7ffffffe;
              goto LAB_180238547;
            }
            if ((DAT_180c64310 == 0) && (DAT_180c64308 <= UVar7)) {
              DAT_180c64310 = FUN_1804174b0("CCSPlayerController",0x3db3c8d0);
              DAT_180c64308 = 0xffffffffffffffff;
              if (DAT_180c64310 == 0) {
                DAT_180c64308 = UVar7 + 1000;
              }
            }
            iVar5 = DAT_180c64310;
            FUN_1805f68fc(&DAT_1808ed760);
          }
        }
        auVar26 = auVar27._0_16_;
        auVar24 = auVar25._0_16_;
        auVar23 = auVar22._0_16_;
        auVar14 = auVar21._0_16_;
        auVar19 = auVar20._0_16_;
        if (*(char *)((longlong)iVar5 + *plVar10) != '\0') {
          if (DAT_180c642f8 == 0) {
            auVar21 = ZEXT1664(auVar19);
            auVar22 = ZEXT1664(auVar14);
            auVar20 = ZEXT1664(auVar23);
            auVar25 = ZEXT1664(auVar24);
            auVar27 = ZEXT1664(auVar26);
            UVar7 = GetTickCount64();
            auVar26 = auVar27._0_16_;
            auVar24 = auVar25._0_16_;
            auVar23 = auVar20._0_16_;
            auVar14 = auVar22._0_16_;
            auVar19 = auVar21._0_16_;
            if (DAT_180c64300 <= UVar7) {
              iVar5 = FUN_1805f68d0(&DAT_1808ed7b0);
              if (iVar5 != 0) goto LAB_180238552;
              if (DAT_1808ed7fc == 0x7fffffff) {
                DAT_1808ed7fc = 0x7ffffffe;
                goto LAB_180238547;
              }
              if ((DAT_180c642f8 == 0) && (DAT_180c64300 <= UVar7)) {
                DAT_180c642f8 = FUN_1804174b0("CCSPlayerController",0xd6c93e7c);
                DAT_180c64300 = 0xffffffffffffffff;
                if (DAT_180c642f8 == 0) {
                  DAT_180c64300 = UVar7 + 1000;
                }
              }
              FUN_1805f68fc(&DAT_1808ed7b0);
              auVar26 = auVar27._0_16_;
              auVar24 = auVar25._0_16_;
              auVar23 = auVar20._0_16_;
              auVar14 = auVar22._0_16_;
              auVar19 = auVar21._0_16_;
            }
          }
          auVar20 = ZEXT1664(auVar19);
          auVar21 = ZEXT1664(auVar14);
          auVar22 = ZEXT1664(auVar23);
          auVar25 = ZEXT1664(auVar24);
          auVar27 = ZEXT1664(auVar26);
          lVar8 = FUN_1803d4150();
          if (DAT_180c642f0 == 0) {
            UVar7 = GetTickCount64();
            uVar12 = extraout_XMM0_Qa;
            if (DAT_180c642e8 <= UVar7) {
              iVar5 = FUN_1805f68d0(&DAT_1808ed710);
              if (iVar5 != 0) goto LAB_180238552;
              if (DAT_1808ed75c == 0x7fffffff) {
                DAT_1808ed75c = 0x7ffffffe;
                goto LAB_180238547;
              }
              if ((DAT_180c642f0 == 0) && (DAT_180c642e8 <= UVar7)) {
                DAT_180c642f0 = FUN_1804174b0("CCSPlayerController",0xd6c93e7c);
                DAT_180c642e8 = 0xffffffffffffffff;
                if (DAT_180c642f0 == 0) {
                  DAT_180c642e8 = UVar7 + 1000;
                }
              }
              iVar5 = DAT_180c642f0;
              uVar12 = FUN_1805f68fc(&DAT_1808ed710);
              if (iVar5 != 0) goto LAB_180237f41;
            }
            iVar5 = DAT_180c642f4;
            if (DAT_180c642f4 == 0) {
              UVar7 = GetTickCount64();
              if (DAT_180c642d0 <= UVar7) {
                iVar5 = FUN_1805f68d0(&DAT_1808ed6c0);
                if (iVar5 != 0) goto LAB_180238552;
                if (DAT_1808ed70c == 0x7fffffff) {
                  DAT_1808ed70c = 0x7ffffffe;
                  goto LAB_180238547;
                }
                if ((DAT_180c642f4 == 0) && (DAT_180c642d0 <= UVar7)) {
                  DAT_180c642f4 = FUN_1804174b0("CBasePlayerController",0x7c628c1d);
                  DAT_180c642d0 = 0xffffffffffffffff;
                  if (DAT_180c642f4 == 0) {
                    DAT_180c642d0 = UVar7 + 1000;
                  }
                }
                iVar5 = DAT_180c642f4;
                uVar12 = FUN_1805f68fc(&DAT_1808ed6c0);
                if (iVar5 != 0) goto LAB_180237f30;
              }
            }
            else {
LAB_180237f30:
              lVar8 = FUN_1803d4150(uVar12,*(undefined4 *)((longlong)iVar5 + *plVar10));
            }
          }
LAB_180237f41:
          iVar5 = DAT_180c642e0;
          if ((lVar8 != 0) && (lVar8 != param_6[1])) {
            if ((DAT_180c642e0 == 0) && (UVar7 = GetTickCount64(), DAT_180c642d8 <= UVar7)) {
              iVar5 = FUN_1805f68d0(&DAT_1808ed620);
              if (iVar5 != 0) goto LAB_180238552;
              if (DAT_1808ed66c == 0x7fffffff) {
                DAT_1808ed66c = 0x7ffffffe;
                goto LAB_180238547;
              }
              if ((DAT_180c642e0 == 0) && (DAT_180c642d8 <= UVar7)) {
                DAT_180c642e0 = FUN_1804174b0("C_BaseEntity",0xa5bfefb3);
                DAT_180c642d8 = 0xffffffffffffffff;
                if (DAT_180c642e0 == 0) {
                  DAT_180c642d8 = UVar7 + 1000;
                }
              }
              iVar5 = DAT_180c642e0;
              FUN_1805f68fc(&DAT_1808ed620);
            }
            iVar9 = DAT_180c642c4;
            if ((*(char *)((longlong)param_6 + 0x29) == '\0') ||
               (*(uint *)((longlong)param_6 + 0x24) != (uint)*(byte *)(iVar5 + lVar8))) {
              if ((DAT_180c642c4 == 0) && (UVar7 = GetTickCount64(), DAT_180c642c8 <= UVar7)) {
                iVar5 = FUN_1805f68d0(&DAT_1808ed670);
                if (iVar5 != 0) goto LAB_180238552;
                if (DAT_1808ed6bc == 0x7fffffff) {
                  DAT_1808ed6bc = 0x7ffffffe;
                  goto LAB_180238547;
                }
                if ((DAT_180c642c4 == 0) && (DAT_180c642c8 <= UVar7)) {
                  DAT_180c642c4 = FUN_1804174b0("C_CSPlayerPawn",0x9c15080d);
                  DAT_180c642c8 = 0xffffffffffffffff;
                  if (DAT_180c642c4 == 0) {
                    DAT_180c642c8 = UVar7 + 1000;
                  }
                }
                iVar9 = DAT_180c642c4;
                FUN_1805f68fc(&DAT_1808ed670);
              }
              if ((*(char *)(iVar9 + lVar8) == '\0') &&
                 ((*(char *)(param_5 + 0x98) == '\0' ||
                  (cVar4 = FUN_1802351c0(lVar8), cVar4 == '\0')))) {
                iVar5 = DAT_180c642c0;
                if ((DAT_180c642c0 == 0) && (UVar7 = GetTickCount64(), DAT_180c642b8 <= UVar7)) {
                  iVar5 = FUN_1805f68d0(&DAT_1808ed5d0);
                  if (iVar5 != 0) {
LAB_180238552:
                    /* WARNING: Subroutine does not return */
                    FUN_1805f6d44(5);
                  }
                  if (DAT_1808ed61c == 0x7fffffff) {
                    DAT_1808ed61c = 0x7ffffffe;
LAB_180238547:
                    /* WARNING: Subroutine does not return */
                    FUN_1805f6d44(6);
                  }
                  if ((DAT_180c642c0 == 0) && (DAT_180c642b8 <= UVar7)) {
                    DAT_180c642c0 = FUN_1804174b0("C_BaseEntity",0x84cdad2);
                    DAT_180c642b8 = 0xffffffffffffffff;
                    if (DAT_180c642c0 == 0) {
                      DAT_180c642b8 = UVar7 + 1000;
                    }
                  }
                  iVar5 = DAT_180c642c0;
                  FUN_1805f68fc(&DAT_1808ed5d0);
                }
                if (0 < *(int *)(iVar5 + lVar8)) {
                  local_f8 = (undefined1  [16])0x0;
                  local_e8 = 0;
                  FUN_180273020(&DAT_180cc9398,local_f8);
                  pfVar3 = local_170;
                  if ((((local_f8._0_8_ == local_f8._8_8_) ||
                       (lVar1 = *(longlong *)local_f8._0_8_, lVar1 == 0)) ||
                      (*(char *)(lVar1 + 0x23b8) == '\0')) ||
                     ((0x7f < *(int *)(lVar1 + 0x36c) - 1U || (0x13 < *(int *)(lVar1 + 0x368) - 1U))
                     )) {
LAB_1802383b1:
                    if ((longlong *)local_f8._0_8_ == (longlong *)0x0) goto LAB_1802383f2;
                    if (0xfff < (local_e8 - local_f8._0_8_ & 0xfffffffffffffff8U)) {
                      if (0x1f < (ulonglong)
                                 (local_f8._0_8_ + (-8 - *(longlong *)(local_f8._0_8_ + -8)))) {
LAB_180238567:
                    /* WARNING: Subroutine does not return */
                        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                      }
                    }
                  }
                  else {
                    FUN_180238d70(local_f8._0_8_,&local_1d8);
                    if ((char)uStack_1c4 == '\0') {
                      goto LAB_1802383b1;
                    }
                    auVar16 = ZEXT464((uint)(fStack_1d0 - pfVar3[2]));
                    uVar15 = (ulonglong)(uint)(fStack_1d0 - pfVar3[2]);
                    fVar11 = fStack_1d4 - pfVar3[1];
                    auVar17 = ZEXT464((uint)fVar11);
                    fVar2 = local_1d8 - *pfVar3;
                    auVar18 = ZEXT464((uint)fVar2);
                    fVar11 = fVar2 * fVar2 + fVar11 * fVar11;
                    if (fVar11 == auVar20._0_4_) {
                      uVar13 = auVar20._0_8_;
                    }
                    else if (fVar11 < 0.0) {
                      uVar13 = FUN_18061e150(fVar11);
                      uVar15 = auVar16._0_8_;
                    }
                    else {
                      uVar13 = (ulonglong)(uint)SQRT(fVar11);
                    }
                    fVar11 = (float)FUN_180636c80(CONCAT44((uint)(uVar15 >> 0x20) ^ auVar25._4_4_,
                                                           (uint)uVar15 ^ auVar25._0_4_),uVar13);
                    fVar11 = fVar11 * auVar27._0_4_;
                    fStack_130 = (float)FUN_180636c80(auVar17._0_8_,auVar18._0_8_);
                    auVar14 = auVar22._0_16_;
                    auVar19 = auVar21._0_16_;
                    fStack_130 = fStack_130 * auVar27._0_4_;
                    if (*(int *)(param_5 + 0x8c) == 1) {
                      fStack_128 = fStack_1cc;
                    }
                    else {
                      fStack_128 = (float)((uint)local_1c8 ^ auVar25._0_4_);
                    }
                    local_138 = local_1c0;
                    uStack_12c = auVar20._0_4_;
                    lStack_120 = *(longlong *)local_f8._0_8_;
                    local_158 = lVar8;
                    fStack_134 = fVar11;
                    if ((*(char *)(param_5 + 0x94) != '\0') && (lVar8 == DAT_180b8f7d0)) {
                      *param_2 = lVar8;
                      param_2[1] = CONCAT44(fStack_1d4,local_1d8);
                      param_2[2] = CONCAT44(fStack_1cc,fStack_1d0);
                      param_2[3] = CONCAT44(uStack_1c4,local_1c8);
                      param_2[4] = CONCAT44(fVar11,local_1c0);
                      param_2[5] = CONCAT44(uStack_12c,fStack_130);
                      param_2[6] = CONCAT44(uStack_124,fStack_128);
                      param_2[7] = lStack_120;
                      if (((local_e8 - local_f8._0_8_ & 0xfffffffffffffff8U) < 0x1000) ||
                         ((ulonglong)(local_f8._0_8_ + (-8 - *(longlong *)(local_f8._0_8_ + -8))) <
                          0x20)) {
                        FUN_1804547d0();
                        local_f8 = (undefined1  [16])0x0;
                        local_e8 = 0;
                        FUN_1801abba0(local_e0);
                      }
                      goto LAB_180238567;
                    }
                    if (((local_1e8 == '\0') || (auVar22._0_4_ < fStack_128)) ||
                       ((fStack_128 == auVar22._0_4_ && (local_1c8 < auVar21._0_4_)))) {
                      local_1b8._8_8_ = CONCAT44(fStack_1d4,local_1d8);
                      local_1b8._0_8_ = lVar8;
                      local_1b8._16_8_ = CONCAT44(fStack_1cc,fStack_1d0);
                      local_1b8._24_8_ = CONCAT44(uStack_1c4,local_1c8);
                      local_118._4_4_ = fVar11;
                      local_118._0_4_ = local_1c0;
                      local_118._8_4_ = fStack_130;
                      local_118._12_4_ = uStack_12c;
                      local_118._16_4_ = fStack_128;
                      local_118._20_4_ = uStack_124;
                      local_118._24_8_ = lStack_120;
                      auVar14 = local_118._16_16_;
                      local_1e8 = (char)uStack_1c4;
                      auVar19 = vshufps_avx(local_1b8._16_16_,local_1b8._16_16_,0xaa);
                    }
                    if ((0xfff < (local_e8 - local_f8._0_8_ & 0xfffffffffffffff8U)) &&
                       (0x1f < (ulonglong)
                               (local_f8._0_8_ + (-8 - *(longlong *)(local_f8._0_8_ + -8)))))
                    goto LAB_180238567;
                    auVar20 = ZEXT1664(auVar20._0_16_);
                    auVar21 = ZEXT1664(auVar19);
                    auVar22 = ZEXT1664(auVar14);
                    auVar25 = ZEXT1664(auVar25._0_16_);
                    auVar27 = ZEXT1664(auVar27._0_16_);
                  }
                  FUN_1804547d0();
                }
              }
            }
          }
        }
      }
LAB_1802383f2:
      plVar10 = plVar10 + 3;
    } while (plVar10 != local_168);
  }
  FUN_1801abba0(local_e0);
  *param_2 = local_1b8._0_8_;
  param_2[1] = local_1b8._8_8_;
  param_2[2] = local_1b8._16_8_;
  param_2[3] = local_1b8._24_8_;
  param_2[4] = local_118._0_8_;
  param_2[5] = local_118._8_8_;
  param_2[6] = local_118._16_8_;
  param_2[7] = local_118._24_8_;
}



