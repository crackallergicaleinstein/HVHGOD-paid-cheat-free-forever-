// FUN_18030bbc0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18030bbc0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18030bbc0(longlong param_1,undefined8 param_2,undefined8 param_3,float *param_4,
                  float param_5)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 *puVar8;
  float *pfVar9;
  ulonglong uVar10;
  uint *puVar11;
  uint *puVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [64];
  undefined1 auVar16 [64];
  float fVar17;
  undefined1 auVar18 [64];
  undefined1 auVar19 [64];
  undefined1 auVar20 [64];
  undefined1 auStack_148 [32];
  undefined1 *local_128;
  undefined1 local_118 [24];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  ulonglong local_a8 [16];
  
  local_a8[0] = DAT_1808d5f00 ^ (ulonglong)auStack_148;
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 1;
  puVar11 = (uint *)0x0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    puVar11 = (uint *)(*(longlong *)(param_1 + 0x40) + 0x10);
  }
  if (puVar11 == (uint *)0x0) {
  }
  if (DAT_180bbeabb == '\0') {
    puVar8 = (undefined8 *)FUN_18030a970(local_118);
    local_100 = *puVar8;
    uStack_f8 = puVar8[1];
    local_f0 = *(undefined4 *)(puVar8 + 2);
  }
  else {
    local_f0 = DAT_1808e3ac0;
    local_100 = _DAT_1808e3ab0;
    uStack_f8 = uRam00000001808e3ab8;
  }
  lVar2 = *(longlong *)(puVar11 + 0xc);
  uVar1 = DAT_180b0dfc8._4_4_;
  if ((lVar2 != 0) && (lVar2 != -0x10)) {
    uVar1 = *(uint *)(lVar2 + 0x1c);
  }
  auVar20 = ZEXT464(uVar1);
  fVar13 = *param_4;
  auVar18 = ZEXT464((uint)fVar13);
  fVar14 = param_4[1];
  auVar19 = ZEXT464((uint)fVar14);
  local_e8 = ZEXT816(0);
  local_d8 = ZEXT816(0);
  fVar17 = 0.0;
  local_c8 = local_e8;
  local_b8 = local_d8;
  if (param_5 <= 0.0) {
    auVar6 = vunpcklps_avx(ZEXT416((uint)fVar13),ZEXT416((uint)fVar14));
    local_128 = local_e8;
    FUN_180309df0(auVar6._0_8_,param_3,uVar1,&local_100);
  }
  else {
    fVar13 = fVar14 * fVar14 + fVar13 * fVar13;
    if (fVar13 < 0.0) {
      fVar13 = (float)FUN_18061e150();
    }
    else {
      fVar13 = SQRT(fVar13);
    }
    fVar13 = fVar13 + param_5;
    fVar14 = (float)param_3 * 0.017453292;
    auVar15 = ZEXT464((uint)fVar14);
    fVar14 = (float)FUN_180637540(fVar14);
    auVar16 = ZEXT464((uint)(fVar14 * fVar13));
    fVar14 = (float)FUN_180638e00(auVar15._0_8_);
    auVar6 = vunpcklps_avx(auVar16._0_16_,ZEXT416((uint)(fVar14 * fVar13)));
    auVar7 = vunpcklps_avx(auVar18._0_16_,auVar19._0_16_);
    local_128 = local_e8;
    FUN_18030a440(auVar7._0_8_,auVar6._0_8_,auVar20._0_8_,&local_100);
  }
  FUN_180330220(puVar11,param_2,local_e8);
  fVar13 = 0.0;
  pfVar9 = (float *)local_e8;
  fVar14 = 0.0;
  do {
    fVar5 = ABS(*pfVar9) + ABS(pfVar9[1]);
    if (fVar13 < fVar5) {
      fVar13 = fVar5;
      fVar14 = pfVar9[1];
      fVar17 = *pfVar9;
    }
    pfVar9 = pfVar9 + 2;
  } while (pfVar9 != (float *)local_a8);
  uVar3 = *(ulonglong *)(param_1 + 0x60);
  uVar10 = uVar3 & 0xfffffffffffff9e7;
  *(ulonglong *)(param_1 + 0x60) = uVar10;
  if (fVar17 <= 0.001) {
    if (fVar17 < -0.001) {
      uVar10 = uVar10 | 0x10;
      goto LAB_18030be41;
    }
  }
  else {
    uVar10 = uVar10 | 8;
LAB_18030be41:
    *(ulonglong *)(param_1 + 0x60) = uVar10;
  }
  if (fVar14 <= 0.001) {
    if (-0.001 <= fVar14) goto LAB_18030be6a;
    uVar10 = uVar10 | 0x400;
  }
  else {
    uVar10 = uVar10 | 0x200;
  }
  *(ulonglong *)(param_1 + 0x60) = uVar10;
LAB_18030be6a:
  *(ulonglong *)(param_1 + 0x70) = *(ulonglong *)(param_1 + 0x70) & 0xfffffffffffff9e7;
  *(ulonglong *)(param_1 + 0x68) =
       *(ulonglong *)(param_1 + 0x68) | (ulonglong)(((uint)uVar3 ^ (uint)uVar10) & 0x618);
  puVar12 = (uint *)0x0;
  if (*(longlong *)(puVar11 + 10) != 0) {
    puVar12 = (uint *)(*(longlong *)(puVar11 + 10) + 0x10);
  }
  if (puVar12 != (uint *)0x0) {
    *puVar11 = *puVar11 | 2;
    uVar4 = *(undefined8 *)(param_1 + 0x60);
    *puVar12 = *puVar12 | 1;
    uVar1 = *puVar12;
    *(undefined8 *)(puVar12 + 2) = uVar4;
    uVar4 = *(undefined8 *)(param_1 + 0x68);
    *puVar12 = uVar1 | 2;
    *(undefined8 *)(puVar12 + 4) = uVar4;
    uVar4 = *(undefined8 *)(param_1 + 0x70);
    *puVar12 = uVar1 | 6;
    *(undefined8 *)(puVar12 + 6) = uVar4;
  }
}



