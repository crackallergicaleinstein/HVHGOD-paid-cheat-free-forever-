// FUN_18025b510 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18025b510 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18025b510(longlong param_1,undefined8 *param_2,undefined4 *param_3,undefined8 param_4,
                  float *param_5,longlong *param_6,longlong *param_7,undefined8 param_8,
                  longlong param_9)

{
  undefined1 (*pauVar1) [32];
  undefined8 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  bool bVar26;
  undefined4 *puVar27;
  char cVar28;
  short sVar29;
  float fVar30;
  ULONGLONG UVar31;
  longlong lVar32;
  longlong lVar33;
  undefined8 uVar34;
  uint *puVar35;
  float *pfVar36;
  int *piVar37;
  float *pfVar38;
  undefined1 uVar39;
  uint *puVar40;
  float *pfVar41;
  int *piVar42;
  undefined1 (*pauVar43) [32];
  uint *puVar44;
  uint *puVar45;
  ulonglong uVar46;
  longlong lVar47;
  undefined1 (*pauVar48) [12];
  undefined1 auVar49 [8];
  uint *puVar50;
  int iVar51;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined1 auVar52 [16];
  undefined1 extraout_var [56];
  undefined1 in_ZMM3 [64];
  float fVar53;
  undefined1 auVar54 [64];
  float fVar55;
  undefined4 uVar56;
  undefined1 in_ZMM7 [64];
  undefined1 auVar57 [64];
  float fVar58;
  undefined4 uVar59;
  undefined1 auVar60 [64];
  undefined4 uVar61;
  undefined1 auVar62 [64];
  undefined1 auVar63 [64];
  undefined1 auVar64 [64];
  undefined1 auVar65 [64];
  uint uVar66;
  undefined1 in_ZMM15 [64];
  undefined1 auVar67 [64];
  undefined1 auStackY_a88 [32];
  longlong local_a48;
  float local_a40;
  float fStack_a3c;
  float fStack_a38;
  float fStack_a34;
  uint local_a30;
  undefined1 local_a28;
  longlong local_a20;
  undefined4 local_a18;
  float local_a14;
  float local_a10;
  int local_a0c [3];
  longlong *local_a00;
  longlong *local_9f8;
  undefined *local_9f0;
  float local_9e8;
  undefined4 uStack_9e4;
  undefined4 uStack_9e0;
  float fStack_9dc;
  float fStack_9d8;
  undefined8 uStack_9d4;
  undefined4 uStack_9cc;
  undefined4 uStack_9c8;
  undefined8 uStack_9c4;
  undefined8 uStack_9bc;
  undefined8 uStack_9b4;
  undefined4 uStack_9ac;
  undefined8 *local_9a8;
  undefined4 *local_9a0;
  longlong local_998;
  undefined8 local_988;
  uint uStack_980;
  undefined4 uStack_97c;
  undefined4 uStack_978;
  float fStack_974;
  float fStack_970;
  uint uStack_96c;
  undefined4 local_968;
  float fStack_964;
  float fStack_960;
  float fStack_95c;
  undefined8 uStack_958;
  undefined8 uStack_950;
  undefined1 auStack_948 [16];
  uint6 uStack_938;
  undefined2 uStack_932;
  undefined1 uStack_930;
  undefined1 uStack_92f;
  undefined1 uStack_92e;
  undefined1 uStack_92d;
  undefined4 uStack_92c;
  uint local_928;
  uint uStack_924;
  uint uStack_920;
  undefined4 uStack_91c;
  uint uStack_918;
  undefined4 uStack_914;
  uint uStack_910;
  uint uStack_90c;
  longlong local_908;
  undefined4 uStack_900;
  undefined4 uStack_8fc;
  longlong *local_8f8;
  longlong local_8e8;
  undefined4 local_8e0;
  longlong local_8d8;
  undefined8 *local_8d0;
  undefined1 local_8c8 [16];
  undefined1 (*local_8b8) [32];
  float local_8b0;
  float fStack_8ac;
  float local_8a8;
  undefined1 local_8a0 [16];
  undefined8 *local_890;
  undefined1 local_888 [8];
  float fStack_880;
  float fStack_87c;
  undefined2 local_878;
  undefined1 local_876;
  undefined1 local_870 [16];
  undefined8 local_860;
  undefined8 local_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  undefined8 local_838;
  float local_828 [20];
  float local_7d8 [200];
  int local_4b8;
  undefined1 local_4a8 [912];
  float local_118 [12];
  ulonglong local_e8;
  undefined1 local_d8 [16];
  undefined1 local_58 [16];
  
  local_58 = in_ZMM7._0_16_;
  local_d8 = in_ZMM15._0_16_;
  local_e8 = DAT_1808d5f00 ^ (ulonglong)auStackY_a88;
  auVar54 = ZEXT1664(in_ZMM3._0_16_);
  local_a18 = in_ZMM3._0_4_;
  local_9f8 = param_7;
  local_a00 = param_6;
  local_998 = param_9;
  local_8e0 = 0;
  if (((((*param_6 == 0) || (param_7 == (longlong *)0x0)) || ((int)param_6[0xd6b] < 1)) ||
      (((int)param_6[1] < 1 || ((char)param_7[0x477] == '\0')))) ||
     ((*param_7 != *param_6 || (*(int *)((longlong)param_7 + 0x36c) < 1)))) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  local_9a8 = param_2;
  local_9a0 = param_3;
  local_8d8 = param_1;
  local_8d0 = param_2;
  sVar29 = thunk_FUN_180624430(*param_3);
  if ((((((0 < sVar29) || (sVar29 = thunk_FUN_180624430(param_3[1]), 0 < sVar29)) ||
        ((sVar29 = thunk_FUN_180624430(param_3[2]), 0 < sVar29 ||
         (((sVar29 = thunk_FUN_180624430(*param_5), 0 < sVar29 ||
           (sVar29 = thunk_FUN_180624430(param_5[1]), 0 < sVar29)) ||
          (sVar29 = thunk_FUN_180624430(param_5[2]), 0 < sVar29)))))) ||
       ((sVar29 = thunk_FUN_180624430((int)param_7[0x46e]), 0 < sVar29 ||
        (sVar29 = thunk_FUN_180624430(*(undefined4 *)((longlong)param_7 + 0x2374)), 0 < sVar29))))
      || (sVar29 = thunk_FUN_180624430((int)param_7[0x46f]), 0 < sVar29)) ||
     ((sVar29 = thunk_FUN_180624430(auVar54._0_8_), 0 < sVar29 ||
      (sVar29 = thunk_FUN_180624430((int)param_7[0x476]), 0 < sVar29)))) {
    LOCK();
    *(longlong *)(param_1 + 0x120) = *(longlong *)(param_1 + 0x120) + 1;
    UNLOCK();
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  local_a20 = FUN_180252d60(&DAT_180c7e1f0);
  iVar51 = DAT_180c64820;
  uVar34 = extraout_XMM0_Qa;
  if (DAT_180c64820 == 0) {
    UVar31 = GetTickCount64();
    if (UVar31 < DAT_180c64818) {
      iVar51 = 0;
      uVar34 = extraout_XMM0_Qa_00;
    }
    else {
      local_9f0 = &DAT_1808ef400;
      iVar51 = FUN_1805f68d0(&DAT_1808ef400);
      if (iVar51 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808ef44c == 0x7fffffff) {
        DAT_1808ef44c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if ((DAT_180c64820 == 0) && (DAT_180c64818 <= UVar31)) {
        DAT_180c64820 = FUN_1804174b0("C_BaseEntity");
        if (DAT_180c64820 == 0) {
          DAT_180c64818 = UVar31 + 1000;
        }
        else {
          DAT_180c64818 = 0xffffffffffffffff;
        }
      }
      iVar51 = DAT_180c64820;
      uVar34 = FUN_1805f68fc(&DAT_1808ef400);
    }
  }
  lVar47 = local_a20;
  lVar33 = *param_6;
  if (iVar51 + lVar33 == 0) {
    bVar26 = false;
    auVar49 = local_888;
  }
  else {
    local_a48 = 0;
    lVar32 = FUN_18017ea70();
    *(int *)(lVar32 + 4) = *(int *)(lVar32 + 4) + 1;
    cVar28 = FUN_1804514c0(&local_a48,iVar51 + lVar33,8);
    if (cVar28 == '\0') {
      bVar26 = false;
      lVar33 = FUN_18017ea70();
      if (*(int *)(lVar33 + 4) != 0) {
        *(int *)(lVar33 + 4) = *(int *)(lVar33 + 4) + -1;
      }
      auVar49 = local_888;
      uVar34 = extraout_XMM0_Qa_01;
    }
    else {
      bVar26 = true;
      lVar33 = FUN_18017ea70();
      if (*(int *)(lVar33 + 4) != 0) {
        *(int *)(lVar33 + 4) = *(int *)(lVar33 + 4) + -1;
      }
      auVar49 = (undefined1  [8])local_a48;
      uVar34 = extraout_XMM0_Qa_02;
    }
  }
  uVar46 = 0;
  if (!bVar26) {
    auVar49 = (undefined1  [8])0x0;
  }
  if (((auVar49 == (undefined1  [8])0x0) || (auVar49 != (undefined1  [8])param_7[1])) ||
     (FUN_1803dad10(uVar34,local_7d8,auVar49,1), local_4b8 < 1)) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  else {
    FUN_18026e6a0(&DAT_180cc9380,local_4a8);
    local_828[0] = 0.0;
    local_828[1] = 0.0;
    local_828[2] = 0.0;
    local_828[3] = 0.0;
    local_828[4] = 0.0;
    local_828[5] = 0.0;
    local_828[6] = 0.0;
    local_828[7] = 0.0;
    local_828[8] = 0.0;
    local_828[9] = 0.0;
    local_828[10] = 0.0;
    local_828[0xb] = 0.0;
    local_828[0xc] = 0.0;
    local_828[0xd] = 0.0;
    local_828[0xe] = 0.0;
    local_828[0xf] = 0.0;
    local_828[0x10] = 0.0;
    local_828[0x11] = 0.0;
    local_828[0x12] = 0.0;
    if ((*(char *)(lVar47 + 1000) == '\0') && (uVar46 = 0, *(char *)(lVar47 + 0x6e0) != '\0')) {
      uVar46 = 1;
    }
    if (*(char *)(lVar47 + 0x6e1) != '\0') {
      local_828[uVar46] = 5.60519e-45;
      iVar51 = (int)uVar46;
      local_828[iVar51 + 1] = 7.00649e-45;
      local_828[iVar51 + 2] = 8.40779e-45;
      uVar46 = (ulonglong)(iVar51 + 3);
    }
    if (*(char *)(lVar47 + 0x6e2) != '\0') {
      local_828[uVar46] = 4.2039e-45;
      local_828[(int)uVar46 + 1] = 2.8026e-45;
      uVar46 = (ulonglong)((int)uVar46 + 2);
    }
    if (*(char *)(lVar47 + 0x6e3) != '\0') {
      local_118[2] = 1.82169e-44;
      local_118[3] = 1.96182e-44;
      local_118[4] = 2.10195e-44;
      local_118[5] = 2.24208e-44;
      local_118[6] = 2.38221e-44;
      local_118[7] = 2.52234e-44;
      pfVar36 = local_118 + 2;
      pfVar41 = local_828 + uVar46;
      uVar46 = (ulonglong)((int)uVar46 + 6);
      do {
        *pfVar41 = *pfVar36;
        pfVar41 = pfVar41 + 1;
        pfVar36 = pfVar36 + 1;
      } while (pfVar36 != local_118 + 8);
    }
    if (*(char *)(lVar47 + 0x6e4) != '\0') {
      local_118[8] = 9.80909e-45;
      local_118[9] = 1.12104e-44;
      local_118[10] = 1.26117e-44;
      local_118[0xb] = 1.4013e-44;
      pfVar36 = local_118 + 8;
      pfVar41 = local_828 + uVar46;
      uVar46 = (ulonglong)((int)uVar46 + 4);
      do {
        *pfVar41 = *pfVar36;
        pfVar41 = pfVar41 + 1;
        pfVar36 = pfVar36 + 1;
      } while (pfVar36 != (float *)&local_e8);
    }
    if (*(char *)(lVar47 + 0x6e5) != '\0') {
      local_118[0] = 1.54143e-44;
      local_118[1] = 1.68156e-44;
      pfVar36 = local_118;
      pfVar41 = local_828 + uVar46;
      uVar46 = (ulonglong)((int)uVar46 + 2);
      do {
        *pfVar41 = *pfVar36;
        pfVar41 = pfVar41 + 1;
        pfVar36 = pfVar36 + 1;
      } while (pfVar36 != local_118 + 2);
    }
    iVar51 = (int)uVar46;
    if (iVar51 == 0) {
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
    }
    else {
      local_8c8 = (undefined1  [16])0x0;
      local_8b8 = (undefined1 (*) [32])0x0;
      local_a48 = (longlong)iVar51;
      if (local_a48 * 0xc != 0) {
        if (0x3ffffffffffffff < (ulonglong)(local_a48 * 0xc)) {
                    /* WARNING: Subroutine does not return */
          FUN_1801baf80();
        }
        lVar47 = local_a48 * 0x300;
        lVar33 = FUN_18015bca0(lVar47);
        FUN_18063aed0(lVar33);
        if (local_8c8._0_8_ != 0) {
          if ((0xfff < ((longlong)local_8b8 - local_8c8._0_8_ & 0xffffffffffffffc0U)) &&
             (0x1f < (local_8c8._0_8_ - *(longlong *)(local_8c8._0_8_ + -8)) - 8U)) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          FUN_1804547d0();
        }
        local_8c8._8_8_ = lVar33;
        local_8c8._0_8_ = lVar33;
        local_8b8 = (undefined1 (*) [32])(lVar47 + lVar33);
      }
      lVar33 = (longlong)iVar51;
      if (iVar51 != 0) {
        local_9f0 = (undefined *)0x0;
        auVar54 = ZEXT464(0x3c23d70a);
        do {
          fVar58 = local_828[(longlong)local_9f0];
          pfVar41 = local_7d8;
          if (local_7d8 != local_7d8 + (longlong)local_4b8 * 10) {
LAB_18025bb70:
            if (*pfVar41 != fVar58) goto code_r0x00018025bb75;
            if (pfVar41 != (float *)0x0) {
              fVar53 = pfVar41[1];
              lVar47 = (longlong)(int)fVar53;
              if (((-1 < (int)fVar53) && ((int)fVar53 < *(int *)((longlong)param_7 + 0x36c))) &&
                 ((int)fVar53 < 0x80)) {
                auVar63 = ZEXT1664(SUB6416(ZEXT464(0x3f000000),0));
                auVar54 = ZEXT1664(auVar54._0_16_);
                sVar29 = thunk_FUN_180624430();
                if (sVar29 < 1) {
                  sVar29 = thunk_FUN_180624430(pfVar41[3]);
                  if (sVar29 < 1) {
                    sVar29 = thunk_FUN_180624430(pfVar41[4]);
                    if (sVar29 < 1) {
                      sVar29 = thunk_FUN_180624430(pfVar41[5]);
                      if (sVar29 < 1) {
                        sVar29 = thunk_FUN_180624430(pfVar41[6]);
                        if (sVar29 < 1) {
                          sVar29 = thunk_FUN_180624430(pfVar41[7]);
                          if (sVar29 < 1) {
                            sVar29 = thunk_FUN_180624430(pfVar41[8]);
                            if (sVar29 < 1) {
                              pfVar36 = (float *)(param_7 + lVar47 * 4 + 0x6e);
                              fVar53 = *pfVar36;
                              sVar29 = thunk_FUN_180624430(fVar53);
                              if ((((sVar29 < 1) &&
                                   (sVar29 = thunk_FUN_180624430(*(undefined4 *)
                                                                  (lVar47 * 0x20 + 0x374 +
                                                                  (longlong)param_7)), sVar29 < 1))
                                  && ((sVar29 = thunk_FUN_180624430((int)param_7[lVar47 * 4 + 0x6f])
                                      , sVar29 < 1 &&
                                      ((sVar29 = thunk_FUN_180624430(pfVar36[4]), sVar29 < 1 &&
                                       (sVar29 = thunk_FUN_180624430(pfVar36[5]), sVar29 < 1))))))
                                 && ((sVar29 = thunk_FUN_180624430(pfVar36[6]), sVar29 < 1 &&
                                     (sVar29 = thunk_FUN_180624430(pfVar36[7]), sVar29 < 1)))) {
                                sVar29 = thunk_FUN_180624430(pfVar36[3]);
                                if ((0 < sVar29) ||
                                   (fVar53 * fVar53 + pfVar36[1] * pfVar36[1] +
                                    pfVar36[2] * pfVar36[2] < 1.0)) goto LAB_18025c212;
                                local_858 = *(undefined8 *)pfVar41;
                                uStack_850 = *(undefined8 *)(pfVar41 + 2);
                                uStack_848 = *(undefined8 *)(pfVar41 + 4);
                                uStack_840 = *(undefined8 *)(pfVar41 + 6);
                                local_838 = *(undefined8 *)(pfVar41 + 8);
                                _local_888 = *(undefined1 (*) [16])(pfVar36 + 4);
                                auVar63 = ZEXT1664(auVar63._0_16_);
                                auVar54 = ZEXT1664(auVar54._0_16_);
                                cVar28 = FUN_1802405f0(pfVar41,pfVar36);
                                if (cVar28 != '\0') {
                                  fVar55 = auVar63._0_4_;
                                  fVar53 = ((float)uStack_848 + uStack_840._4_4_) * fVar55;
                                  fVar30 = (uStack_850._4_4_ + (float)uStack_840) * fVar55;
                                  fVar55 = ((float)uStack_850 + uStack_848._4_4_) * fVar55;
                                  fVar6 = (float)local_888._0_4_ * fVar30 -
                                          fVar55 * (float)local_888._4_4_;
                                  fVar7 = fVar55 * fStack_880 - (float)local_888._0_4_ * fVar53;
                                  fVar5 = fStack_87c * 2.0;
                                  fVar8 = (float)local_888._4_4_ * fVar53 - fStack_880 * fVar30;
                                  fVar9 = fVar8 * fStack_880 - fVar6 * (float)local_888._0_4_;
                                  fVar10 = fVar7 * (float)local_888._0_4_ -
                                           fVar8 * (float)local_888._4_4_;
                                  fVar11 = fVar6 * (float)local_888._4_4_ - fVar7 * fStack_880;
                                  local_8a8 = fVar6 * fVar5 + fVar53 + fVar10 + fVar10 + pfVar36[2];
                                  auVar63 = ZEXT464((uint)local_8a8);
                                  fStack_8ac = fVar7 * fVar5 + fVar30 + fVar9 + fVar9 + pfVar36[1];
                                  auVar64 = ZEXT464((uint)fStack_8ac);
                                  fVar53 = fVar8 * fVar5 + fVar55 + fVar11 + fVar11 + *pfVar36;
                                  local_8b0 = fVar53;
                                  sVar29 = thunk_FUN_180624430(fVar53);
                                  if (((0 < sVar29) ||
                                      (sVar29 = thunk_FUN_180624430(auVar64._0_8_), 0 < sVar29)) ||
                                     (sVar29 = thunk_FUN_180624430(auVar63._0_8_), 0 < sVar29))
                                  goto LAB_18025c212;
                                  fStack_9d8 = 0.0;
                                  uStack_9ac = 0;
                                  local_9e8 = fVar53;
                                  uStack_9e4 = auVar64._0_4_;
                                  uStack_9e0 = auVar63._0_4_;
                                  fStack_9dc = fVar58;
                                  fVar30 = pfVar41[1];
                                  fStack_9d8 = fVar30;
                                  uStack_9c4 = *(undefined8 *)(pfVar41 + 4);
                                  uStack_9bc = *(undefined8 *)(pfVar41 + 6);
                                  uStack_9d4 = *(undefined8 *)pfVar41;
                                  uStack_9cc = (undefined4)*(undefined8 *)(pfVar41 + 2);
                                  uStack_9c8 = (undefined4)
                                               ((ulonglong)*(undefined8 *)(pfVar41 + 2) >> 0x20);
                                  uStack_9b4 = *(undefined8 *)(pfVar41 + 8);
                                  uStack_9ac = 1;
                                  if ((undefined1 (*) [32])local_8c8._8_8_ == local_8b8) {
                                    auVar54 = ZEXT1664(auVar54._0_16_);
                                    FUN_1802688c0(local_8c8,local_8c8._8_8_);
                                  }
                                  else {
                                    auVar22._4_4_ = auVar64._0_4_;
                                    auVar22._0_4_ = fVar53;
                                    auVar22._8_4_ = auVar63._0_4_;
                                    auVar22._12_4_ = fVar58;
                                    auVar22._16_4_ = fVar30;
                                    auVar22._20_8_ = *(undefined8 *)pfVar41;
                                    auVar22._28_4_ = uStack_9cc;
                                    *(undefined1 (*) [32])local_8c8._8_8_ = auVar22;
                                    auVar24._4_8_ = uStack_9c4;
                                    auVar24._0_4_ = uStack_9c8;
                                    auVar24._12_8_ = uStack_9bc;
                                    auVar24._20_8_ = uStack_9b4;
                                    auVar24._28_4_ = 1;
                                    *(undefined1 (*) [32])(local_8c8._8_8_ + 0x20) = auVar24;
                                    local_8c8._8_8_ = (undefined1 (*) [32])(local_8c8._8_8_ + 0x40);
                                  }
                                  if (*(char *)(local_a20 + 0x678) != '\0') {
                                    lVar33 = param_1 + 0xd0;
                                    auVar54 = ZEXT1664(auVar54._0_16_);
                                    local_8e8 = lVar33;
                                    iVar51 = FUN_1805f68d0(lVar33);
                                    if (iVar51 != 0) {
                    /* WARNING: Subroutine does not return */
                                      FUN_1805f6d44(5);
                                    }
                                    if (*(int *)(param_1 + 0x11c) == 0x7fffffff) {
                                      *(undefined4 *)(param_1 + 0x11c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
                                      FUN_1805f6d44(6);
                                    }
                                    local_a40 = local_8b0;
                                    fStack_a3c = fStack_8ac;
                                    fStack_a38 = local_8a8;
                                    local_a30 = CONCAT31(local_a30._1_3_,1);
                                    puVar4 = *(undefined8 **)(param_1 + 0xc0);
                                    if (puVar4 == *(undefined8 **)(param_1 + 200)) {
                                      fStack_a34 = fVar58;
                                      FUN_180268a40();
                                    }
                                    else {
                                      *puVar4 = CONCAT44(fStack_8ac,local_8b0);
                                      puVar4[1] = CONCAT44(fVar58,local_8a8);
                                      *(uint *)(puVar4 + 2) = local_a30;
                                      *(longlong *)(param_1 + 0xc0) =
                                           *(longlong *)(param_1 + 0xc0) + 0x14;
                                      fStack_a34 = fVar58;
                                    }
                                    FUN_1805f68fc(lVar33);
                                  }
                                  lVar33 = local_a20;
                                  if ((*(char *)(param_9 + 0x5c) == '\0') &&
                                     (0.0 < *(float *)(local_a20 + 0x608))) {
                                    local_870 = (undefined1  [16])0x0;
                                    local_860 = 0;
                                    auVar54 = ZEXT1664(auVar54._0_16_);
                                    FUN_180261b90(param_1,local_870);
                                    auVar52 = auVar54._0_16_;
                                    uVar34 = local_870._8_8_;
                                    if (local_870._0_8_ != local_870._8_8_) {
                                      pauVar43 = (undefined1 (*) [32])local_8c8._8_8_;
                                      pauVar48 = (undefined1 (*) [12])local_870._0_8_;
                                      do {
                                        if ((undefined1 (*) [32])local_8c8._0_8_ != pauVar43) {
                                          pfVar36 = (float *)local_8c8._0_8_ + 2;
                                          do {
                                            if (pfVar36[1] == fVar58) {
                                              fVar53 = *pfVar36 - *(float *)(*pauVar48 + 8);
                                              fVar55 = pfVar36[-1] - *(float *)(*pauVar48 + 4);
                                              fVar5 = pfVar36[-2] - *(float *)*pauVar48;
                                              if (fVar5 * fVar5 + fVar55 * fVar55 + fVar53 * fVar53
                                                  < auVar54._0_4_) goto LAB_18025c1ec;
                                            }
                                            pauVar1 = (undefined1 (*) [32])(pfVar36 + 0xe);
                                            pfVar36 = pfVar36 + 0x10;
                                          } while (pauVar1 != pauVar43);
                                        }
                                        uStack_9ac = 0;
                                        local_9e8 = (float)*(undefined8 *)*pauVar48;
                                        uStack_9e4 = (undefined4)
                                                     ((ulonglong)*(undefined8 *)*pauVar48 >> 0x20);
                                        uStack_9e0 = *(undefined4 *)(*pauVar48 + 8);
                                        fStack_9dc = fVar58;
                                        fStack_9d8 = fVar30;
                                        uStack_9c4 = *(undefined8 *)(pfVar41 + 4);
                                        uStack_9bc = *(undefined8 *)(pfVar41 + 6);
                                        uStack_9d4 = *(undefined8 *)pfVar41;
                                        uStack_9cc = (undefined4)*(undefined8 *)(pfVar41 + 2);
                                        uStack_9c8 = (undefined4)
                                                     ((ulonglong)*(undefined8 *)(pfVar41 + 2) >>
                                                     0x20);
                                        uStack_9b4 = *(undefined8 *)(pfVar41 + 8);
                                        uStack_9ac = 0;
                                        if (pauVar43 == local_8b8) {
                                          auVar54 = ZEXT1664(auVar54._0_16_);
                                          FUN_1802688c0(local_8c8);
                                          pauVar43 = (undefined1 (*) [32])local_8c8._8_8_;
                                        }
                                        else {
                                          auVar23._12_4_ = fVar58;
                                          auVar23._0_12_ = *pauVar48;
                                          auVar23._16_4_ = fVar30;
                                          auVar23._20_8_ = *(undefined8 *)pfVar41;
                                          auVar23._28_4_ = uStack_9cc;
                                          *pauVar43 = auVar23;
                                          auVar25._4_8_ = uStack_9c4;
                                          auVar25._0_4_ = uStack_9c8;
                                          auVar25._12_8_ = uStack_9bc;
                                          auVar25._20_8_ = uStack_9b4;
                                          auVar25._28_4_ = 0;
                                          pauVar43[1] = auVar25;
                                          local_8c8._8_8_ = local_8c8._8_8_ + 0x40;
                                          pauVar43 = (undefined1 (*) [32])local_8c8._8_8_;
                                        }
                                        if (*(char *)(lVar33 + 0x678) != '\0') {
                                          lVar33 = param_1 + 0xd0;
                                          auVar54 = ZEXT1664(auVar54._0_16_);
                                          local_8e8 = lVar33;
                                          iVar51 = FUN_1805f68d0(lVar33);
                                          if (iVar51 != 0) {
                    /* WARNING: Subroutine does not return */
                                            FUN_1805f6d44(5);
                                          }
                                          if (*(int *)(param_1 + 0x11c) == 0x7fffffff) {
                                            *(undefined4 *)(param_1 + 0x11c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
                                            FUN_1805f6d44(6);
                                          }
                                          uVar2 = *(undefined8 *)*pauVar48;
                                          local_a40 = (float)uVar2;
                                          fStack_a3c = (float)((ulonglong)uVar2 >> 0x20);
                                          fStack_a38 = *(float *)(*pauVar48 + 8);
                                          local_a30 = local_a30 & 0xffffff00;
                                          puVar4 = *(undefined8 **)(param_1 + 0xc0);
                                          if (puVar4 == *(undefined8 **)(param_1 + 200)) {
                                            fStack_a34 = fVar58;
                                            FUN_180268a40();
                                          }
                                          else {
                                            *puVar4 = uVar2;
                                            puVar4[1] = CONCAT44(fVar58,fStack_a38);
                                            *(uint *)(puVar4 + 2) = local_a30;
                                            *(longlong *)(param_1 + 0xc0) =
                                                 *(longlong *)(param_1 + 0xc0) + 0x14;
                                            fStack_a34 = fVar58;
                                          }
                                          FUN_1805f68fc(lVar33);
                                          pauVar43 = (undefined1 (*) [32])local_8c8._8_8_;
                                          lVar33 = local_a20;
                                        }
LAB_18025c1ec:
                                        auVar52 = auVar54._0_16_;
                                        pauVar48 = pauVar48 + 1;
                                      } while (pauVar48 != (undefined1 (*) [12])uVar34);
                                    }
                                    auVar54 = ZEXT1664(auVar52);
                                    FUN_1801b36e0(local_870);
                                    param_9 = local_998;
                                  }
                                  param_7 = local_9f8;
                                }
                              }
                              else {
LAB_18025c212:
                                LOCK();
                                *(longlong *)(param_1 + 0x120) = *(longlong *)(param_1 + 0x120) + 1;
                                UNLOCK();
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                lVar33 = local_a48;
              }
            }
          }
LAB_18025c21f:
          local_9f0 = local_9f0 + 1;
        } while ((longlong)local_9f0 < lVar33);
        param_2 = local_9a8;
      }
      if (local_8c8._0_8_ == local_8c8._8_8_) {
        *param_2 = 0;
        param_2[1] = 0;
        param_2[2] = 0;
        if (local_8c8._0_8_ != 0) {
          if ((0xfff < ((longlong)local_8b8 - local_8c8._0_8_ & 0xffffffffffffffc0U)) &&
             (0x1f < (local_8c8._0_8_ - *(longlong *)(local_8c8._0_8_ + -8)) - 8U))
          goto LAB_18025cac4;
          FUN_1804547d0();
        }
      }
      else {
        local_8a0 = (undefined1  [16])0x0;
        local_890 = (undefined8 *)0x0;
        if (lVar33 * 2 != 0) {
          if (0x1af286bca1af286 < (ulonglong)(lVar33 * 2)) {
                    /* WARNING: Subroutine does not return */
            FUN_1801136f0();
          }
          uVar34 = FUN_18015bca0(lVar33 * 0x130);
          FUN_18063aed0(uVar34,local_8a0._0_8_,local_8a0._8_8_ - local_8a0._0_8_);
          FUN_180269350(local_8a0,uVar34,0);
        }
        _local_888 = (undefined1  [16])0x0;
        local_878 = 0;
        local_876 = 0;
        FUN_180266410(local_8c8._0_8_,local_8c8._8_8_,local_a28);
        uVar34 = local_8c8._8_8_;
        if (((*(char *)(param_9 + 0x5c) != '\0') && (local_8c8._0_8_ != local_8c8._8_8_)) &&
           (uVar46 = (longlong)(local_8c8._8_8_ - local_8c8._0_8_) >> 6, 2 < uVar46)) {
          iVar51 = DAT_180cc935c;
          if (DAT_180cc935c < 0) {
            iVar51 = 0;
          }
          puVar40 = (uint *)(local_8c8._0_8_ +
                            ((ulonglong)(longlong)iVar51 % (uVar46 - 1) + 1) * 0x10 * 4);
          puVar35 = (uint *)(local_8c8._0_8_ + 0x40);
          if ((puVar35 != puVar40) && (puVar40 != (uint *)local_8c8._8_8_)) {
            puVar45 = puVar40;
            puVar50 = puVar35;
            do {
              puVar44 = puVar45 + -0x10;
              if (puVar50 == puVar44) break;
              uVar2 = *(undefined8 *)puVar50;
              uVar12 = *(undefined8 *)(puVar50 + 2);
              uVar13 = *(undefined8 *)(puVar50 + 4);
              uVar14 = *(undefined8 *)(puVar50 + 6);
              uVar15 = *(undefined8 *)(puVar50 + 8);
              uVar16 = *(undefined8 *)(puVar50 + 10);
              uVar17 = *(undefined8 *)(puVar50 + 0xc);
              uVar18 = *(undefined8 *)(puVar50 + 0xe);
              uVar19 = *(undefined8 *)(puVar45 + -0xe);
              uVar20 = *(undefined8 *)(puVar45 + -0xc);
              uVar21 = *(undefined8 *)(puVar45 + -10);
              *(undefined8 *)puVar50 = *(undefined8 *)puVar44;
              *(undefined8 *)(puVar50 + 2) = uVar19;
              *(undefined8 *)(puVar50 + 4) = uVar20;
              *(undefined8 *)(puVar50 + 6) = uVar21;
              uVar19 = *(undefined8 *)(puVar45 + -6);
              uVar20 = *(undefined8 *)(puVar45 + -4);
              uVar21 = *(undefined8 *)(puVar45 + -2);
              *(undefined8 *)(puVar50 + 8) = *(undefined8 *)(puVar45 + -8);
              *(undefined8 *)(puVar50 + 10) = uVar19;
              *(undefined8 *)(puVar50 + 0xc) = uVar20;
              *(undefined8 *)(puVar50 + 0xe) = uVar21;
              *(undefined8 *)puVar44 = uVar2;
              *(undefined8 *)(puVar45 + -0xe) = uVar12;
              *(undefined8 *)(puVar45 + -0xc) = uVar13;
              *(undefined8 *)(puVar45 + -10) = uVar14;
              *(undefined8 *)(puVar45 + -8) = uVar15;
              *(undefined8 *)(puVar45 + -6) = uVar16;
              *(undefined8 *)(puVar45 + -4) = uVar17;
              *(undefined8 *)(puVar45 + -2) = uVar18;
              puVar50 = puVar50 + 0x10;
              puVar45 = puVar44;
            } while (puVar50 != puVar44);
            puVar45 = (uint *)local_8c8._8_8_;
            do {
              puVar50 = puVar45 + -0x10;
              if (puVar40 == puVar50) break;
              uVar2 = *(undefined8 *)puVar40;
              uVar12 = *(undefined8 *)(puVar40 + 2);
              uVar13 = *(undefined8 *)(puVar40 + 4);
              uVar14 = *(undefined8 *)(puVar40 + 6);
              uVar15 = *(undefined8 *)(puVar40 + 8);
              uVar16 = *(undefined8 *)(puVar40 + 10);
              uVar17 = *(undefined8 *)(puVar40 + 0xc);
              uVar18 = *(undefined8 *)(puVar40 + 0xe);
              uVar19 = *(undefined8 *)(puVar45 + -0xe);
              uVar20 = *(undefined8 *)(puVar45 + -0xc);
              uVar21 = *(undefined8 *)(puVar45 + -10);
              *(undefined8 *)puVar40 = *(undefined8 *)puVar50;
              *(undefined8 *)(puVar40 + 2) = uVar19;
              *(undefined8 *)(puVar40 + 4) = uVar20;
              *(undefined8 *)(puVar40 + 6) = uVar21;
              uVar19 = *(undefined8 *)(puVar45 + -6);
              uVar20 = *(undefined8 *)(puVar45 + -4);
              uVar21 = *(undefined8 *)(puVar45 + -2);
              *(undefined8 *)(puVar40 + 8) = *(undefined8 *)(puVar45 + -8);
              *(undefined8 *)(puVar40 + 10) = uVar19;
              *(undefined8 *)(puVar40 + 0xc) = uVar20;
              *(undefined8 *)(puVar40 + 0xe) = uVar21;
              *(undefined8 *)puVar50 = uVar2;
              *(undefined8 *)(puVar45 + -0xe) = uVar12;
              *(undefined8 *)(puVar45 + -0xc) = uVar13;
              *(undefined8 *)(puVar45 + -10) = uVar14;
              *(undefined8 *)(puVar45 + -8) = uVar15;
              *(undefined8 *)(puVar45 + -6) = uVar16;
              *(undefined8 *)(puVar45 + -4) = uVar17;
              *(undefined8 *)(puVar45 + -2) = uVar18;
              puVar40 = puVar40 + 0x10;
              puVar45 = puVar50;
            } while (puVar40 != puVar50);
            puVar40 = (uint *)local_8c8._8_8_;
            if (puVar35 != (uint *)local_8c8._8_8_) {
              do {
                puVar45 = puVar40 + -0x10;
                if (puVar35 == puVar45) break;
                uVar2 = *(undefined8 *)puVar35;
                uVar12 = *(undefined8 *)(puVar35 + 2);
                uVar13 = *(undefined8 *)(puVar35 + 4);
                uVar14 = *(undefined8 *)(puVar35 + 6);
                uVar15 = *(undefined8 *)(puVar35 + 8);
                uVar16 = *(undefined8 *)(puVar35 + 10);
                uVar17 = *(undefined8 *)(puVar35 + 0xc);
                uVar18 = *(undefined8 *)(puVar35 + 0xe);
                uVar19 = *(undefined8 *)(puVar40 + -0xe);
                uVar20 = *(undefined8 *)(puVar40 + -0xc);
                uVar21 = *(undefined8 *)(puVar40 + -10);
                *(undefined8 *)puVar35 = *(undefined8 *)puVar45;
                *(undefined8 *)(puVar35 + 2) = uVar19;
                *(undefined8 *)(puVar35 + 4) = uVar20;
                *(undefined8 *)(puVar35 + 6) = uVar21;
                uVar19 = *(undefined8 *)(puVar40 + -6);
                uVar20 = *(undefined8 *)(puVar40 + -4);
                uVar21 = *(undefined8 *)(puVar40 + -2);
                *(undefined8 *)(puVar35 + 8) = *(undefined8 *)(puVar40 + -8);
                *(undefined8 *)(puVar35 + 10) = uVar19;
                *(undefined8 *)(puVar35 + 0xc) = uVar20;
                *(undefined8 *)(puVar35 + 0xe) = uVar21;
                *(undefined8 *)puVar45 = uVar2;
                *(undefined8 *)(puVar40 + -0xe) = uVar12;
                *(undefined8 *)(puVar40 + -0xc) = uVar13;
                *(undefined8 *)(puVar40 + -10) = uVar14;
                *(undefined8 *)(puVar40 + -8) = uVar15;
                *(undefined8 *)(puVar40 + -6) = uVar16;
                *(undefined8 *)(puVar40 + -4) = uVar17;
                *(undefined8 *)(puVar40 + -2) = uVar18;
                puVar35 = puVar35 + 0x10;
                puVar40 = puVar45;
              } while (puVar35 != puVar45);
            }
          }
        }
        iVar51 = 0;
        if (local_8c8._0_8_ != local_8c8._8_8_) {
          auVar54 = ZEXT464(0x43340000);
          auVar64 = ZEXT464(0xc3b40000);
          auVar63 = ZEXT464(0xc3340000);
          auVar65 = ZEXT464(0x43b40000);
          puVar35 = (uint *)(local_8c8._0_8_ + 0xc);
          do {
            if (*(int *)(param_9 + 0x58) <= iVar51) break;
            auVar54 = ZEXT1664(auVar54._0_16_);
            auVar63 = ZEXT1664(auVar63._0_16_);
            auVar64 = ZEXT1664(auVar64._0_16_);
            auVar65 = ZEXT1664(auVar65._0_16_);
            cVar28 = FUN_1802531c0(param_9);
            puVar27 = local_9a0;
            if (cVar28 == '\0') {
              *(undefined1 *)(param_9 + 0x5d) = 1;
              break;
            }
            if ((((char)puVar35[0xc] == '\0') && (*puVar35 < 0x13)) &&
               (local_888[(int)*puVar35] != '\0')) goto LAB_18025c989;
            FUN_1804511f0(&local_8b0,local_9a0,puVar35 + -3);
            auVar60 = ZEXT464((uint)local_8b0);
            auVar62 = ZEXT464((uint)fStack_8ac);
            for (fVar58 = fStack_8ac - param_5[1]; auVar54._0_4_ < fVar58;
                fVar58 = fVar58 + auVar64._0_4_) {
            }
            for (; fVar58 < auVar63._0_4_; fVar58 = fVar58 + auVar65._0_4_) {
            }
            fVar58 = fVar58 * fVar58 + (local_8b0 - *param_5) * (local_8b0 - *param_5);
            if (fVar58 < 0.0) {
              auVar57._0_8_ = FUN_18061e150();
              auVar57._8_56_ = extraout_var;
              auVar52 = auVar57._0_16_;
            }
            else {
              auVar52 = ZEXT416((uint)SQRT(fVar58));
            }
            auVar57 = ZEXT1664(auVar52);
            sVar29 = thunk_FUN_180624430(puVar35[-3]);
            if ((((sVar29 < 1) && (sVar29 = thunk_FUN_180624430(puVar35[-2]), sVar29 < 1)) &&
                (sVar29 = thunk_FUN_180624430(puVar35[-1]), sVar29 < 1)) &&
               ((sVar29 = thunk_FUN_180624430(auVar60._0_8_), sVar29 < 1 &&
                (sVar29 = thunk_FUN_180624430(auVar62._0_8_), sVar29 < 1)))) {
              fVar58 = local_8a8;
              sVar29 = thunk_FUN_180624430(local_8a8);
              if ((0 < sVar29) || (sVar29 = thunk_FUN_180624430(auVar57._0_8_), 0 < sVar29))
              goto LAB_18025c97a;
              auVar67 = ZEXT864(0);
              if (DAT_180cadb70 == '\0') {
                auVar52 = auVar54._0_16_;
              }
              else {
                local_a10 = auVar54._0_4_;
                local_a14 = 0.0;
                pfVar41 = &local_a14;
                if (0.0 <= DAT_180cadbd8) {
                  pfVar41 = &DAT_180cadbd8;
                }
                pfVar36 = &local_a10;
                if (DAT_180cadbd8 <= auVar54._0_4_) {
                  pfVar36 = pfVar41;
                }
                auVar52 = ZEXT416((uint)*pfVar36);
              }
              auVar52 = vminss_avx(auVar52,ZEXT416(*(uint *)(local_a20 + 0x520)));
              if (auVar57._0_4_ <= auVar52._0_4_) {
                local_a40 = 0.0;
                fStack_a3c = -NAN;
                fStack_a38 = -NAN;
                fStack_a34 = (float)((uint)fStack_a34 & 0xffffff00);
                local_a30 = 0;
                *(longlong *)(param_9 + 0x28) = *(longlong *)(param_9 + 0x28) + 1;
                iVar51 = iVar51 + 1;
                cVar28 = FUN_18026ef40(&DAT_180cc9380,puVar27,puVar35 + -3);
                uVar56 = auVar57._0_4_;
                uVar66 = auVar67._0_4_;
                uVar61 = auVar62._0_4_;
                uVar59 = auVar60._0_4_;
                if (cVar28 == '\0') {
                  *(longlong *)(param_9 + 0x40) = *(longlong *)(param_9 + 0x40) + 1;
                }
                else if (local_a40 < *(float *)(local_a00 + 2)) {
LAB_18025c974:
                  *(longlong *)(param_9 + 0x48) = *(longlong *)(param_9 + 0x48) + 1;
                }
                else {
                  if (DAT_180cadb70 != '\0') {
                    local_a0c[1] = 4;
                    local_a0c[0] = 0;
                    piVar42 = local_a0c;
                    if (-1 < DAT_180cadbe8) {
                      piVar42 = &DAT_180cadbe8;
                    }
                    piVar37 = local_a0c + 1;
                    if (DAT_180cadbe8 < 5) {
                      piVar37 = piVar42;
                    }
                    if (*piVar37 < (int)local_a30) goto LAB_18025c974;
                  }
                  uVar3 = *puVar35;
                  fVar53 = local_a40;
                  if ((char)puVar35[0xc] == '\0') {
                    if (uVar3 == 0) {
                      fVar30 = (float)FUN_1803db3f0(*(float *)(local_a00 + 2),0);
                      uVar56 = auVar57._0_4_;
                      uVar66 = auVar67._0_4_;
                      uVar61 = auVar62._0_4_;
                      uVar59 = auVar60._0_4_;
                      if (fStack_a38 != fVar30) goto LAB_18025c989;
                    }
                  }
                  else if (uVar3 < 0x13) {
                    if ((fStack_a34._0_1_ == '\0') || ((float)(int)local_a00[1] <= local_a40)) {
                      uVar39 = 1;
                    }
                    else {
                      uVar39 = 0;
                    }
                    local_888[(int)uVar3] = uVar39;
                  }
                  uStack_96c = uVar66;
                  fStack_964 = 0.0;
                  fStack_960 = 0.0;
                  fStack_95c = 0.0;
                  uStack_958 = 0xffffffffffffffff;
                  uStack_950 = CONCAT44(uVar66,uVar66);
                  auStack_948 = ZEXT816(0);
                  uStack_938 = (uint6)uVar66;
                  uStack_930 = 0;
                  uStack_92f = 0;
                  uStack_92e = 0;
                  uStack_92c = 0;
                  local_928 = uVar66;
                  uStack_924 = uVar66;
                  uStack_920 = uVar66;
                  uStack_91c = 0;
                  uStack_918 = uVar66;
                  uStack_914 = 0;
                  uStack_910 = uVar66;
                  uStack_90c = uStack_90c & 0xffffff00;
                  local_908 = 0;
                  uStack_900 = 0;
                  local_8f8 = (longlong *)0x0;
                  local_988 = *(undefined8 *)(puVar35 + -3);
                  uStack_980 = puVar35[-1];
                  uStack_97c = uVar59;
                  uStack_978 = uVar61;
                  fStack_974 = fVar58;
                  fStack_970 = fVar53;
                  local_968 = uVar56;
                  for (pfVar41 = local_7d8;
                      (pfVar41 != local_7d8 + (longlong)local_4b8 * 10 && (*pfVar41 != fStack_a3c));
                      pfVar41 = pfVar41 + 10) {
                  }
                  if (pfVar41 != local_7d8 + (longlong)local_4b8 * 10) {
                    pfVar36 = local_828 + local_a48;
                    fVar58 = *pfVar41;
                    pfVar38 = (float *)thunk_FUN_1805f8070(local_828,pfVar36,fVar58);
                    if (pfVar38 != pfVar36) {
                      fStack_964 = fVar58;
                      fStack_960 = fStack_a38;
                      fStack_95c = pfVar41[1];
                      uStack_958 = *(undefined8 *)pfVar41;
                      uStack_950 = *(undefined8 *)(pfVar41 + 2);
                      auStack_948 = *(undefined1 (*) [16])(pfVar41 + 4);
                      auVar52 = auStack_948;
                      _uStack_938 = *(undefined8 *)(pfVar41 + 8);
                      uStack_930 = (undefined1)puVar35[0xc];
                      uStack_92f = fStack_a34._0_1_;
                      local_908 = *local_a00;
                      uStack_900 = (undefined4)local_a00[1];
                      local_8f8 = local_9f8;
                      if ((undefined8 *)local_8a0._8_8_ == local_890) {
                        auVar54 = ZEXT1664(auVar54._0_16_);
                        auVar63 = ZEXT1664(auVar63._0_16_);
                        auVar64 = ZEXT1664(auVar64._0_16_);
                        auVar65 = ZEXT1664(auVar65._0_16_);
                        FUN_180268c10(local_8a0,local_8a0._8_8_,&local_988);
                      }
                      else {
                        *(undefined8 *)local_8a0._8_8_ = local_988;
                        *(ulonglong *)(local_8a0._8_8_ + 8) = CONCAT44(uStack_97c,uStack_980);
                        *(ulonglong *)(local_8a0._8_8_ + 0x10) = CONCAT44(fStack_974,uStack_978);
                        *(ulonglong *)(local_8a0._8_8_ + 0x18) = CONCAT44(uStack_96c,fStack_970);
                        *(ulonglong *)(local_8a0._8_8_ + 0x20) = CONCAT44(fVar58,local_968);
                        *(ulonglong *)(local_8a0._8_8_ + 0x28) = CONCAT44(fStack_95c,fStack_a38);
                        *(undefined8 *)(local_8a0._8_8_ + 0x30) = uStack_958;
                        *(undefined8 *)(local_8a0._8_8_ + 0x38) = uStack_950;
                        *(undefined8 *)(local_8a0._8_8_ + 0x40) = auStack_948._0_8_;
                        *(undefined8 *)(local_8a0._8_8_ + 0x48) = auStack_948._8_8_;
                        *(undefined8 *)(local_8a0._8_8_ + 0x50) = _uStack_938;
                        *(ulonglong *)(local_8a0._8_8_ + 0x58) =
                             CONCAT44(uStack_92c,
                                      CONCAT13(uStack_92d,
                                               CONCAT12(uStack_92e,
                                                        CONCAT11(fStack_a34._0_1_,uStack_930))));
                        *(ulonglong *)(local_8a0._8_8_ + 0x60) = CONCAT44(uStack_924,local_928);
                        *(ulonglong *)(local_8a0._8_8_ + 0x68) = CONCAT44(uStack_91c,uStack_920);
                        *(ulonglong *)(local_8a0._8_8_ + 0x70) = CONCAT44(uStack_914,uStack_918);
                        *(ulonglong *)(local_8a0._8_8_ + 0x78) = CONCAT44(uStack_90c,uStack_910);
                        *(longlong *)(local_8a0._8_8_ + 0x80) = local_908;
                        *(ulonglong *)(local_8a0._8_8_ + 0x88) = CONCAT44(uStack_8fc,uStack_900);
                        *(longlong **)(local_8a0._8_8_ + 0x90) = local_9f8;
                        local_8a0._8_8_ = (undefined8 *)(local_8a0._8_8_ + 0x98);
                        auStack_948 = auVar52;
                      }
                    }
                  }
                }
              }
              else {
                *(longlong *)(param_9 + 0x38) = *(longlong *)(param_9 + 0x38) + 1;
              }
            }
            else {
LAB_18025c97a:
              LOCK();
              *(longlong *)(local_8d8 + 0x120) = *(longlong *)(local_8d8 + 0x120) + 1;
              UNLOCK();
            }
LAB_18025c989:
            puVar40 = puVar35 + 0xd;
            puVar35 = puVar35 + 0x10;
            param_9 = local_998;
          } while (puVar40 != (uint *)uVar34);
        }
        puVar4 = local_890;
        local_890 = (undefined8 *)0x0;
        uVar2 = local_8a0._8_8_;
        uVar34 = local_8a0._0_8_;
        local_8a0 = ZEXT816(0);
        *local_9a8 = uVar34;
        local_9a8[1] = uVar2;
        local_9a8[2] = puVar4;
        if ((uint *)local_8c8._0_8_ != (uint *)0x0) {
          puVar35 = (uint *)local_8c8._0_8_;
          if ((0xfff < ((longlong)local_8b8 - local_8c8._0_8_ & 0xffffffffffffffc0U)) &&
             (puVar35 = *(uint **)(local_8c8._0_8_ + -8),
             0x1f < (ulonglong)(local_8c8._0_8_ + (-8 - (longlong)puVar35)))) {
LAB_18025cac4:
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          FUN_1804547d0(puVar35);
        }
      }
    }
  }
code_r0x00018025bb75:
  pfVar41 = pfVar41 + 10;
  if (pfVar41 == local_7d8 + (longlong)local_4b8 * 10) goto LAB_18025c21f;
  goto LAB_18025bb70;
}



