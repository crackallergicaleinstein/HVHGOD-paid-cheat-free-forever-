// FUN_1803cc1f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803cc1f0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1803cc1f0(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined1 auVar2 [12];
  longlong lVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  short sVar6;
  int iVar7;
  undefined8 uVar8;
  ULONGLONG UVar9;
  uint *puVar10;
  undefined1 (*pauVar11) [16];
  float *pfVar12;
  float fVar13;
  uint uVar14;
  ulonglong uVar15;
  char *pcVar16;
  undefined4 uVar17;
  char cVar19;
  undefined1 auVar18 [64];
  undefined1 auVar20 [64];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [64];
  undefined4 uVar24;
  undefined1 auVar25 [16];
  undefined1 auStack_268 [32];
  undefined4 local_248 [4];
  bool *local_238;
  undefined4 *puStack_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined1 local_218 [16];
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  undefined1 (*local_1e8) [16];
  uint local_1e0;
  undefined8 local_1dc;
  undefined8 uStack_1d4;
  undefined8 uStack_1cc;
  undefined8 uStack_1c4;
  uint local_1bc;
  undefined8 uStack_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  bool local_198 [4];
  float local_194 [3];
  undefined1 local_188;
  undefined7 uStack_187;
  undefined8 uStack_180;
  undefined1 auStack_178 [16];
  undefined1 local_168 [16];
  undefined1 auStack_158 [16];
  undefined4 local_148;
  undefined1 local_144;
  undefined4 local_140;
  uint uStack_13c;
  undefined4 local_138;
  uint uStack_134;
  _SYSTEMTIME local_128 [2];
  undefined1 local_108 [16];
  ulonglong uStack_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [12];
  undefined4 uStack_dc;
  undefined1 auStack_d8 [16];
  uint local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined1 local_a4;
  undefined4 local_a0;
  int iStack_9c;
  undefined4 local_98;
  uint uStack_94;
  ulonglong local_88;
  
  local_88 = DAT_1808d5f00 ^ (ulonglong)auStack_268;
  local_194[0] = 0.0;
  AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  local_108._8_8_ = uRam0000000180bb8898;
  local_108._0_8_ = _DAT_180bb8890;
  uStack_f8 = uRam0000000180bb88a0;
  uStack_f0 = uRam0000000180bb88a8;
  uVar8 = uRam0000000180bb88b8;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  cVar19 = (char)uVar8;
  local_228 = DAT_180ccde38;
  local_220 = DAT_180ccde48;
  local_218 = (undefined1  [16])0x0;
  local_208 = (undefined1  [16])0x0;
  FUN_18015ba30(local_218,"0.1.411",7);
  local_1f8 = (undefined1  [16])0x0;
  local_1e8 = (undefined1 (*) [16])0x0;
  local_1dc = 0xffffc0adfff8eeeb;
  uStack_1d4 = 0xff0000009b140e0c;
  uStack_1cc = 0xffffffff28ffffff;
  auVar22 = SUB6416(ZEXT464(0x3f800000),0);
  uStack_1c4 = 0x3fb333333f800000;
  local_1bc = 0x3f99999a;
  uStack_1b8 = 0x4200000041700000;
  uStack_1b0 = 0x41800000;
  uStack_1ac = 0x41600000;
  uStack_1a8 = CONCAT31(uStack_1a8._1_3_,1);
  local_1e0 = (uint)DAT_180b0de18;
  if (local_1e0 < 4) {
    local_198[0] = local_1e0 == 3;
    if (local_198[0]) {
      local_e8._4_4_ = DAT_180b0de24;
      local_e8._0_4_ = DAT_180b0de20;
      local_e8._8_4_ = DAT_180b0deb0;
      uStack_dc = DAT_180b0deb4;
      auStack_d8._4_4_ = DAT_180b0de24;
      if (DAT_180b0de28 != '\0') {
        auStack_d8._4_4_ = DAT_180b0de90;
      }
      auStack_d8._0_4_ = DAT_180b0deb8;
      auStack_d8._8_4_ = DAT_180b0debc;
      auStack_d8._12_4_ = DAT_180b0dec0;
      uStack_c4 = (undefined4)_DAT_180b0dec8;
      uStack_c0 = (undefined4)((ulonglong)_DAT_180b0dec8 >> 0x20);
      uStack_bc = (undefined4)_DAT_180b0ded0;
      uStack_b8 = (undefined4)((ulonglong)_DAT_180b0ded0 >> 0x20);
      uStack_b4 = CONCAT31(uStack_b4._1_3_,DAT_180b0ded8);
      local_1dc = local_e8._0_8_;
      uStack_1d4 = stack0xffffffffffffff20;
      uStack_1cc = auStack_d8._0_8_;
      uStack_1c4 = auStack_d8._8_8_;
      local_c8 = DAT_180b0dec4;
      local_1bc = DAT_180b0dec4;
      uStack_1b8 = _DAT_180b0dec8;
      uStack_1b0 = uStack_bc;
      uStack_1ac = uStack_b8;
      uStack_1a8 = uStack_b4;
    }
  }
  else {
    local_1e0 = 0;
    local_198[0] = false;
  }
  local_238 = local_198;
  puStack_230 = &DAT_180b0de20;
  auVar2 = ZEXT812(0);
  auVar21._12_4_ = 0;
  auVar21._0_12_ = auVar2;
  auVar21 = auVar21 << 0x20;
  auVar25 = _DAT_18086d450;
  if (DAT_180b0dc78 != '\0') {
    if (DAT_180bb8d38 == 0) {
      auVar18 = ZEXT1264(auVar2) << 0x20;
      auVar20 = ZEXT1664(_DAT_18086d450);
      auVar23 = ZEXT1664(auVar22);
      uVar8 = FUN_18015bae0(local_128,"Account");
      fVar13 = 1.4013e-45;
    }
    else {
      auVar18 = ZEXT1264(auVar2) << 0x20;
      auVar20 = ZEXT1664(_DAT_18086d450);
      auVar23 = ZEXT1664(auVar22);
      uVar8 = FUN_18015b360(local_e8,&DAT_180bb8d28);
      fVar13 = 2.8026e-45;
    }
    local_194[0] = fVar13;
    FUN_18015b360(&local_188,uVar8);
    local_168 = (undefined1  [16])0x0;
    auStack_158 = (undefined1  [16])0x0;
    FUN_18015ba30(local_168,&PTR_180700558,0);
    uVar5 = uStack_134;
    uVar14 = uStack_13c;
    auVar25 = auVar23._0_16_;
    auVar21 = auVar20._0_16_;
    auVar22 = auVar18._0_16_;
    local_148 = auVar18._0_4_;
    local_144 = 1;
    uStack_13c = uStack_13c & 0xffffff00;
    uStack_134 = uStack_134 & 0xffffff00;
    if ((undefined1 (*) [16])local_1f8._8_8_ == local_1e8) {
      FUN_1803ceb90(local_1f8,local_1f8._8_8_,&local_188);
      auVar25 = auVar23._0_16_;
      auVar21 = auVar20._0_16_;
      auVar22 = auVar18._0_16_;
    }
    else {
      *(ulonglong *)(undefined1 *)local_1f8._8_8_ = CONCAT71(uStack_187,local_188);
      *(undefined8 *)((undefined1 *)local_1f8._8_8_ + 8) = uStack_180;
      *(undefined8 *)*(undefined1 (*) [16])(local_1f8._8_8_ + 0x10) = auStack_178._0_8_;
      *(undefined8 *)(*(undefined1 (*) [16])(local_1f8._8_8_ + 0x10) + 8) = auStack_178._8_8_;
      local_188 = 0;
      *(undefined8 *)*(undefined1 (*) [16])(local_1f8._8_8_ + 0x20) = local_168._0_8_;
      *(undefined8 *)(*(undefined1 (*) [16])(local_1f8._8_8_ + 0x20) + 8) = local_168._8_8_;
      *(undefined8 *)*(undefined1 (*) [16])(local_1f8._8_8_ + 0x30) = auStack_158._0_8_;
      *(undefined8 *)(*(undefined1 (*) [16])(local_1f8._8_8_ + 0x30) + 8) = auStack_158._8_8_;
      auVar4[0xf] = 0;
      auVar4._0_15_ = local_168._1_15_;
      local_168 = auVar4 << 8;
      *(undefined4 *)*(undefined1 (*) [16])(local_1f8._8_8_ + 0x40) = 0;
      (*(undefined1 (*) [16])(local_1f8._8_8_ + 0x40))[4] = 1;
      *(ulonglong *)(*(undefined1 (*) [16])(local_1f8._8_8_ + 0x40) + 8) =
           CONCAT44(uVar14,local_140) & 0xffffff00ffffffff;
      *(ulonglong *)*(undefined1 (*) [16])(local_1f8._8_8_ + 0x50) =
           CONCAT44(uVar5,local_138) & 0xffffff00ffffffff;
      local_1f8._8_8_ = *(undefined1 (*) [16])(local_1f8._8_8_ + 0x50) + 8;
      auStack_178 = auVar21;
      auStack_158 = auVar21;
    }
    auVar18 = ZEXT1664(auVar22);
    auVar20 = ZEXT1664(auVar21);
    auVar23 = ZEXT1664(auVar25);
    FUN_18015c010(local_168);
    FUN_18015c010(&local_188);
    if (((uint)fVar13 & 2) != 0) {
      fVar13 = (float)((uint)fVar13 & 0xfffffffd);
      FUN_18015c010(local_e8);
    }
    auVar21 = auVar18._0_16_;
    auVar22 = auVar23._0_16_;
    auVar25 = auVar20._0_16_;
    if (((uint)fVar13 & 1) != 0) {
      FUN_18015c010(local_128);
      auVar21 = auVar18._0_16_;
      auVar22 = auVar23._0_16_;
      auVar25 = auVar20._0_16_;
    }
  }
  if ((DAT_180b0dce0 != '\0') && (DAT_180b90810 != 0)) {
    auVar18 = ZEXT1664(auVar21);
    auVar20 = ZEXT1664(auVar25);
    auVar23 = ZEXT1664(auVar22);
    FUN_18015b360(&local_188,&DAT_180b90800);
    FUN_18015b0f0(local_168);
    local_148 = auVar18._0_4_;
    local_144 = 0;
    uStack_13c = uStack_13c & 0xffffff00;
    uStack_134 = uStack_134 & 0xffffff00;
    FUN_1803ce480(local_1f8,&local_188);
    FUN_180156fb0(&local_188);
    auVar21 = auVar18._0_16_;
    auVar22 = auVar23._0_16_;
    auVar25 = auVar20._0_16_;
  }
  uVar8 = local_108._0_8_;
  lVar3 = local_108._8_8_;
  if (DAT_180b0dba8 == '\0') goto LAB_1803cc7da;
  iVar7 = DAT_180c71e0c;
  if (DAT_180c71e0c == 0) {
    auVar18 = ZEXT1664(auVar21);
    auVar20 = ZEXT1664(auVar25);
    auVar23 = ZEXT1664(auVar22);
    UVar9 = GetTickCount64();
    auVar22 = auVar23._0_16_;
    auVar25 = auVar20._0_16_;
    auVar21 = auVar18._0_16_;
    if (UVar9 < DAT_180c71e10) {
      iVar7 = 0;
    }
    else {
      local_128[0]._0_8_ = &DAT_1809ba050;
      iVar7 = FUN_1805f68d0(&DAT_1809ba050);
      if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1809ba09c == 0x7fffffff) {
        DAT_1809ba09c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if ((DAT_180c71e0c == 0) && (DAT_180c71e10 <= UVar9)) {
        DAT_180c71e0c = FUN_1804174b0("CCSPlayerController",0x5fa2671c);
        if (DAT_180c71e0c == 0) {
          DAT_180c71e10 = UVar9 + 1000;
        }
        else {
          DAT_180c71e10 = 0xffffffffffffffff;
        }
      }
      iVar7 = DAT_180c71e0c;
      FUN_1805f68fc(&DAT_1809ba050);
      auVar22 = auVar23._0_16_;
      auVar25 = auVar20._0_16_;
      auVar21 = auVar18._0_16_;
    }
  }
  if ((uVar8 == 0) || (iVar7 == 0)) {
LAB_1803cc69f:
    uVar14 = 0;
  }
  else {
    auVar18 = ZEXT1664(auVar21);
    auVar20 = ZEXT1664(auVar25);
    auVar23 = ZEXT1664(auVar22);
    puVar10 = (uint *)FUN_1801a5f00(local_128,(longlong)iVar7 + uVar8);
    auVar22 = auVar23._0_16_;
    auVar25 = auVar20._0_16_;
    auVar21 = auVar18._0_16_;
    if ((char)puVar10[1] == '\0') goto LAB_1803cc69f;
    uVar14 = *puVar10;
  }
  pcVar16 = auStack_d8 + 5;
  uVar15 = (ulonglong)uVar14;
  do {
    pcVar16 = pcVar16 + -1;
    uVar1 = uVar15 / 10;
    *pcVar16 = (char)uVar15 + (char)uVar1 * -10 + '0';
    uVar15 = uVar1;
  } while ((int)uVar1 != 0);
  auVar18 = ZEXT1664(auVar21);
  auVar20 = ZEXT1664(auVar25);
  auVar23 = ZEXT1664(auVar22);
  FUN_18015bdb0(&local_188,pcVar16,auStack_d8 + 5);
  local_168 = (undefined1  [16])0x0;
  auStack_158 = (undefined1  [16])0x0;
  FUN_18015ba30(local_168,&DAT_18080ce28,3);
  local_148 = 0x42500000;
  local_144 = 0;
  if ((local_198[0] == false) || (DAT_180b0de28 == '\0')) {
    uStack_13c = (uint)uStack_13c._1_3_ << 8;
  }
  else {
    local_140 = DAT_180b0de98;
    uStack_13c = CONCAT31(uStack_13c._1_3_,1);
  }
  uStack_134 = uStack_134 & 0xffffff00;
  if (local_198[0] != false) {
    local_194[0] = 4.2039e-43;
    local_248[0] = 1;
    puVar10 = (uint *)FUN_1800b0180(&DAT_180b0deac,local_248,local_194);
    if (*puVar10 <= uVar14) {
      FUN_1803cdfe0(&local_138,&DAT_180b0dea4);
      FUN_1803cdfe0(&local_140,&DAT_180b0dea8);
    }
  }
  if ((undefined1 (*) [16])local_1f8._8_8_ == local_1e8) {
    FUN_1803ceb90(local_1f8,local_1f8._8_8_,&local_188);
  }
  else {
    FUN_1803cf010(local_1f8._8_8_,&local_188);
    local_1f8._8_8_ = local_1f8._8_8_ + 0x58;
  }
  FUN_180156fb0(&local_188);
  auVar21 = auVar18._0_16_;
  auVar22 = auVar23._0_16_;
  auVar25 = auVar20._0_16_;
  lVar3 = local_108._8_8_;
LAB_1803cc7da:
  fVar13 = auVar21._0_4_;
  uVar24 = auVar22._0_4_;
  if (((DAT_180b0ddb0 != '\0') && (cVar19 != '\0')) && (lVar3 != 0)) {
    auVar18 = ZEXT1664(auVar21);
    auVar20 = ZEXT1664(auVar25);
    auVar23 = ZEXT1664(auVar22);
    iVar7 = FUN_1803ccdf0();
    if (iVar7 == 0) {
      uStack_dc._0_1_ = 0;
      pauVar11 = (undefined1 (*) [16])local_e8;
    }
    else {
      pauVar11 = (undefined1 (*) [16])FUN_1801c6710(local_e8,iVar7 + lVar3);
    }
    fVar13 = auVar18._0_4_;
    uVar24 = auVar23._0_4_;
    auVar25 = auVar20._0_16_;
    _local_e8 = *pauVar11;
    if (local_e8[0xc] != '\0') {
      uVar17 = FUN_180450df0(local_e8);
      sVar6 = thunk_FUN_180624430();
      fVar13 = auVar18._0_4_;
      uVar24 = auVar23._0_4_;
      auVar25 = auVar20._0_16_;
      if (sVar6 < 1) {
        local_128[0].wHour = 6;
        local_128[0].wMinute = 0;
        local_128[0].wSecond = 0;
        local_128[0].wMilliseconds = 0;
        local_128[0]._0_8_ = "{:.0f}";
        local_248[0] = uVar17;
        FUN_1802e4d00(&local_188,local_128,local_248);
        FUN_18015bae0(local_168,&DAT_18080ce64);
        local_148 = 0x42940000;
        local_144 = 0;
        FUN_1803ccdc0(&local_238,&local_140,&DAT_180b0dea0);
        uStack_134 = uStack_134 & 0xffffff00;
        FUN_1803ce480(local_1f8,&local_188);
        FUN_180156fb0(&local_188);
        fVar13 = auVar18._0_4_;
        uVar24 = auVar23._0_4_;
        auVar25 = auVar20._0_16_;
      }
    }
  }
  if (DAT_180b0db40 != '\0') {
    auVar22 = ZEXT416((uint)DAT_180c71d9c);
    if (DAT_180c71d9c <= fVar13) {
      DAT_180c71d9c = DAT_180bbae04;
      auVar22 = ZEXT416((uint)DAT_180bbae04);
    }
    local_128[0]._0_4_ = DAT_180bbae00 + DAT_180bbae00;
    auVar18 = ZEXT1664(auVar22);
    auVar20 = ZEXT1664(ZEXT416((uint)DAT_180bbae04));
    auVar23 = ZEXT1664(auVar25);
    local_248[0] = uVar24;
    local_194[0] = fVar13;
    pfVar12 = (float *)FUN_1800e75c0(local_128,local_194,local_248);
    DAT_180c71d9c = auVar18._0_4_ + (auVar20._0_4_ - auVar18._0_4_) * *pfVar12;
    local_238 = (bool *)0x18080ce20;
    puStack_230 = (undefined4 *)0x6;
    FUN_1803ce000(local_e8,&local_238);
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    uStack_bc = 0;
    uStack_b8 = 0;
    uStack_b4 = 0;
    uStack_b0 = 0;
    FUN_18015ba30(&local_c8,&DAT_18080ce5c,4);
    uVar14 = uStack_94;
    auVar22 = auVar23._0_16_;
    local_a8 = 0x42780000;
    local_a4 = 0;
    if ((local_198[0] == false) || (DAT_180b0de28 == '\0')) {
      iStack_9c = (uint)iStack_9c._1_3_ << 8;
    }
    else {
      local_a0 = DAT_180b0de94;
      iStack_9c = CONCAT31(iStack_9c._1_3_,1);
    }
    uStack_94 = uStack_94 & 0xffffff00;
    if ((undefined1 (*) [16])local_1f8._8_8_ == local_1e8) {
      FUN_1803ceb90(local_1f8,local_1f8._8_8_,local_e8);
      auVar22 = auVar23._0_16_;
    }
    else {
      *(undefined1 (*) [16])local_1f8._8_8_ = (undefined1  [16])0x0;
      *(undefined8 *)*(undefined1 (*) [16])(local_1f8._8_8_ + 0x10) = 0;
      *(undefined8 *)(*(undefined1 (*) [16])(local_1f8._8_8_ + 0x10) + 8) = 0;
      *(undefined8 *)(undefined1 *)local_1f8._8_8_ = local_e8._0_8_;
      *(undefined8 *)((undefined1 *)local_1f8._8_8_ + 8) = stack0xffffffffffffff20;
      *(undefined8 *)*(undefined1 (*) [16])(local_1f8._8_8_ + 0x10) = auStack_d8._0_8_;
      *(undefined8 *)(*(undefined1 (*) [16])(local_1f8._8_8_ + 0x10) + 8) = auStack_d8._8_8_;
      auVar25[0xf] = 0;
      auVar25._0_15_ = stack0xffffffffffffff19;
      _local_e8 = auVar25 << 8;
      *(undefined1 (*) [16])(local_1f8._8_8_ + 0x20) = (undefined1  [16])0x0;
      *(undefined8 *)*(undefined1 (*) [16])(local_1f8._8_8_ + 0x30) = 0;
      *(undefined8 *)(*(undefined1 (*) [16])(local_1f8._8_8_ + 0x30) + 8) = 0;
      *(ulonglong *)*(undefined1 (*) [16])(local_1f8._8_8_ + 0x20) = CONCAT44(uStack_c4,local_c8);
      *(ulonglong *)(*(undefined1 (*) [16])(local_1f8._8_8_ + 0x20) + 8) =
           CONCAT44(uStack_bc,uStack_c0);
      *(ulonglong *)*(undefined1 (*) [16])(local_1f8._8_8_ + 0x30) = CONCAT44(uStack_b4,uStack_b8);
      *(undefined8 *)(*(undefined1 (*) [16])(local_1f8._8_8_ + 0x30) + 8) = uStack_b0;
      uStack_b8 = auVar23._0_4_;
      uStack_b4 = auVar23._4_4_;
      uStack_b0 = auVar23._8_8_;
      local_c8 = local_c8 & 0xffffff00;
      *(undefined4 *)*(undefined1 (*) [16])(local_1f8._8_8_ + 0x40) = 0x42780000;
      (*(undefined1 (*) [16])(local_1f8._8_8_ + 0x40))[4] = 0;
      *(ulonglong *)(*(undefined1 (*) [16])(local_1f8._8_8_ + 0x40) + 8) =
           CONCAT44(iStack_9c,local_a0);
      *(ulonglong *)*(undefined1 (*) [16])(local_1f8._8_8_ + 0x50) =
           CONCAT44(uVar14,local_98) & 0xffffff00ffffffff;
      local_1f8._8_8_ = *(undefined1 (*) [16])(local_1f8._8_8_ + 0x50) + 8;
      auStack_d8 = auVar22;
    }
    auVar18 = ZEXT1664(auVar22);
    FUN_18015c010(&local_c8);
    FUN_18015c010(local_e8);
    auVar25 = auVar18._0_16_;
  }
  if ((DAT_180b0dd48 != '\0') && (uVar8 != 0)) {
    local_128[0].wYear = 0;
    local_128[0].wMonth = 0x4280;
    local_238 = (bool *)0x18080ce20;
    puStack_230 = (undefined4 *)0x6;
    auVar18 = ZEXT1664(auVar25);
    FUN_1802e4d00(&local_188,&local_238,local_128);
    FUN_18015bae0(local_168," tick");
    local_148 = 0x42680000;
    local_144 = 0;
    uStack_13c = uStack_13c & 0xffffff00;
    uStack_134 = uStack_134 & 0xffffff00;
    FUN_1803ce480(local_1f8,&local_188);
    FUN_180156fb0(&local_188);
    auVar25 = auVar18._0_16_;
  }
  if (DAT_180b0dc10 != '\0') {
    local_128[0].wYear = 0;
    local_128[0].wMonth = 0;
    local_128[0].wDayOfWeek = 0;
    local_128[0].wDay = 0;
    local_128[0].wHour = 0;
    local_128[0].wMinute = 0;
    local_128[0].wSecond = 0;
    local_128[0].wMilliseconds = 0;
    auVar18 = ZEXT1664(auVar25);
    GetLocalTime(local_128);
    uStack_f8 = (ulonglong)CONCAT24(local_128[0].wMinute,(uint)local_128[0].wHour);
    local_108._8_8_ = 0x2000000000000004;
    local_108._0_8_ = 0x2000000000000000;
    stack0xffffffffffffff20 = local_108;
    local_e8._0_8_ = 2;
    local_238 = (bool *)&DAT_18080ce70;
    puStack_230 = (undefined4 *)0xb;
    FUN_1801d97f0(&local_188,&local_238,local_e8);
    local_168 = (undefined1  [16])0x0;
    auStack_158 = (undefined1  [16])0x0;
    FUN_18015ba30(local_168,&PTR_180700558,0);
    uVar14 = uStack_134;
    local_148 = 0x42100000;
    local_144 = 0;
    if ((local_198[0] == false) || (DAT_180b0de28 == '\0')) {
      uStack_13c = (uint)uStack_13c._1_3_ << 8;
    }
    else {
      local_140 = DAT_180b0de9c;
      uStack_13c = CONCAT31(uStack_13c._1_3_,1);
    }
    uStack_134 = uStack_134 & 0xffffff00;
    if ((undefined1 (*) [16])local_1f8._8_8_ == local_1e8) {
      FUN_1803ceb90(local_1f8,local_1f8._8_8_,&local_188);
    }
    else {
      *(undefined1 (*) [16])local_1f8._8_8_ = (undefined1  [16])0x0;
      *(undefined8 *)*(undefined1 (*) [16])(local_1f8._8_8_ + 0x10) = 0;
      *(undefined8 *)(*(undefined1 (*) [16])(local_1f8._8_8_ + 0x10) + 8) = 0;
      *(ulonglong *)(undefined1 *)local_1f8._8_8_ = CONCAT71(uStack_187,local_188);
      *(undefined8 *)((undefined1 *)local_1f8._8_8_ + 8) = uStack_180;
      *(undefined8 *)*(undefined1 (*) [16])(local_1f8._8_8_ + 0x10) = auStack_178._0_8_;
      *(undefined8 *)(*(undefined1 (*) [16])(local_1f8._8_8_ + 0x10) + 8) = auStack_178._8_8_;
      auStack_178 = auVar18._0_16_;
      local_188 = 0;
      *(undefined1 (*) [16])(local_1f8._8_8_ + 0x20) = (undefined1  [16])0x0;
      *(undefined8 *)*(undefined1 (*) [16])(local_1f8._8_8_ + 0x30) = 0;
      *(undefined8 *)(*(undefined1 (*) [16])(local_1f8._8_8_ + 0x30) + 8) = 0;
      *(undefined8 *)*(undefined1 (*) [16])(local_1f8._8_8_ + 0x20) = local_168._0_8_;
      *(undefined8 *)(*(undefined1 (*) [16])(local_1f8._8_8_ + 0x20) + 8) = local_168._8_8_;
      *(undefined8 *)*(undefined1 (*) [16])(local_1f8._8_8_ + 0x30) = auStack_158._0_8_;
      *(undefined8 *)(*(undefined1 (*) [16])(local_1f8._8_8_ + 0x30) + 8) = auStack_158._8_8_;
      auVar22[0xf] = 0;
      auVar22._0_15_ = local_168._1_15_;
      local_168 = auVar22 << 8;
      *(undefined4 *)*(undefined1 (*) [16])(local_1f8._8_8_ + 0x40) = 0x42100000;
      (*(undefined1 (*) [16])(local_1f8._8_8_ + 0x40))[4] = 0;
      *(ulonglong *)(*(undefined1 (*) [16])(local_1f8._8_8_ + 0x40) + 8) =
           CONCAT44(uStack_13c,local_140);
      *(ulonglong *)*(undefined1 (*) [16])(local_1f8._8_8_ + 0x50) =
           CONCAT44(uVar14,local_138) & 0xffffff00ffffffff;
      local_1f8._8_8_ = *(undefined1 (*) [16])(local_1f8._8_8_ + 0x50) + 8;
      auStack_158 = auStack_178;
    }
    FUN_18015c010(local_168);
    FUN_18015c010(&local_188);
  }
  local_108 = (undefined1  [16])0x0;
  uStack_f8 = 0;
  local_194[0] = 1.4013e-45;
  if (DAT_180bbab78 != 0) {
    (**(code **)(*(longlong *)DAT_180bbab78 + 0x2f8))(DAT_180bbab78,local_194,local_108);
  }
  FUN_1803ca340(param_2,&local_228);
  FUN_1803ce7f0(local_1f8);
  FUN_18015c010(local_218);
}



