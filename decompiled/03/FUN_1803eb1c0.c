// FUN_1803eb1c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803eb1c0 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803eb1c0(int param_1,undefined *param_2,uint param_3,undefined4 *param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  undefined4 *puVar16;
  char cVar17;
  byte bVar18;
  short sVar19;
  uint uVar20;
  ulonglong uVar21;
  ULONGLONG UVar22;
  longlong lVar23;
  float *pfVar24;
  undefined8 *puVar25;
  int iVar26;
  uint uVar27;
  undefined *puVar28;
  float *pfVar29;
  uint *puVar30;
  undefined *puVar31;
  float fVar32;
  undefined *puVar33;
  undefined *extraout_XMM0_Qa;
  undefined *extraout_XMM0_Qa_00;
  undefined1 auVar34 [16];
  undefined1 extraout_var [56];
  float fVar35;
  undefined8 uVar36;
  undefined1 auVar37 [64];
  undefined8 uVar38;
  undefined1 auVar39 [64];
  float fVar40;
  undefined1 auVar41 [64];
  undefined1 auVar42 [64];
  undefined1 auVar43 [64];
  undefined1 auVar44 [64];
  float fVar45;
  undefined1 auVar46 [64];
  undefined1 auStack_1588 [32];
  float local_1568;
  float local_1560;
  uint local_1558 [2];
  undefined8 local_1550;
  undefined8 local_1538;
  float local_1530;
  uint local_1528;
  float local_1524;
  undefined *local_1520;
  undefined *local_1518;
  undefined8 local_1508;
  float fStack_1500;
  uint uStack_14fc;
  int local_14f8;
  uint local_14f4;
  ulonglong local_14f0;
  undefined4 *local_14e8;
  undefined8 local_14e0;
  undefined4 local_14d8;
  undefined8 local_14d0;
  float local_14c8;
  undefined8 local_14c0;
  undefined4 local_14b8;
  undefined8 local_14b4;
  undefined4 local_14ac;
  undefined4 local_14a8;
  undefined4 local_1498;
  undefined1 local_1488 [16];
  uint local_1478 [24];
  float local_1418 [8];
  float local_13f8 [192];
  int local_10f8;
  float local_10e8 [1024];
  ulonglong local_e8;
  
  local_e8 = DAT_1808d5f00 ^ (ulonglong)auStack_1588;
  if (1 < param_1 - 4U) {
  }
  local_1518 = &DAT_180c62940 + (ulonglong)(param_1 - 4U) * 0x10;
  local_1528 = param_3;
  local_1520 = param_2;
  local_14e8 = param_4;
  uVar21 = FUN_1803d4150(&DAT_180c62940,param_3);
  local_14f0 = uVar21;
  if (uVar21 == 0) {
    puVar31 = (undefined *)0x0;
  }
  else {
    iVar26 = DAT_180c7c4b0;
    if (DAT_180c7c4b0 == 0) {
      UVar22 = GetTickCount64();
      if (UVar22 < DAT_180c7c4a8) {
        iVar26 = 0;
      }
      else {
        local_1550 = (float *)&DAT_1809bb5c0;
        iVar26 = FUN_1805f68d0(&DAT_1809bb5c0);
        if (iVar26 != 0) goto LAB_1803ec9f7;
        if (DAT_1809bb60c == 0x7fffffff) {
          DAT_1809bb60c = 0x7ffffffe;
          goto LAB_1803eca0c;
        }
        if ((DAT_180c7c4b0 == 0) && (DAT_180c7c4a8 <= UVar22)) {
          DAT_180c7c4b0 = FUN_1804174b0("CEntityInstance",0xa8a45978);
          if (DAT_180c7c4b0 == 0) {
            DAT_180c7c4a8 = UVar22 + 1000;
          }
          else {
            DAT_180c7c4a8 = 0xffffffffffffffff;
          }
        }
        iVar26 = DAT_180c7c4b0;
        FUN_1805f68fc(&DAT_1809bb5c0);
      }
    }
    lVar23 = FUN_18017ea70();
    *(int *)(lVar23 + 4) = *(int *)(lVar23 + 4) + 1;
    if ((longlong)iVar26 + uVar21 == 0) {
      bVar12 = false;
      puVar28 = local_1518;
    }
    else {
      local_1550 = (float *)0x0;
      cVar17 = FUN_1804514f0(&local_1550,(longlong)iVar26 + uVar21,8);
      if (cVar17 == '\0') {
        bVar12 = false;
        puVar28 = local_1518;
      }
      else {
        bVar12 = true;
        puVar28 = (undefined *)local_1550;
      }
    }
    lVar23 = FUN_18017ea70();
    if (*(int *)(lVar23 + 4) != 0) {
      *(int *)(lVar23 + 4) = *(int *)(lVar23 + 4) + -1;
    }
    puVar31 = (undefined *)0x0;
    if (bVar12) {
      puVar31 = puVar28;
    }
  }
  if ((param_2 == (undefined *)0x0) || (puVar31 == (undefined *)0x0)) goto LAB_1803ec974;
  lVar23 = FUN_18017ea70();
  *(int *)(lVar23 + 4) = *(int *)(lVar23 + 4) + 1;
  if (puVar31 + 0x10 == (undefined *)0x0) {
    bVar12 = false;
    uVar27 = local_1528;
  }
  else {
    local_1558[0] = 0;
    cVar17 = FUN_1804514f0(local_1558,puVar31 + 0x10,4);
    if (cVar17 == '\0') {
      bVar12 = false;
      uVar27 = local_1528;
    }
    else {
      bVar12 = true;
      uVar27 = local_1558[0];
    }
  }
  lVar23 = FUN_18017ea70();
  if (*(int *)(lVar23 + 4) != 0) {
    *(int *)(lVar23 + 4) = *(int *)(lVar23 + 4) + -1;
  }
  uVar20 = 0;
  if (bVar12) {
    uVar20 = uVar27;
  }
  if (uVar20 != param_3) goto LAB_1803ec974;
  iVar26 = DAT_180c7c4b4;
  if (DAT_180c7c4b4 == 0) {
    UVar22 = GetTickCount64();
    if (UVar22 < DAT_180c7c4b8) {
      iVar26 = 0;
    }
    else {
      local_1550 = (float *)&DAT_1809bb610;
      iVar26 = FUN_1805f68d0(&DAT_1809bb610);
      if (iVar26 != 0) goto LAB_1803ec9f7;
      if (DAT_1809bb65c == 0x7fffffff) {
        DAT_1809bb65c = 0x7ffffffe;
        goto LAB_1803eca0c;
      }
      if ((DAT_180c7c4b4 == 0) && (DAT_180c7c4b8 <= UVar22)) {
        DAT_180c7c4b4 = FUN_1804174b0("CEntityIdentity",0xbecfac7);
        if (DAT_180c7c4b4 == 0) {
          DAT_180c7c4b8 = UVar22 + 1000;
        }
        else {
          DAT_180c7c4b8 = 0xffffffffffffffff;
        }
      }
      iVar26 = DAT_180c7c4b4;
      FUN_1805f68fc(&DAT_1809bb610);
    }
  }
  lVar23 = FUN_18017ea70();
  *(int *)(lVar23 + 4) = *(int *)(lVar23 + 4) + 1;
  if (puVar31 + iVar26 == (undefined *)0x0) {
    bVar12 = false;
    uVar27 = local_1528;
  }
  else {
    local_1558[0] = 0;
    cVar17 = FUN_1804514f0(local_1558,puVar31 + iVar26,4);
    if (cVar17 == '\0') {
      bVar12 = false;
      uVar27 = local_1528;
    }
    else {
      bVar12 = true;
      uVar27 = local_1558[0];
    }
  }
  lVar23 = FUN_18017ea70();
  if (*(int *)(lVar23 + 4) != 0) {
    *(int *)(lVar23 + 4) = *(int *)(lVar23 + 4) + -1;
  }
  if ((!bVar12) || (-1 < (int)uVar27)) goto LAB_1803ec974;
  iVar26 = DAT_180c7c4c8;
  if (DAT_180c7c4c8 == 0) {
    UVar22 = GetTickCount64();
    if (UVar22 < DAT_180c7c4c0) {
      iVar26 = 0;
    }
    else {
      local_1550 = (float *)&DAT_1809bb4d0;
      iVar26 = FUN_1805f68d0(&DAT_1809bb4d0);
      if (iVar26 != 0) goto LAB_1803ec9f7;
      if (DAT_1809bb51c == 0x7fffffff) {
        DAT_1809bb51c = 0x7ffffffe;
        goto LAB_1803eca0c;
      }
      if ((DAT_180c7c4c8 == 0) && (DAT_180c7c4c0 <= UVar22)) {
        DAT_180c7c4c8 = FUN_1804174b0("C_BaseEntity",0x9d930423);
        if (DAT_180c7c4c8 == 0) {
          DAT_180c7c4c0 = UVar22 + 1000;
        }
        else {
          DAT_180c7c4c0 = 0xffffffffffffffff;
        }
      }
      iVar26 = DAT_180c7c4c8;
      FUN_1805f68fc(&DAT_1809bb4d0);
    }
  }
  lVar23 = FUN_18017ea70();
  *(int *)(lVar23 + 4) = *(int *)(lVar23 + 4) + 1;
  if ((longlong)iVar26 + local_14f0 == 0) {
    bVar12 = false;
    puVar31 = local_1518;
  }
  else {
    local_1550 = (float *)0x0;
    cVar17 = FUN_1804514f0(&local_1550,(longlong)iVar26 + local_14f0,8);
    if (cVar17 == '\0') {
      bVar12 = false;
      puVar31 = local_1518;
    }
    else {
      bVar12 = true;
      puVar31 = (undefined *)local_1550;
    }
  }
  lVar23 = FUN_18017ea70();
  if (*(int *)(lVar23 + 4) != 0) {
    *(int *)(lVar23 + 4) = *(int *)(lVar23 + 4) + -1;
  }
  if (bVar12) {
    local_1550 = (float *)puVar31;
    if (puVar31 == (undefined *)0x0) goto LAB_1803eb784;
    iVar26 = DAT_180c7c488;
    if (DAT_180c7c488 == 0) {
      UVar22 = GetTickCount64();
      if (UVar22 < DAT_180c7c490) {
        iVar26 = 0;
      }
      else {
        local_1550 = (float *)&DAT_1809bb520;
        iVar26 = FUN_1805f68d0(&DAT_1809bb520);
        if (iVar26 != 0) {
LAB_1803ec9f7:
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(5);
        }
        if (DAT_1809bb56c == 0x7fffffff) {
          DAT_1809bb56c = 0x7ffffffe;
LAB_1803eca0c:
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(6);
        }
        if ((DAT_180c7c488 == 0) && (DAT_180c7c490 <= UVar22)) {
          DAT_180c7c488 = FUN_1804174b0("CSkeletonInstance",0x52ac8c4f);
          if (DAT_180c7c488 == 0) {
            DAT_180c7c490 = UVar22 + 1000;
          }
          else {
            DAT_180c7c490 = 0xffffffffffffffff;
          }
        }
        iVar26 = DAT_180c7c488;
        FUN_1805f68fc(&DAT_1809bb520);
      }
    }
    lVar23 = FUN_18017ea70();
    *(int *)(lVar23 + 4) = *(int *)(lVar23 + 4) + 1;
    if (puVar31 + (longlong)iVar26 + 0x80 == (undefined *)0x0) {
      bVar12 = false;
      puVar33 = local_1518;
    }
    else {
      local_1550 = (float *)0x0;
      cVar17 = FUN_1804514f0(&local_1550,puVar31 + (longlong)iVar26 + 0x80,8);
      if (cVar17 == '\0') {
        bVar12 = false;
        puVar33 = local_1518;
      }
      else {
        bVar12 = true;
        puVar33 = (undefined *)local_1550;
      }
    }
    lVar23 = FUN_18017ea70();
    iVar26 = *(int *)(lVar23 + 4);
    if (iVar26 != 0) {
      iVar26 = iVar26 + -1;
      *(int *)(lVar23 + 4) = iVar26;
    }
    puVar28 = (undefined *)0x0;
    if (bVar12) {
      puVar28 = puVar33;
    }
    local_1550 = (float *)puVar31;
    if (puVar28 == (undefined *)0x0) goto LAB_1803eb787;
    iVar26 = FUN_1803d2d50(iVar26,puVar31);
    local_1550 = (float *)puVar31;
  }
  else {
    local_1550 = (float *)0x0;
LAB_1803eb784:
    puVar28 = (undefined *)0x0;
LAB_1803eb787:
    iVar26 = 0;
  }
  local_14f8 = iVar26;
  FUN_18063ab10(local_10e8,0,0x1000);
  pfVar24 = local_10e8 + 1;
  lVar23 = 8;
  do {
    pfVar24[-1] = 0.0;
    pfVar24[0] = 0.0;
    pfVar24[1] = 0.0;
    pfVar24[2] = 0.0;
    pfVar24[3] = 0.0;
    pfVar24[4] = 0.0;
    pfVar24[5] = 0.0;
    pfVar24[6] = 1.0;
    pfVar24[7] = 0.0;
    pfVar24[8] = 0.0;
    pfVar24[9] = 0.0;
    pfVar24[10] = 0.0;
    pfVar24[0xb] = 0.0;
    pfVar24[0xc] = 0.0;
    pfVar24[0xd] = 0.0;
    pfVar24[0xe] = 1.0;
    pfVar24[0xf] = 0.0;
    pfVar24[0x10] = 0.0;
    pfVar24[0x11] = 0.0;
    pfVar24[0x12] = 0.0;
    pfVar24[0x13] = 0.0;
    pfVar24[0x14] = 0.0;
    pfVar24[0x15] = 0.0;
    pfVar24[0x16] = 1.0;
    pfVar24[0x17] = 0.0;
    pfVar24[0x18] = 0.0;
    pfVar24[0x19] = 0.0;
    pfVar24[0x1a] = 0.0;
    pfVar24[0x1b] = 0.0;
    pfVar24[0x1c] = 0.0;
    pfVar24[0x1d] = 0.0;
    pfVar24[0x1e] = 1.0;
    pfVar24[0x1f] = 0.0;
    pfVar24[0x20] = 0.0;
    pfVar24[0x21] = 0.0;
    pfVar24[0x22] = 0.0;
    pfVar24[0x23] = 0.0;
    pfVar24[0x24] = 0.0;
    pfVar24[0x25] = 0.0;
    pfVar24[0x26] = 1.0;
    pfVar24[0x27] = 0.0;
    pfVar24[0x28] = 0.0;
    pfVar24[0x29] = 0.0;
    pfVar24[0x2a] = 0.0;
    pfVar24[0x2b] = 0.0;
    pfVar24[0x2c] = 0.0;
    pfVar24[0x2d] = 0.0;
    pfVar24[0x2e] = 1.0;
    pfVar24[0x2f] = 0.0;
    pfVar24[0x30] = 0.0;
    pfVar24[0x31] = 0.0;
    pfVar24[0x32] = 0.0;
    pfVar24[0x33] = 0.0;
    pfVar24[0x34] = 0.0;
    pfVar24[0x35] = 0.0;
    pfVar24[0x36] = 1.0;
    pfVar24[0x37] = 0.0;
    pfVar24[0x38] = 0.0;
    pfVar24[0x39] = 0.0;
    pfVar24[0x3a] = 0.0;
    pfVar24[0x3b] = 0.0;
    pfVar24[0x3c] = 0.0;
    pfVar24[0x3d] = 0.0;
    pfVar24[0x3e] = 1.0;
    pfVar24[0x3f] = 0.0;
    pfVar24[0x40] = 0.0;
    pfVar24[0x41] = 0.0;
    pfVar24[0x42] = 0.0;
    pfVar24[0x43] = 0.0;
    pfVar24[0x44] = 0.0;
    pfVar24[0x45] = 0.0;
    pfVar24[0x46] = 1.0;
    pfVar24[0x47] = 0.0;
    pfVar24[0x48] = 0.0;
    pfVar24[0x49] = 0.0;
    pfVar24[0x4a] = 0.0;
    pfVar24[0x4b] = 0.0;
    pfVar24[0x4c] = 0.0;
    pfVar24[0x4d] = 0.0;
    pfVar24[0x4e] = 1.0;
    pfVar24[0x4f] = 0.0;
    pfVar24[0x50] = 0.0;
    pfVar24[0x51] = 0.0;
    pfVar24[0x52] = 0.0;
    pfVar24[0x53] = 0.0;
    pfVar24[0x54] = 0.0;
    pfVar24[0x55] = 0.0;
    pfVar24[0x56] = 1.0;
    pfVar24[0x57] = 0.0;
    pfVar24[0x58] = 0.0;
    pfVar24[0x59] = 0.0;
    pfVar24[0x5a] = 0.0;
    pfVar24[0x5b] = 0.0;
    pfVar24[0x5c] = 0.0;
    pfVar24[0x5d] = 0.0;
    pfVar24[0x5e] = 1.0;
    pfVar24[0x5f] = 0.0;
    pfVar24[0x60] = 0.0;
    pfVar24[0x61] = 0.0;
    pfVar24[0x62] = 0.0;
    pfVar24[99] = 0.0;
    pfVar24[100] = 0.0;
    pfVar24[0x65] = 0.0;
    pfVar24[0x66] = 1.0;
    pfVar24[0x67] = 0.0;
    pfVar24[0x68] = 0.0;
    pfVar24[0x69] = 0.0;
    pfVar24[0x6a] = 0.0;
    pfVar24[0x6b] = 0.0;
    pfVar24[0x6c] = 0.0;
    pfVar24[0x6d] = 0.0;
    pfVar24[0x6e] = 1.0;
    pfVar24[0x6f] = 0.0;
    pfVar24[0x70] = 0.0;
    pfVar24[0x71] = 0.0;
    pfVar24[0x72] = 0.0;
    pfVar24[0x73] = 0.0;
    pfVar24[0x74] = 0.0;
    pfVar24[0x75] = 0.0;
    pfVar24[0x76] = 1.0;
    pfVar24[0x77] = 0.0;
    pfVar24[0x78] = 0.0;
    pfVar24[0x79] = 0.0;
    pfVar24[0x7a] = 0.0;
    pfVar24[0x7b] = 0.0;
    pfVar24[0x7c] = 0.0;
    pfVar24[0x7d] = 0.0;
    pfVar24[0x7e] = 1.0;
    pfVar24 = pfVar24 + 0x80;
    lVar23 = lVar23 + -1;
  } while (lVar23 != 0);
  if (iVar26 - 0x1bU < 0x66) {
    lVar23 = FUN_18017ea70();
    *(int *)(lVar23 + 4) = *(int *)(lVar23 + 4) + 1;
    cVar17 = FUN_1804514f0(local_10e8,puVar28,(longlong)iVar26 << 5);
    lVar23 = FUN_18017ea70();
    if (*(int *)(lVar23 + 4) != 0) {
      *(int *)(lVar23 + 4) = *(int *)(lVar23 + 4) + -1;
    }
    if (cVar17 == '\0') goto LAB_1803eba97;
    bVar12 = true;
  }
  else {
LAB_1803eba97:
    bVar12 = false;
  }
  lVar23 = FUN_18017ea70();
  *(int *)(lVar23 + 4) = *(int *)(lVar23 + 4) + 1;
  if (param_2 + 0x490 == (undefined *)0x0) {
    bVar13 = false;
    fVar45 = (float)local_1488._8_4_;
    uVar38 = local_1488._0_8_;
  }
  else {
    local_1538 = 0;
    local_1530 = 0.0;
    cVar17 = FUN_1804514f0(&local_1538,param_2 + 0x490,0xc);
    if (cVar17 == '\0') {
      bVar13 = false;
      fVar45 = (float)local_1488._8_4_;
      uVar38 = local_1488._0_8_;
    }
    else {
      bVar13 = true;
      fVar45 = local_1530;
      uVar38 = local_1538;
    }
  }
  lVar23 = FUN_18017ea70();
  puVar31 = local_1520;
  if (*(int *)(lVar23 + 4) != 0) {
    *(int *)(lVar23 + 4) = *(int *)(lVar23 + 4) + -1;
  }
  lVar23 = FUN_18017ea70();
  *(int *)(lVar23 + 4) = *(int *)(lVar23 + 4) + 1;
  if (puVar31 + 0x49c == (undefined *)0x0) {
    bVar14 = false;
    fVar32 = (float)local_1488._8_4_;
    uVar36 = local_1488._0_8_;
  }
  else {
    local_1538 = 0;
    local_1530 = 0.0;
    cVar17 = FUN_1804514f0(&local_1538,puVar31 + 0x49c,0xc);
    if (cVar17 == '\0') {
      bVar14 = false;
      fVar32 = (float)local_1488._8_4_;
      uVar36 = local_1488._0_8_;
    }
    else {
      bVar14 = true;
      fVar32 = local_1530;
      uVar36 = local_1538;
    }
  }
  lVar23 = FUN_18017ea70();
  puVar31 = local_1520;
  if (*(int *)(lVar23 + 4) != 0) {
    *(int *)(lVar23 + 4) = *(int *)(lVar23 + 4) + -1;
  }
  lVar23 = FUN_18017ea70();
  *(int *)(lVar23 + 4) = *(int *)(lVar23 + 4) + 1;
  if (puVar31 + 0x4a8 == (undefined *)0x0) {
    auVar41 = ZEXT464(local_1528);
    bVar15 = false;
  }
  else {
    local_1558[0] = 0;
    cVar17 = FUN_1804514f0(local_1558,puVar31 + 0x4a8,4);
    if (cVar17 == '\0') {
      bVar15 = false;
      auVar41 = ZEXT464(local_1528);
    }
    else {
      auVar41 = ZEXT464(local_1558[0]);
      bVar15 = true;
    }
  }
  local_1524 = auVar41._0_4_;
  lVar23 = FUN_18017ea70();
  puVar16 = local_14e8;
  if (*(int *)(lVar23 + 4) != 0) {
    *(int *)(lVar23 + 4) = *(int *)(lVar23 + 4) + -1;
  }
  if ((((!bVar12) || (!bVar13)) || (!bVar14)) || (!bVar15)) {
LAB_1803ec974:
    local_1488 = (undefined1  [16])0x0;
    FUN_1803c9920(local_1518,local_1488);
  }
  fVar35 = (float)local_14e8[0x14];
  sVar19 = thunk_FUN_180624430(fVar35 + auVar41._0_4_);
  if (((sVar19 < 1) && (fVar40 = auVar41._0_4_, 5.0 <= fVar40)) &&
     ((fVar40 <= 160.0 && ((0.6 <= fVar35 && (fVar35 <= 3.0)))))) {
    auVar41._0_8_ = FUN_180639470(fVar40 * 0.008726646);
    auVar41._8_56_ = extraout_var;
    auVar34._0_4_ = (float)auVar41._0_8_ / fVar35;
    auVar34._4_12_ = auVar41._4_12_;
    local_1524 = (float)FUN_1806370a0(auVar34._0_8_);
    local_1524 = local_1524 * 114.59156;
    auVar41 = ZEXT464((uint)local_1524);
  }
  auVar46 = ZEXT464(0x3f800000);
  local_1558[0] = 0x3f800000;
  local_14a8 = 0x3f800000;
  local_1488 = (undefined1  [16])0x0;
  local_14c0 = uVar38;
  local_14b8 = fVar45;
  local_14b4 = uVar36;
  local_14ac = fVar32;
  FUN_1803f74d0(local_1488);
  uVar38 = local_1488._0_8_;
  *(uint *)(local_1488._0_8_ + 0x10) = local_1528;
  *(undefined4 *)(local_1488._0_8_ + 0x14) = *puVar16;
  UVar22 = GetTickCount64();
  *(ULONGLONG *)uVar38 = UVar22 + 0xfa;
  local_1478[0] = 1;
  local_1478[1] = 2;
  local_1478[2] = 3;
  local_1478[3] = 4;
  local_1478[4] = 0x17;
  local_1478[5] = 6;
  local_1478[6] = 7;
  local_1478[7] = 8;
  local_1478[8] = 9;
  local_1478[9] = 10;
  local_1478[10] = 0xb;
  local_1478[0xb] = 0xc;
  local_1478[0xc] = 0xd;
  local_1478[0xd] = 0xe;
  local_1478[0xe] = 0xf;
  local_1478[0xf] = 0x11;
  local_1478[0x10] = 0x12;
  local_1478[0x11] = 0x13;
  local_1478[0x12] = 0x14;
  local_1478[0x13] = 0x15;
  local_1478[0x14] = 0x16;
  puVar30 = local_1478;
  do {
    uVar21 = (ulonglong)*puVar30;
    local_1538 = CONCAT44(local_10e8[uVar21 * 8 + 1],local_10e8[uVar21 * 8]);
    local_1530 = local_10e8[uVar21 * 8 + 2];
    local_1560 = (float)(int)puVar16[0xf];
    local_1568 = (float)(int)puVar16[0xe];
    puVar25 = (undefined8 *)FUN_1803ea090(&local_14d0,&local_1538,&local_14c0,auVar41._0_8_);
    uVar4 = *(undefined4 *)(puVar25 + 1);
    *(undefined8 *)(uVar38 + uVar21 * 0xc + 0x18) = *puVar25;
    *(undefined4 *)(uVar38 + uVar21 * 0xc + 0x20) = uVar4;
    puVar30 = puVar30 + 1;
  } while (puVar30 != local_1478 + 0x15);
  iVar26 = DAT_180c7c4a0;
  if (DAT_180c7c4a0 == 0) {
    UVar22 = GetTickCount64();
    if (UVar22 < DAT_180c7c498) {
      iVar26 = 0;
    }
    else {
      local_1520 = &DAT_1809bb570;
      iVar26 = FUN_1805f68d0(&DAT_1809bb570);
      if (iVar26 != 0) goto LAB_1803eca2c;
      if (DAT_1809bb5bc == 0x7fffffff) {
        DAT_1809bb5bc = 0x7ffffffe;
        goto LAB_1803eca21;
      }
      if ((DAT_180c7c4a0 == 0) && (DAT_180c7c498 <= UVar22)) {
        DAT_180c7c4a0 = FUN_1804174b0("C_BaseEntity",0xc1e3aaa1);
        if (DAT_180c7c4a0 == 0) {
          DAT_180c7c498 = UVar22 + 1000;
        }
        else {
          DAT_180c7c498 = 0xffffffffffffffff;
        }
      }
      iVar26 = DAT_180c7c4a0;
      FUN_1805f68fc(&DAT_1809bb570);
    }
  }
  uVar21 = 0xffffffffffffffff;
  lVar23 = FUN_18017ea70();
  *(int *)(lVar23 + 4) = *(int *)(lVar23 + 4) + 1;
  if ((longlong)iVar26 + local_14f0 == 0) {
    bVar12 = false;
    puVar31 = local_1518;
  }
  else {
    local_1520 = (undefined *)0x0;
    cVar17 = FUN_1804514f0(&local_1520,(longlong)iVar26 + local_14f0,8);
    if (cVar17 == '\0') {
      bVar12 = false;
      puVar31 = local_1518;
    }
    else {
      bVar12 = true;
      puVar31 = local_1520;
    }
  }
  lVar23 = FUN_18017ea70();
  if (*(int *)(lVar23 + 4) != 0) {
    *(int *)(lVar23 + 4) = *(int *)(lVar23 + 4) + -1;
  }
  puVar28 = (undefined *)0x0;
  if (bVar12) {
    puVar28 = puVar31;
  }
  iVar26 = DAT_180c7c4a4;
  if (DAT_180c7c4a4 == 0) {
    UVar22 = GetTickCount64();
    if (UVar22 < DAT_180c7c468) {
      iVar26 = 0;
    }
    else {
      local_1520 = &DAT_1809bb3e0;
      iVar26 = FUN_1805f68d0(&DAT_1809bb3e0);
      if (iVar26 != 0) goto LAB_1803eca2c;
      if (DAT_1809bb42c == 0x7fffffff) {
        DAT_1809bb42c = 0x7ffffffe;
        goto LAB_1803eca21;
      }
      if ((DAT_180c7c4a4 == 0) && (DAT_180c7c468 <= UVar22)) {
        DAT_180c7c4a4 = FUN_1804174b0("CGameSceneNode",0xe8b4eae5);
        if (DAT_180c7c4a4 == 0) {
          DAT_180c7c468 = UVar22 + 1000;
        }
        else {
          DAT_180c7c468 = 0xffffffffffffffff;
        }
      }
      iVar26 = DAT_180c7c4a4;
      FUN_1805f68fc(&DAT_1809bb3e0);
    }
  }
  puVar31 = (undefined *)local_1550;
  lVar23 = FUN_18017ea70();
  *(int *)(lVar23 + 4) = *(int *)(lVar23 + 4) + 1;
  if (puVar31 + iVar26 == (undefined *)0x0) {
    bVar12 = false;
  }
  else {
    local_1538 = 0;
    local_1530 = 0.0;
    cVar17 = FUN_1804514f0(&local_1538,puVar31 + iVar26,0xc);
    if (cVar17 == '\0') {
      bVar12 = false;
    }
    else {
      local_14d0 = local_1538;
      local_14c8 = local_1530;
      bVar12 = true;
    }
  }
  lVar23 = FUN_18017ea70();
  if (*(int *)(lVar23 + 4) != 0) {
    *(int *)(lVar23 + 4) = *(int *)(lVar23 + 4) + -1;
  }
  if (puVar28 == (undefined *)0x0) {
    uVar27 = uStack_14fc >> 8;
    uStack_14fc = uVar27 << 8;
    auVar41 = ZEXT1664(CONCAT412(uStack_14fc,CONCAT48(fStack_1500,local_1508)));
    uStack_14fc = uVar27 << 8;
    puVar28 = extraout_XMM0_Qa;
    goto LAB_1803ec280;
  }
  iVar26 = DAT_180c7c478;
  if (DAT_180c7c478 == 0) {
    UVar22 = GetTickCount64();
    if (UVar22 < DAT_180c7c470) {
      iVar26 = 0;
    }
    else {
      local_1520 = &DAT_1809bb430;
      iVar26 = FUN_1805f68d0(&DAT_1809bb430);
      if (iVar26 != 0) goto LAB_1803eca2c;
      if (DAT_1809bb47c == 0x7fffffff) {
        DAT_1809bb47c = 0x7ffffffe;
        goto LAB_1803eca21;
      }
      if ((DAT_180c7c478 == 0) && (DAT_180c7c470 <= UVar22)) {
        DAT_180c7c478 = FUN_1804174b0("CCollisionProperty",0xe57f80c);
        if (DAT_180c7c478 == 0) {
          DAT_180c7c470 = UVar22 + 1000;
        }
        else {
          DAT_180c7c470 = 0xffffffffffffffff;
        }
      }
      iVar26 = DAT_180c7c478;
      FUN_1805f68fc(&DAT_1809bb430);
    }
  }
  lVar23 = FUN_18017ea70();
  *(int *)(lVar23 + 4) = *(int *)(lVar23 + 4) + 1;
  if (puVar28 + iVar26 == (undefined *)0x0) {
LAB_1803ec153:
    uStack_14fc = uStack_14fc & 0xffffff00;
  }
  else {
    local_1538 = 0;
    local_1530 = 0.0;
    cVar17 = FUN_1804514f0(&local_1538,puVar28 + iVar26,0xc);
    if (cVar17 == '\0') goto LAB_1803ec153;
    local_1508 = local_1538;
    fStack_1500 = local_1530;
    uStack_14fc = CONCAT31(uStack_14fc._1_3_,1);
  }
  lVar23 = FUN_18017ea70();
  if (*(int *)(lVar23 + 4) != 0) {
    *(int *)(lVar23 + 4) = *(int *)(lVar23 + 4) + -1;
  }
  auVar41 = ZEXT1664(CONCAT412(uStack_14fc,CONCAT48(fStack_1500,local_1508)));
  iVar26 = DAT_180c7c47c;
  if (DAT_180c7c47c == 0) {
    UVar22 = GetTickCount64();
    if (UVar22 < DAT_180c7c480) {
      iVar26 = 0;
    }
    else {
      local_1520 = &DAT_1809bb480;
      iVar26 = FUN_1805f68d0(&DAT_1809bb480);
      if (iVar26 != 0) {
LAB_1803eca2c:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1809bb4cc == 0x7fffffff) {
        DAT_1809bb4cc = 0x7ffffffe;
LAB_1803eca21:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if ((DAT_180c7c47c == 0) && (DAT_180c7c480 <= UVar22)) {
        DAT_180c7c47c = FUN_1804174b0("CCollisionProperty",0x7d388d3e);
        if (DAT_180c7c47c == 0) {
          uVar21 = UVar22 + 1000;
        }
        DAT_180c7c480 = uVar21;
      }
      iVar26 = DAT_180c7c47c;
      FUN_1805f68fc(&DAT_1809bb480);
    }
  }
  lVar23 = FUN_18017ea70();
  *(int *)(lVar23 + 4) = *(int *)(lVar23 + 4) + 1;
  if (puVar28 + iVar26 == (undefined *)0x0) {
LAB_1803ec257:
    uStack_14fc = uStack_14fc & 0xffffff00;
  }
  else {
    local_1538 = 0;
    local_1530 = 0.0;
    cVar17 = FUN_1804514f0(&local_1538,puVar28 + iVar26,0xc);
    if (cVar17 == '\0') goto LAB_1803ec257;
    local_1508 = local_1538;
    fStack_1500 = local_1530;
    uStack_14fc = CONCAT31(uStack_14fc._1_3_,1);
  }
  lVar23 = FUN_18017ea70();
  if (*(int *)(lVar23 + 4) != 0) {
    *(int *)(lVar23 + 4) = *(int *)(lVar23 + 4) + -1;
  }
  puVar31 = (undefined *)local_1550;
  puVar28 = extraout_XMM0_Qa_00;
LAB_1803ec280:
  puVar16 = local_14e8;
  auVar6._8_4_ = fStack_1500;
  auVar6._0_8_ = local_1508;
  auVar6._12_4_ = uStack_14fc;
  auVar37 = ZEXT1664(auVar6);
  if (bVar12) {
    auVar34 = auVar41._0_16_;
    if (auVar41[0xc] != '\0') {
      if ((char)uStack_14fc != '\0') {
        if (((uint)(float)local_14d0 & 0x7f800000) != 0x7f800000) {
          if (((uint)local_14d0._4_4_ & 0x7f800000) != 0x7f800000) {
            if (((uint)local_14c8 & 0x7f800000) != 0x7f800000) {
              if ((auVar41._0_4_ & 0x7f800000) != 0x7f800000) {
                auVar7 = vshufps_avx(auVar34,auVar34,0x55);
                auVar42 = ZEXT1664(auVar7);
                if ((auVar7._0_4_ & 0x7f800000) != 0x7f800000) {
                  auVar34 = vshufps_avx(auVar34,auVar34,0xaa);
                  auVar43 = ZEXT1664(auVar34);
                  if ((auVar34._0_4_ & 0x7f800000) != 0x7f800000) {
                    if (((uint)local_1508 & 0x7f800000) != 0x7f800000) {
                      auVar34 = vshufps_avx(auVar6,auVar6,0x55);
                      auVar39 = ZEXT1664(auVar34);
                      if ((auVar34._0_4_ & 0x7f800000) != 0x7f800000) {
                        auVar44 = ZEXT464((uint)fStack_1500);
                        if (((uint)fStack_1500 & 0x7f800000) != 0x7f800000) {
                          local_14d8 = CONCAT31(local_14d8._1_3_,1);
                          auVar34 = vunpcklps_avx(auVar46._0_16_,auVar46._0_16_);
                          *(longlong *)(uVar38 + 0x15c) = auVar34._0_8_;
                          *(undefined4 *)(uVar38 + 0x164) = local_14d8;
                          local_14d8 = CONCAT31(local_14d8._1_3_,1);
                          auVar34 = vunpcklps_avx(ZEXT816(0),ZEXT816(0));
                          *(longlong *)(uVar38 + 0x168) = auVar34._0_8_;
                          *(undefined4 *)(uVar38 + 0x170) = local_14d8;
                          uVar27 = 0;
                          fVar45 = local_14c8;
                          fVar32 = local_14d0._4_4_;
                          fVar35 = (float)local_14d0;
                          do {
                            bVar18 = (byte)uVar27;
                            auVar34 = vpcmpeqd_avx(ZEXT116(bVar18 & 1),SUB6416(ZEXT464(0),0));
                            auVar34 = vblendvps_avx(auVar37._0_16_,auVar41._0_16_,auVar34);
                            auVar6 = vpcmpeqd_avx(ZEXT116(bVar18 & 2),SUB6416(ZEXT464(0),0));
                            auVar6 = vblendvps_avx(auVar39._0_16_,auVar42._0_16_,auVar6);
                            auVar7 = vpcmpeqd_avx(ZEXT116(bVar18 & 4),SUB6416(ZEXT464(0),0));
                            auVar7 = vblendvps_avx(auVar44._0_16_,auVar43._0_16_,auVar7);
                            local_1538 = CONCAT44(auVar6._0_4_ + fVar32,fVar35 + auVar34._0_4_);
                            local_1530 = auVar7._0_4_ + fVar45;
                            local_1560 = (float)(int)puVar16[0xf];
                            local_1568 = (float)(int)puVar16[0xe];
                            puVar25 = (undefined8 *)
                                      FUN_1803ea090(&local_14d0,&local_1538,&local_14c0,local_1524);
                            puVar33 = (undefined *)*puVar25;
                            if (*(char *)(puVar25 + 1) == '\0') {
                              *(undefined1 *)(uVar38 + 0x170) = 0;
                              *(undefined1 *)(uVar38 + 0x164) = 0;
                              puVar28 = puVar33;
                              local_1550 = (float *)puVar33;
                              break;
                            }
                            local_1550._0_4_ = (uint)puVar33;
                            auVar34 = vminss_avx(ZEXT416((uint)local_1550),
                                                 ZEXT416(*(uint *)(uVar38 + 0x15c)));
                            *(int *)(uVar38 + 0x15c) = auVar34._0_4_;
                            local_1550._4_4_ = (uint)((ulonglong)puVar33 >> 0x20);
                            auVar34 = vminss_avx(ZEXT416(local_1550._4_4_),
                                                 ZEXT416(*(uint *)(uVar38 + 0x160)));
                            *(int *)(uVar38 + 0x160) = auVar34._0_4_;
                            auVar34 = vmaxss_avx(ZEXT416((uint)local_1550),
                                                 ZEXT416(*(uint *)(uVar38 + 0x168)));
                            *(int *)(uVar38 + 0x168) = auVar34._0_4_;
                            auVar34 = vmaxss_avx(ZEXT416(local_1550._4_4_),
                                                 ZEXT416(*(uint *)(uVar38 + 0x16c)));
                            puVar28 = auVar34._0_8_;
                            *(int *)(uVar38 + 0x16c) = auVar34._0_4_;
                            uVar27 = uVar27 + 1;
                            local_1550 = (float *)puVar33;
                          } while (uVar27 < 8);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_1803dad10(puVar28,local_1418,puVar31,1);
  puVar16 = local_14e8;
  auVar42 = ZEXT1664(auVar46._0_16_);
  local_14f4 = auVar46._0_4_;
  local_1498 = CONCAT31(local_1498._1_3_,1);
  fVar45 = 0.0;
  auVar41 = ZEXT864(0);
  local_14f0 = local_14f0 & 0xffffffff00000000;
  auVar37 = ZEXT864(0);
  local_1528 = 0;
  local_14c8 = (float)CONCAT31(local_14c8._1_3_,1);
  iVar26 = 0;
  pfVar24 = local_1418 + (longlong)local_10f8 * 10;
  local_1550 = pfVar24;
  if (local_1418 != pfVar24) {
    pfVar29 = local_13f8;
    do {
      fVar32 = pfVar29[-7];
      lVar23 = (longlong)(int)fVar32;
      if ((-1 < (int)fVar32) && ((int)fVar32 < local_14f8)) {
        fVar32 = *pfVar29;
        sVar19 = thunk_FUN_180624430(fVar32);
        if ((sVar19 < 1) && ((fVar45 <= fVar32 && (fVar32 <= 32.0)))) {
          fVar35 = local_10e8[lVar23 * 8 + 5] * local_10e8[lVar23 * 8 + 5] +
                   local_10e8[lVar23 * 8 + 4] * local_10e8[lVar23 * 8 + 4] +
                   local_10e8[lVar23 * 8 + 6] * local_10e8[lVar23 * 8 + 6] +
                   local_10e8[lVar23 * 8 + 7] * local_10e8[lVar23 * 8 + 7];
          sVar19 = thunk_FUN_180624430(fVar35);
          if ((sVar19 < 1) && ((0.75 <= fVar35 && (fVar35 <= 1.25)))) {
            fVar35 = local_10e8[lVar23 * 8 + 3];
            sVar19 = thunk_FUN_180624430(fVar35);
            if ((sVar19 < 1) && ((fVar45 < fVar35 && (fVar35 <= 8.0)))) {
              fVar32 = fVar32 * fVar35;
              uVar27 = 0;
              cVar17 = *(char *)((longlong)pfVar29 + 5);
              local_1520 = (undefined *)CONCAT44(local_1520._4_4_,(float)(int)puVar16[0xf]);
              local_14e8 = (undefined4 *)CONCAT44(local_14e8._4_4_,(float)(int)puVar16[0xe]);
              do {
                if ((uVar27 & 1) == 0) {
                  fVar45 = fVar35 * pfVar29[-6] - fVar32;
                }
                else {
                  fVar45 = fVar35 * pfVar29[-3] + fVar32;
                }
                if ((uVar27 & 2) == 0) {
                  fVar40 = fVar35 * pfVar29[-5] - fVar32;
                }
                else {
                  fVar40 = fVar35 * pfVar29[-2] + fVar32;
                }
                if ((uVar27 & 4) == 0) {
                  local_1530 = fVar35 * pfVar29[-4] - fVar32;
                }
                else {
                  local_1530 = fVar35 * pfVar29[-1] + fVar32;
                }
                if (cVar17 == '\0') {
                  fVar2 = local_10e8[lVar23 * 8 + 4];
                  fVar8 = fVar2 * fVar40 - local_10e8[lVar23 * 8 + 5] * fVar45;
                  fVar3 = local_10e8[lVar23 * 8 + 6];
                  fVar9 = fVar3 * fVar45 - fVar2 * local_1530;
                  fVar5 = local_10e8[lVar23 * 8 + 7] + local_10e8[lVar23 * 8 + 7];
                  fVar10 = local_10e8[lVar23 * 8 + 5] * local_1530 - fVar3 * fVar40;
                  fVar11 = fVar3 * fVar10 - fVar2 * fVar8;
                  fVar2 = fVar2 * fVar9 - local_10e8[lVar23 * 8 + 5] * fVar10;
                  fVar3 = local_10e8[lVar23 * 8 + 5] * fVar8 - fVar3 * fVar9;
                  fVar45 = fVar10 * fVar5 + fVar45 + fVar3 + fVar3;
                  local_1530 = fVar5 * fVar8 + local_1530 + fVar2 + fVar2;
                  fVar40 = fVar5 * fVar9 + fVar40 + fVar11 + fVar11;
                  auVar42 = ZEXT464(local_14f4);
                  auVar37 = ZEXT464(local_1528);
                  auVar41 = ZEXT464((uint)local_14f0);
                }
                local_1530 = local_1530 + local_10e8[lVar23 * 8 + 2];
                auVar34 = vunpcklps_avx(ZEXT416((uint)(fVar45 + local_10e8[lVar23 * 8])),
                                        ZEXT416((uint)(fVar40 + local_10e8[lVar23 * 8 + 1])));
                local_1538 = auVar34._0_8_;
                local_1560 = local_1520._0_4_;
                local_1568 = local_14e8._0_4_;
                puVar25 = (undefined8 *)
                          FUN_1803ea090(&local_1508,&local_1538,&local_14c0,local_1524);
                uVar38 = *puVar25;
                if (*(char *)(puVar25 + 1) == '\0') {
                  auVar46 = ZEXT464(local_1558[0]);
                }
                else {
                  local_14e0._0_4_ = (uint)uVar38;
                  auVar34 = vminss_avx(ZEXT416((uint)local_14e0),ZEXT416(local_1558[0]));
                  auVar46 = ZEXT1664(auVar34);
                  local_1558[0] = auVar34._0_4_;
                  local_14e0._4_4_ = (uint)((ulonglong)uVar38 >> 0x20);
                  auVar34 = vminss_avx(ZEXT416(local_14e0._4_4_),auVar42._0_16_);
                  auVar42 = ZEXT1664(auVar34);
                  local_14f4 = auVar34._0_4_;
                  auVar34 = vmaxss_avx(ZEXT416((uint)local_14e0),auVar41._0_16_);
                  auVar41 = ZEXT1664(auVar34);
                  local_14f0 = CONCAT44(local_14f0._4_4_,auVar34._0_4_);
                  auVar34 = vmaxss_avx(ZEXT416(local_14e0._4_4_),auVar37._0_16_);
                  auVar37 = ZEXT1664(auVar34);
                  local_1528 = auVar34._0_4_;
                  iVar26 = iVar26 + 1;
                }
                uVar27 = uVar27 + 1;
                local_14e0 = uVar38;
              } while (uVar27 < 8);
              fVar45 = 0.0;
            }
          }
        }
        pfVar24 = local_1550;
      }
      pfVar1 = pfVar29 + 2;
      pfVar29 = pfVar29 + 10;
    } while (pfVar1 != pfVar24);
    if (0x1f < iVar26) {
      auVar34 = vunpcklps_avx(auVar46._0_16_,auVar42._0_16_);
      *(longlong *)(local_1488._0_8_ + 0x15c) = auVar34._0_8_;
      *(undefined4 *)(local_1488._0_8_ + 0x164) = local_1498;
      auVar34 = vunpcklps_avx(auVar41._0_16_,auVar37._0_16_);
      *(longlong *)(local_1488._0_8_ + 0x168) = auVar34._0_8_;
      *(float *)(local_1488._0_8_ + 0x170) = local_14c8;
      fVar45 = (auVar37._0_4_ - auVar42._0_4_) * 0.025;
      *(float *)(local_1488._0_8_ + 0x15c) = *(float *)(local_1488._0_8_ + 0x15c) - fVar45;
      *(float *)(local_1488._0_8_ + 0x168) = fVar45 + *(float *)(local_1488._0_8_ + 0x168);
      *(float *)(local_1488._0_8_ + 0x160) = *(float *)(local_1488._0_8_ + 0x160) - fVar45;
      *(float *)(local_1488._0_8_ + 0x16c) = fVar45 + *(float *)(local_1488._0_8_ + 0x16c);
    }
  }
  local_1508 = local_1488._0_8_;
  fStack_1500 = local_1488._8_4_;
  uStack_14fc = local_1488._12_4_;
  FUN_1803c9920(local_1518,&local_1508);
}



