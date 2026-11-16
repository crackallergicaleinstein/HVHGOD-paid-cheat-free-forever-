// FUN_1804279e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804279e0 */

void FUN_1804279e0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  longlong lVar5;
  float *pfVar6;
  int iVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [64];
  undefined1 auVar13 [64];
  float fVar14;
  undefined1 auVar15 [64];
  float fVar16;
  undefined1 auVar17 [64];
  undefined1 auVar18 [16];
  undefined1 auVar19 [64];
  undefined1 auVar20 [64];
  undefined8 local_res10;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  
  lVar8 = param_1;
  FUN_180427810(param_1,&local_a8);
  fVar10 = *(float *)(param_1 + 40000);
  auVar13 = ZEXT864(0);
  if (fVar10 == 0.0) {
    fVar10 = **(float **)(param_1 + 0x9c20);
    if (fVar10 <= 0.0) {
      *(float *)(param_1 + 0x9c38) = (float)local_a8;
      fVar10 = (float)uStack_a0 - (float)local_a8;
    }
    *(float *)(param_1 + 40000) = fVar10;
  }
  fVar11 = *(float *)(param_1 + 0x9c44);
  if (fVar11 == 0.0) {
    fVar11 = *(float *)(*(longlong *)(param_1 + 0x9c20) + 4);
    if (fVar11 <= 0.0) {
      *(float *)(param_1 + 0x9c3c) = local_a8._4_4_;
      fVar11 = uStack_a0._4_4_ - local_a8._4_4_;
    }
    *(float *)(param_1 + 0x9c44) = fVar11;
  }
  if (**(float **)(param_1 + 0x9c20) == 0.0) {
    **(float **)(param_1 + 0x9c20) = fVar10;
    fVar11 = *(float *)(param_1 + 0x9c44);
  }
  pfVar6 = *(float **)(param_1 + 0x9c20);
  if (pfVar6[1] == 0.0) {
    pfVar6[1] = fVar11;
    fVar11 = *(float *)(param_1 + 0x9c44);
    pfVar6 = *(float **)(param_1 + 0x9c20);
  }
  auVar17 = ZEXT1664(CONCAT412(0x80000000,
                               CONCAT48(0x80000000,
                                        CONCAT44(0x80000000,*(uint *)(param_1 + 0x9c38) ^ 0x80000000
                                                ))));
  fVar10 = *(float *)(param_1 + 40000);
  auVar15 = ZEXT1664(CONCAT412(0x80000000,
                               CONCAT48(0x80000000,
                                        CONCAT44(0x80000000,*(uint *)(param_1 + 0x9c3c) ^ 0x80000000
                                                ))));
  if (fVar10 <= 0.0) {
    auVar18 = ZEXT816(0);
  }
  else {
    auVar18 = ZEXT416((uint)(*pfVar6 / fVar10));
  }
  auVar20 = ZEXT1664(auVar18);
  if (fVar11 <= 0.0) {
    auVar18 = ZEXT816(0);
  }
  else {
    auVar18 = ZEXT416((uint)(pfVar6[1] / fVar11));
  }
  auVar19 = ZEXT1664(auVar18);
  auVar12 = ZEXT464(0x3f800000);
  uVar4 = FUN_180422e60(&DAT_18081e998);
  local_res10 = CONCAT44(uVar4,0x3f800000);
  fVar9 = (float)FUN_180421b00(lVar8,local_res10,0,auVar12._0_8_);
  fVar14 = auVar13._0_4_;
  fVar9 = auVar12._0_4_ / fVar9;
  if (*(int *)(lVar8 + 0x9c50) == 1) {
    auVar18 = vminss_avx(auVar20._0_16_,auVar19._0_16_);
  }
  else {
    if (*(int *)(lVar8 + 0x9c50) != 2) goto LAB_180427c1b;
    auVar18 = vmaxss_avx(auVar20._0_16_,auVar19._0_16_);
  }
  auVar20 = ZEXT1664(auVar18);
  auVar19 = ZEXT1664(auVar18);
  fVar16 = auVar18._0_4_;
  if (*(int *)(lVar8 + 0x9c48) == 0) {
    fVar10 = 0.0;
  }
  else {
    fVar10 = *pfVar6 - fVar10 * fVar16;
    if (*(int *)(lVar8 + 0x9c48) != 2) {
      fVar10 = fVar10 * 0.5;
    }
  }
  auVar17 = ZEXT464((uint)(auVar17._0_4_ + fVar10 / fVar16));
  if ((*(int *)(lVar8 + 0x9c4c) != 0) &&
     (fVar14 = pfVar6[1] - fVar11 * fVar16, *(int *)(lVar8 + 0x9c4c) != 2)) {
    fVar14 = fVar14 * 0.5;
  }
  auVar15 = ZEXT464((uint)(auVar15._0_4_ + fVar14 / fVar16));
LAB_180427c1b:
  fVar10 = auVar20._0_4_ * fVar9;
  auVar13 = ZEXT464((uint)fVar10);
  fVar9 = auVar19._0_4_ * fVar9;
  fVar10 = (fVar9 + fVar10) * 0.5;
  for (lVar8 = *(longlong *)(pfVar6 + 2); lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x148)) {
    fVar16 = auVar17._0_4_;
    plVar1 = *(longlong **)(lVar8 + 0x140);
    fVar11 = auVar13._0_4_;
    fVar14 = auVar15._0_4_;
    *(float *)(lVar8 + 0x98) = (fVar16 + *(float *)(lVar8 + 0x98)) * fVar11;
    *(float *)(lVar8 + 0x9c) = (fVar14 + *(float *)(lVar8 + 0x9c)) * fVar9;
    *(float *)(lVar8 + 0xa0) = (fVar16 + *(float *)(lVar8 + 0xa0)) * fVar11;
    *(float *)(lVar8 + 0xa4) = (fVar14 + *(float *)(lVar8 + 0xa4)) * fVar9;
    for (; plVar1 != (longlong *)0x0; plVar1 = (longlong *)plVar1[4]) {
      *(float *)(plVar1 + 2) = (fVar16 + *(float *)(plVar1 + 2)) * fVar11;
      *(float *)((longlong)plVar1 + 0x14) = (fVar14 + *(float *)((longlong)plVar1 + 0x14)) * fVar9;
      *(float *)(plVar1 + 3) = (fVar16 + *(float *)(plVar1 + 3)) * fVar11;
      iVar7 = 0;
      *(float *)((longlong)plVar1 + 0x1c) = (fVar14 + *(float *)((longlong)plVar1 + 0x1c)) * fVar9;
      if (0 < (int)plVar1[1]) {
        lVar5 = 0;
        do {
          lVar2 = *plVar1;
          lVar5 = lVar5 + 8;
          iVar7 = iVar7 + 1;
          *(float *)(lVar2 + -8 + lVar5) = (fVar16 + *(float *)(lVar2 + -8 + lVar5)) * fVar11;
          *(float *)(lVar2 + -4 + lVar5) = (fVar14 + *(float *)(lVar2 + -4 + lVar5)) * fVar9;
        } while (iVar7 < (int)plVar1[1]);
      }
    }
    if ((*(char *)(lVar8 + 0x40) == '\x02') || (*(char *)(lVar8 + 0x40) == '\x03')) {
      FUN_1804278a0(*(undefined8 *)(lVar8 + 0x48),auVar17._0_8_,auVar15._0_8_,auVar13._0_8_,fVar9);
      puVar3 = *(undefined8 **)(lVar8 + 0x48);
      local_a8 = *puVar3;
      uStack_a0 = puVar3[1];
      local_98 = puVar3[2];
      FUN_1804211e0();
    }
    if ((*(char *)(lVar8 + 0x50) == '\x02') || (*(char *)(lVar8 + 0x50) == '\x03')) {
      FUN_1804278a0(*(undefined8 *)(lVar8 + 0x58),auVar17._0_8_,auVar15._0_8_,auVar13._0_8_,fVar9);
      puVar3 = *(undefined8 **)(lVar8 + 0x58);
      local_a8 = *puVar3;
      uStack_a0 = puVar3[1];
      local_98 = puVar3[2];
      FUN_1804211e0();
    }
    iVar7 = 0;
    *(float *)(lVar8 + 100) = fVar10 * *(float *)(lVar8 + 100);
    *(float *)(lVar8 + 0x68) = fVar10 * *(float *)(lVar8 + 0x68);
    if ('\0' < *(char *)(lVar8 + 0x8c)) {
      pfVar6 = (float *)(lVar8 + 0x6c);
      do {
        *pfVar6 = fVar10 * *pfVar6;
        pfVar6 = pfVar6 + 1;
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(char *)(lVar8 + 0x8c));
    }
  }
  return;
}



