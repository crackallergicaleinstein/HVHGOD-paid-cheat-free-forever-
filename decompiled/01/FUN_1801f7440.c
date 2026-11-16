// FUN_1801f7440 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801f7440 */

undefined8
FUN_1801f7440(ulonglong *param_1,ulonglong *param_2,ulonglong param_3,ulonglong param_4,
             undefined8 param_5,undefined8 param_6,char param_7,ulonglong *param_8)

{
  ulonglong uVar1;
  bool bVar2;
  ulonglong *puVar3;
  char cVar4;
  char cVar5;
  uint uVar6;
  ulonglong *puVar7;
  longlong lVar8;
  ulonglong *puVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong *puVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong lVar16;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar17;
  uint local_b4;
  uint local_b0 [2];
  ulonglong *local_a8;
  ulonglong local_a0;
  ulonglong *local_98;
  ulonglong *local_90;
  ulonglong *local_88;
  longlong local_80 [9];
  
  if (param_1 == (ulonglong *)0x0) {
    return 0;
  }
  if (param_2 == (ulonglong *)0x0) {
    return 0;
  }
  if (param_2 == param_1) {
    return 0;
  }
  cVar5 = (char)(param_3 >> 0x20);
  uVar15 = (uint)param_3;
  local_a0 = param_4;
  local_98 = param_1;
  local_90 = param_2;
  if (cVar5 != '\0') {
    if (0xfffffffd < uVar15 - 1) {
      return 0;
    }
    uVar6 = uVar15 & 0x7fff;
    if (uVar6 == 0x7fff) {
      return 0;
    }
    puVar9 = param_1;
    if (uVar6 < 0x4000) {
      uVar14 = (ulonglong)uVar6;
      puVar9 = &DAT_180b0e108 + uVar14 * 4;
      if (((*puVar9 & 1) != 0) || ((&DAT_180b0e110)[uVar14 * 8] != uVar15)) goto LAB_1801f7511;
      puVar7 = (ulonglong *)(&DAT_180b0e118)[uVar14 * 4];
      if ((*puVar9 != *puVar9) ||
         ((((&DAT_180b0e110)[uVar14 * 8] != uVar15 || (puVar7 == (ulonglong *)0x0)) ||
          ((&DAT_180b0e120)[uVar14 * 8] == 0)))) goto LAB_1801f7511;
    }
    else {
LAB_1801f7511:
      if ((uVar15 & 0x7fff) == 0x7fff) {
        return 0;
      }
      if ((uVar15 & 0x7fff) < 0x4000) {
        return 0;
      }
      puVar7 = (ulonglong *)FUN_1803d4150(puVar9,param_3 & 0xffffffff);
    }
    if (puVar7 != param_2) {
      return 0;
    }
  }
  if (*(int *)(param_4 + 8) < 1) {
    return 0;
  }
  if (*(int *)(param_4 + 0xc) < 1) {
    return 0;
  }
  if (*(int *)(param_4 + 0x10) < 1) {
    return 0;
  }
  if (*(int *)(param_4 + 0x14) < 1) {
    return 0;
  }
  lVar16 = (longlong)*(int *)(param_4 + 8) + (longlong)param_2;
  if (lVar16 == 0) {
LAB_1801f75a9:
    local_b4 = 0;
LAB_1801f75b0:
    local_b0[0] = local_b4 & 0x7fff;
LAB_1801f7679:
    bVar2 = false;
    if (param_7 == '\0') {
      return 0;
    }
    if ((local_b4 - 1 < 0xfffffffe) && (local_b0[0] != 0x7fff)) {
      return 0;
    }
  }
  else {
    local_b0[0] = 0;
    lVar8 = FUN_18017ea70();
    *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
    cVar4 = FUN_1804514c0(local_b0,lVar16,4);
    if (cVar4 == '\0') {
      lVar16 = FUN_18017ea70();
      if (*(int *)(lVar16 + 4) != 0) {
        *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + -1;
      }
      goto LAB_1801f75a9;
    }
    lVar16 = FUN_18017ea70();
    local_b4 = local_b0[0];
    if (*(int *)(lVar16 + 4) != 0) {
      *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + -1;
    }
    if ((local_b0[0] == 0) || (local_b0[0] == 0xffffffff)) goto LAB_1801f75b0;
    uVar6 = local_b0[0] & 0x7fff;
    if (uVar6 == 0x7fff) goto LAB_1801f75b0;
    if (uVar6 < 0x4000) {
      uVar12 = (ulonglong)uVar6;
      uVar14 = (&DAT_180b0e108)[uVar12 * 4];
      if (((uVar14 & 1) == 0) && ((&DAT_180b0e110)[uVar12 * 8] == local_b0[0])) {
        puVar9 = (ulonglong *)(&DAT_180b0e118)[uVar12 * 4];
        if (((&DAT_180b0e108)[uVar12 * 4] == uVar14) &&
           (((&DAT_180b0e110)[uVar12 * 8] == local_b0[0] && (puVar9 != (ulonglong *)0x0)))) {
          local_b0[0] = uVar6;
          if ((&DAT_180b0e120)[uVar12 * 8] != 0) goto LAB_1801f7667;
        }
        goto LAB_1801f7675;
      }
      local_b4 = local_b0[0];
      local_b0[0] = uVar6;
      goto LAB_1801f7679;
    }
    local_b0[0] = uVar6;
    puVar9 = (ulonglong *)FUN_1803d4150(local_b4,local_b4);
LAB_1801f7667:
    uVar6 = local_b0[0];
    if (puVar9 != param_1) {
LAB_1801f7675:
      local_b0[0] = uVar6;
      goto LAB_1801f7679;
    }
    bVar2 = true;
  }
  lVar16 = (longlong)*(int *)(param_4 + 0xc) + (longlong)param_2;
  if (lVar16 == 0) {
    return 0;
  }
  local_a8 = (ulonglong *)0x0;
  lVar8 = FUN_18017ea70();
  *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
  cVar4 = FUN_1804514c0(&local_a8,lVar16,8);
  if (cVar4 == '\0') goto LAB_1801f7adb;
  lVar16 = FUN_18017ea70();
  if (*(int *)(lVar16 + 4) != 0) {
    *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + -1;
  }
  if (local_a8 == (ulonglong *)0x0) {
    return 0;
  }
  lVar16 = 0;
  local_80[0] = 0;
  local_80[1] = 0;
  local_80[2] = 0;
  local_80[3] = 0;
  local_80[4] = 0;
  local_80[5] = 0;
  local_80[6] = 0;
  local_80[7] = 0;
  local_88 = local_a8;
  puVar9 = local_a8;
  while( true ) {
    puVar7 = (ulonglong *)0x0;
    lVar8 = (longlong)*(int *)(param_4 + 0x10) + (longlong)puVar9;
    if (lVar8 == 0) {
      return 0;
    }
    local_a8 = (ulonglong *)0x0;
    lVar10 = FUN_18017ea70();
    *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
    cVar4 = FUN_1804514c0(&local_a8,lVar8,8);
    if (cVar4 == '\0') goto LAB_1801f7adb;
    lVar8 = FUN_18017ea70();
    param_4 = local_a0;
    puVar3 = local_a8;
    if (*(int *)(lVar8 + 4) != 0) {
      *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
    }
    if (local_a8 == (ulonglong *)0x0) {
      return 0;
    }
    if (local_a8 == puVar9) {
      return 0;
    }
    local_80[lVar16] = (longlong)puVar9;
    local_80[lVar16 + 4] = (longlong)local_a8;
    lVar8 = (longlong)*(int *)(local_a0 + 0x14) + (longlong)local_a8;
    if (lVar8 != 0) break;
LAB_1801f77dc:
    if (((param_7 != '\0') && (param_8 != (ulonglong *)0x0)) && (puVar7 == param_8))
    goto LAB_1801f7804;
    lVar16 = lVar16 + 1;
    puVar9 = puVar3;
    if (3 < lVar16) {
      return 0;
    }
  }
  local_a8 = (ulonglong *)0x0;
  lVar10 = FUN_18017ea70();
  *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
  cVar4 = FUN_1804514c0(&local_a8,lVar8,8);
  if (cVar4 == '\0') {
    lVar8 = FUN_18017ea70();
    if (*(int *)(lVar8 + 4) != 0) {
      *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
    }
    goto LAB_1801f77dc;
  }
  lVar8 = FUN_18017ea70();
  if (*(int *)(lVar8 + 4) != 0) {
    *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
  }
  puVar7 = local_a8;
  if (local_a8 != local_98) goto LAB_1801f77dc;
LAB_1801f7804:
  puVar9 = (ulonglong *)0x0;
  lVar8 = 0;
  do {
    lVar10 = local_80[lVar8] + (longlong)*(int *)(local_a0 + 0x10);
    if (lVar10 == 0) {
LAB_1801f7859:
      puVar13 = (ulonglong *)0x0;
    }
    else {
      local_a8 = (ulonglong *)0x0;
      lVar11 = FUN_18017ea70();
      *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + 1;
      cVar4 = FUN_1804514c0(&local_a8,lVar10,8);
      if (cVar4 == '\0') {
        lVar10 = FUN_18017ea70();
        if (*(int *)(lVar10 + 4) != 0) {
          *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
        }
        goto LAB_1801f7859;
      }
      lVar10 = FUN_18017ea70();
      if (*(int *)(lVar10 + 4) != 0) {
        *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
      }
      puVar13 = local_a8;
    }
    uVar14 = local_a0;
    if (puVar13 != (ulonglong *)local_80[lVar8 + 4]) {
      return 0;
    }
    lVar8 = lVar8 + 1;
  } while (lVar8 <= lVar16);
  lVar16 = (longlong)*(int *)(local_a0 + 8) + (longlong)local_90;
  if (lVar16 == 0) {
LAB_1801f78b5:
    uVar6 = 0;
  }
  else {
    local_a0 = local_a0 & 0xffffffff00000000;
    lVar8 = FUN_18017ea70();
    *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
    cVar4 = FUN_1804514c0(&local_a0,lVar16,4);
    if (cVar4 == '\0') {
      lVar16 = FUN_18017ea70();
      if (*(int *)(lVar16 + 4) != 0) {
        *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + -1;
      }
      goto LAB_1801f78b5;
    }
    lVar16 = FUN_18017ea70();
    if (*(int *)(lVar16 + 4) != 0) {
      *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + -1;
    }
    uVar6 = (uint)local_a0;
  }
  if (uVar6 != local_b4) {
    return 0;
  }
  lVar16 = (longlong)*(int *)(uVar14 + 0xc) + (longlong)local_90;
  if (lVar16 == 0) {
    return 0;
  }
  local_a8 = (ulonglong *)0x0;
  lVar8 = FUN_18017ea70();
  *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
  cVar4 = FUN_1804514c0(&local_a8,lVar16,8);
  if (cVar4 == '\0') {
LAB_1801f7adb:
    lVar16 = FUN_18017ea70();
    if (*(int *)(lVar16 + 4) == 0) {
      return 0;
    }
    *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + -1;
    return 0;
  }
  lVar16 = FUN_18017ea70();
  if (*(int *)(lVar16 + 4) != 0) {
    *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + -1;
  }
  if (local_a8 != local_88) {
    return 0;
  }
  uVar17 = extraout_XMM0_Qa;
  if (cVar5 == '\0') goto LAB_1801f79bd;
  if ((uVar15 - 1 < 0xfffffffe) &&
     (uVar12 = (ulonglong)(uVar15 & 0x7fff), (uVar15 & 0x7fff) < 0x4000)) {
    uVar1 = (&DAT_180b0e108)[uVar12 * 4];
    if (((uVar1 & 1) != 0) || ((&DAT_180b0e110)[uVar12 * 8] != uVar15)) goto LAB_1801f797d;
    puVar13 = (ulonglong *)(&DAT_180b0e118)[uVar12 * 4];
    if (((((&DAT_180b0e108)[uVar12 * 4] != uVar1) || ((&DAT_180b0e110)[uVar12 * 8] != uVar15)) ||
        (puVar13 == (ulonglong *)0x0)) || ((&DAT_180b0e120)[uVar12 * 8] == 0)) goto LAB_1801f797d;
  }
  else {
LAB_1801f797d:
    uVar6 = uVar15 & 0x7fff;
    if (0xfffffffd < uVar15 - 1) {
      return 0;
    }
    if (uVar6 == 0x7fff) {
      return 0;
    }
    if (uVar6 < 0x4000) {
      return 0;
    }
    puVar13 = (ulonglong *)FUN_1803d4150(uVar6,param_3 & 0xffffffff);
    uVar17 = extraout_XMM0_Qa_00;
  }
  if (puVar13 != local_90) {
    return 0;
  }
LAB_1801f79bd:
  if (bVar2) {
    if (0xfffffffd < local_b4 - 1) {
      return 0;
    }
    uVar12 = (ulonglong)local_b0[0];
    if (local_b0[0] < 0x4000) {
      uVar1 = (&DAT_180b0e108)[uVar12 * 4];
      if ((uVar1 & 1) != 0) {
        return 0;
      }
      if ((&DAT_180b0e110)[uVar12 * 8] != local_b4) {
        return 0;
      }
      puVar13 = (ulonglong *)(&DAT_180b0e118)[uVar12 * 4];
      if ((&DAT_180b0e108)[uVar12 * 4] != uVar1) {
        return 0;
      }
      if ((&DAT_180b0e110)[uVar12 * 8] != local_b4) {
        return 0;
      }
      if (puVar13 == (ulonglong *)0x0) {
        return 0;
      }
      if ((&DAT_180b0e120)[uVar12 * 8] == 0) {
        return 0;
      }
    }
    else {
      if (local_b0[0] == 0x7fff) {
        return 0;
      }
      puVar13 = (ulonglong *)FUN_1803d4150(uVar17,local_b4);
    }
    if (puVar13 != local_98) {
      return 0;
    }
  }
  lVar16 = (longlong)*(int *)(uVar14 + 0x14) + (longlong)puVar3;
  local_98 = puVar9;
  if (lVar16 != 0) {
    local_98 = (ulonglong *)0x0;
    lVar8 = FUN_18017ea70();
    *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
    cVar5 = FUN_1804514c0(&local_98,lVar16,8);
    if (cVar5 == '\0') {
      lVar16 = FUN_18017ea70();
      local_98 = puVar9;
      if (*(int *)(lVar16 + 4) != 0) {
        *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + -1;
      }
    }
    else {
      lVar16 = FUN_18017ea70();
      if (*(int *)(lVar16 + 4) != 0) {
        *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + -1;
      }
    }
  }
  if (local_98 == puVar7) {
    return 1;
  }
  return 0;
}



