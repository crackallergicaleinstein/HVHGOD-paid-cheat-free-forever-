// FUN_1803ee530 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803ee530 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1803ee530(uint *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  bool bVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  HWND pHVar11;
  int iVar12;
  double dVar13;
  char cVar14;
  char cVar15;
  undefined1 uVar16;
  short sVar17;
  int iVar18;
  BOOL BVar19;
  undefined4 uVar20;
  int iVar21;
  ULONGLONG UVar22;
  HWND pHVar23;
  undefined1 (*pauVar24) [16];
  longlong lVar25;
  ULONGLONG UVar26;
  undefined8 *puVar27;
  undefined *puVar28;
  uint uVar29;
  uint uVar30;
  char *pcVar31;
  uint *******_Buf1;
  ulonglong uVar32;
  longlong lVar33;
  uint *******pppppppuVar34;
  longlong lVar35;
  ulonglong uVar36;
  undefined *puVar37;
  undefined1 *puVar38;
  byte bVar39;
  uint uVar40;
  undefined **ppuVar41;
  bool bVar42;
  undefined4 uVar43;
  undefined1 auVar44 [16];
  uint uVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [64];
  float fVar48;
  undefined1 auVar49 [64];
  undefined8 uVar50;
  undefined8 uVar51;
  undefined1 auVar52 [64];
  undefined1 auVar53 [64];
  undefined1 auVar54 [64];
  undefined4 uVar55;
  undefined1 auVar56 [64];
  undefined4 uVar57;
  undefined1 auStack_1008 [32];
  undefined **local_fe8;
  undefined8 *local_fe0;
  uint local_fd8;
  uint local_fd0;
  double local_fc8;
  double local_fc0;
  double local_fb8;
  double local_fb0;
  byte local_fa8;
  char local_fa7;
  byte local_fa6;
  undefined8 local_fa0;
  ulonglong local_f98;
  uint local_f90;
  uint *******local_f88 [2];
  undefined8 local_f78;
  undefined8 local_f70;
  undefined1 local_f58 [16];
  undefined4 uStack_f48;
  float fStack_f44;
  undefined1 uStack_f40;
  undefined7 uStack_f3f;
  ulonglong auStack_f38 [3];
  undefined4 uStack_f20;
  undefined4 uStack_f1c;
  longlong lStack_f18;
  undefined1 auStack_f10 [16];
  undefined8 uStack_f00;
  undefined1 local_ef8 [24];
  undefined1 local_ee0 [16];
  undefined8 local_ed0;
  undefined1 local_ec8 [24];
  undefined1 local_eb0 [16];
  undefined8 local_ea0;
  undefined1 local_e98 [24];
  undefined1 local_e80 [16];
  undefined8 local_e70;
  undefined1 local_e68 [24];
  undefined1 local_e50 [16];
  undefined8 local_e40;
  undefined1 local_e38 [24];
  undefined1 local_e20 [16];
  undefined8 local_e10;
  undefined1 local_e08 [24];
  undefined1 local_df0 [16];
  undefined8 local_de0;
  undefined1 local_dd8 [24];
  undefined1 local_dc0 [16];
  undefined8 local_db0;
  undefined1 local_da8 [24];
  undefined1 local_d90 [16];
  undefined8 local_d80;
  undefined1 local_d78 [24];
  undefined1 local_d60 [16];
  undefined8 local_d50;
  undefined1 local_d48 [24];
  undefined1 local_d30 [16];
  undefined8 local_d20;
  undefined1 local_d18 [24];
  undefined1 local_d00 [16];
  undefined8 local_cf0;
  undefined1 local_ce8 [24];
  undefined1 local_cd0 [16];
  undefined8 local_cc0;
  undefined1 local_cb8 [24];
  undefined1 local_ca0 [16];
  undefined8 local_c90;
  undefined1 local_c88 [24];
  undefined1 local_c70 [16];
  undefined8 local_c60;
  undefined1 local_c58 [24];
  undefined1 local_c40 [16];
  undefined8 local_c30;
  undefined1 local_c28 [24];
  undefined1 local_c10 [16];
  undefined8 local_c00;
  undefined1 local_bf8 [24];
  undefined1 local_be0 [16];
  undefined8 local_bd0;
  undefined1 local_bc8 [24];
  undefined1 local_bb0 [16];
  undefined8 local_ba0;
  undefined1 local_b98 [24];
  undefined1 local_b80 [16];
  undefined8 local_b70;
  undefined1 local_b68 [24];
  undefined1 local_b50 [16];
  undefined8 local_b40;
  undefined1 local_b38 [24];
  undefined1 local_b20 [16];
  undefined8 local_b10;
  undefined1 local_b08 [24];
  undefined1 local_af0 [16];
  undefined8 local_ae0;
  undefined1 local_ad8 [24];
  undefined1 local_ac0 [16];
  undefined8 local_ab0;
  undefined1 local_aa8 [24];
  undefined1 local_a90 [16];
  undefined8 local_a80;
  undefined1 local_a78 [24];
  undefined1 local_a60 [16];
  undefined8 local_a50;
  undefined1 local_a48 [24];
  undefined1 local_a30 [16];
  undefined8 local_a20;
  undefined1 local_a18 [24];
  undefined1 local_a00 [16];
  undefined8 local_9f0;
  undefined1 local_9e8 [24];
  undefined1 local_9d0 [16];
  undefined8 local_9c0;
  undefined1 local_9b8 [24];
  undefined1 local_9a0 [16];
  undefined8 local_990;
  undefined1 local_988 [24];
  undefined1 local_970 [16];
  undefined8 local_960;
  undefined1 local_958 [24];
  undefined1 local_940 [16];
  undefined8 local_930;
  undefined1 local_928 [24];
  undefined1 local_910 [16];
  undefined8 local_900;
  undefined1 local_8f8 [16];
  undefined1 local_8e8 [16];
  undefined1 local_8d8 [16];
  undefined1 auStack_8c8 [16];
  undefined1 local_8b8 [24];
  undefined1 local_8a0 [16];
  undefined8 local_890;
  undefined1 local_888 [24];
  undefined1 local_870 [16];
  undefined8 local_860;
  undefined1 local_858 [24];
  undefined1 local_840 [16];
  undefined8 local_830;
  uint local_828;
  uint local_824;
  uint local_820;
  uint *******local_818 [2];
  undefined1 *local_808;
  ulonglong local_800;
  uint local_7f8;
  uint local_7f4;
  int local_7f0;
  int local_7ec;
  float local_7e0;
  float local_7dc;
  float local_7d8;
  double local_7d0;
  ulonglong local_7c8;
  undefined1 local_7b8;
  undefined1 local_7b0 [32];
  int local_790;
  uint local_78c;
  longlong local_788;
  undefined8 local_780;
  float local_778;
  char local_774;
  undefined4 local_770;
  undefined4 local_76c;
  undefined4 local_768;
  byte local_764;
  int local_760;
  int local_75c;
  undefined1 local_758 [32];
  int local_738;
  int local_734;
  undefined1 local_730;
  undefined1 local_72f;
  char local_72e;
  char local_72d;
  float local_72c;
  float local_728;
  undefined4 local_724;
  uint local_720;
  int local_71c;
  undefined1 local_718 [16];
  ulonglong local_708;
  ulonglong local_700;
  undefined1 local_6f8 [8];
  undefined1 local_6f0 [8];
  undefined1 local_6e8 [12];
  undefined4 uStack_6dc;
  undefined8 local_6d8;
  uint local_6d0;
  undefined8 local_6c8;
  undefined4 local_6c0;
  undefined1 local_6b8 [16];
  undefined8 local_6a8;
  undefined8 uStack_6a0;
  undefined1 local_698 [16];
  undefined8 local_688;
  undefined4 local_680;
  undefined4 local_67c;
  undefined4 local_678;
  undefined8 local_670;
  undefined8 local_668;
  undefined8 local_660;
  ulonglong local_658;
  undefined1 local_650 [16];
  undefined8 local_640;
  undefined8 local_638;
  undefined8 local_630;
  undefined8 local_628;
  undefined8 local_620;
  undefined4 local_618;
  undefined1 local_614;
  undefined8 local_610;
  undefined4 local_608;
  undefined1 local_604;
  undefined4 local_600;
  undefined4 local_5fc;
  undefined1 local_5f8 [16];
  undefined8 local_5e8;
  undefined8 uStack_5e0;
  undefined8 local_5d8;
  undefined4 local_5d0;
  undefined4 local_5cc;
  undefined8 local_5c8;
  undefined4 local_5c0;
  undefined4 local_5bc;
  undefined8 local_5b0;
  undefined1 local_5a8 [16];
  undefined8 local_598;
  undefined1 local_590 [16];
  undefined8 local_580;
  undefined1 local_578 [16];
  undefined8 local_568;
  undefined1 local_560 [16];
  undefined8 local_550;
  undefined1 local_548 [16];
  undefined8 local_538;
  undefined1 local_530 [16];
  undefined8 local_520;
  undefined1 local_518 [16];
  undefined8 local_508;
  undefined1 local_500 [16];
  undefined8 local_4f0;
  undefined1 local_4e8 [16];
  undefined8 local_4d8;
  undefined1 local_4d0 [16];
  undefined8 local_4c0;
  undefined1 local_4b8 [16];
  undefined8 local_4a8;
  undefined1 local_4a0 [16];
  undefined8 local_490;
  undefined1 local_488 [16];
  undefined8 local_478;
  undefined1 local_470 [16];
  undefined8 local_460;
  undefined1 local_458 [16];
  undefined8 local_448;
  undefined1 local_440 [16];
  undefined8 local_430;
  undefined1 local_428 [16];
  undefined8 local_418;
  undefined1 local_410 [16];
  undefined8 local_400;
  undefined1 local_3f8 [16];
  undefined8 local_3e8;
  undefined1 local_3e0 [16];
  undefined8 local_3d0;
  undefined1 local_3c8 [16];
  undefined8 local_3b8;
  undefined1 local_3b0 [16];
  undefined8 local_3a0;
  undefined1 local_398 [16];
  undefined8 local_388;
  undefined1 local_380 [16];
  undefined8 local_370;
  undefined1 local_368 [16];
  undefined8 local_358;
  undefined1 local_350 [648];
  ulonglong local_c8;
  
  local_c8 = DAT_1808d5f00 ^ (ulonglong)auStack_1008;
  lVar35 = 0;
  uVar40 = 0;
  local_f90 = 0;
  pppppppuVar34 = (uint *******)(param_1 + 0xc);
  iVar18 = FUN_1805f68d0(pppppppuVar34);
  lVar33 = DAT_180c7c4e8;
  if (iVar18 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (param_1[0x1f] == 0x7fffffff) {
    param_1[0x1f] = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  if (((param_1[0x20] != 0) &&
      (uVar32 = *(ulonglong *)(param_1 + 0x38), UVar22 = GetTickCount64(), UVar22 < uVar32)) &&
     (*(longlong *)(param_1 + 0x8c) != lVar33)) {
    *(longlong *)(param_1 + 0x8c) = lVar33;
    *(longlong *)(param_1 + 100) = *(longlong *)(param_1 + 100) + 1;
    *(undefined8 *)(param_1 + 0x36) = *(undefined8 *)(param_1 + 100);
  }
  FUN_1805f68fc(pppppppuVar34);
  UVar22 = GetTickCount64();
  FUN_1803f1ee0(&local_828);
  local_f78 = pppppppuVar34;
  iVar18 = FUN_1805f68d0(pppppppuVar34);
  if (iVar18 != 0) goto LAB_1803f1eb5;
  if (param_1[0x1f] == 0x7fffffff) {
    param_1[0x1f] = 0x7ffffffe;
    goto LAB_1803f1eaa;
  }
  LOCK();
  uVar30 = param_1[10];
  *(char *)(param_1 + 10) = '\0';
  pHVar11 = DAT_180c6e520;
  UNLOCK();
  if ((((char)uVar30 != '\0') && (param_1[0x20] != 0)) &&
     ((DAT_180c6e520 != (HWND)0x0 &&
      ((BVar19 = IsIconic(DAT_180c6e520), BVar19 == 0 &&
       (pHVar23 = GetForegroundWindow(), pHVar23 == pHVar11)))))) {
    *(longlong *)(param_1 + 100) = *(longlong *)(param_1 + 100) + 1;
    *(undefined8 *)(param_1 + 0x36) = *(undefined8 *)(param_1 + 100);
    *(undefined1 *)(param_1 + 1) = 1;
  }
  FUN_1803f23c0(&local_828,param_1 + 0x20);
  FUN_1805f68fc(pppppppuVar34);
  if (((((local_72d != '\0') && (DAT_180ccaa20 != '\0')) && (UVar22 < local_7c8)) ||
      (((local_828 == 0 && (*(longlong *)(param_1 + 0x66) == 0)) && ((char)param_1[1] == '\0')))) ||
     (UVar22 < *(ulonglong *)(param_1 + 0x8a))) goto LAB_1803f1e13;
  uVar50 = 0;
  uVar51 = 0xf;
  auVar47 = ZEXT864(0);
  uVar20 = 0x3f800000;
  auVar49 = ZEXT464(0x3f000000);
  if (((*param_1 - 4 < 2) && (local_820 == 3)) && ((local_738 != 0 && (local_828 != 0)))) {
    bVar5 = true;
LAB_1803ee776:
    bVar42 = bVar5;
    if ((DAT_180ccaa20 == '\0') || (local_7c8 <= UVar22)) {
      cVar15 = '\x01';
    }
    else {
      cVar15 = '\0';
    }
LAB_1803ee920:
    local_fa7 = cVar15;
  }
  else {
    bVar5 = false;
    bVar42 = false;
    if ((((local_828 != 0) && (local_72e != '\0')) && (local_774 == '\0')) && (local_788 == 0))
    goto LAB_1803ee776;
    cVar15 = '\0';
    local_fa7 = '\0';
    if ((DAT_180ccaa20 == '\0') || (local_7c8 <= UVar22)) {
      local_6c8 = 0;
      local_6c0 = 0;
      local_6a8 = 0;
      uStack_6a0 = 0xf;
      local_6b8._1_15_ = SUB1615((undefined1  [16])0x0,1);
      auVar44[0xf] = 0;
      auVar44._0_15_ = local_6b8._1_15_;
      local_6b8 = auVar44 << 8;
      local_698 = (undefined1  [16])0x0;
      local_688 = 0;
      local_680 = 0;
      local_67c = 0;
      local_678 = 0x3f800000;
      local_670 = 0;
      local_668 = 0;
      local_660 = 0;
      local_658 = local_658 & 0xffffffffffffff00;
      local_640 = 0;
      local_638 = 0xf;
      local_650._1_15_ = SUB1615((undefined1  [16])0x0,1);
      auVar46[0xf] = 0;
      auVar46._0_15_ = local_650._1_15_;
      local_650 = auVar46 << 8;
      local_630 = 0;
      local_628 = 0;
      local_620 = 0;
      local_618 = 0;
      local_614 = 0;
      local_610 = 0;
      local_608 = 0;
      local_604 = 0;
      local_600 = 0xffffffff;
      local_5fc = 0;
      local_5e8 = 0;
      uStack_5e0 = 0xf;
      local_5f8._1_15_ = SUB1615((undefined1  [16])0x0,1);
      auVar4[0xf] = 0;
      auVar4._0_15_ = local_5f8._1_15_;
      local_5f8 = auVar4 << 8;
      local_5d8 = 0;
      local_5d0 = 0;
      local_5cc = 0x3f000000;
      local_5c8 = 0x1010103f000000;
      local_5c0 = 0x808080;
      local_5bc = 0xffffffff;
      FUN_1803c1c00(&local_828,&local_6c8);
      FUN_18015c010(local_5f8);
      FUN_18015c010(local_650);
      FUN_18015c010(local_6b8);
      bVar42 = bVar5;
      goto LAB_1803ee920;
    }
  }
  cVar15 = local_fa7;
  if (local_738 == 2) {
    uVar30 = 0x13ac;
    pcVar31 = "agents/models/tm_phoenix/tm_phoenix.vmdl";
    puVar38 = &DAT_00000028;
  }
  else if (local_738 == 3) {
    uVar30 = 0x13ad;
    pcVar31 = "agents/models/ctm_sas/ctm_sas.vmdl";
    puVar38 = (undefined1 *)0x22;
  }
  else {
    uVar30 = 0;
    puVar38 = (undefined1 *)0x0;
    pcVar31 = (char *)0x0;
  }
  if ((!bVar42) || (local_828 != uVar30)) {
LAB_1803ee9c3:
    bVar5 = false;
  }
  else {
    pppppppuVar34 = (uint *******)local_818;
    if (0xf < local_800) {
      pppppppuVar34 = local_818[0];
    }
    if ((puVar38 != local_808) ||
       ((puVar38 != (undefined1 *)0x0 &&
        (iVar18 = memcmp(pcVar31,pppppppuVar34,(size_t)puVar38), iVar18 != 0)))) goto LAB_1803ee9c3;
    bVar5 = true;
  }
  local_fa6 = 0;
  if (cVar15 == '\0') {
    if ((local_820 == 3) && (!bVar5)) {
      uVar32 = (((ulonglong)(local_828 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
               (ulonglong)((local_828 & 0xffff) >> 8)) * 0x100000001b3 & DAT_180cc9cb8;
      lVar33 = *(longlong *)(DAT_180cc9ca0 + (uVar32 * 2 + 1) * 8);
      if (lVar33 == DAT_180cc9c90) {
LAB_1803eea68:
        lVar33 = 0;
      }
      else {
        sVar17 = *(short *)(lVar33 + 0x10);
        while ((short)local_828 != sVar17) {
          if (lVar33 == *(longlong *)(DAT_180cc9ca0 + uVar32 * 0x10)) goto LAB_1803eea68;
          lVar33 = *(longlong *)(lVar33 + 8);
          sVar17 = *(short *)(lVar33 + 0x10);
        }
      }
      lVar25 = DAT_180cc9c90;
      if (lVar33 != 0) {
        lVar25 = lVar33;
      }
      if (((lVar25 == DAT_180cc9c90) ||
          (lVar33 = *(longlong *)(lVar25 + 0x18) * 0xb8 + DAT_180cc9bf8, lVar33 == 0)) ||
         (*(char *)(lVar33 + 0xb2) == '\0')) {
LAB_1803eeb44:
        local_650._1_15_ = SUB1615((undefined1  [16])0x0,1);
        auVar6[0xf] = 0;
        auVar6._0_15_ = local_650._1_15_;
        local_650 = auVar6 << 8;
        local_638 = 0xf;
        local_640 = 0;
        local_658 = local_658 & 0xffffffffffffff00;
        local_660 = 0;
        local_668 = 0;
        local_670 = 0;
        local_680 = auVar47._0_4_;
        local_688 = 0;
        local_698 = (undefined1  [16])0x0;
        local_6b8._1_15_ = SUB1615((undefined1  [16])0x0,1);
        auVar7[0xf] = 0;
        auVar7._0_15_ = local_6b8._1_15_;
        local_6b8 = auVar7 << 8;
        local_6c0 = 0;
        local_6c8 = 0;
        local_630 = 0;
        local_628 = 0;
        local_620 = 0;
        local_614 = 0;
        local_610 = CONCAT44(local_680,local_680);
        local_604 = 0;
        local_600 = 0xffffffff;
        local_5fc = 0;
        local_5f8._1_15_ = SUB1615((undefined1  [16])0x0,1);
        auVar8[0xf] = 0;
        auVar8._0_15_ = local_5f8._1_15_;
        local_5f8 = auVar8 << 8;
        local_5d8 = 0;
        local_5d0 = 0;
        local_5cc = auVar49._0_4_;
        local_5c8 = CONCAT44(0x101010,local_5cc);
        local_5c0 = 0x808080;
        local_5bc = 0xffffffff;
        local_6a8 = uVar50;
        uStack_6a0 = uVar51;
        local_67c = local_680;
        local_678 = uVar20;
        local_618 = local_680;
        local_608 = local_680;
        local_5e8 = uVar50;
        uStack_5e0 = uVar51;
        FUN_1803c1c00(&local_828,&local_6c8);
        FUN_18015c010(local_5f8);
        FUN_18015c010(local_650);
        FUN_18015c010(local_6b8);
      }
      else {
        pppppppuVar34 = (uint *******)(lVar33 + 0x68);
        if (local_808 == (undefined1 *)0x0) {
          if (local_818 != (uint ********)pppppppuVar34) {
            if (0xf < *(ulonglong *)(lVar33 + 0x80)) {
              pppppppuVar34 = (uint *******)*pppppppuVar34;
            }
            FUN_180113930(local_818,pppppppuVar34,*(undefined8 *)(lVar33 + 0x78));
          }
        }
        else {
          if (0xf < *(ulonglong *)(lVar33 + 0x80)) {
            pppppppuVar34 = (uint *******)*pppppppuVar34;
          }
          _Buf1 = (uint *******)local_818;
          if (0xf < local_800) {
            _Buf1 = local_818[0];
          }
          if ((local_808 != *(undefined1 **)(lVar33 + 0x78)) ||
             (iVar18 = memcmp(_Buf1,pppppppuVar34,(size_t)local_808), iVar18 != 0)) {
            local_f78 = (uint *******)local_818;
            if (0xf < local_800) {
              local_f78 = local_818[0];
            }
            local_f70 = local_808;
            local_fa6 = FUN_1801ef6f0(&local_f78);
            if (local_fa6 == 0) goto LAB_1803eeb44;
          }
        }
      }
    }
    if (!bVar42) goto LAB_1803ef36e;
    if (local_7d0 != *(double *)(param_1 + 0x66)) goto LAB_1803ef365;
    pcVar31 = (char *)((longlong)&local_6d8 + 5);
    uVar40 = *param_1;
    do {
      pcVar31 = pcVar31 + -1;
      *pcVar31 = (char)uVar40 + (char)((ulonglong)uVar40 / 10) * -10 + '0';
      uVar40 = (uint)((ulonglong)uVar40 / 10);
    } while (uVar40 != 0);
    FUN_18015bdb0(local_ef8,pcVar31,(longlong)&local_6d8 + 5);
    pauVar24 = (undefined1 (*) [16])FUN_180141490(local_ef8,0,"HVHSkinPreview",0xe);
    local_f58 = *pauVar24;
    local_f70 = *(undefined1 **)pauVar24[1];
    uVar32 = *(ulonglong *)(pauVar24[1] + 8);
    uStack_f48 = SUB84(local_f70,0);
    fStack_f44 = (float)((ulonglong)local_f70 >> 0x20);
    uStack_f40 = (undefined1)uVar32;
    uStack_f3f = (undefined7)(uVar32 >> 8);
    (*pauVar24)[0] = 0;
    *(undefined8 *)pauVar24[1] = 0;
    *(undefined8 *)(pauVar24[1] + 8) = 0xf;
    uVar40 = 0x38;
    local_f90 = 0x38;
    local_f78 = (uint *******)local_f58;
    if (0xf < uVar32) {
      local_f78 = (uint *******)local_f58._0_8_;
    }
    auVar47 = ZEXT1664(auVar47._0_16_);
    auVar49 = ZEXT1664(auVar49._0_16_);
    local_f78 = (uint *******)FUN_1803f80e0();
    FUN_18015c010(local_f58);
    FUN_18015c010(local_ef8);
    if ((DAT_180cce330 & 1) == 0) {
      DAT_180cce330 = DAT_180cce330 | 1;
      atexit(FUN_180662340);
    }
    pppppppuVar34 = DAT_1808da460;
    local_f88[0] = DAT_1808da460;
    local_fa0 = DAT_1809bb350;
    if ((DAT_1809bb350 == DAT_1808da460) && (lVar33 = DAT_180c7c428, DAT_180c7c428 != 0)) {
LAB_1803eef46:
      lVar25 = FUN_18017ea70();
      *(int *)(lVar25 + 4) = *(int *)(lVar25 + 4) + 1;
      if (lVar33 + 3 == 0) {
        local_fa8 = 0;
        local_fa0 = (uint *******)CONCAT44(local_fa0._4_4_,(undefined4)local_f98);
      }
      else {
        local_fa0 = (uint *******)((ulonglong)local_fa0._4_4_ << 0x20);
        cVar14 = FUN_1804514f0(&local_fa0,lVar33 + 3,4);
        if (cVar14 == '\0') {
          local_fa0 = (uint *******)CONCAT44(local_fa0._4_4_,(undefined4)local_f98);
          local_fa8 = 0;
        }
        else {
          local_fa8 = 1;
        }
      }
      lVar25 = FUN_18017ea70();
      if (*(int *)(lVar25 + 4) != 0) {
        *(int *)(lVar25 + 4) = *(int *)(lVar25 + 4) + -1;
      }
      uVar36 = 0;
      if (local_fa8 != 0) {
        uVar36 = (ulonglong)local_fa0 & 0xffffffff;
      }
      lVar25 = FUN_18017ea70();
      *(int *)(lVar25 + 4) = *(int *)(lVar25 + 4) + 1;
      if (lVar33 + 0xe == 0) {
        bVar42 = false;
        uVar20 = (undefined4)local_f98;
      }
      else {
        local_fa0 = (uint *******)((ulonglong)local_fa0 & 0xffffffff00000000);
        cVar14 = FUN_1804514f0(&local_fa0,lVar33 + 0xe,4);
        if (cVar14 == '\0') {
          bVar42 = false;
          uVar20 = (undefined4)local_f98;
        }
        else {
          bVar42 = true;
          uVar20 = (uint)local_fa0;
        }
      }
      local_fa0 = (uint *******)CONCAT44(local_fa0._4_4_,uVar20);
      lVar33 = FUN_18017ea70();
      if (*(int *)(lVar33 + 4) != 0) {
        *(int *)(lVar33 + 4) = *(int *)(lVar33 + 4) + -1;
      }
      uVar32 = 0;
      if (bVar42) {
        uVar32 = (ulonglong)local_fa0 & 0xffffffff;
      }
    }
    else {
      local_f98 = GetTickCount64();
      if ((local_fa0 != pppppppuVar34) || (DAT_180c7c430 <= local_f98)) {
        local_fa0 = (uint *******)&DAT_1809bb360;
        iVar18 = FUN_1805f68d0(&DAT_1809bb360);
        if (iVar18 != 0) goto LAB_1803f1eb5;
        if (DAT_1809bb3ac == 0x7fffffff) {
          DAT_1809bb3ac = 0x7ffffffe;
          goto LAB_1803f1eaa;
        }
        uVar32 = 1000;
        if (DAT_1809bb350 == local_f88[0]) {
          if ((DAT_180c7c428 == 0) && (DAT_180c7c430 <= local_f98)) goto LAB_1803eee96;
        }
        else {
          DAT_1809bb3b0 = 1000;
LAB_1803eee96:
          lVar33 = -1;
          do {
            local_f58._8_8_ = lVar33 + 1;
            lVar25 = lVar33 + 1;
            lVar33 = local_f58._8_8_;
          } while ("client.dll:486386????????488D0C80488B86????????48C1E1058B1401"[lVar25] != '\0');
          local_f58._0_8_ = "client.dll:486386????????488D0C80488B86????????48C1E1058B1401";
          stack0xfffffffffffff920 = (ulonglong *)0x1f;
          local_6e8._0_8_ = "patterns::preview_player_handle";
          DAT_180c7c428 = FUN_1800e5d20(local_6e8,local_f58);
          DAT_1809bb350 = local_f88[0];
          if (DAT_180c7c428 == 0) {
            DAT_180c7c430 = local_f98 + DAT_1809bb3b0;
            uVar32 = 60000;
            if (DAT_1809bb3b0 < 60000) {
              uVar32 = DAT_1809bb3b0 * 2;
            }
          }
          else {
            DAT_180c7c430 = 0xffffffffffffffff;
          }
          DAT_1809bb3b0 = uVar32;
        }
        lVar33 = DAT_180c7c428;
        FUN_1805f68fc(&DAT_1809bb360);
        if (lVar33 != 0) goto LAB_1803eef46;
      }
      uVar36 = 0;
      uVar32 = 0;
    }
    local_f98 = CONCAT44(local_f98._4_4_,(int)uVar32);
    uVar30 = 0;
    if (local_f78 != (uint *******)0x0) {
      if (((int)uVar36 - 0x100U < 0x1f00) && ((int)uVar32 == (int)uVar36 + 0xc)) {
        puVar37 = (undefined *)(uVar36 + (longlong)local_f78);
        lVar33 = FUN_18017ea70();
        *(int *)(lVar33 + 4) = *(int *)(lVar33 + 4) + 1;
        if (puVar37 == (undefined *)0x0) {
          local_fa8 = 0;
          local_fa0 = (uint *******)CONCAT44(local_fa0._4_4_,(undefined4)local_f98);
        }
        else {
          local_fa0 = (uint *******)((ulonglong)local_fa0._4_4_ << 0x20);
          cVar14 = FUN_1804514f0(&local_fa0,puVar37,4);
          if (cVar14 == '\0') {
            local_fa8 = 0;
            local_fa0 = (uint *******)CONCAT44(local_fa0._4_4_,(undefined4)local_f98);
          }
          else {
            local_fa8 = 1;
          }
        }
        lVar33 = FUN_18017ea70();
        if (*(int *)(lVar33 + 4) != 0) {
          *(int *)(lVar33 + 4) = *(int *)(lVar33 + 4) + -1;
        }
        uVar45 = 0xffffffff;
        if (local_fa8 != 0) {
          uVar45 = (uint)local_fa0;
        }
        local_f88[0] = (uint *******)((local_f98 & 0xffffffff) + (longlong)local_f78);
        lVar33 = FUN_18017ea70();
        pppppppuVar34 = local_f88[0];
        *(int *)(lVar33 + 4) = *(int *)(lVar33 + 4) + 1;
        if (local_f88[0] == (uint *******)0x0) {
          local_fa8 = 0;
          local_f88[0] = local_f78;
        }
        else {
          local_f88[0] = (uint *******)0x0;
          cVar14 = FUN_1804514f0(local_f88,pppppppuVar34,8);
          if (cVar14 == '\0') {
            local_fa8 = 0;
            local_f88[0] = local_f78;
          }
          else {
            local_fa8 = 1;
          }
        }
        lVar33 = FUN_18017ea70();
        uVar29 = *(uint *)(lVar33 + 4);
        if (uVar29 != 0) {
          uVar29 = uVar29 - 1;
          *(uint *)(lVar33 + 4) = uVar29;
        }
        uVar32 = (ulonglong)uVar29;
        pppppppuVar34 = (uint *******)0x0;
        if (local_fa8 != 0) {
          pppppppuVar34 = local_f88[0];
        }
        if ((uVar45 < 8) && (pppppppuVar34 != (uint *******)0x0)) {
          lVar33 = FUN_18017ea70();
          *(int *)(lVar33 + 4) = *(int *)(lVar33 + 4) + 1;
          if (pppppppuVar34 + (longlong)(int)uVar45 * 0x14 == (uint *******)0x0) {
            bVar42 = false;
            local_fa0 = (uint *******)CONCAT44(local_fa0._4_4_,(undefined4)local_f98);
          }
          else {
            local_f98 = local_f98 & 0xffffffff00000000;
            cVar14 = FUN_1804514f0(&local_f98,pppppppuVar34 + (longlong)(int)uVar45 * 0x14,4);
            if (cVar14 == '\0') {
              bVar42 = false;
              local_fa0 = (uint *******)CONCAT44(local_fa0._4_4_,(undefined4)local_f98);
            }
            else {
              local_fa0 = (uint *******)CONCAT44(local_fa0._4_4_,(undefined4)local_f98);
              bVar42 = true;
            }
          }
          lVar33 = FUN_18017ea70();
          uVar30 = *(uint *)(lVar33 + 4);
          if (uVar30 != 0) {
            uVar30 = uVar30 - 1;
            *(uint *)(lVar33 + 4) = uVar30;
          }
          uVar32 = (ulonglong)uVar30;
          uVar30 = 0;
          if (bVar42) {
            uVar30 = (uint)local_fa0;
          }
        }
      }
    }
    dVar13 = local_7d0;
    if ((uVar30 == 0) || (cVar14 = FUN_1803f1ff0(uVar32,uVar30), cVar14 == '\0')) {
      if ((param_1[6] == 0) ||
         ((*(double *)(param_1 + 8) != dVar13 || (cVar14 = FUN_1803f1ff0(), cVar14 == '\0')))) {
        param_1[6] = 0;
        *(double *)(param_1 + 8) = dVar13;
        uVar45 = 0;
      }
      else {
        uVar45 = param_1[6];
      }
      if (((uVar30 == 0) && (uVar45 != 0)) && (DAT_180c7c400 <= UVar22)) {
        DAT_180c7c400 = UVar22 + 5000;
        FUN_18063ab10(&local_6c8,0,0x600);
        local_fe0 = (undefined8 *)CONCAT44(local_fe0._4_4_,uVar45);
        local_fe8 = (undefined **)CONCAT44(local_fe8._4_4_,*param_1);
        FUN_18015ad60(&local_6c8,0x600,0xffffffffffffffff,
                      "slot=%u handle=0x%x reason=native_row_unavailable identity=validated");
        local_fe8 = &PTR_180700558;
        if ((char)local_6c8 != '\0') {
          local_fe8 = (undefined **)&DAT_1806bcfc0;
        }
        local_fe0 = &local_6c8;
        FUN_1800f6900(0);
        LOCK();
        uVar29 = param_1[4];
        param_1[4] = uVar45;
        UNLOCK();
        goto LAB_1803ef2bf;
      }
      LOCK();
      uVar29 = param_1[4];
      param_1[4] = uVar45;
      UNLOCK();
      if (uVar45 != 0) goto LAB_1803ef2bf;
    }
    else {
      param_1[6] = uVar30;
      *(double *)(param_1 + 8) = dVar13;
      LOCK();
      uVar29 = param_1[4];
      param_1[4] = uVar30;
      UNLOCK();
      uVar45 = uVar30;
LAB_1803ef2bf:
      if (uVar45 != uVar29) {
        FUN_18063ab10(&local_6c8,0,0x600);
        local_fe0 = (undefined8 *)CONCAT44(local_fe0._4_4_,uVar45);
        local_fe8 = (undefined **)CONCAT44(local_fe8._4_4_,*param_1);
        FUN_18015ad60(&local_6c8,0x600,0xffffffffffffffff,
                      "slot=%u handle=0x%x native_selected_row=1 visual_acceptance=pending");
        local_fe8 = &PTR_180700558;
        if ((char)local_6c8 != '\0') {
          local_fe8 = (undefined **)&DAT_1806bcfc0;
        }
        local_fe0 = &local_6c8;
        FUN_1800f6900(0);
      }
    }
    FUN_1803eb1c0(*param_1,local_f78,uVar45,&local_828);
  }
  else {
    local_fa6 = 0;
    if (bVar42) {
LAB_1803ef365:
      if (local_828 != 0) goto LAB_1803ef374;
    }
LAB_1803ef36e:
    LOCK();
    param_1[4] = 0;
    UNLOCK();
  }
LAB_1803ef374:
  uVar32 = DAT_180c63120;
  if (((local_788 != 0) && (local_7d0 == *(double *)(param_1 + 0x66))) &&
     ((DAT_180c63119 != '\0' && (DAT_1808e6c00 != '\0')))) {
    UVar26 = GetTickCount64();
    lVar33 = local_788;
    if (UVar26 < uVar32) {
      if ((*(longlong *)(param_1 + 0xa6) != local_788) || (*(double *)(param_1 + 0xaa) != local_7d0)
         ) {
        *(longlong *)(param_1 + 0xa6) = local_788;
        *(double *)(param_1 + 0xaa) = local_7d0;
        *(ULONGLONG *)(param_1 + 0xa8) = UVar22;
        param_1[0xac] = 0;
        param_1[0xad] = 0xffffffff;
        *(undefined1 *)(param_1 + 0xae) = 0;
        iVar18 = FUN_1805f68d0(&DAT_1808e6b40);
        if (iVar18 != 0) goto LAB_1803f1eb5;
        if (DAT_1808e6b8c == 0x7fffffff) {
          DAT_1808e6b8c = 0x7ffffffe;
          goto LAB_1803f1eaa;
        }
        FUN_1801d7520();
        FUN_1805f68fc(&DAT_1808e6b40);
        iVar18 = FUN_1805f68d0(&DAT_1808e6bb0);
        if (iVar18 != 0) goto LAB_1803f1eb5;
        if (DAT_1808e6bfc != 0x7fffffff) {
          if (DAT_180c630f0 == lVar33) {
            LOCK();
            DAT_180c630c8 = 0;
            UNLOCK();
            LOCK();
            DAT_180c630d0 = 0;
            UNLOCK();
            LOCK();
            DAT_180c630e0 = 0;
            UNLOCK();
            LOCK();
            DAT_180c630f8 = 0;
            UNLOCK();
            LOCK();
            DAT_180c630e8 = 0;
            UNLOCK();
            LOCK();
            DAT_180c630d8 = '\0';
            UNLOCK();
            LOCK();
            DAT_180c63100 = 0;
            UNLOCK();
            LOCK();
            DAT_180c63128 = 0;
            UNLOCK();
            DAT_1808e6b90 = 0;
            _DAT_1808e6b98 = 0xffffffff;
            _DAT_1808e6b9c = auVar47._0_4_;
            DAT_1808e6ba8._0_4_ = 0xffffffff;
            DAT_180c7c4e0 = 0;
            _DAT_1808e6ba0 = _DAT_1808e6b9c;
            _DAT_1808e6ba4 = _DAT_1808e6b9c;
            DAT_1808e6ba8._4_4_ = _DAT_1808e6b9c;
          }
          FUN_1805f68fc(&DAT_1808e6bb0);
          goto LAB_1803ef529;
        }
LAB_1803f1ea0:
        DAT_1808e6bfc = 0x7ffffffe;
LAB_1803f1eaa:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
LAB_1803ef529:
      uVar30 = *param_1;
      if (uVar30 == 0) {
        local_8f8 = (undefined1  [16])0x0;
        local_8e8 = (undefined1  [16])0x0;
        FUN_18015ba30(local_8f8,"HVHSkinPreview",0xe);
        auVar46 = auVar49._0_16_;
        auVar44 = auVar47._0_16_;
        puVar38 = local_8f8;
        uVar40 = uVar40 | 4;
        local_6e8._0_8_ = local_8f8._0_8_;
      }
      else {
        pcVar31 = (char *)((longlong)&local_6d8 + 5);
        do {
          pcVar31 = pcVar31 + -1;
          *pcVar31 = (char)uVar30 + (char)((ulonglong)uVar30 / 10) * -10 + '0';
          uVar30 = (uint)((ulonglong)uVar30 / 10);
        } while (uVar30 != 0);
        FUN_18015bdb0(&local_f78,pcVar31,(longlong)&local_6d8 + 5);
        local_f90 = uVar40 | 0xc1;
        pauVar24 = (undefined1 (*) [16])FUN_180141490(&local_f78,0,"HVHSkinPreview",0xe);
        auVar46 = auVar49._0_16_;
        auVar44 = auVar47._0_16_;
        local_8d8 = *pauVar24;
        auVar4 = local_8d8;
        auStack_8c8 = pauVar24[1];
        (*pauVar24)[0] = 0;
        *(undefined8 *)pauVar24[1] = 0;
        *(undefined8 *)(pauVar24[1] + 8) = 0xf;
        puVar38 = local_8d8;
        uVar40 = uVar40 | 0x1c3;
        local_6e8._0_8_ = local_8d8._0_8_;
        local_8d8 = auVar4;
      }
      if (*(ulonglong *)(puVar38 + 0x18) < 0x10) {
        local_6e8._0_8_ = puVar38;
      }
      stack0xfffffffffffff920 = (ulonglong *)*(undefined8 *)(puVar38 + 0x10);
      auVar47 = ZEXT1664(auVar44);
      auVar49 = ZEXT1664(auVar46);
      local_f90 = uVar40;
      lVar33 = FUN_1803f80e0(local_6e8._0_8_,local_6e8,UVar22,local_fa6);
      if ((uVar40 & 4) != 0) {
        uVar40 = uVar40 & 0xfffffffb;
        FUN_18015c010(local_8f8);
      }
      if ((uVar40 & 2) != 0) {
        uVar40 = uVar40 & 0xfffffffd;
        FUN_18015c010(local_8d8);
      }
      if ((uVar40 & 1) != 0) {
        FUN_18015c010(&local_f78);
      }
      if ((lVar33 != 0) && (local_75c != 0)) {
        FUN_180225940(lVar33);
      }
      uVar40 = local_78c;
      if ((local_788 == 0) || (DAT_180c630e8 != local_788)) {
        bVar42 = true;
      }
      else {
        bVar42 = false;
      }
      if ((local_75c != 0) || (!bVar42)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      local_6e8._4_4_ = local_770;
      local_6e8._0_4_ = local_78c;
      local_6e8._8_4_ = local_76c;
      uStack_6dc = local_768;
      local_6d8 = CONCAT44(auVar47._0_4_,local_760);
      uVar20 = local_770;
      uVar55 = local_76c;
      uVar57 = local_768;
      if (bVar5) {
        cVar15 = FUN_180228620(lVar33,local_790,local_6e8,local_764);
        bVar5 = false;
        if (cVar15 != '\0') goto LAB_1803ef76a;
      }
      else {
LAB_1803ef76a:
        bVar5 = true;
      }
      uVar43 = auVar47._0_4_;
      if ((lVar33 == 0) || (!bVar5)) {
        local_6d0 = local_6d0 & 0xffffff00;
        auVar47 = ZEXT1664(_local_6e8);
        uVar30 = local_6d0;
        uVar50 = local_6d8;
      }
      else if (local_75c == 0) {
        pauVar24 = (undefined1 (*) [16])FUN_180227f40(&local_f78,lVar33,local_790);
        uVar43 = auVar47._0_4_;
        auVar47 = ZEXT1664(*pauVar24);
        uVar30 = *(uint *)(pauVar24[1] + 8);
        uVar50 = *(undefined8 *)pauVar24[1];
      }
      else {
        pauVar24 = (undefined1 (*) [16])FUN_180229ea0(local_6e8,lVar33,local_75c);
        uVar43 = auVar47._0_4_;
        auVar47 = ZEXT1664(*pauVar24);
        uVar30 = *(uint *)(pauVar24[1] + 8);
        uVar50 = *(undefined8 *)pauVar24[1];
      }
      fVar48 = auVar49._0_4_;
      local_fa0 = (uint *******)CONCAT44(local_fa0._4_4_,uVar30);
      uStack_f48 = (undefined4)uVar50;
      fStack_f44 = (float)((ulonglong)uVar50 >> 0x20);
      auVar46 = auVar47._0_16_;
      auVar44 = vshufps_avx(auVar46,auVar46,0xaa);
      auVar53 = ZEXT1664(auVar44);
      auVar46 = vshufps_avx(auVar46,auVar46,0x55);
      auVar52 = ZEXT1664(auVar46);
      if (((char)uVar30 != '\0') && (local_75c == 0)) {
        local_6e8._4_4_ = uVar20;
        local_6e8._0_4_ = uVar40;
        local_6e8._8_4_ = uVar55;
        local_6d8 = CONCAT44(uVar43,local_760);
        if (local_760 < 0) {
          local_6e8._4_4_ = auVar46._0_4_;
          local_6e8._8_4_ = auVar44._0_4_;
        }
        uStack_6dc = uVar57;
        local_fe8 = (undefined **)CONCAT71(local_fe8._1_7_,local_764);
        FUN_180229750(lVar33,local_790,local_788,local_6e8);
        fVar48 = auVar49._0_4_;
        uVar30 = (uint)local_fa0;
      }
      lVar25 = local_788;
      uVar40 = local_78c;
      if (bVar42) {
        uVar45 = auVar47._0_4_;
        if ((char)uVar30 == '\0') {
          param_1[0xac] = 0;
          param_1[0xad] = 0xffffffff;
        }
        else {
          if (param_1[0xad] != uVar45) {
            param_1[0xad] = uVar45;
            *(ULONGLONG *)(param_1 + 0xa8) = UVar22;
            param_1[0xac] = 0;
          }
          param_1[0xac] = param_1[0xac] + 1;
          if ((2 < param_1[0xac]) && (0x95 < UVar22 - *(longlong *)(param_1 + 0xa8))) {
            _local_6e8 = auVar47._0_16_;
            local_6d8 = uVar50;
            if ((local_788 != 0) && ((local_78c < 5 && (uVar45 < 5)))) {
              iVar18 = FUN_1805f68d0(&DAT_1808e6bb0);
              if (iVar18 != 0) {
LAB_1803f1eb5:
                    /* WARNING: Subroutine does not return */
                FUN_1805f6d44(5);
              }
              if (DAT_1808e6bfc == 0x7fffffff) goto LAB_1803f1ea0;
              if (DAT_180c630f0 == lVar25) {
                DAT_180c7c4e0 = lVar25;
                DAT_1809bb660 = uVar40;
                DAT_1808e6b90 = lVar25;
                _DAT_1808e6b98 = uVar40;
                _DAT_1808e6b9c = local_6e8._4_4_;
                _DAT_1808e6ba0 = local_6e8._8_4_;
                _DAT_1808e6ba4 = uStack_6dc;
                DAT_1808e6ba8._4_4_ = local_6d8._4_4_;
                LOCK();
                DAT_180c630e8 = lVar25;
                UNLOCK();
                DAT_1808e6ba8._0_4_ = uVar45;
                DAT_1809bb664 = uVar45;
                FUN_1805f68fc(&DAT_1808e6bb0);
                FUN_18063ab10(&local_6c8,0,0x600);
                auVar44 = vshufps_avx(auVar47._0_16_,auVar47._0_16_,0xff);
                local_fb0 = (double)auVar44._0_4_;
                local_fb8 = (double)fStack_f44;
                local_fc0 = (double)auVar53._0_4_;
                local_fc8 = (double)auVar52._0_4_;
                local_fd0 = (uint)local_764;
                local_fd8 = local_78c;
                local_fe0 = (undefined8 *)CONCAT44(local_fe0._4_4_,uVar45);
                local_fe8 = (undefined **)local_788;
                FUN_18015ad60(&local_6c8,0x600,0xffffffffffffffff,
                              "session=%llu native_slot=%d feedback_slot=%d default=%d x=%.4f y=%.4f z=%.4f rotation=%.2f scope=owned_ui visual_acceptance=unverified"
                             );
                local_fe8 = &PTR_180700558;
                if ((char)local_6c8 != '\0') {
                  local_fe8 = (undefined **)&DAT_1806bcfc0;
                }
                local_fe0 = &local_6c8;
                FUN_1800f6900(0);
              }
              else {
                FUN_1805f68fc(&DAT_1808e6bb0);
              }
            }
          }
        }
        if ((((local_788 == 0) || (DAT_180c630e8 != local_788)) && ((char)param_1[0xae] == '\0')) &&
           (1999 < UVar22 - *(longlong *)(param_1 + 0xa8))) {
          *(undefined1 *)(param_1 + 0xae) = 1;
          if (lVar33 == 0) {
            uVar40 = 0xff;
            local_f98 = CONCAT44(local_f98._4_4_,0xff);
          }
          else {
            lVar25 = FUN_18017ea70();
            *(int *)(lVar25 + 4) = *(int *)(lVar25 + 4) + 1;
            if (lVar33 + 0x811 == 0) {
              local_fa8 = local_fa6;
              bVar42 = false;
            }
            else {
              local_fa8 = 0;
              cVar15 = FUN_1804514f0(&local_fa8,lVar33 + 0x811,1);
              if (cVar15 == '\0') {
                bVar42 = false;
                local_fa8 = local_fa6;
              }
              else {
                bVar42 = true;
              }
            }
            lVar25 = FUN_18017ea70();
            if (*(int *)(lVar25 + 4) != 0) {
              *(int *)(lVar25 + 4) = *(int *)(lVar25 + 4) + -1;
            }
            uVar40 = 0xff;
            if (bVar42) {
              uVar40 = (uint)local_fa8;
            }
            local_f98 = CONCAT44(local_f98._4_4_,uVar40);
            lVar25 = FUN_18017ea70();
            *(int *)(lVar25 + 4) = *(int *)(lVar25 + 4) + 1;
            if (lVar33 + 0x810 == 0) {
              bVar42 = false;
              local_fa8 = local_fa6;
            }
            else {
              local_fa8 = 0;
              cVar15 = FUN_1804514f0(&local_fa8,lVar33 + 0x810,1);
              if (cVar15 == '\0') {
                bVar42 = false;
                local_fa8 = local_fa6;
              }
              else {
                bVar42 = true;
              }
            }
            lVar25 = FUN_18017ea70();
            if (*(int *)(lVar25 + 4) != 0) {
              *(int *)(lVar25 + 4) = *(int *)(lVar25 + 4) + -1;
            }
            bVar39 = 0xff;
            if (bVar42) {
              bVar39 = local_fa8;
            }
            uVar40 = (uint)bVar39;
          }
          uVar30 = 0xffffffff;
          if ((char)local_fa0 != '\0') {
            uVar30 = uVar45;
          }
          FUN_18063ab10(&local_6c8,0,0x600);
          local_fb0 = (double)CONCAT44(local_fb0._4_4_,(undefined4)local_f98);
          local_fb8 = (double)CONCAT44(local_fb8._4_4_,uVar40);
          local_fc0 = (double)CONCAT44(local_fc0._4_4_,local_75c);
          local_fc8 = (double)CONCAT44(local_fc8._4_4_,local_78c);
          local_fd8 = param_1[0xac];
          local_fe0 = (undefined8 *)CONCAT44(local_fe0._4_4_,(uint)(lVar33 != 0));
          local_fe8 = (undefined **)local_788;
          local_fd0 = uVar30;
          FUN_18015ad60(&local_6c8,0x600,0xffffffffffffffff,
                        "session=%llu owned_client=%d seeded_frames=%u native_slot=%d requested_slot=%d charm=%d sticker_mode=%u charm_mode=%u input=blocked"
                       );
          local_fe8 = &PTR_180700558;
          if ((char)local_6c8 != '\0') {
            local_fe8 = (undefined **)&DAT_1806bcfc0;
          }
          local_fe0 = &local_6c8;
          FUN_1800f6900(2);
          cVar15 = local_fa7;
          goto LAB_1803f00d1;
        }
      }
      else if ((char)uVar30 != '\0') {
        fVar1 = (fVar48 - local_7d8 * local_72c) * (float)local_7f0 + (float)(int)local_7f8;
        fVar2 = (fVar48 - local_7d8 * local_728) * (float)local_7ec;
        fVar48 = fVar2 + (float)(int)local_7f4;
        auVar49 = ZEXT464((uint)fVar48);
        auVar54 = ZEXT464((uint)((float)local_7f0 * local_7d8 + fVar1));
        fVar3 = (float)local_7ec * local_7d8;
        auVar56 = ZEXT464((uint)(fVar3 + fVar48));
        if (local_75c == 0) {
          iVar18 = FUN_18060eb80(fVar1,fVar3,fVar2);
          uVar20 = FUN_18060eb80(auVar49._0_8_);
          local_f88[0] = (uint *******)CONCAT44(local_f88[0]._4_4_,uVar20);
          uVar20 = FUN_18060eb80(auVar54._0_8_);
          local_fa0 = (uint *******)CONCAT44(local_fa0._4_4_,uVar20);
          local_f90 = FUN_18060eb80(auVar56._0_8_);
          lVar25 = local_788;
          uVar32 = DAT_180c63120;
          local_f98 = CONCAT44(local_f98._4_4_,local_790);
          if (((((DAT_180c63119 != '\0') && (DAT_1808e6c00 != '\0')) &&
               ((UVar26 = GetTickCount64(), UVar26 < uVar32 &&
                ((lVar25 != 0 && (DAT_180c630e8 == lVar25)))))) && (DAT_180c630f0 == lVar25)) &&
             ((cVar15 = FUN_180224970(lVar33,local_f98 & 0xffffffff), cVar15 != '\0' &&
              (iVar18 < (int)(uint)local_fa0)))) {
            iVar12 = (int)local_f88[0];
            if ((int)local_f88[0] < (int)local_f90) {
              if ((DAT_180cd3ac8 & 1) == 0) {
                DAT_180cd3ac8 = DAT_180cd3ac8 | 1;
                DAT_180cd3acc = FUN_180229cb0();
              }
              if (DAT_180cd3acc != '\0') {
                iVar21 = FUN_1805f68d0(&DAT_1808db080);
                if (iVar21 != 0) goto LAB_1803f1eb5;
                if (DAT_1808db0cc == 0x7fffffff) {
                  DAT_1808db0cc = 0x7ffffffe;
                  goto LAB_1803f1eaa;
                }
                uStack_f20 = (undefined4)local_f98;
                lStack_f18 = lVar25;
                auStack_f38[2] = lVar33;
                UVar26 = GetTickCount64();
                DAT_180bbedf8 = UVar26 + 0xfa;
                auStack_f10._8_4_ = iVar18;
                auStack_f10._0_8_ = DAT_180bbedf8;
                auStack_f10._12_4_ = iVar12;
                _DAT_180bbee08 = CONCAT44(local_f90,(int)local_fa0);
                _DAT_180bbede8 = CONCAT44(uStack_f1c,uStack_f20);
                DAT_180bbede0 = auStack_f38[2];
                DAT_180bbedf0 = lStack_f18;
                DAT_180bbee00 = auStack_f10._8_8_;
                auVar47 = ZEXT1664(auVar47._0_16_);
                auVar52 = ZEXT1664(auVar52._0_16_);
                auVar53 = ZEXT1664(auVar53._0_16_);
                uStack_f00 = _DAT_180bbee08;
                FUN_1805f68fc(&DAT_1808db080);
              }
            }
          }
        }
        else {
          uVar20 = FUN_18060eb80(fVar1);
          local_f78 = (uint *******)CONCAT44(local_f78._4_4_,uVar20);
          uVar20 = FUN_18060eb80(auVar49._0_8_);
          local_f78 = (uint *******)CONCAT44(uVar20,(undefined4)local_f78);
          uVar20 = FUN_18060eb80(auVar54._0_8_);
          local_f70 = (undefined1 *)CONCAT44(local_f70._4_4_,uVar20);
          uVar20 = FUN_18060eb80(auVar56._0_8_);
          local_f70 = (undefined1 *)CONCAT44(uVar20,(undefined4)local_f70);
          FUN_180227b20(lVar33,local_75c,local_788,&local_f78);
        }
        lVar33 = local_788;
        uVar51 = auVar52._0_8_;
        _local_6e8 = auVar47._0_16_;
        local_6d8 = uVar50;
        if ((local_788 != 0) && (DAT_180c630f8 == local_788)) {
          if ((DAT_180c63100 & 1) == 0) {
            UVar26 = GetTickCount64();
            uVar51 = auVar52._0_8_;
            bVar42 = DAT_180c630d0 <= UVar26;
          }
          else {
            bVar42 = DAT_180c63118 == '\0';
          }
          cVar15 = DAT_180c630d8;
          if (!bVar42) {
            LOCK();
            DAT_180c630d8 = '\0';
            UNLOCK();
            if (((cVar15 == '\0') && (sVar17 = thunk_FUN_180624430(uVar51), sVar17 < 1)) &&
               (sVar17 = thunk_FUN_180624430(auVar53._0_8_), sVar17 < 1)) {
              auVar44 = vshufps_avx(auVar47._0_16_,auVar47._0_16_,0xff);
              sVar17 = thunk_FUN_180624430(auVar44._0_8_);
              if ((sVar17 < 1) && (sVar17 = thunk_FUN_180624430(fStack_f44), sVar17 < 1)) {
                iVar18 = FUN_1805f68d0(&DAT_1808e6bb0);
                if (iVar18 != 0) goto LAB_1803f1eb5;
                if (DAT_1808e6bfc == 0x7fffffff) goto LAB_1803f1ea0;
                if (((DAT_180c630f0 == lVar33) && (DAT_180c630e8 == lVar33)) &&
                   (DAT_180c7c4e0 == lVar33)) {
                  if (auVar47._0_4_ == DAT_1809bb664) {
                    DAT_1808e6b90 = lVar33;
                    _DAT_1808e6b98 = DAT_1809bb660;
                    _DAT_1808e6b9c = local_6e8._4_4_;
                    _DAT_1808e6ba0 = local_6e8._8_4_;
                    _DAT_1808e6ba4 = uStack_6dc;
                    DAT_1808e6ba8._4_4_ = local_6d8._4_4_;
                    LOCK();
                    DAT_180c630e0 = lVar33;
                    UNLOCK();
                    DAT_1808e6ba8._0_4_ = auVar47._0_4_;
                  }
                }
                FUN_1805f68fc(&DAT_1808e6bb0);
              }
            }
          }
        }
      }
      cVar15 = local_fa7;
    }
  }
LAB_1803f00d1:
  ppuVar41 = &PTR_180700558;
  if (local_828 == 0) {
    if ((*(double *)(param_1 + 0x66) == 0.0) && ((char)param_1[1] == '\0')) goto LAB_1803f1e13;
  }
  else if (((((local_7d0 == *(double *)(param_1 + 0x66)) &&
             (((local_7f8 == param_1[0x79] && (local_7f4 == param_1[0x7a])) &&
              (local_7e0 == (float)param_1[0x74])))) &&
            ((local_7dc == (float)param_1[0x75] && (local_7d8 == (float)param_1[0x76])))) &&
           (local_72c == (float)param_1[0x77])) &&
          (((local_728 == (float)param_1[0x78] && (cVar15 == (char)param_1[0x7b])) &&
           (UVar22 < *(ulonglong *)(param_1 + 0x6e))))) goto LAB_1803f1e13;
  FUN_1800e60e0(auStack_f38 + 2,&DAT_1807c5da0);
  auStack_f10 = ZEXT816(0);
  uVar40 = *param_1;
  FUN_1801409d0(auStack_f10 + 8,0);
  auStack_f10[0] = 6;
  auStack_f10._8_4_ = uVar40;
  auStack_f10._12_4_ = 0;
  uStack_f00 = 0;
  local_6e8._0_8_ = auStack_f38 + 2;
  unique0x00008e00 = (ulonglong *)local_ef8;
  FUN_1800f4e90(&local_6c8,local_6e8,1,2);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = local_6b8._8_8_;
  local_6b8 = auVar9 << 0x40;
  FUN_1800e60e0(local_e38,"reset");
  local_e20 = ZEXT816(0);
  uVar40 = param_1[1];
  FUN_1801409d0(local_e20 + 8,0);
  local_e20[0] = 4;
  local_f78 = (uint *******)CONCAT71(local_f78._1_7_,(char)uVar40);
  local_e20._8_8_ = local_f78;
  local_e10 = 0;
  local_6e8._0_8_ = local_e38;
  unique0x00009000 = (ulonglong *)local_e08;
  FUN_1800f4e90(local_6b8 + 8,local_6e8,1,2);
  uStack_6a0 = 0;
  FUN_1800e60e0(local_e68,"suspended");
  local_e50 = ZEXT816(0);
  FUN_1801409d0(local_e50 + 8,0);
  local_e50[0] = 4;
  local_f78 = (uint *******)CONCAT71(local_f78._1_7_,cVar15);
  local_e50._8_8_ = local_f78;
  local_e40 = 0;
  local_6e8._0_8_ = local_e68;
  unique0x00009000 = (ulonglong *)local_e38;
  FUN_1800f4e90(local_698,local_6e8,1,2);
  local_688 = 0;
  FUN_1800e60e0(local_e98,"definition");
  local_e80 = ZEXT816(0);
  lVar33 = (longlong)(int)local_828;
  FUN_1801409d0(local_e80 + 8,0);
  local_e80[0] = 5;
  local_e80._8_8_ = lVar33;
  local_e70 = 0;
  local_6e8._0_8_ = local_e98;
  unique0x00009000 = (ulonglong *)local_e68;
  FUN_1800f4e90(&local_680,local_6e8,1,2);
  local_670 = 0;
  FUN_1800e60e0(local_ec8,"paint");
  local_eb0 = ZEXT816(0);
  lVar33 = (longlong)(int)local_824;
  FUN_1801409d0(local_eb0 + 8,0);
  local_eb0[0] = 5;
  local_eb0._8_8_ = lVar33;
  local_ea0 = 0;
  local_6e8._0_8_ = local_ec8;
  unique0x00008e00 = (ulonglong *)local_e98;
  FUN_1800f4e90(&local_668,local_6e8,1,2);
  local_658 = 0;
  FUN_1800e60e0(local_928,&DAT_180819c88);
  local_910 = ZEXT816(0);
  lVar33 = (longlong)(int)local_820;
  FUN_1801409d0(local_910 + 8,0);
  local_910[0] = 5;
  local_910._8_8_ = lVar33;
  local_900 = 0;
  local_6e8._0_8_ = local_928;
  unique0x00009000 = (ulonglong *)local_8f8;
  FUN_1800f4e90(local_650,local_6e8,1,2);
  local_640 = 0;
  FUN_1800e60e0(local_858,"model");
  FUN_1800e64d0(local_840,local_818);
  local_830 = 0;
  local_6e8._0_8_ = local_858;
  unique0x00009000 = (ulonglong *)&local_828;
  FUN_1800f4e90(&local_638,local_6e8,1,2);
  local_628 = 0;
  FUN_1800e60e0(local_958,&DAT_1806bdfa4);
  local_940 = ZEXT816(0);
  lVar33 = (longlong)(int)local_7f8;
  FUN_1801409d0(local_940 + 8,0);
  local_940[0] = 5;
  local_940._8_8_ = lVar33;
  local_930 = 0;
  local_6e8._0_8_ = local_958;
  unique0x00009000 = (ulonglong *)local_928;
  FUN_1800f4e90(&local_620,local_6e8,1,2);
  local_610 = 0;
  FUN_1800e60e0(local_988,&DAT_1806bdfa8);
  local_970 = ZEXT816(0);
  lVar33 = (longlong)(int)local_7f4;
  FUN_1801409d0(local_970 + 8,0);
  local_970[0] = 5;
  local_970._8_8_ = lVar33;
  local_960 = 0;
  local_6e8._0_8_ = local_988;
  unique0x00009000 = (ulonglong *)local_958;
  FUN_1800f4e90(&local_608,local_6e8,1,2);
  auVar10._8_8_ = 0;
  auVar10._0_8_ = local_5f8._8_8_;
  local_5f8 = auVar10 << 0x40;
  FUN_1800e60e0(local_9b8,"width");
  local_9a0 = ZEXT816(0);
  FUN_1801409d0(local_9a0 + 8,0);
  local_9a0[0] = 5;
  local_9a0._8_8_ = (longlong)local_7f0;
  local_990 = 0;
  local_6e8._0_8_ = local_9b8;
  unique0x00009000 = (ulonglong *)local_988;
  FUN_1800f4e90(local_5f8 + 8,local_6e8,1,2);
  uStack_5e0 = 0;
  FUN_1800e60e0(local_9e8);
  local_9d0 = ZEXT816(0);
  FUN_1801409d0(local_9d0 + 8,0);
  local_9d0[0] = 5;
  local_9d0._8_8_ = (longlong)local_7ec;
  local_9c0 = 0;
  local_6e8._0_8_ = local_9e8;
  unique0x00009000 = (ulonglong *)local_9b8;
  FUN_1800f4e90(&local_5d8,local_6e8,1,2);
  local_5c8 = 0;
  FUN_1800e60e0(local_a18);
  dVar13 = local_7d0;
  local_a00 = ZEXT816(0);
  FUN_1801409d0(local_a00 + 8,0);
  local_a00[0] = 6;
  local_a00._8_8_ = dVar13;
  local_9f0 = 0;
  local_6e8._0_8_ = local_a18;
  unique0x00009000 = (ulonglong *)local_9e8;
  FUN_1800f4e90(&local_5c0,local_6e8,1,2);
  local_5b0 = 0;
  FUN_1800e60e0(local_a48);
  local_a30 = ZEXT816(0);
  fVar48 = local_7e0;
  FUN_1801409d0(local_a30 + 8,0);
  local_a30[0] = 7;
  local_a30._8_8_ = (double)fVar48;
  local_a20 = 0;
  local_6e8._0_8_ = local_a48;
  unique0x00009000 = (ulonglong *)local_a18;
  FUN_1800f4e90(local_5a8,local_6e8,1,2);
  local_598 = 0;
  FUN_1800e60e0(local_a78);
  local_a60 = ZEXT816(0);
  fVar48 = local_7dc;
  FUN_1801409d0(local_a60 + 8,0);
  local_a60[0] = 7;
  local_a60._8_8_ = (double)fVar48;
  local_a50 = 0;
  local_6e8._0_8_ = local_a78;
  unique0x00009000 = (ulonglong *)local_a48;
  FUN_1800f4e90(local_590,local_6e8,1,2);
  local_580 = 0;
  FUN_1800e60e0(local_aa8);
  local_a90 = ZEXT816(0);
  fVar48 = local_7d8;
  FUN_1801409d0(local_a90 + 8,0);
  local_a90[0] = 7;
  local_a90._8_8_ = (double)fVar48;
  local_a80 = 0;
  local_6e8._0_8_ = local_aa8;
  unique0x00009000 = (ulonglong *)local_a78;
  FUN_1800f4e90(local_578,local_6e8,1,2);
  local_568 = 0;
  FUN_1800e60e0(local_ad8);
  local_ac0 = ZEXT816(0);
  fVar48 = local_72c;
  FUN_1801409d0(local_ac0 + 8,0);
  local_ac0[0] = 7;
  local_ac0._8_8_ = (double)fVar48;
  local_ab0 = 0;
  local_6e8._0_8_ = local_ad8;
  unique0x00009000 = (ulonglong *)local_aa8;
  FUN_1800f4e90(local_560,local_6e8,1,2);
  local_550 = 0;
  FUN_1800e60e0(local_b08);
  local_af0 = ZEXT816(0);
  fVar48 = local_728;
  FUN_1801409d0(local_af0 + 8,0);
  local_af0[0] = 7;
  local_af0._8_8_ = (double)fVar48;
  local_ae0 = 0;
  local_6e8._0_8_ = local_b08;
  unique0x00009000 = (ulonglong *)local_ad8;
  FUN_1800f4e90(local_548,local_6e8,1,2);
  local_538 = 0;
  FUN_1800e60e0(local_b38);
  local_b20 = ZEXT816(0);
  FUN_1801409d0(local_b20 + 8,0);
  local_b20[0] = 4;
  local_f78 = (uint *******)CONCAT71(local_f78._1_7_,local_fa6);
  local_b20._8_8_ = local_f78;
  local_b10 = 0;
  local_6e8._0_8_ = local_b38;
  unique0x00009000 = (ulonglong *)local_b08;
  FUN_1800f4e90(local_530,local_6e8,1,2);
  local_520 = 0;
  FUN_1800e60e0(local_b68);
  local_b50 = ZEXT816(0);
  FUN_1801409d0(local_b50 + 8,0);
  local_b50[0] = 4;
  local_f78 = (uint *******)CONCAT71(local_f78._1_7_,local_7b8);
  local_b50._8_8_ = local_f78;
  local_b40 = 0;
  local_6e8._0_8_ = local_b68;
  unique0x00009000 = (ulonglong *)local_b38;
  FUN_1800f4e90(local_518,local_6e8,1,2);
  local_508 = 0;
  FUN_1800e60e0(local_888,"item_id");
  FUN_1800e64d0(local_870,local_7b0);
  local_860 = 0;
  local_6e8._0_8_ = local_888;
  unique0x00009000 = (ulonglong *)local_858;
  FUN_1800f4e90(local_500,local_6e8,1,2);
  local_4f0 = 0;
  FUN_1800e60e0(local_b98);
  local_b80 = ZEXT816(0);
  FUN_1801409d0(local_b80 + 8,0);
  local_b80[0] = 5;
  local_b80._8_8_ = (longlong)local_790;
  local_b70 = 0;
  local_6e8._0_8_ = local_b98;
  unique0x00009000 = (ulonglong *)local_b68;
  FUN_1800f4e90(local_4e8,local_6e8,1,2);
  local_4d8 = 0;
  FUN_1800e60e0(local_bc8);
  local_bb0 = ZEXT816(0);
  FUN_1801409d0(local_bb0 + 8,0);
  local_bb0[0] = 5;
  local_bb0._8_8_ = (longlong)(int)local_78c;
  local_ba0 = 0;
  local_6e8._0_8_ = local_bc8;
  unique0x00009000 = (ulonglong *)local_b98;
  FUN_1800f4e90(local_4d0,local_6e8,1,2);
  local_4c0 = 0;
  FUN_1800e60e0(local_bf8);
  local_be0 = ZEXT816(0);
  FUN_1801409d0(local_be0 + 8,0);
  local_be0[0] = 6;
  local_be0._8_8_ = local_788;
  local_bd0 = 0;
  local_6e8._0_8_ = local_bf8;
  unique0x00009000 = (ulonglong *)local_bc8;
  FUN_1800f4e90(local_4b8,local_6e8,1,2);
  local_4a8 = 0;
  FUN_1800e60e0(local_c28);
  local_c10 = ZEXT816(0);
  FUN_1801409d0(local_c10 + 8,0);
  local_c10[0] = 6;
  local_c10._8_8_ = local_780;
  local_c00 = 0;
  local_6e8._0_8_ = local_c28;
  unique0x00009000 = (ulonglong *)local_bf8;
  FUN_1800f4e90(local_4a0,local_6e8,1,2);
  local_490 = 0;
  FUN_1800e60e0(local_c58,"sticker_wear");
  local_c40 = ZEXT816(0);
  FUN_1801409d0(local_c40 + 8,0);
  local_c40[0] = 7;
  local_c40._8_8_ = (double)local_778;
  local_c30 = 0;
  local_6e8._0_8_ = local_c58;
  unique0x00009000 = (ulonglong *)local_c28;
  FUN_1800f4e90(local_488,local_6e8,1,2);
  local_478 = 0;
  FUN_1800e60e0(local_c88,"sticker_default");
  local_c70 = ZEXT816(0);
  FUN_1801409d0(local_c70 + 8,0);
  local_c70[0] = 4;
  local_f78 = (uint *******)CONCAT71(local_f78._1_7_,local_764);
  local_c70._8_8_ = local_f78;
  local_c60 = 0;
  local_6e8._0_8_ = local_c88;
  unique0x00009000 = (ulonglong *)local_c58;
  FUN_1800f4e90(local_470,local_6e8,1,2);
  local_460 = 0;
  FUN_1800e60e0(local_cb8,"charm_kit");
  local_ca0 = ZEXT816(0);
  FUN_1801409d0(local_ca0 + 8,0);
  local_ca0[0] = 5;
  local_ca0._8_8_ = (longlong)local_75c;
  local_c90 = 0;
  local_6e8._0_8_ = local_cb8;
  unique0x00009000 = (ulonglong *)local_c88;
  FUN_1800f4e90(local_458,local_6e8,1,2);
  local_448 = 0;
  FUN_1800e60e0(local_8b8,"charm_state");
  FUN_1800e64d0(local_8a0,local_758);
  local_890 = 0;
  local_6e8._0_8_ = local_8b8;
  unique0x00009000 = (ulonglong *)local_888;
  FUN_1800f4e90(local_440,local_6e8,1,2);
  local_430 = 0;
  FUN_1800e60e0(local_ce8,"player_team");
  local_cd0 = ZEXT816(0);
  lVar33 = (longlong)local_738;
  FUN_1801409d0(local_cd0 + 8,0);
  local_cd0[0] = 5;
  local_cd0._8_8_ = lVar33;
  local_cc0 = 0;
  local_6e8._0_8_ = local_ce8;
  unique0x00009000 = (ulonglong *)local_cb8;
  FUN_1800f4e90(local_428,local_6e8,1,2);
  local_418 = 0;
  FUN_1800e60e0(local_d18,"player_subject");
  local_d00 = ZEXT816(0);
  FUN_1801409d0(local_d00 + 8,0);
  local_d00[0] = 5;
  local_d00._8_8_ = (longlong)local_734;
  local_cf0 = 0;
  local_6e8._0_8_ = local_d18;
  unique0x00009000 = (ulonglong *)local_ce8;
  FUN_1800f4e90(local_410,local_6e8,1,2);
  local_400 = 0;
  FUN_1800e60e0(local_d48,"cutout");
  local_d30 = ZEXT816(0);
  FUN_1801409d0(local_d30 + 8,0);
  local_d30[0] = 4;
  local_f78 = (uint *******)CONCAT71(local_f78._1_7_,local_730);
  local_d30._8_8_ = local_f78;
  local_d20 = 0;
  local_6e8._0_8_ = local_d48;
  unique0x00009000 = (ulonglong *)local_d18;
  FUN_1800f4e90(local_3f8,local_6e8,1,2);
  local_3e8 = 0;
  FUN_1800e60e0(local_d78,"native_zoom");
  local_d60 = ZEXT816(0);
  FUN_1801409d0(local_d60 + 8,0);
  local_d60[0] = 4;
  local_f78 = (uint *******)CONCAT71(local_f78._1_7_,local_72f);
  local_d60._8_8_ = local_f78;
  local_d50 = 0;
  local_6e8._0_8_ = local_d78;
  unique0x00009000 = (ulonglong *)local_d48;
  FUN_1800f4e90(local_3e0,local_6e8,1,2);
  local_3d0 = 0;
  FUN_1800e60e0(local_da8,"direct");
  local_d90 = ZEXT816(0);
  FUN_1801409d0(local_d90 + 8,0);
  local_d90[0] = 4;
  local_f78 = (uint *******)CONCAT71(local_f78._1_7_,local_774);
  local_d90._8_8_ = local_f78;
  local_d80 = 0;
  local_6e8._0_8_ = local_da8;
  unique0x00009000 = (ulonglong *)local_d78;
  FUN_1800f4e90(local_3c8,local_6e8,1,2);
  local_3b8 = 0;
  FUN_1800e60e0(local_dd8,"keep_frame");
  local_dc0 = ZEXT816(0);
  FUN_1801409d0(local_dc0 + 8,0);
  local_dc0[0] = 4;
  local_f78 = (uint *******)CONCAT71(local_f78._1_7_,local_72e);
  local_dc0._8_8_ = local_f78;
  local_db0 = 0;
  local_6e8._0_8_ = local_dd8;
  unique0x00009000 = (ulonglong *)local_da8;
  FUN_1800f4e90(local_3b0,local_6e8,1,2);
  local_3a0 = 0;
  FUN_1800e60e0(local_e08,"background");
  local_df0 = ZEXT816(0);
  FUN_1801409d0(local_df0 + 8,0);
  local_df0[0] = 6;
  local_df0._8_4_ = local_724;
  local_df0._12_4_ = 0;
  local_de0 = 0;
  local_6e8._0_8_ = local_e08;
  unique0x00009000 = (ulonglong *)local_dd8;
  FUN_1800f4e90(local_398,local_6e8,1,2);
  local_388 = 0;
  FUN_1800e60e0(local_f58,"matte");
  uStack_f3f = 0;
  uStack_f40 = 0;
  auStack_f38[0] = 0;
  FUN_1801409d0(auStack_f38,0);
  uStack_f40 = 6;
  auStack_f38[1] = 0;
  local_6e8._0_8_ = local_f58;
  unique0x00008e00 = auStack_f38 + 2;
  auStack_f38[0] = (ulonglong)local_720;
  FUN_1800f4e90(local_380,local_6e8,1,2);
  local_370 = 0;
  FUN_1800e60e0(local_ef8,"loadout_side");
  local_ee0 = ZEXT816(0);
  lVar33 = (longlong)local_71c;
  FUN_1801409d0(local_ee0 + 8,0);
  local_ee0[0] = 5;
  local_ee0._8_8_ = lVar33;
  local_ed0 = 0;
  local_6e8._0_8_ = local_ef8;
  unique0x00008e00 = (ulonglong *)local_ec8;
  FUN_1800f4e90(local_368,local_6e8,1,2);
  local_358 = 0;
  stack0xfffffffffffff920 = (ulonglong *)local_350;
  local_6e8._0_8_ = &local_6c8;
  FUN_1800f4e90(local_6f8,local_6e8,1,2);
  _eh_vector_destructor_iterator_(&local_6c8,0x18,0x25,FUN_1800aab30);
  _eh_vector_destructor_iterator_(local_ef8,0x18,2,FUN_1800aab30);
  _eh_vector_destructor_iterator_(local_f58,0x18,2,FUN_1800aab30);
  _eh_vector_destructor_iterator_(local_e08,0x18,2,FUN_1800aab30);
  _eh_vector_destructor_iterator_(local_dd8,0x18,2,FUN_1800aab30);
  _eh_vector_destructor_iterator_(local_da8,0x18,2,FUN_1800aab30);
  _eh_vector_destructor_iterator_(local_d78,0x18,2,FUN_1800aab30);
  _eh_vector_destructor_iterator_(local_d48,0x18,2,FUN_1800aab30);
  _eh_vector_destructor_iterator_(local_d18,0x18,2,FUN_1800aab30);
  _eh_vector_destructor_iterator_(local_ce8,0x18,2,FUN_1800aab30);
  _eh_vector_destructor_iterator_(local_8b8,0x18,2,FUN_1800aab30);
  _eh_vector_destructor_iterator_(local_cb8,0x18,2,FUN_1800aab30);
  _eh_vector_destructor_iterator_(local_c88,0x18,2,FUN_1800aab30);
  _eh_vector_destructor_iterator_(local_c58,0x18,2,FUN_1800aab30);
  _eh_vector_destructor_iterator_(local_c28,0x18,2,FUN_1800aab30);
  _eh_vector_destructor_iterator_(local_bf8,0x18,2,FUN_1800aab30);
  _eh_vector_destructor_iterator_(local_bc8,0x18,2,FUN_1800aab30);
  _eh_vector_destructor_iterator_(local_b98,0x18,2,FUN_1800aab30);
  _eh_vector_destructor_iterator_(local_888,0x18,2,FUN_1800aab30);
  _eh_vector_destructor_iterator_(local_b68,0x18,2,FUN_1800aab30);
  _eh_vector_destructor_iterator_(local_b38,0x18,2,FUN_1800aab30);
  _eh_vector_destructor_iterator_(local_b08,0x18,2,FUN_1800aab30);
  _eh_vector_destructor_iterator_(local_ad8,0x18,2,FUN_1800aab30);
  _eh_vector_destructor_iterator_(local_aa8,0x18,2,FUN_1800aab30);
  _eh_vector_destructor_iterator_(local_a78,0x18,2,FUN_1800aab30);
  _eh_vector_destructor_iterator_(local_a48,0x18,2,FUN_1800aab30);
  _eh_vector_destructor_iterator_(local_a18,0x18,2,FUN_1800aab30);
  _eh_vector_destructor_iterator_(local_9e8,0x18,2,FUN_1800aab30);
  _eh_vector_destructor_iterator_(local_9b8,0x18,2,FUN_1800aab30);
  _eh_vector_destructor_iterator_(local_988,0x18,2,FUN_1800aab30);
  _eh_vector_destructor_iterator_(local_958,0x18,2,FUN_1800aab30);
  _eh_vector_destructor_iterator_(local_858,0x18,2,FUN_1800aab30);
  _eh_vector_destructor_iterator_(local_928,0x18,2,FUN_1800aab30);
  _eh_vector_destructor_iterator_(local_ec8,0x18,2,FUN_1800aab30);
  _eh_vector_destructor_iterator_(local_e98,0x18,2,FUN_1800aab30);
  _eh_vector_destructor_iterator_(local_e68,0x18,2,FUN_1800aab30);
  _eh_vector_destructor_iterator_(local_e38,0x18,2,FUN_1800aab30);
  _eh_vector_destructor_iterator_(auStack_f38 + 2,0x18,2,FUN_1800aab30);
  if ((cVar15 != '\0') ||
     (pcVar31 = 
      "\n(function(s) {\n    let root=$.GetContextPanel();\n    for(let i=0;i<16 && root.GetParent();++i) root=root.GetParent();\n    const hostId=\'HVHSkinPreview\'+(s.slot?String(s.slot):\'\');\n    let host=root.FindChildTraverse(hostId);\n    if(s.reset && host) {host.visible=false;host.DeleteAsync(0);host=null;}\n    if(s.definition<=0 || s.kind<0 || s.kind>3) {if(host){host.visible=false;host.DeleteAsync(0);}return;}\n    const errorKey=hostId+\'Error\',errorTime=hostId+\'ErrorTime\';\n    if(root.Data()[errorKey]===s.generation && Date.now()-root.Data()[errorTime]<1000) return;\n    let reusingPanel=false;\n    try {\n        if(!host) {\n            host=$.CreatePanel(\'Panel\',root,hostId);\n            host.hittest=false;host.hittestchildren=false;host.style.zIndex=\'999\';\n            const keepAlive=function() {\n                if(!host.IsValid()) return;\n                const now=Date.now(),previous=host.Data().leaseCheck;\n                host.Data().leaseCheck=now;\n                // A paused UI cannot receive either scheduled checks or the\n                // runtime heartbeat. Allow one second after it resumes; an\n                // unloaded runtime still expires once callbacks run again.\n                if(previous!==undefined && now-previous>5000)host.Data().lease=Math.max(host.Data().lease,now-4000);\n                if(now-host.Data().lease>5000) {host.visible=false;host.DeleteAsync(0);return;}\n                $.Schedule(.05,keepAlive);\n            };\n            host.Data().lease=host.Data().leaseCheck=Date.now();$.Schedule(.05,keepAlive);\n        }\n        host.Data().lease=Date.now();\n        // Hide without freeing the native actor. Runtime shutdown expires its lease.\n        const resumed=host.visible===false && !s.suspended;\n        host.visible=!s.suspended;\n        if(s.suspended)return;\n        const charm=s.kind===0 && s.charm_kit>0;\n        const editing=s.kind===0 && (s.sticker_kit>0 || charm) && s.sticker_session>0;\n        host.hittest=editing;host.hittestchildren=editing;\n        const sx=root.actualuiscale_x||1,..." /* TRUNCATED STRING LITERAL */
     , local_828 == 0)) {
    pcVar31 = 
    "\n(function(s) {\n    let root=$.GetContextPanel();\n    for(let i=0;i<16 && root.GetParent();++i)root=root.GetParent();\n    const host=root.FindChildTraverse(\'HVHSkinPreview\'+(s.slot?String(s.slot):\'\'));\n    if(!host)return;\n    if(s.reset || s.definition<=0) {host.visible=false;host.DeleteAsync(0);return;}\n    host.Data().lease=Date.now();\n    host.visible=false;\n})(__HVH_PREVIEW__);\n"
    ;
  }
  local_718 = (undefined1  [16])0x0;
  local_708 = 0;
  local_700 = 0;
  lVar33 = -1;
  do {
    lVar33 = lVar33 + 1;
  } while (pcVar31[lVar33] != '\0');
  FUN_18015ba30(local_718);
  local_fe0 = (undefined8 *)((ulonglong)local_fe0 & 0xffffffff00000000);
  puVar27 = (undefined8 *)FUN_1800f4710(local_6f8,local_ef8,0xffffffff);
  local_f78 = (uint *******)local_718;
  if (0xf < local_700) {
    local_f78 = (uint *******)local_718._0_8_;
  }
  if ((local_708 < 0xf) ||
     (puVar37 = (undefined *)(local_708 + (longlong)local_f78),
     puVar28 = (undefined *)thunk_FUN_1805f9970(local_f78,puVar37,"__HVH_PREVIEW__",0xf),
     puVar28 == puVar37)) {
    lVar33 = -1;
  }
  else {
    lVar33 = (longlong)puVar28 - (longlong)local_f78;
  }
  local_fe8 = (undefined **)puVar27[2];
  if (0xf < (ulonglong)puVar27[3]) {
    puVar27 = (undefined8 *)*puVar27;
  }
  FUN_1801b3ca0(local_718,lVar33,0xf,puVar27);
  FUN_18015c010(local_ef8);
  cVar14 = FUN_1803eca40(local_718,0,0);
  dVar13 = local_7d0;
  if (cVar14 == '\0') {
    *(ULONGLONG *)(param_1 + 0x8a) = UVar22 + 100;
  }
  else {
    param_1[0x8a] = 0;
    param_1[0x8b] = 0;
    if (*(double *)(param_1 + 0x66) != local_7d0) {
      FUN_18063ab10(&local_6c8,0,0x600);
      local_fb8 = (double)CONCAT44(local_fb8._4_4_,local_738);
      local_fc0 = (double)CONCAT44(local_fc0._4_4_,local_71c);
      local_fc8 = dVar13;
      local_fd0 = local_820;
      local_fd8 = local_824;
      local_fe0 = (undefined8 *)CONCAT44(local_fe0._4_4_,local_828);
      local_fe8 = (undefined **)CONCAT44(local_fe8._4_4_,*param_1);
      FUN_18015ad60(&local_6c8,0x600,0xffffffffffffffff,
                    "slot=%u definition=%d paint=%d kind=%d generation=%llu side=%d team=%d visual_ack=pending"
                   );
      if ((char)local_6c8 != '\0') {
        ppuVar41 = (undefined **)&DAT_1806bcfc0;
      }
      local_fe0 = &local_6c8;
      local_fe8 = ppuVar41;
      FUN_1800f6900(0);
    }
    if ((local_828 == 0) || (cVar15 != '\0')) {
      uVar16 = 0;
    }
    else {
      uVar16 = 1;
    }
    *(undefined1 *)((longlong)param_1 + 0x1ed) = uVar16;
    *(double *)(param_1 + 0x66) = local_7d0;
    param_1[0x79] = local_7f8;
    param_1[0x7a] = local_7f4;
    param_1[0x74] = (uint)local_7e0;
    param_1[0x75] = (uint)local_7dc;
    param_1[0x76] = (uint)local_7d8;
    param_1[0x77] = (uint)local_72c;
    param_1[0x78] = (uint)local_728;
    *(ULONGLONG *)(param_1 + 0x6e) = UVar22 + 100;
    *(char *)(param_1 + 0x7b) = cVar15;
    if ((local_828 != 0) && (cVar15 == '\0')) {
      lVar35 = UVar22 + 400;
    }
    *(longlong *)(param_1 + 2) = lVar35;
    *(undefined1 *)(param_1 + 1) = 0;
  }
  FUN_18015c010(local_718);
  FUN_1801409d0(local_6f0,local_6f8[0]);
LAB_1803f1e13:
  FUN_18015c010(local_758);
  FUN_18015c010(local_7b0);
  FUN_18015c010(local_818);
}



