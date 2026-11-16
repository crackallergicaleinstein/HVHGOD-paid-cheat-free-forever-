// FUN_1803c4bc0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803c4bc0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001803c5935) */
/* WARNING: Type propagation algorithm not settling */

void FUN_1803c4bc0(code *param_1,uint param_2,code *param_3,code *param_4,code *param_5,
                  code *param_6,code *param_7)

{
  byte *pbVar1;
  longlong *plVar2;
  int *piVar3;
  bool bVar4;
  code **ppcVar5;
  int iVar6;
  char cVar7;
  byte bVar8;
  undefined1 uVar9;
  byte bVar10;
  byte bVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  ULONGLONG UVar16;
  longlong *plVar17;
  code *pcVar18;
  code *pcVar19;
  longlong lVar20;
  longlong lVar21;
  byte *pbVar22;
  char *******pppppppcVar23;
  uint uVar24;
  code *pcVar25;
  ulonglong uVar26;
  undefined8 uVar27;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar28;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined4 uVar29;
  code **ppcVar30;
  char **ppcVar31;
  char *******pppppppcVar32;
  code **ppcVar33;
  byte **ppbVar34;
  undefined1 auStack_8c8 [32];
  undefined **local_8a8;
  char *local_8a0;
  int local_898;
  int local_890;
  int local_888;
  undefined4 local_880;
  uint local_878;
  undefined4 local_870;
  uint local_868;
  uint local_860;
  int local_858 [2];
  longlong *local_850;
  char *******local_848;
  code **ppcStack_840;
  byte **local_838;
  code **local_828;
  code **ppcStack_820;
  code **ppcStack_818;
  code **ppcStack_810;
  code **local_808;
  char **ppcStack_800;
  undefined1 local_7f8 [16];
  code **local_7e8;
  code **ppcStack_7e0;
  code **ppcStack_7d8;
  code **ppcStack_7d0;
  code **local_7c8;
  char **ppcStack_7c0;
  char *local_7b8;
  byte *local_7a8;
  code *local_7a0;
  char *local_798;
  code *local_790;
  byte local_788;
  char local_787 [7];
  code *local_780;
  char local_778 [4];
  int local_774;
  code *local_770;
  int local_768 [2];
  code *local_760;
  code *local_758;
  code *local_750;
  undefined4 local_748 [4];
  char *******local_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  ulonglong local_720;
  int local_718;
  char local_710;
  code *local_708;
  code *local_700;
  code **local_6f8;
  code *local_6e8;
  code **local_6e0;
  code **local_6d8;
  code **local_6d0;
  undefined8 *local_6c8;
  undefined8 *local_6c0;
  int *local_6b8;
  byte *local_6b0;
  undefined4 *local_6a8;
  int *local_6a0;
  char local_698 [1536];
  ulonglong local_98;
  
  local_98 = DAT_1808d5f00 ^ (ulonglong)auStack_8c8;
  local_798 = (char *)CONCAT44(local_798._4_4_,param_2);
  local_7a0 = param_5;
  uVar26 = *(ulonglong *)(param_1 + 0x1048);
  if (uVar26 == 0) {
  }
  local_760 = param_4;
  local_758 = param_3;
  local_708 = param_1;
  UVar16 = GetTickCount64();
  if (uVar26 <= UVar16) {
  }
  if ((param_2 & 0x7fff) < 0x4000) {
  }
  local_7f8 = (undefined1  [16])0x0;
  plVar17 = (longlong *)FUN_180113860(param_1 + 0x1028);
  pbVar22 = *(byte **)(param_1 + 0x1020);
  local_7f8._8_8_ = plVar17;
  local_7f8._0_8_ = pbVar22;
  if (plVar17 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
    UNLOCK();
  }
  LOCK();
  uVar27 = *(undefined8 *)(param_1 + 0x1028);
  *(longlong **)(param_1 + 0x1028) = plVar17;
  UNLOCK();
  uVar28 = extraout_XMM0_Qa;
  local_850 = plVar17;
  if (((byte)uVar27 & 3) == 2) {
    uVar28 = FUN_1805fa36c(param_1 + 0x1028);
  }
  if ((((pbVar22 == (byte *)0x0) || (0xfffffffd < param_2 - 1)) || (local_758 == (code *)0x0)) ||
     (local_7a0 == (code *)0x0)) goto LAB_1803c5a35;
  pcVar18 = (code *)FUN_1803d4150(uVar28,param_2);
  uVar27 = 0;
  local_780 = (code *)0x0;
  local_7a8 = pbVar22;
  if (param_1[0xdc1] != (code)0x0) {
    local_8a8 = (undefined **)CONCAT71(local_8a8._1_7_,1);
    cVar7 = FUN_1803c36b0(param_1,pcVar18,*(undefined4 *)(pbVar22 + 0x148),0);
    if (cVar7 == '\0') goto LAB_1803c5a35;
    pcVar25 = pcVar18;
    if ((*(int *)(pbVar22 + 0x134) != 0) ||
       (pcVar19 = (code *)FUN_1803d4150(extraout_XMM0_Qa_00,*(undefined4 *)(param_1 + 0x990)),
       pcVar18 == pcVar19)) {
      local_8a8 = (undefined **)((ulonglong)local_8a8 & 0xffffffffffffff00);
      cVar7 = FUN_1803c36b0(param_1,pcVar18,*(undefined4 *)(pbVar22 + 0x148),&local_780);
      if (cVar7 != '\0') goto LAB_1803c4e7e;
      pcVar19 = (code *)FUN_1803d4150(extraout_XMM0_Qa_02,*(undefined4 *)(param_1 + 0x990));
      if ((pcVar18 != pcVar19) || (*(int *)(pbVar22 + 0x134) < 1)) goto LAB_1803c4e00;
      local_7a8 = pbVar22 + 0x3c;
      goto LAB_1803c4e82;
    }
    uVar28 = FUN_1803d3fa0(extraout_XMM0_Qa_01,pcVar18);
    FUN_180454030(&local_738,uVar28,0x60);
    uVar26 = local_720;
    pppppppcVar32 = local_738;
    pppppppcVar23 = (char *******)&local_738;
    if (0xf < local_720) {
      pppppppcVar23 = local_738;
    }
    if ((CONCAT44(uStack_728._4_4_,(int)uStack_728) == 0x13) &&
       (iVar12 = memcmp(pppppppcVar23,"C_CS2HudModelWeapon",0x13), iVar12 == 0)) {
LAB_1803c4e0a:
      local_7a8 = pbVar22 + 0xb4;
      FUN_18015c010(&local_738);
      goto LAB_1803c4e82;
    }
    pppppppcVar23 = (char *******)&local_738;
    if (0xf < uVar26) {
      pppppppcVar23 = pppppppcVar32;
    }
    if (pppppppcVar23 == (char *******)0x0) {
      uVar24 = 0;
    }
    else {
      uVar24 = 0x811c9dc5;
      cVar7 = *(char *)pppppppcVar23;
      while (cVar7 != '\0') {
        pppppppcVar23 = (char *******)((longlong)pppppppcVar23 + 1);
        uVar24 = ((int)cVar7 ^ uVar24) * 0x1000193;
        cVar7 = *(char *)pppppppcVar23;
      }
    }
    iVar12 = FUN_18027d2c0(uVar24);
    if (iVar12 != -1) goto LAB_1803c4e0a;
    FUN_18015c010(&local_738);
LAB_1803c4e00:
    plVar17 = local_850;
    goto LAB_1803c5a35;
  }
  local_8a8 = (undefined **)((ulonglong)local_8a8._1_7_ << 8);
  cVar7 = FUN_1803c36b0(param_1,pcVar18,*(undefined4 *)(pbVar22 + 0x148),&local_780);
  if (cVar7 == '\0') goto LAB_1803c4e00;
LAB_1803c4e7e:
  pcVar25 = local_780;
LAB_1803c4e82:
  iVar12 = DAT_180c71cd8;
  if (DAT_180c71cd8 == 0) {
    UVar16 = GetTickCount64();
    if (UVar16 < DAT_180c71cd0) {
      iVar12 = 0;
    }
    else {
      local_790 = (code *)&DAT_1809b9b70;
      iVar12 = FUN_1805f68d0(&DAT_1809b9b70);
      if (iVar12 != 0) goto LAB_1803c5b82;
      if (DAT_1809b9bbc == 0x7fffffff) {
        DAT_1809b9bbc = 0x7ffffffe;
        goto LAB_1803c5b97;
      }
      if ((DAT_180c71cd8 == 0) && (DAT_180c71cd0 <= UVar16)) {
        DAT_180c71cd8 = FUN_1804174b0("CEntityInstance",0xa8a45978);
        if (DAT_180c71cd8 == 0) {
          DAT_180c71cd0 = UVar16 + 1000;
        }
        else {
          DAT_180c71cd0 = 0xffffffffffffffff;
        }
      }
      iVar12 = DAT_180c71cd8;
      FUN_1805f68fc(&DAT_1809b9b70);
    }
  }
  lVar20 = FUN_18017ea70();
  *(int *)(lVar20 + 4) = *(int *)(lVar20 + 4) + 1;
  if (pcVar18 + iVar12 == (code *)0x0) {
    bVar4 = false;
    pcVar19 = local_770;
  }
  else {
    local_780 = (code *)0x0;
    cVar7 = FUN_1804514f0(&local_780,pcVar18 + iVar12,8);
    if (cVar7 == '\0') {
      bVar4 = false;
      pcVar19 = local_770;
    }
    else {
      bVar4 = true;
      pcVar19 = local_780;
    }
  }
  lVar20 = FUN_18017ea70();
  if (*(int *)(lVar20 + 4) != 0) {
    *(int *)(lVar20 + 4) = *(int *)(lVar20 + 4) + -1;
  }
  if ((!bVar4) || (pcVar19 == (code *)0x0)) goto LAB_1803c4e00;
  lVar20 = FUN_18017ea70();
  *(int *)(lVar20 + 4) = *(int *)(lVar20 + 4) + 1;
  if (pcVar19 + 0x10 == (code *)0x0) {
    bVar4 = false;
    iVar12 = local_774;
  }
  else {
    local_858[0] = 0;
    cVar7 = FUN_1804514f0(local_858,pcVar19 + 0x10,4);
    if (cVar7 == '\0') {
      bVar4 = false;
      iVar12 = local_774;
    }
    else {
      bVar4 = true;
      iVar12 = local_858[0];
    }
  }
  lVar20 = FUN_18017ea70();
  if (*(int *)(lVar20 + 4) != 0) {
    *(int *)(lVar20 + 4) = *(int *)(lVar20 + 4) + -1;
  }
  if ((!bVar4) || (iVar12 != (int)local_798)) goto LAB_1803c4e00;
  iVar12 = DAT_180c71c98;
  if (DAT_180c71c98 == 0) {
    UVar16 = GetTickCount64();
    if (UVar16 < DAT_180c71ca0) {
      iVar12 = 0;
    }
    else {
      local_790 = (code *)&DAT_1809b9a80;
      iVar12 = FUN_1805f68d0(&DAT_1809b9a80);
      if (iVar12 != 0) {
LAB_1803c5b82:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1809b9acc == 0x7fffffff) {
        DAT_1809b9acc = 0x7ffffffe;
LAB_1803c5b97:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if ((DAT_180c71c98 == 0) && (DAT_180c71ca0 <= UVar16)) {
        DAT_180c71c98 = FUN_1804174b0("CEntityInstance",0xa8a45978);
        if (DAT_180c71c98 == 0) {
          DAT_180c71ca0 = UVar16 + 1000;
        }
        else {
          DAT_180c71ca0 = 0xffffffffffffffff;
        }
      }
      iVar12 = DAT_180c71c98;
      FUN_1805f68fc(&DAT_1809b9a80);
    }
  }
  lVar20 = FUN_18017ea70();
  *(int *)(lVar20 + 4) = *(int *)(lVar20 + 4) + 1;
  if (pcVar25 + iVar12 == (code *)0x0) {
    bVar4 = false;
    pcVar25 = local_770;
  }
  else {
    local_780 = (code *)0x0;
    cVar7 = FUN_1804514f0(&local_780,pcVar25 + iVar12,8);
    if (cVar7 == '\0') {
      bVar4 = false;
      pcVar25 = local_770;
    }
    else {
      bVar4 = true;
      pcVar25 = local_780;
    }
  }
  lVar20 = FUN_18017ea70();
  if (*(int *)(lVar20 + 4) != 0) {
    *(int *)(lVar20 + 4) = *(int *)(lVar20 + 4) + -1;
  }
  lVar20 = FUN_18017ea70();
  *(int *)(lVar20 + 4) = *(int *)(lVar20 + 4) + 1;
  if (bVar4) {
    pcVar25 = pcVar25 + 0x10;
    if (pcVar25 != (code *)0x0) goto LAB_1803c5109;
    bVar4 = false;
    iVar12 = local_774;
  }
  else {
    pcVar25 = (code *)0x10;
LAB_1803c5109:
    local_858[0] = 0;
    cVar7 = FUN_1804514f0(local_858,pcVar25,4);
    if (cVar7 == '\0') {
      bVar4 = false;
      iVar12 = local_774;
    }
    else {
      bVar4 = true;
      iVar12 = local_858[0];
    }
  }
  lVar20 = FUN_18017ea70();
  if (*(int *)(lVar20 + 4) != 0) {
    *(int *)(lVar20 + 4) = *(int *)(lVar20 + 4) + -1;
  }
  if ((!bVar4) || (iVar12 == 0)) goto LAB_1803c4e00;
  if (param_1[0xdc1] == (code)0x0) {
    iVar13 = iVar12;
  }
  else {
    iVar13 = *(int *)(param_1 + 0x990);
  }
  *(int *)(param_1 + 0x1050) = iVar13;
  lVar20 = local_7f8._0_8_;
  cVar7 = *(char *)(local_7f8._0_8_ + 0x138);
  if ((cVar7 != '\0') || (-1 < *(int *)(local_7f8._0_8_ + 0x140))) {
    local_778[0] = '\x01';
    local_750 = param_7;
    local_770 = param_6;
    local_790 = local_7a0;
    local_708 = local_760;
    local_780 = local_758;
    local_798 = local_778;
    if (((cVar7 != '\0') || (-1 < *(int *)(local_7f8._0_8_ + 0x140))) && (local_7a0 != (code *)0x0))
    {
      local_7e8 = &local_708;
      ppcStack_7e0 = &local_790;
      ppcStack_7d8 = &local_770;
      ppcStack_7d0 = &local_780;
      local_7c8 = &local_750;
      ppcStack_7c0 = &local_798;
      local_7b8 = (char *)(local_7f8._0_8_ + 0x138);
      cVar7 = FUN_18028baa0(&local_7e8);
      if (cVar7 != '\0') {
        if (local_778[0] != '\0') {
          uVar27 = *(undefined8 *)(lVar20 + 0x150);
        }
        *(undefined8 *)(param_1 + 0x1030) = uVar27;
        plVar17 = local_850;
        goto LAB_1803c5a35;
      }
    }
    goto LAB_1803c4e00;
  }
  local_788 = 1;
  local_774 = 0;
  local_768[0] = 0;
  local_748[0] = 0;
  local_6e8 = param_1;
  local_6e0 = &local_758;
  local_6d8 = &local_760;
  local_6d0 = &local_7a0;
  local_6c8 = &param_6;
  local_6c0 = &param_7;
  local_6b8 = &local_774;
  local_6b0 = &local_788;
  local_6a8 = local_748;
  local_6a0 = local_768;
  local_700 = param_1;
  local_6f8 = &local_6e8;
  local_787[0] = cVar7;
  if (param_1[0xdc1] != (code)0x0) {
    if (local_7a8 != local_7a8 + 0x3c) {
      pbVar22 = local_7a8 + 1;
      do {
        if (pbVar22[-1] != 0) {
          if (pbVar22[6] == 0) {
            bVar8 = *pbVar22;
            local_780 = (code *)0x908060504030200;
            if (10 < bVar8) {
              if (0x12 < bVar8) goto LAB_1803c528f;
              bVar8 = local_787[(ulonglong)(bVar8 - 0xb) + 7];
            }
            if ((bVar8 != 6) || (pbVar22[0xe] == 0)) goto LAB_1803c528f;
          }
          uVar9 = 1;
          goto LAB_1803c529e;
        }
LAB_1803c528f:
        pbVar1 = pbVar22 + 0x13;
        pbVar22 = pbVar22 + 0x14;
      } while (pbVar1 != local_7a8 + 0x3c);
    }
    uVar9 = 0;
LAB_1803c529e:
    local_8a8 = (undefined **)CONCAT71(local_8a8._1_7_,uVar9);
    local_858[0] = iVar12;
    cVar7 = FUN_1803c48d0(param_1,local_758,(ulonglong)local_798 & 0xffffffff,pcVar18);
    if (cVar7 == '\0') {
      LOCK();
      *(undefined8 *)(param_1 + 0x1030) = 0;
      UNLOCK();
      plVar17 = local_850;
      goto LAB_1803c5a35;
    }
    pppppppcVar32 = (char *******)local_787;
    ppcVar33 = &local_700;
    ppbVar34 = &local_7a8;
    local_828 = &local_7a0;
    ppcStack_820 = &param_6;
    ppcStack_818 = &local_758;
    ppcStack_810 = &param_7;
    ppcVar30 = &local_760;
    ppcVar31 = (char **)local_787;
    if (local_7a8 != local_7a8 + 0x3c) {
      pbVar22 = local_7a8 + 1;
      do {
        if (pbVar22[-1] != 0) {
          if (pbVar22[6] == 0) {
            bVar8 = *pbVar22;
            local_780 = (code *)0x908060504030200;
            if (10 < bVar8) {
              if (0x12 < bVar8) goto LAB_1803c536f;
              bVar8 = local_787[(ulonglong)(bVar8 - 0xb) + 7];
            }
            if ((bVar8 != 6) || (pbVar22[0xe] == 0)) goto LAB_1803c536f;
          }
          if (pbVar22[7] != 0) {
            if (local_7a8 != local_7a8 + 0x3c) {
              pbVar22 = local_7a8 + 1;
              goto LAB_1803c53f8;
            }
            break;
          }
        }
LAB_1803c536f:
        pbVar1 = pbVar22 + 0x13;
        pbVar22 = pbVar22 + 0x14;
      } while (pbVar1 != local_7a8 + 0x3c);
    }
    goto LAB_1803c537c;
  }
  if (*local_7a8 != 0) {
    local_787[0] = FUN_1803c61a0(&local_700,local_7a8,local_7a8[8],0);
    goto LAB_1803c588b;
  }
  goto LAB_1803c58a4;
LAB_1803c5676:
  if ((((((longlong)ppcVar5 < 0) || (iVar6 < 0)) || ((int)uStack_730 < 0)) ||
      (((local_718 < 0 || ((int)uStack_730 < iVar13)) ||
       ((local_718 < iVar6 || ((iVar13 != 0 && (local_738 == (char *******)0x0)))))))) ||
     (((iVar6 != 0 && (local_720 == 0)) || (iVar15 = iVar6 + iVar13, 0x100000 - iVar6 < iVar13)))) {
    iVar15 = -1;
  }
  if (iVar15 <= iVar12) goto LAB_1803c5810;
  pppppppcVar23 = local_738;
  uVar26 = local_720;
  iVar15 = FUN_18027c2f0(&local_738);
  if (((iVar12 < 0) || (iVar15 < 0)) || (iVar15 <= iVar12)) {
    lVar20 = FUN_18017ea70();
    *(int *)(lVar20 + 4) = *(int *)(lVar20 + 4) + 1;
    pppppppcVar23 = (char *******)0x20;
LAB_1803c571c:
    local_750 = (code *)0x0;
    cVar7 = FUN_1804514f0(&local_750,pppppppcVar23,8);
    if (cVar7 == '\0') {
      bVar4 = false;
    }
    else {
      local_770 = local_750;
      bVar4 = true;
    }
  }
  else {
    if (iVar12 < iVar13) {
      pppppppcVar23 = pppppppcVar23 + (longlong)iVar12 * 0xe;
    }
    else {
      pppppppcVar23 = (char *******)((longlong)(iVar14 + iVar12) * 0x70 + uVar26);
    }
    pppppppcVar23 = pppppppcVar23 + 4;
    lVar20 = FUN_18017ea70();
    *(int *)(lVar20 + 4) = *(int *)(lVar20 + 4) + 1;
    if (pppppppcVar23 != (char *******)0x0) goto LAB_1803c571c;
    bVar4 = false;
  }
  pcVar18 = local_770;
  lVar20 = FUN_18017ea70();
  if (*(int *)(lVar20 + 4) != 0) {
    *(int *)(lVar20 + 4) = *(int *)(lVar20 + 4) + -1;
  }
  pcVar25 = (code *)0x0;
  if (bVar4) {
    pcVar25 = pcVar18;
  }
  cVar7 = FUN_18028ca20(pcVar25);
  bVar8 = local_788;
  if (cVar7 == '\0') {
    local_858[1] = 0xff000000;
    lVar20 = FUN_18027c350(&local_738,iVar12);
    bVar10 = FUN_18027c510(lVar20,local_790,local_858 + 1);
    local_750 = (code *)CONCAT44(local_750._4_4_,uVar29);
    bVar11 = 0;
    if (lVar20 + 0x54 != 0) {
      local_788 = bVar10 & bVar8;
      lVar21 = FUN_18017ea70();
      *(int *)(lVar21 + 4) = *(int *)(lVar21 + 4) + 1;
      bVar11 = FUN_1801ad800(lVar20 + 0x54,&local_750);
      lVar20 = FUN_18017ea70();
      if (*(int *)(lVar20 + 4) != 0) {
        *(int *)(lVar20 + 4) = *(int *)(lVar20 + 4) + -1;
      }
    }
    local_788 = bVar10 & bVar8 & bVar11;
  }
  iVar12 = iVar12 + 1;
  iVar14 = (int)local_780;
  goto LAB_1803c5676;
LAB_1803c5810:
  lVar20 = local_7f8._0_8_;
  param_1 = local_708;
LAB_1803c581e:
  local_7e8 = local_828;
  ppcStack_7e0 = ppcStack_820;
  ppcStack_7d8 = ppcStack_818;
  ppcStack_7d0 = ppcStack_810;
  uStack_730._0_4_ = (int)ppcVar33;
  uStack_730._4_4_ = (int)((ulonglong)ppcVar33 >> 0x20);
  uStack_728._0_4_ = (int)ppbVar34;
  uStack_728._4_4_ = (undefined4)((ulonglong)ppbVar34 >> 0x20);
  local_898 = 0;
  local_7c8 = ppcVar30;
  ppcStack_7c0 = ppcVar31;
  local_738 = pppppppcVar32;
  FUN_1803c8d90(&local_7a8,&local_7a8,&local_738,&local_7e8);
  iVar12 = local_858[0];
  goto LAB_1803c588b;
LAB_1803c53f8:
  do {
    if (pbVar22[-1] != 0) {
      if (pbVar22[6] == 0) {
        bVar8 = *pbVar22;
        local_780 = (code *)0x908060504030200;
        if (10 < bVar8) {
          if (0x12 < bVar8) goto LAB_1803c5435;
          bVar8 = local_787[(ulonglong)(bVar8 - 0xb) + 7];
        }
        if ((bVar8 != 6) || (pbVar22[0xe] == 0)) goto LAB_1803c5435;
      }
      if (pbVar22[7] == 0) {
        local_898 = 1;
        local_848 = pppppppcVar32;
        ppcStack_840 = ppcVar33;
        local_838 = ppbVar34;
        local_808 = ppcVar30;
        ppcStack_800 = ppcVar31;
        local_7e8 = local_828;
        ppcStack_7e0 = ppcStack_820;
        ppcStack_7d8 = ppcStack_818;
        ppcStack_7d0 = ppcStack_810;
        local_7c8 = ppcVar30;
        ppcStack_7c0 = ppcVar31;
        local_738 = pppppppcVar32;
        uStack_730 = ppcVar33;
        uStack_728 = ppbVar34;
        FUN_1803c8d90(&local_7a8,&local_7a8,&local_738,&local_7e8);
        FUN_18027c3e0(&local_738,local_760);
        if (((((((local_710 == '\0') || ((longlong)uStack_730 < 0)) || ((int)uStack_728 < 0)) ||
              ((((int)uStack_730 < 0 || (local_718 < 0)) ||
               (((int)uStack_730 < uStack_730._4_4_ || (local_718 < (int)uStack_728)))))) ||
             ((uStack_730._4_4_ != 0 && (local_738 == (char *******)0x0)))) ||
            (((int)uStack_728 != 0 && (local_720 == 0)))) ||
           (iVar12 = (int)uStack_728 + uStack_730._4_4_,
           0x100000 - (int)uStack_728 < uStack_730._4_4_)) {
          iVar12 = -1;
        }
        local_790 = (code *)DAT_180bb8ac8;
        if ((DAT_180bb8ac8 != (undefined *)0x0) && (-1 < iVar12)) {
          (*local_7a0)(param_6,local_758,param_7,local_760);
          FUN_18027c3e0(&local_738,local_760);
          ppcVar5 = uStack_730;
          iVar6 = (int)uStack_728;
          iVar13 = uStack_730._4_4_;
          if (((((local_710 != '\0') &&
                (((-1 < (longlong)uStack_730 && (-1 < (int)uStack_728)) && (-1 < (int)uStack_730))))
               && (((-1 < local_718 && (uStack_730._4_4_ <= (int)uStack_730)) &&
                   ((int)uStack_728 <= local_718)))) &&
              (((uStack_730._4_4_ == 0 || (local_738 != (char *******)0x0)) &&
               (((int)uStack_728 == 0 || (local_720 != 0)))))) &&
             ((uStack_730._4_4_ <= 0x100000 - (int)uStack_728 &&
              (iVar12 <= (int)uStack_728 + uStack_730._4_4_)))) {
            if ((((longlong)uStack_730 < 0) ||
                ((((((int)uStack_728 < 0 || ((int)uStack_730 < 0)) || (local_718 < 0)) ||
                  (((int)uStack_730 < uStack_730._4_4_ || (local_718 < (int)uStack_728)))) ||
                 ((uStack_730._4_4_ != 0 && (local_738 == (char *******)0x0)))))) ||
               ((((int)uStack_728 != 0 && (local_720 == 0)) ||
                (0x100000 - (int)uStack_728 < uStack_730._4_4_)))) {
              iVar14 = -1;
            }
            else {
              iVar14 = (int)uStack_728 + uStack_730._4_4_;
            }
            if (iVar14 - iVar12 < 0x401) {
              local_780 = (code *)CONCAT44(local_780._4_4_,-uStack_730._4_4_);
              uVar29 = 0x3f800000;
              iVar14 = -uStack_730._4_4_;
              goto LAB_1803c5676;
            }
          }
        }
        local_788 = 0;
        goto LAB_1803c581e;
      }
    }
LAB_1803c5435:
    pbVar1 = pbVar22 + 0x13;
    pbVar22 = pbVar22 + 0x14;
  } while (pbVar1 != local_7a8 + 0x3c);
LAB_1803c537c:
  local_828 = &local_7a0;
  ppcStack_820 = &param_6;
  ppcStack_818 = &local_758;
  ppcStack_810 = &param_7;
  local_808 = &local_760;
  ppcStack_800 = (char **)local_787;
  local_848 = (char *******)local_787;
  ppcStack_840 = &local_700;
  local_838 = &local_7a8;
  FUN_1803c9150(&local_7a8,&local_7a8,&local_848,&local_828);
  iVar12 = local_858[0];
LAB_1803c588b:
  if (local_788 == 0) {
    *(undefined8 *)(param_1 + 0x1030) = 0;
  }
  else {
    if (local_768[0] == 0) {
LAB_1803c58a4:
      if (local_7a8 != local_7a8 + 0x3c) {
        pbVar22 = local_7a8 + 1;
        do {
          if (pbVar22[-1] != 0) {
            if (pbVar22[6] != 0) goto LAB_1803c5915;
            bVar8 = *pbVar22;
            local_780 = (code *)0x908060504030200;
            if (10 < bVar8) {
              if (0x12 < bVar8) goto LAB_1803c58e7;
              bVar8 = local_787[(ulonglong)(bVar8 - 0xb) + 7];
            }
            if ((bVar8 == 6) && (pbVar22[0xe] != 0)) goto LAB_1803c5915;
          }
LAB_1803c58e7:
          pbVar1 = pbVar22 + 0x13;
          pbVar22 = pbVar22 + 0x14;
        } while (pbVar1 != local_7a8 + 0x3c);
      }
      if ((*(char *)(lVar20 + 0x12e) != '\0') && (param_1[0xdc1] == (code)0x0)) goto LAB_1803c5915;
    }
    *(undefined8 *)(param_1 + 0x1030) = *(undefined8 *)(lVar20 + 0x150);
  }
LAB_1803c5915:
  UVar16 = GetTickCount64();
  if (DAT_180c71cb0 <= UVar16) {
    DAT_180c71cb0 = UVar16 + 5000;
    LOCK();
    UNLOCK();
    FUN_18063ab10(local_698,0,0x600);
    local_860 = (uint)*(byte *)(lVar20 + 8);
    local_868 = (uint)*(byte *)(lVar20 + 1);
    local_870 = *(undefined4 *)(lVar20 + 4);
    local_878 = (uint)local_788;
    local_880 = local_748[0];
    local_888 = local_768[0];
    local_890 = local_774;
    local_8a0 = (char *)CONCAT44(local_8a0._4_4_,(int)local_798);
    local_8a8 = (undefined **)CONCAT44(local_8a8._4_4_,*(undefined4 *)(lVar20 + 0x148));
    local_898 = iVar12;
    FUN_18015ad60(local_698,0x600,0xffffffffffffffff,
                  "definition=%d handle=0x%x weapon=0x%x passes=%d modified=%d failed=%d trusted=%d appearance_rgba=0x%x material=%d both=%d"
                 );
    local_8a8 = &PTR_180700558;
    if (local_698[0] != '\0') {
      local_8a8 = (undefined **)&DAT_1806bcfc0;
    }
    local_8a0 = local_698;
    FUN_1800f6900(0);
  }
  plVar17 = local_850;
  if ((local_787[0] == '\0') && (param_1[0xdc1] != (code)0x0)) {
    for (pbVar22 = local_7a8; (pbVar22 != local_7a8 + 0x3c && (*pbVar22 == 0));
        pbVar22 = pbVar22 + 0x14) {
    }
  }
LAB_1803c5a35:
  if (plVar17 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar17 + 1;
    lVar20 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar20 == 1) {
      (**(code **)*plVar17)(plVar17);
      LOCK();
      piVar3 = (int *)((longlong)plVar17 + 0xc);
      iVar12 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*plVar17 + 8))(plVar17);
      }
    }
  }
}



