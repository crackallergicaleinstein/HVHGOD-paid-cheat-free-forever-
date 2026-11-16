// FUN_180254d40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180254d40 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180254d40(undefined8 param_1,longlong param_2)

{
  undefined1 auVar1 [16];
  char cVar2;
  int iVar3;
  ULONGLONG UVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  char *pcVar8;
  longlong lVar9;
  ulonglong uVar10;
  bool bVar11;
  float fVar12;
  undefined8 uVar13;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined1 auVar14 [64];
  undefined1 auVar15 [64];
  undefined1 auVar16 [16];
  undefined1 auVar17 [64];
  undefined1 auStack_1e8 [32];
  undefined8 *local_1c8;
  undefined8 local_1c0;
  float local_1a8;
  float local_1a4;
  uint local_1a0;
  undefined1 local_198 [2] [16];
  undefined *local_178 [2];
  undefined **local_168;
  undefined8 *local_160;
  longlong *local_158;
  undefined8 *local_150;
  undefined ***local_130;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [16];
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  longlong lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_80;
  ulonglong local_70;
  
  auVar1 = local_198[0];
  local_70 = DAT_1808d5f00 ^ (ulonglong)auStack_1e8;
  DAT_180b8e620 = 0;
  _DAT_180b8e622 = 0;
  DAT_180b8e624 = 0;
  DAT_180b8e628 = 0;
  local_128 = local_128 & 0xffffffffffff0000;
  uStack_120 = 0;
  uStack_11c = 0;
  uStack_118 = 0;
  uStack_114 = 0;
  auVar16._12_4_ = 0;
  auVar16._0_12_ = ZEXT812(0);
  auVar16 = auVar16 << 0x20;
  uStack_110 = 0;
  uStack_108 = 0;
  auStack_100 = ZEXT816(0);
  uStack_f0 = 0;
  uStack_ec = 0;
  _DAT_180b8e5e0 = local_128;
  DAT_180b8e5e8 = 0;
  _DAT_180b8e5f0 = 0;
  _DAT_180b8e5f8 = 0;
  ram0x000180b8e600 = 0;
  _DAT_180b8e608 = 0;
  _DAT_180b8e610 = 0;
  _DAT_180b8e618 = 0;
  local_198[0]._0_4_ = local_198[0]._1_4_ << 8;
  local_198[0]._4_4_ = 0xffffffff;
  local_198[0]._12_4_ = auVar1._12_4_;
  local_198[0]._8_4_ = 0;
  _DAT_180b8e630 = vinsertps_avx(local_198[0],auVar16,0x30);
  auVar16 = vunpcklps_avx(auVar16,auVar16);
  DAT_180b8e640 = auVar16._0_8_;
  auVar17 = ZEXT1264(ZEXT812(0)) << 0x20;
  local_198[0] = _DAT_180b8e630;
  AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  local_e8 = _DAT_180bb8890;
  lStack_e0 = lRam0000000180bb8898;
  uStack_d8 = uRam0000000180bb88a0;
  uStack_d0 = uRam0000000180bb88a8;
  local_c8 = _DAT_180bb88b0;
  uStack_c0 = uRam0000000180bb88b8;
  auVar17 = ZEXT1664(auVar17._0_16_);
  ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  if (((((DAT_180cadbf0 == '\0') || (DAT_180cc9372 == '\0')) || ((char)uStack_c0 == '\0')) ||
      (((int)local_c8 < 2 || (lStack_e0 == 0)))) ||
     ((DAT_180cc9330 == 0 || (5 < DAT_180cc9348 - 1U)))) {
    DAT_180b8e660 = '\0';
  }
  else {
    UVar4 = GetTickCount64();
    if (DAT_180b8e668 <= UVar4) {
      DAT_180b8e668 = UVar4 + 0x32;
      uVar13 = FUN_1802768c0();
      uVar13 = FUN_1803dff30(uVar13,&local_1a8);
      FUN_180275560(uVar13,&local_b8,lStack_e0);
      fVar12 = (local_1a8 + (float)local_b8) * 0.017453292;
      auVar15 = ZEXT464((uint)fVar12);
      auVar14 = ZEXT464((uint)((local_1a4 + local_b8._4_4_) * 0.017453292));
      fVar12 = (float)FUN_180637540(fVar12,local_1a4 + local_b8._4_4_);
      local_1a8 = (float)FUN_180637540(auVar14._0_8_);
      local_1a8 = local_1a8 * fVar12;
      local_1a4 = (float)FUN_180638e00(auVar14._0_8_);
      local_1a4 = local_1a4 * fVar12;
      local_1a0 = FUN_180638e00(auVar15._0_8_);
      local_1a0 = local_1a0 ^ 0x80000000;
      local_178[0] = (undefined *)CONCAT44(local_178[0]._4_4_,auVar17._0_4_);
      local_1c8 = &local_e8;
      cVar2 = FUN_18026f520(&DAT_180cc9380,local_198,&local_1a8,local_178);
      DAT_180b8e660 = cVar2 + '\x01';
    }
  }
  iVar3 = DAT_180cc9348;
  bVar11 = DAT_180cad2e0 == 1;
  if ((!bVar11) || (DAT_180c7e1f0 == '\0')) {
    pcVar8 = "auto_fire_disabled";
    if (!bVar11) {
      pcVar8 = "rage_inactive";
    }
    local_1c8 = (undefined8 *)0x0;
    FUN_180254170(param_2,pcVar8,bVar11,0xbf800000);
    DAT_180b8e65c = 0;
    _DAT_180b8e62c = 0;
    DAT_180b8e5d4 = auVar17._0_4_;
    DAT_180b8e5d0 = auVar17._0_4_;
    _DAT_180b8e5c0 = (undefined1  [16])0x0;
    DAT_180b8e5b8 = 0;
  }
  if (DAT_180cc9372 == '\0') {
    local_1c8 = (undefined8 *)0x0;
    FUN_180254170(param_2,"invalid_weapon_context",1,0xbf800000);
    DAT_180b8e65c = 0;
  }
  if (DAT_180cad358 == '\0') {
    _DAT_180b8e62c = 0;
  }
  if (DAT_180b8e659 == '\0') {
    cVar2 = DAT_180cad648;
    if ((DAT_180cc9348 != 0) && (cVar2 = DAT_180cad4a0, DAT_180cc9348 != 8)) {
      if (5 < DAT_180cc9348 - 1U) {
        local_1c8 = (undefined8 *)0x0;
        FUN_180254170(param_2,"unsupported_weapon",1,0xbf800000);
      }
      cVar2 = '\x01';
    }
    if (cVar2 == '\0') {
      local_1c8 = (undefined8 *)0x0;
      FUN_180254170(param_2,"weapon_feature_disabled",1,0xbf800000);
      DAT_180b8e65c = 0;
    }
    lVar6 = FUN_180252d60(&DAT_180c7e1f0,1,DAT_180cc934c);
    uStack_120 = auVar17._0_4_;
    local_128 = CONCAT44(uStack_120,uStack_120);
    uStack_110 = 0;
    uStack_108 = 0;
    auVar1._14_2_ = 0;
    auVar1._0_14_ = auStack_100._2_14_;
    auStack_100 = auVar1 << 0x10;
    uStack_11c = (undefined4)DAT_180b8e124;
    uStack_118 = (undefined4)((ulonglong)DAT_180b8e124 >> 0x20);
    uStack_114 = DAT_180b8e12c;
    uVar13 = FUN_180277c60();
    uStack_110._4_4_ = (int)uVar13;
    uVar13 = FUN_180277ea0(uVar13,*(char *)(lVar6 + 0x318) == '\0');
    uStack_110 = CONCAT44(uStack_110._4_4_,(int)uVar13);
    local_168 = std::
                _Func_impl_no_alloc<`private:_struct_features::combat::rage::aim_context___cdecl_features::combat::rage::build_context(systems::input::usercmd*___ptr64,systems::local::snapshot_const&___ptr64)const___ptr64'::`3'::<lambda_1>,void>
                ::vftable;
    local_158 = &DAT_180cc9330;
    local_150 = &local_128;
    local_130 = &local_168;
    local_160 = &local_e8;
    cVar2 = FUN_180412b50(uVar13,param_2,&local_e8,&local_168);
    auVar16 = auVar17._0_16_;
    if (local_130 != (undefined ***)0x0) {
      (*(code *)(*local_130)[4])(local_130,local_130 != &local_168);
      auVar16 = auVar17._0_16_;
    }
    if (cVar2 == '\0') {
      DAT_180cc93e8._0_4_ = 0;
      puVar7 = &DAT_180cc93f0;
      unique0x10000895 = auVar16;
      do {
        puVar7[-1] = 0;
        *puVar7 = 0;
        *(undefined4 *)(puVar7 + 1) = 0;
        bVar11 = puVar7 != (undefined8 *)0x180cc965c;
        puVar7 = (undefined8 *)((longlong)puVar7 + 0x14);
      } while (bVar11);
      _DAT_180cc9668 = 0;
      _DAT_180cc9670 = auVar16._0_4_;
      _DAT_180cc9674 = 0;
      _DAT_180cc967c = _DAT_180cc9670;
    }
    DAT_180cc9378 = uStack_110._4_4_;
    DAT_180cc9374 = (undefined4)uStack_110;
    puVar7 = (undefined8 *)FUN_1803dff30(uStack_110._4_4_,local_198);
    local_128 = *puVar7;
    uStack_120 = *(undefined4 *)(puVar7 + 1);
    auStack_100._0_2_ = CONCAT11(DAT_180cc9371,DAT_180b8e114) & 0xff01;
    uStack_a0 = CONCAT44(uStack_11c,uStack_120);
    uStack_98 = CONCAT44(uStack_114,uStack_118);
    uStack_90 = uStack_110;
    auVar16 = vunpcklps_avx(ZEXT416((uint)DAT_180cc9368),ZEXT416((uint)(DAT_180cc9368 * 0.34)));
    local_88 = auVar16._0_8_;
    local_80 = auStack_100._0_4_;
    local_a8 = local_128;
    if (iVar3 == 0) {
      cVar2 = FUN_180278f80();
      if (cVar2 != '\0') {
        FUN_18025a010(extraout_XMM0_Qa,param_2,&local_a8,&local_e8);
      }
    }
    else {
      if (iVar3 != 8) {
        if (DAT_180cc934c == 0x40) {
          if (DAT_180cad2e0 != 1) {
            DAT_180b8e65c = 0;
          }
          cVar2 = FUN_180278f80();
          if (cVar2 == '\0') {
            DAT_180b8e65c = 0;
          }
          if (DAT_180cad578 == '\0') {
            DAT_180b8e65c = 0;
          }
          if (DAT_180b8e65c < 0xd) {
            local_1c8 = (undefined8 *)((ulonglong)local_1c8 & 0xffffffffffffff00);
            FUN_1802585c0(&DAT_180b8e5b8,param_2,&local_a8,&local_e8);
            if (param_2 != 0) {
              *(ulonglong *)(param_2 + 0x60) = *(ulonglong *)(param_2 + 0x60) | 1;
              *(ulonglong *)(param_2 + 0x68) = *(ulonglong *)(param_2 + 0x68) | 1;
              *(ulonglong *)(param_2 + 0x70) = *(ulonglong *)(param_2 + 0x70) & 0xfffffffffffffffe;
            }
            iVar3 = *(int *)(param_2 + 0x30) + -1;
            if (-1 < iVar3) {
              *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) | 0x20;
              *(int *)(param_2 + 0x4c) = iVar3;
            }
            DAT_180b8e65c = DAT_180b8e65c + 1;
          }
          if (param_2 != 0) {
            *(ulonglong *)(param_2 + 0x60) = *(ulonglong *)(param_2 + 0x60) & 0xfffffffffffffffe;
            *(ulonglong *)(param_2 + 0x68) = *(ulonglong *)(param_2 + 0x68) | 1;
            *(ulonglong *)(param_2 + 0x70) = *(ulonglong *)(param_2 + 0x70) & 0xfffffffffffffffe;
          }
          *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) | 0x20;
          *(undefined4 *)(param_2 + 0x4c) = 0xffffffff;
          DAT_180b8e65c = 0;
        }
        else {
          DAT_180b8e65c = 0;
          cVar2 = FUN_180278f80();
          if (cVar2 == '\0') goto LAB_180255559;
        }
        local_1c8 = (undefined8 *)CONCAT71(local_1c8._1_7_,1);
        FUN_1802585c0(&DAT_180b8e5b8,param_2,&local_a8,&local_e8);
      }
      cVar2 = FUN_180278f80();
      if (cVar2 != '\0') {
        FUN_180259ae0(extraout_XMM0_Qa_00,param_2,&local_a8,&local_e8);
      }
    }
LAB_180255559:
    local_1c8 = (undefined8 *)0x0;
    FUN_180254170(param_2,"weapon_not_ready",0xbf800000,0xbf800000);
  }
  DAT_180b8e659 = '\0';
  if (DAT_180cad508 == '\0') {
    DAT_180b8e659 = '\0';
  }
  if (DAT_180bb88c8 != '\0') {
    DAT_180b8e659 = '\0';
  }
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar5 = DAT_1808efa98;
  lVar6 = DAT_1808da460;
  if ((DAT_1808efa98 == DAT_1808da460) && (lVar9 = DAT_180c64950, DAT_180c64950 != 0))
  goto LAB_18025519b;
  UVar4 = GetTickCount64();
  if ((lVar5 == lVar6) && (UVar4 < DAT_180c64940)) {
  }
  local_178[0] = &DAT_1808efa40;
  iVar3 = FUN_1805f68d0(&DAT_1808efa40);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_1808efa8c == 0x7fffffff) {
    DAT_1808efa8c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  uVar10 = 1000;
  if (DAT_1808efa98 == lVar6) {
    if ((DAT_180c64950 == 0) && (DAT_180c64940 <= UVar4)) goto LAB_18025510a;
  }
  else {
    DAT_1808efa90 = 1000;
LAB_18025510a:
    lVar5 = -1;
    do {
      local_198[0]._8_8_ = lVar5 + 1;
      pcVar8 = "ngine2.dll:488BC448895808488968104889701857415641574881EC700100000F2970D8410FB6E98D42FC4D8BF88BFA4C8BF183F8017625"
               + lVar5;
      lVar5 = local_198[0]._8_8_;
    } while (*pcVar8 != '\0');
    local_198[0]._0_8_ = &DAT_180826960;
    local_b8 = "patterns::engine_client_cmd";
    local_b0 = 0x1b;
    DAT_180c64950 = FUN_1800e5d20(&local_b8,local_198);
    DAT_1808efa98 = lVar6;
    DAT_180c64940 = 0xffffffffffffffff;
    if (DAT_180c64950 == 0) {
      DAT_180c64940 = DAT_1808efa90 + UVar4;
      uVar10 = 60000;
      if (DAT_1808efa90 < 60000) {
        uVar10 = DAT_1808efa90 * 2;
      }
    }
    DAT_1808efa90 = uVar10;
  }
  lVar9 = DAT_180c64950;
  FUN_1805f68fc(&DAT_1808efa40);
  if (lVar9 == 0) {
  }
LAB_18025519b:
  lVar6 = DAT_180c64938;
  if (DAT_180c64938 == 0) {
  }
  cVar2 = FUN_1804513c0(lVar9,1,2);
  if (cVar2 == '\0') {
  }
  lVar5 = FUN_18017ea70();
  *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
  local_1c0 = 0;
  FUN_1802663c0(lVar9,lVar6);
  lVar6 = FUN_18017ea70();
  if (*(int *)(lVar6 + 4) == 0) {
  }
  *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
}



