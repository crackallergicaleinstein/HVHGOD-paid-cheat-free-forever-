// FUN_18024b750 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18024b750 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18024b750(ulonglong param_1,longlong param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  char cVar5;
  undefined1 uVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  ULONGLONG UVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 *puVar16;
  ulonglong *puVar17;
  ulonglong uVar18;
  char *pcVar19;
  ulonglong uVar20;
  uint uVar21;
  longlong *plVar22;
  uint *puVar23;
  int iVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  longlong lVar27;
  bool bVar28;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined1 auVar29 [16];
  undefined1 auVar30 [64];
  undefined1 auStack_14f8 [32];
  undefined **local_14d8;
  longlong *local_14d0;
  longlong *local_14c8;
  double local_14c0;
  undefined4 local_14b8;
  uint local_14b0;
  uint local_14a8;
  uint local_14a0;
  uint local_1498;
  undefined4 local_1490;
  uint local_1488;
  uint local_1480;
  int local_1478;
  double local_1470;
  double local_1468;
  undefined8 local_1458;
  ulonglong local_1450;
  longlong local_1448;
  longlong *local_1440;
  ulonglong local_1438;
  longlong local_1430;
  uint *local_1428;
  longlong *local_1420;
  ULONGLONG *local_1418;
  longlong *local_1410;
  uint **local_1408;
  undefined8 local_1400;
  undefined8 uStack_13f8;
  undefined4 local_13f0;
  undefined4 uStack_13ec;
  undefined4 uStack_13e8;
  undefined4 uStack_13e4;
  undefined4 uStack_13e0;
  undefined4 uStack_13dc;
  undefined4 uStack_13d8;
  undefined4 uStack_13d4;
  undefined4 uStack_13d0;
  undefined4 local_13cc;
  undefined1 local_13c8 [104];
  undefined1 uStack_1360;
  undefined1 local_12e8 [112];
  longlong local_1278;
  uint *local_1270;
  ULONGLONG local_1268 [2];
  ulonglong local_1258 [32];
  longlong local_1158 [174];
  char local_be8;
  longlong local_bd8 [176];
  longlong local_658 [175];
  char local_e0;
  ulonglong local_58;
  
  local_58 = DAT_1808d5f00 ^ (ulonglong)auStack_14f8;
  if (param_2 == 0) {
  }
  local_1438 = param_1;
  local_1278 = param_2;
  plVar10 = (longlong *)FUN_180250780();
  plVar22 = (longlong *)&DAT_1808db120;
  if (plVar10 != (longlong *)0x0) {
    plVar22 = plVar10;
  }
  if ((char)plVar22[0xae] == '\0') {
  }
  if ((DAT_180cad6b8 == '\0') || (DAT_180cad2e0 != 1)) {
    *(char *)((longlong)plVar22 + 0x571) = '\0';
    *(undefined1 *)(param_1 + 0xcd) = 0;
  }
  cVar5 = FUN_18024a3b0(extraout_XMM0_Qa,local_1278);
  if ((cVar5 != '\0') &&
     (((*(char *)((longlong)plVar22 + 0x573) = '\0', *(char *)(param_1 + 0xcd) == '\0' ||
       (DAT_180cc9372 == '\0')) || (((DAT_180cc9348 & 0xfffffff7) != 0 && (5 < DAT_180cc9348 - 1))))
     )) {
    ((char *)((longlong)plVar22 + 0x571))[0] = '\0';
    ((char *)((longlong)plVar22 + 0x571))[1] = '\0';
  }
  if (((*(char *)(param_1 + 0xcd) != '\0') && (DAT_180cc9372 != '\0')) &&
     ((((DAT_180cc9348 & 0xfffffff7) == 0 || (DAT_180cc9348 - 1 < 6)) &&
      (((*(uint *)(plVar22 + 6) ^ *(uint *)(local_1278 + 0x70) |
         *(uint *)(plVar22 + 5) ^ *(uint *)(local_1278 + 0x68) |
        *(uint *)(plVar22 + 4) ^ *(uint *)(local_1278 + 0x60)) & 0x801) != 0)))) {
    *(char *)((longlong)plVar22 + 0x573) = '\0';
  }
  AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  local_13f0 = (undefined4)_DAT_180bb8890;
  uStack_13ec = (undefined4)((ulonglong)_DAT_180bb8890 >> 0x20);
  uStack_13e8 = (undefined4)uRam0000000180bb8898;
  uStack_13e4 = (undefined4)((ulonglong)uRam0000000180bb8898 >> 0x20);
  uStack_13e0 = (undefined4)uRam0000000180bb88a0;
  uStack_13dc = (undefined4)((ulonglong)uRam0000000180bb88a0 >> 0x20);
  uStack_13d8 = (undefined4)uRam0000000180bb88a8;
  uStack_13d4 = (undefined4)((ulonglong)uRam0000000180bb88a8 >> 0x20);
  local_1400 = _DAT_180bb88b0;
  uStack_13f8 = uRam0000000180bb88b8;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  *(uint *)(local_1278 + 0x20) = *(uint *)(local_1278 + 0x20) | 1;
  local_1270 = (uint *)0x0;
  if (*(longlong *)(local_1278 + 0x40) != 0) {
    local_1270 = (uint *)(*(longlong *)(local_1278 + 0x40) + 0x10);
  }
  lVar27 = 0;
  if (local_1270 != (uint *)0x0) {
    *local_1270 = *local_1270 | 4;
    if (*(longlong *)(local_1270 + 0xc) != 0) {
      lVar27 = *(longlong *)(local_1270 + 0xc) + 0x10;
    }
  }
  local_1430 = lVar27;
  UVar11 = GetTickCount64();
  lVar13 = local_1278;
  local_1418 = local_1268;
  local_1410 = &local_1278;
  local_1408 = &local_1270;
  local_1420 = plVar22;
  local_1268[0] = UVar11;
  if ((local_1270 == (uint *)0x0) || (lVar27 == 0)) {
    FUN_18024c440(&local_1420,"native_message_missing");
  }
  if ((*(char *)((longlong)plVar22 + 0x573) == '\0') ||
     ((*(char *)((longlong)plVar22 + 0x571) == '\0' &&
      (*(char *)((longlong)plVar22 + 0x572) == '\0')))) {
    uVar18 = 0;
  }
  else {
    uVar18 = 0x801;
  }
  if ((char)plVar22[0xae] == '\0') {
    FUN_18024c440(&local_1420,"no_completed_command");
  }
  lVar27 = CONCAT44(uStack_13ec,local_13f0);
  local_1440 = (longlong *)CONCAT44(uStack_13e4,uStack_13e8);
  if ((((longlong *)*plVar22 != local_1440) || (plVar22[1] != lVar27)) ||
     (plVar22[2] != *(longlong *)(local_1278 + 8))) {
    if (plVar22[2] != *(longlong *)(local_1278 + 8)) {
      FUN_18024c440(&local_1420,"command_changed");
    }
LAB_18024c393:
    if (((longlong *)*plVar22 == local_1440) && (plVar22[1] == lVar27)) {
      if (*(uint *)(plVar22 + 8) == local_1270[0x1d]) {
        pcVar19 = "expired_or_clock_rollback";
        if (((*(uint *)(plVar22 + 4) ^ *(uint *)(local_1278 + 0x60)) & 0x801) != 0) {
          pcVar19 = "attack_input_changed";
        }
        FUN_18024c440(&local_1420,pcVar19);
      }
      else {
        FUN_18024c440(&local_1420,"pawn_handle_changed");
      }
    }
    else {
      FUN_18024c440(&local_1420,"owner_changed");
    }
  }
  if ((((*(uint *)(plVar22 + 8) != local_1270[0x1d]) || (UVar11 < (ulonglong)plVar22[3])) ||
      ((0xfa < UVar11 - plVar22[3] ||
       ((uVar20 = *(ulonglong *)(local_1278 + 0x60) ^ plVar22[4], (uVar18 & uVar20) != 0 ||
        (uVar25 = *(ulonglong *)(local_1278 + 0x68) ^ plVar22[5], (uVar18 & uVar25) != 0)))))) ||
     (uVar26 = *(ulonglong *)(local_1278 + 0x70) ^ plVar22[6], (uVar18 & uVar26) != 0))
  goto LAB_18024c393;
  auVar30 = ZEXT464(*(uint *)(local_1430 + 0xc));
  sVar7 = thunk_FUN_180624430();
  if (0 < sVar7) {
    pcVar19 = "native_yaw_invalid";
    goto LAB_18024ba53;
  }
  local_e0 = '\0';
  if (((((byte)uVar20 | (byte)uVar25 | (byte)uVar26) & 0x20) == 0) &&
     (*(char *)((longlong)plVar22 + 0x573) != '\0')) {
LAB_18024bb6c:
    local_1440 = plVar22;
  }
  else {
    local_14d8 = (undefined **)UVar11;
    uVar12 = FUN_18024ea30(local_bd8,lVar13,local_1440,lVar27);
    FUN_18063aed0(local_1158,uVar12,0x578);
    if (local_be8 == '\0') {
      pcVar19 = "native_use_capture";
      goto LAB_18024ba53;
    }
    FUN_18063aed0(local_658,plVar22,0x578);
    local_e0 = '\x01';
    uVar12 = 0x821;
    if (*(char *)((longlong)plVar22 + 0x573) != '\0') {
      uVar12 = 0x20;
    }
    cVar5 = FUN_180245df0(local_658,local_1158,uVar12);
    if (cVar5 == '\0') {
      pcVar19 = "native_use_capacity";
      goto LAB_18024ba53;
    }
    local_1440 = local_658;
    if (local_e0 == '\0') goto LAB_18024bb6c;
  }
  iVar8 = FUN_180246160(local_1440,auVar30._0_8_);
  puVar4 = local_1270;
  local_1450 = CONCAT44(local_1450._4_4_,iVar8);
  if (iVar8 < 0x21) {
    puVar23 = local_1270 + 2;
    local_1448 = local_1278;
    local_1428 = puVar23;
    if (((local_1270[4] < 0x21) && ((int)local_1270[4] <= (int)local_1270[5])) &&
       (((*(char *)((longlong)plVar22 + 0x571) == '\0' ||
         (*(char *)((longlong)plVar22 + 0x573) == '\0')) ||
        ((*(uint *)(local_1278 + 0x30) < 0x21 &&
         ((int)*(uint *)(local_1278 + 0x30) <= *(int *)(local_1278 + 0x34))))))) {
      lVar27 = *(longlong *)(local_1270 + 6);
      if (lVar27 == 0) {
        local_1458 = CONCAT35(local_1458._5_3_,0x100000000);
      }
      else {
        lVar13 = FUN_18017ea70();
        local_1458 = local_1458 & 0xffffffff00000000;
        *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
        cVar5 = FUN_1804514f0(&local_1458,lVar27,4);
        if (cVar5 == '\0') {
          local_1458._0_5_ = (uint5)(uint)local_1458;
        }
        else {
          local_1458._0_5_ = CONCAT14(1,(uint)local_1458);
        }
        lVar13 = FUN_18017ea70();
        if (*(int *)(lVar13 + 4) != 0) {
          *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + -1;
        }
      }
      if ((char)(local_1458 >> 0x20) != '\0') {
        uVar21 = puVar4[4];
        iVar24 = (int)local_1458;
        if ((((int)uVar21 <= iVar24) && (iVar24 <= (int)puVar4[5])) &&
           ((lVar27 != 0 || (puVar4[5] == 0)))) {
          if (iVar24 < iVar8) {
            iVar8 = iVar24;
          }
          if ((int)uVar21 < iVar8) {
            uVar18 = local_1438;
            do {
              lVar13 = lVar27 + ((longlong)(int)uVar21 + 1) * 8;
              lVar14 = FUN_18017ea70();
              *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + 1;
              bVar28 = false;
              if (lVar13 != 0) {
                local_1458 = 0;
                cVar5 = FUN_1804514f0(&local_1458,lVar13,8);
                if (cVar5 == '\0') {
                  bVar28 = false;
                }
                else {
                  bVar28 = true;
                  uVar18 = local_1458;
                }
              }
              lVar13 = FUN_18017ea70();
              if (*(int *)(lVar13 + 4) != 0) {
                *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + -1;
              }
              if (!bVar28) {
LAB_18024bddd:
                pcVar19 = "native_move_reuse_unreadable";
                goto LAB_18024ba53;
              }
              if (uVar18 != 0) {
                lVar13 = FUN_18017ea70();
                *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
                bVar28 = false;
                if (uVar18 + 0x10 != 0) {
                  local_13f0 = 0;
                  uStack_13ec = 0;
                  uStack_13e8 = 0;
                  uStack_13e4 = 0;
                  uStack_13e0 = 0;
                  uStack_13dc = 0;
                  uStack_13d8 = 0;
                  uStack_13d4 = 0;
                  uStack_13d0 = 0;
                  local_13cc = 0;
                  auVar30 = ZEXT1664(auVar30._0_16_);
                  cVar5 = FUN_1804514f0(&local_13f0,uVar18 + 0x10,0x28);
                  bVar28 = cVar5 != '\0';
                }
                lVar13 = FUN_18017ea70();
                if (*(int *)(lVar13 + 4) != 0) {
                  *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + -1;
                }
                if (!bVar28) goto LAB_18024bddd;
              }
              uVar21 = uVar21 + 1;
            } while ((int)uVar21 < iVar8);
          }
          FUN_18063ab10(local_1158,0,0x100);
          uVar12 = FUN_18063ab10(local_bd8,0,0x100);
          lVar27 = *(longlong *)(local_1448 + 0x38);
          if (lVar27 == 0) {
            iVar8 = 0;
          }
          else {
            lVar13 = FUN_18017ea70();
            local_1458 = local_1458 & 0xffffffff00000000;
            *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
            cVar5 = FUN_1804514f0(&local_1458,lVar27,4);
            iVar24 = (int)local_1450;
            if (cVar5 != '\0') {
              iVar24 = (uint)local_1458;
            }
            lVar13 = FUN_18017ea70();
            if (*(int *)(lVar13 + 4) != 0) {
              *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + -1;
            }
            iVar8 = 0;
            uVar12 = extraout_XMM0_Qa_00;
            if (cVar5 != '\0') {
              iVar8 = iVar24;
            }
          }
          lVar13 = 0;
          if (((*(char *)((longlong)plVar22 + 0x571) == '\0') ||
              (*(char *)((longlong)plVar22 + 0x573) == '\0')) ||
             (*(int *)(local_1448 + 0x30) <= iVar8)) {
            iVar8 = 0;
            if (*(char *)((longlong)plVar22 + 0x571) != '\0') {
              uVar18 = local_1438;
              do {
                if ((*(char *)((longlong)plVar22 + 0x573) == '\0') ||
                   (*(int *)(local_1448 + 0x30) <= iVar8)) break;
                lVar14 = lVar27 + ((longlong)iVar8 + 1) * 8;
                lVar15 = FUN_18017ea70();
                *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + 1;
                bVar28 = false;
                if (lVar14 != 0) {
                  local_1458 = 0;
                  cVar5 = FUN_1804514f0(&local_1458,lVar14,8);
                  if (cVar5 == '\0') {
                    bVar28 = false;
                  }
                  else {
                    bVar28 = true;
                    uVar18 = local_1458;
                  }
                }
                lVar14 = FUN_18017ea70();
                auVar29 = auVar30._0_16_;
                if (*(int *)(lVar14 + 4) != 0) {
                  *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + -1;
                }
                uVar20 = 0;
                if (bVar28) {
                  uVar20 = uVar18;
                }
                if (uVar20 == 0) {
                  uStack_1360 = 0;
                  puVar16 = local_13c8;
                }
                else {
                  puVar16 = (undefined1 *)FUN_18024eed0(local_12e8);
                  auVar29 = auVar30._0_16_;
                }
                lVar14 = *(longlong *)(puVar16 + 8);
                if ((puVar16[0x68] == '\0') || (lVar14 == 0)) {
                  pcVar19 = "native_history_view_missing";
                  goto LAB_18024ba53;
                }
                *(ulonglong *)((longlong)local_1158 + lVar13) = uVar20 + 0x10;
                lVar14 = lVar14 + 0x10;
                *(longlong *)((longlong)local_bd8 + lVar13) = lVar14;
                auVar30 = ZEXT1664(auVar29);
                lVar15 = FUN_18017ea70();
                *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + 1;
                bVar28 = false;
                if (lVar14 != 0) {
                  local_13f0 = 0;
                  uStack_13ec = 0;
                  uStack_13e8 = 0;
                  uStack_13e4 = 0;
                  uStack_13e0 = 0;
                  cVar5 = FUN_1804514f0(&local_13f0,lVar14,0x14);
                  bVar28 = cVar5 != '\0';
                }
                lVar14 = FUN_18017ea70();
                if (*(int *)(lVar14 + 4) != 0) {
                  *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + -1;
                }
                if (!bVar28) {
                  pcVar19 = "native_history_view_unreadable";
                  goto LAB_18024ba53;
                }
                iVar8 = iVar8 + 1;
                lVar13 = lVar13 + 8;
                uVar12 = extraout_XMM0_Qa_01;
              } while (*(char *)((longlong)plVar22 + 0x571) != '\0');
            }
            iVar24 = 0;
            uVar21 = puVar4[4];
            iVar8 = (int)local_1450;
            lVar27 = (longlong)(int)local_1450;
            local_1458 = CONCAT44(local_1458._4_4_,uVar21);
            uVar2 = uVar21;
            while ((int)uVar2 < iVar8) {
              lVar13 = FUN_1803dfb00(uVar12,puVar23);
              if (lVar13 == 0) {
                puVar4[4] = uVar21;
                pcVar19 = "native_move_allocation_failed";
                goto LAB_18024ba53;
              }
              uVar12 = extraout_XMM0_Qa_02;
              uVar2 = puVar4[4];
            }
            FUN_18063ab10(local_1258,0,0x100);
            lVar13 = *(longlong *)(puVar4 + 6);
            if (lVar13 == 0) {
              iVar9 = 0;
            }
            else {
              lVar14 = FUN_18017ea70();
              local_1450 = local_1450 & 0xffffffff00000000;
              *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + 1;
              cVar5 = FUN_1804514f0(&local_1450,lVar13,4);
              iVar3 = (int)local_1450;
              lVar14 = FUN_18017ea70();
              if (*(int *)(lVar14 + 4) != 0) {
                *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + -1;
              }
              iVar9 = 0;
              if (cVar5 != '\0') {
                iVar9 = iVar3;
              }
              uVar21 = (uint)local_1458;
            }
            if (iVar8 <= iVar9) {
              if (0 < iVar8) {
                lVar14 = 0;
                uVar18 = local_1438;
                do {
                  lVar15 = FUN_18017ea70();
                  *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + 1;
                  lVar15 = (longlong)iVar24 * 8 + 8 + lVar13;
                  bVar28 = false;
                  if (lVar15 != 0) {
                    local_1450 = 0;
                    cVar5 = FUN_1804514f0(&local_1450,lVar15,8);
                    if (cVar5 == '\0') {
                      bVar28 = false;
                    }
                    else {
                      bVar28 = true;
                      uVar18 = local_1450;
                    }
                  }
                  lVar15 = FUN_18017ea70();
                  if (*(int *)(lVar15 + 4) != 0) {
                    *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + -1;
                  }
                  uVar20 = 0;
                  if (bVar28) {
                    uVar20 = uVar18;
                  }
                  uVar25 = uVar20 + 0x10;
                  if (uVar20 == 0) {
                    uVar25 = 0;
                  }
                  local_1258[lVar14] = uVar25;
                  if (uVar25 == 0) {
LAB_18024c17f:
                    pcVar19 = "completed_move_unreadable";
                    local_1428[2] = (uint)local_1458;
                    goto LAB_18024ba53;
                  }
                  lVar15 = FUN_18017ea70();
                  uStack_13ec = 0;
                  uStack_13e8 = 0;
                  uStack_13e4 = 0;
                  uStack_13e0 = 0;
                  uStack_13dc = 0;
                  uStack_13d8 = 0;
                  uStack_13d4 = 0;
                  uStack_13d0 = 0;
                  *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + 1;
                  local_13f0 = 0;
                  local_13cc = 0;
                  auVar30 = ZEXT1664(auVar30._0_16_);
                  cVar5 = FUN_1804514f0(&local_13f0,uVar25,0x28);
                  lVar15 = FUN_18017ea70();
                  if (*(int *)(lVar15 + 4) != 0) {
                    *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + -1;
                  }
                  if (cVar5 == '\0') goto LAB_18024c17f;
                  iVar24 = iVar24 + 1;
                  lVar14 = lVar14 + 1;
                } while (lVar14 < lVar27);
              }
              lVar13 = local_1430;
              lVar27 = local_1448;
              local_14c0 = (double)CONCAT44(local_14c0._4_4_,*(undefined4 *)(local_1448 + 0x30));
              local_14c8 = local_bd8;
              local_14d0 = local_1158;
              local_14d8 = (undefined **)local_1258;
              FUN_18024efa0(local_1440,local_1278,local_1270,local_1430);
              if ((DAT_180cad6b8 == '\0') || (DAT_180cad2e0 != 1)) {
                uVar6 = 0;
              }
              else {
                uVar6 = 1;
              }
              *(undefined1 *)(local_1438 + 0xcd) = uVar6;
              plVar22[0xb0] = plVar22[0xb0] + 1;
              lVar14 = plVar22[0xb0];
              if (local_1268[0] < (ulonglong)plVar22[0xaf]) {
              }
              plVar22[0xaf] = local_1268[0] + 2000;
              iVar8 = 0;
              uVar21 = local_1428[2];
              if (0 < (int)uVar21) {
                puVar17 = local_1258;
                uVar18 = (ulonglong)uVar21;
                do {
                  if (((*(byte *)(*puVar17 + 8) & 2) == 0) ||
                     (iVar24 = 1, *(char *)(*puVar17 + 0x10) == '\0')) {
                    iVar24 = 0;
                  }
                  iVar8 = iVar8 + iVar24;
                  puVar17 = puVar17 + 1;
                  uVar18 = uVar18 - 1;
                } while (uVar18 != 0);
              }
              bVar1 = *(byte *)((longlong)plVar22 + 0x571);
              FUN_18063ab10(local_658,0,0x600);
              local_14a8 = *(uint *)(plVar22 + 7);
              local_14c0 = (double)*(float *)(lVar13 + 0xc);
              local_14a0 = local_1270[0x11];
              local_1468 = (double)(float)local_1270[0x13];
              local_1470 = (double)(float)local_1270[0x12];
              local_1480 = (uint)*(byte *)((longlong)plVar22 + 0x572);
              local_1488 = (uint)bVar1;
              local_1490 = (uint)local_1458;
              local_14b8 = *(undefined4 *)(lVar27 + 0x30);
              local_1498 = (uint)(local_14a8 != local_14a0);
              local_14c8 = (longlong *)(double)auVar30._0_4_;
              local_14d8 = *(undefined ***)(local_1278 + 8);
              local_14d0 = (longlong *)lVar14;
              local_14b0 = uVar21;
              local_1478 = iVar8;
              FUN_18015ad60(local_658,0x600,0xffffffffffffffff,
                            "command=%lld count=%llu native_yaw=%.3f completed_yaw=%.3f histories=%d subticks=%d captured_tick=%d live_tick=%d retimed=%d target_scan=0 prediction=0 crc_rebuild=pending network_send_observed=0 native_subticks=%d pose_owned=%d yaw_owned=%d jump_presses=%d forward=%.3f left=%.3f"
                           );
              local_14d8 = &PTR_180700558;
              if ((char)local_658[0] != '\0') {
                local_14d8 = (undefined **)&DAT_1806bcfc0;
              }
              local_14d0 = local_658;
              FUN_1800f6900(0);
              plVar22[0xb0] = 0;
            }
            pcVar19 = "completed_move_capacity";
            local_1428[2] = uVar21;
          }
          else {
            pcVar19 = "native_history_capacity";
          }
          goto LAB_18024ba53;
        }
      }
      pcVar19 = "native_move_capacity";
    }
    else {
      pcVar19 = "native_array_bounds";
    }
  }
  else {
    pcVar19 = "movement_rotation_capacity";
  }
LAB_18024ba53:
  FUN_18024c440(&local_1420,pcVar19);
}



