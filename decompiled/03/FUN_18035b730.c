// FUN_18035b730 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18035b730 */

ulonglong FUN_18035b730(longlong *param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  undefined8 uVar6;
  char cVar7;
  short sVar8;
  undefined8 *puVar9;
  undefined1 uVar10;
  int iVar11;
  char *pcVar12;
  int iVar13;
  ulonglong uVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uStackX_1c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined1 local_118 [256];
  
  *(undefined1 *)(*param_1 + 0xb4) = 0;
  *(undefined1 *)param_1[3] = 0;
  *(undefined1 *)param_1[2] = 0;
  *(undefined1 *)param_1[1] = 0;
  cVar7 = FUN_1803586d0(param_1[4]);
  if (cVar7 == '\0') {
    piVar1 = (int *)param_1[5];
    *piVar1 = *piVar1 + 1;
    return (ulonglong)piVar1 & 0xffffffffffffff00;
  }
  uVar14 = 0;
  if (*(longlong *)(param_2 + 0x180) != 0) {
    pcVar12 = (char *)(param_2 + 9);
    do {
      if ((pcVar12[-1] == '\x01') && (*pcVar12 != '\0')) {
        *(undefined4 *)param_1[6] = *(undefined4 *)(pcVar12 + -5);
      }
      uVar14 = uVar14 + 1;
      pcVar12 = pcVar12 + 0xc;
    } while (uVar14 < *(ulonglong *)(param_2 + 0x180));
  }
  uStackX_1c = CONCAT31(uStackX_1c._1_3_,1);
  puVar9 = (undefined8 *)
           FUN_1804136a0(*(undefined4 *)param_1[9],local_118,*(undefined8 *)param_1[7],param_1[8],
                         CONCAT44(uStackX_1c,*(undefined4 *)param_1[9]));
  puVar2 = (undefined8 *)*param_1;
  uVar6 = puVar9[1];
  *puVar2 = *puVar9;
  puVar2[1] = uVar6;
  uVar6 = puVar9[3];
  puVar2[2] = puVar9[2];
  puVar2[3] = uVar6;
  uVar6 = puVar9[5];
  puVar2[4] = puVar9[4];
  puVar2[5] = uVar6;
  uVar6 = puVar9[7];
  puVar2[6] = puVar9[6];
  puVar2[7] = uVar6;
  uVar6 = puVar9[9];
  puVar2[8] = puVar9[8];
  puVar2[9] = uVar6;
  uVar6 = puVar9[0xb];
  puVar2[10] = puVar9[10];
  puVar2[0xb] = uVar6;
  uVar6 = puVar9[0xd];
  puVar2[0xc] = puVar9[0xc];
  puVar2[0xd] = uVar6;
  uVar6 = puVar9[0xf];
  puVar2[0xe] = puVar9[0xe];
  puVar2[0xf] = uVar6;
  uVar6 = puVar9[0x11];
  puVar2[0x10] = puVar9[0x10];
  puVar2[0x11] = uVar6;
  uVar6 = puVar9[0x13];
  puVar2[0x12] = puVar9[0x12];
  puVar2[0x13] = uVar6;
  uVar6 = puVar9[0x15];
  puVar2[0x14] = puVar9[0x14];
  puVar2[0x15] = uVar6;
  puVar2[0x16] = puVar9[0x16];
  lVar3 = *param_1;
  if ((*(char *)(lVar3 + 0xb4) == '\0') ||
     ((lVar4 = param_1[0xb], fVar16 = *(float *)(lVar3 + 0x58) - *(float *)(lVar4 + 0x2c),
      fVar15 = *(float *)(lVar3 + 0x5c) - *(float *)(lVar4 + 0x30),
      fVar5 = *(float *)(lVar3 + 0x60) - *(float *)(lVar4 + 0x34),
      fVar15 * fVar15 + fVar16 * fVar16 + fVar5 * fVar5 <= 1e-06 &&
      (fVar16 = *(float *)(lVar3 + 100) - *(float *)(lVar4 + 8),
      fVar15 = *(float *)(lVar3 + 0x68) - *(float *)(lVar4 + 0xc),
      fVar5 = *(float *)(lVar3 + 0x6c) - *(float *)(lVar4 + 0x10),
      fVar15 * fVar15 + fVar16 * fVar16 + fVar5 * fVar5 <= 1e-06)))) {
    uVar10 = 0;
  }
  else {
    uVar10 = 1;
  }
  *(undefined1 *)param_1[1] = uVar10;
  lVar3 = *param_1;
  if (*(char *)(lVar3 + 0xb4) == '\0') {
LAB_18035b9a0:
    uVar10 = 0;
  }
  else {
    if ((char)((int *)param_1[0xc])[1] == '\0') {
      iVar11 = -1;
    }
    else {
      iVar11 = *(int *)param_1[0xc];
    }
    if ((*(int *)(lVar3 + 0x94) == iVar11) || (*(float *)(lVar3 + 0x6c) <= 0.0)) goto LAB_18035b9a0;
    uVar10 = 1;
  }
  fVar16 = 0.0;
  iVar11 = -1;
  *(undefined1 *)param_1[2] = uVar10;
  if (*(char *)(*param_1 + 0xb4) == '\0') {
LAB_18035b9cc:
    uVar10 = 0;
  }
  else {
    if ((char)((int *)param_1[0xd])[1] != '\0') {
      iVar11 = *(int *)param_1[0xd];
    }
    if (*(int *)(*param_1 + 0x98) != iVar11) goto LAB_18035b9cc;
    uVar10 = 1;
  }
  *(undefined1 *)param_1[3] = uVar10;
  puVar2 = (undefined8 *)*param_1;
  if (*(char *)((longlong)puVar2 + 0xb4) == '\0') {
    *(int *)param_1[5] = *(int *)param_1[5] + 1;
    return (ulonglong)*(byte *)(*param_1 + 0xb4);
  }
  puVar9 = (undefined8 *)param_1[0xe];
  uVar6 = puVar2[1];
  *puVar9 = *puVar2;
  puVar9[1] = uVar6;
  uVar6 = puVar2[3];
  puVar9[2] = puVar2[2];
  puVar9[3] = uVar6;
  uVar6 = puVar2[5];
  puVar9[4] = puVar2[4];
  puVar9[5] = uVar6;
  uVar6 = puVar2[7];
  puVar9[6] = puVar2[6];
  puVar9[7] = uVar6;
  uVar6 = puVar2[9];
  puVar9[8] = puVar2[8];
  puVar9[9] = uVar6;
  uVar6 = puVar2[0xb];
  puVar9[10] = puVar2[10];
  puVar9[0xb] = uVar6;
  uVar6 = puVar2[0xd];
  puVar9[0xc] = puVar2[0xc];
  puVar9[0xd] = uVar6;
  uVar6 = puVar2[0xf];
  puVar9[0xe] = puVar2[0xe];
  puVar9[0xf] = uVar6;
  uVar6 = puVar2[0x11];
  puVar9[0x10] = puVar2[0x10];
  puVar9[0x11] = uVar6;
  uVar6 = puVar2[0x13];
  puVar9[0x12] = puVar2[0x12];
  puVar9[0x13] = uVar6;
  uVar6 = puVar2[0x15];
  puVar9[0x14] = puVar2[0x14];
  puVar9[0x15] = uVar6;
  puVar9[0x16] = puVar2[0x16];
  *(int *)param_1[0xf] = *(int *)param_1[0xf] + (uint)(*(char *)param_1[2] == '\0');
  *(int *)param_1[0x10] = *(int *)param_1[0x10] + (uint)(*(char *)param_1[3] == '\0');
  if ((*(char *)param_1[0x12] == '\0') ||
     (lVar3 = *param_1,
     fVar15 = (float)FUN_180354750(*(undefined4 *)param_1[0x13],*(undefined4 *)(lVar3 + 0xa8),
                                   *(undefined4 *)(param_1[0x14] + 4),
                                   *(undefined4 *)(param_1[0x14] + 8)),
     fVar15 <= *(float *)(lVar3 + 0x6c))) {
    iVar11 = 0;
  }
  else {
    iVar11 = 1;
  }
  iVar13 = 1;
  *(int *)param_1[0x11] = *(int *)param_1[0x11] + iVar11;
  if (*(char *)(param_1[0x12] + 1) == '\0') {
LAB_18035bb6b:
    iVar11 = 0;
  }
  else {
    lVar3 = *param_1;
    local_138 = *(undefined4 *)(lVar3 + 100);
    local_134 = *(undefined4 *)(lVar3 + 0x68);
    local_130 = *(undefined4 *)(lVar3 + 0x6c);
    local_128 = *(undefined8 *)(param_1[0x16] + 0xc);
    local_120 = *(undefined4 *)(param_1[0x16] + 0x14);
    cVar7 = FUN_180354970(&local_128,&local_138,*(undefined4 *)(lVar3 + 0xa4));
    if (cVar7 != '\0') goto LAB_18035bb6b;
    iVar11 = 1;
  }
  *(int *)param_1[0x15] = *(int *)param_1[0x15] + iVar11;
  if ((*(char *)param_1[2] == '\0') || (*(char *)param_1[3] == '\0')) {
LAB_18035bc2f:
    iVar11 = 0;
  }
  else {
    lVar3 = *param_1;
    uVar17 = *(undefined4 *)(lVar3 + 100);
    uVar18 = *(undefined4 *)(lVar3 + 0x68);
    uVar19 = *(undefined4 *)(lVar3 + 0x6c);
    lVar4 = param_1[0x16];
    local_128 = *(undefined8 *)(lVar4 + 0xc);
    local_120 = *(undefined4 *)(lVar4 + 0x14);
    local_138 = uVar17;
    local_134 = uVar18;
    local_130 = uVar19;
    cVar7 = FUN_180354800(&local_128,&local_138,0x7f800000);
    if (cVar7 != '\0') goto LAB_18035bc2f;
    local_128 = *(undefined8 *)(lVar4 + 0xc);
    local_120 = *(undefined4 *)(lVar4 + 0x14);
    local_138 = uVar17;
    local_134 = uVar18;
    local_130 = uVar19;
    cVar7 = FUN_180354970(&local_128,&local_138,*(undefined4 *)(lVar3 + 0xa4));
    if (cVar7 == '\0') goto LAB_18035bc2f;
    iVar11 = 1;
  }
  *(int *)param_1[0x17] = *(int *)param_1[0x17] + iVar11;
  if (*(char *)(param_1[0x12] + 2) != '\0') {
    if ((*(int *)param_1[0x19] < 0) || (*(int *)(*param_1 + 0xb0) < *(int *)param_1[0x19]))
    goto LAB_18035bc7d;
    fVar15 = *(float *)(*param_1 + 0x9c);
    sVar8 = thunk_FUN_180624430(fVar15);
    if ((0 < sVar8) || (fVar16 < fVar15)) goto LAB_18035bc7d;
  }
  iVar13 = 0;
LAB_18035bc7d:
  *(int *)param_1[0x18] = *(int *)param_1[0x18] + iVar13;
  return (ulonglong)*(byte *)(*param_1 + 0xb4);
}



