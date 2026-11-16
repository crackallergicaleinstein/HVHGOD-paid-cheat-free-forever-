// FUN_18025a6d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18025a6d0 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18025a6d0(longlong param_1,undefined1 (*param_2) [16],longlong param_3,undefined8 param_4,
                  longlong param_5,longlong *param_6,longlong param_7,longlong *param_8)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 (*pauVar7) [16];
  ulonglong uVar8;
  undefined8 uVar9;
  char cVar10;
  longlong lVar11;
  longlong *plVar12;
  ULONGLONG UVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *plVar16;
  ulonglong *puVar17;
  uint uVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  ulonglong uVar21;
  int iVar22;
  longlong lVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  longlong lVar26;
  bool bVar27;
  double dVar28;
  undefined1 in_ZMM3 [64];
  undefined1 auVar29 [16];
  undefined1 auVar30 [64];
  undefined1 auStackY_2658 [32];
  int local_2578;
  undefined *local_2568;
  longlong local_2560;
  undefined4 local_2558;
  int local_2554;
  longlong *local_2548;
  longlong local_2540;
  undefined1 (*local_2538) [16];
  longlong local_2530;
  longlong local_2528;
  longlong local_2520;
  ulonglong local_2518;
  ulonglong local_2510;
  undefined1 local_2508 [8];
  undefined1 local_2500 [16];
  undefined1 (*local_24f0) [16];
  undefined1 local_24e8 [8];
  undefined1 local_24e0 [8];
  undefined8 local_24d8;
  undefined8 uStack_24d0;
  undefined1 local_24c8 [16];
  undefined8 *local_24b8;
  undefined1 local_24b0 [16];
  longlong local_24a0;
  undefined1 local_2498 [16];
  longlong local_2488;
  undefined1 local_2480 [32];
  longlong local_2460 [5];
  char local_2438 [9152];
  char local_78;
  ulonglong local_68;
  undefined8 uStack_48;
  
  uStack_48 = 0x18025a6ef;
  local_68 = DAT_1808d5f00 ^ (ulonglong)auStackY_2658;
  auVar30 = ZEXT1664(in_ZMM3._0_16_);
  local_2548 = param_8;
  local_2528 = param_5;
  local_2530 = param_7;
  local_2558 = 0;
  local_2500 = ZEXT816(0x1807d0230);
  local_2560 = param_1;
  local_2538 = param_2;
  local_2520 = param_3;
  local_24f0 = param_2;
  FUN_18017bf40(local_2500 + 8);
  uVar24 = (param_6[1] - *param_6) / 0x6b60;
  local_24c8 = (undefined1  [16])0x0;
  local_24b8 = (undefined8 *)0x0;
  if (uVar24 != 0) {
    if (0xaaaaaaaaaaaaaaa < uVar24) {
                    /* WARNING: Subroutine does not return */
      FUN_1801136f0();
    }
    local_24c8._0_8_ = FUN_18015bca0(uVar24 * 0x18);
    local_24b8 = (undefined8 *)(local_24c8._0_8_ + uVar24 * 3 * 8);
    local_24c8._8_8_ = local_24c8._0_8_;
    do {
      *(undefined8 *)local_24c8._8_8_ = 0;
      *(undefined8 *)(local_24c8._8_8_ + 8) = 0;
      *(undefined8 *)(local_24c8._8_8_ + 0x10) = 0;
      local_24c8._8_8_ = local_24c8._8_8_ + 0x18;
      uVar24 = uVar24 - 1;
    } while (uVar24 != 0);
  }
  uVar24 = (param_6[1] - *param_6) / 0x6b60;
  local_2498 = (undefined1  [16])0x0;
  local_2488 = 0;
  if (uVar24 != 0) {
    if (0x3fffffffffffffff < uVar24) {
                    /* WARNING: Subroutine does not return */
      FUN_1801136f0();
    }
    lVar26 = uVar24 * 4;
    lVar11 = FUN_18015bca0(lVar26);
    local_2498._0_8_ = lVar11;
    local_2488 = lVar26 + lVar11;
    FUN_18063ab10(lVar11,0,lVar26);
    local_2498._8_8_ = lVar26 + lVar11;
  }
  local_2540 = 0;
  local_2460[0] = 0;
  local_2460[1] = 0;
  local_2460[2] = 0;
  local_2460[3] = 0;
  local_2480 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
  local_2518 = param_8[5];
  local_2578 = 0;
  lVar26 = 0;
  local_24d8 = 0x9c4000005dc;
  uStack_24d0 = 0xfa000000dac;
  do {
    auVar29 = auVar30._0_16_;
    param_8[2] = (longlong)*(int *)(local_24e0 + lVar26 * 4 + 8) * 1000 + *param_8;
    *(undefined1 *)((longlong)param_8 + 0x5d) = 0;
    local_2510 = 0;
    lVar11 = param_6[1];
    lVar15 = *param_6;
    if ((lVar11 - lVar15) / 0x6b60 != 0) {
      do {
        lVar23 = 0;
        if (local_2510 != 0) {
          lVar23 = (param_8[6] + -1 + local_2510) % ((lVar11 - lVar15) / 0x6b60 - 1U) + 1;
        }
        if (param_8[2] == param_8[1]) {
          cVar10 = '\0';
        }
        else {
          cVar10 = -1;
          if (param_8[1] <= param_8[2]) {
            cVar10 = '\0';
          }
        }
        auVar30 = ZEXT1664(auVar30._0_16_);
        plVar12 = (longlong *)FUN_18017bf40(local_24e8);
        auVar29 = auVar30._0_16_;
        if (*(longlong *)((ulonglong)((uint)((longlong)cVar10 >> 0x3f) & 8) + 8 + (longlong)param_8)
            <= *plVar12) break;
        plVar12 = (longlong *)(lVar23 * 0x6b60 + *param_6);
        lVar11 = local_24c8._0_8_ + lVar23 * 0x18;
        FUN_180265e50();
        if (*plVar12 != 0) {
          iVar22 = DAT_180c64830;
          if (DAT_180c64830 == 0) {
            UVar13 = GetTickCount64();
            if (UVar13 < DAT_180c64828) {
              iVar22 = 0;
            }
            else {
              local_2568 = &DAT_1808ef450;
              iVar22 = FUN_1805f68d0(&DAT_1808ef450);
              if (iVar22 != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_1805f6d44(5);
              }
              if (DAT_1808ef49c == 0x7fffffff) {
                DAT_1808ef49c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
                FUN_1805f6d44(6);
              }
              if ((DAT_180c64830 == 0) && (DAT_180c64828 <= UVar13)) {
                DAT_180c64830 = FUN_1804174b0("C_BaseEntity");
                if (DAT_180c64830 == 0) {
                  DAT_180c64828 = UVar13 + 1000;
                }
                else {
                  DAT_180c64828 = 0xffffffffffffffff;
                }
              }
              iVar22 = DAT_180c64830;
              FUN_1805f68fc();
            }
          }
          lVar15 = *plVar12;
          bVar27 = false;
          if (iVar22 + lVar15 != 0) {
            local_2568 = (undefined *)((ulonglong)local_2568 & 0xffffffff00000000);
            lVar14 = FUN_18017ea70();
            *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + 1;
            cVar10 = FUN_1804514c0(&local_2568,iVar22 + lVar15,4);
            bVar27 = cVar10 != '\0';
            if (bVar27) {
              local_2554 = (int)local_2568;
            }
            lVar15 = FUN_18017ea70();
            if (*(int *)(lVar15 + 4) != 0) {
              *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + -1;
            }
          }
          iVar22 = local_2554;
          if (!bVar27) {
            iVar22 = 0;
          }
          if (0 < iVar22) {
            local_2540 = local_2540 + 1;
            *(bool *)((longlong)param_8 + 0x5c) = local_2578 != 3;
            if (lVar26 == 3) {
              *(undefined4 *)(param_8 + 0xb) = 0x18;
              uVar18 = (uint)(local_2578 == 1);
            }
            else {
              *(uint *)(param_8 + 0xb) = 3 - (uint)(local_2578 != 0);
              uVar18 = (uint)(local_2578 == 1);
              if (lVar26 == 1) {
                if (((int)plVar12[0xd6b] < 2) || (*(char *)((longlong)plVar12 + 0x4793) != '\0'))
                goto LAB_18025ad91;
              }
              else if (lVar26 == 2) {
                if (*(char *)((longlong)plVar12 + 0x6b5c) == '\0') {
                  if (((int)plVar12[0xd6b] < 3) &&
                     (plVar16 = (longlong *)FUN_18017bf40(local_24e0), *plVar16 < param_8[1])) {
                    *(undefined1 *)((longlong)plVar12 + 0x6b5c) = 1;
                    FUN_180232f50(&DAT_180cc9398,local_2438,plVar12 + 3);
                    if (local_78 != '\0') {
                      lVar15 = plVar12[0xd6b];
                      *(int *)(plVar12 + 0xd6b) = (int)lVar15 + 1;
                      FUN_18063aed0(plVar12 + 3 + (longlong)(int)lVar15 * 0x478,local_2438,0x23c0);
                      goto LAB_18025abd3;
                    }
                  }
                }
                else {
LAB_18025abd3:
                  uVar18 = (int)plVar12[0xd6b] - 1;
                  if (*(char *)((longlong)(int)plVar12[0xd6b] * 0x23c0 + 0x13 + (longlong)plVar12)
                      != '\0') goto LAB_18025abef;
                }
                goto LAB_18025ad91;
              }
            }
LAB_18025abef:
            if (((char)plVar12[(longlong)(int)uVar18 * 0x478 + 0x47a] != '\0') &&
               (plVar12[(longlong)(int)uVar18 * 0x478 + 3] == *plVar12)) {
              piVar1 = (int *)(local_2498._0_8_ + lVar23 * 4);
              *piVar1 = *piVar1 + 1;
              local_2460[lVar26] = local_2460[lVar26] + 1;
              local_24b0 = (undefined1  [16])0x0;
              local_24a0 = 0;
              FUN_18025b510(local_2560,local_24b0,local_2520,auVar30._0_8_);
              uVar9 = local_24b0._8_8_;
              if (local_24b0._0_8_ != local_24b0._8_8_) {
                lVar15 = *(longlong *)(local_2480 + lVar26 * 8);
                puVar19 = (undefined8 *)local_24b0._0_8_;
                do {
                  puVar2 = *(undefined8 **)(lVar11 + 8);
                  if (puVar2 == *(undefined8 **)(lVar11 + 0x10)) {
                    auVar30 = ZEXT1664(auVar30._0_16_);
                    FUN_180268c10(lVar11);
                  }
                  else {
                    uVar4 = puVar19[1];
                    uVar5 = puVar19[2];
                    uVar6 = puVar19[3];
                    *puVar2 = *puVar19;
                    puVar2[1] = uVar4;
                    puVar2[2] = uVar5;
                    puVar2[3] = uVar6;
                    uVar4 = puVar19[5];
                    uVar5 = puVar19[6];
                    uVar6 = puVar19[7];
                    puVar2[4] = puVar19[4];
                    puVar2[5] = uVar4;
                    puVar2[6] = uVar5;
                    puVar2[7] = uVar6;
                    uVar4 = puVar19[9];
                    uVar5 = puVar19[10];
                    uVar6 = puVar19[0xb];
                    puVar2[8] = puVar19[8];
                    puVar2[9] = uVar4;
                    puVar2[10] = uVar5;
                    puVar2[0xb] = uVar6;
                    uVar4 = puVar19[0xd];
                    uVar5 = puVar19[0xe];
                    uVar6 = puVar19[0xf];
                    puVar2[0xc] = puVar19[0xc];
                    puVar2[0xd] = uVar4;
                    puVar2[0xe] = uVar5;
                    puVar2[0xf] = uVar6;
                    uVar4 = puVar19[0x11];
                    puVar2[0x10] = puVar19[0x10];
                    puVar2[0x11] = uVar4;
                    puVar2[0x12] = puVar19[0x12];
                    *(longlong *)(lVar11 + 8) = *(longlong *)(lVar11 + 8) + 0x98;
                  }
                  lVar15 = lVar15 + 1;
                  puVar19 = puVar19 + 0x13;
                } while (puVar19 != (undefined8 *)uVar9);
                *(longlong *)(local_2480 + lVar26 * 8) = lVar15;
              }
              auVar29 = auVar30._0_16_;
              if (*(char *)((longlong)param_8 + 0x5d) != '\0') {
                if ((undefined8 *)local_24b0._0_8_ != (undefined8 *)0x0) {
                  puVar19 = (undefined8 *)local_24b0._0_8_;
                  if ((0xfff < (ulonglong)(((local_24a0 - local_24b0._0_8_) / 0x98) * 0x98)) &&
                     (puVar19 = *(undefined8 **)(local_24b0._0_8_ + -8),
                     0x1f < (ulonglong)(local_24b0._0_8_ + (-8 - (longlong)puVar19)))) {
LAB_18025b4d5:
                    /* WARNING: Subroutine does not return */
                    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                  }
                  auVar30 = ZEXT1664(auVar29);
                  FUN_1804547d0(puVar19);
                  auVar29 = auVar30._0_16_;
                  local_24b0 = (undefined1  [16])0x0;
                  local_24a0 = 0;
                }
                break;
              }
              if ((undefined8 *)local_24b0._0_8_ != (undefined8 *)0x0) {
                puVar19 = (undefined8 *)local_24b0._0_8_;
                if ((0xfff < (ulonglong)(((local_24a0 - local_24b0._0_8_) / 0x98) * 0x98)) &&
                   (puVar19 = *(undefined8 **)(local_24b0._0_8_ + -8),
                   0x1f < (ulonglong)(local_24b0._0_8_ + (-8 - (longlong)puVar19))))
                goto LAB_18025b4d5;
                auVar30 = ZEXT1664(auVar29);
                FUN_1804547d0(puVar19);
                local_24b0 = (undefined1  [16])0x0;
                local_24a0 = 0;
              }
              auVar29 = auVar30._0_16_;
              if (*(char *)((longlong)param_8 + 0x5d) != '\0') break;
            }
          }
        }
LAB_18025ad91:
        auVar29 = auVar30._0_16_;
        local_2510 = local_2510 + 1;
        lVar11 = param_6[1];
        lVar15 = *param_6;
      } while (local_2510 < (ulonglong)((lVar11 - lVar15) / 0x6b60));
    }
    iVar22 = 0;
    auVar30 = ZEXT1664(auVar29);
    plVar12 = (longlong *)FUN_18017bf40(local_2508);
    if (param_8[1] <= *plVar12) break;
    local_2578 = local_2578 + 1;
    lVar26 = lVar26 + 1;
  } while (lVar26 < 4);
  param_8[2] = param_8[1];
  plVar12 = (longlong *)FUN_18017bf40(local_2508);
  pauVar7 = local_2538;
  if ((*plVar12 == param_8[1]) || (param_8[1] <= *plVar12)) {
    *(undefined1 *)((longlong)param_8 + 0x5d) = 1;
  }
  *local_2538 = (undefined1  [16])0x0;
  *(undefined8 *)*local_2538 = 0;
  *(undefined8 *)(*local_2538 + 8) = 0;
  *(undefined8 *)local_2538[1] = 0;
  local_2558 = 1;
  lVar15 = 0;
  uVar24 = (ulonglong)local_2568 >> 0x20;
  local_2568 = (undefined *)((ulonglong)local_2568 & 0xffffffff00000000);
  lVar26 = (longlong)(local_24c8._8_8_ - local_24c8._0_8_) / 6 +
           ((longlong)(local_24c8._8_8_ - local_24c8._0_8_) >> 0x3f);
  lVar11 = lVar26 >> 2;
  lVar26 = lVar26 >> 0x3f;
  uVar25 = 0;
  if (lVar11 != lVar26) {
    do {
      lVar15 = lVar15 + (*(longlong *)(local_24c8._0_8_ + 8 + uVar25 * 0x18) -
                        *(longlong *)(local_24c8._0_8_ + uVar25 * 0x18)) / 0x98;
      iVar22 = iVar22 + *(int *)(local_2498._0_8_ + uVar25 * 4);
      uVar25 = (ulonglong)((int)uVar25 + 1);
    } while (uVar25 < (ulonglong)(lVar11 - lVar26));
    local_2568 = (undefined *)CONCAT44((int)uVar24,iVar22);
    param_8 = local_2548;
  }
  FUN_180265e50(local_2538,lVar15);
  uVar9 = local_24c8._8_8_;
  iVar22 = DAT_180c64824;
  for (puVar19 = (undefined8 *)local_24c8._0_8_; puVar19 != (undefined8 *)uVar9;
      puVar19 = puVar19 + 3) {
    puVar2 = (undefined8 *)puVar19[1];
    DAT_180c64824 = iVar22;
    for (puVar20 = (undefined8 *)*puVar19; puVar20 != puVar2; puVar20 = puVar20 + 0x13) {
      puVar3 = *(undefined8 **)(*pauVar7 + 8);
      if (puVar3 == *(undefined8 **)pauVar7[1]) {
        FUN_180268c10(pauVar7,puVar3,puVar20);
      }
      else {
        uVar4 = puVar20[1];
        uVar5 = puVar20[2];
        uVar6 = puVar20[3];
        *puVar3 = *puVar20;
        puVar3[1] = uVar4;
        puVar3[2] = uVar5;
        puVar3[3] = uVar6;
        uVar4 = puVar20[5];
        uVar5 = puVar20[6];
        uVar6 = puVar20[7];
        puVar3[4] = puVar20[4];
        puVar3[5] = uVar4;
        puVar3[6] = uVar5;
        puVar3[7] = uVar6;
        uVar4 = puVar20[9];
        uVar5 = puVar20[10];
        uVar6 = puVar20[0xb];
        puVar3[8] = puVar20[8];
        puVar3[9] = uVar4;
        puVar3[10] = uVar5;
        puVar3[0xb] = uVar6;
        uVar4 = puVar20[0xd];
        uVar5 = puVar20[0xe];
        uVar6 = puVar20[0xf];
        puVar3[0xc] = puVar20[0xc];
        puVar3[0xd] = uVar4;
        puVar3[0xe] = uVar5;
        puVar3[0xf] = uVar6;
        uVar4 = puVar20[0x11];
        puVar3[0x10] = puVar20[0x10];
        puVar3[0x11] = uVar4;
        puVar3[0x12] = puVar20[0x12];
        *(longlong *)(*pauVar7 + 8) = *(longlong *)(*pauVar7 + 8) + 0x98;
      }
    }
    iVar22 = DAT_180c64824;
  }
  LOCK();
  DAT_180c64824 = iVar22 + 1;
  UNLOCK();
  if ((iVar22 + 1U == 1) || ((iVar22 + 1U & 0x7f) == 0)) {
    plVar12 = (longlong *)FUN_18017bf40(local_2508);
    local_2530 = (*plVar12 - *param_8) / 1000;
    FUN_180252d60(&DAT_180c7e1f0,
                  SUB168(SEXT816(0x20c49ba5e353f7cf) * SEXT816(*plVar12 - *param_8),8),DAT_180cc934c
                 );
    local_2520 = param_8[7];
    local_2528 = param_8[6];
    local_2560 = *(longlong *)(local_2560 + 0x120);
    GetCurrentThreadId();
    FUN_18063ab10(local_2438,0,0x600);
    FUN_18015ad60(local_2438,0x600,0xffffffffffffffff,
                  "batch=%u mode=command_thread engine_calls=serialized budget_us=4000 exhausted=%s thread=%u fov=%.1f candidates=%zu scanned=%zu records=%d traces=%zu hits=%zu invalid_geometry=%llu elapsed_us=%lld start=%zu fov_reject=%zu penetration_reject=%zu damage_reject=%zu target_selection=%d phase_records=(%zu,%zu,%zu,%zu) phase_hits=(%zu,%zu,%zu,%zu)"
                 );
    FUN_1800f6900(0);
  }
  FUN_180159650(local_2498);
  FUN_1802674e0(local_24c8);
  FUN_18017bf40(&local_2518);
  uVar8 = local_2518;
  uVar21 = local_2518 - local_2500._8_8_;
  puVar17 = (ulonglong *)FUN_180267050();
  uVar24 = *puVar17;
  *puVar17 = uVar24 + 1;
  uVar25 = puVar17[1];
  puVar17[1] = uVar25 + uVar21;
  puVar17[3] = puVar17[3] + (ulonglong)(999999 < uVar21);
  puVar17[4] = puVar17[4] + (ulonglong)(4999999 < uVar21);
  puVar17[5] = puVar17[5] + (ulonglong)(15999999 < uVar21);
  if (puVar17[2] < uVar21) {
    puVar17[2] = uVar21;
  }
  if ((uVar8 == puVar17[7]) || ((longlong)puVar17[7] <= (longlong)uVar8)) {
    dVar28 = (double)(uVar25 + uVar21) / (double)(uVar24 + 1);
    FUN_1801af8a0(dVar28,dVar28 / 1000.0,local_2500._0_8_);
    puVar17[2] = 0;
    puVar17[1] = 0;
    *puVar17 = 0;
    puVar17[5] = 0;
    puVar17[4] = 0;
    puVar17[3] = 0;
    puVar17[6] = uVar8;
    puVar17[7] = uVar8 + 5000000000;
  }
}



