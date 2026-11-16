// FUN_1800e0b40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800e0b40 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800e0b40(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulonglong uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined1 (*pauVar11) [16];
  longlong *plVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined8 uVar15;
  undefined8 *****pppppuVar16;
  ulonglong uVar17;
  uint uVar18;
  longlong lVar19;
  char **ppcVar20;
  undefined1 auStack_378 [32];
  undefined8 local_358;
  undefined8 *****local_350;
  longlong local_348;
  uint local_338;
  int local_334;
  undefined1 local_330 [16];
  ulonglong local_320;
  ulonglong local_318;
  undefined1 *local_310;
  undefined1 local_308 [16];
  undefined1 auStack_2f8 [16];
  undefined1 *local_2e8;
  longlong *local_2d8;
  longlong local_2d0;
  longlong *local_2c8;
  ulonglong local_2c0;
  undefined1 local_2b8 [16];
  ulonglong local_2a8;
  ulonglong local_2a0;
  undefined1 local_298 [16];
  ulonglong local_288;
  ulonglong local_280;
  undefined1 local_278;
  uint7 uStack_277;
  longlong local_270;
  undefined1 *local_268;
  undefined1 local_260 [8];
  undefined1 local_258 [24];
  undefined1 local_240 [16];
  undefined8 local_230;
  undefined1 *local_228;
  undefined8 local_220;
  longlong local_218;
  undefined8 local_210;
  undefined1 *local_208;
  undefined1 **local_200;
  undefined1 *local_1f8;
  undefined1 *local_1f0;
  undefined1 *local_1e8;
  undefined1 *local_1e0;
  undefined1 *local_1d8;
  undefined8 local_1d0;
  longlong *local_1c8;
  undefined8 local_1c0;
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  undefined8 local_188;
  undefined1 local_180 [16];
  undefined8 local_170;
  undefined1 local_168 [24];
  undefined1 local_150;
  undefined1 local_148 [8];
  undefined8 local_140;
  undefined1 local_138 [16];
  undefined1 local_128 [8];
  undefined1 local_120 [32];
  undefined1 local_100 [16];
  ulonglong local_f0;
  ulonglong local_e8;
  undefined1 local_e0 [16];
  ulonglong local_d0;
  ulonglong local_c8;
  undefined8 *****local_c0;
  longlong lStack_b8;
  longlong lStack_b0;
  ulonglong uStack_a8;
  undefined1 local_a0 [16];
  ulonglong local_90;
  ulonglong local_88;
  char *local_80;
  char *local_78;
  char *local_70;
  char *local_68;
  undefined8 local_60;
  undefined4 local_58;
  char local_50 [16];
  char local_40 [16];
  ulonglong local_30;
  
  local_30 = DAT_1808d5f00 ^ (ulonglong)auStack_378;
  local_338 = 0;
  plVar1 = (longlong *)(param_2 + 0x570);
  local_334 = 2;
  local_270 = param_1;
  do {
    uVar18 = local_338;
    uVar9 = FUN_18015bea0(local_120,local_334);
    plVar10 = (longlong *)FUN_180141490(uVar9,0," preset ",8);
    local_c0 = (undefined8 *****)*plVar10;
    lStack_b8 = plVar10[1];
    lStack_b0 = plVar10[2];
    uStack_a8 = plVar10[3];
    *(undefined1 *)plVar10 = 0;
    plVar10[2] = 0;
    plVar10[3] = 0xf;
    uVar18 = uVar18 | 0x80;
    FUN_18015c010(local_120);
    local_70 = "min damage override";
    local_68 = "hit chance override";
    ppcVar20 = &local_70;
    do {
      local_1b8 = (undefined1  [16])0x0;
      local_1a8 = (undefined1  [16])0x0;
      lVar19 = -1;
      do {
        lVar19 = lVar19 + 1;
      } while ((*ppcVar20)[lVar19] != '\0');
      FUN_18015ba30(local_1b8);
      pppppuVar16 = &local_c0;
      if (0xf < uStack_a8) {
        pppppuVar16 = local_c0;
      }
      pauVar11 = (undefined1 (*) [16])FUN_18015b2a0(local_1b8,pppppuVar16,lStack_b0);
      local_308 = *pauVar11;
      auStack_2f8 = pauVar11[1];
      (*pauVar11)[0] = 0;
      *(undefined8 *)pauVar11[1] = 0;
      *(undefined8 *)(pauVar11[1] + 8) = 0xf;
      local_228 = local_308;
      if (0xf < (ulonglong)auStack_2f8._8_8_) {
        local_228 = (undefined1 *)local_308._0_8_;
      }
      local_218 = (longlong)plVar1;
      if (0xf < *(ulonglong *)(param_2 + 0x588)) {
        local_218 = *plVar1;
      }
      local_40[0] = '\0';
      local_40[1] = '\0';
      local_40[2] = '\0';
      local_40[3] = '\0';
      local_40[4] = '\0';
      local_40[5] = '\0';
      local_40[6] = '\0';
      local_40[7] = '\0';
      local_40[8] = '\0';
      local_40[9] = '\0';
      local_40[10] = '\0';
      local_40[0xb] = '\0';
      local_220 = auStack_2f8._0_8_;
      local_210 = *(undefined8 *)(param_2 + 0x580);
      uVar8 = FUN_1800aa290(&local_218,&local_228);
      FUN_18015abc0(local_40,0xc,&DAT_1806bbf8c,uVar8);
      local_100 = (undefined1  [16])0x0;
      local_f0 = 0;
      local_e8 = 0;
      lVar19 = -1;
      do {
        lVar19 = lVar19 + 1;
      } while (local_40[lVar19] != '\0');
      FUN_18015ba30(local_100,local_40);
      local_338 = uVar18 | 5;
      FUN_18015c010(local_308);
      FUN_18015c010(local_1b8);
      if (**(char **)(param_1 + 8) == '\x01') {
        plVar10 = *(longlong **)(*(char **)(param_1 + 8) + 8);
        plVar12 = (longlong *)FUN_180111e70(plVar10,local_128,local_100);
        uVar18 = uVar18 | 5;
        if (*plVar12 == *plVar10) goto LAB_1800e0db0;
      }
      else {
LAB_1800e0db0:
        local_2e8 = local_138;
        FUN_1800e60e0(local_258,&DAT_1806bbee0);
        local_240 = ZEXT816(0);
        FUN_1801409d0(local_240 + 8,0);
        local_240[0] = 4;
        local_278 = 0;
        local_240._8_8_ = (ulonglong)uStack_277 << 8;
        local_230 = 0;
        local_208 = local_258;
        local_200 = &local_228;
        FUN_1800f4e90(local_198,&local_208,1,2);
        local_188 = 0;
        FUN_1800e60e0(local_168,&DAT_1806bbee4);
        local_150 = 0;
        FUN_180111d10(local_148,0);
        local_140 = 0;
        local_1f8 = local_168;
        local_1f0 = local_138;
        FUN_1800f4e90(local_180,&local_1f8,1,2);
        local_170 = 0;
        local_1e8 = local_198;
        local_1e0 = local_168;
        puVar13 = (undefined1 *)FUN_1800f4e90(local_138,&local_1e8,1,2);
        uVar7 = local_f0;
        uVar9 = *(undefined8 *)(param_1 + 8);
        local_298 = (undefined1  [16])0x0;
        local_288 = 0;
        local_280 = 0;
        pauVar11 = &local_100;
        if (0xf < local_e8) {
          pauVar11 = (undefined1 (*) [16])local_100._0_8_;
        }
        if (0x7fffffffffffffff < local_f0) {
                    /* WARNING: Subroutine does not return */
          FUN_18015bb70();
        }
        if (local_f0 < 0x10) {
          local_288 = local_f0;
          local_280 = 0xf;
          local_298 = *pauVar11;
        }
        else {
          uVar17 = local_f0 | 0xf;
          if (uVar17 < 0x8000000000000000) {
            if (uVar17 < 0x16) {
              uVar17 = 0x16;
            }
          }
          else {
            uVar17 = 0x7fffffffffffffff;
          }
          uVar15 = FUN_18015bca0(uVar17 + 1);
          local_298._0_8_ = uVar15;
          local_288 = uVar7;
          local_280 = uVar17;
          FUN_18063aed0(uVar15,pauVar11,uVar7 + 1);
        }
        puVar14 = (undefined1 *)FUN_1800f43d0(uVar9,local_298);
        uVar3 = *puVar14;
        *puVar14 = *puVar13;
        *puVar13 = uVar3;
        uVar9 = *(undefined8 *)(puVar14 + 8);
        puVar2 = (undefined8 *)(puVar13 + 8);
        *(undefined8 *)(puVar14 + 8) = *puVar2;
        *puVar2 = uVar9;
        FUN_1801409d0(puVar2,*puVar13);
        _eh_vector_destructor_iterator_(local_198,0x18,2,FUN_1800aab30);
        _eh_vector_destructor_iterator_(local_168,0x18,2,FUN_1800aab30);
        _eh_vector_destructor_iterator_(local_258,0x18,2,FUN_1800aab30);
        param_1 = local_270;
        uVar18 = local_338;
      }
      FUN_18015c010(local_100);
      ppcVar20 = ppcVar20 + 1;
    } while (ppcVar20 != (char **)&local_60);
    if (0x7fffffffffffffffU - lStack_b0 < 0x19) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bb70();
    }
    local_350 = &local_c0;
    if (0xf < uStack_a8) {
      local_350 = local_c0;
    }
    local_348 = lStack_b0;
    local_358 = 0x19;
    FUN_18015a9c0(local_308);
    local_1d8 = local_308;
    if (0xf < (ulonglong)auStack_2f8._8_8_) {
      local_1d8 = (undefined1 *)local_308._0_8_;
    }
    local_1c8 = plVar1;
    if (0xf < *(ulonglong *)(param_2 + 0x588)) {
      local_1c8 = (longlong *)*plVar1;
    }
    local_50[0] = '\0';
    local_50[1] = '\0';
    local_50[2] = '\0';
    local_50[3] = '\0';
    local_50[4] = '\0';
    local_50[5] = '\0';
    local_50[6] = '\0';
    local_50[7] = '\0';
    local_50[8] = '\0';
    local_50[9] = '\0';
    local_50[10] = '\0';
    local_50[0xb] = '\0';
    local_1d0 = auStack_2f8._0_8_;
    local_1c0 = *(undefined8 *)(param_2 + 0x580);
    uVar8 = FUN_1800aa290(&local_1c8,&local_1d8);
    FUN_18015abc0(local_50,0xc,&DAT_1806bbf8c,uVar8);
    local_e0 = (undefined1  [16])0x0;
    local_d0 = 0;
    local_c8 = 0;
    lVar19 = -1;
    do {
      lVar4 = lVar19 + 1;
      lVar19 = lVar19 + 1;
    } while (local_50[lVar4] != '\0');
    FUN_18015ba30(local_e0);
    FUN_18015c010(local_308);
    if (0x7fffffffffffffffU - lStack_b0 < 0x19) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bb70();
    }
    local_350 = &local_c0;
    if (0xf < uStack_a8) {
      local_350 = local_c0;
    }
    local_348 = lStack_b0;
    local_358 = 0x19;
    FUN_18015a9c0(local_100);
    local_2c8 = (longlong *)local_100;
    if (0xf < local_e8) {
      local_2c8 = (longlong *)local_100._0_8_;
    }
    local_2d8 = plVar1;
    if (0xf < *(ulonglong *)(param_2 + 0x588)) {
      local_2d8 = (longlong *)*plVar1;
    }
    local_60 = (char *)0x0;
    local_58 = 0;
    local_2c0 = local_f0;
    local_2d0 = *(undefined8 *)(param_2 + 0x580);
    uVar8 = FUN_1800aa290(&local_2d8,&local_2c8);
    FUN_18015abc0(&local_60,0xc,&DAT_1806bbf8c,uVar8);
    local_a0 = (undefined1  [16])0x0;
    local_90 = 0;
    local_88 = 0;
    lVar19 = -1;
    do {
      lVar4 = lVar19 + -0xf;
      lVar19 = lVar19 + 1;
    } while (local_50[lVar4] != '\0');
    FUN_18015ba30(local_a0,&local_60);
    local_338 = uVar18 | 0x6a;
    FUN_18015c010(local_100);
    if (**(char **)(param_1 + 8) == '\x01') {
      plVar10 = *(longlong **)(*(char **)(param_1 + 8) + 8);
      plVar12 = (longlong *)FUN_180111e70(plVar10,&local_268);
      if (*plVar12 == *plVar10) goto LAB_1800e12ac;
    }
    else {
LAB_1800e12ac:
      local_310 = local_100;
      local_100 = ZEXT816(0);
      FUN_1801409d0(local_100 + 8,0);
      uVar7 = local_d0;
      local_100[0] = 5;
      local_100._8_8_ = 0xb;
      uVar9 = *(undefined8 *)(param_1 + 8);
      local_2b8 = (undefined1  [16])0x0;
      local_2a8 = 0;
      local_2a0 = 0;
      pauVar11 = &local_e0;
      if (0xf < local_c8) {
        pauVar11 = (undefined1 (*) [16])local_e0._0_8_;
      }
      if (0x7fffffffffffffff < local_d0) {
                    /* WARNING: Subroutine does not return */
        FUN_18015bb70();
      }
      if (local_d0 < 0x10) {
        local_2a8 = local_d0;
        local_2a0 = 0xf;
        local_2b8 = *pauVar11;
      }
      else {
        uVar17 = local_d0 | 0xf;
        if (uVar17 < 0x8000000000000000) {
          if (uVar17 < 0x16) {
            uVar17 = 0x16;
          }
        }
        else {
          uVar17 = 0x7fffffffffffffff;
        }
        uVar15 = FUN_18015bca0(uVar17 + 1);
        local_2b8._0_8_ = uVar15;
        local_2a8 = uVar7;
        local_2a0 = uVar17;
        FUN_18063aed0(uVar15,pauVar11);
      }
      puVar13 = (undefined1 *)FUN_1800f43d0(uVar9,local_2b8);
      auVar5 = local_100;
      uVar3 = *puVar13;
      *puVar13 = local_100[0];
      local_100[0] = uVar3;
      auVar6 = local_100;
      uVar9 = *(undefined8 *)(puVar13 + 8);
      local_100._8_8_ = auVar5._8_8_;
      *(undefined8 *)(puVar13 + 8) = local_100._8_8_;
      local_100._0_8_ = auVar6._0_8_;
      local_100._8_8_ = uVar9;
      FUN_1801409d0(local_100 + 8,uVar3);
    }
    if (**(char **)(param_1 + 8) == '\x01') {
      plVar10 = *(longlong **)(*(char **)(param_1 + 8) + 8);
      plVar12 = (longlong *)FUN_180111e70(plVar10,local_260);
      if (*plVar12 == *plVar10) goto LAB_1800e1406;
    }
    else {
LAB_1800e1406:
      local_310 = local_100;
      local_100 = ZEXT816(0);
      FUN_1801409d0(local_100 + 8,0);
      uVar7 = local_90;
      local_100[0] = 5;
      local_100._8_8_ = 0x4b;
      uVar9 = *(undefined8 *)(param_1 + 8);
      local_330 = (undefined1  [16])0x0;
      local_320 = 0;
      local_318 = 0;
      pauVar11 = &local_a0;
      if (0xf < local_88) {
        pauVar11 = (undefined1 (*) [16])local_a0._0_8_;
      }
      if (0x7fffffffffffffff < local_90) {
                    /* WARNING: Subroutine does not return */
        FUN_18015bb70();
      }
      if (local_90 < 0x10) {
        local_320 = local_90;
        local_318 = 0xf;
        local_330 = *pauVar11;
      }
      else {
        uVar17 = local_90 | 0xf;
        if (uVar17 < 0x8000000000000000) {
          if (uVar17 < 0x16) {
            uVar17 = 0x16;
          }
        }
        else {
          uVar17 = 0x7fffffffffffffff;
        }
        uVar15 = FUN_18015bca0(uVar17 + 1);
        local_330._0_8_ = uVar15;
        local_320 = uVar7;
        local_318 = uVar17;
        FUN_18063aed0(uVar15,pauVar11);
      }
      puVar13 = (undefined1 *)FUN_1800f43d0(uVar9,local_330);
      auVar5 = local_100;
      uVar3 = *puVar13;
      *puVar13 = local_100[0];
      local_100[0] = uVar3;
      auVar6 = local_100;
      uVar9 = *(undefined8 *)(puVar13 + 8);
      local_100._8_8_ = auVar5._8_8_;
      *(undefined8 *)(puVar13 + 8) = local_100._8_8_;
      local_100._0_8_ = auVar6._0_8_;
      local_100._8_8_ = uVar9;
      FUN_1801409d0(local_100 + 8,uVar3);
    }
    FUN_18015c010(local_a0);
    FUN_18015c010(local_e0);
    FUN_18015c010(&local_c0);
    local_334 = local_334 + 1;
  } while (local_334 < 5);
  local_2d8 = (longlong *)0x1806bcb78;
  local_80 = "damage edit preset";
  local_78 = "hitchance edit preset";
  ppcVar20 = &local_80;
  do {
    local_2d0 = -1;
    do {
      local_2d0 = local_2d0 + 1;
    } while (*(char *)((longlong)local_2d8 + local_2d0) != '\0');
    local_2c8 = plVar1;
    if (0xf < *(ulonglong *)(param_2 + 0x588)) {
      local_2c8 = (longlong *)*plVar1;
    }
    local_60 = (char *)0x0;
    local_58 = 0;
    local_2c0 = *(undefined8 *)(param_2 + 0x580);
    uVar8 = FUN_1800aa290(&local_2c8,&local_2d8);
    FUN_18015abc0(&local_60,0xc,&DAT_1806bbf8c,uVar8);
    local_e0 = (undefined1  [16])0x0;
    local_d0 = 0;
    local_c8 = 0;
    lVar19 = -1;
    do {
      lVar4 = lVar19 + -0xf;
      lVar19 = lVar19 + 1;
    } while (local_50[lVar4] != '\0');
    FUN_18015ba30(local_e0,&local_60);
    if (**(char **)(param_1 + 8) == '\x01') {
      plVar10 = *(longlong **)(*(char **)(param_1 + 8) + 8);
      plVar12 = (longlong *)FUN_180111e70(plVar10,local_260);
      if (*plVar12 == *plVar10) goto LAB_1800e168d;
    }
    else {
LAB_1800e168d:
      local_268 = local_100;
      local_100 = ZEXT816(0);
      FUN_1801409d0(local_100 + 8,0);
      uVar7 = local_d0;
      local_100[0] = 5;
      local_100._8_8_ = 0;
      uVar9 = *(undefined8 *)(param_1 + 8);
      local_330 = (undefined1  [16])0x0;
      local_320 = 0;
      local_318 = 0;
      pauVar11 = &local_e0;
      if (0xf < local_c8) {
        pauVar11 = (undefined1 (*) [16])local_e0._0_8_;
      }
      if (0x7fffffffffffffff < local_d0) {
                    /* WARNING: Subroutine does not return */
        FUN_18015bb70();
      }
      if (local_d0 < 0x10) {
        local_320 = local_d0;
        local_318 = 0xf;
        local_330 = *pauVar11;
      }
      else {
        uVar17 = local_d0 | 0xf;
        if (uVar17 < 0x8000000000000000) {
          if (uVar17 < 0x16) {
            uVar17 = 0x16;
          }
        }
        else {
          uVar17 = 0x7fffffffffffffff;
        }
        uVar15 = FUN_18015bca0(uVar17 + 1);
        local_330._0_8_ = uVar15;
        local_320 = uVar7;
        local_318 = uVar17;
        FUN_18063aed0(uVar15,pauVar11);
      }
      puVar13 = (undefined1 *)FUN_1800f43d0(uVar9,local_330);
      auVar5 = local_100;
      uVar3 = *puVar13;
      *puVar13 = local_100[0];
      local_100[0] = uVar3;
      auVar6 = local_100;
      uVar9 = *(undefined8 *)(puVar13 + 8);
      local_100._8_8_ = auVar5._8_8_;
      *(undefined8 *)(puVar13 + 8) = local_100._8_8_;
      local_100._0_8_ = auVar6._0_8_;
      local_100._8_8_ = uVar9;
      FUN_1801409d0(local_100 + 8,uVar3);
    }
    FUN_18015c010(local_e0);
    ppcVar20 = ppcVar20 + 1;
    if (ppcVar20 == &local_70) {
    }
    local_2d8 = (longlong *)*ppcVar20;
  } while( true );
}



