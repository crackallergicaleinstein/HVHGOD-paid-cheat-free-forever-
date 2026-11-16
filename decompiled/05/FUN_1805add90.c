// FUN_1805add90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805add90 */

ulonglong FUN_1805add90(undefined8 param_1,undefined8 *param_2,int param_3)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  short *psVar7;
  char *pcVar8;
  ulonglong uVar9;
  short *psVar10;
  short *psVar11;
  short sVar12;
  longlong lVar13;
  longlong lVar14;
  short sVar15;
  short sVar16;
  int iVar17;
  longlong local_res10 [2];
  uint local_res20 [2];
  undefined8 *local_48;
  undefined8 local_40;
  
  uVar2 = param_2[0x13];
  local_res20[0] = 0;
  local_res10[0] = 0;
  local_res20[0] = FUN_1805788b0(param_1,0);
  if (local_res20[0] != 0) {
    return (ulonglong)local_res20[0];
  }
  local_res20[0] = FUN_1805af5c0(param_1,uVar2,0x5000,local_res10);
  lVar13 = local_res10[0];
  if ((char)local_res20[0] == -0x50) {
    FUN_1805adcc0(param_2);
    return 2;
  }
  if (local_res20[0] != 0) {
    return (ulonglong)local_res20[0];
  }
  param_2[0x1d] = local_res10[0];
  if ((0 < param_3) && ((short)param_3 != 0)) {
    FUN_1805adcc0(param_2);
    return 6;
  }
  *(uint *)(param_2 + 1) = *(uint *)(param_2 + 1) | 0x12;
  *param_2 = 1;
  if ((((local_res10[0] != 0) && (*(int *)(local_res10[0] + 0x50) != 0)) &&
      (plVar5 = (longlong *)FUN_18057a550("SPACING",*(undefined8 *)(local_res10[0] + 0x70)),
      plVar5 != (longlong *)0x0)) &&
     ((lVar14 = *(longlong *)(lVar13 + 0x58) + *plVar5 * 0x18, lVar14 != 0 &&
      (pcVar8 = *(char **)(lVar14 + 0x10), pcVar8 != (char *)0x0)))) {
    cVar1 = *pcVar8;
    if ((cVar1 + 0xb0U & 0xdf) == 0) {
      *(undefined4 *)(lVar13 + 0x20) = 8;
    }
    else if ((cVar1 + 0xb3U & 0xdf) == 0) {
      *(undefined4 *)(lVar13 + 0x20) = 0x10;
    }
    else if ((cVar1 + 0xbdU & 0xdf) == 0) {
      *(undefined4 *)(lVar13 + 0x20) = 0x20;
    }
  }
  if ((*(int *)(lVar13 + 0x20) == 0x10) || (*(int *)(lVar13 + 0x20) == 0x20)) {
    *(uint *)(param_2 + 1) = *(uint *)(param_2 + 1) | 4;
  }
  if ((((*(int *)(lVar13 + 0x50) == 0) ||
       (plVar5 = (longlong *)FUN_18057a550("FAMILY_NAME",*(undefined8 *)(lVar13 + 0x70)),
       plVar5 == (longlong *)0x0)) ||
      (lVar14 = *(longlong *)(lVar13 + 0x58) + *plVar5 * 0x18, lVar14 == 0)) ||
     (lVar14 = *(longlong *)(lVar14 + 0x10), lVar14 == 0)) {
    param_2[3] = 0;
  }
  else {
    uVar6 = FUN_18057ade0(uVar2,lVar14,local_res20);
    param_2[3] = uVar6;
    if (local_res20[0] != 0) {
      return (ulonglong)local_res20[0];
    }
  }
  local_res20[0] = FUN_1805af220(param_2);
  if (local_res20[0] != 0) {
    return (ulonglong)local_res20[0];
  }
  iVar3 = *(int *)(lVar13 + 0x30);
  *(undefined4 *)(param_2 + 5) = 1;
  *(int *)(param_2 + 2) = iVar3 + 1;
  psVar7 = (short *)FUN_18057aad0(uVar2,0x10,local_res20);
  param_2[6] = psVar7;
  if (local_res20[0] != 0) {
    return (ulonglong)local_res20[0];
  }
  sVar15 = 0;
  sVar16 = 0;
  if (((*(int *)(lVar13 + 0x50) == 0) ||
      (plVar5 = (longlong *)FUN_18057a550("FONT_ASCENT",*(undefined8 *)(lVar13 + 0x70)),
      plVar5 == (longlong *)0x0)) ||
     (lVar14 = *(longlong *)(lVar13 + 0x58) + *plVar5 * 0x18, lVar14 == 0)) {
    iVar3 = (int)*(short *)(lVar13 + 0x10);
  }
  else {
    iVar3 = *(int *)(lVar14 + 0x10);
  }
  *(int *)(lVar13 + 0x28) = iVar3;
  if (iVar3 < 0x8000) {
    if (iVar3 < 0) {
      *(undefined4 *)(lVar13 + 0x28) = 0;
    }
  }
  else {
    *(undefined4 *)(lVar13 + 0x28) = 0x7fff;
  }
  if (((*(int *)(lVar13 + 0x50) == 0) ||
      (plVar5 = (longlong *)FUN_18057a550("FONT_DESCENT",*(undefined8 *)(lVar13 + 0x70)),
      plVar5 == (longlong *)0x0)) ||
     (lVar14 = *(longlong *)(lVar13 + 0x58) + *plVar5 * 0x18, lVar14 == 0)) {
    iVar3 = (int)*(short *)(lVar13 + 0x12);
  }
  else {
    iVar3 = *(int *)(lVar14 + 0x10);
  }
  *(int *)(lVar13 + 0x2c) = iVar3;
  if (iVar3 < 0x8000) {
    if (iVar3 < 0) {
      *(undefined4 *)(lVar13 + 0x2c) = 0;
      iVar3 = 0;
    }
  }
  else {
    *(undefined4 *)(lVar13 + 0x2c) = 0x7fff;
    iVar3 = 0x7fff;
  }
  *psVar7 = (short)iVar3 + *(short *)(lVar13 + 0x28);
  if (((*(int *)(lVar13 + 0x50) == 0) ||
      (plVar5 = (longlong *)FUN_18057a550("AVERAGE_WIDTH",*(undefined8 *)(lVar13 + 0x70)),
      plVar5 == (longlong *)0x0)) ||
     (lVar14 = *(longlong *)(lVar13 + 0x58) + *plVar5 * 0x18, lVar14 == 0)) {
    sVar12 = (short)((*psVar7 * 2 + 1) / 3);
    psVar11 = (short *)0x2;
    psVar10 = psVar7;
  }
  else {
    iVar3 = *(int *)(lVar14 + 0x10);
    psVar11 = psVar7;
    if (iVar3 + 0x4fff1U < 0x9ffe3) {
      iVar3 = iVar3 + 5;
      sVar12 = (short)(iVar3 / 10);
      if (sVar12 < 0) {
        lVar14 = (longlong)iVar3 * -0x66666667;
        sVar12 = (short)(lVar14 >> 0x22) - (short)(lVar14 >> 0x3f);
        psVar10 = (short *)0x2;
        goto LAB_1805ae101;
      }
    }
    else {
      sVar12 = 0x7fff;
    }
    psVar10 = (short *)0x2;
  }
LAB_1805ae101:
  *(short *)((longlong)psVar11 + (longlong)psVar10) = sVar12;
  if (((lVar13 == 0) || (*(int *)(lVar13 + 0x50) == 0)) ||
     ((plVar5 = (longlong *)FUN_18057a550("POINT_SIZE",*(undefined8 *)(lVar13 + 0x70)),
      plVar5 == (longlong *)0x0 ||
      (lVar14 = *(longlong *)(lVar13 + 0x58) + *plVar5 * 0x18, lVar14 == 0)))) {
    uVar4 = *(uint *)(lVar13 + 0x14);
    if (uVar4 == 0) {
      uVar4 = (uint)psVar7[1];
LAB_1805ae19c:
      iVar3 = uVar4 << 6;
    }
    else {
      if (uVar4 < 0x8000) goto LAB_1805ae19c;
      iVar3 = 0x7fff;
    }
    psVar11 = (short *)0x4;
    psVar10 = psVar7;
  }
  else {
    iVar3 = *(int *)(lVar14 + 0x10);
    psVar11 = psVar7;
    if (iVar3 + 0x504c2U < 0xa0985) {
      iVar17 = -iVar3;
      if (-1 < iVar3) {
        iVar17 = iVar3;
      }
      iVar3 = FUN_1805753e0(iVar17,0x70800,0x11a4e);
      psVar10 = (short *)0x4;
    }
    else {
      iVar3 = 0x7fff;
      psVar10 = (short *)0x4;
    }
  }
  *(int *)((longlong)psVar11 + (longlong)psVar10) = iVar3;
  if (lVar13 == 0) {
LAB_1805ae259:
    iVar3 = *(int *)(lVar13 + 0x18);
  }
  else {
    if (((*(int *)(lVar13 + 0x50) != 0) &&
        (plVar5 = (longlong *)FUN_18057a550("PIXEL_SIZE",*(undefined8 *)(lVar13 + 0x70)),
        plVar5 != (longlong *)0x0)) &&
       (lVar14 = *(longlong *)(lVar13 + 0x58) + *plVar5 * 0x18, lVar14 != 0)) {
      iVar3 = *(int *)(lVar14 + 0x10);
      if (iVar3 + 0x7fffU < 0xffff) {
        sVar12 = (short)iVar3;
        iVar3 = -(int)sVar12;
        if (-1 < sVar12) {
          iVar3 = (int)sVar12;
        }
        *(int *)(psVar7 + 6) = iVar3 << 6;
      }
      else {
        psVar7[6] = -0x40;
        psVar7[7] = 0x1f;
      }
    }
    if ((((lVar13 == 0) || (*(int *)(lVar13 + 0x50) == 0)) ||
        (plVar5 = (longlong *)FUN_18057a550("RESOLUTION_X",*(undefined8 *)(lVar13 + 0x70)),
        plVar5 == (longlong *)0x0)) ||
       (lVar14 = *(longlong *)(lVar13 + 0x58) + *plVar5 * 0x18, lVar14 == 0)) goto LAB_1805ae259;
    iVar3 = *(int *)(lVar14 + 0x10);
  }
  if (iVar3 != 0) {
    if (iVar3 + 0x7fffU < 0xffff) {
      iVar17 = -(int)(short)iVar3;
      if (iVar17 < 0) {
        iVar17 = (int)(short)iVar3;
      }
      sVar16 = (short)iVar17;
    }
    else {
      sVar16 = 0x7fff;
    }
  }
  if (((*(int *)(lVar13 + 0x50) == 0) ||
      (plVar5 = (longlong *)FUN_18057a550("RESOLUTION_Y",*(undefined8 *)(lVar13 + 0x70)),
      plVar5 == (longlong *)0x0)) ||
     (lVar14 = *(longlong *)(lVar13 + 0x58) + *plVar5 * 0x18, lVar14 == 0)) {
    iVar3 = *(int *)(lVar13 + 0x1c);
  }
  else {
    iVar3 = *(int *)(lVar14 + 0x10);
  }
  if (iVar3 != 0) {
    if (iVar3 + 0x7fffU < 0xffff) {
      iVar17 = -(int)(short)iVar3;
      if (iVar17 < 0) {
        iVar17 = (int)(short)iVar3;
      }
      sVar15 = (short)iVar17;
    }
    else {
      sVar15 = 0x7fff;
    }
  }
  iVar3 = *(int *)(psVar7 + 6);
  if (iVar3 == 0) {
    iVar3 = *(int *)(psVar7 + 2);
    *(int *)(psVar7 + 6) = iVar3;
    if (sVar15 != 0) {
      iVar3 = FUN_1805753e0(iVar3,(int)sVar15,0x48);
      *(int *)(psVar7 + 6) = iVar3;
    }
  }
  if ((sVar16 != 0) && (sVar15 != 0)) {
    iVar3 = FUN_1805753e0(iVar3,(int)sVar16,(int)sVar15);
  }
  *(int *)(psVar7 + 4) = iVar3;
  if ((((lVar13 == 0) || (*(int *)(lVar13 + 0x50) == 0)) ||
      (plVar5 = (longlong *)FUN_18057a550("DEFAULT_CHAR",*(undefined8 *)(lVar13 + 0x70)),
      plVar5 == (longlong *)0x0)) ||
     (lVar14 = *(longlong *)(lVar13 + 0x58) + *plVar5 * 0x18, lVar14 == 0)) {
    *(undefined4 *)(lVar13 + 0x24) = 0xffffffff;
  }
  else {
    *(undefined4 *)(lVar13 + 0x24) = *(undefined4 *)(lVar14 + 0x10);
  }
  lVar14 = *(longlong *)(lVar13 + 0x38);
  uVar6 = FUN_18057ac40(uVar2,8,0,*(undefined4 *)(lVar13 + 0x30),0,local_res20);
  param_2[0x1e] = uVar6;
  if (local_res20[0] != 0) {
    return (ulonglong)local_res20[0];
  }
  *(undefined4 *)(param_2 + 0x1f) = 0;
  uVar9 = 0;
  if (*(int *)(lVar13 + 0x30) != 0) {
    do {
      iVar3 = (int)uVar9;
      *(undefined4 *)(uVar9 * 8 + param_2[0x1e]) = *(undefined4 *)(lVar14 + 8 + uVar9 * 0x30);
      *(short *)(param_2[0x1e] + 4 + uVar9 * 8) = (short)uVar9;
      if ((*(int *)(lVar14 + 8 + uVar9 * 0x30) == *(int *)(lVar13 + 0x24)) && (iVar3 != -1)) {
        *(int *)(param_2 + 0x1f) = iVar3;
      }
      uVar9 = (ulonglong)(iVar3 + 1U);
    } while (iVar3 + 1U < *(uint *)(lVar13 + 0x30));
  }
  if ((*(int *)(lVar13 + 0x50) == 0) ||
     (plVar5 = (longlong *)FUN_18057a550("CHARSET_REGISTRY",*(undefined8 *)(lVar13 + 0x70)),
     plVar5 == (longlong *)0x0)) {
    lVar14 = 0;
  }
  else {
    lVar14 = *(longlong *)(lVar13 + 0x58) + *plVar5 * 0x18;
  }
  if ((*(int *)(lVar13 + 0x50) == 0) ||
     (plVar5 = (longlong *)FUN_18057a550("CHARSET_ENCODING",*(undefined8 *)(lVar13 + 0x70)),
     plVar5 == (longlong *)0x0)) {
    lVar13 = 0;
  }
  else {
    lVar13 = *(longlong *)(lVar13 + 0x58) + *plVar5 * 0x18;
  }
  local_48 = param_2;
  if ((((lVar14 == 0) || (lVar13 == 0)) || (*(int *)(lVar14 + 8) != 1)) ||
     (((*(int *)(lVar13 + 8) != 1 || (*(longlong *)(lVar14 + 0x10) == 0)) ||
      (*(longlong *)(lVar13 + 0x10) == 0)))) {
    local_40 = 0x741444f42;
    uVar4 = FUN_180573150(&DAT_180674450,0,&local_48,0);
    if (*(int *)(param_2 + 7) == 0) {
      return (ulonglong)uVar4;
    }
    param_2[0x11] = *(undefined8 *)param_2[8];
    return (ulonglong)uVar4;
  }
  uVar6 = FUN_18057ade0(uVar2,*(longlong *)(lVar13 + 0x10),local_res20);
  param_2[0x1b] = uVar6;
  if (local_res20[0] != 0) {
    return (ulonglong)local_res20[0];
  }
  pcVar8 = (char *)FUN_18057ade0(uVar2,*(undefined8 *)(lVar14 + 0x10),local_res20);
  param_2[0x1c] = pcVar8;
  if (local_res20[0] != 0) {
    return (ulonglong)local_res20[0];
  }
  if ((((*pcVar8 + 0xb7U & 0xdf) == 0) && ((pcVar8[1] + 0xadU & 0xdf) == 0)) &&
     ((pcVar8[2] + 0xb1U & 0xdf) == 0)) {
    pcVar8 = pcVar8 + 3;
    iVar3 = strcmp(pcVar8,"10646");
    if (((iVar3 == 0) ||
        ((iVar3 = strcmp(pcVar8,"8859"), iVar3 == 0 &&
         (iVar3 = strcmp((char *)param_2[0x1b],"1"), iVar3 == 0)))) ||
       ((iVar3 = strcmp(pcVar8,"646.1991"), iVar3 == 0 &&
        (iVar3 = strcmp((char *)param_2[0x1b],"IRV"), iVar3 == 0)))) {
      local_40 = 0x10003756e6963;
      goto LAB_1805ae5b1;
    }
  }
  local_40 = 0;
LAB_1805ae5b1:
  uVar9 = FUN_180573150(&DAT_180674450,0,&local_48,0);
  return uVar9;
}



