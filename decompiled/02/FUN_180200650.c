// FUN_180200650 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180200650 */

undefined8 FUN_180200650(undefined8 param_1,longlong param_2,undefined *param_3,uint param_4)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  ULONGLONG UVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  ulonglong uVar15;
  undefined4 uVar16;
  undefined1 local_378 [4];
  undefined4 local_374;
  undefined *local_370;
  char local_368;
  char local_367;
  char local_366;
  char local_365;
  char local_364;
  char local_363;
  char local_362;
  char local_361;
  undefined1 local_360;
  undefined *local_358;
  undefined4 local_350;
  undefined4 local_34c;
  undefined4 local_348;
  undefined4 local_344;
  uint local_340 [2];
  undefined *local_338 [2];
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined1 local_288;
  char cStack_287;
  undefined4 local_278 [2];
  undefined *local_270;
  undefined1 local_268;
  undefined4 local_264;
  undefined4 local_260;
  undefined1 local_25c;
  undefined4 local_258;
  undefined4 local_254;
  undefined4 local_250;
  undefined4 local_24c;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 local_1a8;
  undefined8 local_1a7;
  undefined8 uStack_19f;
  undefined8 uStack_197;
  undefined8 uStack_18f;
  undefined8 local_187;
  undefined8 uStack_17f;
  undefined8 uStack_177;
  undefined8 uStack_16f;
  undefined8 local_167;
  undefined8 uStack_15f;
  undefined8 uStack_157;
  undefined8 uStack_14f;
  undefined8 local_147;
  undefined8 uStack_13f;
  undefined8 uStack_137;
  undefined8 uStack_12f;
  undefined8 local_127;
  undefined8 uStack_11f;
  undefined8 uStack_117;
  undefined8 uStack_10f;
  undefined1 local_107;
  undefined4 local_104;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined2 local_58;
  
  uVar15 = (((((ulonglong)param_4 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
             (ulonglong)(param_4 >> 8 & 0xff)) * 0x100000001b3 ^ (ulonglong)(param_4 >> 0x10 & 0xff)
            ) * 0x100000001b3 ^ (ulonglong)(param_4 >> 0x18)) * 0x100000001b3 & DAT_180cca960;
  lVar12 = *(longlong *)(DAT_180cca948 + 8 + uVar15 * 0x10);
  if (lVar12 == DAT_180cca938) {
LAB_180200735:
    uVar15 = 0xffffffffffffffff;
    iVar8 = DAT_180c63814;
    local_340[0] = param_4;
    local_338[0] = param_3;
    if (DAT_180c63814 == 0) {
      UVar11 = GetTickCount64();
      if (UVar11 < DAT_180c63818) {
        iVar8 = 0;
      }
      else {
        local_358 = &DAT_1808e96f0;
        iVar8 = FUN_1805f68d0(&DAT_1808e96f0);
        if (iVar8 != 0) goto LAB_1802017de;
        if (DAT_1808e973c == 0x7fffffff) {
          DAT_1808e973c = 0x7ffffffe;
          goto LAB_1802017d3;
        }
        if ((DAT_180c63814 == 0) && (DAT_180c63818 <= UVar11)) {
          DAT_180c63814 = FUN_1804174b0("C_EconItemView",0x373ee446);
          if (DAT_180c63814 == 0) {
            DAT_180c63818 = UVar11 + 1000;
          }
          else {
            DAT_180c63818 = 0xffffffffffffffff;
          }
        }
        iVar8 = DAT_180c63814;
        FUN_1805f68fc(&DAT_1808e96f0);
      }
    }
    lVar12 = FUN_18017ea70();
    *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
    if (param_3 + iVar8 == (undefined *)0x0) {
      local_366 = '\0';
      local_350 = local_370._0_4_;
    }
    else {
      local_374 = 0;
      cVar7 = FUN_1804514f0(&local_374,param_3 + iVar8,4);
      if (cVar7 == '\0') {
        local_350 = local_370._0_4_;
        local_366 = '\0';
      }
      else {
        local_350 = local_374;
        local_366 = '\x01';
      }
    }
    lVar12 = FUN_18017ea70();
    if (*(int *)(lVar12 + 4) != 0) {
      *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
    }
    iVar8 = DAT_180c63810;
    if (DAT_180c63810 == 0) {
      UVar11 = GetTickCount64();
      if (UVar11 < DAT_180c63808) {
        iVar8 = 0;
      }
      else {
        local_358 = &DAT_1808e96a0;
        iVar8 = FUN_1805f68d0(&DAT_1808e96a0);
        if (iVar8 != 0) goto LAB_1802017de;
        if (DAT_1808e96ec == 0x7fffffff) {
          DAT_1808e96ec = 0x7ffffffe;
          goto LAB_1802017d3;
        }
        if ((DAT_180c63810 == 0) && (DAT_180c63808 <= UVar11)) {
          DAT_180c63810 = FUN_1804174b0("C_EconItemView",0x34b55816);
          if (DAT_180c63810 == 0) {
            DAT_180c63808 = UVar11 + 1000;
          }
          else {
            DAT_180c63808 = 0xffffffffffffffff;
          }
        }
        iVar8 = DAT_180c63810;
        FUN_1805f68fc(&DAT_1808e96a0);
      }
    }
    lVar12 = FUN_18017ea70();
    *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
    if (param_3 + iVar8 == (undefined *)0x0) {
      local_368 = '\0';
      local_358 = local_338[0];
    }
    else {
      local_358 = (undefined *)0x0;
      cVar7 = FUN_1804514f0(&local_358,param_3 + iVar8,8);
      if (cVar7 == '\0') {
        local_358 = local_338[0];
        local_368 = '\0';
      }
      else {
        local_368 = '\x01';
      }
    }
    lVar12 = FUN_18017ea70();
    if (*(int *)(lVar12 + 4) != 0) {
      *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
    }
    iVar8 = DAT_180c637fc;
    if (DAT_180c637fc == 0) {
      UVar11 = GetTickCount64();
      if (UVar11 < DAT_180c63800) {
        iVar8 = 0;
      }
      else {
        local_370 = &DAT_1808e9650;
        iVar8 = FUN_1805f68d0(&DAT_1808e9650);
        if (iVar8 != 0) goto LAB_1802017de;
        if (DAT_1808e969c == 0x7fffffff) {
          DAT_1808e969c = 0x7ffffffe;
          goto LAB_1802017d3;
        }
        if ((DAT_180c637fc == 0) && (DAT_180c63800 <= UVar11)) {
          DAT_180c637fc = FUN_1804174b0("C_EconItemView",0x216db5e3);
          if (DAT_180c637fc == 0) {
            DAT_180c63800 = UVar11 + 1000;
          }
          else {
            DAT_180c63800 = 0xffffffffffffffff;
          }
        }
        iVar8 = DAT_180c637fc;
        FUN_1805f68fc(&DAT_1808e9650);
      }
    }
    lVar12 = FUN_18017ea70();
    *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
    if (param_3 + iVar8 == (undefined *)0x0) {
      local_367 = '\0';
      local_360 = local_378[0];
    }
    else {
      local_378[0] = 0;
      cVar7 = FUN_1804514f0(local_378,param_3 + iVar8,1);
      if (cVar7 == '\0') {
        local_360 = local_378[0];
        local_367 = '\0';
      }
      else {
        local_360 = local_378[0];
        local_367 = '\x01';
      }
    }
    local_378[0] = local_360;
    lVar12 = FUN_18017ea70();
    if (*(int *)(lVar12 + 4) != 0) {
      *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
    }
    iVar8 = DAT_180c637f8;
    if (DAT_180c637f8 == 0) {
      UVar11 = GetTickCount64();
      if (UVar11 < DAT_180c637f0) {
        iVar8 = 0;
      }
      else {
        local_370 = &DAT_1808e9600;
        iVar8 = FUN_1805f68d0(&DAT_1808e9600);
        if (iVar8 != 0) goto LAB_1802017de;
        if (DAT_1808e964c == 0x7fffffff) {
          DAT_1808e964c = 0x7ffffffe;
          goto LAB_1802017d3;
        }
        if ((DAT_180c637f8 == 0) && (DAT_180c637f0 <= UVar11)) {
          DAT_180c637f8 = FUN_1804174b0("C_EconItemView",0xdf29c2c);
          if (DAT_180c637f8 == 0) {
            DAT_180c637f0 = UVar11 + 1000;
          }
          else {
            DAT_180c637f0 = 0xffffffffffffffff;
          }
        }
        iVar8 = DAT_180c637f8;
        FUN_1805f68fc(&DAT_1808e9600);
      }
    }
    lVar12 = FUN_18017ea70();
    *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
    if (param_3 + iVar8 == (undefined *)0x0) {
      local_365 = '\0';
      local_34c = local_370._0_4_;
    }
    else {
      local_374 = 0;
      cVar7 = FUN_1804514f0(&local_374,param_3 + iVar8,4);
      if (cVar7 == '\0') {
        local_34c = local_370._0_4_;
        local_365 = '\0';
      }
      else {
        local_34c = local_374;
        local_365 = '\x01';
      }
    }
    lVar12 = FUN_18017ea70();
    if (*(int *)(lVar12 + 4) != 0) {
      *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
    }
    iVar8 = DAT_180c637e4;
    if (DAT_180c637e4 == 0) {
      UVar11 = GetTickCount64();
      if (UVar11 < DAT_180c637e8) {
        iVar8 = 0;
      }
      else {
        local_370 = &DAT_1808e95b0;
        iVar8 = FUN_1805f68d0(&DAT_1808e95b0);
        if (iVar8 != 0) goto LAB_1802017de;
        if (DAT_1808e95fc == 0x7fffffff) {
          DAT_1808e95fc = 0x7ffffffe;
          goto LAB_1802017d3;
        }
        if ((DAT_180c637e4 == 0) && (DAT_180c637e8 <= UVar11)) {
          DAT_180c637e4 = FUN_1804174b0("C_EconItemView",0xc65de986);
          if (DAT_180c637e4 == 0) {
            DAT_180c637e8 = UVar11 + 1000;
          }
          else {
            DAT_180c637e8 = 0xffffffffffffffff;
          }
        }
        iVar8 = DAT_180c637e4;
        FUN_1805f68fc(&DAT_1808e95b0);
      }
    }
    lVar12 = FUN_18017ea70();
    *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
    if (param_3 + iVar8 == (undefined *)0x0) {
      local_364 = '\0';
      local_348 = local_370._0_4_;
    }
    else {
      local_374 = 0;
      cVar7 = FUN_1804514f0(&local_374,param_3 + iVar8,4);
      if (cVar7 == '\0') {
        local_348 = local_370._0_4_;
        local_364 = '\0';
      }
      else {
        local_348 = local_374;
        local_364 = '\x01';
      }
    }
    lVar12 = FUN_18017ea70();
    if (*(int *)(lVar12 + 4) != 0) {
      *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
    }
    iVar8 = DAT_180c637e0;
    if (DAT_180c637e0 == 0) {
      UVar11 = GetTickCount64();
      if (UVar11 < DAT_180c637d8) {
        iVar8 = 0;
      }
      else {
        local_370 = &DAT_1808e9560;
        iVar8 = FUN_1805f68d0(&DAT_1808e9560);
        if (iVar8 != 0) goto LAB_1802017de;
        if (DAT_1808e95ac == 0x7fffffff) {
          DAT_1808e95ac = 0x7ffffffe;
          goto LAB_1802017d3;
        }
        if ((DAT_180c637e0 == 0) && (DAT_180c637d8 <= UVar11)) {
          DAT_180c637e0 = FUN_1804174b0("C_EconItemView",0x710abdd);
          if (DAT_180c637e0 == 0) {
            DAT_180c637d8 = UVar11 + 1000;
          }
          else {
            DAT_180c637d8 = 0xffffffffffffffff;
          }
        }
        iVar8 = DAT_180c637e0;
        FUN_1805f68fc(&DAT_1808e9560);
      }
    }
    lVar12 = FUN_18017ea70();
    *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
    if (param_3 + iVar8 == (undefined *)0x0) {
      local_363 = '\0';
    }
    else {
      local_378[0] = 0;
      cVar7 = FUN_1804514f0(local_378,param_3 + iVar8,1);
      if (cVar7 == '\0') {
        local_363 = '\0';
      }
      else {
        local_363 = '\x01';
      }
    }
    lVar12 = FUN_18017ea70();
    if (*(int *)(lVar12 + 4) != 0) {
      *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
    }
    iVar8 = DAT_180c637cc;
    if (DAT_180c637cc == 0) {
      UVar11 = GetTickCount64();
      if (UVar11 < DAT_180c637d0) {
        iVar8 = 0;
      }
      else {
        local_370 = &DAT_1808e9510;
        iVar8 = FUN_1805f68d0(&DAT_1808e9510);
        if (iVar8 != 0) goto LAB_1802017de;
        if (DAT_1808e955c == 0x7fffffff) {
          DAT_1808e955c = 0x7ffffffe;
          goto LAB_1802017d3;
        }
        if ((DAT_180c637cc == 0) && (DAT_180c637d0 <= UVar11)) {
          DAT_180c637cc = FUN_1804174b0("C_EconEntity",0xa12d48f);
          if (DAT_180c637cc == 0) {
            DAT_180c637d0 = UVar11 + 1000;
          }
          else {
            DAT_180c637d0 = 0xffffffffffffffff;
          }
        }
        iVar8 = DAT_180c637cc;
        FUN_1805f68fc(&DAT_1808e9510);
      }
    }
    lVar12 = FUN_18017ea70();
    *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
    if (iVar8 + param_2 == 0) {
      local_362 = '\0';
      local_344 = local_370._0_4_;
    }
    else {
      local_374 = 0;
      cVar7 = FUN_1804514f0(&local_374,iVar8 + param_2,4);
      if (cVar7 == '\0') {
        local_344 = local_370._0_4_;
        local_362 = '\0';
      }
      else {
        local_344 = local_374;
        local_362 = '\x01';
      }
    }
    lVar12 = FUN_18017ea70();
    if (*(int *)(lVar12 + 4) != 0) {
      *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
    }
    iVar8 = DAT_180c637c8;
    if (DAT_180c637c8 == 0) {
      UVar11 = GetTickCount64();
      if (UVar11 < DAT_180c637c0) {
        iVar8 = 0;
      }
      else {
        local_370 = &DAT_1808e94c0;
        iVar8 = FUN_1805f68d0(&DAT_1808e94c0);
        if (iVar8 != 0) goto LAB_1802017de;
        if (DAT_1808e950c == 0x7fffffff) {
          DAT_1808e950c = 0x7ffffffe;
          goto LAB_1802017d3;
        }
        if ((DAT_180c637c8 == 0) && (DAT_180c637c0 <= UVar11)) {
          DAT_180c637c8 = FUN_1804174b0("C_EconEntity",0xa1b165b2);
          if (DAT_180c637c8 == 0) {
            DAT_180c637c0 = UVar11 + 1000;
          }
          else {
            DAT_180c637c0 = 0xffffffffffffffff;
          }
        }
        iVar8 = DAT_180c637c8;
        FUN_1805f68fc(&DAT_1808e94c0);
      }
    }
    lVar12 = FUN_18017ea70();
    *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
    if (iVar8 + param_2 == 0) {
      local_361 = '\0';
      local_374 = local_370._0_4_;
    }
    else {
      local_374 = 0;
      cVar7 = FUN_1804514f0(&local_374,iVar8 + param_2,4);
      if (cVar7 == '\0') {
        local_374 = local_370._0_4_;
        local_361 = '\0';
      }
      else {
        local_361 = '\x01';
      }
    }
    lVar12 = FUN_18017ea70();
    if (*(int *)(lVar12 + 4) != 0) {
      *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
    }
    iVar8 = DAT_180c637b4;
    if (DAT_180c637b4 == 0) {
      UVar11 = GetTickCount64();
      if (UVar11 < DAT_180c637b8) {
        iVar8 = 0;
      }
      else {
        local_370 = &DAT_1808e9470;
        iVar8 = FUN_1805f68d0(&DAT_1808e9470);
        if (iVar8 != 0) goto LAB_1802017de;
        if (DAT_1808e94bc == 0x7fffffff) {
          DAT_1808e94bc = 0x7ffffffe;
          goto LAB_1802017d3;
        }
        if ((DAT_180c637b4 == 0) && (DAT_180c637b8 <= UVar11)) {
          DAT_180c637b4 = FUN_1804174b0("C_EconEntity",0x86253266);
          if (DAT_180c637b4 == 0) {
            DAT_180c637b8 = UVar11 + 1000;
          }
          else {
            DAT_180c637b8 = 0xffffffffffffffff;
          }
        }
        iVar8 = DAT_180c637b4;
        FUN_1805f68fc(&DAT_1808e9470);
      }
    }
    lVar12 = FUN_18017ea70();
    *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
    if (iVar8 + param_2 == 0) {
      bVar2 = false;
    }
    else {
      local_370 = (undefined *)((ulonglong)local_370 & 0xffffffff00000000);
      cVar7 = FUN_1804514f0(&local_370,iVar8 + param_2,4);
      if (cVar7 == '\0') {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
    }
    uVar16 = local_370._0_4_;
    lVar12 = FUN_18017ea70();
    if (*(int *)(lVar12 + 4) != 0) {
      *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
    }
    iVar8 = DAT_180c637b0;
    if ((DAT_180c637b0 == 0) && (UVar11 = GetTickCount64(), DAT_180c637a8 <= UVar11)) {
      local_370 = &DAT_1808e9420;
      iVar8 = FUN_1805f68d0(&DAT_1808e9420);
      if (iVar8 != 0) goto LAB_1802017de;
      if (DAT_1808e946c == 0x7fffffff) {
        DAT_1808e946c = 0x7ffffffe;
        goto LAB_1802017d3;
      }
      if ((DAT_180c637b0 == 0) && (DAT_180c637a8 <= UVar11)) {
        DAT_180c637b0 = FUN_1804174b0("C_EconEntity",0x67ecc1e7);
        if (DAT_180c637b0 == 0) {
          DAT_180c637a8 = UVar11 + 1000;
        }
        else {
          DAT_180c637a8 = 0xffffffffffffffff;
        }
      }
      iVar8 = DAT_180c637b0;
      FUN_1805f68fc(&DAT_1808e9420);
    }
    lVar12 = FUN_18017ea70();
    *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
    if (iVar8 + param_2 == 0) {
      bVar3 = false;
    }
    else {
      local_370 = (undefined *)((ulonglong)local_370 & 0xffffffff00000000);
      cVar7 = FUN_1804514f0(&local_370,iVar8 + param_2,4);
      if (cVar7 == '\0') {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
    }
    uVar5 = local_370._0_4_;
    lVar12 = FUN_18017ea70();
    if (*(int *)(lVar12 + 4) != 0) {
      *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
    }
    iVar8 = DAT_180c6379c;
    if ((DAT_180c6379c == 0) && (UVar11 = GetTickCount64(), DAT_180c637a0 <= UVar11)) {
      local_370 = &DAT_1808e93d0;
      iVar8 = FUN_1805f68d0(&DAT_1808e93d0);
      if (iVar8 != 0) goto LAB_1802017de;
      if (DAT_1808e941c == 0x7fffffff) {
        DAT_1808e941c = 0x7ffffffe;
        goto LAB_1802017d3;
      }
      if ((DAT_180c6379c == 0) && (DAT_180c637a0 <= UVar11)) {
        DAT_180c6379c = FUN_1804174b0("C_EconItemView",0xafd12ee8);
        if (DAT_180c6379c == 0) {
          DAT_180c637a0 = UVar11 + 1000;
        }
        else {
          DAT_180c637a0 = 0xffffffffffffffff;
        }
      }
      iVar8 = DAT_180c6379c;
      FUN_1805f68fc(&DAT_1808e93d0);
    }
    if (DAT_180c63798 == 0) {
      UVar11 = GetTickCount64();
      if (DAT_180c63790 <= UVar11) {
        local_370 = &DAT_1808e9380;
        iVar9 = FUN_1805f68d0(&DAT_1808e9380);
        if (iVar9 != 0) goto LAB_1802017de;
        if (DAT_1808e93cc == 0x7fffffff) {
          DAT_1808e93cc = 0x7ffffffe;
          goto LAB_1802017d3;
        }
        if ((DAT_180c63798 == 0) && (DAT_180c63790 <= UVar11)) {
          DAT_180c63798 = FUN_1804174b0("C_EconItemView",0xa74a6ed8);
          DAT_180c63790 = 0xffffffffffffffff;
          if (DAT_180c63798 == 0) {
            DAT_180c63790 = UVar11 + 1000;
          }
        }
        iVar9 = DAT_180c63798;
        FUN_1805f68fc(&DAT_1808e9380);
        if (iVar9 != 0) goto LAB_180201360;
      }
    }
    else {
LAB_180201360:
      if (DAT_180c63784 == 0) {
        UVar11 = GetTickCount64();
        if (DAT_180c63788 <= UVar11) {
          local_370 = &DAT_1808e9330;
          iVar9 = FUN_1805f68d0(&DAT_1808e9330);
          if (iVar9 != 0) goto LAB_1802017de;
          if (DAT_1808e937c == 0x7fffffff) {
            DAT_1808e937c = 0x7ffffffe;
            goto LAB_1802017d3;
          }
          if ((DAT_180c63784 == 0) && (DAT_180c63788 <= UVar11)) {
            DAT_180c63784 = FUN_1804174b0("C_EconItemView",0x6a67d4c4);
            DAT_180c63788 = 0xffffffffffffffff;
            if (DAT_180c63784 == 0) {
              DAT_180c63788 = UVar11 + 1000;
            }
          }
          iVar9 = DAT_180c63784;
          FUN_1805f68fc(&DAT_1808e9330);
          if (iVar9 != 0) goto LAB_180201416;
        }
      }
      else {
LAB_180201416:
        puVar14 = local_338[0];
        if (iVar8 == 0) {
          cStack_287 = '\0';
          puVar13 = &local_328;
        }
        else {
          puVar13 = (undefined8 *)FUN_180204770(&local_328,local_338[0] + iVar8);
        }
        iVar8 = DAT_180c63780;
        local_f8 = *puVar13;
        uStack_f0 = puVar13[1];
        uStack_e8 = puVar13[2];
        uStack_e0 = puVar13[3];
        local_d8 = puVar13[4];
        uStack_d0 = puVar13[5];
        uStack_c8 = puVar13[6];
        uStack_c0 = puVar13[7];
        local_b8 = puVar13[8];
        uStack_b0 = puVar13[9];
        uStack_a8 = puVar13[10];
        uStack_a0 = puVar13[0xb];
        local_98 = puVar13[0xc];
        uStack_90 = puVar13[0xd];
        uStack_88 = puVar13[0xe];
        uStack_80 = puVar13[0xf];
        local_78 = puVar13[0x10];
        uStack_70 = puVar13[0x11];
        uStack_68 = puVar13[0x12];
        uStack_60 = puVar13[0x13];
        local_58 = *(undefined2 *)(puVar13 + 0x14);
        if ((DAT_180c63780 == 0) && (UVar11 = GetTickCount64(), DAT_180c63778 <= UVar11)) {
          local_338[0] = &DAT_1808e92e0;
          iVar8 = FUN_1805f68d0(&DAT_1808e92e0);
          if (iVar8 != 0) goto LAB_1802017de;
          if (DAT_1808e932c == 0x7fffffff) {
            DAT_1808e932c = 0x7ffffffe;
            goto LAB_1802017d3;
          }
          if ((DAT_180c63780 == 0) && (DAT_180c63778 <= UVar11)) {
            DAT_180c63780 = FUN_1804174b0("C_EconItemView",0xa74a6ed8);
            DAT_180c63778 = 0xffffffffffffffff;
            if (DAT_180c63780 == 0) {
              DAT_180c63778 = UVar11 + 1000;
            }
          }
          iVar8 = DAT_180c63780;
          FUN_1805f68fc(&DAT_1808e92e0);
        }
        FUN_180204770(&local_328,puVar14 + iVar8);
        iVar8 = DAT_180c6376c;
        if ((DAT_180c6376c == 0) && (UVar11 = GetTickCount64(), DAT_180c63770 <= UVar11)) {
          local_338[0] = &DAT_1808e9290;
          iVar8 = FUN_1805f68d0(&DAT_1808e9290);
          if (iVar8 != 0) {
LAB_1802017de:
                    /* WARNING: Subroutine does not return */
            FUN_1805f6d44(5);
          }
          if (DAT_1808e92dc == 0x7fffffff) {
            DAT_1808e92dc = 0x7ffffffe;
LAB_1802017d3:
                    /* WARNING: Subroutine does not return */
            FUN_1805f6d44(6);
          }
          if ((DAT_180c6376c == 0) && (DAT_180c63770 <= UVar11)) {
            DAT_180c6376c = FUN_1804174b0("C_EconItemView",0x6a67d4c4);
            if (DAT_180c6376c == 0) {
              uVar15 = UVar11 + 1000;
            }
            DAT_180c63770 = uVar15;
          }
          iVar8 = DAT_180c6376c;
          FUN_1805f68fc(&DAT_1808e9290);
        }
        lVar12 = FUN_18017ea70();
        *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
        puVar14 = puVar14 + iVar8;
        bVar4 = false;
        if (puVar14 != (undefined *)0x0) {
          local_370 = (undefined *)((ulonglong)local_370 & 0xffffffff00000000);
          cVar7 = FUN_1804514f0(&local_370,puVar14,4);
          if (cVar7 == '\0') {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
        }
        uVar6 = local_370._0_4_;
        lVar12 = FUN_18017ea70();
        if (*(int *)(lVar12 + 4) != 0) {
          *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
        }
        if (((((local_368 != '\0') && (local_367 != '\0')) && (local_366 != '\0')) &&
            (((local_365 != '\0' && (local_364 != '\0')) &&
             ((local_363 != '\0' && ((local_362 != '\0' && (local_361 != '\0')))))))) &&
           ((bVar2 && ((((bVar3 && (local_58._1_1_ != '\0')) && (cStack_287 != '\0')) && (bVar4)))))
           ) {
          local_278[0] = local_350;
          local_270 = local_358;
          local_268 = local_360;
          local_264 = local_34c;
          local_260 = local_348;
          local_25c = local_378[0];
          local_258 = local_344;
          local_254 = local_374;
          local_24c = uVar5;
          local_248 = local_f8;
          uStack_240 = uStack_f0;
          uStack_238 = uStack_e8;
          uStack_230 = uStack_e0;
          local_228 = local_d8;
          uStack_220 = uStack_d0;
          uStack_218 = uStack_c8;
          uStack_210 = uStack_c0;
          local_208 = local_b8;
          uStack_200 = uStack_b0;
          uStack_1f8 = uStack_a8;
          uStack_1f0 = uStack_a0;
          local_1e8 = local_98;
          uStack_1e0 = uStack_90;
          uStack_1d8 = uStack_88;
          uStack_1d0 = uStack_80;
          local_1c8 = local_78;
          uStack_1c0 = uStack_70;
          uStack_1b8 = uStack_68;
          uStack_1b0 = uStack_60;
          local_1a8 = (undefined1)local_58;
          local_1a7 = local_328;
          uStack_19f = uStack_320;
          uStack_197 = uStack_318;
          uStack_18f = uStack_310;
          local_187 = local_308;
          uStack_17f = uStack_300;
          uStack_177 = uStack_2f8;
          uStack_16f = uStack_2f0;
          local_167 = local_2e8;
          uStack_15f = uStack_2e0;
          uStack_157 = uStack_2d8;
          uStack_14f = uStack_2d0;
          local_147 = local_2c8;
          uStack_13f = uStack_2c0;
          uStack_137 = uStack_2b8;
          uStack_12f = uStack_2b0;
          local_127 = local_2a8;
          uStack_11f = uStack_2a0;
          uStack_117 = uStack_298;
          uStack_10f = uStack_290;
          local_107 = local_288;
          local_104 = uVar6;
          local_250 = uVar16;
          FUN_180204840(&DAT_180cca930,local_338,local_340,local_278);
          goto LAB_18020070f;
        }
      }
    }
    uVar10 = 0;
  }
  else {
    uVar1 = *(uint *)(lVar12 + 0x10);
    while (param_4 != uVar1) {
      if (lVar12 == *(longlong *)(DAT_180cca948 + uVar15 * 0x10)) goto LAB_180200735;
      lVar12 = *(longlong *)(lVar12 + 8);
      uVar1 = *(uint *)(lVar12 + 0x10);
    }
LAB_18020070f:
    uVar10 = 1;
  }
  return uVar10;
}



