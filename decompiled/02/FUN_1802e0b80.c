// FUN_1802e0b80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802e0b80 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802e0b80(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  float *pfVar8;
  longlong lVar9;
  longlong lVar10;
  undefined **ppuVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  undefined1 (*pauVar15) [16];
  byte *pbVar16;
  undefined1 *puVar17;
  longlong lVar18;
  char *pcVar19;
  char *pcVar20;
  undefined1 (*pauVar21) [16];
  char *pcVar22;
  char *pcVar23;
  bool bVar24;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar25;
  float fVar26;
  float fVar27;
  undefined1 in_ZMM6 [64];
  undefined1 auVar28 [64];
  undefined1 auVar29 [16];
  undefined1 in_ZMM7 [64];
  undefined1 auVar30 [64];
  undefined1 auVar31 [64];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [64];
  undefined1 auStack_928 [32];
  undefined **local_908;
  undefined **local_900;
  uint local_8f8;
  undefined4 local_8f0;
  undefined8 *local_8e8;
  longlong local_8e0;
  undefined1 local_8c8;
  char local_8c7;
  char local_8c6;
  char local_8c5;
  char local_8c4;
  char local_8c3;
  undefined1 local_8c2;
  char local_8c1;
  undefined1 local_8c0;
  char local_8bf;
  undefined1 local_8be;
  char local_8bd;
  char *local_8b8;
  undefined1 (*local_8b0) [16];
  longlong lStack_8a8;
  longlong lStack_8a0;
  longlong lStack_898;
  longlong local_890;
  longlong lStack_888;
  longlong local_880;
  undefined1 local_878;
  undefined1 local_877;
  undefined1 local_876;
  undefined1 local_875;
  undefined1 local_874;
  undefined1 local_873;
  undefined1 local_870 [16];
  longlong local_860;
  ULONGLONG *local_858;
  undefined8 *local_850;
  longlong *local_848;
  undefined4 local_840;
  undefined4 uStack_83c;
  undefined4 uStack_838;
  undefined4 uStack_834;
  undefined8 uStack_830;
  undefined4 uStack_828;
  undefined4 uStack_824;
  undefined4 uStack_820;
  undefined4 uStack_81c;
  float fStack_818;
  DWORD DStack_814;
  undefined4 uStack_810;
  undefined4 uStack_80c;
  undefined8 uStack_808;
  undefined8 local_800;
  undefined8 local_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined1 local_7d8 [32];
  undefined8 local_7b8;
  undefined1 local_7a8 [8];
  char local_7a0;
  undefined1 local_798 [8];
  char local_790;
  undefined1 (*local_788) [16];
  longlong lStack_780;
  longlong lStack_778;
  longlong lStack_770;
  undefined8 local_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined1 local_748 [32];
  undefined8 local_728;
  undefined8 local_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined1 local_6f8 [32];
  undefined8 local_6d8;
  uint local_6c8 [2];
  longlong *local_6c0;
  uint local_6b8 [2];
  float local_6b0;
  float fStack_6ac;
  float local_6a8;
  ULONGLONG local_6a0;
  undefined8 local_698;
  undefined4 local_690;
  float local_688 [388];
  ulonglong local_78;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  
  local_38 = in_ZMM6._0_16_;
  local_48 = in_ZMM7._0_16_;
  local_78 = DAT_1808d5f00 ^ (ulonglong)auStack_928;
  local_848 = param_2;
  local_6c0 = param_2;
  plVar7 = (longlong *)FUN_1802cbd00(&local_840);
  local_8b0 = (undefined1 (*) [16])*plVar7;
  lStack_8a8 = plVar7[1];
  lStack_8a0 = plVar7[2];
  lStack_898 = plVar7[3];
  local_890 = plVar7[4];
  lStack_888 = plVar7[5];
  local_880 = plVar7[6];
  local_788 = local_8b0;
  lStack_780 = lStack_8a8;
  lStack_778 = lStack_8a0;
  lStack_770 = lStack_898;
  local_6a0 = GetTickCount64();
  pauVar21 = local_788;
  if (DAT_180cc9ba0 == (undefined1 (*) [16])0x0) {
LAB_1802e0c51:
    if (pauVar21 != (undefined1 (*) [16])0x0) {
      DAT_180cc9ba0 = pauVar21;
    }
  }
  else if (local_788 != (undefined1 (*) [16])0x0) {
    if (DAT_180cc9ba0 != local_788) {
      _DAT_180cc9b58 = 0;
      DAT_180cc9b5a = '\0';
      FUN_1802e6f60(&DAT_180bbf090);
    }
    goto LAB_1802e0c51;
  }
  lVar12 = lStack_888;
  lVar10 = local_890;
  local_858 = &local_6a0;
  local_850 = &DAT_180cc99c0;
  auVar34 = ZEXT864(0);
  auVar32 = auVar34._0_16_;
  if (((pauVar21 != (undefined1 (*) [16])0x0) && (local_890 != 0)) &&
     (DAT_180cc9af0 != DAT_180cc9af8)) {
    pbVar16 = *DAT_180cc9af0 + 6;
    auVar31 = ZEXT464(0x3a83126f);
    pauVar15 = DAT_180cc9af0;
    do {
      if (*(undefined1 (**) [16])(pbVar16 + 2) == pauVar21) {
        uVar13 = (((((ulonglong)pbVar16[-2] ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                   (ulonglong)pbVar16[-1]) * 0x100000001b3 ^ (ulonglong)*pbVar16) * 0x100000001b3 ^
                 (ulonglong)pbVar16[1]) * 0x100000001b3 & DAT_180bbf0c0;
        lVar9 = *(longlong *)(DAT_180bbf0a8 + 8 + uVar13 * 0x10);
        if (lVar9 == DAT_180bbf098) {
LAB_1802e0d40:
          lVar9 = 0;
        }
        else {
          iVar5 = *(int *)(lVar9 + 0x10);
          while (*(int *)(pbVar16 + -2) != iVar5) {
            if (lVar9 == *(longlong *)(DAT_180bbf0a8 + uVar13 * 0x10)) goto LAB_1802e0d40;
            lVar9 = *(longlong *)(lVar9 + 8);
            iVar5 = *(int *)(lVar9 + 0x10);
          }
        }
        lVar18 = DAT_180bbf098;
        if (lVar9 != 0) {
          lVar18 = lVar9;
        }
        if (((*pauVar15)[0] == '\x02') &&
           (((lVar18 == DAT_180bbf098 || (DAT_180b0c290 == '\0')) ||
            (cVar1 = FUN_1802cb800(lVar18 + 0x18), cVar1 == '\0')))) {
          bVar24 = false;
        }
        else {
          bVar24 = true;
        }
        uVar13 = *(ulonglong *)(pbVar16 + 10);
        if (uVar13 <= local_6a0) {
          if (!bVar24) goto LAB_1802e0eaf;
LAB_1802e0f70:
          if (*(int *)(pbVar16 + -2) == -1) {
LAB_1802e0f89:
            uVar25 = FUN_1802cc7a0("particle_expiry_destroy");
          }
          else {
            cVar1 = FUN_180244810(lVar10,pauVar21);
            uVar25 = extraout_XMM0_Qa;
            if (cVar1 == '\0') goto LAB_1802e0f89;
          }
          FUN_1802e7020(uVar25,pbVar16 + -2);
          goto LAB_1802e0f9e;
        }
        if (!bVar24) {
LAB_1802e0eaf:
          if ((local_6a0 < uVar13) && (lVar18 != DAT_180bbf098)) {
            local_840 = CONCAT31(local_840._1_3_,2);
            uStack_830 = *(undefined8 *)(lVar18 + 0x1c);
            uStack_83c = (undefined4)uStack_830;
            uStack_838 = (undefined4)((ulonglong)uStack_830 >> 0x20);
            uStack_834 = *(undefined4 *)(lVar18 + 0x24);
            uStack_824 = (undefined4)*(undefined8 *)(lVar18 + 0x28);
            uStack_820 = (undefined4)((ulonglong)*(undefined8 *)(lVar18 + 0x28) >> 0x20);
            uStack_81c = *(undefined4 *)(lVar18 + 0x30);
            fStack_818 = (float)(uVar13 - local_6a0) * auVar31._0_4_;
            uStack_828 = uStack_834;
            DStack_814 = GetCurrentThreadId();
            uStack_810 = *(undefined4 *)(lVar18 + 0x18);
            uStack_808 = *(undefined8 *)(pbVar16 + 10);
            local_800 = 0;
            local_7f8 = CONCAT44(uStack_83c,local_840);
            uStack_7f0 = CONCAT44(uStack_834,uStack_838);
            uStack_7e0 = CONCAT44(uStack_824,uStack_828);
            uStack_7e8 = uStack_830;
            local_7d8._4_4_ = uStack_81c;
            local_7d8._0_4_ = uStack_820;
            local_7d8._8_4_ = fStack_818;
            local_7d8._12_4_ = DStack_814;
            local_7d8._16_4_ = uStack_810;
            local_7d8._20_4_ = uStack_80c;
            local_7d8._24_8_ = uStack_808;
            local_7b8 = 0;
            auVar31 = ZEXT1664(auVar31._0_16_);
            auVar34 = ZEXT1664(auVar34._0_16_);
            FUN_1802e23f0(&local_858,&local_7f8);
          }
          goto LAB_1802e0f70;
        }
        if ((*pauVar15)[0] == '\x02') {
          local_6b0 = (float)(DAT_180b0c4f0 & 0xff);
          fStack_6ac = (float)(DAT_180b0c4f0 >> 8 & 0xff);
          auVar28 = ZEXT1664(CONCAT124(SUB1612(ZEXT816(0),4),fStack_6ac));
          local_6a8 = (float)(DAT_180b0c4f0 >> 0x10 & 0xff);
          auVar30 = ZEXT1664(CONCAT124(SUB1612(ZEXT816(0),4),local_6a8));
          iVar5 = *(int *)(pbVar16 + -2);
          if ((((iVar5 != -1) && (sVar4 = thunk_FUN_180624430(), sVar4 < 1)) &&
              (sVar4 = thunk_FUN_180624430(auVar28._0_8_), sVar4 < 1)) &&
             (sVar4 = thunk_FUN_180624430(auVar30._0_8_), sVar4 < 1)) {
            cVar1 = FUN_1804513c0(lVar12,1,2);
            if (cVar1 == '\0') {
              local_8c7 = '\0';
            }
            else {
              lVar9 = FUN_18017ea70();
              *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
              local_8f8 = auVar34._0_4_;
              local_900 = (undefined **)&local_6b0;
              local_908 = (undefined **)CONCAT44(local_908._4_4_,2);
              FUN_180244990(&local_8c8,lVar12,pauVar21,iVar5);
              lVar9 = FUN_18017ea70();
              if (*(int *)(lVar9 + 4) != 0) {
                *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
              }
            }
          }
          if (lVar18 != DAT_180bbf098) {
            *(ulonglong *)(lVar18 + 0x28) = CONCAT44(fStack_6ac,local_6b0);
            *(float *)(lVar18 + 0x30) = local_6a8;
          }
        }
        pauVar15 = (undefined1 (*) [16])(pauVar15[1] + 8);
        pbVar16 = pbVar16 + 0x18;
      }
      else {
LAB_1802e0f9e:
        FUN_18063aed0(pauVar15,pbVar16 + 0x12,(longlong)DAT_180cc9af8 - (longlong)(pbVar16 + 0x12));
        DAT_180cc9af8 = (undefined1 (*) [16])(DAT_180cc9af8[-2] + 8);
      }
      auVar32 = auVar34._0_16_;
    } while (pauVar15 != DAT_180cc9af8);
    param_2 = local_848;
  }
  if (((DAT_180cc9b5a == '\0') && (DAT_180b0c290 != '\0')) &&
     ((DAT_180b0c2fc == 4 && ((pauVar21 != (undefined1 (*) [16])0x0 && (DAT_180c631f8 != 0)))))) {
    lStack_8a8 = lStack_780;
    if ((lStack_780 != 0) &&
       ((((lStack_8a0 = lStack_778, lStack_778 != 0 && (lStack_898 = lStack_770, lStack_770 != 0))
         && (lVar10 != 0)) &&
        (((lStack_888 != 0 && (local_880 != 0)) && (DAT_180c6e900 <= local_6a0)))))) {
      DAT_180c6e900 = local_6a0 + 1000;
      auVar34 = ZEXT1664(auVar32);
      DAT_180cc9b5a =
           FUN_1802cc660(&local_8b0,"particles/embedded/fade.vpcf","death_original_warmup");
      auVar32 = auVar34._0_16_;
      pauVar21 = local_8b0;
    }
  }
  lVar10 = lStack_888;
  if (*param_2 != param_2[1]) {
    auVar34 = ZEXT1664(auVar32);
    AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
    local_840 = (undefined4)_DAT_180bb8890;
    uStack_83c = (undefined4)((ulonglong)_DAT_180bb8890 >> 0x20);
    uStack_838 = (undefined4)uRam0000000180bb8898;
    uStack_834 = (undefined4)((ulonglong)uRam0000000180bb8898 >> 0x20);
    uStack_830 = uRam0000000180bb88a0;
    uStack_828 = (undefined4)uRam0000000180bb88a8;
    uStack_824 = (undefined4)((ulonglong)uRam0000000180bb88a8 >> 0x20);
    auVar34 = ZEXT1664(auVar34._0_16_);
    cVar1 = cRam0000000180bb88b8;
    ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
    if (((cVar1 == '\0') || (pauVar21 == (undefined1 (*) [16])0x0)) ||
       (((DAT_180c631f8 == 0 || (((lStack_8a8 == 0 || (lStack_8a0 == 0)) || (lStack_898 == 0)))) ||
        ((local_890 == 0 || (lVar10 == 0)))))) {
      pcVar19 = (char *)param_2[1];
      for (pcVar20 = (char *)*param_2; pcVar20 != pcVar19; pcVar20 = pcVar20 + 0x48) {
        if (*pcVar20 == '\x02') {
          local_768 = *(undefined8 *)pcVar20;
          uStack_760 = *(undefined8 *)(pcVar20 + 8);
          uStack_758 = *(undefined8 *)(pcVar20 + 0x10);
          uStack_750 = *(undefined8 *)(pcVar20 + 0x18);
          local_748 = *(undefined1 (*) [32])(pcVar20 + 0x20);
          local_728 = *(undefined8 *)(pcVar20 + 0x40);
          FUN_1802e23f0(&local_858,&local_768);
        }
      }
      AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
      cVar1 = cRam0000000180bb88b8;
      ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
      if (cVar1 != '\0') {
        FUN_1802cc7a0("shot_particles");
      }
    }
    else {
      pcVar19 = (char *)*param_2;
      pcVar20 = (char *)param_2[1];
      local_8b8 = pcVar20;
      if (pcVar19 != pcVar20) {
        auVar28 = ZEXT464(0x447a0000);
        auVar31 = ZEXT464(0x5f000000);
        do {
          lVar12 = local_890;
          if (*pcVar19 == '\x02') {
            if (DAT_180b0c290 != '\0') {
              uVar13 = *(ulonglong *)(pcVar19 + 0x38);
              if (uVar13 != 0) {
                if (local_6a0 < uVar13) {
                  if (local_6a0 < *(ulonglong *)(pcVar19 + 0x40)) {
                    local_870 = ZEXT816(0x180cc9b08);
                    iVar5 = FUN_1805f68d0(&DAT_180cc9b08);
                    if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_1805f6d44(5);
                    }
                    if (DAT_180cc9b54 == 0x7fffffff) {
                      DAT_180cc9b54 = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
                      FUN_1805f6d44(6);
                    }
                    local_870[8] = 1;
                    local_7f8 = *(undefined8 *)pcVar19;
                    uStack_7f0 = *(undefined8 *)(pcVar19 + 8);
                    uStack_7e8 = *(undefined8 *)(pcVar19 + 0x10);
                    uStack_7e0 = *(undefined8 *)(pcVar19 + 0x18);
                    local_7d8 = *(undefined1 (*) [32])(pcVar19 + 0x20);
                    local_7b8 = *(undefined8 *)(pcVar19 + 0x40);
                    auVar31 = ZEXT1664(auVar31._0_16_);
                    auVar28 = ZEXT1664(auVar28._0_16_);
                    auVar34 = ZEXT1664(auVar34._0_16_);
                    FUN_1802e0940(&DAT_180cc99c0,&local_7f8);
                    FUN_1805f68fc(&DAT_180cc9b08);
                  }
                  else {
                    pfVar8 = (float *)FUN_1803d4150(uVar13,*(undefined4 *)(pcVar19 + 0x30));
                    if (pfVar8 != (float *)0x0) {
                      if (((pauVar21 == (undefined1 (*) [16])0x0) || (DAT_180c631f8 == 0)) ||
                         ((lStack_8a8 == 0 ||
                          ((((lStack_8a0 == 0 || (lStack_898 == 0)) || (lVar12 == 0)) ||
                           ((lVar10 == 0 || (local_880 == 0)))))))) {
                        local_768 = *(undefined8 *)pcVar19;
                        uStack_760 = *(undefined8 *)(pcVar19 + 8);
                        uStack_758 = *(undefined8 *)(pcVar19 + 0x10);
                        uStack_750 = *(undefined8 *)(pcVar19 + 0x18);
                        local_748 = *(undefined1 (*) [32])(pcVar19 + 0x20);
                        local_728 = *(undefined8 *)(pcVar19 + 0x40);
                        auVar31 = ZEXT1664(auVar31._0_16_);
                        auVar28 = ZEXT1664(auVar28._0_16_);
                        auVar34 = ZEXT1664(auVar34._0_16_);
                        FUN_1802e23f0(&local_858,&local_768);
                      }
                      else {
                        local_840 = *(undefined4 *)(pcVar19 + 0x30);
                        uStack_83c = (undefined4)*(undefined8 *)(pcVar19 + 4);
                        uStack_838 = (undefined4)((ulonglong)*(undefined8 *)(pcVar19 + 4) >> 0x20);
                        uStack_834 = *(undefined4 *)(pcVar19 + 0xc);
                        uStack_830 = *(undefined8 *)(pcVar19 + 0x1c);
                        uStack_828 = *(undefined4 *)(pcVar19 + 0x24);
                        uStack_820 = (undefined4)*(undefined8 *)(pcVar19 + 0x38);
                        uStack_81c = (undefined4)
                                     ((ulonglong)*(undefined8 *)(pcVar19 + 0x38) >> 0x20);
                        cVar1 = FUN_1802cb800(&local_840);
                        if (cVar1 == '\0') {
                          local_7f8 = *(undefined8 *)pcVar19;
                          uStack_7f0 = *(undefined8 *)(pcVar19 + 8);
                          uStack_7e8 = *(undefined8 *)(pcVar19 + 0x10);
                          uStack_7e0 = *(undefined8 *)(pcVar19 + 0x18);
                          local_7d8 = *(undefined1 (*) [32])(pcVar19 + 0x20);
                          local_7b8 = *(undefined8 *)(pcVar19 + 0x40);
                          auVar31 = ZEXT1664(auVar31._0_16_);
                          auVar28 = ZEXT1664(auVar28._0_16_);
                          auVar34 = ZEXT1664(auVar34._0_16_);
                          FUN_1802e23f0(&local_858,&local_7f8);
                        }
                        else {
                          if (DAT_180cc9b5a == '\0') {
                            cVar1 = FUN_1802cc660(&local_8b0,"particles/embedded/fade.vpcf",
                                                  "death_original");
                            if (cVar1 == '\0') {
                              local_7f8 = *(undefined8 *)pcVar19;
                              uStack_7f0 = *(undefined8 *)(pcVar19 + 8);
                              uStack_7e8 = *(undefined8 *)(pcVar19 + 0x10);
                              uStack_7e0 = *(undefined8 *)(pcVar19 + 0x18);
                              local_7d8 = *(undefined1 (*) [32])(pcVar19 + 0x20);
                              local_7b8 = *(undefined8 *)(pcVar19 + 0x40);
                              auVar31 = ZEXT1664(auVar31._0_16_);
                              auVar28 = ZEXT1664(auVar28._0_16_);
                              auVar34 = ZEXT1664(auVar34._0_16_);
                              FUN_1802e23f0(&local_858,&local_7f8);
                              pauVar21 = local_8b0;
                              goto LAB_1802e1bd3;
                            }
                            DAT_180cc9b5a = '\x01';
                            pauVar21 = local_8b0;
                            lVar12 = local_890;
                            lVar10 = lStack_888;
                          }
                          local_6c8[0] = 0xffffffff;
                          cVar1 = FUN_1804513c0(lStack_898,1,2);
                          if (cVar1 == '\0') {
                            local_7a0 = '\0';
                          }
                          else {
                            lVar9 = FUN_18017ea70();
                            *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
                            local_908 = (undefined **)0x1807d4b28;
                            FUN_1802448c0(local_7a8,lStack_898,pauVar21,local_6c8);
                            lVar9 = FUN_18017ea70();
                            uVar14 = local_6c8[0];
                            if (*(int *)(lVar9 + 4) != 0) {
                              *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
                            }
                            if (local_7a0 != '\0') {
                              if (local_6c8[0] != 0xffffffff) {
                                local_698 = 0x7f7fffff7f7fffff;
                                local_690 = 0x7f7fffff;
                                sVar4 = thunk_FUN_180624430(*(float *)(pcVar19 + 0x1c));
                                if (((sVar4 < 1) &&
                                    (sVar4 = thunk_FUN_180624430(*(undefined4 *)(pcVar19 + 0x20)),
                                    sVar4 < 1)) &&
                                   (sVar4 = thunk_FUN_180624430(*(undefined4 *)(pcVar19 + 0x24)),
                                   sVar4 < 1)) {
                                  cVar1 = FUN_1804513c0(lVar10,1,2);
                                  if (cVar1 == '\0') {
                                    local_8c1 = '\0';
                                  }
                                  else {
                                    lVar9 = FUN_18017ea70();
                                    *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
                                    local_8f8 = auVar34._0_4_;
                                    local_908 = (undefined **)CONCAT44(local_908._4_4_,2);
                                    local_900 = (undefined **)(pcVar19 + 0x1c);
                                    FUN_180244990(&local_8c2,lVar10,pauVar21,uVar14);
                                    lVar10 = FUN_18017ea70();
                                    if (*(int *)(lVar10 + 4) != 0) {
                                      *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
                                    }
                                  }
                                  uVar14 = local_6c8[0];
                                  if (local_8c1 != '\0') {
                                    cVar1 = FUN_1804513c0(local_880,1,2);
                                    if (cVar1 == '\0') {
                                      local_8c5 = '\0';
                                    }
                                    else {
                                      lVar10 = FUN_18017ea70();
                                      *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
                                      local_8e8 = &local_698;
                                      local_908 = (undefined **)
                                                  ((ulonglong)local_908 & 0xffffffff00000000);
                                      local_900 = (undefined **)pfVar8;
                                      FUN_1802e7e40(&local_8c6,local_880,pauVar21,uVar14);
                                      lVar10 = FUN_18017ea70();
                                      if (*(int *)(lVar10 + 4) != 0) {
                                        *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
                                      }
                                    }
                                    uVar14 = local_6c8[0];
                                    cVar1 = local_8c6;
                                    if (local_8c5 == '\0') {
                                      cVar1 = '\0';
                                    }
                                    if (cVar1 != '\0') {
                                      cVar1 = FUN_1804513c0(local_880,1,2);
                                      if (cVar1 == '\0') {
                                        local_8c3 = '\0';
                                      }
                                      else {
                                        lVar10 = FUN_18017ea70();
                                        *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
                                        local_8e8 = &local_698;
                                        local_908 = (undefined **)CONCAT44(local_908._4_4_,1);
                                        local_900 = (undefined **)pfVar8;
                                        FUN_1802e7e40(&local_8c4,local_880,pauVar21,uVar14);
                                        lVar10 = FUN_18017ea70();
                                        if (*(int *)(lVar10 + 4) != 0) {
                                          *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
                                        }
                                      }
                                      cVar1 = local_8c4;
                                      if (local_8c3 == '\0') {
                                        cVar1 = '\0';
                                      }
                                      if (cVar1 != '\0') {
                                        if (0x5f < (ulonglong)
                                                   (((longlong)DAT_180cc9af8 -
                                                    (longlong)DAT_180cc9af0) / 0x18)) {
                                          local_870 = *DAT_180cc9af0;
                                          uVar25 = *(undefined8 *)DAT_180cc9af0[1];
                                          local_860 = uVar25;
                                          if ((((*(undefined1 (**) [16])(*DAT_180cc9af0 + 8) ==
                                                 pauVar21) && (local_870._4_4_ != -1)) &&
                                              (pauVar21 != (undefined1 (*) [16])0x0)) &&
                                             (lVar12 != 0)) {
                                            uVar25 = FUN_180244810(lVar12,pauVar21);
                                          }
                                          FUN_1802e7020(uVar25,local_870 + 4);
                                          FUN_18063aed0(DAT_180cc9af0,DAT_180cc9af0[1] + 8,
                                                        (longlong)DAT_180cc9af8 -
                                                        (longlong)(DAT_180cc9af0[1] + 8));
                                          DAT_180cc9af8 =
                                               (undefined1 (*) [16])(DAT_180cc9af8[-2] + 8);
                                        }
                                        pauVar15 = DAT_180cc9af8;
                                        local_870[0] = *pcVar19;
                                        local_870._4_4_ = local_6c8[0];
                                        local_870._8_8_ = pauVar21;
                                        local_860 = *(longlong *)(pcVar19 + 0x38);
                                        if (DAT_180cc9af8 == DAT_180cc9b00) {
                                          uVar25 = FUN_1802eac60(&DAT_180cc9af0,DAT_180cc9af8,
                                                                 local_870);
                                        }
                                        else {
                                          *(undefined8 *)*DAT_180cc9af8 = local_870._0_8_;
                                          *(undefined1 (**) [16])(*pauVar15 + 8) = pauVar21;
                                          *(longlong *)pauVar15[1] = local_860;
                                          DAT_180cc9af8 =
                                               (undefined1 (*) [16])(DAT_180cc9af8[1] + 8);
                                          uVar25 = local_870._0_8_;
                                        }
                                        plVar7 = (longlong *)
                                                 FUN_1802e8140(uVar25,&local_788,local_6c8);
                                        lVar10 = *plVar7;
                                        *(ulonglong *)(lVar10 + 0x18) =
                                             CONCAT44(uStack_83c,local_840);
                                        *(ulonglong *)(lVar10 + 0x20) =
                                             CONCAT44(uStack_834,uStack_838);
                                        *(undefined8 *)(lVar10 + 0x28) = uStack_830;
                                        *(ulonglong *)(lVar10 + 0x30) =
                                             CONCAT44(uStack_824,uStack_828);
                                        *(ulonglong *)(lVar10 + 0x38) =
                                             CONCAT44(uStack_81c,uStack_820);
                                        auVar31 = ZEXT1664(auVar31._0_16_);
                                        auVar28 = ZEXT1664(auVar28._0_16_);
                                        auVar34 = ZEXT1664(auVar34._0_16_);
                                        FUN_18063ab10(local_688,0,0x600);
                                        local_908 = (undefined **)
                                                    CONCAT44(local_908._4_4_,
                                                             *(undefined4 *)(pcVar19 + 0x30));
                                        FUN_18015ad60(local_688,0x600,0xffffffffffffffff,
                                                      "handle=%u owned=1 game_thread=1");
                                        ppuVar11 = &PTR_180700558;
                                        if (local_688[0]._0_1_ != '\0') {
                                          ppuVar11 = (undefined **)&DAT_1806bcfc0;
                                        }
                                        local_900 = (undefined **)local_688;
                                        local_908 = ppuVar11;
                                        FUN_1800f6900(0);
                                        pcVar20 = local_8b8;
                                        goto LAB_1802e1bd3;
                                      }
                                    }
                                  }
                                }
                                FUN_1802cc7a0("death_original_bind");
                                auVar33 = auVar34._0_16_;
                                auVar29 = auVar28._0_16_;
                                auVar32 = auVar31._0_16_;
                                if (((local_6c8[0] != 0xffffffff) &&
                                    (pauVar21 != (undefined1 (*) [16])0x0)) && (lVar12 != 0)) {
                                  FUN_180244810(lVar12,pauVar21);
                                  auVar33 = auVar34._0_16_;
                                  auVar29 = auVar28._0_16_;
                                  auVar32 = auVar31._0_16_;
                                }
                                local_718 = *(undefined8 *)pcVar19;
                                uStack_710 = *(undefined8 *)(pcVar19 + 8);
                                uStack_708 = *(undefined8 *)(pcVar19 + 0x10);
                                uStack_700 = *(undefined8 *)(pcVar19 + 0x18);
                                local_6f8 = *(undefined1 (*) [32])(pcVar19 + 0x20);
                                local_6d8 = *(undefined8 *)(pcVar19 + 0x40);
                                auVar31 = ZEXT1664(auVar32);
                                auVar28 = ZEXT1664(auVar29);
                                auVar34 = ZEXT1664(auVar33);
                                FUN_1802e23f0(&local_858,&local_718);
                                pcVar20 = local_8b8;
                                goto LAB_1802e1bd3;
                              }
                              pcVar20 = local_8b8;
                            }
                          }
                          FUN_1802cc7a0("death_original_create");
                          local_7f8 = *(undefined8 *)pcVar19;
                          uStack_7f0 = *(undefined8 *)(pcVar19 + 8);
                          uStack_7e8 = *(undefined8 *)(pcVar19 + 0x10);
                          uStack_7e0 = *(undefined8 *)(pcVar19 + 0x18);
                          local_7d8 = *(undefined1 (*) [32])(pcVar19 + 0x20);
                          local_7b8 = *(undefined8 *)(pcVar19 + 0x40);
                          auVar31 = ZEXT1664(auVar31._0_16_);
                          auVar28 = ZEXT1664(auVar28._0_16_);
                          auVar34 = ZEXT1664(auVar34._0_16_);
                          FUN_1802e23f0(&local_858,&local_7f8);
                        }
                      }
                    }
                  }
                }
              }
            }
            goto LAB_1802e1bd3;
          }
          if (0x5f < (ulonglong)(((longlong)DAT_180cc9af8 - (longlong)DAT_180cc9af0) / 0x18)) {
            local_870 = *DAT_180cc9af0;
            local_860 = *(longlong *)DAT_180cc9af0[1];
            if ((*(undefined1 (**) [16])(*DAT_180cc9af0 + 8) == pauVar21) &&
               (((local_870._4_4_ == -1 || (pauVar21 == (undefined1 (*) [16])0x0)) ||
                ((local_890 == 0 || (cVar1 = FUN_180244810(local_890,pauVar21), cVar1 == '\0'))))))
            {
              FUN_1802cc7a0("particle_capacity_destroy");
            }
            uVar25 = FUN_18063aed0(DAT_180cc9af0,DAT_180cc9af0[1] + 8,
                                   (longlong)DAT_180cc9af8 - (longlong)(DAT_180cc9af0[1] + 8));
            DAT_180cc9af8 = (undefined1 (*) [16])(DAT_180cc9af8[-2] + 8);
            FUN_1802e7020(uVar25,local_870 + 4);
          }
          cVar1 = *pcVar19;
          pcVar22 = "particles/impact_fx/impact_ricochet_sparks.vpcf";
          if (cVar1 == '\x01') {
            pcVar22 = "particles/weapons/cs_weapon_fx/weapon_tracers_rifle.vpcf";
          }
          pcVar23 = "spark";
          if (cVar1 == '\x01') {
            pcVar23 = "tracer";
          }
          uVar14 = (cVar1 != '\x01') + 1;
          cVar2 = DAT_180cc9b58;
          if (cVar1 == '\x01') {
            cVar2 = DAT_180cc9b59;
          }
          puVar17 = &DAT_180cc9b59;
          if (cVar1 != '\x01') {
            puVar17 = &DAT_180cc9b58;
          }
          if (cVar2 == '\0') {
            uVar6 = DAT_180bb8aa8;
            do {
              LOCK();
              bVar24 = uVar6 == DAT_180bb8aa8;
              if (bVar24) {
                DAT_180bb8aa8 = uVar6 | uVar14;
              }
              else {
                uVar6 = DAT_180bb8aa8;
              }
              UNLOCK();
            } while (!bVar24);
            if ((uVar14 & uVar6) == 0) {
              FUN_18063ab10(local_688,0,0x600);
              local_908 = (undefined **)pcVar23;
              local_900 = (undefined **)pcVar22;
              FUN_18015ad60(local_688,0x600,0xffffffffffffffff,"type=%s route=game_vpk path=%s");
              ppuVar11 = &PTR_180700558;
              if (local_688[0]._0_1_ != '\0') {
                ppuVar11 = (undefined **)&DAT_1806bcfc0;
              }
              local_900 = (undefined **)local_688;
              local_908 = ppuVar11;
              FUN_1800f6900(1);
            }
            pcVar20 = "impact_spark_resource";
            if (cVar1 == '\x01') {
              pcVar20 = "bullet_tracer_resource";
            }
            cVar2 = FUN_1802cc660(&local_8b0,pcVar22,pcVar20);
            pcVar20 = local_8b8;
            pauVar21 = local_8b0;
            if (cVar2 == '\0') goto LAB_1802e1bd3;
            *puVar17 = 1;
            uVar6 = DAT_180bb8aac;
            do {
              LOCK();
              bVar24 = uVar6 == DAT_180bb8aac;
              if (bVar24) {
                DAT_180bb8aac = uVar6 | uVar14;
              }
              else {
                uVar6 = DAT_180bb8aac;
              }
              UNLOCK();
            } while (!bVar24);
            if ((uVar14 & uVar6) == 0) {
              FUN_18063ab10(local_688,0,0x600);
              local_908 = (undefined **)pcVar23;
              local_900 = (undefined **)pcVar22;
              FUN_18015ad60(local_688,0x600,0xffffffffffffffff,"type=%s route=game_vpk path=%s");
              ppuVar11 = &PTR_180700558;
              if (local_688[0]._0_1_ != '\0') {
                ppuVar11 = (undefined **)&DAT_1806bcfc0;
              }
              local_900 = (undefined **)local_688;
              local_908 = ppuVar11;
              FUN_1800f6900(1);
              pauVar21 = local_8b0;
            }
          }
          local_6b8[0] = 0xffffffff;
          uVar6 = DAT_180bb8ab0;
          do {
            LOCK();
            bVar24 = uVar6 == DAT_180bb8ab0;
            if (bVar24) {
              DAT_180bb8ab0 = uVar6 | uVar14;
            }
            else {
              uVar6 = DAT_180bb8ab0;
            }
            UNLOCK();
          } while (!bVar24);
          if ((uVar14 & uVar6) == 0) {
            FUN_18063ab10(local_688,0,0x600);
            local_908 = (undefined **)pcVar23;
            local_900 = (undefined **)pcVar22;
            FUN_18015ad60(local_688,0x600,0xffffffffffffffff,"type=%s path=%s");
            ppuVar11 = &PTR_180700558;
            if (local_688[0]._0_1_ != '\0') {
              ppuVar11 = (undefined **)&DAT_1806bcfc0;
            }
            local_900 = (undefined **)local_688;
            local_908 = ppuVar11;
            FUN_1800f6900(0);
          }
          cVar2 = FUN_1804513c0(lStack_898,1,2);
          if (cVar2 == '\0') {
            local_790 = '\0';
LAB_1802e1ba2:
            pcVar20 = "impact_spark_create";
            if (cVar1 == '\x01') {
              pcVar20 = "bullet_tracer_create";
            }
LAB_1802e1bb8:
            FUN_1802cc7a0(pcVar20);
            pcVar20 = local_8b8;
          }
          else {
            lVar10 = FUN_18017ea70();
            *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
            local_908 = (undefined **)pcVar22;
            FUN_1802448c0(local_798,lStack_898,pauVar21,local_6b8);
            lVar10 = FUN_18017ea70();
            if (*(int *)(lVar10 + 4) != 0) {
              *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
            }
            if ((local_790 == '\0') || (local_6b8[0] == 0xffffffff)) goto LAB_1802e1ba2;
            uVar6 = DAT_180bb8ab4;
            do {
              LOCK();
              bVar24 = uVar6 == DAT_180bb8ab4;
              if (bVar24) {
                DAT_180bb8ab4 = uVar6 | uVar14;
              }
              else {
                uVar6 = DAT_180bb8ab4;
              }
              UNLOCK();
            } while (!bVar24);
            if ((uVar14 & uVar6) == 0) {
              FUN_18063ab10(local_688,0,0x600);
              local_900 = (undefined **)CONCAT44(local_900._4_4_,local_6b8[0]);
              local_908 = (undefined **)pcVar23;
              FUN_18015ad60(local_688,0x600,0xffffffffffffffff,"type=%s index=%u");
              ppuVar11 = &PTR_180700558;
              if (local_688[0]._0_1_ != '\0') {
                ppuVar11 = (undefined **)&DAT_1806bcfc0;
              }
              local_900 = (undefined **)local_688;
              local_908 = ppuVar11;
              FUN_1800f6900(0);
            }
            uVar14 = local_6b8[0];
            if (cVar1 == '\x01') {
              local_6b0 = *(float *)(pcVar19 + 0x28);
              fStack_6ac = auVar34._0_4_;
              local_6a8 = fStack_6ac;
              if (((local_6b8[0] == 0xffffffff) ||
                  (sVar4 = thunk_FUN_180624430(*(float *)(pcVar19 + 4)), 0 < sVar4)) ||
                 (sVar4 = thunk_FUN_180624430(*(undefined4 *)(pcVar19 + 8)), 0 < sVar4)) {
                lVar10 = lStack_888;
LAB_1802e1e72:
                cVar2 = '\0';
              }
              else {
                sVar4 = thunk_FUN_180624430(*(undefined4 *)(pcVar19 + 0xc));
                lVar10 = lStack_888;
                if (0 < sVar4) goto LAB_1802e1e72;
                cVar2 = FUN_1804513c0(lStack_888,1,2);
                if (cVar2 == '\0') {
                  local_8bf = '\0';
                }
                else {
                  lVar12 = FUN_18017ea70();
                  *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
                  local_8f8 = auVar34._0_4_;
                  local_908 = (undefined **)((ulonglong)local_908 & 0xffffffff00000000);
                  local_900 = (undefined **)(pcVar19 + 4);
                  FUN_180244990(&local_8c0,lVar10,pauVar21,uVar14);
                  lVar12 = FUN_18017ea70();
                  if (*(int *)(lVar12 + 4) != 0) {
                    *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
                  }
                }
                uVar14 = local_6b8[0];
                if (local_8bf == '\0') goto LAB_1802e1e72;
                if (local_6b8[0] == 0xffffffff) goto LAB_1802e1e72;
                sVar4 = thunk_FUN_180624430(*(float *)(pcVar19 + 0x10));
                if (0 < sVar4) goto LAB_1802e1e72;
                sVar4 = thunk_FUN_180624430(*(undefined4 *)(pcVar19 + 0x14));
                if (0 < sVar4) goto LAB_1802e1e72;
                sVar4 = thunk_FUN_180624430(*(undefined4 *)(pcVar19 + 0x18));
                if (0 < sVar4) goto LAB_1802e1e72;
                cVar2 = FUN_1804513c0(lVar10,1,2);
                if (cVar2 == '\0') {
                  local_8bd = '\0';
                }
                else {
                  lVar12 = FUN_18017ea70();
                  *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
                  local_8f8 = auVar34._0_4_;
                  local_908 = (undefined **)CONCAT44(local_908._4_4_,1);
                  local_900 = (undefined **)(pcVar19 + 0x10);
                  FUN_180244990(&local_8be,lVar10,pauVar21,uVar14);
                  lVar12 = FUN_18017ea70();
                  if (*(int *)(lVar12 + 4) != 0) {
                    *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
                  }
                }
                if (local_8bd == '\0') goto LAB_1802e1e72;
                cVar2 = '\x01';
              }
              uVar14 = local_6b8[0];
              if (((local_6b8[0] != 0xffffffff) &&
                  (sVar4 = thunk_FUN_180624430(*(float *)(pcVar19 + 0x1c)), sVar4 < 1)) &&
                 ((sVar4 = thunk_FUN_180624430(*(undefined4 *)(pcVar19 + 0x20)), sVar4 < 1 &&
                  (sVar4 = thunk_FUN_180624430(*(undefined4 *)(pcVar19 + 0x24)), sVar4 < 1)))) {
                cVar3 = FUN_1804513c0(lVar10,1,2);
                if (cVar3 == '\0') {
                  local_877 = 0;
                }
                else {
                  lVar12 = FUN_18017ea70();
                  *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
                  local_8f8 = auVar34._0_4_;
                  local_908 = (undefined **)CONCAT44(local_908._4_4_,2);
                  local_900 = (undefined **)(pcVar19 + 0x1c);
                  FUN_180244990(&local_878,lVar10,pauVar21,uVar14);
                  lVar12 = FUN_18017ea70();
                  if (*(int *)(lVar12 + 4) != 0) {
                    *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
                  }
                }
              }
              uVar14 = local_6b8[0];
              if (((local_6b8[0] != 0xffffffff) &&
                  (sVar4 = thunk_FUN_180624430(local_6b0), sVar4 < 1)) &&
                 ((sVar4 = thunk_FUN_180624430(fStack_6ac), sVar4 < 1 &&
                  (sVar4 = thunk_FUN_180624430(local_6a8), sVar4 < 1)))) {
                cVar3 = FUN_1804513c0(lVar10,1,2);
                if (cVar3 != '\0') {
                  lVar12 = FUN_18017ea70();
                  *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
                  local_8f8 = auVar34._0_4_;
                  local_900 = (undefined **)&local_6b0;
                  local_908 = (undefined **)CONCAT44(local_908._4_4_,3);
                  FUN_180244990(&local_876,lVar10,pauVar21,uVar14);
                  goto LAB_1802e20e5;
                }
                local_875 = 0;
              }
            }
            else {
              if (((local_6b8[0] == 0xffffffff) ||
                  (sVar4 = thunk_FUN_180624430(*(float *)(pcVar19 + 0x10)), 0 < sVar4)) ||
                 (sVar4 = thunk_FUN_180624430(*(undefined4 *)(pcVar19 + 0x14)), 0 < sVar4)) {
LAB_1802e2058:
                cVar2 = '\0';
                lVar10 = lStack_888;
              }
              else {
                sVar4 = thunk_FUN_180624430(*(undefined4 *)(pcVar19 + 0x18));
                lVar10 = lStack_888;
                if (0 < sVar4) goto LAB_1802e2058;
                cVar2 = FUN_1804513c0(lStack_888,1,2);
                if (cVar2 == '\0') {
                  local_8c7 = '\0';
                  cVar2 = local_8c7;
                }
                else {
                  lVar12 = FUN_18017ea70();
                  *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
                  local_8f8 = auVar34._0_4_;
                  local_908 = (undefined **)((ulonglong)local_908 & 0xffffffff00000000);
                  local_900 = (undefined **)(pcVar19 + 0x10);
                  FUN_180244990(&local_8c8,lVar10,pauVar21,uVar14);
                  lVar12 = FUN_18017ea70();
                  if (*(int *)(lVar12 + 4) != 0) {
                    *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
                  }
                  cVar2 = local_8c7;
                }
              }
              uVar14 = local_6b8[0];
              if (((local_6b8[0] != 0xffffffff) &&
                  (sVar4 = thunk_FUN_180624430(*(float *)(pcVar19 + 0x1c)), sVar4 < 1)) &&
                 ((sVar4 = thunk_FUN_180624430(*(undefined4 *)(pcVar19 + 0x20)), sVar4 < 1 &&
                  (sVar4 = thunk_FUN_180624430(*(undefined4 *)(pcVar19 + 0x24)), sVar4 < 1)))) {
                cVar3 = FUN_1804513c0(lVar10,1,2);
                if (cVar3 == '\0') {
                  local_873 = 0;
                }
                else {
                  lVar12 = FUN_18017ea70();
                  *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
                  local_8f8 = auVar34._0_4_;
                  local_908 = (undefined **)CONCAT44(local_908._4_4_,1);
                  local_900 = (undefined **)(pcVar19 + 0x1c);
                  FUN_180244990(&local_874,lVar10,pauVar21,uVar14);
LAB_1802e20e5:
                  lVar10 = FUN_18017ea70();
                  if (*(int *)(lVar10 + 4) != 0) {
                    *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
                  }
                }
              }
            }
            pauVar15 = DAT_180cc9af8;
            if (cVar2 == '\0') {
              pcVar20 = "impact_spark_control_points";
              if (cVar1 == '\x01') {
                pcVar20 = "bullet_tracer_control_points";
              }
              FUN_1802cc7a0(pcVar20);
              if (((local_6b8[0] != 0xffffffff) && (pauVar21 != (undefined1 (*) [16])0x0)) &&
                 (local_890 != 0)) {
                cVar1 = FUN_180244810(local_890,pauVar21);
                pcVar20 = local_8b8;
                if (cVar1 != '\0') goto LAB_1802e1bd3;
              }
              pcVar20 = "shot_particle_cleanup";
              goto LAB_1802e1bb8;
            }
            local_870[0] = *pcVar19;
            local_870._4_4_ = local_6b8[0];
            local_870._8_8_ = pauVar21;
            auVar32 = vroundss_avx(ZEXT816(0),
                                   ZEXT416((uint)(auVar28._0_4_ * *(float *)(pcVar19 + 0x28))),2);
            fVar26 = auVar32._0_4_;
            lVar10 = 0;
            fVar27 = auVar31._0_4_;
            if ((fVar27 <= fVar26) && (fVar26 = fVar26 - fVar27, fVar26 < fVar27)) {
              lVar10 = -0x8000000000000000;
            }
            local_860 = (longlong)fVar26 + lVar10 + local_6a0 + 0xfa;
            if (DAT_180cc9af8 == DAT_180cc9b00) {
              FUN_1802eac60(&DAT_180cc9af0,DAT_180cc9af8,local_870);
            }
            else {
              *(undefined8 *)*DAT_180cc9af8 = local_870._0_8_;
              *(undefined1 (**) [16])(*pauVar15 + 8) = pauVar21;
              *(longlong *)pauVar15[1] = local_860;
              DAT_180cc9af8 = (undefined1 (*) [16])(DAT_180cc9af8[1] + 8);
            }
            LOCK();
            iVar5 = DAT_180bb8aa4 + 1;
            UNLOCK();
            uVar14 = DAT_180bb8aa4 + 1;
            DAT_180bb8aa4 = iVar5;
            if (uVar14 == 1) {
LAB_1802e2207:
              FUN_18063ab10(local_688,0,0x600);
              local_8e0 = ((longlong)DAT_180cc9af8 - (longlong)DAT_180cc9af0) / 0x18;
              local_900 = (undefined **)0x1807d4be8;
              if (cVar1 == '\x01') {
                local_900 = (undefined **)0x1807d4bf0;
              }
              local_8e8 = (undefined8 *)CONCAT44(local_8e8._4_4_,DAT_180cc9ba8);
              local_8f0 = *(undefined4 *)(pcVar19 + 0x2c);
              local_8f8 = local_6b8[0];
              local_908 = (undefined **)CONCAT44(local_908._4_4_,uVar14);
              FUN_18015ad60(local_688,0x600,0xffffffffffffffff,
                            "count=%u type=%s index=%u source_thread=%u frame_thread=%u active=%zu")
              ;
              ppuVar11 = &PTR_180700558;
              if (local_688[0]._0_1_ != '\0') {
                ppuVar11 = (undefined **)&DAT_1806bcfc0;
              }
              local_900 = (undefined **)local_688;
              local_908 = ppuVar11;
              FUN_1800f6900(0);
              pcVar20 = local_8b8;
            }
            else {
              pcVar20 = local_8b8;
              if ((uVar14 & 0x3f) == 0) goto LAB_1802e2207;
            }
          }
LAB_1802e1bd3:
          pcVar19 = pcVar19 + 0x48;
          if (pcVar19 == pcVar20) goto LAB_1802e2371;
          lVar10 = lStack_888;
        } while( true );
      }
    }
  }
LAB_1802e2375:
  FUN_1801ac2f0(param_2);
LAB_1802e2371:
  param_2 = local_848;
  goto LAB_1802e2375;
}



