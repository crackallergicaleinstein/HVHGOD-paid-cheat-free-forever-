// FUN_1804ec880 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804ec880 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804ec880(uint *param_1)

{
  int *piVar1;
  byte *pbVar2;
  float *pfVar3;
  short sVar4;
  ushort uVar5;
  uint uVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined1 auVar9 [16];
  bool bVar10;
  undefined8 uVar11;
  bool bVar12;
  bool bVar13;
  byte bVar14;
  undefined1 uVar15;
  char cVar16;
  uint uVar17;
  char *pcVar18;
  char cVar19;
  short sVar20;
  int iVar21;
  int *piVar22;
  ulonglong uVar23;
  uint *puVar24;
  ulonglong uVar25;
  uint *puVar26;
  longlong lVar27;
  longlong lVar28;
  uint uVar29;
  uint uVar30;
  longlong lVar31;
  longlong lVar32;
  longlong lVar33;
  char cVar34;
  uint uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined1 auVar41 [16];
  float fVar42;
  float fVar43;
  undefined1 auVar44 [64];
  undefined1 auVar45 [64];
  undefined1 auVar46 [64];
  undefined1 auVar47 [16];
  undefined1 auVar48 [64];
  float fVar49;
  undefined1 auVar50 [64];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auStack_168 [32];
  double local_148;
  char local_138;
  char local_137;
  uint local_134;
  uint local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  longlong local_110;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  uint local_e8;
  float local_e4;
  uint local_e0;
  undefined4 local_dc;
  ulonglong local_d8;
  
  lVar33 = DAT_180bb8ae8;
  local_d8 = DAT_1808d5f00 ^ (ulonglong)auStack_168;
  lVar27 = *(longlong *)(param_1 + 4);
  uVar29 = param_1[0x1b];
  local_110 = DAT_180bb8ae8;
  puVar24 = (uint *)register0x00000020;
  local_134 = uVar29;
  if (0 < *(int *)(lVar27 + 0x20)) {
    FUN_1804ef030();
  }
  lVar28 = DAT_180bb8ae8;
  lVar32 = 0;
  if (*(longlong *)(lVar27 + 0x30) != 0) {
    if (DAT_180bb8ae8 != 0) {
      piVar1 = (int *)(DAT_180bb8ae8 + 4);
      lVar31 = (longlong)*(short *)(DAT_180bb8ae8 + 0x2994) + 0x533;
      piVar22 = (int *)(DAT_180bb8ae8 + lVar31 * 8);
      if (*(int *)(DAT_180bb8ae8 + lVar31 * 8) != *piVar1) {
        iVar21 = *(short *)(DAT_180bb8ae8 + 0x2994) + 1;
        sVar20 = (short)iVar21 + (short)(iVar21 / 6) * -6;
        *(short *)(DAT_180bb8ae8 + 0x2994) = sVar20;
        piVar22 = (int *)(lVar28 + ((longlong)sVar20 + 0x533) * 8);
        *piVar22 = *piVar1;
        piVar22[1] = 0;
      }
      *(short *)((longlong)piVar22 + 6) = *(short *)((longlong)piVar22 + 6) + 1;
      piVar1 = (int *)(lVar28 + 0x2990);
      *piVar1 = *piVar1 + 1;
    }
    thunk_FUN_180621380();
    *(undefined8 *)(lVar27 + 0x30) = 0;
    *(undefined8 *)(lVar27 + 0x40) = 0;
    *(undefined8 *)(lVar27 + 0x38) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x246) != '\0') {
    FUN_1804f25f0();
  }
  auVar50 = ZEXT464(0xbf800000);
  auVar46 = ZEXT864(0);
  if (((char)param_1[0x90] != '\0') || (*(char *)((longlong)param_1 + 0x246) != '\0')) {
    puVar24 = *(uint **)(param_1 + 8);
    puVar26 = *(uint **)(param_1 + 6);
    if (puVar26 != puVar24) {
      do {
        if (*(char *)((longlong)param_1 + 0x246) == '\0') {
          uVar29 = -(uint)((*(byte *)((longlong)puVar26 + 0x71) & 2) != 0);
        }
        else if ((*(byte *)((longlong)puVar26 + 0x71) & 4) == 0) {
          uVar29 = 0xffffffff;
        }
        else {
          uVar29 = ~param_1[0x18];
        }
        uVar17 = *puVar26;
        if ((uVar29 & 1) != 0) {
          fVar42 = (float)puVar26[8];
          fVar43 = -1.0;
          fVar49 = fVar43;
          if (((uVar17 & 0x10) != 0) && (0.0 < fVar42)) {
            fVar49 = fVar42;
          }
          puVar26[4] = (uint)fVar49;
          if ((0.0 < fVar42) && ((uVar17 & 8) != 0)) {
            fVar43 = fVar42;
          }
          puVar26[7] = (uint)fVar43;
          if (0.0 < fVar42) {
            *(byte *)((longlong)puVar26 + 0x73) = *(byte *)((longlong)puVar26 + 0x73) & 0xf0;
          }
        }
        if ((uVar29 & 2) != 0) {
          if ((param_1[1] & 2) == 0) {
            lVar27 = SUB168(SEXT816(-0x7777777777777777) *
                            SEXT816((longlong)puVar26 - *(longlong *)(param_1 + 6)),8) +
                     ((longlong)puVar26 - *(longlong *)(param_1 + 6));
            sVar20 = (short)(lVar27 >> 6) - (short)(lVar27 >> 0x3f);
          }
          else {
            sVar20 = -1;
          }
          *(short *)((longlong)puVar26 + 0x5a) = sVar20;
        }
        if ((uVar29 & 4) != 0) {
          bVar14 = ~(byte)(uVar17 >> 1) & 1;
          *(byte *)(puVar26 + 0x1b) = bVar14;
          *(byte *)((longlong)puVar26 + 0x6b) = bVar14;
        }
        if ((uVar29 & 8) != 0) {
          bVar14 = 0;
          *(ushort *)((longlong)puVar26 + 0x62) = ((uVar17 & 4) != 0) - 1;
          if ((uVar17 & 4) != 0) {
            bVar14 = ((uVar17 >> 0xf & 1) != 0) + 1;
          }
          *(byte *)(puVar26 + 0x1d) = (byte)puVar26[0x1d] & 0xfc;
          *(byte *)(puVar26 + 0x1d) = (byte)puVar26[0x1d] | bVar14;
        }
        puVar26 = puVar26 + 0x1e;
      } while (puVar26 != puVar24);
      uVar29 = local_134;
    }
    FUN_1804f2a20(param_1);
    *(undefined1 *)((longlong)param_1 + 0x246) = 0;
  }
  FUN_1804ec3a0(param_1);
  fVar42 = (float)param_1[0x3a];
  fVar49 = *(float *)(lVar33 + 0x11e0);
  if ((fVar42 != auVar46._0_4_) && (fVar42 != fVar49)) {
    fVar43 = fVar49 / fVar42;
    if ((*(uint *)(lVar33 + 0x28cc) & 0x1000) != 0) {
      local_148 = (double)fVar43;
      FUN_1804cf3e0("[table] 0x%08X RefScale %.3f -> %.3f, scaling width by %.3f\n",*param_1,
                    (double)fVar42,(double)fVar49);
    }
    iVar21 = 0;
    if ((int)uVar29 < 4) {
      if (0 < (int)uVar29) {
        lVar27 = 0;
        goto LAB_1804ecc2e;
      }
    }
    else {
      uVar17 = (uVar29 - 4 >> 2) + 1;
      uVar23 = (ulonglong)uVar17;
      iVar21 = uVar17 * 4;
      lVar27 = (ulonglong)uVar17 * 4;
      lVar28 = 0;
      do {
        *(float *)(lVar28 + 0x10 + *(longlong *)(param_1 + 6)) =
             fVar43 * *(float *)(lVar28 + 0x10 + *(longlong *)(param_1 + 6));
        *(float *)(lVar28 + 0x88 + *(longlong *)(param_1 + 6)) =
             fVar43 * *(float *)(lVar28 + 0x88 + *(longlong *)(param_1 + 6));
        *(float *)(lVar28 + 0x100 + *(longlong *)(param_1 + 6)) =
             fVar43 * *(float *)(lVar28 + 0x100 + *(longlong *)(param_1 + 6));
        *(float *)(lVar28 + 0x178 + *(longlong *)(param_1 + 6)) =
             fVar43 * *(float *)(lVar28 + 0x178 + *(longlong *)(param_1 + 6));
        uVar23 = uVar23 - 1;
        lVar28 = lVar28 + 0x1e0;
      } while (uVar23 != 0);
      if (iVar21 < (int)uVar29) {
LAB_1804ecc2e:
        uVar23 = (ulonglong)(uVar29 - iVar21);
        lVar27 = lVar27 * 0x78;
        do {
          *(float *)(lVar27 + 0x10 + *(longlong *)(param_1 + 6)) =
               fVar43 * *(float *)(lVar27 + 0x10 + *(longlong *)(param_1 + 6));
          uVar23 = uVar23 - 1;
          lVar27 = lVar27 + 0x78;
        } while (uVar23 != 0);
      }
    }
  }
  uVar17 = param_1[1];
  param_1[0x3a] = (uint)fVar49;
  local_120 = CONCAT44(local_120._4_4_,uVar17) & 0xffffffff0000e000;
  *(undefined2 *)(param_1 + 0x92) = 0x101;
  lVar27 = (longlong)((int)(uVar29 + 0x1f) >> 5) * 4;
  *(undefined2 *)((longlong)param_1 + 0x206) = 0;
  FUN_18063ab10(*(undefined8 *)(param_1 + 0x14),0,lVar27);
  FUN_18063ab10(*(undefined8 *)(param_1 + 0x12),0,lVar27);
  fVar49 = auVar50._0_4_;
  auVar48 = ZEXT464(0x3f800000);
  uVar25 = (ulonglong)puVar24 & 0xffffffffffffff00;
  *(undefined2 *)((longlong)param_1 + 0x222) = 0xffff;
  auVar47 = auVar48._0_16_;
  auVar41 = vmaxss_avx(auVar47,ZEXT416(*(uint *)(lVar33 + 0xcc4)));
  bVar13 = false;
  bVar12 = false;
  local_128 = (uint *)((ulonglong)local_128._4_4_ << 0x20);
  local_130 = (uint)uVar25;
  uVar23 = 0;
  iVar21 = 0;
  uVar30 = 0xffffffff;
  uVar35 = 0;
  param_1[0x2f] = auVar41._0_4_;
  auVar41 = auVar46._0_16_;
  auVar44 = ZEXT1664(auVar41);
  fVar42 = auVar46._0_4_;
  auVar45 = ZEXT1664(auVar41);
  uVar29 = uVar17 & 0xe000;
  uVar17 = local_134;
  if (0 < (int)local_134) {
    do {
      sVar20 = *(short *)(lVar32 + *(longlong *)(param_1 + 10));
      puVar24 = (uint *)((longlong)sVar20 * 0x78 + *(longlong *)(param_1 + 6));
      if (*(short *)((longlong)param_1 + 0x20a) <= sVar20) {
        FUN_1804ec6d0(param_1,puVar24,0);
        uVar23 = (ulonglong)local_128 & 0xffffffff;
        uVar25 = (ulonglong)local_130;
        *(undefined2 *)(puVar24 + 0x16) = 0xffff;
        puVar24[0xd] = 0;
        puVar24[0xe] = 0;
        puVar24[8] = 0xbf800000;
        uVar17 = local_134;
      }
      fVar49 = auVar50._0_4_;
      auVar47 = auVar48._0_16_;
      if (((param_1[1] & 4) == 0) || ((*puVar24 & 0x80) != 0)) {
        *(byte *)(puVar24 + 0x1b) = 1;
      }
      if (*(byte *)((longlong)puVar24 + 0x6b) != (byte)puVar24[0x1b]) {
        *(byte *)((longlong)puVar24 + 0x6b) = (byte)puVar24[0x1b];
        *(undefined1 *)((longlong)param_1 + 0x247) = 1;
      }
      if ((*(byte *)((longlong)puVar24 + 0x6b) == 0) || ((*puVar24 & 1) != 0)) {
        bVar14 = 0;
      }
      else {
        bVar14 = 1;
      }
      *(byte *)((longlong)puVar24 + 0x71) = *(byte *)((longlong)puVar24 + 0x71) & 0xfd;
      *(byte *)((longlong)puVar24 + 0x6a) = bVar14;
      if (bVar14 != (~(byte)(*puVar24 >> 1) & 1)) {
        *(undefined1 *)((longlong)param_1 + 0x249) = 0;
      }
      uVar29 = (uint)sVar20;
      if (uVar29 != uVar35) {
        *(undefined1 *)(param_1 + 0x92) = 0;
      }
      if ((*(short *)((longlong)puVar24 + 0x62) != -1) && (*(byte *)((longlong)puVar24 + 0x6a) == 0)
         ) {
        *(undefined1 *)((longlong)param_1 + 0x242) = 1;
      }
      if ((0 < *(short *)((longlong)puVar24 + 0x62)) && ((param_1[1] & 0x4000000) == 0)) {
        *(undefined1 *)((longlong)param_1 + 0x242) = 1;
      }
      fVar42 = auVar46._0_4_;
      if ((*puVar24 & 0x10) == 0) {
        fVar43 = (float)puVar24[7];
      }
      else {
        fVar43 = (float)puVar24[4];
      }
      if (fVar43 < fVar42) {
        *(byte *)((longlong)puVar24 + 0x73) = 0x77;
      }
      if (*(byte *)((longlong)puVar24 + 0x6a) == 0) {
        *(undefined2 *)(puVar24 + 0x17) = 0xffff;
      }
      else {
        *(short *)((longlong)puVar24 + 0x5e) = (short)uVar30;
        *(undefined2 *)(puVar24 + 0x18) = 0xffff;
        if (uVar30 == 0xffffffff) {
          *(short *)((longlong)param_1 + 0x222) = sVar20;
        }
        else {
          *(short *)((longlong)(int)uVar30 * 0x78 + 0x60 + *(longlong *)(param_1 + 6)) = sVar20;
        }
        sVar4 = *(short *)((longlong)param_1 + 0x206);
        lVar27 = (longlong)sVar20 >> 5;
        *(short *)((longlong)param_1 + 0x206) = sVar4 + 1;
        *(short *)(puVar24 + 0x17) = sVar4;
        *(uint *)(*(longlong *)(param_1 + 0x14) + lVar27 * 4) =
             *(uint *)(*(longlong *)(param_1 + 0x14) + lVar27 * 4) | 1 << (uVar29 & 0x1f);
        lVar27 = (longlong)*(short *)((longlong)puVar24 + 0x5a) >> 5;
        *(uint *)(*(longlong *)(param_1 + 0x12) + lVar27 * 4) =
             *(uint *)(*(longlong *)(param_1 + 0x12) + lVar27 * 4) |
             1 << ((int)*(short *)((longlong)puVar24 + 0x5a) & 0x1fU);
        if (((*(byte *)((longlong)puVar24 + 0x71) & 1) == 0) && ((short)param_1[0x1e] == 0)) {
          auVar41 = vmaxss_avx(ZEXT416(puVar24[0x12]),ZEXT416(puVar24[0x13]));
          uVar30 = *puVar24;
          fVar43 = auVar41._0_4_ - (float)puVar24[0xf];
          auVar41 = ZEXT416((uint)fVar43);
          if ((uVar30 >> 0xd & 1) == 0) {
            auVar41 = vmaxss_avx(ZEXT416((uint)fVar43),
                                 ZEXT416((uint)((float)puVar24[0x15] - (float)puVar24[0xf])));
          }
          if ((((uVar30 & 0x10) != 0) && (fVar42 < (float)puVar24[8])) &&
             (((param_1[1] & 1) == 0 || ((uVar30 & 0x20) != 0)))) {
            auVar41 = ZEXT416(puVar24[8]);
          }
          auVar41 = vmaxss_avx(auVar41,ZEXT416(param_1[0x2f]));
          puVar24[5] = auVar41._0_4_;
        }
        uVar6 = *puVar24;
        uVar25 = uVar25 & 0xff;
        if ((uVar6 & 0x20) == 0) {
          uVar25 = 1;
        }
        local_130 = (uint)uVar25;
        if ((((uVar6 & 0x10) != 0) && (fVar42 < (float)puVar24[8])) && ((uVar6 & 0x20) != 0)) {
          puVar24[5] = puVar24[8];
        }
        bVar12 = bVar13;
        if ((*(byte *)((longlong)puVar24 + 0x73) & 0xf) != 0) {
          bVar12 = true;
        }
        uVar30 = uVar29;
        bVar13 = bVar12;
        if ((uVar6 & 8) == 0) {
          uVar29 = (int)uVar23 + 1;
          uVar23 = (ulonglong)uVar29;
          local_128 = (uint *)CONCAT44(local_128._4_4_,uVar29);
          auVar41 = vmaxss_avx(auVar45._0_16_,ZEXT416(puVar24[5]));
          auVar45 = ZEXT1664(auVar41);
        }
        else {
          auVar44 = ZEXT464((uint)(auVar44._0_4_ + (float)puVar24[5]));
          iVar21 = iVar21 + 1;
        }
      }
      auVar41 = auVar45._0_16_;
      fVar42 = auVar44._0_4_;
      uVar35 = uVar35 + 1;
      lVar32 = lVar32 + 2;
    } while ((int)uVar35 < (int)uVar17);
    uVar29 = (uint)local_120;
  }
  lVar27 = local_110;
  uVar17 = local_134;
  lVar33 = 0;
  if ((((param_1[1] & 8) != 0) && ((short)param_1[0x81] == 0)) && ((param_1[1] >> 0x1b & 1) == 0)) {
    *(undefined1 *)((longlong)param_1 + 0x242) = 1;
  }
  *(short *)(param_1 + 0x89) = (short)uVar30;
  if (bVar12) {
    if (*(longlong *)(param_1 + 0x62) != *(longlong *)(param_1 + 100)) {
      *(undefined1 *)(*(longlong *)(param_1 + 100) + 0xd1) = 0;
    }
    *(undefined1 *)((longlong)param_1 + 0x247) = 1;
  }
  uVar30 = 0;
  *(undefined4 *)((longlong)param_1 + 0x226) = 0xffffffff;
  auVar50 = ZEXT1664(auVar46._0_16_);
  fVar37 = auVar46._0_4_;
  auVar44 = ZEXT1664(auVar46._0_16_);
  fVar38 = auVar47._0_4_;
  fVar36 = fVar37;
  fVar43 = fVar37;
  if (0 < (int)local_134) {
    lVar32 = 0;
    lVar28 = 0;
    do {
      fVar43 = auVar50._0_4_;
      if ((*(uint *)(*(longlong *)(param_1 + 0x14) + (lVar32 >> 5) * 4) >> (uVar30 & 0x1f) & 1) != 0
         ) {
        lVar31 = *(longlong *)(param_1 + 6);
        uVar35 = *(uint *)(lVar31 + lVar28) & 0x20;
        if ((*(uint *)(lVar31 + lVar28) & 0x10) == 0) {
          if ((((*(byte *)(lVar31 + 0x73 + lVar28) & 0xf) != 0) ||
              (fVar36 = *(float *)(lVar31 + 0x1c + lVar28), fVar36 < fVar37)) || (uVar35 != 0)) {
            fVar36 = *(float *)(lVar31 + 0x20 + lVar28);
            if (fVar36 <= fVar37) {
              if (uVar29 == 0x6000) {
                fVar36 = (*(float *)(lVar31 + 0x14 + lVar28) / fVar42) * (float)iVar21;
                *(float *)(lVar31 + 0x1c + lVar28) = fVar36;
              }
              else {
                *(undefined4 *)(lVar31 + 0x1c + lVar28) = 0x3f800000;
                fVar36 = fVar38;
              }
            }
            else {
              *(float *)(lVar31 + 0x1c + lVar28) = fVar36;
            }
          }
          auVar44 = ZEXT464((uint)(auVar44._0_4_ + fVar36));
          if ((*(short *)((longlong)param_1 + 0x226) == -1) ||
             (*(short *)(lVar31 + 0x5a + lVar28) <
              *(short *)((longlong)*(short *)((longlong)param_1 + 0x226) * 0x78 + 0x5a +
                        *(longlong *)(param_1 + 6)))) {
            *(short *)((longlong)param_1 + 0x226) = (short)uVar30;
          }
          if (((short)param_1[0x8a] == -1) ||
             (*(short *)((longlong)(short)param_1[0x8a] * 0x78 + 0x5a + *(longlong *)(param_1 + 6))
              < *(short *)(lVar31 + 0x5a + lVar28))) {
            *(short *)(param_1 + 0x8a) = (short)uVar30;
          }
        }
        else {
          auVar51 = ZEXT416(*(uint *)(lVar31 + 0x14 + lVar28));
          if ((uVar29 == 0x4000) &&
             (((*(byte *)(lVar31 + 0x73 + lVar28) & 0xf) != 0 || (uVar35 != 0)))) {
            auVar51 = auVar41;
          }
          bVar14 = *(byte *)(lVar31 + 0x73 + lVar28) & 0xf;
          if (bVar14 == 0) {
            if ((uVar35 != 0) && (*(char *)(lVar31 + 0x6f + lVar28) != '\0')) {
              *(int *)(lVar31 + 0x10 + lVar28) = auVar51._0_4_;
            }
          }
          else {
            *(int *)(lVar31 + 0x10 + lVar28) = auVar51._0_4_;
            if (((1 < bVar14) && ((char)param_1[0x90] != '\0')) &&
               ((*(byte *)(lVar31 + 0x71 + lVar28) & 1) == 0)) {
              auVar51 = vmaxss_avx(auVar51,ZEXT416((uint)((float)param_1[0x2f] * 4.0)));
              *(float *)(lVar31 + 0x10 + lVar28) = auVar51._0_4_;
              fVar43 = fVar43 + auVar51._0_4_;
              goto LAB_1804ed144;
            }
          }
          fVar43 = fVar43 + *(float *)(lVar31 + 0x10 + lVar28);
        }
LAB_1804ed144:
        pbVar2 = (byte *)(lVar31 + 0x71 + lVar28);
        *pbVar2 = *pbVar2 & 0xfe;
        auVar50 = ZEXT464((uint)(fVar43 + (float)param_1[0x31] + (float)param_1[0x31]));
      }
      fVar43 = auVar50._0_4_;
      fVar36 = auVar44._0_4_;
      uVar30 = uVar30 + 1;
      lVar32 = lVar32 + 1;
      lVar28 = lVar28 + 0x78;
    } while ((int)uVar30 < (int)local_134);
  }
  local_108 = *(undefined1 (*) [16])(param_1 + 0x45);
  auVar50 = ZEXT1664(local_108);
  *(short *)(param_1 + 0x82) = (short)local_128;
  fVar42 = ((float)param_1[0x33] + (float)param_1[0x32]) *
           (float)(*(short *)((longlong)param_1 + 0x206) + -1) +
           (float)param_1[0x30] + (float)param_1[0x30];
  param_1[0x37] = (uint)fVar36;
  if ((*(char *)((longlong)param_1 + 0x252) == '\0') ||
     (*(char *)(*(longlong *)(param_1 + 100) + 0xc9) != '\0')) {
    fVar40 = fVar37;
  }
  else {
    fVar40 = *(float *)(local_110 + 0xcfc);
  }
  if (((param_1[1] & 0x1000000) == 0) || ((float)param_1[0x34] != fVar37)) {
    auVar41 = vshufps_avx(local_108,local_108,0xaa);
    fVar39 = auVar41._0_4_ - local_108._0_4_;
  }
  else {
    fVar39 = (float)param_1[0x4b] - (float)param_1[0x49];
  }
  iVar21 = 0;
  auVar41 = vmaxss_avx(auVar47,ZEXT416((uint)(fVar39 - fVar40)));
  fVar43 = (auVar41._0_4_ - fVar42) - fVar43;
  param_1[0x35] =
       (uint)(((float)param_1[0x31] + (float)param_1[0x31]) *
              (float)(int)*(short *)((longlong)param_1 + 0x206) + fVar42);
  fVar42 = fVar43;
  if ((int)local_134 < 4) {
    if (0 < (int)local_134) {
      lVar28 = 0;
      uVar29 = 1;
      goto LAB_1804ed5bb;
    }
  }
  else {
    uVar29 = 1;
    lVar32 = 0;
    uVar30 = (local_134 - 4 >> 2) + 1;
    lVar31 = 2;
    uVar23 = (ulonglong)uVar30;
    iVar21 = uVar30 * 4;
    lVar28 = (ulonglong)uVar30 * 4;
    do {
      if ((*(uint *)(*(longlong *)(param_1 + 0x14) + (lVar31 + -2 >> 5) * 4) & uVar29) != 0) {
        lVar8 = *(longlong *)(param_1 + 6);
        uVar30 = *(uint *)(lVar8 + lVar32);
        if ((uVar30 & 8) != 0) {
          auVar41 = vmaxss_avx(ZEXT416((uint)((*(float *)(lVar8 + 0x1c + lVar32) / fVar36) * fVar43)
                                      ),ZEXT416(param_1[0x2f]));
          fVar40 = (float)(int)(auVar41._0_4_ + 0.01);
          *(float *)(lVar8 + lVar32 + 0x10) = fVar40;
          fVar42 = fVar42 - fVar40;
        }
        if ((*(short *)(lVar8 + 0x60 + lVar32) == -1) &&
           (*(short *)((longlong)param_1 + 0x226) != -1)) {
          *(uint *)(lVar8 + lVar32) = uVar30 | 0x40000000;
        }
        auVar41 = vmaxss_avx(ZEXT416(*(uint *)(lVar8 + lVar32 + 0x10)),ZEXT416(param_1[0x2f]));
        *(float *)(lVar8 + 4 + lVar32) = (float)(int)auVar41._0_4_;
        param_1[0x35] = (uint)((float)(int)auVar41._0_4_ + (float)param_1[0x35]);
      }
      if ((*(uint *)(*(longlong *)(param_1 + 0x14) + (lVar31 + -1 >> 5) * 4) & uVar29 << 1) != 0) {
        lVar8 = *(longlong *)(param_1 + 6);
        uVar30 = *(uint *)(lVar8 + 0x78 + lVar32);
        if ((uVar30 & 8) != 0) {
          auVar41 = vmaxss_avx(ZEXT416((uint)((*(float *)(lVar8 + 0x94 + lVar32) / fVar36) * fVar43)
                                      ),ZEXT416(param_1[0x2f]));
          fVar40 = (float)(int)(auVar41._0_4_ + 0.01);
          *(float *)(lVar8 + lVar32 + 0x88) = fVar40;
          fVar42 = fVar42 - fVar40;
        }
        if ((*(short *)(lVar8 + 0xd8 + lVar32) == -1) &&
           (*(short *)((longlong)param_1 + 0x226) != -1)) {
          *(uint *)(lVar8 + 0x78 + lVar32) = uVar30 | 0x40000000;
        }
        auVar41 = vmaxss_avx(ZEXT416(*(uint *)(lVar8 + lVar32 + 0x88)),ZEXT416(param_1[0x2f]));
        *(float *)(lVar8 + 0x7c + lVar32) = (float)(int)auVar41._0_4_;
        param_1[0x35] = (uint)((float)(int)auVar41._0_4_ + (float)param_1[0x35]);
      }
      if ((*(uint *)(*(longlong *)(param_1 + 0x14) + (lVar31 >> 5) * 4) & uVar29 << 2) != 0) {
        lVar8 = *(longlong *)(param_1 + 6);
        uVar30 = *(uint *)(lVar8 + 0xf0 + lVar32);
        if ((uVar30 & 8) != 0) {
          auVar41 = vmaxss_avx(ZEXT416((uint)((*(float *)(lVar8 + 0x10c + lVar32) / fVar36) * fVar43
                                             )),ZEXT416(param_1[0x2f]));
          fVar40 = (float)(int)(auVar41._0_4_ + 0.01);
          *(float *)(lVar8 + lVar32 + 0x100) = fVar40;
          fVar42 = fVar42 - fVar40;
        }
        if ((*(short *)(lVar8 + 0x150 + lVar32) == -1) &&
           (*(short *)((longlong)param_1 + 0x226) != -1)) {
          *(uint *)(lVar8 + 0xf0 + lVar32) = uVar30 | 0x40000000;
        }
        auVar41 = vmaxss_avx(ZEXT416(*(uint *)(lVar8 + lVar32 + 0x100)),ZEXT416(param_1[0x2f]));
        *(float *)(lVar8 + 0xf4 + lVar32) = (float)(int)auVar41._0_4_;
        param_1[0x35] = (uint)((float)(int)auVar41._0_4_ + (float)param_1[0x35]);
      }
      if ((*(uint *)(*(longlong *)(param_1 + 0x14) + (lVar31 + 1 >> 5) * 4) & uVar29 << 3) != 0) {
        lVar8 = *(longlong *)(param_1 + 6);
        uVar30 = *(uint *)(lVar8 + 0x168 + lVar32);
        if ((uVar30 & 8) != 0) {
          auVar41 = vmaxss_avx(ZEXT416((uint)((*(float *)(lVar8 + 0x184 + lVar32) / fVar36) * fVar43
                                             )),ZEXT416(param_1[0x2f]));
          fVar40 = (float)(int)(auVar41._0_4_ + 0.01);
          *(float *)(lVar8 + lVar32 + 0x178) = fVar40;
          fVar42 = fVar42 - fVar40;
        }
        if ((*(short *)(lVar8 + 0x1c8 + lVar32) == -1) &&
           (*(short *)((longlong)param_1 + 0x226) != -1)) {
          *(uint *)(lVar8 + 0x168 + lVar32) = uVar30 | 0x40000000;
        }
        auVar41 = vmaxss_avx(ZEXT416(*(uint *)(lVar8 + lVar32 + 0x178)),ZEXT416(param_1[0x2f]));
        *(float *)(lVar8 + 0x16c + lVar32) = (float)(int)auVar41._0_4_;
        param_1[0x35] = (uint)((float)(int)auVar41._0_4_ + (float)param_1[0x35]);
      }
      uVar29 = uVar29 << 4 | uVar29 >> 0x1c;
      lVar32 = lVar32 + 0x1e0;
      lVar31 = lVar31 + 4;
      uVar23 = uVar23 - 1;
    } while (uVar23 != 0);
    if (iVar21 < (int)local_134) {
LAB_1804ed5bb:
      lVar28 = lVar28 * 0x78;
      lVar32 = (longlong)iVar21;
      uVar23 = (ulonglong)(local_134 - iVar21);
      do {
        if ((*(uint *)(*(longlong *)(param_1 + 0x14) + (lVar32 >> 5) * 4) & uVar29) != 0) {
          lVar31 = *(longlong *)(param_1 + 6);
          uVar30 = *(uint *)(lVar31 + lVar28);
          if ((uVar30 & 8) != 0) {
            auVar41 = vmaxss_avx(ZEXT416((uint)((*(float *)(lVar31 + 0x1c + lVar28) / fVar36) *
                                               fVar43)),ZEXT416(param_1[0x2f]));
            fVar40 = (float)(int)(auVar41._0_4_ + 0.01);
            *(float *)(lVar31 + lVar28 + 0x10) = fVar40;
            fVar42 = fVar42 - fVar40;
          }
          if ((*(short *)(lVar31 + 0x60 + lVar28) == -1) &&
             (*(short *)((longlong)param_1 + 0x226) != -1)) {
            *(uint *)(lVar31 + lVar28) = uVar30 | 0x40000000;
          }
          auVar41 = vmaxss_avx(ZEXT416(*(uint *)(lVar31 + lVar28 + 0x10)),ZEXT416(param_1[0x2f]));
          *(float *)(lVar31 + 4 + lVar28) = (float)(int)auVar41._0_4_;
          param_1[0x35] = (uint)((float)(int)auVar41._0_4_ + (float)param_1[0x35]);
        }
        uVar29 = uVar29 << 1 | (uint)((int)uVar29 < 0);
        lVar28 = lVar28 + 0x78;
        lVar32 = lVar32 + 1;
        uVar23 = uVar23 - 1;
      } while (uVar23 != 0);
    }
  }
  uVar29 = 1;
  if (((fVar38 <= fVar42) && ((param_1[1] & 0x80000) == 0)) &&
     (iVar21 = local_134 - 1, fVar37 < fVar36)) {
    bVar14 = (byte)iVar21 & 0x1f;
    uVar30 = 1 << bVar14 | 1U >> 0x20 - bVar14;
    lVar28 = (longlong)iVar21 * 2;
    for (; (fVar38 <= fVar42 && (-1 < iVar21)); iVar21 = iVar21 + -1) {
      if ((*(uint *)(*(longlong *)(param_1 + 0x12) + ((longlong)iVar21 >> 5) * 4) & uVar30) != 0) {
        lVar31 = (longlong)*(short *)(*(longlong *)(param_1 + 10) + lVar28) * 0x78;
        lVar32 = *(longlong *)(param_1 + 6);
        if ((*(byte *)(lVar31 + lVar32) & 8) != 0) {
          *(float *)(lVar31 + 0x10 + lVar32) = fVar38 + *(float *)(lVar31 + 0x10 + lVar32);
          *(float *)(lVar31 + 4 + lVar32) = fVar38 + *(float *)(lVar31 + 4 + lVar32);
          fVar42 = fVar42 + fVar49;
        }
      }
      uVar30 = uVar30 >> 1 | (uint)((uVar30 & 1) != 0) << 0x1f;
      lVar28 = lVar28 + -2;
    }
  }
  if ((short)param_1[0x1e] == 0) {
    puVar24 = param_1 + 0x6c;
  }
  else {
    puVar24 = (uint *)(*(longlong *)(param_1 + 0x74) + (longlong)((short)param_1[0x1e] + -1) * 0x18)
    ;
  }
  puVar24[4] = puVar24[5];
  puVar24[5] = 0xffffffff;
  local_e4 = (float)param_1[0x3e];
  local_e8 = param_1[0x3d];
  local_e0 = param_1[0x3f];
  *(undefined4 *)((longlong)param_1 + 0x20e) = 0xffffffff;
  uVar7 = *(undefined4 *)(local_110 + 0x1550);
  auVar41 = vmaxss_avx(ZEXT416(param_1[0x40]),ZEXT416((uint)(local_e4 + (float)puVar24[1])));
  local_dc = auVar41._0_4_;
  *(undefined4 *)(local_110 + 0x1550) = 0;
  local_128 = puVar24;
  local_f8 = local_108;
  local_138 = FUN_1804b7e00(&local_e8,0,0);
  fVar42 = *(float *)(lVar27 + 0x110);
  *(undefined4 *)(lVar27 + 0x1550) = uVar7;
  if (auVar46._0_4_ < (float)param_1[0x3b]) {
    fVar49 = *(float *)(lVar27 + 0x114);
    if (((float)param_1[0x3e] <= fVar49) &&
       (fVar43 = (float)param_1[0x3b] + (float)param_1[0x3e], fVar49 <= fVar43)) {
      fVar42 = fVar42 + (float)(int)((fVar43 - fVar49) * (float)param_1[0x3c]);
    }
  }
  bVar13 = false;
  bVar12 = false;
  local_137 = 0 < *(short *)((longlong)param_1 + 0x232);
  if (*(short *)((longlong)param_1 + 0x232) < 1) {
    fVar49 = auVar50._0_4_;
  }
  else {
    fVar49 = (float)param_1[0x3d];
  }
  local_120 = *(ulonglong *)(param_1 + 0x49);
  uStack_118 = *(undefined8 *)(param_1 + 0x4b);
  auVar46 = ZEXT464((uint)((fVar49 + (float)param_1[0x30]) - (float)param_1[0x32]));
  FUN_18063ab10(*(undefined8 *)(param_1 + 0x16),0,(longlong)((int)(uVar17 + 0x1f) >> 5) << 2);
  lVar27 = local_110;
  iVar21 = 0;
  auVar50 = ZEXT464(0x7f7fffff);
  if ((int)uVar17 < 1) {
LAB_1804eddb4:
    *(undefined1 *)
     ((longlong)*(short *)((longlong)param_1 + 0x222) * 0x78 + 0x6f + *(longlong *)(param_1 + 6)) =
         1;
    *(undefined1 *)
     ((longlong)*(short *)((longlong)param_1 + 0x222) * 0x78 + 0x70 + *(longlong *)(param_1 + 6)) =
         0;
  }
  else {
    auVar44 = ZEXT464((uint)local_120);
    lVar28 = 0;
    cVar34 = local_137;
    do {
      lVar32 = *(longlong *)(param_1 + 6);
      uVar5 = *(ushort *)(lVar33 + *(longlong *)(param_1 + 10));
      uVar15 = 1;
      lVar31 = (longlong)(short)uVar5 * 0x78;
      if (*(short *)((longlong)param_1 + 0x22e) < 1) {
        uVar15 = (undefined1)param_1[0x8f];
      }
      *(undefined1 *)(lVar31 + 0x72 + lVar32) = uVar15;
      if ((cVar34 != '\0') && (*(short *)((longlong)param_1 + 0x232) == iVar21)) {
        auVar46 = ZEXT464((uint)(auVar46._0_4_ + ((float)local_f8._0_4_ - (float)param_1[0x3d])));
        cVar34 = '\0';
      }
      *(uint *)(lVar31 + lVar32) = *(uint *)(lVar31 + lVar32) & 0xf0ffffff;
      uVar17 = *(uint *)(*(longlong *)(param_1 + 0x12) + (lVar28 >> 5) * 4);
      fVar43 = auVar46._0_4_;
      *(float *)(lVar31 + 8 + lVar32) = fVar43;
      auVar41 = auVar46._0_16_;
      fVar49 = auVar44._0_4_;
      auVar47 = ZEXT416((uint)uStack_118);
      auVar51 = ZEXT416(uStack_118._4_4_);
      if ((uVar29 & uVar17) == 0) {
        *(float *)(lVar31 + 0x2c + lVar32) = fVar43;
        *(float *)(lVar31 + 0x3c + lVar32) = fVar43;
        *(float *)(lVar31 + 0xc + lVar32) = fVar43;
        *(undefined4 *)(lVar31 + 4 + lVar32) = 0;
        *(undefined4 *)(lVar31 + 0x30 + lVar32) = 0x7f7fffff;
        fVar36 = local_120._4_4_;
        if (local_120._4_4_ <= (float)local_108._4_4_) {
          auVar52 = vminss_avx(auVar51,ZEXT416((uint)local_108._4_4_));
          fVar36 = auVar52._0_4_;
        }
        fVar37 = fVar49;
        if (fVar49 <= fVar43) {
          auVar52 = vminss_avx(auVar47,auVar41);
          fVar37 = auVar52._0_4_;
        }
        *(float *)(lVar31 + 0x24 + lVar32) = fVar37;
        *(float *)(lVar31 + 0x28 + lVar32) = fVar36;
        fVar36 = *(float *)(lVar31 + 0x30 + lVar32);
        fVar37 = local_120._4_4_;
        if (local_120._4_4_ <= fVar36) {
          auVar51 = vminss_avx(auVar51,ZEXT416((uint)fVar36));
          fVar37 = auVar51._0_4_;
        }
        if (fVar49 <= fVar43) {
          auVar41 = vminss_avx(auVar47,auVar41);
          fVar49 = auVar41._0_4_;
        }
        *(float *)(lVar31 + 0x2c + lVar32) = fVar49;
        *(float *)(lVar31 + 0x30 + lVar32) = fVar37;
        *(undefined2 *)(lVar31 + 0x6e + lVar32) = 0;
        *(undefined1 *)(lVar31 + 0x6d + lVar32) = 0;
        *(undefined1 *)(lVar31 + 0x70 + lVar32) = 1;
        *(undefined4 *)(lVar31 + 0x44 + lVar32) = 0x3f800000;
      }
      else {
        fVar36 = (float)param_1[0x31];
        fVar37 = (float)param_1[0x33];
        lVar8 = *(longlong *)(param_1 + 6);
        fVar38 = fVar36 + fVar36 + (float)param_1[0x2f] + (float)param_1[0x32] + fVar37;
        auVar52 = auVar50._0_16_;
        if ((param_1[1] >> 0x18 & 1) == 0) {
          if ((param_1[1] >> 0x12 & 1) == 0) {
            auVar52 = ZEXT416((uint)((((((float)param_1[0x47] -
                                        (float)(((int)*(short *)((longlong)param_1 + 0x206) -
                                                (int)*(short *)(lVar31 + 0x5c + lVar8)) + -1) *
                                        fVar38) - *(float *)(lVar31 + 8 + lVar8)) - fVar37) -
                                     (fVar36 + fVar36)) - (float)param_1[0x30]));
          }
        }
        else {
          sVar20 = *(short *)(lVar31 + 0x5a + lVar8);
          if (sVar20 < (short)param_1[0x8c]) {
            auVar52 = ZEXT416((uint)((((((float)param_1[0x4b] -
                                        (float)((int)(short)param_1[0x8c] - (int)sVar20) * fVar38) -
                                       *(float *)(lVar31 + 8 + lVar8)) - (float)param_1[0x30]) -
                                     fVar36) - fVar37));
          }
        }
        *(int *)(lVar31 + 0x18 + lVar32) = auVar52._0_4_;
        auVar52 = vminss_avx(ZEXT416(*(uint *)(lVar31 + 4 + lVar32)),auVar52);
        *(int *)(lVar31 + 4 + lVar32) = auVar52._0_4_;
        auVar9 = vminss_avx(ZEXT416(*(uint *)(lVar31 + 0x10 + lVar32)),ZEXT416(param_1[0x2f]));
        auVar52 = vmaxss_avx(auVar52,auVar9);
        fVar38 = auVar52._0_4_;
        *(float *)(lVar31 + 4 + lVar32) = fVar38;
        fVar37 = fVar38 + fVar43 + (float)param_1[0x32] + (float)param_1[0x33] +
                 (float)param_1[0x31] + (float)param_1[0x31];
        fVar36 = *(float *)(lVar31 + 0x3c + lVar32);
        *(float *)(lVar31 + 0xc + lVar32) = fVar37;
        *(float *)(lVar31 + 0x3c + lVar32) = fVar43 + (float)param_1[0x31] + (float)param_1[0x32];
        *(float *)(lVar31 + 0x40 + lVar32) = (fVar37 - (float)param_1[0x31]) - (float)param_1[0x33];
        *(float *)(lVar31 + 0x44 + lVar32) = (float)(int)(fVar38 * 0.65);
        *(float *)(lVar31 + 0x2c + lVar32) = fVar37;
        *(undefined4 *)(lVar31 + 0x30 + lVar32) = 0x7f7fffff;
        fVar38 = local_120._4_4_;
        if (local_120._4_4_ <= (float)local_108._4_4_) {
          auVar52 = vminss_avx(auVar51,ZEXT416((uint)local_108._4_4_));
          fVar38 = auVar52._0_4_;
        }
        fVar40 = fVar49;
        if (fVar49 <= fVar43) {
          auVar41 = vminss_avx(auVar47,auVar41);
          fVar40 = auVar41._0_4_;
        }
        *(float *)(lVar31 + 0x24 + lVar32) = fVar40;
        *(float *)(lVar31 + 0x28 + lVar32) = fVar38;
        fVar38 = *(float *)(lVar31 + 0x30 + lVar32);
        fVar40 = local_120._4_4_;
        if (local_120._4_4_ <= fVar38) {
          auVar41 = vminss_avx(auVar51,ZEXT416((uint)fVar38));
          fVar40 = auVar41._0_4_;
        }
        fVar38 = fVar49;
        if (fVar49 <= fVar37) {
          auVar41 = vminss_avx(auVar47,ZEXT416((uint)fVar37));
          fVar38 = auVar41._0_4_;
        }
        *(float *)(lVar31 + 0x2c + lVar32) = fVar38;
        *(float *)(lVar31 + 0x30 + lVar32) = fVar40;
        *(undefined1 *)(lVar31 + 0x6e + lVar32) = 1;
        bVar10 = *(float *)(lVar31 + 0x24 + lVar32) < *(float *)(lVar31 + 0x2c + lVar32);
        *(bool *)(lVar31 + 0x6d + lVar32) = bVar10;
        if (bVar10) {
          *(uint *)(*(longlong *)(param_1 + 0x16) + ((longlong)(short)uVar5 >> 5) * 4) =
               *(uint *)(*(longlong *)(param_1 + 0x16) + ((longlong)(short)uVar5 >> 5) * 4) |
               1 << (uVar5 & 0x1f);
LAB_1804edc39:
          cVar19 = '\x01';
        }
        else {
          bVar14 = *(byte *)(lVar31 + 0x73 + lVar32);
          if (((bVar14 & 0xf) != 0) || ((bVar14 & 0xf0) != 0)) goto LAB_1804edc39;
          cVar19 = '\0';
        }
        *(char *)(lVar31 + 0x6f + lVar32) = cVar19;
        if ((*(char *)(lVar31 + 0x6a + lVar32) == '\0') || ((char)param_1[0x95] != '\0')) {
          cVar16 = '\x01';
        }
        else {
          cVar16 = '\0';
        }
        *(char *)(lVar31 + 0x70 + lVar32) = cVar16;
        if (cVar19 != '\0') {
          bVar12 = bVar13;
          if (cVar16 == '\0') {
            bVar12 = true;
            bVar13 = true;
          }
        }
        uVar17 = *(uint *)(lVar31 + lVar32);
        uVar30 = uVar17 | 0x1000000;
        *(uint *)(lVar31 + lVar32) = uVar30;
        if (bVar10) {
          uVar30 = uVar17 | 0x3000000;
          *(uint *)(lVar31 + lVar32) = uVar30;
        }
        if (*(short *)(lVar31 + 0x62 + lVar32) != -1) {
          uVar30 = uVar30 | 0x4000000;
          *(uint *)(lVar31 + lVar32) = uVar30;
        }
        if (((local_138 != '\0') && (*(float *)(lVar31 + 0x24 + lVar32) <= fVar42)) &&
           (fVar42 < *(float *)(lVar31 + 0x2c + lVar32))) {
          *(uint *)(lVar31 + lVar32) = uVar30 | 0x8000000;
          *(ushort *)((longlong)param_1 + 0x20e) = uVar5;
        }
        fVar37 = *(float *)(lVar31 + 0x3c + lVar32);
        fVar38 = fVar37;
        fVar40 = fVar37;
        fVar39 = fVar37;
        if ((short)param_1[0x1e] != 0) {
          auVar41 = ZEXT416((uint)(fVar37 - fVar36));
          auVar41 = vshufps_avx(auVar41,auVar41,0);
          pfVar3 = (float *)(lVar31 + 0x48 + lVar32);
          fVar37 = auVar41._0_4_ + *pfVar3;
          fVar38 = auVar41._4_4_ + pfVar3[1];
          fVar40 = auVar41._8_4_ + pfVar3[2];
          fVar39 = auVar41._12_4_ + pfVar3[3];
        }
        pfVar3 = (float *)(lVar31 + 0x48 + lVar32);
        *pfVar3 = fVar37;
        pfVar3[1] = fVar38;
        pfVar3[2] = fVar40;
        pfVar3[3] = fVar39;
        if (((char)param_1[0x95] == '\0') && ((short)param_1[0x1e] == 0)) {
          *(byte *)(lVar31 + 0x73 + lVar32) =
               *(byte *)(lVar31 + 0x73 + lVar32) >> 1 & 0x70 |
               *(byte *)(lVar31 + 0x73 + lVar32) >> 1 & 7;
        }
        if ((iVar21 < *(short *)((longlong)param_1 + 0x232)) &&
           (fVar36 = (float)param_1[0x2d] + *(float *)(lVar31 + 0xc + lVar32), fVar49 <= fVar36)) {
          auVar41 = vminss_avx(auVar47,ZEXT416((uint)fVar36));
          auVar44 = ZEXT1664(auVar41);
        }
        auVar46 = ZEXT464((uint)(fVar43 + *(float *)(lVar31 + 4 + lVar32) + (float)param_1[0x32] +
                                          (float)param_1[0x33] +
                                          (float)param_1[0x31] + (float)param_1[0x31]));
      }
      iVar21 = iVar21 + 1;
      lVar28 = lVar28 + 1;
      uVar29 = uVar29 << 1 | (uint)((int)uVar29 < 0);
      lVar33 = lVar33 + 2;
    } while (iVar21 < (int)local_134);
    puVar24 = local_128;
    if (!bVar12) goto LAB_1804eddb4;
  }
  auVar41 = vmaxss_avx(ZEXT416(param_1[0x45]),
                       ZEXT416(*(uint *)((longlong)(short)param_1[0x89] * 0x78 + 0x2c +
                                        *(longlong *)(param_1 + 6))));
  if (((local_138 != '\0') && (*(short *)((longlong)param_1 + 0x20e) == -1)) &&
     (auVar41._0_4_ <= fVar42)) {
    *(short *)((longlong)param_1 + 0x20e) = (short)local_134;
  }
  if (((char)local_130 == '\0') && ((param_1[1] & 1) != 0)) {
    param_1[1] = param_1[1] & 0xfffffffe;
  }
  *(bool *)((longlong)param_1 + 0x24f) = *(int *)(local_110 + 0x1554) != 0;
  if ((short)param_1[0x8a] != -1) {
    param_1[1] = param_1[1] & 0xfffeffff;
  }
  auVar47 = ZEXT816(0);
  if ((param_1[1] >> 0x10 & 1) != 0) {
    if ((param_1[1] >> 10 & 1) == 0) {
      fVar42 = 0.0;
    }
    else {
      fVar42 = (float)param_1[0x2d];
    }
    auVar41 = vminss_avx(ZEXT416(param_1[0x3f]),ZEXT416((uint)(fVar42 + auVar41._0_4_)));
    fVar49 = (float)param_1[0x49];
    fVar43 = auVar41._0_4_;
    param_1[0x47] = (uint)fVar43;
    param_1[0x3f] = (uint)fVar43;
    if (fVar49 <= fVar43 - fVar42) {
      auVar41 = vminss_avx(ZEXT416(param_1[0x4b]),ZEXT416((uint)(fVar43 - fVar42)));
      fVar49 = auVar41._0_4_;
    }
    param_1[0x4b] = (uint)fVar49;
  }
  lVar33 = *(longlong *)(param_1 + 100);
  uVar11 = *(undefined8 *)(param_1 + 0x47);
  *(undefined8 *)(lVar33 + 600) = *(undefined8 *)(param_1 + 0x45);
  *(undefined8 *)(lVar33 + 0x260) = uVar11;
  param_1[0x2b] = param_1[0x49];
  param_1[0x2c] = param_1[0x4b];
  if ((param_1[1] >> 0x11 & 1) == 0) {
    if ((param_1[1] >> 0x19 & 1) == 0) {
      auVar47 = ZEXT416(param_1[0x40]);
    }
    auVar41 = vmaxss_avx(ZEXT416(*(uint *)(*(longlong *)(param_1 + 100) + 0x284)),auVar47);
    fVar42 = auVar41._0_4_;
  }
  else {
    fVar42 = (float)param_1[0x40];
  }
  lVar33 = *(longlong *)(param_1 + 100);
  fVar42 = fVar42 - *(float *)(local_110 + 0xce8);
  fVar49 = *(float *)(lVar33 + 0x24c);
  if (fVar49 <= fVar42) {
    auVar41 = vminss_avx(ZEXT416(*(uint *)(lVar33 + 0x254)),ZEXT416((uint)fVar42));
    fVar49 = auVar41._0_4_;
  }
  *(float *)(lVar33 + 0x254) = fVar49;
  FUN_1804f0050(param_1);
  if ((param_1[1] & 1) != 0) {
    FUN_1804ee250(param_1);
  }
  uVar23 = 0;
  puVar24[2] = 0;
  *(undefined1 *)((longlong)param_1 + 0x23d) = 1;
  *(undefined1 *)((longlong)param_1 + 0x243) = 0;
  *(undefined2 *)((longlong)param_1 + 0x212) = 0xffff;
  if ((((char)param_1[0x91] == '\0') ||
      (sVar20 = *(short *)((longlong)param_1 + 0x22a), sVar20 == -1)) ||
     (*(short *)((longlong)param_1 + 0x7a) != (short)param_1[0x1e])) {
    if ((param_1[1] & 0x10000000) == 0) goto LAB_1804ee044;
    sVar20 = *(short *)((longlong)param_1 + 0x20e);
    if ((((sVar20 == -1) || ((int)sVar20 == local_134)) || ((short)param_1[0x84] != -1)) ||
       (((*(int *)(lVar27 + 0x1550) != 0 && ((char)param_1[0x94] == '\0')) &&
        (*(char *)(lVar27 + 0x2268) == '\0')))) goto LAB_1804ee044;
  }
  *(short *)((longlong)param_1 + 0x212) = sVar20;
LAB_1804ee044:
  if (((*(char *)((longlong)param_1 + 0x245) == '\0') && ((char)param_1[0x91] != '\0')) &&
     ((short)param_1[0x1e] == *(short *)((longlong)param_1 + 0x7a))) {
    pcVar18 = "##ContextMenu";
    cVar34 = '#';
    uVar29 = ~*param_1;
    do {
      pcVar18 = pcVar18 + 1;
      if (((cVar34 == '#') && (*pcVar18 == '#')) && (pcVar18[1] == '#')) {
        pcVar18 = pcVar18 + 2;
        uVar29 = ~*param_1;
      }
      else {
        uVar29 = crc32(uVar29,cVar34);
      }
      cVar34 = *pcVar18;
    } while (cVar34 != '\0');
    cVar34 = FUN_1804c7cc0(~uVar29,0x141);
    if (cVar34 == '\0') {
      *(undefined1 *)(param_1 + 0x91) = 0;
    }
    else {
      FUN_1804f1a30(param_1,param_1[1]);
      FUN_1804c7e80();
    }
  }
  fVar42 = auVar50._0_4_;
  if ((*(char *)((longlong)param_1 + 0x242) != '\0') && ((param_1[1] & 8) != 0)) {
    FUN_1804f13e0(param_1);
    fVar42 = auVar50._0_4_;
  }
  if (0 < (short)param_1[0x8c]) {
    *(float *)(*(longlong *)(param_1 + 100) + 0x80) =
         *(float *)((longlong)
                    *(short *)(*(longlong *)(param_1 + 10) + -2 + (longlong)(short)param_1[0x8c] * 2
                              ) * 0x78 + 0xc + *(longlong *)(param_1 + 6)) - (float)param_1[0x3d];
  }
  if (0 < (short)param_1[0x8b]) {
    *(uint *)(*(longlong *)(param_1 + 100) + 0x84) = puVar24[3];
  }
  puVar24[3] = 0;
  lVar33 = *(longlong *)(param_1 + 100);
  if (((*(longlong *)(lVar27 + 0x2418) == lVar33) && (*(char *)(lVar27 + 0x2420) != '\0')) &&
     ((*(float *)(lVar27 + 0x2424) <= *(float *)(lVar27 + 0x242c) &&
      ((*(float *)(lVar27 + 0x2428) <= *(float *)(lVar27 + 0x2430) && (0 < (int)param_1[0x1b]))))))
  {
    uVar25 = uVar23;
    do {
      lVar28 = *(longlong *)(param_1 + 6);
      if ((((*(char *)(uVar23 + 0x6f + lVar28) == '\0') &&
           ((float)param_1[0x46] < *(float *)(lVar27 + 0x2430))) &&
          (*(float *)(lVar27 + 0x2428) < fVar42)) &&
         ((*(float *)(uVar23 + 8 + lVar28) < *(float *)(lVar27 + 0x242c) &&
          (*(float *)(lVar27 + 0x2424) < *(float *)(uVar23 + 0xc + lVar28))))) {
        *(undefined1 *)(uVar23 + 0x6f + lVar28) = 1;
      }
      uVar29 = (int)uVar25 + 1;
      uVar25 = (ulonglong)uVar29;
      uVar23 = uVar23 + 0x78;
    } while ((int)uVar29 < (int)param_1[0x1b]);
  }
  if ((param_1[1] & 0x100000) == 0) {
    FUN_1804d9420(*(undefined8 *)(lVar33 + 0x2c8),lVar33 + 0x238,lVar33 + 0x240,0);
  }
  else {
    FUN_1804e1d30(*(undefined8 *)(param_1 + 0x6a),*(undefined8 *)(lVar33 + 0x2c8),2);
  }
}



