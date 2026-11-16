// FUN_180551e90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180551e90 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180551e90(undefined8 param_1,uint *param_2,longlong param_3,undefined8 param_4,
                  longlong param_5)

{
  undefined1 *puVar1;
  int iVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  char cVar7;
  char *pcVar8;
  ulonglong *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  uint uVar13;
  uint uVar14;
  ulonglong *puVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [64];
  undefined1 auVar22 [16];
  undefined1 auVar23 [64];
  undefined1 auStack_1e8 [32];
  undefined8 local_1c8;
  undefined8 *local_1c0;
  char local_1b8;
  undefined1 *local_1a8;
  float fStack_1a0;
  float fStack_19c;
  undefined1 local_198 [16];
  undefined1 auStack_188 [16];
  uint local_178;
  undefined4 uStack_174;
  undefined1 *puStack_170;
  undefined8 uStack_168;
  longlong local_160;
  longlong local_158;
  undefined8 local_150;
  undefined8 local_148;
  uint *local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  ulonglong local_118;
  undefined1 *puStack_110;
  undefined8 local_108;
  uint local_f8 [2];
  undefined8 local_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined1 local_d0 [16];
  ulonglong local_b8 [8];
  ulonglong local_78;
  
  local_78 = DAT_1808d5f00 ^ (ulonglong)auStack_1e8;
  local_158 = param_5;
  local_d0 = (undefined1  [16])0x0;
  local_150 = param_4;
  local_148 = param_1;
  local_140 = param_2;
  FUN_1800e9bc0(local_b8,2);
  local_f0 = 0;
  auVar21 = ZEXT864(0);
  uStack_e8 = 0;
  uStack_e4 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d4 = 0;
  FUN_1804c2800(param_1);
  plVar3 = *(longlong **)(DAT_180bb8ae8 + 0x14d0);
  uVar13 = ~*(uint *)(plVar3[0x22] + -4 + (longlong)(int)plVar3[0x21] * 4);
  pcVar8 = "##value";
  cVar7 = '#';
  uVar14 = uVar13;
  do {
    pcVar8 = pcVar8 + 1;
    if (((cVar7 == '#') && (*pcVar8 == '#')) && (pcVar8[1] == '#')) {
      pcVar8 = pcVar8 + 2;
      uVar14 = uVar13;
    }
    else {
      uVar14 = crc32(uVar14,cVar7);
    }
    cVar7 = *pcVar8;
  } while (cVar7 != '\0');
  uVar14 = ~uVar14;
  if (*(uint *)(*plVar3 + 0x1534) == uVar14) {
    FUN_1804cf810(uVar14,0xb,"##value");
  }
  if ((*(int *)(DAT_180bb8ae8 + 0x1ff8) <= *(int *)(DAT_180bb8ae8 + 0x2008)) ||
     (local_1b8 = '\x01',
     *(uint *)((longlong)*(int *)(DAT_180bb8ae8 + 0x2008) * 0x38 +
              *(longlong *)(DAT_180bb8ae8 + 0x2000)) != uVar14)) {
    local_1b8 = '\0';
  }
  iVar2 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
  if (iVar2 < 2) {
    FUN_1804c5a40("Calling PopID() too many times!");
  }
  else {
    *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar2 + -1;
  }
  AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  local_198._8_8_ = uRam0000000180bb8898;
  local_198._0_8_ = _DAT_180bb8890;
  auStack_188._8_8_ = uRam0000000180bb88a8;
  auStack_188._0_8_ = uRam0000000180bb88a0;
  local_178 = (uint)DAT_180bb88b0;
  uStack_174 = DAT_180bb88b0._4_4_;
  puStack_170 = DAT_180bb88b0._8_8_;
  auVar21 = ZEXT1664(auVar21._0_16_);
  ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  uVar14 = local_178;
  local_f8[0] = *param_2;
  if (1 < local_f8[0]) {
    local_f8[0] = 0;
  }
  uVar16 = 0;
  puVar12 = &local_f0;
  puVar15 = local_b8;
  local_160 = param_3 - (longlong)local_b8;
  lVar18 = -1;
  auVar23 = ZEXT464(0x3f800000);
  do {
    puVar1 = (undefined1 *)(local_160 + (longlong)puVar15);
    puVar9 = (ulonglong *)FUN_18050a310(local_198,puVar1,uVar14);
    auVar22 = auVar23._0_16_;
    auVar20 = auVar21._0_16_;
    if (puVar15 != puVar9) {
      FUN_18015c010(puVar15);
      auVar22 = auVar23._0_16_;
      auVar20 = auVar21._0_16_;
      uVar4 = puVar9[1];
      uVar5 = puVar9[2];
      uVar6 = puVar9[3];
      *puVar15 = *puVar9;
      puVar15[1] = uVar4;
      puVar15[2] = uVar5;
      puVar15[3] = uVar6;
      puVar9[2] = 0;
      puVar9[3] = 0xf;
      *(undefined1 *)puVar9 = 0;
    }
    auVar21 = ZEXT1664(auVar20);
    auVar23 = ZEXT1664(auVar22);
    FUN_18015c010(local_198);
    puVar9 = puVar15;
    if (0xf < puVar15[3]) {
      puVar9 = (ulonglong *)*puVar15;
    }
    *(ulonglong **)(local_d0 + uVar16 * 8) = puVar9;
    if (((local_1b8 != '\0') || (uVar16 == (longlong)(int)local_f8[0])) &&
       (**(char **)(puVar1 + 8) != '\0')) {
      lVar10 = FUN_18050a280((undefined1 *)(local_160 + (longlong)puVar15),uVar14);
      local_198 = (undefined1  [16])0x0;
      auStack_188 = (undefined1  [16])0x0;
      lVar17 = -1;
      do {
        lVar17 = lVar17 + 1;
      } while (*(char *)(lVar10 + lVar17) != '\0');
      uVar19 = FUN_18015ba30(local_198,lVar10);
      puVar11 = (undefined8 *)FUN_1803db750(uVar19,local_198,auVar23._0_8_);
      FUN_18015c010(local_198);
      if (puVar11 == (undefined8 *)0x0) {
        local_1a8 = (undefined1 *)0x0;
        fStack_1a0 = auVar21._0_4_;
        fStack_19c = fStack_1a0;
      }
      else {
        local_1a8 = (undefined1 *)*puVar11;
        fStack_1a0 = (float)*(int *)(puVar11 + 4);
        fStack_19c = (float)*(int *)((longlong)puVar11 + 0x24);
      }
      *puVar12 = local_1a8;
      puVar12[1] = CONCAT44(fStack_19c,fStack_1a0);
    }
    uVar16 = uVar16 + 1;
    puVar15 = puVar15 + 4;
    puVar12 = puVar12 + 2;
  } while (uVar16 < 2);
  if (local_f8[0] == 0) {
    local_198 = (undefined1  [16])0x0;
    auStack_188 = (undefined1  [16])0x0;
    do {
      lVar18 = lVar18 + 1;
    } while (*(char *)(local_158 + lVar18) != '\0');
    uVar19 = FUN_18015ba30(local_198,local_158,lVar18);
    puVar12 = (undefined8 *)FUN_1803db750(uVar19,local_198,auVar23._0_8_);
    FUN_18015c010();
    if (puVar12 == (undefined8 *)0x0) {
      local_1a8 = (undefined1 *)0x0;
      fStack_1a0 = auVar21._0_4_;
      fStack_19c = fStack_1a0;
    }
    else {
      local_1a8 = (undefined1 *)*puVar12;
      fStack_1a0 = (float)*(int *)(puVar12 + 4);
      fStack_19c = (float)*(int *)((longlong)puVar12 + 0x24);
    }
  }
  else {
    local_1a8 = *(undefined1 **)(local_f8 + (longlong)(int)local_f8[0] * 4 + 2);
    fStack_1a0 = (float)*(undefined8 *)(local_d0 + (longlong)(int)local_f8[0] * 0x10 + -0x18);
    fStack_19c = (float)((ulonglong)
                         *(undefined8 *)(local_d0 + (longlong)(int)local_f8[0] * 0x10 + -0x18) >>
                        0x20);
  }
  uVar14 = local_178;
  local_198 = ZEXT816(0);
  puStack_128 = &local_f0;
  auStack_188._8_8_ = 2;
  auStack_188._0_8_ = puStack_128;
  local_178 = local_178 & 0xffffff00;
  auVar20._8_4_ = fStack_1a0;
  auVar20._0_8_ = local_1a8;
  auVar20._12_4_ = fStack_19c;
  puStack_170 = local_1a8;
  uStack_168 = auVar20._8_8_;
  local_138 = 0;
  uStack_130 = 0;
  uStack_120 = 2;
  local_118 = CONCAT44(uStack_174,uVar14) & 0xffffffffffffff00;
  puStack_110 = local_1a8;
  local_108 = vmovhpd_avx(auVar20);
  local_1a8 = local_d0;
  fStack_1a0 = 2.8026e-45;
  fStack_19c = 0.0;
  local_1c0 = &local_138;
  local_1c8 = local_150;
  cVar7 = FUN_18048d220(local_148,local_f8,&local_1a8,1);
  if (cVar7 != '\0') {
    *local_140 = local_f8[0];
  }
  _eh_vector_destructor_iterator_(local_b8,0x20,2,thunk_FUN_18015c010);
}



