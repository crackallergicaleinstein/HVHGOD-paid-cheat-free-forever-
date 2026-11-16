// FUN_1802c9810 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802c9810 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802c9810(float *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined1 auVar3 [16];
  short sVar4;
  int *piVar5;
  ULONGLONG UVar6;
  char cVar7;
  int *piVar8;
  ulonglong uVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined4 local_1a0;
  undefined1 local_198 [132];
  float local_114;
  float local_110;
  float local_10c;
  float local_ec;
  char local_dd;
  char local_90;
  undefined8 local_88;
  float local_80;
  ulonglong local_78;
  
  local_78 = DAT_1808d5f00 ^ (ulonglong)auStack_1d8;
  piVar5 = (int *)FUN_1802e96a0();
  piVar8 = &DAT_180b92f80;
  if (piVar5 != (int *)0x0) {
    piVar8 = piVar5;
  }
  if ((char)piVar8[5] == '\0') {
  }
  fVar15 = *param_1;
  fVar13 = param_1[1];
  fVar11 = param_1[2];
  sVar4 = thunk_FUN_180624430(fVar13 + fVar15 + fVar11);
  if (0 < sVar4) {
  }
  if (32768.0 < ABS(fVar15)) {
  }
  if (32768.0 < ABS(fVar13)) {
  }
  if (32768.0 < ABS(fVar11)) {
  }
  if (param_2 == 1) {
  }
  UVar6 = GetTickCount64();
  fVar13 = 16.0;
  fVar15 = 0.0;
  uVar9 = (ulonglong)
          (((int)(param_1[1] * 16.0) * 0x9f ^ (int)(*param_1 * 16.0) * 0x5d ^
           (int)(param_1[2] * 16.0) * -0x49) & 0x3ff);
  lVar10 = uVar9 * 0x40;
  if ((((((char)piVar8[uVar9 * 0x10 + 0x22] != '\0') &&
        (*(longlong *)(piVar8 + uVar9 * 0x10 + 0x20) == *(longlong *)(piVar8 + 6))) &&
       (*(ulonglong *)(piVar8 + uVar9 * 0x10 + 0x1e) <= UVar6)) &&
      ((UVar6 - *(ulonglong *)(piVar8 + uVar9 * 0x10 + 0x1e) < 0x10 &&
       (((float)piVar8[uVar9 * 0x10 + 0x19] - (float)piVar8[3]) *
        ((float)piVar8[uVar9 * 0x10 + 0x19] - (float)piVar8[3]) +
        ((float)piVar8[uVar9 * 0x10 + 0x18] - (float)piVar8[2]) *
        ((float)piVar8[uVar9 * 0x10 + 0x18] - (float)piVar8[2]) +
        ((float)piVar8[uVar9 * 0x10 + 0x1a] - (float)piVar8[4]) *
        ((float)piVar8[uVar9 * 0x10 + 0x1a] - (float)piVar8[4]) == 0.0)))) &&
     (fVar11 = (float)piVar8[uVar9 * 0x10 + 0x1b] - *param_1,
     fVar12 = (float)piVar8[uVar9 * 0x10 + 0x1c] - param_1[1],
     fVar14 = (float)piVar8[uVar9 * 0x10 + 0x1d] - param_1[2],
     fVar12 * fVar12 + fVar11 * fVar11 + fVar14 * fVar14 == 0.0)) {
  }
  iVar2 = *piVar8;
  *piVar8 = iVar2 + -1;
  if (iVar2 < 1) {
LAB_1802c9d4a:
    *(undefined1 *)(piVar8 + 1) = 0;
  }
  fVar12 = (float)piVar8[2] - *param_1;
  fVar14 = (float)piVar8[3] - param_1[1];
  fVar16 = (float)piVar8[4] - param_1[2];
  fVar11 = fVar14 * fVar14 + fVar12 * fVar12 + fVar16 * fVar16;
  if (fVar11 < 0.0) {
    fVar11 = (float)FUN_18061e150(fVar11);
  }
  else {
    fVar11 = SQRT(fVar11);
  }
  if (fVar11 <= 0.001) {
    local_88 = *(undefined8 *)param_1;
    local_80 = param_1[2];
  }
  else {
    auVar3 = vminss_avx(ZEXT416((uint)(fVar11 * 0.5)),ZEXT416(0x3e800000));
    fVar11 = auVar3._0_4_ / fVar11;
    local_80 = fVar16 * fVar11 + param_1[2];
    auVar3 = vunpcklps_avx(ZEXT416((uint)(fVar12 * fVar11 + *param_1)),
                           ZEXT416((uint)(fVar14 * fVar11 + param_1[1])));
    local_88 = auVar3._0_8_;
  }
  local_1b8 = *(undefined8 *)(piVar8 + 6);
  local_1a0 = 7;
  local_1b0 = 0x1c3003;
  FUN_180417de0(local_88,local_198,piVar8 + 2,&local_88);
  if ((local_90 == '\0') || (sVar4 = thunk_FUN_180624430(local_ec), 0 < sVar4)) goto LAB_1802c9d4a;
  local_114 = local_114 - *param_1;
  local_110 = local_110 - param_1[1];
  fVar11 = local_110 * local_110 + local_114 * local_114 +
           (local_10c - param_1[2]) * (local_10c - param_1[2]);
  if ((local_dd != '\0') || ((local_ec < 0.9999 && (3.0625 < fVar11)))) {
    cVar7 = '\0';
  }
  else {
    cVar7 = '\x01';
  }
  if ((((((char)piVar8[uVar9 * 0x10 + 0x22] != '\0') &&
        (*(longlong *)(piVar8 + uVar9 * 0x10 + 0x20) == *(longlong *)(piVar8 + 6))) &&
       (*(ulonglong *)(piVar8 + uVar9 * 0x10 + 0x1e) <= UVar6)) &&
      (((UVar6 - *(ulonglong *)(piVar8 + uVar9 * 0x10 + 0x1e) < 0x50 &&
        (fVar12 = (float)piVar8[uVar9 * 0x10 + 0x1b] - *param_1,
        fVar14 = (float)piVar8[uVar9 * 0x10 + 0x1c] - param_1[1],
        fVar14 * fVar14 + fVar12 * fVar12 +
        ((float)piVar8[uVar9 * 0x10 + 0x1d] - param_1[2]) *
        ((float)piVar8[uVar9 * 0x10 + 0x1d] - param_1[2]) == fVar15)) &&
       ((((float)piVar8[uVar9 * 0x10 + 0x19] - (float)piVar8[3]) *
         ((float)piVar8[uVar9 * 0x10 + 0x19] - (float)piVar8[3]) +
         ((float)piVar8[uVar9 * 0x10 + 0x18] - (float)piVar8[2]) *
         ((float)piVar8[uVar9 * 0x10 + 0x18] - (float)piVar8[2]) +
         ((float)piVar8[uVar9 * 0x10 + 0x1a] - (float)piVar8[4]) *
         ((float)piVar8[uVar9 * 0x10 + 0x1a] - (float)piVar8[4]) < 64.0 &&
        ((cVar1 = *(char *)(lVar10 + 0x89 + (longlong)piVar8), cVar7 != cVar1 && (local_dd == '\0'))
        )))))) && (fVar11 < fVar13)) {
    if (((char)piVar8[uVar9 * 0x10 + 0x26] == '\0') ||
       (*(char *)(lVar10 + 0x99 + (longlong)piVar8) != cVar7)) {
      *(undefined1 *)(piVar8 + uVar9 * 0x10 + 0x26) = 1;
      *(char *)(lVar10 + 0x99 + (longlong)piVar8) = cVar7;
      *(ULONGLONG *)(piVar8 + uVar9 * 0x10 + 0x24) = UVar6;
    }
    if (UVar6 - *(longlong *)(piVar8 + uVar9 * 0x10 + 0x24) < 0x10) {
      cVar7 = cVar1;
      goto LAB_1802c9cff;
    }
  }
  *(undefined1 *)(piVar8 + uVar9 * 0x10 + 0x26) = 0;
LAB_1802c9cff:
  *(undefined8 *)(piVar8 + uVar9 * 0x10 + 0x18) = *(undefined8 *)(piVar8 + 2);
  piVar8[uVar9 * 0x10 + 0x1a] = piVar8[4];
  *(undefined8 *)(piVar8 + uVar9 * 0x10 + 0x1b) = *(undefined8 *)param_1;
  piVar8[uVar9 * 0x10 + 0x1d] = (int)param_1[2];
  *(ULONGLONG *)(piVar8 + uVar9 * 0x10 + 0x1e) = UVar6;
  *(undefined8 *)(piVar8 + uVar9 * 0x10 + 0x20) = *(undefined8 *)(piVar8 + 6);
  *(undefined1 *)(piVar8 + uVar9 * 0x10 + 0x22) = 1;
  *(char *)(lVar10 + 0x89 + (longlong)piVar8) = cVar7;
}



