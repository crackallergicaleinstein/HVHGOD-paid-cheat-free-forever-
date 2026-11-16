// FUN_180301700 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180301700 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180301700(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  ULONGLONG UVar5;
  float *pfVar6;
  uint *puVar7;
  ulonglong uVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  float fVar13;
  char cVar15;
  undefined1 auVar14 [64];
  undefined1 auVar16 [64];
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [64];
  float fVar21;
  float local_c8 [6];
  undefined *local_b0;
  undefined8 local_a0;
  longlong lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  _DAT_180c646f8 = (uint3)_DAT_180c646f8;
  if (DAT_180cc82f8 == '\0') {
    _DAT_180c646f8 = 0;
    _DAT_180c64700 = 0;
    return;
  }
  if (DAT_180b8e554 != '\0') {
LAB_180301b55:
    _DAT_180c646f8 = (ushort)DAT_180c646f8;
    return;
  }
  if (DAT_180b90050 != '\0') {
    return;
  }
  if (DAT_180b900c0 != '\0') {
    return;
  }
  if (DAT_180b8fc30 != '\0') {
    return;
  }
  if (DAT_180b8fe80 != '\0') {
    return;
  }
  if (DAT_180b8fffc != '\0') {
    return;
  }
  if (DAT_180b90028 != '\0') {
    return;
  }
  if (DAT_180b8e620 != '\0') {
    return;
  }
  if (DAT_180b8e622 != '\0') {
    return;
  }
  if (DAT_180cc8b68 != '\0') {
    return;
  }
  AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  local_a0 = _DAT_180bb8890;
  lStack_98 = lRam0000000180bb8898;
  uStack_90 = uRam0000000180bb88a0;
  uStack_88 = uRam0000000180bb88a8;
  cVar15 = cRam0000000180bb88b8;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  lVar2 = lStack_98;
  iVar4 = DAT_180c6f198;
  if (lStack_98 == 0) {
    return;
  }
  if (cVar15 == '\0') {
    return;
  }
  if ((DAT_180c6f198 == 0) && (UVar5 = GetTickCount64(), DAT_180c6f1a0 <= UVar5)) {
    local_b0 = &DAT_1808fefa0;
    iVar4 = FUN_1805f68d0(&DAT_1808fefa0);
    if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1808fefec == 0x7fffffff) {
      DAT_1808fefec = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c6f198 == 0) && (DAT_180c6f1a0 <= UVar5)) {
      DAT_180c6f198 = FUN_1804174b0("C_BaseEntity",0x5600aa92);
      if (DAT_180c6f198 == 0) {
        DAT_180c6f1a0 = UVar5 + 1000;
      }
      else {
        DAT_180c6f1a0 = 0xffffffffffffffff;
      }
    }
    iVar4 = DAT_180c6f198;
    FUN_1805f68fc(&DAT_1808fefa0);
  }
  if (*(char *)(iVar4 + lVar2) == '\t') {
    return;
  }
  if (*(char *)(iVar4 + lVar2) == '\a') {
    return;
  }
  if ((((DAT_180b8e114 & 1) == 0) || ((DAT_180b0dfd8 & 0x618) != 0)) || ((DAT_180b0dfd8 & 2) != 0))
  goto LAB_180301b55;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = DAT_180b8e124;
  auVar12 = vshufps_avx(auVar12,auVar12,0x55);
  local_b0 = (undefined *)DAT_180b8e124;
  puVar3 = local_b0;
  fVar10 = auVar12._0_4_;
  local_b0._0_4_ = (float)DAT_180b8e124;
  fVar13 = fVar10 * fVar10 + local_b0._0_4_ * local_b0._0_4_;
  auVar19._12_4_ = 0;
  auVar19._0_12_ = ZEXT812(0);
  auVar19 = auVar19 << 0x20;
  if (fVar13 == 0.0) goto LAB_180301b55;
  if (fVar13 < 0.0) {
    auVar14 = ZEXT1664(auVar12);
    auVar16 = ZEXT464((uint)local_b0._0_4_);
    auVar20 = ZEXT1264(ZEXT812(0)) << 0x20;
    local_b0 = puVar3;
    fVar13 = (float)FUN_18061e150();
    auVar19 = auVar20._0_16_;
    fVar17 = auVar16._0_4_;
    fVar10 = auVar14._0_4_;
    puVar3 = local_b0;
  }
  else {
    fVar13 = SQRT(fVar13);
    fVar17 = local_b0._0_4_;
  }
  local_b0 = puVar3;
  if (fVar13 <= 15.0) goto LAB_180301b55;
  *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) | 1;
  puVar7 = (uint *)0x0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    puVar7 = (uint *)(*(longlong *)(param_2 + 0x40) + 0x10);
  }
  if (puVar7 == (uint *)0x0) {
    return;
  }
  fVar17 = -fVar17 / fVar13;
  fVar13 = -fVar10 / fVar13;
  pfVar9 = (float *)&DAT_0000000c;
  if (*(longlong *)(puVar7 + 0xc) != 0) {
    pfVar9 = (float *)(*(longlong *)(puVar7 + 0xc) + 0x1c);
  }
  auVar14 = ZEXT464((uint)(*pfVar9 * 0.017453292));
  auVar16 = ZEXT1664(auVar19);
  fVar10 = (float)FUN_180638e00();
  fVar11 = (float)FUN_180637540(auVar14._0_8_);
  fVar18 = auVar16._0_4_;
  local_c8[2] = 1.0;
  local_c8[0] = -1.0;
  local_c8[1] = fVar10 * fVar13 + fVar11 * fVar17;
  pfVar9 = local_c8;
  if (-1.0 <= local_c8[1]) {
    pfVar9 = local_c8 + 1;
  }
  pfVar6 = local_c8 + 2;
  if (local_c8[1] <= 1.0) {
    pfVar6 = pfVar9;
  }
  fVar21 = *pfVar6;
  local_c8[5] = 1.0;
  local_c8[3] = -1.0;
  local_c8[4] = (fVar10 * fVar17 - fVar11 * fVar13) * -1.0;
  pfVar9 = local_c8 + 3;
  if (-1.0 <= local_c8[4]) {
    pfVar9 = local_c8 + 4;
  }
  pfVar6 = local_c8 + 5;
  if (local_c8[4] <= 1.0) {
    pfVar6 = pfVar9;
  }
  fVar13 = *pfVar6;
  puVar7[0x12] = (uint)fVar21;
  *puVar7 = *puVar7 | 0xc0;
  puVar7[0x13] = (uint)fVar13;
  if (puVar7 != (uint *)0xfffffffffffffff8) {
    puVar7 = (uint *)FUN_1803dfb00();
    fVar18 = auVar16._0_4_;
    if (puVar7 != (uint *)0x0) {
      puVar7[2] = 0;
      puVar7[3] = 0;
      *(undefined1 *)(puVar7 + 4) = 0;
      *puVar7 = *puVar7 | 7;
      uVar1 = *puVar7;
      puVar7[5] = 0;
      fVar10 = DAT_180b8e148;
      *puVar7 = uVar1 | 8;
      puVar7[6] = (uint)(fVar21 - fVar10);
      fVar10 = DAT_180b8e14c;
      *puVar7 = uVar1 | 0x18;
      puVar7[7] = (uint)(fVar13 - fVar10);
    }
  }
  uVar8 = *(ulonglong *)(param_2 + 0x60) & 0xfffffffffffff9e7;
  *(ulonglong *)(param_2 + 0x60) = uVar8;
  if (fVar21 <= fVar18) {
    if (fVar18 <= fVar21) goto LAB_180301b20;
    uVar8 = uVar8 | 0x10;
  }
  else {
    uVar8 = uVar8 | 8;
  }
  *(ulonglong *)(param_2 + 0x60) = uVar8;
LAB_180301b20:
  if (fVar13 <= fVar18) {
    if (fVar13 < fVar18) {
      *(ulonglong *)(param_2 + 0x60) = uVar8 | 0x400;
    }
    _DAT_180c646f8 = CONCAT21(0x101,DAT_180c646f8);
    return;
  }
  *(ulonglong *)(param_2 + 0x60) = uVar8 | 0x200;
  _DAT_180c646f8 = CONCAT21(0x101,DAT_180c646f8);
  return;
}



