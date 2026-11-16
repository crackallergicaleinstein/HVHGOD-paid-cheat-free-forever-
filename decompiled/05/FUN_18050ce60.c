// FUN_18050ce60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18050ce60 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18050ce60(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  float fVar2;
  bool bVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  bool bVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  undefined8 *******pppppppuVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined1 *puVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  byte *pbVar16;
  byte *pbVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  undefined1 (*pauVar21) [16];
  undefined8 uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [64];
  undefined1 auStack_4f8 [32];
  undefined1 local_4d8;
  undefined1 local_4c8;
  undefined4 local_4c4;
  undefined1 local_4c0 [16];
  ulonglong uStack_4b0;
  ulonglong uStack_4a8;
  undefined1 local_498 [16];
  undefined1 auStack_488 [16];
  undefined1 local_478 [16];
  ulonglong local_468;
  ulonglong local_460;
  undefined8 local_458;
  undefined8 local_450;
  undefined8 *******local_448;
  longlong local_440;
  undefined1 local_438 [16];
  undefined1 local_428 [16];
  undefined1 local_418 [16];
  undefined1 local_408 [16];
  undefined1 local_3f8 [16];
  undefined1 local_3e8 [16];
  undefined1 local_3d8 [16];
  undefined1 local_3c8 [16];
  undefined1 local_3b8 [16];
  undefined1 local_3a8 [16];
  undefined1 local_398 [16];
  undefined1 local_388 [16];
  undefined1 local_378 [16];
  undefined1 local_368 [16];
  undefined1 local_358 [16];
  undefined1 local_348 [16];
  undefined1 local_338 [16];
  undefined1 local_328 [16];
  undefined1 local_318 [16];
  undefined1 local_308 [16];
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  undefined1 local_2d8 [16];
  undefined1 local_2c8 [16];
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [16];
  undefined1 local_298 [16];
  undefined1 local_288 [16];
  undefined1 local_278 [16];
  undefined1 local_268 [16];
  undefined1 local_258 [16];
  undefined1 local_248 [16];
  undefined1 local_238 [16];
  undefined1 local_228 [16];
  undefined1 local_218 [16];
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined8 *******local_b8;
  undefined8 uStack_b0;
  ulonglong uStack_a8;
  ulonglong uStack_a0;
  undefined1 local_98 [16];
  longlong local_88;
  ulonglong local_80;
  undefined8 *******local_78;
  longlong lStack_70;
  longlong lStack_68;
  ulonglong uStack_60;
  ulonglong local_58;
  
  local_58 = DAT_1808d5f00 ^ (ulonglong)auStack_4f8;
  uVar18 = 0;
  local_4c4 = 0;
  local_458 = param_3;
  local_450 = param_2;
  cVar7 = FUN_1804c1970(0x80);
  if (cVar7 == '\0') {
  }
  cVar7 = FUN_1804c3600(param_2,param_3,1);
  if (cVar7 == '\0') {
  }
  local_4c0 = (undefined1  [16])0x0;
  uStack_4b0 = 0;
  uStack_4a8 = 0;
  lVar19 = -1;
  do {
    lVar19 = lVar19 + 1;
  } while (*(char *)(param_1 + lVar19) != '\0');
  FUN_18015ba30(local_4c0,param_1);
  pbVar16 = local_4c0;
  if (0xf < uStack_4a8) {
    pbVar16 = (byte *)local_4c0._0_8_;
  }
  pbVar17 = pbVar16 + uStack_4b0;
  uStack_a8 = uStack_4b0;
  uStack_a0 = uStack_4a8;
  for (; pbVar16 != pbVar17; pbVar16 = pbVar16 + 1) {
    uStack_4b0 = uStack_a8;
    uStack_4a8 = uStack_a0;
    iVar8 = tolower((uint)*pbVar16);
    *pbVar16 = (byte)iVar8;
    if ((byte)iVar8 == 0x5f) {
      *pbVar16 = 0x20;
    }
    uStack_a8 = uStack_4b0;
    uStack_a0 = uStack_4a8;
  }
  local_b8 = (undefined8 *******)local_4c0._0_8_;
  uStack_b0 = local_4c0._8_8_;
  auVar1[0xf] = 0;
  auVar1._0_15_ = local_4c0._1_15_;
  local_4c0 = auVar1 << 8;
  uStack_4b0 = 0;
  uStack_4a8 = 0xf;
  FUN_18015c010(local_4c0);
  pppppppuVar10 = &local_b8;
  if (0xf < uStack_a0) {
    pppppppuVar10 = local_b8;
  }
  bVar4 = false;
  bVar3 = true;
  if (((1 < uStack_a8) &&
      (lVar19 = uStack_a8 + (longlong)pppppppuVar10,
      lVar9 = thunk_FUN_1805f9970(pppppppuVar10,lVar19,&DAT_1807c6cdc,2), uVar12 = uStack_a8,
      lVar9 != lVar19)) &&
     (uVar14 = lVar9 - (longlong)pppppppuVar10, uVar14 - 1 < 0xfffffffffffffffe)) {
    if (uStack_a8 < uVar14) {
      uVar20 = uVar14 - uStack_a8;
      if (uStack_a0 - uStack_a8 < uVar20) {
        local_4d8 = 0;
        FUN_18013fa60(&local_b8,uVar20,local_4c8,uVar20);
      }
      else {
        pppppppuVar10 = &local_b8;
        if (0xf < uStack_a0) {
          pppppppuVar10 = local_b8;
        }
        lVar19 = uStack_a8 + (longlong)pppppppuVar10;
        uStack_a8 = uVar14;
        FUN_18063ab10(lVar19,0,uVar20);
        *(undefined1 *)((longlong)pppppppuVar10 + uVar12 + uVar20) = 0;
      }
    }
    else {
      uStack_a8 = uVar14;
      pppppppuVar10 = &local_b8;
      if (0xf < uStack_a0) {
        pppppppuVar10 = local_b8;
      }
      *(undefined1 *)((longlong)pppppppuVar10 + uVar14) = 0;
    }
  }
  uVar12 = DAT_1808e6660;
  if (((DAT_180bbef4a == '\0') && (DAT_180c62f50 != 0)) && (*(int *)(DAT_180c62f50 + 0x24) == 2)) {
    bVar6 = true;
    local_498 = (undefined1  [16])0x0;
    auStack_488 = (undefined1  [16])0x0;
    FUN_18015ba30(local_498,"Player ESP",10);
    plVar11 = (longlong *)local_498;
    bVar4 = true;
    bVar3 = false;
  }
  else {
    bVar6 = false;
    local_478 = (undefined1  [16])0x0;
    pauVar21 = (undefined1 (*) [16])&DAT_1808e6650;
    if (0xf < DAT_1808e6668) {
      pauVar21 = DAT_1808e6650;
    }
    if (0x7fffffffffffffff < DAT_1808e6660) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bb70();
    }
    if (DAT_1808e6660 < 0x10) {
      local_468 = DAT_1808e6660;
      local_460 = 0xf;
      local_478 = *pauVar21;
    }
    else {
      uVar20 = DAT_1808e6660 | 0xf;
      uVar14 = 0x7fffffffffffffff;
      if ((uVar20 < 0x8000000000000000) && (uVar14 = uVar20, uVar20 < 0x16)) {
        uVar14 = 0x16;
      }
      uVar22 = FUN_18015bca0(uVar14 + 1);
      local_478._0_8_ = uVar22;
      local_468 = uVar12;
      local_460 = uVar14;
      FUN_18063aed0(uVar22,pauVar21,uVar12 + 1);
    }
    plVar11 = (longlong *)local_478;
  }
  local_78 = (undefined8 *******)*plVar11;
  lStack_70 = plVar11[1];
  lStack_68 = plVar11[2];
  uStack_60 = plVar11[3];
  *(undefined1 *)plVar11 = 0;
  plVar11[2] = 0;
  plVar11[3] = 0xf;
  if (bVar3) {
    FUN_18015c010(local_478);
  }
  if (bVar4) {
    FUN_18015c010(local_498);
  }
  local_88 = 0;
  local_80 = 0xf;
  local_98._1_15_ = SUB1615((undefined1  [16])0x0,1);
  auVar5[0xf] = 0;
  auVar5._0_15_ = local_98._1_15_;
  local_98 = auVar5 << 8;
  auVar23._12_4_ = 0;
  auVar23._0_12_ = ZEXT812(0);
  auVar23 = auVar23 << 0x20;
  if ((DAT_180cd7360 & 1) == 0) {
    DAT_180cd7360 = DAT_180cd7360 | 1;
    _DAT_180cd7320 = 0;
    DAT_180cd7328 = 0;
    DAT_180cd7330 = 0;
    DAT_180cd7338 = 0;
    _DAT_180cd7340 = 0;
    uRam0000000180cd7348 = 0;
    DAT_180cd7350 = 0;
    DAT_180cd7358 = 0;
    local_438 = (undefined1  [16])0x0;
    local_428 = (undefined1  [16])0x0;
    auVar24 = ZEXT1264(ZEXT812(0)) << 0x20;
    FUN_18015ba30(local_438,"ammo count",10);
    local_418 = (undefined1  [16])0x0;
    local_408 = (undefined1  [16])0x0;
    FUN_18015ba30(local_418,
                  "Shows the remaining magazine rounds beside the held weapon icon. Applies only to this target\'s player ESP."
                  ,0x6a);
    local_3f8 = (undefined1  [16])0x0;
    local_3e8 = (undefined1  [16])0x0;
    FUN_18015ba30(local_3f8,"pin pulled",10);
    local_3d8 = (undefined1  [16])0x0;
    local_3c8 = (undefined1  [16])0x0;
    FUN_18015ba30(local_3d8,
                  "Colors the held grenade icon while its pin is pulled, before the throw. It does not affect rifles or the defuse kit."
                  ,0x74);
    local_3b8 = (undefined1  [16])0x0;
    local_3a8 = (undefined1  [16])0x0;
    FUN_18015ba30(local_3b8,"preview grenade pin",0x13);
    local_398 = (undefined1  [16])0x0;
    local_388 = (undefined1  [16])0x0;
    FUN_18015ba30(local_398,
                  "Shows a grenade icon with the pin-pulled color in this editor. It does not change gameplay or equipped items."
                  ,0x6d);
    local_378 = (undefined1  [16])0x0;
    local_368 = (undefined1  [16])0x0;
    FUN_18015ba30(local_378,"enable player esp",0x11);
    local_358 = (undefined1  [16])0x0;
    local_348 = (undefined1  [16])0x0;
    FUN_18015ba30(local_358,"Enables player ESP for enemies.",0x1f);
    local_338 = (undefined1  [16])0x0;
    local_328 = (undefined1  [16])0x0;
    FUN_18015ba30(local_338,"overlay",7);
    local_318 = (undefined1  [16])0x0;
    local_308 = (undefined1  [16])0x0;
    FUN_18015ba30(local_318,
                  "Adds Electric, Hologram, or Distortion over the selected material for this visible or occluded layer. None removes the overlay."
                  ,0x7f);
    local_2f8 = (undefined1  [16])0x0;
    local_2e8 = (undefined1  [16])0x0;
    FUN_18015ba30(local_2f8,"latency",7);
    local_2d8 = (undefined1  [16])0x0;
    local_2c8 = (undefined1  [16])0x0;
    FUN_18015ba30(local_2d8,
                  "Shows this player\'s network ping in milliseconds. This is separate from Shot Delay."
                  ,0x53);
    local_2b8 = (undefined1  [16])0x0;
    local_2a8 = (undefined1  [16])0x0;
    FUN_18015ba30(local_2b8,"shot delay",10);
    local_298 = (undefined1  [16])0x0;
    local_288 = (undefined1  [16])0x0;
    FUN_18015ba30(local_298,
                  "Shows DELAY while the selected combat target is waiting for shot readiness. It is not network latency."
                  ,0x66);
    local_278 = (undefined1  [16])0x0;
    local_268 = (undefined1  [16])0x0;
    FUN_18015ba30(local_278,"name pixels",0xb);
    local_258 = (undefined1  [16])0x0;
    local_248 = (undefined1  [16])0x0;
    FUN_18015ba30(local_258,
                  "Sets only the nickname\'s pixel size. Flags, bars and equipment keep their compact fixed size."
                  ,0x5d);
    local_238 = (undefined1  [16])0x0;
    local_228 = (undefined1  [16])0x0;
    FUN_18015ba30(local_238,"on shot",7);
    local_218 = (undefined1  [16])0x0;
    local_208 = (undefined1  [16])0x0;
    FUN_18015ba30(local_218,
                  "Replays a short sequence of captured native poses after a confirmed hit on an enemy. The fading body stays close to the hit position and is visible only with normal depth testing."
                  ,0xb3);
    local_1f8 = (undefined1  [16])0x0;
    local_1e8 = (undefined1  [16])0x0;
    FUN_18015ba30(local_1f8,"only on kill",0xc);
    local_1d8 = (undefined1  [16])0x0;
    local_1c8 = (undefined1  [16])0x0;
    FUN_18015ba30(local_1d8,"Creates the captured body only when the confirmed hit kills the enemy."
                  ,0x46);
    local_1b8 = (undefined1  [16])0x0;
    local_1a8 = (undefined1  [16])0x0;
    FUN_18015ba30(local_1b8,"backtrack",9);
    local_198 = (undefined1  [16])0x0;
    local_188 = (undefined1  [16])0x0;
    FUN_18015ba30(local_198,
                  "Displays captured historical enemy poses. Each swatch configures the visible or through-wall material independently."
                  ,0x74);
    local_178 = (undefined1  [16])0x0;
    local_168 = (undefined1  [16])0x0;
    FUN_18015ba30(local_178,&DAT_18086639c,3);
    local_158 = (undefined1  [16])0x0;
    local_148 = (undefined1  [16])0x0;
    FUN_18015ba30(local_158,"Places this component in the near-body or outer horizontal row.",0x3f);
    local_138 = (undefined1  [16])0x0;
    local_128 = (undefined1  [16])0x0;
    FUN_18015ba30(local_138,&DAT_1806bd190,4);
    local_118 = (undefined1  [16])0x0;
    local_108 = (undefined1  [16])0x0;
    FUN_18015ba30(local_118,"Changes this ESP component\'s display size.",0x2a);
    local_f8 = (undefined1  [16])0x0;
    local_e8 = (undefined1  [16])0x0;
    FUN_18015ba30(local_f8,"position",8);
    local_d8 = (undefined1  [16])0x0;
    local_c8 = (undefined1  [16])0x0;
    FUN_18015ba30(local_d8,
                  "Moves this ESP component to the left, top, right or bottom of the player.",0x49);
    local_4c4 = auVar24._0_4_;
    uVar22 = FUN_180111790(&DAT_180cd7320,&local_4c4);
    pppppppuVar10 = (undefined8 *******)local_438;
    do {
      uVar22 = FUN_180570550(uVar22,local_498,pppppppuVar10);
      pppppppuVar10 = pppppppuVar10 + 8;
    } while ((undefined8 ********)pppppppuVar10 != &local_b8);
    _eh_vector_destructor_iterator_(local_438,0x40,0xe,FUN_180156fb0);
    atexit(FUN_180663cd0);
    auVar23 = auVar24._0_16_;
  }
  if (bVar6) {
    pppppppuVar10 = &local_b8;
    if (0xf < uStack_a0) {
      pppppppuVar10 = local_b8;
    }
    uVar14 = 0xcbf29ce484222325;
    uVar20 = 0xcbf29ce484222325;
    uVar12 = 0;
    if (uStack_a8 != 0) {
      do {
        uVar20 = (uVar20 ^ *(byte *)((longlong)pppppppuVar10 + uVar12)) * 0x100000001b3;
        uVar12 = uVar12 + 1;
      } while (uVar12 < uStack_a8);
    }
    auVar24 = ZEXT1664(auVar23);
    lVar19 = FUN_180177b00(&DAT_180cd7320,local_498,&local_b8,uVar20);
    auVar23 = auVar24._0_16_;
    if (*(longlong *)(lVar19 + 8) == 0) goto LAB_18050d8b4;
    pppppppuVar10 = &local_b8;
    if (0xf < uStack_a0) {
      pppppppuVar10 = local_b8;
    }
    if (uStack_a8 != 0) {
      do {
        uVar14 = (uVar14 ^ *(byte *)((longlong)pppppppuVar10 + uVar18)) * 0x100000001b3;
        uVar18 = uVar18 + 1;
      } while (uVar18 < uStack_a8);
    }
    FUN_180177b00(&DAT_180cd7320,local_498,&local_b8,uVar14);
    if (local_498._8_8_ == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805fa8dc("invalid unordered_map<K, T> key");
    }
    puVar15 = (undefined8 *)(local_498._8_8_ + 0x30);
    if ((undefined8 *)local_98 == puVar15) goto LAB_18050d92a;
    uVar22 = *(undefined8 *)(local_498._8_8_ + 0x40);
    if (0xf < *(ulonglong *)(local_498._8_8_ + 0x48)) {
      puVar15 = (undefined8 *)*puVar15;
    }
  }
  else {
LAB_18050d8b4:
    local_448 = &local_78;
    if (0xf < uStack_60) {
      local_448 = local_78;
    }
    local_498._0_8_ = &local_b8;
    if (0xf < uStack_a0) {
      local_498._0_8_ = local_b8;
    }
    local_440 = lStack_68;
    local_498._8_8_ = uStack_a8;
    auVar24 = ZEXT1664(auVar23);
    puVar15 = (undefined8 *)FUN_18050a420(local_478,local_498,&local_448);
    uVar22 = puVar15[1];
    puVar15 = (undefined8 *)*puVar15;
  }
  FUN_180113930(local_98,puVar15,uVar22);
LAB_18050d92a:
  if (local_88 != 0) {
    plVar11 = *(longlong **)(DAT_180bb8ae8 + 0x14d0);
    lVar19 = DAT_180bb8ae8;
    iVar8 = FUN_1804b0a90(param_1,0,
                          *(undefined4 *)(plVar11[0x22] + -4 + (longlong)(int)plVar11[0x21] * 4));
    uVar22 = auVar24._0_8_;
    if (*(int *)(*plVar11 + 0x1534) == iVar8) {
      FUN_1804cf810(iVar8,0xb,param_1);
      uVar22 = auVar24._0_8_;
      lVar19 = DAT_180bb8ae8;
    }
    if ((DAT_180c7e090 == iVar8) && (*(int *)(lVar19 + 4) <= DAT_180c7e0b0 + 1)) {
    }
    else {
      DAT_180c7e124 = (float)uVar22;
      DAT_180c7e090 = iVar8;
    }
    DAT_180c7e0b0 = *(int *)(lVar19 + 4);
    DAT_180c7e124 = DAT_180c7e124 + *(float *)(lVar19 + 0x40);
    if (0.45 < DAT_180c7e124) {
      fVar2 = (DAT_180c7e124 - 0.45) * 12.0;
      if ((float)uVar22 <= fVar2) {
        auVar1 = vminss_avx(SUB6416(ZEXT464(0x3f800000),0),ZEXT416((uint)fVar2));
        uVar22 = auVar1._0_8_;
      }
      puVar13 = local_98;
      if (0xf < local_80) {
        puVar13 = (undefined1 *)local_98._0_8_;
      }
      FUN_1804acbf0(puVar13,local_450,local_458,uVar22);
    }
  }
  FUN_18015c010(local_98);
  FUN_18015c010(&local_78);
  FUN_18015c010(&local_b8);
}



