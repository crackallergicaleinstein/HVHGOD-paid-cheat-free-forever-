// FUN_180375130 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180375130 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180375130(void)

{
  bool bVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  ULONGLONG UVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  char *pcVar11;
  longlong lVar12;
  undefined1 *puVar13;
  ulonglong uVar14;
  undefined *puVar15;
  undefined1 auStack_228 [32];
  undefined1 *local_208;
  undefined *local_1d8 [2];
  char local_1c8 [48];
  char *local_198;
  longlong local_190;
  char *local_188;
  longlong local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  int local_148 [2];
  undefined1 local_140 [16];
  undefined1 local_130 [16];
  undefined4 local_118;
  undefined4 local_114;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_30;
  
  local_30 = DAT_1808d5f00 ^ (ulonglong)auStack_228;
  if (DAT_180bbec8b == '\0') {
  }
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  puVar2 = DAT_180901a40;
  puVar15 = DAT_1808da460;
  lVar12 = -1;
  uVar14 = 1000;
  if ((DAT_180901a40 != DAT_1808da460) || (lVar10 = DAT_180c6faa0, DAT_180c6faa0 == 0)) {
    UVar5 = GetTickCount64();
    if ((puVar2 == puVar15) && (UVar5 < DAT_180c6fa98)) {
      lVar10 = 0;
    }
    else {
      local_1d8[0] = &DAT_1809019f0;
      iVar4 = FUN_1805f68d0(&DAT_1809019f0);
      if (iVar4 != 0) goto LAB_180375c81;
      if (DAT_180901a3c == 0x7fffffff) {
        DAT_180901a3c = 0x7ffffffe;
        goto LAB_180375c76;
      }
      if (DAT_180901a40 == puVar15) {
        if ((DAT_180c6faa0 == 0) && (DAT_180c6fa98 <= UVar5)) goto LAB_180375254;
      }
      else {
        DAT_180901a50 = 1000;
LAB_180375254:
        lVar10 = -1;
        do {
          local_180 = lVar10 + 1;
          pcVar11 = "lient.dll:48895C24??574883EC??8B41??488D79" + lVar10;
          lVar10 = local_180;
        } while (*pcVar11 != '\0');
        local_188 = "client.dll:48895C24??574883EC??8B41??488D79";
        local_198 = "patterns::init_particle_path_buffer_alt";
        local_190 = 0x27;
        DAT_180c6faa0 = FUN_1800e5d20(&local_198,&local_188);
        DAT_180901a40 = puVar15;
        DAT_180c6fa98 = 0xffffffffffffffff;
        if (DAT_180c6faa0 == 0) {
          DAT_180c6fa98 = DAT_180901a50 + UVar5;
          if (DAT_180901a50 < 60000) {
            DAT_180901a50 = DAT_180901a50 * 2;
          }
          else {
            DAT_180901a50 = 60000;
          }
        }
        else {
          DAT_180901a50 = 1000;
        }
      }
      lVar10 = DAT_180c6faa0;
      FUN_1805f68fc(&DAT_1809019f0);
    }
  }
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  puVar2 = DAT_180901a48;
  puVar15 = DAT_1808da460;
  if ((DAT_180901a48 != DAT_1808da460) || (lVar6 = DAT_180c6fab0, DAT_180c6fab0 == 0)) {
    UVar5 = GetTickCount64();
    if ((puVar2 == puVar15) && (UVar5 < DAT_180c6faa8)) {
      lVar6 = 0;
    }
    else {
      local_1d8[0] = &DAT_180901940;
      iVar4 = FUN_1805f68d0(&DAT_180901940);
      if (iVar4 != 0) goto LAB_180375c81;
      if (DAT_18090198c == 0x7fffffff) {
        DAT_18090198c = 0x7ffffffe;
        goto LAB_180375c76;
      }
      if (DAT_180901a48 == puVar15) {
        if ((DAT_180c6fab0 == 0) && (DAT_180c6faa8 <= UVar5)) goto LAB_1803753b6;
      }
      else {
        DAT_180901938 = 1000;
LAB_1803753b6:
        lVar6 = -1;
        do {
          local_190 = lVar6 + 1;
          lVar7 = lVar6 + 1;
          lVar6 = local_190;
        } while ("resourcesystem.dll:48895C24??48896C24??48897424??574883EC??488B01"[lVar7] != '\0')
        ;
        local_198 = "resourcesystem.dll:48895C24??48896C24??48897424??574883EC??488B01";
        local_188 = "patterns::resource_system_load";
        local_180 = 0x1e;
        DAT_180c6fab0 = FUN_1800e5d20(&local_188,&local_198);
        DAT_180901a48 = puVar15;
        DAT_180c6faa8 = 0xffffffffffffffff;
        if (DAT_180c6fab0 == 0) {
          DAT_180c6faa8 = DAT_180901938 + UVar5;
          if (DAT_180901938 < 60000) {
            DAT_180901938 = DAT_180901938 * 2;
          }
          else {
            DAT_180901938 = 60000;
          }
        }
        else {
          DAT_180901938 = 1000;
        }
      }
      lVar6 = DAT_180c6fab0;
      FUN_1805f68fc(&DAT_180901940);
    }
  }
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  puVar15 = DAT_1808da460;
  local_1d8[0] = DAT_180901930;
  if ((DAT_180901930 != DAT_1808da460) || (lVar7 = DAT_180c6fa88, DAT_180c6fa88 == 0)) {
    UVar5 = GetTickCount64();
    if ((local_1d8[0] == puVar15) && (UVar5 < DAT_180c6fa90)) {
      lVar7 = 0;
    }
    else {
      local_1d8[0] = &DAT_1809019a0;
      iVar4 = FUN_1805f68d0(&DAT_1809019a0);
      if (iVar4 != 0) {
LAB_180375c81:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1809019ec == 0x7fffffff) {
        DAT_1809019ec = 0x7ffffffe;
LAB_180375c76:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if (DAT_180901930 == puVar15) {
        if ((DAT_180c6fa88 == 0) && (DAT_180c6fa90 <= UVar5)) goto LAB_180375516;
      }
      else {
        DAT_180901990 = 1000;
LAB_180375516:
        lVar7 = -1;
        do {
          local_190 = lVar7 + 1;
          lVar9 = lVar7 + 1;
          lVar7 = local_190;
        } while ("client.dll:4C8BDC534881EC90000000F20F1005"[lVar9] != '\0');
        local_198 = "client.dll:4C8BDC534881EC90000000F20F1005";
        local_188 = "patterns::particle_create_effect";
        local_180 = 0x20;
        DAT_180c6fa88 = FUN_1800e5d20(&local_188,&local_198);
        DAT_180901930 = puVar15;
        DAT_180c6fa90 = 0xffffffffffffffff;
        if (DAT_180c6fa88 == 0) {
          DAT_180c6fa90 = DAT_180901990 + UVar5;
          uVar14 = DAT_180901990 * 2;
          if (59999 < DAT_180901990) {
            uVar14 = 60000;
          }
        }
        DAT_180901990 = uVar14;
      }
      lVar7 = DAT_180c6fa88;
      FUN_1805f68fc(&DAT_1809019a0);
    }
  }
  lVar9 = DAT_180c64430;
  if (DAT_180c64430 == 0) {
LAB_180375c5e:
    FUN_180374e20("create");
  }
  lVar8 = FUN_18017ea70();
  *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
  if (lVar9 == 0) {
    bVar1 = false;
  }
  else {
    local_1d8[0] = (undefined *)0x0;
    cVar3 = FUN_1804514f0(local_1d8,lVar9,8);
    if (cVar3 == '\0') {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
  }
  puVar15 = local_1d8[0];
  lVar9 = FUN_18017ea70();
  if (*(int *)(lVar9 + 4) != 0) {
    *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
  }
  if (!bVar1) {
    puVar15 = (undefined *)0x0;
  }
  if ((((puVar15 == (undefined *)0x0) || (DAT_180c631f8 == 0)) || (lVar10 == 0)) ||
     ((lVar6 == 0 || (lVar7 == 0)))) goto LAB_180375c5e;
  local_140 = (undefined1  [16])0x0;
  local_130 = (undefined1  [16])0x0;
  FUN_18015ba30(local_140,&PTR_180700558,0);
  if (DAT_180cc8c48 == 0) {
    local_178 = 0xdb35e39b27e1c185;
    uStack_170 = 0xa05181ee77d57a06;
    local_168 = 0x929654b1461b7377;
    uStack_160 = 0xa5cea54bfef7110;
    local_158 = 0xa70c9f7f916b7e19;
    uStack_150 = 0x2b2d6d82aa402c0a;
    builtin_strncpy(local_1c8,"particles/embedded/weather_snow.vpcf",0x25);
    local_1c8[0x25] = '\0';
    local_1c8[0x26] = '\0';
    local_1c8[0x27] = '\0';
    local_1c8[0x28] = '\0';
    local_1c8[0x29] = '\0';
    local_1c8[0x2a] = '\0';
    local_1c8[0x2b] = '\0';
    local_1c8[0x2c] = '\0';
    local_1c8[0x2d] = '\0';
    local_1c8[0x2e] = '\0';
    local_1c8[0x2f] = '\0';
    do {
      lVar8 = lVar12 + 1;
      lVar9 = lVar12 + 1;
      lVar12 = lVar8;
    } while (local_1c8[lVar9] != '\0');
  }
  else if (DAT_180cc8c48 == 1) {
    local_178 = 0xdb35e39b27e1c185;
    uStack_170 = 0xa05181ee77d57a06;
    local_168 = 0x929654b1461b7377;
    uStack_160 = 0xa5cea54bfef7110;
    local_158 = 0xa70c9f7f916b7e19;
    uStack_150 = 0x2b2d6d82aa402c0a;
    builtin_strncpy(local_1c8,"particles/embedded/weather_rain.vpcf",0x25);
    local_1c8[0x25] = '\0';
    local_1c8[0x26] = '\0';
    local_1c8[0x27] = '\0';
    local_1c8[0x28] = '\0';
    local_1c8[0x29] = '\0';
    local_1c8[0x2a] = '\0';
    local_1c8[0x2b] = '\0';
    local_1c8[0x2c] = '\0';
    local_1c8[0x2d] = '\0';
    local_1c8[0x2e] = '\0';
    local_1c8[0x2f] = '\0';
    do {
      lVar8 = lVar12 + 1;
      lVar9 = lVar12 + 1;
      lVar12 = lVar8;
    } while (local_1c8[lVar9] != '\0');
  }
  else {
    if (DAT_180cc8c48 != 2) goto LAB_180375c25;
    local_178 = 0xdb35e39b27e1c185;
    uStack_170 = 0xa05181ee77d57a06;
    local_168 = 0x929654b1461b7377;
    uStack_160 = 0xa5cea54bfef7110;
    local_158 = 0xa70c9f7f916b7e19;
    uStack_150 = 0x2b2d6d82aa402c0a;
    builtin_strncpy(local_1c8,"particles/embedded/weather_stars.vpcf",0x26);
    local_1c8[0x26] = '\0';
    local_1c8[0x27] = '\0';
    local_1c8[0x28] = '\0';
    local_1c8[0x29] = '\0';
    local_1c8[0x2a] = '\0';
    local_1c8[0x2b] = '\0';
    local_1c8[0x2c] = '\0';
    local_1c8[0x2d] = '\0';
    local_1c8[0x2e] = '\0';
    local_1c8[0x2f] = '\0';
    do {
      lVar8 = lVar12 + 1;
      lVar9 = lVar12 + 1;
      lVar12 = lVar8;
    } while (local_1c8[lVar9] != '\0');
  }
  local_1c8[0x28] = '\0';
  local_1c8[0x29] = '\0';
  local_1c8[0x2a] = '\0';
  local_1c8[0x2b] = '\0';
  local_1c8[0x2c] = '\0';
  local_1c8[0x2d] = '\0';
  local_1c8[0x2e] = '\0';
  local_1c8[0x2f] = '\0';
  builtin_strncpy(local_1c8,"particles/embedded/weath",0x18);
  uStack_150 = 0x2b2d6d82aa402c0a;
  local_158 = 0xa70c9f7f916b7e19;
  uStack_160 = 0xa5cea54bfef7110;
  local_168 = 0x929654b1461b7377;
  uStack_170 = 0xa05181ee77d57a06;
  local_178 = 0xdb35e39b27e1c185;
  local_1d8[0] = (undefined *)0x2b2d6d82aa402c0a;
  FUN_180113930(local_140,local_1c8,lVar8);
  local_118 = 0;
  local_114 = 0xc00000c8;
  local_48 = 0;
  local_40 = 0;
  puVar13 = local_140;
  if (0xf < (ulonglong)local_130._8_8_) {
    puVar13 = (undefined1 *)local_140._0_8_;
  }
  cVar3 = FUN_1804513c0(lVar10,1,2);
  if (cVar3 == '\0') {
LAB_180375c18:
    pcVar11 = "initialize_path";
  }
  else {
    lVar12 = FUN_18017ea70();
    *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
    cVar3 = FUN_1801f3ab0(lVar10,&local_118,puVar13);
    lVar12 = FUN_18017ea70();
    if (*(int *)(lVar12 + 4) != 0) {
      *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
    }
    lVar12 = DAT_180c631f8;
    if (cVar3 == '\0') goto LAB_180375c18;
    local_40 = 0x66637076;
    cVar3 = FUN_1804513c0(lVar6,1,2);
    if (cVar3 == '\0') {
LAB_180375c0f:
      pcVar11 = "load_resource";
    }
    else {
      lVar10 = FUN_18017ea70();
      *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
      cVar3 = FUN_1801f3ae0(lVar6,lVar12,&local_118);
      lVar12 = FUN_18017ea70();
      if (*(int *)(lVar12 + 4) != 0) {
        *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
      }
      if (cVar3 == '\0') goto LAB_180375c0f;
      local_148[0] = -1;
      puVar13 = local_140;
      if (0xf < (ulonglong)local_130._8_8_) {
        puVar13 = (undefined1 *)local_140._0_8_;
      }
      cVar3 = FUN_1804513c0(lVar7,1,2);
      if (cVar3 != '\0') {
        lVar12 = FUN_18017ea70();
        *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
        local_208 = puVar13;
        FUN_1802448c0(&local_198,lVar7,puVar15,local_148);
        lVar12 = FUN_18017ea70();
        if (*(int *)(lVar12 + 4) != 0) {
          *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
        }
        if (((char)local_190 != '\0') && (local_148[0] != -1)) {
          DAT_180902c30 = local_148[0];
          DAT_180902c40 = (uint)DAT_180cc8c48;
          DAT_180902c48 = 1;
          DAT_180902c38 = puVar15;
          goto LAB_180375c25;
        }
      }
      pcVar11 = "create_effect";
    }
  }
  FUN_180374e20(pcVar11);
LAB_180375c25:
  FUN_18015c010(local_140);
}



