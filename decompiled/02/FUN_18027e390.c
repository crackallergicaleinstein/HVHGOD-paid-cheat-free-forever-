// FUN_18027e390 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18027e390 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18027e390(int *param_1,int *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  int iVar8;
  float fVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 in_XMM2 [16];
  undefined1 in_ZMM6 [64];
  undefined1 auVar19 [64];
  undefined1 auVar20 [16];
  undefined1 auVar21 [64];
  float fVar22;
  float fVar23;
  undefined1 auVar24 [64];
  undefined1 in_ZMM11 [64];
  undefined1 auVar25 [64];
  float fVar26;
  undefined1 auStack_138 [32];
  float local_118 [3];
  float local_10c;
  float local_108;
  int local_104;
  int local_100;
  float local_fc;
  float local_f8 [2];
  int *local_f0;
  int *local_e0;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  undefined1 local_c8 [16];
  undefined8 local_b8;
  ulonglong local_b0;
  undefined1 local_98 [16];
  undefined1 local_48 [16];
  
  local_48 = in_ZMM6._0_16_;
  local_98 = in_ZMM11._0_16_;
  local_b0 = DAT_1808d5f00 ^ (ulonglong)auStack_138;
  auVar24 = ZEXT1664(in_XMM2);
  local_d8 = *param_2;
  if (0 < local_d8) {
    local_d4 = param_2[1];
    if ((0 < local_d4) &&
       (*(longlong *)(param_2 + 6) - *(longlong *)(param_2 + 4) ==
        (longlong)local_d8 * (longlong)local_d4)) {
      auVar20 = vroundss_avx(ZEXT816(0),in_XMM2,2);
      iVar11 = (int)auVar20._0_4_ + 1;
      local_d8 = local_d8 + iVar11 * 2;
      local_d4 = iVar11 * 2 + local_d4;
      local_d0 = param_2[2] - iVar11;
      local_cc = param_2[3] - iVar11;
      local_c8 = (undefined1  [16])0x0;
      local_b8 = 0;
      local_104 = iVar11;
      local_f0 = param_1;
      local_e0 = param_1;
      FUN_1801acf20(local_c8,(longlong)local_d4 * (longlong)local_d8);
      local_100 = 0;
      iVar8 = local_d4;
      if (0 < local_d4) {
        auVar21 = ZEXT864(0);
        fVar26 = 255.0;
        fVar22 = 1.0;
        iVar10 = local_d8;
        do {
          iVar12 = local_100;
          if (0 < iVar10) {
            iVar8 = local_100 - iVar11;
            local_f0 = (int *)CONCAT44(local_f0._4_4_,iVar8);
            fVar7 = (float)-iVar11;
            local_108 = fVar7;
            do {
              if (((((int)fVar7 < 0) || (iVar8 < 0)) || (*param_2 <= (int)fVar7)) ||
                 (param_2[1] <= iVar8)) {
                auVar20 = auVar21._0_16_;
              }
              else {
                auVar20._0_4_ =
                     (float)*(byte *)((longlong)(*param_2 * iVar8 + (int)fVar7) +
                                     *(longlong *)(param_2 + 4));
                auVar20._4_12_ = SUB1612(ZEXT816(0),4);
              }
              auVar25 = ZEXT1664(auVar20);
              fVar23 = auVar20._0_4_;
              auVar19 = ZEXT1664(auVar20);
              if (fVar23 < fVar26) {
                local_10c = local_108;
                if ((int)local_108 <= iVar11) {
                  iVar8 = (int)local_108 + iVar8;
                  do {
                    iVar10 = (int)local_10c * (int)local_10c;
                    fVar23 = auVar24._0_4_ + fVar22;
                    fVar9 = local_108;
                    if (iVar11 * 2 < 3) {
LAB_18027e7f2:
                      local_118[2] = fVar22;
                      local_118[1] = (float)auVar21._0_4_;
                      do {
                        auVar20 = auVar19._0_16_;
                        auVar18._0_4_ = (float)((int)fVar9 * (int)fVar9 + iVar10);
                        auVar18._4_12_ = SUB1612(ZEXT816(0),4);
                        if (auVar18._0_4_ < 0.0) {
                          local_118[0] = (float)FUN_18061e150(auVar18._0_8_);
                          auVar20 = auVar19._0_16_;
                        }
                        else {
                          local_118[0] = SQRT(auVar18._0_4_);
                        }
                        local_118[0] = fVar23 - local_118[0];
                        fVar13 = auVar21._0_4_;
                        pfVar5 = local_118 + 1;
                        if (fVar13 <= local_118[0]) {
                          pfVar5 = local_118;
                        }
                        pfVar6 = local_118 + 2;
                        if (local_118[0] <= fVar22) {
                          pfVar6 = pfVar5;
                        }
                        if (((-1 < (int)fVar7 + (int)fVar9) && (-1 < iVar8)) &&
                           (((int)fVar7 + (int)fVar9 < *param_2 && (iVar8 < param_2[1])))) {
                          fVar13 = (float)*(byte *)((longlong)
                                                    (*param_2 * iVar8 + (int)fVar7 + (int)fVar9) +
                                                   *(longlong *)(param_2 + 4));
                        }
                        auVar20 = vmaxss_avx(ZEXT416((uint)(fVar13 * *pfVar6)),auVar20);
                        auVar19 = ZEXT1664(auVar20);
                        fVar9 = (float)((int)fVar9 + 1);
                      } while ((int)fVar9 <= iVar11);
                    }
                    else {
                      local_118[2] = fVar22;
                      local_118[1] = (float)auVar21._0_4_;
                      iVar12 = (int)local_108 + 2 + (int)fVar7;
                      iVar11 = -(int)fVar7;
                      do {
                        auVar20 = auVar19._0_16_;
                        auVar14._0_4_ = (float)((int)fVar9 * (int)fVar9 + iVar10);
                        auVar14._4_12_ = SUB1612(ZEXT816(0),4);
                        if (auVar14._0_4_ < 0.0) {
                          local_118[0] = (float)FUN_18061e150(auVar14._0_8_);
                          auVar20 = auVar19._0_16_;
                        }
                        else {
                          local_118[0] = SQRT(auVar14._0_4_);
                        }
                        local_118[0] = fVar23 - local_118[0];
                        fVar13 = auVar21._0_4_;
                        pfVar5 = local_118 + 1;
                        if (fVar13 <= local_118[0]) {
                          pfVar5 = local_118;
                        }
                        pfVar6 = local_118 + 2;
                        if (local_118[0] <= fVar22) {
                          pfVar6 = pfVar5;
                        }
                        if (((-1 < iVar12 + -2) && (-1 < iVar8)) &&
                           ((iVar12 + -2 < *param_2 && (iVar8 < param_2[1])))) {
                          fVar13 = (float)*(byte *)((longlong)
                                                    (*param_2 * iVar8 + (int)fVar7 + (int)fVar9) +
                                                   *(longlong *)(param_2 + 4));
                        }
                        auVar20 = vmaxss_avx(ZEXT416((uint)(fVar13 * *pfVar6)),auVar20);
                        auVar19 = ZEXT1664(auVar20);
                        iVar4 = iVar11 + -1 + iVar12;
                        auVar15._0_4_ = (float)(iVar4 * iVar4 + iVar10);
                        auVar15._4_12_ = SUB1612(ZEXT816(0),4);
                        if (auVar15._0_4_ < 0.0) {
                          local_118[0] = (float)FUN_18061e150(auVar15._0_8_);
                          auVar20 = auVar19._0_16_;
                        }
                        else {
                          local_118[0] = SQRT(auVar15._0_4_);
                        }
                        local_118[0] = fVar23 - local_118[0];
                        fVar13 = auVar21._0_4_;
                        pfVar5 = local_118 + 1;
                        if (fVar13 <= local_118[0]) {
                          pfVar5 = local_118;
                        }
                        pfVar6 = local_118 + 2;
                        if (local_118[0] <= fVar22) {
                          pfVar6 = pfVar5;
                        }
                        if (((-1 < iVar12 + -1) && (-1 < iVar8)) &&
                           ((iVar12 + -1 < *param_2 && (iVar8 < param_2[1])))) {
                          fVar13 = (float)*(byte *)((longlong)
                                                    (*param_2 * iVar8 + (int)fVar7 + (int)fVar9) + 1
                                                   + *(longlong *)(param_2 + 4));
                        }
                        auVar20 = vmaxss_avx(ZEXT416((uint)(fVar13 * *pfVar6)),auVar20);
                        auVar19 = ZEXT1664(auVar20);
                        auVar16._0_4_ = (float)((iVar12 + iVar11) * (iVar12 + iVar11) + iVar10);
                        auVar16._4_12_ = SUB1612(ZEXT816(0),4);
                        if (auVar16._0_4_ < 0.0) {
                          local_118[0] = (float)FUN_18061e150(auVar16._0_8_);
                          auVar20 = auVar19._0_16_;
                        }
                        else {
                          local_118[0] = SQRT(auVar16._0_4_);
                        }
                        local_118[0] = fVar23 - local_118[0];
                        fVar13 = auVar21._0_4_;
                        pfVar5 = local_118 + 1;
                        if (fVar13 <= local_118[0]) {
                          pfVar5 = local_118;
                        }
                        pfVar6 = local_118 + 2;
                        if (local_118[0] <= fVar22) {
                          pfVar6 = pfVar5;
                        }
                        if ((((-1 < iVar12) && (-1 < iVar8)) && (iVar12 < *param_2)) &&
                           (iVar8 < param_2[1])) {
                          fVar13 = (float)*(byte *)((longlong)
                                                    (*param_2 * iVar8 + (int)fVar7 + (int)fVar9) + 2
                                                   + *(longlong *)(param_2 + 4));
                        }
                        auVar20 = vmaxss_avx(ZEXT416((uint)(fVar13 * *pfVar6)),auVar20);
                        auVar19 = ZEXT1664(auVar20);
                        iVar4 = iVar11 + 1 + iVar12;
                        auVar17._0_4_ = (float)(iVar4 * iVar4 + iVar10);
                        auVar17._4_12_ = SUB1612(ZEXT816(0),4);
                        if (auVar17._0_4_ < 0.0) {
                          local_118[0] = (float)FUN_18061e150(auVar17._0_8_);
                          auVar20 = auVar19._0_16_;
                        }
                        else {
                          local_118[0] = SQRT(auVar17._0_4_);
                        }
                        local_118[0] = fVar23 - local_118[0];
                        fVar13 = auVar21._0_4_;
                        pfVar5 = local_118 + 1;
                        if (fVar13 <= local_118[0]) {
                          pfVar5 = local_118;
                        }
                        pfVar6 = local_118 + 2;
                        if (local_118[0] <= fVar22) {
                          pfVar6 = pfVar5;
                        }
                        if (((-1 < iVar12 + 1) && (-1 < iVar8)) &&
                           ((iVar12 + 1 < *param_2 && (iVar8 < param_2[1])))) {
                          fVar13 = (float)*(byte *)((longlong)
                                                    (*param_2 * iVar8 + (int)fVar7 + (int)fVar9) + 3
                                                   + *(longlong *)(param_2 + 4));
                        }
                        auVar20 = vmaxss_avx(ZEXT416((uint)(fVar13 * *pfVar6)),auVar20);
                        auVar19 = ZEXT1664(auVar20);
                        fVar9 = (float)((int)fVar9 + 4);
                        iVar12 = iVar12 + 4;
                      } while ((int)fVar9 <= local_104 + -3);
                      iVar11 = local_104;
                      if ((int)fVar9 <= local_104) goto LAB_18027e7f2;
                    }
                    fVar23 = auVar25._0_4_;
                    local_10c = (float)((int)local_10c + 1);
                    iVar8 = iVar8 + 1;
                  } while ((int)local_10c <= iVar11);
                  iVar12 = local_100;
                }
                local_f8[0] = fVar26;
                local_10c = auVar21._0_4_;
                local_fc = auVar19._0_4_ - fVar23;
                pfVar5 = &local_10c;
                if (auVar21._0_4_ <= local_fc) {
                  pfVar5 = &local_fc;
                }
                pfVar6 = local_f8;
                if (local_fc <= fVar26) {
                  pfVar6 = pfVar5;
                }
                *(char *)((longlong)(iVar12 * local_d8 + (int)fVar7 + iVar11) + local_c8._0_8_) =
                     (char)(int)*pfVar6;
                iVar8 = (int)local_f0;
              }
              fVar7 = (float)((int)fVar7 + 1);
            } while ((int)fVar7 + iVar11 < local_d8);
            iVar8 = local_d4;
            iVar10 = local_d8;
          }
          local_100 = iVar12 + 1;
        } while (iVar12 + 1 < iVar8);
        param_1 = local_e0;
      }
      uVar3 = local_b8;
      *param_1 = local_d8;
      param_1[1] = iVar8;
      param_1[2] = local_d0;
      param_1[3] = local_cc;
      local_b8 = 0;
      uVar2 = local_c8._8_8_;
      uVar1 = local_c8._0_8_;
      local_c8 = ZEXT816(0);
      *(undefined8 *)(param_1 + 4) = uVar1;
      *(undefined8 *)(param_1 + 6) = uVar2;
      *(undefined8 *)(param_1 + 8) = uVar3;
      FUN_180113710(local_c8);
    }
  }
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
}



