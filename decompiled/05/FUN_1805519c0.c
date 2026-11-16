// FUN_1805519c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805519c0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1805519c0(undefined8 param_1,uint *param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  char cVar6;
  char *pcVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [64];
  undefined1 auVar20 [16];
  undefined1 auVar21 [64];
  undefined1 auStack_1c8 [32];
  undefined *local_1a8;
  undefined1 *local_1a0;
  undefined1 *local_198;
  float fStack_190;
  float fStack_18c;
  undefined1 local_188 [16];
  undefined1 auStack_178 [16];
  ulonglong local_168;
  undefined1 *puStack_160;
  undefined8 local_158;
  uint *local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  uint local_120;
  undefined4 uStack_11c;
  undefined1 *puStack_118;
  undefined8 uStack_110;
  uint local_108 [2];
  undefined8 local_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined1 local_d0 [16];
  undefined8 local_c0;
  ulonglong local_b8 [18];
  
  local_b8[0xc] = DAT_1808d5f00 ^ (ulonglong)auStack_1c8;
  local_d0 = (undefined1  [16])0x0;
  local_c0 = 0;
  local_148 = param_2;
  FUN_1800e9bc0(local_b8,3);
  local_100 = 0;
  auVar19 = ZEXT864(0);
  uStack_f8 = 0;
  uStack_f4 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e4 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d4 = 0;
  FUN_1804c2800("Armor");
  plVar2 = *(longlong **)(DAT_180bb8ae8 + 0x14d0);
  uVar12 = ~*(uint *)(plVar2[0x22] + -4 + (longlong)(int)plVar2[0x21] * 4);
  pcVar7 = "##value";
  cVar6 = '#';
  uVar13 = uVar12;
  do {
    pcVar7 = pcVar7 + 1;
    if (((cVar6 == '#') && (*pcVar7 == '#')) && (pcVar7[1] == '#')) {
      pcVar7 = pcVar7 + 2;
      uVar13 = uVar12;
    }
    else {
      uVar13 = crc32(uVar13,cVar6);
    }
    cVar6 = *pcVar7;
  } while (cVar6 != '\0');
  uVar13 = ~uVar13;
  if (*(uint *)(*plVar2 + 0x1534) == uVar13) {
    FUN_1804cf810(uVar13,0xb,"##value");
  }
  if ((*(int *)(DAT_180bb8ae8 + 0x2008) < *(int *)(DAT_180bb8ae8 + 0x1ff8)) &&
     (*(uint *)((longlong)*(int *)(DAT_180bb8ae8 + 0x2008) * 0x38 +
               *(longlong *)(DAT_180bb8ae8 + 0x2000)) == uVar13)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  iVar1 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
  if (iVar1 < 2) {
    FUN_1804c5a40("Calling PopID() too many times!");
  }
  else {
    *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar1 + -1;
  }
  AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  local_140 = _DAT_180bb8890;
  uStack_138 = uRam0000000180bb8898;
  puStack_130 = (undefined8 *)uRam0000000180bb88a0;
  uStack_128 = uRam0000000180bb88a8;
  local_120 = (uint)DAT_180bb88b0;
  uStack_11c = DAT_180bb88b0._4_4_;
  puStack_118 = DAT_180bb88b0._8_8_;
  auVar19 = ZEXT1664(auVar19._0_16_);
  ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  local_108[0] = *param_2;
  if (2 < local_108[0]) {
    local_108[0] = 0;
  }
  lVar16 = 0;
  puVar11 = &local_100;
  uVar14 = 0;
  auVar21 = ZEXT464(0x3f800000);
  do {
    puVar8 = (undefined8 *)FUN_18050a310(local_188,(longlong)&PTR_DAT_1808014b0 + uVar14,local_120);
    auVar20 = auVar21._0_16_;
    auVar18 = auVar19._0_16_;
    puVar10 = (undefined8 *)((longlong)local_b8 + uVar14);
    if (puVar10 != puVar8) {
      FUN_18015c010(puVar10);
      auVar20 = auVar21._0_16_;
      auVar18 = auVar19._0_16_;
      uVar17 = puVar8[1];
      uVar3 = puVar8[2];
      uVar4 = puVar8[3];
      *puVar10 = *puVar8;
      *(undefined8 *)((longlong)local_b8 + uVar14 + 8) = uVar17;
      *(undefined8 *)((longlong)local_b8 + uVar14 + 0x10) = uVar3;
      *(undefined8 *)((longlong)local_b8 + uVar14 + 0x18) = uVar4;
      puVar8[2] = 0;
      puVar8[3] = 0xf;
      *(undefined1 *)puVar8 = 0;
    }
    auVar19 = ZEXT1664(auVar18);
    auVar21 = ZEXT1664(auVar20);
    FUN_18015c010(local_188);
    if (0xf < *(ulonglong *)((longlong)local_b8 + uVar14 + 0x18)) {
      puVar10 = (undefined8 *)*puVar10;
    }
    *(undefined8 **)(local_d0 + lVar16 * 8) = puVar10;
    if (((bVar5) || (lVar16 == (int)local_108[0])) &&
       (**(char **)((longlong)&PTR_PTR_1808014b8 + uVar14) != '\0')) {
      lVar9 = FUN_18050a280((longlong)&PTR_DAT_1808014b0 + uVar14,local_120);
      local_188 = (undefined1  [16])0x0;
      auStack_178 = (undefined1  [16])0x0;
      lVar15 = -1;
      do {
        lVar15 = lVar15 + 1;
      } while (*(char *)(lVar9 + lVar15) != '\0');
      uVar17 = FUN_18015ba30(local_188,lVar9);
      puVar10 = (undefined8 *)FUN_1803db750(uVar17,local_188,auVar21._0_8_);
      FUN_18015c010(local_188);
      if (puVar10 == (undefined8 *)0x0) {
        local_198 = (undefined1 *)0x0;
        fStack_190 = auVar19._0_4_;
        fStack_18c = fStack_190;
      }
      else {
        local_198 = (undefined1 *)*puVar10;
        fStack_190 = (float)*(int *)(puVar10 + 4);
        fStack_18c = (float)*(int *)((longlong)puVar10 + 0x24);
      }
      *puVar11 = local_198;
      puVar11[1] = CONCAT44(fStack_18c,fStack_190);
    }
    lVar16 = lVar16 + 1;
    uVar14 = uVar14 + 0x20;
    puVar11 = puVar11 + 2;
  } while (uVar14 < 0x60);
  if (local_108[0] == 0) {
    local_188 = (undefined1  [16])0x0;
    auStack_178 = (undefined1  [16])0x0;
    uVar17 = FUN_18015ba30(local_188,"kevlar",6);
    puVar11 = (undefined8 *)FUN_1803db750(uVar17,local_188,auVar21._0_8_);
    FUN_18015c010();
    if (puVar11 == (undefined8 *)0x0) {
      local_198 = (undefined1 *)0x0;
      fStack_190 = auVar19._0_4_;
      fStack_18c = fStack_190;
    }
    else {
      local_198 = (undefined1 *)*puVar11;
      fStack_190 = (float)*(int *)(puVar11 + 4);
      fStack_18c = (float)*(int *)((longlong)puVar11 + 0x24);
    }
  }
  else {
    local_198 = *(undefined1 **)(local_108 + (longlong)(int)local_108[0] * 4 + 2);
    fStack_190 = (float)*(undefined8 *)(local_d0 + (longlong)(int)local_108[0] * 0x10 + -0x28);
    fStack_18c = (float)((ulonglong)
                         *(undefined8 *)(local_d0 + (longlong)(int)local_108[0] * 0x10 + -0x28) >>
                        0x20);
  }
  uVar13 = local_120;
  local_140 = 0;
  uStack_138 = 0;
  puStack_130 = &local_100;
  uStack_128 = 3;
  local_120 = local_120 & 0xffffff00;
  auVar18._8_4_ = fStack_190;
  auVar18._0_8_ = local_198;
  auVar18._12_4_ = fStack_18c;
  puStack_118 = local_198;
  uStack_110 = auVar18._8_8_;
  local_188 = ZEXT816(0);
  auStack_178._8_8_ = 3;
  auStack_178._0_8_ = puStack_130;
  local_168 = CONCAT44(uStack_11c,uVar13) & 0xffffffffffffff00;
  puStack_160 = local_198;
  local_158 = vmovhpd_avx(auVar18);
  local_198 = local_d0;
  fStack_190 = 4.2039e-45;
  fStack_18c = 0.0;
  local_1a0 = local_188;
  local_1a8 = &DAT_18082a264;
  cVar6 = FUN_18048d220("Armor",local_108,&local_198,1);
  if (cVar6 != '\0') {
    *local_148 = local_108[0];
  }
  _eh_vector_destructor_iterator_(local_b8,0x20,3,thunk_FUN_18015c010);
}



