// FUN_180242af0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180242af0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180242af0(char *param_1)

{
  undefined8 uVar1;
  bool bVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  ULONGLONG UVar7;
  longlong lVar8;
  int *piVar9;
  longlong lVar10;
  undefined **ppuVar11;
  char *pcVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined1 auStack_7c8 [32];
  undefined **local_7a8;
  char *local_7a0;
  undefined4 local_798;
  char *local_778 [2];
  char *local_768;
  longlong local_760;
  char *local_758;
  char *local_748;
  longlong local_740;
  undefined1 local_738 [8];
  undefined *local_730;
  undefined8 local_728;
  int local_720 [2];
  undefined4 local_718;
  undefined4 local_714;
  undefined1 local_710 [200];
  undefined8 local_648;
  undefined8 local_640;
  char local_638 [1544];
  ulonglong local_30;
  
  local_30 = DAT_1808d5f00 ^ (ulonglong)auStack_7c8;
  if (DAT_180bbec8b == '\0') {
  }
  local_758 = param_1;
  UVar7 = GetTickCount64();
  if (UVar7 < *(ulonglong *)(param_1 + 0x20)) {
  }
  *(ULONGLONG *)(param_1 + 0x20) = UVar7 + 0xfa;
  lVar8 = FUN_18017ea70();
  uVar1 = *(undefined8 *)(lVar8 + 8);
  local_728 = uVar1;
  piVar9 = (int *)FUN_18017ea70();
  *piVar9 = *piVar9 + 1;
  *(char **)(piVar9 + 2) = "quickpeek: create particle";
  lVar8 = DAT_180c64430;
  if (DAT_180c64430 == 0) goto LAB_180243442;
  lVar10 = FUN_18017ea70();
  *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
  if (lVar8 == 0) {
    bVar2 = false;
    pcVar12 = local_758;
  }
  else {
    local_778[0] = (char *)0x0;
    cVar4 = FUN_1804514f0(local_778,lVar8,8);
    if (cVar4 == '\0') {
      bVar2 = false;
      pcVar12 = local_758;
    }
    else {
      bVar2 = true;
      pcVar12 = local_778[0];
    }
  }
  lVar8 = FUN_18017ea70();
  if (*(int *)(lVar8 + 4) != 0) {
    *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
  }
  if (!bVar2) {
    pcVar12 = (char *)0x0;
  }
  local_778[0] = pcVar12;
  if (pcVar12 == (char *)0x0) goto LAB_180243442;
  uVar14 = 1000;
  if (param_1[0x28] == '\0') {
    local_718 = 0;
    local_714 = 0xc00000c8;
    FUN_18063ab10(local_710,0,200);
    local_648 = 0;
    local_640 = 0;
    FUN_18063ab10(local_638,0,0x600);
    FUN_18015ad60(local_638,0x600,0xffffffffffffffff,"native_io=1");
    ppuVar11 = &PTR_180700558;
    if (local_638[0] != '\0') {
      ppuVar11 = (undefined **)&DAT_1806bcfc0;
    }
    local_7a0 = local_638;
    local_7a8 = ppuVar11;
    FUN_1800f6900(0);
    if ((DAT_180cce330 & 1) == 0) {
      DAT_180cce330 = DAT_180cce330 | 1;
      atexit(FUN_180662340);
    }
    lVar10 = DAT_1808ee078;
    lVar8 = DAT_1808da460;
    if ((DAT_1808ee078 != DAT_1808da460) || (lVar13 = DAT_180c64468, DAT_180c64468 == 0)) {
      UVar7 = GetTickCount64();
      if ((lVar10 == lVar8) && (UVar7 < DAT_180c64470)) {
        lVar13 = 0;
      }
      else {
        local_730 = &DAT_1808ee020;
        iVar5 = FUN_1805f68d0(&DAT_1808ee020);
        if (iVar5 != 0) goto LAB_1802434ba;
        if (DAT_1808ee06c == 0x7fffffff) {
          DAT_1808ee06c = 0x7ffffffe;
          goto LAB_1802434af;
        }
        if (DAT_1808ee078 == lVar8) {
          if ((DAT_180c64468 == 0) && (DAT_180c64470 <= UVar7)) goto LAB_180242d70;
        }
        else {
          DAT_1808ee018 = 1000;
LAB_180242d70:
          lVar10 = -1;
          do {
            local_740 = lVar10 + 1;
            pcVar12 = "lient.dll:48895C24??574883EC??8B41??488D79" + lVar10;
            lVar10 = local_740;
          } while (*pcVar12 != '\0');
          local_748 = "client.dll:48895C24??574883EC??8B41??488D79";
          local_768 = "patterns::init_particle_path_buffer";
          local_760 = 0x23;
          DAT_180c64468 = FUN_1800e5d20(&local_768,&local_748);
          DAT_1808ee078 = lVar8;
          DAT_180c64470 = 0xffffffffffffffff;
          if (DAT_180c64468 == 0) {
            DAT_180c64470 = DAT_1808ee018 + UVar7;
            if (DAT_1808ee018 < 60000) {
              DAT_1808ee018 = DAT_1808ee018 * 2;
            }
            else {
              DAT_1808ee018 = 60000;
            }
          }
          else {
            DAT_1808ee018 = 1000;
          }
        }
        lVar13 = DAT_180c64468;
        FUN_1805f68fc(&DAT_1808ee020);
      }
    }
    cVar4 = FUN_1804513c0(lVar13,1,2);
    if (cVar4 == '\0') goto LAB_180243442;
    lVar8 = FUN_18017ea70();
    *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
    cVar4 = FUN_180244890(lVar13,&local_718);
    lVar8 = FUN_18017ea70();
    if (*(int *)(lVar8 + 4) != 0) {
      *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
    }
    uVar3 = DAT_180c631f8;
    if (cVar4 == '\0') goto LAB_180243442;
    local_640 = 0x66637076;
    if ((DAT_180cce330 & 1) == 0) {
      DAT_180cce330 = DAT_180cce330 | 1;
      atexit(FUN_180662340);
    }
    lVar10 = DAT_1808ee070;
    lVar8 = DAT_1808da460;
    if ((DAT_1808ee070 != DAT_1808da460) || (lVar13 = DAT_180c64460, DAT_180c64460 == 0)) {
      UVar7 = GetTickCount64();
      if ((lVar10 == lVar8) && (UVar7 < DAT_180c64458)) {
        lVar13 = 0;
      }
      else {
        local_730 = &DAT_1808edfc0;
        iVar5 = FUN_1805f68d0(&DAT_1808edfc0);
        if (iVar5 != 0) {
LAB_1802434ba:
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(5);
        }
        if (DAT_1808ee00c == 0x7fffffff) {
          DAT_1808ee00c = 0x7ffffffe;
LAB_1802434af:
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(6);
        }
        if (DAT_1808ee070 == lVar8) {
          if ((DAT_180c64460 == 0) && (DAT_180c64458 <= UVar7)) goto LAB_180242f28;
        }
        else {
          DAT_1808ee010 = 1000;
LAB_180242f28:
          lVar10 = -1;
          do {
            local_760 = lVar10 + 1;
            lVar13 = lVar10 + 1;
            lVar10 = local_760;
          } while ("resourcesystem.dll:405355574881EC80000000"[lVar13] != '\0');
          local_768 = "resourcesystem.dll:405355574881EC80000000";
          local_748 = "patterns::resource_system_precache";
          local_740 = 0x22;
          DAT_180c64460 = FUN_1800e5d20(&local_748,&local_768);
          DAT_1808ee070 = lVar8;
          DAT_180c64458 = 0xffffffffffffffff;
          if (DAT_180c64460 == 0) {
            DAT_180c64458 = DAT_1808ee010 + UVar7;
            if (DAT_1808ee010 < 60000) {
              DAT_1808ee010 = DAT_1808ee010 * 2;
            }
            else {
              DAT_1808ee010 = 60000;
            }
          }
          else {
            DAT_1808ee010 = 1000;
          }
        }
        lVar13 = DAT_180c64460;
        FUN_1805f68fc(&DAT_1808edfc0);
      }
    }
    cVar4 = FUN_1804513c0(lVar13,1,2);
    if (cVar4 == '\0') goto LAB_180243442;
    lVar8 = FUN_18017ea70();
    *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
    cVar4 = FUN_1801f3ae0(lVar13,uVar3,&local_718);
    lVar8 = FUN_18017ea70();
    if (*(int *)(lVar8 + 4) != 0) {
      *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
    }
    if (cVar4 == '\0') goto LAB_180243442;
    local_758[0x28] = '\x01';
  }
  local_720[0] = -1;
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar10 = DAT_1808edf60;
  lVar8 = DAT_1808da460;
  if ((DAT_1808edf60 != DAT_1808da460) || (lVar13 = DAT_180c64448, DAT_180c64448 == 0)) {
    UVar7 = GetTickCount64();
    if ((lVar10 == lVar8) && (UVar7 < DAT_180c64450)) {
      lVar13 = 0;
    }
    else {
      local_730 = &DAT_1808edf70;
      iVar5 = FUN_1805f68d0(&DAT_1808edf70);
      if (iVar5 != 0) goto LAB_18024349a;
      if (DAT_1808edfbc == 0x7fffffff) {
        DAT_1808edfbc = 0x7ffffffe;
        goto LAB_18024348f;
      }
      if (DAT_1808edf60 == lVar8) {
        if ((DAT_180c64448 == 0) && (DAT_180c64450 <= UVar7)) goto LAB_1802430ff;
      }
      else {
        DAT_1808edf50 = 1000;
LAB_1802430ff:
        lVar10 = -1;
        do {
          local_760 = lVar10 + 1;
          lVar13 = lVar10 + 1;
          lVar10 = local_760;
        } while ("client.dll:4C8BDC534881EC90000000F20F1005"[lVar13] != '\0');
        local_768 = "client.dll:4C8BDC534881EC90000000F20F1005";
        local_748 = "patterns::particle_create_effect";
        local_740 = 0x20;
        DAT_180c64448 = FUN_1800e5d20(&local_748,&local_768);
        DAT_1808edf60 = lVar8;
        DAT_180c64450 = 0xffffffffffffffff;
        if (DAT_180c64448 == 0) {
          DAT_180c64450 = DAT_1808edf50 + UVar7;
          if (DAT_1808edf50 < 60000) {
            DAT_1808edf50 = DAT_1808edf50 * 2;
          }
          else {
            DAT_1808edf50 = 60000;
          }
        }
        else {
          DAT_1808edf50 = 1000;
        }
      }
      lVar13 = DAT_180c64448;
      FUN_1805f68fc(&DAT_1808edf70);
    }
  }
  cVar4 = FUN_1804513c0(lVar13,1,2);
  if (cVar4 == '\0') goto LAB_180243442;
  lVar8 = FUN_18017ea70();
  pcVar12 = local_778[0];
  *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
  local_7a8 = (undefined **)0x1807ce898;
  FUN_1802448c0(&local_768,lVar13,local_778[0],local_720);
  lVar8 = FUN_18017ea70();
  iVar5 = local_720[0];
  if (*(int *)(lVar8 + 4) != 0) {
    *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
  }
  if ((char)local_760 == '\0') goto LAB_180243442;
  *(int *)(local_758 + 0x10) = local_720[0];
  *(char **)(local_758 + 0x18) = pcVar12;
  if (local_720[0] == -1) goto LAB_180243442;
  FUN_18063ab10(local_638,0,0x600);
  local_7a8 = (undefined **)CONCAT44(local_7a8._4_4_,iVar5);
  FUN_18015ad60(local_638,0x600,0xffffffffffffffff,"effect=%u native_io=1");
  ppuVar11 = &PTR_180700558;
  if (local_638[0] != '\0') {
    ppuVar11 = (undefined **)&DAT_1806bcfc0;
  }
  local_7a0 = local_638;
  local_7a8 = ppuVar11;
  FUN_1800f6900(0,local_7a0,"Particles","QUICKPEEK_PARTICLE_CREATED");
  iVar5 = local_720[0];
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar10 = DAT_1808edf58;
  lVar8 = DAT_1808da460;
  if (DAT_1808edf58 == DAT_1808da460) {
    lVar13 = DAT_180c64438;
    if (DAT_180c64438 == 0) goto LAB_1802432cc;
  }
  else {
LAB_1802432cc:
    UVar7 = GetTickCount64();
    if ((lVar10 == lVar8) && (UVar7 < DAT_180c64440)) {
      lVar13 = 0;
    }
    else {
      local_730 = &DAT_1808edf00;
      iVar6 = FUN_1805f68d0(&DAT_1808edf00);
      if (iVar6 != 0) {
LAB_18024349a:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808edf4c == 0x7fffffff) {
        DAT_1808edf4c = 0x7ffffffe;
LAB_18024348f:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if (DAT_1808edf58 == lVar8) {
        if ((DAT_180c64438 == 0) && (DAT_180c64440 <= UVar7)) goto LAB_18024334d;
      }
      else {
        DAT_1808edef0 = 1000;
LAB_18024334d:
        lVar10 = -1;
        do {
          local_760 = lVar10 + 1;
          pcVar12 = "lient.dll:4883EC58F3410F105104F3410F1009F3410F105908" + lVar10;
          lVar10 = local_760;
        } while (*pcVar12 != '\0');
        local_768 = "client.dll:4883EC58F3410F105104F3410F1009F3410F105908";
        local_748 = "patterns::particle_set_control_point";
        local_740 = 0x24;
        DAT_180c64438 = FUN_1800e5d20(&local_748,&local_768);
        DAT_1808edf58 = lVar8;
        DAT_180c64440 = 0xffffffffffffffff;
        if (DAT_180c64438 == 0) {
          DAT_180c64440 = DAT_1808edef0 + UVar7;
          uVar14 = DAT_1808edef0 * 2;
          if (59999 < DAT_1808edef0) {
            uVar14 = 60000;
          }
        }
        DAT_1808edef0 = uVar14;
      }
      lVar13 = DAT_180c64438;
      FUN_1805f68fc(&DAT_1808edf00);
    }
    pcVar12 = local_778[0];
  }
  cVar4 = FUN_1804513c0(lVar13,1,2);
  if (cVar4 != '\0') {
    lVar8 = FUN_18017ea70();
    *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
    local_798 = 0;
    local_7a0 = local_758;
    FUN_180244930(local_738,lVar13,pcVar12,iVar5);
    lVar8 = FUN_18017ea70();
    if (*(int *)(lVar8 + 4) != 0) {
      *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
    }
  }
LAB_180243442:
  piVar9 = (int *)FUN_18017ea70();
  *(undefined8 *)(piVar9 + 2) = uVar1;
  if (*piVar9 != 0) {
    *piVar9 = *piVar9 + -1;
  }
}



