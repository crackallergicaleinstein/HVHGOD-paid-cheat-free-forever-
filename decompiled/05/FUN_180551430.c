// FUN_180551430 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180551430 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180551430(undefined8 param_1,uint *param_2)

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
  undefined1 auStack_3c8 [32];
  undefined *local_3a8;
  undefined1 *local_3a0;
  ulonglong *local_398;
  float fStack_390;
  float fStack_38c;
  undefined1 local_388 [16];
  undefined1 auStack_378 [16];
  ulonglong local_368;
  ulonglong *puStack_360;
  undefined8 local_358;
  uint *local_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 *puStack_330;
  undefined8 uStack_328;
  uint local_320;
  undefined4 uStack_31c;
  ulonglong *puStack_318;
  undefined8 uStack_310;
  uint local_308 [4];
  undefined8 local_2f8;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined8 local_2e8;
  undefined4 local_2e0;
  undefined4 local_2dc;
  undefined8 local_2d8;
  undefined4 local_2d0;
  undefined4 local_2cc;
  undefined8 local_2c8;
  undefined4 local_2c0;
  undefined4 local_2bc;
  undefined8 local_2b8;
  undefined4 local_2b0;
  undefined4 local_2ac;
  undefined8 local_2a8;
  undefined4 local_2a0;
  undefined4 local_29c;
  undefined8 local_298;
  undefined4 local_290;
  undefined4 local_28c;
  undefined8 local_288;
  undefined4 local_280;
  undefined4 local_27c;
  undefined8 local_278;
  undefined4 local_270;
  undefined4 local_26c;
  undefined8 local_268;
  undefined4 local_260;
  undefined4 local_25c;
  undefined8 local_258;
  undefined4 local_250;
  undefined4 local_24c;
  undefined8 local_248;
  undefined4 local_240;
  undefined4 local_23c;
  ulonglong local_238 [66];
  
  local_238[0x3c] = DAT_1808d5f00 ^ (ulonglong)auStack_3c8;
  local_238[0] = 0;
  local_238[1] = 0;
  local_238[2] = 0;
  local_238[3] = 0;
  local_238[4] = 0;
  local_238[5] = 0;
  local_238[6] = 0;
  local_238[7] = 0;
  local_238[8] = 0;
  local_238[9] = 0;
  local_238[10] = 0;
  local_238[0xb] = 0;
  local_348 = param_2;
  FUN_1800e9bc0(local_238 + 0xc,0xc);
  local_2f8 = 0;
  auVar19 = ZEXT864(0);
  uStack_2f0 = 0;
  uStack_2ec = 0;
  local_2e8 = 0;
  local_2e0 = 0;
  local_2dc = 0;
  local_2d8 = 0;
  local_2d0 = 0;
  local_2cc = 0;
  local_2c8 = 0;
  local_2c0 = 0;
  local_2bc = 0;
  local_2b8 = 0;
  local_2b0 = 0;
  local_2ac = 0;
  local_2a8 = 0;
  local_2a0 = 0;
  local_29c = 0;
  local_298 = 0;
  local_290 = 0;
  local_28c = 0;
  local_288 = 0;
  local_280 = 0;
  local_27c = 0;
  local_278 = 0;
  local_270 = 0;
  local_26c = 0;
  local_268 = 0;
  local_260 = 0;
  local_25c = 0;
  local_258 = 0;
  local_250 = 0;
  local_24c = 0;
  local_248 = 0;
  local_240 = 0;
  local_23c = 0;
  FUN_1804c2800("Secondary Weapon");
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
  local_340 = _DAT_180bb8890;
  uStack_338 = uRam0000000180bb8898;
  puStack_330 = (undefined8 *)uRam0000000180bb88a0;
  uStack_328 = uRam0000000180bb88a8;
  local_320 = (uint)DAT_180bb88b0;
  uStack_31c = DAT_180bb88b0._4_4_;
  puStack_318 = DAT_180bb88b0._8_8_;
  auVar19 = ZEXT1664(auVar19._0_16_);
  ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  local_308[0] = *param_2;
  if (0xb < local_308[0]) {
    local_308[0] = 0;
  }
  lVar16 = 0;
  puVar11 = &local_2f8;
  uVar14 = 0;
  auVar21 = ZEXT464(0x3f800000);
  do {
    puVar8 = (undefined8 *)FUN_18050a310(local_388,(longlong)&PTR_DAT_180801330 + uVar14,local_320);
    auVar20 = auVar21._0_16_;
    auVar18 = auVar19._0_16_;
    puVar10 = (undefined8 *)((longlong)local_238 + uVar14 + 0x60);
    if (puVar10 != puVar8) {
      FUN_18015c010(puVar10);
      auVar20 = auVar21._0_16_;
      auVar18 = auVar19._0_16_;
      uVar17 = puVar8[1];
      uVar3 = puVar8[2];
      uVar4 = puVar8[3];
      *puVar10 = *puVar8;
      *(undefined8 *)((longlong)local_238 + uVar14 + 0x68) = uVar17;
      *(undefined8 *)((longlong)local_238 + uVar14 + 0x70) = uVar3;
      *(undefined8 *)((longlong)local_238 + uVar14 + 0x78) = uVar4;
      puVar8[2] = 0;
      puVar8[3] = 0xf;
      *(undefined1 *)puVar8 = 0;
    }
    auVar19 = ZEXT1664(auVar18);
    auVar21 = ZEXT1664(auVar20);
    FUN_18015c010(local_388);
    if (0xf < *(ulonglong *)((longlong)local_238 + uVar14 + 0x78)) {
      puVar10 = (undefined8 *)*puVar10;
    }
    local_238[lVar16] = (ulonglong)puVar10;
    if (((bVar5) || (lVar16 == (int)local_308[0])) &&
       (**(char **)((longlong)&PTR_PTR_180801338 + uVar14) != '\0')) {
      lVar9 = FUN_18050a280((longlong)&PTR_DAT_180801330 + uVar14,local_320);
      local_388 = (undefined1  [16])0x0;
      auStack_378 = (undefined1  [16])0x0;
      lVar15 = -1;
      do {
        lVar15 = lVar15 + 1;
      } while (*(char *)(lVar9 + lVar15) != '\0');
      uVar17 = FUN_18015ba30(local_388,lVar9);
      puVar10 = (undefined8 *)FUN_1803db750(uVar17,local_388,auVar21._0_8_);
      FUN_18015c010(local_388);
      if (puVar10 == (undefined8 *)0x0) {
        local_398 = (ulonglong *)0x0;
        fStack_390 = auVar19._0_4_;
        fStack_38c = fStack_390;
      }
      else {
        local_398 = (ulonglong *)*puVar10;
        fStack_390 = (float)*(int *)(puVar10 + 4);
        fStack_38c = (float)*(int *)((longlong)puVar10 + 0x24);
      }
      *puVar11 = local_398;
      puVar11[1] = CONCAT44(fStack_38c,fStack_390);
    }
    lVar16 = lVar16 + 1;
    uVar14 = uVar14 + 0x20;
    puVar11 = puVar11 + 2;
  } while (uVar14 < 0x180);
  if (local_308[0] == 0) {
    local_388 = (undefined1  [16])0x0;
    auStack_378 = (undefined1  [16])0x0;
    uVar17 = FUN_18015ba30(local_388,"deagle",6);
    puVar11 = (undefined8 *)FUN_1803db750(uVar17,local_388,auVar21._0_8_);
    FUN_18015c010();
    if (puVar11 == (undefined8 *)0x0) {
      local_398 = (ulonglong *)0x0;
      fStack_390 = auVar19._0_4_;
      fStack_38c = fStack_390;
    }
    else {
      local_398 = (ulonglong *)*puVar11;
      fStack_390 = (float)*(int *)(puVar11 + 4);
      fStack_38c = (float)*(int *)((longlong)puVar11 + 0x24);
    }
  }
  else {
    local_398 = *(ulonglong **)(local_308 + (longlong)(int)local_308[0] * 4 + 4);
    fStack_390 = (float)*(undefined8 *)(&uStack_2f0 + (longlong)(int)local_308[0] * 4);
    fStack_38c = (float)((ulonglong)*(undefined8 *)(&uStack_2f0 + (longlong)(int)local_308[0] * 4)
                        >> 0x20);
  }
  uVar13 = local_320;
  local_340 = 0;
  uStack_338 = 0;
  puStack_330 = &local_2f8;
  uStack_328 = 0xc;
  local_320 = local_320 & 0xffffff00;
  auVar18._8_4_ = fStack_390;
  auVar18._0_8_ = local_398;
  auVar18._12_4_ = fStack_38c;
  puStack_318 = local_398;
  uStack_310 = auVar18._8_8_;
  local_388 = ZEXT816(0);
  auStack_378._8_8_ = 0xc;
  auStack_378._0_8_ = puStack_330;
  local_368 = CONCAT44(uStack_31c,uVar13) & 0xffffffffffffff00;
  puStack_360 = local_398;
  local_358 = vmovhpd_avx(auVar18);
  local_398 = local_238;
  fStack_390 = 1.68156e-44;
  fStack_38c = 0.0;
  local_3a0 = local_388;
  local_3a8 = &DAT_180829fa4;
  cVar6 = FUN_18048d220("Secondary Weapon",local_308,&local_398,1);
  if (cVar6 != '\0') {
    *local_348 = local_308[0];
  }
  _eh_vector_destructor_iterator_(local_238 + 0xc,0x20,0xc,thunk_FUN_18015c010);
}



