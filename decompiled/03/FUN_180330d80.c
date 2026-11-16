// FUN_180330d80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180330d80 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180330d80(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
                  undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
                  undefined8 param_45,undefined8 ***param_46,undefined8 param_47,undefined8 param_48
                  )

{
  bool bVar1;
  undefined1 auVar2 [16];
  undefined1 *puVar3;
  undefined1 (*pauVar4) [16];
  longlong *plVar5;
  ulonglong uVar6;
  byte bVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 ****ppppuVar10;
  ulonglong uVar11;
  char *pcVar12;
  undefined1 auStack_478 [32];
  undefined8 local_458;
  undefined8 local_450;
  undefined8 local_448;
  undefined8 local_440;
  undefined8 local_438;
  undefined8 local_430;
  undefined8 local_428;
  undefined8 local_420;
  undefined8 local_418;
  undefined8 local_410;
  undefined8 local_408;
  undefined8 local_400;
  undefined8 local_3f8;
  undefined8 local_3f0;
  undefined8 local_3e8;
  undefined8 local_3e0;
  undefined8 local_3d8;
  undefined8 local_3d0;
  undefined8 local_3c8;
  undefined8 local_3c0;
  undefined8 local_3b8;
  undefined8 local_3b0;
  undefined8 local_3a8;
  undefined8 local_3a0;
  undefined8 local_398;
  undefined8 local_390;
  undefined8 local_388;
  undefined8 local_380;
  undefined8 local_378;
  undefined8 local_370;
  undefined8 local_368;
  undefined8 local_360;
  undefined8 local_358;
  undefined8 local_350;
  undefined8 local_348;
  undefined8 local_340;
  undefined8 local_338;
  undefined8 ***local_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined4 local_318;
  undefined1 local_308 [16];
  undefined1 auStack_2f8 [16];
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  ulonglong local_2c8 [44];
  longlong alStack_168 [30];
  undefined1 local_78 [16];
  longlong local_68;
  ulonglong local_60;
  undefined8 ****local_58;
  ulonglong *puStack_50;
  undefined8 uStack_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_478;
  local_58 = (undefined8 ****)param_46;
  local_308._0_8_ = param_47;
  local_2e8 = param_48;
  local_318 = 0;
  if (DAT_180bbeabc != '\0') {
    if (((param_3 < 0) || (DAT_1808e3ad0 < 0)) || (DAT_1808e3ad0 <= param_3)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (((DAT_1808e3ae0._4_1_ == '\0') || (bVar1)) ||
       ((param_2 != DAT_1808e3ad8 || ((param_3 < 0 || (0x3f < param_3 - DAT_1808e3ad0)))))) {
      local_320 = param_48;
      local_328 = param_47;
      local_330 = param_46;
      local_338 = param_45;
      local_340 = param_44;
      local_348 = param_43;
      local_350 = param_42;
      local_358 = param_41;
      local_360 = param_40;
      local_368 = param_39;
      local_370 = param_38;
      local_378 = param_37;
      local_380 = param_36;
      local_388 = param_35;
      local_390 = param_34;
      local_398 = param_33;
      local_3a0 = param_32;
      local_3a8 = param_31;
      local_3b0 = param_30;
      local_3b8 = param_29;
      local_3c0 = param_28;
      local_3c8 = param_27;
      local_3d0 = param_26;
      local_3d8 = param_25;
      local_3e0 = param_24;
      local_3e8 = param_23;
      local_3f0 = param_22;
      local_3f8 = param_21;
      local_400 = param_20;
      local_408 = param_19;
      local_410 = param_18;
      local_418 = param_17;
      local_420 = param_16;
      local_428 = param_15;
      local_430 = param_14;
      local_438 = param_13;
      local_440 = param_12;
      local_448 = param_11;
      local_450 = param_10;
      local_458 = param_9;
      FUN_180336900(local_2c8,param_6,param_7,param_8);
      local_58 = (undefined8 ****)0x2b;
      puStack_50 = local_2c8;
      local_68 = 0;
      local_60 = 0xf;
      local_78._1_15_ = SUB1615((undefined1  [16])0x0,1);
      auVar2[0xf] = 0;
      auVar2._0_15_ = local_78._1_15_;
      local_78 = auVar2 << 8;
      local_318 = 1;
      uVar6 = 0;
      uVar11 = 0;
      do {
        bVar7 = (byte)(local_2c8[uVar11] >> 0x3c);
        if (bVar7 == 0xc) {
          uVar6 = uVar6 + *(longlong *)
                           ((longlong)alStack_168 + (local_2c8[uVar11] & 0xfffffffffffffff));
        }
        else if (bVar7 == 0xb) {
          uVar6 = uVar6 + 0x20;
        }
        else {
          uVar6 = uVar6 + 8;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < 0x2b);
      lVar9 = param_5[1] + uVar6;
      if (CARRY8(param_5[1],uVar6)) {
        lVar9 = -1;
      }
      FUN_1800f5540(local_78,lVar9);
      local_308._8_8_ = puStack_50;
      local_308._0_8_ = local_58;
      local_2e8 = *param_5;
      uStack_2e0 = param_5[1];
      local_458 = 0;
      FUN_1801da050(&local_58,local_78,&local_2e8,local_308);
      if ((uint)DAT_1808e3ae0 != 0) {
        while (local_68 != 0) {
          puVar3 = local_78;
          if (0xf < local_60) {
            puVar3 = (undefined1 *)local_78._0_8_;
          }
          if (puVar3[local_68 + -1] != '\n') break;
          local_68 = local_68 + -1;
          puVar3 = local_78;
          if (0xf < local_60) {
            puVar3 = (undefined1 *)local_78._0_8_;
          }
          puVar3[local_68] = 0;
        }
        pcVar12 = (char *)((longlong)&uStack_48 + 5);
        uVar8 = (uint)DAT_1808e3ae0;
        do {
          pcVar12 = pcVar12 + -1;
          *pcVar12 = (char)uVar8 + (char)((ulonglong)uVar8 / 10) * -10 + '0';
          uVar8 = (uint)((ulonglong)uVar8 / 10);
        } while (uVar8 != 0);
        FUN_18015bdb0(&local_2e8,pcVar12,(longlong)&uStack_48 + 5);
        local_318 = 7;
        pauVar4 = (undefined1 (*) [16])FUN_180141490(&local_2e8,0,&DAT_180802d54,3);
        local_308 = *pauVar4;
        auStack_2f8 = pauVar4[1];
        *(undefined8 *)(pauVar4[1] + 8) = 0xf;
        (*pauVar4)[0] = 0;
        *(undefined8 *)pauVar4[1] = 0;
        local_318 = 0xf;
        plVar5 = (longlong *)FUN_18015b2a0(local_308," repeats)\n",10);
        local_58 = (undefined8 ****)*plVar5;
        puStack_50 = (ulonglong *)plVar5[1];
        uStack_48 = plVar5[2];
        uStack_40 = plVar5[3];
        *(undefined1 *)plVar5 = 0;
        plVar5[2] = 0;
        plVar5[3] = 0xf;
        local_318 = 0x1f;
        ppppuVar10 = &local_58;
        if (0xf < uStack_40) {
          ppppuVar10 = local_58;
        }
        FUN_18015b2a0(local_78,ppppuVar10,uStack_48);
        FUN_18015c010(&local_58);
        FUN_18015c010(local_308);
        FUN_18015c010(&local_2e8);
      }
      FUN_18030e280(local_78);
      DAT_1808e3ae0._4_1_ = '\x01';
      DAT_1808e3ae0._0_4_ = 0;
      DAT_1808e3ad0 = param_3;
      DAT_1808e3ad8 = param_2;
      FUN_18015c010(local_78);
    }
    else {
      DAT_1808e3ae0._0_4_ = (uint)DAT_1808e3ae0 + 1;
      DAT_180bda178 = DAT_180bda178 + 1;
    }
  }
}



