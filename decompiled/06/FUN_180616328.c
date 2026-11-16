// FUN_180616328 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180616328 */

ulonglong FUN_180616328(longlong *param_1,longlong *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  char *pcVar6;
  bool bVar7;
  char cVar8;
  byte bVar9;
  int iVar10;
  uint uVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  int *piVar14;
  int iVar15;
  byte bVar16;
  char local_res10 [24];
  longlong local_58;
  longlong *local_50;
  char *local_48;
  longlong *local_40;
  
  iVar15 = 0;
  lVar3 = *param_2;
  if ((lVar3 == 0) || (param_2[3] == 0)) {
    puVar12 = (undefined4 *)FUN_18060fe00();
    *puVar12 = 0x16;
    FUN_18060aad4();
    return 7;
  }
  local_58 = param_2[2];
  param_2[2] = local_58 + 1U;
  if (((param_2[1] == 0) || (local_58 + 1U <= (ulonglong)param_2[1])) &&
     (pcVar6 = *(char **)(lVar3 + 0x10), pcVar6 != *(char **)(lVar3 + 8))) {
    local_res10[0] = *pcVar6;
    *(char **)(lVar3 + 0x10) = pcVar6 + 1;
  }
  else {
    local_res10[0] = '\0';
  }
  local_48 = local_res10;
  local_40 = &local_58;
  local_50 = param_2;
  while (iVar10 = FUN_18060f970(local_res10[0],8), iVar10 != 0) {
    lVar3 = param_2[2];
    param_2[2] = lVar3 + 1U;
    if ((param_2[1] == 0) || (lVar3 + 1U <= (ulonglong)param_2[1])) {
      lVar3 = *param_2;
      pcVar6 = *(char **)(lVar3 + 0x10);
      if (pcVar6 == *(char **)(lVar3 + 8)) goto LAB_1806163d8;
      local_res10[0] = *pcVar6;
      *(char **)(lVar3 + 0x10) = pcVar6 + 1;
    }
    else {
LAB_1806163d8:
      local_res10[0] = '\0';
    }
  }
  piVar2 = param_3 + 0xc2;
  *(bool *)piVar2 = local_res10[0] == '-';
  if ((local_res10[0] - 0x2bU & 0xfd) == 0) {
    lVar3 = param_2[2];
    param_2[2] = lVar3 + 1U;
    if ((param_2[1] == 0) || (lVar3 + 1U <= (ulonglong)param_2[1])) {
      lVar3 = *param_2;
      pcVar6 = *(char **)(lVar3 + 0x10);
      if (pcVar6 != *(char **)(lVar3 + 8)) {
        local_res10[0] = *pcVar6;
        *(char **)(lVar3 + 0x10) = pcVar6 + 1;
        goto LAB_180616456;
      }
    }
    local_res10[0] = '\0';
  }
LAB_180616456:
  if ((local_res10[0] + 0xb7U & 0xdf) == 0) {
    uVar13 = FUN_180616aec(local_res10,param_2,local_58);
    return uVar13;
  }
  if ((local_res10[0] + 0xb2U & 0xdf) == 0) {
    uVar13 = FUN_180616c9c(local_res10,param_2,local_58);
    return uVar13;
  }
  bVar16 = 0;
  if (local_res10[0] == '0') {
    lVar3 = param_2[2];
    uVar13 = lVar3 + 1;
    param_2[2] = uVar13;
    if ((param_2[1] == 0) || (uVar13 <= (ulonglong)param_2[1])) {
      lVar4 = *param_2;
      pcVar6 = *(char **)(lVar4 + 0x10);
      if (pcVar6 == *(char **)(lVar4 + 8)) goto LAB_180616490;
      cVar8 = *pcVar6;
      *(char **)(lVar4 + 0x10) = pcVar6 + 1;
      if ((cVar8 == 'x') || (cVar8 == 'X')) {
        lVar4 = param_2[2];
        bVar16 = 1;
        param_2[2] = lVar4 + 1U;
        if ((param_2[1] == 0) || (lVar4 + 1U <= (ulonglong)param_2[1])) {
          lVar4 = *param_2;
          pcVar6 = *(char **)(lVar4 + 0x10);
          if (pcVar6 == *(char **)(lVar4 + 8)) goto LAB_180616508;
          local_res10[0] = *pcVar6;
          *(char **)(lVar4 + 0x10) = pcVar6 + 1;
        }
        else {
LAB_180616508:
          local_res10[0] = '\0';
        }
        local_58 = lVar3;
        goto LAB_18061652a;
      }
    }
    else {
LAB_180616490:
      cVar8 = '\0';
    }
    lVar3 = param_2[2];
    param_2[2] = lVar3 - 1U;
    if (((param_2[1] == 0) || (lVar3 - 1U <= (ulonglong)param_2[1])) && (1 < (byte)(cVar8 + 1U))) {
      plVar5 = (longlong *)*param_2;
      if (plVar5[2] != *plVar5) {
        plVar5[2] = plVar5[2] + -1;
      }
    }
  }
LAB_18061652a:
  piVar1 = param_3 + 2;
  bVar7 = false;
  if (local_res10[0] == '0') {
    bVar7 = true;
    do {
      lVar3 = param_2[2];
      param_2[2] = lVar3 + 1U;
      if ((param_2[1] != 0) && ((ulonglong)param_2[1] < lVar3 + 1U)) {
LAB_180616576:
        local_res10[0] = '\0';
        break;
      }
      lVar3 = *param_2;
      pcVar6 = *(char **)(lVar3 + 0x10);
      if (pcVar6 == *(char **)(lVar3 + 8)) goto LAB_180616576;
      local_res10[0] = *pcVar6;
      *(char **)(lVar3 + 0x10) = pcVar6 + 1;
    } while (local_res10[0] == '0');
  }
  piVar14 = piVar1;
  while( true ) {
    if ((byte)(local_res10[0] - 0x30U) < 10) {
      uVar11 = (int)local_res10[0] - 0x30;
    }
    else if ((byte)(local_res10[0] + 0x9fU) < 0x1a) {
      uVar11 = (int)local_res10[0] - 0x57;
    }
    else if ((byte)(local_res10[0] + 0xbfU) < 0x1a) {
      uVar11 = (int)local_res10[0] - 0x37;
    }
    else {
      uVar11 = 0xffffffff;
    }
    if ((-(uint)(bVar16 != 0) & 6) + 9 < uVar11) break;
    bVar7 = true;
    if (piVar14 != piVar2) {
      *(char *)piVar14 = (char)uVar11;
      piVar14 = (int *)((longlong)piVar14 + 1);
    }
    lVar3 = param_2[2];
    iVar15 = iVar15 + 1;
    param_2[2] = lVar3 + 1U;
    if ((param_2[1] == 0) || (lVar3 + 1U <= (ulonglong)param_2[1])) {
      lVar3 = *param_2;
      pcVar6 = *(char **)(lVar3 + 0x10);
      if (pcVar6 == *(char **)(lVar3 + 8)) goto LAB_1806165e8;
      local_res10[0] = *pcVar6;
      *(char **)(lVar3 + 0x10) = pcVar6 + 1;
    }
    else {
LAB_1806165e8:
      local_res10[0] = '\0';
    }
  }
  if (local_res10[0] == *(char *)**(undefined8 **)(*param_1 + 0xf8)) {
    lVar3 = param_2[2];
    param_2[2] = lVar3 + 1U;
    if ((param_2[1] == 0) || (lVar3 + 1U <= (ulonglong)param_2[1])) {
      lVar3 = *param_2;
      pcVar6 = *(char **)(lVar3 + 0x10);
      if (pcVar6 == *(char **)(lVar3 + 8)) goto LAB_180616634;
      local_res10[0] = *pcVar6;
      *(char **)(lVar3 + 0x10) = pcVar6 + 1;
    }
    else {
LAB_180616634:
      local_res10[0] = '\0';
    }
    if ((piVar14 == piVar1) && (local_res10[0] == '0')) {
      bVar7 = true;
      do {
        lVar3 = param_2[2];
        iVar15 = iVar15 + -1;
        param_2[2] = lVar3 + 1U;
        if ((param_2[1] != 0) && ((ulonglong)param_2[1] < lVar3 + 1U)) {
LAB_18061669d:
          local_res10[0] = '\0';
          break;
        }
        lVar3 = *param_2;
        pcVar6 = *(char **)(lVar3 + 0x10);
        if (pcVar6 == *(char **)(lVar3 + 8)) goto LAB_18061669d;
        local_res10[0] = *pcVar6;
        *(char **)(lVar3 + 0x10) = pcVar6 + 1;
      } while (local_res10[0] == '0');
    }
    while( true ) {
      if ((local_res10[0] < '0') || ('9' < local_res10[0])) {
        if ((byte)(local_res10[0] + 0x9fU) < 0x1a) {
          uVar11 = (int)local_res10[0] - 0x57;
        }
        else if ((byte)(local_res10[0] + 0xbfU) < 0x1a) {
          uVar11 = (int)local_res10[0] - 0x37;
        }
        else {
          uVar11 = 0xffffffff;
        }
      }
      else {
        uVar11 = (int)local_res10[0] - 0x30;
      }
      if ((-(uint)(bVar16 != 0) & 6) + 9 < uVar11) break;
      bVar7 = true;
      if (piVar14 != piVar2) {
        *(char *)piVar14 = (char)uVar11;
        piVar14 = (int *)((longlong)piVar14 + 1);
      }
      lVar3 = param_2[2];
      param_2[2] = lVar3 + 1U;
      if ((param_2[1] == 0) || (lVar3 + 1U <= (ulonglong)param_2[1])) {
        lVar3 = *param_2;
        pcVar6 = *(char **)(lVar3 + 0x10);
        if (pcVar6 == *(char **)(lVar3 + 8)) goto LAB_180616717;
        local_res10[0] = *pcVar6;
        *(char **)(lVar3 + 0x10) = pcVar6 + 1;
      }
      else {
LAB_180616717:
        local_res10[0] = '\0';
      }
    }
  }
  if (!bVar7) {
    cVar8 = FUN_180617a50(&local_50);
    if ((cVar8 == '\0') || (bVar16 == 0)) {
      return 7;
    }
    return 2;
  }
  lVar3 = param_2[2];
  param_2[2] = lVar3 - 1U;
  if (((param_2[1] == 0) || (lVar3 - 1U <= (ulonglong)param_2[1])) &&
     (1 < (byte)(local_res10[0] + 1U))) {
    plVar5 = (longlong *)*param_2;
    if (plVar5[2] != *plVar5) {
      plVar5[2] = plVar5[2] + -1;
    }
  }
  local_58 = param_2[2];
  param_2[2] = local_58 + 1U;
  if ((param_2[1] == 0) || (local_58 + 1U <= (ulonglong)param_2[1])) {
    lVar3 = *param_2;
    pcVar6 = *(char **)(lVar3 + 0x10);
    if (pcVar6 != *(char **)(lVar3 + 8)) {
      local_res10[0] = *pcVar6;
      *(char **)(lVar3 + 0x10) = pcVar6 + 1;
      if (local_res10[0] == 'E') {
LAB_1806167f7:
        bVar9 = bVar16 ^ 1;
      }
      else if (local_res10[0] == 'P') {
LAB_1806167f2:
        bVar9 = bVar16;
      }
      else {
        if (local_res10[0] == 'e') goto LAB_1806167f7;
        bVar9 = 0;
        if (local_res10[0] == 'p') goto LAB_1806167f2;
      }
      iVar10 = 0;
      if (bVar9 == 0) goto LAB_180616a17;
      lVar3 = param_2[2];
      param_2[2] = lVar3 + 1U;
      if ((param_2[1] == 0) || (lVar3 + 1U <= (ulonglong)param_2[1])) {
        lVar3 = *param_2;
        pcVar6 = *(char **)(lVar3 + 0x10);
        if (pcVar6 != *(char **)(lVar3 + 8)) {
          cVar8 = *pcVar6;
          *(char **)(lVar3 + 0x10) = pcVar6 + 1;
          if ((cVar8 == '+') || (local_res10[0] = cVar8, cVar8 == '-')) {
            lVar3 = param_2[2];
            param_2[2] = lVar3 + 1U;
            if ((param_2[1] == 0) || (lVar3 + 1U <= (ulonglong)param_2[1])) {
              lVar3 = *param_2;
              pcVar6 = *(char **)(lVar3 + 0x10);
              if (pcVar6 != *(char **)(lVar3 + 8)) {
                local_res10[0] = *pcVar6;
                *(char **)(lVar3 + 0x10) = pcVar6 + 1;
                goto LAB_180616887;
              }
            }
            local_res10[0] = '\0';
          }
LAB_180616887:
          bVar7 = false;
          if (local_res10[0] == '0') {
            bVar7 = true;
            do {
              lVar3 = param_2[2];
              param_2[2] = lVar3 + 1U;
              if ((param_2[1] != 0) && ((ulonglong)param_2[1] < lVar3 + 1U)) goto LAB_1806168d0;
              lVar3 = *param_2;
              iVar10 = 0;
              pcVar6 = *(char **)(lVar3 + 0x10);
              if (pcVar6 == *(char **)(lVar3 + 8)) goto LAB_1806168d0;
              local_res10[0] = *pcVar6;
              *(char **)(lVar3 + 0x10) = pcVar6 + 1;
            } while (local_res10[0] == '0');
          }
          goto LAB_1806168db;
        }
      }
      cVar8 = '\0';
      bVar7 = false;
LAB_1806168d0:
      iVar10 = 0;
      local_res10[0] = '\0';
LAB_1806168db:
      while( true ) {
        if ((local_res10[0] < '0') || ('9' < local_res10[0])) {
          if ((byte)(local_res10[0] + 0x9fU) < 0x1a) {
            uVar11 = (int)local_res10[0] - 0x57;
          }
          else {
            if (0x19 < (byte)(local_res10[0] + 0xbfU)) goto LAB_180616954;
            uVar11 = (int)local_res10[0] - 0x37;
          }
        }
        else {
          uVar11 = (int)local_res10[0] - 0x30;
        }
        if (9 < uVar11) goto LAB_180616954;
        bVar7 = true;
        iVar10 = uVar11 + iVar10 * 10;
        if (0x1450 < iVar10) break;
        lVar3 = param_2[2];
        param_2[2] = lVar3 + 1U;
        if ((param_2[1] == 0) || (lVar3 + 1U <= (ulonglong)param_2[1])) {
          lVar3 = *param_2;
          pcVar6 = *(char **)(lVar3 + 0x10);
          if (pcVar6 == *(char **)(lVar3 + 8)) goto LAB_180616930;
          local_res10[0] = *pcVar6;
          *(char **)(lVar3 + 0x10) = pcVar6 + 1;
        }
        else {
LAB_180616930:
          local_res10[0] = '\0';
        }
      }
      iVar10 = 0x1451;
LAB_180616954:
      if ((byte)(local_res10[0] - 0x30U) < 10) {
        uVar11 = (int)local_res10[0] - 0x30;
      }
      else if ((byte)(local_res10[0] + 0x9fU) < 0x1a) {
        uVar11 = (int)local_res10[0] - 0x57;
      }
      else {
        if (0x19 < (byte)(local_res10[0] + 0xbfU)) goto LAB_1806169bb;
        uVar11 = (int)local_res10[0] - 0x37;
      }
      if (9 < uVar11) goto LAB_1806169bb;
      lVar3 = param_2[2];
      param_2[2] = lVar3 + 1U;
      if ((param_2[1] == 0) || (lVar3 + 1U <= (ulonglong)param_2[1])) {
        lVar3 = *param_2;
        pcVar6 = *(char **)(lVar3 + 0x10);
        if (pcVar6 == *(char **)(lVar3 + 8)) goto LAB_18061699b;
        local_res10[0] = *pcVar6;
        *(char **)(lVar3 + 0x10) = pcVar6 + 1;
      }
      else {
LAB_18061699b:
        local_res10[0] = '\0';
      }
      goto LAB_180616954;
    }
  }
  local_res10[0] = '\0';
  iVar10 = 0;
LAB_180616a17:
  lVar3 = param_2[2];
  param_2[2] = lVar3 - 1U;
  if (((param_2[1] == 0) || (lVar3 - 1U <= (ulonglong)param_2[1])) &&
     (1 < (byte)(local_res10[0] + 1U))) {
    param_2 = (longlong *)*param_2;
    if (param_2[2] != *param_2) {
      param_2[2] = param_2[2] + -1;
    }
  }
  if (piVar14 != piVar1) {
    do {
      piVar2 = (int *)((longlong)piVar14 + -1);
      if (*(char *)piVar2 != '\0') break;
      piVar14 = piVar2;
    } while (piVar2 != piVar1);
    if (piVar14 != piVar1) {
      if (0x1450 < iVar10) {
        return 9;
      }
      if (-0x1451 < iVar10) {
        iVar10 = iVar10 + ((-(uint)(bVar16 != 0) & 3) + 1) * iVar15;
        if (0x1450 < iVar10) {
          return 9;
        }
        if (-0x1451 < iVar10) {
          *param_3 = iVar10;
          param_3[1] = (int)piVar14 - (int)piVar1;
          return (ulonglong)bVar16;
        }
      }
      return 8;
    }
  }
  return 2;
LAB_1806169bb:
  if (cVar8 == '-') {
    iVar10 = -iVar10;
  }
  if (!bVar7) {
    cVar8 = FUN_180617a50(&local_50);
    if (cVar8 == '\0') {
      return 7;
    }
    lVar3 = param_2[2];
    param_2[2] = lVar3 + 1U;
    if ((param_2[1] == 0) || (lVar3 + 1U <= (ulonglong)param_2[1])) {
      lVar3 = *param_2;
      pcVar6 = *(char **)(lVar3 + 0x10);
      if (pcVar6 != *(char **)(lVar3 + 8)) {
        local_res10[0] = *pcVar6;
        *(char **)(lVar3 + 0x10) = pcVar6 + 1;
        goto LAB_180616a17;
      }
    }
    local_res10[0] = '\0';
  }
  goto LAB_180616a17;
}



