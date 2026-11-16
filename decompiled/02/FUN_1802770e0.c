// FUN_1802770e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802770e0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

float * FUN_1802770e0(undefined8 param_1,float *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  ULONGLONG UVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  code *pcVar14;
  int iVar15;
  ulonglong uVar16;
  int iVar17;
  float fVar18;
  undefined1 auVar19 [64];
  float fVar20;
  undefined1 auVar21 [64];
  float fVar22;
  undefined1 auVar23 [64];
  float fVar24;
  int local_f8;
  float local_f4;
  undefined8 local_f0;
  char *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  longlong local_b8;
  char *local_a8;
  longlong local_a0;
  
  lVar10 = DAT_180cc9338;
  local_b8 = DAT_180cc9338;
  local_f8 = *(int *)(DAT_180cc9338 + 0x368);
  iVar1 = *(int *)(DAT_180cc9338 + 0x36c);
  local_f0 = param_3;
  if (iVar1 < 1) {
    param_2[0] = 0.0;
    param_2[1] = 0.0;
    param_2[2] = 0.0;
    lVar10 = DAT_180cc9338;
    if (DAT_180cc9338 == 0) {
      return param_2;
    }
    lVar9 = FUN_18017ea70();
    *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
    FUN_18027b2b0(&local_d8,lVar10);
LAB_1802771ae:
    lVar10 = FUN_18017ea70();
    if (*(int *)(lVar10 + 4) != 0) {
      *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
    }
    return param_2;
  }
  if (iVar1 < 2) {
    param_2[0] = 0.0;
    param_2[1] = 0.0;
    param_2[2] = 0.0;
    lVar10 = DAT_180cc9338;
    if (DAT_180cc9338 == 0) {
      return param_2;
    }
    lVar9 = FUN_18017ea70();
    *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
    FUN_18027b2b0(&local_d8,lVar10);
    goto LAB_1802771ae;
  }
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar6 = DAT_1808f0398;
  lVar9 = DAT_1808da460;
  auVar23 = ZEXT864(0);
  if ((DAT_1808f0398 == DAT_1808da460) && (pcVar14 = (code *)DAT_180c64cb0, DAT_180c64cb0 != 0)) {
LAB_180277335:
    fVar18 = (float)(*pcVar14)(local_f0);
  }
  else {
    UVar11 = GetTickCount64();
    if ((lVar6 != lVar9) || (DAT_180c64cb8 <= UVar11)) {
      local_c8 = &DAT_1808f03a0;
      iVar7 = FUN_1805f68d0(&DAT_1808f03a0);
      if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808f03ec == 0x7fffffff) {
        DAT_1808f03ec = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      uVar16 = 1000;
      if (DAT_1808f0398 == lVar9) {
        if ((DAT_180c64cb0 == 0) && (DAT_180c64cb8 <= UVar11)) goto LAB_180277295;
      }
      else {
        DAT_1808f0390 = 1000;
LAB_180277295:
        lVar10 = -1;
        do {
          local_a0 = lVar10 + 1;
          lVar6 = lVar10 + 1;
          lVar10 = local_a0;
        } while ("client.dll:>E8????????418B9668030000"[lVar6] != '\0');
        local_a8 = "client.dll:>E8????????418B9668030000";
        local_d8 = "patterns::get_interp_amount";
        local_d0 = 0x1b;
        DAT_180c64cb0 = FUN_1800e5d20(&local_d8);
        DAT_1808f0398 = lVar9;
        DAT_180c64cb8 = 0xffffffffffffffff;
        if (DAT_180c64cb0 == 0) {
          DAT_180c64cb8 = DAT_1808f0390 + UVar11;
          uVar16 = 60000;
          if (DAT_1808f0390 < 60000) {
            uVar16 = DAT_1808f0390 * 2;
          }
        }
        lVar10 = local_b8;
        DAT_1808f0390 = uVar16;
      }
      pcVar14 = (code *)DAT_180c64cb0;
      FUN_1805f68fc(&DAT_1808f03a0);
      if (pcVar14 != (code *)0x0) goto LAB_180277335;
    }
    fVar18 = auVar23._0_4_;
  }
  iVar7 = local_f8;
  uVar8 = local_f8 + -1 + iVar1 & 0x8000001f;
  if ((int)uVar8 < 0) {
    uVar8 = (uVar8 - 1 | 0xffffffe0) + 1;
  }
  iVar2 = *(int *)(lVar10 + 0xe8 + (longlong)(int)uVar8 * 0x14);
  fVar22 = *(float *)(lVar10 + 0xec + (longlong)(int)uVar8 * 0x14);
  uVar12 = FUN_18026b840(fVar18 * 64.0);
  local_f0._4_4_ = (float)((ulonglong)uVar12 >> 0x20);
  local_f4 = fVar22 - local_f0._4_4_;
  local_f8 = iVar2 - (int)uVar12;
  fVar18 = 1.0;
  local_f0 = uVar12;
  if (auVar23._0_4_ <= local_f4) {
LAB_1802773cf:
    auVar19 = ZEXT464((uint)local_f4);
    if (local_f4 < 1.0) goto LAB_1802773ea;
  }
  else {
    local_f4 = local_f4 + 1.0;
    if (1.0 <= local_f4) {
      auVar19 = ZEXT1664(auVar23._0_16_);
      goto LAB_1802773ea;
    }
    local_f8 = local_f8 + -1;
    if (auVar23._0_4_ <= local_f4) goto LAB_1802773cf;
  }
  FUN_18026b710(&local_f8);
  auVar19 = ZEXT464((uint)local_f4);
LAB_1802773ea:
  iVar2 = local_f8;
  fVar22 = auVar19._0_4_;
  iVar17 = 0;
  if (0 < iVar1 + -1) {
    do {
      uVar16 = (ulonglong)(iVar17 + iVar7 & 0x1f);
      uVar13 = (ulonglong)(iVar17 + iVar7 + 1U & 0x1f);
      iVar3 = *(int *)(lVar10 + 0xe8 + uVar16 * 0x14);
      fVar24 = *(float *)(lVar10 + 0xec + uVar16 * 0x14);
      iVar15 = *(int *)(lVar10 + 0xe8 + uVar13 * 0x14);
      fVar20 = *(float *)(lVar10 + 0xec + uVar13 * 0x14);
      if ((local_f8 <= iVar3) && ((iVar3 != local_f8 || (fVar22 < fVar24)))) break;
      if ((local_f8 < iVar15) || ((iVar15 == local_f8 && (fVar22 <= fVar20)))) {
        local_c8 = *(undefined **)(lVar10 + 0xf0 + uVar16 * 0x14);
        fVar4 = *(float *)(lVar10 + 0xf8 + uVar16 * 0x14);
        local_f0 = *(undefined8 *)(lVar10 + 0xf0 + uVar13 * 0x14);
        fVar5 = *(float *)(lVar10 + 0xf8 + uVar13 * 0x14);
        local_f4 = fVar20 - fVar24;
        iVar15 = iVar15 - iVar3;
        local_f8 = iVar15;
        if (auVar23._0_4_ <= local_f4) {
LAB_18027755a:
          auVar21 = ZEXT464((uint)local_f4);
          iVar15 = local_f8;
          if (fVar18 <= local_f4) {
LAB_180277561:
            FUN_18026b710(&local_f8);
            fVar22 = auVar19._0_4_;
            auVar21 = ZEXT464((uint)local_f4);
            iVar15 = local_f8;
          }
        }
        else {
          local_f4 = local_f4 + fVar18;
          if (local_f4 < fVar18) {
            local_f8 = iVar15 + -1;
            if (auVar23._0_4_ <= local_f4) goto LAB_18027755a;
            goto LAB_180277561;
          }
          auVar21 = ZEXT1664(auVar23._0_16_);
        }
        fVar20 = auVar21._0_4_;
        local_f4 = fVar22 - fVar24;
        local_f8 = iVar2 - iVar3;
        fVar22 = auVar23._0_4_;
        if (local_f4 < fVar22) {
          local_f4 = local_f4 + fVar18;
          fVar24 = fVar22;
          if (fVar18 <= local_f4) goto LAB_1802775d1;
          local_f8 = local_f8 + -1;
        }
        if ((local_f4 < fVar22) || (fVar24 = local_f4, fVar18 <= local_f4)) {
          FUN_18026b710(&local_f8);
          fVar22 = auVar23._0_4_;
          fVar20 = auVar21._0_4_;
          fVar24 = local_f4;
        }
LAB_1802775d1:
        if (fVar22 < (float)iVar15 + fVar20) {
          fVar22 = ((float)local_f8 + fVar24) / ((float)iVar15 + fVar20);
        }
        *param_2 = ((float)local_f0 - (float)local_c8) * fVar22 + (float)local_c8;
        param_2[1] = (local_f0._4_4_ - local_c8._4_4_) * fVar22 + local_c8._4_4_;
        param_2[2] = (fVar5 - fVar4) * fVar22 + fVar4;
        return param_2;
      }
      iVar17 = iVar17 + 1;
    } while (iVar17 < iVar1 + -1);
  }
  param_2[0] = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  lVar10 = DAT_180cc9338;
  if (DAT_180cc9338 == 0) {
    return param_2;
  }
  lVar9 = FUN_18017ea70();
  *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
  FUN_18027b2b0(&local_d8,lVar10);
  lVar10 = FUN_18017ea70();
  if (*(int *)(lVar10 + 4) == 0) {
    return param_2;
  }
  *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
  return param_2;
}



