// FUN_180263500 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180263500 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180263500(undefined8 param_1,undefined8 *param_2,float *param_3,float *param_4,
                  float param_5,longlong param_6,longlong param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int *piVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auVar13 [64];
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_328 [32];
  longlong local_308;
  longlong local_300;
  undefined8 local_2f8;
  int local_2f0;
  int local_2e8;
  int local_2d8 [4];
  undefined1 local_2c8 [16];
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined1 auStack_290 [16];
  undefined8 local_280;
  undefined4 uStack_278;
  undefined8 uStack_274;
  undefined8 uStack_26c;
  undefined8 uStack_264;
  undefined8 uStack_25c;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined1 local_248 [16];
  undefined1 local_238 [16];
  undefined4 local_228;
  undefined4 local_224;
  undefined8 local_220;
  undefined8 local_218;
  undefined4 local_210;
  undefined8 local_20c;
  undefined8 uStack_204;
  undefined8 uStack_1fc;
  undefined8 uStack_1f4;
  undefined8 local_1ec;
  undefined8 uStack_1e4;
  undefined8 uStack_1dc;
  undefined8 uStack_1d4;
  undefined8 local_1cc;
  undefined8 local_1b8;
  longlong lStack_1b0;
  float local_10c;
  char local_fd;
  char local_b0;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_98;
  float local_94;
  float local_90;
  ulonglong local_88;
  
  local_88 = DAT_1808d5f00 ^ (ulonglong)auStack_328;
  uStack_2b8 = 0;
  local_280 = 0;
  uStack_278 = 0;
  uStack_254 = 0;
  local_218 = 0;
  local_210 = 0;
  local_1cc = 0;
  local_220 = 0x3f80000000000000;
  uStack_250 = 0;
  uStack_24c = 0;
  local_228 = 0;
  local_224 = 0;
  local_2c8 = (undefined1  [16])0x0;
  uStack_2b0 = 0;
  uStack_2a8 = 0;
  uStack_2a0 = 0;
  uStack_298 = 0;
  auStack_290 = (undefined1  [16])0x0;
  uStack_274 = 0;
  uStack_26c = 0;
  uStack_264 = 0;
  uStack_25c = 0;
  local_248 = (undefined1  [16])0x0;
  local_238 = (undefined1  [16])0x0;
  local_20c = 0;
  uStack_204 = 0;
  uStack_1fc = 0;
  uStack_1f4 = 0;
  local_1ec = 0;
  uStack_1e4 = 0;
  uStack_1dc = 0;
  uStack_1d4 = 0;
  if ((param_7 != 0) && (param_6 != 0)) {
    fVar16 = 1.0;
    AcquireSRWLockShared((PSRWLOCK)&DAT_180b0e0f8);
    for (plVar6 = DAT_180b0e0e0; plVar6 != DAT_180b0e0e8; plVar6 = plVar6 + 3) {
      if (*plVar6 == param_7) {
        ReleaseSRWLockShared((PSRWLOCK)&DAT_180b0e0f8);
        AcquireSRWLockShared((PSRWLOCK)&DAT_180b0e0f8);
        plVar6 = DAT_180b0e0e0;
        goto joined_r0x0001802636ec;
      }
    }
LAB_180263612:
    ReleaseSRWLockShared((PSRWLOCK)&DAT_180b0e0f8);
  }
LAB_18026361e:
  lVar12 = 2;
  puVar8 = (undefined8 *)local_2c8;
  do {
    puVar9 = param_2 + 0x10;
    uVar3 = puVar8[1];
    uVar4 = puVar8[2];
    uVar5 = puVar8[3];
    uVar1 = puVar8[0xe];
    uVar2 = puVar8[0xf];
    puVar7 = puVar8 + 0x10;
    *param_2 = *puVar8;
    param_2[1] = uVar3;
    param_2[2] = uVar4;
    param_2[3] = uVar5;
    uVar3 = puVar8[5];
    uVar4 = puVar8[6];
    uVar5 = puVar8[7];
    param_2[4] = puVar8[4];
    param_2[5] = uVar3;
    param_2[6] = uVar4;
    param_2[7] = uVar5;
    uVar3 = puVar8[9];
    uVar4 = puVar8[10];
    uVar5 = puVar8[0xb];
    param_2[8] = puVar8[8];
    param_2[9] = uVar3;
    param_2[10] = uVar4;
    param_2[0xb] = uVar5;
    uVar3 = puVar8[0xd];
    param_2[0xc] = puVar8[0xc];
    param_2[0xd] = uVar3;
    param_2[0xe] = uVar1;
    param_2[0xf] = uVar2;
    lVar12 = lVar12 + -1;
    puVar8 = puVar7;
    param_2 = puVar9;
  } while (lVar12 != 0);
LAB_180263675:
  *puVar9 = *puVar7;
joined_r0x0001802636ec:
  if (plVar6 == DAT_180b0e0e8) goto LAB_180263612;
  if (*plVar6 == param_6) {
    ReleaseSRWLockShared((PSRWLOCK)&DAT_180b0e0f8);
    local_a8 = param_5 * *param_4 + *param_3;
    fVar17 = 4.0;
    local_a4 = param_5 * param_4[1] + param_3[1];
    auVar13 = ZEXT464((uint)(param_5 * param_4[2]));
    local_a0 = param_5 * param_4[2] + param_3[2];
    iVar11 = 0;
    local_2d8[1] = 0xf;
    local_2d8[0] = 0;
    piVar10 = local_2d8;
    fVar14 = 2.0;
    goto LAB_180263779;
  }
  plVar6 = plVar6 + 3;
  goto joined_r0x0001802636ec;
LAB_180263779:
  if (iVar11 == 0) {
    iVar11 = 7;
  }
  local_300 = 0x1c1003;
  local_308 = param_7;
  local_2f0 = iVar11;
  auVar13._0_8_ = FUN_180417de0(auVar13._0_8_,&local_1b8,param_3,&local_a8);
  auVar13._8_56_ = extraout_var;
  fVar15 = fVar14;
  if (local_b0 != '\0') {
    if (((local_10c < fVar16) || (local_fd != '\0')) && (lStack_1b0 == param_6)) {
      lVar12 = 2;
      puVar8 = &local_1b8;
      do {
        puVar9 = param_2 + 0x10;
        uVar3 = puVar8[1];
        uVar4 = puVar8[2];
        uVar5 = puVar8[3];
        uVar1 = puVar8[0xe];
        uVar2 = puVar8[0xf];
        puVar7 = puVar8 + 0x10;
        *param_2 = *puVar8;
        param_2[1] = uVar3;
        param_2[2] = uVar4;
        param_2[3] = uVar5;
        uVar3 = puVar8[5];
        uVar4 = puVar8[6];
        uVar5 = puVar8[7];
        param_2[4] = puVar8[4];
        param_2[5] = uVar3;
        param_2[6] = uVar4;
        param_2[7] = uVar5;
        uVar3 = puVar8[9];
        uVar4 = puVar8[10];
        uVar5 = puVar8[0xb];
        param_2[8] = puVar8[8];
        param_2[9] = uVar3;
        param_2[10] = uVar4;
        param_2[0xb] = uVar5;
        uVar3 = puVar8[0xd];
        param_2[0xc] = puVar8[0xc];
        param_2[0xd] = uVar3;
        param_2[0xe] = uVar1;
        param_2[0xf] = uVar2;
        lVar12 = lVar12 + -1;
        puVar8 = puVar7;
        param_2 = puVar9;
      } while (lVar12 != 0);
      goto LAB_180263675;
    }
    do {
      local_98 = local_a8 - fVar14 * *param_4;
      local_94 = local_a4 - fVar14 * param_4[1];
      local_90 = local_a0 - fVar14 * param_4[2];
      local_2f8 = 0x1c1003;
      local_300 = param_7;
      local_308 = CONCAT44(local_308._4_4_,fVar14);
      local_2e8 = iVar11;
      auVar13._0_8_ = FUN_180418c30(local_a0,&local_1b8,param_3,&local_98);
      auVar13._8_56_ = extraout_var_00;
      if (((local_b0 != '\0') && ((local_10c < fVar16 || (local_fd != '\0')))) &&
         (lStack_1b0 == param_6)) {
        lVar12 = 2;
        puVar8 = &local_1b8;
        do {
          puVar9 = param_2 + 0x10;
          uVar3 = puVar8[1];
          uVar4 = puVar8[2];
          uVar5 = puVar8[3];
          uVar1 = puVar8[0xe];
          uVar2 = puVar8[0xf];
          puVar7 = puVar8 + 0x10;
          *param_2 = *puVar8;
          param_2[1] = uVar3;
          param_2[2] = uVar4;
          param_2[3] = uVar5;
          uVar3 = puVar8[5];
          uVar4 = puVar8[6];
          uVar5 = puVar8[7];
          param_2[4] = puVar8[4];
          param_2[5] = uVar3;
          param_2[6] = uVar4;
          param_2[7] = uVar5;
          uVar3 = puVar8[9];
          uVar4 = puVar8[10];
          uVar5 = puVar8[0xb];
          param_2[8] = puVar8[8];
          param_2[9] = uVar3;
          param_2[10] = uVar4;
          param_2[0xb] = uVar5;
          uVar3 = puVar8[0xd];
          param_2[0xc] = puVar8[0xc];
          param_2[0xd] = uVar3;
          param_2[0xe] = uVar1;
          param_2[0xf] = uVar2;
          lVar12 = lVar12 + -1;
          puVar8 = puVar7;
          param_2 = puVar9;
        } while (lVar12 != 0);
        *puVar9 = *puVar7;
      }
      fVar14 = fVar14 + fVar15;
    } while (fVar14 <= fVar17);
  }
  piVar10 = piVar10 + 1;
  if (piVar10 == local_2d8 + 2) goto LAB_18026361e;
  iVar11 = *piVar10;
  fVar14 = fVar15;
  goto LAB_180263779;
}



