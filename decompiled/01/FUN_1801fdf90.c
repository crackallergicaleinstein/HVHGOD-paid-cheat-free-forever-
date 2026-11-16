// FUN_1801fdf90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801fdf90 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801fdf90(void)

{
  short sVar1;
  longlong *plVar2;
  size_t sVar3;
  bool bVar4;
  ushort uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  ULONGLONG UVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong *plVar20;
  uint uVar21;
  int *_Buf2;
  byte bVar22;
  ulonglong uVar23;
  undefined *puVar24;
  undefined *puVar25;
  int *_Buf2_00;
  longlong lVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  uint uVar29;
  int *piVar30;
  int iVar31;
  undefined *puVar32;
  char *pcVar33;
  bool bVar34;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  char cVar36;
  undefined8 uVar37;
  undefined1 auVar35 [64];
  undefined1 auVar38 [16];
  undefined1 auVar39 [64];
  undefined1 auVar40 [16];
  undefined1 auVar41 [64];
  undefined1 auVar42 [16];
  undefined1 auVar43 [64];
  undefined1 auVar44 [16];
  undefined1 auVar45 [64];
  undefined1 auVar46 [16];
  undefined1 auVar47 [64];
  undefined1 auStack_888 [32];
  undefined **local_868;
  undefined8 local_860;
  int *local_858;
  uint local_850;
  uint local_848;
  undefined4 local_838;
  uint local_834;
  ushort local_830 [2];
  uint local_82c;
  undefined *local_828;
  uint local_820;
  uint local_81c;
  undefined4 local_818;
  undefined *local_810;
  longlong *local_808;
  undefined8 local_800;
  longlong *local_7f8;
  undefined *local_7f0;
  undefined *local_7e8;
  undefined4 local_7e0;
  int local_7dc;
  int local_7d8;
  char *local_7d0;
  uint local_7c8;
  int local_7c4;
  int local_7c0;
  undefined *local_7b8;
  int local_7b0;
  undefined *local_7a8;
  undefined1 *local_798;
  longlong local_790;
  char *local_788;
  undefined8 local_780;
  undefined8 local_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 local_758;
  longlong local_750;
  char *pcStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined1 local_730 [40];
  undefined1 local_708 [16];
  undefined1 local_6f8 [16];
  undefined1 local_6e8 [16];
  undefined8 local_6d8;
  longlong lStack_6d0;
  undefined8 uStack_6c8;
  longlong lStack_6c0;
  undefined8 local_6b8;
  undefined8 uStack_6b0;
  ulonglong uStack_6a8;
  undefined8 uStack_6a0;
  char local_698 [24];
  undefined1 local_680 [216];
  char local_5a8;
  ulonglong local_98;
  
  local_98 = DAT_1808d5f00 ^ (ulonglong)auStack_888;
  local_834 = 0;
  local_800 = (int *)((ulonglong)local_800 & 0xffffffff00000000);
  if (DAT_180ccaa00 != 0) {
    plVar9 = (longlong *)FUN_18017bf40(&local_7f0);
    if ((*plVar9 == DAT_180ccaa08) || (DAT_180ccaa08 <= *plVar9)) {
      cVar6 = FUN_180223d40();
      if (cVar6 == '\0') {
        plVar9 = (longlong *)FUN_18017bf40(&local_7f0);
        DAT_180ccaa08 = *plVar9 + 500000000;
      }
      else {
        DAT_180ccaa00 = 0;
      }
    }
  }
  AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  local_750 = _DAT_180bb8890;
  pcStack_748 = pcRam0000000180bb8898;
  uStack_740 = uRam0000000180bb88a0;
  uStack_738 = uRam0000000180bb88a8;
  uVar14 = _DAT_180bb88b0;
  uVar37 = uRam0000000180bb88b8;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  cVar36 = (char)uVar37;
  local_7e0 = (undefined4)uVar14;
  cVar6 = FUN_180221ad0();
  if (cVar6 == '\0') {
  }
  local_6d8 = 0;
  lStack_6d0 = 0;
  uStack_6c8 = 0;
  lStack_6c0 = 0;
  local_6b8 = 0;
  uStack_6b0 = 0;
  uStack_6a8 = 0;
  uStack_6a0 = 0;
  FUN_180221e30();
  pcVar33 = pcStack_748;
  lVar12 = local_750;
  if (((cVar36 == '\0') || (local_7d0 = pcStack_748, pcStack_748 == (char *)0x0)) ||
     (local_750 == 0)) {
    if (DAT_180cca8e8 != (char *)0x0) {
      FUN_180204db0(&DAT_180cca8f0);
      FUN_180204cf0(&DAT_180cca930);
      FUN_180204c30(&DAT_180cca970);
      FUN_180204c30(&DAT_180cca9b0);
      _DAT_180cca8e0 = 0;
      DAT_180cca9f0 = 0;
      _DAT_180cca9f8 = (undefined *)0x0;
      DAT_180cca8e8 = (char *)0x0;
      FUN_18063ab10(local_698,0,0x600);
      FUN_18015ad60(local_698,0x600,0xffffffffffffffff,"feature=guns");
      local_868 = &PTR_180700558;
      if (local_698[0] != '\0') {
        local_868 = (undefined **)&DAT_1806bcfc0;
      }
      local_860 = local_698;
      FUN_1800f6900(0);
    }
    goto LAB_1802004a4;
  }
  if (DAT_180bb88c9 != '\0') goto LAB_1802004a4;
  iVar15 = DAT_180c63920;
  if (DAT_180c63920 == 0) {
    UVar10 = GetTickCount64();
    if (UVar10 < DAT_180c63918) {
      iVar15 = 0;
    }
    else {
      local_7f0 = &DAT_1808e9d90;
      iVar15 = FUN_1805f68d0(&DAT_1808e9d90);
      if (iVar15 != 0) goto LAB_180200507;
      if (DAT_1808e9ddc == 0x7fffffff) {
        DAT_1808e9ddc = 0x7ffffffe;
        goto LAB_18020051c;
      }
      if ((DAT_180c63920 == 0) && (DAT_180c63918 <= UVar10)) {
        DAT_180c63920 = FUN_1804174b0("C_BasePlayerPawn",0x51b23a93);
        if (DAT_180c63920 == 0) {
          DAT_180c63918 = UVar10 + 1000;
        }
        else {
          DAT_180c63918 = 0xffffffffffffffff;
        }
      }
      iVar15 = DAT_180c63920;
      FUN_1805f68fc(&DAT_1808e9d90);
    }
  }
  lVar11 = FUN_18017ea70();
  *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + 1;
  if (pcVar33 + iVar15 == (char *)0x0) {
    bVar34 = false;
    plVar9 = local_808;
  }
  else {
    local_7f8 = (longlong *)0x0;
    cVar6 = FUN_1804514f0(&local_7f8,pcVar33 + iVar15,8);
    if (cVar6 == '\0') {
      bVar34 = false;
      plVar9 = local_808;
    }
    else {
      bVar34 = true;
      plVar9 = local_7f8;
    }
  }
  lVar11 = FUN_18017ea70();
  if (*(int *)(lVar11 + 4) != 0) {
    *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + -1;
  }
  if ((!bVar34) || (plVar9 == (longlong *)0x0)) goto LAB_1802004a4;
  iVar15 = DAT_180c6390c;
  if (DAT_180c6390c == 0) {
    UVar10 = GetTickCount64();
    if (UVar10 < DAT_180c63910) {
      iVar15 = 0;
    }
    else {
      local_7f0 = &DAT_1808e9d40;
      iVar15 = FUN_1805f68d0(&DAT_1808e9d40);
      if (iVar15 != 0) goto LAB_180200507;
      if (DAT_1808e9d8c == 0x7fffffff) {
        DAT_1808e9d8c = 0x7ffffffe;
        goto LAB_18020051c;
      }
      if ((DAT_180c6390c == 0) && (DAT_180c63910 <= UVar10)) {
        DAT_180c6390c = FUN_1804174b0("CPlayer_WeaponServices",0x4c8a13a6);
        if (DAT_180c6390c == 0) {
          DAT_180c63910 = UVar10 + 1000;
        }
        else {
          DAT_180c63910 = 0xffffffffffffffff;
        }
      }
      iVar15 = DAT_180c6390c;
      FUN_1805f68fc(&DAT_1808e9d40);
    }
  }
  lVar11 = FUN_18017ea70();
  *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + 1;
  puVar32 = (undefined *)((longlong)iVar15 + (longlong)plVar9);
  if (puVar32 == (undefined *)0x0) {
    bVar34 = false;
    uVar17 = local_82c;
  }
  else {
    local_818 = 0;
    cVar6 = FUN_1804514f0(&local_818,puVar32,4);
    if (cVar6 == '\0') {
      bVar34 = false;
      uVar17 = local_82c;
    }
    else {
      bVar34 = true;
      uVar17 = local_818;
    }
  }
  lVar11 = FUN_18017ea70();
  if (*(int *)(lVar11 + 4) != 0) {
    *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + -1;
  }
  uVar29 = 0;
  if (bVar34) {
    uVar29 = uVar17;
  }
  local_82c = uVar29;
  lVar11 = FUN_18017ea70();
  *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + 1;
  if (puVar32 + 8 == (undefined *)0x0) {
    bVar34 = false;
    plVar20 = local_808;
  }
  else {
    local_7f8 = (longlong *)0x0;
    cVar6 = FUN_1804514f0(&local_7f8,puVar32 + 8,8);
    if (cVar6 == '\0') {
      bVar34 = false;
      plVar20 = local_808;
    }
    else {
      bVar34 = true;
      plVar20 = local_7f8;
    }
  }
  local_7f8 = plVar20;
  lVar11 = FUN_18017ea70();
  if (*(int *)(lVar11 + 4) != 0) {
    *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + -1;
  }
  if (((!bVar34) || (plVar20 == (longlong *)0x0)) || (0x3f < uVar29 - 1)) goto LAB_1802004a4;
  iVar15 = DAT_180c63908;
  if (DAT_180c63908 == 0) {
    UVar10 = GetTickCount64();
    if (UVar10 < DAT_180c63900) {
      iVar15 = 0;
    }
    else {
      local_7f0 = &DAT_1808e9cf0;
      iVar15 = FUN_1805f68d0(&DAT_1808e9cf0);
      if (iVar15 != 0) goto LAB_180200507;
      if (DAT_1808e9d3c == 0x7fffffff) {
        DAT_1808e9d3c = 0x7ffffffe;
        goto LAB_18020051c;
      }
      if ((DAT_180c63908 == 0) && (DAT_180c63900 <= UVar10)) {
        DAT_180c63908 = FUN_1804174b0("CBasePlayerController",0xb22f805e);
        if (DAT_180c63908 == 0) {
          DAT_180c63900 = UVar10 + 1000;
        }
        else {
          DAT_180c63900 = 0xffffffffffffffff;
        }
      }
      iVar15 = DAT_180c63908;
      FUN_1805f68fc(&DAT_1808e9cf0);
    }
  }
  lVar11 = FUN_18017ea70();
  *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + 1;
  if (iVar15 + lVar12 != 0) {
    local_808 = (longlong *)0x0;
    FUN_1804514f0(&local_808,iVar15 + lVar12,8);
  }
  lVar12 = FUN_18017ea70();
  if (*(int *)(lVar12 + 4) != 0) {
    *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
  }
  iVar15 = DAT_180c638f4;
  if (DAT_180c638f4 == 0) {
    UVar10 = GetTickCount64();
    if (UVar10 < DAT_180c638f8) {
      iVar15 = 0;
    }
    else {
      local_7f0 = &DAT_1808e9ca0;
      iVar15 = FUN_1805f68d0(&DAT_1808e9ca0);
      if (iVar15 != 0) {
LAB_180200507:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808e9cec == 0x7fffffff) {
        DAT_1808e9cec = 0x7ffffffe;
LAB_18020051c:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if ((DAT_180c638f4 == 0) && (DAT_180c638f8 <= UVar10)) {
        DAT_180c638f4 = FUN_1804174b0("CPlayer_WeaponServices",0x940131c5);
        if (DAT_180c638f4 == 0) {
          DAT_180c638f8 = UVar10 + 1000;
        }
        else {
          DAT_180c638f8 = 0xffffffffffffffff;
        }
      }
      iVar15 = DAT_180c638f4;
      FUN_1805f68fc(&DAT_1808e9ca0);
    }
  }
  lVar12 = FUN_18017ea70();
  *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
  if ((undefined *)((longlong)iVar15 + (longlong)plVar9) == (undefined *)0x0) {
    bVar34 = false;
    uVar17 = local_82c;
  }
  else {
    local_818 = 0;
    cVar6 = FUN_1804514f0(&local_818,(undefined *)((longlong)iVar15 + (longlong)plVar9),4);
    if (cVar6 == '\0') {
      bVar34 = false;
      uVar17 = local_82c;
    }
    else {
      bVar34 = true;
      uVar17 = local_818;
    }
  }
  lVar12 = FUN_18017ea70();
  iVar15 = *(int *)(lVar12 + 4);
  if (iVar15 != 0) {
    iVar15 = iVar15 + -1;
    *(int *)(lVar12 + 4) = iVar15;
  }
  uVar29 = 0;
  if (bVar34) {
    uVar29 = uVar17;
  }
  local_820 = uVar29;
  local_818 = uVar29;
  puVar32 = (undefined *)FUN_1803d4150(iVar15,uVar29);
  pcVar33 = local_7d0;
  local_7f0 = puVar32;
  if (DAT_180cca8e8 != local_7d0) {
    FUN_180204db0(&DAT_180cca8f0);
    FUN_180204cf0(&DAT_180cca930);
    FUN_180204c30(&DAT_180cca970);
    FUN_180204c30(&DAT_180cca9b0);
    _DAT_180cca8e0 = 0;
    DAT_180cca9f0 = 0;
    _DAT_180cca9f8 = (undefined *)0x0;
    DAT_180cca8e8 = pcVar33;
  }
  local_7d8 = 0;
  if (0 < (int)local_82c) {
    auVar41 = ZEXT1664(_DAT_18086dba0);
    auVar45 = ZEXT864(0);
    auVar47 = ZEXT464(0xbf800000);
    auVar43 = ZEXT464(0x3727c5ac);
    auVar39 = ZEXT464(local_82c);
    do {
      puVar32 = (undefined *)((longlong)local_7f8 + (longlong)local_7d8 * 4);
      lVar12 = FUN_18017ea70();
      *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
      if (puVar32 == (undefined *)0x0) {
        bVar34 = false;
      }
      else {
        local_81c = 0;
        cVar6 = FUN_1804514f0(&local_81c,puVar32,4);
        if (cVar6 == '\0') {
          bVar34 = false;
        }
        else {
          local_7c8 = local_81c;
          bVar34 = true;
        }
      }
      uVar17 = local_7c8;
      lVar12 = FUN_18017ea70();
      if (*(int *)(lVar12 + 4) != 0) {
        *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
      }
      local_838 = 0;
      if (bVar34) {
        local_838 = uVar17;
      }
      puVar32 = (undefined *)FUN_1803d4150();
      local_7e8 = puVar32;
      if (puVar32 != (undefined *)0x0) {
        iVar15 = DAT_180c638f0;
        if (DAT_180c638f0 == 0) {
          UVar10 = GetTickCount64();
          if (UVar10 < DAT_180c638e8) {
            iVar15 = 0;
          }
          else {
            local_808 = (longlong *)&DAT_1808e9c50;
            iVar15 = FUN_1805f68d0(&DAT_1808e9c50);
            if (iVar15 != 0) goto LAB_18020061c;
            if (DAT_1808e9c9c == 0x7fffffff) {
              DAT_1808e9c9c = 0x7ffffffe;
              goto LAB_180200611;
            }
            if ((DAT_180c638f0 == 0) && (DAT_180c638e8 <= UVar10)) {
              DAT_180c638f0 = FUN_1804174b0("C_EconEntity",0x537b0586);
              DAT_180c638e8 = 0xffffffffffffffff;
              if (DAT_180c638f0 == 0) {
                DAT_180c638e8 = UVar10 + 1000;
              }
            }
            iVar15 = DAT_180c638f0;
            FUN_1805f68fc(&DAT_1808e9c50);
          }
        }
        iVar7 = DAT_180c638dc;
        if (DAT_180c638dc == 0) {
          UVar10 = GetTickCount64();
          if (UVar10 < DAT_180c638e0) {
            iVar7 = 0;
          }
          else {
            local_808 = (longlong *)&DAT_1808e9c00;
            iVar7 = FUN_1805f68d0(&DAT_1808e9c00);
            if (iVar7 != 0) goto LAB_18020061c;
            if (DAT_1808e9c4c == 0x7fffffff) {
              DAT_1808e9c4c = 0x7ffffffe;
              goto LAB_180200611;
            }
            if ((DAT_180c638dc == 0) && (DAT_180c638e0 <= UVar10)) {
              DAT_180c638dc = FUN_1804174b0("C_AttributeContainer",0xdce71866);
              DAT_180c638e0 = 0xffffffffffffffff;
              if (DAT_180c638dc == 0) {
                DAT_180c638e0 = UVar10 + 1000;
              }
            }
            iVar7 = DAT_180c638dc;
            FUN_1805f68fc(&DAT_1808e9c00);
          }
        }
        puVar25 = puVar32 + (longlong)iVar7 + (longlong)iVar15;
        iVar15 = DAT_180c638d8;
        local_810 = puVar25;
        if (DAT_180c638d8 == 0) {
          UVar10 = GetTickCount64();
          if (UVar10 < DAT_180c638d0) {
            iVar15 = 0;
          }
          else {
            local_808 = (longlong *)&DAT_1808e9bb0;
            iVar15 = FUN_1805f68d0(&DAT_1808e9bb0);
            if (iVar15 != 0) goto LAB_18020061c;
            if (DAT_1808e9bfc == 0x7fffffff) {
              DAT_1808e9bfc = 0x7ffffffe;
              goto LAB_180200611;
            }
            if ((DAT_180c638d8 == 0) && (DAT_180c638d0 <= UVar10)) {
              DAT_180c638d8 = FUN_1804174b0("C_EconItemView",0xa2ccb41a);
              DAT_180c638d0 = 0xffffffffffffffff;
              if (DAT_180c638d8 == 0) {
                DAT_180c638d0 = UVar10 + 1000;
              }
            }
            iVar15 = DAT_180c638d8;
            FUN_1805f68fc(&DAT_1808e9bb0);
          }
        }
        lVar12 = FUN_18017ea70();
        *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
        if (puVar25 + iVar15 == (undefined *)0x0) {
          bVar34 = false;
        }
        else {
          local_81c = local_81c & 0xffff0000;
          cVar6 = FUN_1804514f0(&local_81c,puVar25 + iVar15,2);
          if (cVar6 == '\0') {
            bVar34 = false;
          }
          else {
            local_830[0] = (ushort)local_81c;
            bVar34 = true;
          }
        }
        uVar5 = local_830[0];
        lVar12 = FUN_18017ea70();
        if (*(int *)(lVar12 + 4) != 0) {
          *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
        }
        if (bVar34) {
          uVar19 = (ulonglong)uVar5;
          local_81c = (uint)uVar5;
        }
        else {
          uVar19 = 0;
          local_81c = 0;
        }
        uVar23 = ((uVar19 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ uVar19 >> 8) *
                 0x100000001b3;
        uVar18 = DAT_180cc9cb8 & uVar23;
        lVar12 = *(longlong *)(DAT_180cc9ca0 + 8 + uVar18 * 0x10);
        if (lVar12 == DAT_180cc9c90) {
LAB_1801fe972:
          lVar12 = 0;
        }
        else {
          sVar1 = *(short *)(lVar12 + 0x10);
          while ((short)uVar19 != sVar1) {
            if (lVar12 == *(longlong *)(DAT_180cc9ca0 + uVar18 * 0x10)) goto LAB_1801fe972;
            lVar12 = *(longlong *)(lVar12 + 8);
            sVar1 = *(short *)(lVar12 + 0x10);
          }
        }
        lVar11 = DAT_180cc9c90;
        if (lVar12 != 0) {
          lVar11 = lVar12;
        }
        if (lVar11 != DAT_180cc9c90) {
          lVar12 = *(longlong *)(lVar11 + 0x18) * 0xb8 + DAT_180cc9bf8;
          if (lVar12 != 0) {
            if (*(char *)(lVar12 + 0xb0) == '\0') {
              plVar9 = (longlong *)FUN_180204f10(&DAT_180cca970,local_708,&local_838);
              bVar22 = *(byte *)(*plVar9 + 0x14);
              if (bVar22 < 2) {
                cVar6 = bVar22 + 1;
                *(char *)(*plVar9 + 0x14) = cVar6;
                if (cVar6 == '\x01') {
                  FUN_18063ab10(local_698,0,0x600);
                  local_860 = local_7d0;
                  local_868 = (undefined **)CONCAT44(local_868._4_4_,local_838);
                  FUN_18015ad60(local_698,0x600,0xffffffffffffffff,
                                "feature=guns handle=0x%X pawn=0x%p");
                  local_868 = &PTR_180700558;
                  if (local_698[0] != '\0') {
                    local_868 = (undefined **)&DAT_1806bcfc0;
                  }
                  local_860 = local_698;
                  FUN_1800f6900(0);
                }
              }
              else {
                uVar27 = (((((ulonglong)(byte)local_838 ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                           (ulonglong)local_838._1_1_) * 0x100000001b3 ^ (ulonglong)local_838._2_1_)
                          * 0x100000001b3 ^ (ulonglong)local_838._3_1_) * 0x100000001b3;
                uVar18 = DAT_180cca920 & uVar27;
                plVar9 = *(longlong **)(DAT_180cca908 + 8 + uVar18 * 0x10);
                if (plVar9 == DAT_180cca8f8) {
LAB_1801feaf1:
                  plVar9 = (longlong *)0x0;
                }
                else {
                  uVar17 = *(uint *)(plVar9 + 2);
                  while (local_838 != uVar17) {
                    if (plVar9 == *(longlong **)(DAT_180cca908 + uVar18 * 0x10)) goto LAB_1801feaf1;
                    plVar9 = (longlong *)plVar9[1];
                    uVar17 = *(uint *)(plVar9 + 2);
                  }
                }
                plVar20 = DAT_180cca8f8;
                if (plVar9 != (longlong *)0x0) {
                  plVar20 = plVar9;
                }
                uVar23 = uStack_6a8 & uVar23;
                lVar12 = *(longlong *)(lStack_6c0 + 8 + uVar23 * 0x10);
                if (lVar12 == lStack_6d0) {
LAB_1801feb44:
                  lVar12 = 0;
                }
                else {
                  sVar1 = *(short *)(lVar12 + 0x10);
                  while ((short)uVar19 != sVar1) {
                    if (lVar12 == *(longlong *)(lStack_6c0 + uVar23 * 0x10)) goto LAB_1801feb44;
                    lVar12 = *(longlong *)(lVar12 + 8);
                    sVar1 = *(short *)(lVar12 + 0x10);
                  }
                }
                lVar11 = lStack_6d0;
                if (lVar12 != 0) {
                  lVar11 = lVar12;
                }
                local_808 = plVar20;
                if (lVar11 == lStack_6d0) {
                  if (plVar20 == DAT_180cca8f8) {
                    uVar27 = DAT_180cca960 & uVar27;
                    lVar11 = uVar27 * 2;
                    plVar9 = *(longlong **)(DAT_180cca948 + 8 + uVar27 * 0x10);
                    if (plVar9 == DAT_180cca938) goto LAB_1801ff915;
                    uVar17 = *(uint *)(plVar9 + 2);
                    while (local_838 != uVar17) {
                      if (plVar9 == *(longlong **)(DAT_180cca948 + uVar27 * 0x10))
                      goto LAB_1801ff915;
                      plVar9 = (longlong *)plVar9[1];
                      uVar17 = *(uint *)(plVar9 + 2);
                    }
                  }
                  local_860 = local_7d0;
                  local_868 = (undefined **)CONCAT44(local_868._4_4_,uVar29);
                  cVar6 = FUN_180201fd0(lVar11,puVar32,puVar25);
                  lVar12 = DAT_180cca908;
                  plVar9 = DAT_180cca8f8;
                  if (cVar6 != '\0') {
                    if (plVar20 != DAT_180cca8f8) {
                      uVar18 = (((((ulonglong)*(byte *)(plVar20 + 2) ^ 0xcbf29ce484222325) *
                                  0x100000001b3 ^ (ulonglong)*(byte *)((longlong)plVar20 + 0x11)) *
                                 0x100000001b3 ^ (ulonglong)*(byte *)((longlong)plVar20 + 0x12)) *
                                0x100000001b3 ^ (ulonglong)*(byte *)((longlong)plVar20 + 0x13)) *
                               0x100000001b3 & DAT_180cca920;
                      plVar2 = *(longlong **)(DAT_180cca908 + uVar18 * 0x10);
                      if (*(longlong **)(DAT_180cca908 + 8 + uVar18 * 0x10) == plVar20) {
                        if (plVar2 == plVar20) {
                          *(longlong **)(DAT_180cca908 + uVar18 * 0x10) = DAT_180cca8f8;
                          *(longlong **)(lVar12 + 8 + uVar18 * 0x10) = plVar9;
                        }
                        else {
                          *(longlong *)(DAT_180cca908 + 8 + uVar18 * 0x10) = plVar20[1];
                        }
                      }
                      else if (plVar2 == plVar20) {
                        *(longlong *)(DAT_180cca908 + uVar18 * 0x10) = *plVar20;
                      }
                      lVar12 = *plVar20;
                      _DAT_180cca900 = _DAT_180cca900 + -1;
                      *(longlong *)plVar20[1] = lVar12;
                      *(longlong *)(lVar12 + 8) = plVar20[1];
                      FUN_18015c010(plVar20 + 6);
                      FUN_1804547d0(plVar20,0x108);
                    }
                    lVar12 = DAT_180cca948;
                    plVar20 = DAT_180cca938;
                    uVar27 = (ulonglong)local_838._1_1_;
                    uVar28 = (ulonglong)local_838._2_1_;
                    uVar23 = (ulonglong)local_838._3_1_;
                    uVar18 = (((((ulonglong)(local_838 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3
                               ^ uVar27) * 0x100000001b3 ^ uVar28) * 0x100000001b3 ^ uVar23) *
                             0x100000001b3 & DAT_180cca960;
                    plVar9 = *(longlong **)(DAT_180cca948 + 8 + uVar18 * 0x10);
                    if (plVar9 == DAT_180cca938) {
LAB_1801fece6:
                      plVar9 = (longlong *)0x0;
                    }
                    else {
                      uVar17 = *(uint *)(plVar9 + 2);
                      while (local_838 != uVar17) {
                        if (plVar9 == *(longlong **)(DAT_180cca948 + uVar18 * 0x10))
                        goto LAB_1801fece6;
                        plVar9 = (longlong *)plVar9[1];
                        uVar17 = *(uint *)(plVar9 + 2);
                      }
                    }
                    if (plVar9 != (longlong *)0x0) {
                      plVar2 = *(longlong **)(DAT_180cca948 + uVar18 * 0x10);
                      if (*(longlong **)(DAT_180cca948 + 8 + uVar18 * 0x10) == plVar9) {
                        if (plVar2 == plVar9) {
                          *(longlong **)(DAT_180cca948 + uVar18 * 0x10) = DAT_180cca938;
                          *(longlong **)(lVar12 + 8 + uVar18 * 0x10) = plVar20;
                        }
                        else {
                          *(longlong *)(DAT_180cca948 + 8 + uVar18 * 0x10) = plVar9[1];
                        }
                      }
                      else if (plVar2 == plVar9) {
                        *(longlong *)(DAT_180cca948 + uVar18 * 0x10) = *plVar9;
                      }
                      lVar12 = *plVar9;
                      _DAT_180cca940 = _DAT_180cca940 + -1;
                      *(longlong *)plVar9[1] = lVar12;
                      *(longlong *)(lVar12 + 8) = plVar9[1];
                      FUN_1804547d0(plVar9,400);
                      uVar23 = (ulonglong)local_838._3_1_;
                      uVar28 = (ulonglong)local_838._2_1_;
                      uVar27 = (ulonglong)local_838._1_1_;
                    }
                    lVar12 = DAT_180cca9c8;
                    plVar20 = DAT_180cca9b8;
                    uVar18 = (((((ulonglong)(local_838 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3
                               ^ uVar27) * 0x100000001b3 ^ uVar28) * 0x100000001b3 ^ uVar23) *
                             0x100000001b3 & _DAT_180cca9e0;
                    plVar9 = *(longlong **)(DAT_180cca9c8 + 8 + uVar18 * 0x10);
                    if (plVar9 == DAT_180cca9b8) {
LAB_1801fede4:
                      plVar9 = (longlong *)0x0;
                    }
                    else {
                      uVar17 = *(uint *)(plVar9 + 2);
                      while (local_838 != uVar17) {
                        if (plVar9 == *(longlong **)(DAT_180cca9c8 + uVar18 * 0x10))
                        goto LAB_1801fede4;
                        plVar9 = (longlong *)plVar9[1];
                        uVar17 = *(uint *)(plVar9 + 2);
                      }
                    }
                    if (plVar9 != (longlong *)0x0) {
                      plVar2 = *(longlong **)(DAT_180cca9c8 + uVar18 * 0x10);
                      if (*(longlong **)(DAT_180cca9c8 + 8 + uVar18 * 0x10) == plVar9) {
                        if (plVar2 == plVar9) {
                          *(longlong **)(DAT_180cca9c8 + uVar18 * 0x10) = DAT_180cca9b8;
                          *(longlong **)(lVar12 + 8 + uVar18 * 0x10) = plVar20;
                        }
                        else {
                          *(longlong *)(DAT_180cca9c8 + 8 + uVar18 * 0x10) = plVar9[1];
                        }
                      }
                      else if (plVar2 == plVar9) {
                        *(longlong *)(DAT_180cca9c8 + uVar18 * 0x10) = *plVar9;
                      }
                      lVar12 = *plVar9;
                      _DAT_180cca9c0 = _DAT_180cca9c0 + -1;
                      *(longlong *)plVar9[1] = lVar12;
                      *(longlong *)(lVar12 + 8) = plVar9[1];
                      FUN_1804547d0(plVar9,0x18);
                    }
                    uVar17 = local_838;
                    FUN_18063ab10(local_698,0,0x600);
                    local_858 = (int *)CONCAT44(local_858._4_4_,(uint)(uVar17 == uVar29));
                    local_860 = (char *)CONCAT44(local_860._4_4_,(int)uVar19);
                    local_868 = (undefined **)CONCAT44(local_868._4_4_,uVar17);
                    FUN_18015ad60(local_698,0x600,0xffffffffffffffff,
                                  "feature=guns handle=0x%X def_index=%u active=%d");
                    local_868 = &PTR_180700558;
                    if (local_698[0] != '\0') {
                      local_868 = (undefined **)&DAT_1806bcfc0;
                    }
                    local_860 = local_698;
                    FUN_1800f6900(0);
                    goto LAB_1801ff91e;
                  }
                }
                else {
                  local_800 = (int *)(lVar11 + 0x18);
                  iVar15 = DAT_180c638c4;
                  if (DAT_180c638c4 == 0) {
                    UVar10 = GetTickCount64();
                    if (UVar10 < DAT_180c638c8) {
                      iVar15 = 0;
                    }
                    else {
                      local_828 = &DAT_1808e9b60;
                      iVar15 = FUN_1805f68d0(&DAT_1808e9b60);
                      if (iVar15 != 0) goto LAB_18020061c;
                      if (DAT_1808e9bac == 0x7fffffff) {
                        DAT_1808e9bac = 0x7ffffffe;
                        goto LAB_180200611;
                      }
                      if ((DAT_180c638c4 == 0) && (DAT_180c638c8 <= UVar10)) {
                        DAT_180c638c4 = FUN_1804174b0("C_EconEntity",0xa12d48f);
                        DAT_180c638c8 = 0xffffffffffffffff;
                        if (DAT_180c638c4 == 0) {
                          DAT_180c638c8 = UVar10 + 1000;
                        }
                      }
                      iVar15 = DAT_180c638c4;
                      FUN_1805f68fc(&DAT_1808e9b60);
                    }
                  }
                  lVar12 = FUN_18017ea70();
                  *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
                  if (puVar32 + iVar15 == (undefined *)0x0) {
                    bVar34 = false;
                  }
                  else {
                    local_828 = (undefined *)((ulonglong)local_828 & 0xffffffff00000000);
                    cVar6 = FUN_1804514f0(&local_828,puVar32 + iVar15,4);
                    if (cVar6 == '\0') {
                      bVar34 = false;
                    }
                    else {
                      local_7c4 = (uint)local_828;
                      bVar34 = true;
                    }
                  }
                  iVar15 = local_7c4;
                  lVar12 = FUN_18017ea70();
                  if (*(int *)(lVar12 + 4) != 0) {
                    *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
                  }
                  iVar7 = -1;
                  if (bVar34) {
                    iVar7 = iVar15;
                  }
                  iVar15 = DAT_180c638c0;
                  if (DAT_180c638c0 == 0) {
                    UVar10 = GetTickCount64();
                    if (UVar10 < DAT_180c638b8) {
                      iVar15 = 0;
                    }
                    else {
                      local_828 = &DAT_1808e9b10;
                      iVar15 = FUN_1805f68d0(&DAT_1808e9b10);
                      if (iVar15 != 0) goto LAB_18020061c;
                      if (DAT_1808e9b5c == 0x7fffffff) {
                        DAT_1808e9b5c = 0x7ffffffe;
                        goto LAB_180200611;
                      }
                      if ((DAT_180c638c0 == 0) && (DAT_180c638b8 <= UVar10)) {
                        DAT_180c638c0 = FUN_1804174b0("C_EconEntity",0xa1b165b2);
                        DAT_180c638b8 = 0xffffffffffffffff;
                        if (DAT_180c638c0 == 0) {
                          DAT_180c638b8 = UVar10 + 1000;
                        }
                      }
                      iVar15 = DAT_180c638c0;
                      FUN_1805f68fc(&DAT_1808e9b10);
                    }
                  }
                  lVar12 = FUN_18017ea70();
                  *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
                  if (puVar32 + iVar15 == (undefined *)0x0) {
                    bVar34 = false;
                  }
                  else {
                    local_828 = (undefined *)((ulonglong)local_828 & 0xffffffff00000000);
                    cVar6 = FUN_1804514f0(&local_828,puVar32 + iVar15,4);
                    if (cVar6 == '\0') {
                      bVar34 = false;
                    }
                    else {
                      local_7c0 = (uint)local_828;
                      bVar34 = true;
                    }
                  }
                  iVar15 = local_7c0;
                  lVar12 = FUN_18017ea70();
                  if (*(int *)(lVar12 + 4) != 0) {
                    *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
                  }
                  iVar8 = -1;
                  if (bVar34) {
                    iVar8 = iVar15;
                  }
                  iVar15 = DAT_180c638ac;
                  if (DAT_180c638ac == 0) {
                    UVar10 = GetTickCount64();
                    if (UVar10 < DAT_180c638b0) {
                      iVar15 = 0;
                    }
                    else {
                      local_828 = &DAT_1808e9ac0;
                      iVar15 = FUN_1805f68d0(&DAT_1808e9ac0);
                      if (iVar15 != 0) goto LAB_18020061c;
                      if (DAT_1808e9b0c == 0x7fffffff) {
                        DAT_1808e9b0c = 0x7ffffffe;
                        goto LAB_180200611;
                      }
                      if ((DAT_180c638ac == 0) && (DAT_180c638b0 <= UVar10)) {
                        DAT_180c638ac = FUN_1804174b0("C_EconEntity",0x86253266);
                        DAT_180c638b0 = 0xffffffffffffffff;
                        if (DAT_180c638ac == 0) {
                          DAT_180c638b0 = UVar10 + 1000;
                        }
                      }
                      iVar15 = DAT_180c638ac;
                      FUN_1805f68fc(&DAT_1808e9ac0);
                    }
                  }
                  lVar12 = FUN_18017ea70();
                  *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
                  uVar17 = 0;
                  if (puVar32 + iVar15 != (undefined *)0x0) {
                    local_828 = (undefined *)CONCAT44(local_828._4_4_,auVar45._0_4_);
                    cVar6 = FUN_1804514f0(&local_828,puVar32 + iVar15,4);
                    if (cVar6 == '\0') {
                      uVar17 = 0;
                    }
                    else {
                      auVar39 = ZEXT464((uint)local_828);
                      uVar17 = 1;
                    }
                  }
                  lVar12 = FUN_18017ea70();
                  if (*(int *)(lVar12 + 4) != 0) {
                    *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
                  }
                  auVar38 = vpcmpeqd_avx(ZEXT416(uVar17),SUB6416(ZEXT464(0),0));
                  auVar38 = vblendvps_avx(auVar39._0_16_,auVar47._0_16_,auVar38);
                  auVar35 = ZEXT1664(auVar38);
                  iVar15 = DAT_180c638a8;
                  if (DAT_180c638a8 == 0) {
                    UVar10 = GetTickCount64();
                    if (UVar10 < DAT_180c638a0) {
                      iVar15 = 0;
                    }
                    else {
                      local_828 = &DAT_1808e9a70;
                      iVar15 = FUN_1805f68d0(&DAT_1808e9a70);
                      if (iVar15 != 0) goto LAB_18020061c;
                      if (DAT_1808e9abc == 0x7fffffff) {
                        DAT_1808e9abc = 0x7ffffffe;
                        goto LAB_180200611;
                      }
                      if ((DAT_180c638a8 == 0) && (DAT_180c638a0 <= UVar10)) {
                        DAT_180c638a8 = FUN_1804174b0("C_EconEntity",0x67ecc1e7);
                        DAT_180c638a0 = 0xffffffffffffffff;
                        if (DAT_180c638a8 == 0) {
                          DAT_180c638a0 = UVar10 + 1000;
                        }
                      }
                      iVar15 = DAT_180c638a8;
                      FUN_1805f68fc(&DAT_1808e9a70);
                    }
                  }
                  lVar12 = FUN_18017ea70();
                  *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
                  if (puVar32 + iVar15 == (undefined *)0x0) {
                    bVar34 = false;
                  }
                  else {
                    local_828 = (undefined *)((ulonglong)local_828 & 0xffffffff00000000);
                    cVar6 = FUN_1804514f0(&local_828,puVar32 + iVar15,4);
                    if (cVar6 == '\0') {
                      bVar34 = false;
                    }
                    else {
                      local_7b0 = (uint)local_828;
                      bVar34 = true;
                    }
                  }
                  iVar15 = local_7b0;
                  lVar12 = FUN_18017ea70();
                  if (*(int *)(lVar12 + 4) != 0) {
                    *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
                  }
                  iVar31 = -2;
                  if (bVar34) {
                    iVar31 = iVar15;
                  }
                  if (*(char *)(lVar11 + 0x24) == '\0') {
                    iVar15 = -1;
                  }
                  else {
                    iVar15 = *(int *)(lVar11 + 0x28);
                  }
                  uVar19 = (((((ulonglong)(local_838 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                             (ulonglong)local_838._1_1_) * 0x100000001b3 ^
                            (ulonglong)local_838._2_1_) * 0x100000001b3 ^ (ulonglong)local_838._3_1_
                           ) * 0x100000001b3 & _DAT_180cca9e0;
                  plVar9 = *(longlong **)(DAT_180cca9c8 + 8 + uVar19 * 0x10);
                  if (plVar9 == DAT_180cca9b8) {
LAB_1801ff371:
                    plVar9 = (longlong *)0x0;
                  }
                  else {
                    uVar17 = *(uint *)(plVar9 + 2);
                    while (local_838 != uVar17) {
                      if (plVar9 == *(longlong **)(DAT_180cca9c8 + uVar19 * 0x10))
                      goto LAB_1801ff371;
                      plVar9 = (longlong *)plVar9[1];
                      uVar17 = *(uint *)(plVar9 + 2);
                    }
                  }
                  plVar20 = DAT_180cca9b8;
                  if (plVar9 != (longlong *)0x0) {
                    plVar20 = plVar9;
                  }
                  if ((plVar20 == DAT_180cca9b8) || (*(char *)((longlong)plVar20 + 0x14) == '\0')) {
                    bVar34 = false;
                  }
                  else {
                    bVar34 = true;
                  }
                  if ((local_808 == DAT_180cca8f8) ||
                     (cVar6 = FUN_1801d8910(local_808 + 3,local_800), cVar6 == '\0')) {
LAB_1801ff88a:
                    piVar30 = local_800;
                    puVar32 = local_810;
LAB_1801ff88f:
                    uVar17 = local_834;
LAB_1801ff893:
                    bVar34 = false;
                  }
                  else {
                    iVar16 = DAT_180c63894;
                    if (DAT_180c63894 == 0) {
                      UVar10 = GetTickCount64();
                      if (UVar10 < DAT_180c63898) {
                        iVar16 = 0;
                      }
                      else {
                        local_828 = &DAT_1808e9a20;
                        iVar16 = FUN_1805f68d0(&DAT_1808e9a20);
                        if (iVar16 != 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_1805f6d44(5);
                        }
                        if (DAT_1808e9a6c == 0x7fffffff) {
                          DAT_1808e9a6c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
                          FUN_1805f6d44(6);
                        }
                        if ((DAT_180c63894 == 0) && (DAT_180c63898 <= UVar10)) {
                          DAT_180c63894 = FUN_1804174b0("C_EconItemView",0x34b55816);
                          DAT_180c63898 = 0xffffffffffffffff;
                          if (DAT_180c63894 == 0) {
                            DAT_180c63898 = UVar10 + 1000;
                          }
                        }
                        iVar16 = DAT_180c63894;
                        FUN_1805f68fc(&DAT_1808e9a20);
                      }
                    }
                    lVar12 = FUN_18017ea70();
                    *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
                    if (local_810 + iVar16 == (undefined *)0x0) {
                      bVar4 = false;
                    }
                    else {
                      local_828 = (undefined *)0x0;
                      cVar6 = FUN_1804514f0(&local_828,local_810 + iVar16,8);
                      if (cVar6 == '\0') {
                        bVar4 = false;
                      }
                      else {
                        local_7b8 = local_828;
                        bVar4 = true;
                      }
                    }
                    lVar12 = FUN_18017ea70();
                    uVar17 = local_81c;
                    iVar16 = *(int *)(lVar12 + 4);
                    if (iVar16 != 0) {
                      iVar16 = iVar16 + -1;
                      *(int *)(lVar12 + 4) = iVar16;
                    }
                    puVar32 = (undefined *)0x0;
                    if (bVar4) {
                      puVar32 = local_7b8;
                    }
                    puVar25 = (undefined *)FUN_180221c10(iVar16,local_81c & 0xffff,local_7e0);
                    piVar30 = local_800;
                    if ((((puVar32 != puVar25) || (iVar7 != *local_800)) || (iVar8 != local_800[2]))
                       || ((auVar43._0_4_ <
                            (float)((uint)(auVar35._0_4_ - (float)local_800[1]) & auVar41._0_4_) ||
                           (iVar31 != iVar15)))) goto LAB_1801ff88a;
                    lVar12 = FUN_1801d6430(&DAT_180cc8068,local_698,uVar17 & 0xffff,local_7e0);
                    uVar17 = local_834 | 1;
                    local_800 = (int *)(CONCAT44(local_800._4_4_,local_834) | 1);
                    local_834 = uVar17;
                    if (*(char *)(lVar12 + 0xf0) != '\0') {
                      iVar15 = DAT_180c63890;
                      if (DAT_180c63890 == 0) {
                        UVar10 = GetTickCount64();
                        if (UVar10 < DAT_180c63888) {
                          iVar15 = 0;
                        }
                        else {
                          local_828 = &DAT_1808e99d0;
                          iVar15 = FUN_1805f68d0(&DAT_1808e99d0);
                          if (iVar15 != 0) goto LAB_180200568;
                          if (DAT_1808e9a1c == 0x7fffffff) {
                            DAT_1808e9a1c = 0x7ffffffe;
                            goto LAB_18020055d;
                          }
                          if ((DAT_180c63890 == 0) && (DAT_180c63888 <= UVar10)) {
                            DAT_180c63890 = FUN_1804174b0("C_EconItemView",0x6a67d4c4);
                            DAT_180c63888 = 0xffffffffffffffff;
                            if (DAT_180c63890 == 0) {
                              DAT_180c63888 = UVar10 + 1000;
                            }
                          }
                          iVar15 = DAT_180c63890;
                          FUN_1805f68fc(&DAT_1808e99d0);
                        }
                      }
                      puVar32 = local_810;
                      lVar12 = FUN_18017ea70();
                      *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
                      if (puVar32 + iVar15 == (undefined *)0x0) {
                        bVar4 = false;
                      }
                      else {
                        local_828 = (undefined *)((ulonglong)local_828 & 0xffffffff00000000);
                        cVar6 = FUN_1804514f0(&local_828,puVar32 + iVar15,4);
                        if (cVar6 == '\0') {
                          bVar4 = false;
                        }
                        else {
                          local_7dc = (uint)local_828;
                          bVar4 = true;
                        }
                      }
                      iVar15 = local_7dc;
                      lVar12 = FUN_18017ea70();
                      if (*(int *)(lVar12 + 4) != 0) {
                        *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
                      }
                      iVar7 = -1;
                      if (bVar4) {
                        iVar7 = iVar15;
                      }
                      iVar15 = 4;
                      if ((char)piVar30[3] != '\0') {
                        iVar15 = 9;
                      }
                      if (iVar7 == iVar15) goto LAB_1801ff683;
                      goto LAB_1801ff88f;
                    }
                    puVar32 = local_810;
LAB_1801ff683:
                    iVar15 = DAT_180c6387c;
                    if (DAT_180c6387c == 0) {
                      UVar10 = GetTickCount64();
                      if (UVar10 < DAT_180c63880) {
                        iVar15 = 0;
                      }
                      else {
                        local_810 = &DAT_1808e9980;
                        iVar15 = FUN_1805f68d0(&DAT_1808e9980);
                        if (iVar15 != 0) {
LAB_180200568:
                    /* WARNING: Subroutine does not return */
                          FUN_1805f6d44(5);
                        }
                        if (DAT_1808e99cc == 0x7fffffff) {
                          DAT_1808e99cc = 0x7ffffffe;
LAB_18020055d:
                    /* WARNING: Subroutine does not return */
                          FUN_1805f6d44(6);
                        }
                        if ((DAT_180c6387c == 0) && (DAT_180c63880 <= UVar10)) {
                          DAT_180c6387c = FUN_1804174b0("C_EconItemView",0xafd12ee8);
                          DAT_180c63880 = 0xffffffffffffffff;
                          if (DAT_180c6387c == 0) {
                            DAT_180c63880 = UVar10 + 1000;
                          }
                        }
                        iVar15 = DAT_180c6387c;
                        FUN_1805f68fc(&DAT_1808e9980);
                      }
                    }
                    puVar13 = (undefined8 *)FUN_180454030(&local_778,puVar32 + iVar15,0xa1);
                    uVar17 = local_834 | 2;
                    local_800 = (int *)(CONCAT44(local_800._4_4_,local_834) | 2);
                    _Buf2_00 = piVar30 + 6;
                    _Buf2 = _Buf2_00;
                    if (0xf < *(ulonglong *)(piVar30 + 0xc)) {
                      _Buf2 = *(int **)_Buf2_00;
                    }
                    sVar3 = puVar13[2];
                    if (0xf < (ulonglong)puVar13[3]) {
                      puVar13 = (undefined8 *)*puVar13;
                    }
                    local_834 = uVar17;
                    if (sVar3 != *(size_t *)(piVar30 + 10)) goto LAB_1801ff893;
                    if (sVar3 != 0) {
                      iVar15 = memcmp(puVar13,_Buf2,sVar3);
                      if (iVar15 != 0) goto LAB_1801ff893;
                    }
                    iVar15 = DAT_180c63878;
                    if (DAT_180c63878 == 0) {
                      UVar10 = GetTickCount64();
                      if (UVar10 < DAT_180c63870) {
                        iVar15 = 0;
                      }
                      else {
                        local_810 = &DAT_1808e9930;
                        iVar15 = FUN_1805f68d0(&DAT_1808e9930);
                        if (iVar15 != 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_1805f6d44(5);
                        }
                        if (DAT_1808e997c == 0x7fffffff) {
                          DAT_1808e997c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
                          FUN_1805f6d44(6);
                        }
                        if ((DAT_180c63878 == 0) && (DAT_180c63870 <= UVar10)) {
                          DAT_180c63878 = FUN_1804174b0("C_EconItemView",0xa74a6ed8);
                          DAT_180c63870 = 0xffffffffffffffff;
                          if (DAT_180c63878 == 0) {
                            DAT_180c63870 = UVar10 + 1000;
                          }
                        }
                        iVar15 = DAT_180c63878;
                        FUN_1805f68fc(&DAT_1808e9930);
                      }
                      uVar17 = local_834;
                    }
                    puVar13 = (undefined8 *)FUN_180454030(local_730,puVar32 + iVar15,0xa1);
                    uVar17 = uVar17 | 4;
                    if (0xf < *(ulonglong *)(piVar30 + 0xc)) {
                      _Buf2_00 = *(int **)_Buf2_00;
                    }
                    sVar3 = puVar13[2];
                    if (0xf < (ulonglong)puVar13[3]) {
                      puVar13 = (undefined8 *)*puVar13;
                    }
                    local_834 = uVar17;
                    if (sVar3 != *(size_t *)(piVar30 + 10)) goto LAB_1801ff893;
                    if (sVar3 != 0) {
                      iVar15 = memcmp(puVar13,_Buf2_00,sVar3);
                      if (iVar15 != 0) goto LAB_1801ff893;
                    }
                    if (bVar34) goto LAB_1801ff893;
                    bVar34 = true;
                  }
                  if ((uVar17 & 4) != 0) {
                    uVar17 = uVar17 & 0xfffffffb;
                    local_834 = uVar17;
                    FUN_18015c010(local_730);
                  }
                  if ((uVar17 & 2) != 0) {
                    uVar17 = uVar17 & 0xfffffffd;
                    local_834 = uVar17;
                    FUN_18015c010(&local_778);
                  }
                  if (((uVar17 & 1) != 0) && (local_834 = uVar17 & 0xfffffffe, local_5a8 != '\0')) {
                    FUN_18015c010(local_680);
                  }
                  if (bVar34) {
                    uVar14 = FUN_180208890(&DAT_180cc9bb0,*piVar30);
                    FUN_180203260(extraout_XMM0_Qa,local_7e8,uVar14);
                  }
                  else {
                    iVar15 = DAT_180c63860;
                    if (DAT_180c63860 == 0) {
                      UVar10 = GetTickCount64();
                      if (UVar10 < DAT_180c63868) {
                        iVar15 = 0;
                      }
                      else {
                        local_810 = &DAT_1808e98e0;
                        iVar15 = FUN_1805f68d0(&DAT_1808e98e0);
                        if (iVar15 != 0) {
LAB_18020061c:
                    /* WARNING: Subroutine does not return */
                          FUN_1805f6d44(5);
                        }
                        if (DAT_1808e992c == 0x7fffffff) {
                          DAT_1808e992c = 0x7ffffffe;
LAB_180200611:
                    /* WARNING: Subroutine does not return */
                          FUN_1805f6d44(6);
                        }
                        if ((DAT_180c63860 == 0) && (DAT_180c63868 <= UVar10)) {
                          DAT_180c63860 = FUN_1804174b0("C_BaseEntity",0xc02ce796);
                          DAT_180c63868 = 0xffffffffffffffff;
                          if (DAT_180c63860 == 0) {
                            DAT_180c63868 = UVar10 + 1000;
                          }
                        }
                        iVar15 = DAT_180c63860;
                        FUN_1805f68fc(&DAT_1808e98e0);
                      }
                    }
                    puVar25 = local_7e8;
                    puVar24 = local_7e8 + (longlong)iVar15 + 8;
                    lVar12 = FUN_18017ea70();
                    *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
                    if (puVar24 == (undefined *)0x0) {
                      bVar34 = false;
                    }
                    else {
                      local_7e8 = (undefined *)0x0;
                      cVar6 = FUN_1804514f0(&local_7e8,puVar24,8);
                      if (cVar6 == '\0') {
                        bVar34 = false;
                      }
                      else {
                        local_7a8 = local_7e8;
                        bVar34 = true;
                      }
                    }
                    puVar24 = local_7a8;
                    lVar12 = FUN_18017ea70();
                    if (*(int *)(lVar12 + 4) != 0) {
                      *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
                    }
                    if ((!bVar34) || (puVar24 == (undefined *)0x0)) {
                      uVar29 = local_820;
                      goto LAB_1801ff91e;
                    }
                    if ((DAT_180cce330 & 1) == 0) {
                      DAT_180cce330 = DAT_180cce330 | 1;
                      atexit(FUN_180662340);
                    }
                    lVar11 = DAT_1808e98d8;
                    lVar12 = DAT_1808da460;
                    if ((DAT_1808e98d8 == DAT_1808da460) && (DAT_180c63858 != 0)) {
LAB_1801ffc02:
                      puVar13 = (undefined8 *)FUN_180184240(local_730,puVar25);
                      auVar46 = auVar47._0_16_;
                      auVar44 = auVar45._0_16_;
                      auVar42 = auVar43._0_16_;
                      auVar40 = auVar41._0_16_;
                      auVar38 = auVar39._0_16_;
                      local_778 = *puVar13;
                      uStack_770 = puVar13[1];
                      uStack_768 = puVar13[2];
                      uStack_760 = puVar13[3];
                      uVar14 = puVar13[4];
                      local_758._1_1_ = (char)((ulonglong)uVar14 >> 8);
                      bVar34 = local_758._1_1_ == '\0';
                      local_758 = uVar14;
                      if (bVar34) {
                        auVar39 = ZEXT1664(auVar38);
                        auVar41 = ZEXT1664(auVar40);
                        auVar43 = ZEXT1664(auVar42);
                        auVar45 = ZEXT1664(auVar44);
                        auVar47 = ZEXT1664(auVar46);
                        FUN_1801fde70(&DAT_1807ccd3c,puVar25,&local_778);
                        goto LAB_1801ff910;
                      }
                    }
                    else {
                      UVar10 = GetTickCount64();
                      auVar46 = auVar47._0_16_;
                      auVar44 = auVar45._0_16_;
                      auVar42 = auVar43._0_16_;
                      auVar40 = auVar41._0_16_;
                      auVar38 = auVar39._0_16_;
                      if ((lVar11 != lVar12) || (DAT_180c63850 <= UVar10)) {
                        local_7e8 = &DAT_1808e9880;
                        iVar15 = FUN_1805f68d0(&DAT_1808e9880);
                        if (iVar15 != 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_1805f6d44(5);
                        }
                        if (DAT_1808e98cc == 0x7fffffff) {
                          DAT_1808e98cc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
                          FUN_1805f6d44(6);
                        }
                        if (DAT_1808e98d8 == lVar12) {
                          if ((DAT_180c63858 == 0) && (DAT_180c63850 <= UVar10)) goto LAB_1801ffb5f;
                        }
                        else {
                          DAT_1808e98d0 = 1000;
LAB_1801ffb5f:
                          lVar11 = -1;
                          do {
                            local_790 = lVar11 + 1;
                            pcVar33 = "lient.dll:48895C241048896C2418488974242057415641574883EC20440FB6F2488BF9"
                                      + lVar11;
                            lVar11 = local_790;
                          } while (*pcVar33 != '\0');
                          local_798 = &DAT_180824970;
                          local_788 = "patterns::weapon_update_composite_material";
                          local_780 = 0x2a;
                          DAT_180c63858 = FUN_1800e5d20(&local_788,&local_798);
                          DAT_1808e98d8 = lVar12;
                          DAT_180c63850 = 0xffffffffffffffff;
                          if (DAT_180c63858 == 0) {
                            DAT_180c63850 = DAT_1808e98d0 + UVar10;
                            if (DAT_1808e98d0 < 60000) {
                              DAT_1808e98d0 = DAT_1808e98d0 * 2;
                            }
                            else {
                              DAT_1808e98d0 = 60000;
                            }
                          }
                          else {
                            DAT_1808e98d0 = 1000;
                          }
                        }
                        lVar12 = DAT_180c63858;
                        FUN_1805f68fc(&DAT_1808e9880);
                        auVar46 = auVar47._0_16_;
                        auVar44 = auVar45._0_16_;
                        auVar42 = auVar43._0_16_;
                        auVar40 = auVar41._0_16_;
                        auVar38 = auVar39._0_16_;
                        if (lVar12 != 0) goto LAB_1801ffc02;
                      }
                    }
                    if (local_808 == DAT_180cca8f8) {
LAB_1801ffc75:
                      bVar34 = true;
                      auVar39 = ZEXT1664(auVar38);
                      auVar41 = ZEXT1664(auVar40);
                      auVar43 = ZEXT1664(auVar42);
                      auVar45 = ZEXT1664(auVar44);
                      auVar47 = ZEXT1664(auVar46);
                      cVar6 = FUN_180200650();
                      if (cVar6 == '\0') goto LAB_1801ff910;
                      plVar9 = (longlong *)FUN_180204f10(&DAT_180cca9b0,local_6f8,&local_838);
                      *(undefined1 *)(*plVar9 + 0x14) = 1;
                      FUN_18063ab10(local_698,0,0x600);
                      uVar17 = local_820;
                      local_858 = (int *)CONCAT44(local_858._4_4_,(uint)(local_838 == local_820));
                      local_860 = puVar25;
                      local_868 = (undefined **)CONCAT44(local_868._4_4_,local_838);
                      FUN_18015ad60(local_698,0x600,0xffffffffffffffff,
                                    "feature=guns handle=0x%X weapon=0x%p active=%d");
                      local_868 = &PTR_180700558;
                      if (local_698[0] != '\0') {
                        local_868 = (undefined **)&DAT_1806bcfc0;
                      }
                      local_860 = local_698;
                      uVar14 = FUN_1800f6900(0);
                    }
                    else {
                      auVar39 = ZEXT1664(auVar38);
                      auVar41 = ZEXT1664(auVar40);
                      auVar43 = ZEXT1664(auVar42);
                      auVar45 = ZEXT1664(auVar44);
                      auVar47 = ZEXT1664(auVar46);
                      cVar6 = FUN_1801d8910(local_808 + 3,piVar30);
                      auVar46 = auVar47._0_16_;
                      auVar44 = auVar45._0_16_;
                      auVar42 = auVar43._0_16_;
                      auVar40 = auVar41._0_16_;
                      auVar38 = auVar39._0_16_;
                      if (cVar6 == '\0') goto LAB_1801ffc75;
                      bVar34 = false;
                      uVar14 = extraout_XMM0_Qa_00;
                      uVar17 = local_820;
                    }
                    local_860 = local_7d0;
                    local_868 = (undefined **)CONCAT44(local_868._4_4_,uVar17);
                    local_858 = piVar30;
                    cVar6 = FUN_1802017f0(uVar14,puVar25,puVar32,local_838);
                    if (cVar6 != '\0') {
                      plVar9 = (longlong *)FUN_1802051c0(&DAT_180cca8f0,local_6e8,&local_838);
                      FUN_18017edf0(*plVar9 + 0x18,piVar30);
                      plVar9 = (longlong *)FUN_180204f10(&DAT_180cca9b0,&local_750,&local_838);
                      bVar22 = *(byte *)(*plVar9 + 0x14);
                      if (bVar22 != 0) {
                        bVar22 = bVar22 - 1;
                        *(byte *)(*plVar9 + 0x14) = bVar22;
                      }
                      if (bVar34) {
                        FUN_18063ab10(local_698,0,0x600);
                        local_848 = (uint)bVar22;
                        local_850 = (uint)(local_838 == uVar17);
                        local_858 = (int *)CONCAT44(local_858._4_4_,*piVar30);
                        local_860 = (char *)(CONCAT44(local_860._4_4_,local_81c) &
                                            0xffffffff0000ffff);
                        local_868 = (undefined **)CONCAT44(local_868._4_4_,local_838);
                        FUN_18015ad60(local_698,0x600,0xffffffffffffffff,
                                      "feature=guns handle=0x%X def_index=%u paint_kit=%d active=%d refresh_passes=%u"
                                     );
                        local_868 = &PTR_180700558;
                        if (local_698[0] != '\0') {
                          local_868 = (undefined **)&DAT_1806bcfc0;
                        }
                        local_860 = local_698;
                        FUN_1800f6900(0);
                      }
                    }
                  }
LAB_1801ff910:
                  uVar29 = local_820;
                }
              }
            }
          }
        }
LAB_1801ff915:
      }
LAB_1801ff91e:
      local_7d8 = local_7d8 + 1;
    } while (local_7d8 < (int)local_82c);
    pcVar33 = local_7d0;
    puVar32 = local_7f0;
  }
  uVar19 = 0xffffffffffffffff;
  FUN_18017bf40(&local_7f0);
  if (uVar29 == 0) goto LAB_1802004a4;
  if (puVar32 != (undefined *)0x0) {
    iVar15 = DAT_180c63840;
    if (DAT_180c63840 == 0) {
      UVar10 = GetTickCount64();
      if (UVar10 < DAT_180c63838) {
        iVar15 = 0;
      }
      else {
        local_7b8 = &DAT_1808e97e0;
        iVar15 = FUN_1805f68d0(&DAT_1808e97e0);
        if (iVar15 != 0) goto LAB_18020063c;
        if (DAT_1808e982c == 0x7fffffff) {
          DAT_1808e982c = 0x7ffffffe;
          goto LAB_180200631;
        }
        if ((DAT_180c63840 == 0) && (DAT_180c63838 <= UVar10)) {
          DAT_180c63840 = FUN_1804174b0("C_AttributeContainer",0xdce71866);
          if (DAT_180c63840 == 0) {
            DAT_180c63838 = UVar10 + 1000;
          }
          else {
            DAT_180c63838 = 0xffffffffffffffff;
          }
        }
        iVar15 = DAT_180c63840;
        FUN_1805f68fc(&DAT_1808e97e0);
      }
    }
    iVar7 = DAT_180c63844;
    if (DAT_180c63844 == 0) {
      UVar10 = GetTickCount64();
      if (UVar10 < DAT_180c63848) {
        iVar7 = 0;
      }
      else {
        local_7b8 = &DAT_1808e9830;
        iVar7 = FUN_1805f68d0(&DAT_1808e9830);
        if (iVar7 != 0) goto LAB_18020063c;
        if (DAT_1808e987c == 0x7fffffff) {
          DAT_1808e987c = 0x7ffffffe;
          goto LAB_180200631;
        }
        if ((DAT_180c63844 == 0) && (DAT_180c63848 <= UVar10)) {
          DAT_180c63844 = FUN_1804174b0("C_EconEntity",0x537b0586);
          if (DAT_180c63844 == 0) {
            DAT_180c63848 = UVar10 + 1000;
          }
          else {
            DAT_180c63848 = 0xffffffffffffffff;
          }
        }
        iVar7 = DAT_180c63844;
        FUN_1805f68fc(&DAT_1808e9830);
      }
    }
    iVar8 = DAT_180c6382c;
    if (DAT_180c6382c == 0) {
      UVar10 = GetTickCount64();
      if (UVar10 < DAT_180c63830) {
        iVar8 = 0;
      }
      else {
        local_7b8 = &DAT_1808e9790;
        iVar8 = FUN_1805f68d0(&DAT_1808e9790);
        if (iVar8 != 0) goto LAB_18020063c;
        if (DAT_1808e97dc == 0x7fffffff) {
          DAT_1808e97dc = 0x7ffffffe;
          goto LAB_180200631;
        }
        if ((DAT_180c6382c == 0) && (DAT_180c63830 <= UVar10)) {
          DAT_180c6382c = FUN_1804174b0("C_EconItemView",0xa2ccb41a);
          if (DAT_180c6382c == 0) {
            DAT_180c63830 = UVar10 + 1000;
          }
          else {
            DAT_180c63830 = 0xffffffffffffffff;
          }
        }
        iVar8 = DAT_180c6382c;
        FUN_1805f68fc(&DAT_1808e9790);
      }
    }
    lVar12 = FUN_18017ea70();
    *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
    if (puVar32 + (longlong)iVar8 + (longlong)iVar15 + (longlong)iVar7 == (undefined *)0x0) {
      bVar34 = false;
    }
    else {
      local_830[0] = 0;
      cVar6 = FUN_1804514f0(local_830,puVar32 + (longlong)iVar8 + (longlong)iVar15 + (longlong)iVar7
                            ,2);
      if (cVar6 == '\0') {
        bVar34 = false;
      }
      else {
        bVar34 = true;
      }
    }
    uVar17 = (uint)local_830[0];
    lVar12 = FUN_18017ea70();
    if (*(int *)(lVar12 + 4) != 0) {
      *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
    }
    if (!bVar34) {
      uVar17 = 0;
    }
    uVar18 = ((ulonglong)(uVar17 >> 8) ^
             ((ulonglong)(uVar17 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3) * 0x100000001b3 &
             DAT_180cc9cb8;
    lVar12 = *(longlong *)(DAT_180cc9ca0 + 8 + uVar18 * 0x10);
    if (lVar12 == DAT_180cc9c90) {
LAB_180200131:
      lVar12 = 0;
    }
    else {
      sVar1 = *(short *)(lVar12 + 0x10);
      while ((short)uVar17 != sVar1) {
        if (lVar12 == *(longlong *)(DAT_180cc9ca0 + uVar18 * 0x10)) goto LAB_180200131;
        lVar12 = *(longlong *)(lVar12 + 8);
        sVar1 = *(short *)(lVar12 + 0x10);
      }
    }
    lVar11 = DAT_180cc9c90;
    if (lVar12 != 0) {
      lVar11 = lVar12;
    }
    if (lVar11 == DAT_180cc9c90) {
      lVar12 = 0;
    }
    else {
      lVar12 = *(longlong *)(lVar11 + 0x18) * 0xb8 + DAT_180cc9bf8;
    }
    uVar18 = ((ulonglong)(uVar17 >> 8) ^
             ((ulonglong)(uVar17 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3) * 0x100000001b3 &
             uStack_6a8;
    lVar11 = *(longlong *)(lStack_6c0 + 8 + uVar18 * 0x10);
    if (lVar11 == lStack_6d0) {
LAB_1802001b1:
      lVar11 = 0;
    }
    else {
      sVar1 = *(short *)(lVar11 + 0x10);
      while ((short)uVar17 != sVar1) {
        if (lVar11 == *(longlong *)(lStack_6c0 + uVar18 * 0x10)) goto LAB_1802001b1;
        lVar11 = *(longlong *)(lVar11 + 8);
        sVar1 = *(short *)(lVar11 + 0x10);
      }
    }
    lVar26 = lStack_6d0;
    if (lVar11 != 0) {
      lVar26 = lVar11;
    }
    if (((lVar12 != 0) && (*(char *)(lVar12 + 0xb0) == '\0')) && (lVar26 != lStack_6d0)) {
      uVar18 = (((((ulonglong)(uVar29 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                 (ulonglong)local_818._1_1_) * 0x100000001b3 ^ (ulonglong)local_818._2_1_) *
                0x100000001b3 ^ (ulonglong)local_818._3_1_) * 0x100000001b3 & DAT_180cca920;
      plVar9 = *(longlong **)(DAT_180cca908 + 8 + uVar18 * 0x10);
      if (plVar9 == DAT_180cca8f8) {
LAB_180200249:
        plVar9 = (longlong *)0x0;
      }
      else {
        uVar17 = *(uint *)(plVar9 + 2);
        while (uVar29 != uVar17) {
          if (plVar9 == *(longlong **)(DAT_180cca908 + uVar18 * 0x10)) goto LAB_180200249;
          plVar9 = (longlong *)plVar9[1];
          uVar17 = *(uint *)(plVar9 + 2);
        }
      }
      plVar20 = DAT_180cca8f8;
      if (plVar9 != (longlong *)0x0) {
        plVar20 = plVar9;
      }
      if (plVar20 == DAT_180cca8f8) goto LAB_1802004a4;
      cVar6 = FUN_1801d8910(plVar20 + 3,lVar26 + 0x18);
      if (cVar6 == '\0') goto LAB_1802004a4;
      iVar15 = DAT_180c63828;
      if (DAT_180c63828 == 0) {
        UVar10 = GetTickCount64();
        if (UVar10 < DAT_180c63820) {
          iVar15 = 0;
        }
        else {
          local_7b8 = &DAT_1808e9740;
          iVar15 = FUN_1805f68d0(&DAT_1808e9740);
          if (iVar15 != 0) {
LAB_18020063c:
                    /* WARNING: Subroutine does not return */
            FUN_1805f6d44(5);
          }
          if (DAT_1808e978c == 0x7fffffff) {
            DAT_1808e978c = 0x7ffffffe;
LAB_180200631:
                    /* WARNING: Subroutine does not return */
            FUN_1805f6d44(6);
          }
          if ((DAT_180c63828 == 0) && (DAT_180c63820 <= UVar10)) {
            DAT_180c63828 = FUN_1804174b0("C_EconEntity",0xa12d48f);
            if (DAT_180c63828 == 0) {
              uVar19 = UVar10 + 1000;
            }
            DAT_180c63820 = uVar19;
          }
          iVar15 = DAT_180c63828;
          FUN_1805f68fc(&DAT_1808e9740);
        }
      }
      lVar12 = FUN_18017ea70();
      *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
      bVar34 = false;
      if (puVar32 + iVar15 != (undefined *)0x0) {
        local_82c = 0;
        cVar6 = FUN_1804514f0(&local_82c,puVar32 + iVar15,4);
        if (cVar6 == '\0') {
          bVar34 = false;
        }
        else {
          bVar34 = true;
        }
      }
      uVar17 = local_82c;
      lVar12 = FUN_18017ea70();
      if (*(int *)(lVar12 + 4) != 0) {
        *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
      }
      uVar21 = 0;
      if (bVar34) {
        uVar21 = uVar17;
      }
      if (uVar21 != *(uint *)(lVar26 + 0x18)) goto LAB_1802004a4;
      uVar14 = FUN_180208890(&DAT_180cc9bb0);
      cVar6 = FUN_180203560(extraout_XMM0_Qa_01,pcVar33,uVar14);
      if (cVar6 == '\0') {
        _DAT_180cca9f8 = local_7f0 + 50000000;
        DAT_180cca9f0 = uVar29;
      }
      else if (DAT_180cca9f0 == uVar29) {
        DAT_180cca9f0 = 0;
        _DAT_180cca9f8 = (undefined *)0x0;
        _DAT_180cca8e0 = uVar29;
        goto LAB_1802004a4;
      }
    }
  }
  _DAT_180cca8e0 = uVar29;
LAB_1802004a4:
  FUN_1800cf8e0(&local_6d8);
                    /* WARNING: Read-only address (ram,0x00018086dba0) is written */
}



