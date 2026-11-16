// FUN_18033d2f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18033d2f0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18033d2f0(longlong param_1,undefined8 param_2,char param_3,float *param_4,int param_5,
                  float *param_6,float *param_7)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  float fVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  float *pfVar7;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [64];
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [64];
  undefined8 uVar18;
  undefined1 auVar19 [64];
  undefined1 auStack_118 [32];
  undefined1 *local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  float local_d8;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  ulonglong local_88 [10];
  
  local_88[0] = DAT_1808d5f00 ^ (ulonglong)auStack_118;
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 1;
  puVar9 = (uint *)0x0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    puVar9 = (uint *)(*(longlong *)(param_1 + 0x40) + 0x10);
  }
  if (puVar9 != (uint *)0x0) {
    uVar2 = *(ulonglong *)(param_1 + 0x60);
    uVar5 = uVar2 & 0xfffffffffffff1e1;
    *(ulonglong *)(param_1 + 0x60) = uVar5;
    if (param_3 != '\0') {
      *(ulonglong *)(param_1 + 0x60) = uVar5 | 4;
    }
    if (DAT_180bbec88 == '\0') {
      puVar6 = (undefined8 *)FUN_18030a970(&local_e8,param_2);
      local_e8 = *puVar6;
      uStack_e0 = puVar6[1];
      fVar15 = *(float *)(puVar6 + 2);
    }
    else {
      fVar15 = DAT_1808e3e10;
      local_e8 = _DAT_1808e3e00;
      uStack_e0 = uRam00000001808e3e08;
    }
    lVar3 = *(longlong *)(puVar9 + 0xc);
    uVar1 = DAT_180b0dfc8._4_4_;
    if ((lVar3 != 0) && (lVar3 != -0x10)) {
      uVar1 = *(uint *)(lVar3 + 0x1c);
    }
    auVar19 = ZEXT464(uVar1);
    fVar11 = param_7[1] * param_7[1] + *param_7 * *param_7;
    local_d8 = fVar15;
    if (fVar11 < 0.0) {
      fVar11 = (float)FUN_18061e150(fVar11);
    }
    else {
      fVar11 = SQRT(fVar11);
    }
    fVar11 = (float)FUN_180615630(0x43a00000,fVar11 * 1.2);
    uVar18 = auVar19._0_8_;
    iVar8 = 1;
    if (1 < param_5) {
      iVar8 = param_5;
    }
    fVar12 = (*param_4 - *param_6) / ((float)iVar8 * fVar15);
    auVar14 = ZEXT464((uint)fVar12);
    auVar13 = ZEXT416((uint)fVar12);
    fVar15 = (param_4[1] - param_6[1]) / ((float)iVar8 * fVar15);
    auVar17 = ZEXT464((uint)fVar15);
    auVar16 = ZEXT416((uint)fVar15);
    fVar15 = fVar15 * fVar15 + fVar12 * fVar12;
    if (fVar15 < 0.0) {
      fVar15 = (float)FUN_18061e150();
      auVar16 = auVar17._0_16_;
      auVar13 = auVar14._0_16_;
      uVar18 = auVar19._0_8_;
    }
    else {
      fVar15 = SQRT(fVar15);
    }
    if ((fVar11 < fVar15) && (0.0001 < fVar15)) {
      auVar13 = ZEXT416((uint)((fVar11 / fVar15) * auVar13._0_4_));
      auVar16 = ZEXT416((uint)((fVar11 / fVar15) * auVar16._0_4_));
    }
    local_c8 = ZEXT816(0);
    local_b8 = ZEXT816(0);
    auVar13 = vunpcklps_avx(auVar13,auVar16);
    auVar16 = vunpcklps_avx(ZEXT416((uint)*param_7),ZEXT416((uint)param_7[1]));
    local_f8 = local_c8;
    local_a8 = local_c8;
    local_98 = local_b8;
    FUN_18030a440(auVar16._0_8_,auVar13._0_8_,uVar18,&local_e8);
    FUN_18034cdd0(puVar9,param_2,local_c8);
    fVar15 = 0.0;
    pfVar7 = (float *)local_c8;
    fVar11 = 0.0;
    fVar12 = 0.0;
    do {
      fVar4 = ABS(*pfVar7) + ABS(pfVar7[1]);
      if (fVar15 < fVar4) {
        fVar15 = fVar4;
        fVar11 = *pfVar7;
        fVar12 = pfVar7[1];
      }
      pfVar7 = pfVar7 + 2;
    } while (pfVar7 != (float *)local_88);
    if (fVar11 <= 0.001) {
      if (fVar11 < -0.001) {
        *(ulonglong *)(param_1 + 0x60) = *(ulonglong *)(param_1 + 0x60) | 0x10;
      }
    }
    else {
      *(ulonglong *)(param_1 + 0x60) = *(ulonglong *)(param_1 + 0x60) | 8;
    }
    if (fVar12 <= 0.001) {
      if (fVar12 < -0.001) {
        *(ulonglong *)(param_1 + 0x60) = *(ulonglong *)(param_1 + 0x60) | 0x400;
      }
    }
    else {
      *(ulonglong *)(param_1 + 0x60) = *(ulonglong *)(param_1 + 0x60) | 0x200;
    }
    *(ulonglong *)(param_1 + 0x70) = *(ulonglong *)(param_1 + 0x70) & 0xfffffffffffff1e1;
    *(ulonglong *)(param_1 + 0x68) =
         *(ulonglong *)(param_1 + 0x68) |
         (ulonglong)(((uint)uVar2 ^ (uint)*(undefined8 *)(param_1 + 0x60)) & 0xe1e);
    puVar10 = (uint *)0x0;
    if (*(longlong *)(puVar9 + 10) != 0) {
      puVar10 = (uint *)(*(longlong *)(puVar9 + 10) + 0x10);
    }
    if (puVar10 != (uint *)0x0) {
      *puVar9 = *puVar9 | 2;
      uVar18 = *(undefined8 *)(param_1 + 0x60);
      *puVar10 = *puVar10 | 1;
      uVar1 = *puVar10;
      *(undefined8 *)(puVar10 + 2) = uVar18;
      uVar18 = *(undefined8 *)(param_1 + 0x68);
      *puVar10 = uVar1 | 2;
      *(undefined8 *)(puVar10 + 4) = uVar18;
      uVar18 = *(undefined8 *)(param_1 + 0x70);
      *puVar10 = uVar1 | 6;
      *(undefined8 *)(puVar10 + 6) = uVar18;
    }
  }
}



