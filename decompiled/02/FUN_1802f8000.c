// FUN_1802f8000 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802f8000 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802f8000(void)

{
  undefined1 auVar1 [16];
  bool bVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  char cVar8;
  int iVar9;
  ULONGLONG UVar10;
  longlong lVar11;
  undefined **ppuVar12;
  undefined1 (*pauVar13) [16];
  ulonglong uVar14;
  undefined8 uVar15;
  undefined1 *puVar16;
  longlong lVar17;
  ulonglong uVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  byte *******pppppppbVar21;
  byte *pbVar22;
  byte *******pppppppbVar23;
  undefined1 *puVar24;
  undefined8 *******pppppppuVar25;
  undefined8 *******pppppppuVar26;
  uint uVar27;
  ulonglong uVar28;
  uint uVar29;
  char *pcVar30;
  char *pcVar31;
  char *pcVar32;
  bool bVar33;
  undefined1 auStack_808 [32];
  undefined **local_7e8;
  char *local_7e0;
  char *local_7d8;
  char *local_7d0;
  undefined4 local_7c8;
  undefined8 local_7c0;
  int local_7b8;
  int local_7b0;
  char local_7a8;
  uint local_7a4;
  char local_7a0;
  uint local_79c;
  undefined1 local_798 [16];
  undefined1 local_788 [16];
  undefined8 *local_778;
  undefined8 local_770;
  undefined1 local_768 [16];
  undefined1 auStack_758 [16];
  int local_748;
  undefined8 local_740;
  undefined1 local_738 [16];
  undefined1 local_728 [16];
  undefined *local_718;
  undefined1 local_710 [32];
  undefined1 local_6f0 [32];
  undefined8 local_6d0;
  undefined8 uStack_6c8;
  byte *******local_6c0 [2];
  char *local_6b0;
  ulonglong local_6a8;
  undefined8 *******local_6a0;
  undefined8 uStack_698;
  char *pcStack_690;
  ulonglong uStack_688;
  undefined1 local_680 [16];
  ulonglong local_670;
  ulonglong local_668;
  undefined1 (*local_660 [2]) [16];
  ulonglong local_650;
  ulonglong local_648;
  char local_638 [1536];
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_808;
  uVar29 = 0;
  local_7a4 = 0;
  local_718 = &DAT_180b8f998;
  iVar9 = FUN_1805f68d0(&DAT_180b8f998);
  if (iVar9 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_180b8f9e4 == 0x7fffffff) {
    DAT_180b8f9e4 = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  local_768._8_8_ = uRam0000000180bb8898;
  local_768._0_8_ = _DAT_180bb8890;
  auStack_758._8_8_ = uRam0000000180bb88a8;
  auStack_758._0_8_ = uRam0000000180bb88a0;
  local_6d0 = _DAT_180bb88b0;
  uStack_6c8 = uRam0000000180bb88b8;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  uVar15 = local_768._0_8_;
  if (local_768._0_8_ == 0) goto LAB_1802f92c6;
  iVar9 = DAT_180c6eef0;
  if (DAT_180c6eef0 == 0) {
    UVar10 = GetTickCount64();
    if (DAT_180c6eed8 <= UVar10) {
      local_778 = (undefined8 *)&DAT_1808fe6f0;
      iVar9 = FUN_1805f68d0(&DAT_1808fe6f0);
      if (iVar9 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808fe73c == 0x7fffffff) {
        DAT_1808fe73c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if ((DAT_180c6eef0 == 0) && (DAT_180c6eed8 <= UVar10)) {
        DAT_180c6eef0 = FUN_1804174b0("CBasePlayerController",0xb22f805e);
        if (DAT_180c6eef0 == 0) {
          DAT_180c6eed8 = UVar10 + 1000;
        }
        else {
          DAT_180c6eed8 = 0xffffffffffffffff;
        }
      }
      iVar9 = DAT_180c6eef0;
      FUN_1805f68fc(&DAT_1808fe6f0);
      if (iVar9 != 0) goto LAB_1802f8153;
    }
    puVar20 = (undefined8 *)0x0;
  }
  else {
LAB_1802f8153:
    lVar11 = FUN_18017ea70();
    *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + 1;
    if ((longlong)iVar9 + uVar15 == 0) {
      bVar33 = false;
      puVar19 = local_778;
    }
    else {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_798._8_8_;
      local_798 = auVar1 << 0x40;
      cVar8 = FUN_1804514f0(local_798,(longlong)iVar9 + uVar15,8);
      if (cVar8 == '\0') {
        bVar33 = false;
        puVar19 = local_778;
      }
      else {
        bVar33 = true;
        puVar19 = (undefined8 *)local_798._0_8_;
      }
    }
    lVar11 = FUN_18017ea70();
    if (*(int *)(lVar11 + 4) != 0) {
      *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + -1;
    }
    puVar20 = (undefined8 *)0x0;
    if (bVar33) {
      puVar20 = puVar19;
    }
  }
  bVar33 = DAT_180b8f9f0 != uVar15;
  if (((DAT_180b8f9f8 == (undefined8 *)0x0) || (puVar20 == (undefined8 *)0x0)) ||
     (DAT_180b8f9f8 == puVar20)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  local_778 = &DAT_180b0b4b8;
  if (0xf < DAT_180b0b4d0) {
    local_778 = DAT_180b0b4b8;
  }
  local_770 = DAT_180b0b4c8;
  local_7a8 = bVar33;
  FUN_1802f5320(local_660,&local_778);
  cVar8 = DAT_180b8f9ea;
  local_7a0 = local_650 != 0;
  if ((local_650 == 0) && (DAT_180b0b448 == '\0')) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  DAT_180b8f9ea = DAT_180b0b448;
  if ((cVar8 != '\0') && (DAT_180b0b448 == '\0')) {
    DAT_180b8fa98 = (char *)0x0;
    puVar19 = &DAT_180b8fa88;
    if (0xf < DAT_180b8faa0) {
      puVar19 = DAT_180b8fa88;
    }
    *(undefined1 *)puVar19 = 0;
    DAT_180b8fa50 = (char *)0x0;
    puVar19 = (undefined8 *)&DAT_180b8fa40;
    if (0xf < DAT_180b8fa58) {
      puVar19 = _DAT_180b8fa40;
    }
    *(undefined1 *)puVar19 = 0;
    DAT_180b8fa80 = '\x01';
    DAT_180b8faa8 = (undefined8 *)0x0;
    if ((!(bool)local_7a0) && (DAT_180b8f9ec != '\0')) {
      DAT_180b8f9eb = '\x01';
    }
  }
  if (((((bVar33) || (bVar2)) || (DAT_180b8f9ec == '\0')) || ((bVar3 || (DAT_180b8f9e9 != '\0'))))
     || ((DAT_180b8f9eb != '\0' || ((DAT_180b8fa80 != '\0' || (DAT_180b8fa98 != (char *)0x0)))))) {
    FUN_1802f53c0(local_6c0,uVar15);
    if (bVar2) {
      DAT_180b8f9ec = '\0';
      DAT_180b8fa10 = (char *)0x0;
      puVar16 = &DAT_180b8fa00;
      if (0xf < DAT_180b8fa18) {
        puVar16 = _DAT_180b8fa00;
      }
      *puVar16 = 0;
      DAT_180b8f9e9 = '\0';
      DAT_180b8f9eb = '\0';
    }
    if ((local_7a8 != '\0') || (bVar2)) {
      DAT_180b8f9f0 = uVar15;
      if (puVar20 != (undefined8 *)0x0) {
        DAT_180b8f9f8 = puVar20;
      }
      DAT_180b8fa30 = (char *)0x0;
      puVar16 = &DAT_180b8fa20;
      if (0xf < DAT_180b8fa38) {
        puVar16 = _DAT_180b8fa20;
      }
      *puVar16 = 0;
      DAT_180b8fa50 = (char *)0x0;
      puVar19 = (undefined8 *)&DAT_180b8fa40;
      if (0xf < DAT_180b8fa58) {
        puVar19 = _DAT_180b8fa40;
      }
      *(undefined1 *)puVar19 = 0;
      DAT_180b8fa70 = (char *)0x0;
      puVar19 = &DAT_180b8fa60;
      if (0xf < DAT_180b8fa78) {
        puVar19 = DAT_180b8fa60;
      }
      *(undefined1 *)puVar19 = 0;
      DAT_180b8fa80 = '\0';
      DAT_180b8fa98 = (char *)0x0;
      puVar19 = &DAT_180b8fa88;
      if (0xf < DAT_180b8faa0) {
        puVar19 = DAT_180b8fa88;
      }
      *(undefined1 *)puVar19 = 0;
      DAT_180b8faa8 = (undefined8 *)0x0;
      FUN_18063ab10(local_638,0,0x600);
      local_7d8 = "true";
      local_7e8 = (undefined **)0x1806ff000;
      if (local_6b0 == (char *)0x0) {
        local_7d8 = "false";
      }
      local_7e0 = "false";
      if (bVar2) {
        local_7e0 = "true";
      }
      if (local_7a8 != '\0') {
        local_7e8 = (undefined **)0x1806ff008;
      }
      FUN_18015ad60(local_638,0x600,0xffffffffffffffff,
                    "controller_changed=%s account_changed=%s name_available=%s");
      ppuVar12 = &PTR_180700558;
      if (local_638[0] != '\0') {
        ppuVar12 = (undefined **)&DAT_1806bcfc0;
      }
      local_7e0 = local_638;
      local_7e8 = ppuVar12;
      FUN_1800f6900(1);
    }
    if (DAT_180b8f9ec == '\0') {
      if (local_6b0 != (char *)0x0) {
        pppppppbVar23 = (byte *******)local_6c0;
        if (0xf < local_6a8) {
          pppppppbVar23 = local_6c0[0];
        }
        FUN_180113930(&DAT_180b8fa00,pppppppbVar23);
        DAT_180b8f9ec = '\x01';
        goto LAB_1802f84f5;
      }
    }
    else {
LAB_1802f84f5:
      if (bVar3) {
        DAT_180b8f9e9 = '\x01';
        DAT_180b8f9eb = '\0';
      }
      else if (DAT_180b8f9e9 != '\0') {
        DAT_180b8f9e9 = '\0';
        DAT_180b8f9eb = DAT_180b8f9ec;
      }
      FUN_18017bf40(&local_778);
      if (local_7a0 == '\0') {
        local_798._0_8_ = &DAT_180b8fa00;
        if (0xf < DAT_180b8fa18) {
          local_798._0_8_ = _DAT_180b8fa00;
        }
        local_798._8_8_ = DAT_180b8fa10;
        pauVar13 = (undefined1 (*) [16])FUN_1802f5320(local_768,local_798);
        uVar27 = 2;
      }
      else {
        local_738 = (undefined1  [16])0x0;
        local_728 = (undefined1  [16])0x0;
        pauVar13 = (undefined1 (*) [16])local_660;
        if (0xf < local_648) {
          pauVar13 = local_660[0];
        }
        if (0x7fffffffffffffff < local_650) {
                    /* WARNING: Subroutine does not return */
          FUN_18015bb70();
        }
        if (local_650 < 0x10) {
          local_728._8_8_ = 0xf;
          local_728._0_8_ = local_650;
          local_738 = *pauVar13;
        }
        else {
          uVar28 = local_650 | 0xf;
          if (uVar28 < 0x8000000000000000) {
            if (uVar28 < 0x16) {
              uVar28 = 0x16;
            }
          }
          else {
            uVar28 = 0x7fffffffffffffff;
          }
          uVar15 = FUN_18015bca0(uVar28 + 1);
          local_738._0_8_ = uVar15;
          local_728._8_8_ = uVar28;
          local_728._0_8_ = local_650;
          FUN_18063aed0(uVar15,pauVar13,local_650 + 1);
        }
        pauVar13 = &local_738;
        uVar27 = 1;
      }
      local_680 = (undefined1  [16])0x0;
      local_670 = 0;
      local_668 = 0;
      uVar28 = *(ulonglong *)pauVar13[1];
      if (0xf < *(ulonglong *)(pauVar13[1] + 8)) {
        pauVar13 = *(undefined1 (**) [16])*pauVar13;
      }
      local_7a4 = uVar27;
      if (0x7fffffffffffffff < uVar28) {
                    /* WARNING: Subroutine does not return */
        FUN_18015bb70();
      }
      if (uVar28 < 0x10) {
        local_670 = uVar28;
        local_668 = 0xf;
        local_680 = *pauVar13;
      }
      else {
        uVar18 = uVar28 | 0xf;
        if (uVar18 < 0x8000000000000000) {
          if (uVar18 < 0x16) {
            uVar18 = 0x16;
          }
        }
        else {
          uVar18 = 0x7fffffffffffffff;
        }
        uVar15 = FUN_18015bca0(uVar18 + 1);
        local_680._0_8_ = uVar15;
        local_670 = uVar28;
        local_668 = uVar18;
        FUN_18063aed0(uVar15,pauVar13,uVar28 + 1);
      }
      if ((uVar27 & 2) != 0) {
        uVar27 = uVar27 & 0xfffffffd;
        local_7a4 = uVar27;
        FUN_18015c010(local_768);
      }
      if ((uVar27 & 1) != 0) {
        uVar27 = uVar27 & 0xfffffffe;
        local_7a4 = uVar27;
        FUN_18015c010(local_738);
      }
      uVar28 = local_670;
      if (bVar3) {
        local_798 = (undefined1  [16])0x0;
        local_788 = (undefined1  [16])0x0;
        pauVar13 = &local_680;
        if (0xf < local_668) {
          pauVar13 = (undefined1 (*) [16])local_680._0_8_;
        }
        if (0x7fffffffffffffff < local_670) {
                    /* WARNING: Subroutine does not return */
          FUN_18015bb70();
        }
        if (local_670 < 0x10) {
          local_788._8_8_ = 0xf;
          local_788._0_8_ = local_670;
          local_798 = *pauVar13;
        }
        else {
          uVar14 = local_670 | 0xf;
          uVar18 = 0x7fffffffffffffff;
          if ((uVar14 < 0x8000000000000000) && (uVar18 = uVar14, uVar14 < 0x16)) {
            uVar18 = 0x16;
          }
          uVar15 = FUN_18015bca0(uVar18 + 1);
          local_798._0_8_ = uVar15;
          local_788._8_8_ = uVar18;
          local_788._0_8_ = uVar28;
          FUN_18063aed0(uVar15,pauVar13,uVar28 + 1);
        }
        uVar27 = uVar27 | 4;
      }
      else {
        if (DAT_180b8f9eb == '\0') {
          auStack_758 = ZEXT816(0xf) << 0x40;
          local_768._1_15_ = SUB1615((undefined1  [16])0x0,1);
          auVar4[0xf] = 0;
          auVar4._0_15_ = local_768._1_15_;
          local_768 = auVar4 << 8;
          puVar16 = local_768;
          uVar27 = uVar27 | 0x10;
        }
        else {
          puVar16 = (undefined1 *)FUN_18015b360(local_6f0,&DAT_180b8fa00);
          uVar27 = uVar27 | 8;
        }
        local_7a4 = uVar27;
        FUN_18015b360(local_710,puVar16);
        uVar27 = uVar27 | 0x20;
      }
      local_7a4 = uVar27;
      FUN_18015b360(&local_6a0);
      if ((uVar27 & 0x20) != 0) {
        uVar27 = uVar27 & 0xffffffdf;
        local_7a4 = uVar27;
        FUN_18015c010(local_710);
      }
      if ((uVar27 & 0x10) != 0) {
        uVar27 = uVar27 & 0xffffffef;
        local_7a4 = uVar27;
        FUN_18015c010(local_768);
      }
      if ((uVar27 & 8) != 0) {
        uVar27 = uVar27 & 0xfffffff7;
        local_7a4 = uVar27;
        FUN_18015c010(local_6f0);
      }
      if ((uVar27 & 4) != 0) {
        uVar27 = uVar27 & 0xfffffffb;
        local_7a4 = uVar27;
        FUN_18015c010(local_798);
      }
      lVar11 = DAT_180bb8958;
      local_748 = 0x2ee;
      local_740 = 0;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = local_798._8_8_;
      local_798 = auVar5 << 0x40;
      if (DAT_180b0b448 != '\0') {
        lVar17 = FUN_18017ea70();
        *(int *)(lVar17 + 4) = *(int *)(lVar17 + 4) + 1;
        if (lVar11 == 0) {
          bVar33 = false;
          puVar19 = local_778;
        }
        else {
          auVar6._8_8_ = 0;
          auVar6._0_8_ = local_798._8_8_;
          local_798 = auVar6 << 0x40;
          cVar8 = FUN_1804514f0(local_798,lVar11,8);
          if (cVar8 == '\0') {
            bVar33 = false;
            puVar19 = local_778;
          }
          else {
            bVar33 = true;
            puVar19 = (undefined8 *)local_798._0_8_;
          }
        }
        lVar11 = FUN_18017ea70();
        if (*(int *)(lVar11 + 4) != 0) {
          *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + -1;
        }
        if ((!bVar33) || (puVar19 == (undefined8 *)0x0)) {
          local_798[4] = 0;
        }
        else {
          lVar11 = FUN_18017ea70();
          *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + 1;
          if ((undefined1 *)((longlong)puVar19 + 0x44) == (undefined1 *)0x0) {
LAB_1802f8916:
            local_798[4] = 0;
          }
          else {
            local_79c = 0;
            cVar8 = FUN_1804514f0(&local_79c,(undefined1 *)((longlong)puVar19 + 0x44),4);
            if (cVar8 == '\0') goto LAB_1802f8916;
            local_798[4] = 1;
            local_798._0_4_ = local_79c;
          }
          lVar11 = FUN_18017ea70();
          if (*(int *)(lVar11 + 4) != 0) {
            *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + -1;
          }
        }
        puVar19 = local_778;
        uVar15 = local_798._0_8_;
        if ((local_798[4] == '\0') || ((int)local_798._0_4_ < 1)) {
          local_798[4] = 0;
          uVar15 = local_798._0_8_;
        }
        local_740 = uVar15;
        if ((char)((ulonglong)uVar15 >> 0x20) != '\0') {
          local_748 = FUN_1802f49f0(DAT_180b0b4b4);
          uVar28 = local_670;
          if ((int)uVar15 < 0) {
            uVar18 = 0;
          }
          else {
            iVar9 = local_748;
            if (local_748 < 100) {
              iVar9 = 100;
            }
            uVar18 = (ulonglong)((longlong)(int)uVar15 * 1000) / (ulonglong)((longlong)iVar9 << 6);
          }
          local_798._0_8_ = uVar18;
          puVar16 = local_680;
          if (0xf < local_668) {
            puVar16 = (undefined1 *)local_680._0_8_;
          }
          FUN_1802f4ca0(local_768,DAT_180b0b4b0 == 1,uVar18);
          local_7a4 = uVar27 | 0x100;
          if (uVar28 != 0) {
            lVar11 = 0;
            if (auStack_758._0_8_ != 0) {
              FUN_18015af80(local_768,0x20);
              lVar11 = auStack_758._0_8_;
            }
            uVar18 = 0x20U - lVar11;
            if (uVar28 < 0x20U - lVar11) {
              uVar18 = uVar28;
            }
            if (uVar18 < uVar28) {
              for (; (uVar18 != 0 && ((puVar16[uVar18] & 0xc0) == 0x80)); uVar18 = uVar18 - 1) {
              }
            }
            if (uVar28 < uVar18) {
              uVar18 = uVar28;
            }
            FUN_18015b2a0(local_768,puVar16,uVar18);
          }
          FUN_18015c010(&local_6a0);
          local_6a0 = (undefined8 *******)local_768._0_8_;
          uStack_698 = local_768._8_8_;
          pcStack_690 = (char *)auStack_758._0_8_;
          uStack_688 = auStack_758._8_8_;
          auStack_758 = ZEXT816(0xf) << 0x40;
          auVar7[0xf] = 0;
          auVar7._0_15_ = local_768._1_15_;
          local_768 = auVar7 << 8;
          FUN_18015c010(local_768);
          goto LAB_1802f8b43;
        }
        DAT_180b8fa98 = (char *)0x0;
        puVar20 = &DAT_180b8fa88;
        if (0xf < DAT_180b8faa0) {
          puVar20 = DAT_180b8fa88;
        }
        *(undefined1 *)puVar20 = 0;
        if ((local_778 == DAT_180b8faa8) || ((longlong)DAT_180b8faa8 <= (longlong)local_778)) {
          FUN_18063ab10(local_638,0,0x600);
          FUN_18015ad60(local_638,0x600,0xffffffffffffffff,"action=wait_for_server_clock");
          ppuVar12 = &PTR_180700558;
          if (local_638[0] != '\0') {
            ppuVar12 = (undefined **)&DAT_1806bcfc0;
          }
          local_7e0 = local_638;
          local_7e8 = ppuVar12;
          FUN_1800f6900(2,local_7e0,"ProfileChanger","CLAN_CLOCK_UNAVAILABLE");
          DAT_180b8faa8 = puVar19 + 625000000;
        }
        goto LAB_1802f9298;
      }
LAB_1802f8b43:
      pcVar32 = pcStack_690;
      pppppppuVar25 = local_6a0;
      uVar28 = DAT_180b8faa0;
      if (DAT_180b8fa98 != (char *)0x0) {
        pppppppuVar26 = &local_6a0;
        if (0xf < uStack_688) {
          pppppppuVar26 = local_6a0;
        }
        puVar19 = &DAT_180b8fa88;
        if (0xf < DAT_180b8faa0) {
          puVar19 = DAT_180b8fa88;
        }
        if (DAT_180b8fa98 == pcStack_690) {
          iVar9 = memcmp(puVar19,pppppppuVar26,(size_t)DAT_180b8fa98);
          if (iVar9 == 0) goto LAB_1802f8bb3;
        }
        DAT_180b8fa98 = (char *)0x0;
        puVar19 = &DAT_180b8fa88;
        if (0xf < uVar28) {
          puVar19 = DAT_180b8fa88;
        }
        *(undefined1 *)puVar19 = 0;
        pppppppuVar25 = local_6a0;
        pcVar32 = pcStack_690;
      }
LAB_1802f8bb3:
      uVar28 = local_6a8;
      pcVar30 = local_6b0;
      pppppppbVar23 = local_6c0[0];
      puVar19 = local_778;
      puVar20 = &DAT_180b8fa60;
      if (0xf < DAT_180b8fa78) {
        puVar20 = DAT_180b8fa60;
      }
      pppppppbVar21 = (byte *******)local_6c0;
      if (0xf < local_6a8) {
        pppppppbVar21 = local_6c0[0];
      }
      if (local_6b0 == DAT_180b8fa70) {
        if (local_6b0 != (char *)0x0) {
          iVar9 = memcmp(pppppppbVar21,puVar20,(size_t)local_6b0);
          if (iVar9 != 0) goto LAB_1802f8c08;
        }
      }
      else {
LAB_1802f8c08:
        uVar18 = DAT_180b8fa18;
        puVar16 = _DAT_180b8fa00;
        if (DAT_180b8f9eb != '\0') {
          puVar24 = &DAT_180b8fa00;
          if (0xf < DAT_180b8fa18) {
            puVar24 = _DAT_180b8fa00;
          }
          pppppppbVar21 = (byte *******)local_6c0;
          if (0xf < uVar28) {
            pppppppbVar21 = pppppppbVar23;
          }
          if ((pcVar30 == DAT_180b8fa10) &&
             ((pcVar30 == (char *)0x0 ||
              (iVar9 = memcmp(pppppppbVar21,puVar24,(size_t)pcVar30), iVar9 == 0)))) {
            DAT_180b8faa8 = puVar19 + 0x59682f0;
          }
          else {
            puVar24 = &DAT_180b8fa00;
            if (0xf < uVar18) {
              puVar24 = puVar16;
            }
            puVar20 = &DAT_180b8fa60;
            if (0xf < DAT_180b8fa78) {
              puVar20 = DAT_180b8fa60;
            }
            if (DAT_180b8fa70 == DAT_180b8fa10) {
              if (DAT_180b8fa70 != (char *)0x0) {
                iVar9 = memcmp(puVar20,puVar24,(size_t)DAT_180b8fa70);
                if (iVar9 != 0) goto LAB_1802f8ce3;
              }
              DAT_180b8fa50 = (char *)0x0;
              puVar20 = (undefined8 *)&DAT_180b8fa40;
              if (0xf < DAT_180b8fa58) {
                puVar20 = _DAT_180b8fa40;
              }
              *(undefined1 *)puVar20 = 0;
              DAT_180b8faa8 = (undefined8 *)0x0;
              pcVar30 = local_6b0;
              uVar28 = local_6a8;
              pppppppbVar23 = local_6c0[0];
            }
          }
        }
LAB_1802f8ce3:
        if (DAT_180b0b448 != '\0') {
          pppppppbVar21 = (byte *******)local_6c0;
          if (0xf < uVar28) {
            pppppppbVar21 = pppppppbVar23;
          }
          if ((char *)0x1 < pcVar30) {
            bVar33 = *(byte *)pppppppbVar21 < 0x5b;
            if ((*(byte *)pppppppbVar21 != 0x5b) ||
               (bVar33 = *(byte *)((longlong)pppppppbVar21 + 1) < 0x20,
               *(byte *)((longlong)pppppppbVar21 + 1) != 0x20)) {
              uVar29 = -(uint)bVar33 | 1;
            }
            if (uVar29 == 0) {
              pppppppbVar21 = (byte *******)local_6c0;
              if (0xf < uVar28) {
                pppppppbVar21 = pppppppbVar23;
              }
              if ((char *)0x1 < pcVar30) {
                pbVar22 = (byte *)thunk_FUN_1805f9970(pppppppbVar21,
                                                      (byte *)((longlong)pppppppbVar21 +
                                                              (longlong)pcVar30),&DAT_1808007bc,2);
                uVar28 = local_6a8;
                pcVar32 = local_6b0;
                pppppppbVar23 = local_6c0[0];
                if (((pbVar22 == (byte *)((longlong)pppppppbVar21 + (longlong)pcVar30)) ||
                    (uVar18 = (longlong)pbVar22 - (longlong)pppppppbVar21,
                    uVar18 == 0xffffffffffffffff)) || (0x10 < uVar18)) {
                  pcVar30 = local_6b0;
                }
                else {
                  pppppppuVar25 = &local_6a0;
                  if (0xf < uStack_688) {
                    pppppppuVar25 = local_6a0;
                  }
                  pppppppbVar21 = (byte *******)local_6c0;
                  if (0xf < local_6a8) {
                    pppppppbVar21 = local_6c0[0];
                  }
                  if (local_6b0 == pcStack_690) {
                    if (local_6b0 == (char *)0x0) {
                      bVar33 = true;
                    }
                    else {
                      iVar9 = memcmp(pppppppbVar21,pppppppuVar25,(size_t)local_6b0);
                      bVar33 = iVar9 == 0;
                    }
                  }
                  else {
                    bVar33 = false;
                  }
                  pcVar30 = "false";
                  if (bVar33) {
                    pcVar30 = "true";
                  }
                  local_768 = (undefined1  [16])0x0;
                  auStack_758 = (undefined1  [16])0x0;
                  pcVar31 = (char *)(uVar18 + 2);
                  if (pcVar32 < (char *)(uVar18 + 2)) {
                    pcVar31 = pcVar32;
                  }
                  pppppppbVar21 = (byte *******)local_6c0;
                  if (0xf < uVar28) {
                    pppppppbVar21 = pppppppbVar23;
                  }
                  FUN_18015ba30(local_768,pppppppbVar21,pcVar31);
                  puVar16 = local_768;
                  if (0xf < (ulonglong)auStack_758._8_8_) {
                    puVar16 = (undefined1 *)local_768._0_8_;
                  }
                  FUN_18063ab10(local_638,0,0x600);
                  local_7d8 = (char *)local_798._0_8_;
                  local_7e0 = (char *)CONCAT44(local_7e0._4_4_,(int)local_740);
                  local_7e8 = (undefined **)puVar16;
                  local_7d0 = pcVar30;
                  FUN_18015ad60(local_638,0x600,0xffffffffffffffff,
                                "tag=\"%s\" server_tick=%d expected_frame=%llu matches_desired=%s");
                  ppuVar12 = &PTR_180700558;
                  if (local_638[0] != '\0') {
                    ppuVar12 = (undefined **)&DAT_1806bcfc0;
                  }
                  local_7e0 = local_638;
                  local_7e8 = ppuVar12;
                  FUN_1800f6900(0);
                  FUN_18015c010(local_768);
                  pcVar30 = local_6b0;
                  uVar28 = local_6a8;
                  pppppppbVar23 = local_6c0[0];
                }
              }
            }
          }
        }
        puVar16 = &DAT_180b8fa20;
        if (0xf < DAT_180b8fa38) {
          puVar16 = _DAT_180b8fa20;
        }
        pppppppbVar21 = (byte *******)local_6c0;
        if (0xf < uVar28) {
          pppppppbVar21 = pppppppbVar23;
        }
        if (pcVar30 == DAT_180b8fa30) {
          if (pcVar30 != (char *)0x0) {
            iVar9 = memcmp(pppppppbVar21,puVar16,(size_t)pcVar30);
            if (iVar9 == 0) {
              if (pcVar30 != (char *)0x0) {
                FUN_18063ab10(local_638,0,0x600);
                FUN_18015ad60(local_638,0x600,0xffffffffffffffff,"name_length=%zu");
                ppuVar12 = &PTR_180700558;
                if (local_638[0] != '\0') {
                  ppuVar12 = (undefined **)&DAT_1806bcfc0;
                }
                local_7e0 = local_638;
                local_7e8 = ppuVar12;
                FUN_1800f6900(0);
                pcVar30 = local_6b0;
                uVar28 = local_6a8;
                pppppppbVar23 = local_6c0[0];
              }
            }
          }
        }
        pppppppbVar21 = (byte *******)local_6c0;
        if (0xf < uVar28) {
          pppppppbVar21 = pppppppbVar23;
        }
        FUN_180113930(&DAT_180b8fa60,pppppppbVar21,pcVar30);
        pcVar30 = local_6b0;
        uVar28 = local_6a8;
        pppppppuVar25 = local_6a0;
        pcVar32 = pcStack_690;
        pppppppbVar23 = local_6c0[0];
      }
      uVar18 = uStack_688;
      if (pcVar32 == (char *)0x0) {
LAB_1802f923d:
        if (DAT_180b8f9eb != '\0') {
          puVar16 = &DAT_180b8fa00;
          if (0xf < DAT_180b8fa18) {
            puVar16 = _DAT_180b8fa00;
          }
          pppppppbVar21 = (byte *******)local_6c0;
          if (0xf < uVar28) {
            pppppppbVar21 = pppppppbVar23;
          }
          if (((pcVar30 == DAT_180b8fa10) &&
              ((pcVar30 == (char *)0x0 ||
               (iVar9 = memcmp(pppppppbVar21,puVar16,(size_t)pcVar30), iVar9 == 0)))) &&
             ((puVar19 == DAT_180b8faa8 || ((longlong)DAT_180b8faa8 <= (longlong)puVar19)))) {
            DAT_180b8f9eb = '\0';
          }
        }
      }
      else {
        pppppppuVar26 = &local_6a0;
        if (0xf < uStack_688) {
          pppppppuVar26 = pppppppuVar25;
        }
        pppppppbVar21 = (byte *******)local_6c0;
        if (0xf < uVar28) {
          pppppppbVar21 = pppppppbVar23;
        }
        if (((pcVar30 == pcVar32) &&
            ((pcVar30 == (char *)0x0 ||
             (iVar9 = memcmp(pppppppbVar21,pppppppuVar26,(size_t)pcVar30), iVar9 == 0)))) &&
           (DAT_180b8fa80 == '\0')) goto LAB_1802f923d;
        pppppppuVar26 = &local_6a0;
        if (0xf < uVar18) {
          pppppppuVar26 = pppppppuVar25;
        }
        puVar20 = &DAT_180b8fa88;
        if (0xf < DAT_180b8faa0) {
          puVar20 = DAT_180b8fa88;
        }
        if ((DAT_180b8fa98 != pcVar32) ||
           ((DAT_180b8fa98 != (char *)0x0 &&
            (iVar9 = memcmp(puVar20,pppppppuVar26,(size_t)DAT_180b8fa98), iVar9 != 0)))) {
          if (DAT_180b8fa80 == '\0') {
            if (puVar19 == DAT_180b8faa8) {
              local_79c = local_79c & 0xffffff00;
            }
            else {
              local_79c = 0xff;
              if ((longlong)DAT_180b8faa8 <= (longlong)puVar19) {
                local_79c = 1;
              }
            }
            local_778 = (undefined8 *)&DAT_180b8fa40;
            if (0xf < DAT_180b8fa58) {
              local_778 = _DAT_180b8fa40;
            }
            pppppppbVar21 = (byte *******)local_6c0;
            if (0xf < uVar28) {
              pppppppbVar21 = pppppppbVar23;
            }
            pppppppuVar26 = &local_6a0;
            if (0xf < uVar18) {
              pppppppuVar26 = pppppppuVar25;
            }
            if (((pcVar32 == pcVar30) &&
                (iVar9 = memcmp(pppppppuVar26,pppppppbVar21,(size_t)pcVar32), iVar9 == 0)) ||
               ((pcVar32 == DAT_180b8fa50 &&
                ((iVar9 = memcmp(pppppppuVar26,local_778,(size_t)pcVar32), iVar9 == 0 &&
                 ((char)local_79c < '\0')))))) goto LAB_1802f9298;
          }
          pppppppuVar26 = &local_6a0;
          if (0xf < uVar18) {
            pppppppuVar26 = pppppppuVar25;
          }
          FUN_180113930(&DAT_180b8fa88,pppppppuVar26,pcVar32);
          pppppppuVar25 = &local_6a0;
          if (0xf < uStack_688) {
            pppppppuVar25 = local_6a0;
          }
          FUN_180113930(&DAT_180b8fa40,pppppppuVar25,pcStack_690);
          local_7b8 = local_748;
          local_7b0 = DAT_180b0b4b0;
          DAT_180b8fa80 = '\0';
          DAT_180b8faa8 = puVar19 + (longlong)local_748 * 0x1e848;
          pcVar32 = "false";
          if (local_7a8 != '\0') {
            pcVar32 = "true";
          }
          if (DAT_180b0b448 == '\0') {
            pcVar30 = "restore";
            if (local_7a0 != '\0') {
              pcVar30 = "override";
            }
          }
          else {
            pcVar30 = "clan_tag";
          }
          FUN_18063ab10(local_638,0,0x600);
          local_7c0 = local_798._0_8_;
          local_7c8 = (undefined4)local_740;
          local_7d0 = local_6b0;
          local_7d8 = pcStack_690;
          local_7e8 = (undefined **)pcVar30;
          local_7e0 = pcVar32;
          FUN_18015ad60(local_638,0x600,0xffffffffffffffff,
                        "mode=%s controller_changed=%s desired_length=%zu observed_length=%zu server_tick=%d frame=%llu refresh_ms=%d animation=%d"
                       );
          ppuVar12 = &PTR_180700558;
          if (local_638[0] != '\0') {
            ppuVar12 = (undefined **)&DAT_1806bcfc0;
          }
          local_7e0 = local_638;
          local_7e8 = ppuVar12;
          FUN_1800f6900(0);
        }
      }
LAB_1802f9298:
      FUN_18015c010(&local_6a0);
      FUN_18015c010(local_680);
    }
    FUN_18015c010(local_6c0);
  }
  FUN_18015c010(local_660);
LAB_1802f92c6:
  FUN_1805f68fc(&DAT_180b8f998);
}



