// FUN_180223d40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180223d40 */

/* WARNING: Type propagation algorithm not settling */

undefined1 FUN_180223d40(void)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  undefined1 uVar4;
  uint uVar5;
  ULONGLONG UVar6;
  longlong lVar7;
  char *pcVar8;
  undefined *puVar9;
  longlong lVar10;
  undefined *puVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  char *pcVar19;
  longlong lVar20;
  undefined *local_res8;
  longlong local_res10;
  undefined *local_res18;
  char *local_b8;
  longlong local_b0;
  char *local_a8;
  char *local_a0;
  char local_98 [96];
  
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar20 = DAT_1808ec298;
  lVar7 = DAT_1808da460;
  local_res10 = DAT_180c63f20;
  uVar13 = 1000;
  if ((DAT_1808ec298 != DAT_1808da460) || (lVar15 = DAT_180c63f20, DAT_180c63f20 == 0)) {
    UVar6 = GetTickCount64();
    if ((lVar20 == lVar7) && (UVar6 < DAT_180c63f18)) {
      lVar15 = 0;
      local_res10 = 0;
    }
    else {
      local_res8 = &DAT_1808ec240;
      iVar18 = FUN_1805f68d0(&DAT_1808ec240);
      if (iVar18 != 0) goto LAB_1802245eb;
      if (DAT_1808ec28c == 0x7fffffff) {
        DAT_1808ec28c = 0x7ffffffe;
        goto LAB_1802245e0;
      }
      local_res10 = DAT_180c63f20;
      if (DAT_1808ec298 == lVar7) {
        if ((DAT_180c63f20 == 0) && (DAT_180c63f18 <= UVar6)) goto LAB_180223e3f;
      }
      else {
        DAT_1808ec290 = 1000;
LAB_180223e3f:
        lVar20 = -1;
        do {
          local_b0 = lVar20 + 1;
          lVar15 = lVar20 + 1;
          lVar20 = local_b0;
        } while ("client.dll:498BE35FC3488BCB>E8????????488BCBE8????????"[lVar15] != '\0');
        local_b8 = "client.dll:498BE35FC3488BCB>E8????????488BCBE8????????";
        local_a8 = "patterns::hud_weapon_selection_update";
        local_a0 = (char *)0x25;
        local_res10 = FUN_1800e5d20(&local_a8,&local_b8);
        DAT_1808ec298 = lVar7;
        DAT_180c63f18 = 0xffffffffffffffff;
        if (local_res10 == 0) {
          DAT_180c63f18 = DAT_1808ec290 + UVar6;
          if (DAT_1808ec290 < 60000) {
            DAT_1808ec290 = DAT_1808ec290 * 2;
          }
          else {
            DAT_1808ec290 = 60000;
          }
        }
        else {
          DAT_1808ec290 = 1000;
        }
      }
      lVar15 = local_res10;
      DAT_180c63f20 = local_res10;
      FUN_1805f68fc(&DAT_1808ec240);
    }
  }
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar20 = DAT_1808ec230;
  lVar7 = DAT_1808da460;
  if ((DAT_1808ec230 != DAT_1808da460) || (lVar10 = DAT_180c63f10, DAT_180c63f10 == 0)) {
    UVar6 = GetTickCount64();
    if ((lVar20 == lVar7) && (UVar6 < DAT_180c63f08)) {
      lVar10 = 0;
    }
    else {
      local_res8 = &DAT_1808ec1e0;
      iVar18 = FUN_1805f68d0(&DAT_1808ec1e0);
      if (iVar18 != 0) {
LAB_1802245eb:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808ec22c == 0x7fffffff) {
        DAT_1808ec22c = 0x7ffffffe;
LAB_1802245e0:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if (DAT_1808ec230 == lVar7) {
        if ((DAT_180c63f10 == 0) && (DAT_180c63f08 <= UVar6)) goto LAB_180223fa3;
      }
      else {
        DAT_1808ec1d8 = 1000;
LAB_180223fa3:
        lVar20 = -1;
        do {
          local_a0 = (char *)(lVar20 + 1);
          pcVar19 = "lient.dll:488D0D????????>E8????????4885C0488D48E0490F44CC4885C974" + lVar20;
          lVar20 = (longlong)local_a0;
        } while (*pcVar19 != '\0');
        local_a8 = "client.dll:488D0D????????>E8????????4885C0488D48E0490F44CC4885C974";
        local_b8 = "patterns::find_hud_element";
        local_b0 = 0x1a;
        DAT_180c63f10 = FUN_1800e5d20(&local_b8,&local_a8);
        DAT_1808ec230 = lVar7;
        DAT_180c63f08 = 0xffffffffffffffff;
        if (DAT_180c63f10 == 0) {
          DAT_180c63f08 = DAT_1808ec1d8 + UVar6;
          uVar13 = DAT_1808ec1d8 * 2;
          if (59999 < DAT_1808ec1d8) {
            uVar13 = 60000;
          }
        }
        DAT_1808ec1d8 = uVar13;
      }
      lVar10 = DAT_180c63f10;
      FUN_1805f68fc(&DAT_1808ec1e0);
    }
  }
  if ((DAT_180cd3a30 & 1) == 0) {
    DAT_180cd3a30 = DAT_180cd3a30 | 1;
    DAT_180cd3a38 = FUN_180224600();
  }
  if (lVar10 == 0) {
    return 0;
  }
  if (DAT_180cd3a38 == 0) {
    return 0;
  }
  local_98[0] = 'L';
  local_98[1] = '\0';
  local_98[2] = '\0';
  local_98[3] = '\0';
  local_98[4] = -0x75;
  local_98[5] = '\0';
  local_98[6] = '\0';
  local_98[7] = '\0';
  local_98[8] = -0x24;
  local_98[9] = '\0';
  local_98[10] = '\0';
  local_98[0xb] = '\0';
  local_98[0xc] = 'U';
  local_98[0xd] = '\0';
  local_98[0xe] = '\0';
  local_98[0xf] = '\0';
  local_98[0x10] = 'W';
  local_98[0x11] = '\0';
  local_98[0x12] = '\0';
  local_98[0x13] = '\0';
  local_98[0x14] = 'H';
  local_98[0x15] = '\0';
  local_98[0x16] = '\0';
  local_98[0x17] = '\0';
  local_98[0x18] = -0x7d;
  local_98[0x19] = '\0';
  local_98[0x1a] = '\0';
  local_98[0x1b] = '\0';
  local_98[0x1c] = -0x14;
  local_98[0x1d] = '\0';
  local_98[0x1e] = '\0';
  local_98[0x1f] = '\0';
  local_98[0x20] = 'H';
  local_98[0x21] = '\0';
  local_98[0x22] = '\0';
  local_98[0x23] = '\0';
  local_98[0x24] = 'H';
  local_98[0x25] = '\0';
  local_98[0x26] = '\0';
  local_98[0x27] = '\0';
  local_98[0x28] = 'c';
  local_98[0x29] = '\0';
  local_98[0x2a] = '\0';
  local_98[0x2b] = '\0';
  local_98[0x2c] = 'A';
  local_98[0x2d] = '\0';
  local_98[0x2e] = '\0';
  local_98[0x2f] = '\0';
  local_98[0x30] = 'h';
  local_98[0x31] = '\0';
  local_98[0x32] = '\0';
  local_98[0x33] = '\0';
  local_98[0x34] = 'H';
  local_98[0x35] = '\0';
  local_98[0x36] = '\0';
  local_98[0x37] = '\0';
  local_98[0x38] = -0x75;
  local_98[0x39] = '\0';
  local_98[0x3a] = '\0';
  local_98[0x3b] = '\0';
  local_98[0x3c] = -7;
  local_98[0x3d] = '\0';
  local_98[0x3e] = '\0';
  local_98[0x3f] = '\0';
  local_98[0x40] = 'H';
  local_98[0x41] = '\0';
  local_98[0x42] = '\0';
  local_98[0x43] = '\0';
  local_98[0x44] = 'c';
  local_98[0x45] = '\0';
  local_98[0x46] = '\0';
  local_98[0x47] = '\0';
  local_98[0x48] = -0x16;
  local_98[0x49] = '\0';
  local_98[0x4a] = '\0';
  local_98[0x4b] = '\0';
  local_a8 = local_98;
  local_a0 = local_98 + 0x4c;
  cVar2 = FUN_1802197b0(lVar15,&local_a8);
  if (cVar2 == '\0') {
    return 0;
  }
  cVar3 = FUN_1804513c0(lVar10,1,2);
  cVar2 = '\0';
  if (cVar3 != '\0') {
    lVar7 = FUN_18017ea70();
    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
    FUN_1801ad7c0(&local_b8,lVar10,"HudWeaponSelection");
    lVar7 = FUN_18017ea70();
    if (*(int *)(lVar7 + 4) != 0) {
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
    }
    cVar2 = (char)local_b0;
  }
  pcVar19 = local_b8;
  if (cVar2 == '\0') {
    pcVar19 = (char *)0x0;
  }
  lVar7 = FUN_18017ea70();
  *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
  if (pcVar19 == (char *)0x0) {
    bVar1 = false;
  }
  else {
    local_res8 = (undefined *)0x0;
    cVar2 = FUN_1804514f0(&local_res8,pcVar19,8);
    if (cVar2 == '\0') {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
  }
  puVar11 = local_res8;
  lVar7 = FUN_18017ea70();
  if (*(int *)(lVar7 + 4) != 0) {
    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
  }
  if ((!bVar1) || (puVar11 == (undefined *)0x0)) {
    puVar11 = (undefined *)0x0;
    lVar7 = FUN_18017ea70();
    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
LAB_1802241fe:
  }
  else {
    lVar7 = FUN_18017ea70();
    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
    puVar11 = puVar11 + -8;
    if (puVar11 == (undefined *)0x0) {
      bVar1 = false;
    }
    else {
      local_res8 = (undefined *)0x0;
      cVar2 = FUN_1804514f0(&local_res8,puVar11,8);
      if (cVar2 == '\0') {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
    }
    puVar9 = local_res8;
    lVar7 = FUN_18017ea70();
    if (*(int *)(lVar7 + 4) != 0) {
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
    }
    puVar11 = (undefined *)0x0;
    if (bVar1) {
      puVar11 = puVar9;
    }
    lVar7 = FUN_18017ea70();
    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
    if (puVar11 == (undefined *)0x0) goto LAB_1802241fe;
    local_res8 = (undefined *)((ulonglong)local_res8 & 0xffffffff00000000);
    cVar2 = FUN_1804514f0(&local_res8,puVar11,4);
    if (cVar2 != '\0') {
      bVar1 = true;
      iVar18 = (uint)local_res8;
      goto LAB_180224204;
    }
  }
  bVar1 = false;
  iVar18 = (uint)local_res8;
LAB_180224204:
  lVar7 = FUN_18017ea70();
  if (*(int *)(lVar7 + 4) != 0) {
    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
  }
  iVar17 = 0;
  if (bVar1) {
    iVar17 = iVar18;
  }
  lVar7 = FUN_18017ea70();
  *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
  bVar1 = false;
  if (puVar11 + 4 != (undefined *)0x0) {
    local_res8 = (undefined *)((ulonglong)local_res8 & 0xffffffff00000000);
    cVar2 = FUN_1804514f0(&local_res8,puVar11 + 4,4);
    if (cVar2 == '\0') {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
  }
  puVar11 = local_res8;
  lVar7 = FUN_18017ea70();
  if (*(int *)(lVar7 + 4) != 0) {
    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
  }
  pcVar8 = (char *)0xffffffff;
  if (bVar1) {
    pcVar8 = (char *)((ulonglong)puVar11 & 0xffffffff);
  }
  if (((iVar17 == 1) && ((uint)pcVar8 < 0x101)) && (pcVar8 <= pcVar19)) {
    lVar20 = (longlong)pcVar19 - (longlong)pcVar8;
    lVar7 = FUN_18017ea70();
    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
    if (lVar20 + 0x38 == 0) {
      bVar1 = false;
    }
    else {
      local_res8 = (undefined *)((ulonglong)local_res8 & 0xffffffff00000000);
      cVar2 = FUN_1804514f0(&local_res8,lVar20 + 0x38,4);
      if (cVar2 == '\0') {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
    }
    uVar16 = (uint)local_res8;
    lVar7 = FUN_18017ea70();
    if (*(int *)(lVar7 + 4) != 0) {
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
    }
    uVar14 = 0xffffffff;
    if (bVar1) {
      uVar14 = uVar16;
    }
    lVar7 = FUN_18017ea70();
    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
    bVar1 = false;
    if (lVar20 + 0x40 != 0) {
      local_res8 = (undefined *)0x0;
      cVar2 = FUN_1804514f0(&local_res8,lVar20 + 0x40,8);
      if (cVar2 == '\0') {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
    }
    puVar11 = local_res8;
    lVar7 = FUN_18017ea70();
    if (*(int *)(lVar7 + 4) != 0) {
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
    }
    puVar9 = (undefined *)0x0;
    if (bVar1) {
      puVar9 = puVar11;
    }
    if ((uVar14 < 0x41) &&
       ((uVar14 == 0 ||
        (cVar2 = FUN_1804513c0(puVar9,(longlong)(int)(uVar14 << 5),0), cVar2 != '\0')))) {
      iVar18 = 0;
      lVar7 = lVar20 + 0x50;
      uVar16 = (uint)local_res8;
      uVar14 = (uint)local_res8;
      do {
        lVar15 = FUN_18017ea70();
        *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + 1;
        if (lVar7 == 0) {
          bVar1 = false;
        }
        else {
          local_res8 = (undefined *)((ulonglong)local_res8 & 0xffffffff00000000);
          cVar2 = FUN_1804514f0(&local_res8,lVar7,4);
          if (cVar2 == '\0') {
            bVar1 = false;
          }
          else {
            bVar1 = true;
            uVar14 = (uint)local_res8;
          }
        }
        lVar15 = FUN_18017ea70();
        if (*(int *)(lVar15 + 4) != 0) {
          *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + -1;
        }
        lVar15 = DAT_180cd3a38;
        if (bVar1) {
          uVar12 = uVar14;
          if (uVar14 == 0) {
            cVar2 = FUN_1804513c0(DAT_180cd3a38,1,2);
            if (cVar2 == '\0') {
              uVar4 = 0;
            }
            else {
              lVar7 = FUN_18017ea70();
              *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
              uVar4 = FUN_1801ad810(lVar15,lVar20);
              lVar7 = FUN_18017ea70();
              if (*(int *)(lVar7 + 4) != 0) {
                *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
              }
            }
            return uVar4;
          }
        }
        else {
          uVar12 = 0xffffffff;
        }
        lVar15 = FUN_18017ea70();
        *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + 1;
        bVar1 = false;
        if (lVar20 + 0x58 != 0) {
          local_res8 = (undefined *)0x0;
          cVar2 = FUN_1804514f0(&local_res8,lVar20 + 0x58,8);
          if (cVar2 == '\0') {
            bVar1 = false;
          }
          else {
            local_res18 = local_res8;
            bVar1 = true;
          }
        }
        lVar15 = FUN_18017ea70();
        if (*(int *)(lVar15 + 4) != 0) {
          *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + -1;
        }
        puVar11 = (undefined *)0x0;
        if (bVar1) {
          puVar11 = local_res18;
        }
        if (0x40 < uVar12) {
          return 0;
        }
        cVar2 = FUN_1804513c0(puVar11,(longlong)(int)(uVar12 * 0x48),0);
        lVar15 = local_res10;
        if (cVar2 == '\0') {
          return 0;
        }
        cVar2 = FUN_1804513c0(local_res10,1,2);
        if (cVar2 == '\0') {
          return 0;
        }
        lVar10 = FUN_18017ea70();
        *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
        cVar2 = FUN_1801aec20(lVar15,lVar20);
        lVar15 = FUN_18017ea70();
        if (*(int *)(lVar15 + 4) != 0) {
          *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + -1;
        }
        if (cVar2 == '\0') {
          return 0;
        }
        lVar15 = FUN_18017ea70();
        *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + 1;
        if (lVar7 == 0) {
          bVar1 = false;
        }
        else {
          local_res8 = (undefined *)((ulonglong)local_res8 & 0xffffffff00000000);
          cVar2 = FUN_1804514f0(&local_res8,lVar7);
          if (cVar2 == '\0') {
            bVar1 = false;
          }
          else {
            bVar1 = true;
            uVar16 = (uint)local_res8;
          }
        }
        lVar15 = FUN_18017ea70();
        if (*(int *)(lVar15 + 4) != 0) {
          *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + -1;
        }
        uVar5 = 0xffffffff;
        if (bVar1) {
          uVar5 = uVar16;
        }
        if (uVar5 != uVar12 - 1) {
          return 0;
        }
        iVar18 = iVar18 + 1;
      } while (iVar18 < 0x40);
      lVar15 = FUN_18017ea70();
      *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + 1;
      if (lVar7 == 0) {
        bVar1 = false;
      }
      else {
        local_res8 = (undefined *)((ulonglong)local_res8 & 0xffffffff00000000);
        cVar2 = FUN_1804514f0(&local_res8,lVar7,4);
        if (cVar2 == '\0') {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
      }
      iVar18 = (uint)local_res8;
      lVar7 = FUN_18017ea70();
      if (*(int *)(lVar7 + 4) != 0) {
        *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
      }
      if (((bVar1) && (iVar18 == 0)) && (cVar2 = FUN_1801a5f80(DAT_180cd3a38,lVar20), cVar2 != '\0')
         ) {
        return 1;
      }
    }
  }
  return 0;
}



