// FUN_1804b2050 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804b2050 */

undefined8 FUN_1804b2050(int *param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  int iVar12;
  uint uVar13;
  bool bVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int *piVar19;
  undefined1 uVar20;
  int iVar21;
  undefined1 uVar22;
  float fVar23;
  float fVar24;
  undefined1 local_78;
  undefined1 local_77;
  undefined4 local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined4 local_50;
  
  uVar13 = local_68;
  lVar7 = *(longlong *)(param_1 + 10);
  lVar8 = *(longlong *)(param_1 + 0xc);
  lVar9 = *(longlong *)(lVar7 + 0x2338);
  lVar10 = *(longlong *)(lVar7 + 0x14d0);
  if ((lVar9 != 0) && (*(char *)(lVar9 + 0x23e) != '\0')) {
    FUN_1804ef4b0(lVar9);
  }
  iVar18 = param_1[3];
  if (iVar18 == 0) {
    return 0;
  }
  if (*(longlong *)(DAT_180bb8ae8 + 0x2338) == 0) {
    cVar6 = *(char *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xd1);
  }
  else {
    cVar6 = *(char *)(*(longlong *)(DAT_180bb8ae8 + 0x2338) + 0x254);
  }
  if (cVar6 != '\0') {
    return 0;
  }
  if (((*(int *)(lVar8 + 0xc) == 0) && (lVar9 != 0)) && (*(char *)(lVar9 + 0x24d) == '\0')) {
    iVar17 = *(int *)(lVar8 + 0x10);
    *param_1 = iVar17;
    iVar15 = *(int *)(lVar8 + 0x10) + 1;
    if (iVar15 < iVar18) {
      iVar18 = iVar15;
    }
    param_1[1] = iVar18;
    if (iVar17 < iVar18) {
      *(int *)(lVar8 + 0x10) = *(int *)(lVar8 + 0x10) + 1;
      return 1;
    }
    return 1;
  }
  bVar14 = false;
  if (*(int *)(lVar8 + 0xc) == 0) {
    *(double *)(param_1 + 6) = (double)*(float *)(lVar10 + 0x11c);
    if ((float)param_1[4] <= 0.0) {
      iVar17 = *(int *)(lVar8 + 0x18);
      local_50 = (uint)local_50._3_1_ << 0x18;
      iVar18 = *(int *)(lVar8 + 0x1c);
      local_58 = CONCAT44(*(int *)(lVar8 + 0x10) + 1,*(int *)(lVar8 + 0x10));
      if (iVar17 == 0) {
        if (iVar18 == 0) {
          FUN_1804d13f0(lVar8 + 0x18,8);
        }
        iVar18 = *(int *)(lVar8 + 0x18);
        lVar7 = *(longlong *)(lVar8 + 0x20);
        *(longlong *)(lVar7 + (longlong)iVar18 * 0xc) = local_58;
        *(int *)(lVar7 + 8 + (longlong)iVar18 * 0xc) = local_50;
      }
      else {
        if (iVar17 == iVar18) {
          if (iVar18 == 0) {
            iVar18 = 8;
          }
          else {
            iVar18 = iVar18 + iVar18 / 2;
          }
          iVar15 = iVar17 + 1;
          if (iVar17 + 1 < iVar18) {
            iVar15 = iVar18;
          }
          FUN_1804d13f0(lVar8 + 0x18,iVar15);
        }
        if (0 < (longlong)*(int *)(lVar8 + 0x18)) {
          FUN_18063aed0(*(longlong *)(lVar8 + 0x20) + 0xc,*(longlong *)(lVar8 + 0x20),
                        (longlong)*(int *)(lVar8 + 0x18) * 0xc);
        }
        puVar11 = *(undefined8 **)(lVar8 + 0x20);
        *puVar11 = local_58;
        *(int *)(puVar11 + 1) = local_50;
      }
      *(int *)(lVar8 + 0x18) = *(int *)(lVar8 + 0x18) + 1;
      iVar18 = *(int *)(lVar8 + 0x10);
      if (*(int *)(lVar8 + 0x10) <= **(int **)(lVar8 + 0x20)) {
        iVar18 = **(int **)(lVar8 + 0x20);
      }
      *param_1 = iVar18;
      iVar18 = param_1[3];
      if (*(int *)(*(longlong *)(lVar8 + 0x20) + 4) < param_1[3]) {
        iVar18 = *(int *)(*(longlong *)(lVar8 + 0x20) + 4);
      }
      param_1[1] = iVar18;
      *(undefined4 *)(lVar8 + 0xc) = 1;
      return 1;
    }
    bVar14 = true;
  }
  fVar23 = (float)param_1[4];
  if (fVar23 <= 0.0) {
    dVar5 = *(double *)(param_1 + 6);
    if ((((float)dVar5 <= -16777216.0) || (16777216.0 <= (float)dVar5)) ||
       ((fVar23 = *(float *)(lVar10 + 0x11c), fVar23 <= -16777216.0 || (16777216.0 <= fVar23)))) {
      fVar23 = *(float *)(lVar7 + 0xcd8) + *(float *)(lVar10 + 0x14c);
      param_1[4] = (int)fVar23;
      *(float *)(lVar10 + 0x11c) = (float)((double)fVar23 + dVar5);
    }
    else {
      param_1[4] = (int)((float)((double)fVar23 - dVar5) / (float)(param_1[1] - *param_1));
    }
    fVar23 = (float)param_1[4];
    if ((fVar23 == 0.0) && (param_1[3] == 0x7fffffff)) {
      return 0;
    }
    if (fVar23 <= 0.0) {
      FUN_1804c5a40(
                   "ImGuiListClipper: Failed to calculate item height! First item hasn\'t been submitted by user code, or has not moved the cursor vertically!"
                   );
      return 0;
    }
    iVar18 = param_1[1];
  }
  else {
    iVar18 = param_1[1];
    if (!bVar14) goto LAB_1804b2886;
  }
  *(double *)(param_1 + 8) =
       (double)*(float *)(lVar8 + 8) - (double)*(int *)(lVar8 + 0x10) * (double)fVar23;
  if (*(char *)(lVar7 + 0x2840) == '\0') {
    iVar17 = 8;
    if (((*(char *)(lVar7 + 0x20e1) == '\0') || (*(longlong *)(lVar7 + 0x2040) == 0)) ||
       (*(longlong *)(*(longlong *)(lVar7 + 0x2040) + 0x3f0) != *(longlong *)(lVar10 + 0x3f0))) {
      bVar14 = false;
LAB_1804b243c:
      uVar22 = 0;
      local_78 = 0;
      uVar20 = 0;
      if ((!bVar14) || (local_78 = 0, *(int *)(lVar7 + 0x20f8) != 3)) goto LAB_1804b23e6;
      uVar20 = 1;
      local_77 = 1;
      local_60 = 1;
      local_78 = 0;
LAB_1804b23f9:
      fVar23 = *(float *)(lVar7 + 0x2100);
      iVar15 = *(int *)(lVar8 + 0x1c);
      fVar24 = *(float *)(lVar7 + 0x2108);
      local_68._0_2_ = CONCAT11(uVar22,1);
      local_68._3_1_ = SUB41(uVar13,3);
      local_68._0_3_ = CONCAT12(uVar20,(undefined2)local_68);
      if (*(int *)(lVar8 + 0x18) == iVar15) {
        iVar21 = *(int *)(lVar8 + 0x18) + 1;
        if (iVar15 == 0) {
          iVar15 = 8;
        }
        else {
          iVar15 = iVar15 / 2 + iVar15;
        }
        if (iVar21 < iVar15) {
          iVar21 = iVar15;
        }
        FUN_1804d13f0(lVar8 + 0x18,iVar21);
        uVar20 = local_60;
      }
      iVar15 = *(int *)(lVar8 + 0x18);
      lVar9 = *(longlong *)(lVar8 + 0x20);
      *(ulonglong *)(lVar9 + (longlong)iVar15 * 0xc) = CONCAT44((int)fVar24,(int)fVar23);
      *(uint *)(lVar9 + 8 + (longlong)iVar15 * 0xc) = local_68;
      iVar15 = *(int *)(lVar8 + 0x18);
      iVar21 = iVar15 + 1;
      *(int *)(lVar8 + 0x18) = iVar21;
      if ((*(float *)(lVar7 + 0x210c) <= *(float *)(lVar7 + 0x2114)) &&
         (fVar23 = *(float *)(lVar7 + 0x2110), fVar23 <= *(float *)(lVar7 + 0x2118))) {
        fVar24 = *(float *)(lVar7 + 0x2118);
        iVar16 = *(int *)(lVar8 + 0x1c);
        local_68._0_2_ = CONCAT11(uVar22,1);
        local_68 = CONCAT22(CONCAT11(local_68._3_1_,uVar20),(undefined2)local_68);
        if (iVar21 == iVar16) {
          iVar15 = iVar15 + 2;
          if (iVar16 == 0) {
            iVar16 = 8;
          }
          else {
            iVar16 = iVar16 / 2 + iVar16;
          }
          if (iVar15 < iVar16) {
            iVar15 = iVar16;
          }
          FUN_1804d13f0(lVar8 + 0x18,iVar15);
        }
        iVar15 = *(int *)(lVar8 + 0x18);
        lVar9 = *(longlong *)(lVar8 + 0x20);
        *(ulonglong *)(lVar9 + (longlong)iVar15 * 0xc) = CONCAT44((int)fVar24,(int)fVar23);
        *(uint *)(lVar9 + 8 + (longlong)iVar15 * 0xc) = local_68;
        *(int *)(lVar8 + 0x18) = *(int *)(lVar8 + 0x18) + 1;
        iVar21 = *(int *)(lVar8 + 0x18);
      }
      if (((*(uint *)(lVar7 + 0x20e4) & 0x400) != 0) && (*(int *)(lVar7 + 0x2120) == -1)) {
        iVar15 = param_1[3];
        local_68 = local_68 & 0xff000000;
        iVar16 = *(int *)(lVar8 + 0x1c);
        if (iVar21 == iVar16) {
          if (iVar16 == 0) {
            iVar16 = 8;
          }
          else {
            iVar16 = iVar16 / 2 + iVar16;
          }
          iVar12 = iVar21 + 1;
          if (iVar21 + 1 < iVar16) {
            iVar12 = iVar16;
          }
          FUN_1804d13f0(lVar8 + 0x18,iVar12);
        }
        iVar21 = *(int *)(lVar8 + 0x18);
        lVar9 = *(longlong *)(lVar8 + 0x20);
        *(ulonglong *)(lVar9 + (longlong)iVar21 * 0xc) = CONCAT44(iVar15,iVar15 + -1);
        *(uint *)(lVar9 + 8 + (longlong)iVar21 * 0xc) = local_68;
        *(int *)(lVar8 + 0x18) = *(int *)(lVar8 + 0x18) + 1;
      }
    }
    else {
      bVar14 = true;
      if (*(int *)(lVar7 + 0x20f8) != 2) goto LAB_1804b243c;
      local_78 = 0xff;
      uVar20 = 0xff;
LAB_1804b23e6:
      uVar22 = uVar20;
      uVar20 = 0;
      local_60 = 0;
      local_77 = 0;
      if (bVar14) goto LAB_1804b23f9;
    }
    fVar23 = *(float *)(lVar10 + 300);
    fVar24 = *(float *)(lVar10 + 0x414);
    fVar4 = *(float *)(lVar10 + 0x41c);
    if ((*(int *)(lVar7 + 0x203c) != 0) && (*(int *)(lVar10 + 0x408) == *(int *)(lVar7 + 0x203c))) {
      iVar15 = *(int *)(lVar8 + 0x1c);
      local_68 = CONCAT13(local_68._3_1_,1);
      if (*(int *)(lVar8 + 0x18) == iVar15) {
        iVar21 = *(int *)(lVar8 + 0x18) + 1;
        if (iVar15 == 0) {
          iVar15 = 8;
        }
        else {
          iVar15 = iVar15 / 2 + iVar15;
        }
        if (iVar21 < iVar15) {
          iVar21 = iVar15;
        }
        FUN_1804d13f0(lVar8 + 0x18,iVar21);
      }
      iVar15 = *(int *)(lVar8 + 0x18);
      lVar9 = *(longlong *)(lVar8 + 0x20);
      *(ulonglong *)(lVar9 + (longlong)iVar15 * 0xc) =
           CONCAT44((int)(fVar23 + fVar4),(int)(fVar23 + fVar24));
      *(uint *)(lVar9 + 8 + (longlong)iVar15 * 0xc) = local_68;
      *(int *)(lVar8 + 0x18) = *(int *)(lVar8 + 0x18) + 1;
    }
    fVar23 = *(float *)(lVar10 + 0x26c);
    fVar24 = *(float *)(lVar10 + 0x274);
    if ((*(char *)(lVar7 + 0x23f4) != '\0') && (*(longlong *)(lVar7 + 0x2418) == lVar10)) {
      fVar4 = *(float *)(lVar7 + 0xcd8);
      fVar23 = fVar23 - fVar4;
      fVar24 = fVar24 + fVar4;
      if (*(char *)(lVar7 + 0x2420) != '\0') {
        fVar2 = *(float *)(lVar7 + 0x2428);
        iVar15 = *(int *)(lVar8 + 0x1c);
        local_68 = CONCAT13(local_68._3_1_,1);
        fVar3 = *(float *)(lVar7 + 0x2430);
        if (*(int *)(lVar8 + 0x18) == iVar15) {
          iVar21 = *(int *)(lVar8 + 0x18) + 1;
          if (iVar15 == 0) {
            iVar15 = 8;
          }
          else {
            iVar15 = iVar15 / 2 + iVar15;
          }
          if (iVar21 < iVar15) {
            iVar21 = iVar15;
          }
          FUN_1804d13f0(lVar8 + 0x18,iVar21);
        }
        iVar15 = *(int *)(lVar8 + 0x18);
        lVar7 = *(longlong *)(lVar8 + 0x20);
        *(ulonglong *)(lVar7 + (longlong)iVar15 * 0xc) =
             CONCAT44((int)(fVar4 + fVar3),(int)(fVar2 - fVar4));
        *(uint *)(lVar7 + 8 + (longlong)iVar15 * 0xc) = local_68;
        *(int *)(lVar8 + 0x18) = *(int *)(lVar8 + 0x18) + 1;
      }
    }
    uVar13 = local_68;
    iVar15 = *(int *)(lVar8 + 0x1c);
    local_68._0_2_ = CONCAT11(local_78,1);
    local_68._3_1_ = SUB41(uVar13,3);
    local_68._0_3_ = CONCAT12(local_77,(undefined2)local_68);
    if (*(int *)(lVar8 + 0x18) == iVar15) {
      iVar21 = *(int *)(lVar8 + 0x18) + 1;
      if (iVar15 != 0) {
        iVar17 = iVar15 + iVar15 / 2;
      }
      if (iVar21 < iVar17) {
        iVar21 = iVar17;
      }
      FUN_1804d13f0(lVar8 + 0x18,iVar21);
    }
    iVar17 = *(int *)(lVar8 + 0x18);
    local_58 = CONCAT44((int)fVar24,(int)fVar23);
    local_50 = local_68;
  }
  else {
    iVar17 = *(int *)(lVar8 + 0x1c);
    local_58 = (ulonglong)(uint)param_1[3] << 0x20;
    local_50 = (uint)local_50._3_1_ << 0x18;
    if (*(int *)(lVar8 + 0x18) == iVar17) {
      iVar15 = *(int *)(lVar8 + 0x18) + 1;
      if (iVar17 == 0) {
        iVar17 = 8;
      }
      else {
        iVar17 = iVar17 + iVar17 / 2;
      }
      if (iVar15 < iVar17) {
        iVar15 = iVar17;
      }
      FUN_1804d13f0(lVar8 + 0x18,iVar15);
    }
    iVar17 = *(int *)(lVar8 + 0x18);
  }
  lVar7 = *(longlong *)(lVar8 + 0x20);
  *(longlong *)(lVar7 + (longlong)iVar17 * 0xc) = local_58;
  *(int *)(lVar7 + 8 + (longlong)iVar17 * 0xc) = local_50;
  *(int *)(lVar8 + 0x18) = *(int *)(lVar8 + 0x18) + 1;
  piVar19 = *(int **)(lVar8 + 0x20);
  piVar1 = piVar19 + (longlong)*(int *)(lVar8 + 0x18) * 3;
  for (; piVar19 != piVar1; piVar19 = piVar19 + 3) {
    if ((char)piVar19[2] != '\0') {
      fVar23 = *(float *)(lVar10 + 0x11c);
      fVar24 = *(float *)(lVar8 + 8);
      fVar4 = (float)param_1[4];
      iVar17 = (int)*(char *)((longlong)piVar19 + 9) +
               (int)((((float)*piVar19 - fVar23) - fVar24) / fVar4) + iVar18;
      if (iVar17 < iVar18) {
        iVar17 = iVar18;
      }
      else if (param_1[3] + -1 < iVar17) {
        iVar17 = param_1[3] + -1;
      }
      *piVar19 = iVar17;
      iVar21 = (int)((((float)piVar19[1] - fVar23) - fVar24) / fVar4 + 0.999999) +
               (int)*(char *)((longlong)piVar19 + 10) + iVar18;
      iVar15 = iVar17 + 1;
      if ((iVar17 + 1 <= iVar21) && (iVar15 = iVar21, param_1[3] < iVar21)) {
        iVar15 = param_1[3];
      }
      piVar19[1] = iVar15;
      *(undefined1 *)(piVar19 + 2) = 0;
    }
  }
  FUN_1804b1b80(lVar8 + 0x18,*(undefined4 *)(lVar8 + 0xc));
LAB_1804b2886:
  do {
    if (*(int *)(lVar8 + 0x18) <= *(int *)(lVar8 + 0xc)) {
      if (param_1[3] < 0x7fffffff) {
        FUN_1804b1f30(param_1);
        return 0;
      }
      return 0;
    }
    iVar17 = *(int *)(*(longlong *)(lVar8 + 0x20) + (longlong)*(int *)(lVar8 + 0xc) * 0xc);
    iVar15 = iVar18;
    if (iVar18 <= iVar17) {
      iVar15 = iVar17;
    }
    *param_1 = iVar15;
    iVar17 = param_1[3];
    if (*(int *)(*(longlong *)(lVar8 + 0x20) + 4 + (longlong)*(int *)(lVar8 + 0xc) * 0xc) <
        param_1[3]) {
      iVar17 = *(int *)(*(longlong *)(lVar8 + 0x20) + 4 + (longlong)*(int *)(lVar8 + 0xc) * 0xc);
    }
    param_1[1] = iVar17;
    *(int *)(lVar8 + 0xc) = *(int *)(lVar8 + 0xc) + 1;
  } while (param_1[1] <= *param_1);
  if (iVar18 < *param_1) {
    FUN_1804b1f30(param_1);
  }
  return 1;
}



