// FUN_1802585c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802585c0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802585c0(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4,
                  char param_5)

{
  ulonglong uVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong *puVar9;
  longlong lVar10;
  longlong *plVar11;
  int *piVar12;
  ULONGLONG UVar13;
  undefined1 (*pauVar14) [16];
  uint *puVar15;
  int *piVar16;
  char *pcVar17;
  float fVar18;
  ulonglong uVar19;
  longlong lVar20;
  undefined1 auVar21 [8];
  bool bVar22;
  double dVar23;
  undefined8 uVar24;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar25 [16];
  undefined1 extraout_var [56];
  undefined1 auVar26 [64];
  undefined1 extraout_var_00 [56];
  undefined1 auVar27 [64];
  undefined1 extraout_var_01 [56];
  undefined1 auVar28 [16];
  undefined1 auVar29 [64];
  undefined1 auVar30 [64];
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar34 [64];
  undefined1 auStackY_418 [32];
  undefined8 local_3a0;
  float local_398;
  int local_390 [2];
  undefined8 local_388;
  undefined8 uStack_380;
  undefined4 uStack_378;
  float fStack_374;
  char cStack_370;
  undefined7 uStack_36f;
  longlong local_368;
  longlong local_360;
  undefined1 local_358 [8];
  undefined8 uStack_350;
  longlong local_348;
  undefined1 local_338 [8];
  undefined8 *puStack_330;
  undefined8 *local_328;
  undefined4 local_320;
  undefined8 local_318;
  float local_310;
  undefined1 local_308 [16];
  longlong local_2f8;
  longlong local_2f0 [3];
  undefined8 *local_2d8;
  longlong *local_2d0;
  longlong local_2c8;
  undefined8 *local_2c0;
  longlong local_2b8;
  undefined1 local_2a8 [16];
  undefined8 local_298;
  undefined8 local_290;
  float local_288;
  undefined4 local_284;
  undefined8 local_280;
  ulonglong local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined4 local_250;
  undefined2 local_24c;
  undefined8 local_248;
  float local_240;
  undefined8 local_238;
  undefined4 local_230;
  undefined1 *local_228;
  undefined8 *local_220;
  undefined8 *local_218;
  longlong local_210;
  undefined1 *local_208;
  longlong local_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined1 local_1ec [32];
  int local_1cc;
  undefined1 local_198 [32];
  undefined8 local_178;
  longlong local_168;
  float local_160;
  char local_158;
  undefined8 local_148 [20];
  char local_a8;
  ulonglong local_90;
  
  local_90 = DAT_1808d5f00 ^ (ulonglong)auStackY_418;
  if (DAT_180cad2e0 != 1) {
  }
  local_360 = param_2;
  lVar8 = FUN_180252d60(&DAT_180c7e1f0,param_2,DAT_180cc934c);
  DAT_180b8e621 = *(char *)(param_3 + 0x28) == '\0';
  local_2d8 = &DAT_180cc9330;
  local_2d0 = &local_360;
  local_2c0 = &DAT_180b8e5b8;
  local_2c8 = lVar8;
  local_2b8 = param_4;
  puVar9 = (ulonglong *)FUN_180270b60(local_338);
  local_3a0 = *puVar9;
  local_398 = *(float *)(puVar9 + 1);
  local_308 = (undefined1  [16])0x0;
  local_2f8 = 0;
  fVar31 = 0.0;
  FUN_180257330(0,local_308,param_4);
  iVar6 = FUN_1805f68d0(&DAT_180b8e688);
  if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_180b8e6d4 == 0x7fffffff) {
    DAT_180b8e6d4 = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  if (DAT_180b8e670 != DAT_180b8e678) {
    DAT_180b8e678 = DAT_180b8e670;
  }
  FUN_1805f68fc(&DAT_180b8e688);
  if (local_308._0_8_ == local_308._8_8_) {
    DAT_180b8e5b8 = 0;
    _DAT_180b8e5c0 = (undefined1  [16])0x0;
    DAT_180b8e5d0 = fVar31;
    DAT_180b8e5d4 = fVar31;
    FUN_180254170(local_360,"no_live_candidates",0xbf800000,0xbf800000);
    FUN_180259660(local_2f0 + 3,0);
    goto LAB_18025887f;
  }
  lVar20 = 0;
  if (*(longlong *)(local_360 + 0x40) != 0) {
    lVar20 = *(longlong *)(local_360 + 0x40) + 0x10;
  }
  if (*(int *)(local_360 + 0x30) < 1) {
    puVar15 = (uint *)0x0;
  }
  else {
    lVar10 = *(longlong *)
              (*(longlong *)(local_360 + 0x38) + (longlong)*(int *)(local_360 + 0x30) * 8);
    puVar15 = (uint *)0x0;
    if (lVar10 != 0) {
      puVar15 = (uint *)(lVar10 + 0x10);
    }
  }
  if ((lVar20 == 0) || (puVar15 == (uint *)0x0)) {
    FUN_180254480(&DAT_180b8e5b8,local_360,"command_history");
    goto LAB_18025887f;
  }
  if ((*puVar15 >> 0xb & 1) == 0) {
    uVar7 = *(uint *)(lVar20 + 0x44);
  }
  else {
    uVar7 = puVar15[0x16];
  }
  local_338._4_4_ = fVar31;
  if ((*puVar15 >> 0xc & 1) != 0) {
    local_338._4_4_ = puVar15[0x17];
  }
  local_338._0_4_ = uVar7;
  FUN_180276b70(puVar15,local_358,*(undefined8 *)(param_4 + 8));
  auVar25 = _local_338;
  lVar20 = DAT_180cc9338;
  if (uStack_350._4_1_ == '\0') {
    local_338._4_4_ = fVar31;
    local_338._0_4_ = fVar31;
    puStack_330._4_4_ = auVar25._12_4_;
    puStack_330._0_4_ = fVar31;
    if (DAT_180cc9338 != 0) {
      lVar10 = FUN_18017ea70();
      *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
      FUN_18027b2b0(local_358,lVar20);
      lVar20 = FUN_18017ea70();
      if (*(int *)(lVar20 + 4) != 0) {
        *(int *)(lVar20 + 4) = *(int *)(lVar20 + 4) + -1;
      }
    }
    fVar18 = puStack_330._0_4_;
    auVar21 = local_338;
  }
  else {
    fVar18 = (float)uStack_350;
    auVar21 = local_358;
  }
  local_318 = auVar21;
  local_310 = fVar18;
  cVar4 = FUN_1802646f0(&local_318);
  if (cVar4 == '\0') {
    FUN_180254480(&DAT_180b8e5b8,local_360,"firing_origin_unavailable");
    goto LAB_18025887f;
  }
  local_238 = _DAT_180b8e130;
  local_230 = DAT_180b8e138;
  puStack_330 = &local_248;
  local_338 = (undefined1  [8])param_3;
  local_328 = &local_238;
  local_320 = DAT_180c7e258;
  _local_358 = ZEXT816(0x1807d0218);
  local_248 = auVar21;
  local_240 = fVar18;
  FUN_18017bf40(&uStack_350);
  FUN_1802647c0(local_308,local_338);
  FUN_18017bf40(local_338);
  auVar21 = local_338;
  uVar19 = (longlong)local_338 - uStack_350;
  puVar9 = (ulonglong *)FUN_180266e70();
  auVar30._0_8_ = *puVar9;
  *puVar9 = auVar30._0_8_ + 1;
  uVar1 = puVar9[1];
  puVar9[1] = uVar1 + uVar19;
  puVar9[3] = puVar9[3] + (ulonglong)(999999 < uVar19);
  puVar9[4] = puVar9[4] + (ulonglong)(4999999 < uVar19);
  puVar9[5] = puVar9[5] + (ulonglong)(15999999 < uVar19);
  if (puVar9[2] < uVar19) {
    puVar9[2] = uVar19;
  }
  if ((auVar21 == (undefined1  [8])puVar9[7]) || ((longlong)puVar9[7] <= (longlong)auVar21)) {
    dVar23 = (double)(uVar1 + uVar19) / (double)(auVar30._0_8_ + 1);
    FUN_1801af8a0(dVar23,dVar23 / 1000.0,local_358);
    puVar9[2] = 0;
    puVar9[1] = 0;
    *puVar9 = 0;
    puVar9[5] = 0;
    puVar9[4] = 0;
    puVar9[3] = 0;
    puVar9[6] = (ulonglong)auVar21;
    puVar9[7] = (longlong)auVar21 + 5000000000;
  }
  local_2a8 = ZEXT816(0);
  local_298 = 0x7fffffffffffffff;
  local_290 = CONCAT44(fVar31,fVar31);
  local_288 = (float)((uint)local_288 & 0xffffff00);
  local_284 = 0;
  local_280 = 0;
  local_278 = 0;
  local_270 = 0;
  local_268 = 0;
  local_260 = 0;
  local_258 = 0;
  local_250 = 0x18;
  local_24c = 0;
  plVar11 = (longlong *)FUN_18017bf40(local_338);
  local_2a8._8_8_ = *plVar11 + 4000000;
  local_2a8._0_8_ = *plVar11;
  local_290 = local_3a0;
  local_288 = local_398;
  auVar30._0_8_ = (longlong)(local_308._8_8_ - local_308._0_8_) / 0x6b60;
  if (auVar30._0_8_ < 2) {
    local_278 = 0;
  }
  else {
    iVar6 = DAT_180cc935c;
    if (DAT_180cc935c < 0) {
      iVar6 = 0;
    }
    local_278 = (ulonglong)(longlong)iVar6 % (auVar30._0_8_ - 1);
  }
  local_228 = local_2a8;
  local_218 = &DAT_180b8e5b8;
  local_208 = local_308;
  local_3a0 = CONCAT44(fVar31,fVar31);
  local_398 = fVar31;
  local_220 = &local_318;
  local_210 = param_3;
  local_200 = param_4;
  if (*(char *)(lVar8 + 0x318) != '\0') {
    _local_358 = (undefined1  [16])0x0;
    local_348 = 0;
    FUN_180259970(&local_228,local_358,&local_3a0,DAT_180cc9374);
    if (local_358 == (undefined1  [8])uStack_350) {
      DAT_180b8e5b8 = 0;
      _DAT_180b8e5c0 = (undefined1  [16])0x0;
      pcVar17 = "no_eligible_intersection";
      if (local_24c._1_1_ != '\0') {
        pcVar17 = "scan_budget";
      }
      DAT_180b8e5d0 = fVar31;
      DAT_180b8e5d4 = fVar31;
      FUN_180254170(local_360,pcVar17,0xbf800000,0xbf800000);
      FUN_180259660(local_2f0 + 3,0);
    }
    else {
      uVar24 = FUN_18025cb60(&DAT_180b8e5b8,local_148,param_3);
      if (local_a8 == '\0') {
        FUN_180259660(local_2f0 + 3,0);
      }
      else {
        cVar4 = FUN_1802582e0(uVar24,local_148,param_3);
        if (((cVar4 != '\0') && (param_5 != '\0')) &&
           (cVar4 = FUN_180259660(local_2f0 + 3,1), cVar4 != '\x01')) {
          FUN_180260070(&DAT_180b8e5b8,local_360,local_148);
        }
      }
    }
    if (local_358 != (undefined1  [8])0x0) {
      auVar21 = local_358;
      if ((0xfff < (ulonglong)(((local_348 - (longlong)local_358) / 0x98) * 0x98)) &&
         (auVar21 = *(undefined1 (*) [8])((longlong)local_358 + -8),
         0x1f < ((longlong)local_358 - (longlong)auVar21) - 8U)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      FUN_1804547d0(auVar21);
    }
    goto LAB_18025887f;
  }
  local_2f0[0] = 0;
  local_2f0[1] = 0;
  local_2f0[2] = 0;
  FUN_180259970(&local_228,local_2f0,&local_3a0,*(undefined4 *)(param_3 + 0x18));
  FUN_18025cb60(&DAT_180b8e5b8,&local_1f8,param_3);
  iVar6 = FUN_180252cb0(lVar8);
  uVar7 = _DAT_180b8e114;
  local_390[1] = 100;
  local_390[0] = 0;
  if (iVar6 < 1) {
    lVar20 = 0x598;
    if (iVar6 != 0) {
      lVar20 = 0x524;
    }
  }
  else {
    lVar20 = (longlong)(iVar6 + -1) * 0x70 + 0x1b8;
  }
  iVar6 = *(int *)(lVar20 + lVar8);
  piVar16 = local_390;
  if (-1 < iVar6) {
    piVar16 = (int *)(lVar20 + lVar8);
  }
  piVar12 = local_390 + 1;
  if (iVar6 < 0x65) {
    piVar12 = piVar16;
  }
  auVar25._0_4_ = (float)*piVar12;
  auVar25._4_12_ = SUB1612(ZEXT816(0),4);
  auVar30._0_8_ = auVar25._0_8_;
  fVar18 = 100.0;
  auVar34 = ZEXT1664(CONCAT124(SUB1612(ZEXT816(0),4),auVar25._0_4_ / 100.0));
  if ((DAT_180cad358 == '\0') || (*(char *)(param_3 + 0x28) == '\0')) {
    bVar22 = false;
    bVar3 = false;
LAB_18025905c:
    auVar29 = ZEXT464(*(uint *)(param_3 + 0x18));
  }
  else {
    bVar22 = true;
    bVar3 = true;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = DAT_180b8e118;
    auVar25 = vshufps_avx(auVar28,auVar28,0x55);
    local_3a0 = DAT_180b8e118;
    auVar30._0_8_ = local_3a0;
    local_3a0._0_4_ = (float)DAT_180b8e118;
    fVar32 = auVar25._0_4_ * auVar25._0_4_ + (float)local_3a0 * (float)local_3a0;
    local_3a0 = auVar30._0_8_;
    local_398 = fVar31;
    if (fVar32 == fVar31) {
      auVar30._0_8_ = 0;
    }
    else if (fVar32 < 0.0) {
      auVar30._0_8_ = FUN_18061e150(fVar32);
    }
    else {
      auVar30._0_8_ = (ulonglong)(uint)SQRT(fVar32);
    }
    if ((float)auVar30._0_8_ <= *(float *)(param_3 + 0x24)) {
      bVar22 = true;
      if (DAT_180cc9340 == 0) goto LAB_18025905c;
      iVar6 = DAT_180c64810;
      if (DAT_180c64810 == 0) {
        UVar13 = GetTickCount64();
        if (UVar13 < DAT_180c64808) {
          iVar6 = 0;
        }
        else {
          local_338 = (undefined1  [8])&DAT_1808ef360;
          iVar6 = FUN_1805f68d0(&DAT_1808ef360);
          if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1805f6d44(5);
          }
          if (DAT_1808ef3ac == 0x7fffffff) {
            DAT_1808ef3ac = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
            FUN_1805f6d44(6);
          }
          if ((DAT_180c64810 == 0) && (DAT_180c64808 <= UVar13)) {
            DAT_180c64810 = FUN_1804174b0("CCSWeaponBaseVData",0x4f7b5fdf);
            if (DAT_180c64810 == 0) {
              DAT_180c64808 = UVar13 + 1000;
            }
            else {
              DAT_180c64808 = 0xffffffffffffffff;
            }
          }
          iVar6 = DAT_180c64810;
          FUN_1805f68fc(&DAT_1808ef360);
        }
      }
      auVar30 = ZEXT464(*(uint *)(iVar6 + DAT_180cc9340));
      auVar27._0_8_ = FUN_180278520((longlong)iVar6,*(undefined8 *)(param_4 + 8),&local_3a0);
      auVar27._8_56_ = extraout_var_00;
      auVar25 = vmaxss_avx(auVar27._0_16_,auVar30._0_16_);
      auVar29 = ZEXT1664(auVar25);
      bVar22 = true;
      auVar30._0_8_ = auVar27._0_8_;
    }
    else {
      auVar26._0_8_ = FUN_180278520(auVar30._0_8_,*(undefined8 *)(param_4 + 8),&local_3a0);
      auVar26._8_56_ = extraout_var;
      auVar29 = ZEXT1664(auVar26._0_16_);
      auVar30._0_8_ = auVar26._0_8_;
    }
  }
  uVar24 = auVar29._0_8_;
  if (local_158 == '\0') {
    auVar29 = ZEXT864(0);
LAB_180259115:
    bVar22 = false;
  }
  else {
    if (bVar22) {
      if ((((local_168 == 0) || (*(char *)(local_168 + 0x23b8) == '\0')) || (local_1cc < 0)) ||
         ((*(int *)(local_168 + 0x36c) <= local_1cc || (0x7f < local_1cc)))) {
        auVar29 = ZEXT864(0);
      }
      else {
        auVar30._0_8_ =
             FUN_1802757f0(local_168 + 0x370 + (longlong)local_1cc * 0x20,local_198,local_1ec);
        uVar24 = auVar29._0_8_;
        auVar30._8_56_ = extraout_var_01;
        auVar29 = ZEXT1664(auVar30._0_16_);
      }
    }
    else {
      auVar29 = ZEXT464((uint)local_160);
    }
    if ((local_158 == '\0') || (auVar29._0_4_ < auVar34._0_4_)) goto LAB_180259115;
    bVar22 = true;
  }
  cVar4 = FUN_1802796e0(auVar30._0_8_,uVar24);
  if (local_158 == '\0') {
LAB_18025914c:
    bVar2 = false;
  }
  else {
    if (*(char *)(param_3 + 0x28) == '\0') {
      if (*(char *)(lVar8 + 0x450) != '\0') goto joined_r0x00018025923a;
      goto LAB_18025914c;
    }
    if (*(char *)(lVar8 + 0x4b8) == '\0') goto LAB_18025914c;
joined_r0x00018025923a:
    if (cVar4 == '\0') goto LAB_18025914c;
    bVar2 = true;
  }
  if ((bVar22) || (cVar4 = '\0', bVar2)) {
    cVar4 = '\x01';
  }
  if (local_158 == '\0') {
    _local_358 = (undefined1  [16])0x0;
    pauVar14 = (undefined1 (*) [16])0x0;
  }
  else {
    local_388 = local_178;
    uStack_380 = local_1f8;
    uStack_378 = local_1f0;
    fStack_374 = fVar18 * local_160;
    cStack_370 = cVar4;
    UVar13 = GetTickCount64();
    local_368 = UVar13 + 200;
    if (DAT_180c7df28 == (undefined8 *)0x0) {
      uStack_350 = 0x15;
      local_358 = (undefined1  [8])"tier0.dll:g_pMemAlloc";
      DAT_180c7df28 = (undefined8 *)FUN_180451750(local_358);
    }
    pauVar14 = (undefined1 (*) [16])
               (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x38);
    local_338 = (undefined1  [8])pauVar14;
    if (pauVar14 == (undefined1 (*) [16])0x0) {
      pauVar14 = (undefined1 (*) [16])0x0;
    }
    else {
      *pauVar14 = (undefined1  [16])0x0;
      *(undefined4 *)(*pauVar14 + 8) = 1;
      *(undefined4 *)(*pauVar14 + 0xc) = 1;
      *(undefined ***)*pauVar14 =
           std::_Ref_count_obj2<rendering::forge::aim_presentation_const_>::vftable;
      *(undefined8 *)pauVar14[1] = local_388;
      *(undefined8 *)(pauVar14[1] + 8) = uStack_380;
      *(ulonglong *)pauVar14[2] = CONCAT44(fStack_374,uStack_378);
      *(ulonglong *)(pauVar14[2] + 8) = CONCAT71(uStack_36f,cStack_370);
      *(longlong *)pauVar14[3] = local_368;
    }
    uStack_350 = (longlong)pauVar14;
    local_358 = (undefined1  [8])(pauVar14 + 1);
    auVar29 = ZEXT1664(auVar29._0_16_);
    auVar34 = ZEXT1664(auVar34._0_16_);
  }
  uVar24 = FUN_180266200(pauVar14,local_358);
  if (cVar4 == '\0') {
    cVar5 = FUN_180262bb0(uVar24,param_3);
    uVar24 = extraout_XMM0_Qa;
    if (cVar5 != '\0') {
      uVar24 = FUN_1802568e0(extraout_XMM0_Qa,local_358,param_3);
      if ((char)local_348 == '\0') {
        DAT_180b8e620 = local_158;
      }
      else {
        local_3a0 = CONCAT44((float)local_358._4_4_ - local_318._4_4_,
                             (float)local_358._0_4_ - (float)local_318);
        local_398 = (float)uStack_350 - local_310;
        _local_338 = (undefined1  [16])0x0;
        local_328 = (undefined8 *)0x0;
        FUN_180259970(&local_228,local_338,&local_3a0,uStack_350._4_4_);
        uVar24 = FUN_18025cb60(&DAT_180b8e5b8,local_148,param_3);
        DAT_180b8e620 = local_a8;
        if (local_338 != (undefined1  [8])0x0) {
          auVar21 = local_338;
          if ((0xfff < (ulonglong)((((longlong)local_328 - (longlong)local_338) / 0x98) * 0x98)) &&
             (auVar21 = *(undefined1 (*) [8])((longlong)local_338 + -8),
             0x1f < ((longlong)local_338 - (longlong)auVar21) - 8U)) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          uVar24 = FUN_1804547d0(auVar21);
        }
      }
    }
  }
  fVar32 = auVar29._0_4_;
  fVar33 = auVar34._0_4_;
  if (local_158 == '\0') {
    DAT_180b8e5b8 = 0;
    _DAT_180b8e5c0 = (undefined1  [16])0x0;
    pcVar17 = "no_eligible_intersection";
    if (local_24c._1_1_ != '\0') {
      pcVar17 = "scan_budget";
    }
    DAT_180b8e5d0 = fVar31;
    DAT_180b8e5d4 = fVar31;
    FUN_180254170(local_360,pcVar17,0xbf800000,0xbf800000);
    FUN_180259660(local_2f0 + 3,0);
  }
  else {
    if ((!bVar3) || (param_5 == '\0')) {
      if (cVar4 == '\0') goto LAB_180259445;
LAB_180259467:
      cVar5 = FUN_1802582e0(uVar24,&local_1f8,param_3);
      fVar32 = auVar29._0_4_;
      fVar33 = auVar34._0_4_;
      if (cVar5 == '\0') goto LAB_180259445;
      bVar22 = true;
    }
    else {
      if (cVar4 != '\0') {
        _DAT_180b8e62c = CONCAT11(DAT_180b8e62d,1);
        goto LAB_180259467;
      }
      if (DAT_180b8e62d == '\0') {
        _DAT_180b8e62c = 0;
      }
LAB_180259445:
      bVar22 = false;
    }
    if (bVar3) {
      if (((uVar7 & 2) == 0) && (bVar22)) {
        bVar22 = DAT_180b8e62c == '\0';
        goto LAB_180259480;
      }
LAB_180259482:
      pcVar17 = "duckpeek_wait";
      if (cVar4 == '\0') {
        pcVar17 = "hitchance_below_configured_threshold";
      }
    }
    else {
      bVar22 = !bVar22;
LAB_180259480:
      if (bVar22) goto LAB_180259482;
      if (param_5 != '\0') {
        cVar4 = FUN_180259660(local_2f0 + 3,1);
        if ((cVar4 != '\x01') && (FUN_180260070(&DAT_180b8e5b8,local_360,&local_1f8), bVar3)) {
          _DAT_180b8e62c = 0x100;
        }
        goto LAB_180259535;
      }
      pcVar17 = "weapon_not_ready";
    }
    FUN_180254170(local_360,pcVar17,fVar32 * fVar18,fVar33 * fVar18);
    FUN_180259660(local_2f0 + 3,0);
  }
LAB_180259535:
  if (local_2f0[0] != 0) {
    lVar8 = local_2f0[0];
    if ((0xfff < (ulonglong)(((local_2f0[2] - local_2f0[0]) / 0x98) * 0x98)) &&
       (lVar8 = *(longlong *)(local_2f0[0] + -8), 0x1f < (local_2f0[0] - lVar8) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(lVar8);
    local_2f0[0] = 0;
    local_2f0[1] = 0;
    local_2f0[2] = 0;
  }
LAB_18025887f:
  if (local_308._0_8_ != 0) {
    lVar8 = local_308._0_8_;
    if ((0xfff < (ulonglong)(((local_2f8 - local_308._0_8_) / 0x6b60) * 0x6b60)) &&
       (lVar8 = *(longlong *)(local_308._0_8_ + -8), 0x1f < (local_308._0_8_ - lVar8) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(lVar8);
  }
}



