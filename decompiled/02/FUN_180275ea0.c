// FUN_180275ea0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180275ea0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180275ea0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,int param_4,
                  float *param_5)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  float *pfVar9;
  code *pcVar10;
  code *pcVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [64];
  undefined1 auVar17 [64];
  undefined1 auVar18 [64];
  undefined1 auVar19 [64];
  float fVar20;
  float fVar21;
  undefined1 auVar22 [64];
  float fVar23;
  undefined1 auVar24 [64];
  undefined1 auVar25 [64];
  undefined1 auStack_2a8 [32];
  undefined4 local_288;
  undefined4 local_280;
  undefined4 local_278;
  undefined8 *local_270;
  undefined8 *local_268;
  undefined *local_258;
  undefined *local_250;
  undefined8 local_248;
  float local_240;
  float local_238;
  int local_234;
  undefined8 local_228;
  longlong local_220;
  undefined8 local_218;
  undefined8 local_208;
  undefined8 local_200;
  float local_1f8;
  float local_1f4;
  float local_1f0;
  float local_1e8;
  float local_1e4;
  float local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  float local_d8 [2];
  ulonglong local_d0;
  
  local_d0 = DAT_1808d5f00 ^ (ulonglong)auStack_2a8;
  local_234 = param_4;
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  puVar4 = DAT_1808da460;
  local_258 = DAT_1808f0620;
  iVar12 = 0;
  uVar8 = 1000;
  if ((DAT_1808f0620 != DAT_1808da460) || (pcVar10 = (code *)DAT_180c64d18, DAT_180c64d18 == 0)) {
    local_248 = GetTickCount64();
    if ((local_258 == puVar4) && (local_248 < DAT_180c64d20)) {
      pcVar10 = (code *)0x0;
    }
    else {
      local_258 = &DAT_1808f0630;
      iVar7 = FUN_1805f68d0(&DAT_1808f0630);
      if (iVar7 != 0) goto LAB_1802768b5;
      if (DAT_1808f067c == 0x7fffffff) {
        DAT_1808f067c = 0x7ffffffe;
        goto LAB_1802768aa;
      }
      if (DAT_1808f0620 == puVar4) {
        if ((DAT_180c64d18 == 0) && (DAT_180c64d20 <= local_248)) goto LAB_180276010;
      }
      else {
        DAT_1808f0610 = 1000;
LAB_180276010:
        lVar6 = -1;
        do {
          local_220 = lVar6 + 1;
          lVar3 = lVar6 + 1;
          lVar6 = local_220;
        } while ("client.dll:48895C2408574881ECF0000000F30F100A488D8C2410010000418BD8488BFAE8????????F30F104F04"
                 [lVar3] != '\0');
        local_228 = 
        "client.dll:48895C2408574881ECF0000000F30F100A488D8C2410010000418BD8488BFAE8????????F30F104F04"
        ;
        local_208 = "patterns::get_tick_view_angles";
        local_200 = 0x1e;
        DAT_180c64d18 = FUN_1800e5d20(&local_208,&local_228);
        DAT_1808f0620 = puVar4;
        if (DAT_180c64d18 == 0) {
          DAT_180c64d20 = local_248 + DAT_1808f0610;
          if (DAT_1808f0610 < 60000) {
            DAT_1808f0610 = DAT_1808f0610 * 2;
          }
          else {
            DAT_1808f0610 = 60000;
          }
        }
        else {
          DAT_180c64d20 = 0xffffffffffffffff;
          DAT_1808f0610 = 1000;
        }
      }
      pcVar10 = (code *)DAT_180c64d18;
      FUN_1805f68fc(&DAT_1808f0630);
    }
  }
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  puVar4 = DAT_1808da460;
  local_250 = DAT_1808f0618;
  if ((DAT_1808f0618 == DAT_1808da460) && (DAT_180c64d08 != 0)) {
    pcVar11 = (code *)DAT_180c64d08;
    goto LAB_18027618b;
  }
  local_258 = (undefined *)GetTickCount64();
  if ((local_250 == puVar4) && (local_258 < DAT_180c64d10)) {
    pcVar11 = (code *)0x0;
    goto LAB_18027618b;
  }
  local_250 = &DAT_1808f05c0;
  iVar7 = FUN_1805f68d0(&DAT_1808f05c0);
  if (iVar7 != 0) {
LAB_1802768b5:
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_1808f060c == 0x7fffffff) {
    DAT_1808f060c = 0x7ffffffe;
LAB_1802768aa:
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  if (DAT_1808f0618 == puVar4) {
    if ((DAT_180c64d08 == 0) && (DAT_180c64d10 <= local_258)) goto LAB_180276249;
  }
  else {
    DAT_1808f05b0 = 1000;
LAB_180276249:
    lVar6 = -1;
    do {
      local_220 = lVar6 + 1;
      lVar3 = lVar6 + 1;
      lVar6 = local_220;
    } while ("client.dll:28F3440F11442420>E8????????488D85B0000000"[lVar3] != '\0');
    local_228 = "client.dll:28F3440F11442420>E8????????488D85B0000000";
    local_208 = "patterns::weapon_calculate_spread";
    local_200 = 0x21;
    DAT_180c64d08 = FUN_1800e5d20(&local_208,&local_228);
    DAT_1808f0618 = puVar4;
    DAT_180c64d10 = (undefined *)0xffffffffffffffff;
    if (DAT_180c64d08 == 0) {
      DAT_180c64d10 = local_258 + DAT_1808f05b0;
      uVar8 = DAT_1808f05b0 * 2;
      if (59999 < DAT_1808f05b0) {
        uVar8 = 60000;
      }
    }
    DAT_1808f05b0 = uVar8;
    local_248 = DAT_180c64d08;
  }
  pcVar11 = (code *)DAT_180c64d08;
  FUN_1805f68fc(&DAT_1808f05c0);
LAB_18027618b:
  if ((((pcVar10 != (code *)0x0) && (pcVar11 != (code *)0x0)) && (DAT_180cc9354 < 2)) &&
     ((0 < local_234 && (DAT_180cc9350 - 1U < 0x20)))) {
    local_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    uStack_1c0 = 0;
    local_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    local_198 = 0;
    uStack_190 = 0;
    uStack_188 = 0;
    uStack_180 = 0;
    local_178 = 0;
    uStack_170 = 0;
    uStack_168 = 0;
    uStack_160 = 0;
    local_158 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    local_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    local_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uVar1 = *param_3;
    fVar14 = *(float *)(param_3 + 1);
    iVar7 = 0;
    auVar25 = ZEXT464(0x80000000);
    auVar18 = ZEXT464(0x42652ee0);
    local_248._4_4_ = (uint)((ulonglong)uVar1 >> 0x20);
    auVar16 = ZEXT464(local_248._4_4_);
    local_248._0_4_ = (float)uVar1;
    auVar17 = ZEXT464((uint)(float)local_248);
    local_248 = uVar1;
    local_240 = fVar14;
    do {
      local_238 = auVar17._0_4_ - *param_5;
      local_1e4 = auVar16._0_4_ - param_5[1];
      local_250 = (undefined *)CONCAT44(local_250._4_4_,local_1e4);
      local_258 = (undefined *)CONCAT44(local_258._4_4_,fVar14 - param_5[2]);
      local_1e0 = param_5[2] + (fVar14 - param_5[2]);
      local_1e4 = param_5[1] + local_1e4;
      local_1e8 = local_238 + *param_5;
      auVar18 = ZEXT1664(auVar18._0_16_);
      auVar25 = ZEXT1664(auVar25._0_16_);
      local_238 = (float)(*pcVar10)(0,&local_1e8,local_234);
      local_268 = &local_158;
      local_270 = &local_1d8;
      local_278 = DAT_180cc9358;
      local_280 = DAT_180cc9378;
      local_288 = DAT_180cc9374;
      (*pcVar11)(DAT_180cc934c,DAT_180cc9350,DAT_180cc9354,(int)local_238 + 1);
      auVar22 = ZEXT464((uint)(float)local_1d8);
      auVar24 = ZEXT464((uint)(float)local_158);
      local_218 = *param_3;
      fVar14 = (float)local_1d8 * (float)local_1d8 + (float)local_158 * (float)local_158;
      if (fVar14 < 0.0) {
        uVar8 = FUN_18061e150();
      }
      else {
        uVar8 = (ulonglong)(uint)SQRT(fVar14);
      }
      fVar13 = (float)FUN_1806370a0(uVar8);
      fVar13 = fVar13 * auVar18._0_4_;
      auVar17 = ZEXT464((uint)(fVar13 + (float)local_218));
      fVar14 = (float)FUN_180636c80(auVar22._0_8_,auVar24._0_8_);
      fVar14 = (float)((uint)(fVar14 * auVar18._0_4_) ^ auVar25._0_4_);
      fVar20 = auVar17._0_4_ - *param_5;
      auVar16 = ZEXT464((uint)local_218._4_4_);
      local_248._0_4_ = fVar14 - param_5[2];
      local_1f0 = param_5[2] + (float)local_248;
      local_1f4 = param_5[1] + (local_218._4_4_ - param_5[1]);
      local_1f8 = *param_5 + fVar20;
      local_250._0_4_ = fVar20;
      local_258._0_4_ = local_218._4_4_ - param_5[1];
      iVar5 = (*pcVar10)(0,&local_1f8,local_234);
      if ((float)iVar5 == local_238) {
        auVar2 = vunpcklps_avx(auVar17._0_16_,auVar16._0_16_);
        *param_2 = auVar2._0_8_;
        *(float *)(param_2 + 1) = fVar14;
LAB_1802767fd:
        *(undefined1 *)((longlong)param_2 + 0xc) = 1;
      }
      local_228 = (char *)*param_3;
      auVar19 = ZEXT464((uint)(SUB84(local_228,0) - fVar13));
      fVar13 = (float)FUN_180636c80(auVar22._0_4_ * -1.0,auVar24._0_4_ * -1.0);
      fVar20 = (float)((uint)(fVar13 * auVar18._0_4_) ^ auVar25._0_4_);
      fVar13 = auVar19._0_4_ - *param_5;
      auVar22 = ZEXT464((uint)local_228._4_4_);
      local_250 = (undefined *)CONCAT44(local_250._4_4_,fVar13);
      local_258 = (undefined *)CONCAT44(local_258._4_4_,local_228._4_4_ - param_5[1]);
      local_248 = CONCAT44(local_248._4_4_,fVar20 - param_5[2]);
      local_208 = (char *)CONCAT44(param_5[1] + (local_228._4_4_ - param_5[1]),*param_5 + fVar13);
      local_200 = CONCAT44(local_200._4_4_,param_5[2] + (fVar20 - param_5[2]));
      iVar5 = (*pcVar10)(0,&local_208,local_234);
      if ((float)iVar5 == local_238) {
        auVar2 = vunpcklps_avx(auVar19._0_16_,auVar22._0_16_);
        *param_2 = auVar2._0_8_;
        *(float *)(param_2 + 1) = fVar20;
        goto LAB_1802767fd;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 8);
    fVar14 = 0.5;
    fVar13 = 0.0;
    do {
      fVar20 = (float)iVar12 * fVar14 - *param_5;
      fVar21 = *(float *)((longlong)param_3 + 4) - param_5[1];
      local_250 = (undefined *)CONCAT44(local_250._4_4_,fVar20);
      local_258 = (undefined *)CONCAT44(local_258._4_4_,fVar21);
      local_248 = CONCAT44(local_248._4_4_,fVar13 - param_5[2]);
      local_208 = (char *)CONCAT44(param_5[1] + fVar21,*param_5 + fVar20);
      local_200 = CONCAT44(local_200._4_4_,param_5[2] + (fVar13 - param_5[2]));
      local_238 = (float)(*pcVar10)(0,&local_208,local_234);
      local_268 = &local_158;
      local_270 = &local_1d8;
      local_278 = DAT_180cc9358;
      local_280 = DAT_180cc9378;
      local_288 = DAT_180cc9374;
      (*pcVar11)(DAT_180cc934c,DAT_180cc9350,DAT_180cc9354,(int)local_238 + 1);
      local_d8[0] = 1.0;
      local_d8[1] = -1.0;
      pfVar9 = local_d8;
      fVar20 = (float)local_158 * (float)local_158 + (float)local_1d8 * (float)local_1d8;
      fVar21 = (float)local_1d8;
      fVar23 = (float)local_158;
      if (fVar20 < 0.0) {
        uVar8 = FUN_18061e150();
      }
      else {
        uVar8 = (ulonglong)(uint)SQRT(fVar20);
      }
      fVar20 = (float)FUN_1806370a0(uVar8);
      fVar20 = fVar20 * auVar18._0_4_;
      do {
        fVar15 = *pfVar9;
        local_228 = (char *)*param_3;
        auVar16 = ZEXT464((uint)(SUB84(local_228,0) + fVar20 * fVar15));
        fVar15 = (float)FUN_180636c80(fVar15 * fVar21,fVar15 * fVar23);
        fVar15 = (float)((uint)(fVar15 * auVar18._0_4_) ^ auVar25._0_4_);
        local_1f8 = auVar16._0_4_ - *param_5;
        auVar17 = ZEXT464((uint)local_228._4_4_);
        local_250 = (undefined *)CONCAT44(local_250._4_4_,local_1f8);
        local_258 = (undefined *)CONCAT44(local_258._4_4_,local_228._4_4_ - param_5[1]);
        local_248 = CONCAT44(local_248._4_4_,fVar15 - param_5[2]);
        local_1f0 = param_5[2] + (fVar15 - param_5[2]);
        local_1f4 = param_5[1] + (local_228._4_4_ - param_5[1]);
        local_1f8 = *param_5 + local_1f8;
        iVar7 = (*pcVar10)(0,&local_1f8,local_234);
        if ((float)iVar7 == local_238) {
          auVar2 = vunpcklps_avx(auVar16._0_16_,auVar17._0_16_);
          *param_2 = auVar2._0_8_;
          *(float *)(param_2 + 1) = fVar15;
          goto LAB_1802767fd;
        }
        pfVar9 = pfVar9 + 1;
      } while (pfVar9 != (float *)&local_d0);
      iVar12 = iVar12 + 1;
    } while (iVar12 < 0x2d0);
  }
  *(undefined1 *)((longlong)param_2 + 0xc) = 0;
}



