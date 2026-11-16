// FUN_180236070 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180236070 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180236070(undefined8 param_1,longlong param_2)

{
  float fVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  float *pfVar8;
  ULONGLONG UVar9;
  longlong lVar10;
  undefined1 (*pauVar11) [32];
  float fVar12;
  longlong lVar13;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar14;
  undefined8 extraout_XMM0_Qa_00;
  ulonglong uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [64];
  undefined1 auStack_1c8 [32];
  float *local_1a8;
  float *local_1a0;
  longlong *local_198;
  float *local_190;
  undefined1 *local_188;
  float local_178;
  float fStack_174;
  float local_170;
  float local_168;
  float fStack_164;
  uint local_160;
  float local_158;
  float local_154;
  uint local_150;
  undefined *local_148;
  longlong local_140 [7];
  undefined8 local_108;
  undefined4 uStack_104;
  undefined **local_f8;
  undefined1 *local_f0;
  longlong *local_e8;
  longlong *local_e0;
  undefined ***local_c0;
  longlong local_b8;
  longlong lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  float local_80;
  float local_7c;
  float local_78;
  undefined1 local_70 [16];
  ulonglong local_60;
  
  local_60 = DAT_1808d5f00 ^ (ulonglong)auStack_1c8;
  _DAT_180b8f808 = 0;
  DAT_180b8f80c = 0;
  DAT_180b8f7b0 = 0;
  DAT_180b8f7a8 = 0;
  DAT_180b8f80a = 0;
  DAT_180b8f818 = 0;
  AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  local_b8 = _DAT_180bb8890;
  lStack_b0 = lRam0000000180bb8898;
  uStack_a8 = uRam0000000180bb88a0;
  uStack_a0 = uRam0000000180bb88a8;
  local_98 = _DAT_180bb88b0;
  uStack_90 = uRam0000000180bb88b8;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  if ((((((param_2 == 0) || (DAT_180cad2e0 != 0)) || ((char)uStack_90 == '\0')) ||
       ((lStack_b0 == 0 || (local_b8 == 0)))) || (DAT_180cc9372 == '\0')) ||
     (5 < DAT_180cc9348 - 1U)) {
    FUN_180235740();
  }
  pfVar8 = (float *)FUN_1802345c0(&DAT_180c8fdb8);
  uVar14 = FUN_1803dff30(extraout_XMM0_Qa,&local_158);
  FUN_180275560(uVar14,&local_80,lStack_b0);
  if (((DAT_180b8f7e8 != pfVar8) || (DAT_180b8f7d8 != DAT_180cc9330)) ||
     (DAT_180b8f7e0 != lStack_b0)) {
    FUN_180235740();
    DAT_180b8f7d8 = DAT_180cc9330;
    DAT_180b8f7e0 = lStack_b0;
    DAT_180b8f7e8 = pfVar8;
  }
  auVar17 = ZEXT864(0);
  iVar6 = DAT_180c64388;
  if (DAT_180c64388 == 0) {
    UVar9 = GetTickCount64();
    if (DAT_180c64380 <= UVar9) {
      local_148 = &DAT_1808eda30;
      iVar6 = FUN_1805f68d0(&DAT_1808eda30);
      if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808eda7c == 0x7fffffff) {
        DAT_1808eda7c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if ((DAT_180c64388 == 0) && (DAT_180c64380 <= UVar9)) {
        DAT_180c64388 = FUN_1804174b0("C_CSPlayerPawn",0xfe518c17);
        if (DAT_180c64388 == 0) {
          DAT_180c64380 = UVar9 + 1000;
        }
        else {
          DAT_180c64380 = 0xffffffffffffffff;
        }
      }
      iVar6 = DAT_180c64388;
      FUN_1805f68fc(&DAT_1808eda30);
      if (iVar6 != 0) goto LAB_18023628f;
    }
    fVar12 = 0.0;
LAB_1802362fe:
    if ((int)fVar12 < (int)DAT_180b8e748) goto LAB_180236307;
  }
  else {
LAB_18023628f:
    lVar13 = iVar6 + lStack_b0;
    lVar10 = FUN_18017ea70();
    *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
    if (lVar13 == 0) {
      bVar3 = false;
    }
    else {
      local_178 = 0.0;
      cVar5 = FUN_1804514f0(&local_178,lVar13,4);
      if (cVar5 == '\0') {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
    }
    fVar1 = local_178;
    lVar10 = FUN_18017ea70();
    if (*(int *)(lVar10 + 4) != 0) {
      *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
    }
    fVar12 = 0.0;
    if (bVar3) {
      fVar12 = fVar1;
    }
    if (((int)fVar12 < 1) || (DAT_180b8e748 != 0.0)) goto LAB_1802362fe;
LAB_180236307:
    uVar14 = FUN_1804548a0();
    uVar7 = FUN_1804549c0(uVar14);
    _DAT_180b8e74c = (float)(uVar7 >> 8) * 5.9604645e-08 + auVar17._0_4_;
  }
  DAT_180b8e748 = fVar12;
  if ((*(char *)pfVar8 == '\0') ||
     (cVar5 = FUN_180235330((char *)((longlong)pfVar8 + 0x95),lStack_b0), cVar5 != '\0')) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (((*(char *)(pfVar8 + 0x6a) == '\0') ||
      (cVar5 = FUN_180235330((char *)((longlong)pfVar8 + 0x99),lStack_b0), cVar5 != '\0')) ||
     ((*(byte *)(param_2 + 0x60) & 1) != 0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (!bVar3) {
    FUN_180235850();
  }
  if (!bVar4) {
    FUN_180235960();
  }
  if ((!bVar3) && (!bVar4)) goto LAB_180236528;
  uVar14 = FUN_18017bf40(&local_148);
  cVar5 = FUN_180278f80(uVar14,param_2,local_b8,0);
  uVar14 = extraout_XMM0_Qa_00;
  if (cVar5 == '\0') {
    uVar14 = FUN_180235850();
  }
  if ((bVar3) && (cVar5 != '\0')) {
    if (DAT_180b8f7cc == '\0') {
      DAT_180b8f7cc = '\x01';
      uVar14 = FUN_1804548a0();
      uVar7 = FUN_1804549c0(uVar14);
      DAT_180b8f7c0 = (float)(uVar7 >> 8) * 5.9604645e-08 + auVar17._0_4_;
    }
    uVar14 = FUN_180233fd0(pfVar8[0x1a],pfVar8[0x1c],DAT_180b8f7c0);
    DAT_180b8f820 = (undefined4)uVar14;
  }
  FUN_1802770e0(uVar14,local_70,lStack_b0);
  uVar14 = FUN_180277c60();
  DAT_180cc9378 = (undefined4)uVar14;
  uVar14 = FUN_180277ea0(uVar14,1);
  DAT_180cc9374 = (undefined4)uVar14;
  if (cVar5 != '\0') {
    local_f8 = std::
               _Func_impl_no_alloc<`public:_void___cdecl_features::combat::legit::on_create_move(systems::input::usercmd*___ptr64)___ptr64'::`30'::<lambda_3>,void>
               ::vftable;
    local_f0 = local_70;
    local_e8 = &local_b8;
    local_e0 = &DAT_180cc9330;
    local_c0 = &local_f8;
    FUN_180412b50(uVar14,param_2,&local_b8,&local_f8);
    if (local_c0 != (undefined ***)0x0) {
      (*(code *)(*local_c0)[4])(local_c0,local_c0 != &local_f8);
    }
  }
  uVar14 = FUN_18017bf40(local_140);
  if (DAT_180b8f7f0 != DAT_180b8f7f8) {
    DAT_180b8f7f8 = DAT_180b8f7f0;
  }
  if ((!bVar3) || (*(char *)((longlong)pfVar8 + 0x96) == '\0')) {
    if (bVar4) {
      if (*(char *)((longlong)pfVar8 + 0x9a) != '\0') goto LAB_1802364ff;
      goto LAB_180236509;
    }
  }
  else {
LAB_1802364ff:
    uVar14 = FUN_1802359c0();
    if (bVar4) {
LAB_180236509:
      local_1a8 = (float *)&local_b8;
      FUN_180236a10(uVar14,local_70,&local_158,pfVar8);
    }
  }
  if (cVar5 != '\0') {
    local_168 = local_158;
    fStack_164 = local_154;
    uVar15 = (ulonglong)local_150;
    local_160 = local_150;
    if (((*(char *)(pfVar8 + 0x2a) != '\0') || (*(char *)(pfVar8 + 0x46) != '\0')) &&
       (fVar1 = local_7c * local_7c + local_80 * local_80 + local_78 * local_78,
       uVar15 = (ulonglong)(uint)fVar1, 0.0001 < fVar1)) {
      local_168 = local_158 + local_80;
      fStack_164 = local_154 + local_7c;
      uVar15 = FUN_180451150(&local_168);
    }
    if (bVar3) {
      local_1a0 = (float *)&local_b8;
      local_1a8 = pfVar8;
      pauVar11 = (undefined1 (*) [32])FUN_180237b40(uVar15,local_140 + 1,local_70,&local_168);
      auVar16 = auVar17._0_16_;
      _DAT_180b8e6e0 = *pauVar11;
      _DAT_180b8e700 = *(undefined8 *)pauVar11[1];
      _DAT_180b8e708 = *(undefined8 *)(pauVar11[1] + 8);
      uRam0000000180b8e710 = *(undefined8 *)(pauVar11[1] + 0x10);
      DAT_180b8e718 = *(undefined8 *)(pauVar11[1] + 0x18);
      if (DAT_180b8e6e0._28_1_ == '\0') {
        if (DAT_180b8f7d0 != 0) {
          auVar17 = ZEXT1664(auVar16);
          FUN_180235850();
        }
      }
      else {
        if (DAT_180b8f7d0 != DAT_180b8e6e0) {
          DAT_180b8f7c8 = DAT_180cc9364;
          auVar17 = ZEXT1664(auVar16);
          DAT_180b8f7d0 = DAT_180b8e6e0;
          uVar14 = FUN_1804548a0();
          uVar7 = FUN_1804549c0(uVar14);
          fVar1 = (float)(uVar7 >> 8) * 5.9604645e-08;
          DAT_180b8f7c4 = (fVar1 + fVar1) - 1.0;
          FUN_1802346a0();
          local_140[1] = 0xffffffffffffffff;
          local_140[2] = 0;
          local_140[3] = 0;
          local_140[4] = 0;
          local_140[5] = 0;
          _DAT_180b8e750 = 0xffffffffffffffff;
          uRam0000000180b8e758 = 0;
          uRam0000000180b8e760 = 0;
          _DAT_180b8e768 = 0;
          auVar2._8_8_ = 0;
          auVar2._0_8_ = local_140[6];
          auVar16 = auVar17._0_16_;
          auVar2 = vinsertps_avx(auVar2 << 0x40,auVar16,0x20);
          _DAT_180b8e770 = vinsertps_avx(auVar2,auVar16,0x30);
          _DAT_180b8e780 = CONCAT44(uStack_104,auVar17._0_4_);
          DAT_180b8e738 = 0;
        }
        local_198 = &local_b8;
        local_1a8 = &local_80;
        auVar17 = ZEXT1664(auVar16);
        local_1a0 = pfVar8;
        FUN_180239730();
      }
    }
    if (*(char *)(pfVar8 + 0x46) == '\0') {
      _DAT_180b8e720 = auVar17._0_4_;
      _DAT_180b8e724 = _DAT_180b8e720;
      _DAT_180b8e728 = _DAT_180b8e720;
    }
    else if (DAT_180b8e740 != *(longlong *)(param_2 + 8)) {
      local_1a0 = (float *)&local_b8;
      local_1a8 = (float *)CONCAT71(local_1a8._1_7_,DAT_180b8e6fc == '\0');
      DAT_180b8e740 = *(longlong *)(param_2 + 8);
      FUN_18023f7a0(&DAT_180b8e6e0);
    }
    uVar14 = FUN_18017bf40(&local_168);
    if (bVar4) {
      uVar14 = FUN_1803dff30(uVar14,&local_178);
      local_198 = &local_b8;
      local_1a8 = &local_80;
      local_1a0 = pfVar8;
      uVar14 = FUN_18023b530(&DAT_180b8e6e0,param_2,local_70,uVar14);
    }
    if (((DAT_180b8f808 == '\0') && (bVar3)) &&
       ((DAT_180b8e6fc != '\0' && ((*(byte *)(param_2 + 0x60) & 1) != 0)))) {
      FUN_1803dff30(uVar14,&local_178);
      iVar6 = *(int *)(param_2 + 0x4c);
      if ((-1 < iVar6) && (iVar6 < *(int *)(param_2 + 0x30))) {
        lVar10 = *(longlong *)(*(longlong *)(param_2 + 0x38) + 8 + (longlong)iVar6 * 8);
        lVar13 = 0;
        if (lVar10 != 0) {
          lVar13 = lVar10 + 0x10;
        }
        if (lVar13 != 0) {
          lVar10 = 0;
          if (*(longlong *)(lVar13 + 8) != 0) {
            lVar10 = *(longlong *)(lVar13 + 8) + 0x10;
          }
          if (lVar10 != 0) {
            local_178 = *(float *)(lVar10 + 8);
            fStack_174 = *(float *)(lVar10 + 0xc);
            local_170 = *(float *)(lVar10 + 0x10);
          }
        }
      }
      local_178 = local_178 + local_80;
      fStack_174 = fStack_174 + local_7c;
      local_170 = local_170 + local_78;
      FUN_180451150(&local_178);
      local_188 = local_70;
      local_190 = &local_178;
      local_198 = (longlong *)CONCAT44(local_198._4_4_,0xbf800000);
      local_1a0 = (float *)CONCAT44(local_1a0._4_4_,DAT_180b8e6f4);
      local_1a8 = (float *)CONCAT44(local_1a8._4_4_,DAT_180b8e700);
      FUN_18023f230(DAT_180b8e6f4,param_2,DAT_180b8e6e0,DAT_180b8e718);
    }
    FUN_18017bf40(&local_178);
    local_1a8 = (float *)((CONCAT44(fStack_174,local_178) - CONCAT44(fStack_164,local_168)) / 1000);
    FUN_1802354f0(*(char *)pfVar8,*(char *)(pfVar8 + 0x6a),
                  (local_140[0] - (longlong)local_148) / 1000,
                  (CONCAT44(fStack_164,local_168) - local_140[0]) / 1000);
  }
LAB_180236528:
  if (*(char *)(pfVar8 + 0x46) == '\0') {
    _DAT_180b8e720 = auVar17._0_4_;
    _DAT_180b8e724 = _DAT_180b8e720;
    _DAT_180b8e728 = _DAT_180b8e720;
  }
  else if (DAT_180b8e740 != *(longlong *)(param_2 + 8)) {
    local_1a0 = (float *)&local_b8;
    local_1a8 = (float *)CONCAT71(local_1a8._1_7_,1);
    DAT_180b8e740 = *(longlong *)(param_2 + 8);
    FUN_18023f7a0(&DAT_180b8e6e0);
  }
}



