// FUN_18035e2d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18035e2d0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18035e2d0(undefined1 *param_1,float *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,char *param_6,undefined1 param_7)

{
  int iVar1;
  undefined1 uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  float *pfVar10;
  bool bVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [64];
  float fVar18;
  undefined1 auVar19 [64];
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_4b8 [32];
  undefined8 local_498;
  undefined8 *local_488;
  undefined8 uStack_480;
  undefined1 *local_478;
  undefined8 *local_470;
  undefined1 *local_468;
  char *local_460;
  undefined1 *local_458;
  undefined8 *local_450;
  undefined8 local_448;
  undefined1 local_440 [256];
  char local_340 [4];
  int local_33c;
  int local_338 [4];
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 local_2e8;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined4 local_1e0;
  float local_1dc;
  undefined1 local_1d8 [272];
  ulonglong local_c8;
  
  local_c8 = DAT_1808d5f00 ^ (ulonglong)auStack_4b8;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *param_1 = 0;
  local_498 = param_2;
  local_488 = param_3;
  FUN_18063ab10(param_1 + 0x18,0,0x180);
  FUN_18035d180(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  param_1[0x1a8] = 0;
  sVar3 = thunk_FUN_180624430(*param_2);
  if (0 < sVar3) {
  }
  fVar22 = param_2[1];
  sVar3 = thunk_FUN_180624430(fVar22);
  if (0 < sVar3) {
  }
  fVar18 = 0.0;
  if (fVar22 < 0.0) {
  }
  fVar22 = param_2[2];
  sVar3 = thunk_FUN_180624430(fVar22);
  if (0 < sVar3) {
  }
  if (fVar22 <= fVar18) {
  }
  local_328 = 0;
  uStack_320 = 0;
  uStack_318 = 0;
  uStack_310 = 0;
  local_308 = 0;
  uStack_300 = 0;
  uStack_2f8 = 0;
  uStack_2f0 = 0;
  local_2e8 = 0;
  FUN_18063ab10(local_1d8,0,0x104);
  local_478 = &param_7;
  local_470 = &local_328;
  local_340[0] = '\0';
  local_468 = local_1d8;
  local_460 = local_340;
  local_458 = param_1;
  local_450 = param_3;
  local_448 = param_4;
  puVar6 = (undefined8 *)FUN_180354430(local_440,param_5);
  fVar22 = 64.0;
  local_2d8 = *puVar6;
  uStack_2d0 = puVar6[1];
  uStack_2c8 = puVar6[2];
  uStack_2c0 = puVar6[3];
  local_2b8 = puVar6[4];
  uStack_2b0 = puVar6[5];
  uStack_2a8 = puVar6[6];
  uStack_2a0 = puVar6[7];
  local_298 = puVar6[8];
  uStack_290 = puVar6[9];
  uStack_288 = puVar6[10];
  uStack_280 = puVar6[0xb];
  local_278 = puVar6[0xc];
  uStack_270 = puVar6[0xd];
  pfVar10 = (float *)&local_2d8;
  local_268 = puVar6[0xe];
  uStack_260 = puVar6[0xf];
  local_258 = puVar6[0x10];
  uStack_250 = puVar6[0x11];
  uStack_248 = puVar6[0x12];
  uStack_240 = puVar6[0x13];
  local_238 = puVar6[0x14];
  uStack_230 = puVar6[0x15];
  uStack_228 = puVar6[0x16];
  uStack_220 = puVar6[0x17];
  local_218 = puVar6[0x18];
  uStack_210 = puVar6[0x19];
  uStack_208 = puVar6[0x1a];
  uStack_200 = puVar6[0x1b];
  local_1f8 = puVar6[0x1c];
  uStack_1f0 = puVar6[0x1d];
  local_1e8 = puVar6[0x1e];
  local_1e0 = *(undefined4 *)(puVar6 + 0x1f);
  do {
    iVar9 = (int)(fVar22 * *pfVar10);
    iVar4 = FUN_18035e890(&local_478,iVar9);
    if (iVar4 == 2) break;
    if (iVar4 == 1) {
      if (-1 < iVar9) {
        bVar11 = iVar9 == 1;
        bVar12 = iVar9 == 0x3f;
        iVar4 = iVar9;
        local_33c = iVar9;
        local_338[0] = iVar9;
        if (local_340[0] == '\0') goto LAB_18035e572;
        goto LAB_18035e5ef;
      }
      break;
    }
    pfVar10 = pfVar10 + 1;
  } while (pfVar10 != &local_1dc);
  goto LAB_18035e842;
  while( true ) {
    iVar1 = iVar4 + 1;
    iVar5 = FUN_18035e890(&local_478,iVar1);
    if (iVar5 == 1) {
      iVar4 = iVar1;
    }
    bVar12 = iVar5 != 1 || iVar1 == 0x3f;
    if (local_340[0] != '\0') break;
LAB_18035e572:
    do {
      if ((param_6 != (char *)0x0) && (*param_6 != '\0')) goto LAB_18035e5e3;
      if (bVar11) {
        if (bVar12) goto LAB_18035e5e3;
      }
      else {
        iVar1 = iVar9 + -1;
        iVar5 = FUN_18035e890(&local_478,iVar1);
        if (iVar5 == 1) {
          bVar11 = iVar1 == 1;
          iVar9 = iVar1;
          local_33c = iVar1;
        }
        else {
          bVar11 = true;
        }
      }
      if (local_340[0] != '\0') goto LAB_18035e5e3;
    } while (bVar12);
  }
LAB_18035e5e3:
  param_2 = local_498;
  local_338[0] = iVar4;
LAB_18035e5ef:
  iVar1 = local_338[0];
  fVar21 = 0.015625;
  fVar20 = param_2[2];
  fVar15 = *param_2;
  auVar19 = ZEXT464((uint)fVar15);
  auVar17 = ZEXT464((uint)param_2[1]);
  fVar16 = param_2[1] * 0.5;
  fVar13 = (float)iVar9 * 0.015625 * fVar20;
  fVar14 = (float)local_338[0] * 0.015625 * fVar20;
  fVar15 = ((fVar16 * fVar14 * fVar14 - fVar14 * fVar15) +
           (fVar16 * fVar13 * fVar13 - fVar13 * fVar15)) * 0.5;
  iVar4 = iVar9 + (local_338[0] - iVar9) / 2;
  if (fVar18 <= fVar15) {
    fVar21 = 0.015625;
    sVar3 = thunk_FUN_180624430(fVar15);
    if ((sVar3 < 1) && (sVar3 = thunk_FUN_180624430(auVar19._0_8_), sVar3 < 1)) {
      sVar3 = thunk_FUN_180624430(auVar17._0_8_);
      fVar16 = auVar17._0_4_;
      if (sVar3 < 1) {
        if (fVar15 == fVar18) {
LAB_18035e767:
          iVar4 = FUN_18060eb80((fVar18 / fVar20) * fVar22);
          local_498 = (float *)CONCAT44(local_498._4_4_,iVar4);
          piVar8 = &local_33c;
          if (iVar9 <= iVar4) {
            piVar8 = (int *)&local_498;
          }
          piVar7 = local_338;
          if (iVar4 <= iVar1) {
            piVar7 = piVar8;
          }
          iVar4 = *piVar7;
        }
        else {
          fVar14 = -auVar19._0_4_;
          fVar13 = (fVar16 + fVar16) * fVar15 + fVar14 * fVar14;
          if (fVar18 <= fVar13) {
            if (fVar13 < 0.0) {
              fVar13 = (float)FUN_18061e150(fVar13);
              fVar16 = auVar17._0_4_;
            }
            else {
              fVar13 = SQRT(fVar13);
            }
            if (fVar14 < fVar18) {
              if (fVar16 <= fVar18) goto LAB_18035e74a;
              local_498._0_5_ = CONCAT14(1,(fVar13 - fVar14) / fVar16);
            }
            else if (fVar13 + fVar14 <= fVar18) {
LAB_18035e74a:
              local_498._0_5_ = (uint5)(uint)(float)local_498;
            }
            else {
              local_498._0_5_ = CONCAT14(1,(fVar15 + fVar15) / (fVar13 + fVar14));
            }
            if ((char)((ulonglong)local_498 >> 0x20) != '\0') {
              fVar18 = (float)local_498;
              goto LAB_18035e767;
            }
          }
        }
      }
    }
  }
  puVar6 = (undefined8 *)*local_488;
  uStack_480 = local_488[1];
  *(float *)(param_1 + 0x1a0) = (float)iVar4 * fVar21;
  local_488 = puVar6;
  uVar2 = FUN_180353ed0(&local_488,(float)iVar4 * fVar21,param_1 + 0x18,param_7);
  *param_1 = uVar2;
  param_1[0x1a8] = uVar2;
  *(int *)(param_1 + 4) = iVar4 * 4;
  *(int *)(param_1 + 8) = iVar9 * 4;
  *(int *)(param_1 + 0xc) = iVar1 * 4;
  param_1[0x14] = iVar9 == 1;
  param_1[0x15] = iVar1 == 0x3f;
LAB_18035e842:
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x1a4);
}



