// FUN_180263960 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180263960 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180263960(undefined8 param_1,undefined8 *param_2,float *param_3,float *param_4,
                  float param_5,longlong param_6,longlong param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_308 [32];
  longlong local_2e8;
  longlong local_2e0;
  undefined8 local_2d8;
  undefined4 local_2d0;
  undefined4 local_2c8;
  undefined1 local_2b8 [16];
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined1 auStack_280 [16];
  undefined8 local_270;
  undefined4 uStack_268;
  undefined8 uStack_264;
  undefined8 uStack_25c;
  undefined8 uStack_254;
  undefined8 uStack_24c;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined1 local_238 [16];
  undefined1 local_228 [16];
  undefined4 local_218;
  undefined4 local_214;
  undefined8 local_210;
  undefined8 local_208;
  undefined4 local_200;
  undefined8 local_1fc;
  undefined8 uStack_1f4;
  undefined8 uStack_1ec;
  undefined8 uStack_1e4;
  undefined8 local_1dc;
  undefined8 uStack_1d4;
  undefined8 uStack_1cc;
  undefined8 uStack_1c4;
  undefined8 local_1bc;
  undefined8 local_1a8;
  longlong lStack_1a0;
  float local_fc;
  char local_ed;
  char local_a0;
  float local_98;
  float local_94;
  float local_90;
  float local_88;
  float local_84;
  float local_80;
  ulonglong local_78;
  
  local_78 = DAT_1808d5f00 ^ (ulonglong)auStack_308;
  uStack_2a8 = 0;
  local_270 = 0;
  uStack_268 = 0;
  uStack_244 = 0;
  local_208 = 0;
  local_200 = 0;
  local_1bc = 0;
  local_210 = 0x3f80000000000000;
  uStack_240 = 0;
  uStack_23c = 0;
  local_218 = 0;
  local_214 = 0;
  local_2b8 = (undefined1  [16])0x0;
  uStack_2a0 = 0;
  uStack_298 = 0;
  uStack_290 = 0;
  uStack_288 = 0;
  auStack_280 = (undefined1  [16])0x0;
  uStack_264 = 0;
  uStack_25c = 0;
  uStack_254 = 0;
  uStack_24c = 0;
  local_238 = (undefined1  [16])0x0;
  local_228 = (undefined1  [16])0x0;
  local_1fc = 0;
  uStack_1f4 = 0;
  uStack_1ec = 0;
  uStack_1e4 = 0;
  local_1dc = 0;
  uStack_1d4 = 0;
  uStack_1cc = 0;
  uStack_1c4 = 0;
  if ((param_7 != 0) && (param_6 != 0)) {
    fVar13 = 1.0;
    fVar14 = 0.0;
    AcquireSRWLockShared((PSRWLOCK)&DAT_180b0e0f8);
    for (plVar5 = DAT_180b0e0e0; plVar5 != DAT_180b0e0e8; plVar5 = plVar5 + 3) {
      if (*plVar5 == param_7) {
        ReleaseSRWLockShared((PSRWLOCK)&DAT_180b0e0f8);
        AcquireSRWLockShared((PSRWLOCK)&DAT_180b0e0f8);
        plVar5 = DAT_180b0e0e0;
        goto joined_r0x000180263b48;
      }
    }
LAB_180263a72:
    ReleaseSRWLockShared((PSRWLOCK)&DAT_180b0e0f8);
  }
  goto LAB_180263a7e;
joined_r0x000180263b48:
  if (plVar5 == DAT_180b0e0e8) goto LAB_180263a72;
  if (*plVar5 == param_6) {
    ReleaseSRWLockShared((PSRWLOCK)&DAT_180b0e0f8);
    local_98 = param_5 * *param_4 + *param_3;
    local_94 = param_5 * param_4[1] + param_3[1];
    local_90 = param_5 * param_4[2] + param_3[2];
    local_2d0 = 7;
    local_2e0 = 0xc3001;
    local_2e8 = param_7;
    uVar10 = FUN_180417de0(param_5 * param_4[2],&local_1a8,param_3,&local_98);
    if (local_a0 == '\0') goto LAB_180263a7e;
    if (((local_fc < fVar13) || (local_ed != '\0')) && (lStack_1a0 == param_6)) {
      lVar9 = 2;
      puVar7 = &local_1a8;
      do {
        puVar8 = param_2 + 0x10;
        uVar2 = puVar7[1];
        uVar3 = puVar7[2];
        uVar4 = puVar7[3];
        uVar10 = puVar7[0xe];
        uVar1 = puVar7[0xf];
        puVar6 = puVar7 + 0x10;
        *param_2 = *puVar7;
        param_2[1] = uVar2;
        param_2[2] = uVar3;
        param_2[3] = uVar4;
        uVar2 = puVar7[5];
        uVar3 = puVar7[6];
        uVar4 = puVar7[7];
        param_2[4] = puVar7[4];
        param_2[5] = uVar2;
        param_2[6] = uVar3;
        param_2[7] = uVar4;
        uVar2 = puVar7[9];
        uVar3 = puVar7[10];
        uVar4 = puVar7[0xb];
        param_2[8] = puVar7[8];
        param_2[9] = uVar2;
        param_2[10] = uVar3;
        param_2[0xb] = uVar4;
        uVar2 = puVar7[0xd];
        param_2[0xc] = puVar7[0xc];
        param_2[0xd] = uVar2;
        param_2[0xe] = uVar10;
        param_2[0xf] = uVar1;
        lVar9 = lVar9 + -1;
        puVar7 = puVar6;
        param_2 = puVar8;
      } while (lVar9 != 0);
      *puVar8 = *puVar6;
    }
    local_2d0 = 0xf;
    local_2e0 = 0xc3001;
    local_2e8 = param_7;
    FUN_180417de0(uVar10,&local_1a8,param_3,&local_98);
    if (local_a0 == '\0') goto LAB_180263a7e;
    if (((local_fc < fVar13) || (local_ed != '\0')) && (lStack_1a0 == param_6)) {
      lVar9 = 2;
      puVar7 = &local_1a8;
      do {
        puVar8 = param_2 + 0x10;
        uVar2 = puVar7[1];
        uVar3 = puVar7[2];
        uVar4 = puVar7[3];
        uVar10 = puVar7[0xe];
        uVar1 = puVar7[0xf];
        puVar6 = puVar7 + 0x10;
        *param_2 = *puVar7;
        param_2[1] = uVar2;
        param_2[2] = uVar3;
        param_2[3] = uVar4;
        uVar2 = puVar7[5];
        uVar3 = puVar7[6];
        uVar4 = puVar7[7];
        param_2[4] = puVar7[4];
        param_2[5] = uVar2;
        param_2[6] = uVar3;
        param_2[7] = uVar4;
        uVar2 = puVar7[9];
        uVar3 = puVar7[10];
        uVar4 = puVar7[0xb];
        param_2[8] = puVar7[8];
        param_2[9] = uVar2;
        param_2[10] = uVar3;
        param_2[0xb] = uVar4;
        uVar2 = puVar7[0xd];
        param_2[0xc] = puVar7[0xc];
        param_2[0xd] = uVar2;
        param_2[0xe] = uVar10;
        param_2[0xf] = uVar1;
        lVar9 = lVar9 + -1;
        puVar7 = puVar6;
        param_2 = puVar8;
      } while (lVar9 != 0);
      goto LAB_180263ad5;
    }
    fVar11 = 14.0;
    fVar12 = -3.0;
    goto LAB_180263d20;
  }
  plVar5 = plVar5 + 3;
  goto joined_r0x000180263b48;
  while (fVar11 = fVar11 + fVar12, fVar14 < fVar11) {
LAB_180263d20:
    local_88 = local_98 - fVar11 * *param_4;
    local_84 = local_94 - fVar11 * param_4[1];
    local_2c8 = 0xf;
    local_80 = local_90 - fVar11 * param_4[2];
    local_2d8 = 0xc3001;
    local_2e0 = param_7;
    local_2e8 = CONCAT44(local_2e8._4_4_,fVar11);
    FUN_180418c30(local_90,&local_1a8,param_3,&local_88);
    if (((local_a0 != '\0') && ((local_fc < fVar13 || (local_ed != '\0')))) &&
       (lStack_1a0 == param_6)) {
      lVar9 = 2;
      puVar7 = &local_1a8;
      do {
        puVar8 = param_2 + 0x10;
        uVar2 = puVar7[1];
        uVar3 = puVar7[2];
        uVar4 = puVar7[3];
        uVar10 = puVar7[0xe];
        uVar1 = puVar7[0xf];
        puVar6 = puVar7 + 0x10;
        *param_2 = *puVar7;
        param_2[1] = uVar2;
        param_2[2] = uVar3;
        param_2[3] = uVar4;
        uVar2 = puVar7[5];
        uVar3 = puVar7[6];
        uVar4 = puVar7[7];
        param_2[4] = puVar7[4];
        param_2[5] = uVar2;
        param_2[6] = uVar3;
        param_2[7] = uVar4;
        uVar2 = puVar7[9];
        uVar3 = puVar7[10];
        uVar4 = puVar7[0xb];
        param_2[8] = puVar7[8];
        param_2[9] = uVar2;
        param_2[10] = uVar3;
        param_2[0xb] = uVar4;
        uVar2 = puVar7[0xd];
        param_2[0xc] = puVar7[0xc];
        param_2[0xd] = uVar2;
        param_2[0xe] = uVar10;
        param_2[0xf] = uVar1;
        lVar9 = lVar9 + -1;
        puVar7 = puVar6;
        param_2 = puVar8;
      } while (lVar9 != 0);
      goto LAB_180263ad5;
    }
  }
LAB_180263a7e:
  lVar9 = 2;
  puVar7 = (undefined8 *)local_2b8;
  do {
    puVar8 = param_2 + 0x10;
    uVar2 = puVar7[1];
    uVar3 = puVar7[2];
    uVar4 = puVar7[3];
    uVar10 = puVar7[0xe];
    uVar1 = puVar7[0xf];
    puVar6 = puVar7 + 0x10;
    *param_2 = *puVar7;
    param_2[1] = uVar2;
    param_2[2] = uVar3;
    param_2[3] = uVar4;
    uVar2 = puVar7[5];
    uVar3 = puVar7[6];
    uVar4 = puVar7[7];
    param_2[4] = puVar7[4];
    param_2[5] = uVar2;
    param_2[6] = uVar3;
    param_2[7] = uVar4;
    uVar2 = puVar7[9];
    uVar3 = puVar7[10];
    uVar4 = puVar7[0xb];
    param_2[8] = puVar7[8];
    param_2[9] = uVar2;
    param_2[10] = uVar3;
    param_2[0xb] = uVar4;
    uVar2 = puVar7[0xd];
    param_2[0xc] = puVar7[0xc];
    param_2[0xd] = uVar2;
    param_2[0xe] = uVar10;
    param_2[0xf] = uVar1;
    lVar9 = lVar9 + -1;
    puVar7 = puVar6;
    param_2 = puVar8;
  } while (lVar9 != 0);
LAB_180263ad5:
  *puVar8 = *puVar6;
}



