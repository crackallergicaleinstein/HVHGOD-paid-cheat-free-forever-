// FUN_1802647c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802647c0 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1802647c0(longlong *param_1,undefined8 *param_2)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  short sVar9;
  undefined8 *puVar10;
  longlong lVar11;
  ulonglong *puVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  undefined1 extraout_var [56];
  float fVar18;
  undefined1 auVar19 [64];
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [64];
  float fVar26;
  undefined1 auVar27 [64];
  float fVar28;
  undefined1 auStackY_1188 [32];
  char *local_1148;
  ulonglong uStack_1140;
  float local_1138;
  float local_1134;
  float local_1130;
  float local_1128;
  float local_1124;
  undefined4 local_1120;
  undefined1 *local_1118;
  ulonglong local_1110;
  undefined1 local_1108 [4096];
  undefined1 local_108 [16];
  undefined8 *local_f8;
  undefined1 local_f0 [16];
  longlong local_e0;
  ulonglong local_d8;
  
  local_d8 = DAT_1808d5f00 ^ (ulonglong)auStackY_1188;
  uVar15 = (param_1[1] - *param_1) / 0x6b60;
  if (uVar15 < 2) {
  }
  local_108 = (undefined1  [16])0x0;
  local_f8 = (undefined8 *)0x0;
  if (0xfffffffffffffff < uVar15) {
                    /* WARNING: Subroutine does not return */
    FUN_1801baf80();
  }
  puVar10 = (undefined8 *)FUN_18015bca0(uVar15 * 0x10);
  FUN_18063aed0(puVar10);
  if (local_108._0_8_ != 0) {
    if ((0xfff < ((longlong)local_f8 - local_108._0_8_ & 0xfffffffffffffff0U)) &&
       (0x1f < (local_108._0_8_ - *(longlong *)(local_108._0_8_ + -8)) - 8U)) goto LAB_180264fb1;
    FUN_1804547d0();
  }
  local_108._8_8_ = puVar10;
  local_108._0_8_ = puVar10;
  local_f8 = puVar10 + uVar15 * 2;
  uVar15 = 0;
  lVar14 = *param_1;
  lVar13 = param_1[1] - lVar14 >> 0x3f;
  puVar17 = puVar10;
  if ((param_1[1] - lVar14) / 0x6b60 + lVar13 != lVar13) {
    lVar13 = 0;
    fVar26 = 0.0;
    auVar25 = ZEXT464(0x7f7fffff);
    fVar28 = 48.0;
    fVar21 = 180.0;
    fVar23 = -360.0;
    fVar22 = -180.0;
    fVar24 = 360.0;
    auVar27 = ZEXT464(0x7fc00000);
    do {
      puVar17 = local_f8;
      if ((*(int *)(lVar14 + 0x6b58 + lVar13) < 1) || (*(char *)(lVar14 + 0x23d0 + lVar13) == '\0'))
      {
LAB_180264afe:
        fVar20 = auVar25._0_4_;
      }
      else {
        pfVar2 = (float *)param_2[2];
        fVar20 = *(float *)(lVar14 + 0x2390 + lVar13);
        fVar18 = *(float *)(lVar14 + 0x238c + lVar13);
        fVar1 = *(float *)(lVar14 + 0x2388 + lVar13);
        fVar3 = fVar1 - *pfVar2;
        fVar4 = fVar18 - pfVar2[1];
        fVar5 = fVar20 - pfVar2[2];
        auVar19 = ZEXT464((uint)(fVar4 * fVar4 + fVar3 * fVar3 + fVar5 * fVar5));
        if (*(int *)(param_2 + 3) != 0) {
          local_1138 = fVar1 + fVar26;
          local_1134 = fVar18 + fVar26;
          local_1130 = fVar20 + fVar28;
          FUN_1804511f0(&local_1128,param_2[1],&local_1138);
          fVar20 = local_1128;
          sVar9 = thunk_FUN_180624430(local_1128);
          if (sVar9 < 1) {
            fVar18 = local_1124;
            sVar9 = thunk_FUN_180624430(local_1124);
            if ((sVar9 < 1) && (sVar9 = thunk_FUN_180624430(local_1120), sVar9 < 1)) {
              fVar20 = fVar20 - *(float *)*param_2;
              for (fVar18 = fVar18 - ((float *)*param_2)[1]; fVar21 < fVar18;
                  fVar18 = fVar18 + fVar23) {
              }
              for (; fVar18 < fVar22; fVar18 = fVar18 + fVar24) {
              }
              fVar20 = fVar18 * fVar18 + fVar20 * fVar20;
              if (fVar20 < 0.0) {
                auVar19._0_8_ = FUN_18061e150();
                auVar19._8_56_ = extraout_var;
                auVar19 = ZEXT1664(auVar19._0_16_);
              }
              else {
                auVar19 = ZEXT464((uint)SQRT(fVar20));
              }
              goto LAB_180264ae9;
            }
          }
          auVar19 = ZEXT1664(auVar27._0_16_);
        }
LAB_180264ae9:
        sVar9 = thunk_FUN_180624430(auVar19._0_8_);
        fVar20 = auVar19._0_4_;
        if ((0 < sVar9) || (fVar20 < fVar26)) goto LAB_180264afe;
      }
      local_1148 = (char *)CONCAT44(local_1148._4_4_,fVar20);
      uStack_1140 = uVar15;
      if (puVar10 == puVar17) {
        FUN_180269e30(local_108,puVar10,&local_1148);
        puVar10 = (undefined8 *)local_108._8_8_;
      }
      else {
        *puVar10 = local_1148;
        puVar10[1] = uVar15;
        puVar10 = (undefined8 *)(local_108._8_8_ + 0x10);
        local_108._8_8_ = puVar10;
      }
      uVar15 = uVar15 + 1;
      lVar13 = lVar13 + 0x6b60;
      lVar14 = *param_1;
    } while (uVar15 < (ulonglong)((param_1[1] - lVar14) / 0x6b60));
    puVar17 = (undefined8 *)local_108._0_8_;
  }
  lVar14 = (longlong)puVar10 - (longlong)puVar17 >> 4;
  if (lVar14 < 0x21) {
    FUN_180267610(puVar17,puVar10);
  }
  else {
    uVar16 = lVar14 - (lVar14 - ((longlong)puVar10 - (longlong)puVar17 >> 0x3f) >> 1);
    uVar15 = 0x7fffffffffffffff;
    if ((longlong)uVar16 < 0x7fffffffffffffff) {
      uVar15 = uVar16;
    }
    if (0x100 < uVar16) {
      if ((uVar15 < 0x1000000000000000) && (0 < (longlong)uVar15)) {
        do {
          local_1118 = (undefined1 *)FUN_1805f6194(uVar15 << 4,&DAT_1806898a0);
          if (local_1118 != (undefined1 *)0x0) {
            if (0x100 < uVar15) goto LAB_180264c83;
            goto LAB_180264c36;
          }
          uVar15 = uVar15 >> 1;
        } while (uVar15 != 0);
      }
      local_1118 = (undefined1 *)0x0;
LAB_180264c36:
      if (DAT_180c7df30 == (undefined8 *)0x0) {
        local_1148 = "tier0.dll:g_pMemAlloc";
        uStack_1140 = 0x15;
        DAT_180c7df30 = (undefined8 *)FUN_180451750(&local_1148);
      }
      (**(code **)(*(longlong *)*DAT_180c7df30 + 0x18))((longlong *)*DAT_180c7df30,local_1118);
      uVar16 = 0x100;
    }
    uVar15 = uVar16;
    local_1118 = local_1108;
LAB_180264c83:
    local_1110 = uVar15;
    FUN_1802676f0(puVar17,puVar10,lVar14);
    puVar7 = local_1118;
    if (0x100 < local_1110) {
      if (DAT_180c7df30 == (undefined8 *)0x0) {
        local_1148 = "tier0.dll:g_pMemAlloc";
        uStack_1140 = 0x15;
        DAT_180c7df30 = (undefined8 *)FUN_180451750(&local_1148);
      }
      (**(code **)(*(longlong *)*DAT_180c7df30 + 0x18))((longlong *)*DAT_180c7df30,puVar7);
    }
  }
  bVar6 = true;
  uVar16 = (longlong)(local_108._8_8_ - local_108._0_8_) >> 4;
  uVar15 = 0;
  lVar14 = local_108._0_8_;
  if (uVar16 != 0) {
    puVar12 = (ulonglong *)(local_108._0_8_ + 8);
    do {
      if ((!bVar6) || (*puVar12 != uVar15)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      uVar15 = uVar15 + 1;
      puVar12 = puVar12 + 2;
    } while (uVar15 < uVar16);
    if (!bVar6) {
      local_f0 = (undefined1  [16])0x0;
      local_e0 = 0;
      FUN_180265fa0(local_f0,(param_1[1] - *param_1) / 0x6b60);
      uVar8 = local_108._8_8_;
      lVar14 = local_f0._8_8_;
      lVar13 = local_108._0_8_;
      if (local_108._0_8_ != local_108._8_8_) {
        do {
          lVar11 = *(longlong *)(lVar13 + 8) * 0x6b60 + *param_1;
          if (lVar14 == local_e0) {
            FUN_180268db0(local_f0,lVar14,lVar11);
            lVar14 = local_f0._8_8_;
          }
          else {
            FUN_18063aed0(lVar14,lVar11,0x6b60);
            lVar14 = local_f0._8_8_ + 0x6b60;
            local_f0._8_8_ = lVar14;
          }
          lVar13 = lVar13 + 0x10;
        } while (lVar13 != uVar8);
      }
      if (param_1 == (longlong *)local_f0) {
        lVar13 = local_f0._0_8_;
      }
      else {
        lVar13 = *param_1;
        *param_1 = local_f0._0_8_;
        local_f0._8_8_ = param_1[1];
        param_1[1] = lVar14;
        local_f0._0_8_ = lVar13;
        lVar14 = param_1[2];
        param_1[2] = local_e0;
        local_e0 = lVar14;
      }
      lVar14 = local_108._0_8_;
      if (lVar13 != 0) {
        if ((0xfff < (ulonglong)(((local_e0 - lVar13) / 0x6b60) * 0x6b60)) &&
           (0x1f < (lVar13 - *(longlong *)(lVar13 + -8)) - 8U)) {
LAB_180264fb1:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        FUN_1804547d0();
        local_f0 = (undefined1  [16])0x0;
        local_e0 = 0;
        lVar14 = local_108._0_8_;
      }
    }
  }
  if (lVar14 != 0) {
    lVar13 = lVar14;
    if ((0xfff < ((longlong)local_f8 - lVar14 & 0xfffffffffffffff0U)) &&
       (lVar13 = *(longlong *)(lVar14 + -8), 0x1f < (lVar14 - lVar13) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(lVar13);
  }
}



