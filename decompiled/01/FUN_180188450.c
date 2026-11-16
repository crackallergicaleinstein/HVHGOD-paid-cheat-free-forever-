// FUN_180188450 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180188450 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Type propagation algorithm not settling */

void FUN_180188450(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  longlong *param_5,longlong param_6,longlong param_7)

{
  byte bVar1;
  short sVar2;
  size_t _Size;
  int *piVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined4 uVar6;
  short *psVar7;
  char cVar8;
  int iVar9;
  DWORD DVar10;
  undefined1 (*pauVar11) [16];
  longlong lVar12;
  longlong *plVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  ulonglong *puVar16;
  longlong lVar17;
  short *psVar18;
  LPCWSTR lpFileName;
  undefined8 *puVar19;
  longlong *plVar20;
  undefined1 *puVar21;
  longlong lVar22;
  undefined8 *puVar23;
  undefined8 *******pppppppuVar24;
  undefined8 *******pppppppuVar25;
  byte *pbVar26;
  char *pcVar27;
  longlong *plVar28;
  longlong *plVar29;
  short *psVar30;
  longlong lVar31;
  ulonglong _Size_00;
  ulonglong uVar32;
  char *pcVar33;
  uint uVar34;
  ulonglong uVar35;
  undefined1 auStack_105a8 [32];
  longlong **pplStack_10588;
  longlong lStack_10580;
  undefined1 uStack_10578;
  undefined1 uStack_10577;
  undefined1 auStack_10576 [6];
  longlong *plStack_10570;
  undefined8 uStack_10568;
  undefined8 *puStack_10560;
  longlong *plStack_10558;
  longlong *plStack_10548;
  undefined8 uStack_10540;
  longlong lStack_10528;
  char *pcStack_10518;
  undefined8 uStack_10510;
  uint uStack_10508;
  longlong *plStack_10500;
  longlong *plStack_104f8;
  longlong *plStack_104f0;
  longlong lStack_104e8;
  undefined1 auStack_104e0 [16];
  undefined1 auStack_104d0 [16];
  longlong lStack_104c0;
  undefined1 auStack_104b8 [16];
  undefined1 auStack_104a8 [16];
  undefined1 auStack_10498 [16];
  undefined1 auStack_10488 [16];
  longlong *plStack_10478;
  ulonglong uStack_10470;
  ulonglong uStack_10468;
  ulonglong uStack_10460;
  ulonglong uStack_10458;
  undefined1 auStack_10450 [32];
  undefined1 auStack_10430 [36];
  int iStack_1040c;
  longlong lStack_10408;
  undefined1 auStack_10400 [8];
  uint auStack_103f8 [14];
  longlong alStack_103c0 [12];
  undefined **appuStack_10360 [12];
  int iStack_102fc;
  longlong alStack_102f8 [2];
  byte abStack_102e8 [160];
  undefined **appuStack_10248 [12];
  undefined1 auStack_101e8 [16];
  undefined8 uStack_101d8;
  undefined1 auStack_101d0 [16];
  undefined1 auStack_101c0 [16];
  undefined8 uStack_101b0;
  undefined8 *******apppppppuStack_101a8 [3];
  ulonglong uStack_10190;
  undefined1 auStack_10188 [16];
  ulonglong uStack_10178;
  ulonglong uStack_10170;
  undefined8 *******apppppppuStack_10168 [3];
  ulonglong uStack_10150;
  undefined1 uStack_10148;
  undefined7 uStack_10147;
  undefined8 uStack_10140;
  size_t sStack_10138;
  ulonglong uStack_10130;
  undefined1 auStack_10128 [16];
  undefined1 auStack_10118 [16];
  ulonglong uStack_10108;
  undefined8 *******apppppppuStack_100f8 [2];
  longlong lStack_100e8;
  ulonglong uStack_100e0;
  undefined4 uStack_100d8;
  undefined4 uStack_100d4;
  int iStack_100d0;
  undefined4 uStack_100cc;
  undefined8 uStack_100c8;
  undefined4 uStack_100c0;
  longlong alStack_100b8 [6];
  byte abStack_10088 [65536];
  undefined8 local_88;
  ulonglong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  short local_60 [4];
  ulonglong local_58;
  undefined8 uStack_48;
  
  uStack_48 = 0x180188473;
  local_58 = DAT_1808d5f00 ^ (ulonglong)auStack_105a8;
  plStack_10500 = param_5;
  plStack_10478 = param_5;
  lStack_104e8 = param_6;
  lStack_10528 = param_7;
  uVar34 = 0;
  uStack_10508 = 0;
  auStack_101c0 = (undefined1  [16])0x0;
  uStack_101b0 = 0;
  plStack_10570 = (longlong *)*param_5;
  if (plStack_10570 != (longlong *)0x0) {
    LOCK();
    *(int *)plStack_10570 = (int)*plStack_10570 + 1;
    UNLOCK();
  }
  lStack_10580 = param_7;
  pplStack_10588 = &plStack_10570;
  puStack_10560 = param_1;
  lStack_104c0 = param_2;
  cVar8 = FUN_180188000(param_2,param_3,param_4,auStack_101c0);
  if (cVar8 == '\0') {
    *(undefined1 *)(param_1 + 9) = 0;
    FUN_1801ab7b0(auStack_101c0);
    FUN_18017cdd0(param_5);
  }
  pplStack_10588 = (longlong **)((ulonglong)pplStack_10588 & 0xffffffff00000000);
  FUN_1801ad910(auStack_101c0._0_8_,auStack_101c0._8_8_,
                (longlong)(auStack_101c0._8_8_ - auStack_101c0._0_8_) / 0x50,0);
  auStack_101d0 = (undefined1  [16])0x0;
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    plStack_104f8 = (longlong *)0x180827288;
    plStack_104f0 = (longlong *)0x15;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&plStack_104f8);
  }
  plVar13 = (longlong *)
            (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x50);
  *plVar13 = (longlong)plVar13;
  plVar13[1] = (longlong)plVar13;
  plVar13[2] = (longlong)plVar13;
  *(undefined2 *)(plVar13 + 3) = 0x101;
  auStack_101d0._0_8_ = plVar13;
  uStack_10568 = (longlong *)((ulonglong)uStack_10568._4_4_ << 0x20);
  plStack_10558 = (longlong *)auStack_101c0._8_8_;
  plVar29 = (longlong *)auStack_101c0._0_8_;
  if (auStack_101c0._0_8_ != auStack_101c0._8_8_) {
    do {
      plVar13 = plVar29;
      if (0xf < (ulonglong)plVar29[3]) {
        plVar13 = (longlong *)*plVar29;
      }
      if (plVar29[2] == 0) {
        uVar35 = 0xffffffffffffffff;
      }
      else {
        lVar12 = plVar29[2] + -1;
        lVar17 = -1;
        if (lVar12 != -1) {
          lVar17 = lVar12;
        }
        lVar12 = lVar17 + 1 + (longlong)plVar13;
        lVar17 = thunk_FUN_1805f7d20(plVar13,lVar12,0x2f);
        uVar35 = 0xffffffffffffffff;
        if (lVar17 != lVar12) {
          uVar35 = lVar17 - (longlong)plVar13;
        }
      }
      plVar13 = plVar29;
      if (0xf < (ulonglong)plVar29[3]) {
        plVar13 = (longlong *)*plVar29;
      }
      if (plVar29[2] == 0) {
        lVar17 = -1;
      }
      else {
        lVar12 = plVar29[2] + -1;
        lVar17 = -1;
        if (lVar12 != -1) {
          lVar17 = lVar12;
        }
        lVar22 = lVar17 + 1 + (longlong)plVar13;
        lVar12 = thunk_FUN_1805f7d20(plVar13,lVar22,0x2e);
        lVar17 = -1;
        if (lVar12 != lVar22) {
          lVar17 = lVar12 - (longlong)plVar13;
        }
      }
      if (uVar35 == 0xffffffffffffffff) {
        auStack_10498 = (undefined1  [16])0x0;
        auStack_10488 = (undefined1  [16])0x0;
        FUN_18015ba30(auStack_10498,&DAT_1806bcfc0,1);
        pauVar11 = &auStack_10498;
        uVar34 = uVar34 | 2;
      }
      else {
        auStack_104b8 = (undefined1  [16])0x0;
        auStack_104a8 = (undefined1  [16])0x0;
        if ((ulonglong)plVar29[2] < uVar35) {
          uVar35 = plVar29[2];
        }
        plVar13 = plVar29;
        if (0xf < (ulonglong)plVar29[3]) {
          plVar13 = (longlong *)*plVar29;
        }
        FUN_18015ba30(auStack_104b8,plVar13,uVar35);
        pauVar11 = &auStack_104b8;
        uVar34 = uVar34 | 0x104;
      }
      auStack_10188 = *pauVar11;
      uStack_10178 = *(ulonglong *)pauVar11[1];
      uStack_10170 = *(ulonglong *)(pauVar11[1] + 8);
      (*pauVar11)[0] = 0;
      *(undefined8 *)pauVar11[1] = 0;
      *(undefined8 *)(pauVar11[1] + 8) = 0xf;
      if ((uVar34 & 4) != 0) {
        uVar34 = uVar34 & 0xfffffffb;
        FUN_18015c010(auStack_104b8);
      }
      if ((uVar34 & 2) != 0) {
        uVar34 = uVar34 & 0xfffffffd;
        FUN_18015c010(auStack_10498);
      }
      uVar35 = lVar17 + 1;
      auStack_104e0 = (undefined1  [16])0x0;
      auStack_104d0 = (undefined1  [16])0x0;
      if ((ulonglong)plVar29[2] < uVar35) {
                    /* WARNING: Subroutine does not return */
        FUN_180141470();
      }
      lVar12 = plVar29[2] - uVar35;
      lVar17 = -1;
      if (lVar12 != -1) {
        lVar17 = lVar12;
      }
      plVar13 = plVar29;
      if (0xf < (ulonglong)plVar29[3]) {
        plVar13 = (longlong *)*plVar29;
      }
      FUN_18015ba30(auStack_104e0,(longlong)plVar13 + uVar35,lVar17);
      uVar34 = uVar34 | 0x80;
      uStack_10508 = uVar34;
      plVar13 = (longlong *)FUN_1801b0640(auStack_101d0,&local_88,auStack_104e0);
      uVar32 = uStack_10170;
      uVar35 = uStack_10178;
      plStack_10570 = (longlong *)(*plVar13 + 0x40);
      plVar13 = (longlong *)*plStack_10570;
      plVar28 = (longlong *)plVar13[1];
      uStack_10540 = uStack_10540 & 0xffffffff00000000;
      plStack_10548 = plVar28;
      if (*(char *)((longlong)plVar28 + 0x19) == '\0') {
        do {
          plVar20 = plVar28 + 4;
          puVar21 = auStack_10188;
          if (0xf < uVar32) {
            puVar21 = (undefined1 *)auStack_10188._0_8_;
          }
          uVar14 = plVar28[6];
          if (0xf < (ulonglong)plVar28[7]) {
            plVar20 = (longlong *)*plVar20;
          }
          _Size_00 = uVar14;
          if (uVar35 < uVar14) {
            _Size_00 = uVar35;
          }
          plStack_10548 = plVar28;
          iVar9 = memcmp(plVar20,puVar21,_Size_00);
          if (iVar9 == 0) {
            if (uVar35 <= uVar14) goto LAB_180188856;
LAB_1801889a0:
            uStack_10540 = (ulonglong)uStack_10540._4_4_ << 0x20;
            plVar28 = plVar28 + 2;
          }
          else {
            if (iVar9 < 0) goto LAB_1801889a0;
LAB_180188856:
            uStack_10540 = CONCAT44(uStack_10540._4_4_,1);
            plVar13 = plVar28;
          }
          plVar28 = (longlong *)*plVar28;
        } while (*(char *)((longlong)plVar28 + 0x19) == '\0');
      }
      plVar28 = plStack_10570;
      if (*(char *)((longlong)plVar13 + 0x19) == '\0') {
        uVar14 = plVar13[6];
        plVar20 = plVar13 + 4;
        if (0xf < (ulonglong)plVar13[7]) {
          plVar20 = (longlong *)*plVar20;
        }
        puVar21 = auStack_10188;
        if (0xf < uVar32) {
          puVar21 = (undefined1 *)auStack_10188._0_8_;
        }
        uVar32 = uVar35;
        if (uVar14 < uVar35) {
          uVar32 = uVar14;
        }
        iVar9 = memcmp(puVar21,plVar20,uVar32);
        if (iVar9 == 0) {
          if (uVar35 < uVar14) goto LAB_1801888be;
        }
        else if (iVar9 < 0) goto LAB_1801888be;
      }
      else {
LAB_1801888be:
        if (plVar28[1] == 0x2e8ba2e8ba2e8ba) {
                    /* WARNING: Subroutine does not return */
          FUN_1800a7740();
        }
        lVar17 = *plVar28;
        plStack_104f0 = (longlong *)0x0;
        plStack_104f8 = plVar28;
        if (DAT_180c7df28 == (undefined8 *)0x0) {
          pcStack_10518 = "tier0.dll:g_pMemAlloc";
          uStack_10510 = 0x15;
          DAT_180c7df28 = (undefined8 *)FUN_180451750(&pcStack_10518);
        }
        plVar13 = (longlong *)
                  (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x58);
        plStack_104f0 = plVar13;
        FUN_18015b360(plVar13 + 4,auStack_10188);
        plVar13[8] = 0;
        plVar13[9] = 0;
        plVar13[10] = 0;
        *plVar13 = lVar17;
        plVar13[1] = lVar17;
        plVar13[2] = lVar17;
        *(undefined2 *)(plVar13 + 3) = 0;
        plStack_104f0 = (longlong *)0x0;
        plVar13 = (longlong *)FUN_180140480(plStack_10570,&plStack_10548,plVar13);
      }
      puVar19 = (undefined8 *)plVar13[9];
      plStack_10548 = plVar29;
      if (puVar19 == (undefined8 *)plVar13[10]) {
        FUN_1801b6250(plVar13 + 8,puVar19,&plStack_10548);
      }
      else {
        *puVar19 = plVar29;
        plVar13[9] = plVar13[9] + 8;
      }
      FUN_18015c010(auStack_104e0);
      uStack_10568 = (longlong *)CONCAT44(uStack_10568._4_4_,(int)uStack_10568 + (int)plVar29[8]);
      FUN_18015c010(auStack_10188);
      plVar29 = plVar29 + 10;
    } while (plVar29 != plStack_10558);
    plVar13 = (longlong *)auStack_101d0._0_8_;
  }
  auStack_101e8 = (undefined1  [16])0x0;
  uStack_101d8 = 0;
  plStack_10570 = (longlong *)((ulonglong)plStack_10570 & 0xffffffff00000000);
  plVar13 = (longlong *)*plVar13;
  if (*(char *)((longlong)plVar13 + 0x19) == '\0') {
    uStack_10577 = 0;
    do {
      plVar29 = plVar13 + 4;
      if (0xf < (ulonglong)plVar13[7]) {
        plVar29 = (longlong *)*plVar29;
      }
      FUN_1801adc40(auStack_101e8,auStack_101e8._8_8_,plVar29,plVar13[6]);
      FUN_180157850(auStack_101e8,&uStack_10577);
      plVar29 = *(longlong **)plVar13[8];
      if (*(char *)((longlong)plVar29 + 0x19) == '\0') {
        auStack_10576[0] = 0;
        do {
          plVar28 = plVar29 + 4;
          if (0xf < (ulonglong)plVar29[7]) {
            plVar28 = (longlong *)*plVar28;
          }
          FUN_1801adc40(auStack_101e8,auStack_101e8._8_8_,plVar28,plVar29[6]);
          FUN_180157850(auStack_101e8,auStack_10576);
          plVar28 = (longlong *)plVar29[8];
          plStack_10558 = (longlong *)plVar29[9];
          if (plVar28 != plStack_10558) {
            do {
              puVar19 = (undefined8 *)*plVar28;
              puVar23 = puVar19;
              if (0xf < (ulonglong)puVar19[3]) {
                puVar23 = (undefined8 *)*puVar19;
              }
              if (puVar19[2] == 0) {
                lVar17 = -1;
              }
              else {
                lVar12 = puVar19[2] + -1;
                lVar17 = -1;
                if (lVar12 != -1) {
                  lVar17 = lVar12;
                }
                lVar22 = lVar17 + 1 + (longlong)puVar23;
                lVar12 = thunk_FUN_1805f7d20(puVar23,lVar22,0x2f);
                lVar17 = -1;
                if (lVar12 != lVar22) {
                  lVar17 = lVar12 - (longlong)puVar23;
                }
              }
              puVar23 = puVar19;
              if (0xf < (ulonglong)puVar19[3]) {
                puVar23 = (undefined8 *)*puVar19;
              }
              if (puVar19[2] == 0) {
                lVar12 = -1;
              }
              else {
                lVar22 = puVar19[2] + -1;
                lVar12 = -1;
                if (lVar22 != -1) {
                  lVar12 = lVar22;
                }
                lVar31 = lVar12 + 1 + (longlong)puVar23;
                lVar22 = thunk_FUN_1805f7d20(puVar23,lVar31,0x2e);
                lVar12 = -1;
                if (lVar22 != lVar31) {
                  lVar12 = lVar22 - (longlong)puVar23;
                }
              }
              if (lVar17 == -1) {
                uVar35 = 0;
              }
              else {
                uVar35 = lVar17 + 1;
              }
              puVar23 = puVar19;
              if (0xf < (ulonglong)puVar19[3]) {
                puVar23 = (undefined8 *)*puVar19;
              }
              if ((ulonglong)puVar19[2] < uVar35) {
                    /* WARNING: Subroutine does not return */
                FUN_18015ac40();
              }
              uVar14 = puVar19[2] - uVar35;
              uVar32 = lVar12 - uVar35;
              if (uVar14 < lVar12 - uVar35) {
                uVar32 = uVar14;
              }
              FUN_1801adc40(auStack_101e8,auStack_101e8._8_8_,(longlong)puVar23 + uVar35,uVar32);
              uStack_10578 = 0;
              FUN_180157850(auStack_101e8,&uStack_10578);
              local_88 = CONCAT44(0x7fff0000,*(undefined4 *)((longlong)puVar19 + 0x44));
              iVar9 = (int)plStack_10570;
              uStack_80 = CONCAT44(*(undefined4 *)(puVar19 + 8),(int)plStack_10570);
              uStack_78 = CONCAT62(uStack_78._2_6_,0xffff);
              FUN_1801adc40(auStack_101e8,auStack_101e8._8_8_,&local_88,0x12);
              plStack_10570 =
                   (longlong *)CONCAT44(plStack_10570._4_4_,iVar9 + *(int *)(puVar19 + 8));
              plVar28 = plVar28 + 1;
            } while (plVar28 != plStack_10558);
          }
          FUN_1801adc40(auStack_101e8,auStack_101e8._8_8_,&PTR_180700558,0);
          uStack_10578 = 0;
          FUN_180157850(auStack_101e8,&uStack_10578);
          plVar28 = (longlong *)plVar29[2];
          if (*(char *)((longlong)plVar28 + 0x19) == '\0') {
            cVar8 = *(char *)(*plVar28 + 0x19);
            plVar29 = plVar28;
            plVar28 = (longlong *)*plVar28;
            while (cVar8 == '\0') {
              cVar8 = *(char *)(*plVar28 + 0x19);
              plVar29 = plVar28;
              plVar28 = (longlong *)*plVar28;
            }
          }
          else {
            cVar8 = *(char *)(plVar29[1] + 0x19);
            plVar20 = (longlong *)plVar29[1];
            plVar28 = plVar29;
            while ((plVar29 = plVar20, cVar8 == '\0' && (plVar28 == (longlong *)plVar29[2]))) {
              cVar8 = *(char *)(plVar29[1] + 0x19);
              plVar20 = (longlong *)plVar29[1];
              plVar28 = plVar29;
            }
          }
        } while (*(char *)((longlong)plVar29 + 0x19) == '\0');
      }
      FUN_1801adc40(auStack_101e8,auStack_101e8._8_8_,&PTR_180700558,0);
      uStack_10578 = 0;
      FUN_180157850(auStack_101e8,&uStack_10578);
      plVar29 = (longlong *)plVar13[2];
      if (*(char *)((longlong)plVar29 + 0x19) == '\0') {
        cVar8 = *(char *)(*plVar29 + 0x19);
        plVar13 = plVar29;
        plVar29 = (longlong *)*plVar29;
        while (cVar8 == '\0') {
          cVar8 = *(char *)(*plVar29 + 0x19);
          plVar13 = plVar29;
          plVar29 = (longlong *)*plVar29;
        }
      }
      else {
        cVar8 = *(char *)(plVar13[1] + 0x19);
        plVar28 = (longlong *)plVar13[1];
        plVar29 = plVar13;
        while ((plVar13 = plVar28, cVar8 == '\0' && (plVar29 == (longlong *)plVar13[2]))) {
          cVar8 = *(char *)(plVar13[1] + 0x19);
          plVar28 = (longlong *)plVar13[1];
          plVar29 = plVar13;
        }
      }
    } while (*(char *)((longlong)plVar13 + 0x19) == '\0');
  }
  FUN_1801adc40(auStack_101e8,auStack_101e8._8_8_,&PTR_180700558,0);
  uStack_10578 = 0;
  FUN_180157850(auStack_101e8,&uStack_10578);
  uVar6 = (int)uStack_10568;
  plVar13 = (longlong *)
            (auStack_101e8._8_8_ + 0x1c +
            (((ulonglong)uStack_10568 & 0xffffffff) - auStack_101e8._0_8_));
  plStack_10558 = plVar13;
  if ((0x10000000 < plVar13) || (cVar8 = FUN_180187510(plVar13), cVar8 == '\0')) {
    if (lStack_10528 != 0) {
      FUN_180113930(lStack_10528,"managed_cache_or_bundle_budget_exceeded",0x27);
    }
    *(undefined1 *)(puStack_10560 + 9) = 0;
    FUN_180113710(auStack_101e8);
    FUN_1801b61c0(auStack_101d0,auStack_101d0,*(undefined8 *)(auStack_101d0._0_8_ + 8));
    FUN_1804547d0(auStack_101d0._0_8_,0x50);
    FUN_1801ab7b0(auStack_101c0);
    piVar3 = (int *)*plStack_10500;
    if (piVar3 == (int *)0x0) {
    }
    LOCK();
    iVar9 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar9 != 1) {
    }
    if (DAT_180c7df30 == (undefined8 *)0x0) {
      pcStack_10518 = "tier0.dll:g_pMemAlloc";
      uStack_10510 = 0x15;
      DAT_180c7df30 = (undefined8 *)FUN_180451750(&pcStack_10518);
    }
    (**(code **)(*(longlong *)*DAT_180c7df30 + 0x18))((longlong *)*DAT_180c7df30,piVar3);
  }
  DVar10 = GetCurrentProcessId();
  psVar30 = local_60 + 1;
  do {
    psVar30 = psVar30 + -1;
    *psVar30 = (short)DVar10 + (short)((ulonglong)DVar10 / 10) * -10 + 0x30;
    DVar10 = (DWORD)((ulonglong)DVar10 / 10);
  } while (DVar10 != 0);
  FUN_1801bd710(auStack_10450,psVar30,local_60 + 1);
  uVar15 = FUN_1801a6320(alStack_100b8,L"outgoing-",auStack_10450);
  puVar16 = (ulonglong *)FUN_1800f52e0(uVar15,L".part",5);
  uStack_10470 = *puVar16;
  uStack_10468 = puVar16[1];
  uStack_10460 = puVar16[2];
  uStack_10458 = puVar16[3];
  *(undefined2 *)puVar16 = 0;
  puVar16[2] = 0;
  puVar16[3] = 7;
  uStack_78 = 0;
  uStack_70 = 7;
  local_88 = uStack_10470 & 0xffffffffffff0000;
  uStack_80 = uStack_10468;
  uVar15 = FUN_180186af0(auStack_10430);
  FUN_1800a7e60(apppppppuStack_101a8,uVar15,&uStack_10470);
  FUN_18015b930(auStack_10430);
  FUN_18015b930(&uStack_10470);
  FUN_18015b930(&local_88);
  FUN_18015b930(alStack_100b8);
  FUN_18015b930(auStack_10450);
  FUN_1800f5370(apppppppuStack_10168,apppppppuStack_101a8);
  FUN_18063ab10(&lStack_10408,0,0x108);
  FUN_1800e6fe0(&lStack_10408,apppppppuStack_101a8,0x30);
  uStack_100d8 = 0x55aa1234;
  uStack_100d4 = 2;
  iStack_100d0 = auStack_101e8._8_4_ - auStack_101e8._0_4_;
  uStack_100cc = uVar6;
  uStack_100c8 = 0;
  uStack_100c0 = 0;
  FUN_1801ad380(&lStack_10408,&uStack_100d8,0x1c);
  FUN_1801ad380(&lStack_10408,auStack_101e8._0_8_,auStack_101e8._8_8_ - auStack_101e8._0_8_);
  FUN_18063ab10(abStack_10088,0,0x10000);
  bVar4 = true;
  uStack_10568 = *(longlong **)auStack_101d0._0_8_;
  if (*(char *)((longlong)uStack_10568 + 0x19) == '\0') {
    do {
      plStack_10570 = *(longlong **)uStack_10568[8];
      if (*(char *)((longlong)plStack_10570 + 0x19) == '\0') {
        do {
          plVar13 = (longlong *)plStack_10570[8];
          plVar29 = (longlong *)plStack_10570[9];
          plStack_10548 = plVar29;
          if (plVar13 != plVar29) {
            do {
              lVar17 = *plVar13;
              FUN_18063ab10(alStack_102f8,0,0x110);
              FUN_18015e690(alStack_102f8,lVar17 + 0x20,0x20);
              uVar34 = 0xffffffff;
              uVar35 = 0;
              bVar1 = abStack_102e8[*(int *)(alStack_102f8[0] + 4)];
              while (((bVar1 & 6) == 0 &&
                     ((*plStack_10500 == 0 || ((*(uint *)(*plStack_10500 + 4) & 1) == 0))))) {
                FUN_1801771e0(alStack_102f8,abStack_10088,0x10000);
                uVar35 = uVar35 + alStack_102f8[1];
                if (*(uint *)(lVar17 + 0x40) < uVar35) goto LAB_1801891af;
                pbVar26 = abStack_10088;
                if (abStack_10088 != abStack_10088 + alStack_102f8[1]) {
                  do {
                    uVar34 = uVar34 >> 8 ^
                             *(uint *)(&DAT_1808d9220 + (ulonglong)((*pbVar26 ^ uVar34) & 0xff) * 4)
                    ;
                    pbVar26 = pbVar26 + 1;
                  } while (pbVar26 != abStack_10088 + alStack_102f8[1]);
                  plVar29 = plStack_10548;
                }
                FUN_1801ad380(&lStack_10408,abStack_10088);
                bVar1 = abStack_102e8[*(int *)(alStack_102f8[0] + 4)];
              }
              if ((((!bVar4) || ((abStack_102e8[*(int *)(alStack_102f8[0] + 4)] & 1) == 0)) ||
                  (uVar35 != *(uint *)(lVar17 + 0x40))) || (~uVar34 != *(uint *)(lVar17 + 0x44))) {
LAB_1801891af:
                bVar4 = false;
              }
              else {
                lVar12 = lVar17 + 0x20;
                if (7 < *(ulonglong *)(lVar17 + 0x38)) {
                  lVar12 = *(longlong *)(lVar17 + 0x20);
                }
                iVar9 = FUN_1805fb620(lVar12,alStack_100b8,0x21,0xffffffff);
                lVar12 = -0x8000000000000000;
                if (iVar9 == 0) {
                  lVar12 = alStack_100b8[0];
                }
                if ((lVar12 != *(longlong *)(lVar17 + 0x48)) || (iVar9 != 0)) goto LAB_1801891af;
                bVar4 = true;
              }
              *(undefined ***)((longlong)alStack_102f8 + (longlong)*(int *)(alStack_102f8[0] + 4)) =
                   std::basic_ifstream<char,std::char_traits<char>_>::vftable;
              *(int *)((longlong)alStack_102f8 + (longlong)*(int *)(alStack_102f8[0] + 4) + -4) =
                   *(int *)(alStack_102f8[0] + 4) + -0xb0;
              FUN_1800f63e0(abStack_102e8);
              *(undefined ***)((longlong)alStack_102f8 + (longlong)*(int *)(alStack_102f8[0] + 4)) =
                   std::basic_istream<char,std::char_traits<char>_>::vftable;
              *(int *)((longlong)alStack_102f8 + (longlong)*(int *)(alStack_102f8[0] + 4) + -4) =
                   *(int *)(alStack_102f8[0] + 4) + -0x18;
              appuStack_10248[0] = std::ios_base::vftable;
              std::ios_base::_Ios_base_dtor((ios_base *)appuStack_10248);
              plVar13 = plVar13 + 1;
            } while (plVar13 != plVar29);
          }
          plVar13 = (longlong *)plStack_10570[2];
          if (*(char *)((longlong)plVar13 + 0x19) == '\0') {
            cVar8 = *(char *)(*plVar13 + 0x19);
            plStack_10570 = plVar13;
            plVar13 = (longlong *)*plVar13;
            while (cVar8 == '\0') {
              cVar8 = *(char *)(*plVar13 + 0x19);
              plStack_10570 = plVar13;
              plVar13 = (longlong *)*plVar13;
            }
          }
          else {
            cVar8 = *(char *)(plStack_10570[1] + 0x19);
            plVar29 = (longlong *)plStack_10570[1];
            plVar13 = plStack_10570;
            while ((plStack_10570 = plVar29, cVar8 == '\0' &&
                   (plVar13 == (longlong *)plStack_10570[2]))) {
              cVar8 = *(char *)(plStack_10570[1] + 0x19);
              plVar29 = (longlong *)plStack_10570[1];
              plVar13 = plStack_10570;
            }
          }
        } while (*(char *)((longlong)plStack_10570 + 0x19) == '\0');
      }
      plVar13 = (longlong *)uStack_10568[2];
      if (*(char *)((longlong)plVar13 + 0x19) == '\0') {
        cVar8 = *(char *)(*plVar13 + 0x19);
        uStack_10568 = plVar13;
        plVar13 = (longlong *)*plVar13;
        while (cVar8 == '\0') {
          cVar8 = *(char *)(*plVar13 + 0x19);
          uStack_10568 = plVar13;
          plVar13 = (longlong *)*plVar13;
        }
      }
      else {
        cVar8 = *(char *)(uStack_10568[1] + 0x19);
        plVar29 = (longlong *)uStack_10568[1];
        plVar13 = uStack_10568;
        while ((uStack_10568 = plVar29, cVar8 == '\0' && (plVar13 == (longlong *)uStack_10568[2])))
        {
          cVar8 = *(char *)(uStack_10568[1] + 0x19);
          plVar29 = (longlong *)uStack_10568[1];
          plVar13 = uStack_10568;
        }
      }
    } while (*(char *)((longlong)uStack_10568 + 0x19) == '\0');
    plVar13 = plStack_10558;
  }
  lVar17 = FUN_180113da0(auStack_10400);
  plVar29 = plStack_10500;
  if (lVar17 == 0) {
    lVar17 = (longlong)*(int *)(lStack_10408 + 4);
    uVar34 = 4;
    if (*(longlong *)((longlong)alStack_103c0 + lVar17) != 0) {
      uVar34 = 0;
    }
    uVar34 = uVar34 | *(uint *)((longlong)auStack_103f8 + lVar17) & 0x15 | 2;
    *(uint *)((longlong)auStack_103f8 + lVar17) = uVar34;
    uVar34 = uVar34 & *(uint *)((longlong)auStack_103f8 + lVar17 + 4);
    if (uVar34 != 0) {
      if ((uVar34 & 4) == 0) {
        pcVar33 = "ios_base::failbit set";
        if ((uVar34 & 2) == 0) {
          pcVar33 = "ios_base::eofbit set";
        }
      }
      else {
        pcVar33 = "ios_base::badbit set";
      }
      uVar15 = FUN_1801597e0(&local_88,1);
      FUN_1801596c0(alStack_100b8,pcVar33,uVar15);
                    /* WARNING: Subroutine does not return */
      FUN_180606630(alStack_100b8,&DAT_1808d0f18);
    }
  }
  plStack_10548 = (longlong *)*plStack_10500;
  if (plStack_10548 != (longlong *)0x0) {
    LOCK();
    *(int *)plStack_10548 = (int)*plStack_10548 + 1;
    UNLOCK();
  }
  FUN_180187770(&uStack_10148,apppppppuStack_101a8,&plStack_10548);
  lVar17 = lStack_104c0 + 0x40;
  if (0xf < *(ulonglong *)(lStack_104c0 + 0x58)) {
    lVar17 = *(longlong *)(lStack_104c0 + 0x40);
  }
  auStack_10128 = (undefined1  [16])0x0;
  auStack_10118 = (undefined1  [16])0x0;
  FUN_18015ba30(auStack_10128,lVar17,*(undefined8 *)(lStack_104c0 + 0x50));
  pcVar33 = auStack_10128;
  if (0xf < (ulonglong)auStack_10118._8_8_) {
    pcVar33 = (char *)auStack_10128._0_8_;
  }
  pcVar27 = pcVar33 + auStack_10118._0_8_;
  for (; pcVar33 != pcVar27; pcVar33 = pcVar33 + 1) {
    cVar8 = *pcVar33;
    if (('@' < cVar8) && (cVar8 < '[')) {
      *pcVar33 = cVar8 + ' ';
    }
  }
  uStack_10108 = (ulonglong)plVar13;
  if ((((!bVar4) ||
       ((*(byte *)((longlong)auStack_103f8 + (longlong)*(int *)(lStack_10408 + 4)) & 6) != 0)) ||
      (cVar8 = FUN_18017f370(&uStack_10148), cVar8 == '\0')) ||
     ((*plVar29 != 0 && ((*(uint *)(*plVar29 + 4) & 1) != 0)))) {
    pppppppuVar24 = apppppppuStack_101a8;
    if (7 < uStack_10190) {
      pppppppuVar24 = apppppppuStack_101a8[0];
    }
    FUN_1805fb9a8(pppppppuVar24);
    *(undefined1 *)(puStack_10560 + 9) = 0;
    FUN_18015c010(auStack_10128);
    FUN_18015c010(&uStack_10148);
    *(undefined ***)(auStack_10430 + (longlong)*(int *)(lStack_10408 + 4) + 0x28) =
         std::basic_ofstream<char,std::char_traits<char>_>::vftable;
    *(int *)(auStack_10430 + (longlong)*(int *)(lStack_10408 + 4) + 0x24) =
         *(int *)(lStack_10408 + 4) + -0xa8;
    FUN_1800f63e0(auStack_10400);
    *(undefined ***)(auStack_10430 + (longlong)*(int *)(lStack_10408 + 4) + 0x28) =
         std::basic_ostream<char,std::char_traits<char>_>::vftable;
    *(int *)(auStack_10430 + (longlong)*(int *)(lStack_10408 + 4) + 0x24) =
         *(int *)(lStack_10408 + 4) + -0x10;
    appuStack_10360[0] = std::ios_base::vftable;
    std::ios_base::_Ios_base_dtor((ios_base *)appuStack_10360);
    pppppppuVar24 = apppppppuStack_10168;
    if (7 < uStack_10150) {
      pppppppuVar24 = apppppppuStack_10168[0];
    }
    FUN_1805fb9a8(pppppppuVar24);
    FUN_18015b930(apppppppuStack_10168);
    FUN_18015b930(apppppppuStack_101a8);
    FUN_180113710(auStack_101e8);
    FUN_1801b61c0(auStack_101d0,auStack_101d0,*(undefined8 *)(auStack_101d0._0_8_ + 8));
    FUN_1804547d0(auStack_101d0._0_8_,0x50);
    FUN_1801ab7b0(auStack_101c0);
    piVar3 = (int *)*plVar29;
    if (piVar3 == (int *)0x0) {
    }
    LOCK();
    iVar9 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar9 != 1) {
    }
    if (DAT_180c7df30 == (undefined8 *)0x0) {
      pcStack_10518 = "tier0.dll:g_pMemAlloc";
      uStack_10510 = 0x15;
      DAT_180c7df30 = (undefined8 *)FUN_180451750(&pcStack_10518);
    }
    (**(code **)(*(longlong *)*DAT_180c7df30 + 0x18))((longlong *)*DAT_180c7df30,piVar3);
  }
  FUN_180186d00(apppppppuStack_100f8,&uStack_10148);
  pppppppuVar24 = apppppppuStack_100f8;
  if (7 < uStack_100e0) {
    pppppppuVar24 = apppppppuStack_100f8[0];
  }
  psVar30 = (short *)((longlong)pppppppuVar24 + lStack_100e8 * 2);
  psVar18 = (short *)FUN_1800a7b00(pppppppuVar24,psVar30);
  if (psVar18 != psVar30) {
    do {
      if ((*psVar18 != 0x5c) && (*psVar18 != 0x2f)) break;
      psVar18 = psVar18 + 1;
    } while (psVar18 != psVar30);
    do {
      if (psVar18 == psVar30) goto LAB_18018951d;
      sVar2 = psVar30[-1];
      psVar7 = psVar30;
    } while ((sVar2 != 0x5c) && (psVar30 = psVar30 + -1, sVar2 != 0x2f));
    do {
      psVar30 = psVar7;
      if (psVar18 == psVar30) break;
      psVar7 = psVar30 + -1;
    } while ((*psVar7 == 0x5c) || (*psVar7 == 0x2f));
  }
LAB_18018951d:
  auStack_10188 = (undefined1  [16])0x0;
  uStack_10178 = 0;
  uStack_10170 = 0;
  FUN_180159e60(auStack_10188,pppppppuVar24,(longlong)psVar30 - (longlong)pppppppuVar24 >> 1);
  cVar8 = FUN_180187280(auStack_10188);
  FUN_18015b930(auStack_10188);
  if (cVar8 == '\0') {
    pppppppuVar24 = apppppppuStack_101a8;
    if (7 < uStack_10190) {
      pppppppuVar24 = apppppppuStack_101a8[0];
    }
    FUN_1805fb9a8(pppppppuVar24);
    *(undefined1 *)(puStack_10560 + 9) = 0;
    FUN_18015b930(apppppppuStack_100f8);
    FUN_18015c010(auStack_10128);
    FUN_18015c010(&uStack_10148);
    *(undefined ***)(auStack_10430 + (longlong)*(int *)(lStack_10408 + 4) + 0x28) =
         std::basic_ofstream<char,std::char_traits<char>_>::vftable;
    *(int *)(auStack_10430 + (longlong)*(int *)(lStack_10408 + 4) + 0x24) =
         *(int *)(lStack_10408 + 4) + -0xa8;
    FUN_1800f63e0(auStack_10400);
    *(undefined ***)(auStack_10430 + (longlong)*(int *)(lStack_10408 + 4) + 0x28) =
         std::basic_ostream<char,std::char_traits<char>_>::vftable;
    *(int *)(auStack_10430 + (longlong)*(int *)(lStack_10408 + 4) + 0x24) =
         *(int *)(lStack_10408 + 4) + -0x10;
    appuStack_10360[0] = std::ios_base::vftable;
    std::ios_base::_Ios_base_dtor((ios_base *)appuStack_10360);
    pppppppuVar24 = apppppppuStack_10168;
    if (7 < uStack_10150) {
      pppppppuVar24 = apppppppuStack_10168[0];
    }
    FUN_1805fb9a8(pppppppuVar24);
    FUN_18015b930(apppppppuStack_10168);
    FUN_18015b930(apppppppuStack_101a8);
    FUN_180113710(auStack_101e8);
    FUN_1801b61c0(auStack_101d0,auStack_101d0,*(undefined8 *)(auStack_101d0._0_8_ + 8));
    FUN_1804547d0(auStack_101d0._0_8_,0x50);
  }
  else {
    lpFileName = (LPCWSTR)FUN_180186ef0(alStack_100b8,apppppppuStack_100f8);
    if (7 < *(ulonglong *)(lpFileName + 0xc)) {
      lpFileName = *(LPCWSTR *)lpFileName;
    }
    DVar10 = GetFileAttributesW(lpFileName);
    FUN_18015b930(alStack_100b8);
    if ((DVar10 == 0xffffffff) || ((DVar10 & 0x410) != 0)) {
      pppppppuVar24 = apppppppuStack_100f8;
      if (7 < uStack_100e0) {
        pppppppuVar24 = apppppppuStack_100f8[0];
      }
      pppppppuVar25 = apppppppuStack_101a8;
      if (7 < uStack_10190) {
        pppppppuVar25 = apppppppuStack_101a8[0];
      }
      iVar9 = FUN_1805fbbd8(pppppppuVar25,pppppppuVar24);
      if (iVar9 == 0) {
        if (lStack_104e8 != 0) {
          FUN_1801ab760(lStack_104e8,auStack_101c0);
        }
        FUN_1801a7090(puStack_10560,&uStack_10148);
        FUN_18015b930(apppppppuStack_100f8);
        FUN_180156fb0(&uStack_10148);
        FUN_1800ad8f0(&lStack_10408);
        FUN_180189dc0(apppppppuStack_10168);
        FUN_18015b930(apppppppuStack_101a8);
        FUN_180113710(auStack_101e8);
        FUN_180189df0(auStack_101d0);
        FUN_1801ab7b0(auStack_101c0);
        FUN_18017cdd0(plVar29);
      }
    }
    else {
      plStack_10548 = (longlong *)*plVar29;
      if (plStack_10548 != (longlong *)0x0) {
        LOCK();
        *(int *)plStack_10548 = (int)*plStack_10548 + 1;
        UNLOCK();
      }
      puVar19 = (undefined8 *)FUN_180187770(auStack_104e0,apppppppuStack_100f8,&plStack_10548);
      puVar21 = &uStack_10148;
      if (0xf < uStack_10130) {
        puVar21 = (undefined1 *)CONCAT71(uStack_10147,uStack_10148);
      }
      _Size = puVar19[2];
      if (0xf < (ulonglong)puVar19[3]) {
        puVar19 = (undefined8 *)*puVar19;
      }
      if (_Size == sStack_10138) {
        if (_Size == 0) {
          FUN_18015c010(auStack_104e0);
LAB_1801897a0:
          if (lStack_104e8 != 0) {
            FUN_1801ab760(lStack_104e8,auStack_101c0);
          }
          FUN_18015c2a0(apppppppuStack_101a8,&pcStack_10518);
          *puStack_10560 = CONCAT71(uStack_10147,uStack_10148);
          puStack_10560[1] = uStack_10140;
          puStack_10560[2] = sStack_10138;
          puStack_10560[3] = uStack_10130;
          sStack_10138 = 0;
          uStack_10130 = 0xf;
          uStack_10148 = 0;
          puStack_10560[4] = auStack_10128._0_8_;
          puStack_10560[5] = auStack_10128._8_8_;
          puStack_10560[6] = auStack_10118._0_8_;
          puStack_10560[7] = auStack_10118._8_8_;
          auStack_10118 = ZEXT816(0xf) << 0x40;
          auVar5[0xf] = 0;
          auVar5._0_15_ = auStack_10128._1_15_;
          auStack_10128 = auVar5 << 8;
          puStack_10560[8] = uStack_10108;
          *(undefined1 *)(puStack_10560 + 9) = 1;
          FUN_18015b930(apppppppuStack_100f8);
          FUN_18015c010(auStack_10128);
          FUN_18015c010(&uStack_10148);
          *(undefined ***)(auStack_10430 + (longlong)*(int *)(lStack_10408 + 4) + 0x28) =
               std::basic_ofstream<char,std::char_traits<char>_>::vftable;
          *(int *)(auStack_10430 + (longlong)*(int *)(lStack_10408 + 4) + 0x24) =
               *(int *)(lStack_10408 + 4) + -0xa8;
          FUN_1800f63e0(auStack_10400);
          *(undefined ***)(auStack_10430 + (longlong)*(int *)(lStack_10408 + 4) + 0x28) =
               std::basic_ostream<char,std::char_traits<char>_>::vftable;
          *(int *)(auStack_10430 + (longlong)*(int *)(lStack_10408 + 4) + 0x24) =
               *(int *)(lStack_10408 + 4) + -0x10;
          appuStack_10360[0] = std::ios_base::vftable;
          std::ios_base::_Ios_base_dtor((ios_base *)appuStack_10360);
          pppppppuVar24 = apppppppuStack_10168;
          if (7 < uStack_10150) {
            pppppppuVar24 = apppppppuStack_10168[0];
          }
          FUN_1805fb9a8(pppppppuVar24);
          FUN_18015b930(apppppppuStack_10168);
          FUN_18015b930(apppppppuStack_101a8);
          FUN_180113710(auStack_101e8);
          FUN_1801b61c0(auStack_101d0,auStack_101d0,*(undefined8 *)(auStack_101d0._0_8_ + 8));
          FUN_1804547d0(auStack_101d0._0_8_,0x50);
          FUN_1801ab7b0(auStack_101c0);
          FUN_18017cdd0(plVar29);
        }
        iVar9 = memcmp(puVar19,puVar21,_Size);
        FUN_18015c010(auStack_104e0);
        if (iVar9 == 0) goto LAB_1801897a0;
      }
      else {
        FUN_18015c010(auStack_104e0);
      }
    }
    FUN_18015c2a0(apppppppuStack_101a8,&pcStack_10518);
    *(undefined1 *)(puStack_10560 + 9) = 0;
    FUN_18015b930(apppppppuStack_100f8);
    FUN_180156fb0(&uStack_10148);
    FUN_1800ad8f0(&lStack_10408);
    FUN_180189dc0(apppppppuStack_10168);
    FUN_18015b930(apppppppuStack_101a8);
    FUN_180113710(auStack_101e8);
    FUN_180189df0(auStack_101d0);
  }
  FUN_1801ab7b0(auStack_101c0);
  FUN_18017cdd0(plVar29);
}



