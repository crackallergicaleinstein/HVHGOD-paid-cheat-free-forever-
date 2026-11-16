// FUN_18033df00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18033df00 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18033df00(longlong param_1,char param_2,byte param_3,int param_4,char param_5,
                  float *param_6,float *param_7,undefined1 param_8,undefined1 param_9,float param_10
                  ,undefined4 param_11,char *param_12)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  char cVar3;
  short sVar4;
  char **ppcVar5;
  longlong lVar6;
  char **ppcVar7;
  int iVar8;
  char *pcVar9;
  int iVar10;
  float fVar11;
  undefined1 extraout_var [56];
  float fVar12;
  undefined1 auVar13 [64];
  float fVar14;
  undefined1 auStack_4f8 [32];
  double *local_4d8;
  double *local_4d0;
  double *local_4c8;
  double *local_4c0;
  double *local_4b8;
  double *local_4b0;
  double *local_4a8;
  double *local_4a0;
  double *local_498;
  double *local_490;
  int *local_488;
  undefined *local_480;
  double *local_478;
  double *local_470;
  undefined *local_468;
  undefined *local_460;
  undefined *local_458;
  undefined *local_450;
  undefined *local_448;
  double *local_440;
  double *local_438;
  double *local_430;
  char **local_428;
  undefined1 *local_420;
  undefined1 *local_418;
  undefined4 *local_410;
  char **local_408;
  char *local_3f8;
  longlong local_3f0;
  char *local_3e8;
  char *local_3e0;
  char local_3d8 [352];
  char *local_278;
  double local_270;
  double local_268;
  double local_260;
  double local_258;
  double local_250;
  double local_248;
  double local_240;
  double local_238;
  double local_230;
  double local_228;
  double local_220;
  double local_218;
  double local_210;
  double local_208;
  double local_200;
  undefined8 local_1f8 [2];
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
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  int local_88 [2];
  longlong local_80;
  ulonglong local_78;
  
  cVar3 = DAT_1808e3e20;
  local_78 = DAT_1808d5f00 ^ (ulonglong)auStack_4f8;
  if (param_2 == '\0') {
    if ((byte)(DAT_1808e3e20 - 1U) < 5) {
      DAT_1808e3e44 = 1;
    }
    else if ((byte)(DAT_1808e3e20 - 7U) < 2) {
      DAT_1808e3e44 = DAT_1808e3e44 + 1;
    }
    else {
      DAT_1808e3e44 = 0;
    }
    if ((byte)(DAT_1808e3e20 - 1U) < 5) {
      param_5 = '\a';
    }
    else if ((byte)(DAT_1808e3e20 - 7U) < 2) {
      if (DAT_1808e3e44 < 7) {
        param_5 = param_5 + '\a';
      }
      else {
        param_5 = '\t';
      }
    }
    else {
      param_5 = '\0';
    }
  }
  else {
    DAT_1808e3e44 = 0;
    if ((byte)(DAT_1808e3e20 - 1U) < 5) {
      if (param_4 < 1) {
        param_5 = '\x05';
      }
      else if ((param_4 < 3) || (DAT_1808e3e20 == '\x04')) {
        param_5 = '\x04';
      }
      else if ((param_4 < 7) || (DAT_1808e3e20 == '\x03')) {
        param_5 = '\x03';
      }
      else {
        param_5 = (param_3 ^ 1) + 2;
      }
    }
    else {
      param_5 = '\x01';
    }
  }
  local_88[0] = param_4;
  local_80 = param_1;
  if (param_5 != DAT_1808e3e20) {
    pcVar9 = param_12;
    if ((param_12 == (char *)0x0) && (pcVar9 = "no target", param_2 != '\0')) {
      pcVar9 = "target held";
    }
    FUN_18033dbd0(param_1,param_5,pcVar9);
  }
  if ((((byte)(DAT_1808e3e20 - 1U) < 5) && (DAT_1808e3e48 != '\0')) &&
     ((param_5 != cVar3 ||
      (((param_1 < DAT_1808e3ea8 || (7 < param_1 - DAT_1808e3ea8)) || (param_4 < 3)))))) {
    fVar12 = 0.0;
    fVar14 = param_7[1] * param_7[1] + *param_7 * *param_7;
    DAT_1808e3ea8 = param_1;
    if (fVar14 == 0.0) {
      auVar13 = ZEXT864(0);
    }
    else if (fVar14 < 0.0) {
      auVar13._0_8_ = FUN_18061e150(fVar14);
      auVar13._8_56_ = extraout_var;
      auVar13 = ZEXT1664(auVar13._0_16_);
    }
    else {
      auVar13 = ZEXT464((uint)SQRT(fVar14));
    }
    fVar14 = 12.0;
    local_3e8._0_4_ = 0x41400000;
    iVar8 = 1;
    if (1 < param_4) {
      iVar8 = param_4;
    }
    sVar4 = thunk_FUN_180624430(param_11);
    if (((sVar4 < 1) && (sVar4 = thunk_FUN_180624430(auVar13._0_8_), sVar4 < 1)) &&
       (1.0 <= auVar13._0_4_)) {
      fVar12 = -12.0;
      local_3e0 = (char *)CONCAT44(local_3e0._4_4_,0xc1400000);
      iVar10 = 1;
      if (1 < iVar8) {
        iVar10 = iVar8;
      }
      auVar1 = vmaxss_avx(ZEXT416((uint)((float)iVar10 * auVar13._0_4_ * 0.015625)),
                          ZEXT416(0x41000000));
      fVar11 = (float)FUN_180636c80(param_11,auVar1._0_8_);
      fVar11 = fVar11 * 57.29578 * 0.7;
      ppcVar7 = &local_3e0;
      if (fVar12 <= fVar11) {
        ppcVar7 = &local_3f8;
      }
      local_3f8 = (char *)CONCAT44(local_3f8._4_4_,fVar11);
      ppcVar5 = &local_3e8;
      if (fVar11 <= fVar14) {
        ppcVar5 = ppcVar7;
      }
      fVar12 = *(float *)ppcVar5;
    }
    local_3e0 = (char *)(double)DAT_180bda1dc;
    local_3e8._0_4_ = FUN_180303a00();
    local_278 = "user";
    local_270 = (double)DAT_1808e3e88;
    local_268 = (double)param_10;
    local_258 = (double)DAT_1808e3e6c;
    local_248 = (double)DAT_1808e3e64;
    local_238 = (double)DAT_1808e3e5c;
    local_228 = (double)param_7[2];
    local_218 = (double)*param_7;
    local_260 = (double)fVar12;
    local_250 = (double)DAT_1808e3e68;
    local_240 = (double)DAT_1808e3e60;
    local_230 = (double)auVar13._0_4_;
    local_220 = (double)param_7[1];
    if ((byte)(DAT_1808e3e20 - 1U) < 5) {
      local_278 = "edgebug-adv";
    }
    local_210 = (double)param_6[2];
    local_200 = (double)*param_6;
    local_208 = (double)param_6[1];
    local_1f8[0] = FUN_18033c8d0(DAT_1808e3e20);
    local_1e8 = 0xdb35e39b27e1c185;
    uStack_1e0 = 0xa05181ee77d57a06;
    local_1d8 = 0x929654b1461b7377;
    uStack_1d0 = 0xa5cea54bfef7110;
    local_1c8 = 0xa70c9f7f916b7e19;
    uStack_1c0 = 0x2b2d6d82aa402c0a;
    local_1b8 = 0xc064ed9510bc010b;
    uStack_1b0 = 0xfec09918395f26c4;
    local_1a8 = 0x835e2313e2c48f8d;
    uStack_1a0 = 0xf863c3261a551f0e;
    local_198 = 0x56a0bc092c25563f;
    uStack_190 = 0x67ff882c0a9bdf38;
    local_188 = 0xe9fbbd57d9292e61;
    uStack_180 = 0x24c1d5fafa9ec992;
    local_178 = 0xe0a313cd38802513;
    uStack_170 = 0x3a86d390ee208d6c;
    local_168 = 0x95484dcb29dcfd95;
    uStack_160 = 0xc5f2049e64fab916;
    local_158 = 0x99be47e160dada07;
    uStack_150 = 0x1047a904a2394520;
    local_148 = 0x9a6f01af4f2ca929;
    uStack_140 = 0x91e97532caa6fc1a;
    local_138 = 0x4f948c455ded471b;
    uStack_130 = 0xb10776480ca86bd4;
    local_128 = 0x35a5004309b1b61d;
    uStack_120 = 0x5b5a30d674a48d9e;
    local_118 = 0xa73d3b392572a64f;
    uStack_110 = 0x8edd3f5c2400c2c8;
    local_108 = 0xefe67c07e4e44b71;
    uStack_100 = 0xf3b0b42a9dc4e322;
    local_f8 = 0x617eb6fd00a53ba3;
    uStack_f0 = 0x2de935c0128ee4fc;
    local_e8 = 0x478f2afbac69aaa5;
    uStack_e0 = 0xcbdcc34e14e75ba6;
    local_d8 = 0xfcb4b591bb2a4897;
    uStack_d0 = 0xed8a82b4c2a70f30;
    local_c8 = 0xfd656f5fa97c17b9;
    uStack_c0 = 0x4883c462eb7a3faa;
    local_b8 = 0x1db6975e079f42b;
    uStack_b0 = 0x8f8784786e324e64;
    local_a8 = 0xb680a373d1d6ccad;
    uStack_a0 = 0xda10e0628380eae;
    local_98 = 0xad27f9e9312dc35f;
    local_3f8 = (char *)0x6c20190c997e96d8;
    builtin_strncpy(local_3d8,
                    "[edgebug-adv] cmd={} {} origin=({:.1f},{:.1f},{:.1f}) vel=({:.1f},{:.1f},{:.1f}) speed={:.1f} target=({:.1f},{:.1f},{:.1f}) to_contact={} predicted_contact={} yaw={:.2f} approach_yaw={:.2f} approach_ticks={} steer={} guided={} duck={}@{} suggest={:+.2f}deg err={:.2f} score={:.2f} owner={} engine_ok={} engine_steps={} traces_left={} co"
                    ,0x150);
    uStack_90 = 0x6c20190c997e96d8;
    builtin_strncpy(local_3d8 + 0x150,"st={:.2f}ms\n",0xd);
    local_3d8[0x15d] = '\0';
    local_3d8[0x15e] = '\0';
    local_3d8[0x15f] = '\0';
    lVar6 = -1;
    do {
      local_3f0 = lVar6 + 1;
      lVar2 = lVar6 + 1;
      lVar6 = local_3f0;
    } while (local_3d8[lVar2] != '\0');
    local_3f8 = local_3d8;
    local_408 = &local_3e0;
    local_410 = (undefined4 *)&local_3e8;
    local_418 = &param_9;
    local_420 = &param_8;
    local_428 = &local_278;
    local_430 = &local_270;
    local_438 = &local_268;
    local_440 = &local_260;
    local_448 = &DAT_1808e3e78;
    local_450 = &DAT_1808e3e76;
    local_458 = &DAT_1808e3e74;
    local_460 = &DAT_1808e3e75;
    local_468 = &DAT_1808e3e70;
    local_470 = &local_258;
    local_478 = &local_250;
    local_480 = &DAT_1808e3e58;
    local_488 = local_88;
    local_490 = &local_248;
    local_498 = &local_240;
    local_4a0 = &local_238;
    local_4a8 = &local_230;
    local_4b0 = &local_228;
    local_4b8 = &local_220;
    local_4c0 = &local_218;
    local_4c8 = &local_210;
    local_4d0 = &local_208;
    local_4d8 = &local_200;
    FUN_18034d650(param_1,&local_3f8,&local_80,local_1f8);
  }
}



