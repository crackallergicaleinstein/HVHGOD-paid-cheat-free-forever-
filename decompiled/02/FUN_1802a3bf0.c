// FUN_1802a3bf0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802a3bf0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1802a3bf0(undefined8 param_1,undefined8 *param_2,longlong *param_3,undefined *param_4,
                  float *param_5)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint7 uVar5;
  undefined *puVar6;
  char cVar7;
  char cVar8;
  undefined1 uVar9;
  int iVar10;
  ULONGLONG UVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong *puVar16;
  float *pfVar17;
  float *pfVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  byte bVar21;
  char *pcVar22;
  undefined8 *puVar23;
  char *pcVar24;
  ulonglong uVar25;
  int iVar26;
  longlong lVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  bool bVar34;
  float fVar35;
  float fVar36;
  undefined8 uVar37;
  double dVar38;
  float fVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [64];
  double dVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [64];
  undefined1 auVar45 [16];
  undefined1 auVar46 [64];
  undefined1 auStack_968 [32];
  ulonglong local_948;
  double local_940;
  double local_938;
  double local_930;
  double local_928;
  double local_920;
  ulonglong local_918;
  ulonglong local_910;
  ulonglong local_908;
  undefined1 local_8f8 [16];
  undefined8 local_8e8;
  undefined4 local_8e0;
  undefined2 local_8dc;
  float local_8d8 [2];
  undefined *local_8d0;
  undefined8 local_8c8;
  undefined4 local_8c0;
  undefined2 local_8bc;
  undefined *local_8b8;
  float local_8b0;
  undefined1 local_8a8 [16];
  int local_898 [2];
  undefined8 local_890;
  float local_888;
  float local_884;
  float fStack_880;
  float local_87c [3];
  undefined8 local_870;
  undefined8 uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined1 local_850 [16];
  undefined8 local_840;
  undefined8 uStack_838;
  undefined1 local_830 [40];
  undefined1 local_808 [864];
  longlong local_4a8;
  undefined *local_4a0;
  longlong local_498;
  undefined8 local_490;
  undefined8 local_488;
  undefined4 local_480;
  float local_47c;
  undefined8 local_478;
  undefined2 local_470;
  undefined1 local_46e;
  undefined1 local_468 [16];
  undefined8 local_458;
  undefined8 uStack_450;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  float local_e8;
  float local_e4;
  float local_e0;
  longlong local_d8;
  longlong local_d0;
  undefined8 local_c8;
  longlong local_c0 [5];
  ulonglong local_98;
  
  local_98 = DAT_1808d5f00 ^ (ulonglong)auStack_968;
  local_87c[1] = 0.0;
  local_4a0 = (undefined *)0x0;
  local_498 = 0;
  local_490 = 0;
  local_488 = 0;
  local_480 = 0;
  fVar39 = 0.0;
  local_47c = 0.0;
  local_478 = 0;
  local_470 = 0;
  local_46e = 0;
  local_458 = 0;
  uStack_450 = 0xf;
  local_468._1_15_ = SUB1615((undefined1  [16])0x0,1);
  auVar40[0xf] = 0;
  auVar40._0_15_ = local_468._1_15_;
  local_468 = auVar40 << 8;
  local_8e8 = param_2;
  local_8b8 = param_4;
  FUN_18063ab10(&local_448,0,0x360);
  local_448 = 0;
  uStack_440 = 0;
  local_438 = 0;
  uStack_430 = 0x3f80000000000000;
  local_428 = 0;
  uStack_420 = 0;
  local_418 = 0;
  uStack_410 = 0x3f80000000000000;
  local_408 = 0;
  uStack_400 = 0;
  local_3f8 = 0;
  uStack_3f0 = 0x3f80000000000000;
  local_3e8 = 0;
  uStack_3e0 = 0;
  local_3d8 = 0;
  uStack_3d0 = 0x3f80000000000000;
  local_3c8 = 0;
  uStack_3c0 = 0;
  local_3b8 = 0;
  uStack_3b0 = 0x3f80000000000000;
  local_3a8 = 0;
  uStack_3a0 = 0;
  local_398 = 0;
  uStack_390 = 0x3f80000000000000;
  local_388 = 0;
  uStack_380 = 0;
  local_378 = 0;
  uStack_370 = 0x3f80000000000000;
  local_368 = 0;
  uStack_360 = 0;
  uStack_358 = 0;
  uStack_350 = 0x3f80000000000000;
  local_348 = 0;
  uStack_340 = 0;
  local_338 = 0;
  uStack_330 = 0x3f80000000000000;
  local_328 = 0;
  uStack_320 = 0;
  local_318 = 0;
  uStack_310 = 0x3f80000000000000;
  local_308 = 0;
  uStack_300 = 0;
  local_2f8 = 0;
  uStack_2f0 = 0x3f80000000000000;
  local_2e8 = 0;
  uStack_2e0 = 0;
  local_2d8 = 0;
  uStack_2d0 = 0x3f80000000000000;
  local_2c8 = 0;
  uStack_2c0 = 0;
  local_2b8 = 0;
  uStack_2b0 = 0x3f80000000000000;
  local_2a8 = 0;
  uStack_2a0 = 0;
  local_298 = 0;
  uStack_290 = 0x3f80000000000000;
  local_288 = 0;
  uStack_280 = 0;
  local_278 = 0;
  uStack_270 = 0x3f80000000000000;
  local_268 = 0;
  uStack_260 = 0;
  local_258 = 0;
  uStack_250 = 0x3f80000000000000;
  local_248 = 0;
  uStack_240 = 0;
  local_238 = 0;
  uStack_230 = 0x3f80000000000000;
  local_228 = 0;
  uStack_220 = 0;
  local_218 = 0;
  uStack_210 = 0x3f80000000000000;
  local_208 = 0;
  uStack_200 = 0;
  local_1f8 = 0;
  uStack_1f0 = 0x3f80000000000000;
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1d8 = 0;
  uStack_1d0 = 0x3f80000000000000;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0x3f80000000000000;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_198 = 0;
  uStack_190 = 0x3f80000000000000;
  local_188 = 0;
  uStack_180 = 0;
  local_178 = 0;
  uStack_170 = 0x3f80000000000000;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  uStack_150 = 0x3f80000000000000;
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  uStack_130 = 0x3f80000000000000;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  uStack_110 = 0x3f80000000000000;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0x3f80000000000000;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0[1] = 0;
  local_c0[2] = 0;
  local_c0[3] = 0xf;
  local_c0[0] = 0;
  local_4a8 = *param_3;
  local_e8 = fVar39;
  local_e4 = fVar39;
  local_e0 = fVar39;
  if (local_4a8 != 0) {
    uVar33 = 0xffffffffffffffff;
    iVar10 = DAT_180c6e470;
    if (DAT_180c6e470 == 0) {
      UVar11 = GetTickCount64();
      if (UVar11 < DAT_180c6e478) {
        iVar10 = 0;
      }
      else {
        local_8e8 = (undefined8 *)&DAT_1808f45a0;
        iVar10 = FUN_1805f68d0(&DAT_1808f45a0);
        if (iVar10 != 0) goto LAB_1802a69d3;
        if (DAT_1808f45ec == 0x7fffffff) {
          DAT_1808f45ec = 0x7ffffffe;
          goto LAB_1802a69f2;
        }
        if ((DAT_180c6e470 == 0) && (DAT_180c6e478 <= UVar11)) {
          DAT_180c6e470 = FUN_1804174b0("CCSPlayerController",0x3db3c8d0);
          if (DAT_180c6e470 == 0) {
            DAT_180c6e478 = UVar11 + 1000;
          }
          else {
            DAT_180c6e478 = 0xffffffffffffffff;
          }
        }
        iVar10 = DAT_180c6e470;
        FUN_1805f68fc(&DAT_1808f45a0);
      }
    }
    if (*(char *)(iVar10 + local_4a8) != '\0') {
      iVar10 = DAT_180c6e464;
      if (DAT_180c6e464 == 0) {
        UVar11 = GetTickCount64();
        if (UVar11 < DAT_180c6e468) {
          iVar10 = 0;
        }
        else {
          local_8e8 = (undefined8 *)&DAT_1808f45f0;
          iVar10 = FUN_1805f68d0(&DAT_1808f45f0);
          if (iVar10 != 0) goto LAB_1802a69d3;
          if (DAT_1808f463c == 0x7fffffff) {
            DAT_1808f463c = 0x7ffffffe;
            goto LAB_1802a69f2;
          }
          if ((DAT_180c6e464 == 0) && (DAT_180c6e468 <= UVar11)) {
            DAT_180c6e464 = FUN_1804174b0("CBasePlayerController",0x7c628c1d);
            if (DAT_180c6e464 == 0) {
              DAT_180c6e468 = UVar11 + 1000;
            }
            else {
              DAT_180c6e468 = 0xffffffffffffffff;
            }
          }
          iVar10 = DAT_180c6e464;
          FUN_1805f68fc(&DAT_1808f45f0);
        }
      }
      local_898[0] = *(int *)(iVar10 + local_4a8);
      if (local_898[0] != 0) {
        local_498 = FUN_1803d4150((longlong)iVar10,local_898[0]);
        plVar13 = (longlong *)(param_4 + 8);
        if (param_4[0x28] == '\0') {
          plVar13 = (longlong *)(param_4 + 0x10);
        }
        local_478._0_2_ = CONCAT11(local_498 == *plVar13,(char)local_478);
        if ((local_498 != 0) && (local_498 != *plVar13)) {
          iVar10 = DAT_180c6e450;
          if (DAT_180c6e450 == 0) {
            UVar11 = GetTickCount64();
            if (UVar11 < DAT_180c6e458) {
              iVar10 = 0;
            }
            else {
              local_8e8 = (undefined8 *)&DAT_1808f4550;
              iVar10 = FUN_1805f68d0(&DAT_1808f4550);
              if (iVar10 != 0) goto LAB_1802a69d3;
              if (DAT_1808f459c == 0x7fffffff) {
                DAT_1808f459c = 0x7ffffffe;
                goto LAB_1802a69f2;
              }
              if ((DAT_180c6e450 == 0) && (DAT_180c6e458 <= UVar11)) {
                DAT_180c6e450 = FUN_1804174b0("C_BaseEntity",0x84cdad2);
                if (DAT_180c6e450 == 0) {
                  DAT_180c6e458 = UVar11 + 1000;
                }
                else {
                  DAT_180c6e458 = 0xffffffffffffffff;
                }
              }
              iVar10 = DAT_180c6e450;
              FUN_1805f68fc(&DAT_1808f4550);
            }
          }
          local_490 = CONCAT44(local_490._4_4_,*(int *)(iVar10 + local_498));
          if (0 < *(int *)(iVar10 + local_498)) {
            iVar10 = DAT_180c6e460;
            if (DAT_180c6e460 == 0) {
              UVar11 = GetTickCount64();
              if (UVar11 < DAT_180c6e438) {
                iVar10 = 0;
              }
              else {
                local_8e8 = (undefined8 *)&DAT_1808f4500;
                iVar10 = FUN_1805f68d0(&DAT_1808f4500);
                if (iVar10 != 0) goto LAB_1802a69d3;
                if (DAT_1808f454c == 0x7fffffff) {
                  DAT_1808f454c = 0x7ffffffe;
                  goto LAB_1802a69f2;
                }
                if ((DAT_180c6e460 == 0) && (DAT_180c6e438 <= UVar11)) {
                  DAT_180c6e460 = FUN_1804174b0("C_BaseEntity",0xa5bfefb3);
                  if (DAT_180c6e460 == 0) {
                    DAT_180c6e438 = UVar11 + 1000;
                  }
                  else {
                    DAT_180c6e438 = 0xffffffffffffffff;
                  }
                }
                iVar10 = DAT_180c6e460;
                FUN_1805f68fc(&DAT_1808f4500);
              }
            }
            lVar15 = local_478;
            local_490 = CONCAT44(*(int *)(iVar10 + local_498),(undefined4)local_490);
            if ((param_4[0x29] == '\0') ||
               (*(int *)(param_4 + 0x24) != *(int *)(iVar10 + local_498))) {
              local_478 = CONCAT71(local_478._1_7_,1);
              lVar27 = local_478;
              local_478._1_1_ = SUB81(lVar15,1);
              bVar34 = local_478._1_1_ != '\0';
              local_478 = lVar27;
              puVar12 = (undefined8 *)
                        FUN_1802a97e0(&local_8e8,
                                      &DAT_180cadd58 + (ulonglong)(-(uint)bVar34 & 2) * 0xbe0,1);
              puVar19 = (undefined8 *)*puVar12;
              local_8c0 = *(undefined4 *)(puVar12 + 1);
              local_8bc = *(undefined2 *)((longlong)puVar12 + 0xc);
              local_8d8[0] = (float)CONCAT22(local_8d8[0]._2_2_,local_8bc);
              local_8c8 = puVar19;
              plVar13 = (longlong *)FUN_180113860(&DAT_180b909c8);
              lVar15 = DAT_180b909c0;
              if (plVar13 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
                UNLOCK();
              }
              LOCK();
              UNLOCK();
              bVar21 = (byte)DAT_180b909c8;
              DAT_180b909c8 = (longlong)plVar13;
              if ((bVar21 & 3) == 2) {
                FUN_1805fa36c(&DAT_180b909c8);
              }
              if (lVar15 != 0) {
                if (local_478._1_1_ == '\0') {
                  uVar25 = (ulonglong)((char)local_478 == '\0');
                }
                else {
                  uVar25 = 2;
                }
                if (local_478._1_1_ == '\0') {
                  uVar14 = (ulonglong)((char)local_478 == '\0');
                }
                else {
                  uVar14 = 2;
                }
                pcVar22 = (char *)(uVar14 * 0x11ac + lVar15);
                if ((&DAT_180cadd58)[uVar25 * 0xbe0] != '\0') {
                  local_8e8 = puVar19;
                  if (pcVar22 != pcVar22 + 0x11ac) {
                    local_8e8._0_1_ = (char)puVar19;
                    pcVar24 = pcVar22;
                    cVar7 = (char)local_8e8;
                    do {
                      if ((cVar7 != '\0') || (*pcVar24 != '\0')) {
                        cVar7 = '\x01';
                      }
                      local_8e8 = (undefined8 *)CONCAT71(local_8e8._1_7_,cVar7);
                      pcVar24 = pcVar24 + 0x9c;
                    } while (pcVar24 != pcVar22 + 0x11ac);
                  }
                  puVar19 = local_8e8;
                  local_8e8._0_2_ = CONCAT11(pcVar22[0x9c],(char)local_8e8);
                  if ((((((pcVar22[0x270] == '\0') && (pcVar22[0x618] == '\0')) &&
                        (pcVar22[0x7ec] == '\0')) &&
                       ((pcVar22[0x888] == '\0' && (pcVar22[0xa5c] == '\0')))) &&
                      ((pcVar22[0xccc] == '\0' &&
                       ((pcVar22[0xd68] == '\0' && (pcVar22[0xe04] == '\0')))))) &&
                     (pcVar22[0xea0] == '\0')) {
                    local_8e8._3_5_ = SUB85(puVar19,3);
                    local_8e8._0_3_ = (uint3)(ushort)local_8e8;
                    if (pcVar22[0xfd8] != '\0') goto LAB_1802a487d;
                  }
                  else {
LAB_1802a487d:
                    local_8e8._0_3_ = CONCAT12(1,(ushort)local_8e8);
                  }
                  local_8e8._0_4_ = CONCAT13(pcVar22[0x30c],(uint3)local_8e8);
                  local_8e8._0_7_ = CONCAT16(pcVar22[0xaf8],(undefined6)local_8e8);
                  uVar5 = (uint7)local_8e8;
                  if ((pcVar22[0x3a8] != '\0') ||
                     (local_8e8 = (undefined8 *)(ulonglong)(uint7)local_8e8, pcVar22[0x1074] != '\0'
                     )) {
                    local_8e8 = (undefined8 *)CONCAT17(1,uVar5);
                  }
                  if ((pcVar22[0x444] != '\0') || (local_8e0._0_1_ = 0, pcVar22[0xf3c] != '\0')) {
                    local_8e0._0_1_ = 1;
                  }
                  local_8e0 = CONCAT13(pcVar22[0x4e0],
                                       CONCAT12(pcVar22[0x9c0],
                                                CONCAT11(pcVar22[0x57c],(undefined1)local_8e0)));
                  local_8dc = CONCAT11(pcVar22[0x6b4],pcVar22[0x1110]);
                  local_8c8 = local_8e8;
                  local_8c0 = local_8e0;
                  local_8d8[0] = (float)CONCAT22(local_8d8[0]._2_2_,local_8dc);
                  local_8bc = local_8dc;
                }
              }
              if (plVar13 != (longlong *)0x0) {
                LOCK();
                plVar1 = plVar13 + 1;
                lVar15 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)lVar15 == 1) {
                  (**(code **)*plVar13)(plVar13);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar13 + 0xc);
                  iVar10 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar10 == 1) {
                    (**(code **)(*plVar13 + 8))(plVar13);
                  }
                }
              }
              if ((((char)local_478 != '\0') && (DAT_180cadce0 != '\0')) ||
                 ((char)local_8c8 != '\0')) {
                iVar10 = DAT_180c6e440;
                if (DAT_180c6e440 == 0) {
                  UVar11 = GetTickCount64();
                  if (UVar11 < DAT_180c6e448) {
                    iVar10 = 0;
                  }
                  else {
                    local_8e8 = (undefined8 *)&DAT_1808f4460;
                    iVar10 = FUN_1805f68d0(&DAT_1808f4460);
                    if (iVar10 != 0) goto LAB_1802a69d3;
                    if (DAT_1808f44ac == 0x7fffffff) {
                      DAT_1808f44ac = 0x7ffffffe;
                      goto LAB_1802a69f2;
                    }
                    if ((DAT_180c6e440 == 0) && (DAT_180c6e448 <= UVar11)) {
                      DAT_180c6e440 = FUN_1804174b0("C_BaseEntity",0x9d930423);
                      if (DAT_180c6e440 == 0) {
                        DAT_180c6e448 = UVar11 + 1000;
                      }
                      else {
                        DAT_180c6e448 = 0xffffffffffffffff;
                      }
                    }
                    iVar10 = DAT_180c6e440;
                    FUN_1805f68fc(&DAT_1808f4460);
                  }
                }
                local_8e8 = *(undefined8 **)(iVar10 + local_498);
                if (local_8e8 != (undefined8 *)0x0) {
                  auVar46 = ZEXT864(0x412e848000000000);
                  auVar44 = ZEXT864(0);
                  auVar41 = ZEXT864(0x408f400000000000);
                  if (local_8c8._1_1_ != '\0') {
                    iVar10 = DAT_180c6e42c;
                    if (DAT_180c6e42c == 0) {
                      UVar11 = GetTickCount64();
                      if (UVar11 < DAT_180c6e430) {
                        iVar10 = 0;
                      }
                      else {
                        local_8d0 = &DAT_1808f44b0;
                        iVar10 = FUN_1805f68d0(&DAT_1808f44b0);
                        if (iVar10 != 0) goto LAB_1802a69d3;
                        if (DAT_1808f44fc == 0x7fffffff) {
                          DAT_1808f44fc = 0x7ffffffe;
                          goto LAB_1802a69f2;
                        }
                        if ((DAT_180c6e42c == 0) && (DAT_180c6e430 <= UVar11)) {
                          DAT_180c6e42c = FUN_1804174b0("CBasePlayerController",0xb22f805e);
                          if (DAT_180c6e42c == 0) {
                            DAT_180c6e430 = UVar11 + 1000;
                          }
                          else {
                            DAT_180c6e430 = 0xffffffffffffffff;
                          }
                        }
                        iVar10 = DAT_180c6e42c;
                        FUN_1805f68fc(&DAT_1808f44b0);
                      }
                    }
                    lVar27 = iVar10 + local_4a8;
                    lVar15 = FUN_18017ea70();
                    *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + 1;
                    bVar34 = false;
                    if (lVar27 != 0) {
                      local_8d0 = (undefined *)0x0;
                      cVar7 = FUN_1804514f0(&local_8d0,lVar27,8);
                      if (cVar7 == '\0') {
                        bVar34 = false;
                      }
                      else {
                        bVar34 = true;
                      }
                    }
                    puVar6 = local_8d0;
                    lVar15 = FUN_18017ea70();
                    if (*(int *)(lVar15 + 4) != 0) {
                      *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + -1;
                    }
                    local_4a0 = (undefined *)0x0;
                    if (bVar34) {
                      local_4a0 = puVar6;
                    }
                    iVar10 = DAT_180c6e418;
                    if (DAT_180c6e418 == 0) {
                      UVar11 = GetTickCount64();
                      if (UVar11 < DAT_180c6e420) {
                        iVar10 = 0;
                      }
                      else {
                        local_8d0 = &DAT_1808f4410;
                        iVar10 = FUN_1805f68d0(&DAT_1808f4410);
                        if (iVar10 != 0) goto LAB_1802a69d3;
                        if (DAT_1808f445c == 0x7fffffff) {
                          DAT_1808f445c = 0x7ffffffe;
                          goto LAB_1802a69f2;
                        }
                        if ((DAT_180c6e418 == 0) && (DAT_180c6e420 <= UVar11)) {
                          DAT_180c6e418 = FUN_1804174b0("CCSPlayerController",0xde63b6d1);
                          if (DAT_180c6e418 == 0) {
                            DAT_180c6e420 = UVar11 + 1000;
                          }
                          else {
                            DAT_180c6e420 = 0xffffffffffffffff;
                          }
                        }
                        iVar10 = DAT_180c6e418;
                        FUN_1805f68fc(&DAT_1808f4410);
                      }
                    }
                    lVar15 = *(longlong *)(iVar10 + local_4a8);
                    if (lVar15 != 0) {
                      plVar13 = (longlong *)FUN_1802ab550(&DAT_180cc9920,&local_870,&local_4a8);
                      lVar27 = *plVar13;
                      *(ulonglong *)(lVar27 + 0x48) = DAT_180cc99a0;
                      if ((*(longlong *)(lVar27 + 0x18) != lVar15) ||
                         (*(ulonglong *)(lVar27 + 0x40) <= DAT_180cc99a0)) {
                        *(longlong *)(lVar27 + 0x18) = lVar15;
                        local_8a8 = ZEXT816(0x1807d12e0);
                        FUN_18017bf40(local_8a8 + 8);
                        puVar12 = (undefined8 *)FUN_180454030(local_830,lVar15,0x80);
                        auVar45 = auVar46._0_16_;
                        auVar43 = auVar44._0_16_;
                        auVar40 = auVar41._0_16_;
                        puVar19 = (undefined8 *)(lVar27 + 0x20);
                        if (puVar19 != puVar12) {
                          FUN_18015c010(puVar19);
                          auVar45 = auVar46._0_16_;
                          auVar43 = auVar44._0_16_;
                          auVar40 = auVar41._0_16_;
                          uVar37 = puVar12[1];
                          uVar3 = puVar12[2];
                          uVar4 = puVar12[3];
                          *puVar19 = *puVar12;
                          *(undefined8 *)(lVar27 + 0x28) = uVar37;
                          *(undefined8 *)(lVar27 + 0x30) = uVar3;
                          *(undefined8 *)(lVar27 + 0x38) = uVar4;
                          puVar12[2] = 0;
                          puVar12[3] = 0xf;
                          *(undefined1 *)puVar12 = 0;
                        }
                        auVar41 = ZEXT1664(auVar40);
                        auVar44 = ZEXT1664(auVar43);
                        auVar46 = ZEXT1664(auVar45);
                        FUN_18015c010(local_830);
                        *(ulonglong *)(lVar27 + 0x40) = DAT_180cc99a0 + 2000;
                        FUN_18017bf40(&local_8d0);
                        puVar6 = local_8d0;
                        uVar28 = (longlong)local_8d0 - local_8a8._8_8_;
                        puVar16 = (ulonglong *)FUN_1802abe80();
                        uVar29 = *puVar16 + 1;
                        *puVar16 = uVar29;
                        uVar25 = puVar16[1];
                        puVar16[1] = uVar25 + uVar28;
                        uVar30 = puVar16[3] + (ulonglong)(999999 < uVar28);
                        puVar16[3] = uVar30;
                        uVar31 = puVar16[4] + (ulonglong)(4999999 < uVar28);
                        puVar16[4] = uVar31;
                        uVar32 = puVar16[5] + (ulonglong)(15999999 < uVar28);
                        puVar16[5] = uVar32;
                        uVar14 = puVar16[2];
                        if (puVar16[2] < uVar28) {
                          puVar16[2] = uVar28;
                          uVar14 = uVar28;
                        }
                        if ((puVar6 == (undefined *)puVar16[7]) ||
                           ((longlong)puVar16[7] <= (longlong)puVar6)) {
                          local_928 = (double)(longlong)((longlong)puVar6 - puVar16[6]) /
                                      auVar46._0_8_;
                          dVar42 = (double)(uVar25 + uVar28);
                          local_940 = auVar41._0_8_;
                          if (local_928 <= auVar44._0_8_) {
                            local_920 = 0.0;
                          }
                          else {
                            local_920 = (dVar42 / local_940) / local_928;
                          }
                          local_930 = dVar42 / auVar46._0_8_;
                          local_938 = (double)uVar14 / local_940;
                          local_940 = (dVar42 / (double)uVar29) / local_940;
                          local_948 = uVar29;
                          local_918 = uVar30;
                          local_910 = uVar31;
                          local_908 = uVar32;
                          FUN_1801af8a0(dVar42 / (double)uVar29,local_940,local_8a8._0_8_);
                          puVar16[2] = 0;
                          puVar16[1] = 0;
                          *puVar16 = 0;
                          puVar16[5] = 0;
                          puVar16[4] = 0;
                          puVar16[3] = 0;
                          puVar16[6] = (ulonglong)puVar6;
                          puVar16[7] = (ulonglong)(puVar6 + 5000000000);
                        }
                      }
                      plVar13 = (longlong *)(lVar27 + 0x20);
                      if ((longlong *)local_468 != plVar13) {
                        if (0xf < *(ulonglong *)(lVar27 + 0x38)) {
                          plVar13 = (longlong *)*plVar13;
                        }
                        FUN_180113930(local_468,plVar13,*(undefined8 *)(lVar27 + 0x30));
                      }
                    }
                  }
                  if (local_8c8._6_1_ != '\0') {
                    iVar10 = DAT_180c6e428;
                    if (DAT_180c6e428 == 0) {
                      UVar11 = GetTickCount64();
                      if (UVar11 < DAT_180c6e400) {
                        iVar10 = 0;
                      }
                      else {
                        local_8d0 = &DAT_1808f43c0;
                        iVar10 = FUN_1805f68d0(&DAT_1808f43c0);
                        if (iVar10 != 0) goto LAB_1802a69d3;
                        if (DAT_1808f440c == 0x7fffffff) {
                          DAT_1808f440c = 0x7ffffffe;
                          goto LAB_1802a69f2;
                        }
                        if ((DAT_180c6e428 == 0) && (DAT_180c6e400 <= UVar11)) {
                          DAT_180c6e428 = FUN_1804174b0("CCSPlayerController",0x84b7aa82);
                          if (DAT_180c6e428 == 0) {
                            DAT_180c6e400 = UVar11 + 1000;
                          }
                          else {
                            DAT_180c6e400 = 0xffffffffffffffff;
                          }
                        }
                        iVar10 = DAT_180c6e428;
                        FUN_1805f68fc(&DAT_1808f43c0);
                      }
                    }
                    lVar15 = *(longlong *)(iVar10 + local_4a8);
                    if (lVar15 != 0) {
                      iVar10 = DAT_180c6e408;
                      if (DAT_180c6e408 == 0) {
                        UVar11 = GetTickCount64();
                        if (UVar11 < DAT_180c6e410) {
                          iVar10 = 0;
                        }
                        else {
                          local_8d0 = &DAT_1808f4320;
                          iVar10 = FUN_1805f68d0(&DAT_1808f4320);
                          if (iVar10 != 0) goto LAB_1802a69d3;
                          if (DAT_1808f436c == 0x7fffffff) {
                            DAT_1808f436c = 0x7ffffffe;
                            goto LAB_1802a69f2;
                          }
                          if ((DAT_180c6e408 == 0) && (DAT_180c6e410 <= UVar11)) {
                            DAT_180c6e408 =
                                 FUN_1804174b0("CCSPlayerController_InGameMoneyServices",0xf7f4e98b)
                            ;
                            if (DAT_180c6e408 == 0) {
                              DAT_180c6e410 = UVar11 + 1000;
                            }
                            else {
                              DAT_180c6e410 = 0xffffffffffffffff;
                            }
                          }
                          iVar10 = DAT_180c6e408;
                          FUN_1805f68fc(&DAT_1808f4320);
                        }
                      }
                      local_488 = CONCAT44(local_488._4_4_,*(undefined4 *)(iVar10 + lVar15));
                    }
                  }
                  iVar10 = DAT_180c6e3f4;
                  cVar8 = (char)local_8c0;
                  cVar7 = local_8c8._7_1_;
                  if ((local_8c8._7_1_ != '\0') || ((char)local_8c0 != '\0')) {
                    if ((DAT_180c6e3f4 == 0) && (UVar11 = GetTickCount64(), DAT_180c6e3f8 <= UVar11)
                       ) {
                      local_8d0 = &DAT_1808f4370;
                      iVar10 = FUN_1805f68d0(&DAT_1808f4370);
                      if (iVar10 != 0) goto LAB_1802a69d3;
                      if (DAT_1808f43bc == 0x7fffffff) {
                        DAT_1808f43bc = 0x7ffffffe;
                        goto LAB_1802a69f2;
                      }
                      if ((DAT_180c6e3f4 == 0) && (DAT_180c6e3f8 <= UVar11)) {
                        DAT_180c6e3f4 = FUN_1804174b0("C_BasePlayerPawn",0xaabbb9b8);
                        if (DAT_180c6e3f4 == 0) {
                          DAT_180c6e3f8 = UVar11 + 1000;
                        }
                        else {
                          DAT_180c6e3f8 = 0xffffffffffffffff;
                        }
                      }
                      iVar10 = DAT_180c6e3f4;
                      FUN_1805f68fc(&DAT_1808f4370);
                    }
                    iVar26 = DAT_180c6e3e0;
                    lVar15 = *(longlong *)(iVar10 + local_498);
                    if (lVar15 != 0) {
                      if (cVar7 != '\0') {
                        if ((DAT_180c6e3e0 == 0) &&
                           (UVar11 = GetTickCount64(), DAT_180c6e3e8 <= UVar11)) {
                          local_8d0 = &DAT_1808f42d0;
                          iVar10 = FUN_1805f68d0(&DAT_1808f42d0);
                          if (iVar10 != 0) goto LAB_1802a69d3;
                          if (DAT_1808f431c == 0x7fffffff) {
                            DAT_1808f431c = 0x7ffffffe;
                            goto LAB_1802a69f2;
                          }
                          if ((DAT_180c6e3e0 == 0) && (DAT_180c6e3e8 <= UVar11)) {
                            DAT_180c6e3e0 = FUN_1804174b0("CCSPlayer_ItemServices",0x4240b6f6);
                            if (DAT_180c6e3e0 == 0) {
                              DAT_180c6e3e8 = UVar11 + 1000;
                            }
                            else {
                              DAT_180c6e3e8 = 0xffffffffffffffff;
                            }
                          }
                          iVar26 = DAT_180c6e3e0;
                          FUN_1805f68fc(&DAT_1808f42d0);
                        }
                        local_478._0_4_ =
                             CONCAT13(*(undefined1 *)(iVar26 + lVar15),(undefined3)local_478);
                      }
                      iVar10 = DAT_180c6e3f0;
                      if (cVar8 != '\0') {
                        if ((DAT_180c6e3f0 == 0) &&
                           (UVar11 = GetTickCount64(), DAT_180c6e3c8 <= UVar11)) {
                          local_8d0 = &DAT_1808f4280;
                          iVar10 = FUN_1805f68d0(&DAT_1808f4280);
                          if (iVar10 != 0) goto LAB_1802a69d3;
                          if (DAT_1808f42cc == 0x7fffffff) {
                            DAT_1808f42cc = 0x7ffffffe;
                            goto LAB_1802a69f2;
                          }
                          if ((DAT_180c6e3f0 == 0) && (DAT_180c6e3c8 <= UVar11)) {
                            DAT_180c6e3f0 = FUN_1804174b0("CCSPlayer_ItemServices",0x5af87af5);
                            if (DAT_180c6e3f0 == 0) {
                              DAT_180c6e3c8 = UVar11 + 1000;
                            }
                            else {
                              DAT_180c6e3c8 = 0xffffffffffffffff;
                            }
                          }
                          iVar10 = DAT_180c6e3f0;
                          FUN_1805f68fc(&DAT_1808f4280);
                        }
                        local_478._0_5_ =
                             CONCAT14(*(undefined1 *)(iVar10 + lVar15),(undefined4)local_478);
                      }
                    }
                  }
                  iVar10 = DAT_180c6e3d0;
                  if ((DAT_180c6e3d0 == 0) && (UVar11 = GetTickCount64(), DAT_180c6e3d8 <= UVar11))
                  {
                    local_8d0 = &DAT_1808f41e0;
                    iVar10 = FUN_1805f68d0(&DAT_1808f41e0);
                    if (iVar10 != 0) goto LAB_1802a69d3;
                    if (DAT_1808f422c == 0x7fffffff) {
                      DAT_1808f422c = 0x7ffffffe;
                      goto LAB_1802a69f2;
                    }
                    if ((DAT_180c6e3d0 == 0) && (DAT_180c6e3d8 <= UVar11)) {
                      DAT_180c6e3d0 = FUN_1804174b0("CGameSceneNode",0xe8b4eae5);
                      if (DAT_180c6e3d0 == 0) {
                        DAT_180c6e3d8 = UVar11 + 1000;
                      }
                      else {
                        DAT_180c6e3d8 = 0xffffffffffffffff;
                      }
                    }
                    iVar10 = DAT_180c6e3d0;
                    FUN_1805f68fc(&DAT_1808f41e0);
                  }
                  puVar19 = *(undefined8 **)((longlong)iVar10 + (longlong)local_8e8);
                  local_e0 = *(float *)((undefined8 *)((longlong)iVar10 + (longlong)local_8e8) + 1);
                  local_e8 = SUB84(puVar19,0);
                  local_8e8._4_4_ = (float)((ulonglong)puVar19 >> 0x20);
                  local_e4 = local_8e8._4_4_;
                  if (param_5 == (float *)0x0) {
                    local_890 = CONCAT44(DAT_180b8e2b8,DAT_180b8e2b4);
                    local_888 = DAT_180b8e2bc;
                    fVar35 = DAT_180b8e2b4;
                  }
                  else {
                    local_87c[0] = param_5[2];
                    local_884 = *param_5;
                    fStack_880 = param_5[1];
                    fVar35 = *param_5;
                  }
                  fVar35 = fVar35 - SUB84(puVar19,0);
                  pfVar17 = (float *)((longlong)&local_890 + 4);
                  if (param_5 != (float *)0x0) {
                    pfVar17 = &fStack_880;
                  }
                  pfVar18 = &local_888;
                  if (param_5 != (float *)0x0) {
                    pfVar18 = local_87c;
                  }
                  fVar36 = *pfVar18 - local_e0;
                  fVar35 = (*pfVar17 - local_8e8._4_4_) * (*pfVar17 - local_8e8._4_4_) +
                           fVar35 * fVar35 + fVar36 * fVar36;
                  fVar36 = fVar39;
                  local_8e8 = puVar19;
                  if (fVar35 != fVar39) {
                    if (fVar35 < 0.0) {
                      fVar36 = (float)FUN_18061e150(fVar35);
                    }
                    else {
                      fVar36 = SQRT(fVar35);
                    }
                  }
                  local_47c = fVar36 * 0.0254;
                  if (local_8bc._1_1_ != '\0') {
                    iVar10 = DAT_180c6e3bc;
                    if (DAT_180c6e3bc == 0) {
                      UVar11 = GetTickCount64();
                      if (DAT_180c6e3c0 <= UVar11) {
                        local_8e8 = (undefined8 *)&DAT_1808f4230;
                        iVar10 = FUN_1805f68d0(&DAT_1808f4230);
                        if (iVar10 != 0) goto LAB_1802a69d3;
                        if (DAT_1808f427c == 0x7fffffff) {
                          DAT_1808f427c = 0x7ffffffe;
                          goto LAB_1802a69f2;
                        }
                        if ((DAT_180c6e3bc == 0) && (DAT_180c6e3c0 <= UVar11)) {
                          DAT_180c6e3bc = FUN_1804174b0("C_CSPlayerPawn",0x9c15080d);
                          if (DAT_180c6e3bc == 0) {
                            DAT_180c6e3c0 = UVar11 + 1000;
                          }
                          else {
                            DAT_180c6e3c0 = 0xffffffffffffffff;
                          }
                        }
                        iVar10 = DAT_180c6e3bc;
                        FUN_1805f68fc(&DAT_1808f4230);
                        if (iVar10 != 0) goto LAB_1802a55f5;
                      }
                    }
                    else {
LAB_1802a55f5:
                      lVar27 = iVar10 + local_498;
                      lVar15 = FUN_18017ea70();
                      *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + 1;
                      bVar34 = false;
                      if (lVar27 != 0) {
                        local_8f8[0] = 0;
                        cVar8 = FUN_1804514f0(local_8f8,lVar27,1);
                        if (cVar8 == '\0') {
                          bVar34 = false;
                        }
                        else {
                          bVar34 = true;
                        }
                      }
                      uVar9 = local_8f8[0];
                      lVar15 = FUN_18017ea70();
                      if (*(int *)(lVar15 + 4) != 0) {
                        *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + -1;
                      }
                      local_46e = 0;
                      if (bVar34) {
                        local_46e = uVar9;
                      }
                    }
                  }
                  iVar10 = DAT_180c6e3a8;
                  if (local_8d8[0]._0_1_ != '\0') {
                    if ((DAT_180c6e3a8 == 0) && (UVar11 = GetTickCount64(), DAT_180c6e3b0 <= UVar11)
                       ) {
                      local_8e8 = (undefined8 *)&DAT_1808f4190;
                      iVar10 = FUN_1805f68d0(&DAT_1808f4190);
                      if (iVar10 != 0) goto LAB_1802a69d3;
                      if (DAT_1808f41dc == 0x7fffffff) {
                        DAT_1808f41dc = 0x7ffffffe;
                        goto LAB_1802a69f2;
                      }
                      if ((DAT_180c6e3a8 == 0) && (DAT_180c6e3b0 <= UVar11)) {
                        DAT_180c6e3a8 = FUN_1804174b0("CCSPlayerController",0x5fa2671c);
                        if (DAT_180c6e3a8 == 0) {
                          DAT_180c6e3b0 = UVar11 + 1000;
                        }
                        else {
                          DAT_180c6e3b0 = 0xffffffffffffffff;
                        }
                      }
                      iVar10 = DAT_180c6e3a8;
                      FUN_1805f68fc(&DAT_1808f4190);
                    }
                    local_480 = *(undefined4 *)(iVar10 + local_4a8);
                  }
                  iVar10 = DAT_180c6e3b8;
                  if (cVar7 != '\0') {
                    if ((DAT_180c6e3b8 == 0) && (UVar11 = GetTickCount64(), DAT_180c6e390 <= UVar11)
                       ) {
                      local_8e8 = (undefined8 *)&DAT_1808f4140;
                      iVar10 = FUN_1805f68d0(&DAT_1808f4140);
                      if (iVar10 != 0) goto LAB_1802a69d3;
                      if (DAT_1808f418c == 0x7fffffff) {
                        DAT_1808f418c = 0x7ffffffe;
                        goto LAB_1802a69f2;
                      }
                      if ((DAT_180c6e3b8 == 0) && (DAT_180c6e390 <= UVar11)) {
                        DAT_180c6e3b8 = FUN_1804174b0("C_CSPlayerPawn",0x8937152d);
                        if (DAT_180c6e3b8 == 0) {
                          DAT_180c6e390 = UVar11 + 1000;
                        }
                        else {
                          DAT_180c6e390 = 0xffffffffffffffff;
                        }
                      }
                      iVar10 = DAT_180c6e3b8;
                      FUN_1805f68fc(&DAT_1808f4140);
                    }
                    local_488 = CONCAT44(*(undefined4 *)(iVar10 + local_498),(undefined4)local_488);
                  }
                  iVar10 = DAT_180c6e398;
                  if (local_8c0._1_1_ != '\0') {
                    if ((DAT_180c6e398 == 0) && (UVar11 = GetTickCount64(), DAT_180c6e3a0 <= UVar11)
                       ) {
                      local_8e8 = (undefined8 *)&DAT_1808f40a0;
                      iVar10 = FUN_1805f68d0(&DAT_1808f40a0);
                      if (iVar10 != 0) goto LAB_1802a69d3;
                      if (DAT_1808f40ec == 0x7fffffff) {
                        DAT_1808f40ec = 0x7ffffffe;
                        goto LAB_1802a69f2;
                      }
                      if ((DAT_180c6e398 == 0) && (DAT_180c6e3a0 <= UVar11)) {
                        DAT_180c6e398 = FUN_1804174b0("C_CSPlayerPawn",0xf3e9a9ed);
                        if (DAT_180c6e398 == 0) {
                          DAT_180c6e3a0 = UVar11 + 1000;
                        }
                        else {
                          DAT_180c6e3a0 = 0xffffffffffffffff;
                        }
                      }
                      iVar10 = DAT_180c6e398;
                      FUN_1805f68fc(&DAT_1808f40a0);
                    }
                    local_478 = CONCAT17(*(undefined1 *)(iVar10 + local_498),(undefined7)local_478);
                  }
                  iVar10 = DAT_180c6e384;
                  if (local_8c0._2_1_ != '\0') {
                    if ((DAT_180c6e384 == 0) && (UVar11 = GetTickCount64(), DAT_180c6e388 <= UVar11)
                       ) {
                      local_8e8 = (undefined8 *)&DAT_1808f40f0;
                      iVar10 = FUN_1805f68d0(&DAT_1808f40f0);
                      if (iVar10 != 0) goto LAB_1802a69d3;
                      if (DAT_1808f413c == 0x7fffffff) {
                        DAT_1808f413c = 0x7ffffffe;
                        goto LAB_1802a69f2;
                      }
                      if ((DAT_180c6e384 == 0) && (DAT_180c6e388 <= UVar11)) {
                        DAT_180c6e384 = FUN_1804174b0("C_CSPlayerPawn",0x5bdaecc0);
                        if (DAT_180c6e384 == 0) {
                          DAT_180c6e388 = UVar11 + 1000;
                        }
                        else {
                          DAT_180c6e388 = 0xffffffffffffffff;
                        }
                      }
                      iVar10 = DAT_180c6e384;
                      FUN_1805f68fc(&DAT_1808f40f0);
                    }
                    local_470 = CONCAT11(local_470._1_1_,*(undefined1 *)(iVar10 + local_498));
                  }
                  if (local_8c0._3_1_ != '\0') {
                    iVar10 = DAT_180c6e370;
                    if (DAT_180c6e370 == 0) {
                      UVar11 = GetTickCount64();
                      if (DAT_180c6e378 <= UVar11) {
                        local_8e8 = (undefined8 *)&DAT_1808f4050;
                        iVar10 = FUN_1805f68d0(&DAT_1808f4050);
                        if (iVar10 != 0) goto LAB_1802a69d3;
                        if (DAT_1808f409c == 0x7fffffff) {
                          DAT_1808f409c = 0x7ffffffe;
                          goto LAB_1802a69f2;
                        }
                        if ((DAT_180c6e370 == 0) && (DAT_180c6e378 <= UVar11)) {
                          DAT_180c6e370 = FUN_1804174b0("C_CSPlayerPawnBase",0x6a6f758b);
                          if (DAT_180c6e370 == 0) {
                            DAT_180c6e378 = UVar11 + 1000;
                          }
                          else {
                            DAT_180c6e378 = 0xffffffffffffffff;
                          }
                        }
                        iVar10 = DAT_180c6e370;
                        FUN_1805f68fc(&DAT_1808f4050);
                        if (iVar10 != 0) goto LAB_1802a5a5d;
                      }
                    }
                    else {
LAB_1802a5a5d:
                      lVar27 = iVar10 + local_498;
                      lVar15 = FUN_18017ea70();
                      *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + 1;
                      bVar34 = false;
                      if (lVar27 != 0) {
                        local_8d8[0] = fVar39;
                        cVar7 = FUN_1804514f0(local_8d8,lVar27,4);
                        if (cVar7 == '\0') {
                          bVar34 = false;
                        }
                        else {
                          bVar34 = true;
                        }
                      }
                      fVar39 = local_8d8[0];
                      lVar15 = FUN_18017ea70();
                      if (*(int *)(lVar15 + 4) != 0) {
                        *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + -1;
                      }
                      if (bVar34) {
                        local_470 = CONCAT11(1,(undefined1)local_470);
                        if (0.01 < fVar39) goto LAB_1802a5ad6;
                      }
                    }
                    local_470 = local_470 & 0xff;
                  }
LAB_1802a5ad6:
                  cVar7 = local_8c8._3_1_;
                  if ((local_8c8._3_1_ != '\0') || (local_8c8._4_1_ != '\0')) {
                    local_8a8 = ZEXT816(0x1807d1330);
                    uVar37 = FUN_18017bf40(local_8a8 + 8);
                    if (cVar7 == '\0') {
                      local_870 = 0;
                      uStack_868 = 0;
                      uStack_860 = 0;
                      uStack_858 = 0x3f80000000000000;
                      local_8d8[0] = 0.0;
                      auVar41 = ZEXT1664(auVar41._0_16_);
                      auVar44 = ZEXT1664(auVar44._0_16_);
                      auVar46 = ZEXT1664(auVar46._0_16_);
                      lVar15 = FUN_1803d2ed0();
                      auVar45 = auVar46._0_16_;
                      auVar43 = auVar44._0_16_;
                      auVar40 = auVar41._0_16_;
                      if ((lVar15 == 0) || ((uint)local_8d8[0] < 8)) {
                        local_368 = 0;
                        uStack_360 = 0;
                        uStack_358 = 0;
                        uStack_350 = 0x3f80000000000000;
                      }
                      else {
                        local_368 = *(undefined8 *)(lVar15 + 0xe0);
                        uStack_868 = CONCAT44(uStack_868._4_4_,*(undefined4 *)(lVar15 + 0xe8));
                        uStack_358 = *(undefined8 *)(lVar15 + 0xf0);
                        uStack_350 = *(undefined8 *)(lVar15 + 0xf8);
                        uStack_360 = uStack_868;
                        local_870 = local_368;
                        uStack_860 = uStack_358;
                        uStack_858 = uStack_350;
                      }
                    }
                    else {
                      puVar19 = (undefined8 *)FUN_1803d2990(uVar37,local_808,local_498);
                      auVar45 = auVar46._0_16_;
                      auVar43 = auVar44._0_16_;
                      auVar40 = auVar41._0_16_;
                      lVar15 = 6;
                      puVar12 = &local_448;
                      do {
                        puVar23 = puVar12;
                        puVar20 = puVar19;
                        uVar37 = puVar20[1];
                        *puVar23 = *puVar20;
                        puVar23[1] = uVar37;
                        uVar37 = puVar20[3];
                        puVar23[2] = puVar20[2];
                        puVar23[3] = uVar37;
                        uVar37 = puVar20[5];
                        puVar23[4] = puVar20[4];
                        puVar23[5] = uVar37;
                        uVar37 = puVar20[7];
                        puVar23[6] = puVar20[6];
                        puVar23[7] = uVar37;
                        uVar37 = puVar20[9];
                        puVar23[8] = puVar20[8];
                        puVar23[9] = uVar37;
                        uVar37 = puVar20[0xb];
                        puVar23[10] = puVar20[10];
                        puVar23[0xb] = uVar37;
                        uVar37 = puVar20[0xd];
                        puVar23[0xc] = puVar20[0xc];
                        puVar23[0xd] = uVar37;
                        uVar37 = puVar20[0xf];
                        puVar23[0xe] = puVar20[0xe];
                        puVar23[0xf] = uVar37;
                        lVar15 = lVar15 + -1;
                        puVar19 = puVar20 + 0x10;
                        puVar12 = puVar23 + 0x10;
                      } while (lVar15 != 0);
                      uVar37 = puVar20[0x11];
                      puVar23[0x10] = puVar20[0x10];
                      puVar23[0x11] = uVar37;
                      uVar37 = puVar20[0x13];
                      puVar23[0x12] = puVar20[0x12];
                      puVar23[0x13] = uVar37;
                      uVar37 = puVar20[0x15];
                      puVar23[0x14] = puVar20[0x14];
                      puVar23[0x15] = uVar37;
                      uVar37 = puVar20[0x17];
                      puVar23[0x16] = puVar20[0x16];
                      puVar23[0x17] = uVar37;
                      uVar37 = puVar20[0x19];
                      puVar23[0x18] = puVar20[0x18];
                      puVar23[0x19] = uVar37;
                      uVar37 = puVar20[0x1b];
                      puVar23[0x1a] = puVar20[0x1a];
                      puVar23[0x1b] = uVar37;
                    }
                    auVar41 = ZEXT1664(auVar40);
                    auVar44 = ZEXT1664(auVar43);
                    auVar46 = ZEXT1664(auVar45);
                    FUN_18017bf40(&local_8e8);
                    puVar19 = local_8e8;
                    uVar28 = (longlong)local_8e8 - local_8a8._8_8_;
                    puVar16 = (ulonglong *)FUN_1802ac060();
                    uVar29 = *puVar16 + 1;
                    *puVar16 = uVar29;
                    uVar25 = puVar16[1];
                    puVar16[1] = uVar25 + uVar28;
                    uVar30 = puVar16[3] + (ulonglong)(999999 < uVar28);
                    puVar16[3] = uVar30;
                    uVar31 = puVar16[4] + (ulonglong)(4999999 < uVar28);
                    puVar16[4] = uVar31;
                    uVar32 = puVar16[5] + (ulonglong)(15999999 < uVar28);
                    puVar16[5] = uVar32;
                    uVar14 = puVar16[2];
                    if (puVar16[2] < uVar28) {
                      puVar16[2] = uVar28;
                      uVar14 = uVar28;
                    }
                    if ((puVar19 == (undefined8 *)puVar16[7]) ||
                       ((longlong)puVar16[7] <= (longlong)puVar19)) {
                      local_928 = (double)(longlong)((longlong)puVar19 - puVar16[6]) / auVar46._0_8_
                      ;
                      dVar42 = (double)(uVar25 + uVar28);
                      local_920 = auVar44._0_8_;
                      local_940 = auVar41._0_8_;
                      if (local_920 < local_928) {
                        local_920 = (dVar42 / local_940) / local_928;
                      }
                      local_930 = dVar42 / auVar46._0_8_;
                      local_938 = (double)uVar14 / local_940;
                      local_940 = (dVar42 / (double)uVar29) / local_940;
                      local_948 = uVar29;
                      local_918 = uVar30;
                      local_910 = uVar31;
                      local_908 = uVar32;
                      FUN_1801af8a0(dVar42 / (double)uVar29,local_940,local_8a8._0_8_);
                      puVar16[2] = 0;
                      puVar16[1] = 0;
                      *puVar16 = 0;
                      puVar16[5] = 0;
                      puVar16[4] = 0;
                      puVar16[3] = 0;
                      puVar16[6] = (ulonglong)puVar19;
                      puVar16[7] = (ulonglong)(puVar19 + 625000000);
                    }
                  }
                  lVar15 = local_498;
                  if (local_8c8._5_1_ != '\0') {
                    if (local_8b8[0x28] == '\0') {
                      puVar16 = (ulonglong *)(local_8b8 + 0x10);
                    }
                    else {
                      puVar16 = (ulonglong *)(local_8b8 + 8);
                    }
                    uVar25 = *puVar16;
                    local_8b8 = (undefined *)CONCAT44(DAT_180b8e2b8,DAT_180b8e2b4);
                    local_8b0 = DAT_180b8e2bc;
                    if (local_498 == 0) {
                      uVar9 = 0;
                    }
                    else {
                      plVar13 = (longlong *)FUN_1802ab870(&DAT_180cc98e0,&local_870,local_898);
                      lVar27 = *plVar13;
                      *(ulonglong *)(lVar27 + 0x28) = DAT_180cc99a0;
                      if ((*(ulonglong *)(lVar27 + 0x20) <= DAT_180cc99a0) && (DAT_180cc99b0 != 0))
                      {
                        DAT_180cc99b0 = DAT_180cc99b0 + -1;
                        DAT_180cc99b4 = DAT_180cc99b4 + 1;
                        local_8a8 = ZEXT816(0x1807d1308);
                        uVar37 = FUN_18017bf40(local_8a8 + 8);
                        local_948 = uVar25;
                        uVar9 = FUN_1804178c0(uVar37,&local_8b8,&local_368,lVar15);
                        *(undefined1 *)(lVar27 + 0x18) = uVar9;
                        *(ulonglong *)(lVar27 + 0x20) = DAT_180cc99a0 + 100;
                        FUN_18017bf40(&local_8b8);
                        puVar6 = local_8b8;
                        uVar28 = (longlong)local_8b8 - local_8a8._8_8_;
                        puVar16 = (ulonglong *)FUN_1802ac420();
                        uVar29 = *puVar16 + 1;
                        *puVar16 = uVar29;
                        uVar25 = puVar16[1];
                        puVar16[1] = uVar25 + uVar28;
                        uVar30 = puVar16[3] + (ulonglong)(999999 < uVar28);
                        puVar16[3] = uVar30;
                        uVar31 = puVar16[4] + (ulonglong)(4999999 < uVar28);
                        puVar16[4] = uVar31;
                        uVar32 = puVar16[5] + (ulonglong)(15999999 < uVar28);
                        puVar16[5] = uVar32;
                        uVar14 = puVar16[2];
                        if (puVar16[2] < uVar28) {
                          puVar16[2] = uVar28;
                          uVar14 = uVar28;
                        }
                        if ((puVar6 == (undefined *)puVar16[7]) ||
                           ((longlong)puVar16[7] <= (longlong)puVar6)) {
                          local_928 = (double)(longlong)((longlong)puVar6 - puVar16[6]) /
                                      auVar46._0_8_;
                          dVar42 = (double)(uVar25 + uVar28);
                          local_920 = auVar44._0_8_;
                          local_940 = auVar41._0_8_;
                          if (local_920 < local_928) {
                            local_920 = (dVar42 / local_940) / local_928;
                          }
                          local_930 = dVar42 / auVar46._0_8_;
                          local_938 = (double)uVar14 / local_940;
                          local_940 = (dVar42 / (double)uVar29) / local_940;
                          local_948 = uVar29;
                          local_918 = uVar30;
                          local_910 = uVar31;
                          local_908 = uVar32;
                          FUN_1801af8a0(dVar42 / (double)uVar29,local_940,local_8a8._0_8_);
                          puVar16[2] = 0;
                          puVar16[1] = 0;
                          *puVar16 = 0;
                          puVar16[5] = 0;
                          puVar16[4] = 0;
                          puVar16[3] = 0;
                          puVar16[6] = (ulonglong)puVar6;
                          puVar16[7] = (ulonglong)(puVar6 + 5000000000);
                        }
                      }
                      uVar9 = *(undefined1 *)(lVar27 + 0x18);
                    }
                    local_478._0_3_ = CONCAT12(uVar9,(undefined2)local_478);
                  }
                  if (local_8c8._2_1_ != '\0') {
                    iVar10 = DAT_180c6e380;
                    if (DAT_180c6e380 == 0) {
                      UVar11 = GetTickCount64();
                      if (UVar11 < DAT_180c6e358) {
                        iVar10 = 0;
                      }
                      else {
                        local_8b8 = &DAT_1808f4000;
                        iVar10 = FUN_1805f68d0(&DAT_1808f4000);
                        if (iVar10 != 0) goto LAB_1802a69d3;
                        if (DAT_1808f404c == 0x7fffffff) {
                          DAT_1808f404c = 0x7ffffffe;
                          goto LAB_1802a69f2;
                        }
                        if ((DAT_180c6e380 == 0) && (DAT_180c6e358 <= UVar11)) {
                          DAT_180c6e380 = FUN_1804174b0("C_BasePlayerPawn",0x51b23a93);
                          if (DAT_180c6e380 == 0) {
                            DAT_180c6e358 = UVar11 + 1000;
                          }
                          else {
                            DAT_180c6e358 = 0xffffffffffffffff;
                          }
                        }
                        iVar10 = DAT_180c6e380;
                        FUN_1805f68fc(&DAT_1808f4000);
                      }
                    }
                    lVar15 = *(longlong *)(iVar10 + local_498);
                    if (lVar15 != 0) {
                      iVar10 = DAT_180c6e360;
                      if (DAT_180c6e360 == 0) {
                        UVar11 = GetTickCount64();
                        if (UVar11 < DAT_180c6e368) {
                          iVar10 = 0;
                        }
                        else {
                          local_8b8 = &DAT_1808f3f60;
                          iVar10 = FUN_1805f68d0(&DAT_1808f3f60);
                          if (iVar10 != 0) {
LAB_1802a69d3:
                    /* WARNING: Subroutine does not return */
                            FUN_1805f6d44(5);
                          }
                          if (DAT_1808f3fac == 0x7fffffff) {
                            DAT_1808f3fac = 0x7ffffffe;
LAB_1802a69f2:
                    /* WARNING: Subroutine does not return */
                            FUN_1805f6d44(6);
                          }
                          if ((DAT_180c6e360 == 0) && (DAT_180c6e368 <= UVar11)) {
                            DAT_180c6e360 = FUN_1804174b0("CPlayer_WeaponServices",0x940131c5);
                            if (DAT_180c6e360 == 0) {
                              DAT_180c6e368 = UVar11 + 1000;
                            }
                            else {
                              DAT_180c6e368 = 0xffffffffffffffff;
                            }
                          }
                          iVar10 = DAT_180c6e360;
                          FUN_1805f68fc(&DAT_1808f3f60);
                        }
                      }
                      if ((*(int *)(iVar10 + lVar15) != 0) &&
                         (local_d8 = FUN_1803d4150(), local_d8 != 0)) {
                        iVar10 = DAT_180c6e34c;
                        if (DAT_180c6e34c == 0) {
                          UVar11 = GetTickCount64();
                          if (UVar11 < DAT_180c6e350) {
                            iVar10 = 0;
                          }
                          else {
                            local_8b8 = &DAT_1808f3fb0;
                            iVar10 = FUN_1805f68d0(&DAT_1808f3fb0);
                            if (iVar10 != 0) goto LAB_1802a69c8;
                            if (DAT_1808f3ffc == 0x7fffffff) {
                              DAT_1808f3ffc = 0x7ffffffe;
                              goto LAB_1802a6a07;
                            }
                            if ((DAT_180c6e34c == 0) && (DAT_180c6e350 <= UVar11)) {
                              DAT_180c6e34c = FUN_1804174b0("C_BaseEntity",0xc02ce796);
                              if (DAT_180c6e34c == 0) {
                                DAT_180c6e350 = UVar11 + 1000;
                              }
                              else {
                                DAT_180c6e350 = 0xffffffffffffffff;
                              }
                            }
                            iVar10 = DAT_180c6e34c;
                            FUN_1805f68fc(&DAT_1808f3fb0);
                          }
                        }
                        local_d0 = *(longlong *)((longlong)iVar10 + 8 + local_d8);
                        if (local_d0 != 0) {
                          iVar10 = DAT_180c6e338;
                          if (DAT_180c6e338 == 0) {
                            UVar11 = GetTickCount64();
                            if (UVar11 < DAT_180c6e340) {
                              iVar10 = 0;
                            }
                            else {
                              local_8b8 = &DAT_1808f3f10;
                              iVar10 = FUN_1805f68d0(&DAT_1808f3f10);
                              if (iVar10 != 0) {
LAB_1802a69c8:
                    /* WARNING: Subroutine does not return */
                                FUN_1805f6d44(5);
                              }
                              if (DAT_1808f3f5c == 0x7fffffff) {
                                DAT_1808f3f5c = 0x7ffffffe;
LAB_1802a6a07:
                    /* WARNING: Subroutine does not return */
                                FUN_1805f6d44(6);
                              }
                              if ((DAT_180c6e338 == 0) && (DAT_180c6e340 <= UVar11)) {
                                DAT_180c6e338 = FUN_1804174b0("C_BasePlayerWeapon",0xd0250969);
                                if (DAT_180c6e338 == 0) {
                                  DAT_180c6e340 = UVar11 + 1000;
                                }
                                else {
                                  DAT_180c6e340 = 0xffffffffffffffff;
                                }
                              }
                              iVar10 = DAT_180c6e338;
                              FUN_1805f68fc(&DAT_1808f3f10);
                            }
                          }
                          local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(iVar10 + local_d8));
                          plVar13 = (longlong *)FUN_1802ab550(&DAT_180cc9960,&local_870,&local_d0);
                          lVar15 = *plVar13;
                          *(ulonglong *)(lVar15 + 0x48) = DAT_180cc99a0;
                          if (*(ulonglong *)(lVar15 + 0x40) <= DAT_180cc99a0) {
                            local_8a8 = ZEXT816(0x1807d1350);
                            FUN_18017bf40(local_8a8 + 8);
                            iVar10 = DAT_180c6e348;
                            if (DAT_180c6e348 == 0) {
                              UVar11 = GetTickCount64();
                              if (UVar11 < DAT_180c6e320) {
                                iVar10 = 0;
                              }
                              else {
                                local_8b8 = &DAT_1808f3ec0;
                                iVar10 = FUN_1805f68d0(&DAT_1808f3ec0);
                                if (iVar10 != 0) goto LAB_1802a6a27;
                                if (DAT_1808f3f0c == 0x7fffffff) {
                                  DAT_1808f3f0c = 0x7ffffffe;
                                  goto LAB_1802a6a1c;
                                }
                                if ((DAT_180c6e348 == 0) && (DAT_180c6e320 <= UVar11)) {
                                  DAT_180c6e348 = FUN_1804174b0("CBasePlayerWeaponVData",0xef951a4f)
                                  ;
                                  if (DAT_180c6e348 == 0) {
                                    DAT_180c6e320 = UVar11 + 1000;
                                  }
                                  else {
                                    DAT_180c6e320 = 0xffffffffffffffff;
                                  }
                                }
                                iVar10 = DAT_180c6e348;
                                FUN_1805f68fc(&DAT_1808f3ec0);
                              }
                            }
                            *(undefined4 *)(lVar15 + 0x18) = *(undefined4 *)(iVar10 + local_d0);
                            iVar10 = DAT_180c6e328;
                            if (DAT_180c6e328 == 0) {
                              UVar11 = GetTickCount64();
                              if (UVar11 < DAT_180c6e330) {
                                iVar10 = 0;
                              }
                              else {
                                local_8b8 = &DAT_1808f3e70;
                                iVar10 = FUN_1805f68d0(&DAT_1808f3e70);
                                if (iVar10 != 0) {
LAB_1802a6a27:
                    /* WARNING: Subroutine does not return */
                                  FUN_1805f6d44(5);
                                }
                                if (DAT_1808f3ebc == 0x7fffffff) {
                                  DAT_1808f3ebc = 0x7ffffffe;
LAB_1802a6a1c:
                    /* WARNING: Subroutine does not return */
                                  FUN_1805f6d44(6);
                                }
                                if ((DAT_180c6e328 == 0) && (DAT_180c6e330 <= UVar11)) {
                                  DAT_180c6e328 = FUN_1804174b0("CCSWeaponBaseVData",0x6750bacb);
                                  if (DAT_180c6e328 == 0) {
                                    uVar33 = UVar11 + 1000;
                                  }
                                  DAT_180c6e330 = uVar33;
                                }
                                iVar10 = DAT_180c6e328;
                                FUN_1805f68fc(&DAT_1808f3e70);
                              }
                            }
                            lVar27 = *(longlong *)(iVar10 + local_d0);
                            if (lVar27 == 0) {
                              local_840 = 0;
                              uStack_838 = 0xf;
                              local_850._1_15_ = SUB1615((undefined1  [16])0x0,1);
                              auVar43[0xf] = 0;
                              auVar43._0_15_ = local_850._1_15_;
                              local_850 = auVar43 << 8;
                              puVar19 = (undefined8 *)local_850;
                            }
                            else {
                              puVar19 = (undefined8 *)FUN_180454030(local_830,lVar27,0x40);
                            }
                            auVar45 = auVar46._0_16_;
                            auVar43 = auVar44._0_16_;
                            auVar40 = auVar41._0_16_;
                            puVar12 = (undefined8 *)(lVar15 + 0x20);
                            if (puVar12 != puVar19) {
                              FUN_18015c010(puVar12);
                              auVar45 = auVar46._0_16_;
                              auVar43 = auVar44._0_16_;
                              auVar40 = auVar41._0_16_;
                              uVar37 = puVar19[1];
                              uVar3 = puVar19[2];
                              uVar4 = puVar19[3];
                              *puVar12 = *puVar19;
                              *(undefined8 *)(lVar15 + 0x28) = uVar37;
                              *(undefined8 *)(lVar15 + 0x30) = uVar3;
                              *(undefined8 *)(lVar15 + 0x38) = uVar4;
                              puVar19[2] = 0;
                              puVar19[3] = 0xf;
                              *(undefined1 *)puVar19 = 0;
                            }
                            if (lVar27 == 0) {
                              auVar41 = ZEXT1664(auVar40);
                              auVar44 = ZEXT1664(auVar43);
                              auVar46 = ZEXT1664(auVar45);
                              FUN_18015c010(local_850);
                              auVar45 = auVar46._0_16_;
                              auVar43 = auVar44._0_16_;
                              auVar40 = auVar41._0_16_;
                            }
                            else {
                              auVar41 = ZEXT1664(auVar40);
                              auVar44 = ZEXT1664(auVar43);
                              auVar46 = ZEXT1664(auVar45);
                              FUN_18015c010(local_830);
                              auVar45 = auVar46._0_16_;
                              auVar43 = auVar44._0_16_;
                              auVar40 = auVar41._0_16_;
                            }
                            uVar33 = *(ulonglong *)(lVar15 + 0x38);
                            if (0xf < uVar33) {
                              puVar12 = (undefined8 *)*puVar12;
                            }
                            uVar25 = *(ulonglong *)(lVar15 + 0x30);
                            if (6 < uVar25) {
                              auVar41 = ZEXT1664(auVar40);
                              auVar44 = ZEXT1664(auVar43);
                              auVar46 = ZEXT1664(auVar45);
                              iVar10 = memcmp(puVar12,"weapon_",7);
                              auVar45 = auVar46._0_16_;
                              auVar43 = auVar44._0_16_;
                              auVar40 = auVar41._0_16_;
                              if (iVar10 == 0) {
                                puVar19 = (undefined8 *)(lVar15 + 0x20);
                                if (0xf < uVar33) {
                                  puVar19 = (undefined8 *)*puVar19;
                                }
                                FUN_18063aed0(puVar19,(longlong)puVar19 + 7,uVar25 - 6);
                                auVar45 = auVar46._0_16_;
                                auVar43 = auVar44._0_16_;
                                auVar40 = auVar41._0_16_;
                                *(ulonglong *)(lVar15 + 0x30) = uVar25 - 7;
                              }
                            }
                            *(ulonglong *)(lVar15 + 0x40) = DAT_180cc99a0 + 5000;
                            auVar41 = ZEXT1664(auVar40);
                            auVar44 = ZEXT1664(auVar43);
                            auVar46 = ZEXT1664(auVar45);
                            FUN_18017bf40(&local_8b8);
                            puVar6 = local_8b8;
                            uVar14 = (longlong)local_8b8 - local_8a8._8_8_;
                            puVar16 = (ulonglong *)FUN_1802ac240();
                            dVar42 = auVar44._0_8_;
                            uVar28 = *puVar16 + 1;
                            *puVar16 = uVar28;
                            uVar25 = puVar16[1] + uVar14;
                            puVar16[1] = uVar25;
                            uVar29 = puVar16[3] + (ulonglong)(999999 < uVar14);
                            puVar16[3] = uVar29;
                            uVar30 = puVar16[4] + (ulonglong)(4999999 < uVar14);
                            puVar16[4] = uVar30;
                            uVar31 = puVar16[5] + (ulonglong)(15999999 < uVar14);
                            puVar16[5] = uVar31;
                            uVar33 = puVar16[2];
                            if (puVar16[2] < uVar14) {
                              puVar16[2] = uVar14;
                              uVar33 = uVar14;
                            }
                            if ((puVar6 == (undefined *)puVar16[7]) ||
                               ((longlong)puVar16[7] <= (longlong)puVar6)) {
                              local_928 = (double)(longlong)((longlong)puVar6 - puVar16[6]) /
                                          auVar46._0_8_;
                              local_940 = auVar41._0_8_;
                              if (dVar42 < local_928) {
                                dVar42 = ((double)uVar25 / local_940) / local_928;
                              }
                              local_930 = (double)uVar25 / auVar46._0_8_;
                              local_938 = (double)uVar33 / local_940;
                              dVar38 = (double)uVar25 / (double)uVar28;
                              local_940 = dVar38 / local_940;
                              local_948 = uVar28;
                              local_920 = dVar42;
                              local_918 = uVar29;
                              local_910 = uVar30;
                              local_908 = uVar31;
                              FUN_1801af8a0(dVar38,local_940,local_8a8._0_8_);
                              puVar16[2] = 0;
                              puVar16[1] = 0;
                              *puVar16 = 0;
                              puVar16[5] = 0;
                              puVar16[4] = 0;
                              puVar16[3] = 0;
                              puVar16[6] = (ulonglong)puVar6;
                              puVar16[7] = (ulonglong)(puVar6 + 5000000000);
                            }
                          }
                          local_c8 = CONCAT44(*(undefined4 *)(lVar15 + 0x18),(undefined4)local_c8);
                          plVar13 = (longlong *)(lVar15 + 0x20);
                          if (local_c0 != plVar13) {
                            if (0xf < *(ulonglong *)(lVar15 + 0x38)) {
                              plVar13 = (longlong *)*plVar13;
                            }
                            FUN_180113930(local_c0,plVar13,*(undefined8 *)(lVar15 + 0x30));
                          }
                        }
                      }
                    }
                  }
                }
                goto LAB_1802a6955;
              }
            }
            else {
              local_478 = (ulonglong)local_478._1_7_ << 8;
            }
            *param_2 = 0;
            param_2[1] = 0;
            param_2[2] = 0;
            param_2[3] = 0;
            param_2[4] = 0;
            param_2[5] = 0;
            param_2[6] = 0;
            *(undefined2 *)(param_2 + 7) = 0;
            *(undefined1 *)((longlong)param_2 + 0x3a) = 0;
            *(undefined1 (*) [16])(param_2 + 8) = (undefined1  [16])0x0;
            param_2[10] = 0;
            param_2[0xb] = 0xf;
            *(undefined1 *)(param_2 + 8) = 0;
            param_2[0xc] = 0;
            param_2[0xd] = 0;
            param_2[0xe] = 0;
            *(undefined4 *)(param_2 + 0xf) = 0;
            *(undefined8 *)((longlong)param_2 + 0x7c) = 0x3f800000;
            *(undefined8 *)((longlong)param_2 + 0x84) = 0;
            *(undefined8 *)((longlong)param_2 + 0x8c) = 0;
            *(undefined8 *)((longlong)param_2 + 0x94) = 0;
            *(undefined8 *)((longlong)param_2 + 0x9c) = 0x3f800000;
            *(undefined8 *)((longlong)param_2 + 0xa4) = 0;
            *(undefined8 *)((longlong)param_2 + 0xac) = 0;
            *(undefined8 *)((longlong)param_2 + 0xb4) = 0;
            *(undefined8 *)((longlong)param_2 + 0xbc) = 0x3f800000;
            *(undefined8 *)((longlong)param_2 + 0xc4) = 0;
            *(undefined8 *)((longlong)param_2 + 0xcc) = 0;
            *(undefined8 *)((longlong)param_2 + 0xd4) = 0;
            *(undefined8 *)((longlong)param_2 + 0xdc) = 0x3f800000;
            *(undefined8 *)((longlong)param_2 + 0xe4) = 0;
            *(undefined8 *)((longlong)param_2 + 0xec) = 0;
            *(undefined8 *)((longlong)param_2 + 0xf4) = 0;
            *(undefined8 *)((longlong)param_2 + 0xfc) = 0x3f800000;
            *(undefined8 *)((longlong)param_2 + 0x104) = 0;
            *(undefined8 *)((longlong)param_2 + 0x10c) = 0;
            *(undefined8 *)((longlong)param_2 + 0x114) = 0;
            *(undefined8 *)((longlong)param_2 + 0x11c) = 0x3f800000;
            *(undefined8 *)((longlong)param_2 + 0x124) = 0;
            *(undefined8 *)((longlong)param_2 + 300) = 0;
            *(undefined8 *)((longlong)param_2 + 0x134) = 0;
            *(undefined8 *)((longlong)param_2 + 0x13c) = 0x3f800000;
            *(undefined8 *)((longlong)param_2 + 0x144) = 0;
            *(undefined8 *)((longlong)param_2 + 0x14c) = 0;
            *(undefined8 *)((longlong)param_2 + 0x154) = 0;
            *(undefined8 *)((longlong)param_2 + 0x15c) = 0x3f800000;
            *(undefined8 *)((longlong)param_2 + 0x164) = 0;
            *(undefined8 *)((longlong)param_2 + 0x16c) = 0;
            *(undefined8 *)((longlong)param_2 + 0x174) = 0;
            *(undefined8 *)((longlong)param_2 + 0x17c) = 0x3f800000;
            *(undefined8 *)((longlong)param_2 + 0x184) = 0;
            *(undefined8 *)((longlong)param_2 + 0x18c) = 0;
            *(undefined8 *)((longlong)param_2 + 0x194) = 0;
            *(undefined8 *)((longlong)param_2 + 0x19c) = 0x3f800000;
            *(undefined8 *)((longlong)param_2 + 0x1a4) = 0;
            *(undefined8 *)((longlong)param_2 + 0x1ac) = 0;
            *(undefined8 *)((longlong)param_2 + 0x1b4) = 0;
            *(undefined8 *)((longlong)param_2 + 0x1bc) = 0x3f800000;
            *(undefined8 *)((longlong)param_2 + 0x1c4) = 0;
            *(undefined8 *)((longlong)param_2 + 0x1cc) = 0;
            *(undefined8 *)((longlong)param_2 + 0x1d4) = 0;
            *(undefined8 *)((longlong)param_2 + 0x1dc) = 0x3f800000;
            *(undefined8 *)((longlong)param_2 + 0x1e4) = 0;
            *(undefined8 *)((longlong)param_2 + 0x1ec) = 0;
            *(undefined8 *)((longlong)param_2 + 500) = 0;
            *(undefined8 *)((longlong)param_2 + 0x1fc) = 0x3f800000;
            *(undefined8 *)((longlong)param_2 + 0x204) = 0;
            *(undefined8 *)((longlong)param_2 + 0x20c) = 0;
            *(undefined8 *)((longlong)param_2 + 0x214) = 0;
            *(undefined8 *)((longlong)param_2 + 0x21c) = 0x3f800000;
            *(undefined8 *)((longlong)param_2 + 0x224) = 0;
            *(undefined8 *)((longlong)param_2 + 0x22c) = 0;
            *(undefined8 *)((longlong)param_2 + 0x234) = 0;
            *(undefined8 *)((longlong)param_2 + 0x23c) = 0x3f800000;
            *(undefined8 *)((longlong)param_2 + 0x244) = 0;
            *(undefined8 *)((longlong)param_2 + 0x24c) = 0;
            *(undefined8 *)((longlong)param_2 + 0x254) = 0;
            *(undefined8 *)((longlong)param_2 + 0x25c) = 0x3f800000;
            *(undefined8 *)((longlong)param_2 + 0x264) = 0;
            *(undefined8 *)((longlong)param_2 + 0x26c) = 0;
            *(undefined8 *)((longlong)param_2 + 0x274) = 0;
            *(undefined8 *)((longlong)param_2 + 0x27c) = 0x3f800000;
            *(undefined8 *)((longlong)param_2 + 0x284) = 0;
            *(undefined8 *)((longlong)param_2 + 0x28c) = 0;
            *(undefined8 *)((longlong)param_2 + 0x294) = 0;
            *(undefined8 *)((longlong)param_2 + 0x29c) = 0x3f800000;
            *(undefined8 *)((longlong)param_2 + 0x2a4) = 0;
            *(undefined8 *)((longlong)param_2 + 0x2ac) = 0;
            *(undefined8 *)((longlong)param_2 + 0x2b4) = 0;
            *(undefined8 *)((longlong)param_2 + 700) = 0x3f800000;
            *(undefined8 *)((longlong)param_2 + 0x2c4) = 0;
            *(undefined8 *)((longlong)param_2 + 0x2cc) = 0;
            *(undefined8 *)((longlong)param_2 + 0x2d4) = 0;
            *(undefined8 *)((longlong)param_2 + 0x2dc) = 0x3f800000;
            *(undefined8 *)((longlong)param_2 + 0x2e4) = 0;
            *(undefined8 *)((longlong)param_2 + 0x2ec) = 0;
            *(undefined8 *)((longlong)param_2 + 0x2f4) = 0;
            *(undefined8 *)((longlong)param_2 + 0x2fc) = 0x3f800000;
            *(undefined8 *)((longlong)param_2 + 0x304) = 0;
            *(undefined8 *)((longlong)param_2 + 0x30c) = 0;
            *(undefined8 *)((longlong)param_2 + 0x314) = 0;
            *(undefined8 *)((longlong)param_2 + 0x31c) = 0x3f800000;
            *(undefined8 *)((longlong)param_2 + 0x324) = 0;
            *(undefined8 *)((longlong)param_2 + 0x32c) = 0;
            *(undefined8 *)((longlong)param_2 + 0x334) = 0;
            *(undefined8 *)((longlong)param_2 + 0x33c) = 0x3f800000;
            *(undefined8 *)((longlong)param_2 + 0x344) = 0;
            *(undefined8 *)((longlong)param_2 + 0x34c) = 0;
            *(undefined8 *)((longlong)param_2 + 0x354) = 0;
            *(undefined8 *)((longlong)param_2 + 0x35c) = 0x3f800000;
            *(undefined8 *)((longlong)param_2 + 0x364) = 0;
            *(undefined8 *)((longlong)param_2 + 0x36c) = 0;
            *(undefined8 *)((longlong)param_2 + 0x374) = 0;
            *(undefined8 *)((longlong)param_2 + 0x37c) = 0x3f800000;
            *(undefined8 *)((longlong)param_2 + 900) = 0;
            *(undefined8 *)((longlong)param_2 + 0x38c) = 0;
            *(undefined8 *)((longlong)param_2 + 0x394) = 0;
            *(undefined8 *)((longlong)param_2 + 0x39c) = 0x3f800000;
            *(undefined8 *)((longlong)param_2 + 0x3a4) = 0;
            *(undefined8 *)((longlong)param_2 + 0x3ac) = 0;
            *(undefined8 *)((longlong)param_2 + 0x3b4) = 0;
            *(undefined8 *)((longlong)param_2 + 0x3bc) = 0x3f800000;
            *(undefined8 *)((longlong)param_2 + 0x3c4) = 0;
            param_2[0x7a] = 0;
            param_2[0x7b] = 0;
            param_2[0x7c] = 0;
            *(undefined1 (*) [16])(param_2 + 0x7d) = (undefined1  [16])0x0;
            param_2[0x7f] = 0;
            param_2[0x80] = 0xf;
            *(undefined1 *)(param_2 + 0x7d) = 0;
            goto LAB_1802a6966;
          }
        }
      }
    }
  }
LAB_1802a6955:
  FUN_1802a6a40(param_2,&local_4a8);
LAB_1802a6966:
  FUN_18015c010(local_c0);
  FUN_18015c010(local_468);
}



