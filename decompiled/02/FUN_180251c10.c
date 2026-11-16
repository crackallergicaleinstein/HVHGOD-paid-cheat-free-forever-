// FUN_180251c10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180251c10 */

char * FUN_180251c10(longlong param_1,longlong param_2)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  ULONGLONG UVar8;
  longlong lVar9;
  longlong lVar10;
  char *pcVar11;
  longlong lVar12;
  char *pcVar13;
  longlong lVar14;
  ulonglong uVar15;
  char *pcVar16;
  char *pcVar17;
  char *local_88 [2];
  char *local_78;
  longlong local_70;
  undefined *local_68;
  char *local_58;
  longlong local_50;
  longlong local_48;
  
  pcVar16 = (char *)(param_1 + 8);
  if (pcVar16 == (char *)0x0) {
    return (char *)0x0;
  }
  if (param_2 == 0) {
    return (char *)0x0;
  }
  piVar2 = *(int **)(param_1 + 0x18);
  if (piVar2 == (int *)0x0) {
    iVar7 = 0;
  }
  else {
    iVar7 = *piVar2;
  }
  iVar6 = *(int *)(param_1 + 0x14);
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 < 0) {
    return (char *)0x0;
  }
  if (iVar6 < 0) {
    return (char *)0x0;
  }
  if (iVar6 < iVar1) {
    return (char *)0x0;
  }
  if (iVar7 < 0) {
    return (char *)0x0;
  }
  if (iVar6 < iVar7) {
    return (char *)0x0;
  }
  if (iVar7 < iVar1) {
    return (char *)0x0;
  }
  if (0xf < iVar1) {
    return (char *)0x0;
  }
  iVar6 = 0x10 - iVar1;
  if (4 < iVar6) {
    iVar6 = 4;
  }
  if (iVar6 == 0) {
    return (char *)0x0;
  }
  local_88[0] = pcVar16;
  local_48 = param_2;
  if ((piVar2 == (int *)0x0) || (iVar7 <= iVar1)) {
LAB_180251cee:
    if ((DAT_180cce330 & 1) == 0) {
      DAT_180cce330 = DAT_180cce330 | 1;
      atexit(FUN_180662340);
    }
    lVar9 = DAT_1808eeea8;
    lVar10 = DAT_1808da460;
    uVar15 = 1000;
    if ((DAT_1808eeea8 != DAT_1808da460) || (lVar12 = DAT_180c64720, DAT_180c64720 == 0)) {
      UVar8 = GetTickCount64();
      if ((lVar9 == lVar10) && (UVar8 < DAT_180c64710)) {
        lVar12 = 0;
      }
      else {
        local_68 = &DAT_1808eee50;
        iVar7 = FUN_1805f68d0(&DAT_1808eee50);
        if (iVar7 != 0) goto LAB_1802522e4;
        if (DAT_1808eee9c == 0x7fffffff) {
          DAT_1808eee9c = 0x7ffffffe;
          goto LAB_1802522d9;
        }
        if (DAT_1808eeea8 == lVar10) {
          if ((DAT_180c64720 == 0) && (DAT_180c64710 <= UVar8)) goto LAB_180251dcb;
        }
        else {
          DAT_1808eeea0 = 1000;
LAB_180251dcb:
          lVar9 = -1;
          do {
            local_50 = lVar9 + 1;
            lVar12 = lVar9 + 1;
            lVar9 = local_50;
          } while ("client.dll:>E8????????488BD0488D4E28"[lVar12] != '\0');
          local_58 = "client.dll:>E8????????488BD0488D4E28";
          local_78 = "patterns::history_field_alloc";
          local_70 = 0x1d;
          DAT_180c64720 = FUN_1800e5d20(&local_78,&local_58);
          DAT_1808eeea8 = lVar10;
          DAT_180c64710 = 0xffffffffffffffff;
          if (DAT_180c64720 == 0) {
            DAT_180c64710 = DAT_1808eeea0 + UVar8;
            if (DAT_1808eeea0 < 60000) {
              DAT_1808eeea0 = DAT_1808eeea0 * 2;
            }
            else {
              DAT_1808eeea0 = 60000;
            }
          }
          else {
            DAT_1808eeea0 = 1000;
          }
        }
        lVar12 = DAT_180c64720;
        FUN_1805f68fc(&DAT_1808eee50);
      }
    }
    if ((DAT_180cce330 & 1) == 0) {
      DAT_180cce330 = DAT_180cce330 | 1;
      atexit(FUN_180662340);
    }
    lVar9 = DAT_1808eedf0;
    lVar10 = DAT_1808da460;
    if ((DAT_1808eedf0 != DAT_1808da460) || (lVar14 = DAT_180c64718, DAT_180c64718 == 0)) {
      UVar8 = GetTickCount64();
      if ((lVar9 == lVar10) && (UVar8 < DAT_180c64708)) {
        lVar14 = 0;
      }
      else {
        local_68 = &DAT_1808eee00;
        iVar7 = FUN_1805f68d0(&DAT_1808eee00);
        if (iVar7 != 0) {
LAB_1802522e4:
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(5);
        }
        if (DAT_1808eee4c == 0x7fffffff) {
          DAT_1808eee4c = 0x7ffffffe;
LAB_1802522d9:
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(6);
        }
        if (DAT_1808eedf0 == lVar10) {
          if ((DAT_180c64718 == 0) && (DAT_180c64708 <= UVar8)) goto LAB_180251f21;
        }
        else {
          DAT_1808eedf8 = 1000;
LAB_180251f21:
          lVar9 = -1;
          do {
            local_70 = lVar9 + 1;
            lVar14 = lVar9 + 1;
            lVar9 = local_70;
          } while ("client.dll:>E8????????4C8BD0458B4A10"[lVar14] != '\0');
          local_78 = "client.dll:>E8????????4C8BD0458B4A10";
          local_58 = "patterns::utl_vector_push";
          local_50 = 0x19;
          DAT_180c64718 = FUN_1800e5d20(&local_58,&local_78);
          DAT_1808eedf0 = lVar10;
          DAT_180c64708 = 0xffffffffffffffff;
          if (DAT_180c64718 == 0) {
            DAT_180c64708 = DAT_1808eedf8 + UVar8;
            uVar15 = DAT_1808eedf8 * 2;
            if (59999 < DAT_1808eedf8) {
              uVar15 = 60000;
            }
          }
          DAT_1808eedf8 = uVar15;
        }
        lVar14 = DAT_180c64718;
        FUN_1805f68fc(&DAT_1808eee00);
      }
    }
    pcVar16 = local_88[0];
    if (lVar12 == 0) {
      return (char *)0x0;
    }
    if (lVar14 == 0) {
      return (char *)0x0;
    }
    uVar3 = *(undefined8 *)local_88[0];
    lVar10 = FUN_18017ea70();
    *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
    FUN_1801ad7c0(&local_78,lVar12,uVar3);
    lVar10 = FUN_18017ea70();
    if (*(int *)(lVar10 + 4) != 0) {
      *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
    }
    pcVar11 = local_78;
    if ((char)local_70 == '\0') {
      pcVar11 = (char *)0x0;
    }
    if (pcVar11 == (char *)0x0) {
      return (char *)0x0;
    }
    lVar10 = FUN_18017ea70();
    *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
    FUN_180252bd0(&local_78,lVar14,pcVar16,pcVar11);
    lVar10 = FUN_18017ea70();
    if (*(int *)(lVar10 + 4) != 0) {
      *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
    }
    if (((char)local_70 == '\0') || (*(int *)(pcVar16 + 8) != iVar1 + 1)) goto LAB_1802522b0;
    pcVar11 = pcVar11 + 0x10;
  }
  else {
    pcVar11 = (char *)0x0;
    if (*(longlong *)(piVar2 + (longlong)iVar1 * 2 + 2) != 0) {
      pcVar11 = (char *)(*(longlong *)(piVar2 + (longlong)iVar1 * 2 + 2) + 0x10);
    }
    if (pcVar11 == (char *)0x0) goto LAB_180251cee;
    *(int *)(param_1 + 0x10) = iVar1 + 1;
  }
  pcVar13 = (char *)0x0;
  if (*(longlong *)(pcVar11 + 8) != 0) {
    pcVar13 = (char *)(*(longlong *)(pcVar11 + 8) + 0x10);
  }
  if (pcVar13 != (char *)0x0) {
LAB_18025229d:
    pcVar11[0] = '\x01';
    pcVar11[1] = '\0';
    pcVar11[2] = '\0';
    pcVar11[3] = '\0';
    pcVar11[4] = '\0';
    pcVar11[5] = '\0';
    pcVar11[6] = '\0';
    pcVar11[7] = '\0';
    pcVar13[0] = '\a';
    pcVar13[1] = '\0';
    pcVar13[2] = '\0';
    pcVar13[3] = '\0';
    pcVar13[4] = '\0';
    pcVar13[5] = '\0';
    pcVar13[6] = '\0';
    pcVar13[7] = '\0';
    return pcVar11;
  }
  lVar10 = local_48 + -0x10;
  if (lVar10 == 0) {
    bVar4 = false;
    pcVar17 = local_78;
  }
  else {
    local_88[0] = (char *)0x0;
    lVar9 = FUN_18017ea70();
    *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
    cVar5 = FUN_1804514c0(local_88,lVar10,8);
    if (cVar5 == '\0') {
      bVar4 = false;
      lVar9 = FUN_18017ea70();
      if (*(int *)(lVar9 + 4) != 0) {
        *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
      }
      pcVar17 = local_78;
    }
    else {
      bVar4 = true;
      lVar9 = FUN_18017ea70();
      if (*(int *)(lVar9 + 4) != 0) {
        *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
      }
      pcVar17 = local_88[0];
    }
  }
  if (!bVar4) {
    pcVar17 = (char *)0x0;
  }
  if (pcVar17 != (char *)0x0) {
    if (pcVar17 + 0x10 == (char *)0x0) {
      bVar4 = false;
      pcVar13 = local_78;
    }
    else {
      local_88[0] = (char *)0x0;
      lVar9 = FUN_18017ea70();
      *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
      cVar5 = FUN_1804514c0(local_88,pcVar17 + 0x10,8);
      if (cVar5 == '\0') {
        bVar4 = false;
        lVar9 = FUN_18017ea70();
        if (*(int *)(lVar9 + 4) != 0) {
          *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
        }
        pcVar13 = local_78;
      }
      else {
        bVar4 = true;
        lVar9 = FUN_18017ea70();
        if (*(int *)(lVar9 + 4) != 0) {
          *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
        }
        pcVar13 = local_88[0];
      }
    }
    if (!bVar4) {
      pcVar13 = (char *)0x0;
    }
    if (pcVar13 != (char *)0x0) {
      local_88[0] = (char *)((ulonglong)local_88[0] & 0xffffffff00000000);
      lVar9 = FUN_18017ea70();
      *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
      cVar5 = FUN_1804514c0(local_88,pcVar13,4);
      if (cVar5 == '\0') {
        bVar4 = false;
        lVar9 = FUN_18017ea70();
        if (*(int *)(lVar9 + 4) != 0) {
          *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
        }
        iVar7 = (int)local_68;
      }
      else {
        bVar4 = true;
        lVar9 = FUN_18017ea70();
        if (*(int *)(lVar9 + 4) != 0) {
          *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
        }
        iVar7 = (int)local_88[0];
      }
      if (!bVar4) {
        iVar7 = 0;
      }
      if (iVar7 == -0x163574b8) {
        uVar3 = *(undefined8 *)pcVar16;
        lVar9 = FUN_18017ea70();
        *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
        FUN_180252bd0(&local_78,pcVar13,lVar10,uVar3);
        lVar10 = FUN_18017ea70();
        if (*(int *)(lVar10 + 4) != 0) {
          *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
        }
        pcVar13 = local_78;
        if ((char)local_70 == '\0') {
          pcVar13 = (char *)0x0;
        }
        if (pcVar13 != (char *)0x0) {
          local_88[0] = (char *)0x0;
          lVar10 = FUN_18017ea70();
          *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
          cVar5 = FUN_1804514c0(local_88,pcVar13,8);
          if (cVar5 == '\0') {
            bVar4 = false;
            lVar10 = FUN_18017ea70();
            if (*(int *)(lVar10 + 4) != 0) {
              *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
            }
          }
          else {
            bVar4 = true;
            lVar10 = FUN_18017ea70();
            if (*(int *)(lVar10 + 4) != 0) {
              *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
            }
            local_78 = local_88[0];
          }
          if (!bVar4) {
            local_78 = (char *)0x0;
          }
          if (local_78 == pcVar17) {
            *(char **)(pcVar11 + 8) = pcVar13;
            pcVar13 = pcVar13 + 0x10;
            goto LAB_18025229d;
          }
        }
      }
    }
  }
LAB_1802522b0:
  *(int *)(pcVar16 + 8) = iVar1;
  return (char *)0x0;
}



