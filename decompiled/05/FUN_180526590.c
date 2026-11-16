// FUN_180526590 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180526590 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180526590(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [15];
  undefined1 **ppuVar18;
  undefined8 *****pppppuVar19;
  byte bVar20;
  char cVar21;
  undefined4 uVar22;
  int iVar23;
  longlong *plVar24;
  undefined8 uVar25;
  int *piVar26;
  short *psVar27;
  undefined8 *puVar28;
  longlong *plVar29;
  short sVar30;
  longlong lVar31;
  ulonglong uVar32;
  undefined8 *****pppppuVar33;
  undefined **ppuVar34;
  int iVar35;
  uint uVar36;
  ulonglong uVar37;
  int iVar38;
  longlong lVar39;
  undefined1 uVar40;
  int iVar41;
  longlong lVar42;
  short *psVar43;
  undefined1 (*pauVar44) [16];
  uint uVar45;
  longlong lVar46;
  uint uVar47;
  ulonglong uVar48;
  undefined1 (*pauVar49) [16];
  short *psVar50;
  longlong *plVar51;
  short *psVar52;
  undefined1 auVar53 [64];
  undefined1 auVar54 [64];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auStack_14f8 [32];
  undefined1 local_14d8;
  undefined1 (*local_14d0) [16];
  undefined8 local_14c8;
  char local_14c0;
  int local_14b8;
  int local_14b4;
  undefined1 local_14b0 [16];
  undefined8 uStack_14a0;
  undefined8 uStack_1498;
  undefined1 local_1490 [16];
  ulonglong uStack_1480;
  ulonglong uStack_1478;
  undefined1 local_1470 [16];
  ulonglong uStack_1460;
  ulonglong uStack_1458;
  longlong *local_1448;
  undefined1 uStack_1440;
  undefined1 uStack_143f;
  short sStack_143e;
  short sStack_143c;
  undefined1 uStack_143a;
  undefined1 uStack_1439;
  ulonglong local_1438 [2];
  undefined1 (*local_1428) [16];
  undefined8 uStack_1420;
  undefined8 uStack_1418;
  undefined8 uStack_1410;
  longlong *local_1408;
  longlong local_1400;
  undefined8 local_13f8;
  undefined8 uStack_13f0;
  undefined8 uStack_13e8;
  undefined8 uStack_13e0;
  undefined8 local_13d8;
  undefined8 local_13d0;
  undefined8 uStack_13c8;
  undefined8 uStack_13c0;
  undefined8 uStack_13b8;
  undefined8 local_13b0;
  undefined8 uStack_13a8;
  ulonglong uStack_13a0;
  ulonglong uStack_1398;
  undefined8 local_1390;
  undefined8 uStack_1388;
  ulonglong uStack_1380;
  ulonglong uStack_1378;
  char *local_1368;
  undefined8 local_1360;
  undefined1 local_1358 [16];
  undefined1 local_1348 [16];
  undefined1 local_1338 [32];
  undefined1 local_1318 [32];
  undefined1 local_12f8 [32];
  undefined1 local_12d8 [32];
  undefined1 local_12b8 [32];
  undefined1 local_1298 [16];
  undefined1 *local_1288 [2];
  ulonglong local_1278;
  longlong lStack_1270;
  undefined8 uStack_1268;
  longlong lStack_1260;
  undefined1 local_1258 [16];
  ulonglong uStack_1248;
  undefined8 uStack_1240;
  undefined8 *****local_1238 [2];
  ulonglong local_1228;
  ulonglong local_1220;
  int local_1218 [4];
  undefined8 uStack_1208;
  undefined8 uStack_1200;
  undefined8 uStack_11f8;
  undefined8 uStack_11f0;
  undefined8 uStack_11e8;
  ulonglong uStack_11e0;
  ulonglong uStack_11d8;
  undefined8 local_11d0;
  undefined8 uStack_11c8;
  undefined8 uStack_11c0;
  undefined8 uStack_11b8;
  undefined8 local_11a8;
  longlong alStack_11a0 [7];
  int local_1168 [2];
  undefined1 local_1160 [32];
  undefined1 local_1140 [32];
  undefined1 local_1120 [4296];
  ulonglong local_58;
  
  local_58 = DAT_1808d5f00 ^ (ulonglong)auStack_14f8;
  local_1358 = (undefined1  [16])0x0;
  plVar24 = (longlong *)FUN_180113860(&DAT_180bb9388);
  lVar31 = DAT_180bb9380;
  local_1400 = DAT_180bb9380;
  local_1358._8_8_ = plVar24;
  local_1358._0_8_ = DAT_180bb9380;
  if (plVar24 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar24 + 1) = (int)plVar24[1] + 1;
    UNLOCK();
  }
  LOCK();
  UNLOCK();
  bVar20 = (byte)DAT_180bb9388;
  DAT_180bb9388 = (int *)plVar24;
  local_1408 = plVar24;
  if ((bVar20 & 3) == 2) {
    FUN_1805fa36c(&DAT_180bb9388);
  }
  if ((DAT_180cd7500 & 1) == 0) {
    DAT_180cd7500 = DAT_180cd7500 | 1;
    atexit(FUN_180663e10);
  }
  if ((((((DAT_180cc9c58 != DAT_180cc9c60) && (DAT_180cc9c40 != DAT_180cc9c48)) &&
        (DAT_180cc9c10 != DAT_180cc9c18)) && (DAT_180cc9c28 != DAT_180cc9c30)) &&
      (((DAT_180b909b0 == 0 || (DAT_180c7e0a8 != DAT_180cc9bf8)) ||
       ((DAT_180c7e0a0 != (longlong)DAT_180cc9c78 - (longlong)DAT_180cc9c70 >> 3 ||
        (DAT_180c7e1d0 != lVar31)))))) && (DAT_1808e6670 == '\0')) {
    FUN_18063ab10(local_1168,0,0x1110);
    FUN_1805504d0(local_1168);
    if (DAT_180b909b0 != 0) {
      piVar26 = local_1168;
      lVar39 = 0x4970;
      plVar24 = DAT_180c62f50;
      lVar31 = DAT_180b909b0;
      do {
        lVar42 = 0x15;
        do {
          sVar30 = *(short *)(lVar39 + *(longlong *)(*plVar24 + (longlong)(int)plVar24[3] * 8));
          if (lVar31 != 0) {
            if (-1 < sVar30) {
              if ((int)sVar30 <
                  (int)((*(longlong *)(lVar31 + 0x60) - *(longlong *)(lVar31 + 0x58)) / 0x68)) {
                if ((longlong)sVar30 * 0x68 + *(longlong *)(lVar31 + 0x58) != 0) {
                  FUN_180528620(piVar26);
                  plVar24 = DAT_180c62f50;
                  lVar31 = DAT_180b909b0;
                }
              }
            }
          }
          piVar26 = piVar26 + 0x1a;
          lVar39 = lVar39 + 4;
          lVar42 = lVar42 + -1;
        } while (lVar42 != 0);
      } while (lVar39 < 0x4a18);
    }
    local_1298 = (undefined1  [16])0x0;
    if (DAT_180c7df28 == (undefined8 *)0x0) {
      local_1428 = (undefined1 (*) [16])0x180827288;
      uStack_1420 = (undefined1 **)0x15;
      DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_1428);
    }
    pauVar49 = (undefined1 (*) [16])
               (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x130);
    local_1428 = pauVar49;
    if (pauVar49 == (undefined1 (*) [16])0x0) {
      local_1298._8_8_ = (undefined1 (*) [16])0x0;
    }
    else {
      *pauVar49 = (undefined1  [16])0x0;
      *(undefined4 *)(*pauVar49 + 8) = 1;
      *(undefined4 *)(*pauVar49 + 0xc) = 1;
      *(undefined ***)*pauVar49 = std::_Ref_count_obj2<nl::inv::Catalog>::vftable;
      FUN_18063ab10(pauVar49 + 1,0,0x120);
      FUN_18056f9a0(pauVar49 + 1);
      local_1298._8_8_ = pauVar49;
    }
    pauVar49 = (undefined1 (*) [16])(local_1298._8_8_ + 0x10);
    local_1298._0_8_ = pauVar49;
    local_1288[0] = local_1298;
    local_14c8 = (undefined1 (*) [16])DAT_180cc9c00;
    if (DAT_180cc9bf8 != DAT_180cc9c00) {
      psVar52 = DAT_180cc9bf8 + 0x34;
      psVar27 = DAT_180cc9c00;
      psVar50 = DAT_180cc9bf8;
      do {
        cVar21 = (char)psVar52[0x24];
        if ((cVar21 != '\x04') && (cVar21 != '\x03')) {
          if (cVar21 == '\x01') {
            if (499 < *psVar50) goto LAB_18052692d;
          }
          else {
            if (cVar21 == '\x02') {
              if (*psVar50 != 0x13a4) {
                psVar27 = (short *)local_14c8;
                if (*psVar50 == 0x13a5) goto LAB_180526d4e;
                goto LAB_18052692d;
              }
            }
            else {
LAB_18052692d:
              if ((char)psVar52[0x25] == '\0') goto LAB_180526d4e;
              lVar31 = *(longlong *)(pauVar49[4] + 8) - *(longlong *)pauVar49[4];
              lVar31 = lVar31 / 6 + (lVar31 >> 0x3f);
              lVar31 = (lVar31 >> 2) - (lVar31 >> 0x3f);
              local_14d8 = cVar21 != '\x02';
              if ((bool)local_14d8) {
                local_1428 = (undefined1 (*) [16])local_1218;
                local_14b8 = (int)*psVar50;
                local_14b4 = 0;
                uStack_14a0 = 0;
                uStack_1498 = 0xf;
                local_14b0._1_15_ = SUB1615((undefined1  [16])0x0,1);
                auVar55[0xf] = 0;
                auVar55._0_15_ = local_14b0._1_15_;
                local_14b0 = auVar55 << 8;
                FUN_18015b360(local_1490,psVar52);
                FUN_18015b360(local_1470,psVar52 + 0x10);
                local_1218[1] = local_14b4;
                local_1218[0] = local_14b8;
                local_1218[2] = local_14b0._0_4_;
                local_1218[3] = local_14b0._4_4_;
                uStack_1208 = local_14b0._8_8_;
                uStack_1200 = uStack_14a0;
                uStack_11f8 = uStack_1498;
                uStack_14a0 = 0;
                uStack_1498 = 0xf;
                auVar56[0xf] = 0;
                auVar56._0_15_ = local_14b0._1_15_;
                local_14b0 = auVar56 << 8;
                uStack_11f0 = local_1490._0_8_;
                uStack_11e8 = local_1490._8_8_;
                uStack_11e0 = uStack_1480;
                uStack_11d8 = uStack_1478;
                uStack_1480 = 0;
                uStack_1478 = 0xf;
                auVar4[0xf] = 0;
                auVar4._0_15_ = local_1490._1_15_;
                local_1490 = auVar4 << 8;
                local_11d0 = local_1470._0_8_;
                uStack_11c8 = local_1470._8_8_;
                uStack_11c0 = uStack_1460;
                uStack_11b8 = uStack_1458;
                uStack_1460 = 0;
                uStack_1458 = 0xf;
                auVar5[0xf] = 0;
                auVar5._0_15_ = local_1470._1_15_;
                local_1470 = auVar5 << 8;
                uVar25 = FUN_18015b360(&local_13f8,psVar52 + -0x10);
                FUN_180527e00(local_1288,uVar25,0,local_1218);
                FUN_18015c010(local_1470);
                FUN_18015c010(local_1490);
                FUN_18015c010(local_14b0);
                pauVar49 = (undefined1 (*) [16])local_1298._0_8_;
              }
              psVar27 = DAT_180cc9c78;
              psVar43 = DAT_180cc9c70;
              if (DAT_180cc9c70 != DAT_180cc9c78) {
                do {
                  sVar30 = *psVar50;
                  if ((*psVar43 == sVar30) &&
                     (piVar26 = (int *)FUN_180208890(&DAT_180cc9bb0,*(undefined4 *)(psVar43 + 2)),
                     piVar26 != (int *)0x0)) {
                    local_1428 = (undefined1 (*) [16])local_1218;
                    local_14b4 = *piVar26;
                    uStack_14a0 = 0;
                    uStack_1498 = 0xf;
                    local_14b0._1_15_ = SUB1615((undefined1  [16])0x0,1);
                    auVar6[0xf] = 0;
                    auVar6._0_15_ = local_14b0._1_15_;
                    local_14b0 = auVar6 << 8;
                    local_14b8 = (int)sVar30;
                    FUN_18015b360(local_1490,psVar52);
                    local_1470._1_15_ = SUB1615((undefined1  [16])0x0,1);
                    auVar17 = (undefined1  [15])local_1470._1_15_;
                    local_1218[1] = local_14b4;
                    local_1218[0] = local_14b8;
                    local_1218[2] = local_14b0._0_4_;
                    local_1218[3] = local_14b0._4_4_;
                    uStack_1208 = local_14b0._8_8_;
                    uStack_1200 = uStack_14a0;
                    uStack_11f8 = uStack_1498;
                    uStack_14a0 = 0;
                    uStack_1498 = 0xf;
                    auVar7[0xf] = 0;
                    auVar7._0_15_ = local_14b0._1_15_;
                    local_14b0 = auVar7 << 8;
                    uStack_11f0 = local_1490._0_8_;
                    uStack_11e8 = local_1490._8_8_;
                    uStack_11e0 = uStack_1480;
                    uStack_11d8 = uStack_1478;
                    uStack_1480 = 0;
                    uStack_1478 = 0xf;
                    auVar8[0xf] = 0;
                    auVar8._0_15_ = local_1490._1_15_;
                    local_1490 = auVar8 << 8;
                    local_1470._8_8_ = SUB168((undefined1  [16])0x0,8);
                    local_11d0 = 0;
                    uStack_11c8 = local_1470._8_8_;
                    uStack_11c0 = 0;
                    uStack_11b8 = 0xf;
                    uStack_1460 = 0;
                    uStack_1458 = 0xf;
                    auVar9[0xf] = 0;
                    auVar9._0_15_ = auVar17;
                    local_1470 = auVar9 << 8;
                    uVar22 = FUN_180208c70(&DAT_180cc9bb0,*psVar50,*piVar26);
                    uVar25 = FUN_18015b360(&local_13f8,piVar26 + 0x1a);
                    FUN_180527e00(local_1288,uVar25,uVar22,local_1218);
                    FUN_18015c010(local_1470);
                    FUN_18015c010(local_1490);
                    FUN_18015c010(local_14b0);
                  }
                  psVar43 = psVar43 + 4;
                } while (psVar43 != psVar27);
                pauVar49 = (undefined1 (*) [16])local_1298._0_8_;
              }
              if ((int)((*(longlong *)(pauVar49[4] + 8) - *(longlong *)pauVar49[4]) / 0x18) ==
                  (int)lVar31) goto LAB_180526d49;
              uVar47 = *(uint *)(psVar52 + 0x22);
              if (((byte)uVar47 & 0xc) == 0xc) {
                bVar20 = 0;
LAB_180526c44:
                uVar40 = 3;
                if (bVar20 == 3) {
                  uVar40 = 1;
                }
              }
              else {
                if ((uVar47 & 4) == 0) {
                  bVar20 = -((uVar47 & 8) != 0) & 3;
                  goto LAB_180526c44;
                }
                uVar40 = 2;
              }
              uVar25 = FUN_18015b360(&local_13f8,psVar52 + -0x10);
              local_1448 = (longlong *)FUN_180509220(pauVar49,uVar25);
              cVar21 = (char)psVar52[0x24];
              if (cVar21 == '\x03') {
                uStack_1440 = 6;
              }
              else if (cVar21 == '\x01') {
                uStack_1440 = 4;
              }
              else if (cVar21 == '\x02') {
                uStack_1440 = 5;
              }
              else if (*psVar50 == 0x1f) {
                uStack_1440 = 3;
              }
              else {
                iVar23 = FUN_1801d69b0();
                if (iVar23 == 1) {
                  uStack_1440 = 0;
                }
                else if (((iVar23 - 2U & 0xfffffffc) != 0) || (uStack_1440 = 1, iVar23 == 4)) {
                  uStack_1440 = 2;
                }
              }
              sStack_143e = (short)lVar31;
              sStack_143c = (short)((*(longlong *)(local_1298._0_8_ + 0x48) -
                                    *(longlong *)(local_1298._0_8_ + 0x40)) / 0x18) - sStack_143e;
              uStack_143a = local_14d8;
              puVar28 = *(undefined8 **)pauVar49[3];
              uStack_143f = uVar40;
              if (puVar28 == *(undefined8 **)(pauVar49[3] + 8)) {
                FUN_180178c40(pauVar49[2] + 8,puVar28,&local_1448);
              }
              else {
                *puVar28 = local_1448;
                puVar28[1] = CONCAT17(uStack_1439,
                                      CONCAT16(local_14d8,
                                               CONCAT24(sStack_143c,
                                                        CONCAT22(sStack_143e,
                                                                 CONCAT11(uVar40,uStack_1440)))));
                *(longlong *)pauVar49[3] = *(longlong *)pauVar49[3] + 0x10;
              }
              pauVar49 = (undefined1 (*) [16])local_1298._0_8_;
            }
LAB_180526d49:
            psVar27 = (short *)local_14c8;
          }
        }
LAB_180526d4e:
        psVar50 = psVar50 + 0x5c;
        psVar52 = psVar52 + 0x5c;
      } while (psVar50 != psVar27);
    }
    lVar31 = *(longlong *)(pauVar49[4] + 8) - *(longlong *)pauVar49[4];
    lVar31 = lVar31 / 6 + (lVar31 >> 0x3f);
    uVar48 = (lVar31 >> 2) - (lVar31 >> 0x3f);
    local_1438[0] = uVar48;
    FUN_180204c30(&DAT_180bbb2a0);
    if (DAT_180bbe840 != 0) {
      if (DAT_180bbe840 < DAT_180bbe868 >> 3) {
        FUN_1801782e0(&DAT_180bbe830,*(undefined8 *)*DAT_180bbe838,DAT_180bbe838);
      }
      else {
        FUN_18013ef30();
        *(undefined1 (**) [16])*DAT_180bbe838 = DAT_180bbe838;
        *(undefined1 (**) [16])(*DAT_180bbe838 + 8) = DAT_180bbe838;
        DAT_180bbe840 = 0;
        local_1428 = DAT_180bbe838;
        FUN_1800f9880(DAT_180bbe848,DAT_180bbe850,&local_1428);
      }
    }
    local_11a8 = 0;
    alStack_11a0[0] = 0;
    alStack_11a0[1] = 0;
    alStack_11a0[2] = 0;
    alStack_11a0[3] = 0;
    alStack_11a0[4] = 0;
    alStack_11a0[5] = 0;
    alStack_11a0[6] = 0;
    FUN_1801ab100(&local_11a8);
    local_1218[0] = 0;
    local_1218[1] = 0;
    local_1218[2] = 0;
    local_1218[3] = 0;
    uStack_1208 = 0;
    uStack_1200 = 0;
    uStack_11f8 = 0;
    uStack_11f0 = 0;
    uStack_11e8 = 0;
    uStack_11e0 = 0;
    local_14c8 = (undefined1 (*) [16])((ulonglong)local_14c8 & 0xffffffff00000000);
    auVar54 = ZEXT864(0);
    FUN_180111790(local_1218,&local_14c8);
    local_1448 = DAT_180cc9c48;
    plVar24 = DAT_180cc9c40;
    if (DAT_180cc9c40 != DAT_180cc9c48) {
      plVar29 = DAT_180cc9c48;
      plVar51 = DAT_180cc9c40;
      do {
        psVar52 = (short *)*plVar51;
        if ((char)psVar52[0x59] != '\0') {
          local_14c8 = (undefined1 (*) [16])(psVar52 + 0x44);
          uVar25 = FUN_18015b360(local_12f8);
          FUN_180525a50(&local_1278,uVar25);
          local_14d0 = (undefined1 (*) [16])(psVar52 + 0x34);
          uVar25 = FUN_18015b360(local_12d8);
          FUN_180525a50(local_1338,uVar25);
          uVar47 = *(uint *)(psVar52 + 0x56);
          if (((byte)uVar47 & 0xc) == 0xc) {
            bVar20 = 0;
          }
          else if ((uVar47 & 4) == 0) {
            bVar20 = -((uVar47 & 8) != 0) & 3;
          }
          else {
            bVar20 = 2;
          }
          uVar25 = FUN_18015bea0(local_12b8,bVar20);
          puVar28 = (undefined8 *)FUN_18015b2a0(uVar25,&DAT_1807c6e48,1);
          local_13f8 = *puVar28;
          uStack_13f0 = puVar28[1];
          uStack_13e8 = puVar28[2];
          uStack_13e0 = puVar28[3];
          puVar28[3] = 0xf;
          *(undefined1 *)puVar28 = 0;
          puVar28[2] = 0;
          auVar54 = ZEXT1664(auVar54._0_16_);
          FUN_18015a6e0(local_1318);
          puVar28 = (undefined8 *)FUN_18015b2a0(local_1318,&DAT_1807c6e48,1);
          local_1428 = (undefined1 (*) [16])*puVar28;
          uStack_1420 = (undefined1 **)puVar28[1];
          uStack_1418 = puVar28[2];
          uStack_1410 = puVar28[3];
          *(undefined1 *)puVar28 = 0;
          puVar28[2] = 0;
          puVar28[3] = 0xf;
          auVar54 = ZEXT1664(auVar54._0_16_);
          FUN_18015a6e0(local_1238);
          FUN_18015c010(&local_1428);
          FUN_18015c010(local_1318);
          FUN_18015c010(&local_13f8);
          FUN_18015c010(local_12b8);
          FUN_18015c010(local_1338);
          FUN_18015c010(&local_1278);
          lVar31 = alStack_11a0[0];
          uVar48 = local_1228;
          pppppuVar19 = local_1238[0];
          pppppuVar33 = local_1238;
          if (0xf < local_1220) {
            pppppuVar33 = local_1238[0];
          }
          uVar32 = 0xcbf29ce484222325;
          uVar37 = 0;
          if (local_1228 != 0) {
            do {
              uVar32 = (uVar32 ^ *(byte *)(uVar37 + (longlong)pppppuVar33)) * 0x100000001b3;
              uVar37 = uVar37 + 1;
            } while (uVar37 < local_1228);
          }
          lVar39 = *(longlong *)(alStack_11a0[2] + 8 + (uVar32 & alStack_11a0[5]) * 0x10);
          if (lVar39 != alStack_11a0[0]) {
            lVar42 = *(longlong *)(alStack_11a0[2] + (uVar32 & alStack_11a0[5]) * 0x10);
            uVar32 = local_1220;
            while( true ) {
              puVar28 = (undefined8 *)(lVar39 + 0x10);
              if (0xf < *(ulonglong *)(lVar39 + 0x28)) {
                puVar28 = (undefined8 *)*puVar28;
              }
              pppppuVar33 = local_1238;
              if (0xf < uVar32) {
                pppppuVar33 = pppppuVar19;
              }
              if (uVar48 == *(ulonglong *)(lVar39 + 0x20)) {
                if ((uVar48 == 0) || (iVar23 = memcmp(pppppuVar33,puVar28,uVar48), iVar23 == 0))
                goto LAB_1805270df;
                uVar32 = local_1220;
              }
              if (lVar39 == lVar42) break;
              lVar39 = *(longlong *)(lVar39 + 8);
            }
          }
          lVar39 = 0;
LAB_1805270df:
          lVar42 = lVar31;
          if (lVar39 != 0) {
            lVar42 = lVar39;
          }
          if (lVar42 == lVar31) {
            FUN_180550530(&local_11a8,local_1348,local_1238,psVar52);
            local_1428 = (undefined1 (*) [16])&local_13d8;
            iVar23 = (int)*psVar52;
            local_14b4 = 0;
            uStack_14a0 = 0;
            uStack_1498 = 0xf;
            local_14b0._1_15_ = SUB1615((undefined1  [16])0x0,1);
            auVar10[0xf] = 0;
            auVar10._0_15_ = local_14b0._1_15_;
            local_14b0 = auVar10 << 8;
            local_1490 = (undefined1  [16])0x0;
            uStack_1480 = 0;
            uStack_1478 = 0;
            uVar48 = *(ulonglong *)(psVar52 + 0x3c);
            pauVar49 = local_14d0;
            if (0xf < *(ulonglong *)(psVar52 + 0x40)) {
              pauVar49 = *(undefined1 (**) [16])*local_14d0;
            }
            local_14b8 = iVar23;
            if (0x7fffffffffffffff < uVar48) {
                    /* WARNING: Subroutine does not return */
              FUN_18015bb70();
            }
            if (uVar48 < 0x10) {
              uStack_1478 = 0xf;
              local_1490 = *pauVar49;
              uStack_1480 = uVar48;
            }
            else {
              uVar32 = uVar48 | 0xf;
              if (uVar32 < 0x8000000000000000) {
                if (uVar32 < 0x16) {
                  uVar32 = 0x16;
                }
              }
              else {
                uVar32 = 0x7fffffffffffffff;
              }
              uVar25 = FUN_18015bca0(uVar32 + 1);
              local_1490._0_8_ = uVar25;
              uStack_1480 = uVar48;
              uStack_1478 = uVar32;
              FUN_18063aed0(uVar25,pauVar49,uVar48 + 1);
            }
            auVar55 = auVar54._0_16_;
            local_1470 = (undefined1  [16])0x0;
            uStack_1460 = 0;
            uStack_1458 = 0;
            uVar48 = *(ulonglong *)(psVar52 + 0x4c);
            pauVar49 = local_14c8;
            if (0xf < *(ulonglong *)(psVar52 + 0x50)) {
              pauVar49 = *(undefined1 (**) [16])*local_14c8;
            }
            if (0x7fffffffffffffff < uVar48) {
                    /* WARNING: Subroutine does not return */
              FUN_18015bb70();
            }
            if (uVar48 < 0x10) {
              uStack_1458 = 0xf;
              local_1470 = *pauVar49;
              uStack_1460 = uVar48;
            }
            else {
              uVar32 = uVar48 | 0xf;
              if (uVar32 < 0x8000000000000000) {
                if (uVar32 < 0x16) {
                  uVar32 = 0x16;
                }
              }
              else {
                uVar32 = 0x7fffffffffffffff;
              }
              uVar25 = FUN_18015bca0(uVar32 + 1);
              local_1470._0_8_ = uVar25;
              uStack_1460 = uVar48;
              uStack_1458 = uVar32;
              FUN_18063aed0(uVar25,pauVar49,uVar48 + 1);
              auVar55 = auVar54._0_16_;
            }
            local_13d8._4_4_ = 0;
            local_13d0 = local_14b0._0_8_;
            uStack_13c8 = local_14b0._8_8_;
            uStack_13c0 = uStack_14a0;
            uStack_13b8 = uStack_1498;
            uStack_14a0 = 0;
            uStack_1498 = 0xf;
            auVar11[0xf] = 0;
            auVar11._0_15_ = local_14b0._1_15_;
            local_14b0 = auVar11 << 8;
            local_13b0 = local_1490._0_8_;
            uStack_13a8 = local_1490._8_8_;
            uStack_13a0 = uStack_1480;
            uStack_1398 = uStack_1478;
            uStack_1480 = 0;
            uStack_1478 = 0xf;
            auVar12[0xf] = 0;
            auVar12._0_15_ = local_1490._1_15_;
            local_1490 = auVar12 << 8;
            local_1390 = local_1470._0_8_;
            uStack_1388 = local_1470._8_8_;
            uStack_1380 = uStack_1460;
            uStack_1378 = uStack_1458;
            uStack_1460 = 0;
            uStack_1458 = 0xf;
            auVar13[0xf] = 0;
            auVar13._0_15_ = local_1470._1_15_;
            local_1470 = auVar13 << 8;
            uVar40 = *(undefined1 *)((longlong)psVar52 + 0xb1);
            auVar54 = ZEXT1664(auVar55);
            local_13d8._0_4_ = iVar23;
            uVar25 = FUN_18015b360(&local_1278,psVar52 + 0x24);
            FUN_180527e00(local_1288,uVar25,uVar40,&local_13d8);
            FUN_18015c010(local_1470);
            FUN_18015c010(local_1490);
            FUN_18015c010(local_14b0);
          }
          else {
            uVar22 = *(undefined4 *)(lVar42 + 0x30);
            local_14c8 = (undefined1 (*) [16])CONCAT44(local_14c8._4_4_,(int)*psVar52);
            plVar24 = (longlong *)FUN_18056c6e0();
            *(undefined4 *)(*plVar24 + 0x14) = uVar22;
          }
          FUN_18015c010(local_1238);
          plVar29 = local_1448;
        }
        plVar51 = plVar51 + 1;
        plVar24 = DAT_180cc9c40;
      } while (plVar51 != plVar29);
      for (; (uVar48 = local_1438[0], plVar24 != DAT_180cc9c48 &&
             (*(char *)(*plVar24 + 0xb2) == '\0')); plVar24 = plVar24 + 1) {
      }
    }
    if ((local_1400 != 0) && (plVar24 != DAT_180cc9c48)) {
      lVar31 = *(longlong *)(local_1400 + 0x38);
      lVar39 = *(longlong *)(local_1400 + 0x40);
      if (lVar31 != lVar39) {
        lVar42 = lVar31 + 0x40;
        do {
          cVar21 = FUN_1801ef840(lVar31);
          if (cVar21 != '\0') {
            uVar25 = FUN_18015b360(&local_1278,lVar42);
            uVar25 = FUN_180525a50(local_1338,uVar25);
            FUN_180562700(local_1218,&local_14c8,uVar25,lVar31);
            FUN_18015c010(local_1338);
            pauVar49 = local_14c8;
            if (local_14c0 == '\0') {
              pauVar44 = local_14c8 + 3;
              plVar29 = (longlong *)FUN_180177bd0(&DAT_180bbe830,local_1348,lVar31);
              if ((undefined1 (*) [16])(*plVar29 + 0x30) != pauVar44) {
                if (0xf < *(ulonglong *)((longlong)pauVar49[4] + 8)) {
                  pauVar44 = *(undefined1 (**) [16])*pauVar44;
                }
                FUN_180113930((undefined1 (*) [16])(*plVar29 + 0x30),pauVar44,
                              *(undefined8 *)pauVar49[4]);
              }
            }
            else {
              local_1428 = (undefined1 (*) [16])&local_13d8;
              local_14b8 = (int)*(short *)*plVar24;
              local_14b4 = 0;
              FUN_18015b360(local_14b0,lVar31);
              FUN_18015b360(local_1490,lVar42);
              local_1470._1_15_ = SUB1615((undefined1  [16])0x0,1);
              auVar17 = (undefined1  [15])local_1470._1_15_;
              local_13d8._0_4_ = local_14b8;
              local_13d8._4_4_ = local_14b4;
              local_13d0 = local_14b0._0_8_;
              uStack_13c8 = local_14b0._8_8_;
              uStack_13c0 = uStack_14a0;
              uStack_13b8 = uStack_1498;
              uStack_14a0 = 0;
              uStack_1498 = 0xf;
              auVar14[0xf] = 0;
              auVar14._0_15_ = local_14b0._1_15_;
              local_14b0 = auVar14 << 8;
              local_13b0 = local_1490._0_8_;
              uStack_13a8 = local_1490._8_8_;
              uStack_13a0 = uStack_1480;
              uStack_1398 = uStack_1478;
              uStack_1480 = 0;
              uStack_1478 = 0xf;
              auVar15[0xf] = 0;
              auVar15._0_15_ = local_1490._1_15_;
              local_1490 = auVar15 << 8;
              local_1470._8_8_ = SUB168((undefined1  [16])0x0,8);
              local_1390 = 0;
              uStack_1388 = local_1470._8_8_;
              uStack_1380 = 0;
              uStack_1378 = 0xf;
              uStack_1460 = 0;
              uStack_1458 = 0xf;
              auVar16[0xf] = 0;
              auVar16._0_15_ = auVar17;
              local_1470 = auVar16 << 8;
              auVar54 = ZEXT1664(auVar54._0_16_);
              uVar25 = FUN_18015b360(&local_1278,lVar42 + -0x20);
              FUN_180527e00(local_1288,uVar25,0,&local_13d8);
              FUN_18015c010(local_1470);
              FUN_18015c010(local_1490);
              FUN_18015c010(local_14b0);
            }
          }
          lVar31 = lVar31 + 0xd8;
          lVar42 = lVar42 + 0xd8;
        } while (lVar31 != lVar39);
      }
    }
    ppuVar18 = uStack_1420;
    lVar31 = (*(longlong *)(local_1298._0_8_ + 0x48) - *(longlong *)(local_1298._0_8_ + 0x40)) /
             0x18;
    if ((int)uVar48 < (int)lVar31) {
      local_1428 = (undefined1 (*) [16])0x1808678c0;
      uStack_1420._7_1_ = SUB81(ppuVar18,7);
      uStack_1420._0_7_ =
           CONCAT16(1,CONCAT24((short)lVar31 - (short)uVar48,CONCAT22((short)uVar48,0x306)));
      puVar28 = *(undefined8 **)(local_1298._0_8_ + 0x30);
      if (puVar28 == *(undefined8 **)(local_1298._0_8_ + 0x38)) {
        FUN_180178c40(local_1298._0_8_ + 0x28,puVar28,&local_1428);
      }
      else {
        *puVar28 = "Characters";
        puVar28[1] = uStack_1420;
        *(longlong *)(local_1298._0_8_ + 0x30) = *(longlong *)(local_1298._0_8_ + 0x30) + 0x10;
      }
    }
    FUN_1800e4160(local_1218);
    FUN_1800f0160(alStack_11a0 + 2);
    FUN_1801aac60(alStack_11a0);
    local_1428 = &local_1298;
    uStack_1420 = local_1288;
    uVar22 = FUN_180528110(&local_1428,&DAT_180cc9bc8,0);
    *(undefined4 *)(local_1298._0_8_ + 0x118) = uVar22;
    uVar22 = FUN_180528110(&local_1428,&DAT_180cc9be0,1);
    *(undefined4 *)(local_1298._0_8_ + 0x11c) = uVar22;
    if ((*(longlong *)(local_1298._0_8_ + 0x28) == *(longlong *)(local_1298._0_8_ + 0x30)) ||
       (*(longlong *)(local_1298._0_8_ + 0x40) == *(longlong *)(local_1298._0_8_ + 0x48))) {
      plVar24 = local_1408;
    }
    else {
      iVar23 = 0;
      pauVar49 = (undefined1 (*) [16])0x70;
      auVar53 = ZEXT464(0x3f800000);
      do {
        auVar56 = auVar54._0_16_;
        auVar55 = auVar53._0_16_;
        lStack_1260 = 0;
        local_1258 = ZEXT816(0);
        uStack_1248 = 0;
        uStack_1240 = 0;
        local_1278 = (ulonglong)auVar54._0_4_;
        lStack_1270 = 0;
        uStack_1268 = 0;
        if (DAT_180c7df28 == (undefined8 *)0x0) {
          local_1368 = "tier0.dll:g_pMemAlloc";
          local_1360 = 0x15;
          auVar54 = ZEXT1664(auVar55);
          auVar53 = ZEXT1664(auVar56);
          DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_1368);
          auVar56 = auVar53._0_16_;
          auVar55 = auVar54._0_16_;
        }
        auVar53 = ZEXT1664(auVar55);
        auVar54 = ZEXT1664(auVar56);
        lStack_1270 = (**(code **)(*(longlong *)*DAT_180c7df28 + 8))
                                ((longlong *)*DAT_180c7df28,0x18);
        *(longlong *)lStack_1270 = lStack_1270;
        *(longlong *)(lStack_1270 + 8) = lStack_1270;
        lStack_1260 = 0;
        local_1258 = (undefined1  [16])0x0;
        uStack_1248 = 7;
        uStack_1240 = 8;
        local_1278 = CONCAT44(local_1278._4_4_,auVar53._0_4_);
        FUN_1801406e0(&lStack_1260,0x10,lStack_1270);
        local_1428 = (undefined1 (*) [16])0x15;
        lVar31 = local_1298._0_8_;
        local_14d0 = pauVar49;
        do {
          pauVar49 = local_14d0;
          sVar30 = (short)*(undefined4 *)local_14d0[0x18077f7a];
          cVar21 = (&DAT_180797be8)[(longlong)sVar30 * 0x10];
          if (sVar30 < 0x47) {
            uVar47 = (uint)*(ushort *)(&DAT_180798170 + (longlong)sVar30 * 2);
          }
          else {
            uVar47 = 0;
          }
          iVar38 = -1;
          local_1438[0] = CONCAT44(local_1438[0]._4_4_,0xffffffff);
          uVar48 = 0;
          local_1448 = (longlong *)((ulonglong)local_1448 & 0xffffffff00000000);
          lVar39 = *(longlong *)(lVar31 + 0x28);
          iVar41 = (int)(*(longlong *)(lVar31 + 0x30) - lVar39 >> 4);
          if (iVar41 < 1) {
LAB_1805278e1:
            local_1438[0] = local_1438[0] & 0xffffffff00000000;
          }
          else {
            uVar36 = 0;
            do {
              lVar42 = (longlong)(int)uVar36;
              iVar35 = (int)uVar48;
              if ((*(char *)(lVar39 + 8 + lVar42 * 0x10) == cVar21) &&
                 ((*(byte *)(lVar39 + 9 + lVar42 * 0x10) & (iVar23 != 0) + 1U) != 0)) {
                if (iVar38 < 0) {
                  uVar48 = ((((uVar48 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                             (ulonglong)local_1448 >> 8 & 0xff) * 0x100000001b3 ^
                            (ulonglong)local_1448 >> 0x10 & 0xff) * 0x100000001b3 ^
                           (ulonglong)local_1448 >> 0x18 & 0xff) * 0x100000001b3 & uStack_1248;
                  lVar46 = *(longlong *)(lStack_1260 + 8 + uVar48 * 0x10);
                  if (lVar46 == lStack_1270) {
LAB_1805278a7:
                    local_1438[0] = CONCAT44(local_1438[0]._4_4_,iVar35);
                    iVar38 = iVar35;
                  }
                  else {
                    iVar2 = *(int *)(lVar46 + 0x10);
                    while (iVar35 != iVar2) {
                      if (lVar46 == *(longlong *)(lStack_1260 + uVar48 * 0x10)) goto LAB_1805278a7;
                      lVar46 = *(longlong *)(lVar46 + 8);
                      iVar2 = *(int *)(lVar46 + 0x10);
                    }
                  }
                }
                if (*(uint *)((longlong)*(short *)(lVar39 + 10 + lVar42 * 0x10) * 0x68 +
                             *(longlong *)(lVar31 + 0x58)) == uVar47) {
                  local_1438[0] = CONCAT44(local_1438[0]._4_4_,iVar35);
                  iVar38 = iVar35;
                  break;
                }
              }
              uVar36 = iVar35 + 1;
              uVar48 = (ulonglong)uVar36;
              local_1448 = (longlong *)CONCAT44(local_1448._4_4_,uVar36);
            } while ((int)uVar36 < iVar41);
            if (iVar38 < 0) goto LAB_1805278e1;
          }
          FUN_1801af9d0(&local_1278,local_1348,local_1438);
          lVar39 = (longlong)(int)local_1438[0];
          lVar31 = local_1298._0_8_;
          local_14c8._0_4_ =
               CONCAT22(*(undefined2 *)(*(longlong *)(local_1298._0_8_ + 0x28) + 10 + lVar39 * 0x10)
                        ,(short)local_1438[0]);
          *(undefined4 *)((longlong)*pauVar49 + local_1298._0_8_) = (undefined4)local_14c8;
          if (cVar21 == '\x06') {
            iVar38 = (int)*(short *)(*(longlong *)(local_1298._0_8_ + 0x28) + 10 + lVar39 * 0x10);
            iVar41 = *(short *)(*(longlong *)(local_1298._0_8_ + 0x28) + 0xc + lVar39 * 0x10) +
                     iVar38;
            if (iVar38 < iVar41) {
              lVar39 = *(longlong *)(local_1298._0_8_ + 0x58);
              do {
                lVar46 = (longlong)iVar38 * 0x68;
                lVar42 = FUN_180208800(&DAT_180cc9bb0,*(undefined2 *)(lVar46 + lVar39));
                if (*(longlong *)(lVar46 + 0x18 + lVar39) != 0) {
LAB_1805279c0:
                  *(short *)((longlong)*pauVar49 + lVar31 + 2) = (short)iVar38;
                  lVar31 = local_1298._0_8_;
                  break;
                }
                if (lVar42 != 0) {
                  uVar47 = *(uint *)(lVar42 + 0xac);
                  if (((byte)uVar47 & 0xc) != 0xc) {
                    if ((uVar47 & 4) == 0) {
                      if ((uVar47 & 8) == 0) goto LAB_1805279c0;
                      iVar35 = 3;
                    }
                    else {
                      iVar35 = 2;
                    }
                    if (iVar35 != 3 - (uint)(iVar23 != 0)) goto LAB_1805279b8;
                  }
                  goto LAB_1805279c0;
                }
LAB_1805279b8:
                iVar38 = iVar38 + 1;
              } while (iVar38 < iVar41);
            }
          }
          pauVar49 = (undefined1 (*) [16])((longlong)*pauVar49 + 4);
          local_1428 = (undefined1 (*) [16])(local_1428[-1] + 0xf);
          local_14d0 = pauVar49;
        } while (local_1428 != (undefined1 (*) [16])0x0);
        FUN_18017e9a0(&local_1278);
        lVar31 = DAT_180b909b8;
        iVar23 = iVar23 + 1;
      } while ((longlong)pauVar49 < 0x118);
      DAT_180b909b0 = local_1298._0_8_;
      DAT_180b909b8 = local_1298._8_8_;
      local_1298 = (undefined1  [16])0x0;
      if (lVar31 != 0) {
        LOCK();
        piVar26 = (int *)(lVar31 + 8);
        iVar23 = *piVar26;
        *piVar26 = *piVar26 + -1;
        UNLOCK();
        if (iVar23 == 1) {
          (*(code *)**(undefined8 **)lVar31)(lVar31);
          LOCK();
          piVar26 = (int *)(lVar31 + 0xc);
          iVar23 = *piVar26;
          *piVar26 = *piVar26 + -1;
          UNLOCK();
          if (iVar23 == 1) {
            (**(code **)(*(longlong *)lVar31 + 8))(lVar31);
          }
        }
      }
      plVar24 = local_1408;
      DAT_180c7e0a8 = DAT_180cc9bf8;
      DAT_180c7e0a0 = (longlong)DAT_180cc9c78 - (longlong)DAT_180cc9c70 >> 3;
      if (local_1408 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_1408 + 1) = (int)local_1408[1] + 1;
        UNLOCK();
      }
      piVar26 = DAT_180c7e1d8;
      DAT_180c7e1d0 = local_1400;
      DAT_180c7e1d8 = (int *)local_1408;
      if (piVar26 != (int *)0x0) {
        LOCK();
        piVar1 = piVar26 + 2;
        iVar23 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar23 == 1) {
          (*(code *)**(undefined8 **)piVar26)(piVar26);
          LOCK();
          piVar1 = piVar26 + 3;
          iVar23 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar23 == 1) {
            (**(code **)(*(longlong *)piVar26 + 8))(piVar26);
          }
        }
      }
      uVar47 = 0;
      lVar31 = 0;
      do {
        uVar48 = 0;
        lVar39 = 0;
        do {
          if (DAT_180b909b0 == 0) {
            uVar36 = (&DAT_18077f810)[lVar39 + lVar31];
          }
          else {
            if (1 < uVar47) {
              FUN_18047bff0();
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            uVar36 = *(uint *)(DAT_180b909b0 + 0x70 + (lVar39 + lVar31) * 4);
          }
          local_1408 = &local_13d8;
          local_13d8._0_4_ = local_1168[(lVar39 + lVar31) * 0x1a];
          local_13d8._4_4_ = local_1168[(lVar39 + lVar31) * 0x1a + 1];
          lVar42 = ((longlong)(int)uVar47 * 0x15 + uVar48) * 0x68;
          FUN_18015b360(&local_13d0,local_1160 + lVar42);
          FUN_18015b360(&local_13b0,local_1140 + lVar42);
          FUN_18015b360(&local_1390,local_1120 + lVar42);
          iVar23 = FUN_180525c00(&local_13d8);
          if (-1 < iVar23) {
            uVar45 = 0;
            while( true ) {
              if (DAT_180b909b0 == 0) {
                iVar38 = 0x47;
              }
              else {
                iVar38 = (int)(*(longlong *)(DAT_180b909b0 + 0x30) -
                               *(longlong *)(DAT_180b909b0 + 0x28) >> 4);
              }
              if (iVar38 <= (int)uVar45) goto LAB_180527c6c;
              uVar32 = (ulonglong)(int)uVar45;
              if (DAT_180b909b0 == 0) {
                ppuVar34 = &PTR_s_Glock_18_180797be0 + uVar32 * 2;
              }
              else {
                if ((ulonglong)
                    (*(longlong *)(DAT_180b909b0 + 0x30) - *(longlong *)(DAT_180b909b0 + 0x28) >> 4)
                    <= uVar32) {
                    /* WARNING: Subroutine does not return */
                  FUN_18047c010();
                }
                ppuVar34 = (undefined **)(uVar32 * 0x10 + *(longlong *)(DAT_180b909b0 + 0x28));
              }
              if ((*(short *)((longlong)ppuVar34 + 10) <= iVar23) &&
                 (iVar23 < (int)*(short *)((longlong)ppuVar34 + 0xc) +
                           (int)*(short *)((longlong)ppuVar34 + 10))) break;
              uVar45 = uVar45 + 1;
            }
            uVar36 = iVar23 << 0x10 | uVar45 & 0xffff;
          }
LAB_180527c6c:
          *(uint *)(*(longlong *)(*DAT_180c62f50 + (longlong)(int)DAT_180c62f50[3] * 8) + 0x496e +
                   (lVar39 + lVar31) * 4) = uVar36;
          lVar42 = lVar39 + lVar31;
          (&DAT_1808e5000)[lVar42 * 4] = 0;
          puVar28 = &DAT_1808e4ff0 + ((longlong)(int)uVar47 * 0x15 + uVar48) * 4;
          if (0xf < (ulonglong)(&DAT_1808e5008)[lVar42 * 4]) {
            puVar28 = (undefined8 *)(&DAT_1808e4ff0)[lVar42 * 4];
          }
          *(undefined1 *)puVar28 = 0;
          uVar36 = (int)uVar48 + 1;
          uVar48 = (ulonglong)uVar36;
          lVar39 = lVar39 + 1;
        } while ((int)uVar36 < 0x15);
        uVar47 = uVar47 + 1;
        lVar31 = lVar31 + 0x15;
      } while ((int)uVar47 < 2);
    }
    uVar25 = local_1298._8_8_;
    if ((longlong *)local_1298._8_8_ != (longlong *)0x0) {
      LOCK();
      plVar29 = (longlong *)(local_1298._8_8_ + 8);
      lVar31 = *plVar29;
      *(int *)plVar29 = (int)*plVar29 + -1;
      UNLOCK();
      if ((int)lVar31 == 1) {
        (*(code *)**(undefined8 **)local_1298._8_8_)(local_1298._8_8_);
        LOCK();
        piVar26 = (int *)(uVar25 + 0xc);
        iVar23 = *piVar26;
        *piVar26 = *piVar26 + -1;
        UNLOCK();
        if (iVar23 == 1) {
          (**(code **)(*(longlong *)uVar25 + 8))(uVar25);
        }
      }
    }
    _eh_vector_destructor_iterator_(local_1168,0x888,2,FUN_180525850);
  }
  if (plVar24 != (longlong *)0x0) {
    LOCK();
    plVar29 = plVar24 + 1;
    lVar31 = *plVar29;
    *(int *)plVar29 = (int)*plVar29 + -1;
    UNLOCK();
    if ((int)lVar31 == 1) {
      (**(code **)*plVar24)(plVar24);
      LOCK();
      piVar26 = (int *)((longlong)plVar24 + 0xc);
      iVar23 = *piVar26;
      *piVar26 = *piVar26 + -1;
      UNLOCK();
      if (iVar23 == 1) {
        (**(code **)(*plVar24 + 8))(plVar24);
      }
    }
  }
}



