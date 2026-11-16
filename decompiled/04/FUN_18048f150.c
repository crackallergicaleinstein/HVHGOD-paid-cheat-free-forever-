// FUN_18048f150 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18048f150 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Type propagation algorithm not settling */

void FUN_18048f150(longlong *param_1,undefined4 param_2,char *param_3,undefined8 param_4)

{
  undefined2 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  bool bVar6;
  char cVar7;
  char cVar8;
  undefined4 uVar9;
  int iVar10;
  longlong lVar11;
  byte *pbVar12;
  undefined2 *puVar13;
  longlong lVar14;
  longlong *plVar15;
  uint *puVar16;
  undefined8 *puVar17;
  char *pcVar18;
  char cVar19;
  int iVar20;
  int iVar21;
  ulonglong uVar22;
  undefined1 auVar23 [8];
  uint uVar24;
  uint uVar25;
  char *pcVar26;
  undefined1 auVar27 [8];
  uint uVar28;
  uint uVar29;
  float *pfVar30;
  undefined8 *puVar31;
  undefined8 *puVar32;
  undefined8 *puVar33;
  longlong lVar34;
  longlong lVar35;
  longlong *plVar36;
  int *piVar37;
  uint uVar38;
  ulonglong uVar39;
  undefined8 *puVar40;
  byte bVar41;
  char *pcVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined8 uVar47;
  undefined1 auVar48 [16];
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  undefined1 extraout_var_01 [56];
  undefined1 extraout_var_02 [56];
  float fVar49;
  float fVar50;
  undefined1 auVar51 [64];
  undefined1 auVar52 [64];
  float fVar53;
  undefined1 auVar54 [64];
  undefined1 auVar55 [64];
  undefined1 auVar56 [64];
  undefined1 auVar57 [64];
  float fVar58;
  float fVar59;
  undefined1 auVar60 [16];
  undefined1 auVar61 [64];
  float fVar62;
  undefined1 auStack_1348 [32];
  undefined8 local_1328;
  longlong *local_1320;
  char *local_1318;
  undefined8 local_1310;
  ulonglong local_1308;
  undefined4 local_1300;
  undefined4 local_12f8;
  char local_12e8;
  float local_12e0;
  float local_12dc;
  byte local_12d8;
  uint local_12d4;
  float local_12d0;
  undefined8 local_12c8;
  undefined8 uStack_12c0;
  undefined8 *local_12b8;
  char local_12b0;
  float local_12ac;
  float local_12a8;
  float local_12a4;
  float local_12a0;
  float local_129c;
  float local_1298;
  uint local_1294;
  uint local_1290;
  float local_128c;
  float local_1288;
  float local_1284;
  float local_1280;
  float local_127c;
  uint local_1278;
  float local_1274;
  float local_1270;
  float local_126c;
  float local_1268;
  float local_1264;
  uint local_1260;
  uint local_125c;
  float local_1258;
  float local_1254;
  undefined8 local_1250;
  undefined1 local_1248 [8];
  int *local_1240;
  float local_1238;
  float local_1234;
  float local_1230;
  float local_122c;
  float local_1228;
  float local_1224;
  float local_1220;
  float local_121c;
  float local_1218;
  float local_1214;
  float local_1210;
  float local_120c;
  undefined4 local_1208;
  float local_1204;
  undefined4 local_1200;
  float local_11fc;
  float local_11f8;
  float local_11f4;
  float local_11f0;
  float local_11ec;
  float local_11e8;
  undefined1 local_11e0 [16];
  undefined1 local_11d0 [16];
  undefined1 local_11c0 [8];
  longlong local_11b8;
  undefined8 local_11b0;
  undefined8 uStack_11a8;
  undefined8 uStack_11a0;
  undefined8 uStack_1198;
  undefined *local_1190 [4];
  float local_1170;
  float local_116c;
  float local_1168;
  float local_1164;
  float local_1160;
  float local_115c;
  float local_1158;
  float local_1154;
  undefined8 local_1148;
  undefined8 *local_1140;
  undefined8 local_138;
  undefined8 local_130;
  undefined1 local_128 [8];
  float *pfStack_120;
  float *local_118;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  longlong *local_f8;
  undefined8 *local_f0;
  ulonglong local_e8;
  
  local_e8 = DAT_1808d5f00 ^ (ulonglong)auStack_1348;
  puVar33 = (undefined8 *)0x0;
  auVar48._12_4_ = 0;
  auVar48._0_12_ = ZEXT812(0);
  auVar61 = ZEXT1264(ZEXT812(0)) << 0x20;
  local_12c8 = param_3;
  local_1288 = (float)param_2;
  local_f8 = param_1;
  if (param_1[0x33] != 0) {
    auVar48 = vmaxss_avx(auVar48 << 0x20,
                         ZEXT416((uint)(*(float *)(param_1 + 0x34) -
                                       *(float *)(DAT_180bb8ae8 + 0x40) * 7.0)));
    *(float *)(param_1 + 0x34) = auVar48._0_4_;
    if (auVar48._0_4_ <= 0.0) {
      uVar39 = 0;
      plVar15 = (longlong *)*param_1;
      uVar22 = param_1[1] - (longlong)plVar15 >> 3;
      if (uVar22 != 0) {
        do {
          if (*plVar15 == param_1[0x33]) {
            if (((1 < uVar22) && (iVar20 = (int)uVar39, -1 < iVar20)) && (iVar20 < (int)uVar22)) {
              if (((iVar20 == (int)param_1[3]) && (DAT_180c62c58 != (longlong *)0x0)) &&
                 ((DAT_180c62c70 != 0 && (DAT_180c62c58[1] != *DAT_180c62c58)))) {
                pcVar26 = (char *)(DAT_180c62c58[1] + -10);
                plVar15 = DAT_180c62c58;
                do {
                  if (*pcVar26 != '\0') {
                    FUN_18045c1c0(pcVar26 + -0x5e,*(undefined4 *)(pcVar26 + 2));
                    *pcVar26 = '\0';
                  }
                  pcVar42 = pcVar26 + -0x5e;
                  pcVar26 = pcVar26 + -0x68;
                } while (pcVar42 != (char *)*plVar15);
              }
              lVar14 = *param_1 + (longlong)iVar20 * 8;
              lVar34 = param_1[1];
              lVar11 = lVar14;
              while (lVar11 = lVar11 + 8, lVar11 != lVar34) {
                FUN_180492c20(lVar14,lVar11);
                lVar14 = lVar14 + 8;
              }
              FUN_1804842c0(param_1[1] + -8);
              lVar14 = param_1[1];
              param_1[1] = lVar14 + -8;
              iVar21 = (int)param_1[3];
              if ((iVar20 < iVar21) || ((int)((lVar14 + -8) - *param_1 >> 3) <= iVar21)) {
                iVar21 = iVar21 + -1;
                if (iVar21 < 1) {
                  iVar21 = 0;
                }
                *(int *)(param_1 + 3) = iVar21;
              }
              lVar14 = *(longlong *)(*param_1 + (longlong)iVar21 * 8);
              DAT_180c62c58 = (longlong *)(lVar14 + 0xd3d8);
              DAT_180c62c70 = lVar14 + 0x28;
              DAT_180c62c60 = lVar14 + 0x6a00;
              if (DAT_180c62c58 == (longlong *)0x0) {
                DAT_1808e4e34 = 0xffffffff;
              }
              *(undefined4 *)((longlong)param_1 + 0x144) = 0xffffffff;
              *(undefined1 *)((longlong)param_1 + 0x214) = 1;
            }
            break;
          }
          uVar39 = uVar39 + 1;
          plVar15 = plVar15 + 1;
        } while (uVar39 < uVar22);
      }
      param_1[0x33] = 0;
    }
  }
  cVar7 = FUN_1804a8ab0(local_1288,local_12c8,param_4,DAT_180b0a41c * 262.0);
  lVar14 = DAT_180bb8ae8;
  if (cVar7 == '\0') {
  }
  local_11b8 = DAT_180bb8ae8;
  *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
  lVar34 = *(longlong *)(lVar14 + 0x14d0);
  puVar31 = *(undefined8 **)(lVar34 + 0x2c8);
  fVar46 = *(float *)(lVar34 + 0x118);
  fVar58 = *(float *)(lVar34 + 0x11c);
  if ((*(longlong *)(lVar34 + 0x1c8) != 0) ||
     (pfVar30 = (float *)(lVar34 + 0x280), *(longlong *)(lVar14 + 0x2338) != 0)) {
    pfVar30 = (float *)(lVar34 + 0x250);
  }
  fVar44 = *pfVar30 - fVar46;
  local_12e8 = *(char *)(lVar34 + 0xd3);
  local_1240 = *(int **)(lVar34 + 0x1c0);
  if (local_12e8 != '\0') {
    *(undefined1 *)((longlong)param_1 + 0xfd) = 0;
    *(undefined4 *)((longlong)param_1 + 0x18c) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x144) = 0xffffffff;
  }
  fVar50 = 24.0;
  fVar62 = 0.5;
  auVar48 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 24.0 + 0.5)),1);
  auVar52 = ZEXT1664(auVar48);
  fVar59 = auVar48._0_4_ * 0.5 + fVar58;
  auVar54 = ZEXT464(0x4159999a);
  auVar48 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 13.6 + 0.5)),1);
  auVar57 = ZEXT464(0x3f800000);
  auVar48 = vmaxss_avx(auVar57._0_16_,auVar48);
  local_12f8 = 0;
  local_1308 = 0;
  local_1310 = 0;
  local_1318 = (char *)0x0;
  local_1320 = (longlong *)0x180829d08;
  local_1328._0_4_ = auVar61._0_4_;
  local_12b8 = puVar31;
  local_129c = fVar46;
  local_128c = fVar44;
  local_1284 = fVar58;
  FUN_1804ea040(&local_12c8,DAT_180c62ca8,auVar48._0_8_,0x7f7fffff);
  auVar48 = vroundss_avx(ZEXT816(0),
                         ZEXT416((uint)(DAT_180b0a41c * 28.0 + fVar46 + (float)local_12c8 + fVar62))
                         ,1);
  local_138 = CONCAT44(fVar58 + auVar52._0_4_,auVar48._0_4_);
  local_1328._0_4_ = DAT_180b0a41c * 6.0;
  local_1320 = (longlong *)((ulonglong)local_1320 & 0xffffffff00000000);
  local_1168 = fVar46;
  local_1164 = fVar58;
  FUN_1804df870(puVar31,&local_1168,&local_138,DAT_180b0a434);
  local_12e0 = DAT_180b0a41c * 12.0 + local_1168;
  local_1320 = (longlong *)&DAT_180829a44;
  local_1328._0_4_ = (float)DAT_180b0a40c;
  local_12dc = fVar59;
  FUN_180463b40(puVar31,DAT_180c62cc0,0x41280000,&local_12e0);
  uVar38 = DAT_1808da478;
  fVar43 = (float)FUN_180463350(DAT_180c62ca8,auVar54._0_8_);
  local_12dc = fVar59 - fVar43 * fVar62;
  local_12e0 = DAT_180b0a41c * 22.0 + local_1168;
  local_1318 = (char *)0x0;
  local_1320 = (longlong *)0x180829d08;
  local_1328._0_4_ = (float)uVar38;
  FUN_180463450(puVar31,DAT_180c62ca8,auVar54._0_8_,&local_12e0);
  fVar44 = fVar44 + fVar46;
  fVar46 = fVar44 - DAT_180b0a41c * 10.0;
  local_1320 = (longlong *)((ulonglong)local_1320 & 0xffffffffffffff00);
  uVar9 = 0x41300000;
  local_1328 = (undefined8 *)CONCAT44(local_1328._4_4_,0x41300000);
  local_12e0 = fVar46;
  local_12dc = fVar59;
  cVar7 = FUN_18048e5f0(puVar31,&DAT_180829efc,&local_12e0,&DAT_180858020);
  if (cVar7 != '\0') {
    lVar34 = *(longlong *)(*param_1 + (longlong)(int)param_1[3] * 8);
    local_11e0 = (undefined1  [16])0x0;
    local_11d0 = (undefined1  [16])0x0;
    FUN_18015ba30(local_11e0,"Unnamed",7);
    FUN_18048e8b0(param_1,local_11e0,lVar34 + 0x28,1);
    FUN_18015c010(local_11e0);
    *(undefined1 *)((longlong)param_1 + 0xfd) = 0;
  }
  fVar46 = fVar46 - fVar50 * DAT_180b0a41c;
  local_1320 = (longlong *)((ulonglong)local_1320 & 0xffffffffffffff00);
  local_1328 = (undefined8 *)CONCAT44(local_1328._4_4_,uVar9);
  local_12e0 = fVar46;
  local_12dc = fVar59;
  cVar7 = FUN_18048e5f0(puVar31,"##import",&local_12e0,&DAT_180858024);
  if (cVar7 != '\0') {
    cVar7 = FUN_18048edb0(param_1);
    pcVar26 = "Clipboard has no preset";
    if (cVar7 != '\0') {
      pcVar26 = "Preset imported from clipboard";
    }
    lVar34 = -1;
    do {
      lVar34 = lVar34 + 1;
    } while (pcVar26[lVar34] != '\0');
    FUN_180113930(param_1 + 0x35);
    *(undefined4 *)(param_1 + 0x39) = 0x3f800000;
  }
  local_12e0 = fVar46 - fVar50 * DAT_180b0a41c;
  local_1320 = (longlong *)((ulonglong)local_1320 & 0xffffffffffffff00);
  local_1328 = (undefined8 *)CONCAT44(local_1328._4_4_,uVar9);
  local_12dc = fVar59;
  cVar7 = FUN_18048e5f0(puVar31,"##export",&local_12e0,&DAT_18082a290);
  fVar46 = auVar52._0_4_;
  if (cVar7 != '\0') {
    cVar7 = FUN_18048ea20(param_1,(int)param_1[3]);
    fVar46 = auVar52._0_4_;
    if (cVar7 != '\0') {
      FUN_180113930(param_1 + 0x35,"Preset copied to clipboard",0x1a);
      fVar46 = auVar52._0_4_;
      *(undefined4 *)(param_1 + 0x39) = 0x3f800000;
    }
  }
  auVar48 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 8.0 + fVar62)),1);
  fVar58 = auVar48._0_4_ + fVar46 + fVar58;
  auVar48 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 26.0 + fVar62)),1);
  auVar52 = ZEXT1664(auVar48);
  local_1160 = local_129c;
  local_1170 = fVar44 - DAT_180b0a41c * 30.0;
  local_116c = fVar58 + auVar48._0_4_;
  plVar15 = *(longlong **)(DAT_180bb8ae8 + 0x14d0);
  uVar24 = ~*(uint *)(plVar15[0x22] + -4 + (longlong)(int)plVar15[0x21] * 4);
  pcVar26 = "##filter_bg";
  cVar7 = '#';
  uVar38 = uVar24;
  do {
    pcVar26 = pcVar26 + 1;
    if (((cVar7 == '#') && (*pcVar26 == '#')) && (pcVar26[1] == '#')) {
      pcVar26 = pcVar26 + 2;
      uVar38 = uVar24;
    }
    else {
      uVar38 = crc32(uVar38,cVar7);
    }
    cVar7 = *pcVar26;
  } while (cVar7 != '\0');
  uVar38 = ~uVar38;
  local_115c = fVar58;
  if (*(uint *)(*plVar15 + 0x1534) == uVar38) {
    FUN_1804cf810(uVar38,0xb,"##filter_bg");
  }
  uVar24 = *(uint *)(DAT_180bb8ae8 + 0x1550);
  plVar15 = *(longlong **)(DAT_180bb8ae8 + 0x14d0);
  uVar25 = ~*(uint *)(plVar15[0x22] + -4 + (longlong)(int)plVar15[0x21] * 4);
  pcVar26 = "##filter";
  cVar7 = '#';
  uVar28 = uVar25;
  do {
    pcVar26 = pcVar26 + 1;
    if (((cVar7 == '#') && (*pcVar26 == '#')) && (pcVar26[1] == '#')) {
      pcVar26 = pcVar26 + 2;
      uVar28 = uVar25;
    }
    else {
      uVar28 = crc32(uVar28,cVar7);
    }
    cVar7 = *pcVar26;
  } while (cVar7 != '\0');
  uVar28 = ~uVar28;
  if (*(uint *)(*plVar15 + 0x1534) == uVar28) {
    FUN_1804cf810(uVar28,0xb,"##filter");
  }
  auVar48 = vpcmpeqd_avx(ZEXT416(uVar24),ZEXT416(uVar28));
  auVar48 = vblendvps_avx(auVar61._0_16_,auVar57._0_16_,auVar48);
  uVar47 = FUN_1804aaa10(uVar38,auVar48._0_8_,0x41800000);
  fVar59 = 6.0;
  local_1320 = (longlong *)((ulonglong)local_1320 & 0xffffffff00000000);
  local_1328._0_4_ = DAT_180b0a41c * 6.0;
  FUN_1804df870(puVar31,&local_1160,&local_1170,DAT_1808da480);
  auVar48 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c + 0.25)),1);
  auVar48 = vmaxss_avx(auVar57._0_16_,auVar48);
  auVar54 = ZEXT1664(auVar48);
  fVar44 = DAT_180b0a41c;
  uVar9 = FUN_180462ad0(DAT_1808da468,DAT_180b0a40c,(float)uVar47 * fVar62);
  fVar46 = auVar54._0_4_ * fVar62;
  local_138 = CONCAT44(local_116c - fVar46,local_1170 - fVar46);
  local_12e0 = fVar46 + local_1160;
  local_12dc = fVar46 + local_115c;
  auVar48 = vmaxss_avx(ZEXT416((uint)(fVar44 * fVar59 - fVar46)),auVar61._0_16_);
  local_1328 = (undefined8 *)((ulonglong)local_1328._4_4_ << 0x20);
  FUN_1804dc420(puVar31,&local_12e0,&local_138,auVar48._0_8_);
  local_1318 = (char *)CONCAT44(local_1318._4_4_,0x7f7fffff);
  local_1320 = (longlong *)CONCAT44(local_1320._4_4_,0x200);
  local_1328._0_4_ = (float)auVar54._0_4_;
  FUN_1804d9a00(puVar31,puVar31[0xb],*(undefined4 *)(puVar31 + 10),uVar9);
  *(undefined4 *)(puVar31 + 10) = 0;
  fVar44 = 12.0;
  fVar46 = auVar52._0_4_ * fVar62 + fVar58;
  local_138 = CONCAT44(fVar46,DAT_180b0a41c * 12.0 + local_1160);
  uVar9 = FUN_180462ad0(DAT_1808da474,DAT_180b0a40c,uVar47);
  local_1320 = (longlong *)&DAT_18082ac6c;
  local_1328 = (undefined8 *)CONCAT44(local_1328._4_4_,uVar9);
  FUN_180463b40(puVar31,DAT_180c62cc0,0x41200000,&local_138);
  local_138 = CONCAT44(auVar52._0_4_ + fVar58,local_1170 - fVar59 * DAT_180b0a41c);
  local_12e0 = fVar50 * DAT_180b0a41c + local_1160;
  local_1308 = local_1308 & 0xffffffff00000000;
  local_1318 = (char *)((ulonglong)local_1318 & 0xffffffffffffff00);
  local_1320 = (longlong *)0x18082af34;
  local_1328 = &local_138;
  local_12dc = fVar58;
  cVar7 = FUN_1804ad540("##filter",(undefined *)((longlong)param_1 + 0xfd),0x40,&local_12e0);
  if (cVar7 != '\0') {
    *(undefined4 *)((longlong)param_1 + 0x194) = 0;
  }
  local_130 = (longlong *)CONCAT44(fVar46,(local_128c + local_129c) - fVar44 * DAT_180b0a41c);
  local_1320 = (longlong *)CONCAT71(local_1320._1_7_,(int)param_1[0x28] != 0);
  local_1328 = (undefined8 *)CONCAT44(local_1328._4_4_,0x41300000);
  fVar46 = local_129c;
  fVar44 = local_128c;
  cVar7 = FUN_18048e5f0(puVar31,"##sort",&local_130,&DAT_18082a28c);
  fVar43 = auVar52._0_4_;
  if (cVar7 != '\0') {
    iVar20 = ((int)param_1[0x28] + 1) % 3;
    *(int *)(param_1 + 0x28) = iVar20;
    lVar34 = -1;
    do {
      lVar34 = lVar34 + 1;
    } while ((&PTR_s_Default_order_1807b79b8)[iVar20][lVar34] != '\0');
    FUN_180113930(param_1 + 0x35);
    fVar43 = auVar52._0_4_;
    *(undefined4 *)(param_1 + 0x39) = 0x3f800000;
  }
  auVar48 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * fVar59 + fVar62)),1);
  local_12a0 = fVar58 + auVar48._0_4_ + fVar43;
  auVar52 = ZEXT464((uint)local_12a0);
  _local_128 = (undefined1  [16])0x0;
  local_118 = (float *)0x0;
  local_12a4 = 0.0;
  lVar34 = *param_1;
  pfStack_120 = (float *)0x0;
  pfVar30 = pfStack_120;
  if (0 < (int)(param_1[1] - lVar34 >> 3)) {
    do {
      fVar58 = local_12a4;
      if (*(char *)((longlong)param_1 + 0xfd) == '\0') {
LAB_18048fd0c:
        if (pfVar30 == local_118) {
          FUN_18026b910(local_128,pfVar30,&local_12a4);
          goto LAB_18048fd3f;
        }
        *pfVar30 = fVar58;
        pfVar30 = (float *)((longlong)pfStack_120 + 4);
        pfStack_120 = pfVar30;
      }
      else {
        plVar15 = *(longlong **)(lVar34 + (longlong)(int)local_12a4 * 8);
        if (0xf < (ulonglong)plVar15[3]) {
          plVar15 = (longlong *)*plVar15;
        }
        cVar7 = FUN_180494310(plVar15,(undefined *)((longlong)param_1 + 0xfd));
        if ((cVar7 != '\0') || (fVar58 == *(float *)((longlong)param_1 + 0x144))) {
          pfVar30 = pfStack_120;
          goto LAB_18048fd0c;
        }
LAB_18048fd3f:
        pfVar30 = pfStack_120;
      }
      local_12a4 = (float)((int)fVar58 + 1);
      lVar34 = *param_1;
    } while ((int)local_12a4 < (int)(param_1[1] - lVar34 >> 3));
  }
  fVar58 = DAT_180b0a41c;
  if ((int)param_1[0x28] != 0) {
    auVar27 = local_128;
    lVar34 = (longlong)pfVar30 - (longlong)local_128 >> 2;
    if (lVar34 < 0x21) {
      FUN_180492580(local_128,pfVar30,param_1);
    }
    else {
      FUN_1802ad670(&local_1148,
                    lVar34 - (lVar34 - ((longlong)pfVar30 - (longlong)local_128 >> 0x3f) >> 1));
      local_1328 = local_1140;
      local_1320 = param_1;
      FUN_1804927b0(auVar27,pfVar30,lVar34,local_1148);
      if ((undefined8 *)0x400 < local_1140) {
        if (DAT_180c7df30 == (undefined8 *)0x0) {
          local_12c8 = "tier0.dll:g_pMemAlloc";
          uStack_12c0 = 0x15;
          DAT_180c7df30 = (undefined8 *)FUN_180451750(&local_12c8);
        }
        (**(code **)(*(longlong *)*DAT_180c7df30 + 0x18))();
      }
      fVar58 = DAT_180b0a41c;
    }
    pfVar30 = pfStack_120;
  }
  auVar48 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(fVar58 * 30.0 + fVar62)),1);
  auVar55 = ZEXT1664(auVar48);
  local_1270 = auVar48._0_4_;
  auVar54 = ZEXT1664(auVar61._0_16_);
  local_1254 = auVar61._0_4_;
  auVar27 = local_128;
  if (local_128 != (undefined1  [8])pfVar30) {
    auVar23 = local_128;
    do {
      if (*(longlong *)(*param_1 + (longlong)(int)*(float *)auVar23 * 8) == param_1[0x33]) {
        fVar59 = *(float *)(param_1 + 0x34);
      }
      else {
        fVar59 = auVar57._0_4_;
      }
      local_1254 = auVar54._0_4_ + fVar59 * local_1270;
      auVar54 = ZEXT464((uint)local_1254);
      auVar23 = (undefined1  [8])((longlong)auVar23 + 4);
    } while (auVar23 != (undefined1  [8])pfVar30);
  }
  iVar20 = (int)((longlong)pfVar30 - (longlong)local_128 >> 2);
  if (iVar20 < 1) {
    iVar20 = 1;
  }
  else if (7 < iVar20) {
    iVar20 = 7;
  }
  local_12a4 = (float)iVar20 * local_1270;
  auVar48 = vmaxss_avx(auVar61._0_16_,ZEXT416((uint)(auVar54._0_4_ - local_12a4)));
  local_12d0 = auVar48._0_4_;
  local_1280 = fVar46 - fVar58 * 4.0;
  local_1274 = fVar44 + fVar46 + fVar58 * 4.0;
  auVar51 = ZEXT464((uint)local_1274);
  local_127c = local_12a4 + auVar52._0_4_;
  auVar56 = ZEXT464((uint)local_127c);
  lVar34 = *(longlong *)(DAT_180bb8ae8 + 0x14d8);
  lVar11 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
  if ((lVar34 != 0) && (lVar34 == lVar11)) {
    cVar19 = '\0';
    lVar35 = DAT_180bb8ae8;
    cVar7 = FUN_1804b7ab0(lVar34);
    if ((cVar7 != '\0') &&
       (((*(int *)(lVar35 + 0x1550) == 0 || (*(char *)(lVar35 + 0x155f) != cVar19)) ||
        (*(int *)(lVar35 + 0x1550) == *(int *)(lVar34 + 0x8c))))) {
      auVar48 = vmaxss_avx(auVar52._0_16_,ZEXT416(*(uint *)(lVar11 + 0x26c)));
      auVar2 = vminss_avx(auVar56._0_16_,ZEXT416(*(uint *)(lVar11 + 0x274)));
      auVar3 = vminss_avx(auVar51._0_16_,ZEXT416(*(uint *)(lVar11 + 0x270)));
      auVar60 = vmaxss_avx(ZEXT416((uint)local_1280),ZEXT416(*(uint *)(lVar11 + 0x268)));
      if (auVar60._0_4_ - *(float *)(lVar35 + 0xcec) <= *(float *)(lVar35 + 0x110)) {
        if (((auVar48._0_4_ - *(float *)(lVar35 + 0xcf0) <= *(float *)(lVar35 + 0x114)) &&
            (*(float *)(lVar35 + 0x110) < auVar3._0_4_ + *(float *)(lVar35 + 0xcec))) &&
           ((*(float *)(lVar35 + 0x114) < auVar2._0_4_ + *(float *)(lVar35 + 0xcf0) &&
            (*(float *)(lVar14 + 0x120) != auVar61._0_4_)))) {
          *(float *)((longlong)param_1 + 0x194) =
               *(float *)((longlong)param_1 + 0x194) -
               auVar55._0_4_ * *(float *)(lVar14 + 0x120) * 1.5;
        }
      }
    }
    auVar48 = ZEXT416((uint)local_12d0);
  }
  if (auVar61._0_4_ <= *(float *)((longlong)param_1 + 0x194)) {
    auVar48 = vminss_avx(auVar48,ZEXT416((uint)*(float *)((longlong)param_1 + 0x194)));
  }
  else {
    auVar48 = auVar61._0_16_;
  }
  auVar51 = ZEXT1664(auVar48);
  *(int *)((longlong)param_1 + 0x194) = auVar48._0_4_;
  if (local_12e8 != '\0') {
    *(int *)(param_1 + 0x32) = auVar48._0_4_;
  }
  fVar46 = *(float *)(param_1 + 0x32);
  fVar44 = (float)FUN_180627ae0(*(float *)(lVar14 + 0x40) * -18.0);
  auVar48 = auVar56._0_16_;
  *(float *)(param_1 + 0x32) = (auVar57._0_4_ - fVar44) * (auVar51._0_4_ - fVar46) + fVar46;
  if (auVar27 == (undefined1  [8])pfVar30) {
    fVar46 = 13.6;
    auVar48 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(fVar58 * 13.6 + fVar62)),1);
    auVar48 = vmaxss_avx(auVar57._0_16_,auVar48);
    local_12f8 = 0;
    local_1308 = 0;
    local_1310 = 0;
    local_1318 = (char *)0x0;
    local_1320 = (longlong *)0x180858168;
    local_1328 = (undefined8 *)CONCAT44(local_1328._4_4_,auVar61._0_4_);
    FUN_1804ea040(&local_12c8,DAT_180c62ca8,auVar48._0_8_);
    uVar38 = DAT_1808da474;
    auVar48 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(fVar46 * DAT_180b0a41c + fVar62)),1);
    auVar48 = vmaxss_avx(auVar57._0_16_,auVar48);
    auVar51 = ZEXT1664(auVar48);
    lVar34 = FUN_1804e97d0(DAT_180c62ca8,auVar48._0_8_,0xbf800000);
    lVar11 = FUN_1804e95f0(lVar34,0x48);
    lVar14 = DAT_180c62ca8;
    if (lVar11 == 0) {
      fVar46 = auVar51._0_4_ * fVar62;
    }
    else {
      fVar46 = (*(float *)(lVar11 + 0x14) - *(float *)(lVar11 + 0xc)) *
               (auVar51._0_4_ / *(float *)(lVar34 + 0x14));
    }
    auVar48 = vroundss_avx(ZEXT816(0),
                           ZEXT416((uint)((local_128c - (float)local_12c8) * fVar62 + local_129c +
                                         fVar62)),1);
    auVar48 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(auVar48._0_4_ + fVar62)),1);
    local_138 = CONCAT44(local_138._4_4_,auVar48._0_4_);
    auVar48 = vroundss_avx(ZEXT816(0),
                           ZEXT416((uint)(((fVar62 * local_12a4 + auVar52._0_4_) - fVar46 * fVar62)
                                         + fVar62)),1);
    auVar51 = ZEXT1664(auVar48);
    fVar58 = local_128c;
    fVar46 = local_129c;
    fVar44 = (float)FUN_1804632d0(DAT_180c62ca8,0x4159999a);
    auVar48 = auVar56._0_16_;
    local_138 = CONCAT44(auVar51._0_4_ - fVar44,(undefined4)local_138);
    auVar60 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 13.6 + fVar62)),1);
    auVar60 = vmaxss_avx(auVar57._0_16_,auVar60);
    uVar22 = auVar60._0_8_;
    if ((uVar38 & 0xff000000) != 0) {
      if (lVar14 == 0) {
        lVar14 = *(longlong *)(puVar31[7] + 0x20);
      }
      if (auVar60._0_4_ == auVar61._0_4_) {
        uVar22 = (ulonglong)*(uint *)(puVar31[7] + 0x28);
      }
      local_12c8 = (char *)puVar31[0xc];
      uStack_12c0 = puVar31[0xd];
      local_1300 = 0;
      local_1308 = CONCAT44(local_1308._4_4_,auVar61._0_4_);
      local_1310 = 0;
      local_1318 = "No presets found";
      local_1320 = &local_12c8;
      local_1328 = (undefined8 *)CONCAT44(local_1328._4_4_,uVar38);
      FUN_1804ea5f0(lVar14,puVar31,uVar22,&local_138);
      auVar48 = auVar56._0_16_;
    }
  }
  else {
    fVar58 = local_128c;
    fVar46 = local_129c;
  }
  uVar38 = 0xffffffff;
  local_1290 = 0xffffffff;
  local_1278 = 0xffffffff;
  local_1260 = 0xffffffff;
  local_125c = 0xffffffff;
  local_1288 = auVar61._0_4_;
  auVar60 = *(undefined1 (*) [16])(puVar31 + 0xc);
  auVar2 = vcmpss_avx(ZEXT416((uint)local_1280),auVar60,1);
  auVar2 = vblendvps_avx(ZEXT416((uint)local_1280),auVar60,auVar2);
  auVar4 = vshufps_avx(auVar60,auVar60,0x55);
  auVar3 = vcmpss_avx(auVar52._0_16_,auVar4,1);
  auVar3 = vblendvps_avx(auVar52._0_16_,auVar4,auVar3);
  local_12c8 = (char *)CONCAT44(auVar3._0_4_,auVar2._0_4_);
  auVar5 = vshufps_avx(auVar60,auVar60,0xaa);
  auVar4 = vcmpss_avx(auVar5,ZEXT416((uint)local_1274),1);
  auVar4 = vblendvps_avx(ZEXT416((uint)local_1274),auVar5,auVar4);
  auVar5 = vshufps_avx(auVar60,auVar60,0xff);
  auVar60 = vcmpss_avx(auVar5,auVar48,1);
  auVar48 = vblendvps_avx(auVar48,auVar5,auVar60);
  auVar60 = vmaxss_avx(auVar2,auVar4);
  auVar48 = vmaxss_avx(auVar3,auVar48);
  uStack_12c0 = CONCAT44(auVar48._0_4_,auVar60._0_4_);
  piVar37 = (int *)(puVar31 + 0x14);
  iVar20 = *(int *)((longlong)puVar31 + 0xa4);
  fVar44 = local_1274;
  local_1258 = local_1288;
  if (*piVar37 == iVar20) {
    iVar21 = *piVar37 + 1;
    if (iVar20 == 0) {
      iVar20 = 8;
    }
    else {
      iVar20 = iVar20 / 2 + iVar20;
    }
    if (iVar21 < iVar20) {
      iVar21 = iVar20;
    }
    FUN_1804aec70(piVar37,iVar21);
  }
  plVar15 = (longlong *)(puVar31[0x15] + (longlong)*piVar37 * 0x10);
  *plVar15 = (longlong)local_12c8;
  plVar15[1] = uStack_12c0;
  *piVar37 = *piVar37 + 1;
  puVar31[0xc] = local_12c8;
  puVar31[0xd] = uStack_12c0;
  FUN_1804d9200(puVar31);
  auVar51 = ZEXT464((uint)(auVar52._0_4_ - *(float *)(param_1 + 0x32)));
  local_138 = 0;
  fVar59 = 2.0;
  uVar24 = 0xffffffff;
  if ((longlong)pfStack_120 - (longlong)local_128 >> 2 != 0) {
    local_1264 = fVar58 + fVar46;
    auVar27 = local_128;
    fVar58 = DAT_180b0a41c;
    fVar44 = local_1264;
    fVar43 = local_12a0;
    do {
      uVar22 = local_138;
      local_12d4 = *(uint *)((longlong)auVar27 + local_138 * 4);
      local_130 = *(longlong **)(*param_1 + (longlong)(int)local_12d4 * 8);
      if (local_130 == (longlong *)param_1[0x33]) {
        auVar52 = ZEXT464(*(uint *)(param_1 + 0x34));
      }
      else {
        auVar52 = ZEXT1664(auVar57._0_16_);
      }
      fVar46 = fVar46 - fVar58 * 4.0;
      auVar54 = ZEXT1664(auVar51._0_16_);
      local_126c = auVar51._0_4_;
      fVar59 = fVar58 * 4.0 + fVar44;
      fVar50 = local_126c + auVar55._0_4_;
      local_1268 = local_126c + auVar52._0_4_ * auVar55._0_4_;
      auVar51 = ZEXT464((uint)local_1268);
      local_1298 = fVar50;
      if (((fVar50 < fVar43) || (local_127c < local_126c)) || (auVar52._0_4_ <= auVar61._0_4_)) {
        fVar59 = 2.0;
      }
      else {
        lVar14 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
        uVar9 = FUN_1804c25c0(lVar14,local_130);
        piVar37 = (int *)(lVar14 + 0x108);
        iVar20 = *(int *)(lVar14 + 0x10c);
        if (*piVar37 == iVar20) {
          iVar21 = *piVar37 + 1;
          if (iVar20 == 0) {
            iVar20 = 8;
          }
          else {
            iVar20 = iVar20 / 2 + iVar20;
          }
          if (iVar21 < iVar20) {
            iVar21 = iVar20;
          }
          FUN_1804d14d0(piVar37,iVar21);
        }
        *(undefined4 *)(*(longlong *)(lVar14 + 0x110) + (longlong)*piVar37 * 4) = uVar9;
        *piVar37 = *piVar37 + 1;
        plVar15 = *(longlong **)(DAT_180bb8ae8 + 0x14d0);
        uVar24 = ~*(uint *)(plVar15[0x22] + -4 + (longlong)(int)plVar15[0x21] * 4);
        pcVar26 = "##appear";
        cVar7 = '#';
        uVar38 = uVar24;
        do {
          pcVar26 = pcVar26 + 1;
          if (((cVar7 == '#') && (*pcVar26 == '#')) && (pcVar26[1] == '#')) {
            pcVar26 = pcVar26 + 2;
            uVar38 = uVar24;
          }
          else {
            uVar38 = crc32(uVar38,cVar7);
          }
          cVar7 = *pcVar26;
        } while (cVar7 != '\0');
        uVar38 = ~uVar38;
        if (*(uint *)(*plVar15 + 0x1534) == uVar38) {
          FUN_1804cf810(uVar38,0xb,"##appear");
        }
        pfVar30 = (float *)FUN_1804b15a0(local_1240,uVar38,auVar61._0_8_);
        if (local_12e8 != '\0') {
          *pfVar30 = (float)uVar22 * -0.07;
        }
        auVar48 = vminss_avx(auVar57._0_16_,
                             ZEXT416((uint)(*(float *)(local_11b8 + 0x40) * 6.0 + *pfVar30)));
        *pfVar30 = auVar48._0_4_;
        lVar14 = DAT_180bb8ae8;
        fVar58 = DAT_180b0a41c;
        fVar44 = auVar61._0_4_;
        if (fVar44 <= auVar48._0_4_) {
          auVar48 = vminss_avx(auVar57._0_16_,auVar48);
          fVar44 = auVar48._0_4_;
        }
        fVar44 = auVar57._0_4_ - fVar44;
        local_1238 = (auVar57._0_4_ - fVar44 * fVar44) * auVar52._0_4_;
        local_1160 = *(float *)(puVar31 + 4);
        uVar38 = *(uint *)(param_1 + 3);
        fVar44 = (fVar50 + auVar54._0_4_) * fVar62;
        auVar52 = ZEXT464(0x41600000);
        fVar43 = fVar59 - DAT_180b0a41c * 14.0;
        local_1168 = fVar59 - DAT_180b0a41c * 38.0;
        if (*(uint *)((longlong)param_1 + 0x144) == local_12d4) {
LAB_180490675:
          bVar6 = false;
        }
        else {
          if (*(float *)(DAT_180bb8ae8 + 0x110) < local_1280 - *(float *)(DAT_180bb8ae8 + 0xcec))
          goto LAB_180490675;
          if (((*(float *)(DAT_180bb8ae8 + 0x114) < local_12a0 - *(float *)(DAT_180bb8ae8 + 0xcf0))
              || (*(float *)(DAT_180bb8ae8 + 0xcec) + local_1274 <=
                  *(float *)(DAT_180bb8ae8 + 0x110))) ||
             (bVar6 = true,
             *(float *)(DAT_180bb8ae8 + 0xcf0) + local_127c <= *(float *)(DAT_180bb8ae8 + 0x114)))
          goto LAB_180490675;
        }
        uVar24 = *(uint *)(DAT_180bb8ae8 + 0x1e80) | 0x40;
        if (bVar6) {
          uVar24 = *(uint *)(DAT_180bb8ae8 + 0x1e80) & 0xffffffbf;
        }
        *(uint *)(DAT_180bb8ae8 + 0x1e80) = uVar24;
        piVar37 = (int *)(lVar14 + 0x1fd8);
        iVar20 = *(int *)(lVar14 + 0x1fdc);
        lVar34 = lVar14;
        local_1294 = uVar38;
        local_1164 = fVar44;
        if (*piVar37 == iVar20) {
          iVar21 = *piVar37 + 1;
          if (iVar20 == 0) {
            iVar20 = 8;
          }
          else {
            iVar20 = iVar20 / 2 + iVar20;
          }
          if (iVar21 < iVar20) {
            iVar21 = iVar20;
          }
          FUN_1804d14d0(piVar37,iVar21);
          lVar34 = DAT_180bb8ae8;
          fVar58 = DAT_180b0a41c;
        }
        *(uint *)(*(longlong *)(lVar14 + 0x1fe0) + (longlong)*piVar37 * 4) = uVar24;
        *piVar37 = *piVar37 + 1;
        plVar15 = *(longlong **)(lVar34 + 0x14d0);
        uVar28 = ~*(uint *)(plVar15[0x22] + -4 + (longlong)(int)plVar15[0x21] * 4);
        pcVar26 = "##action";
        cVar7 = '#';
        uVar24 = uVar28;
        do {
          pcVar26 = pcVar26 + 1;
          if (((cVar7 == '#') && (*pcVar26 == '#')) && (pcVar26[1] == '#')) {
            pcVar26 = pcVar26 + 2;
            uVar24 = uVar28;
          }
          else {
            uVar24 = crc32(uVar24,cVar7);
          }
          cVar7 = *pcVar26;
        } while (cVar7 != '\0');
        uVar24 = ~uVar24;
        if (*(uint *)(*plVar15 + 0x1534) == uVar24) {
          FUN_1804cf810(uVar24,0xb,"##action");
          fVar58 = DAT_180b0a41c;
        }
        fVar58 = fVar58 * 10.0;
        local_121c = fVar43 + fVar58;
        local_1218 = fVar44 + fVar58;
        local_1214 = fVar43 - fVar58;
        local_1210 = fVar44 - fVar58;
        local_1328 = (undefined8 *)CONCAT71(local_1328._1_7_,1);
        pbVar12 = (byte *)FUN_1804aad60(local_11c0,uVar24,&local_1214,&local_121c);
        bVar41 = pbVar12[2];
        auVar48 = vpcmpeqd_avx(ZEXT116(*pbVar12),SUB6416(ZEXT464(0),0));
        auVar48 = vblendvps_avx(auVar57._0_16_,auVar61._0_16_,auVar48);
        local_12d8 = bVar41;
        auVar55._0_8_ = FUN_1804aaa10(uVar24 + 1,auVar48._0_8_,0x41900000);
        uVar28 = local_12d4;
        auVar55._8_56_ = extraout_var;
        auVar55 = ZEXT1664(auVar55._0_16_);
        auVar48 = vpcmpeqd_avx(ZEXT416(local_12d4),ZEXT416(uVar38));
        auVar48 = vblendvps_avx(auVar61._0_16_,auVar57._0_16_,auVar48);
        fVar45 = (float)FUN_1804aaa10(uVar24 + 2,auVar48._0_8_,auVar52._0_8_);
        fVar58 = auVar61._0_4_;
        fVar50 = fVar58;
        if (fVar58 <= auVar55._0_4_) {
          auVar48 = vminss_avx(auVar57._0_16_,auVar55._0_16_);
          fVar50 = auVar48._0_4_;
        }
        uVar29 = 0;
        uVar25 = 0;
        uVar24 = DAT_1808da474;
        if (uVar28 == uVar38) {
          uVar24 = DAT_180b0a40c;
        }
        do {
          fVar49 = (float)(uVar24 >> (uVar25 & 0x1f) & 0xff);
          fVar49 = ((float)(DAT_180b0a424 >> (uVar25 & 0x1f) & 0xff) - fVar49) * fVar50 + fVar49 +
                   fVar62;
          uVar22 = (ulonglong)(uint)fVar49;
          uVar29 = uVar29 | (int)(longlong)fVar49 << (uVar25 & 0x1f);
          uVar25 = uVar25 + 8;
        } while ((int)uVar25 < 0x20);
        fVar50 = auVar57._0_4_;
        if (fVar45 < fVar50) {
          fVar49 = ((float)(uVar29 >> 0x18) / 255.0) * (fVar50 - fVar45);
          if (fVar58 <= fVar49) {
            auVar48 = vminss_avx(auVar57._0_16_,ZEXT416((uint)fVar49));
            fVar58 = auVar48._0_4_;
          }
          local_1220 = fVar44 - DAT_180b0a41c * 4.0 * fVar45;
          local_1320 = (longlong *)&DAT_18085802c;
          local_1328 = (undefined8 *)
                       CONCAT44(local_1328._4_4_,
                                (int)(longlong)(fVar58 * 255.0 + fVar62) << 0x18 | uVar29 & 0xffffff
                               );
          local_1224 = fVar43;
          uVar22 = FUN_180463b40(puVar31,DAT_180c62cc0,(fVar50 - fVar45 * 0.4) * 11.0,&local_1224);
        }
        fVar58 = auVar61._0_4_;
        if (fVar58 < fVar45) {
          auVar60 = auVar61._0_16_;
          fVar50 = auVar57._0_4_;
          auVar48 = auVar57._0_16_;
          if ((uVar28 != uVar38) || (fVar49 = *(float *)(param_1 + 0xe37), fVar49 <= fVar58)) {
            auVar52 = ZEXT1664(auVar60);
          }
          else {
            auVar2 = auVar60;
            if (fVar58 <= fVar49 * 6.0) {
              auVar2 = vminss_avx(auVar48,ZEXT416((uint)(fVar49 * 6.0)));
            }
            fVar49 = (fVar50 - fVar49) * 8.0;
            if (fVar58 <= fVar49) {
              auVar60 = vminss_avx(auVar48,ZEXT416((uint)fVar49));
              auVar60 = vminss_avx(auVar60,auVar2);
              auVar52 = ZEXT1664(auVar60);
            }
            else {
              auVar60 = vminss_avx(auVar60,auVar2);
              auVar52 = ZEXT1664(auVar60);
            }
          }
          local_12dc = DAT_180b0a41c * 4.0 * (fVar50 - fVar45);
          uVar22 = (ulonglong)(uint)local_12dc;
          local_12dc = local_12dc + fVar44;
          fVar53 = 255.0;
          fVar49 = auVar52._0_4_;
          local_12e0 = fVar43;
          if (fVar50 <= fVar49) {
            fVar43 = 11.0;
          }
          else {
            fVar43 = (fVar50 - fVar49) * fVar45 * ((float)(uVar29 >> 0x18) / 255.0);
            if (fVar58 <= fVar43) {
              auVar48 = vminss_avx(auVar48,ZEXT416((uint)fVar43));
              fVar58 = auVar48._0_4_;
            }
            fVar43 = 11.0;
            local_1320 = (longlong *)&DAT_180830b3c;
            local_1328 = (undefined8 *)
                         CONCAT44(local_1328._4_4_,
                                  (int)(longlong)(fVar58 * 255.0 + fVar62) << 0x18 |
                                  uVar29 & 0xffffff);
            uVar22 = FUN_180463b40(puVar31,DAT_180c62cc0,
                                   (fVar50 - fVar49 * 0.3) * (fVar45 * 0.4 + 0.6) * 11.0,&local_12e0
                                  );
            fVar49 = auVar52._0_4_;
          }
          fVar58 = auVar61._0_4_;
          if (fVar58 < fVar49) {
            fVar50 = ((float)(DAT_180b0a40c >> 0x18) / fVar53) * fVar49;
            if (fVar58 <= fVar50) {
              auVar48 = vminss_avx(auVar57._0_16_,ZEXT416((uint)fVar50));
              fVar58 = auVar48._0_4_;
            }
            local_1320 = (longlong *)&DAT_180829a38;
            local_1328 = (undefined8 *)
                         CONCAT44(local_1328._4_4_,
                                  (int)(longlong)(fVar58 * fVar53 + fVar62) << 0x18 |
                                  DAT_180b0a40c & 0xffffff);
            uVar22 = FUN_180463b40(puVar31,DAT_180c62cc0,(fVar49 * 0.3 + 0.7) * fVar43,&local_12e0);
          }
        }
        cVar7 = FUN_1804ab580(uVar22,&local_1168,1);
        lVar14 = DAT_180bb8ae8;
        iVar20 = *(int *)(DAT_180bb8ae8 + 0x1fd8);
        local_12b0 = cVar7;
        if (iVar20 < 2) {
          FUN_1804c5a40("Calling PopItemFlag() too many times!");
          lVar14 = DAT_180bb8ae8;
        }
        else {
          *(int *)(DAT_180bb8ae8 + 0x1fd8) = iVar20 + -1;
          *(undefined4 *)(lVar14 + 0x1e80) =
               *(undefined4 *)(*(longlong *)(lVar14 + 0x1fe0) + -8 + (longlong)iVar20 * 4);
        }
        auVar48 = auVar54._0_16_;
        plVar15 = *(longlong **)(lVar14 + 0x14d0);
        uVar24 = ~*(uint *)(plVar15[0x22] + -4 + (longlong)(int)plVar15[0x21] * 4);
        pcVar26 = "#row";
        cVar19 = '#';
        uVar38 = uVar24;
        do {
          if (((cVar19 == '#') && (*pcVar26 == '#')) && (pcVar26[1] == '#')) {
            pcVar26 = pcVar26 + 2;
            uVar38 = uVar24;
          }
          else {
            uVar38 = crc32(uVar38,cVar19);
          }
          cVar19 = *pcVar26;
          pcVar26 = pcVar26 + 1;
        } while (cVar19 != '\0');
        uVar38 = ~uVar38;
        if (*(uint *)(*plVar15 + 0x1534) == uVar38) {
          FUN_1804cf810(uVar38,0xb,&DAT_180857e90);
          auVar48 = auVar54._0_16_;
        }
        local_120c = local_1168 - DAT_180b0a41c * 10.0;
        auVar60 = vminss_avx(ZEXT416((uint)local_1298),ZEXT416((uint)local_127c));
        local_1208 = auVar60._0_4_;
        auVar48 = vmaxss_avx(auVar48,ZEXT416((uint)local_12a0));
        local_1200 = auVar48._0_4_;
        local_1328 = (undefined8 *)
                     CONCAT71(local_1328._1_7_,*(uint *)((longlong)param_1 + 0x144) != local_12d4);
        local_1204 = fVar46;
        puVar13 = (undefined2 *)FUN_1804aad60(local_1248,uVar38,&local_1204,&local_120c);
        uVar1 = *puVar13;
        cVar19 = *(char *)(puVar13 + 1);
        auVar48 = vpcmpeqd_avx(ZEXT116((byte)uVar1),SUB6416(ZEXT464(0),0));
        auVar48 = vblendvps_avx(auVar57._0_16_,auVar61._0_16_,auVar48);
        auVar52._0_8_ = FUN_1804aaa10(uVar38 + 1,auVar48._0_8_,0x41900000);
        auVar52._8_56_ = extraout_var_00;
        auVar52 = ZEXT1664(auVar52._0_16_);
        auVar48 = vpcmpeqd_avx(ZEXT416(local_12d4),ZEXT416(local_1294));
        auVar48 = vblendvps_avx(auVar61._0_16_,auVar57._0_16_,auVar48);
        auVar54._0_8_ = FUN_1804aaa10(uVar38 + 2,auVar48._0_8_,0x41600000);
        puVar31 = local_12b8;
        auVar54._8_56_ = extraout_var_01;
        auVar55 = ZEXT1664(auVar54._0_16_);
        fVar58 = DAT_180b0a41c * 6.0;
        local_104 = local_126c + DAT_180b0a41c;
        local_10c = local_1298 - DAT_180b0a41c;
        fVar50 = auVar61._0_4_;
        fVar43 = local_126c;
        local_110 = fVar59;
        local_108 = fVar46;
        if ((fVar50 < auVar52._0_4_) || (fVar50 < (float)auVar54._0_8_)) {
          auVar48 = vmaxss_avx(ZEXT416((uint)(auVar52._0_4_ * 0.8)),auVar54._0_16_);
          fVar45 = 255.0;
          fVar59 = auVar48._0_4_ * ((float)(DAT_180b0a434 >> 0x18) / 255.0);
          if (fVar50 <= fVar59) {
            auVar48 = vminss_avx(auVar57._0_16_,ZEXT416((uint)fVar59));
            fVar50 = auVar48._0_4_;
          }
          local_1320 = (longlong *)((ulonglong)local_1320 & 0xffffffff00000000);
          local_1328 = (undefined8 *)CONCAT44(local_1328._4_4_,fVar58);
          FUN_1804df870(local_12b8,&local_108,&local_110,
                        (int)(longlong)(fVar50 * 255.0 + fVar62) << 0x18 | DAT_180b0a434 & 0xffffff)
          ;
          fVar59 = auVar61._0_4_;
          if (auVar55._0_4_ <= fVar59) {
          }
          else {
            auVar48 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c + 0.25)),1);
            auVar48 = vmaxss_avx(auVar57._0_16_,auVar48);
            auVar54 = ZEXT1664(auVar48);
            fVar43 = ((float)(DAT_180b0a40c >> 0x18) / fVar45) * auVar55._0_4_ * 0.45;
            if (fVar59 <= fVar43) {
              auVar60 = vminss_avx(auVar57._0_16_,ZEXT416((uint)fVar43));
              fVar59 = auVar60._0_4_;
            }
            fVar59 = fVar59 * fVar45 + fVar62;
            uVar38 = DAT_180b0a40c & 0xffffff;
            fVar43 = auVar48._0_4_ * fVar62;
            local_122c = local_110 - fVar43;
            local_1228 = local_10c - fVar43;
            local_11fc = fVar43 + local_108;
            local_11f8 = fVar43 + local_104;
            auVar48 = vmaxss_avx(ZEXT416((uint)(fVar58 - fVar43)),auVar61._0_16_);
            local_1328 = (undefined8 *)((ulonglong)local_1328 & 0xffffffff00000000);
            FUN_1804dc420(local_12b8,&local_11fc,&local_122c,auVar48._0_8_);
            puVar31 = local_12b8;
            local_1318 = (char *)CONCAT44(local_1318._4_4_,0x7f7fffff);
            local_1320 = (longlong *)CONCAT44(local_1320._4_4_,0x200);
            local_1328 = (undefined8 *)CONCAT44(local_1328._4_4_,auVar54._0_4_);
            FUN_1804d9a00(local_12b8,local_12b8[0xb],*(undefined4 *)(local_12b8 + 10),
                          (int)(longlong)fVar59 << 0x18 | uVar38);
            *(undefined4 *)(puVar31 + 10) = 0;
            fVar43 = local_126c;
          }
        }
        else {
          fVar45 = 255.0;
        }
        auVar60 = auVar55._0_16_;
        auVar48 = auVar52._0_16_;
        fVar59 = 2.0;
        fVar46 = DAT_180b0a41c * 10.0 + fVar46 + DAT_180b0a41c * 2.0 * auVar52._0_4_;
        if ((longlong *)local_130[4] != (longlong *)0x0) {
          local_11f4 = DAT_180b0a41c * 5.0 + fVar46;
          local_1328 = (undefined8 *)CONCAT44(local_1328._4_4_,DAT_180b0a54c);
          local_1320 = (longlong *)local_130[4];
          local_11f0 = fVar44;
          FUN_180463b40(puVar31,DAT_180c62cc0,0x41300000,&local_11f4);
          auVar60 = auVar55._0_16_;
          auVar48 = auVar52._0_16_;
          fVar46 = fVar46 + DAT_180b0a41c * 15.0;
        }
        fVar58 = local_1168;
        if (*(uint *)((longlong)param_1 + 0x144) == local_12d4) {
          fVar49 = 4.0;
          fVar50 = DAT_180b0a41c * 4.0;
          local_1158 = fVar46 - fVar50;
          local_1154 = fVar43 + fVar50;
          local_1170 = local_1168 - DAT_180b0a41c * 12.0;
          local_116c = local_1298 - fVar50;
          local_1320 = (longlong *)((ulonglong)local_1320 & 0xffffffff00000000);
          fVar44 = local_1298;
          local_1328._0_4_ = fVar50;
          FUN_1804df870(puVar31,&local_1158,&local_1170,DAT_1808da480);
          auVar48 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c + 0.25)),1);
          auVar48 = vmaxss_avx(auVar57._0_16_,auVar48);
          auVar52 = ZEXT1664(auVar48);
          fVar43 = ((float)(DAT_180b0a40c >> 0x18) / fVar45) * fVar62;
          fVar50 = auVar61._0_4_;
          if (fVar50 <= fVar43) {
            auVar60 = vminss_avx(auVar57._0_16_,ZEXT416((uint)fVar43));
            fVar50 = auVar60._0_4_;
          }
          fVar43 = fVar50 * fVar45 + fVar62;
          uVar38 = DAT_180b0a40c & 0xffffff;
          fVar50 = auVar48._0_4_ * fVar62;
          local_11ec = local_1170 - fVar50;
          local_11e8 = local_116c - fVar50;
          local_1234 = fVar50 + local_1158;
          local_1230 = fVar50 + local_1154;
          auVar48 = vmaxss_avx(ZEXT416((uint)(DAT_180b0a41c * fVar49 - fVar50)),auVar61._0_16_);
          local_1328 = (undefined8 *)((ulonglong)local_1328._4_4_ << 0x20);
          FUN_1804dc420(local_12b8,&local_1234,&local_11ec,auVar48._0_8_);
          puVar31 = local_12b8;
          local_1318 = (char *)CONCAT44(local_1318._4_4_,0x7f7fffff);
          local_1320 = (longlong *)CONCAT44(local_1320._4_4_,0x200);
          local_1328 = (undefined8 *)CONCAT44(local_1328._4_4_,auVar52._0_4_);
          FUN_1804d9a00(local_12b8,local_12b8[0xb],*(undefined4 *)(local_12b8 + 10),
                        (int)(longlong)fVar43 << 0x18 | uVar38);
          *(undefined4 *)(puVar31 + 10) = 0;
          local_1250 = CONCAT44(local_116c,local_1170 - fVar49 * DAT_180b0a41c);
          local_12a8 = local_1154;
          local_1308 = local_1308 & 0xffffffff00000000;
          local_1318 = (char *)CONCAT71(local_1318._1_7_,(char)param_1[0x31]);
          local_1320 = (longlong *)0x0;
          local_1328 = &local_1250;
          local_12ac = fVar46;
          FUN_1804ad540("##rename",param_1 + 0x29,0x40,&local_12ac);
          *(undefined1 *)(param_1 + 0x31) = 0;
          if ((*(uint *)(DAT_180bb8ae8 + 0x1ec8) & 0x20) == 0) {
            if (*(int *)(DAT_180bb8ae8 + 0x1584) == *(int *)(DAT_180bb8ae8 + 0x1ec0)) {
              if (*(int *)(DAT_180bb8ae8 + 0x1ec0) != 0) {
                if (*(int *)(DAT_180bb8ae8 + 4) <= *(int *)(DAT_180bb8ae8 + 0x1588))
                goto LAB_180491159;
              }
            }
          }
          else if ((*(uint *)(DAT_180bb8ae8 + 0x1ec8) >> 6 & 1) != 0) {
LAB_180491159:
            if (((char)param_1[0x29] != '\0') && (cVar8 = FUN_1804c3390(0x20e,1,0), cVar8 == '\0'))
            {
              lVar14 = -1;
              do {
                lVar34 = lVar14 + 0x149;
                lVar14 = lVar14 + 1;
              } while (*(char *)((longlong)param_1 + lVar34) != '\0');
              FUN_180113930(local_130,param_1 + 0x29);
              *(undefined1 *)((longlong)param_1 + 0x214) = 1;
            }
            *(undefined4 *)((longlong)param_1 + 0x144) = 0xffffffff;
          }
        }
        else {
          lVar14 = DAT_180c62ca8;
          if (local_12d4 == local_1294) {
            lVar14 = DAT_180c62cb0;
          }
          fVar43 = auVar61._0_4_;
          fVar50 = fVar43;
          if (fVar43 <= auVar48._0_4_) {
            auVar48 = vminss_avx(auVar57._0_16_,auVar48);
            fVar50 = auVar48._0_4_;
          }
          uVar24 = 0;
          uVar38 = 0;
          do {
            fVar45 = (float)(DAT_1808da474 >> (uVar38 & 0x1f) & 0xff);
            uVar24 = uVar24 | (int)(longlong)
                                   (((float)(DAT_1808da478 >> (uVar38 & 0x1f) & 0xff) - fVar45) *
                                    fVar50 + fVar45 + fVar62) << (uVar38 & 0x1f);
            uVar38 = uVar38 + 8;
          } while ((int)uVar38 < 0x20);
          if (fVar43 <= auVar60._0_4_) {
            auVar48 = vminss_avx(auVar57._0_16_,auVar60);
            fVar43 = auVar48._0_4_;
          }
          uVar28 = 0;
          uVar38 = 0;
          do {
            fVar50 = (float)(uVar24 >> (uVar38 & 0x1f) & 0xff);
            uVar28 = uVar28 | (int)(longlong)
                                   (((float)(DAT_180b0a424 >> (uVar38 & 0x1f) & 0xff) - fVar50) *
                                    fVar43 + fVar50 + fVar62) << (uVar38 & 0x1f);
            uVar38 = uVar38 + 8;
          } while ((int)uVar38 < 0x20);
          fVar43 = local_1168 - DAT_180b0a41c * 14.0;
          fVar50 = local_1168 - DAT_180b0a41c * 30.0;
          plVar15 = local_130;
          if (0xf < (ulonglong)local_130[3]) {
            plVar15 = (longlong *)*local_130;
          }
          auVar48 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(fVar46 + fVar62)),1);
          local_12c8 = (char *)CONCAT44(local_12c8._4_4_,auVar48._0_4_);
          fVar46 = (float)FUN_180463350(lVar14,0x4159999a);
          local_12c8 = (char *)CONCAT44(fVar44 - fVar46 * fVar62,(float)local_12c8);
          local_1310 = CONCAT44(local_1310._4_4_,fVar43);
          local_1318 = (char *)CONCAT44(local_1318._4_4_,fVar50);
          local_1328 = (undefined8 *)CONCAT44(local_1328._4_4_,uVar28);
          local_1320 = plVar15;
          FUN_180463930(local_12b8,lVar14,0x4159999a,&local_12c8);
          bVar41 = local_12d8;
          cVar7 = local_12b0;
          fVar44 = local_1298;
        }
        uVar38 = local_1294;
        if (cVar19 != '\0') {
          if (local_12d4 != local_1294) {
            local_1290 = local_12d4;
          }
          local_1278 = local_1290;
        }
        if (*(short *)(DAT_180bb8ae8 + 0xb4a) == 2) {
          lVar14 = FUN_1804af210(DAT_180bb8ae8,0x290);
          uVar24 = local_12d4;
          if (*(char *)(lVar14 + 8) != '\0') goto LAB_1804913c2;
          if ((byte)uVar1 != 0) {
            *(uint *)((longlong)param_1 + 0x144) = local_12d4;
            plVar15 = local_130;
            if (0xf < (ulonglong)local_130[3]) {
              plVar15 = (longlong *)*local_130;
            }
            strncpy((char *)(param_1 + 0x29),(char *)plVar15,0x3f);
            *(undefined2 *)((longlong)param_1 + 0x187) = 0x100;
          }
        }
        else {
LAB_1804913c2:
          uVar24 = local_12d4;
        }
        puVar31 = local_12b8;
        if (bVar41 != 0) {
          puVar16 = &local_1260;
          if (uVar24 != uVar38) {
            puVar16 = &local_1278;
          }
          *puVar16 = uVar24;
          local_1290 = local_1278;
        }
        uVar38 = local_1290;
        if (cVar7 != '\0') {
          local_1258 = fVar58 - DAT_180b0a41c * 6.0;
          local_1288 = fVar44;
          local_125c = uVar24;
        }
        fVar58 = DAT_180b0a41c;
        FUN_18047d320(local_12b8,local_1160,local_1238,
                      DAT_180b0a41c * 6.0 * (auVar57._0_4_ - local_1238));
        iVar20 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
        if (iVar20 < 2) {
          FUN_1804c5a40("Calling PopID() too many times!");
          auVar51 = ZEXT464((uint)local_1268);
          auVar55 = ZEXT464((uint)local_1270);
          auVar27 = local_128;
          fVar58 = DAT_180b0a41c;
          fVar44 = local_1264;
          fVar43 = local_12a0;
        }
        else {
          *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar20 + -1;
          auVar51 = ZEXT464((uint)local_1268);
          auVar55 = ZEXT464((uint)local_1270);
          auVar27 = local_128;
          fVar44 = local_1264;
          fVar43 = local_12a0;
        }
      }
      local_138 = local_138 + 1;
      fVar46 = local_129c;
    } while (local_138 < (ulonglong)((longlong)pfStack_120 - (longlong)auVar27 >> 2));
    auVar52 = ZEXT464((uint)local_12a0);
    auVar54 = ZEXT464((uint)local_1254);
    uVar24 = local_1260;
    fVar44 = local_1274;
  }
  iVar20 = *(int *)(puVar31 + 0x14);
  iVar21 = iVar20 + -1;
  *(int *)(puVar31 + 0x14) = iVar21;
  if (iVar21 == 0) {
    puVar17 = (undefined8 *)(puVar31[7] + 0x3c);
  }
  else {
    puVar17 = (undefined8 *)((longlong)(iVar20 + -2) * 0x10 + puVar31[0x15]);
  }
  uVar47 = puVar17[1];
  puVar31[0xc] = *puVar17;
  puVar31[0xd] = uVar47;
  FUN_1804d9200(puVar31);
  fVar46 = auVar52._0_4_;
  if (auVar61._0_4_ < local_12d0) {
    fVar44 = DAT_180b0a41c * fVar59 + fVar44;
    auVar60 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 3.0 + fVar62)),1);
    auVar48 = vmaxss_avx(ZEXT416((uint)(DAT_180b0a41c * 18.0)),
                         ZEXT416((uint)((local_12a4 * local_12a4) / auVar54._0_4_)));
    auVar54 = ZEXT1664(auVar48);
    fVar58 = (*(float *)(param_1 + 0x32) / local_12d0) * (local_12a4 - auVar48._0_4_) + fVar46;
    fVar59 = auVar60._0_4_ + fVar44;
    local_12c8 = (char *)CONCAT44(local_12a4 + fVar46,fVar59);
    fVar43 = auVar60._0_4_ * fVar62;
    local_1320 = (longlong *)((ulonglong)local_1320 & 0xffffffff00000000);
    local_12ac = fVar44;
    local_12a8 = fVar46;
    local_1328._0_4_ = fVar43;
    FUN_1804df870(puVar31,&local_12ac,&local_12c8,0x8ffffff);
    local_12c8 = (char *)CONCAT44(fVar58 + auVar54._0_4_,fVar59);
    local_1320 = (longlong *)((ulonglong)local_1320 & 0xffffffff00000000);
    local_1328 = (undefined8 *)CONCAT44(local_1328._4_4_,fVar43);
    local_12ac = fVar44;
    local_12a8 = fVar58;
    FUN_1804df870(puVar31,&local_12ac,&local_12c8,0x46ffffff);
    fVar46 = auVar52._0_4_;
  }
  lVar14 = DAT_180bb8ae8;
  *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
  lVar14 = *(longlong *)(lVar14 + 0x14d0);
  *(float *)(lVar14 + 0x118) = local_129c;
  *(float *)(lVar14 + 0x11c) = local_1284;
  *(undefined1 *)(lVar14 + 0x159) = 1;
  local_12c8 = (char *)CONCAT44((fVar46 + local_12a4) - local_1284,local_128c);
  auVar52 = ZEXT464(0xbf800000);
  FUN_1804c6420(&local_12c8,auVar52._0_8_);
  if (-1 < (int)uVar38) {
    uVar28 = (int)(param_1[1] - *param_1 >> 3) - 1;
    if ((int)uVar28 < (int)uVar38) {
      uVar38 = uVar28;
    }
    if (uVar38 != *(uint *)(param_1 + 3)) {
      if (((DAT_180c62c58 != (longlong *)0x0) && (DAT_180c62c70 != 0)) &&
         (DAT_180c62c58[1] != *DAT_180c62c58)) {
        pcVar26 = (char *)(DAT_180c62c58[1] + -10);
        plVar15 = DAT_180c62c58;
        do {
          if (*pcVar26 != '\0') {
            FUN_18045c1c0(pcVar26 + -0x5e,*(undefined4 *)(pcVar26 + 2));
            *pcVar26 = '\0';
          }
          pcVar42 = pcVar26 + -0x5e;
          pcVar26 = pcVar26 + -0x68;
        } while (pcVar42 != (char *)*plVar15);
      }
      *(uint *)(param_1 + 3) = uVar38;
      lVar14 = *(longlong *)(*param_1 + (longlong)(int)uVar38 * 8);
      DAT_180c62c58 = (longlong *)(lVar14 + 0xd3d8);
      DAT_180c62c70 = lVar14 + 0x28;
      DAT_180c62c60 = lVar14 + 0x6a00;
      if (DAT_180c62c58 == (longlong *)0x0) {
        DAT_1808e4e34 = 0xffffffff;
      }
    }
    FUN_180113930(param_1 + 0x35,"Preset loaded",0xd);
    *(undefined4 *)(param_1 + 0x39) = 0x3f800000;
  }
  if (-1 < (int)uVar24) {
    lVar14 = *(longlong *)(*param_1 + (longlong)(int)uVar24 * 8);
    FUN_18063aed0(lVar14 + 0x6a00,lVar14 + 0x28,0x69d8);
    *(undefined4 *)(param_1 + 0xe37) = 0x3f800000;
  }
  plVar15 = *(longlong **)(DAT_180bb8ae8 + 0x14d0);
  uVar24 = ~*(uint *)(plVar15[0x22] + -4 + (longlong)(int)plVar15[0x21] * 4);
  pcVar26 = "##row_menu";
  cVar7 = '#';
  uVar38 = uVar24;
  do {
    pcVar26 = pcVar26 + 1;
    if (((cVar7 == '#') && (*pcVar26 == '#')) && (pcVar26[1] == '#')) {
      pcVar26 = pcVar26 + 2;
      uVar38 = uVar24;
    }
    else {
      uVar38 = crc32(uVar38,cVar7);
    }
    cVar7 = *pcVar26;
  } while (cVar7 != '\0');
  uVar38 = ~uVar38;
  if (*(uint *)(*plVar15 + 0x1534) == uVar38) {
    FUN_1804cf810(uVar38,0xb,"##row_menu");
  }
  pcVar42 = "#menu_x";
  pcVar26 = "#menu_y";
  if ((int)local_125c < 0) {
    piVar37 = local_1240;
  }
  else {
    *(uint *)((longlong)param_1 + 0x18c) = local_125c;
    FUN_1804c7740(uVar38,0);
    plVar15 = *(longlong **)(DAT_180bb8ae8 + 0x14d0);
    uVar28 = ~*(uint *)(plVar15[0x22] + -4 + (longlong)(int)plVar15[0x21] * 4);
    pcVar18 = "#menu_x";
    cVar7 = '#';
    uVar24 = uVar28;
    do {
      if (((cVar7 == '#') && (*pcVar18 == '#')) && (pcVar18[1] == '#')) {
        pcVar18 = pcVar18 + 2;
        uVar24 = uVar28;
      }
      else {
        uVar24 = crc32(uVar24,cVar7);
      }
      cVar7 = *pcVar18;
      pcVar18 = pcVar18 + 1;
    } while (cVar7 != '\0');
    uVar24 = ~uVar24;
    if (*(uint *)(*plVar15 + 0x1534) == uVar24) {
      FUN_1804cf810(uVar24,0xb,&DAT_180829b20);
    }
    piVar37 = local_1240;
    FUN_1804b1700(local_1240,uVar24,local_1258);
    plVar15 = *(longlong **)(DAT_180bb8ae8 + 0x14d0);
    uVar28 = ~*(uint *)(plVar15[0x22] + -4 + (longlong)(int)plVar15[0x21] * 4);
    pcVar18 = "#menu_y";
    cVar7 = '#';
    uVar24 = uVar28;
    do {
      if (((cVar7 == '#') && (*pcVar18 == '#')) && (pcVar18[1] == '#')) {
        pcVar18 = pcVar18 + 2;
        uVar24 = uVar28;
      }
      else {
        uVar24 = crc32(uVar24,cVar7);
      }
      cVar7 = *pcVar18;
      pcVar18 = pcVar18 + 1;
    } while (cVar7 != '\0');
    uVar24 = ~uVar24;
    if (*(uint *)(*plVar15 + 0x1534) == uVar24) {
      FUN_1804cf810(uVar24,0xb,&DAT_180829b10);
    }
    FUN_1804b1700(piVar37,uVar24,local_1288);
  }
  plVar15 = *(longlong **)(DAT_180bb8ae8 + 0x14d0);
  uVar28 = ~*(uint *)(plVar15[0x22] + -4 + (longlong)(int)plVar15[0x21] * 4);
  cVar7 = '#';
  uVar24 = uVar28;
  do {
    if (((cVar7 == '#') && (*pcVar26 == '#')) && (pcVar26[1] == '#')) {
      pcVar26 = pcVar26 + 2;
      uVar24 = uVar28;
    }
    else {
      uVar24 = crc32(uVar24,cVar7);
    }
    cVar7 = *pcVar26;
    pcVar26 = pcVar26 + 1;
  } while (cVar7 != '\0');
  uVar24 = ~uVar24;
  if (*(uint *)(*plVar15 + 0x1534) == uVar24) {
    FUN_1804cf810(uVar24,0xb,&DAT_180829b10);
  }
  puVar16 = *(uint **)(piVar37 + 2);
  uVar22 = (longlong)*piVar37;
  while (uVar39 = uVar22, uVar39 != 0) {
    uVar22 = uVar39 >> 1;
    if (puVar16[uVar22 * 4] < uVar24) {
      puVar16 = puVar16 + uVar22 * 4 + 4;
      uVar22 = uVar39 + (-1 - uVar22);
    }
  }
  if ((puVar16 == (uint *)((longlong)*piVar37 * 0x10 + *(longlong *)(piVar37 + 2))) ||
     (*puVar16 != uVar24)) {
    auVar54 = ZEXT1664(auVar61._0_16_);
  }
  else {
    auVar54 = ZEXT464(puVar16[2]);
  }
  fVar46 = auVar54._0_4_;
  plVar15 = *(longlong **)(DAT_180bb8ae8 + 0x14d0);
  uVar28 = ~*(uint *)(plVar15[0x22] + -4 + (longlong)(int)plVar15[0x21] * 4);
  cVar7 = '#';
  uVar24 = uVar28;
  do {
    if (((cVar7 == '#') && (*pcVar42 == '#')) && (pcVar42[1] == '#')) {
      pcVar42 = pcVar42 + 2;
      uVar24 = uVar28;
    }
    else {
      uVar24 = crc32(uVar24,cVar7);
    }
    cVar7 = *pcVar42;
    pcVar42 = pcVar42 + 1;
  } while (cVar7 != '\0');
  uVar24 = ~uVar24;
  if (*(uint *)(*plVar15 + 0x1534) == uVar24) {
    FUN_1804cf810(uVar24,0xb,&DAT_180829b20);
    fVar46 = auVar54._0_4_;
  }
  puVar16 = *(uint **)(piVar37 + 2);
  uVar22 = (longlong)*piVar37;
  while (uVar39 = uVar22, uVar39 != 0) {
    uVar22 = uVar39 >> 1;
    if (puVar16[uVar22 * 4] < uVar24) {
      puVar16 = puVar16 + uVar22 * 4 + 4;
      uVar22 = uVar39 + (-1 - uVar22);
    }
  }
  if ((puVar16 == (uint *)((longlong)*piVar37 * 0x10 + *(longlong *)(piVar37 + 2))) ||
     (*puVar16 != uVar24)) {
    local_12ac = auVar61._0_4_;
  }
  else {
    local_12ac = (float)puVar16[2];
  }
  local_12c8 = (char *)CONCAT44(fVar46,local_12ac);
  fVar58 = 4.0;
  local_12a8 = fVar46 - DAT_180b0a41c * 4.0;
  cVar7 = FUN_1804a8ab0(uVar38,&local_12ac,&local_12c8,DAT_180b0a41c * 140.0);
  lVar14 = DAT_180bb8ae8;
  if (cVar7 == '\0') goto LAB_1804924f4;
  local_1284 = *(float *)((longlong)param_1 + 0x18c);
  if (((int)local_1284 < 0) ||
     (local_12e8 = '\x01', (int)(param_1[1] - *param_1 >> 3) <= (int)local_1284)) {
    local_12e8 = '\0';
  }
  local_11e0._8_8_ = "Duplicate";
  local_11e0._0_8_ = "Rename";
  local_11d0._8_8_ = "Delete";
  local_11d0._0_8_ = "Export";
  local_1190[0] = &DAT_18082a288;
  local_1190[1] = &DAT_180858028;
  local_1190[2] = &DAT_18082a290;
  local_1190[3] = &DAT_180829a48;
  *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
  lVar34 = *(longlong *)(lVar14 + 0x14d0);
  uVar47 = *(undefined8 *)(lVar34 + 0x2c8);
  fVar46 = *(float *)(lVar34 + 0x118);
  fVar44 = *(float *)(lVar34 + 0x11c);
  if ((*(longlong *)(lVar34 + 0x1c8) == 0) && (*(longlong *)(lVar14 + 0x2338) == 0)) {
    pfVar30 = (float *)(lVar34 + 0x280);
  }
  else {
    pfVar30 = (float *)(lVar34 + 0x250);
  }
  fVar59 = *pfVar30 - fVar46;
  auVar48 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 26.0 + fVar62)),1);
  auVar57 = ZEXT1664(auVar48);
  auVar60 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * fVar58 + fVar62)),1);
  auVar54 = ZEXT1664(auVar60);
  local_12c8 = (char *)CONCAT44(auVar48._0_4_ * fVar58,fVar59);
  local_1250 = uVar47;
  FUN_1804c6420(&local_12c8,auVar52._0_8_);
  iVar20 = -1;
  iVar21 = 0;
  fVar58 = fVar46 - auVar54._0_4_;
  fVar46 = fVar59 + fVar46 + auVar54._0_4_;
  lVar14 = 0;
  fVar59 = 0.16;
  do {
    local_116c = (float)iVar21 * auVar57._0_4_ + fVar44;
    local_1170 = fVar58;
    local_130 = (longlong *)CONCAT44(auVar57._0_4_ + local_116c,fVar46);
    plVar36 = *(longlong **)(local_11e0 + lVar14);
    plVar15 = *(longlong **)(DAT_180bb8ae8 + 0x14d0);
    iVar10 = FUN_1804b0a90(plVar36,0,
                           *(undefined4 *)(plVar15[0x22] + -4 + (longlong)(int)plVar15[0x21] * 4));
    if (*(int *)(*plVar15 + 0x1534) == iVar10) {
      FUN_1804cf810(iVar10,0xb,plVar36);
    }
    local_1328 = (undefined8 *)CONCAT71(local_1328._1_7_,1);
    pbVar12 = (byte *)FUN_1804aad60(local_1248,iVar10,&local_1170,&local_130);
    if (pbVar12[2] != 0) {
      iVar20 = iVar21;
    }
    auVar48 = vpcmpeqd_avx(ZEXT116(*pbVar12),SUB6416(ZEXT464(0),0));
    auVar54 = ZEXT464(0x3f800000);
    auVar48 = vblendvps_avx(auVar54._0_16_,auVar61._0_16_,auVar48);
    auVar51._0_8_ = FUN_1804aaa10(iVar10 + 1,auVar48._0_8_,0x41b00000);
    auVar60 = auVar54._0_16_;
    auVar51._8_56_ = extraout_var_02;
    auVar48 = auVar51._0_16_;
    auVar52 = ZEXT1664(auVar48);
    fVar43 = auVar61._0_4_;
    if (fVar43 < (float)auVar51._0_8_) {
      if (iVar21 == 3) {
        fVar50 = ((float)(DAT_180b0a430 >> 0x18) / 255.0) * fVar59;
        fVar45 = fVar43;
        if (fVar43 <= fVar50) {
          auVar48 = vminss_avx(auVar60,ZEXT416((uint)fVar50));
          fVar45 = auVar48._0_4_;
        }
        uVar38 = (int)(longlong)(fVar45 * 255.0 + fVar62) << 0x18 | DAT_180b0a430 & 0xffffff;
      }
      else {
        uVar38 = DAT_180b0a4fc;
      }
      fVar50 = ((float)(uVar38 >> 0x18) / 255.0) * (float)auVar51._0_8_;
      if (fVar43 <= fVar50) {
        auVar48 = vminss_avx(auVar60,ZEXT416((uint)fVar50));
        fVar43 = auVar48._0_4_;
      }
      local_1320 = (longlong *)((ulonglong)local_1320 & 0xffffffff00000000);
      local_1328 = (undefined8 *)CONCAT44(local_1328._4_4_,DAT_180b0a41c * 5.0);
      FUN_1804df870(uVar47,&local_1170,&local_130,
                    (int)(longlong)(fVar43 * 255.0 + fVar62) << 0x18 | uVar38 & 0xffffff);
      auVar60 = auVar54._0_16_;
      auVar48 = auVar52._0_16_;
    }
    fVar50 = auVar48._0_4_;
    fVar43 = auVar61._0_4_;
    if (iVar21 == 3) {
      if (fVar43 <= fVar50) {
        auVar48 = vminss_avx(auVar60,auVar48);
        fVar43 = auVar48._0_4_;
      }
      uVar24 = 0;
      uVar38 = 0;
      do {
        fVar45 = (float)(DAT_180b0a430 >> (uVar38 & 0x1f) & 0xff);
        uVar24 = uVar24 | (int)(longlong)
                               (((float)(0xff7878ffU >> (uVar38 & 0x1f) & 0xff) - fVar45) * fVar43 +
                                fVar45 + fVar62) << (uVar38 & 0x1f);
        uVar38 = uVar38 + 8;
      } while ((int)uVar38 < 0x20);
      plVar36 = *(longlong **)(local_11e0 + lVar14);
    }
    else {
      if (fVar43 <= fVar50) {
        auVar48 = vminss_avx(auVar60,auVar48);
        fVar43 = auVar48._0_4_;
      }
      uVar24 = 0;
      uVar38 = 0;
      do {
        fVar45 = (float)(0xffa09492U >> (uVar38 & 0x1f) & 0xff);
        uVar24 = uVar24 | (int)(longlong)
                               (((float)(DAT_1808da478 >> (uVar38 & 0x1f) & 0xff) - fVar45) * fVar43
                                + fVar45 + fVar62) << (uVar38 & 0x1f);
        uVar38 = uVar38 + 8;
      } while ((int)uVar38 < 0x20);
      uVar47 = local_1250;
    }
    fVar43 = (local_130._4_4_ + local_116c) * fVar62;
    fVar50 = DAT_180b0a41c * 2.0 * fVar50;
    auVar48 = vroundss_avx(ZEXT816(0),
                           ZEXT416((uint)(DAT_180b0a41c * 14.0 + local_1170 + fVar50 + fVar62)),1);
    local_12c8 = (char *)CONCAT44(fVar43,auVar48._0_4_);
    local_1320 = *(longlong **)((longlong)local_1190 + lVar14);
    local_1328._0_4_ = (float)uVar24;
    FUN_180463b40(uVar47,DAT_180c62cc0,0x41200000,&local_12c8);
    auVar48 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 13.6 + fVar62)),1);
    auVar48 = vmaxss_avx(SUB6416(ZEXT464(0x3f800000),0),auVar48);
    auVar52 = ZEXT1664(auVar48);
    lVar34 = FUN_1804e97d0(DAT_180c62ca8,auVar48._0_8_,0xbf800000);
    lVar11 = FUN_1804e95f0(lVar34,0x48);
    uVar47 = local_1250;
    if (lVar11 == 0) {
      fVar45 = auVar52._0_4_ * fVar62;
    }
    else {
      fVar45 = (*(float *)(lVar11 + 0x14) - *(float *)(lVar11 + 0xc)) *
               (auVar52._0_4_ / *(float *)(lVar34 + 0x14));
    }
    auVar48 = vroundss_avx(ZEXT816(0),
                           ZEXT416((uint)(DAT_180b0a41c * 28.0 + local_1170 + fVar50 + fVar62)),1);
    local_12ac = auVar48._0_4_;
    local_12a8 = fVar43 - fVar45 * fVar62;
    local_1318 = (char *)0x0;
    local_1328 = (undefined8 *)CONCAT44(local_1328._4_4_,uVar24);
    local_1320 = plVar36;
    FUN_180463450(local_1250,DAT_180c62ca8,0x4159999a,&local_12ac);
    plVar15 = local_f8;
    fVar43 = local_1284;
    iVar21 = iVar21 + 1;
    lVar14 = lVar14 + 8;
  } while (iVar21 < 4);
  if ((-1 < iVar20) && (local_12e8 != '\0')) {
    lVar14 = (longlong)(int)local_1284;
    pcVar26 = *(char **)(*local_f8 + lVar14 * 8);
    if (iVar20 == 0) {
      *(float *)((longlong)local_f8 + 0x144) = local_1284;
      if (0xf < *(ulonglong *)(pcVar26 + 0x18)) {
        pcVar26 = *(char **)pcVar26;
      }
      strncpy((char *)(local_f8 + 0x29),pcVar26,0x3f);
      *(undefined2 *)((longlong)plVar15 + 0x187) = 0x100;
    }
    else if (iVar20 == 1) {
      if ((((local_1284 == *(float *)(local_f8 + 3)) && (DAT_180c62c58 != (longlong *)0x0)) &&
          (DAT_180c62c70 != 0)) && (DAT_180c62c58[1] != *DAT_180c62c58)) {
        pcVar42 = (char *)(DAT_180c62c58[1] + -10);
        plVar36 = DAT_180c62c58;
        do {
          if (*pcVar42 != '\0') {
            FUN_18045c1c0(pcVar42 + -0x5e,*(undefined4 *)(pcVar42 + 2));
            *pcVar42 = '\0';
          }
          pcVar18 = pcVar42 + -0x5e;
          pcVar42 = pcVar42 + -0x68;
        } while (pcVar18 != (char *)*plVar36);
      }
      local_12b8 = (undefined8 *)0x0;
      FUN_1804841d0(&local_12b8);
      if (0x7fffffffffffffffU - (longlong)*(undefined8 **)(pcVar26 + 0x10) < 7) {
                    /* WARNING: Subroutine does not return */
        FUN_18015bb70();
      }
      local_1318 = (char *)0x7;
      local_1320 = (longlong *)0x1808581d8;
      local_1328 = *(undefined8 **)(pcVar26 + 0x10);
      FUN_18015a9c0(&local_11b0);
      puVar31 = local_12b8;
      if (local_12b8 != &local_11b0) {
        FUN_18015c010(local_12b8);
        *puVar31 = CONCAT71(local_11b0._1_7_,(undefined1)local_11b0);
        puVar31[1] = uStack_11a8;
        puVar31[2] = uStack_11a0;
        puVar31[3] = uStack_1198;
        uStack_11a0 = 0;
        uStack_1198 = 0xf;
        local_11b0._0_1_ = 0;
      }
      FUN_18015c010(&local_11b0);
      puVar31[4] = *(undefined8 *)(pcVar26 + 0x20);
      FUN_18063aed0(puVar31 + 5,pcVar26 + 0x28,0x69d8);
      FUN_18063aed0(puVar31 + 0xd40,pcVar26 + 0x6a00,0x69d8);
      plVar36 = puVar31 + 0x1a7b;
      if (plVar36 != (longlong *)(pcVar26 + 0xd3d8)) {
        lVar34 = *(longlong *)(pcVar26 + 0xd3d8);
        FUN_1804928b0(plVar36,lVar34,(*(longlong *)(pcVar26 + 0xd3e0) - lVar34) / 0x68);
      }
      lVar34 = puVar31[0x1a7c];
      for (lVar11 = *plVar36; lVar11 != lVar34; lVar11 = lVar11 + 0x68) {
        *(undefined2 *)(lVar11 + 0x5d) = 0;
        *(undefined4 *)(lVar11 + 100) = 0;
      }
      puVar17 = (undefined8 *)(*plVar15 + (lVar14 + 1) * 8);
      puVar40 = (undefined8 *)plVar15[1];
      if (puVar40 == (undefined8 *)plVar15[2]) {
        FUN_180485470(plVar15,puVar17,&local_12b8);
LAB_1804923d4:
        puVar33 = local_12b8;
      }
      else {
        local_12b8 = (undefined8 *)0x0;
        if (puVar17 == puVar40) {
          *puVar40 = puVar31;
          plVar15[1] = plVar15[1] + 8;
          goto LAB_1804923d4;
        }
        puVar32 = puVar40 + -1;
        uVar47 = *puVar32;
        *puVar32 = 0;
        *puVar40 = uVar47;
        plVar15[1] = plVar15[1] + 8;
        local_f0 = puVar31;
        local_f8 = plVar15;
        while (puVar32 != puVar17) {
          puVar32 = puVar32 + -1;
          puVar40 = puVar40 + -1;
          FUN_180492c20(puVar40,puVar32);
        }
        FUN_180492c20(puVar17,&local_f0);
        FUN_1804842c0(&local_f0);
      }
      iVar20 = (int)plVar15[3];
      if ((int)fVar43 < iVar20) {
        iVar20 = iVar20 + 1;
        *(int *)(plVar15 + 3) = iVar20;
      }
      lVar14 = *(longlong *)(*plVar15 + (longlong)iVar20 * 8);
      DAT_180c62c58 = (longlong *)(lVar14 + 0xd3d8);
      DAT_180c62c70 = lVar14 + 0x28;
      DAT_180c62c60 = lVar14 + 0x6a00;
      if (DAT_180c62c58 == (longlong *)0x0) {
        DAT_1808e4e34 = 0xffffffff;
      }
      *(undefined1 *)((longlong)plVar15 + 0x214) = 1;
      FUN_180113930(plVar15 + 0x35,"Preset duplicated",0x11);
      *(undefined4 *)(plVar15 + 0x39) = 0x3f800000;
      if (puVar33 != (undefined8 *)0x0) {
        FUN_1804853b0(puVar33 + 0x1a7b);
        FUN_18015c010(puVar33);
        if (DAT_180c7df30 == (undefined8 *)0x0) {
          local_f8 = (longlong *)0x180827288;
          local_f0 = (undefined8 *)0x15;
          DAT_180c7df30 = (undefined8 *)FUN_180451750(&local_f8);
        }
        (**(code **)(*(longlong *)*DAT_180c7df30 + 0x18))((longlong *)*DAT_180c7df30,puVar33);
      }
    }
    else if (iVar20 == 2) {
      cVar7 = FUN_18048ea20(local_f8,local_1284);
      if (cVar7 != '\0') {
        FUN_180113930(plVar15 + 0x35,"Preset copied to clipboard",0x1a);
        *(undefined4 *)(plVar15 + 0x39) = 0x3f800000;
      }
    }
    else if ((ulonglong)(local_f8[1] - *local_f8 >> 3) < 2) {
      FUN_180113930(local_f8 + 0x35,"The last preset can\'t be deleted",0x20);
      *(undefined4 *)(plVar15 + 0x39) = 0x3f800000;
    }
    else if (local_f8[0x33] == 0) {
      local_f8[0x33] = (longlong)pcVar26;
      *(undefined4 *)(local_f8 + 0x34) = 0x3f800000;
      FUN_180113930(local_f8 + 0x35,"Preset deleted",0xe);
      *(undefined4 *)(plVar15 + 0x39) = 0x3f800000;
    }
    FUN_1804c7bf0();
  }
  FUN_1804aeac0();
LAB_1804924f4:
  FUN_1804aeac0();
  FUN_180159650(local_128);
}



