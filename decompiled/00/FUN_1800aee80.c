// FUN_1800aee80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800aee80 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800aee80(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 *puVar7;
  char *pcVar8;
  uint uVar9;
  longlong lVar10;
  undefined7 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 auStack_a518 [32];
  longlong local_a4f8;
  longlong lStack_a4f0;
  longlong local_a4e8;
  undefined4 local_a4e0;
  undefined8 local_a4d8;
  undefined1 local_a4d0 [4];
  undefined8 local_a4cc;
  undefined4 local_a4c4;
  undefined4 local_a4c0;
  undefined4 local_a4bc;
  undefined8 local_a4b8;
  undefined8 uStack_a4b0;
  undefined8 uStack_a4a8;
  undefined8 uStack_a4a0;
  undefined1 local_a498;
  undefined8 local_a494;
  undefined4 local_a48c;
  undefined1 local_a488 [16];
  undefined1 local_a478;
  undefined4 local_a474;
  undefined8 local_a470;
  undefined4 local_a468;
  undefined4 local_a464;
  undefined4 local_a460;
  undefined1 local_a45c;
  undefined8 local_a458;
  undefined4 local_a450;
  undefined4 local_a44c;
  undefined4 local_a448;
  undefined4 local_a444;
  undefined4 local_a440;
  undefined1 local_a43c;
  undefined4 local_a438;
  undefined4 local_a434;
  undefined4 local_a430;
  undefined4 local_a42c;
  undefined4 local_a428;
  undefined2 local_a424;
  undefined8 local_a420;
  undefined4 local_a418;
  undefined4 local_a414;
  undefined1 local_a410;
  undefined4 local_a40c;
  undefined8 local_a408;
  undefined8 uStack_a400;
  undefined8 uStack_a3f8;
  undefined8 uStack_a3f0;
  undefined8 local_a3e8;
  undefined8 uStack_a3e0;
  undefined4 local_a3d8;
  undefined1 local_a3d4;
  undefined8 local_a3d0;
  undefined8 local_a3c8;
  undefined8 uStack_a3c0;
  undefined4 local_a3b8;
  undefined4 local_a3b4;
  undefined4 local_a3b0;
  undefined4 local_a3ac;
  undefined1 local_a3a8;
  undefined4 local_a3a4;
  undefined4 local_a3a0;
  undefined4 local_a39c;
  undefined8 local_a398;
  undefined8 uStack_a390;
  undefined4 local_a388;
  undefined4 local_a384;
  undefined4 local_a380;
  undefined8 local_a37c;
  undefined4 local_a374;
  undefined8 local_a370;
  undefined4 local_a368;
  undefined2 local_a364;
  undefined8 local_a360;
  undefined4 local_a358;
  undefined8 local_a354;
  undefined2 local_a34c;
  undefined4 local_a348;
  undefined1 local_a344;
  undefined4 local_a340;
  undefined2 local_a33c;
  undefined1 local_a33a;
  undefined4 local_a338;
  undefined2 local_a334;
  undefined1 local_a332;
  undefined4 local_a330;
  undefined2 local_a32c;
  undefined8 local_a328;
  undefined4 local_a320;
  undefined1 local_a31c;
  undefined4 local_a318;
  undefined1 local_a314;
  undefined4 local_a313;
  undefined4 local_a30c;
  undefined8 local_a308;
  undefined4 local_a300;
  undefined4 local_a2fc;
  undefined1 local_a2f8;
  undefined8 local_a2f4;
  undefined4 local_a2ec;
  undefined2 local_a2e8;
  undefined4 local_a2e4;
  undefined4 local_a2e0;
  undefined1 local_a2dc;
  undefined1 local_a2d8 [3024];
  undefined1 local_9708 [17136];
  undefined1 local_5418 [16];
  undefined8 local_5408;
  undefined4 local_5400;
  undefined2 local_53fc;
  undefined1 local_53fa [170];
  undefined1 local_5350 [16];
  undefined4 local_5340;
  undefined1 local_533c [16];
  undefined4 local_532c;
  undefined1 local_5328 [16];
  undefined4 local_5318;
  char local_5314 [4];
  undefined8 local_5310;
  undefined4 local_5308;
  undefined4 local_5304;
  undefined4 local_5300;
  undefined4 local_52fc;
  undefined8 local_52f8;
  undefined8 uStack_52f0;
  undefined4 local_52e8;
  undefined4 local_52e4;
  undefined4 local_52e0;
  char local_52dc;
  undefined8 local_52d8;
  undefined1 local_52d0 [16];
  undefined4 local_52c0;
  undefined1 local_52bc;
  undefined4 local_52b8;
  undefined8 local_52b4;
  undefined4 local_52ac;
  undefined4 local_52a8;
  undefined4 local_52a4;
  undefined1 local_52a0;
  undefined8 local_529c;
  undefined4 local_5294;
  undefined4 local_5290;
  undefined4 local_528c;
  undefined4 local_5288;
  undefined4 local_5284;
  undefined1 local_5280;
  undefined4 local_527c;
  undefined4 local_5278;
  undefined4 local_5274;
  undefined4 local_5270;
  undefined4 local_526c;
  undefined2 local_5268;
  undefined8 local_5264;
  undefined4 local_525c;
  undefined4 local_5258;
  undefined1 local_5254;
  undefined4 local_5250;
  undefined4 local_524c;
  undefined8 local_5248;
  undefined8 uStack_5240;
  undefined8 uStack_5238;
  undefined8 uStack_5230;
  undefined8 local_5228;
  undefined8 uStack_5220;
  undefined1 local_5218;
  undefined8 local_5214;
  undefined4 local_520c;
  undefined8 local_5208;
  undefined8 uStack_5200;
  undefined4 local_51f8;
  undefined4 local_51f4;
  undefined4 local_51f0;
  undefined1 local_51ec;
  undefined4 local_51e8;
  undefined4 local_51e4;
  undefined4 local_51e0;
  undefined4 local_51dc;
  undefined4 local_51d8;
  undefined4 local_51d4;
  undefined4 local_51d0;
  undefined4 local_51cc;
  undefined4 local_51c8;
  undefined4 local_51c4;
  undefined8 local_51c0;
  undefined4 local_51b8;
  undefined8 local_51b4;
  undefined4 local_51ac;
  undefined2 local_51a8;
  undefined8 local_51a4;
  undefined4 local_519c;
  undefined8 local_5198;
  undefined2 local_5190;
  undefined4 local_518c;
  undefined1 local_5188;
  undefined4 local_5184;
  undefined2 local_5180;
  undefined1 local_517e;
  undefined4 local_517c;
  undefined2 local_5178;
  undefined1 local_5176;
  undefined4 local_5174;
  undefined2 local_5170;
  undefined8 local_516c;
  undefined4 local_5164;
  undefined1 local_5160;
  undefined4 local_515c;
  undefined1 local_5158;
  undefined4 local_5157;
  undefined4 local_5150;
  undefined8 local_514c;
  undefined4 local_5144;
  undefined4 local_5140;
  undefined1 local_513c;
  undefined8 local_5138;
  undefined4 local_5130;
  undefined2 local_512c;
  undefined4 local_5128;
  undefined4 local_5124;
  undefined1 local_5120;
  char local_511c [3024];
  char local_454c [17136];
  undefined1 local_25c [16];
  undefined8 local_24c;
  undefined4 local_244;
  undefined2 local_240;
  undefined1 local_23e [170];
  undefined1 local_194 [16];
  undefined4 local_184;
  undefined1 local_180 [16];
  undefined4 local_170;
  undefined1 local_16c [16];
  undefined8 local_15c;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined2 local_144;
  undefined1 local_142;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined1 *puStack_130;
  undefined2 local_128;
  undefined8 local_124;
  undefined4 local_11c;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined4 local_d8;
  ulonglong local_c8;
  
  local_c8 = DAT_1808d5f00 ^ (ulonglong)auStack_a518;
  uVar1 = param_2[1];
  if (7 < uVar1) {
    local_a4f8 = *param_2;
    lStack_a4f0 = param_2[1];
    local_a4c0 = 0x40800000;
    local_a494 = 2;
    local_a4bc = 0x420c0000;
    local_a4b8 = 0x4100000040a00000;
    uStack_a4b0 = 0x3f99999a425c0000;
    uStack_a4a8 = 0x4100000042340000;
    uStack_a4a0 = 0x40400000;
    local_a488 = ZEXT816(0);
    local_a450 = 0x42aa0000;
    local_a44c = 0x42b40000;
    local_a448 = 0x40a00000;
    local_a434 = 0x3f800000;
    local_a408 = 0x3f47ae143eb33333;
    uStack_a400 = 0x3f3851ec3f800000;
    uStack_a3f8 = 0x3eeb851f3f3851ec;
    uStack_a3f0 = 0x3f3851ec3f800000;
    local_a3e8 = 0x3f47ae143eb33333;
    uStack_a3e0 = 0x3dcccccd3f800000;
    local_a3d8 = 0x3fb33333;
    local_a3c8 = 0x3f8000003f800000;
    uStack_a3c0 = 0x3f8000003f800000;
    local_a3b8 = 0x40e00000;
    local_a48c = 0;
    local_a444 = 0x3f99999a;
    local_a438 = 0x3f733333;
    local_a42c = 0xbf800000;
    local_a428 = 0xbf800000;
    local_a418 = 0x43340000;
    local_a414 = 0x43340000;
    local_a3b4 = 0x40400000;
    local_a3b0 = 0x3fc00000;
    local_a4e0 = 0;
    local_a4d8 = 0;
    local_a4d0[0] = 0;
    local_a4cc = 0;
    local_a4c4 = 0;
    local_a498 = 0;
    local_a478 = 0;
    local_a474 = 0;
    local_a470 = 0x1000100;
    local_a468 = 0x100;
    local_a464 = 0x101;
    local_a460 = 0x1000001;
    local_a45c = 0;
    local_a458 = 2;
    local_a440 = 2;
    local_a43c = 1;
    local_a430 = 0x1010101;
    local_a424 = 0;
    local_a420 = 2;
    local_a410 = 1;
    local_a40c = 0;
    local_a3d4 = 0;
    local_a3d0 = 2;
    local_a3ac = 0x1010101;
    local_a3a8 = 0;
    local_a3a4 = 1;
    local_a388 = 0x41c80000;
    local_a384 = 0x42480000;
    local_a380 = 0x42960000;
    local_a340 = 0x42820000;
    local_a320 = 0x41a00000;
    local_a398 = 0x3f3333333f800000;
    uStack_a390 = 0x3f666666;
    local_a37c = 0;
    local_a374 = 0;
    local_a370 = 0;
    local_a368 = 0;
    local_a34c = 0;
    local_a344 = 0;
    local_a33c = 0;
    local_a33a = 0;
    local_a334 = 0;
    local_a332 = 0;
    local_a31c = 0;
    local_a313 = 0;
    local_a2f8 = 0;
    local_a2e8 = 0;
    local_a2dc = 0;
    local_a3a0 = 0;
    local_a358 = 0;
    local_a2fc = 0;
    local_a2ec = 0;
    local_a2e4 = 0x43340000;
    local_a2e0 = 0;
    local_a39c = 0;
    local_a364 = 1;
    local_a360 = 2;
    local_a354 = 0;
    local_a348 = 0;
    local_a338 = 2;
    local_a330 = 0;
    local_a32c = 0x100;
    local_a328 = 0;
    local_a318 = 0;
    local_a314 = 1;
    local_a30c = 1;
    local_a308 = 2;
    local_a300 = 0;
    local_a2f4 = 0;
    uVar12 = 0x41a00000;
    uVar13 = 0x42820000;
    uVar14 = 0x3fc00000;
    uVar15 = 0x42960000;
    uVar16 = 0x40400000;
    uVar17 = 0x42480000;
    uVar18 = 0x41c80000;
    uVar19 = 0xbf800000;
    uVar20 = 0x3f733333;
    uVar21 = 0x3f99999a;
    FUN_18063ab10(local_a2d8,0,0xbd0);
    FUN_1800e71b0(local_a2d8,6);
    FUN_18063ab10(local_9708,0,0x42f0);
    FUN_1800e71b0(local_9708,0x22);
    local_5408 = 0;
    local_5400 = 0;
    local_5418 = (undefined1  [16])0x0;
    local_53fc = 0;
    FUN_18063ab10(local_53fa,0,0xaa);
    local_5350 = (undefined1  [16])0x0;
    local_5340 = 0;
    local_533c = (undefined1  [16])0x0;
    local_5328 = (undefined1  [16])0x0;
    local_5304 = 0x40800000;
    local_5300 = 0x420c0000;
    local_52f8 = 0x425c000041000000;
    uStack_52f0 = 0x423400003f99999a;
    local_52e8 = 0x41000000;
    local_5294 = 0x42aa0000;
    local_52d0 = ZEXT816(0);
    local_5290 = 0x42b40000;
    local_52fc = 0x40a00000;
    local_528c = 0x40a00000;
    local_524c = 0x3eb33333;
    local_5248 = 0x3f8000003f47ae14;
    uStack_5240 = 0x3f3851ec3f3851ec;
    uStack_5238 = 0x3f8000003eeb851f;
    uStack_5230 = 0x3eb333333f3851ec;
    local_5208 = 0x3f8000003f800000;
    uStack_5200 = 0x40e000003f800000;
    local_5228 = 0x3f8000003f47ae14;
    uStack_5220 = 0x3fb333333dcccccd;
    local_51d8 = 0x3f333333;
    local_52e0 = 0;
    local_52c0 = 0;
    local_5278 = 0x3f800000;
    local_525c = 0x43340000;
    local_5258 = 0x43340000;
    local_520c = 0x3f800000;
    local_51e4 = 0;
    local_51dc = 0x3f800000;
    local_51d4 = 0x3f666666;
    local_532c = 0;
    local_5318 = 0;
    local_5314[0] = '\0';
    local_5310 = 0;
    local_5308 = 0;
    local_52dc = '\0';
    local_52d8 = 2;
    local_52bc = 0;
    local_52b8 = 0;
    local_52b4 = 0x1000100;
    local_52ac = 0x100;
    local_52a8 = 0x101;
    local_52a4 = 0x1000001;
    local_52a0 = 0;
    local_529c = 2;
    local_5284 = 2;
    local_5280 = 1;
    local_5274 = 0x1010101;
    local_5268 = 0;
    local_5264 = 2;
    local_5254 = 1;
    local_5250 = 0;
    local_5218 = 0;
    local_5214 = 2;
    local_51f0 = 0x1010101;
    local_51ec = 0;
    local_51e8 = 1;
    local_51e0 = 0;
    local_51d0 = 0;
    local_51c0 = 0;
    local_51b8 = 0;
    local_519c = 0;
    local_5140 = 0;
    local_5130 = 0;
    local_5128 = 0x43340000;
    local_5124 = 0;
    local_51b4 = 0;
    local_51ac = 0;
    local_51a8 = 1;
    local_51a4 = 2;
    local_5198 = 0;
    local_5190 = 0;
    local_518c = 0;
    local_5188 = 0;
    local_5180 = 0;
    local_517e = 0;
    local_517c = 2;
    local_5178 = 0;
    local_5176 = 0;
    local_5174 = 0;
    local_5170 = 0x100;
    local_516c = 0;
    local_5160 = 0;
    local_515c = 0;
    local_5158 = 1;
    local_5157 = 0;
    local_5150 = 1;
    local_514c = 2;
    local_5144 = 0;
    local_513c = 0;
    local_5138 = 0;
    local_512c = 0;
    local_5120 = 0;
    local_52e4 = uVar16;
    local_5288 = uVar21;
    local_527c = uVar20;
    local_5270 = uVar19;
    local_526c = uVar19;
    local_51f8 = uVar16;
    local_51f4 = uVar14;
    local_51cc = uVar18;
    local_51c8 = uVar17;
    local_51c4 = uVar15;
    local_5184 = uVar13;
    local_5164 = uVar12;
    FUN_18063ab10(local_511c,0,0xbd0);
    FUN_1800e71b0(local_511c,6);
    FUN_18063ab10(local_454c,0,0x42f0);
    FUN_1800e71b0(local_454c,0x22);
    local_24c = 0;
    local_244 = 0;
    local_25c = (undefined1  [16])0x0;
    local_240 = 0;
    FUN_18063ab10(local_23e,0,0xaa);
    local_154 = 0;
    local_194 = (undefined1  [16])0x0;
    local_16c = (undefined1  [16])0x0;
    local_14c = 0x42080000;
    local_138 = 0x580000004e;
    puStack_130 = &DAT_100000001;
    local_184 = 0;
    local_180 = (undefined1  [16])0x0;
    local_170 = 0;
    local_15c = 0;
    local_150 = 0x10000;
    local_148 = 0;
    local_144 = 0;
    local_142 = 0;
    local_140 = 0x12;
    local_13c = 0x45;
    local_128 = 0x100;
    local_124 = 0;
    local_11c = 0;
    local_d8 = 0;
    local_118 = (undefined1  [16])0x0;
    local_f8 = (undefined1  [16])0x0;
    local_108 = (undefined1  [16])0x0;
    local_e8 = (undefined1  [16])0x0;
    if (((3 < uVar1) && (*(int *)*param_2 == 0x31474348)) && (3 < uVar1 - 4)) {
      uVar9 = ((int *)*param_2)[1];
      lVar10 = 8;
      local_a4e8 = 8;
      local_a4d8 = CONCAT44(local_a4d8._4_4_,uVar9);
      lVar4 = FUN_1800ad970(uVar9);
      if (lVar4 != 0) {
        if (uVar9 != 0xe) {
          if (uVar9 == 0xf) {
            lVar10 = 0x2c;
          }
          else {
            lVar10 = 0;
            if (uVar9 == 0x10) {
              lVar10 = 0x7c;
            }
          }
        }
        lVar5 = 0x2a;
        if (2 < uVar9) {
          lVar5 = 0x52;
        }
        lVar6 = 0x114;
        if (2 < uVar9) {
          lVar6 = 0x218;
        }
        if (uVar1 == lVar6 + lVar5 * lVar4 + lVar10) {
          uVar11 = (undefined7)((ulonglong)lVar10 >> 8);
          cVar3 = FUN_1800ae600(&local_a4f8,local_a4d0);
          if ((cVar3 != '\0') &&
             (cVar3 = FUN_1800ae600(&local_a4f8,local_5314,local_a4d8 & 0xffffffff,
                                    CONCAT71(uVar11,1)), uVar1 = local_a4d8, cVar3 != '\0')) {
            puVar7 = local_a2d8;
            do {
              cVar3 = FUN_1800ae600(&local_a4f8,puVar7,uVar1 & 0xffffffff,0);
              if (cVar3 == '\0') goto LAB_1800afbb2;
              puVar7 = puVar7 + 0x1f8;
            } while (puVar7 != local_9708);
            puVar7 = local_9708;
            do {
              cVar3 = FUN_1800ae600(&local_a4f8,puVar7,uVar1 & 0xffffffff,0);
              if (cVar3 == '\0') goto LAB_1800afbb2;
              puVar7 = puVar7 + 0x1f8;
            } while (puVar7 != local_5418);
            cVar3 = FUN_1800aeaa0(&local_a4f8,local_a4d0);
            uVar1 = local_a4d8;
            if ((cVar3 != '\0') && (3 < (ulonglong)(lStack_a4f0 - local_a4e8))) {
              local_15c = CONCAT44(*(undefined4 *)(local_a4f8 + local_a4e8),(undefined4)local_15c);
              if (3 < (ulonglong)(lStack_a4f0 - (local_a4e8 + 4))) {
                local_154 = *(undefined4 *)(local_a4f8 + local_a4e8 + 4);
                local_a4e8 = local_a4e8 + 8;
                if (2 < (uint)local_a4d8) {
                  pcVar8 = local_511c;
                  do {
                    cVar3 = FUN_1800ae600(&local_a4f8,pcVar8,uVar1 & 0xffffffff,0);
                    if (cVar3 == '\0') goto LAB_1800afbb2;
                    pcVar8 = pcVar8 + 0x1f8;
                  } while (pcVar8 != local_454c);
                  pcVar8 = local_454c;
                  do {
                    cVar3 = FUN_1800ae600(&local_a4f8,pcVar8,uVar1 & 0xffffffff,0);
                    if (cVar3 == '\0') goto LAB_1800afbb2;
                    pcVar8 = pcVar8 + 0x1f8;
                  } while (pcVar8 != local_25c);
                  cVar3 = FUN_1800aeaa0(&local_a4f8,local_5314);
                  if (cVar3 == '\0') goto LAB_1800afbb2;
                }
                cVar3 = FUN_1800aec50(&local_a4f8,&local_150,(uint)local_a4d8);
                if ((cVar3 != '\0') && (local_a4e8 == lStack_a4f0)) {
                  local_a4d8 = CONCAT44(local_a4e0,(uint)local_a4d8);
                  if ((uint)local_a4d8 == 9) {
                    if ((local_5314[0] == '\0') && (local_52dc == '\0')) {
                      bVar2 = false;
                    }
                    else {
                      bVar2 = true;
                    }
                    pcVar8 = local_511c;
                    do {
                      if (((bVar2) || (*pcVar8 != '\0')) || (pcVar8[0x38] != '\0')) {
                        bVar2 = true;
                      }
                      pcVar8 = pcVar8 + 0x1f8;
                    } while (pcVar8 != local_454c);
                    pcVar8 = local_454c;
                    do {
                      if (((bVar2) || (*pcVar8 != '\0')) || (pcVar8[0x38] != '\0')) {
                        bVar2 = true;
                      }
                      pcVar8 = pcVar8 + 0x1f8;
                    } while (pcVar8 != local_25c);
                    if (bVar2) {
                      local_5314[0] = '\x01';
                      pcVar8 = local_511c;
                      do {
                        *pcVar8 = '\x01';
                        pcVar8 = pcVar8 + 0x1f8;
                      } while (pcVar8 != local_454c);
                      pcVar8 = local_454c;
                      do {
                        *pcVar8 = '\x01';
                        pcVar8 = pcVar8 + 0x1f8;
                      } while (pcVar8 != local_25c);
                    }
                  }
                  FUN_18063aed0(param_1,&local_a4d8,0xa404);
                  *(undefined1 *)(param_1 + 0xa404) = 1;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_1800afbb2:
  *(undefined1 *)(param_1 + 0xa404) = 0;
}



