// FUN_18051ae20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18051ae20 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00018051c760) */

void FUN_18051ae20(float *param_1,uint param_2)

{
  byte bVar1;
  longlong **pplVar2;
  undefined8 ****ppppuVar3;
  undefined8 *puVar4;
  longlong lVar5;
  float fVar6;
  longlong *plVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  char cVar11;
  int iVar12;
  undefined4 uVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined8 ****ppppuVar16;
  byte *pbVar17;
  undefined1 (*pauVar18) [16];
  undefined1 (*pauVar19) [32];
  undefined8 *puVar20;
  undefined8 ****ppppuVar21;
  undefined8 *****pppppuVar22;
  undefined8 *****pppppuVar23;
  undefined8 uVar24;
  longlong *plVar25;
  undefined1 *puVar26;
  uint *puVar27;
  longlong ***ppplVar28;
  int *piVar29;
  int iVar30;
  undefined8 *****pppppuVar31;
  undefined8 *****_Buf1;
  longlong *plVar32;
  int *piVar33;
  uint uVar34;
  char *pcVar35;
  longlong **pplVar36;
  uint uVar37;
  byte *pbVar38;
  undefined1 (*pauVar39) [16];
  ulonglong uVar40;
  ulonglong uVar41;
  undefined1 auVar42 [8];
  byte *pbVar43;
  char **ppcVar44;
  byte bVar45;
  longlong lVar46;
  bool bVar47;
  bool bVar48;
  undefined8 uVar49;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 extraout_XMM0_Qa_06;
  undefined8 extraout_XMM0_Qa_07;
  undefined8 extraout_XMM0_Qa_08;
  undefined8 extraout_XMM0_Qa_09;
  undefined8 extraout_XMM0_Qa_10;
  undefined8 extraout_XMM0_Qa_11;
  float fVar50;
  float fVar51;
  undefined1 auVar52 [64];
  float fVar53;
  undefined1 auVar54 [16];
  undefined1 in_ZMM7 [64];
  undefined1 auVar55 [64];
  float fVar56;
  undefined1 auVar57 [16];
  undefined1 auVar58 [64];
  undefined1 auVar59 [16];
  undefined1 auVar60 [64];
  undefined1 auVar61 [16];
  undefined1 auVar62 [64];
  undefined1 auVar63 [16];
  undefined1 auVar64 [64];
  undefined1 auVar65 [16];
  undefined1 auVar66 [64];
  undefined1 auVar67 [16];
  undefined1 auVar68 [64];
  uint local_res10 [2];
  undefined1 auStackY_16f8 [32];
  uint local_16b0;
  undefined8 local_16a0;
  undefined8 *****local_1698;
  undefined1 local_1688 [16];
  undefined1 *local_1678;
  undefined8 local_1668;
  longlong ***local_1660;
  longlong ***local_1658 [2];
  undefined1 local_1648 [16];
  undefined8 ****ppppuStack_1638;
  ulonglong uStack_1630;
  undefined1 local_1628 [16];
  longlong *plStack_1618;
  ulonglong uStack_1610;
  undefined8 local_1608;
  undefined8 uStack_1600;
  undefined8 uStack_15f8;
  undefined8 uStack_15f0;
  undefined1 local_15e8 [16];
  float *local_15d8;
  undefined1 local_15d0 [32];
  longlong local_15b0;
  undefined8 uStack_15a8;
  undefined8 uStack_15a0;
  undefined8 uStack_1598;
  undefined8 local_1590;
  undefined8 uStack_1588;
  undefined8 uStack_1580;
  undefined8 uStack_1578;
  undefined1 local_1570 [16];
  undefined1 auStack_1560 [16];
  undefined1 local_1550 [16];
  undefined1 auStack_1540 [16];
  undefined1 local_1530 [16];
  undefined1 auStack_1520 [16];
  undefined1 local_1508 [16];
  undefined1 local_14f8 [16];
  undefined1 local_14e8 [16];
  undefined1 local_14d8 [16];
  undefined1 local_14c8 [16];
  undefined1 local_14b8 [16];
  undefined8 local_14a8;
  undefined8 uStack_14a0;
  longlong *plStack_1498;
  ulonglong uStack_1490;
  undefined1 local_1488 [32];
  undefined1 local_1468 [32];
  undefined1 local_1448 [32];
  undefined1 local_1428 [32];
  undefined1 local_1408 [32];
  undefined1 local_13e8 [32];
  undefined8 *****local_13c8;
  longlong *local_13c0;
  undefined1 *local_13b8;
  ulonglong local_13b0;
  undefined1 local_13a8 [4096];
  undefined1 local_3a8 [16];
  longlong ***local_398;
  undefined1 local_388 [24];
  ulonglong uStack_370;
  undefined1 local_368 [8];
  undefined8 *puStack_360;
  undefined8 *local_358;
  undefined8 *****local_350;
  longlong lStack_348;
  undefined8 ****ppppuStack_340;
  ulonglong uStack_338;
  undefined1 local_328 [16];
  longlong *local_318;
  undefined8 local_310;
  undefined1 local_308 [16];
  longlong local_2f8;
  undefined1 local_2f0 [16];
  undefined1 auStack_2e0 [16];
  longlong **local_2d0;
  undefined8 *****local_2c8;
  undefined8 uStack_2c0;
  undefined8 ****ppppuStack_2b8;
  ulonglong uStack_2b0;
  undefined8 *****local_2a8;
  undefined1 auStack_2a0 [16];
  ulonglong uStack_290;
  undefined1 local_288 [16];
  longlong local_278;
  undefined1 local_270 [16];
  longlong local_260;
  undefined1 local_250 [16];
  undefined8 ****local_240;
  ulonglong local_238;
  undefined1 local_230 [16];
  longlong local_220;
  undefined1 local_218 [16];
  undefined1 auStack_208 [16];
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [16];
  undefined1 auStack_1d8 [16];
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 local_188 [32];
  undefined1 local_168 [32];
  undefined1 local_148 [32];
  undefined8 local_128;
  char *local_120 [4];
  char *local_100 [5];
  char *local_d8 [18];
  undefined1 local_48 [16];
  
  local_48 = in_ZMM7._0_16_;
  local_d8[0] = (char *)(DAT_1808d5f00 ^ (ulonglong)auStackY_16f8);
  bVar47 = false;
  lVar15 = 0;
  local_res10[0] = param_2;
  local_15d8 = param_1;
  FUN_180113f10(local_230);
  local_230 = (undefined1  [16])0x0;
  local_220 = lVar15;
  FUN_1800a8050(local_1c8);
  FUN_18055e770(local_1c8);
  FUN_1800a8050(local_1b8);
  FUN_1800f00c0(local_1b8);
  plVar14 = (longlong *)FUN_1800aa200();
  pplVar2 = (longlong **)plVar14[1];
  for (pplVar36 = (longlong **)*plVar14; pplVar36 != pplVar2; pplVar36 = pplVar36 + 0xe) {
    cVar11 = FUN_1805155f0(pplVar36,local_res10[0]);
    if (((cVar11 != '\0') &&
        (lVar15 = FUN_1801a7100(local_1c8,local_3a8,pplVar36 + 1), *(char *)(lVar15 + 8) != '\0'))
       && (lVar15 = FUN_18054c8d0(local_1b8,local_1688,pplVar36), *(char *)(lVar15 + 8) != '\0')) {
      local_2d0 = pplVar36;
      FUN_1801543a0(local_230,&local_2d0);
    }
  }
  FUN_180113f10(local_308);
  local_308 = (undefined1  [16])0x0;
  local_2f8 = 0;
  FUN_1800a8050(&local_318);
  uVar49 = FUN_18055e600(&local_318);
  local_1658[0] = (longlong ***)local_res10;
  local_128 = (longlong ***)local_230._0_8_;
  uVar24 = local_230._8_8_;
  local_1668 = (longlong *)local_230._8_8_;
  plVar14 = (longlong *)local_230._0_8_;
  if (local_230._0_8_ != local_230._8_8_) {
    do {
      pppppuVar22 = (undefined8 *****)*plVar14;
      local_13c8 = pppppuVar22;
      if (*(char *)((longlong)pppppuVar22 + 4) == '\0') {
LAB_18051b045:
        ppppuVar16 = (undefined8 ****)FUN_18051e410(local_1658,pppppuVar22);
        if ((ppppuVar16 == (undefined8 ****)0x0) ||
           (uVar49 = extraout_XMM0_Qa_00, pppppuVar22[1] == ppppuVar16)) {
          if (local_res10[0] == 0) {
            if (DAT_180cad2e0 == 1) {
              cVar11 = FUN_1800e7dd0(pppppuVar22 + 7,"dynamic point scale");
              uVar49 = extraout_XMM0_Qa_01;
              if (cVar11 == '\0') {
                pcVar35 = "debug multipoints";
LAB_18051b091:
                cVar11 = FUN_1800e7dd0(pppppuVar22 + 7,pcVar35);
                uVar49 = extraout_XMM0_Qa_02;
                if (cVar11 == '\0') goto LAB_18051b23d;
              }
            }
            else {
              if (DAT_180cad2e0 != 0) goto LAB_18051b23d;
              cVar11 = FUN_1800f54b0(pppppuVar22 + 7,"trigger ");
              uVar49 = extraout_XMM0_Qa_03;
              if (cVar11 == '\0') {
                pcVar35 = "visualize fov";
                goto LAB_18051b091;
              }
            }
          }
          else {
            if (local_res10[0] == 9) {
              ppppuVar16 = pppppuVar22[1];
              cVar11 = FUN_18054cdd0(ppppuVar16,&DAT_180b0cde0);
              if (((cVar11 != '\0') &&
                  (uVar49 = extraout_XMM0_Qa_04, ppppuVar16 != (undefined8 ****)&DAT_180b0cde0)) ||
                 ((cVar11 = FUN_18054cdf0(extraout_XMM0_Qa_04,&DAT_180b0d018), cVar11 != '\0' &&
                  (uVar49 = extraout_XMM0_Qa_05, ppppuVar16 != (undefined8 ****)&DAT_180b0d018))))
              goto LAB_18051b0a4;
            }
            else {
              uVar49 = extraout_XMM0_Qa_00;
              if (local_res10[0] == 0) {
LAB_18051b23d:
                lVar15 = FUN_1800f5500(pppppuVar22 + 7,"preset",0);
                uVar49 = extraout_XMM0_Qa_06;
                if (lVar15 == -1) {
                  lVar15 = FUN_1800f5500(local_13c8 + 7,"override",0);
                  uVar49 = extraout_XMM0_Qa_07;
                  if (lVar15 == -1) {
                    pppppuVar22 = local_13c8;
                    goto LAB_18051b285;
                  }
                }
                goto LAB_18051b0a4;
              }
LAB_18051b285:
              if (local_res10[0] != 7) goto LAB_18051b31e;
              FUN_18051e580(uVar49,&local_2a8);
              if (auStack_2a0._8_8_ == 0) {
LAB_18051b2ea:
                bVar8 = false;
              }
              else {
                uVar49 = FUN_18015b360(&local_15b0,local_13c8 + 7);
                uVar49 = FUN_18050cc10(&local_1590,uVar49);
                bVar47 = true;
                cVar11 = FUN_1800ea250(&local_2a8,uVar49);
                if (cVar11 != '\0') goto LAB_18051b2ea;
                bVar8 = true;
              }
              if (bVar47) {
                bVar47 = false;
                FUN_18015c010(&local_1590);
              }
              uVar49 = FUN_18015c010(&local_2a8);
              if (bVar8) goto LAB_18051b0a4;
              pppppuVar22 = local_13c8;
            }
LAB_18051b31e:
            cVar11 = FUN_1800e7dd0(pppppuVar22 + 3,"anti aim");
            if (cVar11 != '\0') {
              cVar11 = FUN_1800e7dd0(pppppuVar22 + 7,"direction indicator glow");
              uVar49 = extraout_XMM0_Qa_08;
              if (cVar11 != '\0') goto LAB_18051b0a4;
            }
            if ((local_res10[0] == 0) &&
               (cVar11 = FUN_1800e7dd0(pppppuVar22 + 3,"anti aim"), cVar11 != '\0')) {
              cVar11 = FUN_1800f54b0(pppppuVar22 + 7,"correct yaw");
              uVar49 = extraout_XMM0_Qa_09;
              if (cVar11 != '\0') goto LAB_18051b0a4;
            }
            cVar11 = FUN_18054fef0(local_230,&local_13c8);
            uVar49 = extraout_XMM0_Qa_10;
            if (cVar11 == '\0') {
              local_2a8 = local_13c8;
              auStack_2a0 = (undefined1  [16])0x0;
              uStack_290 = 0;
              FUN_18055e680(local_308,&local_2a8);
              uVar49 = FUN_1800f0160(auStack_2a0);
            }
          }
        }
      }
      else if (local_res10[0] == 0) {
        cVar11 = FUN_18051e8e0(uVar49,pppppuVar22);
        uVar49 = extraout_XMM0_Qa;
        if (cVar11 != '\0') goto LAB_18051b045;
      }
LAB_18051b0a4:
      bVar10 = false;
      bVar48 = false;
      bVar9 = false;
      bVar8 = false;
      plVar14 = plVar14 + 1;
    } while (plVar14 != (longlong *)uVar24);
    local_1668 = (longlong *)local_230._8_8_;
    local_128 = (longlong ***)local_230._0_8_;
    plVar14 = (longlong *)local_230._8_8_;
    plVar25 = (longlong *)local_230._0_8_;
    if (local_230._0_8_ != local_230._8_8_) {
      do {
        local_13c8 = (undefined8 *****)*plVar25;
        for (plVar32 = (longlong *)local_308._0_8_; plVar32 != (longlong *)local_308._8_8_;
            plVar32 = plVar32 + 4) {
          if ((undefined8 *****)*plVar32 == local_13c8) goto LAB_18051ca79;
        }
        local_128 = (longlong ***)plVar25;
        if (local_res10[0] == 0) {
          lVar15 = FUN_1800f5500(local_13c8 + 7,"preset",0);
          if (lVar15 == -1) {
            lVar15 = FUN_1800f5500(local_13c8 + 7,"override",0);
            if (lVar15 == -1) goto LAB_18051b167;
          }
        }
        else {
LAB_18051b167:
          local_16a0 = (longlong ***)0x0;
          bVar1 = 0;
          local_1660 = (longlong ***)local_308._0_8_;
          local_1688._0_8_ = local_308._8_8_;
          if (local_308._0_8_ != local_308._8_8_) {
            do {
              pplVar2 = *local_1660;
              pbVar17 = (byte *)FUN_18015b360(local_1408,pplVar2 + 7);
              if (*(ulonglong *)(pbVar17 + 0x18) < 0x10) {
                pbVar38 = pbVar17;
              }
              else {
                pbVar38 = *(byte **)pbVar17;
              }
              pbVar43 = pbVar38 + *(longlong *)(pbVar17 + 0x10);
              for (; pbVar38 != pbVar43; pbVar38 = pbVar38 + 1) {
                iVar12 = tolower((uint)*pbVar38);
                *pbVar38 = (byte)iVar12;
                if ((byte)iVar12 == 0x5f) {
                  *pbVar38 = 0x20;
                }
              }
              local_350 = *(undefined8 ******)pbVar17;
              lStack_348 = *(longlong *)(pbVar17 + 8);
              ppppuStack_340 = *(undefined8 *****)(pbVar17 + 0x10);
              uStack_338 = *(ulonglong *)(pbVar17 + 0x18);
              *pbVar17 = 0;
              pbVar17[0x10] = 0;
              pbVar17[0x11] = 0;
              pbVar17[0x12] = 0;
              pbVar17[0x13] = 0;
              pbVar17[0x14] = 0;
              pbVar17[0x15] = 0;
              pbVar17[0x16] = 0;
              pbVar17[0x17] = 0;
              pbVar17[0x18] = 0xf;
              pbVar17[0x19] = 0;
              pbVar17[0x1a] = 0;
              pbVar17[0x1b] = 0;
              pbVar17[0x1c] = 0;
              pbVar17[0x1d] = 0;
              pbVar17[0x1e] = 0;
              pbVar17[0x1f] = 0;
              FUN_18015c010(pbVar17);
              pauVar18 = (undefined1 (*) [16])(local_13c8 + 3);
              local_1648 = (undefined1  [16])0x0;
              uStack_1630 = 0;
              ppppuVar16 = local_13c8[5];
              if ((undefined8 ****)0xf < local_13c8[6]) {
                pauVar18 = *(undefined1 (**) [16])*pauVar18;
              }
              if ((undefined8 ****)0x7fffffffffffffff < ppppuVar16) {
                    /* WARNING: Subroutine does not return */
                FUN_18015bb70();
              }
              if (ppppuVar16 < (undefined8 ****)0x10) {
                ppppuStack_1638 = ppppuVar16;
                uVar40 = 0xf;
                uStack_1630 = 0xf;
                pbVar17 = *(byte **)*pauVar18;
                local_1648 = *pauVar18;
              }
              else {
                uVar40 = (ulonglong)ppppuVar16 | 0xf;
                if (uVar40 < 0x8000000000000000) {
                  if (uVar40 < 0x16) {
                    uVar40 = 0x16;
                  }
                }
                else {
                  uVar40 = 0x7fffffffffffffff;
                }
                pbVar17 = (byte *)FUN_18015bca0(uVar40 + 1);
                local_1648._0_8_ = pbVar17;
                ppppuStack_1638 = ppppuVar16;
                uStack_1630 = uVar40;
                FUN_18063aed0(pbVar17,pauVar18,(longlong)ppppuVar16 + 1);
              }
              pbVar38 = local_1648;
              if (0xf < uVar40) {
                pbVar38 = pbVar17;
              }
              pbVar17 = pbVar38 + (longlong)ppppuVar16;
              ppppuVar16 = ppppuStack_1638;
              uVar40 = uStack_1630;
              for (; pbVar38 != pbVar17; pbVar38 = pbVar38 + 1) {
                ppppuStack_1638 = ppppuVar16;
                uStack_1630 = uVar40;
                iVar12 = tolower((uint)*pbVar38);
                *pbVar38 = (byte)iVar12;
                if ((byte)iVar12 == 0x5f) {
                  *pbVar38 = 0x20;
                }
                ppppuVar16 = ppppuStack_1638;
                uVar40 = uStack_1630;
              }
              local_2c8 = (undefined8 *****)local_1648._0_8_;
              uStack_2c0 = local_1648._8_8_;
              auVar54[0xf] = 0;
              auVar54._0_15_ = local_1648._1_15_;
              local_1648 = auVar54 << 8;
              ppppuStack_1638 = (undefined8 ****)0x0;
              uStack_1630 = 0xf;
              ppppuStack_2b8 = ppppuVar16;
              uStack_2b0 = uVar40;
              FUN_18015c010(local_1648);
              pauVar18 = (undefined1 (*) [16])(pplVar2 + 3);
              local_1628 = (undefined1  [16])0x0;
              uStack_1610 = 0;
              plVar14 = pplVar2[5];
              if ((longlong *)0xf < pplVar2[6]) {
                pauVar18 = *(undefined1 (**) [16])*pauVar18;
              }
              if ((longlong *)0x7fffffffffffffff < plVar14) {
                    /* WARNING: Subroutine does not return */
                FUN_18015bb70();
              }
              if (plVar14 < (longlong *)0x10) {
                plStack_1618 = plVar14;
                uVar40 = 0xf;
                uStack_1610 = 0xf;
                pbVar17 = *(byte **)*pauVar18;
                local_1628 = *pauVar18;
              }
              else {
                uVar40 = (ulonglong)plVar14 | 0xf;
                if (uVar40 < 0x8000000000000000) {
                  if (uVar40 < 0x16) {
                    uVar40 = 0x16;
                  }
                }
                else {
                  uVar40 = 0x7fffffffffffffff;
                }
                pbVar17 = (byte *)FUN_18015bca0(uVar40 + 1);
                local_1628._0_8_ = pbVar17;
                plStack_1618 = plVar14;
                uStack_1610 = uVar40;
                FUN_18063aed0(pbVar17,pauVar18,(longlong)plVar14 + 1);
              }
              pbVar38 = local_1628;
              if (0xf < uVar40) {
                pbVar38 = pbVar17;
              }
              pbVar17 = pbVar38 + (longlong)plVar14;
              plVar14 = plStack_1618;
              uVar40 = uStack_1610;
              for (; pbVar38 != pbVar17; pbVar38 = pbVar38 + 1) {
                plStack_1618 = plVar14;
                uStack_1610 = uVar40;
                iVar12 = tolower((uint)*pbVar38);
                *pbVar38 = (byte)iVar12;
                if ((byte)iVar12 == 0x5f) {
                  *pbVar38 = 0x20;
                }
                plVar14 = plStack_1618;
                uVar40 = uStack_1610;
              }
              local_14a8 = local_1628._0_8_;
              uStack_14a0 = local_1628._8_8_;
              uStack_1610 = 0xf;
              auVar57[0xf] = 0;
              auVar57._0_15_ = local_1628._1_15_;
              local_1628 = auVar57 << 8;
              plStack_1618 = (longlong *)0x0;
              plStack_1498 = plVar14;
              uStack_1490 = uVar40;
              FUN_18015c010(local_1628);
              pauVar18 = (undefined1 (*) [16])FUN_18015b2a0(&local_14a8,&DAT_1806bfbdc,3);
              local_1530 = *pauVar18;
              auStack_1520 = pauVar18[1];
              (*pauVar18)[0] = 0;
              *(undefined8 *)pauVar18[1] = 0;
              *(undefined8 *)(pauVar18[1] + 8) = 0xf;
              pppppuVar22 = &local_350;
              if (0xf < uStack_338) {
                pppppuVar22 = local_350;
              }
              pauVar19 = (undefined1 (*) [32])FUN_18015b2a0(local_1530,pppppuVar22,ppppuStack_340);
              ppppuVar21 = ppppuStack_2b8;
              uVar40 = uStack_338;
              ppppuVar16 = ppppuStack_340;
              pppppuVar22 = local_350;
              _local_388 = *pauVar19;
              (*pauVar19)[0] = 0;
              *(undefined8 *)(*pauVar19 + 0x10) = 0;
              *(undefined8 *)(*pauVar19 + 0x18) = 0xf;
              puVar26 = local_388;
              if (0xf < local_388._24_8_) {
                puVar26 = local_388._0_8_;
              }
              pppppuVar23 = &local_2c8;
              if (0xf < uStack_2b0) {
                pppppuVar23 = local_2c8;
              }
              local_1698 = local_350;
              if ((ppppuStack_2b8 == local_388._16_8_) &&
                 ((ppppuStack_2b8 == (undefined8 ****)0x0 ||
                  (iVar12 = memcmp(pppppuVar23,puVar26,(size_t)ppppuStack_2b8), iVar12 == 0)))) {
LAB_18051b797:
                cVar11 = '\x01';
              }
              else {
                pppppuVar23 = &local_350;
                if (0xf < uVar40) {
                  pppppuVar23 = pppppuVar22;
                }
                pppppuVar31 = &local_2c8;
                if (0xf < uStack_2b0) {
                  pppppuVar31 = local_2c8;
                }
                if ((ppppuVar21 == ppppuVar16) &&
                   ((ppppuVar21 == (undefined8 ****)0x0 ||
                    (iVar12 = memcmp(pppppuVar31,pppppuVar23,(size_t)ppppuVar21), iVar12 == 0))))
                goto LAB_18051b797;
                cVar11 = '\0';
              }
              FUN_18015c010(local_388);
              FUN_18015c010(local_1530);
              FUN_18015c010(&local_14a8);
              ppppuVar21 = ppppuStack_2b8;
              pppppuVar31 = local_13c8;
              bVar45 = -cVar11 & 100;
              pppppuVar23 = local_13c8 + 3;
              pplVar36 = pplVar2 + 3;
              if ((longlong *)0xf < pplVar2[6]) {
                pplVar36 = (longlong **)pplVar2[3];
              }
              ppppuVar3 = local_13c8[5];
              if ((undefined8 ****)0xf < local_13c8[6]) {
                pppppuVar23 = (undefined8 *****)*pppppuVar23;
              }
              if ((ppppuVar3 == (undefined8 ****)pplVar2[5]) &&
                 ((ppppuVar3 == (undefined8 ****)0x0 ||
                  (iVar12 = memcmp(pppppuVar23,pplVar36,(size_t)ppppuVar3), iVar12 == 0)))) {
                pppppuVar23 = &local_2c8;
                if (0xf < uStack_2b0) {
                  pppppuVar23 = local_2c8;
                }
                _Buf1 = &local_350;
                if (0xf < uVar40) {
                  _Buf1 = pppppuVar22;
                }
                if ((ppppuVar16 == ppppuVar21) &&
                   ((ppppuVar16 == (undefined8 ****)0x0 ||
                    (iVar12 = memcmp(_Buf1,pppppuVar23,(size_t)ppppuVar16), iVar12 == 0)))) {
                  bVar45 = 0x3c;
                }
              }
              pppppuVar23 = pppppuVar31 + 3;
              pplVar36 = pplVar2 + 3;
              if ((longlong *)0xf < pplVar2[6]) {
                pplVar36 = (longlong **)pplVar2[3];
              }
              ppppuVar21 = pppppuVar31[5];
              if ((undefined8 ****)0xf < pppppuVar31[6]) {
                pppppuVar23 = (undefined8 *****)*pppppuVar23;
              }
              if (ppppuVar21 == (undefined8 ****)pplVar2[5]) {
                if (ppppuVar21 != (undefined8 ****)0x0) {
                  iVar12 = memcmp(pppppuVar23,pplVar36,(size_t)ppppuVar21);
                  if (iVar12 != 0) goto LAB_18051ba03;
                }
                pppppuVar23 = &local_350;
                if (0xf < uVar40) {
                  pppppuVar23 = pppppuVar22;
                }
                if (ppppuVar16 == (undefined8 ****)0x7) {
                  iVar12 = memcmp(pppppuVar23,"enabled",7);
                  if (iVar12 != 0) goto LAB_18051b918;
                }
                else {
LAB_18051b918:
                  if (0x7fffffffffffffffU - (longlong)ppppuVar16 < 3) {
                    /* WARNING: Subroutine does not return */
                    FUN_18015bb70();
                  }
                  FUN_18015a9c0(local_388);
                  bVar9 = true;
                  puVar26 = local_388;
                  if (0xf < uStack_370) {
                    puVar26 = (undefined1 *)local_388._0_8_;
                  }
                  pppppuVar22 = &local_2c8;
                  if (0xf < uStack_2b0) {
                    pppppuVar22 = local_2c8;
                  }
                  if ((ppppuStack_2b8 < (ulonglong)local_388._16_8_) ||
                     (iVar12 = memcmp(pppppuVar22,puVar26,local_388._16_8_), iVar12 != 0)) {
                    local_1698 = local_350;
                    pppppuVar31 = local_13c8;
                    ppppuVar16 = ppppuStack_340;
                    uVar40 = uStack_338;
                    pppppuVar22 = local_350;
                    goto LAB_18051ba03;
                  }
                  local_1698 = local_350;
                  pppppuVar31 = local_13c8;
                  ppppuVar16 = ppppuStack_340;
                  uVar40 = uStack_338;
                  pppppuVar22 = local_350;
                }
                bVar47 = true;
              }
              else {
LAB_18051ba03:
                bVar47 = false;
              }
              if (bVar9) {
                bVar9 = false;
                FUN_18015c010(local_388);
                pppppuVar31 = local_13c8;
              }
              if (bVar47) {
                bVar45 = 0x1e;
              }
              if (local_res10[0] == 7) {
                puVar20 = (undefined8 *)FUN_18051e580();
                bVar48 = true;
                pppppuVar23 = &local_350;
                if (0xf < uVar40) {
                  pppppuVar23 = pppppuVar22;
                }
                ppppuVar21 = (undefined8 ****)puVar20[2];
                if (0xf < (ulonglong)puVar20[3]) {
                  puVar20 = (undefined8 *)*puVar20;
                }
                if ((ppppuVar21 != ppppuVar16) ||
                   ((ppppuVar21 != (undefined8 ****)0x0 &&
                    (iVar12 = memcmp(puVar20,pppppuVar23,(size_t)ppppuVar21), iVar12 != 0)))) {
                  pppppuVar31 = local_13c8;
                  goto LAB_18051baa5;
                }
                bVar47 = true;
                pppppuVar31 = local_13c8;
              }
              else {
LAB_18051baa5:
                bVar47 = false;
              }
              if (bVar48) {
                bVar48 = false;
                FUN_18015c010(local_388);
                pppppuVar31 = local_13c8;
              }
              if (bVar47) {
                bVar45 = 0x6e;
              }
              pppppuVar23 = pppppuVar31 + 3;
              pplVar36 = pplVar2 + 3;
              if ((longlong *)0xf < pplVar2[6]) {
                pplVar36 = (longlong **)pplVar2[3];
              }
              ppppuVar21 = pppppuVar31[5];
              if ((undefined8 ****)0xf < pppppuVar31[6]) {
                pppppuVar23 = (undefined8 *****)*pppppuVar23;
              }
              if (ppppuVar21 == (undefined8 ****)pplVar2[5]) {
                if (ppppuVar21 != (undefined8 ****)0x0) {
                  iVar12 = memcmp(pppppuVar23,pplVar36,(size_t)ppppuVar21);
                  if (iVar12 != 0) goto LAB_18051bbd0;
                }
                if (pplVar2[9] == (longlong *)0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                  FUN_18015bb70();
                }
                FUN_18015a9c0(local_388);
                bVar10 = true;
                puVar26 = local_388;
                if (0xf < uStack_370) {
                  puVar26 = (undefined1 *)local_388._0_8_;
                }
                pppppuVar23 = pppppuVar31 + 7;
                if ((undefined8 ****)0xf < pppppuVar31[10]) {
                  pppppuVar23 = (undefined8 *****)pppppuVar31[7];
                }
                if ((pppppuVar31[9] < (ulonglong)local_388._16_8_) ||
                   (iVar12 = memcmp(pppppuVar23,puVar26,local_388._16_8_), iVar12 != 0)) {
                  pppppuVar31 = local_13c8;
                  goto LAB_18051bbd0;
                }
                bVar47 = true;
                pppppuVar31 = local_13c8;
              }
              else {
LAB_18051bbd0:
                bVar47 = false;
              }
              if (bVar10) {
                bVar10 = false;
                FUN_18015c010(local_388);
                pppppuVar31 = local_13c8;
              }
              if (bVar47) {
                bVar45 = 0x50;
              }
              if (local_res10[0] == 9) {
                if (((undefined8 ****)((longlong)&DAT_180b0cb9c + 3) < pppppuVar31[1]) &&
                   (pppppuVar31[1] < &DAT_180b0cd68)) {
                  pauVar18 = (undefined1 (*) [16])FUN_18015b360(local_1428,pppppuVar31 + 7);
                  if (*(ulonglong *)(pauVar18[1] + 8) < 0x10) {
                    pauVar39 = pauVar18;
                  }
                  else {
                    pauVar39 = *(undefined1 (**) [16])*pauVar18;
                  }
                  lVar15 = *(longlong *)pauVar18[1];
                  puVar26 = *pauVar39;
                  for (; pauVar39 != (undefined1 (*) [16])(puVar26 + lVar15);
                      pauVar39 = (undefined1 (*) [16])(*pauVar39 + 1)) {
                    iVar12 = tolower((uint)(byte)(*pauVar39)[0]);
                    (*pauVar39)[0] = (char)iVar12;
                    if ((char)iVar12 == '_') {
                      (*pauVar39)[0] = 0x20;
                    }
                  }
                  local_1e8 = *pauVar18;
                  auStack_1d8 = pauVar18[1];
                  (*pauVar18)[0] = 0;
                  *(undefined8 *)pauVar18[1] = 0;
                  *(undefined8 *)(pauVar18[1] + 8) = 0xf;
                  FUN_18015c010(pauVar18);
                  cVar11 = FUN_1800f54b0(local_1e8,"scoped");
                  if (((cVar11 == '\0') &&
                      (cVar11 = FUN_1800f54b0(local_1e8,"first zoom"), cVar11 == '\0')) &&
                     (cVar11 = FUN_1800f54b0(local_1e8,"second zoom"), cVar11 == '\0')) {
                    cVar11 = FUN_1800f54b0(local_1e8,"thirdperson");
                    if (cVar11 == '\0') {
                      cVar11 = FUN_1800e7dd0(local_1e8,"aspect ratio");
                      pcVar35 = "custom fov";
                      if (cVar11 != '\0') {
                        pcVar35 = "custom aspect ratio";
                      }
                    }
                    else {
                      pcVar35 = "thirdperson";
                    }
                  }
                  else {
                    pcVar35 = "scoped fov override";
                  }
                  pppppuVar22 = local_1698;
                  ppppuVar21 = (undefined8 ****)0xffffffffffffffff;
                  do {
                    ppppuVar21 = (undefined8 ****)((longlong)ppppuVar21 + 1);
                  } while (pcVar35[(longlong)ppppuVar21] != '\0');
                  pppppuVar23 = &local_350;
                  if (0xf < uVar40) {
                    pppppuVar23 = local_1698;
                  }
                  if (ppppuVar16 == ppppuVar21) {
                    if (ppppuVar16 == (undefined8 ****)0x0) {
                      bVar47 = true;
                    }
                    else {
                      iVar12 = memcmp(pppppuVar23,pcVar35,(size_t)ppppuVar16);
                      bVar47 = iVar12 == 0;
                    }
                  }
                  else {
                    bVar47 = false;
                  }
                  bVar45 = -bVar47 & 0x96;
                  FUN_18015c010(local_1e8);
                  pppppuVar31 = local_13c8;
                  if (local_res10[0] != 9) goto LAB_18051be80;
                }
                ppppuVar21 = pppppuVar31[1];
                if ((&DAT_180b0cd68 <= ppppuVar21) && (ppppuVar21 < &DAT_180b0cde0)) {
                  cVar11 = FUN_1800e7dd0(&local_350,"viewmodel adjust");
                  bVar45 = -(cVar11 != '\0') & 0x96;
                }
                if (((&DAT_180b0cde0 <= ppppuVar21) && (ppppuVar21 < &DAT_180b0d018)) &&
                   (bVar45 = 0, pplVar2[1] == (longlong *)&DAT_180b0cde0)) {
                  bVar45 = 0x96;
                }
                if ((((undefined8 ****)0x180b0d017 < ppppuVar21) && (ppppuVar21 < &DAT_180b0d2d0))
                   && (bVar45 = 0, pplVar2[1] == (longlong *)&DAT_180b0d018)) {
                  bVar45 = 0x96;
                }
              }
              else {
LAB_18051be80:
                if (local_res10[0] == 0) {
                  pppppuVar23 = pppppuVar31 + 3;
                  if ((undefined8 ****)0xf < pppppuVar31[6]) {
                    pppppuVar23 = (undefined8 *****)*pppppuVar23;
                  }
                  if ((pppppuVar31[5] == (undefined8 ****)0x8) &&
                     (*pppppuVar23 == (undefined8 ****)0x6d69612069746e61)) {
                    uVar24 = FUN_18015b360(local_15d0,pppppuVar31 + 7);
                    FUN_18050cc10(local_388,uVar24);
                    FUN_18015b0f0(local_270);
                    cVar11 = FUN_1800e7dd0(local_388,"custom pitch");
                    if (cVar11 == '\0') {
                      cVar11 = FUN_1800e7dd0(local_388,"target selection");
                      if (((cVar11 != '\0') ||
                          (cVar11 = FUN_1800e7dd0(local_388,"alignment offset"), cVar11 != '\0')) ||
                         (cVar11 = FUN_1800f54b0(local_388,"correct yaw"), cVar11 != '\0')) {
                        pcVar35 = "yaw mode";
                        goto LAB_18051c007;
                      }
                      cVar11 = FUN_1800e7dd0(local_388,"jitter amount");
                      if (cVar11 != '\0') {
                        pcVar35 = "jitter";
                        goto LAB_18051c007;
                      }
                      cVar11 = FUN_1800e7dd0(local_388,"spin speed rev/s");
                      if (cVar11 != '\0') {
                        pcVar35 = "spinbot";
                        goto LAB_18051c007;
                      }
                      cVar11 = FUN_1800e7dd0(local_388,"force left degrees");
                      if (cVar11 != '\0') {
                        pcVar35 = "force left";
                        goto LAB_18051c007;
                      }
                      cVar11 = FUN_1800e7dd0(local_388,"force right degrees");
                      if (cVar11 != '\0') {
                        pcVar35 = "force right";
                        goto LAB_18051c007;
                      }
                      cVar11 = FUN_1800f54b0(local_388,"direction indicator");
                      if (cVar11 != '\0') {
                        pcVar35 = "direction indicator";
                        goto LAB_18051c007;
                      }
                    }
                    else {
                      pcVar35 = "pitch";
LAB_18051c007:
                      FUN_1800f5730(local_270,pcVar35);
                    }
                    if ((local_260 == 0) ||
                       (cVar11 = FUN_1800ea250(&local_350,local_270), cVar11 == '\0')) {
                      bVar45 = 0;
                    }
                    else {
                      bVar45 = 0xb4;
                    }
                    FUN_18015c010(local_270);
                    FUN_18015c010(local_388);
                    pppppuVar31 = local_13c8;
                    if (local_res10[0] != 0) goto LAB_18051c23f;
                  }
                  pppppuVar23 = pppppuVar31 + 7;
                  if ((undefined8 ****)0xf < pppppuVar31[10]) {
                    pppppuVar23 = (undefined8 *****)pppppuVar31[7];
                  }
                  if (((pppppuVar31[9] == (undefined8 ****)0x13) &&
                      (iVar12 = memcmp(pppppuVar23,"dynamic point scale",0x13), iVar12 == 0)) ||
                     (cVar11 = FUN_1800e7dd0(pppppuVar31 + 7,"debug multipoints"), cVar11 != '\0'))
                  {
                    pppppuVar23 = &local_350;
                    if (0xf < uVar40) {
                      pppppuVar23 = pppppuVar22;
                    }
                    if (ppppuVar16 == (undefined8 ****)0xb) {
                      iVar12 = memcmp(pppppuVar23,"point scale",0xb);
                      bVar45 = -(iVar12 == 0) & 0x96;
                    }
                    else {
                      bVar45 = 0;
                    }
                  }
                  pppppuVar22 = pppppuVar31 + 3;
                  if ((undefined8 ****)0xf < pppppuVar31[6]) {
                    pppppuVar22 = (undefined8 *****)*pppppuVar22;
                  }
                  if (((pppppuVar31[5] != (undefined8 ****)0x8) ||
                      (*pppppuVar22 != (undefined8 ****)0x6d69612069746e61)) &&
                     (cVar11 = FUN_1800e7dd0(pppppuVar31 + 7,"target selection"), cVar11 != '\0')) {
                    cVar11 = FUN_1800e7dd0(&local_350,"auto fire");
                    bVar45 = -(cVar11 != '\0') & 0x96;
                  }
                  if (((undefined8 ****)((longlong)&DAT_180cad2e4 + 3) < pppppuVar31[1]) &&
                     (pppppuVar31[1] < &DAT_180cad358)) {
                    cVar11 = FUN_1800e7dd0(&local_350,"quick peek");
                    bVar45 = -(cVar11 != '\0') & 0x82;
                  }
                  pppppuVar22 = pppppuVar31 + 7;
                  ppppuVar21 = pppppuVar31[9];
                  ppppuVar3 = pppppuVar31[10];
                  if ((undefined8 ****)0xf < ppppuVar3) {
                    pppppuVar22 = (undefined8 *****)*pppppuVar22;
                  }
                  if (((ppppuVar21 == (undefined8 ****)0x10) &&
                      (*pppppuVar22 == (undefined8 ****)0x6b6361622078616d)) &&
                     (pppppuVar22[1] == (undefined8 ****)0x736d206b63617274)) {
                    cVar11 = FUN_1800e7dd0(&local_350,"backtrack");
                    bVar45 = -(cVar11 != '\0') & 0x82;
                  }
                  pppppuVar22 = pppppuVar31 + 7;
                  if ((undefined8 ****)0xf < ppppuVar3) {
                    pppppuVar22 = (undefined8 *****)*pppppuVar22;
                  }
                  if (ppppuVar21 == (undefined8 ****)0x15) {
                    iVar12 = memcmp(pppppuVar22,"max extrapolate ticks",0x15);
                    if (iVar12 == 0) {
                      cVar11 = FUN_1800e7dd0(&local_350,"extrapolation");
                      bVar45 = -(cVar11 != '\0') & 0x82;
                    }
                  }
                }
                else {
LAB_18051c23f:
                  if (local_res10[0] == 3) {
                    if (((undefined8 ****)0x180cc8ddf < pppppuVar31[1]) &&
                       (pppppuVar31[1] < &DAT_180cc8ef0)) {
                      uVar24 = FUN_18015b360(local_13e8,pppppuVar31 + 7);
                      FUN_18050cc10(local_148,uVar24);
                      cVar11 = FUN_1800e7dd0(local_148,"selected skybox");
                      pcVar35 = "skybox color";
                      if (cVar11 != '\0') {
                        pcVar35 = "skybox material";
                      }
                      FUN_18015bae0(local_188,pcVar35);
                      cVar11 = FUN_1800ea250(&local_350,local_188);
                      bVar45 = -(cVar11 != '\0') & 0x82;
                      FUN_18015c010(local_188);
                      FUN_18015c010(local_148);
                      pppppuVar31 = local_13c8;
                      if (local_res10[0] != 3) goto LAB_18051c43e;
                    }
                    pppppuVar22 = pppppuVar31 + 3;
                    if ((undefined8 ****)0xf < pppppuVar31[6]) {
                      pppppuVar22 = (undefined8 *****)*pppppuVar22;
                    }
                    if (pppppuVar31[5] == (undefined8 ****)0x5) {
                      iVar12 = *(int *)pppppuVar22 + -0x6e656373;
                      if (iVar12 == 0) {
                        iVar12 = *(byte *)((longlong)pppppuVar22 + 4) - 0x65;
                      }
                      if (iVar12 == 0) {
                        uVar24 = FUN_18015b360(local_15d0,pppppuVar31 + 7);
                        FUN_18050cc10(local_270,uVar24);
                        FUN_18015b0f0(local_388);
                        cVar11 = FUN_1800f54b0(local_270,&DAT_18085d564);
                        if (cVar11 == '\0') {
                          cVar11 = FUN_1800e7dd0(local_270,"world tint strength");
                          if ((cVar11 != '\0') ||
                             (cVar11 = FUN_1800e7dd0(local_270,"atmosphere tint strength"),
                             cVar11 != '\0')) {
                            pcVar35 = "world color";
                            goto LAB_18051c3e9;
                          }
                          cVar11 = FUN_1800f54b0(local_270,"decal");
                          if (cVar11 != '\0') {
                            pcVar35 = "decal tint";
                            goto LAB_18051c3e9;
                          }
                        }
                        else {
                          pcVar35 = "depth of field";
LAB_18051c3e9:
                          FUN_1800f5730(local_388,pcVar35);
                        }
                        if (local_388._16_8_ != 0) {
                          cVar11 = FUN_1800ea250(&local_350,local_388);
                          bVar45 = -(cVar11 != '\0') & 0x82;
                        }
                        FUN_18015c010(local_388);
                        FUN_18015c010(local_270);
                        pppppuVar31 = local_13c8;
                      }
                    }
                  }
                }
              }
LAB_18051c43e:
              if (((undefined8 ****)0x180b0be77 < pppppuVar31[1]) &&
                 (pppppuVar31[1] < &DAT_180b0c858)) {
                pauVar18 = (undefined1 (*) [16])FUN_18015b360(local_1448,pppppuVar31 + 7);
                if (*(ulonglong *)(pauVar18[1] + 8) < 0x10) {
                  pauVar39 = pauVar18;
                }
                else {
                  pauVar39 = *(undefined1 (**) [16])*pauVar18;
                }
                lVar15 = *(longlong *)pauVar18[1];
                puVar26 = *pauVar39;
                for (; pauVar39 != (undefined1 (*) [16])(puVar26 + lVar15);
                    pauVar39 = (undefined1 (*) [16])(*pauVar39 + 1)) {
                  iVar12 = tolower((uint)(byte)(*pauVar39)[0]);
                  (*pauVar39)[0] = (char)iVar12;
                  if ((char)iVar12 == '_') {
                    (*pauVar39)[0] = 0x20;
                  }
                }
                local_218 = *pauVar18;
                auStack_208 = pauVar18[1];
                (*pauVar18)[0] = 0;
                *(undefined8 *)pauVar18[1] = 0;
                *(undefined8 *)(pauVar18[1] + 8) = 0xf;
                FUN_18015c010(pauVar18);
                pppppuVar31 = local_13c8;
                local_240 = (undefined8 ****)0x0;
                local_238 = 0xf;
                local_250._1_15_ = SUB1615((undefined1  [16])0x0,1);
                auVar59[0xf] = 0;
                auVar59._0_15_ = local_250._1_15_;
                local_250 = auVar59 << 8;
                pppppuVar22 = local_13c8 + 3;
                pppppuVar23 = pppppuVar22;
                if ((undefined8 ****)0xf < local_13c8[6]) {
                  pppppuVar23 = (undefined8 *****)*pppppuVar22;
                }
                if (((local_13c8[5] < (undefined8 ****)0xc) ||
                    (*pppppuVar23 != (undefined8 ****)0x7473206874616564)) ||
                   (*(int *)(pppppuVar23 + 1) != 0x20656c79)) {
                  if ((undefined8 ****)0xf < local_13c8[6]) {
                    pppppuVar22 = (undefined8 *****)*pppppuVar22;
                  }
                  if ((local_13c8[5] < (undefined8 ****)0x13) ||
                     (iVar12 = memcmp(pppppuVar22,"static death style ",0x13), iVar12 != 0)) {
                    cVar11 = FUN_1800e7dd0(pppppuVar31 + 3,"death thunder");
                    if (cVar11 == '\0') {
                      cVar11 = FUN_1800e7dd0(pppppuVar31 + 3,"death shockwave");
                      if (cVar11 == '\0') {
                        cVar11 = FUN_1800f54b0(local_218,"bullet tracer");
                        if ((cVar11 == '\0') &&
                           (cVar11 = FUN_1800e7dd0(local_218,"tracer visibility"), cVar11 == '\0'))
                        {
                          cVar11 = FUN_1800f54b0(local_218,"spark");
                          if ((cVar11 == '\0') &&
                             ((cVar11 = FUN_1800f54b0(local_218,"bullet impact"), cVar11 == '\0' &&
                              (cVar11 = FUN_1800e7dd0(local_218,"impact visibility"), cVar11 == '\0'
                              )))) {
                            cVar11 = FUN_1800f54b0(local_218,"static death");
                            if (cVar11 == '\0') {
                              local_100[0] = "hit sound";
                              local_100[1] = "death sound";
                              local_100[2] = "hit effect";
                              local_100[3] = "death effect";
                              local_100[4] = "hit marker";
                              ppcVar44 = local_120 + 4;
                              do {
                                pcVar35 = *ppcVar44;
                                cVar11 = FUN_1800f54b0(local_218,pcVar35);
                                if (cVar11 == '\0') {
                                  uVar24 = FUN_18015bae0(local_388,"custom ");
                                  uVar24 = FUN_1800e5e50(local_15d0,uVar24);
                                  bVar8 = true;
                                  cVar11 = FUN_1800ea250(local_218,uVar24);
                                  if (cVar11 != '\0') goto LAB_18051c741;
                                  bVar47 = false;
                                }
                                else {
LAB_18051c741:
                                  bVar47 = true;
                                }
                                if (bVar8) {
                                  bVar8 = false;
                                  FUN_18015c010(local_15d0);
                                }
                                if (bVar47) {
                                  FUN_1800f5730(local_250,pcVar35);
                                }
                                ppcVar44 = ppcVar44 + 1;
                              } while (ppcVar44 != local_120 + 9);
                              goto LAB_18051c7bd;
                            }
                            pcVar35 = "static death pose";
                          }
                          else {
                            pcVar35 = "bullet impacts";
                          }
                        }
                        else {
                          pcVar35 = "bullet tracers";
                        }
                      }
                      else {
                        pcVar35 = "shockwave";
                      }
                    }
                    else {
                      pcVar35 = "thunder";
                    }
                  }
                  else {
                    pcVar35 = "static death pose";
                  }
                  FUN_1800f5730(local_250,pcVar35);
                }
                else {
                  FUN_180113930(local_250,"death effect");
                }
LAB_18051c7bd:
                if (local_240 != (undefined8 ****)0x0) {
                  puVar26 = local_250;
                  if (0xf < local_238) {
                    puVar26 = (undefined1 *)local_250._0_8_;
                  }
                  pppppuVar22 = &local_350;
                  if (0xf < uVar40) {
                    pppppuVar22 = local_1698;
                  }
                  if (ppppuVar16 == local_240) {
                    if (ppppuVar16 == (undefined8 ****)0x0) {
                      bVar47 = true;
                    }
                    else {
                      iVar12 = memcmp(pppppuVar22,puVar26,(size_t)ppppuVar16);
                      bVar47 = iVar12 == 0;
                    }
                  }
                  else {
                    bVar47 = false;
                  }
                  bVar45 = -bVar47 & 0x82;
                }
                FUN_18015c010(local_250);
                FUN_18015c010(local_218);
                pppppuVar31 = local_13c8;
              }
              if ((local_res10[0] == 0) && (DAT_180cad2e0 == 0)) {
                ppppuVar16 = (undefined8 ****)FUN_180509ec0(&DAT_180c8fdb8);
                pppppuVar31 = local_13c8;
                if ((ppppuVar16 <= local_13c8[1]) && (local_13c8[1] < ppppuVar16 + 0x16e)) {
                  uVar24 = FUN_18015b360(&local_1608,local_13c8 + 7);
                  FUN_18050cc10(local_2f0,uVar24);
                  cVar11 = FUN_1800f54b0(local_2f0,"standalone");
                  if (cVar11 == '\0') {
                    cVar11 = FUN_1800f54b0(local_2f0,&DAT_18081e9cc);
                    if (cVar11 == '\0') {
                      cVar11 = FUN_1800f54b0(local_2f0,"trigger");
                      if (cVar11 == '\0') {
                        cVar11 = FUN_1800e7dd0(local_2f0,"min damage");
                        if (cVar11 == '\0') {
                          cVar11 = FUN_1800e7dd0(local_2f0,"fov color");
                          if (cVar11 == '\0') {
                            cVar11 = FUN_1800e7dd0(local_2f0,"visualize fov");
                            pcVar35 = "aimbot";
                            if (cVar11 == '\0') goto LAB_18051c967;
                          }
                          pcVar35 = "fov";
                        }
                        else {
                          pcVar35 = "autowall";
                        }
                      }
                      else {
                        pcVar35 = "triggerbot";
                      }
                    }
                    else {
                      pcVar35 = "recoil control";
                    }
                  }
                  else {
                    pcVar35 = "standalone rcs";
                  }
LAB_18051c967:
                  FUN_18015bae0(local_168,pcVar35);
                  cVar11 = FUN_1800ea250(&local_350,local_168);
                  if (cVar11 != '\0') {
                    bVar45 = 0x78;
                  }
                  FUN_18015c010(local_168);
                  FUN_18015c010(local_2f0);
                  pppppuVar31 = local_13c8;
                }
              }
              plVar14 = (longlong *)FUN_18051e410(local_1658,pppppuVar31);
              if ((plVar14 != (longlong *)0x0) && (bVar45 = 0, pplVar2[1] == plVar14)) {
                bVar45 = 200;
              }
              if (bVar1 < bVar45) {
                local_16a0 = local_1660;
                bVar1 = bVar45;
              }
              ppplVar28 = local_16a0;
              FUN_18015c010(&local_2c8);
              FUN_18015c010(&local_350);
              local_1660 = local_1660 + 4;
            } while (local_1660 != (longlong ***)local_1688._0_8_);
            if (ppplVar28 != (longlong ***)0x0) {
              FUN_1801543a0(ppplVar28 + 1,&local_13c8);
              plVar14 = local_1668;
              plVar25 = (longlong *)local_128;
              goto LAB_18051ca79;
            }
            plVar14 = local_1668;
            plVar25 = (longlong *)local_128;
          }
          uVar24 = FUN_18055e490(&local_318,local_13c8 + 3);
          FUN_1801543a0(uVar24,&local_13c8);
        }
LAB_18051ca79:
        plVar25 = plVar25 + 1;
        local_128 = (longlong ***)plVar25;
      } while (plVar25 != plVar14);
    }
  }
  local_16a0 = (longlong ***)local_res10;
  local_328 = (undefined1  [16])0x0;
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_3a8._8_8_ = 0x15;
    local_3a8._0_8_ = "tier0.dll:g_pMemAlloc";
    DAT_180c7df28 = (undefined8 *)FUN_180451750(local_3a8);
  }
  plVar14 = (longlong *)
            (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x58);
  *plVar14 = (longlong)plVar14;
  plVar14[1] = (longlong)plVar14;
  plVar14[2] = (longlong)plVar14;
  *(undefined2 *)(plVar14 + 3) = 0x101;
  local_328._0_8_ = plVar14;
  uVar24 = local_308._8_8_;
  puVar20 = (undefined8 *)local_308._0_8_;
  if (local_308._0_8_ != local_308._8_8_) {
    do {
      uVar49 = FUN_18051ed80(&local_16a0,&local_1608,*puVar20);
      plVar14 = (longlong *)FUN_18056ca10(local_328,local_3a8,uVar49);
      lVar15 = *plVar14;
      local_1688._0_8_ = puVar20;
      puVar4 = *(undefined8 **)(lVar15 + 0x48);
      if (puVar4 == *(undefined8 **)(lVar15 + 0x50)) {
        FUN_18056ef00(lVar15 + 0x40,puVar4,local_1688);
      }
      else {
        *puVar4 = puVar20;
        *(longlong *)(lVar15 + 0x48) = *(longlong *)(lVar15 + 0x48) + 8;
      }
      FUN_18015c010(&local_1608);
      puVar20 = puVar20 + 4;
    } while (puVar20 != (undefined8 *)uVar24);
    plVar14 = (longlong *)local_328._0_8_;
  }
  if ((local_res10[0] < 0xb) && ((0x621U >> (local_res10[0] & 0x1f) & 1) != 0)) {
    local_3a8 = (undefined1  [16])0x0;
    if (DAT_180c7df28 == (undefined8 *)0x0) {
      local_1688._8_8_ = 0x15;
      local_1688._0_8_ = "tier0.dll:g_pMemAlloc";
      DAT_180c7df28 = (undefined8 *)FUN_180451750(local_1688);
    }
    plVar25 = (longlong *)
              (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x58);
    *plVar25 = (longlong)plVar25;
    plVar25[1] = (longlong)plVar25;
    plVar25[2] = (longlong)plVar25;
    *(undefined2 *)(plVar25 + 3) = 0x101;
    plVar14 = (longlong *)*local_318;
    local_3a8._0_8_ = plVar25;
    if (*(char *)((longlong)plVar14 + 0x19) == '\0') {
      do {
        puVar4 = (undefined8 *)plVar14[9];
        for (puVar20 = (undefined8 *)plVar14[8]; puVar20 != puVar4; puVar20 = puVar20 + 1) {
          local_1688._0_8_ = *puVar20;
          uVar24 = FUN_18051ed80(&local_16a0,&local_1608);
          plVar25 = (longlong *)FUN_18056cd20(local_3a8,local_1658,uVar24);
          FUN_1801543a0(*plVar25 + 0x40,local_1688);
          FUN_18015c010(&local_1608);
        }
        plVar25 = (longlong *)plVar14[2];
        if (*(char *)((longlong)plVar25 + 0x19) == '\0') {
          cVar11 = *(char *)(*plVar25 + 0x19);
          plVar14 = plVar25;
          plVar25 = (longlong *)*plVar25;
          while (cVar11 == '\0') {
            cVar11 = *(char *)(*plVar25 + 0x19);
            plVar14 = plVar25;
            plVar25 = (longlong *)*plVar25;
          }
        }
        else {
          cVar11 = *(char *)(plVar14[1] + 0x19);
          plVar32 = (longlong *)plVar14[1];
          plVar25 = plVar14;
          while ((plVar14 = plVar32, cVar11 == '\0' && (plVar25 == (longlong *)plVar14[2]))) {
            cVar11 = *(char *)(plVar14[1] + 0x19);
            plVar32 = (longlong *)plVar14[1];
            plVar25 = plVar14;
          }
        }
      } while (*(char *)((longlong)plVar14 + 0x19) == '\0');
    }
    plVar14 = local_318;
    FUN_1801bd370(&local_318,&local_318,local_318[1]);
    plVar25 = local_318;
    plVar14[1] = (longlong)plVar14;
    *plVar14 = (longlong)plVar14;
    plVar14[2] = (longlong)plVar14;
    local_318 = (longlong *)local_3a8._0_8_;
    local_310 = local_3a8._8_8_;
    local_3a8._8_8_ = 0;
    local_3a8._0_8_ = plVar25;
    FUN_18055e400(local_3a8);
    plVar14 = (longlong *)local_328._0_8_;
  }
  plVar25 = (longlong *)*local_318;
  cVar11 = *(char *)((longlong)plVar25 + 0x19);
  while (cVar11 == '\0') {
    plVar32 = (longlong *)plVar14[1];
    cVar11 = *(char *)((longlong)plVar32 + 0x19);
    plVar7 = plVar14;
    while (cVar11 == '\0') {
      cVar11 = FUN_180114040(plVar32 + 4,plVar25 + 4);
      if (cVar11 < '\0') {
        plVar32 = plVar32 + 2;
      }
      else {
        plVar7 = plVar32;
      }
      plVar32 = (longlong *)*plVar32;
      cVar11 = *(char *)((longlong)plVar32 + 0x19);
    }
    if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
      cVar11 = FUN_180114040(plVar25 + 4,plVar7 + 4);
      if (cVar11 < '\0') goto LAB_18051cdc2;
    }
    else {
LAB_18051cdc2:
      uVar24 = FUN_18055e290(local_328,plVar25 + 4);
      FUN_18056cbb0(uVar24,0,0);
      plVar14 = (longlong *)local_328._0_8_;
    }
    plVar32 = (longlong *)plVar25[2];
    if (*(char *)((longlong)plVar32 + 0x19) == '\0') {
      cVar11 = *(char *)(*plVar32 + 0x19);
      plVar25 = plVar32;
      plVar32 = (longlong *)*plVar32;
      while (cVar11 == '\0') {
        cVar11 = *(char *)(*plVar32 + 0x19);
        plVar25 = plVar32;
        plVar32 = (longlong *)*plVar32;
      }
    }
    else {
      cVar11 = *(char *)(plVar25[1] + 0x19);
      plVar7 = (longlong *)plVar25[1];
      plVar32 = plVar25;
      while ((plVar25 = plVar7, cVar11 == '\0' && (plVar32 == (longlong *)plVar25[2]))) {
        cVar11 = *(char *)(plVar25[1] + 0x19);
        plVar7 = (longlong *)plVar25[1];
        plVar32 = plVar25;
      }
    }
    cVar11 = *(char *)((longlong)plVar25 + 0x19);
  }
  local_288 = (undefined1  [16])0x0;
  local_278 = 0;
  local_1508 = (undefined1  [16])0x0;
  local_14f8 = (undefined1  [16])0x0;
  FUN_18015ba30(local_1508,"Aiming",6);
  local_14e8 = (undefined1  [16])0x0;
  local_14d8 = (undefined1  [16])0x0;
  FUN_18015ba30(local_14e8,"Other Features",0xe);
  local_14c8 = (undefined1  [16])0x0;
  local_14b8 = (undefined1  [16])0x0;
  FUN_18015ba30(local_14c8,"Anti-Aim",8);
  local_288 = (undefined1  [16])0x0;
  local_278 = 0;
  lVar15 = FUN_18015bca0(0x60);
  local_288._8_8_ = lVar15;
  local_288._0_8_ = lVar15;
  local_278 = lVar15 + 0x60;
  local_3a8._0_8_ = local_288;
  puVar20 = (undefined8 *)local_1508;
  local_1688._8_8_ = lVar15;
  local_1688._0_8_ = lVar15;
  local_1678 = local_288;
  do {
    FUN_18015b360(lVar15,puVar20);
    lVar15 = lVar15 + 0x20;
    local_1688._8_8_ = lVar15;
    puVar20 = puVar20 + 4;
  } while (puVar20 != &local_14a8);
  local_288._8_8_ = lVar15;
  _eh_vector_destructor_iterator_(local_1508,0x20,3,thunk_FUN_18015c010);
  if ((local_res10[0] == 0) || (local_res10[0] == 7)) {
    plVar14 = *(longlong **)local_328._0_8_;
    cVar11 = *(char *)((longlong)plVar14 + 0x19);
    while (cVar11 == '\0') {
      lVar15 = plVar14[9];
      lVar5 = plVar14[8];
      lVar46 = lVar15 - lVar5 >> 3;
      if (lVar46 < 0x21) {
        FUN_1805623a0(lVar5,lVar15);
      }
      else {
        uVar41 = lVar46 - (lVar46 - (lVar15 - lVar5 >> 0x3f) >> 1);
        uVar40 = 0x7fffffffffffffff;
        if ((longlong)uVar41 < 0x7fffffffffffffff) {
          uVar40 = uVar41;
        }
        if (0x200 < uVar41) {
          if ((uVar40 < 0x2000000000000000) && (0 < (longlong)uVar40)) {
            do {
              puVar26 = (undefined1 *)FUN_1805f6194(uVar40 * 8,&DAT_1806898a0);
              if (puVar26 != (undefined1 *)0x0) {
                if (uVar40 < 0x201) goto LAB_18051d078;
                local_13b8 = puVar26;
                goto LAB_18051d0d7;
              }
              uVar40 = uVar40 >> 1;
            } while (uVar40 != 0);
          }
          puVar26 = (undefined1 *)0x0;
LAB_18051d078:
          if (DAT_180c7df30 == (undefined8 *)0x0) {
            local_3a8._8_8_ = 0x15;
            local_3a8._0_8_ = "tier0.dll:g_pMemAlloc";
            DAT_180c7df30 = (undefined8 *)FUN_180451750(local_3a8);
          }
          (**(code **)(*(longlong *)*DAT_180c7df30 + 0x18))((longlong *)*DAT_180c7df30,puVar26);
          uVar41 = 0x200;
        }
        uVar40 = uVar41;
        local_13b8 = local_13a8;
LAB_18051d0d7:
        local_13b0 = uVar40;
        FUN_180562560(lVar5,lVar15,lVar46);
        puVar26 = local_13b8;
        if (0x200 < local_13b0) {
          if (DAT_180c7df30 == (undefined8 *)0x0) {
            local_1688._8_8_ = 0x15;
            local_1688._0_8_ = "tier0.dll:g_pMemAlloc";
            DAT_180c7df30 = (undefined8 *)FUN_180451750(local_1688);
          }
          (**(code **)(*(longlong *)*DAT_180c7df30 + 0x18))((longlong *)*DAT_180c7df30,puVar26);
        }
      }
      plVar25 = (longlong *)plVar14[2];
      if (*(char *)((longlong)plVar25 + 0x19) == '\0') {
        cVar11 = *(char *)(*plVar25 + 0x19);
        plVar14 = plVar25;
        plVar25 = (longlong *)*plVar25;
        while (cVar11 == '\0') {
          cVar11 = *(char *)(*plVar25 + 0x19);
          plVar14 = plVar25;
          plVar25 = (longlong *)*plVar25;
        }
      }
      else {
        cVar11 = *(char *)(plVar14[1] + 0x19);
        plVar32 = (longlong *)plVar14[1];
        plVar25 = plVar14;
        while ((plVar14 = plVar32, cVar11 == '\0' && (plVar25 == (longlong *)plVar14[2]))) {
          cVar11 = *(char *)(plVar14[1] + 0x19);
          plVar32 = (longlong *)plVar14[1];
          plVar25 = plVar14;
        }
      }
      cVar11 = *(char *)((longlong)plVar14 + 0x19);
    }
  }
  _local_368 = (undefined1  [16])0x0;
  local_358 = (undefined8 *)0x0;
  if (local_res10[0] == 0) {
    uVar24 = local_288._8_8_;
    if (local_288._0_8_ != local_288._8_8_) {
      puStack_360 = (undefined8 *)0x0;
      lVar15 = local_288._0_8_;
      puVar20 = puStack_360;
      do {
        plVar14 = *(longlong **)(local_328._0_8_ + 8);
        cVar11 = *(char *)((longlong)plVar14 + 0x19);
        plVar25 = (longlong *)local_328._0_8_;
        while (cVar11 == '\0') {
          cVar11 = FUN_180114040(plVar14 + 4,lVar15);
          if (cVar11 < '\0') {
            plVar14 = plVar14 + 2;
          }
          else {
            plVar25 = plVar14;
          }
          plVar14 = (longlong *)*plVar14;
          cVar11 = *(char *)((longlong)plVar14 + 0x19);
        }
        if (*(char *)((longlong)plVar25 + 0x19) == '\0') {
          cVar11 = FUN_180114040(lVar15,plVar25 + 4);
          if (-1 < cVar11) {
            if (puVar20 == local_358) {
              FUN_1802117e0(local_368,puVar20,lVar15);
              puVar20 = puStack_360;
            }
            else {
              FUN_18015b360(puVar20,lVar15);
              puVar20 = (undefined8 *)((longlong)puStack_360 + 0x20);
              puStack_360 = puVar20;
            }
          }
        }
        lVar15 = lVar15 + 0x20;
      } while (lVar15 != uVar24);
    }
  }
  else if (local_res10[0] == 9) {
    local_120[0] = "Camera";
    local_120[1] = "Reticles";
    local_120[2] = "Local Model";
    local_120[3] = "Scene Filters";
    ppcVar44 = local_120;
    uVar24 = 0;
    uVar49 = 0xf;
    do {
      pcVar35 = *ppcVar44;
      local_2f0 = (undefined1  [16])0x0;
      auStack_2e0 = (undefined1  [16])0x0;
      lVar15 = -1;
      do {
        lVar15 = lVar15 + 1;
      } while (pcVar35[lVar15] != '\0');
      FUN_18015ba30(local_2f0,pcVar35);
      plVar14 = *(longlong **)(local_328._0_8_ + 8);
      cVar11 = *(char *)((longlong)plVar14 + 0x19);
      plVar25 = (longlong *)local_328._0_8_;
      while (cVar11 == '\0') {
        cVar11 = FUN_180114040(plVar14 + 4,local_2f0);
        if (cVar11 < '\0') {
          plVar14 = plVar14 + 2;
        }
        else {
          plVar25 = plVar14;
        }
        plVar14 = (longlong *)*plVar14;
        cVar11 = *(char *)((longlong)plVar14 + 0x19);
      }
      if ((*(char *)((longlong)plVar25 + 0x19) == '\0') &&
         (cVar11 = FUN_180114040(local_2f0,plVar25 + 4), -1 < cVar11)) {
        bVar47 = true;
      }
      else {
        bVar47 = false;
      }
      FUN_18015c010(local_2f0);
      if (bVar47) {
        local_2f0 = (undefined1  [16])0x0;
        auStack_2e0 = (undefined1  [16])0x0;
        lVar15 = -1;
        do {
          lVar15 = lVar15 + 1;
        } while (pcVar35[lVar15] != '\0');
        FUN_18015ba30(local_2f0,pcVar35);
        if (puStack_360 == local_358) {
          FUN_18017bcb0(local_368,puStack_360,local_2f0);
        }
        else {
          *puStack_360 = local_2f0._0_8_;
          puStack_360[1] = local_2f0._8_8_;
          puStack_360[2] = auStack_2e0._0_8_;
          puStack_360[3] = auStack_2e0._8_8_;
          auStack_2e0._8_8_ = uVar49;
          auStack_2e0._0_8_ = uVar24;
          auVar61[0xf] = 0;
          auVar61._0_15_ = local_2f0._1_15_;
          local_2f0 = auVar61 << 8;
          puStack_360 = puStack_360 + 4;
        }
        FUN_18015c010(local_2f0);
      }
      ppcVar44 = ppcVar44 + 1;
    } while (ppcVar44 != local_120 + 4);
  }
  else {
    plVar14 = *(longlong **)local_328._0_8_;
    if (*(char *)((longlong)plVar14 + 0x19) == '\0') {
      puStack_360 = (undefined8 *)0x0;
      puVar20 = puStack_360;
      do {
        if (puVar20 == local_358) {
          FUN_1802117e0(local_368,puVar20);
          puVar20 = puStack_360;
        }
        else {
          FUN_18015b360(puVar20,plVar14 + 4);
          puVar20 = (undefined8 *)((longlong)puStack_360 + 0x20);
          puStack_360 = puVar20;
        }
        plVar25 = (longlong *)plVar14[2];
        if (*(char *)((longlong)plVar25 + 0x19) == '\0') {
          cVar11 = *(char *)(*plVar25 + 0x19);
          plVar14 = plVar25;
          plVar25 = (longlong *)*plVar25;
          while (cVar11 == '\0') {
            cVar11 = *(char *)(*plVar25 + 0x19);
            plVar14 = plVar25;
            plVar25 = (longlong *)*plVar25;
          }
        }
        else {
          cVar11 = *(char *)(plVar14[1] + 0x19);
          plVar32 = (longlong *)plVar14[1];
          plVar25 = plVar14;
          while ((plVar14 = plVar32, cVar11 == '\0' && (plVar25 == (longlong *)plVar14[2]))) {
            cVar11 = *(char *)(plVar14[1] + 0x19);
            plVar32 = (longlong *)plVar14[1];
            plVar25 = plVar14;
          }
        }
      } while (*(char *)((longlong)plVar14 + 0x19) == '\0');
    }
  }
  local_1f8 = (undefined1  [16])0x0;
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_3a8._8_8_ = 0x15;
    local_3a8._0_8_ = "tier0.dll:g_pMemAlloc";
    DAT_180c7df28 = (undefined8 *)FUN_180451750(local_3a8);
  }
  lVar15 = (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x48);
  *(longlong *)lVar15 = lVar15;
  *(longlong *)(lVar15 + 8) = lVar15;
  *(longlong *)(lVar15 + 0x10) = lVar15;
  *(undefined2 *)(lVar15 + 0x18) = 0x101;
  local_1f8._0_8_ = lVar15;
  local_128 = (longlong ***)0x0;
  puVar20 = puStack_360;
  if (local_368 != (undefined1  [8])puStack_360) {
    fVar53 = 31.0;
    fVar56 = 34.0;
    auVar42 = local_368;
    do {
      plVar14 = (longlong *)FUN_18055e490(&local_318,auVar42);
      lVar15 = *plVar14;
      lVar5 = plVar14[1];
      plVar14 = (longlong *)FUN_18055e290(local_328,auVar42);
      fVar50 = (float)((plVar14[1] - *plVar14 >> 3) + (ulonglong)(lVar15 != lVar5)) * fVar53 +
               fVar56;
      if (local_res10[0] == 0) {
        plVar14 = (longlong *)auVar42;
        if (0xf < *(ulonglong *)((longlong)auVar42 + 0x18)) {
          plVar14 = *(longlong **)auVar42;
        }
        if (*(longlong *)((longlong)auVar42 + 0x10) == 6) {
          iVar12 = (int)*plVar14 + -0x696d6941;
          if (iVar12 == 0) {
            iVar12 = *(ushort *)((longlong)plVar14 + 4) - 0x676e;
          }
          uVar37 = iVar12 == 0 ^ 1;
        }
        else {
          uVar37 = 1;
        }
      }
      else if (local_res10[0] == 9) {
        plVar14 = (longlong *)auVar42;
        if (0xf < *(ulonglong *)((longlong)auVar42 + 0x18)) {
          plVar14 = *(longlong **)auVar42;
        }
        if (((*(longlong *)((longlong)auVar42 + 0x10) != 6) || ((int)*plVar14 != 0x656d6143)) ||
           (*(short *)((longlong)plVar14 + 4) != 0x6172)) {
          plVar14 = (longlong *)auVar42;
          if (0xf < *(ulonglong *)((longlong)auVar42 + 0x18)) {
            plVar14 = *(longlong **)auVar42;
          }
          if ((*(longlong *)((longlong)auVar42 + 0x10) != 8) || (*plVar14 != 0x73656c6369746552)) {
            uVar37 = 1;
            goto LAB_18051d6fb;
          }
        }
        uVar37 = 0;
      }
      else {
        uVar37 = (uint)(local_128._4_4_ < (float)local_128);
      }
LAB_18051d6fb:
      puVar27 = (uint *)FUN_18055e090(local_1f8,auVar42);
      *puVar27 = uVar37;
      *(float *)(local_148 + (ulonglong)uVar37 * 4 + 0x20) =
           fVar50 + *(float *)(local_148 + (ulonglong)uVar37 * 4 + 0x20);
      auVar42 = (undefined1  [8])((longlong)auVar42 + 0x20);
    } while (auVar42 != (undefined1  [8])puVar20);
  }
  bVar48 = false;
  bVar9 = false;
  bVar8 = false;
  bVar47 = false;
  local_16b0 = 0;
  auVar68 = ZEXT464(0x436e0000);
  auVar66 = ZEXT464(0x40e00000);
  auVar55 = ZEXT864(0);
  auVar58 = ZEXT464(0x41f6d82c);
  auVar60 = ZEXT464(0x3f19999a);
  auVar62 = ZEXT464(0x41a80000);
  auVar64 = ZEXT464(0x3f800000);
  do {
    lVar5 = DAT_180bb8ae8;
    fVar51 = 420.0;
    auVar54 = vpcmpeqd_avx(ZEXT416(local_16b0),ZEXT416(0));
    auVar54 = vblendvps_avx(SUB6416(ZEXT464(0x43c30000),0),SUB6416(ZEXT464(0x43110000),0),auVar54);
    fVar50 = auVar54._0_4_ * DAT_180b0a41c;
    fVar53 = *local_15d8;
    fVar6 = DAT_180b0a41c * 48.0;
    fVar56 = local_15d8[1];
    *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
    lVar15 = *(longlong *)(lVar5 + 0x14d0);
    *(float *)(lVar15 + 0x118) = fVar50 + fVar53;
    *(float *)(lVar15 + 0x11c) = fVar6 + fVar56;
    *(undefined1 *)(lVar15 + 0x159) = 1;
    lVar15 = *(longlong *)(lVar5 + 0x14d0);
    uVar13 = FUN_1804c2670(lVar15,local_16b0);
    piVar29 = (int *)(lVar15 + 0x108);
    iVar12 = *(int *)(lVar15 + 0x10c);
    if (*piVar29 == iVar12) {
      iVar30 = *piVar29 + 1;
      if (iVar12 == 0) {
        iVar12 = 8;
      }
      else {
        iVar12 = iVar12 / 2 + iVar12;
      }
      if (iVar30 < iVar12) {
        iVar30 = iVar12;
      }
      FUN_1804d14d0(piVar29,iVar30);
    }
    *(undefined4 *)(*(longlong *)(lVar15 + 0x110) + (longlong)*piVar29 * 4) = uVar13;
    *piVar29 = *piVar29 + 1;
    lVar15 = DAT_180bb8ae8;
    local_16a0 = (longlong ***)CONCAT44(fVar51 * DAT_180b0a41c,auVar68._0_4_ * DAT_180b0a41c);
    *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
    plVar14 = *(longlong **)(lVar15 + 0x14d0);
    uVar34 = ~*(uint *)(plVar14[0x22] + -4 + (longlong)(int)plVar14[0x21] * 4);
    pcVar35 = "##settings_column";
    cVar11 = '#';
    uVar37 = uVar34;
    do {
      pcVar35 = pcVar35 + 1;
      if (((cVar11 == '#') && (*pcVar35 == '#')) && (pcVar35[1] == '#')) {
        pcVar35 = pcVar35 + 2;
        uVar37 = uVar34;
      }
      else {
        uVar37 = crc32(uVar37,cVar11);
      }
      cVar11 = *pcVar35;
    } while (cVar11 != '\0');
    uVar37 = ~uVar37;
    if (*(uint *)(*plVar14 + 0x1534) == uVar37) {
      FUN_1804cf810(uVar37,0xb,"##settings_column");
    }
    FUN_1804bb960("##settings_column",uVar37);
    local_1688._0_8_ = *(undefined8 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x118);
    auVar52 = ZEXT1664(auVar66._0_16_);
    fVar53 = auVar66._0_4_;
    local_1658[0] = (longlong ***)local_368;
    local_128 = (longlong ***)puStack_360;
    auVar42 = local_368;
    if (local_368 != (undefined1  [8])puStack_360) {
      do {
        local_1658[0] = (longlong ***)auVar42;
        plVar14 = (longlong *)FUN_18055e290(local_328,auVar42);
        puVar27 = (uint *)FUN_18055e090(local_1f8,auVar42);
        if (*puVar27 == local_16b0) {
          if (auVar42 != (undefined1  [8])&DAT_1808e6650) {
            ppplVar28 = (longlong ***)auVar42;
            if ((longlong **)0xf < *(longlong ***)((longlong)auVar42 + 0x18)) {
              ppplVar28 = *(longlong ****)auVar42;
            }
            FUN_180113930(&DAT_1808e6650,ppplVar28,*(longlong ***)((longlong)auVar42 + 0x10));
          }
          if (local_res10[0] == 0xd) {
            if (DAT_180c62f68 == 0) {
              pcVar35 = "Item Labels";
            }
            else {
              pcVar35 = "Item Materials";
              if (DAT_180c62f68 == 1) {
                pcVar35 = "Item Glow";
              }
            }
            local_1550 = (undefined1  [16])0x0;
            auStack_1540 = (undefined1  [16])0x0;
            lVar15 = -1;
            do {
              lVar15 = lVar15 + 1;
            } while (pcVar35[lVar15] != '\0');
            FUN_18015ba30(local_1550);
            auVar67 = auVar68._0_16_;
            auVar65 = auVar66._0_16_;
            auVar63 = auVar64._0_16_;
            auVar61 = auVar62._0_16_;
            auVar59 = auVar60._0_16_;
            auVar57 = auVar58._0_16_;
            auVar54 = auVar55._0_16_;
            puVar20 = (undefined8 *)local_1550;
            bVar8 = true;
          }
          else {
            pbVar17 = (byte *)FUN_18015b360(local_1468,auVar42);
            auVar67 = auVar68._0_16_;
            auVar65 = auVar66._0_16_;
            auVar63 = auVar64._0_16_;
            auVar61 = auVar62._0_16_;
            auVar59 = auVar60._0_16_;
            auVar57 = auVar58._0_16_;
            auVar54 = auVar55._0_16_;
            bVar47 = true;
            if (*(ulonglong *)(pbVar17 + 0x18) < 0x10) {
              pbVar38 = pbVar17;
            }
            else {
              pbVar38 = *(byte **)pbVar17;
            }
            pbVar43 = pbVar38 + *(longlong *)(pbVar17 + 0x10);
            for (; pbVar38 != pbVar43; pbVar38 = pbVar38 + 1) {
              bVar1 = *pbVar38;
              uVar37 = (uint)bVar1;
              if ((bVar1 == 0x5f) || (bVar1 == 0x2d)) {
                *pbVar38 = 0x20;
                uVar37 = 0x20;
              }
              if (bVar47) {
                uVar37 = toupper(uVar37);
                *pbVar38 = (byte)uVar37;
              }
              auVar67 = auVar68._0_16_;
              auVar65 = auVar66._0_16_;
              auVar63 = auVar64._0_16_;
              auVar61 = auVar62._0_16_;
              auVar59 = auVar60._0_16_;
              auVar57 = auVar58._0_16_;
              auVar54 = auVar55._0_16_;
              bVar47 = (char)uVar37 == ' ';
            }
            local_1590 = *(undefined8 *)pbVar17;
            uStack_1588 = *(undefined8 *)(pbVar17 + 8);
            uStack_1580 = *(undefined8 *)(pbVar17 + 0x10);
            uStack_1578 = *(undefined8 *)(pbVar17 + 0x18);
            *pbVar17 = 0;
            pbVar17[0x10] = 0;
            pbVar17[0x11] = 0;
            pbVar17[0x12] = 0;
            pbVar17[0x13] = 0;
            pbVar17[0x14] = 0;
            pbVar17[0x15] = 0;
            pbVar17[0x16] = 0;
            pbVar17[0x17] = 0;
            pbVar17[0x18] = 0xf;
            pbVar17[0x19] = 0;
            pbVar17[0x1a] = 0;
            pbVar17[0x1b] = 0;
            pbVar17[0x1c] = 0;
            pbVar17[0x1d] = 0;
            pbVar17[0x1e] = 0;
            pbVar17[0x1f] = 0;
            auVar55 = ZEXT1664(auVar54);
            auVar58 = ZEXT1664(auVar57);
            auVar60 = ZEXT1664(auVar59);
            auVar62 = ZEXT1664(auVar61);
            auVar64 = ZEXT1664(auVar63);
            auVar66 = ZEXT1664(auVar65);
            auVar68 = ZEXT1664(auVar67);
            FUN_18015c010(pbVar17);
            auVar67 = auVar68._0_16_;
            auVar65 = auVar66._0_16_;
            auVar63 = auVar64._0_16_;
            auVar61 = auVar62._0_16_;
            auVar59 = auVar60._0_16_;
            auVar57 = auVar58._0_16_;
            auVar54 = auVar55._0_16_;
            puVar20 = &local_1590;
            bVar47 = true;
          }
          local_1a8 = *puVar20;
          uStack_1a0 = puVar20[1];
          uStack_198 = puVar20[2];
          uStack_190 = puVar20[3];
          *(undefined1 *)puVar20 = 0;
          puVar20[2] = 0;
          puVar20[3] = 0xf;
          if (bVar47) {
            bVar47 = false;
            auVar55 = ZEXT1664(auVar54);
            auVar58 = ZEXT1664(auVar57);
            auVar60 = ZEXT1664(auVar59);
            auVar62 = ZEXT1664(auVar61);
            auVar64 = ZEXT1664(auVar63);
            auVar66 = ZEXT1664(auVar65);
            auVar68 = ZEXT1664(auVar67);
            FUN_18015c010(&local_1590);
            auVar67 = auVar68._0_16_;
            auVar65 = auVar66._0_16_;
            auVar63 = auVar64._0_16_;
            auVar61 = auVar62._0_16_;
            auVar59 = auVar60._0_16_;
            auVar57 = auVar58._0_16_;
            auVar54 = auVar55._0_16_;
          }
          if (bVar8) {
            bVar8 = false;
            auVar55 = ZEXT1664(auVar54);
            auVar58 = ZEXT1664(auVar57);
            auVar60 = ZEXT1664(auVar59);
            auVar62 = ZEXT1664(auVar61);
            auVar64 = ZEXT1664(auVar63);
            auVar66 = ZEXT1664(auVar65);
            auVar68 = ZEXT1664(auVar67);
            FUN_18015c010(local_1550);
            auVar67 = auVar68._0_16_;
            auVar65 = auVar66._0_16_;
            auVar63 = auVar64._0_16_;
            auVar61 = auVar62._0_16_;
            auVar59 = auVar60._0_16_;
            auVar57 = auVar58._0_16_;
            auVar54 = auVar55._0_16_;
          }
          auVar55 = ZEXT1664(auVar54);
          auVar58 = ZEXT1664(auVar57);
          auVar60 = ZEXT1664(auVar59);
          auVar62 = ZEXT1664(auVar61);
          auVar64 = ZEXT1664(auVar63);
          auVar66 = ZEXT1664(auVar65);
          auVar68 = ZEXT1664(auVar67);
          ppplVar28 = (longlong ***)FUN_18055e490(&local_318,auVar42);
          local_1608 = 0;
          uStack_1600 = 0;
          uStack_15f8 = 0;
          uStack_15f0 = 0;
          local_15e8 = (undefined1  [16])0x0;
          auVar55 = ZEXT1664(auVar55._0_16_);
          auVar58 = ZEXT1664(auVar58._0_16_);
          auVar60 = ZEXT1664(auVar60._0_16_);
          auVar62 = ZEXT1664(auVar62._0_16_);
          auVar64 = ZEXT1664(auVar64._0_16_);
          auVar66 = ZEXT1664(auVar66._0_16_);
          auVar68 = ZEXT1664(auVar68._0_16_);
          local_1660 = ppplVar28;
          uVar24 = FUN_180485630(&local_1608,local_1688);
          puVar20 = (undefined8 *)*plVar14;
          puVar4 = (undefined8 *)plVar14[1];
          if (puVar20 != puVar4) {
            do {
              local_13c0 = (longlong *)*puVar20;
              lVar15 = *local_13c0;
              piVar29 = (int *)(lVar15 + 0x38);
              piVar33 = piVar29;
              if (0xf < *(ulonglong *)(lVar15 + 0x50)) {
                piVar33 = *(int **)piVar29;
              }
              if ((((*(longlong *)(lVar15 + 0x48) == 7) && (*piVar33 == 0x2078616d)) &&
                  ((short)piVar33[1] == 0x6f66)) && (*(char *)((longlong)piVar33 + 6) == 'v')) {
LAB_18051dc2d:
                local_1570 = (undefined1  [16])0x0;
                auStack_1560 = (undefined1  [16])0x0;
                FUN_18015ba30(local_1570,&DAT_180867750,3);
                auVar67 = auVar68._0_16_;
                auVar65 = auVar66._0_16_;
                auVar63 = auVar64._0_16_;
                auVar61 = auVar62._0_16_;
                auVar59 = auVar60._0_16_;
                auVar57 = auVar58._0_16_;
                auVar54 = auVar55._0_16_;
                plVar14 = (longlong *)local_1570;
                bVar9 = true;
              }
              else {
                if (0xf < *(ulonglong *)(lVar15 + 0x50)) {
                  piVar29 = *(int **)piVar29;
                }
                if (((*(longlong *)(lVar15 + 0x48) == 3) && ((short)*piVar29 == 0x6f66)) &&
                   (*(char *)((longlong)piVar29 + 2) == 'v')) goto LAB_18051dc2d;
                pbVar17 = (byte *)FUN_18015b360(local_1488,lVar15 + 0x38);
                auVar67 = auVar68._0_16_;
                auVar65 = auVar66._0_16_;
                auVar63 = auVar64._0_16_;
                auVar61 = auVar62._0_16_;
                auVar59 = auVar60._0_16_;
                auVar57 = auVar58._0_16_;
                auVar54 = auVar55._0_16_;
                bVar48 = true;
                if (*(ulonglong *)(pbVar17 + 0x18) < 0x10) {
                  pbVar38 = pbVar17;
                }
                else {
                  pbVar38 = *(byte **)pbVar17;
                }
                pbVar43 = pbVar38 + *(longlong *)(pbVar17 + 0x10);
                for (; pbVar38 != pbVar43; pbVar38 = pbVar38 + 1) {
                  bVar1 = *pbVar38;
                  uVar37 = (uint)bVar1;
                  if ((bVar1 == 0x5f) || (bVar1 == 0x2d)) {
                    *pbVar38 = 0x20;
                    uVar37 = 0x20;
                  }
                  if (bVar48) {
                    uVar37 = toupper(uVar37);
                    *pbVar38 = (byte)uVar37;
                  }
                  auVar67 = auVar68._0_16_;
                  auVar65 = auVar66._0_16_;
                  auVar63 = auVar64._0_16_;
                  auVar61 = auVar62._0_16_;
                  auVar59 = auVar60._0_16_;
                  auVar57 = auVar58._0_16_;
                  auVar54 = auVar55._0_16_;
                  bVar48 = (char)uVar37 == ' ';
                }
                local_15b0 = *(longlong *)pbVar17;
                uStack_15a8 = *(undefined8 *)(pbVar17 + 8);
                uStack_15a0 = *(undefined8 *)(pbVar17 + 0x10);
                uStack_1598 = *(undefined8 *)(pbVar17 + 0x18);
                *pbVar17 = 0;
                pbVar17[0x10] = 0;
                pbVar17[0x11] = 0;
                pbVar17[0x12] = 0;
                pbVar17[0x13] = 0;
                pbVar17[0x14] = 0;
                pbVar17[0x15] = 0;
                pbVar17[0x16] = 0;
                pbVar17[0x17] = 0;
                pbVar17[0x18] = 0xf;
                pbVar17[0x19] = 0;
                pbVar17[0x1a] = 0;
                pbVar17[0x1b] = 0;
                pbVar17[0x1c] = 0;
                pbVar17[0x1d] = 0;
                pbVar17[0x1e] = 0;
                pbVar17[0x1f] = 0;
                auVar55 = ZEXT1664(auVar54);
                auVar58 = ZEXT1664(auVar57);
                auVar60 = ZEXT1664(auVar59);
                auVar62 = ZEXT1664(auVar61);
                auVar64 = ZEXT1664(auVar63);
                auVar66 = ZEXT1664(auVar65);
                auVar68 = ZEXT1664(auVar67);
                FUN_18015c010(pbVar17);
                auVar67 = auVar68._0_16_;
                auVar65 = auVar66._0_16_;
                auVar63 = auVar64._0_16_;
                auVar61 = auVar62._0_16_;
                auVar59 = auVar60._0_16_;
                auVar57 = auVar58._0_16_;
                auVar54 = auVar55._0_16_;
                plVar14 = &local_15b0;
                bVar48 = true;
              }
              local_2a8 = (undefined8 *****)*plVar14;
              auStack_2a0 = *(undefined1 (*) [16])(plVar14 + 1);
              uStack_290 = plVar14[3];
              *(undefined1 *)plVar14 = 0;
              plVar14[2] = 0;
              plVar14[3] = 0xf;
              if (bVar9) {
                bVar9 = false;
                auVar55 = ZEXT1664(auVar54);
                auVar58 = ZEXT1664(auVar57);
                auVar60 = ZEXT1664(auVar59);
                auVar62 = ZEXT1664(auVar61);
                auVar64 = ZEXT1664(auVar63);
                auVar66 = ZEXT1664(auVar65);
                auVar68 = ZEXT1664(auVar67);
                FUN_18015c010(local_1570);
                auVar67 = auVar68._0_16_;
                auVar65 = auVar66._0_16_;
                auVar63 = auVar64._0_16_;
                auVar61 = auVar62._0_16_;
                auVar59 = auVar60._0_16_;
                auVar57 = auVar58._0_16_;
                auVar54 = auVar55._0_16_;
              }
              if (bVar48) {
                bVar48 = false;
                auVar55 = ZEXT1664(auVar54);
                auVar58 = ZEXT1664(auVar57);
                auVar60 = ZEXT1664(auVar59);
                auVar62 = ZEXT1664(auVar61);
                auVar64 = ZEXT1664(auVar63);
                auVar66 = ZEXT1664(auVar65);
                auVar68 = ZEXT1664(auVar67);
                FUN_18015c010(&local_15b0);
                auVar67 = auVar68._0_16_;
                auVar65 = auVar66._0_16_;
                auVar63 = auVar64._0_16_;
                auVar61 = auVar62._0_16_;
                auVar59 = auVar60._0_16_;
                auVar57 = auVar58._0_16_;
                auVar54 = auVar55._0_16_;
              }
              lVar15 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
              auVar55 = ZEXT1664(auVar54);
              auVar58 = ZEXT1664(auVar57);
              auVar60 = ZEXT1664(auVar59);
              auVar62 = ZEXT1664(auVar61);
              auVar64 = ZEXT1664(auVar63);
              auVar66 = ZEXT1664(auVar65);
              auVar68 = ZEXT1664(auVar67);
              uVar13 = FUN_1804c25c0(lVar15,*(undefined8 *)(*local_13c0 + 8));
              piVar29 = (int *)(lVar15 + 0x108);
              iVar12 = *(int *)(lVar15 + 0x10c);
              if (*piVar29 == iVar12) {
                iVar30 = *piVar29 + 1;
                if (iVar12 == 0) {
                  iVar12 = 8;
                }
                else {
                  iVar12 = iVar12 / 2 + iVar12;
                }
                if (iVar30 < iVar12) {
                  iVar30 = iVar12;
                }
                FUN_1804d14d0(piVar29,iVar30);
              }
              *(undefined4 *)(*(longlong *)(lVar15 + 0x110) + (longlong)*piVar29 * 4) = uVar13;
              *piVar29 = *piVar29 + 1;
              local_2d0 = &local_13c0;
              if (*(char *)(*local_13c0 + 4) == '\0') {
                pcVar35 = *(char **)(*local_13c0 + 8);
                cVar11 = *pcVar35;
                local_3a8._8_8_ = &local_13c0;
                local_3a8._0_8_ = pcVar35;
                local_398 = &local_2d0;
                pppppuVar22 = &local_2a8;
                if (0xf < uStack_290) {
                  pppppuVar22 = local_2a8;
                }
                FUN_18054ff50(&local_1608,pppppuVar22);
                if (cVar11 != *pcVar35) {
                  pcVar35[0x10] = *pcVar35;
                  FUN_18050cd00();
                }
              }
              else {
                local_3a8._8_8_ = &local_2d0;
                local_3a8._0_8_ = &local_13c0;
                local_398 = (longlong ***)local_res10;
                pppppuVar22 = &local_2a8;
                if (0xf < uStack_290) {
                  pppppuVar22 = local_2a8;
                }
                if (DAT_180bbecdb == '\0') {
                  FUN_1804c2800(pppppuVar22);
                  cVar11 = FUN_180486160(&local_1608,pppppuVar22);
                  if (DAT_180bbecdb == '\0') {
                    if (cVar11 != '\0') {
                      FUN_180488320("##settings");
                    }
                    cVar11 = FUN_180488630("##settings",pppppuVar22,auVar55._0_8_);
                    if (cVar11 != '\0') {
                      FUN_18051f6f0(local_3a8);
                      FUN_1804aeac0();
                    }
                  }
                  else {
                    FUN_180493f00(pppppuVar22);
                    FUN_18051f6f0(local_3a8);
                    if (DAT_180c62d18 != DAT_180c62d20) {
                      FUN_18015c010(DAT_180c62d20 + -0x20);
                      DAT_180c62d20 = DAT_180c62d20 + -0x20;
                    }
                    DAT_1808e4e38 = 0xffffffff;
                  }
                  iVar12 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
                  if (iVar12 < 2) {
                    FUN_1804c5a40("Calling PopID() too many times!");
                  }
                  else {
                    *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar12 + -1;
                  }
                }
                else {
                  FUN_180493f00();
                  FUN_18051f6f0(local_3a8);
                  if (DAT_180c62d18 != DAT_180c62d20) {
                    FUN_18015c010(DAT_180c62d20 + -0x20);
                    DAT_180c62d20 = DAT_180c62d20 + -0x20;
                  }
                  DAT_1808e4e38 = 0xffffffff;
                }
              }
              iVar12 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
              if (iVar12 < 2) {
                FUN_1804c5a40("Calling PopID() too many times!");
              }
              else {
                *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar12 + -1;
              }
              uVar24 = FUN_18015c010(&local_2a8);
              puVar20 = puVar20 + 1;
            } while (puVar20 != puVar4);
            ppplVar28 = local_1660;
            auVar42 = (undefined1  [8])local_1658[0];
          }
          if (*ppplVar28 != ppplVar28[1]) {
            local_1658[0] = ppplVar28;
            if (DAT_180bbecdb == '\0') {
              FUN_1804c2800("Configuration");
              cVar11 = FUN_180486160(&local_1608,"Configuration");
              if (DAT_180bbecdb == '\0') {
                if (cVar11 != '\0') {
                  FUN_180488320("##settings");
                }
                cVar11 = FUN_180488630("##settings","Configuration",auVar55._0_8_);
                if (cVar11 != '\0') {
                  pplVar2 = ppplVar28[1];
                  for (pplVar36 = *ppplVar28; pplVar36 != pplVar2; pplVar36 = pplVar36 + 1) {
                    FUN_1805117c0(*pplVar36);
                  }
                  FUN_1804aeac0();
                }
              }
              else {
                FUN_180562660(extraout_XMM0_Qa_11,local_1658);
              }
              iVar12 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
              if (iVar12 < 2) {
                FUN_1804c5a40("Calling PopID() too many times!");
              }
              else {
                *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar12 + -1;
              }
            }
            else {
              FUN_180562660(uVar24,local_1658);
            }
          }
          auVar52 = ZEXT464((uint)((float)(int)local_15e8._8_4_ * auVar58._0_4_ + auVar60._0_4_ +
                                   uStack_15f8._4_4_ + auVar62._0_4_));
          if (DAT_180bbecdb != '\0') {
            if (DAT_180c62d18 != DAT_180c62d20) {
              FUN_18015c010(DAT_180c62d20 + -0x20);
              DAT_180c62d20 = DAT_180c62d20 + -0x20;
            }
            DAT_1808e4e38 = 0xffffffff;
          }
          iVar12 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
          if (iVar12 < 2) {
            FUN_1804c5a40("Calling PopID() too many times!");
          }
          else {
            *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar12 + -1;
          }
          FUN_18015c010(&local_1a8);
        }
        fVar53 = auVar52._0_4_;
        local_1658[0] = (longlong ***)((longlong)auVar42 + 0x20);
        auVar42 = (undefined1  [8])local_1658[0];
      } while (local_1658[0] != local_128);
    }
    lVar15 = DAT_180bb8ae8;
    *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
    lVar15 = *(longlong *)(lVar15 + 0x14d0);
    *(float *)(lVar15 + 0x11c) =
         (*(float *)(lVar15 + 0x2c) - *(float *)(lVar15 + 0x9c)) + fVar53 * DAT_180b0a41c;
    *(undefined1 *)(lVar15 + 0x159) = 1;
    local_1668 = (longlong *)CONCAT44(auVar64._0_4_,auVar64._0_4_);
    FUN_1804f6ea0(&local_1668);
    FUN_1804bbd00();
    iVar12 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
    if (iVar12 < 2) {
      FUN_1804c5a40("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar12 + -1;
    }
    local_16b0 = local_16b0 + 1;
    if (1 < (int)local_16b0) {
      FUN_18055e020(local_1f8);
      FUN_180111b90(local_368);
      FUN_180111b90(local_288);
      FUN_18055e200(local_328);
      FUN_18055e400();
      if (local_308._0_8_ != 0) {
        uVar24 = local_308._8_8_;
        lVar15 = local_308._0_8_;
        if (local_308._0_8_ != local_308._8_8_) {
          do {
            FUN_1800f0160();
            lVar15 = lVar15 + 0x20;
          } while (lVar15 != uVar24);
        }
        lVar15 = local_308._0_8_;
        if ((0xfff < (local_2f8 - local_308._0_8_ & 0xffffffffffffffe0U)) &&
           (lVar15 = *(longlong *)(local_308._0_8_ + -8), 0x1f < (local_308._0_8_ - lVar15) - 8U)) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        FUN_1804547d0(lVar15);
        local_308 = (undefined1  [16])0x0;
        local_2f8 = 0;
      }
      FUN_1800f0060(local_1b8);
      FUN_18018f670(local_1c8);
      if (local_230._0_8_ != 0) {
        if ((0xfff < (local_220 - local_230._0_8_ & 0xfffffffffffffff8U)) &&
           (0x1f < (local_230._0_8_ - *(longlong *)(local_230._0_8_ + -8)) - 8U)) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        FUN_1804547d0();
      }
    }
  } while( true );
}



