// FUN_1802d4b60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802d4b60 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802d4b60(undefined8 param_1,longlong param_2,undefined4 param_3,float param_4,
                  float param_5,float param_6,float param_7,float *param_8,float *param_9,
                  undefined4 param_10,undefined8 param_11,int param_12,undefined8 *param_13,
                  undefined1 param_14,undefined8 param_15,byte param_16,byte param_17,char param_18,
                  float *param_19)

{
  undefined4 uVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  byte bVar5;
  byte bVar6;
  float *pfVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  char cVar10;
  short sVar11;
  int iVar12;
  int iVar13;
  ULONGLONG UVar14;
  longlong lVar15;
  undefined8 uVar16;
  undefined **ppuVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined **ppuVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  undefined1 auStack_1578 [32];
  undefined **local_1558;
  longlong *local_1550;
  double local_1548;
  double local_1540;
  double local_1538;
  double local_1530;
  double local_1528;
  double local_1520;
  double local_1518;
  double local_1510;
  double local_1508;
  double local_1500;
  double local_14f8;
  undefined *local_14e8;
  undefined *local_14e0;
  float local_14d8;
  undefined *local_14d0;
  undefined8 *local_14c8;
  float *local_14c0;
  float *local_14b8;
  undefined8 local_14b0;
  undefined1 local_14a0 [16];
  longlong local_1488 [2];
  undefined4 local_1478;
  float local_1474;
  float local_1470;
  float local_146c;
  float local_1468;
  undefined4 local_1464;
  undefined8 local_1460;
  float local_1458;
  undefined4 local_1454;
  undefined4 local_1450;
  undefined4 local_144c;
  undefined2 local_1448;
  undefined8 local_1444;
  float local_143c;
  undefined1 local_1438;
  undefined4 local_1434;
  undefined4 local_1430;
  undefined4 local_142c;
  undefined4 local_1428;
  undefined4 local_1424;
  undefined4 local_1420;
  undefined4 local_141c;
  undefined1 local_1418 [4096];
  undefined4 local_418;
  undefined1 local_414 [800];
  undefined4 local_f4;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined2 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined1 local_d0;
  undefined8 local_cc;
  undefined4 local_c4;
  undefined1 local_c0;
  undefined4 local_bc;
  ulonglong local_b8;
  
  local_b8 = DAT_1808d5f00 ^ (ulonglong)auStack_1578;
  local_14b8 = param_9;
  local_14c0 = param_8;
  local_14c8 = param_13;
  uVar24 = *(undefined4 *)(*DAT_180bb8958 + 0x30);
  local_14a0 = ZEXT816(0x180cc9b08);
  iVar12 = FUN_1805f68d0(&DAT_180cc9b08);
  iVar13 = DAT_180c6ea10;
  if (iVar12 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_180cc9b54 == 0x7fffffff) {
    DAT_180cc9b54 = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  local_14a0[8] = 1;
  if ((DAT_180c6ea10 == 0) && (UVar14 = GetTickCount64(), DAT_180c6e9f0 <= UVar14)) {
    local_14d0 = &DAT_1808fcac0;
    iVar13 = FUN_1805f68d0(&DAT_1808fcac0);
    if (iVar13 != 0) goto LAB_1802d53e8;
    if (DAT_1808fcb0c == 0x7fffffff) {
      DAT_1808fcb0c = 0x7ffffffe;
      goto LAB_1802d53dd;
    }
    if ((DAT_180c6ea10 == 0) && (DAT_180c6e9f0 <= UVar14)) {
      DAT_180c6ea10 = FUN_1804174b0("C_BaseEntity",0x7cf77892);
      if (DAT_180c6ea10 == 0) {
        DAT_180c6e9f0 = UVar14 + 1000;
      }
      else {
        DAT_180c6e9f0 = 0xffffffffffffffff;
      }
    }
    iVar13 = DAT_180c6ea10;
    FUN_1805f68fc(&DAT_1808fcac0);
  }
  uVar16 = *(undefined8 *)(iVar13 + param_2);
  uVar1 = *(undefined4 *)((longlong)iVar13 + 8 + param_2);
  local_14d0 = (undefined *)CONCAT44(local_14d0._4_4_,uVar1);
  local_1488[1] = 0;
  local_1470 = param_5;
  local_146c = param_6;
  local_1468 = param_7;
  uVar21 = 0;
  local_1464 = 0;
  local_1460 = *(undefined8 *)param_8;
  local_1458 = param_8[2];
  local_1454 = 0;
  local_1450 = 0;
  local_144c = 0;
  local_1448 = 0;
  local_1444 = *(undefined8 *)param_9;
  local_143c = param_9[2];
  local_1438 = 1;
  local_1434 = 0;
  local_1430 = 0;
  local_142c = 0;
  local_1428 = 0x7f7fffff;
  local_1424 = param_10;
  local_141c = 0;
  local_14b0 = uVar16;
  local_1488[0] = param_2;
  local_1478 = param_3;
  local_1474 = param_4;
  local_1420 = uVar24;
  FUN_18063aed0(local_1418,param_11,0x1000);
  local_418 = 0;
  FUN_18063ab10(local_414,0,800);
  FUN_180233c60(local_414);
  local_f4 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d0 = 0;
  local_c0 = param_14;
  local_bc = DAT_180cc9348;
  local_dc = uVar21;
  local_d8 = uVar21;
  local_d4 = uVar21;
  local_cc = uVar16;
  local_c4 = uVar1;
  if (DAT_180cc9a10 == DAT_180cc9a18) {
    FUN_1802ea6b0(&DAT_180cc9a08,DAT_180cc9a10,local_1488);
  }
  else {
    FUN_18063aed0(DAT_180cc9a10,local_1488,0x13d0);
    DAT_180cc9a10 = DAT_180cc9a10 + 0x13d0;
  }
  lVar3 = DAT_180cc9a10;
  iVar13 = DAT_180c6e9f8;
  if (DAT_180c6e9f8 == 0) {
    UVar14 = GetTickCount64();
    if (UVar14 < DAT_180c6ea00) {
      iVar13 = 0;
    }
    else {
      local_14e0 = &DAT_1808fca60;
      iVar13 = FUN_1805f68d0(&DAT_1808fca60);
      if (iVar13 != 0) {
LAB_1802d53e8:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808fcaac == 0x7fffffff) {
        DAT_1808fcaac = 0x7ffffffe;
LAB_1802d53dd:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if ((DAT_180c6e9f8 == 0) && (DAT_180c6ea00 <= UVar14)) {
        DAT_180c6e9f8 = FUN_1804174b0("C_BasePlayerPawn",0x29882a6b);
        if (DAT_180c6e9f8 == 0) {
          DAT_180c6ea00 = UVar14 + 1000;
        }
        else {
          DAT_180c6ea00 = 0xffffffffffffffff;
        }
      }
      iVar13 = DAT_180c6e9f8;
      FUN_1805f68fc(&DAT_1808fca60);
    }
  }
  lVar15 = FUN_18017ea70();
  *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + 1;
  if (iVar13 + param_2 == 0) {
    bVar2 = false;
  }
  else {
    local_14e8._0_4_ = 0;
    cVar10 = FUN_1804514f0(&local_14e8,iVar13 + param_2,4);
    if (cVar10 == '\0') {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
  }
  iVar12 = (int)local_14e8;
  lVar15 = FUN_18017ea70();
  iVar13 = *(int *)(lVar15 + 4);
  if (iVar13 != 0) {
    iVar13 = iVar13 + -1;
    *(int *)(lVar15 + 4) = iVar13;
  }
  if ((!bVar2) || (iVar12 == 0)) {
    uVar16 = 0;
  }
  else {
    uVar16 = FUN_1803d4150(iVar13,iVar12);
  }
  pfVar7 = param_19;
  bVar6 = param_17;
  bVar5 = param_16;
  uVar4 = param_15;
  *(undefined8 *)(lVar3 + -0x13c8) = uVar16;
  local_14e0 = (undefined *)CONCAT44(local_14e0._4_4_,0x80);
  local_14e8._0_4_ = 0;
  ppuVar20 = &local_14e8;
  if (-1 < param_12) {
    ppuVar20 = (undefined **)&param_12;
  }
  ppuVar17 = &local_14e0;
  if (param_12 < 0x81) {
    ppuVar17 = ppuVar20;
  }
  iVar13 = *(int *)ppuVar17;
  *(int *)(lVar3 + -0x360) = iVar13;
  lVar15 = 6;
  puVar8 = local_14c8;
  puVar9 = (undefined8 *)(lVar3 + -0x35c);
  do {
    puVar19 = puVar9;
    puVar18 = puVar8;
    uVar16 = puVar18[1];
    *puVar19 = *puVar18;
    puVar19[1] = uVar16;
    uVar16 = puVar18[3];
    puVar19[2] = puVar18[2];
    puVar19[3] = uVar16;
    uVar16 = puVar18[5];
    puVar19[4] = puVar18[4];
    puVar19[5] = uVar16;
    uVar16 = puVar18[7];
    puVar19[6] = puVar18[6];
    puVar19[7] = uVar16;
    uVar16 = puVar18[9];
    puVar19[8] = puVar18[8];
    puVar19[9] = uVar16;
    uVar16 = puVar18[0xb];
    puVar19[10] = puVar18[10];
    puVar19[0xb] = uVar16;
    uVar16 = puVar18[0xd];
    puVar19[0xc] = puVar18[0xc];
    puVar19[0xd] = uVar16;
    uVar16 = puVar18[0xf];
    puVar19[0xe] = puVar18[0xe];
    puVar19[0xf] = uVar16;
    lVar15 = lVar15 + -1;
    puVar8 = puVar18 + 0x10;
    puVar9 = puVar19 + 0x10;
  } while (lVar15 != 0);
  uVar16 = puVar18[0x11];
  puVar19[0x10] = puVar18[0x10];
  puVar19[0x11] = uVar16;
  uVar16 = puVar18[0x13];
  puVar19[0x12] = puVar18[0x12];
  puVar19[0x13] = uVar16;
  *(undefined4 *)(puVar19 + 0x14) = *(undefined4 *)(puVar18 + 0x14);
  *(undefined8 *)(lVar3 + -0x38) = param_15;
  *(byte *)(lVar3 + -0x2b) = param_16;
  *(byte *)(lVar3 + -0x2a) = param_17;
  *(char *)(lVar3 + -0x1390) = param_18;
  if (param_18 != '\0') {
    fVar25 = *param_19;
    sVar11 = thunk_FUN_180624430(fVar25);
    if (sVar11 < 1) {
      fVar23 = pfVar7[1];
      sVar11 = thunk_FUN_180624430(fVar23);
      if (sVar11 < 1) {
        fVar22 = pfVar7[2];
        sVar11 = thunk_FUN_180624430(fVar22);
        if ((sVar11 < 1) && (1e-06 < fVar25 * fVar25 + fVar23 * fVar23 + fVar22 * fVar22)) {
          *(undefined1 *)(lVar3 + -0x138f) = 1;
          local_14e0 = *(undefined **)pfVar7;
          local_14d8 = pfVar7[2];
          FUN_180450e30(&local_14e0);
          *(undefined **)(lVar3 + -0x139c) = local_14e0;
          *(float *)(lVar3 + -0x1394) = local_14d8;
          goto LAB_1802d5161;
        }
      }
    }
  }
  *(undefined1 *)(lVar3 + -0x138f) = 0;
LAB_1802d5161:
  FUN_18063ab10(local_1488,0,0x600);
  local_1528 = (double)(param_5 * 100.0);
  local_1530 = (double)param_4;
  local_1518 = (double)CONCAT44(local_1518._4_4_,(uint)bVar6);
  local_1520 = (double)CONCAT44(local_1520._4_4_,(uint)bVar5);
  local_1538 = (double)CONCAT44(local_1538._4_4_,*(undefined4 *)(local_14c8 + 100));
  local_1540 = (double)CONCAT44(local_1540._4_4_,iVar13);
  local_1548 = (double)CONCAT44(local_1548._4_4_,param_10);
  local_1558 = (undefined **)uVar4;
  local_1550 = (longlong *)param_2;
  FUN_18015ad60(local_1488,0x600,0xffffffffffffffff,
                "command=%lld target=0x%llx tick=%d bones=%d hitboxes=%d damage=%.1f hitchance=%.1f historical=%d predicted=%d"
               );
  ppuVar20 = &PTR_180700558;
  local_1558 = &PTR_180700558;
  if ((char)local_1488[0] != '\0') {
    local_1558 = (undefined **)&DAT_1806bcfc0;
  }
  local_1550 = local_1488;
  FUN_1800f6900(0);
  FUN_18063ab10(local_1488,0,0x600);
  local_14f8 = (double)param_7;
  local_1500 = (double)param_6;
  local_1508 = (double)local_14d0._0_4_;
  local_1510 = (double)local_14b0._4_4_;
  local_1518 = (double)(float)local_14b0;
  local_1520 = (double)local_14c0[2];
  local_1528 = (double)local_14c0[1];
  local_1530 = (double)*local_14c0;
  local_1538 = (double)local_14b8[2];
  local_1540 = (double)local_14b8[1];
  local_1548 = (double)*local_14b8;
  local_1558 = (undefined **)uVar4;
  local_1550 = (longlong *)param_2;
  FUN_18015ad60(local_1488,0x600,0xffffffffffffffff,
                "command=%lld target=0x%llx shoot=(%.3f,%.3f,%.3f) aim=(%.6f,%.6f,%.6f) target_velocity=(%.3f,%.3f,%.3f) inaccuracy=%.7f spread=%.7f"
               );
  if ((char)local_1488[0] != '\0') {
    ppuVar20 = (undefined **)&DAT_1806bcfc0;
  }
  local_1550 = local_1488;
  local_1558 = ppuVar20;
  FUN_1800f6900(0);
  if (0x20 < (ulonglong)((DAT_180cc9a10 - DAT_180cc9a08) / 0x13d0)) {
    FUN_18063aed0(DAT_180cc9a08,DAT_180cc9a08 + 0x13d0,DAT_180cc9a10 - (DAT_180cc9a08 + 0x13d0));
    DAT_180cc9a10 = DAT_180cc9a10 + -0x13d0;
  }
  FUN_1805f68fc(&DAT_180cc9b08);
}



