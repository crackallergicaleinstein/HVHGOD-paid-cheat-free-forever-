// FUN_180500eb0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180500eb0 */

void FUN_180500eb0(int param_1,char *param_2,char *param_3)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  int *piVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  longlong lVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  undefined8 uVar15;
  longlong lVar16;
  uint uVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  char cVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  char local_78;
  char local_75;
  undefined8 local_68;
  float fStack_60;
  float fStack_5c;
  
  lVar9 = DAT_180bb8ae8;
  cVar21 = *param_2;
  lVar16 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
  piVar5 = *(int **)(DAT_180bb8ae8 + 0x2478);
  local_78 = *param_3;
  lVar6 = *(longlong *)(piVar5 + 10);
  if (local_78 != '\0') {
    *(undefined1 *)((longlong)piVar5 + 0x52) = 1;
  }
  local_75 = '\0';
  if ((*(byte *)(lVar9 + 0x1ec8) & 1) != 0) {
    local_75 = FUN_1804b7b20(0x20);
  }
  if ((*(char *)((longlong)piVar5 + 0x52) == '\0') && (local_75 == '\0')) {
    return;
  }
  uVar4 = piVar5[0xd];
  lVar7 = *(longlong *)(lVar9 + 0x1e98);
  uVar17 = piVar5[0x13] & 0x1000;
  bVar18 = uVar17 != 0;
  uVar13 = piVar5[0x13] & 0x2000;
  bVar19 = uVar13 != 0;
  bVar20 = false;
  if (*(int *)(lVar9 + 0x203c) == param_1) {
    bVar20 = false;
    if (*(longlong *)(lVar6 + 0x18) == -1) {
      bVar20 = true;
    }
  }
  if (*(char *)((longlong)piVar5 + 0x51) == '\0') {
    iVar11 = piVar5[1];
    if (iVar11 < 0) {
      iVar11 = iVar11 + iVar11 / 2;
      iVar12 = 0;
      if (0 < iVar11) {
        iVar12 = iVar11;
      }
      FUN_180504820(piVar5,iVar12);
    }
    *piVar5 = 0;
    *(undefined1 *)((longlong)piVar5 + 0x51) = 1;
  }
  if (*(int *)(lVar9 + 0x220c) == param_1) {
    if ((uVar4 & 8) == 0) {
      if (uVar17 == 0) {
        local_78 = '\x01';
        cVar21 = '\x01';
      }
      else if (uVar13 != 0) {
        local_78 = '\x01';
      }
      goto LAB_18050101d;
    }
    if (uVar13 != 0) {
      local_78 = '\x01';
      goto LAB_18050101d;
    }
    if (uVar17 != 0) goto LAB_18050101d;
LAB_180501022:
    *(longlong *)(lVar6 + 0x18) = lVar7;
    *(char *)(lVar6 + 0x14) = cVar21;
  }
  else {
LAB_18050101d:
    if (bVar20) goto LAB_180501022;
  }
  if ((((piVar5[0x12] != 0) && (*(int *)(DAT_180bb8ae8 + 0x23f0) == piVar5[0x12])) &&
      (*(char *)(DAT_180bb8ae8 + 0x23f4) != '\0')) &&
     ((int *)(DAT_180bb8ae8 + 0x23f0) != (int *)0x0)) {
    uVar15 = *(undefined8 *)(lVar9 + 0x1ecc);
    fStack_60 = (float)*(undefined8 *)(lVar9 + 0x1ed4);
    local_68._0_4_ = (float)uVar15;
    if (((*(char *)(lVar16 + 0x178) == '\0') &&
        (lVar14 = *(longlong *)(lVar9 + 0x2338), lVar14 != 0)) && (*(int *)(lVar14 + 0x74) != -1)) {
      lVar14 = (longlong)*(int *)(lVar14 + 0x74) * 0x78 + *(longlong *)(lVar14 + 0x18);
      if ((*(uint *)(lVar9 + 0x1ec4) & 0x200) == 0) {
        fVar2 = *(float *)(lVar16 + 0x268);
        fVar3 = *(float *)(lVar16 + 0x270);
      }
      else {
        fVar2 = *(float *)(lVar9 + 0x1efc);
        fVar3 = *(float *)(lVar9 + 0x1f04);
      }
      auVar22 = ZEXT416(*(uint *)(lVar14 + 8));
      auVar23 = ZEXT416(*(uint *)(lVar14 + 0xc));
      if (fVar2 == fVar3) {
        auVar22 = vmaxss_avx(ZEXT416((uint)(float)local_68),auVar22);
        local_68._0_4_ = auVar22._0_4_;
        auVar22 = vminss_avx(ZEXT416((uint)fStack_60),auVar23);
        fStack_60 = auVar22._0_4_;
      }
      else {
        auVar22 = vminss_avx(auVar22,ZEXT416((uint)fVar2));
        auVar22 = vmaxss_avx(ZEXT416((uint)(float)local_68),auVar22);
        local_68._0_4_ = auVar22._0_4_;
        auVar22 = vmaxss_avx(auVar23,ZEXT416((uint)fVar3));
        auVar22 = vminss_avx(ZEXT416((uint)fStack_60),auVar22);
        fStack_60 = auVar22._0_4_;
      }
    }
    local_68._4_4_ = (float)((ulonglong)uVar15 >> 0x20);
    fStack_5c = (float)((ulonglong)*(undefined8 *)(lVar9 + 0x1ed4) >> 0x20);
    if (((*(float *)(DAT_180bb8ae8 + 0x2470) <= local_68._4_4_) ||
        (fStack_5c <= *(float *)(DAT_180bb8ae8 + 0x2468))) ||
       ((*(float *)(DAT_180bb8ae8 + 0x246c) <= (float)local_68 ||
        (fStack_60 <= *(float *)(DAT_180bb8ae8 + 0x2464))))) {
      bVar20 = false;
    }
    else {
      bVar20 = true;
    }
    if ((((*(float *)(DAT_180bb8ae8 + 0x2460) <= local_68._4_4_) ||
         (fStack_5c <= *(float *)(DAT_180bb8ae8 + 0x2458))) ||
        (*(float *)(DAT_180bb8ae8 + 0x245c) <= (float)local_68)) ||
       (fStack_60 <= *(float *)(DAT_180bb8ae8 + 0x2454))) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if (bVar20) {
      if ((!bVar8) && (cVar21 == '\0')) {
LAB_1805011ad:
        if ((*(int *)(lVar6 + 0x10) < 1) && (*(char *)(DAT_180bb8ae8 + 0x23f7) != '\0')) {
          local_78 = '\x01';
          *(undefined1 *)(DAT_180bb8ae8 + 0x23f7) = 0;
        }
        else {
          iVar11 = piVar5[1];
          cVar21 = cVar21 == '\0';
          local_68._6_2_ = (undefined2)((ulonglong)uVar15 >> 0x30);
          local_68._0_6_ = CONCAT15(1,CONCAT14(cVar21,2));
          if (*piVar5 == iVar11) {
            iVar12 = *piVar5 + 1;
            if (iVar11 == 0) {
              iVar11 = 8;
            }
            else {
              iVar11 = iVar11 / 2 + iVar11;
            }
            if (iVar12 < iVar11) {
              iVar12 = iVar11;
            }
            FUN_180504820(piVar5,iVar12);
          }
          iVar11 = *piVar5;
          lVar14 = *(longlong *)(piVar5 + 2);
          puVar1 = (undefined8 *)(lVar14 + (longlong)iVar11 * 0x18);
          *puVar1 = local_68;
          puVar1[1] = lVar7;
          *(longlong *)(lVar14 + 0x10 + (longlong)iVar11 * 0x18) = lVar7;
          *piVar5 = *piVar5 + 1;
        }
        iVar12 = *(int *)(lVar6 + 0x10) + 1;
        iVar11 = 1;
        if (0 < iVar12) {
          iVar11 = iVar12;
        }
        *(int *)(lVar6 + 0x10) = iVar11;
      }
    }
    else if (bVar8) goto LAB_1805011ad;
  }
  if (((local_75 == '\0') || (iVar11 = param_1, cVar10 = FUN_1804c3510(1,0,0), cVar10 == '\0')) ||
     ((uVar4 & 0x20008) != 0)) {
    if (local_78 != '\0') goto LAB_1805012f1;
LAB_180501307:
    bVar20 = false;
  }
  else {
    if ((*(int *)(lVar9 + 0x1550) != 0) && (*(int *)(lVar9 + 0x1550) != iVar11)) {
      FUN_1804b7870(0,0);
    }
    FUN_1804c8fd0(param_1,lVar16);
    if (local_78 == '\0') {
      if (cVar21 != '\0') goto LAB_180501307;
      bVar19 = false;
      local_78 = '\x01';
      bVar18 = false;
    }
LAB_1805012f1:
    if ((*(int *)(lVar9 + 0x2054) != param_1) || ((*(byte *)(lVar9 + 0x2060) & 1) == 0))
    goto LAB_180501307;
    bVar20 = true;
  }
  lVar16 = DAT_180bb8ae8;
  if ((local_78 == '\0') || ((bVar20 && (cVar21 != '\0')))) goto LAB_180501538;
  if ((*(int *)(lVar9 + 0x220c) == param_1) || (iVar11 = 1, *(int *)(lVar9 + 0x2054) == param_1)) {
    iVar11 = *(int *)(lVar9 + 0x2090);
  }
  if (((((uVar4 & 0xc0) != 0) && (*(char *)(lVar9 + 0x23f4) == '\0')) &&
      (*(char *)(lVar9 + 0x23f5) == '\0')) && ((iVar11 == 1 && (*(short *)(lVar9 + 0xb4a) == 1)))) {
    *(int *)(DAT_180bb8ae8 + 0x23f0) = piVar5[0x12];
    *(bool *)(lVar16 + 0x23f6) = lVar7 == -1;
    *(bool *)(lVar16 + 0x23f7) = lVar7 == -1;
    *(undefined1 *)(lVar16 + 0x23f5) = 1;
    *(undefined2 *)(lVar16 + 0x23fc) = *(undefined2 *)(lVar16 + 0x130);
    fVar2 = *(float *)(lVar16 + 0x110) - *(float *)(*(longlong *)(lVar16 + 0x14d0) + 0x128);
    fVar3 = *(float *)(lVar16 + 0x114) - *(float *)(*(longlong *)(lVar16 + 0x14d0) + 300);
    *(undefined8 *)(lVar16 + 0x2410) = 0;
    *(float *)(lVar16 + 0x2408) = fVar2;
    *(float *)(lVar16 + 0x240c) = fVar3;
    *(float *)(lVar16 + 0x2400) = fVar2;
    *(float *)(lVar16 + 0x2404) = fVar3;
  }
  if ((uVar4 & 0x10) != 0) goto LAB_18050149d;
  if ((uVar4 & 1) == 0) {
    if (((iVar11 == 1) || (*(int *)(lVar9 + 0x2054) == param_1)) && (!bVar18)) {
      if ((uVar4 & 0x20) == 0) goto LAB_180501485;
      if (cVar21 == '\0') {
        FUN_1805015a0(piVar5);
      }
      goto LAB_18050149d;
    }
    if (1 < iVar11 - 2U) goto LAB_18050149d;
    if (!bVar19) goto LAB_1805014fc;
    if (!bVar18) {
      FUN_1805015a0(piVar5);
      goto LAB_18050149d;
    }
LAB_1805014ab:
    lVar16 = *(longlong *)(lVar6 + 0x18);
    if (*(longlong *)(lVar6 + 0x18) == -1) {
      *(longlong *)(lVar6 + 0x18) = lVar7;
      lVar16 = lVar7;
    }
    if ((uVar4 >> 0x14 & 1) == 0) {
      if (bVar18) {
LAB_1805014c6:
        if (*(char *)(lVar6 + 0x14) != -1) {
          bVar20 = *(char *)(lVar6 + 0x14) != '\0';
          goto LAB_1805014e2;
        }
      }
      bVar20 = true;
    }
    else {
      if (*(char *)((longlong)piVar5 + 0x53) != '\0') goto LAB_1805014c6;
      bVar20 = cVar21 == '\0';
    }
LAB_1805014e2:
    uVar15 = 0xffffffff;
    if (*(char *)((longlong)piVar5 + 0x55) != '\0') {
      uVar15 = 1;
    }
  }
  else {
LAB_180501485:
    FUN_1805015a0(piVar5);
LAB_18050149d:
    if ((bVar19) && ((uVar4 & 1) == 0)) goto LAB_1805014ab;
LAB_1805014fc:
    if (((uVar4 >> 0x14 & 1) != 0) || (bVar18)) {
      cVar21 = cVar21 == '\0';
    }
    else {
      cVar21 = true;
    }
    *(longlong *)(lVar6 + 0x18) = lVar7;
    uVar15 = 1;
    lVar16 = lVar7;
    bVar20 = (bool)cVar21;
  }
  FUN_180501630(piVar5,bVar20,uVar15,lVar16,lVar7);
LAB_180501538:
  if (*(longlong *)(lVar6 + 0x18) == lVar7) {
    *(bool *)(lVar6 + 0x14) = cVar21 != '\0';
  }
  if (*(int *)(lVar9 + 0x203c) == param_1) {
    *(longlong *)(lVar6 + 0x20) = lVar7;
    *(bool *)(lVar6 + 0x15) = cVar21 != '\0';
  }
  if (*(longlong *)(lVar6 + 0x20) == lVar7) {
    *(undefined1 *)(piVar5 + 0x15) = 1;
  }
  *param_2 = cVar21;
  *param_3 = local_78;
  return;
}



