// FUN_18031e9a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18031e9a0 */

undefined8 FUN_18031e9a0(undefined8 *param_1,int param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  int *piVar3;
  longlong lVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  uint *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined1 auVar10 [16];
  short sVar11;
  longlong *plVar12;
  byte bVar13;
  int iVar14;
  uint *puVar15;
  byte bVar16;
  float fVar17;
  undefined1 auVar18 [64];
  undefined1 auVar19 [64];
  undefined1 auVar20 [64];
  undefined1 local_res18 [16];
  ulonglong local_58;
  uint local_50;
  
  if (DAT_180bda168 != 0) {
    plVar12 = (longlong *)FUN_18017bf40(local_res18);
    if ((*plVar12 == DAT_180bda168) || (DAT_180bda168 <= *plVar12)) {
      if (DAT_180bbeaba == '\0') {
        DAT_180bda164 = DAT_180bda164 + 1;
        DAT_180bbeaba = 1;
        return 1;
      }
      return 1;
    }
  }
  DAT_180bda1b4 = DAT_180bda1b4 + 1;
  if (DAT_180b8e111 == '\0') {
    return 1;
  }
  auVar19 = ZEXT464((uint)DAT_180b8e174);
  sVar11 = thunk_FUN_180624430(DAT_180b8e174 & 0xffffffff);
  if (0 < sVar11) {
    return 1;
  }
  auVar20 = ZEXT464(DAT_180b8e174._4_4_);
  sVar11 = thunk_FUN_180624430(DAT_180b8e174._4_4_);
  if (0 < sVar11) {
    return 1;
  }
  auVar18 = ZEXT464(DAT_180b8e17c);
  sVar11 = thunk_FUN_180624430(DAT_180b8e17c);
  if (0 < sVar11) {
    return 1;
  }
  local_50 = DAT_180b8e17c;
  auVar10 = vunpcklps_avx(auVar19._0_16_,auVar20._0_16_);
  local_58 = auVar10._0_8_;
  bVar13 = ~DAT_180b8e18c & 1;
  DAT_180b8e174 = local_58;
  if (((bVar13 == 0) && (1 < param_2)) &&
     ((*(int *)*param_1 != 3 || (*(int *)param_1[1] < param_2)))) {
    piVar3 = *(int **)param_1[2];
    if (piVar3 == (int *)0x0) {
      return 1;
    }
    if (*piVar3 < 0) {
      *piVar3 = param_2;
      return 1;
    }
    return 1;
  }
  fVar17 = auVar18._0_4_;
  if (((bVar13 == 0) || (fVar17 < -8.293333)) || (-5.62895 < fVar17)) {
    bVar16 = 0;
  }
  else {
    bVar16 = 1;
  }
  lVar4 = *(longlong *)param_1[2];
  if (((lVar4 != 0) && (bVar13 != 0)) &&
     ((fVar17 < 20.0 && (ABS(fVar17 + 6.2) < ABS(*(float *)(lVar4 + 8) + 6.2))))) {
    *(float *)(lVar4 + 8) = fVar17;
    *(int *)(*(longlong *)param_1[2] + 4) = param_2;
  }
  if ((*(char *)param_1[3] != '\0') && (piVar3 = *(int **)param_1[4], piVar3 != (int *)0x0)) {
    if (bVar16 == 0) {
      return 1;
    }
    *piVar3 = *piVar3 + 1;
    puVar5 = (undefined8 *)param_1[5];
    *puVar5 = DAT_180b8e168;
    *(undefined4 *)(puVar5 + 1) = DAT_180b8e170;
    FUN_18030afc0(*(undefined8 *)param_1[6],*(undefined8 *)param_1[7],param_1[8]);
    puVar5 = (undefined8 *)param_1[9];
    if (DAT_180bbeabe == '\0') {
      if (*(char *)*puVar5 == '\0') {
        FUN_18030b660(*(undefined8 *)puVar5[1],*(undefined8 *)puVar5[2],*(undefined1 *)puVar5[5],
                      *(undefined4 *)puVar5[3]);
      }
      else {
        FUN_18030bbc0(*(undefined8 *)puVar5[1],*(undefined8 *)puVar5[2],*(undefined4 *)puVar5[3],
                      &local_58,*(undefined4 *)puVar5[4]);
      }
    }
    FUN_18031e8f0(param_1[10],param_2);
    if (*(int *)*param_1 == 3) {
      if (param_2 == *(int *)param_1[1]) {
        FUN_18031dff0(*(undefined8 *)param_1[6],*(undefined8 *)param_1[7],
                      *(undefined4 *)param_1[0xb]);
        return 0;
      }
      if (param_2 <= *(int *)param_1[1]) {
        return 0;
      }
    }
    else if (*(int *)*param_1 == 0) {
      return 0;
    }
    uVar6 = *(ulonglong *)(*(longlong *)param_1[6] + 0x60);
    *(ulonglong *)(*(longlong *)param_1[6] + 0x60) = uVar6 | 2;
    puVar1 = (ulonglong *)(*(longlong *)param_1[6] + 0x68);
    *puVar1 = *puVar1 | (ulonglong)
                        (((uint)uVar6 ^ (uint)*(undefined8 *)(*(longlong *)param_1[6] + 0x60)) & 2);
    puVar7 = *(uint **)param_1[7];
    lVar4 = *(longlong *)param_1[6];
    puVar15 = (uint *)0x0;
    if (*(longlong *)(puVar7 + 10) != 0) {
      puVar15 = (uint *)(*(longlong *)(puVar7 + 10) + 0x10);
    }
    if (puVar15 != (uint *)0x0) {
      *puVar7 = *puVar7 | 2;
      uVar8 = *(undefined8 *)(lVar4 + 0x60);
      *puVar15 = *puVar15 | 1;
      uVar2 = *puVar15;
      *(undefined8 *)(puVar15 + 2) = uVar8;
      uVar8 = *(undefined8 *)(lVar4 + 0x68);
      *puVar15 = uVar2 | 2;
      *(undefined8 *)(puVar15 + 4) = uVar8;
      uVar8 = *(undefined8 *)(lVar4 + 0x70);
      *puVar15 = uVar2 | 6;
      *(undefined8 *)(puVar15 + 6) = uVar8;
    }
    return 0;
  }
  puVar5 = param_1 + 0xc;
  if (bVar16 == 0) {
LAB_18031ed04:
    *(uint *)*puVar5 = (uint)bVar16;
    iVar14 = 0;
    if (bVar16 != 0) {
      iVar14 = param_2;
    }
    *(int *)param_1[0xe] = iVar14;
  }
  else {
    if (*(int *)*puVar5 == 0) {
      *(int *)param_1[0xe] = param_2;
    }
    else if (1.5 < ABS(fVar17 - *(float *)param_1[0xd])) goto LAB_18031ed04;
    *(int *)*puVar5 = *(int *)*puVar5 + 1;
  }
  *(float *)param_1[0xd] = fVar17;
  if (2 < *(int *)*puVar5) {
    *(undefined1 *)param_1[3] = 1;
    **(undefined4 **)param_1[0xf] = *(undefined4 *)param_1[0xe];
    puVar5 = (undefined8 *)param_1[4];
    **(float **)param_1[0x10] = fVar17;
    if ((undefined4 *)*puVar5 == (undefined4 *)0x0) {
      return 1;
    }
    *(undefined4 *)*puVar5 = 3;
    puVar5 = (undefined8 *)param_1[0x11];
    *puVar5 = DAT_180b8e168;
    *(undefined4 *)(puVar5 + 1) = DAT_180b8e170;
    puVar5 = (undefined8 *)param_1[0x11];
    puVar9 = (undefined8 *)param_1[5];
    *puVar9 = *puVar5;
    *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar5 + 1);
  }
  FUN_18030afc0(*(undefined8 *)param_1[6],*(undefined8 *)param_1[7],param_1[8]);
  puVar5 = (undefined8 *)param_1[9];
  if (DAT_180bbeabe == '\0') {
    if (*(char *)*puVar5 == '\0') {
      FUN_18030b660(*(undefined8 *)puVar5[1],*(undefined8 *)puVar5[2],*(undefined1 *)puVar5[5],
                    *(undefined4 *)puVar5[3]);
    }
    else {
      FUN_18030bbc0(*(undefined8 *)puVar5[1],*(undefined8 *)puVar5[2],*(undefined4 *)puVar5[3],
                    &local_58,*(undefined4 *)puVar5[4]);
    }
  }
  FUN_18031e8f0(param_1[10],param_2);
  if (*(int *)*param_1 == 3) {
    if (param_2 == *(int *)param_1[1]) {
      FUN_18031dff0(*(undefined8 *)param_1[6],*(undefined8 *)param_1[7],*(undefined4 *)param_1[0xb])
      ;
      return 0;
    }
    if (param_2 <= *(int *)param_1[1]) {
      return 0;
    }
  }
  else if (*(int *)*param_1 == 0) {
    return 0;
  }
  uVar6 = *(ulonglong *)(*(longlong *)param_1[6] + 0x60);
  *(ulonglong *)(*(longlong *)param_1[6] + 0x60) = uVar6 | 2;
  puVar1 = (ulonglong *)(*(longlong *)param_1[6] + 0x68);
  *puVar1 = *puVar1 | (ulonglong)
                      (((uint)uVar6 ^ (uint)*(undefined8 *)(*(longlong *)param_1[6] + 0x60)) & 2);
  puVar7 = *(uint **)param_1[7];
  lVar4 = *(longlong *)param_1[6];
  puVar15 = (uint *)0x0;
  if (*(longlong *)(puVar7 + 10) != 0) {
    puVar15 = (uint *)(*(longlong *)(puVar7 + 10) + 0x10);
  }
  if (puVar15 != (uint *)0x0) {
    *puVar7 = *puVar7 | 2;
    uVar8 = *(undefined8 *)(lVar4 + 0x60);
    *puVar15 = *puVar15 | 1;
    uVar2 = *puVar15;
    *(undefined8 *)(puVar15 + 2) = uVar8;
    uVar8 = *(undefined8 *)(lVar4 + 0x68);
    *puVar15 = uVar2 | 2;
    *(undefined8 *)(puVar15 + 4) = uVar8;
    uVar8 = *(undefined8 *)(lVar4 + 0x70);
    *puVar15 = uVar2 | 6;
    *(undefined8 *)(puVar15 + 6) = uVar8;
  }
  return 0;
}



