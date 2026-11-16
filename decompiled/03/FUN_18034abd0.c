// FUN_18034abd0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18034abd0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18034abd0(undefined8 *param_1,int *param_2)

{
  byte *pbVar1;
  ulonglong uVar2;
  bool bVar3;
  longlong lVar4;
  ulonglong *puVar5;
  longlong lVar6;
  char *pcVar7;
  int iVar8;
  undefined1 auVar9 [16];
  char *local_378;
  longlong local_370;
  int local_368 [2];
  char *local_360 [3];
  char local_348 [368];
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  char *local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  longlong local_188 [2];
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
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (param_2[0x31] < 1) {
    puVar5 = (ulonglong *)*param_1;
  }
  else {
    puVar5 = (ulonglong *)(param_2 + (longlong)(param_2[0x31] + -1) * 3 + 0xd);
  }
  uVar2 = *puVar5;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar2;
  iVar8 = 0;
  DAT_1808e3e64 = *(float *)(puVar5 + 1);
  local_360[0]._0_4_ = (float)uVar2;
  auVar9 = vshufps_avx(auVar9,auVar9,0x55);
  if ((*(char *)param_1[1] == '\0') && (DAT_1808e3e48 != '\0')) {
    if (ABS(auVar9._0_4_ - DAT_1808e3e60) + ABS(local_360[0]._0_4_ - DAT_1808e3e5c) <= 12.0) {
      bVar3 = false;
      goto LAB_18034acc8;
    }
  }
  DAT_1808e3ea0 = 0;
  bVar3 = true;
  _DAT_1808e3e90 = (undefined1  [16])0x0;
  if ((*(char *)param_1[1] != '\0') || (DAT_1808e3e48 == '\0')) {
    _DAT_1808e3e40 = _DAT_1808e3e40 + 1;
  }
  DAT_1808e3ea4 = 0;
  DAT_1808e3e50 = *(undefined8 *)param_1[2];
  if ((DAT_1808e3e48 == '\0') || ((float)param_2[3] != 0.0)) {
    DAT_1808e3e88 = (float)param_2[3];
  }
LAB_18034acc8:
  DAT_1808e3e48 = 1;
  _DAT_1808e3e58 = param_2[7];
  DAT_1808e3e68 = param_2[1];
  DAT_1808e3e6c = param_2[0x35];
  _DAT_1808e3e70 = param_2[0x36];
  DAT_1808e3e74 = *(undefined1 *)((longlong)param_2 + 0xdd);
  DAT_1808e3e75 = (undefined1)param_2[0x37];
  DAT_1808e3e76 = *param_2 == 1;
  _DAT_1808e3e78 = param_2[4];
  _DAT_1808e3e7c = param_2[0xc];
  _DAT_1808e3e80 = param_2[9];
  _DAT_1808e3e84 = param_2[10];
  DAT_1808e3e8c = *(undefined1 *)param_1[3];
  if ((0 < param_2[0x36]) || (*(char *)((longlong)param_2 + 0xdd) != '\0')) {
    DAT_1808e3ea4 = 1;
  }
  _DAT_1808e3e5c = uVar2;
  if (bVar3) {
    local_368[0] = 0;
    lVar4 = ((longlong *)param_1[4])[1];
    lVar6 = *(longlong *)param_1[4];
    if (lVar6 != lVar4) {
      do {
        pbVar1 = (byte *)(lVar6 + 0x14);
        lVar6 = lVar6 + 0xe8;
        iVar8 = iVar8 + (uint)*pbVar1;
      } while (lVar6 != lVar4);
      local_368[0] = iVar8;
    }
    local_1b8 = "stand";
    if (*param_2 == 1) {
      local_1b8 = "crouch";
    }
    local_1d8 = (double)DAT_1808e3e88;
    local_1d0 = (double)(float)param_2[0xc];
    pcVar7 = "changed";
    local_1c8 = (double)(float)param_2[10];
    local_1c0 = (double)(float)param_2[9];
    local_1b0 = (double)(float)param_2[0x35];
    local_188[0] = (((longlong *)param_1[4])[1] - *(longlong *)param_1[4]) / 0xe8;
    local_1a8 = (double)(float)param_2[1];
    if (*(char *)param_1[1] != '\0') {
      pcVar7 = "acquired";
    }
    local_1a0 = (double)DAT_1808e3e64;
    local_198 = (double)auVar9._0_4_;
    local_190 = (double)local_360[0]._0_4_;
    local_178 = 0xdb35e39b27e1c185;
    uStack_170 = 0xa05181ee77d57a06;
    local_168 = 0x929654b1461b7377;
    uStack_160 = 0xa5cea54bfef7110;
    local_158 = 0xa70c9f7f916b7e19;
    uStack_150 = 0x2b2d6d82aa402c0a;
    local_148 = 0xc064ed9510bc010b;
    uStack_140 = 0xfec09918395f26c4;
    local_138 = 0x835e2313e2c48f8d;
    uStack_130 = 0xf863c3261a551f0e;
    local_128 = 0x56a0bc092c25563f;
    uStack_120 = 0x67ff882c0a9bdf38;
    local_118 = 0xe9fbbd57d9292e61;
    uStack_110 = 0x24c1d5fafa9ec992;
    local_108 = 0xe0a313cd38802513;
    uStack_100 = 0x3a86d390ee208d6c;
    local_f8 = 0x95484dcb29dcfd95;
    uStack_f0 = 0xc5f2049e64fab916;
    local_e8 = 0x99be47e160dada07;
    uStack_e0 = 0x1047a904a2394520;
    local_d8 = 0x9a6f01af4f2ca929;
    uStack_d0 = 0x91e97532caa6fc1a;
    local_c8 = 0x4f948c455ded471b;
    uStack_c0 = 0xb10776480ca86bd4;
    local_b8 = 0x35a5004309b1b61d;
    uStack_b0 = 0x5b5a30d674a48d9e;
    local_a8 = 0xa73d3b392572a64f;
    uStack_a0 = 0x8edd3f5c2400c2c8;
    local_98 = 0xefe67c07e4e44b71;
    uStack_90 = 0xf3b0b42a9dc4e322;
    local_88 = 0x617eb6fd00a53ba3;
    uStack_80 = 0x2de935c0128ee4fc;
    local_78 = 0x478f2afbac69aaa5;
    uStack_70 = 0xcbdcc34e14e75ba6;
    local_68 = 0xfcb4b591bb2a4897;
    uStack_60 = 0xed8a82b4c2a70f30;
    local_58 = 0xfd656f5fa97c17b9;
    uStack_50 = 0x4883c462eb7a3faa;
    local_48 = 0x1db6975e079f42b;
    uStack_40 = 0x8f8784786e324e64;
    local_38 = 0xb680a373d1d6ccad;
    uStack_30 = 0xda10e0628380eae;
    local_28 = 0xad27f9e9312dc35f;
    uStack_20 = 0x6c20190c997e96d8;
    local_18 = 0x4082fb37de319b81;
    builtin_strncpy(local_348,
                    "[edgebug-adv] cmd={} TARGET {} attempt={} candidates={} geometric_eb={} contact_tick={} spot=({:.1f},{:.1f},{:.1f}) yaw={:.2f} approach_yaw={:.2f} approach_ticks={} steered={} guided={} stance={} duck_tick={} vin={:.1f} vout={:.1f} end_speed={:.1f} score={:.2f} engine_verified={} (prediction found an edgebug; steering toward it is logged as STEER sta"
                    ,0x160);
    uStack_10 = 0x6cc6aa5ad1b352b2;
    builtin_strncpy(local_348 + 0x160,"tes)\n",6);
    local_348[0x166] = '\0';
    local_348[0x167] = '\0';
    local_348[0x168] = '\0';
    local_348[0x169] = '\0';
    local_348[0x16a] = '\0';
    local_348[0x16b] = '\0';
    local_348[0x16c] = '\0';
    local_348[0x16d] = '\0';
    local_348[0x16e] = '\0';
    local_348[0x16f] = '\0';
    lVar4 = -1;
    do {
      local_370 = lVar4 + 1;
      lVar6 = lVar4 + 1;
      lVar4 = local_370;
    } while (local_348[lVar6] != '\0');
    local_378 = local_348;
    local_360[0] = pcVar7;
    FUN_18034e890(*(undefined8 *)param_1[2],&local_378,param_1[2],local_360,&DAT_1808e3e40,local_188
                  ,local_368,param_2 + 7,&local_190,&local_198,&local_1a0,&local_1a8,&local_1b0,
                  param_2 + 0x36,param_2 + 0x37,(longlong)param_2 + 0xdd,&local_1b8,param_2 + 4,
                  &local_1c0,&local_1c8,&local_1d0,&local_1d8,param_1[3]);
  }
  return;
}



