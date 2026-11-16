// FUN_1802ef840 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802ef840 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802ef840(undefined8 param_1,ulonglong *param_2,undefined8 *param_3,undefined4 *param_4,
                  ulonglong *param_5)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  int iVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  ulonglong uVar12;
  float fVar13;
  float fVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined1 auStack_2b8 [32];
  undefined4 *local_298;
  undefined4 *local_290;
  char *local_288;
  char local_278;
  char local_277;
  undefined8 local_270;
  float local_268;
  undefined8 local_260;
  float local_258;
  int local_250;
  undefined4 *local_248;
  undefined4 local_240;
  undefined4 local_23c;
  undefined4 local_238;
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_228;
  ulonglong local_218;
  float local_210;
  undefined1 local_208 [264];
  char local_100;
  float local_f8;
  float local_f4;
  float local_f0;
  ulonglong local_e8;
  
  local_e8 = DAT_1808d5f00 ^ (ulonglong)auStack_2b8;
  *param_5 = DAT_180b8f948;
  if (param_5[1] != param_5[2]) {
    param_5[2] = param_5[1];
  }
  local_248 = param_4;
  FUN_180265d90(param_5 + 1,0x800);
  if (param_5[4] != param_5[5]) {
    param_5[5] = param_5[4];
  }
  uVar15 = 0x7fffffff;
  fVar14 = 0.015625;
  uVar18 = 0xc0000000;
  uVar19 = 0x40000000;
  fVar16 = 20.0;
  fVar17 = 400.0;
  *(undefined1 *)((longlong)param_5 + 0x4c) = 0;
  iVar7 = 0;
  *(undefined4 *)(param_5 + 9) = 0xffffffff;
  uVar9 = *param_3;
  fVar13 = *(float *)(param_3 + 1);
  uVar12 = *param_2;
  fVar6 = *(float *)(param_2 + 1);
  iVar5 = 0;
  local_260._4_4_ = (float)((ulonglong)uVar9 >> 0x20);
  local_260._0_4_ = (float)uVar9;
  local_250 = 0;
  fVar10 = local_260._4_4_;
  fVar11 = (float)local_260;
  local_270 = uVar12;
  local_268 = fVar6;
  local_260 = uVar9;
  local_258 = fVar13;
  do {
    iVar4 = local_250;
    if (iVar7 == 0) {
      puVar1 = (ulonglong *)param_5[2];
      if (puVar1 == (ulonglong *)param_5[3]) {
        FUN_180241ef0(param_5 + 1,puVar1,&local_270);
      }
      else {
        *puVar1 = uVar12;
        *(float *)(puVar1 + 1) = fVar6;
        param_5[2] = param_5[2] + 0xc;
      }
    }
    local_258 = fVar13 - DAT_180b8f95c * 0.4 * fVar14;
    local_f8 = fVar11 * fVar14 + (float)local_270;
    local_f4 = fVar10 * fVar14 + local_270._4_4_;
    local_288 = (char *)CONCAT44(local_288._4_4_,iVar5);
    local_290 = local_248;
    local_f0 = (local_258 + fVar13) * 0.5 * fVar14 + local_268;
    local_298 = &local_240;
    local_278 = '\0';
    fVar13 = local_258;
    local_240 = uVar19;
    local_23c = uVar19;
    local_238 = uVar19;
    local_230 = uVar18;
    local_22c = uVar18;
    local_228 = uVar18;
    uVar9 = FUN_1802ee230(&local_218,&local_270,&local_f8,&local_230);
    local_270 = local_218;
    local_268 = local_210;
    if (local_100 == '\0') {
      local_277 = '\0';
    }
    else {
      local_288 = &local_278;
      local_277 = '\x01';
      local_290 = (undefined4 *)CONCAT44(local_290._4_4_,iVar5);
      local_298 = local_248;
      FUN_1802efda0(uVar9,local_208,&local_270,&local_260);
      puVar1 = (ulonglong *)param_5[5];
      local_250 = iVar4 + 1;
      if (puVar1 == (ulonglong *)param_5[6]) {
        FUN_180241ef0(param_5 + 4,puVar1,&local_270);
      }
      else {
        *puVar1 = local_270;
        *(float *)(puVar1 + 1) = local_268;
        param_5[5] = param_5[5] + 0xc;
      }
      fVar10 = local_260._4_4_;
      fVar11 = (float)local_260;
      fVar13 = local_258;
    }
    fVar6 = local_268;
    if (((fVar16 <= (float)((uint)fVar11 & uVar15)) || (fVar16 <= (float)((uint)fVar10 & uVar15)))
       || (fVar17 <= fVar10 * fVar10 + fVar11 * fVar11 + fVar13 * fVar13)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    uVar12 = local_270;
    if (local_278 != '\0') {
LAB_1802efbf3:
      *(int *)(param_5 + 9) = iVar5;
      param_5[7] = uVar12;
      *(float *)((longlong)param_5 + 0x44) = (float)iVar5 * fVar14;
      *(float *)(param_5 + 8) = fVar6;
      goto LAB_1802efc17;
    }
    iVar4 = iVar5;
    if (DAT_180b8f948 < 0xbbe43942) {
      if (DAT_180b8f948 == 0xbbe43941) {
LAB_1802efcb1:
        iVar4 = iVar5 + -8;
      }
      else if (DAT_180b8f948 != 0x1d8fded0) {
        if ((DAT_180b8f948 == 0x488e8052) || (DAT_180b8f948 == 0x937fcfa3)) {
          fVar8 = fVar10 * fVar10 + fVar11 * fVar11;
          if (fVar8 < 0.0) {
            fVar8 = (float)FUN_18061e150();
          }
          else {
            fVar8 = SQRT(fVar8);
          }
          if ((fVar8 < DAT_180b8f958) && (iVar5 == (iVar5 / 0xc) * 0xc)) goto LAB_1802efbf3;
        }
        goto LAB_1802efcd4;
      }
LAB_1802efcbc:
      if (DAT_180b8f954 < (float)iVar4 * fVar14) goto LAB_1802efbf3;
    }
    else {
      if (DAT_180b8f948 == 0xc243cce2) goto LAB_1802efcb1;
      if (DAT_180b8f948 == 0xf7b68f78) goto LAB_1802efcbc;
    }
LAB_1802efcd4:
    if ((0x14 < local_250) || (bVar3)) goto LAB_1802efbf3;
    if ((local_277 != '\0') || (iVar7 = iVar7 + 1, 1 < iVar7)) {
      iVar7 = 0;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x1000);
  iVar5 = (int)param_5[9];
LAB_1802efc17:
  puVar2 = (undefined8 *)param_5[2];
  if ((((undefined8 *)param_5[1] != puVar2) && (-1 < iVar5)) &&
     (fVar13 = *(float *)((longlong)puVar2 + -0xc) - *(float *)(param_5 + 7),
     fVar6 = *(float *)(puVar2 + -1) - *(float *)((longlong)param_5 + 0x3c),
     fVar10 = *(float *)((longlong)puVar2 + -4) - *(float *)(param_5 + 8),
     1.0 < fVar13 * fVar13 + fVar6 * fVar6 + fVar10 * fVar10)) {
    if (puVar2 == (undefined8 *)param_5[3]) {
      FUN_180241ef0(param_5 + 1);
    }
    else {
      *puVar2 = param_5[7];
      *(int *)(puVar2 + 1) = (int)param_5[8];
      param_5[2] = param_5[2] + 0xc;
    }
  }
  *(byte *)((longlong)param_5 + 0x4c) = (byte)(param_5[9] >> 0x18) >> 7 ^ 1;
}



