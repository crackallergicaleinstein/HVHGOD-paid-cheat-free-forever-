// FUN_1801c3040 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801c3040 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_1801c3040(char param_1)

{
  uint uVar1;
  undefined1 uVar2;
  longlong *plVar3;
  double dVar4;
  undefined1 auVar5 [16];
  bool bVar6;
  bool bVar7;
  undefined8 *******pppppppuVar8;
  undefined1 auVar9 [16];
  char cVar10;
  short sVar11;
  int iVar12;
  int iVar13;
  DWORD DVar14;
  undefined4 uVar15;
  int iVar16;
  int iVar17;
  ULONGLONG UVar18;
  ulonglong *puVar19;
  undefined1 (*pauVar20) [16];
  undefined8 *puVar21;
  undefined1 *puVar22;
  undefined8 *puVar23;
  ulonglong uVar24;
  int *piVar25;
  undefined1 *puVar26;
  int iVar27;
  undefined8 *******pppppppuVar28;
  int *piVar29;
  ulonglong uVar30;
  undefined8 **_Buf2;
  char *pcVar31;
  longlong *plVar32;
  longlong lVar33;
  undefined1 **ppuVar34;
  undefined *puVar35;
  int iVar36;
  ulonglong uVar37;
  size_t _Size;
  longlong lVar38;
  longlong *plVar39;
  undefined1 **ppuVar40;
  undefined8 uVar41;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar42;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 uVar43;
  undefined8 extraout_XMM0_Qa_02;
  float fVar44;
  undefined1 auStack_578 [32];
  ulonglong local_558;
  double local_550;
  double local_548;
  double local_540;
  double local_538;
  double local_530;
  ulonglong local_528;
  ulonglong local_520;
  ulonglong local_518;
  undefined1 **local_508;
  undefined1 **local_500;
  char local_4f8;
  undefined1 *local_4f0 [3];
  undefined1 local_4d8 [16];
  undefined8 local_4c8;
  int local_4c0 [4];
  undefined1 local_4b0 [24];
  undefined1 local_498 [16];
  undefined8 local_488;
  undefined1 local_480 [24];
  undefined1 local_468 [16];
  undefined8 local_458;
  undefined1 local_450 [16];
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined1 auStack_428 [16];
  ulonglong uStack_418;
  undefined1 local_410 [24];
  undefined1 local_3f8 [16];
  undefined8 local_3e8;
  undefined1 local_3e0 [8];
  longlong local_3d8;
  longlong lStack_3d0;
  undefined8 uStack_3c8;
  undefined8 auStack_3c0 [2];
  undefined8 local_3b0;
  undefined1 local_3a8 [16];
  undefined8 local_398;
  undefined1 local_390 [16];
  undefined8 local_380;
  undefined1 local_378 [16];
  undefined8 local_368;
  undefined1 local_360 [16];
  undefined8 local_350;
  undefined1 local_348 [24];
  undefined1 local_330;
  undefined1 local_328 [8];
  undefined1 *local_320;
  undefined1 local_318 [24];
  undefined1 local_300 [8];
  undefined8 local_2f8;
  ulonglong uStack_2f0;
  undefined1 local_2e8 [24];
  undefined1 local_2d0 [16];
  undefined8 local_2c0;
  undefined1 local_2b8 [24];
  undefined1 local_2a0 [16];
  undefined8 local_290;
  undefined1 local_288 [24];
  undefined1 local_270 [16];
  undefined8 local_260;
  undefined1 local_258 [16];
  undefined8 local_248;
  undefined1 local_240 [16];
  undefined8 local_230;
  undefined1 local_228 [16];
  undefined8 local_218;
  undefined1 local_210 [16];
  undefined8 local_200;
  undefined1 local_1f8 [16];
  undefined8 local_1e8;
  undefined1 local_1e0 [16];
  undefined8 local_1d0;
  undefined1 local_1c8 [16];
  undefined8 local_1b8;
  undefined1 local_1b0 [16];
  undefined8 local_1a0;
  undefined1 local_198 [64];
  undefined1 local_158 [16];
  char local_148;
  undefined1 local_138 [16];
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 local_118 [16];
  size_t sStack_108;
  ulonglong uStack_100;
  undefined1 local_f8 [8];
  undefined1 local_f0 [8];
  undefined1 local_e8 [16];
  undefined8 uStack_d8;
  undefined1 uStack_d0;
  undefined7 uStack_cf;
  undefined1 **ppuStack_c8;
  undefined8 local_c0;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  ulonglong local_a0;
  undefined8 *******local_98;
  undefined8 uStack_90;
  size_t sStack_88;
  ulonglong uStack_80;
  undefined1 local_78;
  undefined7 uStack_77;
  undefined8 uStack_70;
  ulonglong uStack_68;
  undefined8 uStack_60;
  ulonglong local_58;
  
  local_58 = DAT_1808d5f00 ^ (ulonglong)auStack_578;
  local_508 = (undefined1 **)((ulonglong)local_508 & 0xffffffff00000000);
  LOCK();
  UNLOCK();
  if (DAT_180bb93ad != '\0') {
    DAT_180bb93aa = param_1;
  }
  DAT_180bb93aa = param_1;
  local_4f8 = param_1;
  UVar18 = GetTickCount64();
  if (UVar18 < DAT_180bbea88) {
  }
  UVar18 = GetTickCount64();
  DAT_180bbea88 = UVar18 + 0x3c;
  local_450 = ZEXT816(0x1807c5ef8);
  FUN_18017bf40(local_450 + 8);
  local_500 = (undefined1 **)&DAT_1808da860;
  iVar12 = FUN_1805f68d0(&DAT_1808da860);
  if (iVar12 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_1808da8ac == 0x7fffffff) {
    DAT_1808da8ac = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  if (DAT_180bb93ad != '\0') {
    FUN_1805f68fc(&DAT_1808da860);
    FUN_18017bf40(&local_500);
    ppuVar34 = local_500;
    uVar37 = (longlong)local_500 - local_450._8_8_;
    puVar19 = (ulonglong *)FUN_1801c67a0();
    local_558 = *puVar19 + 1;
    *puVar19 = local_558;
    uVar24 = puVar19[1];
    puVar19[1] = uVar24 + uVar37;
    local_528 = puVar19[3] + (ulonglong)(999999 < uVar37);
    puVar19[3] = local_528;
    local_520 = puVar19[4] + (ulonglong)(4999999 < uVar37);
    puVar19[4] = local_520;
    local_518 = puVar19[5] + (ulonglong)(15999999 < uVar37);
    puVar19[5] = local_518;
    uVar30 = puVar19[2];
    if (puVar19[2] < uVar37) {
      puVar19[2] = uVar37;
      uVar30 = uVar37;
    }
    if ((ppuVar34 != (undefined1 **)puVar19[7]) && ((longlong)ppuVar34 < (longlong)puVar19[7])) {
    }
    local_538 = (double)(longlong)((longlong)ppuVar34 - puVar19[6]) / 1000000.0;
    dVar4 = (double)(uVar24 + uVar37);
    local_530 = 0.0;
    if (0.0 < local_538) {
      local_530 = (dVar4 / 1000.0) / local_538;
    }
    local_540 = dVar4 / 1000000.0;
    local_548 = (double)uVar30 / 1000.0;
    local_550 = (dVar4 / (double)local_558) / 1000.0;
    FUN_1801af8a0(dVar4 / (double)local_558,local_550,local_450._0_8_);
    puVar19[6] = (ulonglong)ppuVar34;
    goto LAB_1801c5476;
  }
  if (DAT_180bbea78 == '\0') {
    FUN_1801c6dc0(&DAT_180bbea60);
    DAT_180bbea78 = '\x01';
  }
                    /* WARNING (jumptable): Read-only address (ram,0x00018086d450) is written */
  FUN_1805f68fc(&DAT_1808da860);
  if (param_1 == '\0') {
    local_440 = 0;
    uStack_438 = 0;
    uStack_430 = 0;
    auStack_428 = ZEXT816(0);
    auVar9 = auStack_428;
    uStack_418 = uStack_418 & 0xffffffffffff0000;
    local_138._0_8_ = 0;
    local_138._8_8_ = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    auStack_428._8_8_ = 0;
    uStack_d8 = (undefined8)DAT_18086d450;
    uStack_d0 = DAT_18086d450._8_1_;
    uStack_cf = DAT_18086d450._9_7_;
    local_e8._1_15_ = SUB1615((undefined1  [16])0x0,1);
    auVar5[0xf] = 0;
    auVar5._0_15_ = local_e8._1_15_;
    local_e8 = auVar5 << 8;
    pauVar20 = &local_e8;
    bVar7 = false;
    bVar6 = true;
    local_3d8 = local_138._0_8_;
    lStack_3d0 = local_138._8_8_;
    uStack_3c8 = uStack_128;
    auStack_3c0[0] = uStack_120;
    local_2f8 = auStack_428._8_8_;
    uStack_2f0 = uStack_418;
  }
  else {
    AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
    local_138._0_8_ = _DAT_180bb8890;
    local_138._8_8_ = lRam0000000180bb8898;
    uStack_128 = uRam0000000180bb88a0;
    uStack_120 = uRam0000000180bb88a8;
    uVar41 = _DAT_180bb88b0;
    uVar24 = uRam0000000180bb88b8;
                    /* WARNING (jumptable): Read-only address (ram,0x00018086d450) is written */
    ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
    local_118._0_8_ = &DAT_180b90800;
    if (0xf < DAT_180b90818) {
      local_118._0_8_ = DAT_180b90800;
    }
    local_118._8_8_ = DAT_180b90810;
    local_3d8 = local_138._0_8_;
    lStack_3d0 = local_138._8_8_;
    uStack_3c8 = uStack_128;
    auStack_3c0[0] = uStack_120;
    local_2f8 = uVar41;
    uStack_2f0 = uVar24;
    pauVar20 = (undefined1 (*) [16])FUN_1801bd830(local_158,local_118);
    bVar7 = true;
    bVar6 = false;
    auVar9 = auStack_428;
  }
  auStack_428 = auVar9;
  local_98 = *(undefined8 ********)*pauVar20;
  uStack_90 = *(undefined8 *)(*pauVar20 + 8);
  local_118 = *pauVar20;
  sStack_108 = *(size_t *)pauVar20[1];
  uStack_100 = *(ulonglong *)(pauVar20[1] + 8);
  sStack_88 = sStack_108;
  uStack_80 = uStack_100;
  (*pauVar20)[0] = 0;
  *(undefined8 *)pauVar20[1] = 0;
  *(undefined8 *)(pauVar20[1] + 8) = 0xf;
  if (bVar6) {
    FUN_18015c010(local_e8);
  }
  if (bVar7) {
    FUN_18015c010(local_158);
  }
  if (param_1 == '\0') {
    _Size = sStack_88;
LAB_1801c34ab:
    LOCK();
    DAT_180bb93ab = 0;
    UNLOCK();
    if (param_1 != '\0') goto LAB_1801c34b8;
  }
  else {
    _Size = sStack_108;
    if (sStack_108 != 0) goto LAB_1801c34ab;
    LOCK();
    DAT_180bb93ab = 1;
    UNLOCK();
LAB_1801c34b8:
    if (_Size == 0) {
      local_500 = (undefined1 **)&DAT_1808da810;
      iVar12 = FUN_1805f68d0(&DAT_1808da810);
      if (iVar12 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808da85c == 0x7fffffff) {
        DAT_1808da85c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if (DAT_180bbea80 == DAT_1808d9be0) {
        puVar22 = &DAT_1808da8f0;
        if (0xf < DAT_1808da908) {
          puVar22 = _DAT_1808da8f0;
        }
        FUN_180113930(&local_98,puVar22,DAT_1808da900);
        _Size = sStack_88;
      }
      FUN_1805f68fc(&DAT_1808da810);
    }
  }
  iVar12 = DAT_180bb8950;
  if (DAT_180bb8950 == 0) {
    UVar18 = GetTickCount64();
    if (UVar18 < DAT_180bb8948) {
      iVar12 = 0;
    }
    else {
      local_500 = (undefined1 **)&DAT_1808d9e70;
      iVar12 = FUN_1805f68d0(&DAT_1808d9e70);
      if (iVar12 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808d9ebc == 0x7fffffff) {
        DAT_1808d9ebc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if ((DAT_180bb8950 == 0) && (DAT_180bb8948 <= UVar18)) {
        DAT_180bb8950 = FUN_1804174b0("C_BaseEntity",0xa5bfefb3);
        if (DAT_180bb8950 == 0) {
          DAT_180bb8948 = UVar18 + 1000;
        }
        else {
          DAT_180bb8948 = 0xffffffffffffffff;
        }
      }
      iVar12 = DAT_180bb8950;
      FUN_1805f68fc(&DAT_1808d9e70);
    }
  }
  uVar41 = local_138._8_8_;
  cVar10 = FUN_1801c6110(local_138._8_8_,iVar12);
  uVar24 = uStack_80;
  pppppppuVar8 = local_98;
  iVar12 = DAT_1808d9be0;
  if (param_1 == '\0') {
    lVar38 = local_3d8;
LAB_1801c3627:
    DAT_180bb93ac = '\0';
  }
  else {
    lVar38 = local_138._0_8_;
    if ((((local_138._0_8_ == 0) || (uVar41 == 0)) || (_Size == 0)) || (1 < (byte)(cVar10 - 2U)))
    goto LAB_1801c3627;
    DAT_180bb93ac = '\x01';
  }
  LOCK();
  UNLOCK();
  _Buf2 = &DAT_1808da910;
  if (0xf < DAT_1808da928) {
    _Buf2 = (undefined8 **)DAT_1808da910;
  }
  pppppppuVar28 = &local_98;
  if (0xf < uStack_80) {
    pppppppuVar28 = local_98;
  }
  if (((_Size != DAT_1808da920) ||
      ((_Size != 0 && (iVar13 = memcmp(pppppppuVar28,_Buf2,_Size), iVar13 != 0)))) ||
     (iVar12 != DAT_180bbeaa4)) {
    pppppppuVar28 = &local_98;
    if (0xf < uVar24) {
      pppppppuVar28 = pppppppuVar8;
    }
    FUN_180113930(&DAT_1808da910,pppppppuVar28,_Size);
    DAT_180bbeaa4 = iVar12;
    DAT_180bbeaac = 0;
    DAT_180bbeaa8 = 0;
    _Size = sStack_88;
  }
  FUN_1800e60e0(local_480,"processId");
  DVar14 = GetCurrentProcessId();
  local_468 = ZEXT816(0);
  FUN_1801409d0(local_468 + 8,0);
  local_468[0] = 6;
  local_468._8_4_ = DVar14;
  local_468._12_4_ = 0;
  local_458 = 0;
  local_118._0_8_ = local_480;
  local_118._8_8_ = local_450;
  FUN_1800f4e90(&local_3d8,local_118,1,2);
  uStack_3c8 = 0;
  FUN_1800e60e0(local_4b0,"sequence");
  lVar33 = DAT_180bbea90 + 1;
  local_498 = ZEXT816(0);
  DAT_180bbea90 = lVar33;
  FUN_1801409d0(local_498 + 8,0);
  local_498[0] = 6;
  local_498._8_8_ = lVar33;
  local_488 = 0;
  local_118._0_8_ = local_4b0;
  local_118._8_8_ = local_480;
  FUN_1800f4e90(auStack_3c0,local_118,1,2);
  local_3b0 = 0;
  FUN_1800e60e0(local_4f0,"issuedAtMs");
  lVar33 = _Xtime_get_ticks();
  local_4d8 = ZEXT816(0);
  FUN_1801409d0(local_4d8 + 8,0);
  local_4d8[0] = 5;
  local_4d8._8_8_ = lVar33 / 10000;
  local_4c8 = 0;
  local_118._0_8_ = local_4f0;
  local_118._8_8_ = local_4c0;
  FUN_1800f4e90(local_3a8,local_118,1,2);
  local_398 = 0;
  FUN_1800e60e0(local_e8,"active");
  uStack_cf = 0;
  uStack_d0 = 0;
  ppuStack_c8 = (undefined1 **)0x0;
  FUN_1801409d0(&ppuStack_c8,0);
  uStack_d0 = 4;
  local_500 = (undefined1 **)((ulonglong)local_500 & 0xffffffffffffff00);
  ppuStack_c8 = local_500;
  local_c0 = 0;
  local_118._0_8_ = local_e8;
  local_118._8_8_ = local_b8;
  FUN_1800f4e90(local_390,local_118,1,2);
  local_380 = 0;
  local_118._8_8_ = local_378;
  local_118._0_8_ = &local_3d8;
  FUN_1800f4e90(local_f8,local_118,1,2);
  _eh_vector_destructor_iterator_(&local_3d8,0x18,4,FUN_1800aab30);
  _eh_vector_destructor_iterator_(local_e8,0x18,2,FUN_1800aab30);
  _eh_vector_destructor_iterator_(local_4f0,0x18,2,FUN_1800aab30);
  _eh_vector_destructor_iterator_(local_4b0,0x18,2,FUN_1800aab30);
  _eh_vector_destructor_iterator_(local_480,0x18,2,FUN_1800aab30);
  if (DAT_180bb93ac == '\0') {
    pcVar31 = "No game detected";
  }
  else if (_Size == 0) {
    pcVar31 = "Detecting the current map";
  }
  else if ((lVar38 == 0) || (pcVar31 = "Reading match identity", uVar41 == 0)) {
    pcVar31 = "Waiting for player data";
  }
  local_b8 = (undefined1  [16])0x0;
  local_a8 = 0;
  local_a0 = 0;
  lVar38 = -1;
  do {
    lVar38 = lVar38 + 1;
  } while (pcVar31[lVar38] != '\0');
  FUN_18015ba30(local_b8);
  if (DAT_180bb93ac != '\0') {
    cVar10 = FUN_18003b060();
    lVar38 = DAT_180bb88d0;
    if (cVar10 != '\0') {
      lVar33 = FUN_18017ea70();
      *(int *)(lVar33 + 4) = *(int *)(lVar33 + 4) + 1;
      if (lVar38 == 0) {
        bVar6 = false;
        ppuVar34 = local_500;
      }
      else {
        local_508 = (undefined1 **)0x0;
        cVar10 = FUN_1804514f0(&local_508,lVar38,8);
        if (cVar10 == '\0') {
          bVar6 = false;
          ppuVar34 = local_500;
        }
        else {
          bVar6 = true;
          ppuVar34 = local_508;
        }
      }
      lVar38 = FUN_18017ea70();
      if (*(int *)(lVar38 + 4) != 0) {
        *(int *)(lVar38 + 4) = *(int *)(lVar38 + 4) + -1;
      }
      ppuVar40 = (undefined1 **)0x0;
      if (bVar6) {
        ppuVar40 = ppuVar34;
      }
      uVar24 = (ulonglong)DAT_180bb8940;
      local_500 = ppuVar40;
      if (DAT_180bb8940 == 0) {
        UVar18 = GetTickCount64();
        if (UVar18 < DAT_180bb8938) {
          uVar24 = 0;
        }
        else {
          local_508 = (undefined1 **)&DAT_1808d9e20;
          iVar12 = FUN_1805f68d0(&DAT_1808d9e20);
          if (iVar12 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1805f6d44(5);
          }
          if (DAT_1808d9e6c == 0x7fffffff) {
            DAT_1808d9e6c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
            FUN_1805f6d44(6);
          }
          uVar24 = (ulonglong)DAT_180bb8940;
          if ((DAT_180bb8940 == 0) && (DAT_180bb8938 <= UVar18)) {
            DAT_180bb8940 = FUN_1804174b0("C_CSGameRules",0x2de0044b);
            uVar24 = (ulonglong)DAT_180bb8940;
            if (DAT_180bb8940 == 0) {
              DAT_180bb8938 = UVar18 + 1000;
            }
            else {
              DAT_180bb8938 = 0xffffffffffffffff;
            }
          }
          FUN_1805f68fc(&DAT_1808d9e20);
        }
      }
      if ((ppuVar40 == (undefined1 **)0x0) || ((int)uVar24 == 0)) {
        iVar12 = 0;
      }
      else {
        lVar38 = FUN_18017ea70();
        *(int *)(lVar38 + 4) = *(int *)(lVar38 + 4) + 1;
        if ((undefined *)(uVar24 + (longlong)ppuVar40) == (undefined *)0x0) {
          bVar6 = false;
          iVar13 = (int)local_508;
        }
        else {
          local_4f0[0] = (undefined1 *)((ulonglong)local_4f0[0] & 0xffffffff00000000);
          cVar10 = FUN_1804514f0(local_4f0,(undefined *)(uVar24 + (longlong)ppuVar40),4);
          if (cVar10 == '\0') {
            bVar6 = false;
            iVar13 = (int)local_508;
          }
          else {
            bVar6 = true;
            iVar13 = (int)local_4f0[0];
          }
        }
        lVar38 = FUN_18017ea70();
        if (*(int *)(lVar38 + 4) != 0) {
          *(int *)(lVar38 + 4) = *(int *)(lVar38 + 4) + -1;
        }
        iVar12 = 0;
        if (bVar6) {
          iVar12 = iVar13;
        }
      }
      iVar13 = DAT_180bb8930;
      if (DAT_180bb8930 == 0) {
        UVar18 = GetTickCount64();
        if (UVar18 < DAT_180bb8928) {
          iVar13 = 0;
        }
        else {
          local_508 = (undefined1 **)&DAT_1808d9dd0;
          iVar13 = FUN_1805f68d0(&DAT_1808d9dd0);
          if (iVar13 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1805f6d44(5);
          }
          if (DAT_1808d9e1c == 0x7fffffff) {
            DAT_1808d9e1c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
            FUN_1805f6d44(6);
          }
          if ((DAT_180bb8930 == 0) && (DAT_180bb8928 <= UVar18)) {
            DAT_180bb8930 = FUN_1804174b0("C_CSGameRules",0x386c0c9b);
            if (DAT_180bb8930 == 0) {
              DAT_180bb8928 = UVar18 + 1000;
            }
            else {
              DAT_180bb8928 = 0xffffffffffffffff;
            }
          }
          iVar13 = DAT_180bb8930;
          FUN_1805f68fc(&DAT_1808d9dd0);
        }
      }
      fVar44 = 0.0;
      uVar41 = FUN_1801c6230(ppuVar40,iVar13,0);
      sVar11 = thunk_FUN_180624430();
      if (sVar11 < 1) {
        uVar42 = extraout_XMM0_Qa;
        if ((float)uVar41 <= fVar44) goto LAB_1801c3d3b;
      }
      else {
LAB_1801c3d3b:
        iVar13 = DAT_180bb8920;
        if (DAT_180bb8920 == 0) {
          UVar18 = GetTickCount64();
          if (UVar18 < DAT_180bb8918) {
            iVar13 = 0;
          }
          else {
            local_508 = (undefined1 **)&DAT_1808d9d80;
            iVar13 = FUN_1805f68d0(&DAT_1808d9d80);
            if (iVar13 != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_1805f6d44(5);
            }
            if (DAT_1808d9dcc == 0x7fffffff) {
              DAT_1808d9dcc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
              FUN_1805f6d44(6);
            }
            if ((DAT_180bb8920 == 0) && (DAT_180bb8918 <= UVar18)) {
              DAT_180bb8920 = FUN_1804174b0("C_CSGameRules",0x4e0446e);
              if (DAT_180bb8920 == 0) {
                DAT_180bb8918 = UVar18 + 1000;
              }
              else {
                DAT_180bb8918 = 0xffffffffffffffff;
              }
            }
            iVar13 = DAT_180bb8920;
            FUN_1805f68fc(&DAT_1808d9d80);
          }
        }
        uVar42 = FUN_1801c6230(ppuVar40,iVar13,0);
        uVar41 = uVar42;
      }
      if ((DAT_180bbeaa8 == 0) && (DAT_180bbeaac == 0)) {
        if (iVar12 == 0) {
          sVar11 = thunk_FUN_180624430(uVar41);
          uVar42 = extraout_XMM0_Qa_00;
          if ((0 < sVar11) || ((float)uVar41 <= 2.0)) goto LAB_1801c3e30;
        }
        DAT_180bbeaac = (int)uVar41;
        DAT_180bbeaa8 = iVar12;
      }
LAB_1801c3e30:
      uVar41 = 0;
      puVar21 = (undefined8 *)FUN_1803d44c0(uVar42,local_118,2);
      for (puVar23 = (undefined8 *)*puVar21; puVar23 != (undefined8 *)puVar21[1];
          puVar23 = puVar23 + 3) {
        if (*(int *)(puVar23 + 1) == 0x75ddc158) {
          iVar12 = DAT_180bb8910;
          if (DAT_180bb8910 == 0) {
            UVar18 = GetTickCount64();
            if (UVar18 < DAT_180bb8908) {
              iVar12 = 0;
            }
            else {
              local_508 = (undefined1 **)&DAT_1808d9d30;
              iVar12 = FUN_1805f68d0(&DAT_1808d9d30);
              if (iVar12 != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_1805f6d44(5);
              }
              if (DAT_1808d9d7c == 0x7fffffff) {
                DAT_1808d9d7c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
                FUN_1805f6d44(6);
              }
              if ((DAT_180bb8910 == 0) && (DAT_180bb8908 <= UVar18)) {
                DAT_180bb8910 = FUN_1804174b0("C_BaseEntity",0x6d279c31);
                if (DAT_180bb8910 == 0) {
                  DAT_180bb8908 = UVar18 + 1000;
                }
                else {
                  DAT_180bb8908 = 0xffffffffffffffff;
                }
              }
              iVar12 = DAT_180bb8910;
              FUN_1805f68fc(&DAT_1808d9d30);
            }
          }
          uVar15 = FUN_1801c61a0(*puVar23,iVar12);
          uVar41 = FUN_1803d4150(extraout_XMM0_Qa_01,uVar15);
          break;
        }
      }
      FUN_1801abba0(local_118);
      uVar42 = local_138._0_8_;
      local_558 = CONCAT71(local_558._1_7_,1);
      local_550 = (double)uVar41;
      FUN_1801becd0(local_e8,local_138._0_8_,local_138._8_8_,0);
      cVar10 = (char)uStack_d8;
      if (cVar10 == '\0') {
        FUN_180113930(local_b8,"Waiting for player position",0x1b);
        cVar10 = (char)uStack_d8;
        if (cVar10 != '\0') goto LAB_1801c3fdc;
      }
      else {
LAB_1801c3fdc:
        if ((DAT_180bbeaa8 != 0) || (DAT_180bbeaac != 0)) {
          FUN_180113930(local_b8,"Connecting live radar",0x15);
          local_4f0[0] = local_158;
          local_158 = ZEXT816(0);
          FUN_1801409d0(local_158 + 8,0);
          local_158[0] = 4;
          local_508 = (undefined1 **)CONCAT71(local_508._1_7_,1);
          local_158._8_8_ = local_508;
          local_138 = (undefined1  [16])0x0;
          uStack_128 = 0;
          uStack_120 = 0;
          FUN_18015ba30(local_138,"active",6);
          puVar22 = (undefined1 *)FUN_1800f43d0(local_f8,local_138);
          auVar5 = local_158;
          uVar2 = *puVar22;
          *puVar22 = local_158[0];
          local_158[0] = uVar2;
          auVar9 = local_158;
          uVar43 = *(undefined8 *)(puVar22 + 8);
          local_158._8_8_ = auVar5._8_8_;
          *(undefined8 *)(puVar22 + 8) = local_158._8_8_;
          local_158._0_8_ = auVar9._0_8_;
          local_158._8_8_ = uVar43;
          FUN_1801409d0(local_158 + 8,uVar2);
          local_4f0[0] = local_158;
          local_158 = ZEXT816(0);
          FUN_1801409d0(local_158 + 8,0);
          local_158[0] = 3;
          FUN_180111c50(&local_508,&local_98);
          local_158._8_8_ = local_508;
          local_138 = (undefined1  [16])0x0;
          uStack_128 = 0;
          uStack_120 = 0;
          FUN_18015ba30(local_138,&DAT_1807c5fc8,3);
          puVar22 = (undefined1 *)FUN_1800f43d0(local_f8,local_138);
          auVar5 = local_158;
          uVar2 = *puVar22;
          *puVar22 = local_158[0];
          local_158[0] = uVar2;
          auVar9 = local_158;
          uVar43 = *(undefined8 *)(puVar22 + 8);
          local_158._8_8_ = auVar5._8_8_;
          *(undefined8 *)(puVar22 + 8) = local_158._8_8_;
          local_158._0_8_ = auVar9._0_8_;
          local_158._8_8_ = uVar43;
          FUN_1801409d0(local_158 + 8,uVar2);
          local_508 = (undefined1 **)local_158;
          local_158 = ZEXT816(0);
          lVar38 = (longlong)DAT_180bbeaa8;
          FUN_1801409d0(local_158 + 8,0);
          local_158[0] = 5;
          local_158._8_8_ = lVar38;
          local_138 = (undefined1  [16])0x0;
          uStack_128 = 0;
          uStack_120 = 0;
          FUN_18015ba30(local_138,"matchSeed",9);
          puVar22 = (undefined1 *)FUN_1800f43d0(local_f8,local_138);
          auVar5 = local_158;
          uVar2 = *puVar22;
          *puVar22 = local_158[0];
          local_158[0] = uVar2;
          auVar9 = local_158;
          uVar43 = *(undefined8 *)(puVar22 + 8);
          local_158._8_8_ = auVar5._8_8_;
          *(undefined8 *)(puVar22 + 8) = local_158._8_8_;
          local_158._0_8_ = auVar9._0_8_;
          local_158._8_8_ = uVar43;
          FUN_1801409d0(local_158 + 8,uVar2);
          local_508 = (undefined1 **)local_158;
          local_158 = ZEXT816(0);
          lVar38 = (longlong)DAT_180bbeaac;
          FUN_1801409d0(local_158 + 8,0);
          local_158[0] = 5;
          local_158._8_8_ = lVar38;
          local_138 = (undefined1  [16])0x0;
          uStack_128 = 0;
          uStack_120 = 0;
          FUN_18015ba30(local_138,"matchStartBits",0xe);
          puVar22 = (undefined1 *)FUN_1800f43d0(local_f8,local_138);
          auVar5 = local_158;
          uVar2 = *puVar22;
          *puVar22 = local_158[0];
          local_158[0] = uVar2;
          auVar9 = local_158;
          uVar43 = *(undefined8 *)(puVar22 + 8);
          local_158._8_8_ = auVar5._8_8_;
          *(undefined8 *)(puVar22 + 8) = local_158._8_8_;
          local_158._0_8_ = auVar9._0_8_;
          local_158._8_8_ = uVar43;
          FUN_1801409d0(local_158 + 8,uVar2);
          local_158 = (undefined1  [16])0x0;
          uVar43 = FUN_1800f4e90(local_118,local_158,0,2);
          puVar23 = (undefined8 *)FUN_1803d44c0(uVar43,local_138,1);
          plVar39 = (longlong *)*puVar23;
          plVar3 = (longlong *)puVar23[1];
          plVar32 = (longlong *)local_118._8_8_;
          for (; plVar39 != plVar3; plVar39 = plVar39 + 3) {
            if ((*plVar39 != uVar42) && (-1 < *(short *)((longlong)plVar39 + 0xc))) {
              switch(local_118[0]) {
              default:
                goto switchD_1801c4427_caseD_0;
              case '\x01':
                uVar24 = plVar32[1];
                break;
              case '\x02':
                uVar24 = plVar32[1] - *plVar32 >> 4;
              }
              if (uVar24 < 0x40) {
switchD_1801c4427_caseD_0:
                iVar12 = DAT_180bb8900;
                if (DAT_180bb8900 == 0) {
                  UVar18 = GetTickCount64();
                  if (UVar18 < DAT_180bb88f8) {
                    iVar12 = 0;
                  }
                  else {
                    local_4f0[0] = &DAT_1808d9ce0;
                    iVar12 = FUN_1805f68d0(&DAT_1808d9ce0);
                    if (iVar12 != 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_1805f6d44(5);
                    }
                    if (DAT_1808d9d2c == 0x7fffffff) {
                      DAT_1808d9d2c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
                      FUN_1805f6d44(6);
                    }
                    if ((DAT_180bb8900 == 0) && (DAT_180bb88f8 <= UVar18)) {
                      DAT_180bb8900 = FUN_1804174b0("CBasePlayerController",0x7c628c1d);
                      DAT_180bb88f8 = 0xffffffffffffffff;
                      if (DAT_180bb8900 == 0) {
                        DAT_180bb88f8 = UVar18 + 1000;
                      }
                    }
                    iVar12 = DAT_180bb8900;
                    FUN_1805f68fc(&DAT_1808d9ce0);
                  }
                }
                uVar15 = FUN_1801c61a0(*plVar39,iVar12);
                uVar43 = FUN_1803d4150(extraout_XMM0_Qa_02,uVar15);
                local_558 = local_558 & 0xffffffffffffff00;
                local_550 = (double)uVar41;
                FUN_1801becd0(local_158,*plVar39,uVar43,(int)*(short *)((longlong)plVar39 + 0xc));
                if (local_148 != '\0') {
                  if ((local_118[0] != '\0') && (local_118[0] != '\x02')) {
                    local_500 = (undefined1 **)FUN_180112a50(local_118);
                    uVar41 = FUN_1800f6bd0(local_4f0,"cannot use push_back() with ",&local_500);
                    FUN_1800f6ca0(local_198,0x134,uVar41);
                    /* WARNING: Subroutine does not return */
                    FUN_180606630(local_198,&DAT_1808d1050);
                  }
                  if (local_118[0] == '\0') {
                    local_118[0] = 2;
                    FUN_180111d10(&local_508,2);
                    local_118._8_8_ = local_508;
                    ppuVar34 = local_508;
                  }
                  else {
                    ppuVar34 = (undefined1 **)local_118._8_8_;
                  }
                  puVar22 = ppuVar34[1];
                  if (puVar22 == ppuVar34[2]) {
                    FUN_1801c7210(ppuVar34,puVar22,local_158);
                  }
                  else {
                    FUN_1800f4a50(puVar22,local_158);
                    ppuVar34[1] = ppuVar34[1] + 0x10;
                  }
                }
                if (local_148 != '\0') {
                  FUN_1800aab30(local_158);
                }
                plVar32 = (longlong *)local_118._8_8_;
              }
            }
          }
          FUN_1801abba0(local_138);
          iVar13 = 0;
          iVar12 = 0;
          local_4f0[0] = (undefined1 *)((ulonglong)local_4f0[0] & 0xffffffff00000000);
          local_4c0[2] = 0x1e;
          local_4c0[0] = 0;
          uVar24 = (ulonglong)DAT_180bb88f0;
          if (DAT_180bb88f0 == 0) {
            UVar18 = GetTickCount64();
            if (UVar18 < DAT_180bb88e8) {
              uVar24 = 0;
            }
            else {
              local_508 = (undefined1 **)&DAT_1808d9c90;
              iVar16 = FUN_1805f68d0(&DAT_1808d9c90);
              if (iVar16 != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_1805f6d44(5);
              }
              if (DAT_1808d9cdc == 0x7fffffff) {
                DAT_1808d9cdc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
                FUN_1805f6d44(6);
              }
              uVar24 = (ulonglong)DAT_180bb88f0;
              if ((DAT_180bb88f0 == 0) && (DAT_180bb88e8 <= UVar18)) {
                DAT_180bb88f0 = FUN_1804174b0("C_CSGameRules",0x56632103);
                uVar24 = (ulonglong)DAT_180bb88f0;
                if (DAT_180bb88f0 == 0) {
                  DAT_180bb88e8 = UVar18 + 1000;
                }
                else {
                  DAT_180bb88e8 = 0xffffffffffffffff;
                }
              }
              FUN_1805f68fc(&DAT_1808d9c90);
            }
          }
          if ((local_500 == (undefined1 **)0x0) || ((int)uVar24 == 0)) {
            local_4c0[1] = 0;
          }
          else {
            puVar35 = (undefined *)(uVar24 + (longlong)local_500);
            lVar38 = FUN_18017ea70();
            *(int *)(lVar38 + 4) = *(int *)(lVar38 + 4) + 1;
            bVar6 = false;
            if (puVar35 != (undefined *)0x0) {
              local_508 = (undefined1 **)((ulonglong)local_508 & 0xffffffff00000000);
              cVar10 = FUN_1804514f0(&local_508,puVar35,4);
              if (cVar10 == '\0') {
                bVar6 = false;
              }
              else {
                bVar6 = true;
              }
            }
            iVar16 = (int)local_508;
            lVar38 = FUN_18017ea70();
            if (*(int *)(lVar38 + 4) != 0) {
              *(int *)(lVar38 + 4) = *(int *)(lVar38 + 4) + -1;
            }
            local_4c0[1] = 0;
            if (bVar6) {
              local_4c0[1] = iVar16;
            }
          }
          piVar29 = local_4c0;
          if (-1 < local_4c0[1]) {
            piVar29 = local_4c0 + 1;
          }
          piVar25 = local_4c0 + 2;
          if (local_4c0[1] < 0x1f) {
            piVar25 = piVar29;
          }
          iVar16 = *piVar25;
          iVar17 = DAT_180bb88e0;
          if (DAT_180bb88e0 != 0) {
LAB_1801c47fb:
            iVar36 = 0;
            iVar12 = (int)local_508;
LAB_1801c4800:
            do {
              if (iVar16 <= iVar36) goto LAB_1801c4891;
              uVar1 = iVar17 + iVar36 * 4;
              if ((local_500 != (undefined1 **)0x0) && (uVar1 != 0)) {
                puVar35 = (undefined *)((ulonglong)uVar1 + (longlong)local_500);
                lVar38 = FUN_18017ea70();
                *(int *)(lVar38 + 4) = *(int *)(lVar38 + 4) + 1;
                bVar6 = false;
                if (puVar35 != (undefined *)0x0) {
                  local_508 = (undefined1 **)((ulonglong)local_508 & 0xffffffff00000000);
                  cVar10 = FUN_1804514f0(&local_508,puVar35,4);
                  if (cVar10 == '\0') {
                    bVar6 = false;
                  }
                  else {
                    bVar6 = true;
                    iVar12 = (int)local_508;
                  }
                }
                lVar38 = FUN_18017ea70();
                if (*(int *)(lVar38 + 4) != 0) {
                  *(int *)(lVar38 + 4) = *(int *)(lVar38 + 4) + -1;
                }
                iVar27 = 0;
                if (bVar6) {
                  iVar27 = iVar12;
                }
                if (iVar27 - 1U < 4) {
                  local_4f0[0] = (undefined1 *)CONCAT44(local_4f0[0]._4_4_,(int)local_4f0[0] + 1);
                  iVar36 = iVar36 + 1;
                  goto LAB_1801c4800;
                }
                if (iVar27 - 5U < 3) {
                  iVar13 = iVar13 + 1;
                }
              }
              iVar36 = iVar36 + 1;
            } while( true );
          }
          UVar18 = GetTickCount64();
          if (DAT_180bb88d8 <= UVar18) {
            local_508 = (undefined1 **)&DAT_1808d9c40;
            iVar17 = FUN_1805f68d0(&DAT_1808d9c40);
            if (iVar17 != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_1805f6d44(5);
            }
            if (DAT_1808d9c8c == 0x7fffffff) {
              DAT_1808d9c8c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
              FUN_1805f6d44(6);
            }
            if ((DAT_180bb88e0 == 0) && (DAT_180bb88d8 <= UVar18)) {
              DAT_180bb88e0 = FUN_1804174b0("C_CSGameRules",0x2bf6608f);
              if (DAT_180bb88e0 == 0) {
                DAT_180bb88d8 = UVar18 + 1000;
              }
              else {
                DAT_180bb88d8 = 0xffffffffffffffff;
              }
            }
            iVar17 = DAT_180bb88e0;
            FUN_1805f68fc(&DAT_1808d9c40);
            if (iVar17 != 0) goto LAB_1801c47fb;
          }
          goto LAB_1801c4899;
        }
      }
      goto LAB_1801c50a7;
    }
  }
LAB_1801c50b8:
  if (local_4f8 == '\0') {
    DAT_180bbeaac = 0;
    DAT_180bbeaa8 = 0;
  }
  local_508 = (undefined1 **)local_118;
  local_118 = ZEXT816(0);
  FUN_1801409d0(local_118 + 8,0);
  local_118[0] = 3;
  FUN_180111c50(&local_500,local_b8);
  local_118._8_8_ = local_500;
  local_138 = (undefined1  [16])0x0;
  uStack_128 = 0;
  uStack_120 = 0;
  FUN_18015ba30(local_138,"status",6);
  puVar22 = (undefined1 *)FUN_1800f43d0(local_f8,local_138);
  auVar5 = local_118;
  uVar2 = *puVar22;
  *puVar22 = local_118[0];
  local_118[0] = uVar2;
  auVar9 = local_118;
  uVar41 = *(undefined8 *)(puVar22 + 8);
  local_118._8_8_ = auVar5._8_8_;
  *(undefined8 *)(puVar22 + 8) = local_118._8_8_;
  local_118._0_8_ = auVar9._0_8_;
  local_118._8_8_ = uVar41;
  FUN_1801409d0(local_118 + 8,uVar2);
  local_550 = (double)CONCAT44(local_550._4_4_,1);
  FUN_1800f4710(local_f8,&local_78,0xffffffff);
  if (uStack_68 < 0x10001) {
    local_500 = (undefined1 **)&DAT_1808da810;
    iVar12 = FUN_1805f68d0(&DAT_1808da810);
    if (iVar12 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1808da85c == 0x7fffffff) {
      DAT_1808da85c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    FUN_18015c010(&DAT_1808da8b0);
    _DAT_1808da8b0 = CONCAT71(uStack_77,local_78);
    uRam00000001808da8b8 = uStack_70;
    DAT_1808da8c0 = uStack_68;
    DAT_1808da8c8 = uStack_60;
    uStack_68 = 0;
    uStack_60 = 0xf;
    local_78 = 0;
    puVar22 = local_b8;
    if (0xf < local_a0) {
      puVar22 = (undefined1 *)local_b8._0_8_;
    }
    FUN_180113930(&DAT_180bb9260,puVar22,local_a8);
    FUN_1805f68fc(&DAT_1808da810);
  }
  FUN_18015c010(&local_78);
  FUN_18015c010(local_b8);
  FUN_1801409d0(local_f0,local_f8[0]);
  FUN_18015c010(&local_98);
  FUN_18017bf40(&local_500);
  ppuVar34 = local_500;
  uVar37 = (longlong)local_500 - local_450._8_8_;
  puVar19 = (ulonglong *)FUN_1801c67a0();
  local_558 = *puVar19 + 1;
  *puVar19 = local_558;
  uVar24 = puVar19[1];
  puVar19[1] = uVar24 + uVar37;
  local_528 = puVar19[3] + (ulonglong)(999999 < uVar37);
  puVar19[3] = local_528;
  local_520 = puVar19[4] + (ulonglong)(4999999 < uVar37);
  puVar19[4] = local_520;
  local_518 = puVar19[5] + (ulonglong)(15999999 < uVar37);
  puVar19[5] = local_518;
  uVar30 = puVar19[2];
  if (puVar19[2] < uVar37) {
    puVar19[2] = uVar37;
    uVar30 = uVar37;
  }
  if ((ppuVar34 != (undefined1 **)puVar19[7]) && ((longlong)ppuVar34 < (longlong)puVar19[7])) {
  }
  local_538 = (double)(longlong)((longlong)ppuVar34 - puVar19[6]) / 1000000.0;
  dVar4 = (double)(uVar24 + uVar37);
  local_530 = 0.0;
  if (0.0 < local_538) {
    local_530 = (dVar4 / 1000.0) / local_538;
  }
  local_540 = dVar4 / 1000000.0;
  local_548 = (double)uVar30 / 1000.0;
  local_550 = (dVar4 / (double)local_558) / 1000.0;
  FUN_1801af8a0(dVar4 / (double)local_558,local_550,local_450._0_8_);
  puVar19[6] = (ulonglong)ppuVar34;
LAB_1801c5476:
  puVar19[7] = (ulonglong)(ppuVar34 + 625000000);
  puVar19[3] = 0;
  puVar19[4] = 0;
  puVar19[5] = 0;
  *puVar19 = 0;
  puVar19[1] = 0;
  puVar19[2] = 0;
                    /* WARNING: Read-only address (ram,0x00018086d450) is written */
LAB_1801c4891:
  iVar12 = (int)local_4f0[0];
LAB_1801c4899:
  local_500 = local_4f0;
  FUN_1800e60e0(&local_3d8,&DAT_1806bf808);
  FUN_1800e60e0(auStack_3c0,"frame");
  local_158._0_8_ = &local_3d8;
  local_158._8_8_ = local_3a8;
  FUN_1800f4e90(local_258,local_158,1,2);
  local_248 = 0;
  FUN_1800e60e0(&local_440,"version");
  auStack_428 = ZEXT816(0);
  FUN_1801409d0(auStack_428 + 8,0);
  auStack_428[0] = 5;
  auStack_428._8_8_ = 1;
  uStack_418 = 0;
  local_158._0_8_ = &local_440;
  local_158._8_8_ = local_410;
  FUN_1800f4e90(local_240,local_158,1,2);
  local_230 = 0;
  FUN_1800e60e0(local_318,&DAT_1807c5fc8);
  FUN_1800e64d0(local_300,&local_98);
  uStack_2f0 = 0;
  local_158._0_8_ = local_318;
  local_158._8_8_ = local_2e8;
  FUN_1800f4e90(local_228,local_158,1,2);
  local_218 = 0;
  FUN_1800e60e0(local_410,"sequence");
  lVar38 = DAT_180bbea90;
  local_3f8 = ZEXT816(0);
  FUN_1801409d0(local_3f8 + 8,0);
  local_3f8[0] = 6;
  local_3f8._8_8_ = lVar38;
  local_3e8 = 0;
  local_158._0_8_ = local_410;
  local_158._8_8_ = local_3e0;
  FUN_1800f4e90(local_210,local_158,1,2);
  local_200 = 0;
  FUN_1800e60e0(local_288,"capturedAt");
  local_138 = (undefined1  [16])0x0;
  uStack_128 = 0;
  uStack_120 = 0;
  FUN_18015ba30(local_138,"issuedAtMs",10);
  uVar41 = FUN_1800f43d0(local_f8,local_138);
  FUN_1800f4a50(local_270,uVar41);
  local_260 = 0;
  local_158._0_8_ = local_288;
  local_158._8_8_ = local_258;
  FUN_1800f4e90(local_1f8,local_158,1,2);
  local_1e8 = 0;
  FUN_1800e60e0(local_348,"local");
  local_330 = 0;
  FUN_180111d10(local_328,0);
  local_320 = local_e8;
  local_158._0_8_ = local_348;
  local_158._8_8_ = local_318;
  FUN_1800f4e90(local_1e0,local_158,1,2);
  local_1d0 = 0;
  FUN_1800e60e0(local_2b8,"players");
  FUN_1800f4a50(local_2a0,local_118);
  local_290 = 0;
  local_158._0_8_ = local_2b8;
  local_158._8_8_ = local_288;
  FUN_1800f4e90(local_1c8,local_158,1,2);
  local_1b8 = 0;
  FUN_1800e60e0(local_2e8,"score");
  FUN_1800e60e0(local_4b0,&DAT_1806bdfcc);
  local_498 = ZEXT816(0);
  FUN_1801409d0(local_498 + 8,0);
  local_498[0] = 5;
  local_498._8_8_ = (longlong)iVar13;
  local_488 = 0;
  local_158._0_8_ = local_4b0;
  local_158._8_8_ = local_480;
  FUN_1800f4e90(local_378,local_158,1,2);
  local_368 = 0;
  FUN_1800e60e0(local_480,&DAT_1806be004);
  local_468 = ZEXT816(0);
  FUN_1801409d0(local_468 + 8,0);
  local_468[0] = 5;
  local_468._8_8_ = (longlong)iVar12;
  local_458 = 0;
  local_158._0_8_ = local_480;
  local_158._8_8_ = local_450;
  FUN_1800f4e90(local_360,local_158,1,2);
  local_350 = 0;
  local_158._0_8_ = local_378;
  local_158._8_8_ = local_348;
  FUN_1800f4e90(local_2d0,local_158,1,2);
  local_2c0 = 0;
  local_158._0_8_ = local_2e8;
  local_158._8_8_ = local_2b8;
  FUN_1800f4e90(local_1b0,local_158,1,2);
  local_1a0 = 0;
  local_158._8_8_ = local_198;
  local_158._0_8_ = local_258;
  puVar22 = (undefined1 *)FUN_1800f4e90(local_4f0,local_158,1,2);
  local_138._0_8_ = 0;
  local_138._8_8_ = 0;
  uStack_128 = 0;
  uStack_120 = 0;
  FUN_18015ba30(local_138,"frame",5);
  puVar26 = (undefined1 *)FUN_1800f43d0(local_f8,local_138);
  uVar2 = *puVar26;
  *puVar26 = *puVar22;
  *puVar22 = uVar2;
  puVar23 = (undefined8 *)(puVar22 + 8);
  uVar41 = *(undefined8 *)(puVar26 + 8);
  *(undefined8 *)(puVar26 + 8) = *puVar23;
  *puVar23 = uVar41;
  FUN_1801409d0(puVar23,*puVar22);
  _eh_vector_destructor_iterator_(local_258,0x18,8,FUN_1800aab30);
  _eh_vector_destructor_iterator_(local_2e8,0x18,2,FUN_1800aab30);
  _eh_vector_destructor_iterator_(local_378,0x18,2,FUN_1800aab30);
  _eh_vector_destructor_iterator_(local_480,0x18,2,FUN_1800aab30);
  _eh_vector_destructor_iterator_(local_4b0,0x18,2,FUN_1800aab30);
  _eh_vector_destructor_iterator_(local_2b8,0x18,2,FUN_1800aab30);
  _eh_vector_destructor_iterator_(local_348,0x18,2,FUN_1800aab30);
  _eh_vector_destructor_iterator_(local_288,0x18,2,FUN_1800aab30);
  _eh_vector_destructor_iterator_(local_410,0x18,2,FUN_1800aab30);
  _eh_vector_destructor_iterator_(local_318,0x18,2,FUN_1800aab30);
  _eh_vector_destructor_iterator_(&local_440,0x18,2,FUN_1800aab30);
  _eh_vector_destructor_iterator_(&local_3d8,0x18,2,FUN_1800aab30);
  FUN_1801409d0(local_118 + 8,local_118[0]);
  cVar10 = (char)uStack_d8;
LAB_1801c50a7:
  if (cVar10 != '\0') {
    FUN_1800aab30(local_e8);
  }
  goto LAB_1801c50b8;
}



