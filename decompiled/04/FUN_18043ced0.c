// FUN_18043ced0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18043ced0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18043ced0(undefined1 (*param_1) [16],undefined8 *param_2,ulonglong param_3,
                  undefined1 (*param_4) [16])

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint3 uVar5;
  uint3 uVar6;
  byte bVar7;
  char cVar8;
  undefined1 uVar9;
  undefined2 uVar10;
  longlong lVar11;
  float *pfVar12;
  longlong lVar13;
  undefined8 uVar14;
  longlong *plVar15;
  undefined1 (*pauVar16) [16];
  ulonglong uVar17;
  ulonglong uVar18;
  undefined8 *puVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  longlong lVar23;
  byte bVar24;
  ulonglong uVar25;
  longlong lVar26;
  float *pfVar27;
  undefined8 *puVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  longlong lVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  ulonglong *puVar38;
  float fVar39;
  undefined1 extraout_var [56];
  float fVar40;
  float fVar41;
  undefined1 auVar42 [16];
  float fVar43;
  float fVar44;
  float fVar45;
  undefined1 auVar46 [64];
  undefined4 uVar47;
  undefined1 auVar48 [64];
  undefined1 auVar49 [64];
  float fVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [64];
  undefined1 auVar53 [64];
  undefined1 auVar54 [64];
  float fVar55;
  undefined1 auVar56 [64];
  undefined1 auStack_1f8 [32];
  float local_1d8;
  undefined8 local_1d0;
  undefined1 *local_1c8;
  undefined4 local_1c0;
  char local_1a8;
  undefined1 local_1a7;
  undefined4 local_1a4;
  byte local_1a0;
  byte local_19f;
  undefined1 local_198 [16];
  undefined8 local_188;
  ulonglong local_180;
  float *local_178;
  float local_170;
  float local_16c;
  float *local_168;
  ulonglong *local_160;
  undefined4 *local_158;
  float local_148;
  float local_144;
  undefined1 local_138 [16];
  undefined1 (*local_128) [16];
  undefined1 local_120 [16];
  undefined4 local_110;
  float local_10c;
  undefined8 local_108;
  undefined1 local_f8 [16];
  ulonglong local_e8;
  
  local_e8 = DAT_1808d5f00 ^ (ulonglong)auStack_1f8;
  local_188 = param_3;
  local_128 = param_4;
  lVar11 = FUN_180439770();
  uVar18 = 0;
  lVar13 = 0;
  if (*(longlong *)(lVar11 + 0x478) != *(longlong *)(lVar11 + 0x480)) {
    lVar13 = *(longlong *)(lVar11 + 0x480) + -0x78;
  }
  if (lVar13 == 0) {
  }
  pfVar12 = (float *)FUN_180439770();
  local_198 = *param_1;
  local_180 = 0xcbf29ce484222325;
  uVar20 = 0;
  if (*(ulonglong *)(*param_1 + 8) != 0) {
    do {
      local_180 = (local_180 ^ *(byte *)(uVar20 + local_198._0_8_)) * 0x100000001b3;
      uVar20 = uVar20 + 1;
    } while (uVar20 < *(ulonglong *)(*param_1 + 8));
  }
  lVar13 = FUN_180439770();
  for (puVar38 = *(ulonglong **)(lVar13 + 0x490); puVar38 != *(ulonglong **)(lVar13 + 0x498);
      puVar38 = puVar38 + 1) {
    local_180 = (local_180 ^ *puVar38) * 0x100000001b3;
  }
  local_1a7 = 0;
  uVar14 = FUN_18043cdb0();
  plVar15 = (longlong *)FUN_18043ed30(uVar14,local_120,&local_180);
  lVar13 = *plVar15;
  puVar38 = (ulonglong *)(lVar13 + 0x18);
  local_19f = *(ulonglong *)(pfVar12 + 0x10a) == local_180;
  FUN_18043b1e0(&local_108);
  fVar39 = pfVar12[0x89];
  auVar48 = ZEXT864(0);
  auVar53 = ZEXT464((uint)(float)local_108);
  pauVar16 = (undefined1 (*) [16])FUN_18043b290(local_138,local_108 & 0xffffffff,fVar39,0);
  local_138 = *pauVar16;
  auVar54 = ZEXT1664(local_138);
  local_198 = vshufps_avx(local_138,local_138,0x55);
  auVar52 = ZEXT1664(local_198);
  local_f8._4_4_ = local_198._0_4_;
  local_f8._0_4_ = local_138._0_4_;
  local_f8._8_4_ = auVar53._0_4_;
  local_f8._12_4_ = fVar39;
  cVar8 = FUN_18043b5c0(pfVar12);
  local_1a4 = CONCAT31(local_1a4._1_3_,cVar8);
  uVar29 = 0x7fffffff;
  if ((cVar8 == '\0') && (cVar8 = FUN_18043b8e0(pfVar12,local_f8), cVar8 != '\0')) {
    local_1a0 = 1;
    if (*(char *)((longlong)pfVar12 + 0x11) != '\0') {
      *(ulonglong *)(pfVar12 + 0x10a) = local_180;
      FUN_180204c30(lVar13 + 0x78);
      FUN_180204c30(lVar13 + 0x38);
      fVar50 = (auVar54._0_4_ + pfVar12[0x7e]) - *(float *)(lVar13 + 0x34);
      fVar45 = (float)((uint)(*pfVar12 - fVar50) & uVar29);
      uVar25 = 1;
      uVar20 = param_2[2];
      if (uVar20 != 0) {
        lVar11 = DAT_180bbadd0;
        do {
          puVar28 = param_2;
          if (0xf < (ulonglong)param_2[3]) {
            puVar28 = (undefined8 *)*param_2;
          }
          lVar23 = DAT_180bbade0;
          if (DAT_180bbadc8 != lVar11) {
            lVar23 = *(longlong *)(lVar11 + -8);
          }
          if (lVar23 == 0) {
            fVar40 = auVar48._0_4_;
            local_108 = CONCAT44(fVar40,fVar40);
          }
          else {
            local_f8._8_8_ = uVar25;
            local_f8._0_8_ = puVar28;
            FUN_180430010(lVar23,&local_108,local_f8);
            uVar20 = param_2[2];
            lVar11 = DAT_180bbadd0;
            fVar40 = (float)local_108;
          }
          fVar40 = (float)((uint)(*pfVar12 - (fVar40 + fVar50)) & uVar29);
          if (fVar40 < fVar45) {
            uVar18 = uVar25;
            fVar45 = fVar40;
          }
          uVar25 = uVar25 + 1;
        } while (uVar25 <= uVar20);
      }
      *puVar38 = uVar18;
      *(ulonglong *)(lVar13 + 0x20) = uVar18;
      *(ulonglong *)(lVar13 + 0x28) = uVar18;
      *(undefined4 *)(lVar13 + 0x30) = 0;
    }
  }
  else {
    local_1a0 = 0;
  }
  uVar18 = 0;
  if (local_19f != 0) {
    if (*(char *)((longlong)pfVar12 + 0x11) == '\0') {
      if (local_1a0 != 0) goto LAB_18043d208;
    }
    else if (local_1a0 == 0) {
      pfVar12[0x10a] = 0.0;
      pfVar12[0x10b] = 0.0;
    }
    else {
LAB_18043d208:
      if (*(char *)(pfVar12 + 4) != '\0') {
        fVar50 = (auVar54._0_4_ + pfVar12[0x7e]) - *(float *)(lVar13 + 0x34);
        fVar45 = (float)((uint)(*pfVar12 - fVar50) & uVar29);
        uVar25 = 1;
        uVar20 = param_2[2];
        if (uVar20 != 0) {
          lVar11 = DAT_180bbadd0;
          do {
            puVar28 = param_2;
            if (0xf < (ulonglong)param_2[3]) {
              puVar28 = (undefined8 *)*param_2;
            }
            lVar23 = DAT_180bbade0;
            if (DAT_180bbadc8 != lVar11) {
              lVar23 = *(longlong *)(lVar11 + -8);
            }
            if (lVar23 == 0) {
              fVar40 = auVar48._0_4_;
              local_108 = CONCAT44(fVar40,fVar40);
            }
            else {
              local_f8._8_8_ = uVar25;
              local_f8._0_8_ = puVar28;
              FUN_180430010(lVar23,&local_108,local_f8);
              uVar20 = param_2[2];
              lVar11 = DAT_180bbadd0;
              fVar40 = (float)local_108;
            }
            fVar40 = (float)((uint)(*pfVar12 - (fVar40 + fVar50)) & uVar29);
            if (fVar40 < fVar45) {
              uVar18 = uVar25;
              fVar45 = fVar40;
            }
            uVar25 = uVar25 + 1;
          } while (uVar25 <= uVar20);
        }
        *(ulonglong *)(lVar13 + 0x28) = uVar18;
        *puVar38 = uVar18;
        *(undefined4 *)(lVar13 + 0x30) = 0;
      }
    }
    if (((char)local_1a4 == '\0') && (*(ulonglong *)(pfVar12 + 0x10a) == local_180)) {
      local_110 = DAT_180bbae00;
      uVar18 = *(ulonglong *)(pfVar12 + 0x6a);
      lVar11 = *(longlong *)(pfVar12 + 100);
      lVar23 = *(longlong *)(lVar11 + 8 + (uVar18 & 0x4cd037050129dd05) * 0x10);
      lVar26 = *(longlong *)(pfVar12 + 0x60);
      if (lVar23 == lVar26) {
LAB_18043d361:
        lVar23 = 0;
      }
      else {
        iVar1 = *(int *)(lVar23 + 0x10);
        while (iVar1 != 0x10) {
          if (lVar23 == *(longlong *)(lVar11 + (uVar18 & 0x4cd037050129dd05) * 0x10))
          goto LAB_18043d361;
          lVar23 = *(longlong *)(lVar23 + 8);
          iVar1 = *(int *)(lVar23 + 0x10);
        }
      }
      if (((lVar23 == 0) || (lVar23 == lVar26)) || (*(char *)(lVar23 + 0x14) == '\0')) {
        lVar23 = *(longlong *)(lVar11 + 8 + (uVar18 & 0x4b25f99ff1f4ca55) * 0x10);
        if (lVar23 == lVar26) {
LAB_18043d3b6:
          lVar23 = 0;
        }
        else {
          iVar1 = *(int *)(lVar23 + 0x10);
          while (iVar1 != 0xa0) {
            if (lVar23 == *(longlong *)(lVar11 + (uVar18 & 0x4b25f99ff1f4ca55) * 0x10))
            goto LAB_18043d3b6;
            lVar23 = *(longlong *)(lVar23 + 8);
            iVar1 = *(int *)(lVar23 + 0x10);
          }
        }
        if (((lVar23 != 0) && (lVar23 != lVar26)) && (*(char *)(lVar23 + 0x14) != '\0'))
        goto LAB_18043d417;
        lVar23 = *(longlong *)(lVar11 + 8 + (uVar18 & 0xab2b4d979bbf0dc4) * 0x10);
        if (lVar23 == lVar26) {
LAB_18043d404:
          lVar23 = 0;
        }
        else {
          iVar1 = *(int *)(lVar23 + 0x10);
          while (iVar1 != 0xa1) {
            if (lVar23 == *(longlong *)(lVar11 + (uVar18 & 0xab2b4d979bbf0dc4) * 0x10))
            goto LAB_18043d404;
            lVar23 = *(longlong *)(lVar23 + 8);
            iVar1 = *(int *)(lVar23 + 0x10);
          }
        }
        if (((lVar23 != 0) && (lVar23 != lVar26)) && (*(char *)(lVar23 + 0x14) != '\0'))
        goto LAB_18043d417;
        local_1a8 = '\0';
      }
      else {
LAB_18043d417:
        local_1a8 = '\x01';
      }
      uVar9 = FUN_18043a260(pfVar12);
      local_1a4 = CONCAT31(local_1a4._1_3_,uVar9);
      uVar18 = *(ulonglong *)(lVar13 + 0x20);
      uVar20 = *(ulonglong *)(lVar13 + 0x28);
      uVar25 = uVar18;
      if (uVar20 < uVar18) {
        uVar25 = uVar20;
      }
      uVar22 = uVar18;
      if (uVar18 < uVar20) {
        uVar22 = uVar20;
      }
      local_f8._0_8_ = uVar22;
      local_158 = &local_110;
      local_168 = pfVar12;
      local_160 = puVar38;
      local_108 = uVar20;
      cVar8 = FUN_18043e5a0(&local_168,0x25);
      if (cVar8 != '\0') {
        *(undefined4 *)(lVar13 + 0x30) = 0;
        if ((char)local_1a4 == '\0') {
          if ((uVar18 == uVar20) || (local_1a8 != '\0')) {
            uVar17 = *puVar38;
            if (uVar17 != 0) {
              uVar17 = uVar17 - 1;
              *puVar38 = uVar17;
            }
            goto LAB_18043d510;
          }
          *puVar38 = uVar25;
          *(ulonglong *)(lVar13 + 0x28) = uVar25;
          uVar17 = uVar25;
        }
        else {
          uVar17 = *puVar38;
          if (uVar17 != 0) {
            do {
              puVar28 = param_2;
              if (0xf < (ulonglong)param_2[3]) {
                puVar28 = (undefined8 *)*param_2;
              }
              if (*(char *)((uVar17 - 1) + (longlong)puVar28) != ' ') break;
              uVar17 = uVar17 - 1;
              *puVar38 = uVar17;
            } while (uVar17 != 0);
            if (uVar17 != 0) {
              do {
                puVar28 = param_2;
                if (0xf < (ulonglong)param_2[3]) {
                  puVar28 = (undefined8 *)*param_2;
                }
                if (*(char *)((uVar17 - 1) + (longlong)puVar28) == ' ') break;
                uVar17 = uVar17 - 1;
                *puVar38 = uVar17;
              } while (uVar17 != 0);
            }
          }
LAB_18043d510:
          *(ulonglong *)(lVar13 + 0x28) = uVar17;
          if (local_1a8 != '\0') goto LAB_18043d51f;
        }
        *(ulonglong *)(lVar13 + 0x20) = uVar17;
      }
LAB_18043d51f:
      cVar8 = FUN_18043e5a0(&local_168,0x27);
      if (cVar8 != '\0') {
        *(undefined4 *)(lVar13 + 0x30) = 0;
        if ((char)local_1a4 == '\0') {
          if ((uVar18 == uVar20) || (local_1a8 != '\0')) {
            uVar17 = *puVar38;
            if (uVar17 < (ulonglong)param_2[2]) {
              uVar17 = uVar17 + 1;
              *puVar38 = uVar17;
            }
            goto LAB_18043d5e1;
          }
          *puVar38 = uVar22;
          *(ulonglong *)(lVar13 + 0x28) = uVar22;
          uVar17 = uVar22;
        }
        else {
          uVar21 = param_2[2];
          uVar17 = *puVar38;
          if (uVar17 < uVar21) {
            do {
              puVar28 = param_2;
              if (0xf < (ulonglong)param_2[3]) {
                puVar28 = (undefined8 *)*param_2;
              }
              if (*(char *)(uVar17 + (longlong)puVar28) == ' ') break;
              uVar17 = uVar17 + 1;
              *puVar38 = uVar17;
              uVar21 = param_2[2];
            } while (uVar17 < uVar21);
            if (uVar17 < uVar21) {
              do {
                puVar28 = param_2;
                if (0xf < (ulonglong)param_2[3]) {
                  puVar28 = (undefined8 *)*param_2;
                }
                if (*(char *)(uVar17 + (longlong)puVar28) != ' ') break;
                uVar17 = uVar17 + 1;
                *puVar38 = uVar17;
              } while (uVar17 < (ulonglong)param_2[2]);
            }
          }
LAB_18043d5e1:
          *(ulonglong *)(lVar13 + 0x28) = uVar17;
          if (local_1a8 != '\0') goto LAB_18043d5f0;
        }
        *(ulonglong *)(lVar13 + 0x20) = uVar17;
      }
LAB_18043d5f0:
      cVar8 = FUN_18043e5a0(&local_168,0x24);
      if (cVar8 != '\0') {
        *(undefined4 *)(lVar13 + 0x30) = 0;
        *puVar38 = 0;
        *(undefined8 *)(lVar13 + 0x28) = 0;
        if (local_1a8 == '\0') {
          *(undefined8 *)(lVar13 + 0x20) = 0;
        }
      }
      cVar8 = FUN_18043e5a0(&local_168,0x23);
      if (cVar8 != '\0') {
        *(undefined4 *)(lVar13 + 0x30) = 0;
        *puVar38 = param_2[2];
        uVar14 = param_2[2];
        if (local_1a8 == '\0') {
          *(undefined8 *)(lVar13 + 0x20) = uVar14;
          uVar14 = param_2[2];
        }
        *(undefined8 *)(lVar13 + 0x28) = uVar14;
      }
      if (((char)local_1a4 != '\0') && (cVar8 = FUN_18043e5a0(&local_168,0x41), cVar8 != '\0')) {
        *(undefined8 *)(lVar13 + 0x20) = 0;
        *(undefined8 *)(lVar13 + 0x28) = param_2[2];
        *puVar38 = param_2[2];
      }
      cVar8 = FUN_18043e5a0(&local_168,8);
      if (cVar8 != '\0') {
        *(undefined4 *)(lVar13 + 0x30) = 0;
        if (uVar18 == uVar20) {
          uVar20 = *puVar38;
          if (uVar20 != 0) {
            if ((char)local_1a4 == '\0') {
              uVar20 = uVar20 - 1;
              uVar17 = param_2[2];
              if (uVar17 < uVar20) goto LAB_18043e59a;
              puVar28 = param_2;
              if (0xf < (ulonglong)param_2[3]) {
                puVar28 = (undefined8 *)*param_2;
              }
              lVar11 = uVar17 - (uVar17 != uVar20);
              FUN_18063aed0((longlong)puVar28 + uVar20,
                            (ulonglong)(uVar17 != uVar20) + (longlong)puVar28 + uVar20,
                            (lVar11 - uVar20) + 1);
              param_2[2] = lVar11;
              *puVar38 = *puVar38 - 1;
              uVar20 = *puVar38;
            }
            else {
              do {
                puVar28 = param_2;
                if (0xf < (ulonglong)param_2[3]) {
                  puVar28 = (undefined8 *)*param_2;
                }
                if (*(char *)((longlong)puVar28 + (uVar20 - 1)) != ' ') {
                  if (uVar20 != 0) {
                    do {
                      puVar28 = param_2;
                      if (0xf < (ulonglong)param_2[3]) {
                        puVar28 = (undefined8 *)*param_2;
                      }
                    } while ((*(char *)((longlong)puVar28 + (uVar20 - 1)) != ' ') &&
                            (uVar20 = uVar20 - 1, uVar20 != 0));
                  }
                  break;
                }
                uVar20 = uVar20 - 1;
              } while (uVar20 != 0);
              uVar17 = param_2[2];
              if (uVar17 < uVar20) goto LAB_18043e59a;
              uVar21 = *puVar38 - uVar20;
              if (uVar17 - uVar20 < *puVar38 - uVar20) {
                uVar21 = uVar17 - uVar20;
              }
              puVar28 = param_2;
              if (0xf < (ulonglong)param_2[3]) {
                puVar28 = (undefined8 *)*param_2;
              }
              local_178 = (float *)(uVar17 - uVar21);
              FUN_18063aed0((longlong)puVar28 + uVar20,uVar21 + (longlong)puVar28 + uVar20,
                            (longlong)local_178 + (1 - uVar20));
              param_2[2] = local_178;
              *puVar38 = uVar20;
            }
            goto LAB_18043d7f7;
          }
        }
        else {
          uVar20 = param_2[2];
          if (uVar20 < uVar25) goto LAB_18043e59a;
          uVar17 = uVar22 - uVar25;
          if (uVar20 - uVar25 < uVar22 - uVar25) {
            uVar17 = uVar20 - uVar25;
          }
          puVar28 = param_2;
          if (0xf < (ulonglong)param_2[3]) {
            puVar28 = (undefined8 *)*param_2;
          }
          FUN_18063aed0((longlong)puVar28 + uVar25,uVar17 + (longlong)puVar28 + uVar25,
                        ((uVar20 - uVar17) - uVar25) + 1);
          param_2[2] = uVar20 - uVar17;
          *puVar38 = uVar25;
          uVar20 = uVar25;
LAB_18043d7f7:
          local_1a7 = 1;
        }
        *(ulonglong *)(lVar13 + 0x20) = uVar20;
        *(ulonglong *)(lVar13 + 0x28) = uVar20;
        uVar20 = local_108;
      }
      cVar8 = FUN_18043e5a0(&local_168,0x2e);
      if (cVar8 != '\0') {
        *(undefined4 *)(lVar13 + 0x30) = 0;
        if (uVar18 == uVar20) {
          uVar22 = *puVar38;
          uVar17 = param_2[2];
          if (uVar22 < uVar17) {
            if ((char)local_1a4 == '\0') {
              puVar28 = param_2;
              if (0xf < (ulonglong)param_2[3]) {
                puVar28 = (undefined8 *)*param_2;
              }
              lVar11 = (longlong)puVar28 + uVar22;
              lVar26 = uVar17 - (uVar17 != uVar22);
              lVar32 = lVar26 - uVar22;
              lVar23 = (ulonglong)(uVar17 != uVar22) + lVar11;
            }
            else {
              do {
                puVar28 = param_2;
                if (0xf < (ulonglong)param_2[3]) {
                  puVar28 = (undefined8 *)*param_2;
                }
              } while ((*(char *)((longlong)puVar28 + uVar22) != ' ') &&
                      (uVar22 = uVar22 + 1, uVar22 < uVar17));
              if (uVar22 < uVar17) {
                do {
                  puVar28 = param_2;
                  if (0xf < (ulonglong)param_2[3]) {
                    puVar28 = (undefined8 *)*param_2;
                  }
                } while ((*(char *)((longlong)puVar28 + uVar22) == ' ') &&
                        (uVar22 = uVar22 + 1, uVar22 < uVar17));
              }
              uVar20 = *puVar38;
              uVar21 = uVar22 - uVar20;
              if (uVar17 - uVar20 < uVar22 - uVar20) {
                uVar21 = uVar17 - uVar20;
              }
              puVar28 = param_2;
              if (0xf < (ulonglong)param_2[3]) {
                puVar28 = (undefined8 *)*param_2;
              }
              lVar11 = (longlong)puVar28 + uVar20;
              lVar26 = uVar17 - uVar21;
              lVar32 = lVar26 - uVar20;
              lVar23 = uVar21 + lVar11;
            }
            FUN_18063aed0(lVar11,lVar23,lVar32 + 1);
            param_2[2] = lVar26;
            uVar20 = local_108;
            goto LAB_18043d959;
          }
        }
        else {
          uVar17 = param_2[2];
          if (uVar17 < uVar25) {
LAB_18043e59a:
                    /* WARNING: Subroutine does not return */
            FUN_180141470();
          }
          uVar21 = uVar22 - uVar25;
          if (uVar17 - uVar25 < uVar22 - uVar25) {
            uVar21 = uVar17 - uVar25;
          }
          puVar28 = param_2;
          if (0xf < (ulonglong)param_2[3]) {
            puVar28 = (undefined8 *)*param_2;
          }
          local_178 = (float *)(uVar17 - uVar21);
          FUN_18063aed0((longlong)puVar28 + uVar25,uVar21 + (longlong)puVar28 + uVar25,
                        (longlong)local_178 + (1 - uVar25));
          param_2[2] = local_178;
          *puVar38 = uVar25;
LAB_18043d959:
          local_1a7 = 1;
        }
        *(ulonglong *)(lVar13 + 0x20) = *puVar38;
        *(ulonglong *)(lVar13 + 0x28) = *puVar38;
      }
      cVar8 = FUN_18043e5a0(&local_168);
      if ((cVar8 != '\0') || (cVar8 = FUN_18043e5a0(&local_168), cVar8 != '\0')) {
        pfVar12[0x10a] = 0.0;
        pfVar12[0x10b] = 0.0;
      }
      pfVar27 = pfVar12 + 7;
      local_178 = (float *)((longlong)pfVar27 + *(longlong *)(pfVar12 + 0x18) * 2);
      if (pfVar27 != local_178) {
        uVar22 = local_188;
        do {
          uVar10 = *(undefined2 *)pfVar27;
          local_1a4 = CONCAT22(local_1a4._2_2_,uVar10);
          if ((ulonglong)param_2[2] < uVar22) {
            *(undefined4 *)(lVar13 + 0x30) = 0;
            if (uVar18 != uVar20) {
              uVar20 = param_2[2];
              if (uVar20 < uVar25) goto LAB_18043e59a;
              uVar22 = local_f8._0_8_ - uVar25;
              if (uVar20 - uVar25 < local_f8._0_8_ - uVar25) {
                uVar22 = uVar20 - uVar25;
              }
              puVar28 = param_2;
              if (0xf < (ulonglong)param_2[3]) {
                puVar28 = (undefined8 *)*param_2;
              }
              FUN_18063aed0((longlong)puVar28 + uVar25,uVar22 + (longlong)puVar28 + uVar25,
                            ((uVar20 - uVar22) - uVar25) + 1);
              param_2[2] = uVar20 - uVar22;
              *puVar38 = uVar25;
              uVar20 = local_108;
              uVar10 = (undefined2)local_1a4;
            }
            FUN_18043ec70(param_2,*puVar38,1,(char)uVar10);
            *puVar38 = *puVar38 + 1;
            *(ulonglong *)(lVar13 + 0x20) = *puVar38;
            *(ulonglong *)(lVar13 + 0x28) = *puVar38;
            local_1a7 = 1;
            uVar22 = local_188;
          }
          pfVar27 = (float *)((longlong)pfVar27 + 2);
        } while (pfVar27 != local_178);
      }
      uVar18 = *puVar38;
      if ((ulonglong)param_2[2] < *puVar38) {
        uVar18 = param_2[2];
      }
      *puVar38 = uVar18;
      uVar18 = *(ulonglong *)(lVar13 + 0x20);
      if ((ulonglong)param_2[2] < *(ulonglong *)(lVar13 + 0x20)) {
        uVar18 = param_2[2];
      }
      *(ulonglong *)(lVar13 + 0x20) = uVar18;
      uVar18 = *(ulonglong *)(lVar13 + 0x28);
      if ((ulonglong)param_2[2] < *(ulonglong *)(lVar13 + 0x28)) {
        uVar18 = param_2[2];
      }
      *(ulonglong *)(lVar13 + 0x28) = uVar18;
    }
  }
  auVar42 = vpcmpeqd_avx(ZEXT116(local_1a0),SUB6416(ZEXT464(0),0));
  auVar49 = ZEXT464(0x3f800000);
  auVar42 = vblendvps_avx(auVar49._0_16_,auVar48._0_16_,auVar42);
  fVar50 = DAT_180bbae00;
  auVar56._0_8_ = FUN_18043a910(local_180,auVar42._0_8_,0x41400000,auVar48._0_8_);
  bVar7 = local_19f;
  auVar56._8_56_ = extraout_var;
  auVar56 = ZEXT1664(auVar56._0_16_);
  auVar42 = vpcmpeqd_avx(ZEXT116(local_19f),SUB6416(ZEXT464(0),0));
  auVar42 = vblendvps_avx(auVar49._0_16_,auVar48._0_16_,auVar42);
  fVar45 = (float)FUN_18043a910(local_180 + 1,auVar42._0_8_,0x41400000,auVar48._0_8_);
  local_108 = CONCAT44(local_108._4_4_,fVar45);
  if (bVar7 != 0) {
    fVar50 = fVar50 + *(float *)(lVar13 + 0x30);
    *(float *)(lVar13 + 0x30) = fVar50;
    if (auVar49._0_4_ < fVar50) {
      *(float *)(lVar13 + 0x30) = fVar50 - auVar49._0_4_;
    }
  }
  fVar50 = pfVar12[0x79];
  auVar46 = ZEXT1664(CONCAT412(fVar50,CONCAT48(fVar50,CONCAT44(fVar50,fVar50))));
  fVar50 = pfVar12[0xaa];
  fVar41 = (float)((uint)fVar50 & 0xff);
  uVar29 = (uint)fVar50 >> 8 & 0xff;
  fVar43 = (float)uVar29;
  uVar33 = (uint)fVar50 >> 0x10 & 0xff;
  fVar44 = (float)uVar33;
  auVar51 = SUB6416(ZEXT464(0x437f0000),0);
  auVar42 = vminss_avx(auVar51,ZEXT416((uint)(fVar41 * 1.3)));
  auVar2 = vminss_avx(auVar51,ZEXT416((uint)(fVar43 * 1.3)));
  auVar3 = vminss_avx(auVar51,ZEXT416((uint)(fVar44 * 1.3)));
  fVar40 = pfVar12[0xae];
  fVar55 = auVar56._0_4_;
  uVar36 = (int)((float)(int)(((int)auVar42._0_4_ & 0xffU) - ((uint)fVar50 & 0xff)) * fVar55 +
                fVar41) & 0xff;
  uVar30 = (int)((float)(int)(((int)auVar2._0_4_ & 0xffU) - uVar29) * fVar55 + fVar43) & 0xff;
  uVar33 = (int)((float)(int)(((int)auVar3._0_4_ & 0xffU) - uVar33) * fVar55 + fVar44) & 0xff;
  uVar29 = (int)((float)(int)(((uint)fVar50 >> 0x18) - ((uint)fVar50 >> 0x18)) * fVar55 +
                (float)((uint)fVar50 >> 0x18)) & 0xff;
  fVar50 = pfVar12[0xa9];
  fVar41 = (float)((uint)fVar50 & 0xff);
  uVar31 = (uint)fVar50 >> 8 & 0xff;
  fVar43 = (float)uVar31;
  uVar35 = (uint)fVar50 >> 0x10 & 0xff;
  fVar44 = (float)uVar35;
  auVar42 = vminss_avx(auVar51,ZEXT416((uint)(fVar41 * 1.05)));
  auVar2 = vminss_avx(auVar51,ZEXT416((uint)(fVar43 * 1.05)));
  auVar3 = vminss_avx(auVar51,ZEXT416((uint)(fVar44 * 1.05)));
  uVar5 = CONCAT12((char)(int)auVar3._0_4_,
                   CONCAT11((char)(int)auVar2._0_4_,(char)(int)auVar42._0_4_));
  bVar24 = (byte)((uint)fVar50 >> 0x18);
  local_1a4 = CONCAT13(bVar24,uVar5);
  auVar2 = vminss_avx(auVar51,ZEXT416((uint)(fVar41 * 1.08)));
  auVar4 = vminss_avx(auVar51,ZEXT416((uint)(fVar43 * 1.08)));
  auVar51 = vminss_avx(auVar51,ZEXT416((uint)(fVar44 * 1.08)));
  uVar6 = CONCAT12((char)(int)auVar51._0_4_,
                   CONCAT11((char)(int)auVar4._0_4_,(char)(int)auVar2._0_4_));
  local_110 = (float)CONCAT13(bVar24,uVar6);
  uVar37 = (int)((float)(int)(((int)auVar42._0_4_ & 0xffU) - ((uint)fVar50 & 0xff)) * fVar55 +
                fVar41) & 0xff;
  uVar34 = (int)((float)(int)(((uVar5 & 0xff00) >> 8) - uVar31) * fVar55 + fVar43) & 0xff;
  uVar35 = (int)((float)(int)(((int)auVar3._0_4_ & 0xffU) - uVar35) * fVar55 + fVar44) & 0xff;
  uVar31 = (int)((float)(int)((uint)bVar24 - ((uint)fVar50 >> 0x18)) * fVar55 +
                (float)((uint)fVar50 >> 0x18)) & 0xff;
  lVar11 = FUN_180439770();
  if (*(longlong *)(lVar11 + 0x4a8) == *(longlong *)(lVar11 + 0x4b0)) {
    puVar28 = &DAT_180bbac80;
  }
  else {
    puVar28 = &DAT_180bbabe8 + (longlong)*(int *)(*(longlong *)(lVar11 + 0x4b0) + -4) * 0x13;
  }
  local_f8 = auVar46._0_16_;
  local_1d8 = fVar39;
  local_1c8 = local_f8;
  local_1d0._0_4_ =
       ((((int)((float)(int)(bVar24 - uVar31) * fVar45 + (float)uVar31) & 0xffU) << 8 |
        (int)((float)(int)(((int)auVar51._0_4_ & 0xffU) - uVar35) * fVar45 + (float)uVar35) & 0xffU)
        << 8 | (int)((float)(int)(((uVar6 & 0xff00) >> 8) - uVar34) * fVar45 + (float)uVar34) &
               0xffU) << 8 |
       (int)((float)(int)(((int)auVar2._0_4_ & 0xffU) - uVar37) * fVar45 + (float)uVar37) & 0xffU;
  FUN_180430970(auVar46._0_8_,auVar54._0_8_,auVar52._0_8_,auVar53._0_8_);
  local_f8 = auVar46._0_16_;
  local_1c0 = auVar49._0_4_;
  local_1d0 = CONCAT44(local_1d0._4_4_,
                       ((((int)((float)(int)(((uint)fVar40 >> 0x18) - uVar29) * fVar45 +
                               (float)uVar29) & 0xffU) << 8 |
                        (int)((float)(int)(((uint)fVar40 >> 0x10 & 0xff) - uVar33) * fVar45 +
                             (float)uVar33) & 0xffU) << 8 |
                       (int)((float)(int)(((uint)fVar40 >> 8 & 0xff) - uVar30) * fVar45 +
                            (float)uVar30) & 0xffU) << 8 |
                       (int)((float)(int)(((uint)fVar40 & 0xff) - uVar36) * fVar45 + (float)uVar36)
                       & 0xffU);
  local_1d8 = fVar39;
  local_1c8 = local_f8;
  FUN_1804330f0(auVar46._0_8_,auVar54._0_8_,auVar52._0_8_,auVar53._0_8_);
  fVar50 = pfVar12[0x7e];
  auVar52 = ZEXT464((uint)(auVar53._0_4_ - (fVar50 + fVar50)));
  fVar45 = auVar48._0_4_;
  if (param_2[2] == 0) {
    lVar11 = DAT_180bbade0;
    if (DAT_180bbadc8 != DAT_180bbadd0) {
      lVar11 = *(longlong *)(DAT_180bbadd0 + -8);
    }
    if (lVar11 != 0) {
      local_f8._8_8_ = 1;
      local_f8._0_8_ = &DAT_18081ea60;
      goto LAB_18043e050;
    }
    local_110 = fVar45;
    local_10c = fVar45;
  }
  else {
    puVar19 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      puVar19 = (undefined8 *)*param_2;
    }
    lVar11 = DAT_180bbade0;
    if (DAT_180bbadc8 != DAT_180bbadd0) {
      lVar11 = *(longlong *)(DAT_180bbadd0 + -8);
    }
    if (lVar11 == 0) {
      local_110 = fVar45;
      local_10c = fVar45;
    }
    else {
      local_f8._8_8_ = param_2[2];
      local_f8._0_8_ = puVar19;
LAB_18043e050:
      FUN_180430010(fVar50 + fVar50,&local_110,local_f8);
    }
  }
  uVar14 = auVar52._0_8_;
  fVar40 = 2.0;
  fVar45 = local_10c;
  if (bVar7 != 0) {
    fVar41 = auVar48._0_4_;
    if (*puVar38 == 0) {
      local_148 = fVar41;
      local_144 = fVar41;
      pfVar27 = &local_148;
    }
    else {
      puVar19 = param_2;
      if (0xf < (ulonglong)param_2[3]) {
        puVar19 = (undefined8 *)*param_2;
      }
      lVar11 = DAT_180bbade0;
      if (DAT_180bbadc8 != DAT_180bbadd0) {
        lVar11 = *(longlong *)(DAT_180bbadd0 + -8);
      }
      if (lVar11 == 0) {
        local_170 = fVar41;
        local_16c = fVar41;
      }
      else {
        local_f8._8_8_ = *puVar38;
        local_f8._0_8_ = puVar19;
        FUN_180430010(lVar11,&local_170,local_f8);
        uVar14 = auVar52._0_8_;
      }
      pfVar27 = &local_170;
    }
    fVar41 = *pfVar27;
    fVar43 = *(float *)(lVar13 + 0x34);
    auVar42 = ZEXT416((uint)fVar43);
    if (fVar43 <= fVar41) {
      if ((fVar43 + (float)uVar14) - fVar40 < fVar41) {
        auVar42 = ZEXT416((uint)((fVar41 - (float)uVar14) + fVar40));
      }
    }
    else {
      auVar42 = ZEXT416((uint)fVar41);
    }
    auVar42 = vmaxss_avx(auVar42,auVar48._0_16_);
    *(int *)(lVar13 + 0x34) = auVar42._0_4_;
  }
  fVar41 = fVar50 + auVar54._0_4_;
  local_1d8 = fVar39;
  FUN_180430680(puVar28,fVar41,local_198._0_4_,uVar14);
  auVar42 = auVar56._0_16_;
  auVar53 = ZEXT464((uint)(fVar41 - *(float *)(lVar13 + 0x34)));
  fVar41 = 0.5;
  auVar52 = ZEXT464((uint)((fVar39 - fVar45) * 0.5 + (float)local_198._0_4_));
  if (bVar7 != 0) {
    uVar18 = *(ulonglong *)(lVar13 + 0x28);
    uVar20 = *(ulonglong *)(lVar13 + 0x20);
    if (uVar20 != uVar18) {
      uVar25 = uVar20;
      if (uVar18 < uVar20) {
        uVar25 = uVar18;
      }
      if (uVar20 < uVar18) {
        uVar20 = uVar18;
      }
      fVar39 = auVar48._0_4_;
      if (uVar25 == 0) {
        local_188 = CONCAT44(fVar39,fVar39);
        pfVar27 = (float *)&local_188;
      }
      else {
        puVar19 = param_2;
        if (0xf < (ulonglong)param_2[3]) {
          puVar19 = (undefined8 *)*param_2;
        }
        lVar11 = DAT_180bbade0;
        if (DAT_180bbadc8 != DAT_180bbadd0) {
          lVar11 = *(longlong *)(DAT_180bbadd0 + -8);
        }
        if (lVar11 == 0) {
          local_110 = fVar39;
          local_10c = fVar39;
        }
        else {
          local_198._8_8_ = uVar25;
          local_198._0_8_ = puVar19;
          FUN_180430010(lVar11,&local_110,local_198);
        }
        pfVar27 = (float *)&local_110;
      }
      fVar39 = *pfVar27;
      puVar19 = param_2;
      if (0xf < (ulonglong)param_2[3]) {
        puVar19 = (undefined8 *)*param_2;
      }
      lVar11 = DAT_180bbade0;
      if (DAT_180bbadc8 != DAT_180bbadd0) {
        lVar11 = *(longlong *)(DAT_180bbadd0 + -8);
      }
      if (lVar11 == 0) {
        fVar43 = auVar48._0_4_;
      }
      else {
        local_198._8_8_ = uVar20;
        local_198._0_8_ = puVar19;
        FUN_180430010(lVar11,local_f8,local_198);
        fVar43 = (float)local_f8._0_4_;
      }
      local_110._0_3_ = SUB43(pfVar12[0xae],0);
      local_110 = (float)CONCAT13(100,(undefined3)local_110);
      local_1d8 = fVar45 + fVar40;
      local_1d0 = CONCAT44(local_1d0._4_4_,local_110);
      FUN_1804307e0(puVar28,auVar53._0_4_ + fVar39,auVar52._0_4_ - auVar49._0_4_,fVar43 - fVar39);
      auVar42 = auVar56._0_16_;
      auVar54 = ZEXT1664(local_138);
    }
  }
  uVar47 = auVar48._0_4_;
  auVar42 = vmaxss_avx(ZEXT416((uint)(float)local_108),auVar42);
  fVar39 = pfVar12[0xac];
  fVar40 = pfVar12[0xad];
  fVar43 = auVar42._0_4_;
  uVar31 = (uint)((float)(int)(((uint)fVar39 & 0xff) - ((uint)fVar40 & 0xff)) * fVar43 +
                 (float)((uint)fVar40 & 0xff));
  uVar29 = (uint)fVar40 >> 8 & 0xff;
  uVar33 = (uint)((float)(int)(((uint)fVar39 >> 8 & 0xff) - uVar29) * fVar43 + (float)uVar29);
  uVar29 = (uint)fVar40 >> 0x10 & 0xff;
  uVar29 = (uint)((float)(int)(((uint)fVar39 >> 0x10 & 0xff) - uVar29) * fVar43 + (float)uVar29);
  if (param_2[2] == 0) {
    if (bVar7 == 0) {
      if (*(longlong *)(*local_128 + 8) != 0) {
        local_110 = (float)CONCAT13(100,CONCAT12((char)uVar29,CONCAT11((char)uVar33,(char)uVar31)));
        local_138 = *local_128;
        puVar19 = (undefined8 *)FUN_180439e30(&local_168,local_138);
        local_198._0_8_ = puVar19;
        if (0xf < (ulonglong)puVar19[3]) {
          local_198._0_8_ = *puVar19;
        }
        local_198._8_8_ = puVar19[2];
        local_1d0 = 0;
        local_1d8 = local_110;
        FUN_1804340b0(puVar28,fVar50 + auVar54._0_4_,auVar52._0_8_,local_198);
        FUN_18015c010(&local_168);
      }
      goto LAB_18043e51a;
    }
  }
  else {
    local_1d8 = (float)(((((int)((float)(int)(((uint)fVar39 >> 0x18) - ((uint)fVar40 >> 0x18)) *
                                 fVar43 + (float)((uint)fVar40 >> 0x18)) & 0xffU) << 8 |
                         uVar29 & 0xff) << 8 | uVar33 & 0xff) << 8 | uVar31 & 0xff);
    local_198._0_8_ = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      local_198._0_8_ = *param_2;
    }
    local_198._8_8_ = param_2[2];
    local_1d0 = 0;
    FUN_1804340b0(puVar28,auVar53._0_8_,auVar52._0_8_,local_198);
    uVar47 = auVar48._0_4_;
    if (bVar7 == 0) goto LAB_18043e51a;
  }
  if (*puVar38 == 0) {
    local_188 = CONCAT44(uVar47,uVar47);
    pfVar27 = (float *)&local_188;
  }
  else {
    if (0xf < (ulonglong)param_2[3]) {
      param_2 = (undefined8 *)*param_2;
    }
    if (DAT_180bbadc8 == DAT_180bbadd0) {
      lVar11 = DAT_180bbade0;
    }
    else {
      lVar11 = *(longlong *)(DAT_180bbadd0 + -8);
    }
    if (lVar11 == 0) {
      local_108 = CONCAT44(uVar47,uVar47);
    }
    else {
      local_198._8_8_ = *puVar38;
      local_198._0_8_ = param_2;
      FUN_180430010(lVar11,&local_108,local_198);
    }
    pfVar27 = (float *)&local_108;
  }
  local_110 = pfVar12[0xac];
  fVar39 = (float)FUN_180638e00(*(float *)(lVar13 + 0x30) * 6.28318);
  local_110 = (float)CONCAT13((char)(int)(((fVar39 * fVar41 + fVar41) * 0.6 + 0.4) * 255.0),
                              (undefined3)local_110);
  local_1d0 = CONCAT44(local_1d0._4_4_,local_110);
  local_1d8 = fVar45;
  FUN_1804307e0(puVar28,auVar53._0_4_ + *pfVar27,auVar52._0_8_,auVar49._0_8_);
LAB_18043e51a:
  if (puVar28[0xc] != puVar28[0xd]) {
    puVar28[0xd] = puVar28[0xd] + -0x10;
  }
}



