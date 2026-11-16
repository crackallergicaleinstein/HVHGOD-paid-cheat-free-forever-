// FUN_180212ce0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180212ce0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180212ce0(void)

{
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  undefined *puVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  undefined1 uVar9;
  int iVar10;
  longlong *plVar11;
  ULONGLONG UVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  char *pcVar16;
  undefined8 uVar17;
  int iVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  short *psVar21;
  longlong lVar22;
  undefined **_Buf2;
  undefined **ppuVar23;
  uint uVar24;
  char *pcVar25;
  uint uVar26;
  longlong lVar27;
  undefined **_Buf2_00;
  uint uVar28;
  int iVar29;
  bool bVar30;
  undefined8 extraout_XMM0_Qa;
  undefined4 uVar31;
  undefined4 uVar33;
  undefined1 auVar32 [64];
  undefined1 auStack_7b8 [32];
  undefined **local_798;
  undefined **local_790;
  longlong local_788;
  undefined **local_780;
  uint local_778;
  uint local_774;
  uint local_770 [2];
  longlong local_768;
  char *local_760;
  uint local_758 [2];
  char *local_750;
  uint local_748;
  longlong local_740;
  undefined4 local_738;
  uint local_734;
  short *local_730;
  undefined **local_728;
  char *local_718;
  undefined **ppuStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined **local_6e8;
  char *local_6d8;
  undefined8 local_6d0;
  undefined8 local_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 local_698;
  undefined8 local_688;
  undefined8 *puStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 local_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined2 local_648 [4];
  undefined8 uStack_640;
  undefined1 uStack_638;
  undefined8 uStack_634;
  undefined4 uStack_62c;
  undefined1 local_628;
  undefined8 uStack_624;
  undefined4 uStack_61c;
  undefined4 uStack_618;
  undefined1 auStack_614 [161];
  undefined1 local_573 [163];
  undefined4 local_4d0;
  undefined1 local_4cc;
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_7b8;
  local_748 = 0;
  local_738 = 0;
  if (DAT_180c710c8 != 0) {
    plVar11 = (longlong *)FUN_18017bf40(&local_760);
    if ((*plVar11 == DAT_180c710d0) || (DAT_180c710d0 <= *plVar11)) {
      cVar8 = FUN_180223d40();
      if (cVar8 == '\0') {
        plVar11 = (longlong *)FUN_18017bf40(&local_760);
        DAT_180c710d0 = *plVar11 + 500000000;
      }
      else {
        DAT_180c710c8 = 0;
      }
    }
  }
  AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  local_718 = _DAT_180bb8890;
  ppuStack_710 = ppuRam0000000180bb8898;
  uStack_708 = uRam0000000180bb88a0;
  uStack_700 = uRam0000000180bb88a8;
  uVar31 = _DAT_180bb88b0;
  uVar33 = uRam0000000180bb88b8;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  ppuVar23 = ppuStack_710;
  if ((((char)uVar33 == '\0') || (local_728 = ppuStack_710, ppuStack_710 == (undefined **)0x0)) ||
     (local_760 = local_718, local_718 == (char *)0x0)) {
    if (DAT_180c710a0 != (undefined **)0x0) {
      local_648[0] = 0;
      uStack_640 = 0;
      uStack_638 = 0;
      uStack_634 = 0;
      uStack_62c = 0;
      local_628 = 0;
      uStack_624 = 0;
      uStack_61c = 0;
      uStack_618 = 0;
      FUN_18063ab10(auStack_614,0,0xa1);
      FUN_18063ab10(local_573,0,0xa3);
      local_4d0 = 0;
      local_4cc = 0;
      puVar15 = (undefined8 *)local_648;
      lVar13 = 3;
      puVar14 = (undefined8 *)&DAT_180c70f10;
      do {
        uVar17 = puVar15[1];
        uVar6 = puVar15[2];
        uVar7 = puVar15[3];
        *puVar14 = *puVar15;
        puVar14[1] = uVar17;
        puVar14[2] = uVar6;
        puVar14[3] = uVar7;
        uVar17 = puVar15[5];
        uVar6 = puVar15[6];
        uVar7 = puVar15[7];
        puVar14[4] = puVar15[4];
        puVar14[5] = uVar17;
        puVar14[6] = uVar6;
        puVar14[7] = uVar7;
        uVar17 = puVar15[9];
        uVar6 = puVar15[10];
        uVar7 = puVar15[0xb];
        puVar14[8] = puVar15[8];
        puVar14[9] = uVar17;
        puVar14[10] = uVar6;
        puVar14[0xb] = uVar7;
        uVar17 = puVar15[0xd];
        puVar14[0xc] = puVar15[0xc];
        puVar14[0xd] = uVar17;
        uVar17 = puVar15[0xf];
        puVar14[0xe] = puVar15[0xe];
        puVar14[0xf] = uVar17;
        puVar15 = puVar15 + 0x10;
        lVar13 = lVar13 + -1;
        puVar14 = puVar14 + 0x10;
      } while (lVar13 != 0);
      _DAT_180c710a8 = 0;
      DAT_180c710b0 = 0;
      _DAT_180c71090 = 0;
      DAT_180c710b8 = 0;
      DAT_180c710c0 = (char *)0x0;
      DAT_180c71098 = 0;
      DAT_180c710a0 = (undefined **)0x0;
      FUN_18063ab10(local_648,0,0x600);
      FUN_18015ad60(local_648,0x600,0xffffffffffffffff,"feature=knives");
      local_798 = &PTR_180700558;
      if ((char)local_648[0] != '\0') {
        local_798 = (undefined **)&DAT_1806bcfc0;
      }
      local_790 = (undefined **)local_648;
      FUN_1800f6900(0);
    }
  }
  else {
    if (DAT_180bb88c9 != '\0') {
    }
    iVar29 = DAT_180c63cac;
    if (DAT_180c63cac == 0) {
      UVar12 = GetTickCount64();
      if (UVar12 < DAT_180c63cb0) {
        iVar29 = 0;
      }
      else {
        local_718 = &DAT_1808eb390;
        iVar29 = FUN_1805f68d0(&DAT_1808eb390);
        if (iVar29 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(5);
        }
        if (DAT_1808eb3dc == 0x7fffffff) {
          DAT_1808eb3dc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(6);
        }
        if ((DAT_180c63cac == 0) && (DAT_180c63cb0 <= UVar12)) {
          DAT_180c63cac = FUN_1804174b0("C_BasePlayerPawn",0x51b23a93);
          if (DAT_180c63cac == 0) {
            DAT_180c63cb0 = UVar12 + 1000;
          }
          else {
            DAT_180c63cb0 = 0xffffffffffffffff;
          }
        }
        iVar29 = DAT_180c63cac;
        FUN_1805f68fc(&DAT_1808eb390);
      }
    }
    lVar13 = FUN_18017ea70();
    *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
    if ((undefined *)((longlong)iVar29 + (longlong)ppuVar23) == (undefined *)0x0) {
      bVar30 = false;
      pcVar16 = local_718;
    }
    else {
      local_6d8 = (char *)0x0;
      cVar8 = FUN_1804514f0(&local_6d8,(undefined *)((longlong)iVar29 + (longlong)ppuVar23),8);
      if (cVar8 == '\0') {
        bVar30 = false;
        pcVar16 = local_718;
      }
      else {
        bVar30 = true;
        pcVar16 = local_6d8;
      }
    }
    lVar13 = FUN_18017ea70();
    if (*(int *)(lVar13 + 4) != 0) {
      *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + -1;
    }
    if (!bVar30) {
    }
    if (pcVar16 == (char *)0x0) {
    }
    local_6e8 = (undefined **)0x0;
    local_730 = (short *)0x0;
    cVar8 = FUN_180221ad0();
    if (cVar8 == '\0') {
    }
    local_688 = 0;
    puStack_680 = (undefined8 *)0x0;
    uStack_678 = 0;
    uStack_670 = 0;
    local_668 = 0;
    uStack_660 = 0;
    uStack_658 = 0;
    uStack_650 = 0;
    local_738 = uVar31;
    FUN_180221e30();
    puVar15 = (undefined8 *)*puStack_680;
    local_718 = (char *)0xcbf29ce484222325;
    while( true ) {
      if (puVar15 == puStack_680) break;
      uVar1 = *(ushort *)(puVar15 + 2);
      uVar20 = ((ulonglong)(uVar1 >> 8) ^
               ((ulonglong)uVar1 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3) * 0x100000001b3 &
               DAT_180cc9cb8;
      lVar13 = *(longlong *)(DAT_180cc9ca0 + 8 + uVar20 * 0x10);
      if (lVar13 == DAT_180cc9c90) {
        lVar13 = 0;
      }
      else {
        uVar2 = *(ushort *)(lVar13 + 0x10);
        while (uVar1 != uVar2) {
          if (lVar13 == *(longlong *)(DAT_180cc9ca0 + uVar20 * 0x10)) {
            lVar13 = 0;
            break;
          }
          lVar13 = *(longlong *)(lVar13 + 8);
          uVar2 = *(ushort *)(lVar13 + 0x10);
        }
      }
      lVar22 = DAT_180cc9c90;
      if (lVar13 != 0) {
        lVar22 = lVar13;
      }
      if (((lVar22 != DAT_180cc9c90) &&
          (psVar21 = (short *)(*(longlong *)(lVar22 + 0x18) * 0xb8 + DAT_180cc9bf8),
          psVar21 != (short *)0x0)) && ((char)psVar21[0x58] == '\x01')) {
        local_730 = psVar21;
        local_6e8 = (undefined **)(puVar15 + 3);
        break;
      }
      puVar15 = (undefined8 *)*puVar15;
    }
    iVar29 = DAT_180c63ca8;
    if (DAT_180c63ca8 == 0) {
      UVar12 = GetTickCount64();
      if (UVar12 < DAT_180c63ca0) {
        iVar29 = 0;
      }
      else {
        local_718 = &DAT_1808eb340;
        iVar29 = FUN_1805f68d0(&DAT_1808eb340);
        if (iVar29 != 0) goto LAB_180214f18;
        if (DAT_1808eb38c == 0x7fffffff) {
          DAT_1808eb38c = 0x7ffffffe;
          goto LAB_180214f8d;
        }
        if ((DAT_180c63ca8 == 0) && (DAT_180c63ca0 <= UVar12)) {
          DAT_180c63ca8 = FUN_1804174b0("CPlayer_WeaponServices",0x4c8a13a6);
          if (DAT_180c63ca8 == 0) {
            DAT_180c63ca0 = UVar12 + 1000;
          }
          else {
            DAT_180c63ca0 = 0xffffffffffffffff;
          }
        }
        iVar29 = DAT_180c63ca8;
        FUN_1805f68fc(&DAT_1808eb340);
      }
    }
    lVar13 = FUN_18017ea70();
    *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
    pcVar25 = pcVar16 + iVar29;
    if (pcVar25 == (char *)0x0) {
      bVar30 = false;
      uVar24 = local_778;
    }
    else {
      local_758[0] = 0;
      cVar8 = FUN_1804514f0(local_758,pcVar25,4);
      if (cVar8 == '\0') {
        bVar30 = false;
        uVar24 = local_778;
      }
      else {
        bVar30 = true;
        uVar24 = local_758[0];
      }
    }
    lVar13 = FUN_18017ea70();
    if (*(int *)(lVar13 + 4) != 0) {
      *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + -1;
    }
    uVar26 = 0;
    if (bVar30) {
      uVar26 = uVar24;
    }
    local_758[0] = uVar26;
    lVar13 = FUN_18017ea70();
    *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
    if (pcVar25 + 8 == (char *)0x0) {
      bVar30 = false;
      pcVar25 = local_718;
    }
    else {
      local_6d8 = (char *)0x0;
      cVar8 = FUN_1804514f0(&local_6d8,pcVar25 + 8,8);
      if (cVar8 == '\0') {
        bVar30 = false;
        pcVar25 = local_718;
      }
      else {
        bVar30 = true;
        pcVar25 = local_6d8;
      }
    }
    local_6d8 = pcVar25;
    lVar13 = FUN_18017ea70();
    if (*(int *)(lVar13 + 4) != 0) {
      *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + -1;
    }
    if (((bVar30) && (pcVar25 != (char *)0x0)) && (uVar26 - 1 < 0x40)) {
      iVar29 = DAT_180c63c94;
      if (DAT_180c63c94 == 0) {
        UVar12 = GetTickCount64();
        if (UVar12 < DAT_180c63c98) {
          iVar29 = 0;
        }
        else {
          local_718 = &DAT_1808eb2f0;
          iVar29 = FUN_1805f68d0(&DAT_1808eb2f0);
          if (iVar29 != 0) goto LAB_180214f18;
          if (DAT_1808eb33c == 0x7fffffff) {
            DAT_1808eb33c = 0x7ffffffe;
            goto LAB_180214f8d;
          }
          if ((DAT_180c63c94 == 0) && (DAT_180c63c98 <= UVar12)) {
            DAT_180c63c94 = FUN_1804174b0("CPlayer_WeaponServices",0x940131c5);
            if (DAT_180c63c94 == 0) {
              DAT_180c63c98 = UVar12 + 1000;
            }
            else {
              DAT_180c63c98 = 0xffffffffffffffff;
            }
          }
          iVar29 = DAT_180c63c94;
          FUN_1805f68fc(&DAT_1808eb2f0);
        }
      }
      lVar13 = FUN_18017ea70();
      *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
      if (pcVar16 + iVar29 == (char *)0x0) {
        bVar30 = false;
        uVar24 = local_778;
      }
      else {
        local_770[0] = 0;
        cVar8 = FUN_1804514f0(local_770,pcVar16 + iVar29,4);
        if (cVar8 == '\0') {
          bVar30 = false;
          uVar24 = local_778;
        }
        else {
          bVar30 = true;
          uVar24 = local_770[0];
        }
      }
      lVar13 = FUN_18017ea70();
      if (*(int *)(lVar13 + 4) != 0) {
        *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + -1;
      }
      local_734 = 0;
      if (bVar30) {
        local_734 = uVar24;
      }
      lVar13 = FUN_1803d4150();
      ppuVar23 = local_728;
      auVar32 = ZEXT864(0);
      local_768 = lVar13;
      if (DAT_180c710a0 != local_728) {
        local_648[0] = 0;
        uStack_640 = 0;
        uStack_638 = 0;
        uStack_634 = 0;
        uStack_62c = 0;
        local_628 = 0;
        uStack_624 = 0;
        uStack_61c = 0;
        uStack_618 = 0;
        FUN_18063ab10(auStack_614,0,0xa1);
        FUN_18063ab10(local_573,0,0xa3);
        local_4d0 = 0;
        local_4cc = 0;
        puVar15 = (undefined8 *)local_648;
        lVar22 = 3;
        puVar14 = (undefined8 *)&DAT_180c70f10;
        do {
          uVar17 = puVar15[1];
          uVar6 = puVar15[2];
          uVar7 = puVar15[3];
          *puVar14 = *puVar15;
          puVar14[1] = uVar17;
          puVar14[2] = uVar6;
          puVar14[3] = uVar7;
          uVar17 = puVar15[5];
          uVar6 = puVar15[6];
          uVar7 = puVar15[7];
          puVar14[4] = puVar15[4];
          puVar14[5] = uVar17;
          puVar14[6] = uVar6;
          puVar14[7] = uVar7;
          uVar17 = puVar15[9];
          uVar6 = puVar15[10];
          uVar7 = puVar15[0xb];
          puVar14[8] = puVar15[8];
          puVar14[9] = uVar17;
          puVar14[10] = uVar6;
          puVar14[0xb] = uVar7;
          uVar17 = puVar15[0xd];
          puVar14[0xc] = puVar15[0xc];
          puVar14[0xd] = uVar17;
          uVar17 = puVar15[0xf];
          puVar14[0xe] = puVar15[0xe];
          puVar14[0xf] = uVar17;
          puVar15 = puVar15 + 0x10;
          lVar22 = lVar22 + -1;
          puVar14 = puVar14 + 0x10;
        } while (lVar22 != 0);
        _DAT_180c710a8 = 0;
        DAT_180c710b0 = 0;
        _DAT_180c71090 = 0;
        DAT_180c710b8 = 0;
        DAT_180c710c0 = (char *)0x0;
        DAT_180c71098 = 0;
        DAT_180c710a0 = ppuVar23;
      }
      iVar29 = 0;
      uVar24 = local_758[0];
      if (0 < (int)local_758[0]) {
LAB_1802133e0:
        auVar32 = ZEXT1664(auVar32._0_16_);
        lVar13 = FUN_18017ea70();
        *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
        if (pcVar25 + (longlong)iVar29 * 4 == (char *)0x0) {
          bVar30 = false;
        }
        else {
          local_750 = (char *)((ulonglong)local_750 & 0xffffffff00000000);
          cVar8 = FUN_1804514f0(&local_750,pcVar25 + (longlong)iVar29 * 4,4);
          if (cVar8 == '\0') {
            bVar30 = false;
          }
          else {
            local_774 = (uint)local_750;
            bVar30 = true;
          }
        }
        uVar26 = local_774;
        lVar13 = FUN_18017ea70();
        iVar18 = *(int *)(lVar13 + 4);
        if (iVar18 != 0) {
          iVar18 = iVar18 + -1;
          *(int *)(lVar13 + 4) = iVar18;
        }
        local_778 = 0;
        if (bVar30) {
          local_778 = uVar26;
        }
        local_740 = FUN_1803d4150(iVar18,local_778);
        if (local_740 == 0) {
LAB_1802138bc:
          iVar29 = iVar29 + 1;
          if (iVar29 < (int)uVar24) goto code_r0x0001802138c8;
          goto LAB_180213ac1;
        }
        iVar18 = DAT_180c63c90;
        if (DAT_180c63c90 == 0) {
          UVar12 = GetTickCount64();
          if (UVar12 < DAT_180c63c88) {
            iVar18 = 0;
          }
          else {
            local_750 = &DAT_1808eb2a0;
            iVar18 = FUN_1805f68d0(&DAT_1808eb2a0);
            if (iVar18 != 0) goto LAB_180214f18;
            if (DAT_1808eb2ec == 0x7fffffff) {
              DAT_1808eb2ec = 0x7ffffffe;
              goto LAB_180214f8d;
            }
            if ((DAT_180c63c90 == 0) && (DAT_180c63c88 <= UVar12)) {
              DAT_180c63c90 = FUN_1804174b0("C_EconEntity",0x537b0586);
              DAT_180c63c88 = 0xffffffffffffffff;
              if (DAT_180c63c90 == 0) {
                DAT_180c63c88 = UVar12 + 1000;
              }
            }
            iVar18 = DAT_180c63c90;
            FUN_1805f68fc(&DAT_1808eb2a0);
          }
        }
        iVar10 = DAT_180c63c7c;
        if (DAT_180c63c7c == 0) {
          UVar12 = GetTickCount64();
          if (UVar12 < DAT_180c63c80) {
            iVar10 = 0;
          }
          else {
            local_750 = &DAT_1808eb250;
            iVar10 = FUN_1805f68d0(&DAT_1808eb250);
            if (iVar10 != 0) goto LAB_180214f18;
            if (DAT_1808eb29c == 0x7fffffff) {
              DAT_1808eb29c = 0x7ffffffe;
              goto LAB_180214f8d;
            }
            if ((DAT_180c63c7c == 0) && (DAT_180c63c80 <= UVar12)) {
              DAT_180c63c7c = FUN_1804174b0("C_AttributeContainer",0xdce71866);
              DAT_180c63c80 = 0xffffffffffffffff;
              if (DAT_180c63c7c == 0) {
                DAT_180c63c80 = UVar12 + 1000;
              }
            }
            iVar10 = DAT_180c63c7c;
            FUN_1805f68fc(&DAT_1808eb250);
          }
          uVar24 = local_758[0];
        }
        lVar13 = (longlong)iVar18 + iVar10 + local_740;
        iVar18 = DAT_180c63c78;
        if (DAT_180c63c78 == 0) {
          UVar12 = GetTickCount64();
          if (UVar12 < DAT_180c63c70) {
            iVar18 = 0;
          }
          else {
            local_750 = &DAT_1808eb200;
            iVar18 = FUN_1805f68d0(&DAT_1808eb200);
            if (iVar18 != 0) goto LAB_180214f18;
            if (DAT_1808eb24c == 0x7fffffff) {
              DAT_1808eb24c = 0x7ffffffe;
              goto LAB_180214f8d;
            }
            if ((DAT_180c63c78 == 0) && (DAT_180c63c70 <= UVar12)) {
              DAT_180c63c78 = FUN_1804174b0("C_EconItemView",0xa2ccb41a);
              DAT_180c63c70 = 0xffffffffffffffff;
              if (DAT_180c63c78 == 0) {
                DAT_180c63c70 = UVar12 + 1000;
              }
            }
            iVar18 = DAT_180c63c78;
            FUN_1805f68fc(&DAT_1808eb200);
          }
        }
        lVar22 = FUN_18017ea70();
        *(int *)(lVar22 + 4) = *(int *)(lVar22 + 4) + 1;
        if (iVar18 + lVar13 == 0) {
          uVar20 = (ulonglong)(ushort)local_770[0];
          bVar30 = false;
        }
        else {
          local_750 = (char *)((ulonglong)local_750 & 0xffffffffffff0000);
          cVar8 = FUN_1804514f0(&local_750,iVar18 + lVar13,2);
          if (cVar8 == '\0') {
            bVar30 = false;
            uVar20 = (ulonglong)(ushort)local_770[0];
          }
          else {
            uVar20 = (ulonglong)local_750 & 0xffff;
            local_770[0] = CONCAT22(local_770[0]._2_2_,local_750._0_2_);
            bVar30 = true;
          }
        }
        lVar22 = FUN_18017ea70();
        uVar26 = local_778;
        if (*(int *)(lVar22 + 4) != 0) {
          *(int *)(lVar22 + 4) = *(int *)(lVar22 + 4) + -1;
        }
        uVar19 = 0;
        if (bVar30) {
          uVar19 = uVar20;
        }
        uVar20 = (uVar19 >> 8 ^ (uVar19 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3) *
                 0x100000001b3 & DAT_180cc9cb8;
        lVar22 = *(longlong *)(DAT_180cc9ca0 + 8 + uVar20 * 0x10);
        if (lVar22 == DAT_180cc9c90) {
LAB_180213742:
          lVar22 = 0;
        }
        else {
          sVar3 = *(short *)(lVar22 + 0x10);
          while ((short)uVar19 != sVar3) {
            if (lVar22 == *(longlong *)(DAT_180cc9ca0 + uVar20 * 0x10)) goto LAB_180213742;
            lVar22 = *(longlong *)(lVar22 + 8);
            sVar3 = *(short *)(lVar22 + 0x10);
          }
        }
        lVar27 = DAT_180cc9c90;
        if (lVar22 != 0) {
          lVar27 = lVar22;
        }
        if (((lVar27 == DAT_180cc9c90) ||
            (lVar22 = *(longlong *)(lVar27 + 0x18) * 0xb8 + DAT_180cc9bf8, lVar22 == 0)) ||
           (*(char *)(lVar22 + 0xb0) != '\x01')) goto LAB_1802138bc;
        if (DAT_180c71094 == local_778) {
          if (DAT_180c71098 < 2) {
            DAT_180c71098 = DAT_180c71098 + 1;
            if (DAT_180c71098 == 1) {
              FUN_18063ab10(local_648,0,0x600);
              local_790 = local_728;
              local_798 = (undefined **)CONCAT44(local_798._4_4_,uVar26);
              FUN_18015ad60(local_648,0x600,0xffffffffffffffff,
                            "feature=knives handle=0x%X pawn=0x%p");
              local_798 = &PTR_180700558;
              if ((char)local_648[0] != '\0') {
                local_798 = (undefined **)&DAT_1806bcfc0;
              }
              local_790 = (undefined **)local_648;
              FUN_1800f6900(0);
            }
            goto LAB_180213ac1;
          }
          iVar18 = DAT_180c63c60;
          if (DAT_180c63c60 == 0) {
            UVar12 = GetTickCount64();
            if (UVar12 < DAT_180c63c68) {
              iVar18 = 0;
            }
            else {
              local_750 = &DAT_1808eb1b0;
              iVar18 = FUN_1805f68d0(&DAT_1808eb1b0);
              if (iVar18 != 0) goto LAB_180214f18;
              if (DAT_1808eb1fc == 0x7fffffff) {
                DAT_1808eb1fc = 0x7ffffffe;
                goto LAB_180214f8d;
              }
              if ((DAT_180c63c60 == 0) && (DAT_180c63c68 <= UVar12)) {
                DAT_180c63c60 = FUN_1804174b0("C_BaseEntity",0xc02ce796);
                DAT_180c63c68 = 0xffffffffffffffff;
                if (DAT_180c63c60 == 0) {
                  DAT_180c63c68 = UVar12 + 1000;
                }
              }
              iVar18 = DAT_180c63c60;
              FUN_1805f68fc(&DAT_1808eb1b0);
            }
          }
          lVar27 = local_740 + 8 + (longlong)iVar18;
          lVar22 = FUN_18017ea70();
          *(int *)(lVar22 + 4) = *(int *)(lVar22 + 4) + 1;
          if (lVar27 == 0) {
            bVar30 = false;
          }
          else {
            local_750 = (char *)0x0;
            cVar8 = FUN_1804514f0(&local_750,lVar27,8);
            if (cVar8 == '\0') {
              bVar30 = false;
            }
            else {
              local_718 = local_750;
              bVar30 = true;
            }
          }
          pcVar16 = local_718;
          lVar27 = FUN_18017ea70();
          lVar22 = local_740;
          iVar18 = *(int *)(lVar27 + 4);
          if (iVar18 != 0) {
            iVar18 = iVar18 + -1;
            *(int *)(lVar27 + 4) = iVar18;
          }
          if ((!bVar30) || (pcVar16 == (char *)0x0)) goto LAB_1802138bc;
          if (local_730 == (short *)0x0) {
            if (DAT_180c710a9 != '\0') {
              plVar11 = (longlong *)FUN_18017bf40(&local_760);
              if ((*plVar11 != DAT_180c710b0) && (*plVar11 < DAT_180c710b0)) goto LAB_180213ac1;
            }
            if (DAT_180c710a8 == '\0') goto LAB_180213b08;
            if ((DAT_180cce330 & 1) == 0) {
              DAT_180cce330 = DAT_180cce330 | 1;
              atexit(FUN_180662340);
            }
            lVar22 = DAT_1808eb1a8;
            lVar13 = DAT_1808da460;
            if ((DAT_1808eb1a8 == DAT_1808da460) && (DAT_180c63c58 != 0)) goto LAB_180213a77;
            UVar12 = GetTickCount64();
            if ((lVar22 == lVar13) && (UVar12 < DAT_180c63c50)) goto LAB_180213b08;
            local_760 = &DAT_1808eb150;
            iVar29 = FUN_1805f68d0(&DAT_1808eb150);
            if (iVar29 != 0) goto LAB_180214f18;
            if (DAT_1808eb19c == 0x7fffffff) {
              DAT_1808eb19c = 0x7ffffffe;
              goto LAB_180214f8d;
            }
            uVar20 = 1000;
            if (DAT_1808eb1a8 == lVar13) {
              if ((DAT_180c63c58 != 0) || (UVar12 < DAT_180c63c50)) goto LAB_180213a66;
            }
            else {
              DAT_1808eb1a0 = 1000;
            }
            ppuVar23 = (undefined **)0xffffffffffffffff;
            do {
              ppuStack_710 = (undefined **)((longlong)ppuVar23 + 1);
              pcVar16 = (char *)((longlong)ppuVar23 + 0x180824971);
              ppuVar23 = ppuStack_710;
            } while (*pcVar16 != '\0');
            local_718 = "client.dll:48895C241048896C2418488974242057415641574883EC20440FB6F2488BF9";
            local_6d8 = "patterns::weapon_update_composite_material";
            local_6d0 = 0x2a;
            DAT_180c63c58 = FUN_1800e5d20(&local_6d8,&local_718);
            DAT_1808eb1a8 = lVar13;
            DAT_180c63c50 = 0xffffffffffffffff;
            if (DAT_180c63c58 == 0) {
              DAT_180c63c50 = DAT_1808eb1a0 + UVar12;
              uVar20 = 60000;
              if (DAT_1808eb1a0 < 60000) {
                uVar20 = DAT_1808eb1a0 * 2;
              }
            }
            DAT_1808eb1a0 = uVar20;
LAB_180213a66:
            lVar13 = DAT_180c63c58;
            FUN_1805f68fc(&DAT_1808eb150);
            if (lVar13 != 0) {
LAB_180213a77:
              lVar22 = local_740;
              puVar15 = (undefined8 *)FUN_180184240(&local_718,local_740);
              local_6b8 = *puVar15;
              uStack_6b0 = puVar15[1];
              uStack_6a8 = puVar15[2];
              uStack_6a0 = puVar15[3];
              uVar17 = puVar15[4];
              local_698._1_1_ = (char)((ulonglong)uVar17 >> 8);
              bVar30 = local_698._1_1_ == '\0';
              local_698 = uVar17;
              if (bVar30) goto LAB_180213aa4;
            }
LAB_180213b08:
            local_798 = local_728;
            FUN_1802168e0();
            plVar11 = (longlong *)FUN_18017bf40(&local_760);
            DAT_180c710b0 = *plVar11 + 250000000;
          }
          else {
            if ((DAT_180c710a8 == '\0') &&
               (cVar8 = FUN_180214fc0(iVar18,local_740,lVar13), cVar8 == '\0')) goto LAB_180213ac1;
            iVar29 = DAT_180c63c44;
            if (DAT_180c63c44 == 0) {
              UVar12 = GetTickCount64();
              if (UVar12 < DAT_180c63c48) {
                iVar29 = 0;
              }
              else {
                local_718 = &DAT_1808eb100;
                iVar29 = FUN_1805f68d0(&DAT_1808eb100);
                if (iVar29 != 0) goto LAB_180214f18;
                if (DAT_1808eb14c == 0x7fffffff) {
                  DAT_1808eb14c = 0x7ffffffe;
                  goto LAB_180214f8d;
                }
                if ((DAT_180c63c44 == 0) && (DAT_180c63c48 <= UVar12)) {
                  DAT_180c63c44 = FUN_1804174b0("C_EconEntity",0xa12d48f);
                  if (DAT_180c63c44 == 0) {
                    DAT_180c63c48 = UVar12 + 1000;
                  }
                  else {
                    DAT_180c63c48 = 0xffffffffffffffff;
                  }
                }
                iVar29 = DAT_180c63c44;
                FUN_1805f68fc(&DAT_1808eb100);
              }
            }
            lVar27 = FUN_18017ea70();
            *(int *)(lVar27 + 4) = *(int *)(lVar27 + 4) + 1;
            lVar27 = iVar29 + lVar22;
            if (lVar27 == 0) {
              bVar30 = false;
              uVar24 = local_778;
            }
            else {
              local_774 = 0;
              cVar8 = FUN_1804514f0(&local_774,lVar27,4);
              if (cVar8 == '\0') {
                bVar30 = false;
                uVar24 = local_778;
              }
              else {
                bVar30 = true;
                uVar24 = local_774;
              }
            }
            lVar27 = FUN_18017ea70();
            if (*(int *)(lVar27 + 4) != 0) {
              *(int *)(lVar27 + 4) = *(int *)(lVar27 + 4) + -1;
            }
            uVar26 = 0xffffffff;
            if (bVar30) {
              uVar26 = uVar24;
            }
            iVar29 = DAT_180c63c40;
            if (DAT_180c63c40 == 0) {
              UVar12 = GetTickCount64();
              if (UVar12 < DAT_180c63c38) {
                iVar29 = 0;
              }
              else {
                local_718 = &DAT_1808eb0b0;
                iVar29 = FUN_1805f68d0(&DAT_1808eb0b0);
                if (iVar29 != 0) goto LAB_180214f18;
                if (DAT_1808eb0fc == 0x7fffffff) {
                  DAT_1808eb0fc = 0x7ffffffe;
                  goto LAB_180214f8d;
                }
                if ((DAT_180c63c40 == 0) && (DAT_180c63c38 <= UVar12)) {
                  DAT_180c63c40 = FUN_1804174b0("C_EconEntity",0xa1b165b2);
                  if (DAT_180c63c40 == 0) {
                    DAT_180c63c38 = UVar12 + 1000;
                  }
                  else {
                    DAT_180c63c38 = 0xffffffffffffffff;
                  }
                }
                iVar29 = DAT_180c63c40;
                FUN_1805f68fc(&DAT_1808eb0b0);
              }
            }
            lVar27 = FUN_18017ea70();
            *(int *)(lVar27 + 4) = *(int *)(lVar27 + 4) + 1;
            lVar22 = iVar29 + lVar22;
            if (lVar22 == 0) {
              bVar30 = false;
              uVar24 = local_778;
            }
            else {
              local_774 = 0;
              cVar8 = FUN_1804514f0(&local_774,lVar22,4);
              if (cVar8 == '\0') {
                bVar30 = false;
                uVar24 = local_778;
              }
              else {
                bVar30 = true;
                uVar24 = local_774;
              }
            }
            lVar22 = FUN_18017ea70();
            if (*(int *)(lVar22 + 4) != 0) {
              *(int *)(lVar22 + 4) = *(int *)(lVar22 + 4) + -1;
            }
            uVar28 = 0xffffffff;
            if (bVar30) {
              uVar28 = uVar24;
            }
            iVar29 = DAT_180c63c2c;
            if (DAT_180c63c2c == 0) {
              UVar12 = GetTickCount64();
              if (UVar12 < DAT_180c63c30) {
                iVar29 = 0;
              }
              else {
                local_718 = &DAT_1808eb060;
                iVar29 = FUN_1805f68d0(&DAT_1808eb060);
                if (iVar29 != 0) goto LAB_180214f18;
                if (DAT_1808eb0ac == 0x7fffffff) {
                  DAT_1808eb0ac = 0x7ffffffe;
                  goto LAB_180214f8d;
                }
                if ((DAT_180c63c2c == 0) && (DAT_180c63c30 <= UVar12)) {
                  DAT_180c63c2c = FUN_1804174b0("C_EconEntity",0x86253266);
                  if (DAT_180c63c2c == 0) {
                    DAT_180c63c30 = UVar12 + 1000;
                  }
                  else {
                    DAT_180c63c30 = 0xffffffffffffffff;
                  }
                }
                iVar29 = DAT_180c63c2c;
                FUN_1805f68fc(&DAT_1808eb060);
              }
            }
            lVar22 = FUN_18017ea70();
            *(int *)(lVar22 + 4) = *(int *)(lVar22 + 4) + 1;
            if (iVar29 + local_740 == 0) {
              auVar32 = ZEXT464(local_778);
              uVar24 = 0;
            }
            else {
              local_774 = auVar32._0_4_;
              cVar8 = FUN_1804514f0(&local_774,iVar29 + local_740,4);
              if (cVar8 == '\0') {
                uVar24 = 0;
                auVar32 = ZEXT464(local_778);
              }
              else {
                auVar32 = ZEXT464(local_774);
                uVar24 = 1;
              }
            }
            lVar22 = FUN_18017ea70();
            if (*(int *)(lVar22 + 4) != 0) {
              *(int *)(lVar22 + 4) = *(int *)(lVar22 + 4) + -1;
            }
            auVar5 = vpcmpeqd_avx(ZEXT416(uVar24),SUB6416(ZEXT464(0),0));
            auVar5 = vblendvps_avx(auVar32._0_16_,SUB6416(ZEXT464(0xbf800000),0),auVar5);
            auVar32 = ZEXT1664(auVar5);
            if ((short)uVar19 == *local_730) {
              iVar29 = DAT_180c63c28;
              if (DAT_180c63c28 == 0) {
                UVar12 = GetTickCount64();
                if (UVar12 < DAT_180c63c20) {
                  iVar29 = 0;
                }
                else {
                  local_718 = &DAT_1808eb010;
                  iVar29 = FUN_1805f68d0(&DAT_1808eb010);
                  if (iVar29 != 0) goto LAB_180214f78;
                  if (DAT_1808eb05c == 0x7fffffff) {
                    DAT_1808eb05c = 0x7ffffffe;
                    goto LAB_180214f4d;
                  }
                  if ((DAT_180c63c28 == 0) && (DAT_180c63c20 <= UVar12)) {
                    DAT_180c63c28 = FUN_1804174b0("C_EconItemView",0x34b55816);
                    if (DAT_180c63c28 == 0) {
                      DAT_180c63c20 = UVar12 + 1000;
                    }
                    else {
                      DAT_180c63c20 = 0xffffffffffffffff;
                    }
                  }
                  iVar29 = DAT_180c63c28;
                  FUN_1805f68fc(&DAT_1808eb010);
                }
              }
              lVar22 = FUN_18017ea70();
              *(int *)(lVar22 + 4) = *(int *)(lVar22 + 4) + 1;
              if (iVar29 + lVar13 == 0) {
                bVar30 = false;
              }
              else {
                local_718 = (char *)0x0;
                cVar8 = FUN_1804514f0(&local_718,iVar29 + lVar13,8);
                if (cVar8 == '\0') {
                  bVar30 = false;
                }
                else {
                  bVar30 = true;
                }
              }
              pcVar16 = local_718;
              lVar22 = FUN_18017ea70();
              iVar29 = *(int *)(lVar22 + 4);
              if (iVar29 != 0) {
                iVar29 = iVar29 + -1;
                *(int *)(lVar22 + 4) = iVar29;
              }
              pcVar25 = (char *)0x0;
              if (bVar30) {
                pcVar25 = pcVar16;
              }
              pcVar16 = (char *)FUN_180221c10(iVar29,*local_730,local_738);
              ppuVar23 = local_6e8;
              if (pcVar25 != pcVar16) {
                uVar24 = local_748;
                goto LAB_180214239;
              }
              if (((uVar26 != *(uint *)local_6e8) || (uVar28 != *(uint *)(local_6e8 + 1))) ||
                 (1e-05 < ABS(auVar32._0_4_ - *(float *)((longlong)local_6e8 + 4))))
              goto LAB_180214232;
              iVar29 = DAT_180c63c14;
              if (DAT_180c63c14 == 0) {
                UVar12 = GetTickCount64();
                if (UVar12 < DAT_180c63c18) {
                  iVar29 = 0;
                }
                else {
                  local_718 = &DAT_1808eafc0;
                  iVar29 = FUN_1805f68d0(&DAT_1808eafc0);
                  if (iVar29 != 0) {
LAB_180214f78:
                    /* WARNING: Subroutine does not return */
                    FUN_1805f6d44(5);
                  }
                  if (DAT_1808eb00c == 0x7fffffff) {
                    DAT_1808eb00c = 0x7ffffffe;
LAB_180214f4d:
                    /* WARNING: Subroutine does not return */
                    FUN_1805f6d44(6);
                  }
                  if ((DAT_180c63c14 == 0) && (DAT_180c63c18 <= UVar12)) {
                    DAT_180c63c14 = FUN_1804174b0("C_EconItemView",0xafd12ee8);
                    if (DAT_180c63c14 == 0) {
                      DAT_180c63c18 = UVar12 + 1000;
                    }
                    else {
                      DAT_180c63c18 = 0xffffffffffffffff;
                    }
                  }
                  iVar29 = DAT_180c63c14;
                  FUN_1805f68fc(&DAT_1808eafc0);
                }
              }
              puVar15 = (undefined8 *)FUN_180454030(&local_6b8,iVar29 + lVar13,0xa1);
              local_738 = 1;
              _Buf2_00 = ppuVar23 + 3;
              _Buf2 = _Buf2_00;
              if ((undefined *)0xf < ppuVar23[6]) {
                _Buf2 = (undefined **)*_Buf2_00;
              }
              puVar4 = (undefined *)puVar15[2];
              if (0xf < (ulonglong)puVar15[3]) {
                puVar15 = (undefined8 *)*puVar15;
              }
              uVar24 = 1;
              if ((puVar4 != ppuVar23[5]) ||
                 ((puVar4 != (undefined *)0x0 &&
                  (iVar29 = memcmp(puVar15,_Buf2,(size_t)puVar4), iVar29 != 0))))
              goto LAB_180214236;
              iVar29 = DAT_180c63c10;
              if (DAT_180c63c10 == 0) {
                UVar12 = GetTickCount64();
                if (UVar12 < DAT_180c63c08) {
                  iVar29 = 0;
                }
                else {
                  local_718 = &DAT_1808eaf70;
                  iVar29 = FUN_1805f68d0(&DAT_1808eaf70);
                  if (iVar29 != 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_1805f6d44(5);
                  }
                  if (DAT_1808eafbc == 0x7fffffff) {
                    DAT_1808eafbc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
                    FUN_1805f6d44(6);
                  }
                  if ((DAT_180c63c10 == 0) && (DAT_180c63c08 <= UVar12)) {
                    DAT_180c63c10 = FUN_1804174b0("C_EconItemView",0xa74a6ed8);
                    if (DAT_180c63c10 == 0) {
                      DAT_180c63c08 = UVar12 + 1000;
                    }
                    else {
                      DAT_180c63c08 = 0xffffffffffffffff;
                    }
                  }
                  iVar29 = DAT_180c63c10;
                  FUN_1805f68fc(&DAT_1808eaf70);
                }
              }
              puVar15 = (undefined8 *)FUN_180454030(&local_6d8,iVar29 + lVar13,0xa1);
              uVar24 = 3;
              if ((undefined *)0xf < ppuVar23[6]) {
                _Buf2_00 = (undefined **)*_Buf2_00;
              }
              puVar4 = (undefined *)puVar15[2];
              if (0xf < (ulonglong)puVar15[3]) {
                puVar15 = (undefined8 *)*puVar15;
              }
              if (puVar4 != ppuVar23[5]) goto LAB_180214239;
              if (puVar4 != (undefined *)0x0) {
                iVar29 = memcmp(puVar15,_Buf2_00,(size_t)puVar4);
                if (iVar29 != 0) goto LAB_180214239;
              }
              bVar30 = true;
            }
            else {
LAB_180214232:
              uVar24 = local_748;
LAB_180214236:
LAB_180214239:
              bVar30 = false;
            }
            if ((uVar24 & 2) != 0) {
              uVar24 = uVar24 & 0xfffffffd;
              FUN_18015c010(&local_6d8);
            }
            if ((uVar24 & 1) != 0) {
              FUN_18015c010(&local_6b8);
            }
            if (bVar30) {
              if (DAT_180c710a9 == '\0') goto LAB_180213ac1;
              plVar11 = (longlong *)FUN_18017bf40(&local_718);
              if ((*plVar11 != DAT_180c710b0) && (*plVar11 < DAT_180c710b0)) goto LAB_180213ac1;
            }
            iVar29 = DAT_180c63bf8;
            if (DAT_180c63bf8 == 0) {
              UVar12 = GetTickCount64();
              if (UVar12 < DAT_180c63c00) {
                iVar29 = 0;
              }
              else {
                local_718 = &DAT_1808eaf20;
                iVar29 = FUN_1805f68d0(&DAT_1808eaf20);
                if (iVar29 != 0) goto LAB_180214f18;
                if (DAT_1808eaf6c == 0x7fffffff) {
                  DAT_1808eaf6c = 0x7ffffffe;
                  goto LAB_180214f8d;
                }
                if ((DAT_180c63bf8 == 0) && (DAT_180c63c00 <= UVar12)) {
                  DAT_180c63bf8 = FUN_1804174b0("CBasePlayerController",0xb22f805e);
                  if (DAT_180c63bf8 == 0) {
                    DAT_180c63c00 = UVar12 + 1000;
                  }
                  else {
                    DAT_180c63c00 = 0xffffffffffffffff;
                  }
                }
                iVar29 = DAT_180c63bf8;
                FUN_1805f68fc(&DAT_1808eaf20);
              }
            }
            lVar22 = FUN_18017ea70();
            *(int *)(lVar22 + 4) = *(int *)(lVar22 + 4) + 1;
            pcVar16 = local_760 + iVar29;
            if (pcVar16 != (char *)0x0) {
              local_760 = (char *)0x0;
              FUN_1804514f0(&local_760,pcVar16,8);
            }
            lVar22 = FUN_18017ea70();
            if (*(int *)(lVar22 + 4) != 0) {
              *(int *)(lVar22 + 4) = *(int *)(lVar22 + 4) + -1;
            }
            if ((DAT_180cce330 & 1) == 0) {
              DAT_180cce330 = DAT_180cce330 | 1;
              atexit(FUN_180662340);
            }
            lVar27 = DAT_1808eaf18;
            lVar22 = DAT_1808da460;
            if ((DAT_1808eaf18 == DAT_1808da460) && (DAT_180c63bf0 != 0)) goto LAB_1802144e7;
            UVar12 = GetTickCount64();
            if ((lVar27 == lVar22) && (UVar12 < DAT_180c63be8)) goto LAB_180214519;
            local_760 = &DAT_1808eaec0;
            iVar29 = FUN_1805f68d0(&DAT_1808eaec0);
            if (iVar29 != 0) goto LAB_180214f18;
            if (DAT_1808eaf0c == 0x7fffffff) {
              DAT_1808eaf0c = 0x7ffffffe;
              goto LAB_180214f8d;
            }
            uVar20 = 1000;
            if (DAT_1808eaf18 == lVar22) {
              if ((DAT_180c63bf0 != 0) || (UVar12 < DAT_180c63be8)) goto LAB_1802144d6;
            }
            else {
              DAT_1808eaf10 = 1000;
            }
            ppuVar23 = (undefined **)0xffffffffffffffff;
            do {
              ppuStack_710 = (undefined **)((longlong)ppuVar23 + 1);
              pcVar16 = (char *)((longlong)ppuVar23 + 0x180824971);
              ppuVar23 = ppuStack_710;
            } while (*pcVar16 != '\0');
            local_718 = "client.dll:48895C241048896C2418488974242057415641574883EC20440FB6F2488BF9";
            local_6d8 = "patterns::weapon_update_composite_material";
            local_6d0 = 0x2a;
            DAT_180c63bf0 = FUN_1800e5d20(&local_6d8,&local_718);
            DAT_1808eaf18 = lVar22;
            DAT_180c63be8 = 0xffffffffffffffff;
            if (DAT_180c63bf0 == 0) {
              DAT_180c63be8 = DAT_1808eaf10 + UVar12;
              uVar20 = 60000;
              if (DAT_1808eaf10 < 60000) {
                uVar20 = DAT_1808eaf10 * 2;
              }
            }
            DAT_1808eaf10 = uVar20;
LAB_1802144d6:
            lVar22 = DAT_180c63bf0;
            FUN_1805f68fc(&DAT_1808eaec0);
            if (lVar22 == 0) {
LAB_180214519:
              lVar22 = local_740;
            }
            else {
LAB_1802144e7:
              lVar22 = local_740;
              puVar15 = (undefined8 *)FUN_180184240(&local_718,local_740);
              local_6b8 = *puVar15;
              uStack_6b0 = puVar15[1];
              uStack_6a8 = puVar15[2];
              uStack_6a0 = puVar15[3];
              uVar17 = puVar15[4];
              local_698._1_1_ = (char)((ulonglong)uVar17 >> 8);
              bVar30 = local_698._1_1_ == '\0';
              local_698 = uVar17;
              if (bVar30) {
LAB_180213aa4:
                FUN_1801fde70("knives",lVar22,&local_6b8);
                goto LAB_180213ac1;
              }
            }
            FUN_18063ab10(local_648,0,0x600);
            uVar24 = local_778;
            bVar30 = lVar22 == local_768;
            local_788 = CONCAT44(local_788._4_4_,(uint)bVar30);
            local_798 = (undefined **)CONCAT44(local_798._4_4_,local_778);
            local_790 = (undefined **)lVar22;
            FUN_18015ad60(local_648,0x600,0xffffffffffffffff,
                          "feature=knives handle=0x%X weapon=0x%p active=%d");
            ppuVar23 = &PTR_180700558;
            local_798 = &PTR_180700558;
            if ((char)local_648[0] != '\0') {
              local_798 = (undefined **)&DAT_1806bcfc0;
            }
            local_790 = (undefined **)local_648;
            uVar17 = FUN_1800f6900(0);
            local_780 = local_728;
            local_788 = local_768;
            local_798 = local_6e8;
            uVar9 = FUN_180216210(uVar17,lVar22,lVar13,local_730);
            _DAT_180c710a8 = CONCAT11(uVar9,DAT_180c710a8) ^ 0x100;
            plVar11 = (longlong *)FUN_18017bf40(&local_760);
            DAT_180c710b0 = *plVar11 + 250000000;
            if (DAT_180c710a9 == '\0') {
              FUN_18063ab10(local_648,0,0x600);
              local_780 = (undefined **)CONCAT44(local_780._4_4_,(uint)bVar30);
              local_788 = CONCAT44(local_788._4_4_,*(int *)local_6e8);
              local_790 = (undefined **)CONCAT44(local_790._4_4_,(int)*local_730);
              local_798 = (undefined **)CONCAT44(local_798._4_4_,uVar24);
              FUN_18015ad60(local_648,0x600,0xffffffffffffffff,
                            "feature=knives handle=0x%X def_index=%d paint_kit=%d active=%d");
              if ((char)local_648[0] != '\0') {
                ppuVar23 = (undefined **)&DAT_1806bcfc0;
              }
              local_790 = (undefined **)local_648;
              local_798 = ppuVar23;
              FUN_1800f6900(0);
            }
          }
        }
        else {
          local_648[0] = 0;
          uStack_640 = 0;
          uStack_638 = 0;
          uStack_634 = 0;
          uStack_62c = 0;
          local_628 = 0;
          uStack_624 = 0;
          uStack_61c = auVar32._0_4_;
          uStack_618 = 0;
          FUN_18063ab10(auStack_614,0,0xa1);
          FUN_18063ab10(local_573,0,0xa3);
          local_4d0 = 0;
          local_4cc = 0;
          puVar15 = (undefined8 *)local_648;
          lVar13 = 3;
          puVar14 = (undefined8 *)&DAT_180c70f10;
          do {
            uVar17 = puVar15[1];
            uVar6 = puVar15[2];
            uVar7 = puVar15[3];
            *puVar14 = *puVar15;
            puVar14[1] = uVar17;
            puVar14[2] = uVar6;
            puVar14[3] = uVar7;
            uVar17 = puVar15[5];
            uVar6 = puVar15[6];
            uVar7 = puVar15[7];
            puVar14[4] = puVar15[4];
            puVar14[5] = uVar17;
            puVar14[6] = uVar6;
            puVar14[7] = uVar7;
            uVar17 = puVar15[9];
            uVar6 = puVar15[10];
            uVar7 = puVar15[0xb];
            puVar14[8] = puVar15[8];
            puVar14[9] = uVar17;
            puVar14[10] = uVar6;
            puVar14[0xb] = uVar7;
            uVar17 = puVar15[0xd];
            puVar14[0xc] = puVar15[0xc];
            puVar14[0xd] = uVar17;
            uVar17 = puVar15[0xf];
            puVar14[0xe] = puVar15[0xe];
            puVar14[0xf] = uVar17;
            puVar15 = puVar15 + 0x10;
            lVar13 = lVar13 + -1;
            puVar14 = puVar14 + 0x10;
          } while (lVar13 != 0);
          _DAT_180c710a8 = 0;
          DAT_180c710b0 = 0;
          DAT_180c710b8 = 0;
          DAT_180c710c0 = (char *)0x0;
          _DAT_180c71090 = CONCAT44(uVar26,DAT_180c71090);
          DAT_180c71098 = 0;
          FUN_18063ab10(local_648,0,0x600);
          local_790 = local_728;
          local_798 = (undefined **)CONCAT44(local_798._4_4_,uVar26);
          FUN_18015ad60(local_648,0x600,0xffffffffffffffff,"feature=knives handle=0x%X pawn=0x%p");
          local_798 = &PTR_180700558;
          if ((char)local_648[0] != '\0') {
            local_798 = (undefined **)&DAT_1806bcfc0;
          }
          local_790 = (undefined **)local_648;
          FUN_1800f6900(0);
        }
LAB_180213ac1:
        lVar13 = local_768;
      }
      uVar20 = 0xffffffffffffffff;
      FUN_18017bf40(&local_760);
      uVar24 = local_734;
      pcVar16 = local_760;
      if (((local_734 == 0) || (local_734 != DAT_180c710b8)) ||
         ((local_760 != DAT_180c710c0 && ((longlong)local_760 < (longlong)DAT_180c710c0)))) {
        bVar30 = false;
      }
      else {
        bVar30 = true;
      }
      if ((local_734 != DAT_180c71090) || (bVar30)) {
        if ((DAT_180c710a8 != '\0') && (lVar13 != 0)) {
          iVar29 = DAT_180c63bdc;
          if (DAT_180c63bdc == 0) {
            UVar12 = GetTickCount64();
            if (UVar12 < DAT_180c63be0) {
              iVar29 = 0;
            }
            else {
              local_760 = &DAT_1808eae70;
              iVar29 = FUN_1805f68d0(&DAT_1808eae70);
              if (iVar29 != 0) goto LAB_180214f18;
              if (DAT_1808eaebc == 0x7fffffff) {
                DAT_1808eaebc = 0x7ffffffe;
                goto LAB_180214f8d;
              }
              if ((DAT_180c63bdc == 0) && (DAT_180c63be0 <= UVar12)) {
                DAT_180c63bdc = FUN_1804174b0("C_EconEntity",0x537b0586);
                if (DAT_180c63bdc == 0) {
                  DAT_180c63be0 = UVar12 + 1000;
                }
                else {
                  DAT_180c63be0 = 0xffffffffffffffff;
                }
              }
              iVar29 = DAT_180c63bdc;
              FUN_1805f68fc(&DAT_1808eae70);
            }
          }
          iVar18 = DAT_180c63bd8;
          if (DAT_180c63bd8 == 0) {
            UVar12 = GetTickCount64();
            if (UVar12 < DAT_180c63bd0) {
              iVar18 = 0;
            }
            else {
              local_760 = &DAT_1808eae20;
              iVar18 = FUN_1805f68d0(&DAT_1808eae20);
              if (iVar18 != 0) goto LAB_180214f18;
              if (DAT_1808eae6c == 0x7fffffff) {
                DAT_1808eae6c = 0x7ffffffe;
LAB_180214f8d:
                    /* WARNING: Subroutine does not return */
                FUN_1805f6d44(6);
              }
              if ((DAT_180c63bd8 == 0) && (DAT_180c63bd0 <= UVar12)) {
                DAT_180c63bd8 = FUN_1804174b0("C_AttributeContainer",0xdce71866);
                if (DAT_180c63bd8 == 0) {
                  DAT_180c63bd0 = UVar12 + 1000;
                }
                else {
                  DAT_180c63bd0 = 0xffffffffffffffff;
                }
              }
              iVar18 = DAT_180c63bd8;
              FUN_1805f68fc(&DAT_1808eae20);
            }
          }
          iVar10 = DAT_180c63bc4;
          if (DAT_180c63bc4 == 0) {
            UVar12 = GetTickCount64();
            if (UVar12 < DAT_180c63bc8) {
              iVar10 = 0;
            }
            else {
              local_760 = &DAT_1808eadd0;
              iVar10 = FUN_1805f68d0(&DAT_1808eadd0);
              if (iVar10 != 0) {
LAB_180214f18:
                    /* WARNING: Subroutine does not return */
                FUN_1805f6d44(5);
              }
              if (DAT_1808eae1c == 0x7fffffff) {
                DAT_1808eae1c = 0x7ffffffe;
                goto LAB_180214fad;
              }
              if ((DAT_180c63bc4 == 0) && (DAT_180c63bc8 <= UVar12)) {
                DAT_180c63bc4 = FUN_1804174b0("C_EconItemView",0xa2ccb41a);
                if (DAT_180c63bc4 == 0) {
                  DAT_180c63bc8 = UVar12 + 1000;
                }
                else {
                  DAT_180c63bc8 = 0xffffffffffffffff;
                }
              }
              iVar10 = DAT_180c63bc4;
              FUN_1805f68fc(&DAT_1808eadd0);
            }
          }
          lVar22 = FUN_18017ea70();
          *(int *)(lVar22 + 4) = *(int *)(lVar22 + 4) + 1;
          lVar22 = (longlong)iVar10 + (longlong)iVar29 + iVar18 + lVar13;
          if (lVar22 == 0) {
            bVar30 = false;
          }
          else {
            local_770[0] = local_770[0] & 0xffff0000;
            cVar8 = FUN_1804514f0(local_770,lVar22,2);
            if (cVar8 == '\0') {
              bVar30 = false;
            }
            else {
              bVar30 = true;
            }
          }
          uVar26 = local_770[0] & 0xffff;
          lVar22 = FUN_18017ea70();
          if (*(int *)(lVar22 + 4) != 0) {
            *(int *)(lVar22 + 4) = *(int *)(lVar22 + 4) + -1;
          }
          if (!bVar30) {
            uVar26 = 0;
          }
          uVar19 = ((ulonglong)(uVar26 >> 8) ^
                   ((ulonglong)(uVar26 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3) *
                   0x100000001b3 & DAT_180cc9cb8;
          lVar22 = *(longlong *)(DAT_180cc9ca0 + 8 + uVar19 * 0x10);
          if (lVar22 == DAT_180cc9c90) {
LAB_180214bd1:
            lVar22 = 0;
          }
          else {
            sVar3 = *(short *)(lVar22 + 0x10);
            while ((short)uVar26 != sVar3) {
              if (lVar22 == *(longlong *)(DAT_180cc9ca0 + uVar19 * 0x10)) goto LAB_180214bd1;
              lVar22 = *(longlong *)(lVar22 + 8);
              sVar3 = *(short *)(lVar22 + 0x10);
            }
          }
          lVar27 = DAT_180cc9c90;
          if (lVar22 != 0) {
            lVar27 = lVar22;
          }
          if (((lVar27 != DAT_180cc9c90) &&
              (lVar22 = *(longlong *)(lVar27 + 0x18) * 0xb8 + DAT_180cc9bf8, lVar22 != 0)) &&
             (*(char *)(lVar22 + 0xb0) == '\x01')) {
            iVar29 = DAT_180c63bc0;
            if (DAT_180c63bc0 == 0) {
              UVar12 = GetTickCount64();
              if (UVar12 < DAT_180c63bb8) {
                iVar29 = 0;
              }
              else {
                local_760 = &DAT_1808ead80;
                iVar29 = FUN_1805f68d0(&DAT_1808ead80);
                if (iVar29 != 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_1805f6d44(5);
                }
                if (DAT_1808eadcc == 0x7fffffff) {
                  DAT_1808eadcc = 0x7ffffffe;
LAB_180214fad:
                    /* WARNING: Subroutine does not return */
                  FUN_1805f6d44(6);
                }
                if ((DAT_180c63bc0 == 0) && (DAT_180c63bb8 <= UVar12)) {
                  DAT_180c63bc0 = FUN_1804174b0("C_EconEntity",0xa12d48f);
                  if (DAT_180c63bc0 == 0) {
                    uVar20 = UVar12 + 1000;
                  }
                  DAT_180c63bb8 = uVar20;
                }
                iVar29 = DAT_180c63bc0;
                FUN_1805f68fc(&DAT_1808ead80);
              }
            }
            lVar22 = FUN_18017ea70();
            *(int *)(lVar22 + 4) = *(int *)(lVar22 + 4) + 1;
            if (iVar29 + lVar13 == 0) {
              bVar30 = false;
              uVar26 = local_734;
            }
            else {
              local_778 = 0;
              cVar8 = FUN_1804514f0(&local_778,iVar29 + lVar13,4);
              if (cVar8 == '\0') {
                bVar30 = false;
                uVar26 = local_734;
              }
              else {
                bVar30 = true;
                uVar26 = local_778;
              }
            }
            lVar13 = FUN_18017ea70();
            if (*(int *)(lVar13 + 4) != 0) {
              *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + -1;
            }
            uVar28 = 0;
            if (bVar30) {
              uVar28 = uVar26;
            }
            uVar17 = FUN_180208890(&DAT_180cc9bb0,uVar28);
            cVar8 = FUN_180217d90(extraout_XMM0_Qa,local_728,uVar17);
            if (cVar8 == '\0') {
              DAT_180c710b8 = uVar24;
              DAT_180c710c0 = pcVar16 + 50000000;
            }
            else if (DAT_180c710b8 == uVar24) {
              DAT_180c710b8 = 0;
              DAT_180c710c0 = (char *)0x0;
            }
          }
        }
        _DAT_180c71090 = CONCAT44(DAT_180c71094,uVar24);
      }
    }
    FUN_1800cf8e0(&local_688);
  }
code_r0x0001802138c8:
  pcVar25 = local_6d8;
  goto LAB_1802133e0;
}



