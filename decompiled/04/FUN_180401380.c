// FUN_180401380 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180401380 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180401380(undefined8 param_1,longlong param_2,longlong *param_3,int param_4,
                  undefined8 param_5,char param_6)

{
  undefined1 uVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  byte bVar8;
  short sVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  longlong *plVar15;
  int *piVar16;
  longlong lVar17;
  ULONGLONG UVar18;
  undefined8 uVar19;
  uint *puVar20;
  undefined8 *puVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  longlong lVar26;
  char *pcVar27;
  ulonglong uVar28;
  char cVar29;
  char *pcVar30;
  undefined8 uVar31;
  undefined1 auVar32 [64];
  undefined1 auVar33 [64];
  undefined1 auVar34 [64];
  float fVar35;
  float fVar36;
  undefined1 auStack_b018 [32];
  undefined **local_aff8;
  longlong *local_aff0;
  longlong local_afe8;
  int local_afe0;
  char local_afd8;
  char local_afd0;
  undefined8 local_afc8;
  char *local_afc0;
  char local_afb8;
  int local_afb4;
  int local_afb0;
  ulonglong local_afa8;
  int local_afa0;
  char *local_af98;
  char local_af90;
  int local_af8c;
  ulonglong local_af88;
  int local_af80;
  ulonglong local_af78;
  int local_af70;
  int local_af6c;
  int local_af68;
  int local_af64;
  undefined8 local_af60;
  byte local_af57;
  char local_af54;
  longlong local_af50;
  longlong local_af48;
  char *local_af38;
  undefined8 local_af30;
  ulonglong local_af28;
  longlong local_af20;
  longlong local_af18;
  longlong local_af10;
  longlong local_af08;
  undefined4 local_af00;
  longlong local_aef8;
  undefined1 local_aef0 [16];
  undefined8 local_aee0;
  ulonglong uStack_aed8;
  ulonglong local_aed0 [6];
  bool local_aea0;
  bool local_ae9f;
  bool bStack_ae9e;
  bool bStack_ae9d;
  bool bStack_ae9c;
  bool bStack_ae9b;
  longlong alStack_ae98 [4];
  undefined8 local_ae78;
  undefined8 uStack_ae70;
  undefined8 local_ae68;
  undefined8 uStack_ae60;
  undefined1 local_ae58 [16];
  undefined8 local_ae48;
  undefined8 uStack_ae40;
  undefined8 local_ae38;
  undefined8 uStack_ae30;
  undefined8 local_ae28;
  undefined8 uStack_ae20;
  undefined8 local_ae18;
  undefined8 uStack_ae10;
  undefined8 local_ae08;
  int *local_ae00;
  longlong *local_adf8;
  longlong *local_adf0;
  undefined **local_ade8;
  undefined1 local_ade0 [16];
  undefined *local_add0;
  int *local_adc8;
  undefined1 local_adc0 [8];
  undefined1 local_adb8 [32];
  char local_ad98;
  undefined1 local_ad90 [16];
  undefined1 local_ad80 [16];
  undefined1 local_ad70 [32];
  undefined1 local_ad50 [32];
  longlong local_ad30;
  undefined *local_ad28 [2];
  char *local_ad18;
  longlong lStack_ad10;
  char local_ad08;
  char local_ad07 [15];
  char *local_acf8;
  longlong lStack_acf0;
  int local_ace8 [2];
  longlong local_ace0;
  longlong local_acd8 [2];
  undefined8 local_acc8;
  ulonglong *puStack_acc0;
  longlong local_acb8;
  longlong local_acb0;
  longlong local_aca8 [2];
  undefined1 local_ac98 [22560];
  undefined1 local_5478 [104];
  char local_5410;
  undefined1 local_540e;
  undefined8 local_4d38;
  undefined8 uStack_4d30;
  undefined *local_4d28 [2064];
  char *local_ca8 [2];
  char local_c98 [1536];
  char local_698 [1536];
  ulonglong local_98;
  
  local_98 = DAT_1808d5f00 ^ (ulonglong)auStack_b018;
  uVar31 = 0;
  local_afc0 = (char *)((ulonglong)local_afc0 & 0xffffffff00000000);
  local_ae58 = (undefined1  [16])0x0;
  local_af10 = param_2;
  plVar15 = (longlong *)FUN_180416b80();
  auVar3 = local_ae58;
  lVar17 = *plVar15;
  local_ae58._0_8_ = lVar17;
  local_aef8 = lVar17;
  if (lVar17 == 0) {
    local_af00 = 0;
    local_ae58._12_4_ = auVar3._12_4_;
    local_ae58._0_12_ = ZEXT812(0);
  }
  else {
    FUN_18017bf40(&local_af98);
    plVar15 = (longlong *)(lVar17 + 0x28 + (ulonglong)*(uint *)(lVar17 + 0x20) * 8);
    *plVar15 = (longlong)(local_af98 + (*plVar15 - *(longlong *)(lVar17 + 0x18)));
    *(char **)(lVar17 + 0x18) = local_af98;
    local_af00 = *(undefined4 *)(lVar17 + 0x20);
    *(undefined4 *)(lVar17 + 0x20) = 3;
    local_ae58._8_4_ = local_af00;
  }
  local_add0 = &DAT_180b8e1c8;
  iVar10 = FUN_1805f68d0(&DAT_180b8e1c8);
  if (iVar10 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_180b8e214 == 0x7fffffff) {
    DAT_180b8e214 = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  piVar16 = (int *)FUN_180415e00();
  *piVar16 = *piVar16 + 1;
  local_adc8 = piVar16;
  lVar17 = FUN_180415e00();
  *(longlong *)(lVar17 + 8) = *(longlong *)(lVar17 + 8) + 1;
  if (param_2 == 0) goto LAB_180405351;
  lVar17 = 0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    lVar17 = *(longlong *)(param_2 + 0x40) + 0x10;
  }
  if ((((lVar17 == 0) || (param_3[1] == 0)) || (*param_3 == 0)) || (param_4 < 1))
  goto LAB_180405351;
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  pcVar27 = DAT_1808da460;
  local_af20 = DAT_180c7d570;
  local_af98 = DAT_1809c0070;
  uVar25 = 1000;
  if ((DAT_1809c0070 != DAT_1808da460) || (DAT_180c7d570 == 0)) {
    local_afc8 = (char *)GetTickCount64();
    if ((local_af98 == pcVar27) && (local_afc8 < DAT_180c7d578)) {
      local_af20 = 0;
    }
    else {
      local_ad18 = &DAT_1809c0080;
      iVar10 = FUN_1805f68d0(&DAT_1809c0080);
      if (iVar10 != 0) goto LAB_180405a5f;
      if (DAT_1809c00cc == 0x7fffffff) {
        DAT_1809c00cc = 0x7ffffffe;
        goto LAB_180405a54;
      }
      local_af20 = DAT_180c7d570;
      if (DAT_1809c0070 == pcVar27) {
        if ((DAT_180c7d570 == 0) && (DAT_180c7d578 <= local_afc8)) goto LAB_1804015de;
      }
      else {
        DAT_1809bff50 = 1000;
LAB_1804015de:
        lVar17 = -1;
        do {
          lStack_acf0 = lVar17 + 1;
          lVar26 = lVar17 + 1;
          lVar17 = lStack_acf0;
        } while ("client.dll:8B81????????84D274??FFC08981????????C383E8018981????????75??80B9"
                 [lVar26] != '\0');
        local_acf8 = "client.dll:8B81????????84D274??FFC08981????????C383E8018981????????75??80B9";
        local_af38 = "patterns::prediction_set_state";
        local_af30 = 0x1e;
        local_af20 = FUN_1800e5d20(&local_af38,&local_acf8);
        DAT_1809c0070 = pcVar27;
        if (local_af20 == 0) {
          DAT_180c7d578 = local_afc8 + DAT_1809bff50;
          if (DAT_1809bff50 < 60000) {
            DAT_1809bff50 = DAT_1809bff50 * 2;
          }
          else {
            DAT_1809bff50 = 60000;
          }
        }
        else {
          DAT_180c7d578 = (char *)0xffffffffffffffff;
          DAT_1809bff50 = 1000;
        }
      }
      DAT_180c7d570 = local_af20;
      FUN_1805f68fc(&DAT_1809c0080);
    }
  }
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  pcVar27 = DAT_1808da460;
  local_af08 = DAT_180c7d548;
  local_af98 = DAT_1809bff58;
  if ((DAT_1809bff58 != DAT_1808da460) || (lVar17 = DAT_180c7d548, DAT_180c7d548 == 0)) {
    local_afc8 = (char *)GetTickCount64();
    if ((local_af98 == pcVar27) && (local_afc8 < DAT_180c7d550)) {
      lVar17 = 0;
      local_af08 = 0;
    }
    else {
      local_ad18 = &DAT_1809bff70;
      iVar10 = FUN_1805f68d0(&DAT_1809bff70);
      if (iVar10 != 0) goto LAB_180405a5f;
      if (DAT_1809bffbc == 0x7fffffff) {
        DAT_1809bffbc = 0x7ffffffe;
        goto LAB_180405a54;
      }
      local_af08 = DAT_180c7d548;
      if (DAT_1809bff58 == pcVar27) {
        if ((DAT_180c7d548 == 0) && (DAT_180c7d550 <= local_afc8)) goto LAB_180401775;
      }
      else {
        DAT_1809bff60 = 1000;
LAB_180401775:
        lVar17 = -1;
        do {
          lStack_acf0 = lVar17 + 1;
          lVar26 = lVar17 + 1;
          lVar17 = lStack_acf0;
        } while ("client.dll:48895C24??574883EC2048C70100000000488BFA488BD94885D274??488B02"[lVar26]
                 != '\0');
        local_acf8 = "client.dll:48895C24??574883EC2048C70100000000488BFA488BD94885D274??488B02";
        local_af38 = "patterns::prediction_set_pawn";
        local_af30 = 0x1d;
        local_af08 = FUN_1800e5d20(&local_af38,&local_acf8);
        DAT_1809bff58 = pcVar27;
        if (local_af08 == 0) {
          DAT_180c7d550 = local_afc8 + DAT_1809bff60;
          if (DAT_1809bff60 < 60000) {
            DAT_1809bff60 = DAT_1809bff60 * 2;
          }
          else {
            DAT_1809bff60 = 60000;
          }
        }
        else {
          DAT_180c7d550 = (char *)0xffffffffffffffff;
          DAT_1809bff60 = 1000;
        }
      }
      lVar17 = local_af08;
      DAT_180c7d548 = local_af08;
      FUN_1805f68fc(&DAT_1809bff70);
    }
  }
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  local_afc0 = DAT_1808da460;
  local_af18 = DAT_180c7d558;
  local_af98 = DAT_1809bffc0;
  if ((DAT_1809bffc0 != DAT_1808da460) || (DAT_180c7d558 == 0)) {
    local_afc8 = (char *)GetTickCount64();
    if ((local_af98 == local_afc0) && (local_afc8 < DAT_180c7d530)) {
      local_af18 = 0;
    }
    else {
      local_ad18 = &DAT_1809bfea0;
      iVar10 = FUN_1805f68d0(&DAT_1809bfea0);
      if (iVar10 != 0) goto LAB_180405a5f;
      if (DAT_1809bfeec == 0x7fffffff) {
        DAT_1809bfeec = 0x7ffffffe;
        goto LAB_180405a54;
      }
      local_af18 = DAT_180c7d558;
      if (DAT_1809bffc0 == local_afc0) {
        if ((DAT_180c7d558 == 0) && (DAT_180c7d530 <= local_afc8)) goto LAB_18040190e;
      }
      else {
        DAT_1809bfef0 = 1000;
LAB_18040190e:
        lVar26 = -1;
        do {
          lStack_acf0 = lVar26 + 1;
          pcVar27 = "lient.dll:498BD5498BCE458B4044>E8????????488B074D8BC6" + lVar26;
          lVar26 = lStack_acf0;
        } while (*pcVar27 != '\0');
        local_acf8 = "client.dll:498BD5498BCE458B4044>E8????????488B074D8BC6";
        local_af38 = "patterns::prediction_setup_move";
        local_af30 = 0x1f;
        local_af18 = FUN_1800e5d20(&local_af38,&local_acf8);
        DAT_1809bffc0 = local_afc0;
        if (local_af18 == 0) {
          DAT_180c7d530 = local_afc8 + DAT_1809bfef0;
          if (DAT_1809bfef0 < 60000) {
            DAT_1809bfef0 = DAT_1809bfef0 * 2;
          }
          else {
            DAT_1809bfef0 = 60000;
          }
        }
        else {
          DAT_180c7d530 = (char *)0xffffffffffffffff;
          DAT_1809bfef0 = 1000;
        }
      }
      DAT_180c7d558 = local_af18;
      FUN_1805f68fc(&DAT_1809bfea0);
    }
  }
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  local_afc0 = DAT_1808da460;
  local_af98 = DAT_1809bfef8;
  if ((DAT_1809bfef8 != DAT_1808da460) || (lVar26 = DAT_180c7d538, DAT_180c7d538 == 0)) {
    local_afc8 = (char *)GetTickCount64();
    if ((local_af98 == local_afc0) && (local_afc8 < DAT_180c7d540)) {
      lVar26 = 0;
    }
    else {
      local_ad18 = &DAT_1809bff00;
      iVar10 = FUN_1805f68d0(&DAT_1809bff00);
      if (iVar10 != 0) goto LAB_180405a5f;
      if (DAT_1809bff4c == 0x7fffffff) {
        DAT_1809bff4c = 0x7ffffffe;
        goto LAB_180405a54;
      }
      if (DAT_1809bfef8 == local_afc0) {
        if ((DAT_180c7d538 == 0) && (DAT_180c7d540 <= local_afc8)) goto LAB_180401aaa;
      }
      else {
        DAT_1809bfe30 = 1000;
LAB_180401aaa:
        lVar26 = -1;
        do {
          lStack_acf0 = lVar26 + 1;
          pcVar27 = "lient.dll:450FB6CC4D8BC6498BD5488BCF488BD8>E8????????FFD3" + lVar26;
          lVar26 = lStack_acf0;
        } while (*pcVar27 != '\0');
        local_acf8 = "client.dll:450FB6CC4D8BC6498BD5488BCF488BD8>E8????????FFD3";
        local_af38 = "patterns::prediction_process_movement";
        local_af30 = 0x25;
        DAT_180c7d538 = FUN_1800e5d20(&local_af38,&local_acf8);
        DAT_1809bfef8 = local_afc0;
        if (DAT_180c7d538 == 0) {
          DAT_180c7d540 = local_afc8 + DAT_1809bfe30;
          if (DAT_1809bfe30 < 60000) {
            DAT_1809bfe30 = DAT_1809bfe30 * 2;
          }
          else {
            DAT_1809bfe30 = 60000;
          }
        }
        else {
          DAT_180c7d540 = (char *)0xffffffffffffffff;
          DAT_1809bfe30 = 1000;
        }
      }
      lVar26 = DAT_180c7d538;
      FUN_1805f68fc(&DAT_1809bff00);
    }
  }
  local_acb8 = lVar26;
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  local_afc0 = DAT_1808da460;
  local_af98 = DAT_1809bfe38;
  if ((DAT_1809bfe38 != DAT_1808da460) || (lVar26 = DAT_180c7d518, DAT_180c7d518 == 0)) {
    local_afc8 = (char *)GetTickCount64();
    if ((local_af98 == local_afc0) && (local_afc8 < DAT_180c7d520)) {
      lVar26 = 0;
    }
    else {
      local_ad18 = &DAT_1809bfe50;
      iVar10 = FUN_1805f68d0(&DAT_1809bfe50);
      if (iVar10 != 0) goto LAB_180405a5f;
      if (DAT_1809bfe9c == 0x7fffffff) {
        DAT_1809bfe9c = 0x7ffffffe;
        goto LAB_180405a54;
      }
      if (DAT_1809bfe38 == local_afc0) {
        if ((DAT_180c7d518 == 0) && (DAT_180c7d520 <= local_afc8)) goto LAB_180401c41;
      }
      else {
        DAT_1809bfe40 = 1000;
LAB_180401c41:
        lVar26 = -1;
        do {
          lStack_acf0 = lVar26 + 1;
          lVar4 = lVar26 + 1;
          lVar26 = lStack_acf0;
        } while ("client.dll:450FB6CC4D8BC6498BD5488BCF>E8????????488B8798010000"[lVar4] != '\0');
        local_acf8 = "client.dll:450FB6CC4D8BC6498BD5488BCF>E8????????488B8798010000";
        local_af38 = "patterns::prediction_finish_move";
        local_af30 = 0x20;
        DAT_180c7d518 = FUN_1800e5d20(&local_af38,&local_acf8);
        DAT_1809bfe38 = local_afc0;
        if (DAT_180c7d518 == 0) {
          DAT_180c7d520 = local_afc8 + DAT_1809bfe40;
          if (DAT_1809bfe40 < 60000) {
            DAT_1809bfe40 = DAT_1809bfe40 * 2;
          }
          else {
            DAT_1809bfe40 = 60000;
          }
        }
        else {
          DAT_180c7d520 = (char *)0xffffffffffffffff;
          DAT_1809bfe40 = 1000;
        }
      }
      lVar26 = DAT_180c7d518;
      FUN_1805f68fc(&DAT_1809bfe50);
    }
  }
  local_aca8[0] = lVar26;
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  local_afc0 = DAT_1808da460;
  local_af98 = DAT_1809bfd80;
  if ((DAT_1809bfd80 != DAT_1808da460) || (lVar26 = DAT_180c7d528, DAT_180c7d528 == 0)) {
    local_afc8 = (char *)GetTickCount64();
    if ((local_af98 == local_afc0) && (local_afc8 < DAT_180c7d500)) {
      lVar26 = 0;
    }
    else {
      local_ad18 = &DAT_1809bfd90;
      iVar10 = FUN_1805f68d0(&DAT_1809bfd90);
      if (iVar10 != 0) goto LAB_180405a5f;
      if (DAT_1809bfddc == 0x7fffffff) {
        DAT_1809bfddc = 0x7ffffffe;
        goto LAB_180405a54;
      }
      if (DAT_1809bfd80 == local_afc0) {
        if ((DAT_180c7d528 == 0) && (DAT_180c7d500 <= local_afc8)) goto LAB_180401ddd;
      }
      else {
        DAT_1809bfd88 = 1000;
LAB_180401ddd:
        lVar26 = -1;
        do {
          lStack_acf0 = lVar26 + 1;
          pcVar27 = "lient.dll:488B114885D274??806A????75??488B05????????8B4044894218" + lVar26;
          lVar26 = lStack_acf0;
        } while (*pcVar27 != '\0');
        local_acf8 = "client.dll:488B114885D274??806A????75??488B05????????8B4044894218";
        local_af38 = "patterns::prediction_reset_pawn";
        local_af30 = 0x1f;
        DAT_180c7d528 = FUN_1800e5d20(&local_af38,&local_acf8);
        DAT_1809bfd80 = local_afc0;
        if (DAT_180c7d528 == 0) {
          DAT_180c7d500 = local_afc8 + DAT_1809bfd88;
          uVar25 = DAT_1809bfd88 * 2;
          if (59999 < DAT_1809bfd88) {
            uVar25 = 60000;
          }
        }
        else {
          DAT_180c7d500 = (char *)0xffffffffffffffff;
        }
        DAT_1809bfd88 = uVar25;
      }
      lVar26 = DAT_180c7d528;
      FUN_1805f68fc(&DAT_1809bfd90);
    }
  }
  cVar29 = DAT_180c7ca71;
  cVar5 = DAT_180c7ca70;
  local_acb0 = lVar26;
  if ((((local_af20 == 0) || (lVar17 == 0)) || (local_af18 == 0)) ||
     (((local_acb8 == 0 || (local_aca8[0] == 0)) || (lVar26 == 0)))) {
    LOCK();
    DAT_180c7ca71 = '\x01';
    UNLOCK();
    if (cVar29 != '\0') goto LAB_180405351;
    local_ad18 = 
    "[prediction] disabled: helper availability set_state={} set_pawn={} setup_move={} process_movement={} finish_move={} reset_pawn={}"
    ;
    lStack_ad10 = 0x82;
    local_aea0 = local_af20 != 0;
    local_aed0[0] = 0x5000000000000000;
    local_ae9f = local_af08 != 0;
    local_aed0[1] = 0x5000000000000001;
    bStack_ae9e = local_af18 != 0;
    local_aed0[2] = 0x5000000000000002;
    bStack_ae9d = local_acb8 != 0;
    local_aed0[3] = 0x5000000000000003;
    bStack_ae9c = local_aca8[0] != 0;
    local_aed0[4] = 0x5000000000000004;
    bStack_ae9b = lVar26 != 0;
    local_aed0[5] = 0x5000000000000005;
    local_acc8 = 6;
    puStack_acc0 = local_aed0;
    local_aee0 = 0;
    uStack_aed8 = 0xf;
    local_aef0._1_15_ = SUB1615((undefined1  [16])0x0,1);
    auVar3[0xf] = 0;
    auVar3._0_15_ = local_aef0._1_15_;
    local_aef0 = auVar3 << 8;
    local_afc0 = (char *)CONCAT44(local_afc0._4_4_,1);
    uVar25 = 0;
    uVar28 = 0;
    do {
      bVar8 = (byte)(local_aed0[uVar28] >> 0x3c);
      if (bVar8 == 0xc) {
        uVar24 = local_aed0[uVar28] & 0xfffffffffffffff;
        local_ade0 = (undefined1  [16])0x0;
        local_ade0._8_8_ = *(longlong *)((longlong)alStack_ae98 + uVar24);
        local_ade0._0_8_ = *(undefined8 *)((longlong)local_aed0 + uVar24 + 0x30);
        uVar25 = uVar25 + local_ade0._8_8_;
      }
      else if (bVar8 == 0xb) {
        uVar25 = uVar25 + 0x20;
      }
      else {
        uVar25 = uVar25 + 8;
      }
      uVar28 = uVar28 + 1;
    } while (uVar28 < 6);
    lVar17 = uVar25 + 0x82;
    if (0xffffffffffffff7d < uVar25) {
      lVar17 = -1;
    }
    FUN_1800f5540(local_aef0,lVar17);
    local_acf8 = local_ad18;
    lStack_acf0 = lStack_ad10;
    local_aff8 = (undefined **)0x0;
    FUN_1801da050(&local_ad18,local_aef0,&local_acf8,&local_acc8);
    puVar23 = local_aef0;
    if (uStack_aed8 < 0x10) {
LAB_180405a1a:
      puVar22 = (undefined1 *)FUN_1803b0a60();
      uVar1 = *puVar22;
      puVar22 = (undefined1 *)FUN_1803b0a60();
      *puVar22 = 1;
      FUN_1800a9e50(1,puVar23);
      puVar23 = (undefined1 *)FUN_1803b0a60();
      *puVar23 = uVar1;
    }
    else {
      puVar23 = (undefined1 *)local_aef0._0_8_;
      if ((undefined1 *)local_aef0._0_8_ != (undefined1 *)0x0) goto LAB_180405a1a;
    }
    FUN_18015c010(local_aef0);
    goto LAB_180405351;
  }
  LOCK();
  DAT_180c7ca70 = '\x01';
  UNLOCK();
  if (cVar5 == '\0') {
    local_ad18 = "[prediction] helpers ready";
    lStack_ad10 = 0x1a;
    FUN_18020e620(&local_ad18);
  }
  iVar10 = DAT_180c7d4f0;
  if (DAT_180c7d4f0 == 0) {
    UVar18 = GetTickCount64();
    if (UVar18 < DAT_180c7d4e8) {
      iVar10 = 0;
    }
    else {
      local_ad18 = &DAT_1809bfce0;
      iVar10 = FUN_1805f68d0(&DAT_1809bfce0);
      if (iVar10 != 0) goto LAB_180405a5f;
      if (DAT_1809bfd2c == 0x7fffffff) {
        DAT_1809bfd2c = 0x7ffffffe;
        goto LAB_180405a54;
      }
      if ((DAT_180c7d4f0 == 0) && (DAT_180c7d4e8 <= UVar18)) {
        DAT_180c7d4f0 = FUN_1804174b0("C_BaseEntity",0x9d930423);
        if (DAT_180c7d4f0 == 0) {
          DAT_180c7d4e8 = UVar18 + 1000;
        }
        else {
          DAT_180c7d4e8 = 0xffffffffffffffff;
        }
      }
      iVar10 = DAT_180c7d4f0;
      FUN_1805f68fc(&DAT_1809bfce0);
    }
  }
  lVar17 = *(longlong *)((longlong)iVar10 + param_3[1]);
  iVar10 = DAT_180c7d4f4;
  local_acd8[0] = lVar17;
  if (DAT_180c7d4f4 == 0) {
    local_afc8 = (char *)GetTickCount64();
    if (local_afc8 < DAT_180c7d4f8) {
      iVar10 = 0;
    }
    else {
      local_ad18 = &DAT_1809bfd30;
      iVar10 = FUN_1805f68d0(&DAT_1809bfd30);
      if (iVar10 != 0) goto LAB_180405a5f;
      if (DAT_1809bfd7c == 0x7fffffff) {
        DAT_1809bfd7c = 0x7ffffffe;
        goto LAB_180405a54;
      }
      if ((DAT_180c7d4f4 == 0) && (DAT_180c7d4f8 <= local_afc8)) {
        DAT_180c7d4f4 = FUN_1804174b0("C_BasePlayerPawn",0xcf73e28a);
        if (DAT_180c7d4f4 == 0) {
          DAT_180c7d4f8 = local_afc8 + 1000;
        }
        else {
          DAT_180c7d4f8 = (char *)0xffffffffffffffff;
        }
      }
      iVar10 = DAT_180c7d4f4;
      FUN_1805f68fc(&DAT_1809bfd30);
    }
  }
  local_ad30 = *(longlong *)((longlong)iVar10 + param_3[1]);
  iVar10 = DAT_180c7d4c0;
  if (DAT_180c7d4c0 == 0) {
    local_afc8 = (char *)GetTickCount64();
    if (local_afc8 < DAT_180c7d4b8) {
      iVar10 = 0;
    }
    else {
      local_ad18 = &DAT_1809bfbf0;
      iVar10 = FUN_1805f68d0(&DAT_1809bfbf0);
      if (iVar10 != 0) goto LAB_180405a5f;
      if (DAT_1809bfc3c == 0x7fffffff) {
        DAT_1809bfc3c = 0x7ffffffe;
        goto LAB_180405a54;
      }
      if ((DAT_180c7d4c0 == 0) && (DAT_180c7d4b8 <= local_afc8)) {
        DAT_180c7d4c0 = FUN_1804174b0("C_CSPlayerPawn",0x268624b4);
        if (DAT_180c7d4c0 == 0) {
          DAT_180c7d4b8 = local_afc8 + 1000;
        }
        else {
          DAT_180c7d4b8 = (char *)0xffffffffffffffff;
        }
      }
      iVar10 = DAT_180c7d4c0;
      FUN_1805f68fc(&DAT_1809bfbf0);
    }
  }
  pcVar27 = *(char **)((longlong)iVar10 + param_3[1]);
  local_ad18 = pcVar27;
  FUN_180405a90();
  lVar26 = DAT_180bb8958;
  if ((((lVar17 == 0) || (local_ad30 == 0)) || (pcVar27 == (char *)0x0)) || (local_af48 == 0))
  goto LAB_180405351;
  lVar17 = FUN_18017ea70();
  *(int *)(lVar17 + 4) = *(int *)(lVar17 + 4) + 1;
  if (lVar26 == 0) {
    bVar2 = false;
    local_afc0 = local_ca8[0];
  }
  else {
    local_afc8 = (char *)0x0;
    cVar5 = FUN_1804514f0(&local_afc8,lVar26,8);
    if (cVar5 == '\0') {
      bVar2 = false;
      local_afc0 = local_ca8[0];
    }
    else {
      local_afc0 = local_afc8;
      bVar2 = true;
    }
  }
  lVar17 = FUN_18017ea70();
  if (*(int *)(lVar17 + 4) != 0) {
    *(int *)(lVar17 + 4) = *(int *)(lVar17 + 4) + -1;
  }
  lVar17 = DAT_180c7ca78;
  pcVar27 = (char *)0x0;
  if (bVar2) {
    pcVar27 = local_afc0;
  }
  local_ace0 = local_af10;
  local_af38 = pcVar27;
  lVar26 = FUN_18017ea70();
  *(int *)(lVar26 + 4) = *(int *)(lVar26 + 4) + 1;
  if (lVar17 + 0x38 == 0) {
    bVar2 = false;
    local_afc0 = local_ca8[0];
  }
  else {
    local_afc8 = (char *)0x0;
    cVar5 = FUN_1804514f0(&local_afc8,lVar17 + 0x38,8);
    if (cVar5 == '\0') {
      bVar2 = false;
      local_afc0 = local_ca8[0];
    }
    else {
      bVar2 = true;
      local_afc0 = local_afc8;
    }
  }
  lVar17 = FUN_18017ea70();
  if (*(int *)(lVar17 + 4) != 0) {
    *(int *)(lVar17 + 4) = *(int *)(lVar17 + 4) + -1;
  }
  lVar17 = DAT_180c717c8;
  local_af98 = (char *)0x0;
  if (bVar2) {
    local_af98 = local_afc0;
  }
  lVar26 = FUN_18017ea70();
  *(int *)(lVar26 + 4) = *(int *)(lVar26 + 4) + 1;
  if (lVar17 == 0) {
    bVar2 = false;
    local_afc0 = local_ca8[0];
  }
  else {
    local_afc8 = (char *)0x0;
    cVar5 = FUN_1804514f0(&local_afc8,lVar17,8);
    if (cVar5 == '\0') {
      bVar2 = false;
      local_afc0 = local_ca8[0];
    }
    else {
      bVar2 = true;
      local_afc0 = local_afc8;
    }
  }
  lVar17 = FUN_18017ea70();
  if (*(int *)(lVar17 + 4) != 0) {
    *(int *)(lVar17 + 4) = *(int *)(lVar17 + 4) + -1;
  }
  local_afc8 = (char *)0x0;
  if (bVar2) {
    local_afc8 = local_afc0;
  }
  if ((pcVar27 == (char *)0x0) || (local_afc8 == (char *)0x0)) goto LAB_180405351;
  local_af80 = DAT_180c7d4c4;
  if (DAT_180c7d4c4 == 0) {
    UVar18 = GetTickCount64();
    if (UVar18 < DAT_180c7d4c8) {
      local_af80 = 0;
    }
    else {
      local_acf8 = &DAT_1809bfc40;
      iVar10 = FUN_1805f68d0(&DAT_1809bfc40);
      if (iVar10 != 0) goto LAB_180405a5f;
      if (DAT_1809bfc8c == 0x7fffffff) {
        DAT_1809bfc8c = 0x7ffffffe;
        goto LAB_180405a54;
      }
      local_af80 = DAT_180c7d4c4;
      if ((DAT_180c7d4c4 == 0) && (DAT_180c7d4c8 <= UVar18)) {
        local_af80 = FUN_1804174b0("CGameSceneNode",0x559d81af);
        if (local_af80 == 0) {
          DAT_180c7d4c8 = UVar18 + 1000;
        }
        else {
          DAT_180c7d4c8 = 0xffffffffffffffff;
        }
      }
      DAT_180c7d4c4 = local_af80;
      FUN_1805f68fc(&DAT_1809bfc40);
    }
  }
  local_afb4 = DAT_180c7d4d8;
  if (DAT_180c7d4d8 == 0) {
    UVar18 = GetTickCount64();
    if (UVar18 < DAT_180c7d4d0) {
      local_afb4 = 0;
    }
    else {
      local_acf8 = &DAT_1809bfb00;
      iVar10 = FUN_1805f68d0(&DAT_1809bfb00);
      if (iVar10 != 0) goto LAB_180405a5f;
      if (DAT_1809bfb4c == 0x7fffffff) {
        DAT_1809bfb4c = 0x7ffffffe;
        goto LAB_180405a54;
      }
      local_afb4 = DAT_180c7d4d8;
      if ((DAT_180c7d4d8 == 0) && (DAT_180c7d4d0 <= UVar18)) {
        local_afb4 = FUN_1804174b0("CGameSceneNode",0x5e8229ed);
        if (local_afb4 == 0) {
          DAT_180c7d4d0 = UVar18 + 1000;
        }
        else {
          DAT_180c7d4d0 = 0xffffffffffffffff;
        }
      }
      DAT_180c7d4d8 = local_afb4;
      FUN_1805f68fc(&DAT_1809bfb00);
    }
  }
  local_af28 = CONCAT44(local_af28._4_4_,DAT_180c7d498);
  if (DAT_180c7d498 == 0) {
    UVar18 = GetTickCount64();
    if (UVar18 < DAT_180c7d4a0) {
      local_af28 = local_af28 & 0xffffffff00000000;
    }
    else {
      local_acf8 = &DAT_1809bfb50;
      iVar10 = FUN_1805f68d0(&DAT_1809bfb50);
      if (iVar10 != 0) goto LAB_180405a5f;
      if (DAT_1809bfb9c == 0x7fffffff) {
        DAT_1809bfb9c = 0x7ffffffe;
        goto LAB_180405a54;
      }
      local_af28 = CONCAT44(local_af28._4_4_,DAT_180c7d498);
      if ((DAT_180c7d498 == 0) && (DAT_180c7d4a0 <= UVar18)) {
        DAT_180c7d498 = FUN_1804174b0("CGameSceneNode",0xae099497);
        local_af28 = CONCAT44(local_af28._4_4_,DAT_180c7d498);
        if (DAT_180c7d498 == 0) {
          DAT_180c7d4a0 = UVar18 + 1000;
        }
        else {
          DAT_180c7d4a0 = 0xffffffffffffffff;
        }
      }
      FUN_1805f68fc(&DAT_1809bfb50);
    }
  }
  local_af70 = DAT_180c7d4b0;
  if (DAT_180c7d4b0 == 0) {
    UVar18 = GetTickCount64();
    if (UVar18 < DAT_180c7d4a8) {
      local_af70 = 0;
    }
    else {
      local_acf8 = &DAT_1809bfba0;
      iVar10 = FUN_1805f68d0(&DAT_1809bfba0);
      if (iVar10 != 0) goto LAB_180405a5f;
      if (DAT_1809bfbec == 0x7fffffff) {
        DAT_1809bfbec = 0x7ffffffe;
        goto LAB_180405a54;
      }
      local_af70 = DAT_180c7d4b0;
      if ((DAT_180c7d4b0 == 0) && (DAT_180c7d4a8 <= UVar18)) {
        local_af70 = FUN_1804174b0("CGameSceneNode",0xe9eb4068);
        if (local_af70 == 0) {
          DAT_180c7d4a8 = UVar18 + 1000;
        }
        else {
          DAT_180c7d4a8 = 0xffffffffffffffff;
        }
      }
      DAT_180c7d4b0 = local_af70;
      FUN_1805f68fc(&DAT_1809bfba0);
    }
  }
  local_af68 = DAT_180c7d4b4;
  if (DAT_180c7d4b4 == 0) {
    UVar18 = GetTickCount64();
    if (UVar18 < DAT_180c7d478) {
      local_af68 = 0;
    }
    else {
      local_acf8 = &DAT_1809bfa10;
      iVar10 = FUN_1805f68d0(&DAT_1809bfa10);
      if (iVar10 != 0) goto LAB_180405a5f;
      if (DAT_1809bfa5c == 0x7fffffff) {
        DAT_1809bfa5c = 0x7ffffffe;
        goto LAB_180405a54;
      }
      local_af68 = DAT_180c7d4b4;
      if ((DAT_180c7d4b4 == 0) && (DAT_180c7d478 <= UVar18)) {
        local_af68 = FUN_1804174b0("CGameSceneNode",0x2874c05f);
        if (local_af68 == 0) {
          DAT_180c7d478 = UVar18 + 1000;
        }
        else {
          DAT_180c7d478 = 0xffffffffffffffff;
        }
      }
      DAT_180c7d4b4 = local_af68;
      FUN_1805f68fc(&DAT_1809bfa10);
    }
  }
  local_af8c = DAT_180c7d488;
  if (DAT_180c7d488 == 0) {
    UVar18 = GetTickCount64();
    if (UVar18 < DAT_180c7d480) {
      local_af8c = 0;
    }
    else {
      local_acf8 = &DAT_1809bfa60;
      iVar10 = FUN_1805f68d0(&DAT_1809bfa60);
      if (iVar10 != 0) goto LAB_180405a5f;
      if (DAT_1809bfaac == 0x7fffffff) {
        DAT_1809bfaac = 0x7ffffffe;
        goto LAB_180405a54;
      }
      local_af8c = DAT_180c7d488;
      if ((DAT_180c7d488 == 0) && (DAT_180c7d480 <= UVar18)) {
        local_af8c = FUN_1804174b0("CGameSceneNode",0x7b9bf275);
        if (local_af8c == 0) {
          DAT_180c7d480 = UVar18 + 1000;
        }
        else {
          DAT_180c7d480 = 0xffffffffffffffff;
        }
      }
      DAT_180c7d488 = local_af8c;
      FUN_1805f68fc(&DAT_1809bfa60);
    }
  }
  local_afa0 = DAT_180c7d48c;
  if (DAT_180c7d48c == 0) {
    UVar18 = GetTickCount64();
    if (UVar18 < DAT_180c7d490) {
      local_afa0 = 0;
    }
    else {
      local_acf8 = &DAT_1809bfab0;
      iVar10 = FUN_1805f68d0(&DAT_1809bfab0);
      if (iVar10 != 0) goto LAB_180405a5f;
      if (DAT_1809bfafc == 0x7fffffff) {
        DAT_1809bfafc = 0x7ffffffe;
        goto LAB_180405a54;
      }
      local_afa0 = DAT_180c7d48c;
      if ((DAT_180c7d48c == 0) && (DAT_180c7d490 <= UVar18)) {
        local_afa0 = FUN_1804174b0("CGameSceneNode",0xe8eb2386);
        if (local_afa0 == 0) {
          DAT_180c7d490 = UVar18 + 1000;
        }
        else {
          DAT_180c7d490 = 0xffffffffffffffff;
        }
      }
      DAT_180c7d48c = local_afa0;
      FUN_1805f68fc(&DAT_1809bfab0);
    }
  }
  local_af6c = DAT_180c7d458;
  if (DAT_180c7d458 == 0) {
    UVar18 = GetTickCount64();
    if (UVar18 < DAT_180c7d450) {
      local_af6c = 0;
    }
    else {
      local_acf8 = &DAT_1809bf970;
      iVar10 = FUN_1805f68d0(&DAT_1809bf970);
      if (iVar10 != 0) goto LAB_180405a5f;
      if (DAT_1809bf9bc == 0x7fffffff) {
        DAT_1809bf9bc = 0x7ffffffe;
        goto LAB_180405a54;
      }
      local_af6c = DAT_180c7d458;
      if ((DAT_180c7d458 == 0) && (DAT_180c7d450 <= UVar18)) {
        local_af6c = FUN_1804174b0("CGameSceneNode",0x6b325da);
        if (local_af6c == 0) {
          DAT_180c7d450 = UVar18 + 1000;
        }
        else {
          DAT_180c7d450 = 0xffffffffffffffff;
        }
      }
      DAT_180c7d458 = local_af6c;
      FUN_1805f68fc(&DAT_1809bf970);
    }
  }
  local_afc0 = (char *)CONCAT44(local_afc0._4_4_,local_afb4 - local_af80);
  local_af78 = CONCAT44(local_af78._4_4_,DAT_180c7d45c);
  if (DAT_180c7d45c == 0) {
    UVar18 = GetTickCount64();
    if (UVar18 < DAT_180c7d460) {
      local_af78 = local_af78 & 0xffffffff00000000;
    }
    else {
      local_acf8 = &DAT_1809bf9c0;
      iVar10 = FUN_1805f68d0(&DAT_1809bf9c0);
      if (iVar10 != 0) goto LAB_180405a5f;
      if (DAT_1809bfa0c == 0x7fffffff) {
        DAT_1809bfa0c = 0x7ffffffe;
        goto LAB_180405a54;
      }
      local_af78 = CONCAT44(local_af78._4_4_,DAT_180c7d45c);
      if ((DAT_180c7d45c == 0) && (DAT_180c7d460 <= UVar18)) {
        DAT_180c7d45c = FUN_1804174b0("C_BaseEntity",0x7cf77892);
        local_af78 = CONCAT44(local_af78._4_4_,DAT_180c7d45c);
        if (DAT_180c7d45c == 0) {
          DAT_180c7d460 = UVar18 + 1000;
        }
        else {
          DAT_180c7d460 = 0xffffffffffffffff;
        }
      }
      FUN_1805f68fc(&DAT_1809bf9c0);
    }
  }
  iVar10 = DAT_180c7d470;
  if (DAT_180c7d470 == 0) {
    UVar18 = GetTickCount64();
    if (UVar18 < DAT_180c7d468) {
      iVar10 = 0;
    }
    else {
      local_acf8 = &DAT_1809bf880;
      iVar10 = FUN_1805f68d0(&DAT_1809bf880);
      if (iVar10 != 0) goto LAB_180405a5f;
      if (DAT_1809bf8cc == 0x7fffffff) {
        DAT_1809bf8cc = 0x7ffffffe;
        goto LAB_180405a54;
      }
      if ((DAT_180c7d470 == 0) && (DAT_180c7d468 <= UVar18)) {
        DAT_180c7d470 = FUN_1804174b0("C_CSPlayerPawn",0x4ee662ac);
        if (DAT_180c7d470 == 0) {
          DAT_180c7d468 = UVar18 + 1000;
        }
        else {
          DAT_180c7d468 = 0xffffffffffffffff;
        }
      }
      iVar10 = DAT_180c7d470;
      FUN_1805f68fc(&DAT_1809bf880);
    }
  }
  iVar11 = DAT_180c7d430;
  if (DAT_180c7d430 == 0) {
    local_af60 = GetTickCount64();
    if (local_af60 < DAT_180c7d438) {
      iVar11 = 0;
    }
    else {
      local_acf8 = &DAT_1809bf8d0;
      iVar11 = FUN_1805f68d0(&DAT_1809bf8d0);
      if (iVar11 != 0) goto LAB_180405a5f;
      if (DAT_1809bf91c == 0x7fffffff) {
        DAT_1809bf91c = 0x7ffffffe;
        goto LAB_180405a54;
      }
      if ((DAT_180c7d430 == 0) && (DAT_180c7d438 <= local_af60)) {
        DAT_180c7d430 = FUN_1804174b0("C_CSPlayerPawn",0xffe39e4);
        if (DAT_180c7d430 == 0) {
          DAT_180c7d438 = local_af60 + 1000;
        }
        else {
          DAT_180c7d438 = 0xffffffffffffffff;
        }
      }
      iVar11 = DAT_180c7d430;
      FUN_1805f68fc(&DAT_1809bf8d0);
    }
  }
  local_afb0 = DAT_180c7d448;
  if (DAT_180c7d448 == 0) {
    local_af60 = GetTickCount64();
    if (local_af60 < DAT_180c7d440) {
      local_afb0 = 0;
    }
    else {
      local_acf8 = &DAT_1809bf920;
      iVar13 = FUN_1805f68d0(&DAT_1809bf920);
      if (iVar13 != 0) goto LAB_180405a5f;
      if (DAT_1809bf96c == 0x7fffffff) {
        DAT_1809bf96c = 0x7ffffffe;
        goto LAB_180405a54;
      }
      local_afb0 = DAT_180c7d448;
      if ((DAT_180c7d448 == 0) && (DAT_180c7d440 <= local_af60)) {
        local_afb0 = FUN_1804174b0("C_CSPlayerPawn",0x9d496006);
        if (local_afb0 == 0) {
          DAT_180c7d440 = local_af60 + 1000;
        }
        else {
          DAT_180c7d440 = 0xffffffffffffffff;
        }
      }
      DAT_180c7d448 = local_afb0;
      FUN_1805f68fc(&DAT_1809bf920);
    }
  }
  local_af88 = CONCAT44(local_af88._4_4_,DAT_180c7d44c);
  iVar13 = DAT_180c7d44c;
  if (DAT_180c7d44c == 0) {
    local_af60 = GetTickCount64();
    if (local_af60 < DAT_180c7d410) {
      iVar13 = 0;
      local_af88 = local_af88 & 0xffffffff00000000;
    }
    else {
      local_acf8 = &DAT_1809bf790;
      iVar13 = FUN_1805f68d0(&DAT_1809bf790);
      if (iVar13 != 0) goto LAB_180405a5f;
      if (DAT_1809bf7dc == 0x7fffffff) {
        DAT_1809bf7dc = 0x7ffffffe;
        goto LAB_180405a54;
      }
      local_af88 = CONCAT44(local_af88._4_4_,DAT_180c7d44c);
      if ((DAT_180c7d44c == 0) && (DAT_180c7d410 <= local_af60)) {
        DAT_180c7d44c = FUN_1804174b0("C_CSPlayerPawn",0x4e1ea0c7);
        local_af88 = CONCAT44(local_af88._4_4_,DAT_180c7d44c);
        if (DAT_180c7d44c == 0) {
          DAT_180c7d410 = local_af60 + 1000;
        }
        else {
          DAT_180c7d410 = 0xffffffffffffffff;
        }
      }
      FUN_1805f68fc(&DAT_1809bf790);
      iVar13 = (int)local_af88;
    }
  }
  if ((((iVar10 == 0) || (iVar11 != iVar10 + 0x90)) ||
      ((longlong)local_afb0 != (longlong)iVar11 + 0x10)) ||
     (local_af60 = (ULONGLONG)iVar13, local_af60 != (longlong)local_afb0 + 0x30U)) {
LAB_1804057ad:
    cVar5 = DAT_180c7ca72;
    LOCK();
    DAT_180c7ca72 = '\x01';
    UNLOCK();
    if (cVar5 != '\0') goto LAB_180405351;
    FUN_18063ab10(local_698,0,0x600);
    local_afe0 = (int)local_af88;
    local_afe8 = CONCAT44(local_afe8._4_4_,local_afb0);
    local_aff0 = (longlong *)CONCAT44(local_aff0._4_4_,iVar11);
    local_aff8 = (undefined **)CONCAT44(local_aff8._4_4_,iVar10);
    FUN_18015ad60(local_698,0x600,0xffffffffffffffff,
                  "eye_angles=%u times=%u history=%u angular_velocity=%u native_trial_started=0");
    local_aff8 = &PTR_180700558;
    if (local_698[0] != '\0') {
      local_aff8 = (undefined **)&DAT_1806bcfc0;
    }
    local_aff0 = (longlong *)local_698;
  }
  else {
    iVar13 = DAT_180c7d420;
    if (DAT_180c7d420 == 0) {
      local_afa8 = GetTickCount64();
      if (local_afa8 < DAT_180c7d418) {
        iVar13 = 0;
      }
      else {
        local_acf8 = &DAT_1809bf7e0;
        iVar13 = FUN_1805f68d0(&DAT_1809bf7e0);
        if (iVar13 != 0) goto LAB_180405a5f;
        if (DAT_1809bf82c == 0x7fffffff) {
          DAT_1809bf82c = 0x7ffffffe;
          goto LAB_180405a54;
        }
        local_af64 = DAT_180c7d420;
        if ((DAT_180c7d420 == 0) && (DAT_180c7d418 <= local_afa8)) {
          local_af64 = FUN_1804174b0("C_CSPlayerPawn",0x8d2364e2);
          if (local_af64 == 0) {
            DAT_180c7d418 = local_afa8 + 1000;
          }
          else {
            DAT_180c7d418 = 0xffffffffffffffff;
          }
        }
        DAT_180c7d420 = local_af64;
        FUN_1805f68fc(&DAT_1809bf7e0);
        iVar13 = local_af64;
      }
    }
    if ((longlong)iVar13 != local_af60 + 0xc) goto LAB_1804057ad;
    iVar10 = (int)local_af78;
    if ((int)local_af78 != 0) {
      iVar11 = DAT_180c7d424;
      if (DAT_180c7d424 == 0) {
        local_afa8 = GetTickCount64();
        if (local_afa8 < DAT_180c7d428) goto LAB_18040573e;
        local_acf8 = &DAT_1809bf830;
        iVar11 = FUN_1805f68d0(&DAT_1809bf830);
        if (iVar11 != 0) goto LAB_180405a5f;
        if (DAT_1809bf87c == 0x7fffffff) {
          DAT_1809bf87c = 0x7ffffffe;
          goto LAB_180405a54;
        }
        if ((DAT_180c7d424 == 0) && (DAT_180c7d428 <= local_afa8)) {
          DAT_180c7d424 = FUN_1804174b0("CNetworkVelocityVector",0x8feb7867);
          if (DAT_180c7d424 == 0) {
            DAT_180c7d428 = local_afa8 + 1000;
          }
          else {
            DAT_180c7d428 = 0xffffffffffffffff;
          }
        }
        iVar11 = DAT_180c7d424;
        FUN_1805f68fc(&DAT_1809bf830);
      }
      if (iVar11 == 0x10) {
        iVar11 = DAT_180c7d3f0;
        if (DAT_180c7d3f0 == 0) {
          local_afa8 = GetTickCount64();
          if (local_afa8 < DAT_180c7d3e8) goto LAB_18040573e;
          local_acf8 = &DAT_1809bf6f0;
          iVar11 = FUN_1805f68d0(&DAT_1809bf6f0);
          if (iVar11 != 0) {
LAB_180405a5f:
                    /* WARNING: Subroutine does not return */
            FUN_1805f6d44(5);
          }
          if (DAT_1809bf73c == 0x7fffffff) {
            DAT_1809bf73c = 0x7ffffffe;
LAB_180405a54:
                    /* WARNING: Subroutine does not return */
            FUN_1805f6d44(6);
          }
          if ((DAT_180c7d3f0 == 0) && (DAT_180c7d3e8 <= local_afa8)) {
            DAT_180c7d3f0 = FUN_1804174b0("CNetworkVelocityVector",0x8eeb76d4);
            if (DAT_180c7d3f0 == 0) {
              DAT_180c7d3e8 = local_afa8 + 1000;
            }
            else {
              DAT_180c7d3e8 = 0xffffffffffffffff;
            }
          }
          iVar11 = DAT_180c7d3f0;
          FUN_1805f68fc(&DAT_1809bf6f0);
        }
        if (iVar11 == 0x18) {
          iVar11 = DAT_180c7d3f4;
          if (DAT_180c7d3f4 == 0) {
            local_afa8 = GetTickCount64();
            if (local_afa8 < DAT_180c7d3f8) goto LAB_18040573e;
            local_acf8 = &DAT_1809bf740;
            FUN_180162830(&DAT_1809bf740);
            if ((DAT_180c7d3f4 == 0) && (DAT_180c7d3f8 <= local_afa8)) {
              DAT_180c7d3f4 = FUN_1804174b0("CNetworkVelocityVector",0x91eb7b8d);
              if (DAT_180c7d3f4 == 0) {
                DAT_180c7d3f8 = local_afa8 + 1000;
              }
              else {
                DAT_180c7d3f8 = 0xffffffffffffffff;
              }
            }
            iVar11 = DAT_180c7d3f4;
            FUN_1805f68fc(&DAT_1809bf740);
          }
          if (iVar11 == 0x20) {
            iVar11 = DAT_180c7d408;
            if (DAT_180c7d408 == 0) {
              local_afa8 = GetTickCount64();
              if (local_afa8 < DAT_180c7d400) {
                iVar11 = 0;
              }
              else {
                local_acf8 = &DAT_1809bf600;
                FUN_180162830(&DAT_1809bf600);
                if ((DAT_180c7d408 == 0) && (DAT_180c7d400 <= local_afa8)) {
                  DAT_180c7d408 = FUN_1804174b0("C_BaseEntity",0x13b19dcb);
                  if (DAT_180c7d408 == 0) {
                    DAT_180c7d400 = local_afa8 + 1000;
                  }
                  else {
                    DAT_180c7d400 = 0xffffffffffffffff;
                  }
                }
                iVar11 = DAT_180c7d408;
                FUN_1805f68fc(&DAT_1809bf600);
              }
            }
            if (iVar10 + 0x88 <= iVar11) {
              iVar10 = DAT_180c7d3c8;
              if (DAT_180c7d3c8 == 0) {
                UVar18 = GetTickCount64();
                if (UVar18 < DAT_180c7d3d0) {
                  iVar10 = 0;
                }
                else {
                  local_acf8 = &DAT_1809bf650;
                  FUN_180162830(&DAT_1809bf650);
                  if ((DAT_180c7d3c8 == 0) && (DAT_180c7d3d0 <= UVar18)) {
                    DAT_180c7d3c8 = FUN_1804174b0("C_BaseModelEntity",0x39db834b);
                    if (DAT_180c7d3c8 == 0) {
                      DAT_180c7d3d0 = UVar18 + 1000;
                    }
                    else {
                      DAT_180c7d3d0 = 0xffffffffffffffff;
                    }
                  }
                  iVar10 = DAT_180c7d3c8;
                  FUN_1805f68fc(&DAT_1809bf650);
                }
              }
              local_afb0 = FUN_180405c60();
              uVar12 = FUN_180405d60();
              local_af78 = CONCAT44(local_af78._4_4_,uVar12);
              local_af88 = CONCAT44(local_af88._4_4_,DAT_180c7d3b8);
              if (DAT_180c7d3b8 == 0) {
                UVar18 = GetTickCount64();
                local_afa8 = UVar18;
                if (UVar18 < DAT_180c7d3b0) {
                  local_af88 = local_af88 & 0xffffffff00000000;
                }
                else {
                  local_acf8 = &DAT_1809bf560;
                  FUN_180162830(&DAT_1809bf560);
                  local_af88 = CONCAT44(local_af88._4_4_,DAT_180c7d3b8);
                  if ((DAT_180c7d3b8 == 0) && (DAT_180c7d3b0 <= UVar18)) {
                    DAT_180c7d3b8 = FUN_1804174b0("CCollisionProperty",0x7d388d3e);
                    local_af88 = CONCAT44(local_af88._4_4_,DAT_180c7d3b8);
                    if (DAT_180c7d3b8 == 0) {
                      DAT_180c7d3b0 = local_afa8 + 1000;
                    }
                    else {
                      DAT_180c7d3b0 = 0xffffffffffffffff;
                    }
                  }
                  FUN_1805f68fc(&DAT_1809bf560);
                }
              }
              iVar11 = DAT_180c7d3bc;
              if (DAT_180c7d3bc == 0) {
                local_afa8 = GetTickCount64();
                if (local_afa8 < DAT_180c7d3c0) {
                  iVar11 = 0;
                }
                else {
                  local_acf8 = &DAT_1809bf5b0;
                  FUN_180162830(&DAT_1809bf5b0);
                  if ((DAT_180c7d3bc == 0) && (DAT_180c7d3c0 <= local_afa8)) {
                    DAT_180c7d3bc = FUN_1804174b0("CCollisionProperty",0x4c638611);
                    if (DAT_180c7d3bc == 0) {
                      DAT_180c7d3c0 = local_afa8 + 1000;
                    }
                    else {
                      DAT_180c7d3c0 = 0xffffffffffffffff;
                    }
                  }
                  iVar11 = DAT_180c7d3bc;
                  FUN_1805f68fc(&DAT_1809bf5b0);
                }
              }
              cVar5 = DAT_180c7ca80;
              if ((((local_afb0 == 0) || ((int)local_af78 == 0)) ||
                  ((longlong)(int)local_af88 != (longlong)(int)local_af78 + 0xc)) ||
                 ((ulonglong)(longlong)iVar11 < (longlong)(int)local_af88 + 0xcU)) {
                LOCK();
                DAT_180c7ca80 = '\x01';
                UNLOCK();
                if (cVar5 != '\0') goto LAB_180405351;
                local_afe8 = CONCAT44(local_afe8._4_4_,(int)local_af88);
                local_aff0 = (longlong *)CONCAT44(local_aff0._4_4_,(int)local_af78);
                local_aff8 = (undefined **)CONCAT44(local_aff8._4_4_,local_afb0);
                local_afe0 = iVar11;
LAB_180405349:
                FUN_1804144d0();
                goto LAB_180405351;
              }
              if (((iVar10 != 0) && (iVar11 = FUN_180405e60(), iVar11 == 0x10)) &&
                 ((iVar11 = FUN_180405f60(), iVar11 == 0x18 &&
                  (iVar11 = FUN_180406060(), iVar11 == 0x20)))) {
                iVar13 = FUN_180406160();
                iVar11 = local_afb4;
                if (iVar13 == iVar10 + 0xe0) {
                  if ((local_af80 < 1) || (0x7f < (int)local_afc0 - 1U)) {
                    if (DAT_180c7ca82 == '\0') {
                      local_ae48 = 0xdb35e39b27e1c185;
                      uStack_ae40 = 0xa05181ee77d57a06;
                      local_ae38 = 0x929654b1461b7377;
                      uStack_ae30 = 0xa5cea54bfef7110;
                      local_ae28 = 0xa70c9f7f916b7e19;
                      uStack_ae20 = 0x2b2d6d82aa402c0a;
                      local_ae18 = 0xc064ed9510bc010b;
                      local_ad18 = (char *)0xfec09918395f26c4;
                      uStack_ae10 = 0xfec09918395f26c4;
                      alStack_ae98[0] = 0x746369646572705b;
                      alStack_ae98[1] = 0x736964205d6e6f69;
                      alStack_ae98[2] = 0x69203a64656c6261;
                      alStack_ae98[3] = 0x652064696c61766e;
                      local_ae78 = 0x6f206465646f636e;
                      uStack_ae70 = 0x616c206e69676972;
                      local_ae68 = 0x74756f79;
                      uStack_ae60 = 0;
                      puVar21 = (undefined8 *)FUN_18015b110(local_ad90,alStack_ae98);
                      local_acc8 = *puVar21;
                      puStack_acc0 = (ulonglong *)puVar21[1];
                      FUN_18020e620(&local_acc8);
                      DAT_180c7ca82 = '\x01';
                    }
                    goto LAB_180405351;
                  }
                  uVar25 = (ulonglong)local_af68;
                  if (local_af68 == 0) {
LAB_1804053e9:
                    iVar10 = local_af8c;
                    iVar11 = local_afa0;
                    iVar13 = local_af68;
                    cVar5 = FUN_1801aceb0(&DAT_180c7ca49,1);
                    if (cVar5 != '\0') goto LAB_180405351;
                    local_afe8 = CONCAT44(local_afe8._4_4_,iVar11);
                    local_aff0 = (longlong *)CONCAT44(local_aff0._4_4_,iVar10);
                    local_aff8 = (undefined **)CONCAT44(local_aff8._4_4_,iVar13);
                    pcVar30 = 
                    "wrapped_origin=%u wrapped_rotation=%u wrapped_scale=%u native_trial_started=0";
                    pcVar27 = "PREDICTION_LAZY_POSE_LAYOUT_INVALID";
                  }
                  else {
                    local_af88 = (ulonglong)local_af8c;
                    local_af78 = uVar25;
                    if ((local_af88 != uVar25 + 0xc) ||
                       (local_acf8 = (char *)(longlong)local_afa0,
                       local_acf8 != (char *)(local_af88 + 0xc))) goto LAB_1804053e9;
                    UVar18 = (ULONGLONG)local_afb4;
                    local_afa8 = UVar18;
                    iVar10 = FUN_180406260();
                    if ((longlong)iVar10 != UVar18 + 0xc) goto LAB_1804053e9;
                    iVar10 = (int)local_af28;
                    uVar25 = (ulonglong)(int)local_af28;
                    local_af28 = uVar25;
                    iVar13 = FUN_180406360();
                    if ((longlong)iVar13 != uVar25 + 0xc) goto LAB_1804053e9;
                    if ((((iVar10 == 0) || (local_af70 == 0)) || (local_af6c <= local_af70)) ||
                       (local_af6c - local_af70 != 0x20)) {
                      iVar13 = local_af6c;
                      iVar14 = local_af70;
                      cVar5 = FUN_1801aceb0(&DAT_180c7ca48,1);
                      if (cVar5 != '\0') goto LAB_180405351;
                      local_afe8 = CONCAT44(local_afe8._4_4_,iVar14);
                      local_aff0 = (longlong *)CONCAT44(local_aff0._4_4_,iVar10);
                      local_aff8 = (undefined **)CONCAT44(local_aff8._4_4_,iVar11);
                      local_afe0 = iVar13;
                      goto LAB_180405349;
                    }
                    local_afb4 = FUN_180406460();
                    iVar11 = FUN_180406560();
                    iVar10 = FUN_180406660();
                    local_af64 = iVar10;
                    if (((local_afb4 != 0) && (iVar11 != 0)) &&
                       ((iVar10 != 0 &&
                        (iVar13 = FUN_180406760(), (longlong)iVar13 == (longlong)local_afb4 + 0x20))
                       )) {
                      iVar13 = FUN_180406860();
                      if ((longlong)iVar13 == (longlong)iVar11 + 0x100) {
                        iVar13 = FUN_180406960();
                        if ((longlong)iVar13 == (longlong)iVar10 + 0x10) {
                          iVar10 = FUN_180406b60();
                          iVar13 = FUN_180406a60();
                          if ((longlong)iVar13 == (longlong)iVar10 + 0x10) {
                            FUN_1804145c0(&local_af60,local_af08,local_acb0);
                            if (local_af54 != '\0') {
                              uVar19 = FUN_180454010(param_3[1],local_af60 >> 0x20);
                              cVar5 = FUN_180414a50(uVar19);
                              if (cVar5 != '\0') {
                                lVar17 = (ulonglong)local_af57 + (local_af60 & 0xffffffff) +
                                         param_3[1];
                                FUN_1803aaae0(&local_af60,local_af20,local_afc8);
                                if ((local_af60._4_1_ == '\0') ||
                                   (iVar10 = (int)local_af60, 0x3f < iVar10)) goto LAB_180405351;
                                FUN_1800a8050(&local_acc8);
                                FUN_180415ff0(&local_acc8,4);
                                local_aff0 = (longlong *)CONCAT71(local_aff0._1_7_,param_6);
                                local_aff8 = *(undefined ***)(local_af10 + 8);
                                local_afe8 = lVar17;
                                FUN_1803fa370(local_5478,param_3[1],local_acd8[0],local_ad30);
                                FUN_1803ffd50(local_4d28,param_3[1],local_5478);
                                FUN_180406c60(local_ac98);
                                cVar5 = FUN_180414b40(local_ac98,lVar17);
                                pcVar27 = local_af38;
                                if (cVar5 != '\0') {
                                  FUN_180400100(local_ac98,local_af38 + 0x30,4);
                                  FUN_180400100(local_ac98,pcVar27 + 0x34,4);
                                  FUN_180400100(local_ac98,pcVar27 + 0x44,4);
                                  FUN_180400100(local_ac98,pcVar27 + 0x50,4);
                                  FUN_180400100(local_ac98,pcVar27 + 0x58,4);
                                  FUN_180400100(local_ac98,DAT_180c7ca58,4);
                                  FUN_180400100(local_ac98,DAT_180c7ca50,8);
                                  if (DAT_180c7ca68 != (longlong *)0x0) {
                                    FUN_180400100(local_ac98,DAT_180c7ca68,8);
                                  }
                                  if (local_af98 != (char *)0x0) {
                                    FUN_180400100(local_ac98,local_af98 + 0x8c,1);
                                  }
                                  iVar11 = FUN_180406ce0();
                                  FUN_180400100(local_ac98,(longlong)iVar11 + *param_3,4);
                                  iVar11 = FUN_180406de0();
                                  FUN_180400100(local_ac98,(longlong)iVar11 + param_3[1],4);
                                  lVar17 = (longlong)local_afb0 + param_3[1];
                                  iVar11 = FUN_180406ee0();
                                  FUN_180400100(local_ac98,iVar11 + lVar17,0xc);
                                  iVar11 = FUN_180406fe0();
                                  FUN_180400100(local_ac98,iVar11 + lVar17,0xc);
                                  iVar11 = FUN_1804070e0();
                                  FUN_180400100(local_ac98,iVar11 + lVar17,4);
                                  iVar11 = FUN_1804071e0();
                                  if (iVar11 != 0) {
                                    FUN_180400100(local_ac98,(longlong)iVar11 + param_3[1],4);
                                  }
                                  iVar11 = FUN_1804072e0();
                                  FUN_180400100(local_ac98,(longlong)iVar11 + param_3[1],0xc);
                                  iVar11 = FUN_1804073e0();
                                  FUN_180400100(local_ac98,(longlong)iVar11 + param_3[1],0x28);
                                  iVar11 = FUN_1804074e0();
                                  FUN_180400100(local_ac98,param_3[1] + 0x30 + (longlong)iVar11,0x50
                                               );
                                  iVar11 = FUN_1804075e0();
                                  FUN_180400100(local_ac98,(longlong)iVar11 + param_3[1] + 0x80,8);
                                  iVar11 = FUN_1804076e0();
                                  FUN_180400100(local_ac98,(longlong)iVar11 + param_3[1],0xc);
                                  iVar11 = FUN_1804077e0();
                                  FUN_180400100(local_ac98,(longlong)iVar11 + param_3[1],4);
                                  iVar11 = FUN_1804078e0();
                                  FUN_180400100(local_ac98,(longlong)iVar11 + param_3[1],4);
                                  iVar11 = FUN_1804079e0();
                                  FUN_180400100(local_ac98,(longlong)iVar11 + param_3[1],4);
                                  iVar11 = FUN_180407ae0();
                                  FUN_180400100(local_ac98,(longlong)iVar11 + param_3[1],4);
                                  iVar11 = FUN_180407be0();
                                  FUN_180400100(local_ac98,(longlong)iVar11 + param_3[1],4);
                                  iVar11 = FUN_180407ce0();
                                  FUN_180400100(local_ac98,(longlong)iVar11 + param_3[1],4);
                                  iVar11 = FUN_180407de0();
                                  lVar17 = local_acd8[0];
                                  FUN_180400100(local_ac98,iVar11 + local_acd8[0],0xc);
                                  FUN_180400100(local_ac98,local_af80 + lVar17,
                                                (longlong)(int)local_afc0);
                                  FUN_180400100(local_ac98,local_afa8 + lVar17,0xc);
                                  FUN_180400100(local_ac98,local_af28 + lVar17,0xc);
                                  FUN_180400100(local_ac98,local_af70 + lVar17,0x20);
                                  FUN_180400100(local_ac98,local_af78 + lVar17,0xc);
                                  FUN_180400100(local_ac98,local_af88 + lVar17,0xc);
                                  FUN_180400100(local_ac98,local_acf8 + lVar17,4);
                                  iVar11 = FUN_180407ee0();
                                  FUN_180400100(local_ac98,iVar11 + lVar17,4);
                                  iVar11 = FUN_180407fe0();
                                  FUN_180400100(local_ac98,iVar11 + lVar17,4);
                                  iVar11 = FUN_1804080e0();
                                  FUN_180400100(local_ac98,(longlong)iVar11 + param_3[1],4);
                                  iVar11 = FUN_1804081e0();
                                  if (iVar11 != 0) {
                                    FUN_180400100(local_ac98,(longlong)iVar11 + param_3[1],4);
                                  }
                                  iVar11 = FUN_1804082e0();
                                  FUN_180400100(local_ac98,(longlong)iVar11 + param_3[1],4);
                                  iVar11 = FUN_1804083e0();
                                  FUN_180400100(local_ac98,(longlong)iVar11 + param_3[1],1);
                                  iVar11 = FUN_1804084e0();
                                  FUN_180400100(local_ac98,(longlong)iVar11 + param_3[1],0xc);
                                  iVar11 = FUN_1804085e0();
                                  FUN_180400100(local_ac98,param_3[1] + 0x18 + (longlong)iVar11,0x18
                                               );
                                  iVar11 = FUN_1804086e0();
                                  FUN_180400100(local_ac98,param_3[1] + 0x30 + (longlong)iVar11,8);
                                  iVar11 = FUN_1804087e0();
                                  FUN_180400100(local_ac98,(longlong)iVar11 + param_3[1],0x10);
                                  iVar11 = FUN_1804088e0();
                                  FUN_180400100(local_ac98,(longlong)iVar11 + param_3[1],0x30);
                                  iVar11 = FUN_1804089e0();
                                  FUN_180400100(local_ac98,(longlong)iVar11 + param_3[1],0xc);
                                  iVar11 = FUN_180408ae0();
                                  FUN_180400100(local_ac98,(longlong)iVar11 + param_3[1],4);
                                  iVar11 = FUN_180408be0();
                                  FUN_180400100(local_ac98,(longlong)iVar11 + param_3[1],4);
                                  iVar11 = FUN_180408ce0();
                                  FUN_180400100(local_ac98,(longlong)iVar11 + param_3[1],4);
                                  iVar11 = FUN_180408de0();
                                  FUN_180400100(local_ac98,(longlong)iVar11 + param_3[1],1);
                                  iVar11 = FUN_180408ee0();
                                  FUN_180400100(local_ac98,(longlong)iVar11 + param_3[1],0xc);
                                  iVar11 = FUN_180408fe0();
                                  FUN_180400100(local_ac98,(longlong)iVar11 + param_3[1],0xc);
                                  iVar11 = FUN_1804090e0();
                                  FUN_180400100(local_ac98,(longlong)iVar11 + param_3[1],0xc);
                                  iVar11 = FUN_1804091e0();
                                  FUN_180400100(local_ac98,(longlong)iVar11 + param_3[1],0x18);
                                  iVar11 = FUN_1804092e0();
                                  FUN_180400100(local_ac98,(longlong)iVar11 + param_3[1],0x18);
                                  iVar11 = FUN_1804093e0();
                                  FUN_180400100(local_ac98,(longlong)iVar11 + param_3[1],0x18);
                                  iVar11 = FUN_1804094e0();
                                  FUN_180400100(local_ac98,(longlong)iVar11 + param_3[1],0x28);
                                  iVar11 = FUN_1804095e0();
                                  FUN_180400100(local_ac98,(longlong)iVar11 + param_3[1] + 0x30,0x50
                                               );
                                  iVar11 = FUN_1804096e0();
                                  FUN_180400100(local_ac98,(longlong)iVar11 + param_3[1] + 0x80,8);
                                  iVar11 = FUN_1804097e0();
                                  pcVar27 = local_ad18;
                                  FUN_180400100(local_ac98,local_ad18 + iVar11,4);
                                  iVar11 = FUN_1804098e0();
                                  FUN_180400100(local_ac98,pcVar27 + iVar11,4);
                                  iVar11 = FUN_1804099e0();
                                  FUN_180400100(local_ac98,pcVar27 + iVar11,0xc);
                                  iVar11 = FUN_180409ae0();
                                  FUN_180400100(local_ac98,pcVar27 + iVar11,0xc);
                                  iVar11 = FUN_180409be0();
                                  FUN_180400100(local_ac98,pcVar27 + iVar11,4);
                                  iVar11 = FUN_180409ce0();
                                  FUN_180400100(local_ac98,pcVar27 + iVar11,0xc);
                                  lVar17 = local_af50;
                                  iVar11 = FUN_180409de0();
                                  FUN_180400100(local_ac98,iVar11 + lVar17,4);
                                  lVar17 = local_af50;
                                  iVar11 = FUN_180409ee0();
                                  FUN_180400100(local_ac98,iVar11 + lVar17,4);
                                  iVar11 = FUN_180409fe0();
                                  FUN_180400100(local_ac98,iVar11 + local_af50,4);
                                  lVar17 = local_af48;
                                  iVar11 = FUN_18040a0e0();
                                  FUN_180400100(local_ac98,iVar11 + lVar17,4);
                                  lVar17 = local_af48;
                                  iVar11 = FUN_18040a1e0();
                                  FUN_180400100(local_ac98,iVar11 + lVar17,4);
                                  iVar11 = FUN_18040a3e0();
                                  iVar13 = FUN_18040a4e0();
                                  lVar17 = local_af48;
                                  iVar14 = FUN_18040a2e0();
                                  FUN_180400100(local_ac98,iVar14 + lVar17,
                                                ((longlong)iVar11 - (longlong)iVar13) + 4);
                                  iVar11 = FUN_18040a6e0();
                                  iVar13 = FUN_18040a7e0();
                                  lVar17 = local_af48;
                                  iVar14 = FUN_18040a5e0();
                                  FUN_180400100(local_ac98,iVar14 + lVar17,
                                                ((longlong)iVar11 - (longlong)iVar13) + 1);
                                  lVar17 = local_af48;
                                  iVar11 = FUN_18040a8e0();
                                  FUN_180400100(local_ac98,iVar11 + lVar17,4);
                                  lVar17 = local_af48;
                                  iVar11 = FUN_18040a9e0();
                                  FUN_180400100(local_ac98,iVar11 + lVar17,4);
                                  lVar17 = local_af48;
                                  iVar11 = FUN_18040aae0();
                                  FUN_180400100(local_ac98,iVar11 + lVar17,4);
                                  lVar17 = local_af48;
                                  iVar11 = FUN_18040abe0();
                                  FUN_180400100(local_ac98,iVar11 + lVar17,4);
                                  lVar17 = local_af48;
                                  iVar11 = FUN_18040ace0();
                                  FUN_180400100(local_ac98,iVar11 + lVar17,4);
                                  lVar17 = local_af48;
                                  iVar11 = FUN_18040ade0();
                                  FUN_180400100(local_ac98,iVar11 + lVar17,4);
                                  lVar17 = local_af48;
                                  iVar11 = FUN_18040aee0();
                                  FUN_180400100(local_ac98,iVar11 + lVar17,4);
                                  lVar17 = local_af48;
                                  iVar11 = FUN_18040afe0();
                                  FUN_180400100(local_ac98,iVar11 + lVar17,4);
                                  lVar17 = local_af48;
                                  iVar11 = FUN_18040b0e0();
                                  FUN_180400100(local_ac98,iVar11 + lVar17,4);
                                  lVar17 = local_af48;
                                  iVar11 = FUN_18040b1e0();
                                  FUN_180400100(local_ac98,iVar11 + lVar17,8);
                                  lVar17 = local_af48;
                                  iVar11 = FUN_18040b2e0();
                                  FUN_180400100(local_ac98,iVar11 + lVar17,4);
                                  iVar11 = FUN_18040b3e0();
                                  FUN_180400100(local_ac98,iVar11 + local_af48,4);
                                  iVar11 = FUN_18040b4e0();
                                  FUN_180400100(local_ac98,iVar11 + local_ad30,4);
                                  iVar11 = FUN_18040b5e0();
                                  FUN_180400100(local_ac98,local_ad30 + 8 + (longlong)iVar11,0x18);
                                  iVar11 = FUN_18040b6e0();
                                  FUN_180400100(local_ac98,iVar11 + local_ad30,8);
                                  iVar11 = FUN_18040b7e0();
                                  FUN_180400100(local_ac98,iVar11 + local_ad30,8);
                                  iVar11 = FUN_18040b8e0();
                                  FUN_180400100(local_ac98,iVar11 + local_ad30,8);
                                  iVar11 = FUN_18040b9e0();
                                  FUN_180400100(local_ac98,iVar11 + local_ad30,0x100);
                                  iVar11 = FUN_18040bae0();
                                  FUN_180400100(local_ac98,iVar11 + local_ad30,4);
                                  iVar11 = FUN_18040bbe0();
                                  FUN_180400100(local_ac98,iVar11 + local_ad30,0x10);
                                  iVar11 = FUN_18040bce0();
                                  FUN_180400100(local_ac98,iVar11 + local_ad30,4);
                                  iVar11 = FUN_18040bde0();
                                  FUN_180400100(local_ac98,iVar11 + local_ad30,4);
                                  iVar11 = FUN_18040bee0();
                                  FUN_180400100(local_ac98,iVar11 + local_ad30,4);
                                  iVar11 = FUN_18040bfe0();
                                  FUN_180400100(local_ac98,iVar11 + local_ad30,4);
                                  iVar11 = FUN_18040c0e0();
                                  FUN_180400100(local_ac98,iVar11 + local_ad30,0x10);
                                  iVar11 = FUN_18040c1e0();
                                  FUN_180400100(local_ac98,iVar11 + local_ad30,4);
                                  iVar11 = FUN_18040c2e0();
                                  FUN_180400100(local_ac98,iVar11 + local_ad30,4);
                                  iVar11 = FUN_18040c3e0();
                                  FUN_180400100(local_ac98,iVar11 + local_ad30,4);
                                  iVar11 = FUN_18040c4e0();
                                  FUN_180400100(local_ac98,iVar11 + local_ad30,0xc);
                                  iVar11 = FUN_18040c5e0();
                                  FUN_180400100(local_ac98,iVar11 + local_ad30,0xc);
                                  iVar11 = FUN_18040c6e0();
                                  iVar13 = FUN_18040c7e0();
                                  if ((((iVar11 != 0) && (iVar13 == iVar11 + 0xe0)) &&
                                      (iVar13 = FUN_18040c8e0(), iVar13 == 0x18)) &&
                                     (iVar13 = FUN_18040c9e0(), iVar13 == 0x44)) {
                                    lVar17 = iVar11 + local_ad30;
                                    iVar11 = FUN_18040cae0();
                                    FUN_180400100(local_ac98,iVar11 + lVar17,1);
                                    iVar11 = FUN_18040cbe0();
                                    FUN_180400100(local_ac98,iVar11 + lVar17,1);
                                    iVar11 = FUN_18040cce0();
                                    FUN_180400100(local_ac98,iVar11 + lVar17,1);
                                    iVar11 = FUN_18040cde0();
                                    FUN_180400100(local_ac98,iVar11 + lVar17,1);
                                    iVar11 = FUN_18040cee0();
                                    FUN_180400100(local_ac98,iVar11 + lVar17,1);
                                    iVar11 = FUN_18040cfe0();
                                    FUN_180400100(local_ac98,iVar11 + lVar17,1);
                                    iVar11 = FUN_18040d0e0();
                                    FUN_180400100(local_ac98,iVar11 + lVar17,4);
                                    iVar11 = FUN_18040d1e0();
                                    FUN_180400100(local_ac98,iVar11 + lVar17,4);
                                    iVar11 = FUN_18040d2e0();
                                    FUN_180400100(local_ac98,iVar11 + lVar17,4);
                                    iVar11 = FUN_18040d3e0();
                                    FUN_180400100(local_ac98,iVar11 + lVar17,4);
                                    iVar11 = FUN_18040d4e0();
                                    FUN_180400100(local_ac98,iVar11 + lVar17,4);
                                    iVar11 = FUN_18040d5e0();
                                    FUN_180400100(local_ac98,iVar11 + lVar17,4);
                                    iVar11 = FUN_18040d6e0();
                                    FUN_180400100(local_ac98,iVar11 + lVar17,4);
                                    iVar11 = FUN_18040d7e0();
                                    FUN_180400100(local_ac98,iVar11 + lVar17,4);
                                    iVar11 = FUN_18040d8e0();
                                    FUN_180400100(local_ac98,iVar11 + lVar17,4);
                                    iVar11 = FUN_18040d9e0();
                                    FUN_180400100(local_ac98,iVar11 + lVar17,4);
                                    FUN_180400100(local_ac98,lVar17 + 0x58,1);
                                    FUN_180400100(local_ac98,lVar17 + 0x59,1);
                                    FUN_180400100(local_ac98,lVar17 + 0x5c,0x30);
                                    FUN_180400100(local_ac98,lVar17 + 0x90,0x10);
                                    FUN_180400100(local_ac98,lVar17 + 0xa0,0x14);
                                    FUN_180400100(local_ac98,lVar17 + 0xb4,1);
                                    FUN_180400100(local_ac98,lVar17 + 0xbc,1);
                                    FUN_180400100(local_ac98,lVar17 + 0xc0,4);
                                    FUN_180400100(local_ac98,lVar17 + 0xc4,0x1c);
                                    iVar11 = FUN_18040dae0();
                                    FUN_180400100(local_ac98,iVar11 + local_ad30,4);
                                    iVar11 = FUN_18040dbe0();
                                    FUN_180400100(local_ac98,iVar11 + local_ad30,1);
                                    iVar11 = FUN_18040dce0();
                                    FUN_180400100(local_ac98,iVar11 + local_ad30,1);
                                    iVar11 = FUN_18040dde0();
                                    FUN_180400100(local_ac98,iVar11 + local_ad30,1);
                                    iVar11 = FUN_18040dee0();
                                    FUN_180400100(local_ac98,iVar11 + local_ad30,1);
                                    iVar11 = FUN_18040dfe0();
                                    FUN_180400100(local_ac98,iVar11 + local_ad30,4);
                                    iVar11 = FUN_18040e0e0();
                                    FUN_180400100(local_ac98,iVar11 + local_ad30,4);
                                    iVar11 = FUN_18040e1e0();
                                    FUN_180400100(local_ac98,iVar11 + local_ad30,4);
                                    iVar11 = FUN_18040e2e0();
                                    FUN_180400100(local_ac98,iVar11 + local_ad30,4);
                                    iVar11 = FUN_18040e3e0();
                                    FUN_180400100(local_ac98,iVar11 + local_ad30,4);
                                    iVar11 = FUN_18040e4e0();
                                    FUN_180400100(local_ac98,iVar11 + local_ad30,4);
                                    iVar11 = FUN_18040e5e0();
                                    FUN_180400100(local_ac98,iVar11 + local_ad30,1);
                                    iVar11 = FUN_18040e6e0();
                                    FUN_180400100(local_ac98,iVar11 + local_ad30,4);
                                    iVar11 = FUN_18040e7e0();
                                    FUN_180400100(local_ac98,iVar11 + local_ad30,8);
                                    iVar11 = FUN_18040e8e0();
                                    FUN_180400100(local_ac98,iVar11 + local_ad30,1);
                                    iVar11 = FUN_18040e9e0();
                                    FUN_180400100(local_ac98,iVar11 + local_ad30,1);
                                    iVar11 = FUN_18040eae0();
                                    FUN_180400100(local_ac98,iVar11 + local_ad30,1);
                                    iVar11 = FUN_18040ebe0();
                                    if (iVar11 != 0) {
                                      FUN_180400100(local_ac98,iVar11 + local_ad30,4);
                                    }
                                    iVar11 = FUN_18040ece0();
                                    FUN_180400100(local_ac98,iVar11 + local_ad30,4);
                                    iVar11 = FUN_18040ede0();
                                    FUN_180400100(local_ac98,iVar11 + local_ad30,4);
                                    iVar11 = FUN_18040eee0();
                                    FUN_180400100(local_ac98,iVar11 + local_ad30,0xc);
                                    iVar11 = FUN_18040efe0();
                                    FUN_180400100(local_ac98,iVar11 + local_ad30,0xc);
                                    iVar11 = FUN_18040f0e0();
                                    FUN_180400100(local_ac98,iVar11 + local_ad30,0xc);
                                    iVar11 = FUN_18040f1e0();
                                    FUN_180400100(local_ac98,iVar11 + local_ad30,4);
                                    iVar11 = FUN_18040f2e0();
                                    FUN_180400100(local_ac98,iVar11 + local_ad30,4);
                                    iVar11 = FUN_18040f3e0();
                                    FUN_180400100(local_ac98,iVar11 + local_ad30,8);
                                    iVar11 = FUN_18040f4e0();
                                    FUN_180400100(local_ac98,iVar11 + local_ad30,4);
                                    iVar11 = FUN_18040f5e0();
                                    FUN_180400100(local_ac98,iVar11 + local_ad30,4);
                                    iVar11 = FUN_18040f6e0();
                                    FUN_180400100(local_ac98,iVar11 + local_ad30,4);
                                    iVar11 = FUN_18040f7e0();
                                    FUN_180400100(local_ac98,iVar11 + local_ad30,4);
                                    iVar11 = FUN_18040f8e0();
                                    FUN_180400100(local_ac98,iVar11 + local_ad30,4);
                                    iVar11 = FUN_18040f9e0();
                                    FUN_180400100(local_ac98,iVar11 + local_ad30,4);
                                    iVar11 = FUN_18040fae0();
                                    FUN_180400100(local_ac98,iVar11 + local_ad30,8);
                                    iVar11 = FUN_18040fbe0();
                                    FUN_180400100(local_ac98,iVar11 + local_ad30,1);
                                    iVar11 = FUN_18040fce0();
                                    FUN_180400100(local_ac98,iVar11 + local_ad30,4);
                                    iVar11 = FUN_18040fde0();
                                    FUN_180400100(local_ac98,iVar11 + local_ad30,1);
                                    iVar11 = FUN_18040fee0();
                                    FUN_180400100(local_ac98,iVar11 + local_ad30,1);
                                    iVar11 = FUN_18040ffe0();
                                    FUN_180400100(local_ac98,iVar11 + local_ad30,4);
                                    iVar11 = FUN_1804100e0();
                                    FUN_180400100(local_ac98,iVar11 + local_ad30,4);
                                    iVar11 = FUN_1804101e0();
                                    FUN_180400100(local_ac98,iVar11 + local_ad30,4);
                                    iVar11 = FUN_1804102e0();
                                    FUN_180400100(local_ac98,iVar11 + local_ad30,4);
                                    iVar11 = FUN_1804103e0();
                                    FUN_180400100(local_ac98,iVar11 + local_ad30,4);
                                    iVar11 = FUN_1804104e0();
                                    FUN_180400100(local_ac98,iVar11 + local_ad30,0x18);
                                    iVar11 = FUN_1804105e0();
                                    FUN_180400100(local_ac98,iVar11 + local_ad30,0x38);
                                    iVar11 = FUN_1804106e0();
                                    FUN_180400100(local_ac98,iVar11 + local_ad30,1);
                                    iVar11 = FUN_1804107e0();
                                    FUN_180400100(local_ac98,iVar11 + local_ad30,4);
                                    iVar11 = FUN_1804108e0();
                                    FUN_180400100(local_ac98,iVar11 + local_ad30,4);
                                    iVar11 = FUN_1804109e0();
                                    FUN_180400100(local_ac98,iVar11 + local_ad30,4);
                                    iVar11 = FUN_180410ae0();
                                    FUN_180400100(local_ac98,iVar11 + local_ad30,4);
                                    iVar11 = FUN_180410be0();
                                    FUN_180400100(local_ac98,iVar11 + local_ad30,0xc);
                                    iVar11 = FUN_180410ce0();
                                    FUN_180400100(local_ac98,iVar11 + local_ad30,4);
                                    iVar11 = FUN_180410de0();
                                    FUN_180400100(local_ac98,iVar11 + local_ad30,4);
                                    iVar11 = FUN_180410ee0();
                                    FUN_180400100(local_ac98,iVar11 + local_ad30,4);
                                    FUN_180400100(local_ac98,local_ad30 + 0x198,8);
                                    cVar5 = FUN_1801aceb0(&DAT_180c7ca60,1);
                                    local_af90 = cVar5;
                                    FUN_180195640(local_acd8);
                                    FUN_1802423b0(local_acd8,"prediction");
                                    if (cVar5 == '\0') {
                                      FUN_1800aa120("prediction: state saved");
                                    }
                                    iVar11 = FUN_180410fe0();
                                    local_af28 = CONCAT44(local_af28._4_4_,
                                                          *(undefined4 *)
                                                           ((longlong)iVar11 + *param_3));
                                    lVar17 = FUN_180454880(local_af10 + 0x20);
                                    local_af64 = *(int *)(lVar17 + 0x44);
                                    FUN_1800a8050(&local_acf8);
                                    FUN_180415ff0(&local_acf8,5);
                                    lVar17 = local_af20;
                                    local_aff8 = local_4d28;
                                    FUN_180400350(local_adb8,local_af20,local_afc8,local_ac98);
                                    if (local_ad98 != '\0') {
                                      local_ace8[0] = 1;
                                      iVar11 = param_4;
                                      if (0x40 < param_4) {
                                        iVar11 = 0x40;
                                      }
                                      local_afc0 = (char *)CONCAT44(local_afc0._4_4_,iVar11);
                                      if (iVar11 != 0) {
                                        auVar33 = ZEXT464(0x7fc00000);
                                        auVar34 = ZEXT464(0x7f800000);
                                        fVar35 = 0.0;
                                        fVar36 = 1.1;
                                        do {
                                          if (1 < param_4) {
                                            if ((param_6 == '\0') &&
                                               (cVar5 = FUN_180303ad0(1), cVar5 == '\0'))
                                            goto LAB_180405243;
                                            puVar20 = (uint *)FUN_180454860(local_af10 + 0x20);
                                            *puVar20 = *puVar20 | 0x20;
                                            puVar20[0x11] = local_af64 + -1 + local_ace8[0];
                                          }
                                          if (local_af98 != (char *)0x0) {
                                            local_af98[0x8c] = '\0';
                                          }
                                          iVar11 = (int)local_af28 + local_ace8[0];
                                          *DAT_180c7ca50 = param_3[1];
                                          if (DAT_180c7ca68 != (longlong *)0x0) {
                                            *DAT_180c7ca68 = param_3[1];
                                          }
                                          iVar13 = FUN_1804110e0();
                                          *(int *)((longlong)iVar13 + *param_3) = iVar11;
                                          local_ca8[0] = (char *)0x0;
                                          local_ad08 = '\0';
                                          local_ad07[0] = '\0';
                                          local_aff0 = &local_ad30;
                                          local_aff8 = (undefined **)local_ad07;
                                          FUN_180193710(&local_ae48,&local_ad08,&local_acb0,
                                                        local_ca8);
                                          local_ad08 = FUN_180414c70(local_af08,local_ca8,param_3[1]
                                                                    );
                                          if (((local_ad08 == '\0') ||
                                              (local_ad07[0] =
                                                    FUN_180297660(local_ad30,0x2f,local_ace0),
                                              local_ad07[0] == '\0')) ||
                                             ((local_ad28[0] =
                                                    (undefined *)FUN_18027ab50(local_ad30,0x26),
                                              local_ad28[0] == (undefined *)0x0 ||
                                              ((cVar5 = FUN_180414ce0(local_af18,local_ad28[0],
                                                                      local_ace0,iVar11),
                                               cVar5 == '\0' ||
                                               (cVar5 = FUN_180414d50(local_ad30,0x27,local_ace0,
                                                                      local_ad28[0]), cVar5 == '\0')
                                               ))))) {
LAB_180405138:
                                            FUN_1804111e0(&local_ae48);
                                            goto LAB_180405243;
                                          }
                                          if ((local_5410 != '\0') && (local_ace8[0] == 1)) {
                                            puVar21 = (undefined8 *)
                                                      FUN_1801c6710(local_ad80,local_ad28[0] + 0x2c)
                                            ;
                                            local_4d38 = *puVar21;
                                            uStack_4d30 = puVar21[1];
                                          }
                                          local_afb0 = *(int *)(local_ad28[0] + 0xd4);
                                          local_af78 = CONCAT44(local_af78._4_4_,
                                                                *(int *)(local_ad28[0] + 0xd8));
                                          if ((local_afb0 != iVar11 + -1) ||
                                             (*(int *)(local_ad28[0] + 0xd8) != iVar11)) {
                                            UVar18 = GetTickCount64();
                                            if (DAT_180c7ca28 <= UVar18) {
                                              DAT_180c7ca28 = UVar18 + 2000;
                                              local_afe8 = CONCAT44(local_afe8._4_4_,(int)local_af78
                                                                   );
                                              local_aff0 = (longlong *)
                                                           CONCAT44(local_aff0._4_4_,local_afb0);
                                              local_aff8 = *(undefined ***)(local_af10 + 8);
                                              local_afe0 = iVar11;
                                              FUN_1803e0f70(3,"Prediction","MOVEMENT_CLOCK_INVALID",
                                                                                                                        
                                                  "command=%lld start=%d end=%d expected_end=%d published=0"
                                                  );
                                            }
                                            goto LAB_180405138;
                                          }
                                          *(undefined8 *)(local_ad30 + 0x198) = 0;
                                          local_aff8 = local_ad28;
                                          uVar19 = FUN_180348d30(local_ad50,&local_acb8,&local_ad30,
                                                                 &local_ace0);
                                          local_afb8 = FUN_180411300(uVar19);
                                          lVar17 = FUN_180411610();
                                          iVar11 = FUN_1804116b0();
                                          if (((local_afb8 == '\0') || (iVar11 == 0)) ||
                                             (puVar20 = (uint *)FUN_1801a8f80(local_adc0,
                                                                              iVar11 + local_ad30),
                                             (char)puVar20[1] == '\0')) {
                                            auVar32 = ZEXT1664(auVar33._0_16_);
                                          }
                                          else {
                                            auVar32 = ZEXT464(*puVar20);
                                          }
                                          if (lVar17 == 0) {
LAB_180404fa2:
                                            auVar32 = ZEXT1664(auVar33._0_16_);
                                          }
                                          else if (*(char *)(lVar17 + 0x58) == '\0') {
                                            sVar9 = thunk_FUN_180624430(auVar32._0_8_);
                                            if ((0 < sVar9) || (auVar32._0_4_ <= fVar35))
                                            goto LAB_180404fa2;
                                            auVar32 = ZEXT464((uint)(auVar32._0_4_ * fVar36));
                                          }
                                          else {
                                            auVar32 = ZEXT1664(auVar34._0_16_);
                                          }
                                          if (local_afb8 == '\0') {
LAB_180405025:
                                            bVar2 = false;
                                          }
                                          else {
                                            local_adf8 = &local_ad30;
                                            local_adf0 = &local_ace0;
                                            local_ade8 = local_ad28;
                                            cVar5 = FUN_1804117b0(&local_adf8);
                                            if (cVar5 == '\0') goto LAB_180405025;
                                            local_aff8 = local_ad28;
                                            uVar19 = FUN_180348d30(local_ad70,local_aca8,&local_ad30
                                                                   ,&local_ace0);
                                            cVar5 = FUN_1804118b0(uVar19);
                                            if (cVar5 == '\0') goto LAB_180405025;
                                            bVar2 = true;
                                          }
                                          FUN_1800a8050(&local_ad18);
                                          uVar19 = FUN_180415ff0(&local_ad18,9);
                                          FUN_180411ac0(uVar19,param_3[1],local_ad30);
                                          FUN_180415fa0(&local_ad18);
                                          _DAT_180b8e1b4 = auVar32._0_4_;
                                          FUN_1804111e0(&local_ae48);
                                          if ((!bVar2) || (DAT_180b8e111 == '\0'))
                                          goto LAB_180405243;
                                          local_ae08 = param_5;
                                          local_ae00 = local_ace8;
                                          cVar5 = FUN_1804119c0(&local_ae08);
                                          if (cVar5 != '\0') break;
                                          local_ace8[0] = local_ace8[0] + 1;
                                        } while (local_ace8[0] <= (int)local_afc0);
                                        lVar17 = local_af20;
                                      }
                                      cVar5 = local_af90;
                                      if (local_af90 == '\0') {
                                        FUN_1800aa120("prediction: restore begin");
                                      }
                                      FUN_1803fd050(local_5478);
                                      cVar6 = FUN_180400450(local_adb8);
                                      FUN_1803aaae0(&local_afc8,lVar17,local_afc8);
                                      cVar29 = local_afc8._4_1_;
                                      if ((local_afc8._4_1_ == '\0') ||
                                         (cVar7 = FUN_1803daa60(&local_afc8,&local_af60),
                                         cVar7 == '\0')) {
                                        cVar7 = '\0';
                                      }
                                      else {
                                        cVar7 = '\x01';
                                      }
                                      if (((local_5410 != '\0') || (cVar6 == '\0')) ||
                                         (cVar7 == '\0')) {
                                        local_afe0 = -1;
                                        if (cVar29 != '\0') {
                                          local_afe0 = (int)local_afc8;
                                        }
                                        local_aff8 = *(undefined ***)(local_af10 + 8);
                                        if ((cVar6 == '\0') || (cVar7 == '\0')) {
                                          uVar31 = 3;
                                        }
                                        local_afe8 = CONCAT44(local_afe8._4_4_,iVar10);
                                        local_aff0 = (longlong *)
                                                     CONCAT44(local_aff0._4_4_,(int)local_afc0);
                                        local_afd8 = cVar7;
                                        local_afd0 = cVar6;
                                        FUN_180414dc0(uVar31);
                                        if ((cVar6 == '\0') || (cVar7 == '\0')) {
                                          DAT_180b8e111 = '\0';
                                          goto LAB_180405243;
                                        }
                                      }
                                      local_540e = 1;
                                      if (cVar5 == '\0') {
                                        FUN_1800aa120("prediction: restore end");
                                      }
                                    }
LAB_180405243:
                                    FUN_180400450(local_adb8);
                                    FUN_180415fa0(&local_acf8);
                                    FUN_1802423f0(local_acd8);
                                  }
                                }
                                FUN_1804001c0(local_ac98);
                                FUN_1803ffe00(local_4d28);
                                FUN_1803fd140(local_5478);
                                FUN_180415fa0(&local_acc8);
                                goto LAB_180405351;
                              }
                            }
                            cVar5 = FUN_1801aceb0(&DAT_180c7ca4a,1);
                            if (cVar5 == '\0') {
                              FUN_1800e6010(3,"Prediction","PREDICTION_NATIVE_SCOPE_UNAVAILABLE",
                                            "native_trial_started=0 reason=unverified_pawn_scope");
                            }
                            goto LAB_180405351;
                          }
                          iVar10 = local_af64;
                        }
                      }
                    }
                    iVar13 = local_afb4;
                    cVar5 = FUN_1801aceb0(&DAT_180c7ca4b,1);
                    if (cVar5 != '\0') goto LAB_180405351;
                    local_afe8 = CONCAT44(local_afe8._4_4_,iVar10);
                    local_aff0 = (longlong *)CONCAT44(local_aff0._4_4_,iVar11);
                    local_aff8 = (undefined **)CONCAT44(local_aff8._4_4_,iVar13);
                    pcVar30 = "buttons=%u pressed_commands=%u toggle=%u native_trial_started=0";
                    pcVar27 = "PREDICTION_INPUT_LAYOUT_INVALID";
                  }
                  FUN_1803826f0(3,"Prediction",pcVar27,pcVar30);
                  goto LAB_180405351;
                }
              }
              cVar5 = FUN_1801aceb0(&DAT_180c7ca83,1);
              if (cVar5 == '\0') {
                local_aff8 = (undefined **)CONCAT44(local_aff8._4_4_,iVar10);
                FUN_1800ea170(3,"Prediction","PREDICTION_VIEW_OFFSET_LAYOUT_INVALID",
                              "view_offset=%u native_trial_started=0");
              }
              goto LAB_180405351;
            }
          }
        }
      }
    }
LAB_18040573e:
    cVar5 = DAT_180c7ca81;
    LOCK();
    DAT_180c7ca81 = '\x01';
    UNLOCK();
    if (cVar5 != '\0') goto LAB_180405351;
    FUN_18063ab10(local_c98,0,0x600);
    local_aff8 = (undefined **)CONCAT44(local_aff8._4_4_,iVar10);
    FUN_18015ad60(local_c98,0x600,0xffffffffffffffff,"velocity=%u native_trial_started=0");
    local_aff8 = &PTR_180700558;
    if (local_c98[0] != '\0') {
      local_aff8 = (undefined **)&DAT_1806bcfc0;
    }
    local_aff0 = (longlong *)local_c98;
  }
  FUN_1800f6900(3);
LAB_180405351:
  *piVar16 = *piVar16 + -1;
  FUN_1805f68fc(&DAT_180b8e1c8);
  lVar17 = local_aef8;
  if (local_aef8 != 0) {
    FUN_18017bf40(&local_aef8);
    plVar15 = (longlong *)(lVar17 + 0x28 + (ulonglong)*(uint *)(lVar17 + 0x20) * 8);
    *plVar15 = *plVar15 + (local_aef8 - *(longlong *)(lVar17 + 0x18));
    *(longlong *)(lVar17 + 0x18) = local_aef8;
    *(undefined4 *)(lVar17 + 0x20) = local_af00;
  }
}



