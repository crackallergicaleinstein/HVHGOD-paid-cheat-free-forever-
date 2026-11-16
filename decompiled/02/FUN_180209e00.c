// FUN_180209e00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180209e00 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180209e00(void)

{
  undefined1 *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  bool bVar5;
  ulonglong uVar6;
  char cVar7;
  int iVar8;
  ulonglong uVar9;
  size_t sVar11;
  size_t sVar10;
  undefined1 *puVar12;
  ulonglong uVar13;
  short *psVar14;
  undefined1 (*pauVar15) [16];
  undefined8 *puVar16;
  longlong *plVar17;
  longlong lVar18;
  undefined8 *puVar19;
  longlong lVar20;
  undefined8 ****ppppuVar21;
  undefined8 ****ppppuVar22;
  longlong lVar23;
  ulonglong uVar24;
  char *pcVar25;
  uint uVar26;
  longlong lVar27;
  undefined8 uVar28;
  ulonglong uVar29;
  undefined1 *puVar30;
  undefined8 uVar31;
  undefined1 auVar32 [16];
  unkbyte10 Var34;
  undefined1 in_ZMM6 [64];
  undefined1 auVar33 [64];
  undefined1 auStack_318 [32];
  undefined4 local_2f8;
  size_t local_2e8;
  undefined8 local_2e0;
  char local_2d8;
  char local_2d7;
  undefined8 local_2d0;
  char *local_2c8;
  longlong lStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined1 local_288 [16];
  undefined1 auStack_278 [16];
  undefined8 local_268;
  undefined8 uStack_260;
  undefined1 local_258 [16];
  undefined8 local_248;
  undefined1 local_238 [16];
  undefined8 local_228;
  undefined1 local_218 [16];
  undefined8 local_208;
  undefined8 uStack_200;
  short *local_1f8;
  ulonglong local_1f0;
  undefined1 local_1e8 [16];
  undefined1 auStack_1d8 [16];
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  ulonglong local_198;
  ulonglong local_190;
  undefined1 local_188 [16];
  longlong local_178;
  ulonglong local_170;
  undefined1 local_168 [16];
  size_t local_158;
  ulonglong local_150;
  undefined1 local_148 [16];
  undefined8 local_138;
  undefined8 local_130;
  ulonglong local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 ****local_e8 [2];
  size_t local_d8;
  ulonglong local_d0;
  undefined8 ****local_c8 [2];
  size_t local_b8;
  ulonglong local_b0;
  undefined8 ****local_a8 [2];
  undefined8 local_98;
  ulonglong local_90;
  char local_88;
  undefined1 local_80 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60 [40];
  ulonglong local_38;
  undefined1 local_28 [16];
  
  local_28 = in_ZMM6._0_16_;
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_318;
  local_2e0 = local_2e0 & 0xffffffff00000000;
  if (DAT_180cc9d48 == '\0') {
    DAT_180cc9d48 = '\x01';
    FUN_1801d8420(local_a8);
    if (local_88 == '\0') {
      local_288._8_8_ = 0xa05181ee77d57a06;
      local_288._0_8_ = 0xdb35e39b27e1c185;
      auStack_278._8_8_ = 0xa5cea54bfef7110;
      auStack_278._0_8_ = 0x929654b1461b7377;
      local_268 = 0xa70c9f7f916b7e19;
      local_2e0._0_4_ = 0xaa402c0a;
      local_2e0._4_4_ = 0x2b2d6d82;
      uStack_260 = 0x2b2d6d82aa402c0a;
      local_2b8 = 0x43205d6e6f63655b;
      uStack_2b0 = 0x65746e6f63203253;
      uStack_2a8 = 0x636572696420746e;
      uStack_2a0 = 0x7361772079726f74;
      local_298 = 0x756f6620746f6e20;
      uStack_290 = 0x646e;
      lVar23 = -1;
      do {
        local_258._8_8_ = lVar23 + 1;
        lVar27 = lVar23 + -0x2f;
        lVar23 = local_258._8_8_;
      } while (local_288[lVar27] != '\0');
      local_258._0_8_ = &local_2b8;
      FUN_18020e620(local_258);
    }
    else {
      local_218 = (undefined1  [16])0x0;
      local_208 = 0;
      uStack_200 = 0;
      FUN_180159e60(local_218,L"pak01_dir.vpk",0xd);
      uVar26 = 0x180;
      local_2e0._0_4_ = 0x180;
      FUN_1800a7e60(local_60,local_a8,local_218);
      FUN_18015b930(local_218);
      local_130 = 0;
      local_128 = 0;
      local_120 = 0;
      local_118 = 0;
      local_148 = (undefined1  [16])0x0;
      local_138 = 0;
      local_70 = 0;
      uStack_68 = 0xf;
      local_80._1_15_ = SUB1615((undefined1  [16])0x0,1);
      auVar32[0xf] = 0;
      auVar32._0_15_ = local_80._1_15_;
      local_80 = auVar32 << 8;
      cVar7 = FUN_180185df0(local_60,&local_130,local_148,local_80);
      if (cVar7 == '\0') {
        local_258._8_8_ = 0x24;
        local_258._0_8_ = "[econ] VPK directory load failed: {}";
        FUN_18020e970(local_258,local_80);
      }
      else {
        ppppuVar22 = local_a8;
        if (7 < local_90) {
          ppppuVar22 = local_a8[0];
        }
        FUN_1800f5190(&DAT_180cc9d50,ppppuVar22,local_98);
        uVar31 = local_148._0_8_;
        uVar29 = local_148._8_8_ - local_148._0_8_;
        uVar24 = 0;
        if (uVar29 != 0) {
LAB_18020a1c2:
          local_158 = 0;
          local_150 = 0xf;
          local_168._1_15_ = SUB1615((undefined1  [16])0x0,1);
          auVar2[0xf] = 0;
          auVar2._0_15_ = local_168._1_15_;
          local_168 = auVar2 << 8;
          if (uVar29 <= uVar24) {
LAB_18020a23f:
            local_288._8_8_ = 0xa05181ee77d57a06;
            local_288._0_8_ = 0xdb35e39b27e1c185;
            auStack_278._8_8_ = 0xa5cea54bfef7110;
            auStack_278._0_8_ = 0x929654b1461b7377;
            local_268 = 0xa70c9f7f916b7e19;
            local_2e8 = 0x2b2d6d82aa402c0a;
            uStack_260 = 0x2b2d6d82aa402c0a;
            local_2b8 = 0x56205d6e6f63655b;
            uStack_2b0 = 0x6e65747865204b50;
            uStack_2a8 = 0x626174206e6f6973;
            uStack_2a0 = 0x727420736920656c;
            local_298 = 0x64657461636e75;
            uStack_290 = 0;
            lVar23 = -1;
            do {
              lStack_2c0 = lVar23 + 1;
              lVar27 = lVar23 + -0x2f;
              lVar23 = lStack_2c0;
            } while (local_288[lVar27] != '\0');
            local_2c8 = (char *)&local_2b8;
            FUN_18020e620(&local_2c8);
LAB_18020a3cb:
            FUN_18015c010(local_168);
            goto LAB_18020b621;
          }
          uVar13 = uVar24;
          while( true ) {
            uVar9 = uVar13 + 1;
            if (0x10000 < uVar13 - uVar24) goto LAB_18020a23f;
            if (*(char *)(uVar31 + uVar13) == '\0') break;
            uVar13 = uVar9;
            if (uVar29 <= uVar9) goto LAB_18020a23f;
          }
          FUN_180113930(local_168,uVar24 + uVar31,uVar13 - uVar24);
          uVar13 = uVar13 + 1;
          local_2e8 = local_158;
          if (local_158 != 0) {
            local_2c8 = (char *)0xdb35e39b27e1c185;
            local_2d0 = 0xa05181ee77d57a06;
            lStack_2c0 = -0x5fae7e11882a85fa;
            local_258 = ZEXT816(0x635f78657476);
            sVar11 = 0xffffffffffffffff;
            do {
              sVar10 = sVar11 + 1;
              lVar23 = sVar11 + 1;
              sVar11 = sVar10;
            } while (local_258[lVar23] != '\0');
            local_1f8 = (short *)local_168._0_8_;
            local_1f0 = local_150;
            psVar14 = (short *)local_168;
            if (0xf < local_150) {
              psVar14 = (short *)local_168._0_8_;
            }
            if (local_158 == sVar10) {
              iVar8 = memcmp(psVar14,local_258,local_158);
              local_2d7 = iVar8 == 0;
            }
            else {
              local_2d7 = false;
            }
            do {
              cVar7 = local_2d7;
              local_198 = 0;
              local_190 = 0xf;
              local_1a8._1_15_ = SUB1615((undefined1  [16])0x0,1);
              auVar3[0xf] = 0;
              auVar3._0_15_ = local_1a8._1_15_;
              local_1a8 = auVar3 << 8;
              if (uVar29 <= uVar13) {
LAB_18020a56b:
                local_288._8_8_ = 0xa05181ee77d57a06;
                local_288._0_8_ = 0xdb35e39b27e1c185;
                auStack_278._8_8_ = 0xa5cea54bfef7110;
                auStack_278._0_8_ = 0x929654b1461b7377;
                local_268 = 0xa70c9f7f916b7e19;
                local_2e8 = 0x2b2d6d82aa402c0a;
                uStack_260 = 0x2b2d6d82aa402c0a;
                local_2b8 = 0x56205d6e6f63655b;
                uStack_2b0 = 0x2068746170204b50;
                uStack_2a8 = 0x736920656c626174;
                uStack_2a0 = 0x7461636e75727420;
                local_298 = 0x6465;
                uStack_290 = 0;
                lVar23 = -1;
                do {
                  lStack_2c0 = lVar23 + 1;
                  lVar27 = lVar23 + -0x2f;
                  lVar23 = lStack_2c0;
                } while (local_288[lVar27] != '\0');
                local_2c8 = (char *)&local_2b8;
                FUN_18020e620(&local_2c8);
LAB_18020a707:
                FUN_18015c010(local_1a8);
                goto LAB_18020a3cb;
              }
              uVar24 = uVar13;
              while( true ) {
                uVar9 = uVar24 + 1;
                if (0x10000 < uVar24 - uVar13) goto LAB_18020a56b;
                if (*(char *)(uVar31 + uVar24) == '\0') break;
                uVar24 = uVar9;
                if (uVar29 <= uVar9) goto LAB_18020a56b;
              }
              FUN_180113930(local_1a8,uVar13 + uVar31,uVar24 - uVar13);
              uVar24 = uVar24 + 1;
              if (local_198 == 0) goto LAB_18020aefa;
              if (cVar7 == '\0') {
LAB_18020a8c2:
                local_2d8 = '\0';
              }
              else {
                local_108 = 0xdb35e39b27e1c185;
                uStack_100 = 0xa05181ee77d57a06;
                uStack_f8 = 0x929654b1461b7377;
                local_2d0 = 0xa5cea54bfef7110;
                uStack_f0 = 0xa5cea54bfef7110;
                local_218._8_8_ = 0x2f736567616d692f;
                local_218._0_8_ = 0x616d61726f6e6170;
                local_208 = 0x6e6f6365;
                uStack_200 = 0;
                uVar13 = 0xffffffffffffffff;
                do {
                  uVar9 = uVar13 + 1;
                  lVar23 = uVar13 + 1;
                  uVar13 = uVar9;
                } while (local_218[lVar23] != '\0');
                puVar30 = local_1a8;
                if (0xf < local_190) {
                  puVar30 = (undefined1 *)local_1a8._0_8_;
                }
                if ((local_198 < uVar9) ||
                   ((uVar9 != 0 &&
                    ((puVar1 = puVar30 + local_198,
                     puVar12 = (undefined1 *)thunk_FUN_1805f9970(puVar30,puVar1,local_218),
                     puVar12 == puVar1 || ((longlong)puVar12 - (longlong)puVar30 == -1))))))
                goto LAB_18020a8c2;
                local_2d8 = '\x01';
              }
LAB_18020a8d0:
              local_178 = 0;
              local_170 = 0xf;
              local_188._1_15_ = SUB1615((undefined1  [16])0x0,1);
              auVar4[0xf] = 0;
              auVar4._0_15_ = local_188._1_15_;
              local_188 = auVar4 << 8;
              if (uVar29 <= uVar24) {
LAB_18020a94b:
                local_268 = 0xa70c9f7f916b7e19;
                uStack_260 = 0x2b2d6d82aa402c0a;
                local_2b8 = 0x56205d6e6f63655b;
                uStack_2b0 = 0x6e656c6966204b50;
                uStack_2a8 = 0x6c62617420656d61;
                uStack_2a0 = 0x7572742073692065;
                local_298 = 0x64657461636e;
                uStack_290 = 0;
                lVar23 = -1;
                do {
                  lStack_2c0 = lVar23 + 1;
                  lVar27 = lVar23 + -0x2f;
                  lVar23 = lStack_2c0;
                } while (local_288[lVar27] != '\0');
LAB_18020aacb:
                uStack_290 = 0;
                local_2b8 = 0x56205d6e6f63655b;
                uStack_260 = 0x2b2d6d82aa402c0a;
                local_268 = 0xa70c9f7f916b7e19;
                auStack_278._8_8_ = 0xa5cea54bfef7110;
                auStack_278._0_8_ = 0x929654b1461b7377;
                local_288._8_8_ = 0xa05181ee77d57a06;
                local_288._0_8_ = 0xdb35e39b27e1c185;
                local_2e8 = 0x2b2d6d82aa402c0a;
                local_2c8 = (char *)&local_2b8;
                FUN_18020e620(&local_2c8);
                FUN_18015c010(local_188);
                goto LAB_18020a707;
              }
              uVar9 = uVar24;
              while( true ) {
                uVar13 = uVar9 + 1;
                if (0x10000 < uVar9 - uVar24) goto LAB_18020a94b;
                if (*(char *)(uVar31 + uVar9) == '\0') break;
                uVar9 = uVar13;
                if (uVar29 <= uVar13) goto LAB_18020a94b;
              }
              FUN_180113930(local_188,uVar24 + uVar31,uVar9 - uVar24);
              uVar6 = local_170;
              lVar23 = local_178;
              uVar13 = uVar9 + 1;
              if (local_178 != 0) {
                if (uVar29 - uVar13 < 0x12) {
LAB_18020b0a6:
                  local_268 = 0xa70c9f7f916b7e19;
                  uStack_260 = 0x2b2d6d82aa402c0a;
                  local_2b8 = 0x56205d6e6f63655b;
                  uStack_2b0 = 0x7972746e65204b50;
                  uStack_2a8 = 0x6920656c62617420;
                  uStack_2a0 = 0x696c61766e692073;
                  local_298 = 100;
                  uStack_290 = 0;
                  lVar23 = -1;
                  do {
                    lStack_2c0 = lVar23 + 1;
                    lVar27 = lVar23 + -0x2f;
                    lVar23 = lStack_2c0;
                  } while (local_288[lVar27] != '\0');
                  goto LAB_18020aacb;
                }
                auVar33 = ZEXT1664(*(undefined1 (*) [16])(uVar31 + uVar13));
                if ((*(short *)(uVar31 + 0x10 + uVar13) != -1) ||
                   (uVar24 = (ulonglong)SUB162(*(undefined1 (*) [16])(uVar31 + uVar13),4),
                   uVar29 - (uVar9 + 0x13) < uVar24)) goto LAB_18020b0a6;
                uVar24 = uVar9 + 0x13 + uVar24;
                psVar14 = (short *)local_168;
                if (0xf < local_1f0) {
                  psVar14 = local_1f8;
                }
                uVar28 = local_188._0_8_;
                if (((local_2e8 == 3) && (*psVar14 == 0x7874)) && ((char)psVar14[1] == 't')) {
                  plVar17 = (longlong *)local_1a8;
                  if (0xf < local_190) {
                    plVar17 = (longlong *)local_1a8._0_8_;
                  }
                  if (((local_198 != 0xd) || (*plVar17 != 0x2f73747069726373)) ||
                     (((int)plVar17[1] != 0x6d657469 || (*(char *)((longlong)plVar17 + 0xc) != 's'))
                     )) goto LAB_18020ac2b;
                  plVar17 = (longlong *)local_188;
                  if (0xf < local_170) {
                    plVar17 = (longlong *)local_188._0_8_;
                  }
                  if (((local_178 != 10) || (*plVar17 != 0x61675f736d657469)) ||
                     ((short)plVar17[1] != 0x656d)) goto LAB_18020ac2b;
                  bVar5 = true;
                }
                else {
LAB_18020ac2b:
                  bVar5 = false;
                }
                if (local_2d8 == '\0') {
                  if (bVar5) goto LAB_18020ac4e;
                  FUN_18015c010(local_188);
                }
                else {
                  if (bVar5) {
LAB_18020ac4e:
                    local_288 = (undefined1  [16])0x0;
                    auStack_278 = (undefined1  [16])0x0;
                    FUN_18015ba30(local_288,"__items_game",0xc);
                    auVar32 = auVar33._0_16_;
                    puVar16 = (undefined8 *)local_288;
                    local_2e0._0_4_ = uVar26 | 1;
                  }
                  else {
                    local_1c8 = (undefined1  [16])0x0;
                    local_1b8 = (undefined1  [16])0x0;
                    if (local_198 < 0x10) {
                    /* WARNING: Subroutine does not return */
                      FUN_180141470();
                    }
                    lVar27 = -1;
                    if (local_198 - 0x10 != -1) {
                      lVar27 = local_198 - 0x10;
                    }
                    plVar17 = (longlong *)local_1a8;
                    if (0xf < local_190) {
                      plVar17 = (longlong *)local_1a8._0_8_;
                    }
                    FUN_18015ba30(local_1c8,plVar17 + 2,lVar27);
                    local_2e0 = CONCAT44(local_2e0._4_4_,uVar26) | 0x42;
                    pauVar15 = (undefined1 (*) [16])FUN_18015b2a0(local_1c8,&DAT_1807c47a0,1);
                    local_1e8 = *pauVar15;
                    auStack_1d8 = pauVar15[1];
                    (*pauVar15)[0] = 0;
                    *(undefined8 *)pauVar15[1] = 0;
                    *(undefined8 *)(pauVar15[1] + 8) = 0xf;
                    local_2e0._0_4_ = uVar26 | 0x66;
                    plVar17 = (longlong *)local_188;
                    if (0xf < uVar6) {
                      plVar17 = (longlong *)uVar28;
                    }
                    auVar33 = ZEXT1664(auVar33._0_16_);
                    puVar16 = (undefined8 *)FUN_18015b2a0(local_1e8,plVar17,lVar23);
                    auVar32 = auVar33._0_16_;
                    local_2b8 = *puVar16;
                    uStack_2b0 = puVar16[1];
                    uStack_2a8 = puVar16[2];
                    uStack_2a0 = puVar16[3];
                    *(undefined1 *)puVar16 = 0;
                    puVar16[2] = 0;
                    puVar16[3] = 0xf;
                    puVar16 = &local_2b8;
                    local_2e0._0_4_ = uVar26 | 0x7e;
                  }
                  local_108 = *puVar16;
                  uStack_100 = puVar16[1];
                  uStack_f8 = puVar16[2];
                  uStack_f0 = puVar16[3];
                  *(undefined1 *)puVar16 = 0;
                  puVar16[2] = 0;
                  puVar16[3] = 0xf;
                  uVar26 = (uint)local_2e0;
                  if (((uint)local_2e0 & 8) != 0) {
                    uVar26 = (uint)local_2e0 & 0xfffffff7;
                    local_2e0._0_4_ = (uint)local_2e0 & 0xfffffff7;
                    auVar33 = ZEXT1664(auVar32);
                    FUN_18015c010(&local_2b8);
                    auVar32 = auVar33._0_16_;
                  }
                  if ((uVar26 & 4) != 0) {
                    uVar26 = uVar26 & 0xfffffffb;
                    auVar33 = ZEXT1664(auVar32);
                    local_2e0._0_4_ = uVar26;
                    FUN_18015c010(local_1e8);
                    auVar32 = auVar33._0_16_;
                  }
                  if ((uVar26 & 2) != 0) {
                    uVar26 = uVar26 & 0xfffffffd;
                    auVar33 = ZEXT1664(auVar32);
                    local_2e0._0_4_ = uVar26;
                    FUN_18015c010(local_1c8);
                    auVar32 = auVar33._0_16_;
                  }
                  Var34 = auVar32._6_10_;
                  if ((uVar26 & 1) != 0) {
                    uVar26 = uVar26 & 0xfffffffe;
                    auVar33 = ZEXT1664(auVar32);
                    local_2e0._0_4_ = uVar26;
                    FUN_18015c010(local_288);
                    Var34 = auVar33._6_10_;
                  }
                  uVar13 = (ulonglong)(uint)((unkuint10)Var34 >> 0x10);
                  if ((short)Var34 == 0x7fff) {
                    uVar13 = uVar13 + (local_128 & 0xffffffff) + 0x1c;
                  }
                  local_218._0_2_ = (short)Var34;
                  local_218._8_8_ = uVar13;
                  local_208 = CONCAT44(local_208._4_4_,(int)((unkuint10)Var34 >> 0x30));
                  plVar17 = (longlong *)FUN_180210120(&DAT_180cc9d08,local_238,&local_108);
                  lVar23 = *plVar17;
                  *(undefined8 *)(lVar23 + 0x30) = local_218._0_8_;
                  *(undefined8 *)(lVar23 + 0x38) = local_218._8_8_;
                  *(undefined8 *)(lVar23 + 0x40) = local_208;
                  FUN_18015c010(&local_108);
                  FUN_18015c010(local_188);
                }
                goto LAB_18020a8d0;
              }
              FUN_18015c010(local_188);
              FUN_18015c010(local_1a8);
            } while( true );
          }
          FUN_18015c010(local_168);
        }
LAB_18020af1e:
        local_258 = (undefined1  [16])0x0;
        local_248 = 0;
        local_288 = (undefined1  [16])0x0;
        auStack_278 = (undefined1  [16])0x0;
        uVar31 = FUN_18015ba30(local_288,"__items_game",0xc);
        FUN_18020cfe0(uVar31,local_258,local_288);
        FUN_18015c010(local_288);
        uVar31 = local_258._0_8_;
        pcVar25 = (char *)local_258._8_8_;
        if (local_258._0_8_ != local_258._8_8_) {
          lStack_2c0 = local_258._8_8_ - local_258._0_8_;
          local_2c8 = (char *)local_258._0_8_;
          FUN_180205db0(local_238,&local_2c8,0);
          FUN_1801b3370(&DAT_180cc9bc8);
          DAT_180cc9bc8 = local_238._0_8_;
          DAT_180cc9bd0 = local_238._8_8_;
          _DAT_180cc9bd8 = local_228;
          local_238 = (undefined1  [16])0x0;
          local_228 = 0;
          FUN_1801b3370(local_238);
          lVar23 = DAT_180cc9bd0;
          if (DAT_180cc9bc8 != DAT_180cc9bd0) {
            puVar16 = (undefined8 *)(DAT_180cc9bc8 + 8);
            lVar27 = DAT_180cc9bc8;
            do {
              if (puVar16 + 8 != puVar16) {
                puVar19 = puVar16;
                if (0xf < (ulonglong)puVar16[3]) {
                  puVar19 = (undefined8 *)*puVar16;
                }
                FUN_180113930(puVar16 + 8,puVar19,puVar16[2]);
              }
              lVar20 = DAT_180c63930;
              if (puVar16[6] != 0) {
                if (DAT_180c63930 == 0) {
                  uVar28 = 0;
                }
                else {
                  lVar18 = FUN_18017ea70();
                  *(int *)(lVar18 + 4) = *(int *)(lVar18 + 4) + 1;
                  puVar19 = (undefined8 *)FUN_18020f880(local_238,lVar20);
                  if (*(char *)(puVar19 + 1) == '\0') {
                    uVar28 = 0;
                  }
                  else {
                    uVar28 = *puVar19;
                  }
                  lVar20 = FUN_18017ea70();
                  if (*(int *)(lVar20 + 4) != 0) {
                    *(int *)(lVar20 + 4) = *(int *)(lVar20 + 4) + -1;
                  }
                }
                FUN_180454280(local_e8,uVar28,0x100);
                uVar24 = local_d0;
                sVar11 = local_d8;
                ppppuVar22 = local_e8[0];
                if (local_d8 != 0) {
                  puVar19 = puVar16 + 4;
                  if (0xf < (ulonglong)puVar16[7]) {
                    puVar19 = (undefined8 *)puVar16[4];
                  }
                  ppppuVar21 = local_e8;
                  if (0xf < local_d0) {
                    ppppuVar21 = local_e8[0];
                  }
                  if (((local_d8 != puVar16[6]) ||
                      (iVar8 = memcmp(ppppuVar21,puVar19,local_d8), iVar8 != 0)) &&
                     ((undefined8 *****)(puVar16 + 8) != local_e8)) {
                    ppppuVar21 = local_e8;
                    if (0xf < uVar24) {
                      ppppuVar21 = ppppuVar22;
                    }
                    FUN_180113930(puVar16 + 8,ppppuVar21,sVar11);
                  }
                }
                FUN_18015c010(local_e8);
              }
              lVar27 = lVar27 + 200;
              puVar16 = puVar16 + 0x19;
            } while (lVar27 != lVar23);
            pcVar25 = (char *)local_258._8_8_;
          }
          lVar23 = SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(DAT_180cc9bd0 - DAT_180cc9bc8),8) +
                   (DAT_180cc9bd0 - DAT_180cc9bc8);
          local_2f8 = 0x48;
          FUN_18020f8e0(DAT_180cc9bc8,DAT_180cc9bd0,(lVar23 >> 7) - (lVar23 >> 0x3f),0);
          local_2c8 = (char *)uVar31;
          lStack_2c0 = (longlong)pcVar25 - uVar31;
          FUN_180205db0(local_238,&local_2c8,1);
          FUN_1801b3370(&DAT_180cc9be0);
          DAT_180cc9be0 = local_238._0_8_;
          DAT_180cc9be8 = local_238._8_8_;
          _DAT_180cc9bf0 = local_228;
          local_238 = (undefined1  [16])0x0;
          local_228 = 0;
          FUN_1801b3370(local_238);
          lVar23 = DAT_180cc9be8;
          if (DAT_180cc9be0 != DAT_180cc9be8) {
            puVar16 = (undefined8 *)(DAT_180cc9be0 + 8);
            lVar27 = DAT_180cc9be0;
            do {
              if (puVar16 + 8 != puVar16) {
                puVar19 = puVar16;
                if (0xf < (ulonglong)puVar16[3]) {
                  puVar19 = (undefined8 *)*puVar16;
                }
                FUN_180113930(puVar16 + 8,puVar19,puVar16[2]);
              }
              lVar20 = DAT_180c63930;
              if (puVar16[6] != 0) {
                if (DAT_180c63930 == 0) {
                  uVar31 = 0;
                }
                else {
                  lVar18 = FUN_18017ea70();
                  *(int *)(lVar18 + 4) = *(int *)(lVar18 + 4) + 1;
                  puVar19 = (undefined8 *)FUN_18020f880(local_238,lVar20);
                  if (*(char *)(puVar19 + 1) == '\0') {
                    uVar31 = 0;
                  }
                  else {
                    uVar31 = *puVar19;
                  }
                  lVar20 = FUN_18017ea70();
                  if (*(int *)(lVar20 + 4) != 0) {
                    *(int *)(lVar20 + 4) = *(int *)(lVar20 + 4) + -1;
                  }
                }
                FUN_180454280(local_c8,uVar31,0x100);
                uVar24 = local_b0;
                sVar11 = local_b8;
                ppppuVar22 = local_c8[0];
                if (local_b8 != 0) {
                  puVar19 = puVar16 + 4;
                  if (0xf < (ulonglong)puVar16[7]) {
                    puVar19 = (undefined8 *)puVar16[4];
                  }
                  ppppuVar21 = local_c8;
                  if (0xf < local_b0) {
                    ppppuVar21 = local_c8[0];
                  }
                  if (((local_b8 != puVar16[6]) ||
                      (iVar8 = memcmp(ppppuVar21,puVar19,local_b8), iVar8 != 0)) &&
                     ((undefined8 *****)(puVar16 + 8) != local_c8)) {
                    ppppuVar21 = local_c8;
                    if (0xf < uVar24) {
                      ppppuVar21 = ppppuVar22;
                    }
                    FUN_180113930(puVar16 + 8,ppppuVar21,sVar11);
                  }
                }
                FUN_18015c010(local_c8);
              }
              lVar27 = lVar27 + 200;
              puVar16 = puVar16 + 0x19;
            } while (lVar27 != lVar23);
          }
          lVar23 = SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(DAT_180cc9be8 - DAT_180cc9be0),8) +
                   (DAT_180cc9be8 - DAT_180cc9be0);
          local_2f8 = 0x48;
          FUN_18020f8e0(DAT_180cc9be0,DAT_180cc9be8,(lVar23 >> 7) - (lVar23 >> 0x3f),0);
        }
        lVar23 = SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(DAT_180cc9bd0 - DAT_180cc9bc8),8) +
                 (DAT_180cc9bd0 - DAT_180cc9bc8);
        local_2e8 = (lVar23 >> 7) - (lVar23 >> 0x3f);
        local_1f8 = DAT_180cc9d18;
        local_2c8 = "[econ] VPK index ready: entries={} stickers={}";
        lStack_2c0 = 0x2e;
        FUN_18020eaa0(&local_2c8,&local_1f8,&local_2e8);
        FUN_180113710(local_258);
      }
LAB_18020b621:
      FUN_18015c010(local_80);
      FUN_180113710(local_148);
      FUN_18015b930(local_60);
    }
    if (local_88 != '\0') {
      FUN_18015b930(local_a8);
    }
  }
LAB_18020aefa:
  FUN_18015c010(local_1a8);
  FUN_18015c010(local_168);
  if (uVar29 <= uVar24) goto LAB_18020af1e;
  goto LAB_18020a1c2;
}



