// FUN_1802dd370 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802dd370 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802dd370(undefined8 param_1,longlong param_2)

{
  undefined1 auVar1 [16];
  bool bVar2;
  char cVar3;
  short sVar4;
  DWORD DVar5;
  ULONGLONG UVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined **ppuVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  undefined **ppuVar14;
  undefined8 *puVar15;
  uint uVar16;
  int iVar17;
  undefined *puVar18;
  float *pfVar19;
  longlong *plVar20;
  float *pfVar21;
  float fVar22;
  ulonglong extraout_XMM0_Qa;
  ulonglong extraout_XMM0_Qa_00;
  ulonglong extraout_XMM0_Qa_01;
  ulonglong uVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [64];
  undefined1 auVar27 [64];
  float fVar28;
  undefined1 auVar29 [16];
  float fVar30;
  undefined1 auVar31 [64];
  float fVar32;
  float fVar33;
  undefined1 auVar34 [64];
  undefined1 auVar35 [64];
  undefined4 uVar36;
  undefined1 auStack_8e8 [32];
  undefined *local_8c8;
  float fStack_8c0;
  uint uStack_8bc;
  undefined8 local_8b8;
  undefined8 uStack_8b0;
  undefined8 uStack_8a8;
  undefined8 uStack_8a0;
  undefined4 *local_898;
  float **ppfStack_890;
  undefined1 *puStack_888;
  undefined8 uStack_880;
  undefined8 local_878;
  undefined8 local_868;
  float local_860;
  undefined1 local_858 [8];
  int local_850 [2];
  float local_848;
  undefined4 local_844;
  undefined *local_840;
  undefined8 local_838;
  undefined8 uStack_830;
  float *local_828;
  float *pfStack_820;
  float *local_818;
  undefined1 local_808 [16];
  undefined1 local_7f8 [12];
  float fStack_7ec;
  undefined8 *puStack_7e8;
  undefined8 uStack_7e0;
  undefined8 local_7d8;
  undefined8 uStack_7d0;
  undefined1 *puStack_7c8;
  undefined8 uStack_7c0;
  undefined8 local_7b8;
  undefined8 local_7b0;
  undefined8 uStack_7a8;
  undefined8 local_798;
  undefined1 local_788 [16];
  undefined8 local_778;
  undefined4 local_770;
  int local_76c;
  undefined4 local_768;
  undefined4 local_764;
  undefined4 uStack_760;
  int iStack_75c;
  undefined4 uStack_758;
  undefined4 uStack_754;
  undefined4 uStack_750;
  undefined4 uStack_74c;
  undefined4 uStack_748;
  undefined2 local_744;
  undefined2 uStack_742;
  undefined4 uStack_740;
  undefined4 uStack_73c;
  undefined4 uStack_738;
  undefined8 local_734;
  undefined1 local_72c;
  ULONGLONG local_728;
  int local_720;
  undefined1 local_71c [32];
  undefined8 local_6fc;
  undefined8 uStack_6f4;
  undefined *local_6ec;
  undefined4 local_6e4;
  uint local_6d8;
  uint local_6d4;
  float local_6d0;
  float local_438 [216];
  ulonglong local_d8;
  
  if (param_2 == 0) {
    return;
  }
  local_d8 = DAT_1808d5f00 ^ (ulonglong)auStack_8e8;
  iVar13 = DAT_180c6e938;
  if (DAT_180c6e938 == 0) {
    UVar6 = GetTickCount64();
    if (UVar6 < DAT_180c6e940) {
      iVar13 = 0;
    }
    else {
      local_868 = &DAT_1808fc5d0;
      iVar13 = FUN_1805f68d0(&DAT_1808fc5d0);
      if (iVar13 != 0) goto LAB_1802ddfd3;
      if (DAT_1808fc61c == 0x7fffffff) {
        DAT_1808fc61c = 0x7ffffffe;
        goto LAB_1802ddfe8;
      }
      if ((DAT_180c6e938 == 0) && (DAT_180c6e940 <= UVar6)) {
        DAT_180c6e938 = FUN_1804174b0("C_BaseEntity",0x9d930423);
        if (DAT_180c6e938 == 0) {
          DAT_180c6e940 = UVar6 + 1000;
        }
        else {
          DAT_180c6e940 = 0xffffffffffffffff;
        }
      }
      iVar13 = DAT_180c6e938;
      FUN_1805f68fc(&DAT_1808fc5d0);
    }
  }
  lVar7 = FUN_18017ea70();
  *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
  bVar2 = false;
  if (iVar13 + param_2 != 0) {
    local_868 = (undefined *)0x0;
    cVar3 = FUN_1804514f0(&local_868,iVar13 + param_2,8);
    if (cVar3 == '\0') {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
  }
  puVar18 = local_868;
  lVar7 = FUN_18017ea70();
  auVar25 = local_808;
  if (*(int *)(lVar7 + 4) != 0) {
    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
  }
  fVar33 = 0.0;
  if ((!bVar2) || (puVar18 == (undefined *)0x0)) {
    local_808[0xc] = 0;
    auVar29 = local_808;
    local_808._0_8_ = auVar25._0_8_;
    local_808._8_8_ = auVar29._8_8_;
    local_838 = (undefined *)local_808._0_8_;
    uStack_830 = local_808._8_8_;
    local_808 = auVar29;
  }
  else {
    iVar13 = DAT_180c6e928;
    if (DAT_180c6e928 == 0) {
      UVar6 = GetTickCount64();
      if (UVar6 < DAT_180c6e930) {
        iVar13 = 0;
      }
      else {
        local_868 = &DAT_1808fc620;
        iVar13 = FUN_1805f68d0(&DAT_1808fc620);
        if (iVar13 != 0) {
LAB_1802ddfd3:
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(5);
        }
        if (DAT_1808fc66c == 0x7fffffff) {
          DAT_1808fc66c = 0x7ffffffe;
LAB_1802ddfe8:
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(6);
        }
        if ((DAT_180c6e928 == 0) && (DAT_180c6e930 <= UVar6)) {
          DAT_180c6e928 = FUN_1804174b0("CGameSceneNode",0xe8b4eae5);
          if (DAT_180c6e928 == 0) {
            DAT_180c6e930 = UVar6 + 1000;
          }
          else {
            DAT_180c6e930 = 0xffffffffffffffff;
          }
        }
        iVar13 = DAT_180c6e928;
        FUN_1805f68fc(&DAT_1808fc620);
      }
    }
    lVar7 = FUN_18017ea70();
    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
    puVar18 = puVar18 + iVar13;
    if (puVar18 == (undefined *)0x0) {
LAB_1802dd5f8:
      uStack_8bc = uStack_8bc & 0xffffff00;
    }
    else {
      local_868 = (undefined *)CONCAT44(fVar33,fVar33);
      local_860 = fVar33;
      cVar3 = FUN_1804514f0(&local_868,puVar18,0xc);
      if (cVar3 == '\0') goto LAB_1802dd5f8;
      local_8c8 = local_868;
      fStack_8c0 = local_860;
      uStack_8bc = CONCAT31(uStack_8bc._1_3_,1);
    }
    lVar7 = FUN_18017ea70();
    if (*(int *)(lVar7 + 4) != 0) {
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
    }
    local_838 = local_8c8;
    uStack_830 = CONCAT44(uStack_8bc,fStack_8c0);
  }
  lVar7 = DAT_180bb8958;
  lVar8 = FUN_18017ea70();
  *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
  if (lVar7 == 0) {
    bVar2 = false;
  }
  else {
    local_868 = (undefined *)0x0;
    cVar3 = FUN_1804514f0(&local_868,lVar7,8);
    if (cVar3 == '\0') {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
  }
  puVar18 = local_868;
  lVar7 = FUN_18017ea70();
  if (*(int *)(lVar7 + 4) != 0) {
    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
  }
  if ((!bVar2) || (puVar18 == (undefined *)0x0)) {
    auVar26 = ZEXT464(0xbf800000);
  }
  else {
    lVar7 = FUN_18017ea70();
    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
    puVar18 = puVar18 + 0x30;
    if (puVar18 == (undefined *)0x0) {
      auVar26 = ZEXT464((uint)local_848);
      uVar16 = 0;
    }
    else {
      local_8c8 = (undefined *)CONCAT44(local_8c8._4_4_,fVar33);
      cVar3 = FUN_1804514f0(&local_8c8,puVar18,4);
      if (cVar3 == '\0') {
        uVar16 = 0;
        auVar26 = ZEXT464((uint)local_848);
      }
      else {
        auVar26 = ZEXT464((uint)local_8c8._0_4_);
        uVar16 = 1;
      }
    }
    lVar7 = FUN_18017ea70();
    if (*(int *)(lVar7 + 4) != 0) {
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
    }
    auVar25 = vpcmpeqd_avx(ZEXT416(uVar16),SUB6416(ZEXT464(0),0));
    auVar25 = vblendvps_avx(auVar26._0_16_,SUB6416(ZEXT464(0xbf800000),0),auVar25);
    auVar26 = ZEXT1664(auVar25);
  }
  local_844 = auVar26._0_4_;
  if (uStack_830._4_1_ == '\0') {
  }
  sVar4 = thunk_FUN_180624430((ulonglong)local_838 & 0xffffffff);
  if (0 < sVar4) {
  }
  sVar4 = thunk_FUN_180624430(local_838._4_4_);
  if (0 < sVar4) {
  }
  sVar4 = thunk_FUN_180624430(uStack_830 & 0xffffffff);
  if (0 < sVar4) {
  }
  sVar4 = thunk_FUN_180624430(auVar26._0_8_);
  if (0 < sVar4) {
  }
  if (auVar26._0_4_ < fVar33) {
  }
  local_828 = (float *)0x0;
  pfStack_820 = (float *)0x0;
  local_818 = (float *)0x0;
  FUN_1803d2990(0,local_438,param_2);
  pfVar21 = local_438;
  fVar32 = 16384.0;
  fVar30 = 1.0;
  pfVar19 = pfStack_820;
  do {
    fVar22 = *pfVar21;
    sVar4 = thunk_FUN_180624430(fVar22);
    uVar23 = extraout_XMM0_Qa;
    if (sVar4 < 1) {
      fVar28 = pfVar21[1];
      sVar4 = thunk_FUN_180624430(fVar28);
      uVar23 = extraout_XMM0_Qa_00;
      if (sVar4 < 1) {
        fVar24 = pfVar21[2];
        sVar4 = thunk_FUN_180624430(fVar24);
        uVar23 = extraout_XMM0_Qa_01;
        if (sVar4 < 1) {
          fVar24 = (fVar24 - (float)uStack_830) * (fVar24 - (float)uStack_830);
          uVar23 = (ulonglong)(uint)fVar24;
          fVar24 = (fVar22 - (float)local_838) * (fVar22 - (float)local_838) +
                   (fVar28 - local_838._4_4_) * (fVar28 - local_838._4_4_) + fVar24;
          if ((fVar24 < fVar32) && (fVar30 < fVar24)) {
            if (pfVar19 == local_818) {
              uVar23 = FUN_180241ef0(&local_828,pfVar19,pfVar21);
              pfVar19 = pfStack_820;
            }
            else {
              uVar23 = *(ulonglong *)pfVar21;
              *(ulonglong *)pfVar19 = uVar23;
              pfVar19[2] = pfVar21[2];
              pfStack_820 = pfStack_820 + 3;
              pfVar19 = pfStack_820;
            }
          }
        }
      }
    }
    pfVar21 = pfVar21 + 8;
  } while (pfVar21 != (float *)&local_d8);
  if (local_828 == pfVar19) {
    local_868 = (undefined *)CONCAT44(fVar33 + local_838._4_4_,fVar33 + (float)local_838);
    uVar23 = uStack_830 & 0xffffffff;
    local_860 = (float)uStack_830 + 36.0;
    if (pfVar19 == local_818) {
      uVar23 = FUN_180241ef0(&local_828,pfVar19,&local_868);
    }
    else {
      *pfVar19 = fVar33 + (float)local_838;
      pfVar19[1] = fVar33 + local_838._4_4_;
      pfVar19[2] = local_860;
      pfStack_820 = pfStack_820 + 3;
    }
  }
  local_848 = 0.0;
  plVar9 = (longlong *)FUN_1803d44c0(uVar23,&local_7b0,1);
  plVar20 = (longlong *)*plVar9;
  plVar9 = (longlong *)plVar9[1];
  if (plVar20 != plVar9) {
    fVar22 = (float)local_868;
    do {
      iVar13 = DAT_180c6e910;
      if (DAT_180c6e910 == 0) {
        UVar6 = GetTickCount64();
        if (UVar6 < DAT_180c6e918) {
          iVar13 = 0;
        }
        else {
          local_868 = &DAT_1808fc580;
          iVar13 = FUN_1805f68d0(&DAT_1808fc580);
          if (iVar13 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1805f6d44(5);
          }
          if (DAT_1808fc5cc == 0x7fffffff) {
            DAT_1808fc5cc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
            FUN_1805f6d44(6);
          }
          if ((DAT_180c6e910 == 0) && (DAT_180c6e918 <= UVar6)) {
            DAT_180c6e910 = FUN_1804174b0("CBasePlayerController",0x7c628c1d);
            if (DAT_180c6e910 == 0) {
              DAT_180c6e918 = UVar6 + 1000;
            }
            else {
              DAT_180c6e918 = 0xffffffffffffffff;
            }
          }
          iVar13 = DAT_180c6e910;
          FUN_1805f68fc(&DAT_1808fc580);
        }
      }
      lVar7 = *plVar20;
      lVar8 = FUN_18017ea70();
      *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
      bVar2 = false;
      if (iVar13 + lVar7 != 0) {
        local_8c8 = (undefined *)((ulonglong)local_8c8 & 0xffffffff00000000);
        cVar3 = FUN_1804514f0(&local_8c8,iVar13 + lVar7,4);
        if (cVar3 == '\0') {
          bVar2 = false;
        }
        else {
          bVar2 = true;
          fVar22 = local_8c8._0_4_;
        }
      }
      lVar7 = FUN_18017ea70();
      iVar13 = *(int *)(lVar7 + 4);
      if (iVar13 != 0) {
        iVar13 = iVar13 + -1;
        *(int *)(lVar7 + 4) = iVar13;
      }
      if (((bVar2) && (fVar22 != 0.0)) && (lVar7 = FUN_1803d4150(iVar13,fVar22), lVar7 == param_2))
      {
        local_848 = fVar22;
        break;
      }
      plVar20 = plVar20 + 3;
    } while (plVar20 != plVar9);
  }
  FUN_1801abba0(&local_7b0);
  local_808 = ZEXT816(0x180cc9b08);
  iVar13 = FUN_1805f68d0(&DAT_180cc9b08);
  if (iVar13 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_180cc9b54 == 0x7fffffff) {
    DAT_180cc9b54 = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  local_808[8] = 1;
  local_858[0] = 0;
  FUN_1802e7bb0(&DAT_180cc9a68,&local_844);
  stack0xfffffffffffff810 = local_858;
  local_7f8._0_8_ = &local_848;
  puStack_7e8 = &local_838;
  uStack_7e0 = &DAT_180cc99c0;
  local_7d8 = &local_844;
  uStack_7d0 = &local_828;
  puStack_7c8 = &DAT_180b0be78;
  if (DAT_180b0c290 != '\0') {
    if (DAT_180b0c2fc != 3) {
      local_840._0_4_ = 5;
      local_8c8 = (undefined *)((ulonglong)local_8c8 & 0xffffffff00000000);
      local_868 = (undefined *)CONCAT44(local_868._4_4_,5);
      local_850[0] = 0;
      ppuVar14 = &local_8c8;
      if (-1 < DAT_180b0c2fc) {
        ppuVar14 = (undefined **)&DAT_180b0c2fc;
      }
      ppuVar10 = &local_840;
      if (DAT_180b0c2fc < 6) {
        ppuVar10 = ppuVar14;
      }
      piVar11 = local_850;
      if (-1 < DAT_180b0c2fc) {
        piVar11 = &DAT_180b0c2fc;
      }
      piVar12 = (int *)&local_868;
      if (DAT_180b0c2fc < 6) {
        piVar12 = piVar11;
      }
      FUN_1802de020(local_7f8,*piVar12,&DAT_180b0c410 + (longlong)*(int *)ppuVar10 * 0x38);
    }
    if (DAT_180b0c308 != '\0') {
      FUN_1802de020(local_7f8,3,&DAT_180b0c560);
    }
    if (DAT_180b0c370 != '\0') {
      lVar7 = 0;
      puVar15 = DAT_180cc9a68;
      if (DAT_180cc9a68 != DAT_180cc9a70) {
        do {
          lVar8 = lVar7 + 1;
          if (*(int *)(puVar15 + 6) != 6) {
            lVar8 = lVar7;
          }
          puVar15 = puVar15 + 0x17;
          lVar7 = lVar8;
        } while (puVar15 != DAT_180cc9a70);
        if (7 < lVar8) goto LAB_1802ddf3a;
      }
      FUN_1803d2990(puVar15,&local_798,param_2);
      auVar26 = ZEXT464(local_6d8);
      sVar4 = thunk_FUN_180624430(local_6d8);
      if (sVar4 < 1) {
        auVar27 = ZEXT464(local_6d4);
        sVar4 = thunk_FUN_180624430(local_6d4);
        if (sVar4 < 1) {
          fVar22 = local_6d0;
          sVar4 = thunk_FUN_180624430(local_6d0);
          if (sVar4 < 1) {
            fVar28 = auVar27._0_4_ - local_838._4_4_;
            fVar24 = auVar26._0_4_ - (float)local_838;
            fVar28 = fVar24 * fVar24 + fVar28 * fVar28 +
                     (fVar22 - (float)uStack_830) * (fVar22 - (float)uStack_830);
            if ((fVar30 < fVar28) && (fVar28 < fVar32)) {
              local_850[0] = 8;
              local_868 = (undefined *)((ulonglong)local_868 & 0xffffffff00000000);
              piVar11 = (int *)&local_868;
              if (-1 < DAT_180b0c3f0) {
                piVar11 = &DAT_180b0c3f0;
              }
              piVar12 = local_850;
              if (DAT_180b0c3f0 < 9) {
                piVar12 = piVar11;
              }
              iVar13 = *piVar12 * 8 + 0x20;
              local_788 = (undefined1  [16])0x0;
              local_778 = 0;
              local_764 = 0xffeeeeee;
              uStack_760 = 0x808080;
              uStack_758 = 0x40000000;
              uStack_754 = 0x3f800000;
              uStack_750 = 0x42c80000;
              uStack_74c = 0x43480000;
              uStack_748 = 0x28;
              local_744 = 0x101;
              uStack_740 = 0;
              fVar30 = 0.2;
              uStack_73c = 0x3e4ccccd;
              uStack_738 = 0x42f00000;
              auVar34 = ZEXT464(0x42b40000);
              auVar35 = ZEXT464(0x42c80000);
              local_734 = 0x42c8000042b40000;
              local_72c = 0;
              local_798 = CONCAT44(auVar27._0_4_,auVar26._0_4_);
              local_768 = 6;
              iVar17 = DAT_180cc9b90 + 1;
              DAT_180cc9b90 = iVar17;
              local_76c = iVar17;
              UVar6 = GetTickCount64();
              local_770 = local_844;
              uStack_7e0._0_4_ = DAT_180b0c3f0;
              _local_7f8 = _DAT_180b0c3d8;
              uStack_7e0._4_4_ = uRam0000000180b0c3f4;
              local_7b0 = CONCAT17(uRam0000000180b0c3ff,CONCAT16(DAT_180b0c3fe,_DAT_180b0c3f8));
              uStack_7a8 = uRam0000000180b0c400;
              uStack_6f4 = uRam0000000180b0c400;
              local_8c8 = (undefined *)CONCAT44(DAT_180b0c408._4_4_,(undefined4)DAT_180b0c408);
              local_6e4 = CONCAT31(local_6e4._1_3_,1);
              local_840._0_4_ = 0x40400000;
              local_868 = (undefined *)CONCAT44(local_868._4_4_,fVar30);
              auVar25 = vshufps_avx(DAT_180b0c3d8._0_16_,DAT_180b0c3d8._0_16_,0xaa);
              local_850[0] = auVar25._0_4_;
              auVar27 = ZEXT1664(auVar27._0_16_);
              auVar26 = ZEXT1664(auVar26._0_16_);
              auVar31 = ZEXT1664(auVar25);
              fVar32 = 3.0;
              auVar34 = ZEXT1664(auVar34._0_16_);
              auVar35 = ZEXT1664(auVar35._0_16_);
              uVar36 = local_844;
              local_728 = UVar6;
              local_720 = iVar13;
              local_71c = _local_7f8;
              local_6fc = local_7b0;
              local_6ec = local_8c8;
              sVar4 = thunk_FUN_180624430();
              puVar15 = DAT_180cc9a70;
              auVar29 = auVar26._0_16_;
              auVar25 = auVar27._0_16_;
              if (sVar4 < 1) {
                piVar11 = (int *)&local_868;
                if (fVar30 <= auVar31._0_4_) {
                  piVar11 = local_850;
                }
                piVar12 = (int *)&local_840;
                if (auVar31._0_4_ <= fVar32) {
                  piVar12 = piVar11;
                }
                iStack_75c = *piVar12;
              }
              else {
                iStack_75c = 0x3f333333;
              }
              if (DAT_180cc9a70 == DAT_180cc9a78) {
                FUN_1802ea280(&DAT_180cc9a68,DAT_180cc9a70,&local_798);
                auVar29 = auVar26._0_16_;
                auVar25 = auVar27._0_16_;
              }
              else {
                auVar1 = vunpcklps_avx(auVar29,auVar25);
                local_798 = auVar1._0_8_;
                *DAT_180cc9a70 = local_798;
                *(float *)(puVar15 + 1) = fVar22;
                local_778 = 0;
                local_788 = ZEXT816(0);
                puVar15[2] = 0;
                puVar15[3] = 0;
                puVar15[4] = 0;
                *(undefined4 *)(puVar15 + 5) = uVar36;
                *(int *)((longlong)puVar15 + 0x2c) = iVar17;
                *(undefined4 *)(puVar15 + 6) = 6;
                *(ulonglong *)((longlong)puVar15 + 0x34) = CONCAT44(uStack_760,local_764);
                *(ulonglong *)((longlong)puVar15 + 0x3c) = CONCAT44(uStack_758,iStack_75c);
                *(ulonglong *)((longlong)puVar15 + 0x44) = CONCAT44(uStack_750,uStack_754);
                *(ulonglong *)((longlong)puVar15 + 0x4c) = CONCAT44(uStack_748,uStack_74c);
                *(ulonglong *)((longlong)puVar15 + 0x54) =
                     CONCAT44(uStack_740,CONCAT22(uStack_742,local_744));
                *(ulonglong *)((longlong)puVar15 + 0x5c) = CONCAT44(uStack_738,uStack_73c);
                auVar1 = vunpcklps_avx(auVar34._0_16_,auVar35._0_16_);
                local_734 = auVar1._0_8_;
                *(undefined8 *)((longlong)puVar15 + 100) = local_734;
                *(undefined1 *)((longlong)puVar15 + 0x6c) = 0;
                puVar15[0xe] = UVar6;
                *(int *)(puVar15 + 0xf) = iVar13;
                *(undefined8 *)((longlong)puVar15 + 0x7c) = local_7f8._0_8_;
                *(undefined8 *)((longlong)puVar15 + 0x84) = stack0xfffffffffffff810;
                *(undefined8 **)((longlong)puVar15 + 0x8c) = puStack_7e8;
                *(undefined8 *)((longlong)puVar15 + 0x94) = uStack_7e0;
                *(undefined8 *)((longlong)puVar15 + 0x9c) = local_7b0;
                *(undefined8 *)((longlong)puVar15 + 0xa4) = uStack_7a8;
                *(undefined **)((longlong)puVar15 + 0xac) = local_8c8;
                *(undefined4 *)((longlong)puVar15 + 0xb4) = local_6e4;
                DAT_180cc9a70 = DAT_180cc9a70 + 0x17;
              }
              if (DAT_180b0c3fe != '\0') {
                local_7f8[0] = 3;
                auVar25 = vunpcklps_avx(auVar29,auVar25);
                local_7f8._4_8_ = auVar25._0_8_;
                fStack_7ec = fVar22;
                puStack_7e8 = (undefined8 *)auVar25._0_8_;
                uStack_7e0._0_4_ = fVar22;
                uStack_7e0._4_4_ = DAT_180b0c408._4_4_;
                local_7d8 = (undefined4 *)CONCAT44(fVar33,fVar33);
                uStack_7d0 = (float **)CONCAT44(uStack_7d0._4_4_,fVar33);
                DVar5 = GetCurrentThreadId();
                uStack_7d0 = (float **)CONCAT44(DVar5,(undefined4)uStack_7d0);
                puStack_7c8 = (undefined1 *)((ulonglong)puStack_7c8 & 0xffffffff00000000);
                uStack_7c0 = 0;
                local_7b8 = 0;
                local_8b8 = local_7f8._0_8_;
                uStack_8b0 = stack0xfffffffffffff810;
                uStack_8a8 = puStack_7e8;
                uStack_8a0 = uStack_7e0;
                local_898 = local_7d8;
                ppfStack_890 = uStack_7d0;
                puStack_888 = puStack_7c8;
                uStack_880 = 0;
                local_878 = 0;
                FUN_1802e0940(&DAT_180cc99c0,&local_8b8);
              }
              FUN_1801b36e0(local_788);
            }
          }
        }
      }
    }
  }
LAB_1802ddf3a:
  FUN_1805f68fc(&DAT_180cc9b08);
  FUN_1801b36e0(&local_828);
}



