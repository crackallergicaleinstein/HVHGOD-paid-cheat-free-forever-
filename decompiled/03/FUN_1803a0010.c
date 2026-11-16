// FUN_1803a0010 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803a0010 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803a0010(longlong param_1,longlong param_2,uint *param_3,undefined8 *param_4,
                  longlong param_5,undefined8 *param_6,uint param_7,uint param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined1 (*pauVar5) [32];
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  bool bVar19;
  undefined8 uVar20;
  ulonglong uVar21;
  uint uVar22;
  undefined8 *puVar23;
  float *pfVar24;
  ulonglong *puVar25;
  longlong *plVar26;
  longlong lVar27;
  uint *puVar28;
  ulonglong *puVar29;
  char *pcVar30;
  ulonglong *puVar31;
  longlong lVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  int iVar35;
  int iVar36;
  undefined1 (*pauVar37) [32];
  ulonglong *puVar38;
  longlong lVar39;
  float fVar40;
  float fVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  float fVar46;
  undefined1 auVar47 [16];
  float fVar48;
  float fVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [64];
  undefined1 auVar52 [64];
  undefined1 auStack_178 [32];
  undefined8 local_158;
  undefined8 local_150;
  longlong local_148;
  undefined8 local_140;
  uint *local_138;
  undefined8 *local_130;
  longlong local_128;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  ulonglong local_80;
  
  local_80 = DAT_1808d5f00 ^ (ulonglong)auStack_178;
  auVar52 = ZEXT464(*(uint *)((longlong)param_4 + 0xc));
  lVar39 = (longlong)(int)param_7;
  auVar42 = vunpcklps_avx(ZEXT416(param_3[0x12]),ZEXT416(param_3[0x13]));
  local_148 = param_2;
  local_138 = param_3;
  local_130 = param_4;
  local_128 = param_1;
  local_140 = FUN_180244af0(auVar42._0_8_,*(uint *)((longlong)param_4 + 0xc),
                            *(undefined4 *)(param_1 + 0x74));
  uVar20 = FUN_180244af0(*(undefined8 *)(param_1 + 0x7c),auVar52._0_8_,
                         *(undefined4 *)(param_1 + 0x74));
  auVar43 = auVar52._0_16_;
  iVar36 = 0;
  iVar35 = 0;
  local_158._0_4_ = (float)uVar20;
  local_158._4_4_ = (float)((ulonglong)uVar20 >> 0x20);
  fVar46 = (float)local_158 - *(float *)(param_1 + 0x7c);
  fVar48 = local_158._4_4_ - *(float *)(param_1 + 0x80);
  auVar51 = ZEXT864(0);
  auVar42 = auVar51._0_16_;
  local_158 = uVar20;
  local_150 = lVar39;
  if (0 < (int)param_7) {
    pauVar37 = (undefined1 (*) [32])(param_1 + 0x29a0);
    lVar32 = 0;
    do {
      pauVar5 = (undefined1 (*) [32])param_6[lVar32];
      uVar33 = *(ulonglong *)(param_1 + 0x20);
      uVar34 = *(ulonglong *)(*pauVar5 + 8);
      uVar22 = *(uint *)*pauVar5;
      if (((uVar34 == uVar33) && ((uVar22 & 0x78) == 0)) && (iVar35 < *(int *)(param_1 + 0x94))) {
        uVar20 = *(undefined8 *)pauVar37[1];
        iVar35 = iVar35 + 1;
        *pauVar5 = *pauVar37;
        *(undefined8 *)pauVar5[1] = uVar20;
        pauVar37 = (undefined1 (*) [32])(pauVar37[1] + 8);
      }
      else {
        if (((uVar33 & uVar34) != 0) &&
           (*(ulonglong *)(*pauVar5 + 8) = ~uVar33 & uVar34, (~uVar33 & uVar34) == 0)) {
          *(uint *)*pauVar5 = *(uint *)*pauVar5 & 0xfffffffc;
          uVar22 = *(uint *)*pauVar5;
        }
        if ((uVar22 & 0x18) != 0) {
          auVar42 = auVar51._0_16_;
          if ((uVar22 & 8) == 0) {
            auVar43 = auVar42;
          }
          else {
            auVar43 = ZEXT416(*(uint *)(*pauVar5 + 0x18));
          }
          if ((uVar22 & 0x10) == 0) {
            auVar44 = auVar42;
          }
          else {
            auVar44 = ZEXT416(*(uint *)(*pauVar5 + 0x1c));
          }
          auVar43 = vunpcklps_avx(auVar43,auVar44);
          auVar51 = ZEXT1664(auVar42);
          auVar52 = ZEXT1664(auVar52._0_16_);
          uVar20 = FUN_180244af0(auVar43._0_8_);
          *(uint *)*pauVar5 = *(uint *)*pauVar5 | 0x18;
          local_158._0_4_ = (float)uVar20;
          local_158._4_4_ = (float)((ulonglong)uVar20 >> 0x20);
          *(float *)(*pauVar5 + 0x18) = (float)local_158;
          *(float *)(*pauVar5 + 0x1c) = local_158._4_4_;
          local_158 = uVar20;
        }
      }
      auVar43 = auVar52._0_16_;
      auVar42 = auVar51._0_16_;
      lVar32 = lVar32 + 1;
    } while (lVar32 < lVar39);
    param_3 = local_138;
  }
  uVar33 = (ulonglong)(int)param_7;
  if (iVar35 < *(int *)(param_1 + 0x94)) {
    plVar26 = param_6 + uVar33;
    puVar23 = (undefined8 *)(param_1 + (longlong)iVar35 * 0x28 + 0x29a0);
    do {
      puVar6 = (undefined8 *)*plVar26;
      param_7 = (int)uVar33 + 1;
      uVar33 = (ulonglong)param_7;
      iVar35 = iVar35 + 1;
      plVar26 = plVar26 + 1;
      uVar9 = *puVar23;
      uVar16 = puVar23[1];
      uVar17 = puVar23[2];
      uVar18 = puVar23[3];
      uVar20 = puVar23[4];
      puVar23 = puVar23 + 5;
      *puVar6 = uVar9;
      puVar6[1] = uVar16;
      puVar6[2] = uVar17;
      puVar6[3] = uVar18;
      puVar6[4] = uVar20;
    } while (iVar35 < *(int *)(param_1 + 0x94));
  }
  if ((int)param_7 < (int)param_8) {
    uStack_84 = 0;
    local_a8 = 0;
    puVar23 = (undefined8 *)param_6[(int)param_7];
    uStack_a4 = 0;
    uStack_a0 = 0;
    uStack_9c = 0;
    uStack_98 = 0;
    uStack_94 = 0;
    uStack_90 = 0;
    uStack_8c = 0;
    uStack_88 = 0;
    *puVar23 = 0;
    puVar23[1] = 0;
    puVar23[2] = 0;
    puVar23[3] = 0;
    puVar23[4] = 0;
    *(undefined4 *)param_6[(int)param_7] = 7;
  }
  lVar39 = *(longlong *)(param_3 + 6) + 8;
  if (*(longlong *)(param_3 + 6) == 0) {
    lVar39 = 0;
  }
  if ((lVar39 != 0) && (1 < (int)param_8)) {
    lVar32 = 1;
    uVar33 = (ulonglong)(param_8 - 1);
    do {
      lVar7 = *(longlong *)(lVar39 + lVar32 * 8);
      pfVar24 = (float *)&DAT_00000014;
      if (lVar7 != 0) {
        pfVar24 = (float *)(lVar7 + 0x24);
      }
      fVar49 = *pfVar24;
      lVar27 = lVar32;
      if (3 < lVar32) {
        plVar26 = (longlong *)(lVar39 + (lVar32 + -2) * 8);
        do {
          lVar8 = plVar26[1];
          pfVar24 = (float *)&DAT_00000014;
          if (lVar8 != 0) {
            pfVar24 = (float *)(lVar8 + 0x24);
          }
          if (*pfVar24 <= fVar49) goto LAB_1803a03d8;
          plVar26[2] = lVar8;
          lVar8 = *plVar26;
          pfVar24 = (float *)&DAT_00000014;
          if (lVar8 != 0) {
            pfVar24 = (float *)(lVar8 + 0x24);
          }
          if (*pfVar24 <= fVar49) {
            lVar27 = lVar27 + -1;
            goto LAB_1803a03d8;
          }
          plVar26[1] = lVar8;
          lVar8 = plVar26[-1];
          pfVar24 = (float *)&DAT_00000014;
          if (lVar8 != 0) {
            pfVar24 = (float *)(lVar8 + 0x24);
          }
          if (*pfVar24 <= fVar49) {
            lVar27 = lVar27 + -2;
            goto LAB_1803a03d8;
          }
          *plVar26 = lVar8;
          lVar8 = plVar26[-2];
          pfVar24 = (float *)&DAT_00000014;
          if (lVar8 != 0) {
            pfVar24 = (float *)(lVar8 + 0x24);
          }
          if (*pfVar24 <= fVar49) {
            lVar27 = lVar27 + -3;
            goto LAB_1803a03d8;
          }
          plVar26[-1] = lVar8;
          lVar27 = lVar27 + -4;
          plVar26 = plVar26 + -4;
        } while (3 < lVar27);
      }
      for (; 0 < lVar27; lVar27 = lVar27 + -1) {
        lVar8 = *(longlong *)(lVar39 + -8 + lVar27 * 8);
        pfVar24 = (float *)&DAT_00000014;
        if (lVar8 != 0) {
          pfVar24 = (float *)(lVar8 + 0x24);
        }
        if (*pfVar24 <= fVar49) break;
        *(longlong *)(lVar39 + lVar27 * 8) = lVar8;
      }
LAB_1803a03d8:
      lVar32 = lVar32 + 1;
      *(longlong *)(lVar39 + lVar27 * 8) = lVar7;
      uVar33 = uVar33 - 1;
    } while (uVar33 != 0);
  }
  auVar51 = ZEXT1664(auVar42);
  auVar52 = ZEXT1664(auVar43);
  fVar40 = (float)FUN_180636420();
  fVar49 = 1e-05;
  if ((1e-05 < fVar40) && (0 < (int)param_8)) {
    lVar32 = 0;
    puVar23 = param_6;
    do {
      if (lVar39 == 0) {
        puVar28 = (uint *)*puVar23;
      }
      else {
        lVar7 = *(longlong *)((longlong)puVar23 + (lVar39 - (longlong)param_6));
        puVar28 = (uint *)0x0;
        if (lVar7 != 0) {
          puVar28 = (uint *)(lVar7 + 0x10);
        }
      }
      fVar40 = auVar51._0_4_;
      if (((float)puVar28[5] == fVar40) &&
         ((*(ulonglong *)(param_1 + 0x20) & *(ulonglong *)(puVar28 + 2)) == 0)) {
        uVar22 = *puVar28;
        fVar41 = fVar40;
        if ((uVar22 & 8) != 0) {
          fVar41 = (float)puVar28[6];
        }
        puVar28[6] = (uint)(fVar41 + fVar46);
        if ((uVar22 & 0x10) != 0) {
          fVar40 = (float)puVar28[7];
        }
        puVar28[7] = (uint)(fVar40 + fVar48);
        *puVar28 = uVar22 | 0x18;
        break;
      }
      lVar32 = lVar32 + 1;
      puVar23 = puVar23 + 1;
    } while (lVar32 < (int)param_8);
  }
  param_3[0x12] = (uint)(float)local_140;
  param_3[0x13] = (uint)local_140._4_4_;
  param_3[4] = param_8;
  *param_3 = *param_3 | 0xc4;
  uVar20 = *(undefined8 *)(param_1 + 0x70);
  *local_130 = *(undefined8 *)(param_1 + 0x68);
  local_130[1] = uVar20;
  *(undefined4 *)(local_130 + 2) = *(undefined4 *)(param_1 + 0x78);
  if (*(char *)(param_1 + 0x99) == '\0') {
    *param_3 = *param_3 & 0xfffff7ff;
  }
  else {
    param_3[0x17] = *(uint *)(param_1 + 0x88);
    *param_3 = *param_3 | 0x800;
  }
  uVar34 = ~*(ulonglong *)(param_1 + 0x20) & *(ulonglong *)(local_148 + 0x60) |
           *(ulonglong *)(param_1 + 0x28) & *(ulonglong *)(param_1 + 0x20);
  *(ulonglong *)(local_148 + 0x60) = uVar34;
  uVar33 = *(ulonglong *)(param_1 + 0x30) & *(ulonglong *)(param_1 + 0x20) |
           ~*(ulonglong *)(param_1 + 0x20) & *(ulonglong *)(local_148 + 0x68);
  *(ulonglong *)(local_148 + 0x68) = uVar33;
  *(ulonglong *)(local_148 + 0x70) =
       ~*(ulonglong *)(param_1 + 0x20) & *(ulonglong *)(local_148 + 0x70) |
       *(ulonglong *)(param_1 + 0x38) & *(ulonglong *)(param_1 + 0x20);
  bVar19 = false;
  if (0 < local_150) {
    lVar39 = 0;
    do {
      puVar23 = param_6 + lVar39;
      lVar39 = lVar39 + 1;
      bVar19 = (bool)(bVar19 | (*(byte *)*puVar23 & 0x18) != 0);
    } while (lVar39 < local_150);
    uVar33 = *(ulonglong *)(local_148 + 0x68);
    param_1 = local_128;
  }
  puVar38 = (ulonglong *)(local_148 + 0x68);
  puVar31 = (ulonglong *)(local_148 + 0x60);
  puVar29 = puVar31;
  fVar46 = (float)local_140;
  fVar48 = local_140._4_4_;
  if (bVar19) {
    fVar49 = 1e-05;
    fVar40 = (float)FUN_180636420(local_140 & 0xffffffff,local_140._4_4_);
    if (fVar40 <= fVar49) {
      auVar42._0_8_ = -(ulonglong)((uVar34 & 8) == 0);
      auVar42._8_8_ = 0xffffffffffffffff;
      auVar47 = SUB6416(ZEXT464(0x3f800000),0);
      auVar50 = auVar51._0_16_;
      auVar42 = vblendvps_avx(auVar47,auVar50,auVar42);
      auVar43._0_8_ = -(ulonglong)((uVar34 & 0x10) == 0);
      auVar43._8_8_ = 0xffffffffffffffff;
      auVar43 = vblendvps_avx(auVar47,auVar50,auVar43);
      auVar44._0_8_ = -(ulonglong)((uVar34 & 0x200) == 0);
      auVar44._8_8_ = 0xffffffffffffffff;
      auVar44 = vblendvps_avx(auVar47,auVar50,auVar44);
      auVar45._0_8_ = -(ulonglong)((uVar34 & 0x400) == 0);
      auVar45._8_8_ = 0xffffffffffffffff;
      auVar45 = vblendvps_avx(auVar47,auVar50,auVar45);
      auVar42 = vunpcklps_avx(ZEXT416((uint)(auVar42._0_4_ - auVar43._0_4_)),
                              ZEXT416((uint)(auVar44._0_4_ - auVar45._0_4_)));
      uVar20 = FUN_180244af0(auVar42._0_8_,auVar52._0_8_,*(undefined4 *)(param_1 + 0x74));
      uVar33 = *puVar38;
      local_150._0_4_ = (float)uVar20;
      local_150._4_4_ = (float)((ulonglong)uVar20 >> 0x20);
      puVar38 = (ulonglong *)(local_148 + 0x68);
      puVar29 = (ulonglong *)(local_148 + 0x60);
      fVar46 = (float)local_150;
      fVar48 = local_150._4_4_;
    }
  }
  uVar21 = *puVar31 & 0xfffffffffffff9e7;
  *puVar31 = uVar21;
  puVar25 = puVar31;
  if (fVar49 < fVar46) {
    uVar21 = uVar21 | 8;
    *puVar31 = uVar21;
    puVar25 = puVar29;
  }
  puVar29 = puVar38;
  if (fVar46 < -1e-05) {
    uVar21 = uVar21 | 0x10;
    puVar29 = (ulonglong *)(local_148 + 0x68);
    *puVar31 = uVar21;
  }
  if (fVar49 < fVar48) {
    uVar21 = uVar21 | 0x200;
    *puVar25 = uVar21;
    puVar38 = puVar29;
  }
  if (fVar48 < -1e-05) {
    uVar21 = uVar21 | 0x400;
    *puVar25 = uVar21;
  }
  *puVar38 = ((uint)uVar21 ^ (uint)uVar34) & 0x618 | uVar33;
  iVar35 = *(int *)(param_1 + 0x8c);
  if (0 < iVar35) {
    pcVar30 = (char *)(param_1 + 0x11c);
    plVar26 = (longlong *)(param_5 + 0x28);
    do {
      uVar16 = *(undefined8 *)(pcVar30 + -0x7c);
      puVar23 = (undefined8 *)plVar26[-5];
      uVar20 = *(undefined8 *)(pcVar30 + -0x1c);
      uVar9 = puVar23[1];
      uVar17 = *(undefined8 *)(pcVar30 + -0x2c);
      uVar18 = *(undefined8 *)(pcVar30 + -0x24);
      if (*pcVar30 != '\0') {
        puVar6 = (undefined8 *)plVar26[-4];
        uVar10 = *(undefined8 *)(pcVar30 + -0xc);
        uVar4 = *(undefined4 *)(pcVar30 + -4);
        *puVar6 = *(undefined8 *)(pcVar30 + -0x14);
        puVar6[1] = uVar10;
        *(undefined4 *)(puVar6 + 2) = uVar4;
      }
      uVar10 = puVar23[2];
      lVar39 = (longlong)iVar36;
      if (pcVar30[0x10] != '\0') {
        puVar6 = *(undefined8 **)(param_5 + 0x10 + lVar39 * 0x50);
        uVar4 = *(undefined4 *)(pcVar30 + 0xc);
        *puVar6 = *(undefined8 *)(pcVar30 + 4);
        *(undefined4 *)(puVar6 + 1) = uVar4;
      }
      uVar11 = puVar23[3];
      if (pcVar30[0x28] != '\0') {
        puVar6 = *(undefined8 **)(param_5 + 0x18 + lVar39 * 0x50);
        uVar12 = *(undefined8 *)(pcVar30 + 0x1c);
        uVar4 = *(undefined4 *)(pcVar30 + 0x24);
        *puVar6 = *(undefined8 *)(pcVar30 + 0x14);
        puVar6[1] = uVar12;
        *(undefined4 *)(puVar6 + 2) = uVar4;
      }
      uVar12 = puVar23[4];
      if (pcVar30[0x40] != '\0') {
        puVar6 = *(undefined8 **)(param_5 + 0x20 + lVar39 * 0x50);
        uVar13 = *(undefined8 *)(pcVar30 + 0x34);
        uVar4 = *(undefined4 *)(pcVar30 + 0x3c);
        *puVar6 = *(undefined8 *)(pcVar30 + 0x2c);
        puVar6[1] = uVar13;
        *(undefined4 *)(puVar6 + 2) = uVar4;
      }
      uVar13 = puVar23[5];
      if (pcVar30[0x58] != '\0') {
        puVar6 = (undefined8 *)*plVar26;
        uVar14 = *(undefined8 *)(pcVar30 + 0x4c);
        uVar4 = *(undefined4 *)(pcVar30 + 0x54);
        *puVar6 = *(undefined8 *)(pcVar30 + 0x44);
        puVar6[1] = uVar14;
        *(undefined4 *)(puVar6 + 2) = uVar4;
      }
      uVar14 = puVar23[6];
      if (pcVar30[0x74] != '\0') {
        puVar6 = (undefined8 *)plVar26[1];
        uVar2 = *(undefined8 *)(pcVar30 + 100);
        uVar1 = *(undefined8 *)(pcVar30 + 0x6c);
        *puVar6 = *(undefined8 *)(pcVar30 + 0x5c);
        puVar6[1] = uVar2;
        puVar6[2] = uVar1;
      }
      uVar1 = puVar23[7];
      if (pcVar30[0x90] != '\0') {
        puVar6 = (undefined8 *)plVar26[2];
        uVar3 = *(undefined8 *)(pcVar30 + 0x80);
        uVar2 = *(undefined8 *)(pcVar30 + 0x88);
        *puVar6 = *(undefined8 *)(pcVar30 + 0x78);
        puVar6[1] = uVar3;
        puVar6[2] = uVar2;
      }
      uVar2 = puVar23[8];
      if (pcVar30[0xac] != '\0') {
        puVar6 = (undefined8 *)plVar26[3];
        uVar15 = *(undefined8 *)(pcVar30 + 0x9c);
        uVar3 = *(undefined8 *)(pcVar30 + 0xa4);
        *puVar6 = *(undefined8 *)(pcVar30 + 0x94);
        puVar6[1] = uVar15;
        puVar6[2] = uVar3;
      }
      uVar3 = puVar23[9];
      if (pcVar30[0xc4] != '\0') {
        puVar6 = (undefined8 *)plVar26[4];
        uVar15 = *(undefined8 *)(pcVar30 + 0xb8);
        uVar4 = *(undefined4 *)(pcVar30 + 0xc0);
        *puVar6 = *(undefined8 *)(pcVar30 + 0xb0);
        puVar6[1] = uVar15;
        *(undefined4 *)(puVar6 + 2) = uVar4;
      }
      *puVar23 = uVar16;
      puVar23[1] = uVar9;
      puVar23[2] = uVar10;
      puVar23[3] = uVar11;
      puVar23[4] = uVar12;
      puVar23[5] = uVar13;
      puVar23[6] = uVar14;
      puVar23[7] = uVar1;
      puVar23[8] = uVar2;
      puVar23[9] = uVar3;
      puVar23[10] = uVar17;
      puVar23[0xb] = uVar18;
      puVar23[0xc] = uVar20;
      iVar35 = *(int *)(param_1 + 0x8c);
      iVar36 = iVar36 + 1;
      pcVar30 = pcVar30 + 0x148;
      plVar26 = plVar26 + 10;
    } while (iVar36 < iVar35);
  }
  iVar36 = *(int *)(local_148 + 0x30);
  if (*(int *)(local_148 + 0x30) < iVar35) {
    iVar36 = iVar35;
  }
  *(int *)(local_148 + 0x30) = iVar36;
  uVar22 = 0x40;
  if (*(longlong *)(param_1 + 0x20) == 1) {
    uVar22 = 0x20;
  }
  *(uint *)(local_148 + 0x20) = *(uint *)(local_148 + 0x20) | uVar22;
  lVar39 = 0x4c;
  if (*(longlong *)(param_1 + 0x20) != 1) {
    lVar39 = 0x50;
  }
  *(undefined4 *)(lVar39 + local_148) = *(undefined4 *)(param_1 + 0x90);
}



