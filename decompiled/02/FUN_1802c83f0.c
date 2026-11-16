// FUN_1802c83f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802c83f0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802c83f0(undefined8 *param_1,undefined1 (*param_2) [16],longlong *param_3,
                  undefined8 param_4,char param_5)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  ulonglong *puVar6;
  short sVar7;
  longlong **pplVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  undefined1 (*pauVar13) [16];
  longlong **pplVar14;
  longlong lVar15;
  int iVar16;
  undefined8 uVar17;
  longlong lVar18;
  char *pcVar19;
  longlong *plVar20;
  ulonglong uVar21;
  longlong *plVar22;
  longlong lVar23;
  longlong *plVar24;
  float fVar25;
  undefined1 in_XMM3 [16];
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [64];
  float fVar29;
  undefined1 auVar30 [64];
  undefined1 auVar31 [16];
  undefined1 auVar32 [64];
  undefined1 auStack_268 [32];
  undefined8 local_248;
  char local_238;
  longlong *local_228;
  longlong lStack_220;
  undefined4 local_218;
  undefined4 local_214;
  undefined4 local_210;
  undefined4 local_20c;
  float local_208 [2];
  ulonglong *local_200;
  longlong *local_1f8;
  longlong lStack_1f0;
  uint local_1e8;
  undefined8 local_1e4;
  undefined8 *local_1d8;
  undefined1 local_1d0 [16];
  undefined1 auStack_1c0 [16];
  float local_1b0;
  undefined4 local_1ac;
  float local_1a8;
  float local_1a4;
  longlong *local_1a0;
  ulonglong local_198;
  undefined1 local_188 [16];
  longlong *local_178;
  undefined1 local_168 [64];
  undefined1 local_128 [48];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8;
  undefined8 local_e0;
  longlong *local_d8;
  undefined1 local_d0 [16];
  ulonglong local_c0;
  ulonglong local_b8;
  undefined1 local_b0 [16];
  undefined8 local_a0;
  ulonglong local_98;
  
  local_98 = DAT_1808d5f00 ^ (ulonglong)auStack_268;
  auVar30 = ZEXT1664(in_XMM3);
  plVar10 = (longlong *)0x0;
  local_1e8 = 0;
  local_1d8 = param_1;
  sVar7 = thunk_FUN_180624430(in_XMM3._0_8_);
  auVar28 = ZEXT464(0x42f00000);
  auVar27 = auVar28._0_16_;
  if (sVar7 < 1) {
    auVar27 = vmaxss_avx(auVar30._0_16_,auVar27);
  }
  auVar30 = ZEXT1664(auVar27);
  local_d8 = (longlong *)CONCAT44(local_d8._4_4_,auVar27._0_4_);
  if (DAT_180bbadc8 == DAT_180bbadd0) {
    lVar15 = DAT_180bbade0;
  }
  else {
    lVar15 = *(longlong *)(DAT_180bbadd0 + -8);
  }
  if (((*(float *)(param_1 + 0xe) == auVar27._0_4_) && (*(char *)(param_1 + 0x10) == param_5)) &&
     (param_1[0x11] == lVar15)) {
  }
  FUN_1800e9bc0(local_168,2);
  FUN_1802e29c0(local_128);
  local_f8 = 0xbf800000bf800000;
  uStack_f0 = 0x41f0000000000000;
  local_e8 = 0;
  local_e0 = 0;
  FUN_1802c8e50(param_1,local_168);
  _eh_vector_destructor_iterator_(local_128,0x18,2,thunk_FUN_1801b3620);
  _eh_vector_destructor_iterator_(local_168,0x20,2,thunk_FUN_18015c010);
  *(int *)(param_1 + 0xe) = auVar30._0_4_;
  *(char *)(param_1 + 0x10) = param_5;
  param_1[0x11] = lVar15;
  pcVar19 = *(char **)*param_2;
  if ((*(longlong *)(*param_2 + 8) == 4) && ((int)*(longlong *)pcVar19 == 0x74727548)) {
    pcVar19 = "Damage Taken";
    uVar17 = 0xc;
  }
  else if ((*(longlong *)(*param_2 + 8) == 3) &&
          (((short)*(longlong *)pcVar19 == 0x7542 && (*(char *)((longlong)pcVar19 + 2) == 'y')))) {
    pcVar19 = "Purchase";
    uVar17 = 8;
  }
  else if ((*(longlong *)(*param_2 + 8) == 8) && (*(longlong *)pcVar19 == 0x686374616d73694d)) {
    pcVar19 = "Shot Details";
    uVar17 = 0xc;
  }
  else {
    uVar17 = *(undefined8 *)(*param_2 + 8);
  }
  local_228 = (longlong *)&DAT_1807d3eac;
  lStack_220 = 2;
  lVar15 = DAT_180bbade0;
  if (DAT_180bbadc8 != DAT_180bbadd0) {
    lVar15 = *(longlong *)(DAT_180bbadd0 + -8);
  }
  auVar32 = ZEXT864(0);
  if (lVar15 == 0) {
    fVar26 = 0.0;
  }
  else {
    local_1f8 = (longlong *)&DAT_1807d3eac;
    lStack_1f0 = 2;
    FUN_180430010(lVar15,&local_200,&local_1f8);
    fVar26 = local_200._0_4_;
  }
  lVar15 = DAT_180bbade0;
  if (DAT_180bbadc8 != DAT_180bbadd0) {
    lVar15 = *(longlong *)(DAT_180bbadd0 + -8);
  }
  lStack_220 = uVar17;
  local_228 = (longlong *)pcVar19;
  if (lVar15 == 0) {
    fVar25 = 0.0;
  }
  else {
    local_1f8 = (longlong *)pcVar19;
    lStack_1f0 = uVar17;
    FUN_180430010(pcVar19,&local_200,&local_1f8);
    fVar25 = local_200._0_4_;
  }
  fVar29 = auVar30._0_4_;
  *(float *)(param_1 + 0xf) = fVar26 + fVar25;
  fVar26 = auVar28._0_4_;
  local_208[0] = fVar26;
  if (DAT_180bbadc8 == DAT_180bbadd0) {
    lVar15 = DAT_180bbade0;
  }
  else {
    lVar15 = *(longlong *)(DAT_180bbadd0 + -8);
  }
  if (lVar15 == 0) {
    local_200._0_4_ = 0.0;
  }
  else {
    local_1f8 = (longlong *)*param_3;
    lStack_1f0 = param_3[1];
    FUN_180430010(local_1f8,&local_200,&local_1f8);
    fVar29 = auVar30._0_4_;
    fVar26 = auVar28._0_4_;
  }
  auVar27 = vroundss_avx(ZEXT816(0),
                         ZEXT416((uint)(*(float *)(param_1 + 0xf) + 42.0 + local_200._0_4_)),2);
  local_1e4._0_4_ = auVar27._0_4_;
  pplVar14 = (longlong **)local_208;
  if (fVar26 <= (float)local_1e4) {
    pplVar14 = (longlong **)&local_1e4;
  }
  pplVar8 = &local_d8;
  if ((float)local_1e4 <= fVar29) {
    pplVar8 = pplVar14;
  }
  fVar26 = *(float *)pplVar8;
  *(float *)((longlong)param_1 + 0x74) = fVar26;
  auVar27 = vmaxss_avx(ZEXT416((uint)((fVar26 - 42.0) - *(float *)(param_1 + 0xf))),auVar32._0_16_);
  auVar31 = vmaxss_avx(ZEXT416((uint)(fVar26 - 42.0)),auVar32._0_16_);
  auVar28 = ZEXT1664(auVar31);
  local_d8 = (longlong *)0x0;
  local_1f8 = (longlong *)*param_3;
  lStack_1f0 = param_3[1];
  if (param_5 != '\0') {
    puVar9 = (undefined8 *)FUN_1802e2a10(local_d0,&local_1f8,auVar27._0_8_,local_238);
    auVar27 = auVar32._0_16_;
    if (param_1 != puVar9) {
      FUN_18015c010(param_1);
      auVar27 = auVar32._0_16_;
      uVar17 = puVar9[1];
      uVar2 = puVar9[2];
      uVar3 = puVar9[3];
      *param_1 = *puVar9;
      param_1[1] = uVar17;
      param_1[2] = uVar2;
      param_1[3] = uVar3;
      puVar9[2] = 0;
      puVar9[3] = 0xf;
      *(undefined1 *)puVar9 = 0;
    }
    auVar32 = ZEXT1664(auVar27);
    FUN_18015c010(local_d0);
    goto LAB_1802c88f2;
  }
  plVar10 = (longlong *)FUN_1802e2c30(&local_1f8);
  plVar22 = (longlong *)param_3[1];
  if (plVar10 < plVar22) {
    lVar15 = *param_3;
    if (plVar10 != (longlong *)0x0) {
      lVar23 = -1;
      if ((longlong)plVar10 - 1U != -1) {
        lVar23 = (longlong)plVar10 - 1U;
      }
      lVar18 = lVar23 + 1 + lVar15;
      lVar23 = thunk_FUN_1805f7d20(lVar15,lVar18,0x20);
      if (lVar23 != lVar18) {
        plVar24 = (longlong *)(lVar23 - lVar15);
        param_1 = local_1d8;
        if ((plVar24 != (longlong *)0xffffffffffffffff) &&
           ((longlong *)((ulonglong)plVar10 >> 1) < plVar24)) {
          plVar10 = plVar24;
        }
        goto LAB_1802c8818;
      }
    }
    param_1 = local_1d8;
  }
LAB_1802c8818:
  lVar15 = *param_3;
  plVar24 = plVar10;
  if (plVar22 < plVar10) {
    plVar24 = plVar22;
  }
  FUN_180113930(param_1,lVar15,plVar24);
  local_228 = (longlong *)0x0;
  lStack_220 = 0;
  if (plVar22 < plVar10) {
                    /* WARNING: Subroutine does not return */
    FUN_18015ac40();
  }
  local_228 = (longlong *)(lVar15 + (longlong)plVar10);
  lStack_220 = -1;
  if ((longlong)plVar22 - (longlong)plVar10 != -1) {
    lStack_220 = (longlong)plVar22 - (longlong)plVar10;
  }
  for (; (lStack_220 != 0 && ((char)*local_228 == ' '));
      local_228 = (longlong *)((longlong)local_228 + 1)) {
    lStack_220 = lStack_220 + -1;
    plVar10 = (longlong *)((longlong)plVar10 + 1);
  }
  local_d8 = plVar10;
  if (lStack_220 != 0) {
    local_1f8 = local_228;
    lStack_1f0 = lStack_220;
    puVar11 = (undefined8 *)FUN_1802e2a10(local_d0,&local_1f8,auVar28._0_8_,local_238);
    auVar27 = auVar32._0_16_;
    puVar9 = param_1 + 4;
    if (puVar9 != puVar11) {
      FUN_18015c010(puVar9);
      auVar27 = auVar32._0_16_;
      uVar17 = puVar11[1];
      uVar2 = puVar11[2];
      uVar3 = puVar11[3];
      *puVar9 = *puVar11;
      param_1[5] = uVar17;
      param_1[6] = uVar2;
      param_1[7] = uVar3;
      puVar11[2] = 0;
      puVar11[3] = 0xf;
      *(undefined1 *)puVar11 = 0;
    }
    auVar32 = ZEXT1664(auVar27);
    FUN_18015c010(local_d0);
    *(undefined4 *)((longlong)param_1 + 0x7c) = 0x42400000;
  }
LAB_1802c88f2:
  local_b0 = (undefined1  [16])0x0;
  local_a0 = 0;
  local_228 = (longlong *)0xffe1e1e1ffeeeeee;
  lStack_220 = 0xffa0d782ffe1e1e1;
  local_218 = 0xff6e6eeb;
  local_214 = 0xff6e6eeb;
  local_210 = 0xff6e6eeb;
  local_20c = 0xff6e6eeb;
  local_1f8 = (longlong *)*param_3;
  lStack_1f0 = param_3[1];
  local_188 = *param_2;
  local_248 = 0x200;
  FUN_1802c75c0(local_b0,local_188,&local_1f8,&local_228);
  local_208[0] = 0.0;
  local_200 = param_1 + 2;
  plVar22 = param_1 + 9;
  auVar28 = ZEXT1664(_DAT_18086d450);
  lVar15 = local_b0._0_8_;
  do {
    local_178 = (longlong *)0x0;
    if (local_208[0] != 0.0) {
      local_178 = plVar10;
    }
    puVar9 = local_1d8 + (longlong)(int)local_208[0] * 4;
    if (0xf < local_200[1]) {
      puVar9 = (undefined8 *)local_200[-2];
    }
    uVar1 = *local_200;
    if (uVar1 < 3) {
      local_238 = false;
    }
    else {
      iVar16 = *(ushort *)((longlong)puVar9 + (uVar1 - 3)) - 0x2e2e;
      if (iVar16 == 0) {
        iVar16 = *(byte *)((longlong)puVar9 + (uVar1 - 1)) - 0x2e;
      }
      local_238 = iVar16 == 0;
    }
    plVar24 = (longlong *)((longlong)local_178 + (uVar1 - (-(uint)((bool)local_238 != false) & 3)));
    local_1a0 = (longlong *)0x0;
    local_198 = 4;
    local_228 = plVar24;
    if (4 < (ulonglong)((local_b0._8_8_ - lVar15) / 0x28)) {
      lVar23 = 0xa0;
      do {
        puVar9 = (undefined8 *)(lVar15 + lVar23);
        plVar10 = local_178;
        if (local_178 < local_1a0) {
          plVar10 = local_1a0;
        }
        uVar1 = puVar9[2];
        plVar20 = plVar24;
        if ((longlong *)((longlong)local_1a0 + uVar1) < plVar24) {
          plVar20 = (longlong *)((longlong)local_1a0 + uVar1);
        }
        if (plVar10 < plVar20) {
          uVar12 = (longlong)plVar10 - (longlong)local_1a0;
          local_d0 = (undefined1  [16])0x0;
          local_c0 = 0;
          local_b8 = 0;
          if (uVar1 < uVar12) {
                    /* WARNING: Subroutine does not return */
            FUN_180141470();
          }
          uVar21 = (longlong)plVar20 - (longlong)plVar10;
          if (uVar1 - uVar12 < (ulonglong)((longlong)plVar20 - (longlong)plVar10)) {
            uVar21 = uVar1 - uVar12;
          }
          puVar11 = puVar9;
          if (0xf < (ulonglong)puVar9[3]) {
            puVar11 = (undefined8 *)*puVar9;
          }
          FUN_18015ba30(local_d0,(longlong)puVar11 + uVar12,uVar21);
          uVar1 = local_c0;
          local_1e8 = local_1e8 | 1;
          local_1d0 = (undefined1  [16])0x0;
          auStack_1c0 = (undefined1  [16])0x0;
          pauVar13 = &local_d0;
          if (0xf < local_b8) {
            pauVar13 = (undefined1 (*) [16])local_d0._0_8_;
          }
          if (0x7fffffffffffffff < local_c0) {
                    /* WARNING: Subroutine does not return */
            FUN_18015bb70();
          }
          if (local_c0 < 0x10) {
            auStack_1c0._8_8_ = 0xf;
            auStack_1c0._0_8_ = local_c0;
            local_1d0 = *pauVar13;
          }
          else {
            uVar12 = local_c0 | 0xf;
            if (uVar12 < 0x8000000000000000) {
              if (uVar12 < 0x16) {
                uVar12 = 0x16;
              }
            }
            else {
              uVar12 = 0x7fffffffffffffff;
            }
            uVar17 = FUN_18015bca0(uVar12 + 1);
            local_1d0._0_8_ = uVar17;
            auStack_1c0._8_8_ = uVar12;
            auStack_1c0._0_8_ = uVar1;
            FUN_18063aed0(uVar17,pauVar13,uVar1 + 1);
          }
          pauVar13 = &local_d0;
          if (0xf < local_b8) {
            pauVar13 = (undefined1 (*) [16])local_d0._0_8_;
          }
          if (DAT_180bbadc8 == DAT_180bbadd0) {
            lVar15 = DAT_180bbade0;
          }
          else {
            lVar15 = *(longlong *)(DAT_180bbadd0 + -8);
          }
          if (lVar15 == 0) {
            local_1e4._0_4_ = auVar32._0_4_;
            local_1e4._4_4_ = (float)local_1e4;
          }
          else {
            local_188._8_8_ = local_c0;
            local_188._0_8_ = pauVar13;
            FUN_180430010(lVar15,&local_1e4,local_188);
          }
          auVar31 = auVar32._0_16_;
          auVar27 = auVar28._0_16_;
          local_1ac = *(undefined4 *)((longlong)puVar9 + 0x24);
          puVar11 = (undefined8 *)*plVar22;
          local_1b0 = (float)local_1e4;
          if (puVar11 == (undefined8 *)plVar22[1]) {
            FUN_1802eb190(plVar22 + -1,puVar11,local_1d0);
            auVar31 = auVar32._0_16_;
            auVar27 = auVar28._0_16_;
          }
          else {
            *puVar11 = local_1d0._0_8_;
            puVar11[1] = local_1d0._8_8_;
            puVar11[2] = auStack_1c0._0_8_;
            puVar11[3] = auStack_1c0._8_8_;
            auVar4[0xf] = 0;
            auVar4._0_15_ = local_1d0._1_15_;
            local_1d0 = auVar4 << 8;
            *(float *)(puVar11 + 4) = (float)local_1e4;
            *(undefined4 *)((longlong)puVar11 + 0x24) = local_1ac;
            *plVar22 = *plVar22 + 0x28;
            auStack_1c0 = auVar27;
          }
          auVar28 = ZEXT1664(auVar27);
          auVar32 = ZEXT1664(auVar31);
          FUN_18015c010(local_1d0);
          FUN_18015c010(local_d0);
          lVar15 = local_b0._0_8_;
          plVar24 = local_228;
        }
        local_1a0 = (longlong *)((longlong)local_1a0 + puVar9[2]);
        local_198 = local_198 + 1;
        lVar23 = lVar23 + 0x28;
      } while (local_198 < (ulonglong)((local_b0._8_8_ - lVar15) / 0x28));
      plVar10 = local_d8;
    }
    puVar6 = local_200;
    fVar26 = local_208[0];
    if (local_238 != '\0') {
      local_1d0 = (undefined1  [16])0x0;
      auStack_1c0 = (undefined1  [16])0x0;
      FUN_18015ba30(local_1d0,&DAT_1807d3edc,3);
      if (DAT_180bbadc8 == DAT_180bbadd0) {
        lVar15 = DAT_180bbade0;
      }
      else {
        lVar15 = *(longlong *)(DAT_180bbadd0 + -8);
      }
      if (lVar15 == 0) {
        local_1a8 = auVar32._0_4_;
        local_1a4 = local_1a8;
      }
      else {
        local_1f8 = (longlong *)&DAT_1807d3edc;
        lStack_1f0 = 3;
        FUN_180430010(lVar15,&local_1a8,&local_1f8);
      }
      auVar31 = auVar32._0_16_;
      auVar27 = auVar28._0_16_;
      local_1ac = 1;
      puVar9 = (undefined8 *)*plVar22;
      local_1b0 = local_1a8;
      if (puVar9 == (undefined8 *)plVar22[1]) {
        FUN_1802eb190(plVar22 + -1,puVar9,local_1d0);
        auVar31 = auVar32._0_16_;
        auVar27 = auVar28._0_16_;
      }
      else {
        *puVar9 = local_1d0._0_8_;
        puVar9[1] = local_1d0._8_8_;
        puVar9[2] = auStack_1c0._0_8_;
        puVar9[3] = auStack_1c0._8_8_;
        auVar5[0xf] = 0;
        auVar5._0_15_ = local_1d0._1_15_;
        local_1d0 = auVar5 << 8;
        *(float *)(puVar9 + 4) = local_1a8;
        *(undefined4 *)((longlong)puVar9 + 0x24) = 1;
        *plVar22 = *plVar22 + 0x28;
        auStack_1c0 = auVar27;
      }
      auVar28 = ZEXT1664(auVar27);
      auVar32 = ZEXT1664(auVar31);
      FUN_18015c010(local_1d0);
      lVar15 = local_b0._0_8_;
    }
    local_208[0] = (float)((int)fVar26 + 1);
    local_200 = puVar6 + 4;
    plVar22 = plVar22 + 3;
    if (1 < (int)local_208[0]) {
      FUN_1801b3620(local_b0);
                    /* WARNING: Read-only address (ram,0x00018086d450) is written */
    }
  } while( true );
}



