// FUN_180384f20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180384f20 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180384f20(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined1 auVar1 [16];
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  char cVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  undefined1 in_XMM2 [16];
  undefined1 auVar22 [64];
  undefined1 auStack_418 [32];
  undefined4 local_3f8;
  undefined4 local_3f0;
  longlong *local_3e8;
  int local_3e0;
  undefined8 local_3d8;
  undefined8 *local_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined4 uStack_3b0;
  uint uStack_3ac;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  undefined8 local_3a0;
  undefined4 local_398;
  undefined4 local_390 [2];
  longlong *local_388;
  longlong *local_380;
  longlong *local_378;
  longlong *local_370;
  longlong *local_368;
  longlong *local_360;
  longlong *local_358;
  longlong *local_350;
  undefined1 local_348 [16];
  int local_338;
  undefined2 local_32b;
  undefined1 local_329;
  undefined1 local_328 [16];
  longlong *local_318;
  longlong *plStack_310;
  longlong *plStack_308;
  longlong *plStack_300;
  longlong *local_2f8;
  longlong *plStack_2f0;
  longlong *plStack_2e8;
  longlong *plStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined1 local_2b8 [16];
  undefined4 local_2a8;
  longlong *local_2a0;
  undefined8 local_298;
  undefined4 local_290;
  undefined4 local_28c;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined4 local_278;
  char local_274;
  undefined2 local_273;
  undefined1 local_271;
  undefined1 local_270 [232];
  int local_188;
  int local_184;
  int local_180;
  int local_17c;
  int local_178;
  int local_174;
  int local_164;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  ulonglong local_58;
  
  local_58 = DAT_1808d5f00 ^ (ulonglong)auStack_418;
  auVar1 = vshufps_avx(in_XMM2,in_XMM2,0);
  auVar22 = ZEXT1664(auVar1);
  if (auVar1._0_4_ <= 0.0) {
  }
  if (1.0 <= auVar1._0_4_) {
  }
  local_328 = ZEXT816(0x180ba2fe0);
  local_3c8 = param_4;
  iVar5 = FUN_1805f68d8(&DAT_180ba2fe0);
  cVar14 = iVar5 == 0;
  local_328[8] = cVar14;
  if (iVar5 != 0) goto LAB_180385739;
  local_370 = (longlong *)0x0;
  (**(code **)(*param_2 + 0x250))(param_2,&local_370,0,0);
  if ((local_370 != (longlong *)0x0) && (iVar5 = FUN_180382ba0(local_370,local_370), iVar5 != 0)) {
    local_378 = (longlong *)0x0;
    local_68 = (undefined1  [16])0x0;
    local_390[0] = 0;
    (**(code **)(*param_2 + 0x2d8))(param_2,&local_378,local_68,local_390);
    plVar4 = local_378;
    if (local_378 != (longlong *)0x0) {
      FUN_18063ab10(&local_188,0,0x108);
      (**(code **)(*plVar4 + 0x38))(plVar4,&local_188);
      iVar6 = 5;
      if (iVar5 == 2) {
        iVar6 = 2;
      }
      if (((((local_180 != 0) && (local_17c == iVar6)) && (local_178 == 6)) &&
          ((local_174 == 1 && (local_188 == 0)))) &&
         ((local_184 == 0 && ((local_164 - 7U & 0xf7) == 0)))) {
        local_318 = (longlong *)0x0;
        plStack_310 = (longlong *)0x0;
        plStack_308 = (longlong *)0x0;
        plStack_300 = (longlong *)0x0;
        local_2f8 = (longlong *)0x0;
        plStack_2f0 = (longlong *)0x0;
        plStack_2e8 = (longlong *)0x0;
        plStack_2e0 = (longlong *)0x0;
        local_350 = (longlong *)0x0;
        auVar22 = ZEXT1664(auVar22._0_16_);
        (**(code **)(*param_2 + 0x2c8))(param_2,8,&local_318,&local_350);
        plVar4 = local_318;
        local_2a0 = local_318;
        bVar15 = plStack_310 != (longlong *)0x0;
        if (bVar15) {
          (**(code **)(*plStack_310 + 0x10))();
        }
        bVar16 = plStack_308 != (longlong *)0x0;
        if (bVar16) {
          (**(code **)(*plStack_308 + 0x10))();
        }
        bVar17 = plStack_300 != (longlong *)0x0;
        if (bVar17) {
          (**(code **)(*plStack_300 + 0x10))();
        }
        bVar18 = local_2f8 != (longlong *)0x0;
        if (bVar18) {
          (**(code **)(*local_2f8 + 0x10))();
        }
        bVar19 = plStack_2f0 != (longlong *)0x0;
        if (bVar19) {
          (**(code **)(*plStack_2f0 + 0x10))();
        }
        bVar20 = plStack_2e8 != (longlong *)0x0;
        if (bVar20) {
          (**(code **)(*plStack_2e8 + 0x10))();
        }
        bVar21 = plStack_2e0 != (longlong *)0x0;
        if (bVar21) {
          (**(code **)(*plStack_2e0 + 0x10))();
        }
        if ((plVar4 != (longlong *)0x0) &&
           (!bVar21 && (!bVar20 && (!bVar19 && (!bVar18 && (!bVar17 && (!bVar16 && !bVar15))))))) {
          if (local_350 == (longlong *)0x0) {
LAB_1803852c0:
            local_358 = (longlong *)0x0;
            (**(code **)(*plVar4 + 0x38))(plVar4,&local_358);
            local_368 = (longlong *)0x0;
            iVar5 = (**(code **)*local_358)(local_358,&DAT_180806ff8,&local_368);
            if (-1 < iVar5) {
              local_348 = (undefined1  [16])0x0;
              local_338 = 0;
              local_3c0 = 0;
              uStack_3b8 = 0;
              uStack_3b0 = 0;
              uStack_3ac = 0;
              uStack_3a8 = 0;
              uStack_3a4 = 0;
              local_3a0 = 0;
              local_398 = 0;
              auVar22 = ZEXT1664(auVar22._0_16_);
              (**(code **)(*plVar4 + 0x40))(plVar4,local_348);
              (**(code **)(*local_368 + 0x50))(local_368,&local_3c0);
              uVar11 = 0;
              if (local_348._4_4_ == 4) {
LAB_18038538b:
                uVar10 = local_348._8_4_;
              }
              else {
                if (local_348._4_4_ == 5) {
                  if (local_338 != 1) goto LAB_1803856ae;
                  uVar11 = local_348._12_4_;
                  goto LAB_18038538b;
                }
                uVar10 = 0;
                if (local_348._4_4_ != 6) {
                  if ((local_348._4_4_ != 7) || (local_348._12_4_ != 1)) goto LAB_1803856ae;
                  uVar11 = local_348._8_4_;
                }
              }
              uVar7 = (uint)local_3c0 >> (uVar10 & 0x1f);
              uVar12 = 1;
              if (1 < uVar7) {
                uVar12 = uVar7;
              }
              uVar8 = local_3c0._4_4_ >> (uVar10 & 0x1f);
              uVar7 = 1;
              if (1 < uVar8) {
                uVar7 = uVar8;
              }
              local_380 = (longlong *)0x0;
              (**(code **)(*param_2 + 0x18))(param_2,&local_380);
              if (local_380 != (longlong *)0x0) {
                local_3e8 = (longlong *)CONCAT44(uStack_3a8,uStack_3ac);
                local_3f0 = local_348._0_4_;
                local_3f8 = uStack_3b0;
                cVar14 = FUN_180382d80(local_380,local_380,uVar12,uVar7);
                if (cVar14 != '\0') {
                  lVar13 = 0;
                  if ((char)local_164 == '\x0f') {
                    lVar13 = 8;
                  }
                  if (*(longlong *)((longlong)&DAT_180ba3160 + lVar13) == 0) {
                    local_298 = 0;
                    FUN_18063ab10(local_270,0,0xe0);
                    local_290 = 1;
                    local_28c = 0xf;
                    local_288 = 0x10000000e;
                    uStack_280 = 0xe0000000f;
                    local_278 = 1;
                    local_273 = local_32b;
                    local_271 = local_329;
                    local_274 = (char)local_164;
                    iVar5 = (**(code **)(*local_380 + 0xa0))
                                      (local_380,&local_298,(longlong)&DAT_180ba3160 + lVar13);
                    if (iVar5 < 0) goto LAB_180385692;
                  }
                  local_360 = (longlong *)0x0;
                  (**(code **)(*param_2 + 0x248))(param_2,7,1,&local_360);
                  local_3e0 = (int)uStack_3b8 * uVar11 + uVar10;
                  local_3d8 = 0;
                  local_3e8 = local_368;
                  local_3f0 = 0;
                  local_3f8 = 0;
                  (**(code **)(*param_2 + 0x170))(param_2,DAT_180ba3140,0,0);
                  puVar2 = local_3c8;
                  local_78 = auVar22._0_16_;
                  if (DAT_180c6fb40 != 0) {
                    (*(code *)DAT_180c6fb40)(*(undefined8 *)*local_3c8,*(undefined4 *)local_3c8[1]);
                    local_78 = auVar22._0_16_;
                  }
                  lVar9 = 0;
                  if (1 < uStack_3ac) {
                    lVar9 = 8;
                  }
                  (**(code **)(*param_2 + 0x48))
                            (param_2,*(undefined8 *)((longlong)&DAT_180ba3150 + lVar9),0,0);
                  (**(code **)(*param_2 + 0x40))(param_2,7,1,&DAT_180ba3148);
                  (**(code **)(*param_2 + 0x118))
                            (param_2,*(undefined8 *)((longlong)&DAT_180ba3160 + lVar13),local_78,
                             local_390[0]);
                  if (DAT_180c6fb40 != 0) {
                    (*(code *)DAT_180c6fb40)
                              (*(undefined8 *)*puVar2,*(undefined4 *)puVar2[1],
                               *(undefined4 *)puVar2[2]);
                  }
                  (**(code **)(*param_2 + 0x118))(param_2,local_378,local_68,local_390[0]);
                  (**(code **)(*param_2 + 0x40))(param_2,7,1,&local_360);
                  (**(code **)(*param_2 + 0x48))(param_2,local_370,0,0);
                  plVar3 = local_360;
                  if (local_360 != (longlong *)0x0) {
                    local_360 = (longlong *)0x0;
                    (**(code **)(*plVar3 + 0x10))();
                  }
                }
              }
LAB_180385692:
              plVar3 = local_380;
              if (local_380 != (longlong *)0x0) {
                local_380 = (longlong *)0x0;
                (**(code **)(*plVar3 + 0x10))();
              }
            }
LAB_1803856ae:
            plVar3 = local_368;
            if (local_368 != (longlong *)0x0) {
              local_368 = (longlong *)0x0;
              (**(code **)(*plVar3 + 0x10))();
            }
            plVar3 = local_358;
            if (local_358 != (longlong *)0x0) {
              local_358 = (longlong *)0x0;
              (**(code **)(*plVar3 + 0x10))();
            }
          }
          else {
            local_388 = (longlong *)0x0;
            (**(code **)(*param_2 + 0x2e0))(param_2,&local_388,0);
            if (local_388 != (longlong *)0x0) {
              local_2d8 = 0;
              uStack_2d0 = 0;
              uStack_2c8 = 0;
              uStack_2c0 = 0;
              local_2b8 = (undefined1  [16])0x0;
              local_2a8 = 0;
              auVar22 = ZEXT1664(auVar22._0_16_);
              (**(code **)(*local_388 + 0x38))(local_388,&local_2d8);
              plVar3 = local_388;
              if ((((int)local_2d8 == 0) || (local_2d8._4_4_ == 0)) &&
                 ((uStack_2d0._4_4_ == 0 || (uStack_2c8._1_1_ == '\0')))) {
                if (local_388 != (longlong *)0x0) {
                  local_388 = (longlong *)0x0;
                  (**(code **)(*plVar3 + 0x10))();
                }
                goto LAB_1803852c0;
              }
            }
            plVar3 = local_388;
            if (local_388 != (longlong *)0x0) {
              local_388 = (longlong *)0x0;
              (**(code **)(*plVar3 + 0x10))();
            }
          }
        }
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
        plVar4 = local_350;
        if (local_350 != (longlong *)0x0) {
          local_350 = (longlong *)0x0;
          (**(code **)(*plVar4 + 0x10))();
        }
      }
    }
    plVar4 = local_378;
    if (local_378 != (longlong *)0x0) {
      local_378 = (longlong *)0x0;
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
    cVar14 = local_328[8];
  }
  plVar4 = local_370;
  if (local_370 != (longlong *)0x0) {
    local_370 = (longlong *)0x0;
    (**(code **)(*plVar4 + 0x10))();
  }
LAB_180385739:
  if (cVar14 != '\0') {
    FUN_1805f68fc(&DAT_180ba2fe0);
  }
}



