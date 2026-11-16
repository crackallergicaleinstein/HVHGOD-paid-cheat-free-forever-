// FUN_1802d58b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802d58b0 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802d58b0(undefined8 param_1,undefined8 *param_2,undefined *param_3)

{
  float fVar1;
  ulonglong ******ppppppuVar2;
  undefined1 auVar3 [16];
  char cVar4;
  char cVar5;
  int iVar6;
  ULONGLONG UVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  char *pcVar15;
  code *pcVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  char *pcVar19;
  undefined *puVar20;
  ulonglong uVar21;
  ulonglong *******pppppppuVar22;
  undefined4 uVar23;
  bool bVar24;
  bool bVar25;
  undefined8 uVar26;
  float fVar27;
  undefined1 auVar28 [64];
  undefined4 uVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [64];
  float fVar32;
  undefined1 auStack_15e8 [32];
  undefined **local_15c8;
  undefined8 *local_15c0;
  int local_15b8;
  undefined8 local_15a8;
  undefined1 local_1598 [16];
  int local_1588;
  char *local_1580;
  char local_1578;
  char *local_1568;
  undefined8 local_1560;
  int local_1558;
  undefined8 *local_1550;
  char *local_1548;
  undefined8 local_1540;
  ulonglong *******local_1538;
  ulonglong local_1530;
  undefined8 *local_1518;
  char *local_1508;
  longlong lStack_1500;
  undefined8 uStack_14f8;
  undefined8 uStack_14f0;
  undefined8 local_14b8;
  char *local_14b0;
  undefined8 local_14a8;
  char *local_14a0;
  ulonglong *******local_1498 [2];
  ulonglong local_1488;
  ulonglong local_1480;
  undefined1 local_1478 [16];
  undefined8 uStack_1468;
  undefined8 uStack_1460;
  undefined8 local_1458;
  undefined8 local_1450;
  undefined4 local_1448;
  undefined4 local_1444;
  undefined4 local_1440;
  undefined4 local_143c;
  undefined8 local_1438;
  undefined8 uStack_1430;
  undefined1 local_1428 [16];
  undefined2 local_1418;
  undefined4 local_1414;
  undefined4 local_1410;
  undefined4 local_140c;
  undefined1 local_1408;
  undefined4 local_1404;
  undefined4 local_1400;
  undefined4 local_13fc;
  undefined4 local_13f8;
  undefined4 local_13f4;
  undefined4 local_13f0;
  undefined4 local_13ec;
  undefined1 local_13e8 [4];
  undefined1 auStack_13e4 [4092];
  undefined4 local_3e8;
  undefined1 local_3e4 [800];
  undefined4 local_c4;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined4 local_b7;
  undefined2 local_b3;
  undefined1 local_b1;
  undefined2 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined1 local_90;
  undefined4 local_8c;
  ulonglong local_80;
  
  local_80 = DAT_1808d5f00 ^ (ulonglong)auStack_15e8;
  local_14a8 = 0;
  local_14a0 = "attacker";
  local_14b8 = 0;
  local_14b0 = "userid";
  local_15a8 = param_3;
  local_1550 = param_2;
  local_1518 = param_2;
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar9 = DAT_1808fcab0;
  lVar8 = DAT_1808da460;
  uVar21 = 1000;
  if ((DAT_1808fcab0 != DAT_1808da460) || (lVar14 = DAT_180c6e9e0, DAT_180c6e9e0 == 0)) {
    UVar7 = GetTickCount64();
    if ((lVar9 == lVar8) && (UVar7 < DAT_180c6e9e8)) {
      lVar14 = 0;
    }
    else {
      local_1580 = &DAT_1808fca00;
      iVar6 = FUN_1805f68d0(&DAT_1808fca00);
      if (iVar6 != 0) goto LAB_1802d70b1;
      if (DAT_1808fca4c == 0x7fffffff) {
        DAT_1808fca4c = 0x7ffffffe;
        goto LAB_1802d70c6;
      }
      if (DAT_1808fcab0 == lVar8) {
        if ((DAT_180c6e9e0 == 0) && (DAT_180c6e9e8 <= UVar7)) goto LAB_1802d5a19;
      }
      else {
        DAT_1808fca50 = 1000;
LAB_1802d5a19:
        lVar9 = -1;
        do {
          local_1598._8_8_ = lVar9 + 1;
          pcVar19 = "lient.dll:488D05*????????4D8BF8488901+80~" + lVar9;
          lVar9 = local_1598._8_8_;
        } while (*pcVar19 != '\0');
        local_1598._0_8_ = &DAT_1808267c0;
        local_1548 = "patterns::game_event_get_controller";
        local_1540 = 0x23;
        DAT_180c6e9e0 = FUN_1800e5d20(&local_1548,local_1598);
        DAT_1808fcab0 = lVar8;
        DAT_180c6e9e8 = 0xffffffffffffffff;
        if (DAT_180c6e9e0 == 0) {
          DAT_180c6e9e8 = DAT_1808fca50 + UVar7;
          if (DAT_1808fca50 < 60000) {
            DAT_1808fca50 = DAT_1808fca50 * 2;
          }
          else {
            DAT_1808fca50 = 60000;
          }
        }
        else {
          DAT_1808fca50 = 1000;
        }
      }
      lVar14 = DAT_180c6e9e0;
      FUN_1805f68fc(&DAT_1808fca00);
    }
    param_3 = local_15a8;
  }
  cVar4 = FUN_1804513c0(lVar14,1,2);
  cVar5 = '\0';
  if (cVar4 != '\0') {
    lVar8 = FUN_18017ea70();
    *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
    FUN_180252bd0(&local_1580,lVar14,param_3,&local_14a8);
    lVar8 = FUN_18017ea70();
    if (*(int *)(lVar8 + 4) != 0) {
      *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
    }
    cVar5 = local_1578;
  }
  pcVar19 = local_1580;
  if (cVar5 == '\0') {
    pcVar19 = (char *)0x0;
  }
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar9 = DAT_1808fca58;
  lVar8 = DAT_1808da460;
  if ((DAT_1808fca58 != DAT_1808da460) || (lVar14 = DAT_180c6e9d8, DAT_180c6e9d8 == 0)) {
    UVar7 = GetTickCount64();
    if ((lVar9 == lVar8) && (UVar7 < DAT_180c6e9c8)) {
      lVar14 = 0;
    }
    else {
      local_1580 = &DAT_1808fc9a0;
      iVar6 = FUN_1805f68d0(&DAT_1808fc9a0);
      if (iVar6 != 0) goto LAB_1802d70b1;
      if (DAT_1808fc9ec == 0x7fffffff) {
        DAT_1808fc9ec = 0x7ffffffe;
        goto LAB_1802d70c6;
      }
      if (DAT_1808fca58 == lVar8) {
        if ((DAT_180c6e9d8 == 0) && (DAT_180c6e9c8 <= UVar7)) goto LAB_1802d5be0;
      }
      else {
        DAT_1808fc9f0 = 1000;
LAB_1802d5be0:
        lVar9 = -1;
        do {
          local_1598._8_8_ = lVar9 + 1;
          pcVar15 = "lient.dll:488D05*????????4D8BF8488901+80~" + lVar9;
          lVar9 = local_1598._8_8_;
        } while (*pcVar15 != '\0');
        local_1598._0_8_ = &DAT_1808267c0;
        local_1548 = "patterns::game_event_get_controller";
        local_1540 = 0x23;
        DAT_180c6e9d8 = FUN_1800e5d20(&local_1548,local_1598);
        DAT_1808fca58 = lVar8;
        DAT_180c6e9c8 = 0xffffffffffffffff;
        if (DAT_180c6e9d8 == 0) {
          DAT_180c6e9c8 = DAT_1808fc9f0 + UVar7;
          if (DAT_1808fc9f0 < 60000) {
            DAT_1808fc9f0 = DAT_1808fc9f0 * 2;
          }
          else {
            DAT_1808fc9f0 = 60000;
          }
        }
        else {
          DAT_1808fc9f0 = 1000;
        }
      }
      lVar14 = DAT_180c6e9d8;
      FUN_1805f68fc(&DAT_1808fc9a0);
    }
  }
  cVar4 = FUN_1804513c0(lVar14,1,2);
  cVar5 = '\0';
  if (cVar4 != '\0') {
    lVar8 = FUN_18017ea70();
    *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
    FUN_180252bd0(&local_1580,lVar14,local_15a8,&local_14b8);
    lVar8 = FUN_18017ea70();
    if (*(int *)(lVar8 + 4) != 0) {
      *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
    }
    cVar5 = local_1578;
  }
  pcVar15 = local_1580;
  if (cVar5 == '\0') {
    pcVar15 = (char *)0x0;
  }
  local_1548 = pcVar15;
  AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  local_1508 = _DAT_180bb8890;
  lStack_1500 = lRam0000000180bb8898;
  uStack_14f8 = uRam0000000180bb88a0;
  uStack_14f0 = uRam0000000180bb88a8;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  if ((((local_1508 == (char *)0x0) || (pcVar19 == (char *)0x0)) || (pcVar15 == (char *)0x0)) ||
     ((pcVar19 != local_1508 || (pcVar15 == local_1508)))) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    *(undefined1 *)(param_2 + 4) = 0;
    *(undefined1 (*) [16])(param_2 + 5) = (undefined1  [16])0x0;
    param_2[7] = 0;
    param_2[8] = 0xf;
    *(undefined1 *)(param_2 + 5) = 0;
    param_2[9] = 0;
    *(undefined1 (*) [16])(param_2 + 10) = (undefined1  [16])0x0;
    param_2[0xc] = 0;
    goto LAB_1802d700b;
  }
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar9 = DAT_1808fc930;
  lVar8 = DAT_1808da460;
  if ((DAT_1808fc930 != DAT_1808da460) || (lVar14 = DAT_180c6e9d0, DAT_180c6e9d0 == 0)) {
    UVar7 = GetTickCount64();
    if ((lVar9 == lVar8) && (UVar7 < DAT_180c6e9c0)) {
      lVar14 = 0;
    }
    else {
      local_1580 = &DAT_1808fc940;
      iVar6 = FUN_1805f68d0(&DAT_1808fc940);
      if (iVar6 != 0) goto LAB_1802d70b1;
      if (DAT_1808fc98c == 0x7fffffff) {
        DAT_1808fc98c = 0x7ffffffe;
        goto LAB_1802d70c6;
      }
      if (DAT_1808fc930 == lVar8) {
        if ((DAT_180c6e9d0 == 0) && (DAT_180c6e9c0 <= UVar7)) goto LAB_1802d5e09;
      }
      else {
        DAT_1808fc990 = 1000;
LAB_1802d5e09:
        lVar9 = -1;
        do {
          local_1598._8_8_ = lVar9 + 1;
          pcVar19 = "lient.dll:488D05*????????4D8BF8488901+88~" + lVar9;
          lVar9 = local_1598._8_8_;
        } while (*pcVar19 != '\0');
        local_1598._0_8_ = &DAT_180826698;
        local_1568 = "patterns::game_event_get_pawn";
        local_1560 = 0x1d;
        DAT_180c6e9d0 = FUN_1800e5d20(&local_1568,local_1598);
        DAT_1808fc930 = lVar8;
        DAT_180c6e9c0 = 0xffffffffffffffff;
        if (DAT_180c6e9d0 == 0) {
          DAT_180c6e9c0 = DAT_1808fc990 + UVar7;
          if (DAT_1808fc990 < 60000) {
            DAT_1808fc990 = DAT_1808fc990 * 2;
          }
          else {
            DAT_1808fc990 = 60000;
          }
        }
        else {
          DAT_1808fc990 = 1000;
        }
      }
      lVar14 = DAT_180c6e9d0;
      FUN_1805f68fc(&DAT_1808fc940);
    }
  }
  cVar5 = FUN_1804513c0(lVar14,1,2);
  if (cVar5 == '\0') {
    local_1578 = '\0';
    puVar20 = local_15a8;
  }
  else {
    lVar8 = FUN_18017ea70();
    puVar20 = local_15a8;
    *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
    FUN_180252bd0(&local_1580,lVar14,local_15a8,&local_14b8);
    lVar8 = FUN_18017ea70();
    if (*(int *)(lVar8 + 4) != 0) {
      *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
    }
  }
  if (local_1578 == '\0') {
    local_1580 = (char *)0x0;
  }
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar9 = DAT_1808fc8d0;
  lVar8 = DAT_1808da460;
  if ((DAT_1808fc8d0 != DAT_1808da460) || (lVar14 = DAT_180c6e9b0, DAT_180c6e9b0 == 0)) {
    UVar7 = GetTickCount64();
    if ((lVar9 == lVar8) && (UVar7 < DAT_180c6e9b8)) {
      lVar14 = 0;
    }
    else {
      local_15a8 = &DAT_1808fc8e0;
      iVar6 = FUN_1805f68d0(&DAT_1808fc8e0);
      if (iVar6 != 0) goto LAB_1802d70b1;
      if (DAT_1808fc92c == 0x7fffffff) {
        DAT_1808fc92c = 0x7ffffffe;
        goto LAB_1802d70c6;
      }
      if (DAT_1808fc8d0 == lVar8) {
        if ((DAT_180c6e9b0 == 0) && (DAT_180c6e9b8 <= UVar7)) goto LAB_1802d5fe2;
      }
      else {
        DAT_1808fc8c0 = 1000;
LAB_1802d5fe2:
        lVar9 = -1;
        do {
          local_1598._8_8_ = lVar9 + 1;
          lVar14 = lVar9 + 1;
          lVar9 = local_1598._8_8_;
        } while ("client.dll:>E8????????3D00800000"[lVar14] != '\0');
        local_1598._0_8_ = "client.dll:>E8????????3D00800000";
        local_1568 = "patterns::game_event_get_int";
        local_1560 = 0x1c;
        DAT_180c6e9b0 = FUN_1800e5d20(&local_1568,local_1598);
        DAT_1808fc8d0 = lVar8;
        DAT_180c6e9b8 = 0xffffffffffffffff;
        if (DAT_180c6e9b0 == 0) {
          DAT_180c6e9b8 = DAT_1808fc8c0 + UVar7;
          if (DAT_1808fc8c0 < 60000) {
            DAT_1808fc8c0 = DAT_1808fc8c0 * 2;
          }
          else {
            DAT_1808fc8c0 = 60000;
          }
        }
        else {
          DAT_1808fc8c0 = 1000;
        }
      }
      lVar14 = DAT_180c6e9b0;
      FUN_1805f68fc(&DAT_1808fc8e0);
    }
  }
  cVar5 = FUN_1804513c0(lVar14,1,2);
  if (cVar5 == '\0') {
LAB_1802d60e2:
    local_1588 = -1;
  }
  else {
    lVar8 = FUN_18017ea70();
    *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
    local_15c8 = (undefined **)CONCAT44(local_15c8._4_4_,0xffffffff);
    FUN_1802875b0(&local_15a8,lVar14,puVar20,"dmg_health");
    lVar8 = FUN_18017ea70();
    if (*(int *)(lVar8 + 4) != 0) {
      *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
    }
    if (local_15a8._4_1_ == '\0') goto LAB_1802d60e2;
    local_1588 = (uint)local_15a8;
  }
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar9 = DAT_1808fc8c8;
  lVar8 = DAT_1808da460;
  if ((DAT_1808fc8c8 != DAT_1808da460) || (lVar14 = DAT_180c6e9a0, DAT_180c6e9a0 == 0)) {
    UVar7 = GetTickCount64();
    if ((lVar9 == lVar8) && (UVar7 < DAT_180c6e9a8)) {
      lVar14 = 0;
    }
    else {
      local_15a8 = &DAT_1808fc860;
      iVar6 = FUN_1805f68d0(&DAT_1808fc860);
      if (iVar6 != 0) {
LAB_1802d70b1:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808fc8ac == 0x7fffffff) {
        DAT_1808fc8ac = 0x7ffffffe;
LAB_1802d70c6:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if (DAT_1808fc8c8 == lVar8) {
        if ((DAT_180c6e9a0 == 0) && (DAT_180c6e9a8 <= UVar7)) goto LAB_1802d61b0;
      }
      else {
        DAT_1808fc8b0 = 1000;
LAB_1802d61b0:
        lVar9 = -1;
        do {
          local_1598._8_8_ = lVar9 + 1;
          lVar14 = lVar9 + 1;
          lVar9 = local_1598._8_8_;
        } while ("client.dll:>E8????????3D00800000"[lVar14] != '\0');
        local_1598._0_8_ = "client.dll:>E8????????3D00800000";
        local_1568 = "patterns::game_event_get_int";
        local_1560 = 0x1c;
        DAT_180c6e9a0 = FUN_1800e5d20(&local_1568,local_1598);
        DAT_1808fc8c8 = lVar8;
        DAT_180c6e9a8 = 0xffffffffffffffff;
        if (DAT_180c6e9a0 == 0) {
          DAT_180c6e9a8 = DAT_1808fc8b0 + UVar7;
          if (DAT_1808fc8b0 < 60000) {
            DAT_1808fc8b0 = DAT_1808fc8b0 * 2;
          }
          else {
            DAT_1808fc8b0 = 60000;
          }
        }
        else {
          DAT_1808fc8b0 = 1000;
        }
      }
      lVar14 = DAT_180c6e9a0;
      FUN_1805f68fc(&DAT_1808fc860);
    }
  }
  cVar5 = FUN_1804513c0(lVar14,1,2);
  if (cVar5 == '\0') {
LAB_1802d62ac:
    iVar6 = -1;
  }
  else {
    lVar8 = FUN_18017ea70();
    *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
    local_15c8 = (undefined **)CONCAT44(local_15c8._4_4_,0xffffffff);
    FUN_1802875b0(&local_15a8,lVar14,puVar20,"health");
    lVar8 = FUN_18017ea70();
    if (*(int *)(lVar8 + 4) != 0) {
      *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
    }
    iVar6 = (uint)local_15a8;
    if (local_15a8._4_1_ == '\0') goto LAB_1802d62ac;
  }
  local_15a8 = (undefined *)CONCAT44(local_15a8._4_4_,iVar6);
  if ((local_1588 < 1) || (iVar6 < 0)) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    *(undefined1 *)(param_2 + 4) = 0;
    *(undefined1 (*) [16])(param_2 + 5) = (undefined1  [16])0x0;
    param_2[7] = 0;
    param_2[8] = 0xf;
    *(undefined1 *)(param_2 + 5) = 0;
    param_2[9] = 0;
    *(undefined1 (*) [16])(param_2 + 10) = (undefined1  [16])0x0;
    param_2[0xc] = 0;
LAB_1802d700b:
    param_2[0xd] = 0xf;
    *(undefined1 *)(param_2 + 10) = 0;
  }
  FUN_1802cc9c0(local_1498,puVar20);
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar9 = DAT_1808fc8b8;
  lVar8 = DAT_1808da460;
  if ((DAT_1808fc8b8 == DAT_1808da460) && (pcVar16 = (code *)DAT_180c6e998, DAT_180c6e998 != 0)) {
LAB_1802d643d:
    local_1558 = (*pcVar16)(puVar20,"hitgroup",0);
  }
  else {
    UVar7 = GetTickCount64();
    if ((lVar9 != lVar8) || (DAT_180c6e988 <= UVar7)) {
      local_1568 = &DAT_1808fc800;
      iVar6 = FUN_1805f68d0(&DAT_1808fc800);
      if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808fc84c == 0x7fffffff) {
        DAT_1808fc84c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if (DAT_1808fc8b8 == lVar8) {
        if ((DAT_180c6e998 == 0) && (DAT_180c6e988 <= UVar7)) goto LAB_1802d6395;
      }
      else {
        DAT_1808fc850 = 1000;
LAB_1802d6395:
        lVar9 = -1;
        do {
          local_1598._8_8_ = lVar9 + 1;
          lVar14 = lVar9 + 1;
          lVar9 = local_1598._8_8_;
        } while ("client.dll:>E8????????3D00800000"[lVar14] != '\0');
        local_1598._0_8_ = "client.dll:>E8????????3D00800000";
        local_1538 = (ulonglong *******)0x1807d0ca8;
        local_1530 = 0x1c;
        DAT_180c6e998 = FUN_1800e5d20(&local_1538,local_1598);
        DAT_1808fc8b8 = lVar8;
        DAT_180c6e988 = 0xffffffffffffffff;
        if (DAT_180c6e998 == 0) {
          DAT_180c6e988 = UVar7 + DAT_1808fc850;
          uVar21 = DAT_1808fc850 * 2;
          if (59999 < DAT_1808fc850) {
            uVar21 = 60000;
          }
        }
        DAT_1808fc850 = uVar21;
      }
      pcVar16 = (code *)DAT_180c6e998;
      FUN_1805f68fc(&DAT_1808fc800);
      if (pcVar16 != (code *)0x0) goto LAB_1802d643d;
    }
    local_1558 = 0;
  }
  lVar8 = DAT_180bb8958;
  uVar23 = 0;
  lVar9 = FUN_18017ea70();
  *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
  lVar9 = 8;
  if (lVar8 == 0) {
    bVar25 = false;
    pcVar19 = local_1580;
  }
  else {
    local_1568 = (char *)0x0;
    cVar5 = FUN_1804514f0(&local_1568,lVar8,8);
    if (cVar5 == '\0') {
      bVar25 = false;
      pcVar19 = local_1580;
    }
    else {
      bVar25 = true;
      pcVar19 = local_1568;
    }
  }
  lVar8 = FUN_18017ea70();
  if (*(int *)(lVar8 + 4) != 0) {
    *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
  }
  if ((!bVar25) || (pcVar19 == (char *)0x0)) {
    auVar31 = ZEXT864(0);
    auVar30 = ZEXT816(0);
  }
  else {
    lVar8 = FUN_18017ea70();
    *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
    auVar31 = ZEXT864(0);
    if (pcVar19 + 0x30 == (char *)0x0) {
      auVar28 = ZEXT464((uint)local_15a8);
      uVar12 = 0;
    }
    else {
      local_1568 = (char *)((ulonglong)local_1568 & 0xffffffff00000000);
      cVar5 = FUN_1804514f0(&local_1568,pcVar19 + 0x30,4);
      if (cVar5 == '\0') {
        uVar12 = 0;
        auVar28 = ZEXT464((uint)local_15a8);
      }
      else {
        auVar28 = ZEXT464((uint)local_1568);
        uVar12 = 1;
      }
    }
    lVar8 = FUN_18017ea70();
    if (*(int *)(lVar8 + 4) != 0) {
      *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
    }
    auVar30 = vpcmpeqd_avx(ZEXT416(uVar12),SUB6416(ZEXT464(0),0));
    auVar30 = vblendvps_avx(auVar28._0_16_,auVar31._0_16_,auVar30);
  }
  auVar28 = ZEXT1664(auVar30);
  local_1568 = (char *)((ulonglong)local_1568 & 0xffffffff00000000);
  bVar25 = false;
  uStack_1468 = 0;
  uStack_1460 = 0xf;
  local_1478._1_15_ = SUB1615((undefined1  [16])0x0,1);
  auVar30[0xf] = 0;
  auVar30._0_15_ = local_1478._1_15_;
  local_1478 = auVar30 << 8;
  local_1598 = ZEXT816(0x180cc9b08);
  iVar6 = FUN_1805f68d0(&DAT_180cc9b08);
  pcVar15 = local_1548;
  pcVar19 = local_1580;
  if (iVar6 != 0) {
LAB_1802d70a6:
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_180cc9b54 == 0x7fffffff) {
    DAT_180cc9b54 = 0x7ffffffe;
LAB_1802d70fb:
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  local_1598[8] = 1;
  fVar32 = -0.05;
  fVar27 = 1.0;
  puVar17 = DAT_180cc9a08;
  puVar18 = DAT_180cc9a10;
  while( true ) {
    local_1538 = (ulonglong *******)local_1498;
    if (0xf < local_1480) {
      local_1538 = local_1498[0];
    }
    local_1530 = local_1488;
    cVar5 = FUN_1802cccd0(&local_1538);
    if ((cVar5 == '\0') || (puVar17 == DAT_180cc9a10)) break;
    if (pcVar19 == (char *)0x0) {
      bVar24 = (char *)puVar17[1] == pcVar15;
    }
    else {
      bVar24 = (char *)*puVar17 == pcVar19;
    }
    if ((((bVar24) || (*(char *)((longlong)puVar17 + 0x13a4) != '\0')) &&
        (*(char *)((longlong)puVar17 + 0x13a7) == '\0')) && (*(char *)(puVar17 + 0x274) != '\0')) {
      fVar1 = auVar28._0_4_ - *(float *)(puVar17 + 0xd);
      if (((fVar32 <= fVar1) && (fVar1 <= fVar27)) &&
         ((puVar18 == DAT_180cc9a10 ||
          ((*(char *)((longlong)puVar18 + 0x13a4) != '\0' &&
           (*(char *)((longlong)puVar17 + 0x13a4) == '\0')))))) {
        puVar18 = puVar17;
      }
    }
    puVar17 = puVar17 + 0x27a;
  }
  iVar6 = (uint)local_1568;
  if (puVar18 == DAT_180cc9a10) {
    local_1538 = (ulonglong *******)local_1498;
    if (0xf < local_1480) {
      local_1538 = local_1498[0];
    }
    local_1530 = local_1488;
    cVar5 = FUN_1802cccd0(&local_1538);
    if (cVar5 != '\0') {
      local_1458 = 0;
      local_1450 = 0;
      local_1448 = 0;
      local_1444 = auVar31._0_4_;
      local_1438 = 0;
      uStack_1430 = 0;
      local_1428 = ZEXT816(0);
      local_1418 = 0;
      local_1408 = 1;
      local_13f8 = 0x7f7fffff;
      local_13f4 = 0;
      local_1440 = local_1444;
      local_143c = local_1444;
      local_1414 = local_1444;
      local_1410 = local_1444;
      local_140c = local_1444;
      local_1404 = local_1444;
      local_1400 = local_1444;
      local_13fc = local_1444;
      local_13ec = local_1444;
      FUN_18063ab10(local_13e8,0,0x1000);
      puVar10 = auStack_13e4;
      do {
        *(undefined8 *)(puVar10 + -4) = 0;
        *(undefined8 *)(puVar10 + 4) = 0;
        *(undefined8 *)(puVar10 + 0xc) = 0;
        *(undefined4 *)(puVar10 + 0x14) = 0;
        *(undefined8 *)(puVar10 + 0x18) = 0x3f800000;
        *(undefined8 *)(puVar10 + 0x20) = 0;
        *(undefined8 *)(puVar10 + 0x28) = 0;
        *(undefined8 *)(puVar10 + 0x30) = 0;
        *(undefined8 *)(puVar10 + 0x38) = 0x3f800000;
        *(undefined8 *)(puVar10 + 0x40) = 0;
        *(undefined8 *)(puVar10 + 0x48) = 0;
        *(undefined8 *)(puVar10 + 0x50) = 0;
        *(undefined8 *)(puVar10 + 0x58) = 0x3f800000;
        *(undefined8 *)(puVar10 + 0x60) = 0;
        *(undefined8 *)(puVar10 + 0x68) = 0;
        *(undefined8 *)(puVar10 + 0x70) = 0;
        *(undefined8 *)(puVar10 + 0x78) = 0x3f800000;
        *(undefined8 *)(puVar10 + 0x80) = 0;
        *(undefined8 *)(puVar10 + 0x88) = 0;
        *(undefined8 *)(puVar10 + 0x90) = 0;
        *(undefined8 *)(puVar10 + 0x98) = 0x3f800000;
        *(undefined8 *)(puVar10 + 0xa0) = 0;
        *(undefined8 *)(puVar10 + 0xa8) = 0;
        *(undefined8 *)(puVar10 + 0xb0) = 0;
        *(undefined8 *)(puVar10 + 0xb8) = 0x3f800000;
        *(undefined8 *)(puVar10 + 0xc0) = 0;
        *(undefined8 *)(puVar10 + 200) = 0;
        *(undefined8 *)(puVar10 + 0xd0) = 0;
        *(undefined8 *)(puVar10 + 0xd8) = 0x3f800000;
        *(undefined8 *)(puVar10 + 0xe0) = 0;
        *(undefined8 *)(puVar10 + 0xe8) = 0;
        *(undefined8 *)(puVar10 + 0xf0) = 0;
        *(undefined8 *)(puVar10 + 0xf8) = 0x3f800000;
        *(undefined8 *)(puVar10 + 0x100) = 0;
        *(undefined8 *)(puVar10 + 0x108) = 0;
        *(undefined8 *)(puVar10 + 0x110) = 0;
        *(undefined8 *)(puVar10 + 0x118) = 0x3f800000;
        *(undefined8 *)(puVar10 + 0x120) = 0;
        *(undefined8 *)(puVar10 + 0x128) = 0;
        *(undefined8 *)(puVar10 + 0x130) = 0;
        *(undefined8 *)(puVar10 + 0x138) = 0x3f800000;
        *(undefined8 *)(puVar10 + 0x140) = 0;
        *(undefined8 *)(puVar10 + 0x148) = 0;
        *(undefined8 *)(puVar10 + 0x150) = 0;
        *(undefined8 *)(puVar10 + 0x158) = 0x3f800000;
        *(undefined8 *)(puVar10 + 0x160) = 0;
        *(undefined8 *)(puVar10 + 0x168) = 0;
        *(undefined8 *)(puVar10 + 0x170) = 0;
        *(undefined8 *)(puVar10 + 0x178) = 0x3f800000;
        *(undefined8 *)(puVar10 + 0x180) = 0;
        *(undefined8 *)(puVar10 + 0x188) = 0;
        *(undefined8 *)(puVar10 + 400) = 0;
        *(undefined8 *)(puVar10 + 0x198) = 0x3f800000;
        *(undefined8 *)(puVar10 + 0x1a0) = 0;
        *(undefined8 *)(puVar10 + 0x1a8) = 0;
        *(undefined8 *)(puVar10 + 0x1b0) = 0;
        *(undefined8 *)(puVar10 + 0x1b8) = 0x3f800000;
        *(undefined8 *)(puVar10 + 0x1c0) = 0;
        *(undefined8 *)(puVar10 + 0x1c8) = 0;
        *(undefined8 *)(puVar10 + 0x1d0) = 0;
        *(undefined8 *)(puVar10 + 0x1d8) = 0x3f800000;
        *(undefined8 *)(puVar10 + 0x1e0) = 0;
        *(undefined8 *)(puVar10 + 0x1e8) = 0;
        *(undefined8 *)(puVar10 + 0x1f0) = 0;
        *(undefined4 *)(puVar10 + 0x1f8) = 0x3f800000;
        puVar10 = puVar10 + 0x200;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
      local_3e8 = 0;
      FUN_18063ab10(local_3e4,0,800);
      FUN_180233c60(local_3e4);
      local_c4 = 0;
      local_c0 = 0;
      local_b7 = 0x1000000;
      local_b3 = 0;
      local_b0 = 0;
      local_ac = auVar31._0_4_;
      local_a0 = 0;
      local_90 = 0;
      local_8c = 0;
      local_b8 = 1;
      local_b1 = 1;
      local_13f0 = auVar28._0_4_;
      local_a8 = local_ac;
      local_a4 = local_ac;
      local_9c = local_ac;
      local_98 = local_ac;
      local_94 = local_ac;
      if (DAT_180cc9a10 == DAT_180cc9a18) {
        FUN_1802ea6b0(&DAT_180cc9a08,DAT_180cc9a10,&local_1458);
      }
      else {
        FUN_18063aed0(DAT_180cc9a10,&local_1458,0x13d0);
        DAT_180cc9a10 = DAT_180cc9a10 + 0x27a;
      }
      if (0x20 < (ulonglong)(((longlong)DAT_180cc9a10 - (longlong)DAT_180cc9a08) / 0x13d0)) {
        FUN_18063aed0(DAT_180cc9a08,DAT_180cc9a08 + 0x27a,
                      (longlong)DAT_180cc9a10 - (longlong)(DAT_180cc9a08 + 0x27a));
        DAT_180cc9a10 = DAT_180cc9a10 + -0x27a;
      }
    }
  }
  else {
    iVar6 = *(int *)(puVar18 + 2);
    bVar25 = *(char *)((longlong)puVar18 + 0x13a4) == '\0';
    uVar23 = *(undefined4 *)((longlong)puVar18 + 0x13cc);
    auVar31 = ZEXT464(*(uint *)((longlong)puVar18 + 0x14));
    *(undefined1 *)((longlong)puVar18 + 0x13a7) = 1;
    FUN_18063ab10(&local_1458,0,0x600);
    iVar13 = local_1558;
    local_15b8 = local_1558;
    local_15c0 = (undefined8 *)CONCAT44(local_15c0._4_4_,local_1588);
    local_15c8 = (undefined **)puVar18[0x273];
    FUN_18015ad60(&local_1458,0x600,0xffffffffffffffff,
                  "command=%lld damage=%d hitgroup=%d source=player_hurt correlation=ordered");
    local_15c8 = &PTR_180700558;
    if ((char)local_1458 != '\0') {
      local_15c8 = (undefined **)&DAT_1806bcfc0;
    }
    local_15c0 = &local_1458;
    uVar26 = FUN_1800f6900(0);
    if ((0 < iVar6) && (iVar13 != iVar6)) {
      lVar8 = FUN_1802d5420(uVar26,puVar18);
      lVar9 = -1;
      do {
        lVar9 = lVar9 + 1;
      } while (*(char *)(lVar8 + lVar9) != '\0');
      FUN_180113930(local_1478,lVar8);
    }
  }
  FUN_1805f68fc(&DAT_180cc9b08);
  lVar8 = lStack_1500;
  puVar17 = local_1550;
  auVar30 = auVar31._0_16_;
  uVar29 = auVar31._0_4_;
  if ((bVar25 == false) && (lStack_1500 != 0)) {
    iVar13 = DAT_180c6e990;
    if (DAT_180c6e990 == 0) {
      auVar31 = ZEXT1664(auVar30);
      UVar7 = GetTickCount64();
      auVar30 = auVar31._0_16_;
      if (UVar7 < DAT_180c6e970) {
        iVar13 = 0;
      }
      else {
        local_1550 = (undefined8 *)&DAT_1808fc7b0;
        iVar13 = FUN_1805f68d0(&DAT_1808fc7b0);
        if (iVar13 != 0) goto LAB_1802d70a6;
        if (DAT_1808fc7fc == 0x7fffffff) {
          DAT_1808fc7fc = 0x7ffffffe;
          goto LAB_1802d70fb;
        }
        if ((DAT_180c6e990 == 0) && (DAT_180c6e970 <= UVar7)) {
          DAT_180c6e990 = FUN_1804174b0("C_BasePlayerPawn",0x51b23a93);
          if (DAT_180c6e990 == 0) {
            DAT_180c6e970 = UVar7 + 1000;
          }
          else {
            DAT_180c6e970 = 0xffffffffffffffff;
          }
        }
        iVar13 = DAT_180c6e990;
        FUN_1805f68fc(&DAT_1808fc7b0);
        auVar30 = auVar31._0_16_;
      }
    }
    uVar29 = auVar30._0_4_;
    lVar8 = *(longlong *)(iVar13 + lVar8);
    if (lVar8 != 0) {
      iVar13 = DAT_180c6e978;
      if (DAT_180c6e978 == 0) {
        auVar31 = ZEXT1664(auVar30);
        UVar7 = GetTickCount64();
        auVar30 = auVar31._0_16_;
        if (UVar7 < DAT_180c6e980) {
          iVar13 = 0;
        }
        else {
          local_1550 = (undefined8 *)&DAT_1808fc710;
          iVar13 = FUN_1805f68d0(&DAT_1808fc710);
          if (iVar13 != 0) goto LAB_1802d70a6;
          if (DAT_1808fc75c == 0x7fffffff) {
            DAT_1808fc75c = 0x7ffffffe;
            goto LAB_1802d70fb;
          }
          if ((DAT_180c6e978 == 0) && (DAT_180c6e980 <= UVar7)) {
            DAT_180c6e978 = FUN_1804174b0("CPlayer_WeaponServices",0x940131c5);
            if (DAT_180c6e978 == 0) {
              DAT_180c6e980 = UVar7 + 1000;
            }
            else {
              DAT_180c6e980 = 0xffffffffffffffff;
            }
          }
          iVar13 = DAT_180c6e978;
          FUN_1805f68fc(&DAT_1808fc710);
          auVar30 = auVar31._0_16_;
        }
      }
      uVar29 = auVar30._0_4_;
      if (*(int *)(iVar13 + lVar8) != 0) {
        auVar31 = ZEXT1664(auVar30);
        lVar8 = FUN_1803d4150();
        uVar29 = auVar31._0_4_;
        if (lVar8 != 0) {
          iVar13 = DAT_180c6e964;
          if (DAT_180c6e964 == 0) {
            UVar7 = GetTickCount64();
            if (UVar7 < DAT_180c6e968) {
              iVar13 = 0;
            }
            else {
              local_1550 = (undefined8 *)&DAT_1808fc760;
              iVar13 = FUN_1805f68d0(&DAT_1808fc760);
              if (iVar13 != 0) goto LAB_1802d70a6;
              if (DAT_1808fc7ac == 0x7fffffff) {
                DAT_1808fc7ac = 0x7ffffffe;
                goto LAB_1802d70fb;
              }
              if ((DAT_180c6e964 == 0) && (DAT_180c6e968 <= UVar7)) {
                DAT_180c6e964 = FUN_1804174b0("C_BaseEntity",0xc02ce796);
                if (DAT_180c6e964 == 0) {
                  DAT_180c6e968 = UVar7 + 1000;
                }
                else {
                  DAT_180c6e968 = 0xffffffffffffffff;
                }
              }
              iVar13 = DAT_180c6e964;
              FUN_1805f68fc(&DAT_1808fc760);
            }
          }
          uVar29 = auVar31._0_4_;
          lVar8 = *(longlong *)((longlong)iVar13 + 8 + lVar8);
          if (lVar8 != 0) {
            iVar13 = DAT_180c6e950;
            if (DAT_180c6e950 == 0) {
              UVar7 = GetTickCount64();
              uVar29 = auVar31._0_4_;
              if (UVar7 < DAT_180c6e958) {
                iVar13 = 0;
              }
              else {
                local_1550 = (undefined8 *)&DAT_1808fc6c0;
                iVar13 = FUN_1805f68d0(&DAT_1808fc6c0);
                if (iVar13 != 0) goto LAB_1802d70a6;
                if (DAT_1808fc70c == 0x7fffffff) {
                  DAT_1808fc70c = 0x7ffffffe;
                  goto LAB_1802d70fb;
                }
                if ((DAT_180c6e950 == 0) && (DAT_180c6e958 <= UVar7)) {
                  DAT_180c6e950 = FUN_1804174b0("CCSWeaponBaseVData",0xb2a4b729);
                  DAT_180c6e958 = 0xffffffffffffffff;
                  if (DAT_180c6e950 == 0) {
                    DAT_180c6e958 = UVar7 + 1000;
                  }
                }
                iVar13 = DAT_180c6e950;
                FUN_1805f68fc(&DAT_1808fc6c0);
                uVar29 = auVar31._0_4_;
              }
            }
            uVar23 = *(undefined4 *)(iVar13 + lVar8);
          }
        }
      }
    }
  }
  *puVar17 = local_1548;
  puVar17[1] = local_1580;
  *(int *)(puVar17 + 2) = local_1588;
  *(uint *)((longlong)puVar17 + 0x14) = (uint)local_15a8;
  *(int *)(puVar17 + 3) = local_1558;
  *(int *)((longlong)puVar17 + 0x1c) = iVar6;
  *(bool *)(puVar17 + 4) = bVar25;
  puVar17[5] = local_1478._0_8_;
  puVar17[6] = local_1478._8_8_;
  puVar17[7] = uStack_1468;
  puVar17[8] = uStack_1460;
  uStack_1468 = 0;
  uStack_1460 = 0xf;
  auVar3[0xf] = 0;
  auVar3._0_15_ = local_1478._1_15_;
  local_1478 = auVar3 << 8;
  *(undefined4 *)(puVar17 + 9) = uVar23;
  *(undefined4 *)((longlong)puVar17 + 0x4c) = uVar29;
  *(undefined1 (*) [16])(puVar17 + 10) = (undefined1  [16])0x0;
  puVar17[0xc] = 0;
  puVar17[0xd] = 0;
  pppppppuVar22 = (ulonglong *******)local_1498;
  if (0xf < local_1480) {
    pppppppuVar22 = local_1498[0];
  }
  if (0x7fffffffffffffff < local_1488) {
                    /* WARNING: Subroutine does not return */
    FUN_18015bb70();
  }
  if (local_1488 < 0x10) {
    puVar17[0xc] = local_1488;
    puVar17[0xd] = 0xf;
    ppppppuVar2 = pppppppuVar22[1];
    puVar17[10] = *pppppppuVar22;
    puVar17[0xb] = ppppppuVar2;
  }
  else {
    uVar11 = local_1488 | 0xf;
    uVar21 = 0x7fffffffffffffff;
    if ((uVar11 < 0x8000000000000000) && (uVar21 = uVar11, uVar11 < 0x16)) {
      uVar21 = 0x16;
    }
    uVar26 = FUN_18015bca0(uVar21 + 1);
    puVar17[10] = uVar26;
    puVar17[0xc] = local_1488;
    puVar17[0xd] = uVar21;
    FUN_18063aed0(uVar26,pppppppuVar22,local_1488 + 1);
  }
  FUN_18015c010(local_1478);
  FUN_18015c010(local_1498);
}



