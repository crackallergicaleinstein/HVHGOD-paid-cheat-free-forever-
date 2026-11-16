// FUN_1802cbd00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802cbd00 */

undefined8 * FUN_1802cbd00(undefined8 *param_1)

{
  char *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  ULONGLONG UVar7;
  undefined *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined *local_res8;
  char *local_48;
  longlong local_40;
  char *local_38;
  longlong local_30;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  lVar6 = DAT_180c64430;
  if (DAT_180c64430 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    lVar5 = FUN_18017ea70();
    *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
    if (lVar6 == 0) {
      bVar2 = false;
    }
    else {
      local_res8 = (undefined *)0x0;
      cVar3 = FUN_1804514f0(&local_res8,lVar6,8);
      if (cVar3 == '\0') {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
    }
    puVar8 = local_res8;
    lVar6 = FUN_18017ea70();
    if (*(int *)(lVar6 + 4) != 0) {
      *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
    }
    if (!bVar2) {
      puVar8 = (undefined *)0x0;
    }
  }
  *param_1 = puVar8;
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar5 = DAT_1808fd740;
  lVar6 = DAT_1808da460;
  uVar10 = 1000;
  if ((DAT_1808fd740 != DAT_1808da460) || (lVar9 = DAT_180c6ec20, DAT_180c6ec20 == 0)) {
    UVar7 = GetTickCount64();
    if ((lVar5 == lVar6) && (UVar7 < DAT_180c6ec18)) {
      lVar9 = 0;
    }
    else {
      local_res8 = &DAT_1808fd750;
      iVar4 = FUN_1805f68d0(&DAT_1808fd750);
      if (iVar4 != 0) goto LAB_1802cc64a;
      if (DAT_1808fd79c == 0x7fffffff) {
        DAT_1808fd79c = 0x7ffffffe;
        goto LAB_1802cc63f;
      }
      if (DAT_1808fd740 == lVar6) {
        if ((DAT_180c6ec20 == 0) && (DAT_180c6ec18 <= UVar7)) goto LAB_1802cbe7f;
      }
      else {
        DAT_1808fd7a0 = 1000;
LAB_1802cbe7f:
        lVar5 = -1;
        do {
          local_40 = lVar5 + 1;
          pcVar1 = "lient.dll:48895C24??574883EC??8B41??488D79" + lVar5;
          lVar5 = local_40;
        } while (*pcVar1 != '\0');
        local_48 = "client.dll:48895C24??574883EC??8B41??488D79";
        local_38 = "patterns::init_particle_path_buffer";
        local_30 = 0x23;
        DAT_180c6ec20 = FUN_1800e5d20(&local_38,&local_48);
        DAT_1808fd740 = lVar6;
        DAT_180c6ec18 = 0xffffffffffffffff;
        if (DAT_180c6ec20 == 0) {
          DAT_180c6ec18 = DAT_1808fd7a0 + UVar7;
          if (DAT_1808fd7a0 < 60000) {
            DAT_1808fd7a0 = DAT_1808fd7a0 * 2;
          }
          else {
            DAT_1808fd7a0 = 60000;
          }
        }
        else {
          DAT_1808fd7a0 = 1000;
        }
      }
      lVar9 = DAT_180c6ec20;
      FUN_1805f68fc(&DAT_1808fd750);
    }
  }
  param_1[1] = lVar9;
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar5 = DAT_1808fd6e0;
  lVar6 = DAT_1808da460;
  if ((DAT_1808fd6e0 != DAT_1808da460) || (lVar9 = DAT_180c6ec08, DAT_180c6ec08 == 0)) {
    UVar7 = GetTickCount64();
    if ((lVar5 == lVar6) && (UVar7 < DAT_180c6ec10)) {
      lVar9 = 0;
    }
    else {
      local_res8 = &DAT_1808fd6f0;
      iVar4 = FUN_1805f68d0(&DAT_1808fd6f0);
      if (iVar4 != 0) goto LAB_1802cc64a;
      if (DAT_1808fd73c == 0x7fffffff) {
        DAT_1808fd73c = 0x7ffffffe;
        goto LAB_1802cc63f;
      }
      if (DAT_1808fd6e0 == lVar6) {
        if ((DAT_180c6ec08 == 0) && (DAT_180c6ec10 <= UVar7)) goto LAB_1802cbfea;
      }
      else {
        DAT_1808fd6d0 = 1000;
LAB_1802cbfea:
        lVar5 = -1;
        do {
          local_30 = lVar5 + 1;
          lVar9 = lVar5 + 1;
          lVar5 = local_30;
        } while ("resourcesystem.dll:405355574881EC80000000"[lVar9] != '\0');
        local_38 = "resourcesystem.dll:405355574881EC80000000";
        local_48 = "patterns::resource_system_precache";
        local_40 = 0x22;
        DAT_180c6ec08 = FUN_1800e5d20(&local_48,&local_38);
        DAT_1808fd6e0 = lVar6;
        DAT_180c6ec10 = 0xffffffffffffffff;
        if (DAT_180c6ec08 == 0) {
          DAT_180c6ec10 = DAT_1808fd6d0 + UVar7;
          if (DAT_1808fd6d0 < 60000) {
            DAT_1808fd6d0 = DAT_1808fd6d0 * 2;
          }
          else {
            DAT_1808fd6d0 = 60000;
          }
        }
        else {
          DAT_1808fd6d0 = 1000;
        }
      }
      lVar9 = DAT_180c6ec08;
      FUN_1805f68fc(&DAT_1808fd6f0);
    }
  }
  param_1[2] = lVar9;
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar5 = DAT_1808fd6d8;
  lVar6 = DAT_1808da460;
  if ((DAT_1808fd6d8 != DAT_1808da460) || (lVar9 = DAT_180c6ebf8, DAT_180c6ebf8 == 0)) {
    UVar7 = GetTickCount64();
    if ((lVar5 == lVar6) && (UVar7 < DAT_180c6ec00)) {
      lVar9 = 0;
    }
    else {
      local_res8 = &DAT_1808fd670;
      iVar4 = FUN_1805f68d0(&DAT_1808fd670);
      if (iVar4 != 0) goto LAB_1802cc64a;
      if (DAT_1808fd6bc == 0x7fffffff) {
        DAT_1808fd6bc = 0x7ffffffe;
        goto LAB_1802cc63f;
      }
      if (DAT_1808fd6d8 == lVar6) {
        if ((DAT_180c6ebf8 == 0) && (DAT_180c6ec00 <= UVar7)) goto LAB_1802cc14e;
      }
      else {
        DAT_1808fd6c0 = 1000;
LAB_1802cc14e:
        lVar5 = -1;
        do {
          local_30 = lVar5 + 1;
          lVar9 = lVar5 + 1;
          lVar5 = local_30;
        } while ("client.dll:4C8BDC534881EC90000000F20F1005"[lVar9] != '\0');
        local_38 = "client.dll:4C8BDC534881EC90000000F20F1005";
        local_48 = "patterns::particle_create_effect";
        local_40 = 0x20;
        DAT_180c6ebf8 = FUN_1800e5d20(&local_48,&local_38);
        DAT_1808fd6d8 = lVar6;
        DAT_180c6ec00 = 0xffffffffffffffff;
        if (DAT_180c6ebf8 == 0) {
          DAT_180c6ec00 = DAT_1808fd6c0 + UVar7;
          if (DAT_1808fd6c0 < 60000) {
            DAT_1808fd6c0 = DAT_1808fd6c0 * 2;
          }
          else {
            DAT_1808fd6c0 = 60000;
          }
        }
        else {
          DAT_1808fd6c0 = 1000;
        }
      }
      lVar9 = DAT_180c6ebf8;
      FUN_1805f68fc(&DAT_1808fd670);
    }
  }
  param_1[3] = lVar9;
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar5 = DAT_1808fd6c8;
  lVar6 = DAT_1808da460;
  if ((DAT_1808fd6c8 != DAT_1808da460) || (lVar9 = DAT_180c6ebf0, DAT_180c6ebf0 == 0)) {
    UVar7 = GetTickCount64();
    if ((lVar5 == lVar6) && (UVar7 < DAT_180c6ebe0)) {
      lVar9 = 0;
    }
    else {
      local_res8 = &DAT_1808fd610;
      iVar4 = FUN_1805f68d0(&DAT_1808fd610);
      if (iVar4 != 0) goto LAB_1802cc64a;
      if (DAT_1808fd65c == 0x7fffffff) {
        DAT_1808fd65c = 0x7ffffffe;
        goto LAB_1802cc63f;
      }
      if (DAT_1808fd6c8 == lVar6) {
        if ((DAT_180c6ebf0 == 0) && (DAT_180c6ebe0 <= UVar7)) goto LAB_1802cc2ba;
      }
      else {
        DAT_1808fd660 = 1000;
LAB_1802cc2ba:
        lVar5 = -1;
        do {
          local_30 = lVar5 + 1;
          lVar9 = lVar5 + 1;
          lVar5 = local_30;
        } while ("client.dll:83FAFF0F84????????4154"[lVar9] != '\0');
        local_38 = "client.dll:83FAFF0F84????????4154";
        local_48 = "patterns::particle_destroy_effect";
        local_40 = 0x21;
        DAT_180c6ebf0 = FUN_1800e5d20(&local_48,&local_38);
        DAT_1808fd6c8 = lVar6;
        DAT_180c6ebe0 = 0xffffffffffffffff;
        if (DAT_180c6ebf0 == 0) {
          DAT_180c6ebe0 = DAT_1808fd660 + UVar7;
          if (DAT_1808fd660 < 60000) {
            DAT_1808fd660 = DAT_1808fd660 * 2;
          }
          else {
            DAT_1808fd660 = 60000;
          }
        }
        else {
          DAT_1808fd660 = 1000;
        }
      }
      lVar9 = DAT_180c6ebf0;
      FUN_1805f68fc(&DAT_1808fd610);
    }
  }
  param_1[4] = lVar9;
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar5 = DAT_1808fd5a0;
  lVar6 = DAT_1808da460;
  if ((DAT_1808fd5a0 != DAT_1808da460) || (lVar9 = DAT_180c6ebe8, DAT_180c6ebe8 == 0)) {
    UVar7 = GetTickCount64();
    if ((lVar5 == lVar6) && (UVar7 < DAT_180c6ebd8)) {
      lVar9 = 0;
    }
    else {
      local_res8 = &DAT_1808fd5b0;
      iVar4 = FUN_1805f68d0(&DAT_1808fd5b0);
      if (iVar4 != 0) goto LAB_1802cc64a;
      if (DAT_1808fd5fc == 0x7fffffff) {
        DAT_1808fd5fc = 0x7ffffffe;
        goto LAB_1802cc63f;
      }
      if (DAT_1808fd5a0 == lVar6) {
        if ((DAT_180c6ebe8 == 0) && (DAT_180c6ebd8 <= UVar7)) goto LAB_1802cc41e;
      }
      else {
        DAT_1808fd600 = 1000;
LAB_1802cc41e:
        lVar5 = -1;
        do {
          local_30 = lVar5 + 1;
          pcVar1 = "lient.dll:4883EC58F3410F105104F3410F1009F3410F105908" + lVar5;
          lVar5 = local_30;
        } while (*pcVar1 != '\0');
        local_38 = "client.dll:4883EC58F3410F105104F3410F1009F3410F105908";
        local_48 = "patterns::particle_set_control_point";
        local_40 = 0x24;
        DAT_180c6ebe8 = FUN_1800e5d20(&local_48,&local_38);
        DAT_1808fd5a0 = lVar6;
        DAT_180c6ebd8 = 0xffffffffffffffff;
        if (DAT_180c6ebe8 == 0) {
          DAT_180c6ebd8 = UVar7 + DAT_1808fd600;
          if (DAT_1808fd600 < 60000) {
            DAT_1808fd600 = DAT_1808fd600 * 2;
          }
          else {
            DAT_1808fd600 = 60000;
          }
        }
        else {
          DAT_1808fd600 = 1000;
        }
      }
      lVar9 = DAT_180c6ebe8;
      FUN_1805f68fc(&DAT_1808fd5b0);
    }
  }
  param_1[5] = lVar9;
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar5 = DAT_1808fd540;
  lVar6 = DAT_1808da460;
  if ((DAT_1808fd540 == DAT_1808da460) && (lVar9 = DAT_180c6ebc8, DAT_180c6ebc8 != 0))
  goto LAB_1802cc60f;
  UVar7 = GetTickCount64();
  if ((lVar5 == lVar6) && (UVar7 < DAT_180c6ebd0)) {
    lVar9 = 0;
    goto LAB_1802cc60f;
  }
  local_res8 = &DAT_1808fd550;
  iVar4 = FUN_1805f68d0(&DAT_1808fd550);
  if (iVar4 != 0) {
LAB_1802cc64a:
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_1808fd59c == 0x7fffffff) {
    DAT_1808fd59c = 0x7ffffffe;
LAB_1802cc63f:
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  if (DAT_1808fd540 == lVar6) {
    if ((DAT_180c6ebc8 == 0) && (DAT_180c6ebd0 <= UVar7)) goto LAB_1802cc57f;
  }
  else {
    DAT_1808fd4e0 = 1000;
LAB_1802cc57f:
    lVar5 = -1;
    do {
      local_30 = lVar5 + 1;
      lVar9 = lVar5 + 1;
      lVar5 = local_30;
    } while ("client.dll:4154415541574881EC900000004D8BF9"[lVar9] != '\0');
    local_38 = "client.dll:4154415541574881EC900000004D8BF9";
    local_48 = "patterns::particle_set_entity_binding";
    local_40 = 0x25;
    DAT_180c6ebc8 = FUN_1800e5d20(&local_48,&local_38);
    DAT_1808fd540 = lVar6;
    DAT_180c6ebd0 = 0xffffffffffffffff;
    if (DAT_180c6ebc8 == 0) {
      DAT_180c6ebd0 = DAT_1808fd4e0 + UVar7;
      uVar10 = DAT_1808fd4e0 * 2;
      if (59999 < DAT_1808fd4e0) {
        uVar10 = 60000;
      }
    }
    DAT_1808fd4e0 = uVar10;
  }
  lVar9 = DAT_180c6ebc8;
  FUN_1805f68fc(&DAT_1808fd550);
LAB_1802cc60f:
  param_1[6] = lVar9;
  return param_1;
}



