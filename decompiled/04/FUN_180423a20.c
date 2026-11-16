// FUN_180423a20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180423a20 */

/* WARNING: Removing unreachable block (ram,0x000180424160) */
/* WARNING: Removing unreachable block (ram,0x000180423e6d) */
/* WARNING: Removing unreachable block (ram,0x000180423da8) */

undefined8 FUN_180423a20(longlong param_1,char *param_2,char *param_3)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  char *pcVar10;
  char *pcVar11;
  bool bVar12;
  undefined1 auVar13 [16];
  undefined1 extraout_var [56];
  undefined1 auVar14 [64];
  undefined1 extraout_var_00 [56];
  undefined1 auVar15 [64];
  undefined1 extraout_var_01 [56];
  undefined1 auVar16 [64];
  undefined1 extraout_var_02 [56];
  undefined1 auVar17 [64];
  undefined1 extraout_var_03 [56];
  undefined1 auVar18 [64];
  undefined1 extraout_var_04 [56];
  undefined1 auVar19 [64];
  undefined1 extraout_var_05 [56];
  undefined1 auVar20 [64];
  undefined1 extraout_var_06 [56];
  undefined1 auVar21 [64];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  pcVar10 = (char *)((longlong)*(int *)(param_1 + 0x9c00) * 0x138 + param_1);
  if (pcVar10 == (char *)0x0) {
    return 0;
  }
  uVar8 = 0;
  lVar4 = 0;
  while (lVar5 = lVar4 + 1, param_2[lVar4] == "style"[lVar4]) {
    lVar4 = lVar5;
    if (lVar5 == 6) {
      FUN_180424410(param_1,param_3);
      return 1;
    }
  }
  lVar4 = 0;
  while (lVar5 = lVar4 + 1, param_2[lVar4] == "display"[lVar4]) {
    lVar4 = lVar5;
    if (lVar5 == 8) {
      do {
        uVar9 = uVar8 + 1;
        if (param_3[uVar8] != (&DAT_1806bba88)[uVar8]) {
          return 1;
        }
        uVar8 = uVar9;
      } while (uVar9 != 5);
      pcVar10[0x136] = '\0';
      return 1;
    }
  }
  lVar4 = 0;
  while (lVar5 = lVar4 + 1, param_2[lVar4] == (&DAT_1806bd570)[lVar4]) {
    lVar4 = lVar5;
    if (lVar5 == 5) goto code_r0x000180423b0a;
  }
  lVar4 = 0;
  while (lVar5 = lVar4 + 1, param_2[lVar4] == "opacity"[lVar4]) {
    lVar4 = lVar5;
    if (lVar5 == 8) {
      auVar14._0_8_ = (double)FUN_1804227e0(param_3);
      auVar14._8_56_ = extraout_var;
      auVar13._0_4_ = (float)auVar14._0_8_;
      auVar13._4_12_ = auVar14._4_12_;
      auVar13 = vmaxss_avx(ZEXT816(0),auVar13);
      auVar13 = vminss_avx(SUB6416(ZEXT464(0x3f800000),0),auVar13);
      *(int *)(pcVar10 + 0x60) = auVar13._0_4_;
      return 1;
    }
  }
  iVar2 = strcmp(param_2,"fill-opacity");
  if (iVar2 == 0) {
    auVar15._0_8_ = (double)FUN_1804227e0(param_3);
    auVar15._8_56_ = extraout_var_00;
    auVar22._0_4_ = (float)auVar15._0_8_;
    auVar22._4_12_ = auVar15._4_12_;
    auVar13 = vmaxss_avx(ZEXT816(0),auVar22);
    auVar13 = vminss_avx(SUB6416(ZEXT464(0x3f800000),0),auVar13);
    *(int *)(pcVar10 + 100) = auVar13._0_4_;
    return 1;
  }
  lVar4 = 0;
  while (lVar5 = lVar4 + 1, param_2[lVar4] == "stroke"[lVar4]) {
    lVar4 = lVar5;
    if (lVar5 == 7) goto code_r0x000180423c87;
  }
  iVar2 = strcmp(param_2,"stroke-width");
  if (iVar2 == 0) {
    fVar1 = *(float *)(param_1 + 0x9c44) * *(float *)(param_1 + 0x9c44) +
            *(float *)(param_1 + 40000) * *(float *)(param_1 + 40000);
    if (fVar1 < 0.0) {
      auVar16._0_8_ = FUN_18061e150(fVar1);
      auVar16._8_56_ = extraout_var_01;
      auVar13 = auVar16._0_16_;
    }
    else {
      auVar13 = ZEXT416((uint)SQRT(fVar1));
    }
    auVar26._0_4_ = auVar13._0_4_ / 1.4142135;
    auVar26._4_12_ = auVar13._4_12_;
    uVar3 = FUN_180422f50(param_1,param_3,0,auVar26._0_8_);
    *(undefined4 *)(pcVar10 + 0xec) = uVar3;
    return 1;
  }
  iVar2 = strcmp(param_2,"stroke-dasharray");
  if (iVar2 == 0) {
    uVar3 = FUN_1804237b0(param_1,param_3,pcVar10 + 0xf4);
    *(undefined4 *)(pcVar10 + 0x114) = uVar3;
    return 1;
  }
  iVar2 = strcmp(param_2,"stroke-dashoffset");
  if (iVar2 == 0) {
    fVar1 = *(float *)(param_1 + 0x9c44) * *(float *)(param_1 + 0x9c44) +
            *(float *)(param_1 + 40000) * *(float *)(param_1 + 40000);
    if (fVar1 < 0.0) {
      auVar17._0_8_ = FUN_18061e150(fVar1);
      auVar17._8_56_ = extraout_var_02;
      auVar13 = auVar17._0_16_;
    }
    else {
      auVar13 = ZEXT416((uint)SQRT(fVar1));
    }
    auVar27._0_4_ = auVar13._0_4_ / 1.4142135;
    auVar27._4_12_ = auVar13._4_12_;
    uVar3 = FUN_180422f50(param_1,param_3,0,auVar27._0_8_);
    *(undefined4 *)(pcVar10 + 0xf0) = uVar3;
    return 1;
  }
  iVar2 = strcmp(param_2,"stroke-opacity");
  if (iVar2 == 0) {
    auVar18._0_8_ = (double)FUN_1804227e0(param_3);
    auVar18._8_56_ = extraout_var_03;
    auVar23._0_4_ = (float)auVar18._0_8_;
    auVar23._4_12_ = auVar18._4_12_;
    auVar13 = vmaxss_avx(ZEXT816(0),auVar23);
    auVar13 = vminss_avx(SUB6416(ZEXT464(0x3f800000),0),auVar13);
    *(int *)(pcVar10 + 0x68) = auVar13._0_4_;
    return 1;
  }
  iVar2 = strcmp(param_2,"stroke-linecap");
  if (iVar2 == 0) {
    lVar4 = 0;
    while (lVar5 = lVar4 + 1, param_3[lVar4] == (&DAT_18081e698)[lVar4]) {
      lVar4 = lVar5;
      if (lVar5 == 5) {
        pcVar10[0x119] = '\0';
        return 1;
      }
    }
    lVar4 = 0;
    while (lVar5 = lVar4 + 1, param_3[lVar4] == "round"[lVar4]) {
      lVar4 = lVar5;
      if (lVar5 == 6) {
        pcVar10[0x119] = '\x01';
        return 1;
      }
    }
    lVar4 = 0;
    do {
      lVar5 = lVar4;
      bVar12 = param_3[lVar5] == "square"[lVar5];
      if (!bVar12) goto LAB_180423f77;
      lVar4 = lVar5 + 1;
    } while (lVar5 + 1 != 7);
    bVar12 = param_3[lVar5] == "square"[lVar5];
LAB_180423f77:
    cVar6 = '\0';
    if (bVar12) {
      cVar6 = '\x02';
    }
    pcVar10[0x119] = cVar6;
    return 1;
  }
  iVar2 = strcmp(param_2,"stroke-linejoin");
  if (iVar2 == 0) {
    lVar4 = 0;
    while (lVar5 = lVar4 + 1, param_3[lVar4] == "miter"[lVar4]) {
      lVar4 = lVar5;
      if (lVar5 == 6) {
        pcVar10[0x118] = '\0';
        return 1;
      }
    }
    lVar4 = 0;
    while (lVar5 = lVar4 + 1, param_3[lVar4] == "round"[lVar4]) {
      lVar4 = lVar5;
      if (lVar5 == 6) {
        pcVar10[0x118] = '\x01';
        return 1;
      }
    }
    lVar4 = 0;
    do {
      lVar5 = lVar4;
      bVar12 = param_3[lVar5] == "bevel"[lVar5];
      if (!bVar12) goto LAB_180424026;
      lVar4 = lVar5 + 1;
    } while (lVar5 + 1 != 6);
    bVar12 = param_3[lVar5] == "bevel"[lVar5];
LAB_180424026:
    cVar6 = '\0';
    if (bVar12) {
      cVar6 = '\x02';
    }
    pcVar10[0x118] = cVar6;
    return 1;
  }
  iVar2 = strcmp(param_2,"stroke-miterlimit");
  if (iVar2 == 0) {
    auVar19._0_8_ = (double)FUN_1804227e0(param_3);
    auVar19._8_56_ = extraout_var_04;
    auVar24._0_4_ = (float)auVar19._0_8_;
    auVar24._4_12_ = auVar19._4_12_;
    auVar13 = vmaxss_avx(ZEXT816(0),auVar24);
    *(int *)(pcVar10 + 0x11c) = auVar13._0_4_;
    return 1;
  }
  iVar2 = strcmp(param_2,"fill-rule");
  if (iVar2 == 0) {
    lVar4 = 0;
    while (lVar5 = lVar4 + 1, param_3[lVar4] == "nonzero"[lVar4]) {
      lVar4 = lVar5;
      if (lVar5 == 8) {
        pcVar10[0x120] = '\0';
        return 1;
      }
    }
    do {
      uVar9 = uVar8;
      bVar12 = param_3[uVar9] == "evenodd"[uVar9];
      if (!bVar12) goto LAB_1804240e7;
      uVar8 = uVar9 + 1;
    } while (uVar9 + 1 != 8);
    bVar12 = param_3[uVar9] == "evenodd"[uVar9];
LAB_1804240e7:
    pcVar10[0x120] = bVar12;
    return 1;
  }
  iVar2 = strcmp(param_2,"font-size");
  if (iVar2 == 0) {
    fVar1 = *(float *)(param_1 + 0x9c44) * *(float *)(param_1 + 0x9c44) +
            *(float *)(param_1 + 40000) * *(float *)(param_1 + 40000);
    if (fVar1 < 0.0) {
      auVar20._0_8_ = FUN_18061e150(fVar1);
      auVar20._8_56_ = extraout_var_05;
      auVar13 = auVar20._0_16_;
    }
    else {
      auVar13 = ZEXT416((uint)SQRT(fVar1));
    }
    auVar28._0_4_ = auVar13._0_4_ / 1.4142135;
    auVar28._4_12_ = auVar13._4_12_;
    uVar3 = FUN_180422f50(param_1,param_3,0,auVar28._0_8_);
    *(undefined4 *)(pcVar10 + 0x124) = uVar3;
    return 1;
  }
  iVar2 = strcmp(param_2,"transform");
  if (iVar2 == 0) {
    FUN_1804233f0(&local_40,param_3);
    pcVar10 = pcVar10 + 0x40;
    local_58 = local_40;
    uStack_50 = uStack_38;
    local_48 = local_30;
    FUN_1804210f0(&local_58);
    *(undefined8 *)pcVar10 = local_58;
    *(undefined8 *)(pcVar10 + 8) = uStack_50;
    *(undefined8 *)(pcVar10 + 0x10) = local_48;
    return 1;
  }
  iVar2 = strcmp(param_2,"stop-color");
  if (iVar2 == 0) {
    uVar3 = FUN_180422cc0(param_3);
    *(undefined4 *)(pcVar10 + 0x128) = uVar3;
    return 1;
  }
  iVar2 = strcmp(param_2,"stop-opacity");
  if (iVar2 == 0) {
    auVar21._0_8_ = (double)FUN_1804227e0(param_3);
    auVar21._8_56_ = extraout_var_06;
    auVar25._0_4_ = (float)auVar21._0_8_;
    auVar25._4_12_ = auVar21._4_12_;
    auVar13 = vmaxss_avx(ZEXT816(0),auVar25);
    auVar13 = vminss_avx(SUB6416(ZEXT464(0x3f800000),0),auVar13);
    *(int *)(pcVar10 + 300) = auVar13._0_4_;
    return 1;
  }
  lVar4 = 0;
  while (lVar5 = lVar4 + 1, param_2[lVar4] == "offset"[lVar4]) {
    lVar4 = lVar5;
    if (lVar5 == 7) {
      uVar3 = FUN_180422f50(param_1,param_3,0,0x3f800000);
      *(undefined4 *)(pcVar10 + 0x130) = uVar3;
      return 1;
    }
  }
  iVar2 = strcmp(param_2,"paint-order");
  if (iVar2 != 0) {
    if (*param_2 != 'i') {
      return 0;
    }
    if (param_2[1] != 'd') {
      return 0;
    }
    if (param_2[2] == '\0') {
      strncpy(pcVar10,param_3,0x3f);
      pcVar10[0x3f] = '\0';
      return 1;
    }
    return 0;
  }
  do {
    uVar9 = uVar8 + 1;
    if (param_3[uVar8] != "normal"[uVar8]) {
      iVar2 = strcmp(param_3,"fill stroke markers");
      if (iVar2 != 0) {
        iVar2 = strcmp(param_3,"fill markers stroke");
        if (iVar2 == 0) {
          pcVar10[0x137] = '$';
          return 1;
        }
        iVar2 = strcmp(param_3,"markers fill stroke");
        if (iVar2 == 0) {
          pcVar10[0x137] = '!';
          return 1;
        }
        iVar2 = strcmp(param_3,"markers stroke fill");
        if (iVar2 == 0) {
          pcVar10[0x137] = '\t';
          return 1;
        }
        iVar2 = strcmp(param_3,"stroke fill markers");
        if (iVar2 == 0) {
          pcVar10[0x137] = '\x12';
          return 1;
        }
        iVar2 = strcmp(param_3,"stroke markers fill");
        cVar6 = '\x18';
        if (iVar2 == 0) {
          cVar6 = '\x06';
        }
        pcVar10[0x137] = cVar6;
        return 1;
      }
      break;
    }
    uVar8 = uVar9;
  } while (uVar9 != 7);
  pcVar10[0x137] = '\x18';
  return 1;
code_r0x000180423b0a:
  lVar4 = 0;
  do {
    lVar5 = lVar4;
    if (param_3[lVar5] != (&DAT_1806bba88)[lVar5]) goto LAB_180423b4a;
    lVar4 = lVar5 + 1;
  } while (lVar5 + 1 != 5);
  if (param_3[lVar5] == (&DAT_1806bba88)[lVar5]) {
    pcVar10[0x134] = '\0';
    return 1;
  }
LAB_180423b4a:
  iVar2 = strncmp(param_3,"url(",4);
  if (iVar2 != 0) {
    pcVar10[0x134] = '\x01';
    uVar3 = FUN_180422cc0(param_3);
    *(undefined4 *)(pcVar10 + 0x58) = uVar3;
    return 1;
  }
  pcVar11 = param_3 + 4;
  pcVar10[0x134] = '\x02';
  if ((*pcVar11 != '\0') && (*pcVar11 == '#')) {
    pcVar11 = param_3 + 5;
  }
  lVar4 = 0;
  do {
    uVar7 = (uint)uVar8;
    cVar6 = *pcVar11;
    if ((cVar6 == '\0') || (cVar6 == ')')) break;
    pcVar10[lVar4 + 0x6c] = cVar6;
    pcVar11 = pcVar11 + 1;
    lVar4 = lVar4 + 1;
    uVar7 = uVar7 + 1;
    uVar8 = (ulonglong)uVar7;
  } while (lVar4 < 0x3f);
  pcVar10[(longlong)(int)uVar7 + 0x6c] = '\0';
  return 1;
code_r0x000180423c87:
  lVar4 = 0;
  do {
    lVar5 = lVar4;
    if (param_3[lVar5] != (&DAT_1806bba88)[lVar5]) goto LAB_180423cba;
    lVar4 = lVar5 + 1;
  } while (lVar5 + 1 != 5);
  if (param_3[lVar5] == (&DAT_1806bba88)[lVar5]) {
    pcVar10[0x135] = '\0';
    return 1;
  }
LAB_180423cba:
  iVar2 = strncmp(param_3,"url(",4);
  if (iVar2 != 0) {
    pcVar10[0x135] = '\x01';
    uVar3 = FUN_180422cc0(param_3);
    *(undefined4 *)(pcVar10 + 0x5c) = uVar3;
    return 1;
  }
  pcVar11 = param_3 + 4;
  pcVar10[0x135] = '\x02';
  if ((*pcVar11 != '\0') && (*pcVar11 == '#')) {
    pcVar11 = param_3 + 5;
  }
  lVar4 = 0;
  do {
    uVar7 = (uint)uVar8;
    cVar6 = *pcVar11;
    if ((cVar6 == '\0') || (cVar6 == ')')) break;
    pcVar10[lVar4 + 0xac] = cVar6;
    pcVar11 = pcVar11 + 1;
    lVar4 = lVar4 + 1;
    uVar7 = uVar7 + 1;
    uVar8 = (ulonglong)uVar7;
  } while (lVar4 < 0x3f);
  pcVar10[(longlong)(int)uVar7 + 0xac] = '\0';
  return 1;
}



