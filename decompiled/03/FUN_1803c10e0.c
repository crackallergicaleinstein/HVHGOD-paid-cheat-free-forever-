// FUN_1803c10e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803c10e0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803c10e0(longlong param_1,int *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  size_t sVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  bool bVar12;
  char cVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  undefined8 uVar17;
  longlong *plVar18;
  int *piVar19;
  undefined8 *puVar20;
  int *piVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  longlong lVar25;
  longlong lVar26;
  undefined1 auStack_478 [32];
  char local_458;
  char local_457;
  char local_456;
  uint local_450;
  undefined4 uStack_44c;
  undefined8 *local_448 [2];
  undefined8 local_438;
  undefined4 local_430;
  undefined1 local_428 [16];
  undefined8 local_418;
  undefined8 uStack_410;
  undefined1 local_408 [16];
  undefined8 local_3f8;
  undefined4 local_3f0;
  undefined4 local_3ec;
  undefined4 local_3e8;
  undefined8 local_3e0;
  undefined8 local_3d8;
  undefined8 local_3d0;
  undefined1 local_3c8;
  undefined1 local_3c0 [16];
  undefined8 local_3b0;
  undefined8 local_3a8;
  undefined8 local_3a0;
  undefined8 local_398;
  undefined8 local_390;
  undefined4 local_388;
  undefined1 local_384;
  undefined4 local_380;
  undefined4 local_37c;
  undefined4 local_378;
  undefined1 local_374;
  undefined4 local_370;
  undefined4 local_36c;
  undefined1 local_368 [16];
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined4 local_340;
  undefined4 local_33c;
  undefined4 local_338;
  undefined4 local_334;
  undefined4 local_330;
  undefined4 local_32c;
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
  undefined8 local_2c8 [41];
  int *local_180;
  undefined1 local_178 [2] [16];
  undefined1 local_158 [16];
  undefined1 local_148 [88];
  undefined8 local_f0;
  undefined1 local_e0 [88];
  undefined1 local_88 [64];
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_478;
  local_450 = 0;
  local_180 = param_2;
  local_448[0] = (undefined8 *)GetTickCount64();
  auVar9 = local_178[0];
  if ((*(char *)(param_1 + 0xdc0) == '\0') && (*(char *)(param_1 + 0xdc1) == '\0')) {
    local_178[0]._0_2_ = 0x200;
    uVar2 = local_178[0]._0_4_;
    local_178[0]._9_7_ = auVar9._9_7_;
    local_178[0]._4_5_ = 0;
    local_178[0]._12_4_ = 0xffffffff;
    auVar9 = local_178[0];
    local_178[0]._4_4_ = 0;
    local_178[0]._0_8_ = CONCAT44(local_178[0]._4_4_,uVar2);
    local_178[0]._8_8_ = auVar9._8_8_;
    *(undefined8 *)(param_2 + 0x49) = local_178[0]._0_8_;
    *(undefined8 *)(param_2 + 0x4b) = local_178[0]._8_8_;
    param_2[0x4d] = 0;
    local_178[0]._2_14_ = auVar9._2_14_;
    local_178[0]._0_2_ = 0x200;
    uVar2 = local_178[0]._0_4_;
    local_178[0]._9_7_ = auVar9._9_7_;
    local_178[0]._4_5_ = 0;
    local_178[0]._12_4_ = 0xffffffff;
    auVar9 = local_178[0];
    local_178[0]._4_4_ = 0;
    local_178[0]._0_8_ = CONCAT44(local_178[0]._4_4_,uVar2);
    local_178[0]._8_8_ = auVar9._8_8_;
    *(undefined8 *)(param_2 + 0x4e) = local_178[0]._0_8_;
    *(undefined8 *)(param_2 + 0x50) = local_178[0]._8_8_;
    param_2[0x52] = 0;
    local_178[0]._4_8_ = 0xffffffffffffffff;
    local_178[0]._0_12_ = CONCAT84(local_178[0]._4_8_,uVar2);
    local_178[0]._12_4_ = 0xffffffff;
    auVar9 = local_178[0];
    local_178[0]._8_8_ = auVar9._8_8_;
    *(undefined8 *)(param_2 + 0x92) = local_178[0]._0_8_;
    *(undefined8 *)(param_2 + 0x94) = local_178[0]._8_8_;
    local_178[0] = auVar9;
  }
  iVar15 = *param_2;
  if (iVar15 < 1) {
    LOCK();
    *(undefined8 *)(param_1 + 0x1048) = 0;
    UNLOCK();
    local_438 = 0;
    local_430 = 0;
    local_418 = 0;
    uStack_410 = 0xf;
    local_428._1_15_ = SUB1615((undefined1  [16])0x0,1);
    auVar9[0xf] = 0;
    auVar9._0_15_ = local_428._1_15_;
    local_428 = auVar9 << 8;
    local_408 = (undefined1  [16])0x0;
    local_3f8 = 0;
    local_3f0 = 0;
    local_3ec = 0;
    local_3e8 = 0x3f800000;
    local_3e0 = 0;
    local_3d8 = 0;
    local_3d0 = 0;
    local_3c8 = 0;
    local_3b0 = 0;
    local_3a8 = 0xf;
    local_3c0._1_15_ = SUB1615((undefined1  [16])0x0,1);
    auVar10[0xf] = 0;
    auVar10._0_15_ = local_3c0._1_15_;
    local_3c0 = auVar10 << 8;
    local_3a0 = 0;
    local_398 = 0;
    local_390 = 0;
    local_388 = 0;
    local_384 = 0;
    local_380 = 0;
    local_37c = 0;
    local_378 = 0;
    local_374 = 0;
    local_370 = 0xffffffff;
    local_36c = 0;
    local_358 = 0;
    uStack_350 = 0xf;
    local_368._1_15_ = SUB1615((undefined1  [16])0x0,1);
    auVar11[0xf] = 0;
    auVar11._0_15_ = local_368._1_15_;
    local_368 = auVar11 << 8;
    local_348 = 0;
    local_340 = 0;
    local_33c = 0x3f000000;
    local_338 = 0x3f000000;
    local_334 = 0x101010;
    local_330 = 0x808080;
    local_32c = 0xffffffff;
    uVar17 = FUN_1801d8a70(local_2c8,&local_438);
    FUN_1803edc60(param_1 + 0x980,uVar17);
    FUN_18015c010(local_368);
    FUN_18015c010(local_3c0);
    FUN_18015c010(local_428);
    local_178[0] = (undefined1  [16])0x0;
    FUN_1803c9920(param_1 + 0x1020,local_178);
    *(undefined8 *)(param_1 + 0x10c8) = 0;
    if (*(char *)(param_1 + 0xec2) == '\0') {
      *(undefined1 *)(param_1 + 0x10d4) = 0;
      plVar18 = *(longlong **)(param_1 + 0x1060);
      if (plVar18 != (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0x1060) = 0;
        (**(code **)(*plVar18 + 0x10))();
      }
      plVar18 = *(longlong **)(param_1 + 0x1068);
      if (plVar18 != (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0x1068) = 0;
        (**(code **)(*plVar18 + 0x10))();
      }
    }
    goto LAB_1803c1ba9;
  }
  cVar13 = *(char *)(param_1 + 0x10d4);
  if (((((cVar13 == '\0') || (*(char *)((longlong)param_2 + 0xfa) == '\0')) ||
       (iVar15 != *(int *)(param_1 + 0xdc8))) ||
      ((param_2[1] != *(int *)(param_1 + 0xdcc) || (param_2[0x43] != *(int *)(param_1 + 0xed4)))))
     || (param_2[2] != *(int *)(param_1 + 0xdd0))) {
LAB_1803c146a:
    local_456 = '\0';
    if (((cVar13 != '\0') && (iVar15 == *(int *)(param_1 + 0xdc8))) &&
       ((param_2[1] == *(int *)(param_1 + 0xdcc) &&
        ((param_2[0x43] == *(int *)(param_1 + 0xed4) && (param_2[2] == *(int *)(param_1 + 0xdd0)))))
       )) goto LAB_1803c14b9;
LAB_1803c1842:
    bVar12 = true;
    local_457 = '\x01';
    plVar18 = (longlong *)CONCAT44(uStack_44c,local_450);
    uVar16 = local_450;
LAB_1803c15e6:
    local_458 = '\x01';
  }
  else {
    puVar24 = (undefined8 *)(param_1 + 0xdd8);
    piVar21 = param_2 + 4;
    if (0xf < *(ulonglong *)(param_1 + 0xdf0)) {
      puVar24 = (undefined8 *)*puVar24;
    }
    sVar3 = *(size_t *)(param_2 + 8);
    if (0xf < *(ulonglong *)(param_2 + 10)) {
      piVar21 = *(int **)piVar21;
    }
    if ((((sVar3 != *(size_t *)(param_1 + 0xde8)) ||
         ((sVar3 != 0 && (iVar14 = memcmp(piVar21,puVar24,sVar3), iVar14 != 0)))) ||
        (param_2[0x3c] != *(int *)(param_1 + 0xeb8))) ||
       (((param_2[0x3d] != *(int *)(param_1 + 0xebc) || (param_2[0xe] != *(int *)(param_1 + 0xe00)))
        || (param_2[0xf] != *(int *)(param_1 + 0xe04))))) goto LAB_1803c146a;
    local_456 = '\x01';
LAB_1803c14b9:
    puVar24 = (undefined8 *)(param_1 + 0xdd8);
    piVar21 = param_2 + 4;
    if (0xf < *(ulonglong *)(param_1 + 0xdf0)) {
      puVar24 = (undefined8 *)*puVar24;
    }
    sVar3 = *(size_t *)(param_2 + 8);
    if (0xf < *(ulonglong *)(param_2 + 10)) {
      piVar21 = *(int **)piVar21;
    }
    if (((sVar3 != *(size_t *)(param_1 + 0xde8)) ||
        (((sVar3 != 0 && (iVar15 = memcmp(piVar21,puVar24,sVar3), iVar15 != 0)) ||
         (param_2[0x3c] != *(int *)(param_1 + 0xeb8))))) ||
       (param_2[0x3d] != *(int *)(param_1 + 0xebc))) goto LAB_1803c1842;
    if ((((param_2[0xe] != *(int *)(param_1 + 0xe00)) || (param_2[0xf] != *(int *)(param_1 + 0xe04))
         ) || ((*(char *)(param_1 + 0xdc1) != '\0' &&
               ((float)param_2[0x14] != *(float *)(param_1 + 0xe18))))) ||
       ((char)param_2[0x8f] != *(char *)(param_1 + 0x1004))) {
      bVar12 = false;
      local_457 = '\x01';
      plVar18 = (longlong *)CONCAT44(uStack_44c,local_450);
      uVar16 = local_450;
      goto LAB_1803c15e6;
    }
    local_457 = '\0';
    cVar13 = FUN_1803c1e70(param_2 + 0x44,param_1 + 0xed8);
    if (cVar13 == '\0') {
      plVar18 = (longlong *)CONCAT44(uStack_44c,local_450);
      uVar16 = local_450;
LAB_1803c15e3:
      bVar12 = false;
      goto LAB_1803c15e6;
    }
    plVar18 = (longlong *)FUN_180113860(param_1 + 0x1028);
    lVar25 = *(longlong *)(param_1 + 0x1020);
    if (plVar18 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
      UNLOCK();
    }
    LOCK();
    uVar17 = *(undefined8 *)(param_1 + 0x1028);
    *(undefined8 *)(param_1 + 0x1028) = plVar18;
    UNLOCK();
    if (((byte)uVar17 & 3) == 2) {
      FUN_1805fa36c(param_1 + 0x1028);
    }
    uVar16 = 1;
    if (lVar25 == 0) goto LAB_1803c15e3;
    local_458 = '\0';
    bVar12 = false;
  }
  if (((uVar16 & 1) != 0) && (plVar18 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plVar18 + 1;
    lVar25 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar25 == 1) {
      (**(code **)*plVar18)(plVar18);
      LOCK();
      piVar21 = (int *)((longlong)plVar18 + 0xc);
      iVar15 = *piVar21;
      *piVar21 = *piVar21 + -1;
      UNLOCK();
      if (iVar15 == 1) {
        (**(code **)(*plVar18 + 8))(plVar18);
      }
    }
  }
  FUN_1803c1c00(param_1 + 0xdc8,param_2);
  cVar13 = local_457;
  lVar26 = 2;
  lVar25 = 2;
  piVar21 = param_2 + 0x44;
  puVar24 = (undefined8 *)(param_1 + 0xed8);
  do {
    puVar22 = puVar24;
    piVar19 = piVar21;
    uVar17 = *(undefined8 *)(piVar19 + 2);
    *puVar22 = *(undefined8 *)piVar19;
    puVar22[1] = uVar17;
    uVar17 = *(undefined8 *)(piVar19 + 6);
    puVar22[2] = *(undefined8 *)(piVar19 + 4);
    puVar22[3] = uVar17;
    uVar17 = *(undefined8 *)(piVar19 + 10);
    puVar22[4] = *(undefined8 *)(piVar19 + 8);
    puVar22[5] = uVar17;
    uVar17 = *(undefined8 *)(piVar19 + 0xe);
    puVar22[6] = *(undefined8 *)(piVar19 + 0xc);
    puVar22[7] = uVar17;
    uVar17 = *(undefined8 *)(piVar19 + 0x12);
    puVar22[8] = *(undefined8 *)(piVar19 + 0x10);
    puVar22[9] = uVar17;
    uVar17 = *(undefined8 *)(piVar19 + 0x16);
    puVar22[10] = *(undefined8 *)(piVar19 + 0x14);
    puVar22[0xb] = uVar17;
    uVar17 = *(undefined8 *)(piVar19 + 0x1a);
    puVar22[0xc] = *(undefined8 *)(piVar19 + 0x18);
    puVar22[0xd] = uVar17;
    uVar17 = *(undefined8 *)(piVar19 + 0x1e);
    puVar22[0xe] = *(undefined8 *)(piVar19 + 0x1c);
    puVar22[0xf] = uVar17;
    lVar25 = lVar25 + -1;
    piVar21 = piVar19 + 0x20;
    puVar24 = puVar22 + 0x10;
  } while (lVar25 != 0);
  uVar17 = *(undefined8 *)(piVar19 + 0x22);
  puVar22[0x10] = *(undefined8 *)(piVar19 + 0x20);
  puVar22[0x11] = uVar17;
  uVar17 = *(undefined8 *)(piVar19 + 0x26);
  puVar22[0x12] = *(undefined8 *)(piVar19 + 0x24);
  puVar22[0x13] = uVar17;
  uVar17 = *(undefined8 *)(piVar19 + 0x2a);
  puVar22[0x14] = *(undefined8 *)(piVar19 + 0x28);
  puVar22[0x15] = uVar17;
  uVar17 = *(undefined8 *)(piVar19 + 0x2e);
  puVar22[0x16] = *(undefined8 *)(piVar19 + 0x2c);
  puVar22[0x17] = uVar17;
  puVar22[0x18] = *(undefined8 *)(piVar19 + 0x30);
  lVar25 = 0xfa;
  if (*(char *)(param_1 + 0xdc1) != '\0') {
    lVar25 = 0x4e2;
  }
  *(longlong *)(param_1 + 0x10c8) = lVar25 + (longlong)local_448[0];
  if (local_457 != '\0') {
    *(undefined1 *)(param_1 + 0x10d4) = 1;
    *(undefined4 *)(param_1 + 0x10d0) = 0;
    *(undefined8 *)(param_1 + 0x10c0) = 0;
    if ((*(char *)(param_1 + 0xdc1) == '\0') || (bVar12)) {
      LOCK();
      *(undefined4 *)(param_1 + 0x1050) = 0;
      UNLOCK();
      *(undefined1 *)(param_1 + 0x978) = 0;
      local_328 = 0;
      uStack_320 = 0;
      uStack_318 = 0;
      uStack_310 = 0;
      local_308 = 0;
      uStack_300 = 0;
      uStack_2f8 = 0;
      uStack_2f0 = 0;
      local_2e8 = 0;
      uStack_2e0 = 0;
      uStack_2d8 = 0;
      uStack_2d0 = 0;
      FUN_1803c8490(&local_328);
      FUN_1803bfc40(param_1 + 0x8c0,&local_328);
      _eh_vector_destructor_iterator_(&local_328,0x18,4,FUN_1801d7480);
      *(undefined8 *)(param_1 + 0x970) = 0;
      if (local_456 == '\0') {
        plVar18 = *(longlong **)(param_1 + 0x1060);
        if (plVar18 != (longlong *)0x0) {
          *(undefined8 *)(param_1 + 0x1060) = 0;
          (**(code **)(*plVar18 + 0x10))();
        }
        plVar18 = *(longlong **)(param_1 + 0x1068);
        if (plVar18 != (longlong *)0x0) {
          *(undefined8 *)(param_1 + 0x1068) = 0;
          (**(code **)(*plVar18 + 0x10))();
        }
        *(undefined8 *)(param_1 + 0x1098) = 0;
        plVar18 = *(longlong **)(param_1 + 0x10a0);
        *(undefined8 *)(param_1 + 0x10a0) = 0;
        if (plVar18 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar18 + 1;
          lVar25 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar25 == 1) {
            (**(code **)*plVar18)(plVar18);
            LOCK();
            piVar21 = (int *)((longlong)plVar18 + 0xc);
            iVar15 = *piVar21;
            *piVar21 = *piVar21 + -1;
            UNLOCK();
            if (iVar15 == 1) {
              (**(code **)(*plVar18 + 8))(plVar18);
            }
          }
        }
        *(undefined1 *)(param_1 + 0x10a8) = 0;
      }
    }
    plVar18 = *(longlong **)(param_1 + 0x1070);
    if (plVar18 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x1070) = 0;
      (**(code **)(*plVar18 + 0x10))();
    }
    plVar18 = *(longlong **)(param_1 + 0x1078);
    if (plVar18 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x1078) = 0;
      (**(code **)(*plVar18 + 0x10))();
    }
    plVar18 = *(longlong **)(param_1 + 0x1080);
    if (plVar18 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x1080) = 0;
      (**(code **)(*plVar18 + 0x10))();
    }
    plVar18 = *(longlong **)(param_1 + 0x1090);
    if (plVar18 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x1090) = 0;
      (**(code **)(*plVar18 + 0x10))();
    }
    plVar18 = *(longlong **)(param_1 + 0x1088);
    if (plVar18 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x1088) = 0;
      (**(code **)(*plVar18 + 0x10))();
    }
    *(undefined1 *)(param_1 + 0x10a9) = 0;
    *(undefined8 *)(param_1 + 0x10b0) = 0;
  }
  if (local_458 != '\0') {
    *(longlong *)(param_1 + 0x10b8) = *(longlong *)(param_1 + 0x10b8) + 1;
    LOCK();
    *(undefined8 *)(param_1 + 0x1030) = 0;
    UNLOCK();
    LOCK();
    *(undefined8 *)(param_1 + 0x1038) = 0;
    UNLOCK();
    LOCK();
    *(undefined8 *)(param_1 + 0x1040) = 0;
    UNLOCK();
    if (cVar13 != '\0') {
      *(undefined8 *)(param_1 + 0x8b8) = *(undefined8 *)(param_1 + 0x10b8);
    }
    local_178[0] = (undefined1  [16])0x0;
    FUN_1803c84e0(local_178);
    lVar25 = 2;
    puVar24 = (undefined8 *)(param_1 + 0xed8);
    puVar22 = local_2c8;
    do {
      puVar23 = puVar22;
      puVar20 = puVar24;
      uVar17 = puVar20[1];
      uVar4 = puVar20[2];
      uVar5 = puVar20[3];
      *puVar23 = *puVar20;
      puVar23[1] = uVar17;
      puVar23[2] = uVar4;
      puVar23[3] = uVar5;
      uVar17 = puVar20[5];
      uVar4 = puVar20[6];
      uVar5 = puVar20[7];
      puVar23[4] = puVar20[4];
      puVar23[5] = uVar17;
      puVar23[6] = uVar4;
      puVar23[7] = uVar5;
      uVar17 = puVar20[9];
      uVar4 = puVar20[10];
      uVar5 = puVar20[0xb];
      puVar23[8] = puVar20[8];
      puVar23[9] = uVar17;
      puVar23[10] = uVar4;
      puVar23[0xb] = uVar5;
      uVar17 = puVar20[0xd];
      puVar23[0xc] = puVar20[0xc];
      puVar23[0xd] = uVar17;
      uVar17 = puVar20[0xf];
      puVar23[0xe] = puVar20[0xe];
      puVar23[0xf] = uVar17;
      lVar25 = lVar25 + -1;
      puVar24 = puVar20 + 0x10;
      puVar22 = puVar23 + 0x10;
    } while (lVar25 != 0);
    uVar17 = puVar20[0x11];
    uVar4 = puVar20[0x12];
    uVar5 = puVar20[0x13];
    puVar23[0x10] = puVar20[0x10];
    puVar23[0x11] = uVar17;
    puVar23[0x12] = uVar4;
    puVar23[0x13] = uVar5;
    uVar17 = puVar20[0x15];
    uVar4 = puVar20[0x16];
    uVar5 = puVar20[0x17];
    puVar23[0x14] = puVar20[0x14];
    puVar23[0x15] = uVar17;
    puVar23[0x16] = uVar4;
    puVar23[0x17] = uVar5;
    puVar23[0x18] = puVar20[0x18];
    puVar24 = local_2c8;
    puVar22 = (undefined8 *)local_178[0]._0_8_;
    do {
      puVar23 = puVar22;
      puVar20 = puVar24;
      uVar17 = puVar20[1];
      uVar4 = puVar20[2];
      uVar5 = puVar20[3];
      *puVar23 = *puVar20;
      puVar23[1] = uVar17;
      puVar23[2] = uVar4;
      puVar23[3] = uVar5;
      uVar17 = puVar20[5];
      uVar4 = puVar20[6];
      uVar5 = puVar20[7];
      puVar23[4] = puVar20[4];
      puVar23[5] = uVar17;
      puVar23[6] = uVar4;
      puVar23[7] = uVar5;
      uVar17 = puVar20[9];
      uVar4 = puVar20[10];
      uVar5 = puVar20[0xb];
      puVar23[8] = puVar20[8];
      puVar23[9] = uVar17;
      puVar23[10] = uVar4;
      puVar23[0xb] = uVar5;
      uVar17 = puVar20[0xd];
      puVar23[0xc] = puVar20[0xc];
      puVar23[0xd] = uVar17;
      uVar17 = puVar20[0xf];
      puVar23[0xe] = puVar20[0xe];
      puVar23[0xf] = uVar17;
      lVar26 = lVar26 + -1;
      puVar24 = puVar20 + 0x10;
      puVar22 = puVar23 + 0x10;
    } while (lVar26 != 0);
    uVar17 = puVar20[0x11];
    uVar4 = puVar20[0x12];
    uVar5 = puVar20[0x13];
    puVar23[0x10] = puVar20[0x10];
    puVar23[0x11] = uVar17;
    puVar23[0x12] = uVar4;
    puVar23[0x13] = uVar5;
    uVar17 = puVar20[0x15];
    uVar4 = puVar20[0x16];
    uVar5 = puVar20[0x17];
    puVar23[0x14] = puVar20[0x14];
    puVar23[0x15] = uVar17;
    puVar23[0x16] = uVar4;
    puVar23[0x17] = uVar5;
    puVar23[0x18] = puVar20[0x18];
    if ((*(char *)(param_1 + 0x10a9) != '\0') && (*(char *)(param_1 + 0x1004) != '\0')) {
      uVar6 = *(undefined8 *)(param_1 + 0xf58);
      uVar7 = *(undefined8 *)(param_1 + 0xf60);
      uVar8 = *(undefined8 *)(param_1 + 0xf68);
      uVar4 = *(undefined8 *)(param_1 + 0xf70);
      uVar5 = *(undefined8 *)(param_1 + 0xf78);
      uVar17 = *(undefined8 *)(param_1 + 0xf80);
      uVar2 = *(undefined4 *)(param_1 + 0xf88);
      *(undefined8 *)local_178[0]._0_8_ = *(undefined8 *)(param_1 + 0xf50);
      *(undefined8 *)(local_178[0]._0_8_ + 8) = uVar6;
      *(undefined8 *)(local_178[0]._0_8_ + 0x10) = uVar7;
      *(undefined8 *)(local_178[0]._0_8_ + 0x18) = uVar8;
      *(undefined8 *)(local_178[0]._0_8_ + 0x20) = uVar4;
      *(undefined8 *)(local_178[0]._0_8_ + 0x28) = uVar5;
      *(undefined8 *)(local_178[0]._0_8_ + 0x30) = uVar17;
      *(undefined4 *)(local_178[0]._0_8_ + 0x38) = uVar2;
      uVar6 = *(undefined8 *)(param_1 + 0xfd0);
      uVar7 = *(undefined8 *)(param_1 + 0xfd8);
      uVar8 = *(undefined8 *)(param_1 + 0xfe0);
      uVar4 = *(undefined8 *)(param_1 + 0xfe8);
      uVar5 = *(undefined8 *)(param_1 + 0xff0);
      uVar17 = *(undefined8 *)(param_1 + 0xff8);
      uVar2 = *(undefined4 *)(param_1 + 0x1000);
      *(undefined8 *)(local_178[0]._0_8_ + 0xb4) = *(undefined8 *)(param_1 + 0xfc8);
      *(undefined8 *)(local_178[0]._0_8_ + 0xbc) = uVar6;
      *(undefined8 *)(local_178[0]._0_8_ + 0xc4) = uVar7;
      *(undefined8 *)(local_178[0]._0_8_ + 0xcc) = uVar8;
      *(undefined8 *)(local_178[0]._0_8_ + 0xd4) = uVar4;
      *(undefined8 *)(local_178[0]._0_8_ + 0xdc) = uVar5;
      *(undefined8 *)(local_178[0]._0_8_ + 0xe4) = uVar17;
      *(undefined4 *)(local_178[0]._0_8_ + 0xec) = uVar2;
      *(undefined1 *)(local_178[0]._0_8_ + 0x12e) = *(undefined1 *)(param_1 + 0x1005);
    }
    *(undefined4 *)(local_178[0]._0_8_ + 0x148) = *(undefined4 *)(param_1 + 0xdc8);
    *(undefined8 *)(local_178[0]._0_8_ + 0x150) = *(undefined8 *)(param_1 + 0x10b8);
    local_448[0] = (undefined8 *)local_178[0]._0_8_;
    local_448[1] = (undefined8 *)local_178[0]._8_8_;
    FUN_1803c9920(param_1 + 0x1020,local_448);
  }
  *(undefined8 *)(param_1 + 0x1048) = *(undefined8 *)(param_1 + 0x10c8);
  FUN_1801d8cb0(local_158,param_1 + 0xdc8);
  local_f0 = 0;
  uVar17 = FUN_1801d8a70(local_2c8,local_158);
  FUN_1803edc60(param_1 + 0x980,uVar17);
  FUN_18015c010(local_88);
  FUN_18015c010(local_e0);
  FUN_18015c010(local_148);
LAB_1803c1ba9:
  FUN_18015c010(param_2 + 0x34);
  FUN_18015c010(param_2 + 0x1e);
  FUN_18015c010(param_2 + 4);
}



