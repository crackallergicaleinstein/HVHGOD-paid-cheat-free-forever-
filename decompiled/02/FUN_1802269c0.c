// FUN_1802269c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802269c0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802269c0(longlong param_1,undefined4 param_2,longlong param_3,int *param_4)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  ULONGLONG UVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined **ppuVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  undefined *puVar18;
  ulonglong uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [64];
  undefined1 auVar22 [64];
  undefined1 auVar23 [64];
  float fVar24;
  undefined *puVar25;
  undefined1 auVar26 [64];
  uint uVar27;
  undefined *puVar28;
  uint uVar29;
  uint uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined1 auStack_3a8 [32];
  longlong local_388;
  char local_378;
  undefined8 local_370;
  uint local_368;
  uint local_360;
  uint local_35c;
  undefined *local_358;
  uint local_350;
  undefined8 local_348;
  uint local_340;
  longlong local_338;
  uint local_330;
  undefined4 local_32c;
  undefined8 *local_328;
  uint uStack_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  uint uStack_314;
  longlong local_308;
  int *local_300;
  longlong local_2f8;
  longlong local_2f0;
  longlong local_2e8;
  undefined *puStack_2e0;
  longlong lStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  uint uStack_2b4;
  undefined8 uStack_2b0;
  longlong local_2a8;
  undefined8 uStack_2a0;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  longlong lStack_270;
  undefined8 local_268;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  float fStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  uint uStack_244;
  undefined *puStack_240;
  uint uStack_238;
  uint uStack_234;
  uint uStack_230;
  uint uStack_22c;
  undefined8 local_228 [3];
  undefined4 local_210;
  char local_20c;
  undefined1 local_208 [24];
  undefined4 local_1f0;
  char local_1ec;
  undefined8 local_1e8 [3];
  float local_1d0;
  char local_1cc;
  longlong local_1c8;
  undefined *puStack_1c0;
  longlong lStack_1b8;
  float fStack_1b0;
  float fStack_1ac;
  float local_1a8;
  float fStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  uint uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  uint uStack_188;
  undefined4 uStack_184;
  undefined8 uStack_180;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  float fStack_130;
  float afStack_12c [2];
  uint uStack_124;
  undefined *puStack_120;
  uint uStack_118;
  uint uStack_114;
  uint uStack_110;
  uint uStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  ulonglong local_e0;
  
  local_e0 = DAT_1808d5f00 ^ (ulonglong)auStack_3a8;
  local_32c = param_2;
  local_300 = param_4;
  local_2f8 = param_3;
  local_2f0 = param_1;
  if ((DAT_180cd3a58 & 1) == 0) {
    DAT_180cd3a58 = DAT_180cd3a58 | 1;
    FUN_1802277a0();
  }
  if (DAT_180cd3a60 == 0) {
  }
  lVar7 = FUN_18017ea70();
  *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
  if (param_1 + 0x8f8 == 0) {
    bVar1 = false;
    uVar16 = (uint)local_370;
  }
  else {
    local_360 = 0;
    cVar3 = FUN_1804514f0(&local_360,param_1 + 0x8f8,4);
    if (cVar3 == '\0') {
      bVar1 = false;
      uVar16 = (uint)local_370;
    }
    else {
      bVar1 = true;
      uVar16 = local_360;
    }
  }
  lVar7 = FUN_18017ea70();
  iVar14 = *(int *)(lVar7 + 4);
  if (iVar14 != 0) {
    iVar14 = iVar14 + -1;
    *(int *)(lVar7 + 4) = iVar14;
  }
  local_330 = 0xffffffff;
  if (bVar1) {
    local_330 = uVar16;
  }
  puVar8 = (undefined8 *)FUN_1803d4150(iVar14,local_330);
  local_328 = puVar8;
  plVar9 = (longlong *)FUN_180224dc0(&local_348,param_1,param_2);
  local_308 = *plVar9;
  puVar18 = (undefined *)plVar9[1];
  lVar7 = plVar9[2];
  if (puVar8 == (undefined8 *)0x0) {
  }
  if (local_308 == 0) {
  }
  if (puVar18 == (undefined *)0x0) {
  }
  if (lVar7 == 0) {
  }
  local_358 = puVar18;
  local_338 = lVar7;
  FUN_180226450(local_1e8,puVar8);
  FUN_180226450(local_208,lVar7);
  FUN_180226450(local_228,puVar18);
  lVar7 = FUN_18017ea70();
  *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
  if (param_1 + 0x490 == 0) {
LAB_180226b7b:
    local_378 = '\0';
    local_35c = local_340;
    puVar28 = local_348;
  }
  else {
    local_370 = (undefined *)0x0;
    local_368 = 0;
    cVar3 = FUN_1804514f0(&local_370,param_1 + 0x490,0xc);
    if (cVar3 == '\0') goto LAB_180226b7b;
    local_35c = local_368;
    local_378 = '\x01';
    puVar28 = local_370;
  }
  lVar7 = FUN_18017ea70();
  if (*(int *)(lVar7 + 4) != 0) {
    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
  }
  lVar7 = FUN_18017ea70();
  *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
  if (param_1 + 0x49c == 0) {
    bVar1 = false;
    local_360 = local_340;
    puVar25 = local_348;
  }
  else {
    local_370 = (undefined *)0x0;
    local_368 = 0;
    cVar3 = FUN_1804514f0(&local_370,param_1 + 0x49c,0xc);
    if (cVar3 == '\0') {
      bVar1 = false;
      local_360 = local_340;
      puVar25 = local_348;
    }
    else {
      local_360 = local_368;
      bVar1 = true;
      puVar25 = local_370;
    }
  }
  lVar7 = FUN_18017ea70();
  if (*(int *)(lVar7 + 4) != 0) {
    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
  }
  lVar7 = FUN_18017ea70();
  *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
  uVar33 = 0;
  uVar34 = 0;
  uVar32 = 0;
  uVar31 = 0;
  if (param_1 + 0x4a8 == 0) {
    bVar2 = false;
  }
  else {
    local_370 = (undefined *)((ulonglong)local_370 & 0xffffffff00000000);
    cVar3 = FUN_1804514f0(&local_370,param_1 + 0x4a8,4);
    if (cVar3 == '\0') {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
  }
  auVar23 = ZEXT464((uint)local_370);
  lVar7 = FUN_18017ea70();
  if (*(int *)(lVar7 + 4) != 0) {
    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
  }
  iVar14 = DAT_180c63e30;
  uVar19 = 0xffffffffffffffff;
  if ((DAT_180c63e30 == 0) && (UVar10 = GetTickCount64(), DAT_180c63e28 <= UVar10)) {
    local_370 = &DAT_1808ebcc0;
    iVar14 = FUN_1805f68d0(&DAT_1808ebcc0);
    if (iVar14 != 0) goto LAB_18022776e;
    if (DAT_1808ebd0c == 0x7fffffff) {
      DAT_1808ebd0c = 0x7ffffffe;
      goto LAB_180227783;
    }
    if ((DAT_180c63e30 == 0) && (DAT_180c63e28 <= UVar10)) {
      DAT_180c63e30 = FUN_1804174b0("C_BaseModelEntity",0xae8e690f);
      if (DAT_180c63e30 == 0) {
        DAT_180c63e28 = UVar10 + 1000;
      }
      else {
        DAT_180c63e28 = 0xffffffffffffffff;
      }
    }
    iVar14 = DAT_180c63e30;
    FUN_1805f68fc(&DAT_1808ebcc0);
  }
  iVar5 = DAT_180c63e1c;
  if ((DAT_180c63e1c == 0) && (UVar10 = GetTickCount64(), DAT_180c63e20 <= UVar10)) {
    local_370 = &DAT_1808ebc70;
    iVar5 = FUN_1805f68d0(&DAT_1808ebc70);
    if (iVar5 != 0) goto LAB_18022776e;
    if (DAT_1808ebcbc == 0x7fffffff) {
      DAT_1808ebcbc = 0x7ffffffe;
      goto LAB_180227783;
    }
    if ((DAT_180c63e1c == 0) && (DAT_180c63e20 <= UVar10)) {
      DAT_180c63e1c = FUN_1804174b0("CCollisionProperty",0xe57f80c);
      if (DAT_180c63e1c == 0) {
        DAT_180c63e20 = UVar10 + 1000;
      }
      else {
        DAT_180c63e20 = 0xffffffffffffffff;
      }
    }
    iVar5 = DAT_180c63e1c;
    FUN_1805f68fc(&DAT_1808ebc70);
  }
  iVar6 = DAT_180c63e18;
  if (DAT_180c63e18 == 0) {
    UVar10 = GetTickCount64();
    if (DAT_180c63e10 <= UVar10) {
      local_370 = &DAT_1808ebc20;
      iVar6 = FUN_1805f68d0(&DAT_1808ebc20);
      if (iVar6 != 0) goto LAB_18022776e;
      if (DAT_1808ebc6c == 0x7fffffff) {
        DAT_1808ebc6c = 0x7ffffffe;
        goto LAB_180227783;
      }
      if ((DAT_180c63e18 == 0) && (DAT_180c63e10 <= UVar10)) {
        DAT_180c63e18 = FUN_1804174b0("CCollisionProperty",0x7d388d3e);
        if (DAT_180c63e18 == 0) {
          uVar19 = UVar10 + 1000;
        }
        DAT_180c63e10 = uVar19;
      }
      iVar6 = DAT_180c63e18;
      FUN_1805f68fc(&DAT_1808ebc20);
    }
    puVar18 = local_358;
  }
  if (((((local_1cc != '\0') && (local_1ec != '\0')) && (local_20c != '\0')) &&
      ((local_378 != '\0' && (bVar1)))) &&
     (((bVar2 && ((iVar14 != 0 && (iVar5 != 0)))) && (iVar6 != 0)))) {
    lVar7 = FUN_18017ea70();
    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
    if (puVar18 + (longlong)iVar5 + (longlong)iVar14 == (undefined *)0x0) {
      bVar1 = false;
      uVar16 = local_340;
    }
    else {
      local_370 = (undefined *)0x0;
      local_368 = 0;
      cVar3 = FUN_1804514f0(&local_370,puVar18 + (longlong)iVar5 + (longlong)iVar14,0xc);
      if (cVar3 == '\0') {
        bVar1 = false;
        uVar16 = local_340;
      }
      else {
        local_348 = local_370;
        bVar1 = true;
        uVar16 = local_368;
      }
    }
    lVar7 = FUN_18017ea70();
    puVar18 = local_358;
    if (*(int *)(lVar7 + 4) != 0) {
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
    }
    lVar7 = FUN_18017ea70();
    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
    if (puVar18 + (longlong)iVar6 + (longlong)iVar14 == (undefined *)0x0) {
      bVar2 = false;
      uVar15 = local_368;
    }
    else {
      local_358 = (undefined *)0x0;
      local_350 = 0;
      cVar3 = FUN_1804514f0(&local_358,puVar18 + (longlong)iVar6 + (longlong)iVar14,0xc);
      if (cVar3 == '\0') {
        bVar2 = false;
        uVar15 = local_368;
      }
      else {
        local_370 = local_358;
        bVar2 = true;
        uVar15 = local_350;
      }
    }
    lVar7 = FUN_18017ea70();
    if (*(int *)(lVar7 + 4) != 0) {
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
    }
    lVar7 = DAT_180cd3a60;
    local_108 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    if ((bVar1) && (bVar2)) {
      auVar23 = ZEXT1664(auVar23._0_16_);
      cVar3 = FUN_1804513c0(DAT_180cd3a60,1,2);
      if (cVar3 == '\0') {
        uStack_320._0_1_ = '\0';
        puVar8 = local_328;
        lVar17 = local_308;
      }
      else {
        lVar11 = FUN_18017ea70();
        lVar17 = local_308;
        puVar8 = local_328;
        *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + 1;
        local_388 = local_308;
        FUN_18022ffc0(&local_328,lVar7,&local_108,local_328);
        lVar7 = FUN_18017ea70();
        if (*(int *)(lVar7 + 4) != 0) {
          *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
        }
      }
      lVar7 = local_2f8;
      puVar12 = local_328;
      if ((char)uStack_320 == '\0') {
        puVar12 = (undefined8 *)0x0;
      }
      if (puVar12 == &local_108) {
        uStack_190 = 0;
        uStack_18c = 0;
        uStack_174 = 0;
        uStack_170 = 0;
        uStack_158 = 0;
        uStack_154 = 0;
        uStack_13c = 0;
        uStack_138 = 0;
        uStack_114 = 0;
        uStack_110 = 0;
        local_1c8 = local_2f8;
        puStack_1c0 = puVar18;
        UVar10 = GetTickCount64();
        lStack_1b8 = UVar10 + 300;
        auVar20._0_4_ = (float)*local_300;
        auVar20._4_12_ = SUB1612(ZEXT816(0),4);
        fStack_1ac = (float)local_300[1];
        auVar26 = ZEXT1664(CONCAT124(SUB1612(ZEXT816(0),4),fStack_1ac));
        local_1a8 = (float)(local_300[2] - *local_300);
        auVar21 = ZEXT1664(CONCAT124(SUB1612(ZEXT816(0),4),local_1a8));
        fStack_1a4 = (float)(local_300[3] - local_300[1]);
        auVar22 = ZEXT1664(CONCAT124(SUB1612(ZEXT816(0),4),fStack_1a4));
        uStack_320 = local_35c;
        uStack_31c = SUB84(puVar25,0);
        uStack_318 = (undefined4)((ulonglong)puVar25 >> 0x20);
        uStack_314 = local_360;
        fVar24 = 1.0;
        uStack_19c = SUB84(puVar28,0);
        uStack_198 = (undefined4)((ulonglong)puVar28 >> 0x20);
        uStack_194 = local_35c;
        uStack_190 = uStack_31c;
        uStack_18c = uStack_318;
        uStack_188 = local_360;
        uStack_184 = 0x3f800000;
        uStack_1a0 = auVar23._0_4_;
        uStack_180 = local_228[0];
        uStack_178 = (undefined4)local_228[1];
        uStack_174 = (undefined4)((ulonglong)local_228[1] >> 0x20);
        uStack_170 = (undefined4)local_228[2];
        uStack_16c = (undefined4)((ulonglong)local_228[2] >> 0x20);
        local_168 = local_210;
        uStack_164 = local_208._0_4_;
        uStack_160 = local_208._4_4_;
        uStack_15c = local_208._8_4_;
        uStack_158 = local_208._12_4_;
        uStack_154 = local_208._16_4_;
        uStack_150 = local_208._20_4_;
        uStack_14c = local_1f0;
        local_148 = local_1e8[0];
        uStack_140 = (undefined4)local_1e8[1];
        uStack_13c = (undefined4)((ulonglong)local_1e8[1] >> 0x20);
        uStack_138 = (undefined4)local_1e8[2];
        uStack_134 = (undefined4)((ulonglong)local_1e8[2] >> 0x20);
        fStack_130 = local_1d0;
        afStack_12c[0] = SUB84(local_348,0);
        afStack_12c[1] = (float)((ulonglong)local_348 >> 0x20);
        puStack_120 = local_370;
        uStack_114 = (uint)local_108;
        uStack_110 = local_108._4_4_;
        uStack_10c = (uint)uStack_100;
        if (lVar7 != 0) {
          uVar27 = (uint)local_108;
          uVar29 = local_108._4_4_;
          uVar30 = (uint)uStack_100;
          fStack_1b0 = auVar20._0_4_;
          uStack_124 = uVar16;
          uStack_118 = uVar15;
          sVar4 = thunk_FUN_180624430(auVar20._0_8_);
          if (((((sVar4 < 1) && (sVar4 = thunk_FUN_180624430(auVar26._0_8_), sVar4 < 1)) &&
               (sVar4 = thunk_FUN_180624430(auVar21._0_8_), sVar4 < 1)) &&
              (((sVar4 = thunk_FUN_180624430(auVar22._0_8_), sVar4 < 1 && (16.0 <= auVar21._0_4_))
               && ((16.0 <= auVar22._0_4_ &&
                   ((auVar21._0_4_ <= 16384.0 && (auVar22._0_4_ <= 16384.0)))))))) &&
             ((((sVar4 = thunk_FUN_180624430(auVar23._0_8_), sVar4 < 1 &&
                (((((fVar24 <= auVar23._0_4_ && (auVar23._0_4_ <= 150.0)) &&
                   (cVar3 = FUN_180218e30(&uStack_19c), cVar3 != '\0')) &&
                  ((cVar3 = FUN_180218e30(&uStack_180), cVar3 != '\0' &&
                   (cVar3 = FUN_180218e30(&uStack_164), cVar3 != '\0')))) &&
                 ((cVar3 = FUN_180218e30(&local_148), cVar3 != '\0' &&
                  ((((uint)local_348 & 0x7f800000) != 0x7f800000 &&
                   ((local_348._4_4_ & 0x7f800000) != 0x7f800000)))))))) &&
               ((uVar16 & 0x7f800000) != 0x7f800000)) &&
              (((((((uint)local_370 & 0x7f800000) != 0x7f800000 &&
                  ((local_370._4_4_ & 0x7f800000) != 0x7f800000)) &&
                 ((uVar15 & 0x7f800000) != 0x7f800000)) &&
                (((uVar27 & 0x7f800000) != 0x7f800000 && ((uVar29 & 0x7f800000) != 0x7f800000)))) &&
               ((uVar30 & 0x7f800000) != 0x7f800000)))))) {
            iVar14 = 0;
            ppuVar13 = &puStack_120;
            do {
              if (*(float *)ppuVar13 <= *(float *)((longlong)ppuVar13 + -0xc)) {
              }
              if (64.0 < *(float *)ppuVar13 - *(float *)((longlong)ppuVar13 + -0xc)) {
              }
              iVar14 = iVar14 + 1;
              ppuVar13 = (undefined **)((longlong)ppuVar13 + 4);
            } while (iVar14 < 3);
            local_300 = (int *)&DAT_1808dafe0;
            iVar14 = FUN_1805f68d0(&DAT_1808dafe0);
            if (iVar14 != 0) {
LAB_18022776e:
                    /* WARNING: Subroutine does not return */
              FUN_1805f6d44(5);
            }
            if (DAT_1808db02c == 0x7fffffff) {
              DAT_1808db02c = 0x7ffffffe;
LAB_180227783:
                    /* WARNING: Subroutine does not return */
              FUN_1805f6d44(6);
            }
            if (((DAT_180bbecc0 != lVar7) || (DAT_180bbec98 != puVar8)) || (DAT_180bbeca0 != lVar17)
               ) {
              _DAT_180bbeca8 = 0;
              DAT_180bbecb0 = 0;
              DAT_180bbecc8 = 0;
              DAT_180bbecd0 = (undefined *)0x0;
            }
            DAT_180bbec90 = local_2f0;
            DAT_180bbecb8 = local_330;
            DAT_180bbecbc = local_32c;
            DAT_180bbecc0 = lVar7;
            DAT_180bbec98 = puVar8;
            DAT_180bbeca0 = lVar17;
            UVar10 = GetTickCount64();
            DAT_180bbecc8 = UVar10 + 300;
            _DAT_180bbeca8 = DAT_180cd3a60;
            DAT_180bbecb0 = DAT_180cd3a68;
            DAT_180bbecd0 = puVar18;
            iVar14 = FUN_1805f68d0(&DAT_1808e6b40);
            if (iVar14 != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_1805f6d44(5);
            }
            if (DAT_1808e6b8c == 0x7fffffff) {
              DAT_1808e6b8c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
              FUN_1805f6d44(6);
            }
            uStack_2d0 = CONCAT44(fStack_1ac,fStack_1b0);
            local_2e8 = local_1c8;
            puStack_2e0 = puStack_1c0;
            lStack_2d8 = lStack_1b8;
            uStack_2c8 = CONCAT44(fStack_1a4,local_1a8);
            uStack_2b0 = CONCAT44(uStack_18c,uStack_190);
            uStack_2c0 = uStack_1a0;
            uStack_2bc = uStack_19c;
            uStack_2b8 = uStack_198;
            uStack_2b4 = uStack_194;
            local_2a8 = CONCAT44(uStack_184,uStack_188);
            uStack_2a0 = uStack_180;
            uStack_298 = uStack_178;
            uStack_294 = uStack_174;
            uStack_290 = uStack_170;
            uStack_28c = uStack_16c;
            local_288 = CONCAT44(uStack_164,local_168);
            uStack_280 = CONCAT44(uStack_15c,uStack_160);
            uStack_278 = CONCAT44(uStack_154,uStack_158);
            lStack_270 = CONCAT44(uStack_14c,uStack_150);
            local_268 = local_148;
            uStack_260 = uStack_140;
            uStack_25c = uStack_13c;
            uStack_258 = uStack_138;
            uStack_254 = uStack_134;
            fStack_250 = fStack_130;
            uStack_24c = afStack_12c[0];
            uStack_248 = afStack_12c[1];
            uStack_244 = uStack_124;
            puStack_240 = puStack_120;
            uStack_238 = uStack_118;
            uStack_234 = uStack_114;
            uStack_230 = uStack_110;
            uStack_22c = uStack_10c;
            cVar3 = FUN_180218f00(&local_2e8);
            if (cVar3 == '\0') {
              local_2e8 = 0;
              puStack_2e0 = (undefined *)0x0;
              lStack_2d8 = 0;
              uStack_2d0 = CONCAT44(uVar32,uVar31);
              uStack_2c8 = CONCAT44(uVar34,uVar33);
              uStack_2c0 = uVar31;
              uStack_2bc = 0;
              uStack_2b8 = 0;
              uStack_2b4 = 0;
              uStack_2b0 = 0;
              local_2a8 = (ulonglong)(uint)fVar24 << 0x20;
              uStack_2a0 = 0;
              uStack_298 = 0;
              uStack_294 = 0;
              uStack_290 = 0;
              uStack_28c = 0;
              local_288 = 0x3f800000;
              uStack_280 = 0;
              uStack_278 = 0;
              lStack_270 = (ulonglong)(uint)fVar24 << 0x20;
              local_268 = 0;
              uStack_260 = 0;
              uStack_25c = 0;
              uStack_258 = 0;
              uStack_254 = 0;
              fStack_250 = fVar24;
              uStack_24c = 0;
              uStack_248 = 0;
              uStack_244 = 0;
              puStack_240 = (undefined *)0x0;
              uStack_238 = 0;
              uStack_234 = 0;
              uStack_230 = 0;
              uStack_22c = 0;
              plVar9 = &local_2e8;
            }
            else {
              if ((DAT_1808e6a50 != lVar7) || (DAT_1808e6a58 != puVar18)) {
                DAT_1808e6b28 = 0;
                DAT_1808e6b30 = 0;
              }
              plVar9 = &local_1c8;
            }
            DAT_1808e6990 = *plVar9;
            DAT_1808e6998 = plVar9[1];
            DAT_1808e69a0 = plVar9[2];
            lRam00000001808e69a8 = plVar9[3];
            _DAT_1808e69b0 = plVar9[4];
            lRam00000001808e69b8 = plVar9[5];
            _DAT_1808e69c0 = plVar9[6];
            lRam00000001808e69c8 = plVar9[7];
            _DAT_1808e69d0 = plVar9[8];
            _DAT_1808e69d8 = plVar9[9];
            _DAT_1808e69e0 = plVar9[10];
            lRam00000001808e69e8 = plVar9[0xb];
            _DAT_1808e69f0 = plVar9[0xc];
            lRam00000001808e69f8 = plVar9[0xd];
            _DAT_1808e6a00 = plVar9[0xe];
            lRam00000001808e6a08 = plVar9[0xf];
            _DAT_1808e6a10 = plVar9[0x10];
            lRam00000001808e6a18 = plVar9[0x11];
            _DAT_1808e6a20 = plVar9[0x12];
            lRam00000001808e6a28 = plVar9[0x13];
            _DAT_1808e6a30 = plVar9[0x14];
            _DAT_1808e6a38 = plVar9[0x15];
            _DAT_1808e6a40 = plVar9[0x16];
            unique0x10000fc9 = plVar9[0x17];
            FUN_1805f68fc(&DAT_1808e6b40);
            DAT_180bbec80 = puVar8;
            FUN_1805f68fc(&DAT_1808dafe0);
          }
        }
      }
    }
  }
}



