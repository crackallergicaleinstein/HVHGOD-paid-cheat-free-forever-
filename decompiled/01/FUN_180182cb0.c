// FUN_180182cb0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180182cb0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180182cb0(char *param_1,char *param_2)

{
  float *pfVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ULONGLONG UVar8;
  undefined8 uVar9;
  longlong lVar10;
  char *pcVar11;
  char *pcVar12;
  float *pfVar13;
  undefined4 uVar14;
  char *pcVar15;
  char *pcVar16;
  uint uVar17;
  undefined4 uVar18;
  undefined1 *puVar19;
  undefined1 auStack_748 [32];
  undefined **local_728;
  char *local_720;
  undefined4 local_718;
  undefined4 local_710;
  char *local_708;
  undefined1 local_700 [8];
  char *local_6f8;
  char *local_6f0;
  float local_6e8 [6];
  char local_6d0 [8];
  int *local_6c8;
  int *local_6c0;
  int *local_6b8;
  char **local_6b0;
  longlong local_6a8;
  undefined8 local_6a0;
  char local_698;
  undefined1 local_690 [24];
  char local_678;
  char *local_670;
  char *local_668;
  int local_660;
  int local_65c;
  int local_658 [4];
  char local_648 [1544];
  ulonglong local_40;
  
  local_40 = DAT_1808d5f00 ^ (ulonglong)auStack_748;
  uVar17 = 0;
  iVar7 = DAT_180bb8888;
  local_6f0 = param_2;
  local_668 = param_1;
  if (DAT_180bb8888 == 0) {
    UVar8 = GetTickCount64();
    if (UVar8 < DAT_180bb8880) {
      iVar7 = 0;
    }
    else {
      local_6f8 = &DAT_1808d9b30;
      iVar7 = FUN_1805f68d0(&DAT_1808d9b30);
      if (iVar7 != 0) goto LAB_1801838a1;
      if (DAT_1808d9b7c == 0x7fffffff) {
        DAT_1808d9b7c = 0x7ffffffe;
        goto LAB_180183896;
      }
      if ((DAT_180bb8888 == 0) && (DAT_180bb8880 <= UVar8)) {
        DAT_180bb8888 = FUN_1804174b0("C_BaseEntity",0x9d930423);
        if (DAT_180bb8888 == 0) {
          DAT_180bb8880 = UVar8 + 1000;
        }
        else {
          DAT_180bb8880 = 0xffffffffffffffff;
        }
      }
      iVar7 = DAT_180bb8888;
      FUN_1805f68fc(&DAT_1808d9b30);
    }
  }
  iVar4 = DAT_180bb8878;
  if (DAT_180bb8878 == 0) {
    UVar8 = GetTickCount64();
    if (UVar8 < DAT_180bb8870) {
      iVar4 = 0;
    }
    else {
      local_6f8 = &DAT_1808d9ae0;
      iVar4 = FUN_1805f68d0(&DAT_1808d9ae0);
      if (iVar4 != 0) goto LAB_1801838a1;
      if (DAT_1808d9b2c == 0x7fffffff) {
        DAT_1808d9b2c = 0x7ffffffe;
        goto LAB_180183896;
      }
      if ((DAT_180bb8878 == 0) && (DAT_180bb8870 <= UVar8)) {
        DAT_180bb8878 = FUN_1804174b0("CGameSceneNode",0x6b325da);
        if (DAT_180bb8878 == 0) {
          DAT_180bb8870 = UVar8 + 1000;
        }
        else {
          DAT_180bb8870 = 0xffffffffffffffff;
        }
      }
      iVar4 = DAT_180bb8878;
      FUN_1805f68fc(&DAT_1808d9ae0);
    }
  }
  iVar5 = DAT_180bb8868;
  if (DAT_180bb8868 == 0) {
    UVar8 = GetTickCount64();
    if (UVar8 < DAT_180bb8860) {
      iVar5 = 0;
    }
    else {
      local_6f8 = &DAT_1808d9a90;
      iVar5 = FUN_1805f68d0(&DAT_1808d9a90);
      if (iVar5 != 0) goto LAB_1801838a1;
      if (DAT_1808d9adc == 0x7fffffff) {
        DAT_1808d9adc = 0x7ffffffe;
        goto LAB_180183896;
      }
      if ((DAT_180bb8868 == 0) && (DAT_180bb8860 <= UVar8)) {
        DAT_180bb8868 = FUN_1804174b0("CSkeletonInstance",0x52ac8c4f);
        if (DAT_180bb8868 == 0) {
          DAT_180bb8860 = UVar8 + 1000;
        }
        else {
          DAT_180bb8860 = 0xffffffffffffffff;
        }
      }
      iVar5 = DAT_180bb8868;
      FUN_1805f68fc(&DAT_1808d9a90);
    }
  }
  iVar6 = DAT_180bb8858;
  if (DAT_180bb8858 == 0) {
    UVar8 = GetTickCount64();
    if (UVar8 < DAT_180bb8850) {
      iVar6 = 0;
    }
    else {
      local_6f8 = &DAT_1808d9a40;
      iVar6 = FUN_1805f68d0(&DAT_1808d9a40);
      if (iVar6 != 0) goto LAB_1801838a1;
      if (DAT_1808d9a8c == 0x7fffffff) {
        DAT_1808d9a8c = 0x7ffffffe;
        goto LAB_180183896;
      }
      if ((DAT_180bb8858 == 0) && (DAT_180bb8850 <= UVar8)) {
        DAT_180bb8858 = FUN_1804174b0("CModelState",0xe100c814);
        if (DAT_180bb8858 == 0) {
          DAT_180bb8850 = UVar8 + 1000;
        }
        else {
          DAT_180bb8850 = 0xffffffffffffffff;
        }
      }
      iVar6 = DAT_180bb8858;
      FUN_1805f68fc(&DAT_1808d9a40);
    }
  }
  if (local_668 == (char *)0x0) {
  }
  if (param_2 == (char *)0x0) {
  }
  if (*param_2 == '\0') {
  }
  if (iVar7 == 0) {
  }
  if (iVar4 == 0) {
  }
  if (iVar5 == 0) {
  }
  uVar9 = FUN_1801838b0();
  FUN_1801a5850(&local_6a8,uVar9,(longlong)iVar4,(longlong)(iVar6 + iVar5));
  pcVar15 = local_668 + iVar7;
  lVar10 = FUN_18017ea70();
  *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
  if (pcVar15 == (char *)0x0) {
    bVar2 = false;
    pcVar15 = local_6f0;
  }
  else {
    local_708 = (char *)0x0;
    cVar3 = FUN_1804514f0(&local_708,pcVar15,8);
    if (cVar3 == '\0') {
      bVar2 = false;
      pcVar15 = local_6f0;
    }
    else {
      bVar2 = true;
      pcVar15 = local_708;
    }
  }
  lVar10 = FUN_18017ea70();
  if (*(int *)(lVar10 + 4) != 0) {
    *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
  }
  pcVar12 = (char *)0x0;
  if (bVar2) {
    pcVar12 = pcVar15;
  }
  if (local_698 == '\0') {
  }
  if (pcVar12 == (char *)0x0) {
  }
  local_6f8 = pcVar12;
  lVar10 = FUN_18017ea70();
  *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
  if (pcVar12 + iVar4 == (char *)0x0) {
    bVar2 = false;
    pcVar15 = local_6f0;
  }
  else {
    local_708 = (char *)0x0;
    cVar3 = FUN_1804514f0(&local_708,pcVar12 + iVar4,8);
    if (cVar3 == '\0') {
      bVar2 = false;
      pcVar15 = local_6f0;
    }
    else {
      bVar2 = true;
      pcVar15 = local_708;
    }
  }
  lVar10 = FUN_18017ea70();
  if (*(int *)(lVar10 + 4) != 0) {
    *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
  }
  pcVar16 = (char *)0x0;
  if (bVar2) {
    pcVar16 = pcVar15;
  }
  if (pcVar16 != local_668) {
  }
  lVar10 = FUN_18017ea70();
  *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
  if (local_6a8 == 0) {
    bVar2 = false;
    pcVar15 = local_6f0;
  }
  else {
    local_708 = (char *)0x0;
    cVar3 = FUN_1804514f0(&local_708,local_6a8,8);
    if (cVar3 == '\0') {
      bVar2 = false;
      pcVar15 = local_6f0;
    }
    else {
      bVar2 = true;
      pcVar15 = local_708;
    }
  }
  lVar10 = FUN_18017ea70();
  if (*(int *)(lVar10 + 4) != 0) {
    *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
  }
  if (bVar2) {
    if (pcVar15 == (char *)0x0) goto LAB_180183228;
    lVar10 = FUN_18017ea70();
    *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
    local_708 = (char *)0x0;
    cVar3 = FUN_1804514f0(&local_708,pcVar15,8);
    pcVar16 = local_6f8;
    if (cVar3 != '\0') {
      pcVar16 = local_708;
    }
    lVar10 = FUN_18017ea70();
    if (*(int *)(lVar10 + 4) != 0) {
      *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
    }
    pcVar11 = (char *)0x0;
    if (cVar3 != '\0') {
      pcVar11 = pcVar16;
    }
    if (pcVar11 == (char *)0x0) goto LAB_180183228;
    lVar10 = FUN_18017ea70();
    *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
    if (pcVar11 + 0x60 == (char *)0x0) {
      bVar2 = false;
      pcVar12 = local_6f0;
    }
    else {
      local_708 = (char *)0x0;
      cVar3 = FUN_1804514f0(&local_708,pcVar11 + 0x60,8);
      if (cVar3 == '\0') {
        bVar2 = false;
        pcVar12 = local_6f0;
      }
      else {
        bVar2 = true;
        pcVar12 = local_708;
      }
    }
    lVar10 = FUN_18017ea70();
    if (*(int *)(lVar10 + 4) != 0) {
      *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
    }
    pcVar16 = (char *)0x0;
    if (bVar2) {
      pcVar16 = pcVar12;
    }
    pcVar12 = local_6f8;
  }
  else {
    pcVar15 = (char *)0x0;
LAB_180183228:
    pcVar16 = (char *)0x0;
  }
  uVar9 = 1;
  cVar3 = FUN_1804513c0(pcVar16,1,2);
  if (cVar3 == '\0') {
  }
  local_670 = (char *)0x0;
  cVar3 = FUN_1804513c0(pcVar16,1,2);
  if (cVar3 == '\0') {
  }
  lVar10 = FUN_18017ea70();
  *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
  cVar3 = FUN_1801ad750(pcVar16,pcVar15,&local_670,local_6f0);
  lVar10 = FUN_18017ea70();
  pcVar15 = local_670;
  if (*(int *)(lVar10 + 4) != 0) {
    *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
  }
  if (cVar3 == '\0') {
  }
  if (local_670 == (char *)0x0) {
  }
  lVar10 = FUN_18017ea70();
  *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
  if (pcVar15 == (char *)0x0) {
    bVar2 = false;
    pcVar15 = local_6f8;
  }
  else {
    local_708 = (char *)0x0;
    cVar3 = FUN_1804514f0(&local_708,pcVar15,8);
    if (cVar3 == '\0') {
      bVar2 = false;
      pcVar15 = local_6f8;
    }
    else {
      bVar2 = true;
      pcVar15 = local_708;
    }
  }
  lVar10 = FUN_18017ea70();
  if (*(int *)(lVar10 + 4) != 0) {
    *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
  }
  if (!bVar2) {
  }
  if (pcVar15 == (char *)0x0) {
  }
  iVar7 = DAT_180bb8838;
  if (DAT_180bb8838 == 0) {
    UVar8 = GetTickCount64();
    if (UVar8 < DAT_180bb8830) {
      iVar7 = 0;
    }
    else {
      local_6f8 = &DAT_1808d9980;
      iVar7 = FUN_1805f68d0(&DAT_1808d9980);
      if (iVar7 != 0) goto LAB_1801838a1;
      if (DAT_1808d99cc == 0x7fffffff) {
        DAT_1808d99cc = 0x7ffffffe;
        goto LAB_180183896;
      }
      if ((DAT_180bb8838 == 0) && (DAT_180bb8830 <= UVar8)) {
        DAT_180bb8838 = FUN_1804174b0("C_BaseModelEntity",0xae8e690f);
        if (DAT_180bb8838 == 0) {
          DAT_180bb8830 = UVar8 + 1000;
        }
        else {
          DAT_180bb8830 = 0xffffffffffffffff;
        }
      }
      iVar7 = DAT_180bb8838;
      FUN_1805f68fc(&DAT_1808d9980);
    }
  }
  iVar4 = DAT_180bb8828;
  local_660 = iVar7;
  if (DAT_180bb8828 == 0) {
    UVar8 = GetTickCount64();
    if (UVar8 < DAT_180bb8820) {
      iVar4 = 0;
    }
    else {
      local_6f8 = &DAT_1808d9930;
      iVar7 = FUN_1805f68d0(&DAT_1808d9930);
      if (iVar7 != 0) goto LAB_1801838a1;
      if (DAT_1808d997c == 0x7fffffff) {
        DAT_1808d997c = 0x7ffffffe;
        goto LAB_180183896;
      }
      if ((DAT_180bb8828 == 0) && (DAT_180bb8820 <= UVar8)) {
        DAT_180bb8828 = FUN_1804174b0("CCollisionProperty",0xe57f80c);
        if (DAT_180bb8828 == 0) {
          DAT_180bb8820 = UVar8 + 1000;
        }
        else {
          DAT_180bb8820 = 0xffffffffffffffff;
        }
      }
      iVar4 = DAT_180bb8828;
      FUN_1805f68fc(&DAT_1808d9930);
    }
  }
  iVar7 = DAT_180bb8818;
  local_658[0] = iVar4;
  if (DAT_180bb8818 == 0) {
    UVar8 = GetTickCount64();
    if (UVar8 < DAT_180bb8810) {
      iVar7 = 0;
    }
    else {
      local_6f8 = &DAT_1808d98e0;
      iVar7 = FUN_1805f68d0(&DAT_1808d98e0);
      if (iVar7 != 0) goto LAB_1801838a1;
      if (DAT_1808d992c == 0x7fffffff) {
        DAT_1808d992c = 0x7ffffffe;
        goto LAB_180183896;
      }
      if ((DAT_180bb8818 == 0) && (DAT_180bb8810 <= UVar8)) {
        DAT_180bb8818 = FUN_1804174b0("CCollisionProperty",0x7d388d3e);
        if (DAT_180bb8818 == 0) {
          DAT_180bb8810 = UVar8 + 1000;
        }
        else {
          DAT_180bb8810 = 0xffffffffffffffff;
        }
      }
      iVar7 = DAT_180bb8818;
      FUN_1805f68fc(&DAT_1808d98e0);
    }
  }
  local_6c8 = &local_660;
  local_6c0 = &local_65c;
  local_6b8 = local_658;
  local_6b0 = &local_668;
  local_65c = iVar7;
  FUN_180183a70(&local_6c8,local_6e8);
  pcVar15 = local_670;
  cVar3 = FUN_1804513c0(local_6a0,1,2);
  if (cVar3 == '\0') {
  }
  lVar10 = FUN_18017ea70();
  *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
  cVar3 = FUN_1801ad780(local_6a0,pcVar12,pcVar15);
  lVar10 = FUN_18017ea70();
  if (*(int *)(lVar10 + 4) != 0) {
    *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
  }
  if (cVar3 == '\0') {
  }
  lVar10 = FUN_18017ea70();
  *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
  if (pcVar12 + (longlong)iVar5 + (longlong)iVar6 == (char *)0x0) {
    bVar2 = false;
    pcVar15 = local_6f8;
  }
  else {
    local_708 = (char *)0x0;
    cVar3 = FUN_1804514f0(&local_708,pcVar12 + (longlong)iVar5 + (longlong)iVar6,8);
    if (cVar3 == '\0') {
      bVar2 = false;
      pcVar15 = local_6f8;
    }
    else {
      bVar2 = true;
      pcVar15 = local_708;
    }
  }
  lVar10 = FUN_18017ea70();
  if (*(int *)(lVar10 + 4) != 0) {
    *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
  }
  pcVar12 = (char *)0x0;
  if (bVar2) {
    pcVar12 = pcVar15;
  }
  if (pcVar12 != local_670) {
  }
  FUN_180183a70(&local_6c8,local_690);
  iVar7 = DAT_180bb8808;
  if (DAT_180bb8808 == 0) {
    UVar8 = GetTickCount64();
    if (DAT_180bb8800 <= UVar8) {
      local_6f8 = &DAT_1808d9890;
      iVar7 = FUN_1805f68d0(&DAT_1808d9890);
      if (iVar7 != 0) {
LAB_1801838a1:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808d98dc == 0x7fffffff) {
        DAT_1808d98dc = 0x7ffffffe;
LAB_180183896:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if ((DAT_180bb8808 == 0) && (DAT_180bb8800 <= UVar8)) {
        DAT_180bb8808 = FUN_1804174b0("C_CSPlayerPawn",0x22bae6fd);
        if (DAT_180bb8808 == 0) {
          DAT_180bb8800 = UVar8 + 1000;
        }
        else {
          DAT_180bb8800 = 0xffffffffffffffff;
        }
      }
      iVar7 = DAT_180bb8808;
      FUN_1805f68fc(&DAT_1808d9890);
      if (iVar7 != 0) goto LAB_1801836d0;
    }
  }
  else {
LAB_1801836d0:
    local_700[0] = 1;
    pcVar15 = local_668 + iVar7;
    cVar3 = FUN_1804513c0(pcVar15,1,1);
    if (cVar3 != '\0') {
      lVar10 = FUN_18017ea70();
      *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
      cVar3 = FUN_1801ad7b0(pcVar15,local_700);
      lVar10 = FUN_18017ea70();
      if (*(int *)(lVar10 + 4) != 0) {
        *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
      }
      uVar18 = 1;
      if (cVar3 != '\0') goto LAB_180183720;
    }
  }
  uVar18 = 0;
LAB_180183720:
  if ((local_6d0[0] == '\0') || (local_678 == '\0')) {
LAB_18018377c:
    uVar14 = 0;
  }
  else {
    puVar19 = local_690;
    pfVar13 = local_6e8;
    do {
      pfVar1 = pfVar13 + 3;
      if (pfVar13 != pfVar1) {
        lVar10 = (longlong)puVar19 - (longlong)pfVar13;
        do {
          if (*pfVar13 != *(float *)((longlong)pfVar13 + lVar10)) goto LAB_18018377c;
          pfVar13 = pfVar13 + 1;
        } while (pfVar13 != pfVar1);
      }
      puVar19 = puVar19 + 0xc;
      pfVar13 = pfVar1;
    } while (pfVar1 != (float *)local_6d0);
    uVar14 = 1;
  }
  if (((local_6d0[0] != '\0') && (uVar17 = (uint)(local_678 != '\0'), local_6d0[0] != '\0')) &&
     (local_678 != '\0')) {
    puVar19 = local_690;
    pfVar13 = local_6e8;
    do {
      pfVar1 = pfVar13 + 3;
      if (pfVar13 != pfVar1) {
        lVar10 = (longlong)puVar19 - (longlong)pfVar13;
        do {
          if (*pfVar13 != *(float *)((longlong)pfVar13 + lVar10)) {
            uVar9 = 2;
            goto LAB_1801837df;
          }
          pfVar13 = pfVar13 + 1;
        } while (pfVar13 != pfVar1);
      }
      puVar19 = puVar19 + 0xc;
      pfVar13 = pfVar1;
    } while (pfVar1 != (float *)local_6d0);
  }
LAB_1801837df:
  FUN_18063ab10(local_648,0,0x600);
  local_720 = (char *)CONCAT44(local_720._4_4_,uVar17);
  local_728 = (undefined **)local_6f0;
  local_718 = uVar14;
  local_710 = uVar18;
  FUN_18015ad60(local_648,0x600,0xffffffffffffffff,
                "model=%s generic_entity_setter=0 generic_bounds_update=0 prediction_resets=0 resource_readback=matched hull_observed=%d hull_preserved=%d gloves_notified=%d"
               );
  local_728 = &PTR_180700558;
  if (local_648[0] != '\0') {
    local_728 = (undefined **)&DAT_1806bcfc0;
  }
  local_720 = local_648;
  FUN_1800f6900(uVar9);
}



