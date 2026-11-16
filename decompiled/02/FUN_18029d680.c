// FUN_18029d680 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18029d680 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18029d680(undefined8 param_1,undefined8 param_2,char param_3)

{
  undefined8 *puVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 auVar5 [12];
  byte bVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  ULONGLONG UVar12;
  longlong *plVar13;
  undefined4 *puVar14;
  int *piVar15;
  float *pfVar16;
  longlong *plVar17;
  int *piVar18;
  float *pfVar19;
  float *pfVar20;
  longlong lVar21;
  uint uVar22;
  ulonglong uVar23;
  undefined8 *puVar24;
  float *pfVar25;
  longlong lVar26;
  float fVar27;
  float fVar28;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar29;
  float fVar30;
  undefined1 in_ZMM6 [64];
  undefined1 auVar31 [64];
  float fVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [64];
  undefined8 uVar35;
  undefined1 in_ZMM8 [64];
  undefined1 auVar36 [64];
  undefined1 auVar37 [64];
  float fVar38;
  float fVar39;
  float fVar40;
  undefined4 uVar41;
  float fVar42;
  undefined1 auStackY_a38 [32];
  float local_9b4;
  byte local_9b0;
  byte local_9af;
  int local_9ac;
  int local_9a8 [2];
  undefined8 local_9a0;
  undefined8 local_998;
  float local_990 [4];
  undefined8 local_980;
  int local_978;
  int local_974;
  float local_970;
  float local_96c;
  undefined *local_968;
  longlong local_960;
  longlong local_958;
  char local_950;
  undefined8 local_948;
  undefined8 uStack_940;
  undefined8 uStack_938;
  undefined8 uStack_930;
  undefined8 local_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  undefined8 uStack_910;
  int local_908 [2];
  undefined1 local_900 [16];
  longlong local_8f0;
  undefined1 local_8e8 [8];
  longlong *plStack_8e0;
  undefined1 local_8d8 [16];
  ULONGLONG local_8c8;
  undefined1 local_8c0 [16];
  char local_8b0;
  undefined1 local_8a8 [16];
  undefined8 local_898;
  undefined8 local_890;
  float local_888;
  int local_884;
  undefined1 local_880 [16];
  undefined8 local_870;
  longlong lStack_868;
  longlong lStack_860;
  undefined8 uStack_858;
  undefined1 local_850 [16];
  undefined1 local_838 [32];
  undefined1 local_818 [32];
  undefined1 local_7f8 [40];
  undefined1 local_7d0;
  undefined4 local_7cc;
  undefined1 local_7c8 [32];
  undefined1 local_7a8 [32];
  undefined1 local_788 [40];
  undefined4 local_760;
  undefined4 local_75c;
  undefined4 local_758;
  undefined4 local_754;
  undefined1 local_740 [32];
  undefined1 local_720 [40];
  undefined4 local_6f8;
  undefined4 local_6f4;
  undefined4 local_6f0;
  undefined4 local_6ec;
  undefined4 local_6e8;
  undefined1 local_6d8 [16];
  longlong local_6c8;
  undefined8 uStack_6c0;
  undefined1 local_6b8 [16];
  undefined8 local_6a8;
  undefined8 uStack_6a0;
  undefined1 local_698 [16];
  undefined8 local_688;
  undefined8 uStack_680;
  undefined1 local_678 [16];
  undefined8 local_668;
  undefined8 uStack_660;
  undefined1 local_658 [16];
  undefined8 local_648;
  undefined8 uStack_640;
  undefined1 local_638 [16];
  undefined8 local_628;
  undefined8 uStack_620;
  undefined1 local_618 [16];
  undefined8 local_608;
  undefined8 uStack_600;
  undefined1 local_5f8 [16];
  undefined8 local_5e8;
  undefined8 uStack_5e0;
  undefined1 local_5d8 [16];
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  undefined1 local_5b8 [16];
  undefined8 local_5a8;
  undefined8 uStack_5a0;
  undefined1 local_598 [16];
  undefined8 local_588;
  undefined8 uStack_580;
  undefined1 local_578 [16];
  undefined8 local_568;
  undefined8 uStack_560;
  undefined1 local_558 [16];
  undefined8 local_548;
  undefined8 uStack_540;
  undefined1 local_538 [16];
  undefined8 local_528;
  undefined8 uStack_520;
  undefined1 local_518 [16];
  undefined8 local_508;
  undefined8 uStack_500;
  undefined1 local_4f8 [16];
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined1 local_4d8 [16];
  undefined4 local_4c8;
  undefined1 local_2f0 [536];
  ulonglong local_d8;
  undefined1 local_58 [16];
  undefined1 local_38 [16];
  
  local_38 = in_ZMM6._0_16_;
  local_58 = in_ZMM8._0_16_;
  local_d8 = DAT_1808d5f00 ^ (ulonglong)auStackY_a38;
  local_980 = param_2;
  FUN_18017bf40(&local_960);
  if (((DAT_180cadd58 != '\0') || (param_3 != '\0')) || (DAT_180cadce0 != '\0')) {
    AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
    local_870 = _DAT_180bb8890;
    lStack_868 = lRam0000000180bb8898;
    lStack_860 = lRam0000000180bb88a0;
    uStack_858 = uRam0000000180bb88a8;
    local_850 = _DAT_180bb88b0;
    ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
    if ((lStack_868 != 0) || (lStack_860 != 0)) {
      lVar21 = lStack_860;
      if (local_850[8] != '\0') {
        lVar21 = lStack_868;
      }
      if (lVar21 != 0) {
        DAT_180cc99a0 = GetTickCount64();
        DAT_180cc99b0 = 2;
        local_8a8 = (undefined1  [16])0x0;
        local_898 = 0;
        FUN_1803d44c0(0,local_8a8,1);
        lVar21 = lStack_860;
        if (local_850[8] != '\0') {
          lVar21 = lStack_868;
        }
        FUN_18029c880(local_880,lVar21);
        local_900 = (undefined1  [16])0x0;
        local_8f0 = 0;
        lVar21 = (longlong)(local_8a8._8_8_ - local_8a8._0_8_) / 6 +
                 ((longlong)(local_8a8._8_8_ - local_8a8._0_8_) >> 0x3f);
        uVar23 = (lVar21 >> 2) - (lVar21 >> 0x3f);
        lVar21 = local_8a8._0_8_;
        lVar26 = local_8a8._8_8_;
        if (uVar23 != 0) {
          if (0x3f80fe03f80fe0 < uVar23) {
                    /* WARNING: Subroutine does not return */
            FUN_1801136f0();
          }
          lVar10 = FUN_18015bca0(uVar23 * 0x408);
          uVar29 = local_900._8_8_;
          lVar21 = lVar10;
          for (lVar26 = local_900._0_8_; lVar26 != uVar29; lVar26 = lVar26 + 0x408) {
            FUN_1802a6a40(lVar21,lVar26);
            lVar21 = lVar21 + 0x408;
          }
          FUN_1802ae050(local_900,lVar10,0,uVar23);
          lVar21 = local_8a8._0_8_;
          lVar26 = local_8a8._8_8_;
        }
        for (; lVar21 != lVar26; lVar21 = lVar21 + 0x18) {
          FUN_1802a3bf0(&DAT_180cc98a0,local_6d8,lVar21,&local_870);
          if (((local_6d8._0_8_ != 0) && (local_6c8 != 0)) &&
             ((0 < (int)uStack_6c0 && (((char)local_6a8 != '\0' && (local_6a8._1_1_ == '\0')))))) {
            if (local_900._8_8_ == local_8f0) {
              FUN_1802add00(local_900,local_900._8_8_,local_6d8);
            }
            else {
              FUN_1802a6a40(local_900._8_8_,local_6d8);
              local_900._8_8_ = local_900._8_8_ + 0x408;
            }
          }
          FUN_18015c010(local_2f0);
          FUN_18015c010(local_698);
        }
        _local_8e8 = (undefined1  [16])0x0;
        plVar11 = (longlong *)FUN_180113860();
        lVar21 = DAT_180b909c0;
        plStack_8e0 = plVar11;
        local_8e8 = (undefined1  [8])DAT_180b909c0;
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
          UNLOCK();
        }
        LOCK();
        UNLOCK();
        bVar6 = (byte)DAT_180b909c8;
        DAT_180b909c8 = (longlong)plVar11;
        local_998 = plVar11;
        if ((bVar6 & 3) == 2) {
          FUN_1805fa36c();
        }
        if (lVar21 != 0) {
          if ((DAT_180cadd58 == '\0') ||
             (((*(char *)(lVar21 + 0x888) == '\0' && (*(char *)(lVar21 + 0xea0) == '\0')) &&
              (*(char *)(lVar21 + 0xfd8) == '\0')))) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if ((DAT_180cae938 == '\0') ||
             (((*(char *)(lVar21 + 0x1a34) == '\0' && (*(char *)(lVar21 + 0x204c) == '\0')) &&
              (*(char *)(lVar21 + 0x2184) == '\0')))) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if ((DAT_180caf518 == '\0') ||
             (((*(char *)(lVar21 + 0x2be0) == '\0' && (*(char *)(lVar21 + 0x31f8) == '\0')) &&
              (*(char *)(lVar21 + 0x3330) == '\0')))) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2 || (bVar3 || bVar4)) {
            local_9b4 = DAT_180c6e4e0;
            if (DAT_180c6e4e0 == 0.0) {
              UVar12 = GetTickCount64();
              if (UVar12 < DAT_180c6e4d8) {
                fVar27 = 0.0;
                local_9b4 = 0.0;
              }
              else {
                local_968 = &DAT_1808f4690;
                iVar8 = FUN_1805f68d0(&DAT_1808f4690);
                if (iVar8 != 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_1805f6d44(5);
                }
                if (DAT_1808f46dc == 0x7fffffff) {
                  DAT_1808f46dc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
                  FUN_1805f6d44(6);
                }
                local_9b4 = DAT_180c6e4e0;
                if ((DAT_180c6e4e0 == 0.0) && (DAT_180c6e4d8 <= UVar12)) {
                  local_9b4 = (float)FUN_1804174b0("C_BaseEntity",0x6d279c31);
                  if (local_9b4 == 0.0) {
                    DAT_180c6e4d8 = UVar12 + 1000;
                  }
                  else {
                    DAT_180c6e4d8 = 0xffffffffffffffff;
                  }
                }
                fVar27 = local_9b4;
                DAT_180c6e4e0 = local_9b4;
                FUN_1805f68fc(&DAT_1808f4690);
              }
              if (fVar27 == 0.0) goto LAB_18029dd95;
            }
            plVar13 = (longlong *)FUN_1803d44c0();
            local_9a0 = (longlong *)plVar13[1];
            plVar13 = (longlong *)*plVar13;
            if (plVar13 != local_9a0) {
              do {
                local_9af = (int)plVar13[1] == 0x75ddc158;
                iVar8 = (int)plVar13[1];
                local_9b0 = iVar8 == 0x7cc9865a;
                if ((iVar8 == 0x75ddc158) || (iVar8 == 0x7cc9865a)) {
                  lVar10 = (longlong)(int)local_9b4;
                  lVar21 = *plVar13;
                  lVar26 = FUN_18017ea70();
                  *(int *)(lVar26 + 4) = *(int *)(lVar26 + 4) + 1;
                  if (lVar10 + lVar21 == 0) {
                    bVar4 = false;
                  }
                  else {
                    local_9a8[0] = 0;
                    cVar7 = FUN_1804514f0(local_9a8,lVar10 + lVar21,4);
                    if (cVar7 == '\0') {
                      bVar4 = false;
                    }
                    else {
                      local_9ac = local_9a8[0];
                      bVar4 = true;
                    }
                  }
                  iVar8 = local_9ac;
                  lVar21 = FUN_18017ea70();
                  if (*(int *)(lVar21 + 4) != 0) {
                    *(int *)(lVar21 + 4) = *(int *)(lVar21 + 4) + -1;
                  }
                  iVar9 = -1;
                  if (bVar4) {
                    iVar9 = iVar8;
                  }
                  lVar21 = FUN_1803d4150(lVar21,iVar9);
                  if (lVar21 != 0) {
                    for (lVar26 = local_900._0_8_; lVar26 != local_900._8_8_;
                        lVar26 = lVar26 + 0x408) {
                      if (*(longlong *)(lVar26 + 0x10) == lVar21) {
                        *(byte *)(lVar26 + 0x35) = *(byte *)(lVar26 + 0x35) | local_9af;
                        *(byte *)(lVar26 + 0x36) = *(byte *)(lVar26 + 0x36) | local_9b0;
                        break;
                      }
                    }
                  }
                }
                plVar13 = plVar13 + 3;
              } while (plVar13 != local_9a0);
              plVar11 = local_998;
              param_2 = local_980;
            }
            FUN_1801abba0(local_8c0);
          }
        }
LAB_18029dd95:
        fVar27 = 0.0;
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          plVar13 = plVar11 + 1;
          lVar21 = *plVar13;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)lVar21 == 1) {
            (**(code **)*plVar11)(plVar11);
            LOCK();
            piVar18 = (int *)((longlong)plVar11 + 0xc);
            iVar8 = *piVar18;
            *piVar18 = *piVar18 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*plVar11 + 8))(plVar11);
            }
          }
        }
        FUN_1802aa790(local_900._0_8_,local_900._8_8_,
                      (longlong)(local_900._8_8_ - local_900._0_8_) / 0x408,local_9b0);
        FUN_18017bf40(&local_968);
        local_9a8[0] = 0;
        local_9ac = 0;
        auVar34 = ZEXT1264(ZEXT812(0)) << 0x20;
        auVar33 = auVar34._0_16_;
        if ((DAT_180cd3db0 & 1) == 0) {
          DAT_180cd3db0 = DAT_180cd3db0 | 1;
          DAT_180cd3dd8 = 0;
          _DAT_180cd3de0 = ZEXT816(0);
          DAT_180cd3df0 = 0;
          DAT_180cd3df8 = 0;
          _DAT_180cd3dc0 = 0;
          DAT_180cd3dc8 = (undefined8 *)0x0;
          DAT_180cd3dd0 = 0;
          if (DAT_180c7df28 == (undefined8 *)0x0) {
            plStack_8e0 = (longlong *)0x15;
            local_8e8 = (undefined1  [8])"tier0.dll:g_pMemAlloc";
            auVar34 = ZEXT1264(ZEXT812(0)) << 0x20;
            DAT_180c7df28 = (undefined8 *)FUN_180451750(local_8e8);
            auVar33 = auVar34._0_16_;
          }
          auVar34 = ZEXT1664(auVar33);
          DAT_180cd3dc8 =
               (undefined8 *)
               (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x28);
          *DAT_180cd3dc8 = DAT_180cd3dc8;
          DAT_180cd3dc8[1] = DAT_180cd3dc8;
          DAT_180cd3dd8 = 0;
          _DAT_180cd3de0 = (undefined1  [16])0x0;
          DAT_180cd3df0 = 7;
          DAT_180cd3df8 = 8;
          uVar41 = 0x3f800000;
          _DAT_180cd3dc0 = CONCAT44(DAT_180cd3dc0_4,0x3f800000);
          FUN_1801406e0(&DAT_180cd3dd8,0x10,DAT_180cd3dc8);
          atexit(FUN_180662cc0);
        }
        else {
          uVar41 = 0x3f800000;
        }
        if ((DAT_180cd3db0 & 2) == 0) {
          DAT_180cd3db0 = DAT_180cd3db0 | 2;
          atexit(FUN_180662c20);
        }
        if ((DAT_180cadce0 == '\0') &&
           (FUN_1802aa2f0(&DAT_180cd3dc0), DAT_180c6e498 != DAT_180c6e4a0)) {
          DAT_180c6e4a0 = DAT_180c6e498;
        }
        local_9a0 = (longlong *)local_900._8_8_;
        if (local_900._0_8_ == local_900._8_8_) {
LAB_18029e95f:
          puVar24 = DAT_180cd3dc8;
          if (0x100 < DAT_180cd3dd0) {
            if (DAT_180cd3dd0 < DAT_180cd3df8 >> 3) {
              FUN_1802ac600(&DAT_180cd3dc0,*DAT_180cd3dc8,DAT_180cd3dc8);
            }
            else {
              *(undefined8 *)DAT_180cd3dc8[1] = 0;
              puVar24 = (undefined8 *)*puVar24;
              while (puVar24 != (undefined8 *)0x0) {
                puVar1 = (undefined8 *)*puVar24;
                FUN_1804547d0(puVar24,0x28);
                puVar24 = puVar1;
              }
              *DAT_180cd3dc8 = DAT_180cd3dc8;
              DAT_180cd3dc8[1] = DAT_180cd3dc8;
              DAT_180cd3dd0 = 0;
              local_9a0 = DAT_180cd3dc8;
              FUN_1800f9880(DAT_180cd3dd8,DAT_180cd3de0,&local_9a0);
            }
          }
          UVar12 = GetTickCount64();
          pfVar25 = DAT_180c6e4a0;
          local_96c = 6.0;
          local_970 = 0.2;
          pfVar19 = &local_970;
          if (0.2 <= DAT_180cadd4c) {
            pfVar19 = &DAT_180cadd4c;
          }
          pfVar16 = &local_96c;
          if (DAT_180cadd4c <= 6.0) {
            pfVar16 = pfVar19;
          }
          fVar27 = *pfVar16 * 1000.0;
          pfVar19 = DAT_180c6e498;
          while ((pfVar19 != DAT_180c6e4a0 &&
                 ((float)(UVar12 - *(longlong *)(pfVar19 + 4)) < fVar27))) {
            pfVar19 = pfVar19 + 6;
          }
          pfVar16 = pfVar19;
          if (pfVar19 != DAT_180c6e4a0) {
            while (pfVar16 = pfVar16 + 6, pfVar16 != pfVar25) {
              if ((float)(UVar12 - *(longlong *)(pfVar16 + 4)) < fVar27) {
                uVar29 = *(undefined8 *)(pfVar16 + 2);
                *(undefined8 *)pfVar19 = *(undefined8 *)pfVar16;
                *(undefined8 *)(pfVar19 + 2) = uVar29;
                *(undefined8 *)(pfVar19 + 4) = *(undefined8 *)(pfVar16 + 4);
                pfVar19 = pfVar19 + 6;
              }
            }
            if (pfVar19 != pfVar25) {
              lVar21 = (longlong)DAT_180c6e4a0 - (longlong)pfVar25;
              FUN_18063aed0(pfVar19,pfVar25,lVar21);
              DAT_180c6e4a0 = (float *)(lVar21 + (longlong)pfVar19);
            }
          }
          pfVar19 = DAT_180c6e498;
          if ((0x100 < (ulonglong)(((longlong)DAT_180c6e4a0 - (longlong)DAT_180c6e498) / 0x18)) &&
             (DAT_180c6e498 != DAT_180c6e4a0 + -0x600)) {
            FUN_18063aed0(DAT_180c6e498,DAT_180c6e4a0 + -0x600,0x1800);
            DAT_180c6e4a0 = pfVar19 + 0x600;
          }
          pfVar19 = DAT_180c6e4a0;
          if (DAT_180c6e498 != DAT_180c6e4a0) {
            local_980 = CONCAT44(local_980._4_4_,0x43480000);
            local_9b4 = 4.0;
            fVar39 = 6.2831855;
            fVar42 = 0.03125;
            fVar38 = 2.0;
            auVar34 = ZEXT464(0x475ead00);
            pfVar25 = DAT_180c6e498;
            do {
              fVar28 = (float)(UVar12 - *(longlong *)(pfVar25 + 4)) / fVar27;
              pfVar16 = &local_9b4;
              if (4.0 <= DAT_180cadd50) {
                pfVar16 = &DAT_180cadd50;
              }
              pfVar20 = (float *)&local_980;
              if (DAT_180cadd50 <= 200.0) {
                pfVar20 = pfVar16;
              }
              fVar40 = (fVar28 * 0.65 + 0.35) * *pfVar20;
              local_8d8._0_3_ = SUB43(DAT_180cadd48,0);
              local_8d8[3] = (char)(int)((float)(DAT_180cadd48 >> 0x18) * (1.0 - fVar28));
              iVar8 = 0;
              do {
                fVar28 = (float)iVar8 * fVar39 * fVar42;
                auVar36 = ZEXT464((uint)fVar28);
                fVar30 = (float)(iVar8 + 1) * fVar39;
                auVar31 = ZEXT464((uint)(fVar30 * fVar42));
                fVar28 = (float)FUN_180637540(fVar28,fVar30);
                local_990[0] = fVar28 * fVar40 + *pfVar25;
                fVar28 = (float)FUN_180638e00(auVar36._0_8_);
                local_990[1] = fVar28 * fVar40 + pfVar25[1];
                local_990[2] = fVar38 + pfVar25[2];
                if (DAT_180b8e2b0 == '\0') {
                  auVar36 = ZEXT1664(auVar34._0_16_);
                  auVar37 = ZEXT1664(auVar34._0_16_);
                  local_998 = (longlong *)CONCAT44(auVar34._0_4_,auVar34._0_4_);
                }
                else {
                  iVar9 = FUN_1805f68d0(&DAT_180b8e260);
                  if (iVar9 != 0) goto LAB_18029f5f4;
                  if (DAT_180b8e2ac == 0x7fffffff) {
                    DAT_180b8e2ac = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
                    FUN_1805f6d44(6);
                  }
                  local_948 = _DAT_180b8e220;
                  uStack_940 = uRam0000000180b8e228;
                  uStack_938 = uRam0000000180b8e230;
                  uStack_930 = uRam0000000180b8e238;
                  local_928 = _DAT_180b8e240;
                  uStack_920 = uRam0000000180b8e248;
                  uStack_918 = uRam0000000180b8e250;
                  uStack_910 = uRam0000000180b8e258;
                  auVar34 = ZEXT1664(auVar34._0_16_);
                  auVar31 = ZEXT1664(auVar31._0_16_);
                  uVar29 = FUN_1805f68fc(&DAT_180b8e260);
                  FUN_180419d90(uVar29,&local_998,local_990,&local_948);
                  auVar37 = ZEXT464(local_998._4_4_);
                  auVar36 = ZEXT464((uint)local_998);
                }
                fVar28 = (float)FUN_180637540(auVar31._0_8_);
                local_8e8._0_4_ = fVar28 * fVar40 + *pfVar25;
                fVar28 = (float)FUN_180638e00(auVar31._0_8_);
                auVar33 = _local_8e8;
                uVar35 = auVar37._0_8_;
                uVar29 = auVar36._0_8_;
                local_8e8._4_4_ = fVar28 * fVar40 + pfVar25[1];
                plStack_8e0._4_4_ = auVar33._12_4_;
                plStack_8e0._0_4_ = fVar38 + pfVar25[2];
                if (DAT_180b8e2b0 == '\0') {
                  fVar30 = auVar34._0_4_;
                  local_9a0 = (longlong *)CONCAT44(fVar30,fVar30);
                  fVar28 = fVar30;
                }
                else {
                  iVar9 = FUN_1805f68d0(&DAT_180b8e260);
                  if (iVar9 != 0) {
LAB_18029f5f4:
                    /* WARNING: Subroutine does not return */
                    FUN_1805f6d44(5);
                  }
                  if (DAT_180b8e2ac == 0x7fffffff) {
                    DAT_180b8e2ac = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
                    FUN_1805f6d44(6);
                  }
                  local_948 = _DAT_180b8e220;
                  uStack_940 = uRam0000000180b8e228;
                  uStack_938 = uRam0000000180b8e230;
                  uStack_930 = uRam0000000180b8e238;
                  local_928 = _DAT_180b8e240;
                  uStack_920 = uRam0000000180b8e248;
                  uStack_918 = uRam0000000180b8e250;
                  uStack_910 = uRam0000000180b8e258;
                  auVar36 = ZEXT1664(auVar36._0_16_);
                  auVar34 = ZEXT1664(auVar34._0_16_);
                  auVar31 = ZEXT1664(auVar37._0_16_);
                  uVar29 = FUN_1805f68fc(&DAT_180b8e260);
                  FUN_180419d90(uVar29,&local_9a0,local_8e8,&local_948);
                  uVar35 = auVar31._0_8_;
                  uVar29 = auVar36._0_8_;
                  fVar28 = (float)((ulonglong)local_9a0 >> 0x20);
                  fVar30 = SUB84(local_9a0,0);
                }
                fVar32 = auVar34._0_4_;
                if (((((float)uVar29 != fVar32) && ((float)uVar35 != fVar32)) && (fVar30 != fVar32))
                   && (fVar28 != fVar32)) {
                  FUN_180433450(param_2,uVar29,uVar35);
                }
                iVar8 = iVar8 + 1;
              } while (iVar8 < 0x20);
              pfVar25 = pfVar25 + 6;
            } while (pfVar25 != pfVar19);
          }
          FUN_18017bf40(&local_9a0);
          lVar21 = ((longlong)local_968 - local_960) / 1000;
          lVar26 = ((longlong)local_9a0 - (longlong)local_968) / 1000;
          uVar23 = lVar26 + lVar21;
          DAT_180c6e4b0 = DAT_180c6e4b0 + 1;
          DAT_180c6e4b8 = DAT_180c6e4b8 + uVar23;
          DAT_180c6e4c0 = DAT_180c6e4c0 + lVar21;
          DAT_180c6e480 = DAT_180c6e480 + lVar26;
          if (DAT_180c6e488 < uVar23) {
            DAT_180c6e488 = uVar23;
          }
          uVar23 = DAT_180cc99a0;
          if (DAT_180cc99a8 <= DAT_180cc99a0) {
            DAT_180cc99a8 = DAT_180cc99a0 + 1000;
            plVar11 = (longlong *)*DAT_180cc98e8;
            plVar13 = DAT_180cc98e8;
            if (plVar11 != DAT_180cc98e8) {
              do {
                lVar21 = DAT_180cc98f8;
                if (uVar23 - plVar11[5] < 0x7d1) {
                  plVar17 = (longlong *)*plVar11;
                }
                else {
                  uVar23 = (((((ulonglong)*(byte *)(plVar11 + 2) ^ 0xcbf29ce484222325) *
                              0x100000001b3 ^ (ulonglong)*(byte *)((longlong)plVar11 + 0x11)) *
                             0x100000001b3 ^ (ulonglong)*(byte *)((longlong)plVar11 + 0x12)) *
                            0x100000001b3 ^ (ulonglong)*(byte *)((longlong)plVar11 + 0x13)) *
                           0x100000001b3 & _DAT_180cc9910;
                  plVar17 = *(longlong **)(DAT_180cc98f8 + uVar23 * 0x10);
                  if (*(longlong **)(DAT_180cc98f8 + 8 + uVar23 * 0x10) == plVar11) {
                    if (plVar17 == plVar11) {
                      *(longlong **)(DAT_180cc98f8 + uVar23 * 0x10) = plVar13;
                      *(longlong **)(lVar21 + 8 + uVar23 * 0x10) = plVar13;
                    }
                    else {
                      *(longlong *)(DAT_180cc98f8 + 8 + uVar23 * 0x10) = plVar11[1];
                    }
                  }
                  else if (plVar17 == plVar11) {
                    *(longlong *)(DAT_180cc98f8 + uVar23 * 0x10) = *plVar11;
                  }
                  plVar17 = (longlong *)*plVar11;
                  DAT_180cc98f0 = DAT_180cc98f0 + -1;
                  *(longlong **)plVar11[1] = plVar17;
                  plVar17[1] = plVar11[1];
                  FUN_1804547d0(plVar11,0x30);
                  uVar23 = DAT_180cc99a0;
                  plVar13 = DAT_180cc98e8;
                }
                plVar11 = plVar17;
              } while (plVar17 != plVar13);
            }
            if ((longlong *)*DAT_180cc9928 != DAT_180cc9928) {
              plVar13 = (longlong *)*DAT_180cc9928;
              plVar11 = DAT_180cc9928;
              do {
                lVar21 = DAT_180cc9938;
                if (uVar23 - plVar13[9] < 0x1389) {
                  plVar17 = (longlong *)*plVar13;
                }
                else {
                  uVar23 = (((((((((ulonglong)*(byte *)(plVar13 + 2) ^ 0xcbf29ce484222325) *
                                  0x100000001b3 ^ (ulonglong)*(byte *)((longlong)plVar13 + 0x11)) *
                                 0x100000001b3 ^ (ulonglong)*(byte *)((longlong)plVar13 + 0x12)) *
                                0x100000001b3 ^ (ulonglong)*(byte *)((longlong)plVar13 + 0x13)) *
                               0x100000001b3 ^ (ulonglong)*(byte *)((longlong)plVar13 + 0x14)) *
                              0x100000001b3 ^ (ulonglong)*(byte *)((longlong)plVar13 + 0x15)) *
                             0x100000001b3 ^ (ulonglong)*(byte *)((longlong)plVar13 + 0x16)) *
                            0x100000001b3 ^ (ulonglong)*(byte *)((longlong)plVar13 + 0x17)) *
                           0x100000001b3 & _DAT_180cc9950;
                  plVar17 = *(longlong **)(DAT_180cc9938 + uVar23 * 0x10);
                  if (*(longlong **)(DAT_180cc9938 + 8 + uVar23 * 0x10) == plVar13) {
                    if (plVar17 == plVar13) {
                      *(longlong **)(DAT_180cc9938 + uVar23 * 0x10) = plVar11;
                      *(longlong **)(lVar21 + 8 + uVar23 * 0x10) = plVar11;
                    }
                    else {
                      *(longlong *)(DAT_180cc9938 + 8 + uVar23 * 0x10) = plVar13[1];
                    }
                  }
                  else if (plVar17 == plVar13) {
                    *(longlong *)(DAT_180cc9938 + uVar23 * 0x10) = *plVar13;
                  }
                  plVar17 = (longlong *)*plVar13;
                  _DAT_180cc9930 = _DAT_180cc9930 + -1;
                  *(longlong **)plVar13[1] = plVar17;
                  plVar17[1] = plVar13[1];
                  FUN_18015c010(plVar13 + 4);
                  FUN_1804547d0(plVar13,0x50);
                  plVar11 = DAT_180cc9928;
                  uVar23 = DAT_180cc99a0;
                }
                plVar13 = plVar17;
              } while (plVar17 != plVar11);
            }
            if ((longlong *)*DAT_180cc9968 != DAT_180cc9968) {
              plVar13 = (longlong *)*DAT_180cc9968;
              plVar11 = DAT_180cc9968;
              do {
                lVar21 = DAT_180cc9978;
                if (uVar23 - plVar13[9] < 0x1389) {
                  plVar17 = (longlong *)*plVar13;
                }
                else {
                  uVar23 = (((((((((ulonglong)*(byte *)(plVar13 + 2) ^ 0xcbf29ce484222325) *
                                  0x100000001b3 ^ (ulonglong)*(byte *)((longlong)plVar13 + 0x11)) *
                                 0x100000001b3 ^ (ulonglong)*(byte *)((longlong)plVar13 + 0x12)) *
                                0x100000001b3 ^ (ulonglong)*(byte *)((longlong)plVar13 + 0x13)) *
                               0x100000001b3 ^ (ulonglong)*(byte *)((longlong)plVar13 + 0x14)) *
                              0x100000001b3 ^ (ulonglong)*(byte *)((longlong)plVar13 + 0x15)) *
                             0x100000001b3 ^ (ulonglong)*(byte *)((longlong)plVar13 + 0x16)) *
                            0x100000001b3 ^ (ulonglong)*(byte *)((longlong)plVar13 + 0x17)) *
                           0x100000001b3 & _DAT_180cc9990;
                  plVar17 = *(longlong **)(DAT_180cc9978 + uVar23 * 0x10);
                  if (*(longlong **)(DAT_180cc9978 + 8 + uVar23 * 0x10) == plVar13) {
                    if (plVar17 == plVar13) {
                      *(longlong **)(DAT_180cc9978 + uVar23 * 0x10) = plVar11;
                      *(longlong **)(lVar21 + 8 + uVar23 * 0x10) = plVar11;
                    }
                    else {
                      *(longlong *)(DAT_180cc9978 + 8 + uVar23 * 0x10) = plVar13[1];
                    }
                  }
                  else if (plVar17 == plVar13) {
                    *(longlong *)(DAT_180cc9978 + uVar23 * 0x10) = *plVar13;
                  }
                  plVar17 = (longlong *)*plVar13;
                  _DAT_180cc9970 = _DAT_180cc9970 + -1;
                  *(longlong **)plVar13[1] = plVar17;
                  plVar17[1] = plVar13[1];
                  FUN_18015c010(plVar13 + 4);
                  FUN_1804547d0(plVar13,0x50);
                  plVar11 = DAT_180cc9968;
                  uVar23 = DAT_180cc99a0;
                }
                plVar13 = plVar17;
              } while (plVar17 != plVar11);
            }
          }
          if (DAT_180c6e490 <= uVar23) {
            DAT_180c6e490 = uVar23 + 5000;
            FUN_18063ab10(local_6d8,0,0x600);
            FUN_18015ad60(local_6d8,0x600,0xffffffffffffffff,
                          "cached_controllers=%zu valid_players=%u enabled_players=%u projected_players=%u visibility_traces=%u visibility_samples=%zu frames=%llu avg_us=%llu max_us=%llu info_avg_us=%llu draw_avg_us=%llu camera_valid=%s"
                         );
            FUN_1800f6900(0);
            DAT_180cc99b4 = 0;
            DAT_180c6e4b0 = 0;
            DAT_180c6e4b8 = 0;
            DAT_180c6e4c0 = 0;
            DAT_180c6e480 = 0;
            DAT_180c6e488 = 0;
          }
          if (local_900._0_8_ != 0) {
            uVar29 = local_900._8_8_;
            if (local_900._0_8_ != local_900._8_8_) {
              lVar21 = local_900._0_8_ + 0x40;
              do {
                FUN_18015c010(lVar21 + 0x3a8);
                FUN_18015c010(lVar21);
                lVar26 = lVar21 + 0x3c8;
                lVar21 = lVar21 + 0x408;
              } while (lVar26 != uVar29);
            }
            lVar21 = local_900._0_8_;
            if ((0xfff < (ulonglong)(((local_8f0 - local_900._0_8_) / 0x408) * 0x408)) &&
               (lVar21 = *(longlong *)(local_900._0_8_ + -8), 0x1f < (local_900._0_8_ - lVar21) - 8U
               )) {
                    /* WARNING: Subroutine does not return */
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            }
            FUN_1804547d0(lVar21);
            local_900 = (undefined1  [16])0x0;
            local_8f0 = 0;
          }
          FUN_1801abba0(local_8a8);
        }
        fVar38 = 0.001;
        fVar39 = 1100.0;
        auVar36 = ZEXT464((uint)(float)local_980);
        puVar24 = (undefined8 *)local_900._0_8_;
        iVar8 = 0;
        iVar9 = 0;
        do {
          fVar27 = (float)((int)fVar27 + 1);
          local_9b4 = fVar27;
          if (DAT_180cadce0 != '\0') {
            if (*(char *)(puVar24 + 6) != '\0') {
              iVar8 = DAT_180c6e4d0;
              if (DAT_180c6e4d0 == 0) {
                UVar12 = GetTickCount64();
                if (DAT_180c6e4c8 <= UVar12) {
                  local_8d8._0_8_ = &DAT_1808f4640;
                  iVar8 = FUN_1805f68d0(&DAT_1808f4640);
                  if (iVar8 != 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_1805f6d44(5);
                  }
                  if (DAT_1808f468c == 0x7fffffff) {
                    DAT_1808f468c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
                    FUN_1805f6d44(6);
                  }
                  if ((DAT_180c6e4d0 == 0) && (DAT_180c6e4c8 <= UVar12)) {
                    DAT_180c6e4d0 = FUN_1804174b0("C_CSPlayerPawn",0xc6fa84fa);
                    if (DAT_180c6e4d0 == 0) {
                      DAT_180c6e4c8 = UVar12 + 1000;
                    }
                    else {
                      DAT_180c6e4c8 = 0xffffffffffffffff;
                    }
                  }
                  iVar8 = DAT_180c6e4d0;
                  FUN_1805f68fc(&DAT_1808f4640);
                  if (iVar8 != 0) goto LAB_18029e061;
                }
                auVar33 = auVar34._0_16_;
              }
              else {
LAB_18029e061:
                lVar21 = puVar24[2];
                lVar26 = FUN_18017ea70();
                *(int *)(lVar26 + 4) = *(int *)(lVar26 + 4) + 1;
                uVar22 = 0;
                if (iVar8 + lVar21 != 0) {
                  local_8d8._0_4_ = auVar34._0_4_;
                  cVar7 = FUN_1804514f0(local_8d8,iVar8 + lVar21,4);
                  if (cVar7 == '\0') {
                    uVar22 = 0;
                  }
                  else {
                    auVar36 = ZEXT464((uint)local_8d8._0_4_);
                    uVar22 = 1;
                  }
                }
                lVar21 = FUN_18017ea70();
                if (*(int *)(lVar21 + 4) != 0) {
                  *(int *)(lVar21 + 4) = *(int *)(lVar21 + 4) + -1;
                }
                auVar33 = vpcmpeqd_avx(ZEXT416(uVar22),ZEXT416(0));
                auVar33 = vblendvps_avx(auVar36._0_16_,auVar34._0_16_,auVar33);
              }
              auVar31 = ZEXT1664(auVar33);
              UVar12 = GetTickCount64();
              local_8e8._0_4_ = auVar31._0_4_;
              plStack_8e0 = (longlong *)0x0;
              FUN_1802aaad0();
              lVar21 = local_958;
              fVar42 = auVar31._0_4_;
              if (((local_950 == '\0') && (fVar38 + *(float *)(local_958 + 0x18) < fVar42)) &&
                 (0x8b < UVar12 - *(longlong *)(local_958 + 0x20))) {
                if ((DAT_180cadd54 != '\0') &&
                   (fVar42 = DAT_180b8e2b8 - *(float *)((longlong)puVar24 + 0x3c4),
                   fVar28 = fVar42 * fVar42 +
                            (DAT_180b8e2b4 - *(float *)(puVar24 + 0x78)) *
                            (DAT_180b8e2b4 - *(float *)(puVar24 + 0x78)) +
                            (DAT_180b8e2bc - *(float *)(puVar24 + 0x79)) *
                            (DAT_180b8e2bc - *(float *)(puVar24 + 0x79)), fVar28 != auVar34._0_4_))
                {
                  if (fVar28 < 0.0) {
                    fVar28 = (float)FUN_18061e150(fVar28);
                  }
                  else {
                    fVar28 = SQRT(fVar28);
                  }
                  fVar42 = auVar31._0_4_;
                  if (fVar39 < fVar28) goto LAB_18029e1ef;
                }
                pfVar19 = DAT_180c6e4a0;
                fVar42 = auVar31._0_4_;
                auVar5 = *(undefined1 (*) [12])(puVar24 + 0x78);
                local_8d8._0_12_ = auVar5;
                auVar33 = local_8d8;
                local_8c8 = UVar12;
                if (DAT_180c6e4a0 == DAT_180c6e4a8) {
                  FUN_1802adb00(*(undefined8 *)*(undefined1 (*) [12])(puVar24 + 0x78),DAT_180c6e4a0,
                                local_8d8);
                  fVar42 = auVar31._0_4_;
                }
                else {
                  local_8d8._0_8_ = auVar5._0_8_;
                  local_8d8._8_8_ = auVar33._8_8_;
                  *(undefined8 *)DAT_180c6e4a0 = local_8d8._0_8_;
                  *(undefined8 *)(pfVar19 + 2) = local_8d8._8_8_;
                  *(ULONGLONG *)(pfVar19 + 4) = UVar12;
                  DAT_180c6e4a0 = DAT_180c6e4a0 + 6;
                  local_8d8 = auVar33;
                }
                *(ULONGLONG *)(lVar21 + 0x20) = UVar12;
              }
LAB_18029e1ef:
              *(float *)(lVar21 + 0x18) = fVar42;
              iVar8 = local_9a8[0];
              iVar9 = local_9ac;
            }
          }
          if (*(char *)((longlong)puVar24 + 0x31) == '\0') {
            uVar23 = (ulonglong)(*(char *)(puVar24 + 6) == '\0');
          }
          else {
            uVar23 = 2;
          }
          lVar21 = uVar23 * 0xbe0;
          if ((param_3 != '\0') && (*(char *)(puVar24 + 6) != '\0')) {
            FUN_1802a3440();
          }
          if ((&DAT_180cadd58)[lVar21] != '\0') {
            local_9a8[0] = iVar8 + 1;
            FUN_1803d30b0();
            if (local_8b0 != '\0') {
              local_9ac = iVar9 + 1;
              local_8d8 = (undefined1  [16])0x0;
              plVar11 = (longlong *)FUN_180113860(&DAT_180b909c8);
              lVar26 = DAT_180b909c0;
              local_8d8._8_8_ = plVar11;
              local_8d8._0_8_ = DAT_180b909c0;
              if (plVar11 == (longlong *)0x0) {
                plVar13 = (longlong *)&DAT_00000008;
              }
              else {
                plVar13 = plVar11 + 1;
                LOCK();
                *(int *)plVar13 = (int)*plVar13 + 1;
                UNLOCK();
              }
              LOCK();
              UNLOCK();
              bVar6 = (byte)DAT_180b909c8;
              DAT_180b909c8 = (longlong)plVar11;
              if ((bVar6 & 3) == 2) {
                FUN_1805fa36c(&DAT_180b909c8);
              }
              if (lVar26 == 0) {
                if (plVar11 != (longlong *)0x0) {
                  LOCK();
                  lVar26 = *plVar13;
                  *(int *)plVar13 = (int)*plVar13 + -1;
                  UNLOCK();
                  if ((int)lVar26 == 1) {
                    (**(code **)*plVar11)(plVar11);
                    LOCK();
                    piVar18 = (int *)((longlong)plVar11 + 0xc);
                    iVar8 = *piVar18;
                    *piVar18 = *piVar18 + -1;
                    UNLOCK();
                    if (iVar8 == 1) {
                      (**(code **)(*plVar11 + 8))(plVar11);
                    }
                  }
                }
                local_6d8 = (undefined1  [16])0x0;
                FUN_18063ab10(&local_6c8,0,0x200);
                uVar29 = 0;
                local_6c8 = 0;
                uStack_6c0 = 0;
                local_6b8 = ZEXT816(0);
                local_6a8 = 0;
                uStack_6a0 = 0;
                local_698 = local_6b8;
                local_688 = 0;
                uStack_680 = 0;
                local_678 = local_6b8;
                local_668 = 0;
                uStack_660 = 0;
                local_658 = local_6b8;
                local_648 = 0;
                uStack_640 = 0;
                local_638 = local_6b8;
                local_628 = 0;
                uStack_620 = 0;
                local_618 = local_6b8;
                local_608 = 0;
                uStack_600 = 0;
                local_5f8 = local_6b8;
                local_5e8 = 0;
                uStack_5e0 = 0;
                local_5d8 = local_6b8;
                local_5c8 = 0;
                uStack_5c0 = 0;
                local_5b8 = local_6b8;
                local_5a8 = 0;
                uStack_5a0 = 0;
                local_598 = local_6b8;
                local_588 = 0;
                uStack_580 = 0;
                local_578 = local_6b8;
                local_568 = 0;
                uStack_560 = 0;
                local_558 = local_6b8;
                local_548 = 0;
                uStack_540 = 0;
                local_538 = local_6b8;
                local_528 = 0;
                uStack_520 = 0;
                local_518 = local_6b8;
                local_508 = 0;
                uStack_500 = 0;
                local_4f8 = local_6b8;
                local_4e8 = 0;
                uStack_4e0 = 0;
                local_4d8 = local_6b8;
                local_4c8 = 0;
                if ((&DAT_180caddc0)[lVar21] != '\0') {
                  uVar29 = FUN_18029f6f0(0,param_2,local_8c0);
                }
                if ((&DAT_180cadf18)[lVar21] != '\0') {
                  FUN_1802a0590(uVar29,param_2,puVar24);
                }
                local_908[0] = *(int *)(lVar21 + 0x180cae934);
                local_990[0] = (float)(uint)(*(char *)(lVar21 + 0x180cae930) != '\0');
                local_990[1] = (float)(uint)(*(char *)(lVar21 + 0x180cae930) == '\0');
                local_990[2] = 2.8026e-45;
                local_974 = 2;
                local_978 = 0;
                piVar18 = &local_978;
                if (-1 < local_908[0]) {
                  piVar18 = local_908;
                }
                piVar15 = &local_974;
                if (local_908[0] < 3) {
                  piVar15 = piVar18;
                }
                iVar8 = *piVar15;
                if (iVar8 < 2) {
                  pfVar19 = local_990 + 2;
                  uVar23 = (ulonglong)(2 - iVar8);
                  do {
                    *pfVar19 = pfVar19[-1];
                    pfVar19 = pfVar19 + -1;
                    uVar23 = uVar23 - 1;
                  } while (uVar23 != 0);
                }
                local_990[iVar8] = 2.8026e-45;
                local_890 = CONCAT44(local_990[1],local_990[0]);
                local_888 = local_990[2];
                piVar18 = (int *)&local_890;
                do {
                  if (*piVar18 == 0) {
                    cVar7 = (&DAT_180cae000)[lVar21];
joined_r0x00018029e873:
                    if (cVar7 != '\0') {
                      FUN_1802a0f10(&DAT_180cc98a0,param_2,local_8c0,puVar24);
                    }
                  }
                  else {
                    if (*piVar18 != 1) {
                      cVar7 = (&DAT_180cae230)[lVar21];
                      goto joined_r0x00018029e873;
                    }
                    if ((((&DAT_180cae460)[lVar21] != '\0') && (puVar24[0x7a] != 0)) &&
                       (puVar24[0x7b] != 0)) {
                      FUN_1802a16b0(&DAT_180cc98a0,param_2,local_8c0,puVar24);
                    }
                  }
                  piVar18 = piVar18 + 1;
                } while (piVar18 != &local_884);
                if (((&DAT_180cae730)[lVar21] != '\0') && (puVar24[10] != 0)) {
                  FUN_1802a1ee0(local_6d8,param_2,local_8c0,puVar24);
                }
                if (((&DAT_180cae7a8)[lVar21] != '\0') && (puVar24[0x7f] != 0)) {
                  FUN_1802a2180(local_6d8,param_2,local_8c0,puVar24);
                }
                if ((&DAT_180cae690)[lVar21] != '\0') {
                  FUN_1802a2a20(local_6d8,param_2,local_8c0,puVar24);
                }
              }
              else {
                if (*(char *)((longlong)puVar24 + 0x31) == '\0') {
                  uVar23 = (ulonglong)(*(char *)(puVar24 + 6) == '\0');
                }
                else {
                  uVar23 = 2;
                }
                lVar10 = lVar26 + uVar23 * 0x11ac;
                if (*(char *)(lVar26 + uVar23 * 0x11ac) != '\0') {
                  FUN_18029f690(local_838,&DAT_180caddc0 + lVar21);
                  local_7d0 = *(undefined1 *)(lVar21 + 0x180cade28);
                  FUN_18029f690(local_7c8,lVar21 + 0x180cade30);
                  FUN_18029f690(&local_760,lVar21 + 0x180cade98);
                  local_6f8 = *(undefined4 *)(lVar21 + 0x180cadf00);
                  local_6f4 = *(undefined4 *)(lVar21 + 0x180cadf04);
                  local_6f0 = *(undefined4 *)(lVar21 + 0x180cadf08);
                  local_6ec = *(undefined4 *)(lVar21 + 0x180cadf0c);
                  local_6e8 = *(undefined4 *)(lVar21 + 0x180cadf10);
                  local_7d0 = 0;
                  puVar14 = (undefined4 *)FUN_18029cb80(&local_980,lVar10 + 0xc);
                  local_6ec = *puVar14;
                  local_760 = CONCAT31(local_760._1_3_,*(undefined1 *)(lVar10 + 0x24));
                  local_7c8[0] = *(undefined1 *)(lVar10 + 0x1c);
                  local_6e8 = local_6ec;
                  FUN_18029f6f0(extraout_XMM0_Qa,param_2,local_8c0,local_838);
                  FUN_18015c010(local_720);
                  FUN_18015c010(local_740);
                  FUN_18015c010(local_788);
                  FUN_18015c010(local_7a8);
                  FUN_18015c010(local_7f8);
                  FUN_18015c010(local_818);
                }
                if (*(char *)(lVar10 + 0x30c) != '\0') {
                  FUN_18029f690(local_838,&DAT_180cadf18 + lVar21);
                  local_7d0 = *(undefined1 *)(lVar21 + 0x180cadf80);
                  local_7cc = *(undefined4 *)(lVar21 + 0x180cadf84);
                  FUN_18029f690(local_7c8,lVar21 + 0x180cadf88);
                  local_760 = *(undefined4 *)(lVar21 + 0x180cadff0);
                  local_75c = *(undefined4 *)(lVar21 + 0x180cadff4);
                  local_758 = *(undefined4 *)(lVar21 + 0x180cadff8);
                  local_754 = *(undefined4 *)(lVar21 + 0x180cadffc);
                  puVar14 = (undefined4 *)FUN_18029cb80(&local_998,lVar10 + 0x318);
                  local_75c = *puVar14;
                  local_7c8[0] = 0;
                  local_7cc = uVar41;
                  local_758 = local_75c;
                  FUN_1802a0590(extraout_XMM0_Qa_00,param_2,puVar24,local_838);
                  FUN_18015c010(local_788);
                  FUN_18015c010(local_7a8);
                  FUN_18015c010(local_7f8);
                  FUN_18015c010(local_818);
                }
                FUN_1802a6c60(param_2,local_8c0,puVar24,lVar10);
                if (plVar11 != (longlong *)0x0) {
                  LOCK();
                  plVar13 = plVar11 + 1;
                  lVar21 = *plVar13;
                  *(int *)plVar13 = (int)*plVar13 + -1;
                  UNLOCK();
                  if ((int)lVar21 == 1) {
                    (**(code **)*plVar11)(plVar11);
                    LOCK();
                    piVar18 = (int *)((longlong)plVar11 + 0xc);
                    iVar8 = *piVar18;
                    *piVar18 = *piVar18 + -1;
                    UNLOCK();
                    if (iVar8 == 1) {
                      (**(code **)(*plVar11 + 8))(plVar11);
                    }
                  }
                }
              }
              fVar27 = local_9b4;
            }
          }
          puVar24 = puVar24 + 0x81;
          if (puVar24 == local_9a0) goto LAB_18029e95f;
          iVar8 = local_9a8[0];
          iVar9 = local_9ac;
        } while( true );
      }
    }
  }
  FUN_1802aa590(&DAT_180cc98e0);
  FUN_1802aa4c0(&DAT_180cc9920);
  FUN_1802aa4c0(&DAT_180cc9960);
}



