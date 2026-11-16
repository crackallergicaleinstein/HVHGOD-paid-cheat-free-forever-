// FUN_18052be80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18052be80 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18052be80(int param_1)

{
  short sVar1;
  ushort uVar2;
  ushort uVar3;
  undefined1 auVar4 [16];
  bool bVar5;
  undefined1 auVar6 [15];
  char cVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  longlong lVar15;
  short *psVar16;
  char *pcVar17;
  uint uVar18;
  undefined8 *puVar19;
  ushort *puVar20;
  longlong lVar21;
  undefined8 *puVar22;
  int iVar23;
  int iVar24;
  ushort *puVar25;
  ushort *puVar26;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar27 [16];
  undefined1 auVar28 [64];
  undefined1 auVar29 [64];
  undefined1 auVar30 [64];
  undefined1 auVar31 [64];
  undefined8 uVar32;
  undefined1 auStack_458 [32];
  char local_438;
  uint local_434;
  ushort *local_430;
  undefined2 local_428;
  undefined2 local_426;
  int local_424;
  longlong local_420;
  uint local_418;
  int local_414;
  char *local_410;
  int *local_408;
  undefined4 local_3f8;
  undefined4 local_3f4;
  undefined4 local_3f0;
  undefined1 local_3ec;
  undefined4 local_3e8;
  undefined1 local_3e0 [16];
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  uint local_3c0;
  undefined4 uStack_3bc;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  longlong local_3b0;
  undefined1 auStack_3a8 [16];
  undefined8 uStack_398;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  longlong lStack_378;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  longlong lStack_340;
  undefined1 auStack_338 [16];
  undefined4 local_328;
  undefined1 local_324 [16];
  ulonglong local_314;
  undefined4 local_30c;
  longlong local_308;
  ushort *local_300;
  longlong local_2f8;
  undefined4 local_2f0;
  undefined4 local_2ec;
  undefined4 local_2e8;
  undefined1 local_2e4;
  undefined4 local_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  longlong local_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  longlong lStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  longlong lStack_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined4 local_220;
  undefined1 local_21c [16];
  ulonglong local_20c;
  int local_200;
  int local_1fc;
  undefined1 local_1f8 [32];
  undefined1 local_1d8 [32];
  undefined1 local_1b8 [32];
  undefined1 local_198 [32];
  undefined1 local_178 [12];
  undefined1 local_16c;
  undefined4 local_168;
  undefined1 local_160 [216];
  ulonglong local_88;
  
  local_88 = DAT_1808d5f00 ^ (ulonglong)auStack_458;
  iVar24 = *(int *)(*(longlong *)(*DAT_180c62f50 + (longlong)(int)DAT_180c62f50[3] * 8) + 0x4968);
  local_414 = 3 - (uint)(iVar24 != 0);
  local_424 = param_1;
  lVar10 = FUN_180529500(iVar24,param_1);
  if (DAT_1808e6670 != '\0') {
  }
  sVar1 = *(short *)(*(longlong *)(*DAT_180c62f50 + (longlong)(int)DAT_180c62f50[3] * 8) + 0x4970 +
                    ((longlong)iVar24 * 0x15 + (longlong)param_1) * 4);
  if (DAT_180b909b0 == 0) {
  }
  if (sVar1 < 0) {
  }
  if ((int)((*(longlong *)(DAT_180b909b0 + 0x60) - *(longlong *)(DAT_180b909b0 + 0x58)) / 0x68) <=
      (int)sVar1) {
  }
  puVar25 = (ushort *)((longlong)sVar1 * 0x68 + *(longlong *)(DAT_180b909b0 + 0x58));
  if (puVar25 == (ushort *)0x0) {
  }
  uVar2 = *puVar25;
  uVar14 = (((ulonglong)uVar2 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)(uVar2 >> 8)
           ) * 0x100000001b3 & DAT_180cc9cb8;
  lVar21 = *(longlong *)(DAT_180cc9ca0 + 8 + uVar14 * 0x10);
  if (lVar21 == DAT_180cc9c90) {
LAB_18052c011:
    lVar21 = 0;
  }
  else {
    uVar3 = *(ushort *)(lVar21 + 0x10);
    while (uVar2 != uVar3) {
      if (lVar21 == *(longlong *)(DAT_180cc9ca0 + uVar14 * 0x10)) goto LAB_18052c011;
      lVar21 = *(longlong *)(lVar21 + 8);
      uVar3 = *(ushort *)(lVar21 + 0x10);
    }
  }
  lVar15 = DAT_180cc9c90;
  if (lVar21 != 0) {
    lVar15 = lVar21;
  }
  if (lVar15 == DAT_180cc9c90) {
  }
  lVar21 = *(longlong *)(lVar15 + 0x18) * 0xb8 + DAT_180cc9bf8;
  if (lVar21 == 0) {
  }
  local_430 = puVar25;
  local_420 = lVar21;
  local_308 = (longlong)param_1;
  local_2f8 = lVar10;
  cVar7 = FUN_180525f60(iVar24,(int)sVar1);
  if (cVar7 == '\0') {
  }
  local_410 = (char *)(lVar21 + 0xb0);
  local_438 = *local_410;
  uVar18 = 2 - (iVar24 != 0);
  local_418 = uVar18;
  FUN_18019f170(local_178,lVar10);
  FUN_1800cb400(local_178);
  if (*local_410 == '\x01') {
    local_16c = 0;
    local_168 = 0;
  }
  local_300 = puVar25 + 2;
  if (*(int *)local_300 == 0) {
LAB_18052c10a:
    local_434 = 0;
    iVar24 = 2;
    auVar29 = ZEXT1664(_DAT_18086d370);
    uVar13 = 0x3f80000000000000;
    uVar32 = 0;
    auVar31 = ZEXT464(0x3c23d70a);
    auVar28 = ZEXT864(0);
    auVar30 = ZEXT464(0x3f800000);
    puVar26 = puVar25;
    do {
      if ((uVar18 >> (iVar24 - 2U & 0x1f) & 1) != 0) {
        if (local_438 == '\0') {
LAB_18052c193:
          bVar5 = true;
        }
        else {
          if (*local_410 == '\x03') goto LAB_18052c193;
          uVar18 = *(uint *)(lVar21 + 0xac);
          if (((byte)uVar18 & 0xc) == 0xc) goto LAB_18052c193;
          if ((uVar18 & 4) == 0) {
            if ((uVar18 & 8) == 0) goto LAB_18052c193;
            iVar8 = 3;
          }
          else {
            iVar8 = 2;
          }
          local_430 = puVar26;
          local_420 = lVar21;
          if (iVar8 == iVar24) goto LAB_18052c193;
          bVar5 = false;
        }
        if (local_424 == 0xf) {
          puVar20 = puVar25 + 4;
          uVar11 = FUN_18015b360(local_198,puVar20);
          FUN_1800ce320(&DAT_180cc8140,iVar24,uVar11);
          if (*(longlong *)(puVar25 + 0xc) == 0) {
            if (iVar24 == 3) {
              DAT_180cc8150 = *puVar25;
            }
            else {
              DAT_180cc8152 = *puVar25;
            }
            local_3f8 = 0;
            local_3f4 = auVar31._0_4_;
            local_3f0 = 0;
            local_3ec = 0;
            local_3e8 = 0;
            local_3e0._1_15_ = SUB1615((undefined1  [16])0x0,1);
            auVar6 = (undefined1  [15])local_3e0._1_15_;
            local_3c0 = local_3c0 & 0xffffff00;
            uStack_3bc = 0xffffffff;
            uStack_3b8 = 0xffffffff;
            uStack_3b4 = 0xffffffff;
            uVar18 = auVar28._0_4_;
            local_3b0 = (ulonglong)uVar18 << 0x20;
            auStack_338 = auVar29._0_16_;
            uStack_398 = 0xffffffff;
            local_390 = CONCAT44(auVar30._0_4_,uVar18);
            uStack_388 = CONCAT44(uVar18,uVar18);
            uStack_380 = CONCAT44(0xffffffff,uVar18);
            lStack_378 = (ulonglong)uVar18 << 0x20;
            local_370 = CONCAT44(uVar18,auVar30._0_4_);
            uStack_368 = CONCAT44(uVar18,uVar18);
            uStack_360 = 0xffffffff;
            uStack_348 = CONCAT44(0xffffffff,uVar18);
            lStack_340 = (ulonglong)uVar18 << 0x20;
            local_328 = 0xffffffff;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = local_324._8_8_;
            local_324 = auVar4 << 0x40;
            local_30c = 0;
            local_2f0 = 0;
            local_2e8 = 0;
            local_2e4 = 0;
            local_2e0 = 0;
            local_3e0._8_8_ = SUB168((undefined1  [16])0x0,8);
            local_2d8 = 0;
            uStack_2d0 = local_3e0._8_8_;
            uStack_2c8 = 0;
            uStack_2c0 = 0xf;
            uStack_3d0 = 0;
            uStack_3c8 = 0xf;
            auVar27[0xf] = 0;
            auVar27._0_15_ = auVar6;
            local_3e0 = auVar27 << 8;
            local_2b8 = CONCAT44(0xffffffff,local_3c0);
            uStack_2b0 = 0xffffffffffffffff;
            auStack_3a8._0_8_ = auVar29._0_8_;
            auStack_3a8._8_8_ = auVar29._8_8_;
            local_2a8 = local_3b0;
            uStack_2a0 = auStack_3a8._0_8_;
            uStack_298 = auStack_3a8._8_8_;
            uStack_290 = 0xffffffff;
            local_288 = local_390;
            uStack_280 = uStack_388;
            uStack_278 = uStack_380;
            lStack_270 = lStack_378;
            local_268 = local_370;
            uStack_260 = uStack_368;
            uStack_258 = 0xffffffff;
            uStack_240 = uStack_348;
            lStack_238 = lStack_340;
            uStack_230 = auStack_3a8._0_8_;
            local_228 = vmovhpd_avx(auStack_338);
            local_220 = 0xffffffff;
            auVar27 = auVar28._0_16_;
            auVar4 = vinsertps_avx(local_324,auVar27,0x20);
            local_324 = vinsertps_avx(auVar4,auVar27,0x30);
            local_314 = CONCAT44((int)(local_314 >> 0x20),uVar18) & 0xffffff00ffffffff;
            auVar28 = ZEXT1664(auVar27);
            auVar29 = ZEXT1664(auStack_338);
            auVar30 = ZEXT1664(auVar30._0_16_);
            auVar31 = ZEXT1664(auVar31._0_16_);
            auStack_3a8 = auStack_338;
            uStack_358 = uVar13;
            uStack_350 = uVar32;
            local_2ec = local_3f4;
            uStack_250 = uVar13;
            local_248 = uVar32;
            local_21c = local_324;
            local_20c = local_314;
            FUN_18021a420(0,*puVar25,&local_2f0,iVar24);
            FUN_18015c010(local_3e0);
          }
          puVar26 = local_430;
          if (!bVar5) goto LAB_18052c5ca;
        }
        else {
          if (local_424 == 0x12) {
            puVar19 = DAT_180cc9c10;
LAB_18052c3cd:
            lVar21 = local_420;
            puVar22 = DAT_180cc9c18;
            if (local_424 != 0x12) {
              puVar22 = DAT_180cc9c30;
            }
            for (; local_420 = lVar21, puVar19 != puVar22; puVar19 = puVar19 + 1) {
                    /* WARNING: Read-only address (ram,0x00018086d370) is written */
              if ((int)*(short *)*puVar19 != *(int *)puVar25) {
                FUN_1801d6820(&DAT_180cc8068,(int)*(short *)*puVar19,iVar24);
              }
              lVar21 = local_420;
            }
          }
          else if (local_424 == 0x13) {
            puVar19 = DAT_180cc9c28;
            goto LAB_18052c3cd;
          }
          FUN_1801d6680(&DAT_180cc8068,*puVar25,local_178,iVar24);
          if (!bVar5) {
            puVar26 = local_430;
            goto LAB_18052c5ca;
          }
          uVar11 = FUN_18019f170(&local_2f0,local_178);
          FUN_18021a420(extraout_XMM0_Qa,*puVar25,uVar11,iVar24);
          puVar20 = local_430 + 4;
        }
        puVar26 = local_430;
        local_434 = local_434 | 1 << (iVar24 - 2U & 0x1f);
        if (local_438 == '\0') {
          local_408 = &local_200;
          local_200 = *(int *)puVar25;
          local_1fc = *(int *)local_300;
          FUN_18015b360(local_1f8,puVar20);
          FUN_18015b360(local_1d8,puVar25 + 0x14);
          FUN_18015b360(local_1b8,puVar25 + 0x24);
          iVar8 = FUN_180525c00(&local_200);
          iVar23 = 0;
          if (-1 < iVar8) {
            while( true ) {
              if (DAT_180b909b0 == 0) {
                iVar9 = 0x47;
              }
              else {
                iVar9 = (int)(*(longlong *)(DAT_180b909b0 + 0x30) -
                              *(longlong *)(DAT_180b909b0 + 0x28) >> 4);
              }
              if (iVar9 <= iVar23) goto LAB_18052c5ca;
              uVar14 = (ulonglong)iVar23;
              if (DAT_180b909b0 == 0) {
                ppuVar12 = &PTR_s_Glock_18_180797be0 + uVar14 * 2;
              }
              else {
                if ((ulonglong)
                    (*(longlong *)(DAT_180b909b0 + 0x30) - *(longlong *)(DAT_180b909b0 + 0x28) >> 4)
                    <= uVar14) {
                    /* WARNING: Subroutine does not return */
                  FUN_18047c010();
                }
                ppuVar12 = (undefined **)(*(longlong *)(DAT_180b909b0 + 0x28) + uVar14 * 0x10);
              }
              if ((*(short *)((longlong)ppuVar12 + 10) <= iVar8) &&
                 (iVar8 < (int)*(short *)((longlong)ppuVar12 + 0xc) +
                          (int)*(short *)((longlong)ppuVar12 + 10))) break;
              iVar23 = iVar23 + 1;
            }
            if (-1 < iVar23) {
              if (DAT_180b909b0 == 0) {
                iVar9 = 0x47;
              }
              else {
                iVar9 = (int)(*(longlong *)(DAT_180b909b0 + 0x30) -
                              *(longlong *)(DAT_180b909b0 + 0x28) >> 4);
              }
              if (iVar23 < iVar9) {
                local_428 = (undefined2)iVar23;
                local_426 = (undefined2)iVar8;
                FUN_180474590(iVar24 != 3,&local_428);
              }
            }
          }
        }
        else {
          lVar10 = 0;
          if (iVar24 != 3) {
            lVar10 = 0x15;
          }
          FUN_180528620(&DAT_1808e5538 + (lVar10 + local_308) * 0x1a,puVar25);
        }
      }
LAB_18052c5ca:
      lVar10 = local_2f8;
      iVar24 = iVar24 + 1;
      if (3 < iVar24) goto LAB_18052c5e1;
      uVar18 = local_418;
    } while( true );
  }
  if (DAT_180cc9c70 != DAT_180cc9c78) {
    psVar16 = DAT_180cc9c70;
    do {
      if (((int)*psVar16 == *(int *)puVar25) &&
         (local_420 = lVar21, *(int *)(psVar16 + 2) == *(int *)local_300)) goto LAB_18052c10a;
      psVar16 = psVar16 + 4;
      local_420 = lVar21;
    } while (psVar16 != DAT_180cc9c78);
  }
  FUN_180113930(lVar10 + 0x200,"Finish unavailable",0x12);
LAB_18052c65a:
  FUN_18015c010(local_160);
                    /* WARNING: Read-only address (ram,0x00018086d370) is written */
LAB_18052c5e1:
  if (local_424 == 0xf) {
    DAT_180c63130 = local_414;
  }
  uVar13 = FUN_18017edf0(local_2f8 + 0xf0,local_178);
  FUN_18017edf0(lVar10,uVar13);
  pcVar17 = "Custom agent selected";
  if (*(longlong *)(puVar25 + 0xc) == 0) {
    pcVar17 = "Refreshing...";
  }
  lVar21 = -1;
  do {
    lVar21 = lVar21 + 1;
  } while (pcVar17[lVar21] != '\0');
  FUN_180113930(lVar10 + 0x200);
  uVar18 = 0;
  if (*(longlong *)(puVar25 + 0xc) == 0) {
    uVar18 = local_434;
  }
  *(uint *)(lVar10 + 0x220) = uVar18;
  goto LAB_18052c65a;
}



