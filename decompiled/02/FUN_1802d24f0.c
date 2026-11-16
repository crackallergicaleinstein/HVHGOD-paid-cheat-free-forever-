// FUN_1802d24f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802d24f0 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802d24f0(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  bool bVar2;
  undefined1 (*pauVar3) [16];
  undefined5 uVar4;
  undefined1 auVar5 [11];
  char cVar6;
  char cVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ULONGLONG UVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 *puVar15;
  undefined8 *puVar16;
  undefined8 *******_Buf1;
  undefined1 (*pauVar17) [16];
  undefined *puVar18;
  uint uVar19;
  longlong lVar20;
  undefined1 auVar21 [8];
  undefined1 (*pauVar22) [16];
  ulonglong uVar23;
  float fVar24;
  undefined8 uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [64];
  undefined1 auVar29 [64];
  undefined1 auVar30 [64];
  float fVar31;
  undefined1 auVar32 [64];
  float fVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [64];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auStackY_1558 [32];
  undefined8 local_1528;
  float local_1518;
  undefined4 uStack_1514;
  undefined4 uStack_1510;
  uint uStack_150c;
  undefined8 local_1508;
  undefined8 local_1500;
  undefined8 local_14f8;
  char *local_14f0;
  undefined1 local_14e8 [8];
  undefined8 uStack_14e0;
  ulonglong uStack_14d8;
  longlong lStack_14d0;
  undefined8 local_14c8;
  float fStack_14c0;
  undefined4 uStack_14bc;
  undefined1 local_14b8 [16];
  ulonglong uStack_14a8;
  longlong lStack_14a0;
  undefined8 *******local_1498 [2];
  longlong local_1488;
  ulonglong local_1480;
  undefined8 local_1478;
  undefined8 local_1470;
  undefined4 local_1468;
  undefined1 local_1464 [16];
  undefined4 local_1454;
  undefined8 local_1450;
  undefined4 local_1448;
  undefined4 local_1444;
  undefined4 local_1440;
  undefined4 local_143c;
  undefined2 local_1438;
  undefined8 local_1434;
  float local_142c;
  char local_1428;
  undefined4 local_1424;
  undefined4 local_1420;
  undefined4 local_141c;
  undefined4 local_1418;
  undefined4 local_1414;
  undefined4 local_1410;
  undefined4 local_140c;
  undefined1 local_1408 [4];
  undefined1 auStack_1404 [4092];
  undefined4 local_408;
  undefined1 local_404 [800];
  undefined4 local_e4;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined1 local_d4;
  undefined4 local_d3;
  undefined1 local_cf;
  float local_cc;
  float local_c8;
  float local_c4;
  undefined1 local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  undefined1 local_b0;
  undefined4 local_ac;
  ulonglong local_a0;
  
  if (param_2 == 0) {
    return;
  }
  local_a0 = DAT_1808d5f00 ^ (ulonglong)auStackY_1558;
  local_14f8 = 0;
  local_14f0 = "userid";
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar14 = DAT_1808fcfd0;
  lVar13 = DAT_1808da460;
  if ((DAT_1808fcfd0 != DAT_1808da460) || (lVar20 = DAT_180c6eae8, DAT_180c6eae8 == 0)) {
    UVar12 = GetTickCount64();
    if ((lVar14 == lVar13) && (UVar12 < DAT_180c6eae0)) {
      lVar20 = 0;
    }
    else {
      local_14e8 = (undefined1  [8])&DAT_1808fcfe0;
      iVar9 = FUN_1805f68d0(&DAT_1808fcfe0);
      if (iVar9 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808fd02c == 0x7fffffff) {
        DAT_1808fd02c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      uVar23 = 1000;
      if (DAT_1808fcfd0 == lVar13) {
        if ((DAT_180c6eae8 == 0) && (DAT_180c6eae0 <= UVar12)) goto LAB_1802d2657;
      }
      else {
        DAT_1808fd030 = 1000;
LAB_1802d2657:
        lVar14 = -1;
        do {
          local_14b8._8_8_ = lVar14 + 1;
          pcVar1 = "lient.dll:488D05*????????4D8BF8488901+80~" + lVar14;
          lVar14 = local_14b8._8_8_;
        } while (*pcVar1 != '\0');
        local_14b8._0_8_ = &DAT_1808267c0;
        local_1518 = -1.1502631e-38;
        uStack_1514 = 1;
        uStack_1510 = 0x23;
        uStack_150c = 0;
        DAT_180c6eae8 = FUN_1800e5d20(&local_1518,local_14b8);
        DAT_1808fcfd0 = lVar13;
        DAT_180c6eae0 = 0xffffffffffffffff;
        if (DAT_180c6eae8 == 0) {
          DAT_180c6eae0 = DAT_1808fd030 + UVar12;
          uVar23 = 60000;
          if (DAT_1808fd030 < 60000) {
            uVar23 = DAT_1808fd030 * 2;
          }
        }
        DAT_1808fd030 = uVar23;
      }
      lVar20 = DAT_180c6eae8;
      FUN_1805f68fc(&DAT_1808fcfe0);
    }
  }
  cVar6 = FUN_1804513c0(lVar20,1,2);
  cVar7 = '\0';
  if (cVar6 != '\0') {
    lVar13 = FUN_18017ea70();
    *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
    FUN_180252bd0(local_14e8,lVar20,param_2,&local_14f8);
    lVar13 = FUN_18017ea70();
    if (*(int *)(lVar13 + 4) != 0) {
      *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + -1;
    }
    cVar7 = (char)uStack_14e0;
  }
  auVar21 = local_14e8;
  if (cVar7 == '\0') {
    auVar21 = (undefined1  [8])0x0;
  }
  if (auVar21 == (undefined1  [8])0x0) {
  }
  AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  local_14b8._0_8_ = _DAT_180bb8890;
  local_14b8._8_8_ = uRam0000000180bb8898;
  uStack_14a8 = uRam0000000180bb88a0;
  lStack_14a0 = lRam0000000180bb88a8;
  local_14c8 = _DAT_180bb88b0;
  fStack_14c0 = (float)CONCAT71(uRam0000000180bb88b9,cRam0000000180bb88b8);
  uStack_14bc = (undefined4)((uint7)uRam0000000180bb88b9 >> 0x18);
  ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  if (auVar21 != (undefined1  [8])local_14b8._0_8_) {
  }
  FUN_1802cc9c0(local_1498,param_2);
  local_14b8._0_8_ = local_1498;
  if (0xf < local_1480) {
    local_14b8._0_8_ = local_1498[0];
  }
  local_14b8._8_8_ = local_1488;
  cVar7 = FUN_1802cccd0(local_14b8);
  if (cVar7 == '\0') {
    if (local_1488 != 0) {
      _Buf1 = local_1498;
      if (0xf < local_1480) {
        _Buf1 = local_1498[0];
      }
      if ((local_1488 != 7) || (iVar9 = memcmp(_Buf1,"unknown",7), iVar9 != 0)) goto LAB_1802d3e3b;
    }
    AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
    local_14b8._8_8_ = uRam0000000180bb8898;
    local_14b8._0_8_ = _DAT_180bb8890;
    uStack_14a8 = uRam0000000180bb88a0;
    lStack_14a0 = lRam0000000180bb88a8;
    local_14c8 = _DAT_180bb88b0;
    fStack_14c0 = (float)CONCAT71(uRam0000000180bb88b9,cRam0000000180bb88b8);
    uStack_14bc = (undefined4)((uint7)uRam0000000180bb88b9 >> 0x18);
    ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
    uVar25 = local_14b8._8_8_;
    if (local_14b8._8_8_ != 0) {
      iVar9 = DAT_180c6eac8;
      if (DAT_180c6eac8 == 0) {
        UVar12 = GetTickCount64();
        if (UVar12 < DAT_180c6ead0) {
          iVar9 = 0;
        }
        else {
          local_14e8 = (undefined1  [8])&DAT_1808fcf80;
          iVar9 = FUN_1805f68d0(&DAT_1808fcf80);
          if (iVar9 != 0) goto LAB_1802d3ee1;
          if (DAT_1808fcfcc == 0x7fffffff) {
            DAT_1808fcfcc = 0x7ffffffe;
            goto LAB_1802d3ef6;
          }
          if ((DAT_180c6eac8 == 0) && (DAT_180c6ead0 <= UVar12)) {
            DAT_180c6eac8 = FUN_1804174b0("C_BasePlayerPawn",0x51b23a93);
            if (DAT_180c6eac8 == 0) {
              DAT_180c6ead0 = UVar12 + 1000;
            }
            else {
              DAT_180c6ead0 = 0xffffffffffffffff;
            }
          }
          iVar9 = DAT_180c6eac8;
          FUN_1805f68fc(&DAT_1808fcf80);
        }
      }
      lVar13 = FUN_18017ea70();
      *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
      if ((longlong)iVar9 + uVar25 == 0) {
        bVar2 = false;
        auVar21 = local_14e8;
      }
      else {
        local_1528 = (undefined *)0x0;
        cVar7 = FUN_1804514f0(&local_1528,(longlong)iVar9 + uVar25,8);
        if (cVar7 == '\0') {
          bVar2 = false;
          auVar21 = local_14e8;
        }
        else {
          bVar2 = true;
          auVar21 = (undefined1  [8])local_1528;
        }
      }
      lVar13 = FUN_18017ea70();
      if (*(int *)(lVar13 + 4) != 0) {
        *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + -1;
      }
      puVar18 = (undefined *)0x0;
      if (bVar2) {
        puVar18 = (undefined *)auVar21;
      }
      if (puVar18 != (undefined *)0x0) {
        iVar9 = DAT_180c6ead8;
        if (DAT_180c6ead8 == 0) {
          UVar12 = GetTickCount64();
          if (UVar12 < DAT_180c6eab0) {
            iVar9 = 0;
          }
          else {
            local_14e8 = (undefined1  [8])&DAT_1808fcf30;
            iVar9 = FUN_1805f68d0(&DAT_1808fcf30);
            if (iVar9 != 0) goto LAB_1802d3ee1;
            if (DAT_1808fcf7c == 0x7fffffff) {
              DAT_1808fcf7c = 0x7ffffffe;
              goto LAB_1802d3ef6;
            }
            if ((DAT_180c6ead8 == 0) && (DAT_180c6eab0 <= UVar12)) {
              DAT_180c6ead8 = FUN_1804174b0("CPlayer_WeaponServices",0x940131c5);
              if (DAT_180c6ead8 == 0) {
                DAT_180c6eab0 = UVar12 + 1000;
              }
              else {
                DAT_180c6eab0 = 0xffffffffffffffff;
              }
            }
            iVar9 = DAT_180c6ead8;
            FUN_1805f68fc(&DAT_1808fcf30);
          }
        }
        lVar13 = FUN_18017ea70();
        *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
        if (puVar18 + iVar9 != (undefined *)0x0) {
          local_1528 = (undefined *)((ulonglong)local_1528 & 0xffffffff00000000);
          FUN_1804514f0(&local_1528,puVar18 + iVar9,4);
        }
        lVar13 = FUN_18017ea70();
        if (*(int *)(lVar13 + 4) != 0) {
          *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + -1;
        }
      }
    }
    lVar13 = FUN_1803d4150();
    if (lVar13 == 0) goto LAB_1802d3e3b;
    iVar9 = DAT_180c6eab8;
    if (DAT_180c6eab8 == 0) {
      UVar12 = GetTickCount64();
      if (UVar12 < DAT_180c6eac0) {
        iVar9 = 0;
      }
      else {
        local_14e8 = (undefined1  [8])&DAT_1808fce90;
        iVar9 = FUN_1805f68d0(&DAT_1808fce90);
        if (iVar9 != 0) goto LAB_1802d3ee1;
        if (DAT_1808fcedc == 0x7fffffff) {
          DAT_1808fcedc = 0x7ffffffe;
          goto LAB_1802d3ef6;
        }
        if ((DAT_180c6eab8 == 0) && (DAT_180c6eac0 <= UVar12)) {
          DAT_180c6eab8 = FUN_1804174b0("C_BaseEntity",0xc02ce796);
          if (DAT_180c6eab8 == 0) {
            DAT_180c6eac0 = UVar12 + 1000;
          }
          else {
            DAT_180c6eac0 = 0xffffffffffffffff;
          }
        }
        iVar9 = DAT_180c6eab8;
        FUN_1805f68fc(&DAT_1808fce90);
      }
    }
    lVar14 = FUN_18017ea70();
    *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + 1;
    lVar13 = (longlong)iVar9 + 8 + lVar13;
    if (lVar13 == 0) {
      bVar2 = false;
      auVar21 = local_14e8;
    }
    else {
      local_1528 = (undefined *)0x0;
      cVar7 = FUN_1804514f0(&local_1528,lVar13,8);
      if (cVar7 == '\0') {
        bVar2 = false;
        auVar21 = local_14e8;
      }
      else {
        bVar2 = true;
        auVar21 = (undefined1  [8])local_1528;
      }
    }
    lVar13 = FUN_18017ea70();
    if (*(int *)(lVar13 + 4) != 0) {
      *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + -1;
    }
    puVar18 = (undefined *)0x0;
    if (bVar2) {
      puVar18 = (undefined *)auVar21;
    }
    if (puVar18 == (undefined *)0x0) goto LAB_1802d3e3b;
    iVar9 = DAT_180c6eaa4;
    if (DAT_180c6eaa4 == 0) {
      UVar12 = GetTickCount64();
      if (UVar12 < DAT_180c6eaa8) {
        iVar9 = 0;
      }
      else {
        local_14e8 = (undefined1  [8])&DAT_1808fcee0;
        iVar9 = FUN_1805f68d0(&DAT_1808fcee0);
        if (iVar9 != 0) goto LAB_1802d3ee1;
        if (DAT_1808fcf2c == 0x7fffffff) {
          DAT_1808fcf2c = 0x7ffffffe;
          goto LAB_1802d3ef6;
        }
        if ((DAT_180c6eaa4 == 0) && (DAT_180c6eaa8 <= UVar12)) {
          DAT_180c6eaa4 = FUN_1804174b0("CCSWeaponBaseVData",0xb2a4b729);
          if (DAT_180c6eaa4 == 0) {
            DAT_180c6eaa8 = UVar12 + 1000;
          }
          else {
            DAT_180c6eaa8 = 0xffffffffffffffff;
          }
        }
        iVar9 = DAT_180c6eaa4;
        FUN_1805f68fc(&DAT_1808fcee0);
      }
    }
    lVar13 = FUN_18017ea70();
    *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
    bVar2 = false;
    if (puVar18 + iVar9 != (undefined *)0x0) {
      local_1528 = (undefined *)((ulonglong)local_1528 & 0xffffffff00000000);
      cVar7 = FUN_1804514f0(&local_1528,puVar18 + iVar9,4);
      if (cVar7 == '\0') {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
    }
    iVar9 = (int)(float)local_1528;
    lVar13 = FUN_18017ea70();
    if (*(int *)(lVar13 + 4) != 0) {
      *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + -1;
    }
    iVar10 = 0;
    if (bVar2) {
      iVar10 = iVar9;
    }
    if (5 < iVar10 - 1U) goto LAB_1802d3e3b;
  }
  lVar13 = DAT_180bb8958;
  lVar14 = FUN_18017ea70();
  *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + 1;
  if (lVar13 == 0) {
    bVar2 = false;
    auVar21 = local_14e8;
  }
  else {
    local_1528 = (undefined *)0x0;
    cVar7 = FUN_1804514f0(&local_1528,lVar13,8);
    if (cVar7 == '\0') {
      bVar2 = false;
      auVar21 = local_14e8;
    }
    else {
      bVar2 = true;
      auVar21 = (undefined1  [8])local_1528;
    }
  }
  lVar13 = FUN_18017ea70();
  if (*(int *)(lVar13 + 4) != 0) {
    *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + -1;
  }
  if ((!bVar2) || (auVar21 == (undefined1  [8])0x0)) goto LAB_1802d3e3b;
  lVar13 = FUN_18017ea70();
  *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
  auVar30 = ZEXT864(0);
  uVar19 = 0;
  if ((undefined *)((longlong)auVar21 + 0x30) != (undefined *)0x0) {
    local_1528 = (undefined *)((ulonglong)local_1528 & 0xffffffff00000000);
    cVar7 = FUN_1804514f0(&local_1528,(undefined *)((longlong)auVar21 + 0x30),4);
    if (cVar7 == '\0') {
      uVar19 = 0;
    }
    else {
      uVar19 = 1;
    }
  }
  auVar28 = ZEXT464((uint)(float)local_1528);
  lVar13 = FUN_18017ea70();
  if (*(int *)(lVar13 + 4) != 0) {
    *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + -1;
  }
  auVar27 = vpcmpeqd_avx(ZEXT416(uVar19),SUB6416(ZEXT464(0),0));
  auVar27 = vblendvps_avx(auVar28._0_16_,auVar30._0_16_,auVar27);
  auVar28 = ZEXT1664(auVar27);
  sVar8 = thunk_FUN_180624430(auVar27._0_8_);
  if ((0 < sVar8) || (auVar28._0_4_ < auVar30._0_4_)) goto LAB_1802d3e3b;
  local_14b8 = ZEXT816(0x180cc9b08);
  iVar9 = FUN_1805f68d0(&DAT_180cc9b08);
  if (iVar9 != 0) {
LAB_1802d3ee1:
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_180cc9b54 == 0x7fffffff) {
    DAT_180cc9b54 = 0x7ffffffe;
LAB_1802d3ef6:
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  local_14b8[8] = 1;
  UVar12 = GetTickCount64();
  pauVar3 = DAT_180cc9a98;
  pauVar22 = DAT_180cc9a90;
  if (DAT_180cc9a90 == DAT_180cc9a98) {
LAB_1802d2e5b:
    if (pauVar22 != pauVar3) goto LAB_1802d2e60;
  }
  else {
    do {
      if ((UVar12 < *(ulonglong *)pauVar22[1]) || (100 < UVar12 - *(ulonglong *)pauVar22[1])) break;
      pauVar22 = (undefined1 (*) [16])(pauVar22[1] + 8);
    } while (pauVar22 != DAT_180cc9a98);
    if (pauVar22 == DAT_180cc9a98) goto LAB_1802d2e5b;
    pauVar17 = (undefined1 (*) [16])(pauVar22[1] + 8);
    if (pauVar17 != DAT_180cc9a98) {
      do {
        if ((*(ulonglong *)pauVar17[1] <= UVar12) && (UVar12 - *(ulonglong *)pauVar17[1] < 0x65)) {
          uVar25 = *(undefined8 *)(*pauVar17 + 8);
          *(undefined8 *)*pauVar22 = *(undefined8 *)*pauVar17;
          *(undefined8 *)(*pauVar22 + 8) = uVar25;
          *(undefined8 *)pauVar22[1] = *(undefined8 *)pauVar17[1];
          pauVar22 = (undefined1 (*) [16])(pauVar22[1] + 8);
        }
        pauVar17 = (undefined1 (*) [16])(pauVar17[1] + 8);
      } while (pauVar17 != pauVar3);
      goto LAB_1802d2e5b;
    }
LAB_1802d2e60:
    lVar13 = (longlong)DAT_180cc9a98 - (longlong)pauVar3;
    FUN_18063aed0(pauVar22,pauVar3,lVar13);
    DAT_180cc9a98 = (undefined1 (*) [16])(lVar13 + (longlong)pauVar22);
  }
  cVar7 = '\0';
  auVar35 = ZEXT1664(_DAT_18086dba0);
  if (DAT_180cc9a90 == DAT_180cc9a98) {
LAB_1802d2ed7:
    if (((DAT_180cc9bad != '\0') && (DAT_180cc9b80 <= UVar12)) && (UVar12 - DAT_180cc9b80 < 0x33)) {
      auVar29 = ZEXT864(DAT_180cc9b6c);
      fVar24 = DAT_180cc9b74;
      goto LAB_1802d2f04;
    }
    AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
    uStack_14e0 = uRam0000000180bb8898;
    local_14e8 = (undefined1  [8])_DAT_180bb8890;
    uStack_14d8 = uRam0000000180bb88a0;
    lStack_14d0 = lRam0000000180bb88a8;
    auVar30 = ZEXT1664(auVar30._0_16_);
    auVar35 = ZEXT1664(auVar35._0_16_);
    auVar28 = ZEXT1664(auVar28._0_16_);
    cVar6 = cRam0000000180bb88b8;
    ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
    lVar13 = 0;
    if (cVar6 != '\0') {
      lVar13 = uStack_14e0;
    }
    iVar9 = DAT_180c6ea90;
    if (DAT_180c6ea90 == 0) {
      auVar30 = ZEXT1664(auVar30._0_16_);
      auVar35 = ZEXT1664(auVar35._0_16_);
      auVar28 = ZEXT1664(auVar28._0_16_);
      UVar12 = GetTickCount64();
      if (UVar12 < DAT_180c6ea98) {
        iVar9 = 0;
      }
      else {
        local_14e8 = (undefined1  [8])&DAT_1808fce40;
        iVar9 = FUN_1805f68d0(&DAT_1808fce40);
        if (iVar9 != 0) goto LAB_1802d3eb6;
        if (DAT_1808fce8c == 0x7fffffff) {
          DAT_1808fce8c = 0x7ffffffe;
          goto LAB_1802d3f0b;
        }
        if ((DAT_180c6ea90 == 0) && (DAT_180c6ea98 <= UVar12)) {
          DAT_180c6ea90 = FUN_1804174b0("C_BaseEntity",0x9d930423);
          if (DAT_180c6ea90 == 0) {
            DAT_180c6ea98 = UVar12 + 1000;
          }
          else {
            DAT_180c6ea98 = 0xffffffffffffffff;
          }
        }
        iVar9 = DAT_180c6ea90;
        FUN_1805f68fc(&DAT_1808fce40);
      }
    }
    iVar10 = DAT_180c6eaa0;
    if (DAT_180c6eaa0 == 0) {
      auVar30 = ZEXT1664(auVar30._0_16_);
      auVar35 = ZEXT1664(auVar35._0_16_);
      auVar28 = ZEXT1664(auVar28._0_16_);
      UVar12 = GetTickCount64();
      if (UVar12 < DAT_180c6ea78) {
        iVar10 = 0;
      }
      else {
        local_14e8 = (undefined1  [8])&DAT_1808fcdf0;
        iVar10 = FUN_1805f68d0(&DAT_1808fcdf0);
        if (iVar10 != 0) goto LAB_1802d3eb6;
        if (DAT_1808fce3c == 0x7fffffff) {
          DAT_1808fce3c = 0x7ffffffe;
          goto LAB_1802d3f0b;
        }
        if ((DAT_180c6eaa0 == 0) && (DAT_180c6ea78 <= UVar12)) {
          DAT_180c6eaa0 = FUN_1804174b0("CGameSceneNode",0xe8b4eae5);
          if (DAT_180c6eaa0 == 0) {
            DAT_180c6ea78 = UVar12 + 1000;
          }
          else {
            DAT_180c6ea78 = 0xffffffffffffffff;
          }
        }
        iVar10 = DAT_180c6eaa0;
        FUN_1805f68fc(&DAT_1808fcdf0);
      }
    }
    iVar11 = DAT_180c6ea80;
    if (DAT_180c6ea80 == 0) {
      auVar30 = ZEXT1664(auVar30._0_16_);
      auVar35 = ZEXT1664(auVar35._0_16_);
      auVar28 = ZEXT1664(auVar28._0_16_);
      UVar12 = GetTickCount64();
      if (UVar12 < DAT_180c6ea88) {
        iVar11 = 0;
      }
      else {
        local_14e8 = (undefined1  [8])&DAT_1808fcd50;
        iVar11 = FUN_1805f68d0(&DAT_1808fcd50);
        if (iVar11 != 0) goto LAB_1802d3eb6;
        if (DAT_1808fcd9c == 0x7fffffff) {
          DAT_1808fcd9c = 0x7ffffffe;
          goto LAB_1802d3f0b;
        }
        if ((DAT_180c6ea80 == 0) && (DAT_180c6ea88 <= UVar12)) {
          DAT_180c6ea80 = FUN_1804174b0("C_BaseModelEntity",0x39db834b);
          if (DAT_180c6ea80 == 0) {
            DAT_180c6ea88 = UVar12 + 1000;
          }
          else {
            DAT_180c6ea88 = 0xffffffffffffffff;
          }
        }
        iVar11 = DAT_180c6ea80;
        FUN_1805f68fc(&DAT_1808fcd50);
      }
    }
    if ((lVar13 == 0) || (iVar9 == 0)) {
LAB_1802d32aa:
      uStack_14e0._4_1_ = 0;
      auVar27 = _local_14e8;
      if (lVar13 != 0) goto LAB_1802d32be;
LAB_1802d33ed:
      auVar26 = _local_14e8;
      auVar37 = auVar28._0_16_;
      auVar36 = auVar35._0_16_;
      auVar34 = auVar30._0_16_;
      auVar5 = stack0xffffffffffffeb1d;
      local_1518 = (float)local_14e8._0_4_;
      local_14e8[4] = 0;
      uVar4 = local_14e8._0_5_;
      local_1508 = (undefined *)local_14e8;
      uStack_1514 = local_14e8._4_4_;
      if ((lVar13 != 0) && (iVar11 != 0)) goto LAB_1802d3415;
      _local_14e8 = CONCAT115(auVar5,uVar4);
      local_1500 = (undefined *)local_14e8;
      uStack_14e0 = auVar26._8_8_;
      if ((lVar13 != 0) && (iVar11 != 0)) goto LAB_1802d355e;
      local_1528._0_5_ = (uint5)(uint)(float)local_1528;
    }
    else {
      auVar30 = ZEXT1664(auVar30._0_16_);
      auVar35 = ZEXT1664(auVar35._0_16_);
      auVar28 = ZEXT1664(auVar28._0_16_);
      lVar14 = FUN_18017ea70();
      *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + 1;
      if (iVar9 + lVar13 == 0) {
        bVar2 = false;
        auVar21 = local_14e8;
      }
      else {
        local_1528 = (undefined *)0x0;
        cVar6 = FUN_1804514f0(&local_1528,iVar9 + lVar13,8);
        if (cVar6 == '\0') {
          bVar2 = false;
          auVar21 = local_14e8;
        }
        else {
          bVar2 = true;
          auVar21 = (undefined1  [8])local_1528;
        }
      }
      lVar14 = FUN_18017ea70();
      if (*(int *)(lVar14 + 4) != 0) {
        *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + -1;
      }
      puVar18 = (undefined *)0x0;
      if (bVar2) {
        puVar18 = (undefined *)auVar21;
      }
      if ((puVar18 == (undefined *)0x0) || (iVar10 == 0)) goto LAB_1802d32aa;
      lVar14 = FUN_18017ea70();
      auVar27 = _local_14e8;
      *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + 1;
      if (puVar18 + iVar10 == (undefined *)0x0) {
LAB_1802d328c:
        uStack_150c = uStack_150c & 0xffffff00;
      }
      else {
        local_14e8._4_4_ = auVar30._0_4_;
        local_14e8._0_4_ = local_14e8._4_4_;
        uStack_14e0._4_4_ = auVar27._12_4_;
        uStack_14e0._0_4_ = (float)local_14e8._4_4_;
        cVar6 = FUN_1804514f0(local_14e8,puVar18 + iVar10,0xc);
        if (cVar6 == '\0') goto LAB_1802d328c;
        local_1518 = local_14e8._0_4_;
        uStack_1514 = local_14e8._4_4_;
        uStack_1510 = (float)uStack_14e0;
        uStack_150c = CONCAT31(uStack_150c._1_3_,1);
      }
      lVar14 = FUN_18017ea70();
      if (*(int *)(lVar14 + 4) != 0) {
        *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + -1;
      }
      auVar27._4_4_ = uStack_1514;
      auVar27._0_4_ = local_1518;
      auVar27._8_4_ = uStack_1510;
      auVar27._12_4_ = uStack_150c;
LAB_1802d32be:
      auVar36 = auVar28._0_16_;
      auVar34 = auVar35._0_16_;
      auVar26 = auVar30._0_16_;
      if (iVar11 == 0) goto LAB_1802d33ed;
      iVar9 = DAT_180c6ea6c;
      if (DAT_180c6ea6c == 0) {
        auVar30 = ZEXT1664(auVar26);
        auVar28 = ZEXT1664(auVar27);
        auVar35 = ZEXT1664(auVar34);
        auVar29 = ZEXT1664(auVar36);
        UVar12 = GetTickCount64();
        auVar36 = auVar29._0_16_;
        auVar34 = auVar35._0_16_;
        auVar27 = auVar28._0_16_;
        auVar26 = auVar30._0_16_;
        if (UVar12 < DAT_180c6ea70) {
          iVar9 = 0;
        }
        else {
          local_14e8 = (undefined1  [8])&DAT_1808fcda0;
          iVar9 = FUN_1805f68d0(&DAT_1808fcda0);
          if (iVar9 != 0) goto LAB_1802d3eb6;
          if (DAT_1808fcdec == 0x7fffffff) {
            DAT_1808fcdec = 0x7ffffffe;
            goto LAB_1802d3f0b;
          }
          if ((DAT_180c6ea6c == 0) && (DAT_180c6ea70 <= UVar12)) {
            DAT_180c6ea6c = FUN_1804174b0("CNetworkViewOffsetVector",0x8feb7867);
            if (DAT_180c6ea6c == 0) {
              DAT_180c6ea70 = UVar12 + 1000;
            }
            else {
              DAT_180c6ea70 = 0xffffffffffffffff;
            }
          }
          iVar9 = DAT_180c6ea6c;
          FUN_1805f68fc(&DAT_1808fcda0);
          auVar36 = auVar29._0_16_;
          auVar34 = auVar35._0_16_;
          auVar27 = auVar28._0_16_;
          auVar26 = auVar30._0_16_;
        }
      }
      auVar30 = ZEXT1664(auVar26);
      auVar28 = ZEXT1664(auVar27);
      auVar35 = ZEXT1664(auVar34);
      auVar29 = ZEXT1664(auVar36);
      lVar14 = FUN_18017ea70();
      *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + 1;
      lVar14 = (longlong)iVar9 + (longlong)iVar11 + lVar13;
      if (lVar14 == 0) {
LAB_1802d33c6:
        local_1528._0_5_ = (uint5)(uint)(float)local_1528;
      }
      else {
        local_1528 = (undefined *)CONCAT44(local_1528._4_4_,auVar30._0_4_);
        cVar6 = FUN_1804514f0(&local_1528,lVar14,4);
        if (cVar6 == '\0') goto LAB_1802d33c6;
        local_1528._0_5_ = CONCAT14(1,(float)local_1528);
      }
      lVar14 = FUN_18017ea70();
      auVar37 = auVar29._0_16_;
      auVar36 = auVar35._0_16_;
      auVar27 = auVar28._0_16_;
      auVar34 = auVar30._0_16_;
      if (*(int *)(lVar14 + 4) != 0) {
        *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + -1;
      }
      local_1508 = local_1528;
      local_1518 = SUB84(local_1528,0);
      uStack_1514 = (undefined4)((ulonglong)local_1528 >> 0x20);
LAB_1802d3415:
      iVar9 = DAT_180c6ea58;
      if (DAT_180c6ea58 == 0) {
        auVar30 = ZEXT1664(auVar34);
        auVar28 = ZEXT1664(auVar27);
        auVar35 = ZEXT1664(auVar36);
        auVar29 = ZEXT1664(auVar37);
        UVar12 = GetTickCount64();
        auVar37 = auVar29._0_16_;
        auVar36 = auVar35._0_16_;
        auVar27 = auVar28._0_16_;
        auVar34 = auVar30._0_16_;
        if (UVar12 < DAT_180c6ea60) {
          iVar9 = 0;
        }
        else {
          local_14e8 = (undefined1  [8])&DAT_1808fcd00;
          iVar9 = FUN_1805f68d0(&DAT_1808fcd00);
          if (iVar9 != 0) goto LAB_1802d3eb6;
          if (DAT_1808fcd4c == 0x7fffffff) {
            DAT_1808fcd4c = 0x7ffffffe;
            goto LAB_1802d3f0b;
          }
          if ((DAT_180c6ea58 == 0) && (DAT_180c6ea60 <= UVar12)) {
            DAT_180c6ea58 = FUN_1804174b0("CNetworkViewOffsetVector",0x8eeb76d4);
            if (DAT_180c6ea58 == 0) {
              DAT_180c6ea60 = UVar12 + 1000;
            }
            else {
              DAT_180c6ea60 = 0xffffffffffffffff;
            }
          }
          iVar9 = DAT_180c6ea58;
          FUN_1805f68fc(&DAT_1808fcd00);
          auVar37 = auVar29._0_16_;
          auVar36 = auVar35._0_16_;
          auVar27 = auVar28._0_16_;
          auVar34 = auVar30._0_16_;
        }
      }
      auVar30 = ZEXT1664(auVar34);
      auVar28 = ZEXT1664(auVar27);
      auVar35 = ZEXT1664(auVar36);
      auVar29 = ZEXT1664(auVar37);
      lVar14 = FUN_18017ea70();
      *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + 1;
      lVar14 = (longlong)iVar9 + (longlong)iVar11 + lVar13;
      if (lVar14 == 0) {
LAB_1802d3512:
        local_1528._0_5_ = (uint5)(uint)(float)local_1528;
      }
      else {
        local_1528 = (undefined *)CONCAT44(local_1528._4_4_,auVar30._0_4_);
        cVar6 = FUN_1804514f0(&local_1528,lVar14,4);
        if (cVar6 == '\0') goto LAB_1802d3512;
        local_1528._0_5_ = CONCAT14(1,(float)local_1528);
      }
      lVar14 = FUN_18017ea70();
      auVar37 = auVar29._0_16_;
      auVar36 = auVar35._0_16_;
      auVar27 = auVar28._0_16_;
      auVar34 = auVar30._0_16_;
      if (*(int *)(lVar14 + 4) != 0) {
        *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + -1;
      }
      local_1500 = local_1528;
      local_14e8 = (undefined1  [8])local_1528;
LAB_1802d355e:
      iVar9 = DAT_180c6ea68;
      if (DAT_180c6ea68 == 0) {
        auVar30 = ZEXT1664(auVar34);
        auVar28 = ZEXT1664(auVar27);
        auVar35 = ZEXT1664(auVar36);
        auVar29 = ZEXT1664(auVar37);
        UVar12 = GetTickCount64();
        auVar37 = auVar29._0_16_;
        auVar36 = auVar35._0_16_;
        auVar27 = auVar28._0_16_;
        auVar34 = auVar30._0_16_;
        if (UVar12 < DAT_180c6ea48) {
          iVar9 = 0;
        }
        else {
          local_1528 = &DAT_1808fcca0;
          iVar9 = FUN_1805f68d0(&DAT_1808fcca0);
          if (iVar9 != 0) {
LAB_1802d3eb6:
                    /* WARNING: Subroutine does not return */
            FUN_1805f6d44(5);
          }
          if (DAT_1808fccec == 0x7fffffff) {
            DAT_1808fccec = 0x7ffffffe;
LAB_1802d3f0b:
                    /* WARNING: Subroutine does not return */
            FUN_1805f6d44(6);
          }
          if ((DAT_180c6ea68 == 0) && (DAT_180c6ea48 <= UVar12)) {
            DAT_180c6ea68 = FUN_1804174b0("CNetworkViewOffsetVector",0x91eb7b8d);
            if (DAT_180c6ea68 == 0) {
              DAT_180c6ea48 = UVar12 + 1000;
            }
            else {
              DAT_180c6ea48 = 0xffffffffffffffff;
            }
          }
          iVar9 = DAT_180c6ea68;
          FUN_1805f68fc(&DAT_1808fcca0);
          auVar37 = auVar29._0_16_;
          auVar36 = auVar35._0_16_;
          auVar27 = auVar28._0_16_;
          auVar34 = auVar30._0_16_;
        }
      }
      auVar30 = ZEXT1664(auVar34);
      auVar29 = ZEXT1664(auVar27);
      auVar35 = ZEXT1664(auVar36);
      auVar28 = ZEXT1664(auVar37);
      lVar14 = FUN_18017ea70();
      *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + 1;
      lVar13 = (longlong)iVar9 + (longlong)iVar11 + lVar13;
      if (lVar13 == 0) {
LAB_1802d364d:
        local_1528._0_5_ = (uint5)(uint)(float)local_1528;
      }
      else {
        local_1528 = (undefined *)CONCAT44(local_1528._4_4_,auVar30._0_4_);
        cVar6 = FUN_1804514f0(&local_1528,lVar13,4);
        if (cVar6 == '\0') goto LAB_1802d364d;
        local_1528._0_5_ = CONCAT14(1,(float)local_1528);
      }
      lVar13 = FUN_18017ea70();
      auVar27 = auVar29._0_16_;
      if (*(int *)(lVar13 + 4) != 0) {
        *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + -1;
      }
    }
    if ((((auVar27[0xc] != '\0') && (local_1508._4_1_ != '\0')) && (local_1500._4_1_ != '\0')) &&
       ((char)((ulonglong)local_1528 >> 0x20) != '\0')) {
      auVar30 = ZEXT1664(auVar30._0_16_);
      auVar29 = ZEXT1664(auVar27);
      auVar35 = ZEXT1664(auVar35._0_16_);
      auVar28 = ZEXT1664(auVar28._0_16_);
      fVar24 = (float)local_1528;
      fVar31 = local_1518;
      fVar33 = (float)local_14e8._0_4_;
      sVar8 = thunk_FUN_180624430();
      if (((0 < sVar8) || (16.0 <= (float)((uint)fVar31 & auVar35._0_4_))) ||
         ((16.0 <= (float)((uint)fVar33 & auVar35._0_4_) ||
          ((fVar24 <= auVar30._0_4_ || (100.0 <= fVar24)))))) goto LAB_1802d3733;
      fVar31 = fVar31 + auVar29._0_4_;
      auVar26 = auVar29._0_16_;
      auVar27 = vshufps_avx(auVar26,auVar26,0x55);
      fVar33 = fVar33 + auVar27._0_4_;
      uVar23 = (ulonglong)(uint)fVar33;
      auVar27 = vshufps_avx(auVar26,auVar26,0xaa);
      fVar24 = fVar24 + auVar27._0_4_;
      auVar27 = vunpcklps_avx(ZEXT416((uint)fVar31),ZEXT416((uint)fVar33));
      auVar29 = ZEXT1664(auVar27);
      goto LAB_1802d2f1d;
    }
LAB_1802d3733:
    bVar2 = false;
    auVar29 = ZEXT864((ulonglong)local_14e8);
    fVar24 = (float)uStack_14e0;
  }
  else {
    auVar29 = ZEXT1664(*DAT_180cc9a90);
    uStack_14d8 = *(ulonglong *)DAT_180cc9a90[1];
    FUN_18063aed0(DAT_180cc9a90,DAT_180cc9a90[1] + 8,
                  (longlong)DAT_180cc9a98 - (longlong)(DAT_180cc9a90[1] + 8));
    DAT_180cc9a98 = (undefined1 (*) [16])(DAT_180cc9a98[-2] + 8);
    auVar26 = auVar29._0_16_;
    auVar27 = vshufps_avx(auVar26,auVar26,0xaa);
    auVar32 = ZEXT1664(auVar27);
    auVar26 = vshufps_avx(auVar26,auVar26,0x55);
    cVar6 = FUN_1802c9280(auVar29._0_8_,auVar26._0_8_,auVar27._0_8_);
    if (cVar6 == '\0') goto LAB_1802d2ed7;
    fVar24 = auVar32._0_4_;
LAB_1802d2f04:
    auVar27 = vshufps_avx(auVar29._0_16_,auVar29._0_16_,0x55);
    uVar23 = auVar27._0_8_;
    local_14e8 = (undefined1  [8])auVar29._0_8_;
    auVar27 = _local_14e8;
    local_14e8._0_4_ = auVar29._0_4_;
    fVar31 = (float)local_14e8._0_4_;
    _local_14e8 = auVar27;
LAB_1802d2f1d:
    bVar2 = true;
    cVar7 = '\x01';
    cVar6 = FUN_1802c9280(fVar31,uVar23,fVar24);
    if (cVar6 == '\0') {
      cVar7 = '\0';
      bVar2 = false;
    }
  }
  puVar16 = DAT_180cc9ab0;
  auVar26 = auVar30._0_16_;
  auVar34 = auVar28._0_16_;
  auVar27 = auVar29._0_16_;
  lVar13 = DAT_180cc9a08;
  if (DAT_180b0c6c8 != '\0') {
    if (bVar2) {
      local_14c8 = auVar29._0_8_;
      uStack_14e0._0_4_ = fVar24;
      local_14e8 = (undefined1  [8])local_14c8;
      uStack_14e0._4_4_ = auVar28._0_4_;
      uStack_14d8 = uStack_14d8 & 0xffffffffffffff00;
      lStack_14d0 = DAT_180cc9b98 + 1;
      DAT_180cc9b98 = lStack_14d0;
      fStack_14c0 = fVar24;
      if (DAT_180cc9ab0 == DAT_180cc9ab8) {
        auVar29 = ZEXT1664(auVar27);
        auVar30 = ZEXT1664(auVar26);
        auVar35 = ZEXT1664(auVar35._0_16_);
        auVar28 = ZEXT1664(auVar34);
        FUN_180282d20(&DAT_180cc9aa8,DAT_180cc9ab0,local_14e8);
      }
      else {
        *DAT_180cc9ab0 = local_14c8;
        puVar16[1] = uStack_14e0;
        puVar16[2] = uStack_14d8;
        puVar16[3] = lStack_14d0;
        auVar26._8_4_ = fVar24;
        auVar26._0_8_ = local_14c8;
        auVar26._12_4_ = uStack_14bc;
        *(undefined1 (*) [16])(puVar16 + 4) = auVar26;
        DAT_180cc9ab0 = DAT_180cc9ab0 + 6;
      }
      if (0x20 < (ulonglong)(((longlong)DAT_180cc9ab0 - DAT_180cc9aa8) / 0x30)) {
        auVar29 = ZEXT1664(auVar29._0_16_);
        auVar30 = ZEXT1664(auVar30._0_16_);
        auVar35 = ZEXT1664(auVar35._0_16_);
        auVar28 = ZEXT1664(auVar28._0_16_);
        FUN_18063aed0();
        DAT_180cc9ab0 = DAT_180cc9ab0 + -6;
      }
      uVar23 = DAT_180cc9ad0;
      lVar13 = DAT_180cc9ac8;
      lVar14 = DAT_180cc9ac0;
      auVar26 = auVar30._0_16_;
      auVar34 = auVar28._0_16_;
      auVar27 = auVar29._0_16_;
      DAT_180cc9ad0 = 0;
      DAT_180cc9ac8 = 0;
      DAT_180cc9ac0 = 0;
      uStack_14e0 = lVar13;
      local_14e8 = (undefined1  [8])lVar14;
      uStack_14d8 = uVar23;
      if (lVar14 != lVar13) {
        auVar32 = ZEXT464(0x3e19999a);
        lVar20 = lVar14;
        do {
          if ((float)((uint)(auVar28._0_4_ - *(float *)(lVar20 + 0xc)) & auVar35._0_4_) <=
              auVar32._0_4_) {
            auVar29 = ZEXT1664(auVar29._0_16_);
            auVar30 = ZEXT1664(auVar30._0_16_);
            auVar32 = ZEXT1664(auVar32._0_16_);
            auVar35 = ZEXT1664(auVar35._0_16_);
            auVar28 = ZEXT1664(auVar28._0_16_);
            FUN_1802d1e00();
          }
          auVar26 = auVar30._0_16_;
          auVar34 = auVar28._0_16_;
          auVar27 = auVar29._0_16_;
          lVar20 = lVar20 + 0x10;
        } while (lVar20 != lVar13);
      }
      lVar13 = DAT_180cc9a08;
      if (lVar14 != 0) {
        uVar23 = uVar23 - lVar14 & 0xfffffffffffffff0;
        lVar13 = lVar14;
        if (0xfff < uVar23) {
          uVar23 = uVar23 + 0x27;
          lVar13 = *(longlong *)(lVar14 + -8);
          if (0x1f < (lVar14 - lVar13) - 8U) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        auVar30 = ZEXT1664(auVar27);
        auVar28 = ZEXT1664(auVar26);
        auVar35 = ZEXT1664(auVar34);
        FUN_1804547d0(lVar13,uVar23);
        auVar26 = auVar28._0_16_;
        auVar34 = auVar35._0_16_;
        auVar27 = auVar30._0_16_;
        lVar13 = DAT_180cc9a08;
      }
    }
    else {
      auVar30 = ZEXT1664(auVar27);
      auVar28 = ZEXT1664(auVar26);
      auVar35 = ZEXT1664(auVar34);
      FUN_18063ab10(&local_1478,0,0x600);
      FUN_18015ad60(&local_1478,0x600,0xffffffffffffffff,"source=firing_eye action=skip_visual_only"
                   );
      FUN_1800f6900(2);
      auVar26 = auVar28._0_16_;
      auVar34 = auVar35._0_16_;
      auVar27 = auVar30._0_16_;
      lVar13 = DAT_180cc9a08;
    }
  }
  for (; lVar13 != DAT_180cc9a10; lVar13 = lVar13 + 0x13d0) {
    if ((((*(char *)(lVar13 + 0x13a1) == '\0') && (*(char *)(lVar13 + 0x13a0) != '\0')) &&
        (fVar31 = auVar34._0_4_ - *(float *)(lVar13 + 0x68), -0.05 <= fVar31)) && (fVar31 <= 1.0)) {
      *(undefined1 *)(lVar13 + 0x13a1) = 1;
      if ((cVar7 != '\0') && (*(char *)(lVar13 + 0x13b8) == '\0')) {
        *(longlong *)(lVar13 + 0x13ac) = auVar27._0_8_;
        *(float *)(lVar13 + 0x13b4) = fVar24;
        *(undefined1 *)(lVar13 + 0x13b8) = 1;
        *(undefined1 *)(lVar13 + 0x50) = 1;
      }
      FUN_18063ab10(&local_1478,0,0x600);
      FUN_18015ad60(&local_1478,0x600,0xffffffffffffffff,
                    "command=%lld source=weapon_fire correlation=ordered weapon=%s");
      FUN_1800f6900(0);
      goto LAB_1802d3e2e;
    }
  }
  local_1478 = 0;
  local_1470 = 0;
  local_1468 = 0;
  local_1454 = auVar26._0_4_;
  local_1438 = 0;
  local_1418 = 0x7f7fffff;
  local_1414 = 0;
  auVar30 = ZEXT1664(auVar27);
  auVar28 = ZEXT1664(auVar26);
  auVar35 = ZEXT1664(auVar34);
  local_1464 = auVar26;
  local_1444 = local_1454;
  local_1440 = local_1454;
  local_143c = local_1454;
  local_1424 = local_1454;
  local_1420 = local_1454;
  local_141c = local_1454;
  local_140c = local_1454;
  FUN_18063ab10(local_1408,0,0x1000);
  puVar15 = auStack_1404;
  lVar13 = 8;
  do {
    *(undefined8 *)(puVar15 + -4) = 0;
    *(undefined8 *)(puVar15 + 4) = 0;
    *(undefined8 *)(puVar15 + 0xc) = 0;
    *(undefined4 *)(puVar15 + 0x14) = 0;
    *(undefined8 *)(puVar15 + 0x18) = 0x3f800000;
    *(undefined8 *)(puVar15 + 0x20) = 0;
    *(undefined8 *)(puVar15 + 0x28) = 0;
    *(undefined8 *)(puVar15 + 0x30) = 0;
    *(undefined8 *)(puVar15 + 0x38) = 0x3f800000;
    *(undefined8 *)(puVar15 + 0x40) = 0;
    *(undefined8 *)(puVar15 + 0x48) = 0;
    *(undefined8 *)(puVar15 + 0x50) = 0;
    *(undefined8 *)(puVar15 + 0x58) = 0x3f800000;
    *(undefined8 *)(puVar15 + 0x60) = 0;
    *(undefined8 *)(puVar15 + 0x68) = 0;
    *(undefined8 *)(puVar15 + 0x70) = 0;
    *(undefined8 *)(puVar15 + 0x78) = 0x3f800000;
    *(undefined8 *)(puVar15 + 0x80) = 0;
    *(undefined8 *)(puVar15 + 0x88) = 0;
    *(undefined8 *)(puVar15 + 0x90) = 0;
    *(undefined8 *)(puVar15 + 0x98) = 0x3f800000;
    *(undefined8 *)(puVar15 + 0xa0) = 0;
    *(undefined8 *)(puVar15 + 0xa8) = 0;
    *(undefined8 *)(puVar15 + 0xb0) = 0;
    *(undefined8 *)(puVar15 + 0xb8) = 0x3f800000;
    *(undefined8 *)(puVar15 + 0xc0) = 0;
    *(undefined8 *)(puVar15 + 200) = 0;
    *(undefined8 *)(puVar15 + 0xd0) = 0;
    *(undefined8 *)(puVar15 + 0xd8) = 0x3f800000;
    *(undefined8 *)(puVar15 + 0xe0) = 0;
    *(undefined8 *)(puVar15 + 0xe8) = 0;
    *(undefined8 *)(puVar15 + 0xf0) = 0;
    *(undefined8 *)(puVar15 + 0xf8) = 0x3f800000;
    *(undefined8 *)(puVar15 + 0x100) = 0;
    *(undefined8 *)(puVar15 + 0x108) = 0;
    *(undefined8 *)(puVar15 + 0x110) = 0;
    *(undefined8 *)(puVar15 + 0x118) = 0x3f800000;
    *(undefined8 *)(puVar15 + 0x120) = 0;
    *(undefined8 *)(puVar15 + 0x128) = 0;
    *(undefined8 *)(puVar15 + 0x130) = 0;
    *(undefined8 *)(puVar15 + 0x138) = 0x3f800000;
    *(undefined8 *)(puVar15 + 0x140) = 0;
    *(undefined8 *)(puVar15 + 0x148) = 0;
    *(undefined8 *)(puVar15 + 0x150) = 0;
    *(undefined8 *)(puVar15 + 0x158) = 0x3f800000;
    *(undefined8 *)(puVar15 + 0x160) = 0;
    *(undefined8 *)(puVar15 + 0x168) = 0;
    *(undefined8 *)(puVar15 + 0x170) = 0;
    *(undefined8 *)(puVar15 + 0x178) = 0x3f800000;
    *(undefined8 *)(puVar15 + 0x180) = 0;
    *(undefined8 *)(puVar15 + 0x188) = 0;
    *(undefined8 *)(puVar15 + 400) = 0;
    *(undefined8 *)(puVar15 + 0x198) = 0x3f800000;
    *(undefined8 *)(puVar15 + 0x1a0) = 0;
    *(undefined8 *)(puVar15 + 0x1a8) = 0;
    *(undefined8 *)(puVar15 + 0x1b0) = 0;
    *(undefined8 *)(puVar15 + 0x1b8) = 0x3f800000;
    *(undefined8 *)(puVar15 + 0x1c0) = 0;
    *(undefined8 *)(puVar15 + 0x1c8) = 0;
    *(undefined8 *)(puVar15 + 0x1d0) = 0;
    *(undefined8 *)(puVar15 + 0x1d8) = 0x3f800000;
    *(undefined8 *)(puVar15 + 0x1e0) = 0;
    *(undefined8 *)(puVar15 + 0x1e8) = 0;
    *(undefined8 *)(puVar15 + 0x1f0) = 0;
    *(undefined4 *)(puVar15 + 0x1f8) = 0x3f800000;
    puVar15 = puVar15 + 0x200;
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
  local_408 = 0;
  FUN_18063ab10(local_404,0,800);
  uVar25 = FUN_180233c60(local_404);
  local_e4 = 0;
  local_e0 = 0;
  local_d8 = 0x101;
  local_d3 = 0;
  local_cf = 0;
  local_cc = auVar28._0_4_;
  local_c0 = 0;
  local_b0 = 0;
  local_ac = 0;
  local_d4 = 1;
  local_1410 = auVar35._0_4_;
  if (cVar7 == '\0') {
    auVar27 = vunpcklps_avx(auVar28._0_16_,auVar28._0_16_);
    local_1434 = auVar27._0_8_;
    local_142c = local_cc;
  }
  else {
    local_1434 = auVar30._0_8_;
    local_142c = fVar24;
  }
  local_1428 = cVar7;
  local_c8 = local_cc;
  local_c4 = local_cc;
  local_bc = local_cc;
  local_b8 = local_cc;
  local_b4 = local_cc;
  puVar16 = (undefined8 *)FUN_1803dff30(uVar25,local_14e8);
  local_1450 = *puVar16;
  local_1448 = *(undefined4 *)(puVar16 + 1);
  if (DAT_180cc9a10 == DAT_180cc9a18) {
    FUN_1802ea6b0(&DAT_180cc9a08,DAT_180cc9a10,&local_1478);
  }
  else {
    FUN_18063aed0(DAT_180cc9a10,&local_1478,0x13d0);
    DAT_180cc9a10 = DAT_180cc9a10 + 0x13d0;
  }
  if (0x20 < (ulonglong)((DAT_180cc9a10 - DAT_180cc9a08) / 0x13d0)) {
    FUN_18063aed0(DAT_180cc9a08,DAT_180cc9a08 + 0x13d0,DAT_180cc9a10 - (DAT_180cc9a08 + 0x13d0));
    DAT_180cc9a10 = DAT_180cc9a10 + -0x13d0;
  }
LAB_1802d3e2e:
  FUN_1805f68fc(&DAT_180cc9b08);
LAB_1802d3e3b:
  FUN_18015c010(local_1498);
                    /* WARNING: Read-only address (ram,0x00018086dba0) is written */
}



