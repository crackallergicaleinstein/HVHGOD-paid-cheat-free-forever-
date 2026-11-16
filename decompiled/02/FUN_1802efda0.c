// FUN_1802efda0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802efda0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802efda0(undefined8 param_1,longlong param_2,float *param_3,float *param_4,
                  undefined8 param_5,undefined4 param_6,undefined1 *param_7)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  char cVar3;
  int iVar4;
  char *pcVar5;
  ULONGLONG UVar6;
  uint uVar7;
  float fVar8;
  undefined1 auVar9 [16];
  float fVar10;
  undefined1 auVar11 [64];
  float fVar12;
  undefined1 auVar13 [64];
  float fVar14;
  undefined1 auVar15 [16];
  undefined8 uVar16;
  undefined1 auVar17 [64];
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_248 [32];
  undefined8 *local_228;
  undefined8 local_220;
  undefined4 local_218;
  undefined8 local_208;
  float local_200;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined8 local_1e8;
  float local_1e0;
  float local_c8;
  float local_c4;
  float local_c0;
  ulonglong local_b8;
  
  local_b8 = DAT_1808d5f00 ^ (ulonglong)auStack_248;
  *param_7 = 0;
  fVar19 = 400.0;
  if (((DAT_180b8f948 == 0x1d8fded0) || (DAT_180b8f948 == 0xf7b68f78)) &&
     ((DAT_180b8f960 <= *(float *)(param_2 + 0x98) ||
      (param_4[1] * param_4[1] + *param_4 * *param_4 + param_4[2] * param_4[2] < 400.0)))) {
    *param_7 = 1;
    param_4[0] = 0.0;
    param_4[1] = 0.0;
    param_4[2] = 0.0;
  }
  fVar8 = *(float *)(param_2 + 0x94) * param_4[1] + *(float *)(param_2 + 0x90) * *param_4 +
          *(float *)(param_2 + 0x98) * param_4[2];
  fVar8 = fVar8 + fVar8;
  fVar20 = param_4[2] - fVar8 * *(float *)(param_2 + 0x98);
  fVar18 = param_4[1] - fVar8 * *(float *)(param_2 + 0x94);
  fVar8 = *param_4 - fVar8 * *(float *)(param_2 + 0x90);
  auVar9 = SUB6416(ZEXT464(0x3dcccccd),0);
  auVar1 = vcmpss_avx(ZEXT416((uint)ABS(fVar8)),auVar9,1);
  auVar15 = ZEXT816(0);
  auVar1 = vblendvps_avx(ZEXT416((uint)fVar8),auVar15,auVar1);
  auVar2 = vcmpss_avx(ZEXT416((uint)ABS(fVar18)),auVar9,1);
  auVar2 = vblendvps_avx(ZEXT416((uint)fVar18),auVar15,auVar2);
  auVar9 = vcmpss_avx(ZEXT416((uint)ABS(fVar20)),auVar9,1);
  auVar9 = vblendvps_avx(ZEXT416((uint)fVar20),auVar15,auVar9);
  auVar11 = ZEXT464((uint)(auVar1._0_4_ * 0.45));
  auVar13 = ZEXT464((uint)(auVar2._0_4_ * 0.45));
  fVar8 = auVar9._0_4_ * 0.45;
  fVar20 = 1.0;
  if (*(longlong *)(param_2 + 8) != 0) {
    pcVar5 = (char *)FUN_1803d3fa0();
    if (pcVar5 != (char *)0x0) {
      uVar7 = 0x811c9dc5;
      cVar3 = *pcVar5;
      if (cVar3 != '\0') {
        do {
          pcVar5 = pcVar5 + 1;
          uVar7 = ((int)cVar3 ^ uVar7) * 0x1000193;
          cVar3 = *pcVar5;
        } while (cVar3 != '\0');
        if (uVar7 == 0x87cce03e) goto LAB_1802f0100;
      }
    }
    iVar4 = DAT_180c6edf8;
    if (DAT_180c6edf8 == 0) {
      UVar6 = GetTickCount64();
      if (UVar6 < DAT_180c6ede0) {
        iVar4 = 0;
      }
      else {
        local_208 = &DAT_1808fe250;
        iVar4 = FUN_1805f68d0(&DAT_1808fe250);
        if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(5);
        }
        if (DAT_1808fe29c == 0x7fffffff) {
          DAT_1808fe29c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(6);
        }
        if ((DAT_180c6edf8 == 0) && (DAT_180c6ede0 <= UVar6)) {
          DAT_180c6edf8 = FUN_1804174b0("C_BaseEntity",0x84cdad2);
          if (DAT_180c6edf8 == 0) {
            DAT_180c6ede0 = UVar6 + 1000;
          }
          else {
            DAT_180c6ede0 = 0xffffffffffffffff;
          }
        }
        iVar4 = DAT_180c6edf8;
        FUN_1805f68fc(&DAT_1808fe250);
      }
    }
    if (((*(int *)(*(longlong *)(param_2 + 8) + (longlong)iVar4) - 1U < 100) &&
        (0.7 < *(float *)(param_2 + 0xac))) &&
       (96000.0 < auVar13._0_4_ * auVar13._0_4_ + auVar11._0_4_ * auVar11._0_4_ + fVar8 * fVar8)) {
      auVar1 = vunpcklps_avx(auVar11._0_16_,auVar13._0_16_);
      auVar17 = ZEXT1664(auVar1);
      local_208 = auVar1._0_8_;
      fVar14 = fVar8;
      local_200 = fVar8;
      FUN_180450e30(&local_208);
      fVar18 = local_208._4_4_ * *(float *)(param_2 + 0x94) +
               (float)local_208 * *(float *)(param_2 + 0x90) +
               local_200 * *(float *)(param_2 + 0x98);
      if (fVar18 <= 0.5) goto LAB_1802f0109;
      fVar8 = (fVar20 - fVar18) + 0.5;
      auVar11 = ZEXT464((uint)(auVar11._0_4_ * fVar8));
      auVar13 = ZEXT464((uint)(auVar13._0_4_ * fVar8));
      fVar8 = fVar14 * fVar8;
    }
  }
LAB_1802f0100:
  auVar1 = vunpcklps_avx(auVar11._0_16_,auVar13._0_16_);
  auVar17 = ZEXT1664(auVar1);
  fVar14 = fVar8;
LAB_1802f0109:
  uVar16 = auVar17._0_8_;
  fVar10 = auVar11._0_4_;
  fVar12 = auVar13._0_4_;
  fVar18 = *(float *)(param_2 + 0x98);
  if ((0.7 < fVar18) && (96000.0 < fVar12 * fVar12 + fVar10 * fVar10 + fVar14 * fVar14)) {
    local_208 = (undefined *)uVar16;
    local_200 = fVar8;
    FUN_180450e30(&local_208);
    uVar16 = auVar17._0_8_;
    fVar10 = auVar11._0_4_;
    fVar12 = auVar13._0_4_;
    fVar18 = local_208._4_4_ * *(float *)(param_2 + 0x94) +
             (float)local_208 * *(float *)(param_2 + 0x90) + fVar18 * local_200;
    if (0.5 < fVar18) {
      fVar18 = 1.5 - fVar18;
      fVar10 = fVar10 * fVar18;
      fVar12 = fVar12 * fVar18;
      fVar8 = fVar14 * fVar18;
      auVar1 = vunpcklps_avx(ZEXT416((uint)fVar10),ZEXT416((uint)fVar12));
      uVar16 = auVar1._0_8_;
      fVar14 = fVar8;
    }
  }
  if (fVar19 <= fVar12 * fVar12 + fVar10 * fVar10 + fVar14 * fVar14) {
    *(undefined8 *)param_4 = uVar16;
    param_4[2] = fVar8;
    fVar20 = fVar20 - *(float *)(param_2 + 0xac);
    if (0.0 < fVar20) {
      local_1f8 = 0xc0000000;
      local_1f4 = 0xc0000000;
      local_1f0 = 0xc0000000;
      local_208 = (undefined *)0x4000000040000000;
      local_200 = 2.0;
      fVar20 = fVar20 * 0.015625;
      local_c8 = fVar20 * fVar10 + *param_3;
      local_c4 = fVar20 * fVar12 + param_3[1];
      local_c0 = fVar20 * fVar14 + param_3[2];
      local_218 = param_6;
      local_220 = param_5;
      local_228 = &local_208;
      FUN_1802ee230(&local_1e8,param_3,&local_c8,&local_1f8);
      *(undefined8 *)param_3 = local_1e8;
      param_3[2] = local_1e0;
    }
  }
  else {
    param_4[0] = 0.0;
    param_4[1] = 0.0;
    param_4[2] = 0.0;
  }
}



