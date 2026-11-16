// FUN_18050e740 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18050e740 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_18050e740(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  short *psVar6;
  ulonglong uVar7;
  longlong lVar8;
  int *piVar9;
  ulonglong uVar10;
  undefined1 **local_338;
  undefined1 *local_330;
  undefined1 *local_328;
  undefined8 local_320;
  char *local_318;
  undefined8 local_310;
  char *local_308;
  undefined8 local_300;
  char *local_2f8;
  undefined8 local_2f0;
  char *local_2e8;
  undefined8 local_2e0;
  char *local_2d8;
  undefined8 local_2d0;
  char *local_2c8;
  undefined8 local_2c0;
  char *local_2b8;
  undefined8 local_2b0;
  char *local_2a8;
  undefined8 local_2a0;
  char *local_298;
  undefined8 local_290;
  char *local_288;
  undefined8 local_280;
  char *local_278;
  undefined8 local_270;
  char *local_268;
  undefined8 local_260;
  char *local_258;
  undefined8 local_250;
  char *local_248;
  undefined8 local_240;
  char *local_238;
  undefined8 local_230;
  char *local_228;
  undefined8 local_220;
  char *local_218;
  undefined8 local_210;
  char *local_208;
  undefined8 local_200;
  char *local_1f8;
  undefined8 local_1f0;
  char *local_1e8;
  undefined8 local_1e0;
  char *local_1d8;
  undefined8 local_1d0;
  char *local_1c8;
  undefined8 local_1c0;
  char *local_1b8;
  undefined8 local_1b0;
  char *local_1a8;
  undefined8 local_1a0;
  char *local_198;
  undefined8 local_190;
  char *local_188;
  undefined8 local_180;
  char *local_178;
  undefined8 local_170;
  char *local_168;
  undefined8 local_160;
  char *local_158;
  undefined8 local_150;
  char *local_148;
  undefined8 local_140;
  char *local_138;
  undefined8 local_130;
  char *local_128;
  undefined8 local_120;
  char *local_118;
  undefined8 local_110;
  char *local_108;
  undefined8 local_100;
  char *local_f8;
  undefined8 local_f0;
  char *local_e8;
  undefined8 local_e0;
  char *local_d8;
  undefined8 local_d0;
  char *local_c8;
  undefined8 local_c0;
  char *local_b8;
  undefined8 local_b0;
  char *local_a8;
  undefined8 local_a0;
  char *local_98;
  undefined8 local_90;
  char *local_88;
  undefined8 local_80;
  char *local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  undefined1 local_28 [16];
  
  plVar5 = (longlong *)(param_2 + 0x38);
  if (0xf < *(ulonglong *)(param_2 + 0x50)) {
    plVar5 = *(longlong **)(param_2 + 0x38);
  }
  if (((*(longlong *)(param_2 + 0x48) == 10) && (*plVar5 == 0x616d6164206e696d)) &&
     ((short)plVar5[1] == 0x6567)) {
    *param_1 = "Minimum Damage";
    param_1[1] = 0xe;
    return param_1;
  }
  plVar5 = (longlong *)(param_2 + 0x18);
  if (0xf < *(ulonglong *)(param_2 + 0x30)) {
    plVar5 = *(longlong **)(param_2 + 0x18);
  }
  if ((7 < *(ulonglong *)(param_2 + 0x28)) && (*plVar5 == 0x746e656d65766f6d)) {
    if ((DAT_180cd7220 & 1) == 0) {
      DAT_180cd7220 = DAT_180cd7220 | 1;
      _DAT_180cd7060 = 0;
      DAT_180cd7068 = 0;
      uRam0000000180cd7070 = 0;
      uRam0000000180cd7078 = 0;
      _DAT_180cd7080 = 0;
      uRam0000000180cd7088 = 0;
      uRam0000000180cd7090 = 0;
      uRam0000000180cd7098 = 0;
      local_328 = &DAT_1806bc7c4;
      local_320 = 4;
      local_318 = "Bunny Hop";
      local_310 = 9;
      local_308 = "airstrafe";
      local_300 = 9;
      local_2f8 = "Air Strafe";
      local_2f0 = 10;
      local_2e8 = "jumpbug";
      local_2e0 = 7;
      local_2d8 = "Jump Bug";
      local_2d0 = 8;
      local_2c8 = "edgebug";
      local_2c0 = 7;
      local_2b8 = "Edge Bug";
      local_2b0 = 8;
      local_2a8 = "edgejump";
      local_2a0 = 8;
      local_298 = "Edge Jump";
      local_290 = 9;
      local_288 = "edgestop";
      local_280 = 8;
      local_278 = "Edge Stop";
      local_270 = 9;
      local_268 = "fastladder";
      local_260 = 10;
      local_258 = "Fast Ladder";
      local_250 = 0xb;
      local_248 = "slowwalk";
      local_240 = 8;
      local_238 = "Slow Walk";
      local_230 = 9;
      local_228 = "landing prediction";
      local_220 = 0x12;
      local_218 = "Predict Landings";
      local_210 = 0x10;
      local_208 = "visualise edgebug";
      local_200 = 0x11;
      local_1f8 = "Show Edge Bug Route";
      local_1f0 = 0x13;
      local_1e8 = "visualise pixel surf";
      local_1e0 = 0x14;
      local_1d8 = "Show Surface Route";
      local_1d0 = 0x12;
      local_1c8 = "visualise texture bug";
      local_1c0 = 0x15;
      local_1b8 = "Show Contact Route";
      local_1b0 = 0x12;
      local_1a8 = "advanced edgebug";
      local_1a0 = 0x10;
      local_198 = "Stable Route Scoring";
      local_190 = 0x14;
      local_188 = "steer fov";
      local_180 = 9;
      local_178 = "Steering FOV";
      local_170 = 0xc;
      local_168 = "strafe speed";
      local_160 = 0xc;
      local_158 = "Steering Strength";
      local_150 = 0x11;
      local_148 = "subticks";
      local_140 = 8;
      local_138 = "Subtick Steps";
      local_130 = 0xd;
      local_128 = "minimum end speed";
      local_120 = 0x11;
      local_118 = "Minimum Exit Speed";
      local_110 = 0x12;
      local_108 = "maximum delay";
      local_100 = 0xd;
      local_f8 = "Maximum Route Delay";
      local_f0 = 0x13;
      local_e8 = "lock factor";
      local_e0 = 0xb;
      local_d8 = "Route Lock Strength";
      local_d0 = 0x13;
      local_c8 = "pursue direction";
      local_c0 = 0x10;
      local_b8 = "Follow Movement Direction";
      local_b0 = 0x19;
      local_a8 = "pixel surf accelerate";
      local_a0 = 0x15;
      local_98 = "Accelerate on Surface";
      local_90 = 0x15;
      local_88 = "pixel surf lock movement";
      local_80 = 0x18;
      local_78 = "Assist Movement";
      local_70 = 0xf;
      local_68 = "pixel surf timed jump";
      local_60 = 0x15;
      local_58 = "Time Wall Jumps";
      local_50 = 0xf;
      local_48 = "pixel surf auto jump";
      local_40 = 0x14;
      local_38 = "Auto Jump";
      local_30 = 9;
      local_338 = &local_328;
      local_330 = local_28;
      FUN_18055e9e0(&DAT_180cd7060);
      atexit(FUN_180663ce0);
    }
    local_338 = (undefined1 **)(param_2 + 0x38);
    if (0xf < *(ulonglong *)(param_2 + 0x50)) {
      local_338 = *(undefined1 ***)(param_2 + 0x38);
    }
    local_330 = *(undefined1 **)(param_2 + 0x48);
    uVar7 = 0;
    uVar10 = 0xcbf29ce484222325;
    if (local_330 != (undefined1 *)0x0) {
      do {
        uVar10 = (uVar10 ^ *(byte *)((longlong)local_338 + uVar7)) * 0x100000001b3;
        uVar7 = uVar7 + 1;
      } while (uVar7 < local_330);
    }
    lVar3 = FUN_18056f3c0(&DAT_180cd7060,local_28,&local_338,uVar10);
    lVar8 = DAT_180cd7068;
    if (*(longlong *)(lVar3 + 8) != 0) {
      lVar8 = *(longlong *)(lVar3 + 8);
    }
    if (lVar8 != DAT_180cd7068) {
      uVar1 = *(undefined8 *)(lVar8 + 0x28);
      *param_1 = *(undefined8 *)(lVar8 + 0x20);
      param_1[1] = uVar1;
      return param_1;
    }
  }
  piVar9 = (int *)(param_2 + 0x18);
  if (0xf < *(ulonglong *)(param_2 + 0x30)) {
    piVar9 = *(int **)piVar9;
  }
  if (((*(longlong *)(param_2 + 0x28) == 7) && (*piVar9 == 0x61706d69)) &&
     (((short)piVar9[1] == 0x7463 && (*(char *)((longlong)piVar9 + 6) == 's')))) {
    plVar5 = (longlong *)(param_2 + 0x38);
    lVar8 = *(longlong *)(param_2 + 0x48);
    uVar7 = *(ulonglong *)(param_2 + 0x50);
    if (0xf < uVar7) {
      plVar5 = (longlong *)*plVar5;
    }
    if (((lVar8 == 10) && (*plVar5 == 0x6566666520746968)) && ((short)plVar5[1] == 0x7463)) {
      *param_1 = "Hit Flash";
      param_1[1] = 9;
      return param_1;
    }
    plVar5 = (longlong *)(param_2 + 0x38);
    if (0xf < uVar7) {
      plVar5 = (longlong *)*plVar5;
    }
    if (((lVar8 == 0x10) && (*plVar5 == 0x6566666520746968)) && (plVar5[1] == 0x726f6c6f63207463)) {
      *param_1 = "Hit Flash Color";
      param_1[1] = 0xf;
      return param_1;
    }
    puVar4 = (undefined8 *)(param_2 + 0x38);
    if (0xf < uVar7) {
      puVar4 = (undefined8 *)*puVar4;
    }
    if ((lVar8 == 0x13) && (iVar2 = memcmp(puVar4,"hit effect duration",0x13), iVar2 == 0)) {
      *param_1 = "Hit Flash Duration";
      param_1[1] = 0x12;
      return param_1;
    }
    puVar4 = (undefined8 *)(param_2 + 0x38);
    if (0xf < uVar7) {
      puVar4 = (undefined8 *)*puVar4;
    }
    if ((lVar8 == 0x13) && (iVar2 = memcmp(puVar4,"hit effect strength",0x13), iVar2 == 0)) {
      *param_1 = "Hit Flash Strength";
      param_1[1] = 0x12;
      return param_1;
    }
    plVar5 = (longlong *)(param_2 + 0x38);
    lVar8 = *(longlong *)(param_2 + 0x48);
    uVar7 = *(ulonglong *)(param_2 + 0x50);
    if (0xf < uVar7) {
      plVar5 = (longlong *)*plVar5;
    }
    if ((((lVar8 == 0xb) && (*plVar5 == 0x6f73206874616564)) && ((short)plVar5[1] == 0x6e75)) &&
       (*(char *)((longlong)plVar5 + 10) == 'd')) {
      *param_1 = "Kill Sound";
      param_1[1] = 10;
      return param_1;
    }
    plVar5 = (longlong *)(param_2 + 0x38);
    if (0xf < uVar7) {
      plVar5 = (longlong *)*plVar5;
    }
    if (((lVar8 == 0x10) && (*plVar5 == 0x6f73206874616564)) && (plVar5[1] == 0x6570797420646e75)) {
      *param_1 = "Kill Sound Choice";
      param_1[1] = 0x11;
      return param_1;
    }
    plVar5 = (longlong *)(param_2 + 0x38);
    if (0xf < uVar7) {
      plVar5 = (longlong *)*plVar5;
    }
    if (((lVar8 == 0x12) && (*plVar5 == 0x6f73206874616564)) &&
       ((plVar5[1] == 0x756c6f7620646e75 && ((short)plVar5[2] == 0x656d)))) {
      *param_1 = "Kill Sound Volume";
      param_1[1] = 0x11;
      return param_1;
    }
    plVar5 = (longlong *)(param_2 + 0x38);
    if (0xf < uVar7) {
      plVar5 = (longlong *)*plVar5;
    }
    if ((((lVar8 == 0x12) && (*plVar5 == 0x64206d6f74737563)) && (plVar5[1] == 0x756f732068746165))
       && ((short)plVar5[2] == 0x646e)) {
      *param_1 = "Custom Kill Sound File";
      param_1[1] = 0x16;
      return param_1;
    }
    plVar5 = (longlong *)(param_2 + 0x38);
    lVar8 = *(longlong *)(param_2 + 0x48);
    uVar7 = *(ulonglong *)(param_2 + 0x50);
    if (0xf < uVar7) {
      plVar5 = (longlong *)*plVar5;
    }
    if (((lVar8 == 0xc) && (*plVar5 == 0x6665206874616564)) && ((int)plVar5[1] == 0x74636566)) {
      *param_1 = "Kill Effect";
      param_1[1] = 0xb;
      return param_1;
    }
    plVar5 = (longlong *)(param_2 + 0x38);
    if (0xf < uVar7) {
      plVar5 = (longlong *)*plVar5;
    }
    if (((lVar8 == 0x12) && (*plVar5 == 0x6665206874616564)) &&
       ((plVar5[1] == 0x7974732074636566 && ((short)plVar5[2] == 0x656c)))) {
      *param_1 = "Kill Effect Style";
      param_1[1] = 0x11;
      return param_1;
    }
    plVar5 = (longlong *)(param_2 + 0x38);
    if (0xf < uVar7) {
      plVar5 = (longlong *)*plVar5;
    }
    if ((((lVar8 == 0x12) && (*plVar5 == 0x692074656c6c7562)) && (plVar5[1] == 0x797420746361706d))
       && ((short)plVar5[2] == 0x6570)) {
      *param_1 = "Impact Style";
      param_1[1] = 0xc;
      return param_1;
    }
    puVar4 = (undefined8 *)(param_2 + 0x38);
    if (0xf < uVar7) {
      puVar4 = (undefined8 *)*puVar4;
    }
    if ((lVar8 == 0xf) && (iVar2 = memcmp(puVar4,"hit marker type",0xf), iVar2 == 0)) {
      *param_1 = "Marker Style";
      param_1[1] = 0xc;
      return param_1;
    }
    plVar5 = (longlong *)(param_2 + 0x38);
    lVar8 = *(longlong *)(param_2 + 0x48);
    uVar7 = *(ulonglong *)(param_2 + 0x50);
    if (0xf < uVar7) {
      plVar5 = (longlong *)*plVar5;
    }
    if ((lVar8 == 8) && (*plVar5 == 0x73676f6c20746968)) {
      *param_1 = "Damage Dealt";
      param_1[1] = 0xc;
      return param_1;
    }
    plVar5 = (longlong *)(param_2 + 0x38);
    if (0xf < uVar7) {
      plVar5 = (longlong *)*plVar5;
    }
    if ((((lVar8 == 0x14) && (*plVar5 == 0x72206567616d6164)) && (plVar5[1] == 0x2064657669656365))
       && ((int)plVar5[2] == 0x73676f6c)) {
      *param_1 = "Damage Taken";
      param_1[1] = 0xc;
      return param_1;
    }
    plVar5 = (longlong *)(param_2 + 0x38);
    if (0xf < uVar7) {
      plVar5 = (longlong *)*plVar5;
    }
    if (((lVar8 == 9) && (*plVar5 == 0x676f6c207373696d)) && ((char)plVar5[1] == 's')) {
      *param_1 = "Missed Shots";
      param_1[1] = 0xc;
      return param_1;
    }
    plVar5 = (longlong *)(param_2 + 0x38);
    if (0xf < uVar7) {
      plVar5 = (longlong *)*plVar5;
    }
    if (((lVar8 == 0xd) && (*plVar5 == 0x6573616863727570)) &&
       (((int)plVar5[1] == 0x676f6c20 && (*(char *)((longlong)plVar5 + 0xc) == 's')))) {
      *param_1 = "Purchases";
      param_1[1] = 9;
      return param_1;
    }
    plVar5 = (longlong *)(param_2 + 0x38);
    lVar8 = *(longlong *)(param_2 + 0x48);
    uVar7 = *(ulonglong *)(param_2 + 0x50);
    if (0xf < uVar7) {
      plVar5 = (longlong *)*plVar5;
    }
    if (((lVar8 == 0xc) && (*plVar5 == 0x20656c6f736e6f63)) && ((int)plVar5[1] == 0x73676f6c)) {
      *param_1 = "Developer Console";
      param_1[1] = 0x11;
      return param_1;
    }
    plVar5 = (longlong *)(param_2 + 0x38);
    if (0xf < uVar7) {
      plVar5 = (longlong *)*plVar5;
    }
    if (((lVar8 == 9) && (*plVar5 == 0x676f6c2074616863)) && ((char)plVar5[1] == 's')) {
      *param_1 = "Game Chat";
      param_1[1] = 9;
      return param_1;
    }
    plVar5 = (longlong *)(param_2 + 0x38);
    if (0xf < uVar7) {
      plVar5 = (longlong *)*plVar5;
    }
    if (((lVar8 == 0x10) && (*plVar5 == 0x20676f6c20746968)) && (plVar5[1] == 0x6e6f697461727564)) {
      *param_1 = "Default Duration";
      param_1[1] = 0x10;
      return param_1;
    }
    plVar5 = (longlong *)(param_2 + 0x38);
    if (0xf < uVar7) {
      plVar5 = (longlong *)*plVar5;
    }
    if ((((lVar8 == 0x11) && (*plVar5 == 0x676f6c207373696d)) && (plVar5[1] == 0x6f69746172756420))
       && ((char)plVar5[2] == 'n')) {
      *param_1 = "Miss Duration";
      param_1[1] = 0xd;
      return param_1;
    }
  }
  plVar5 = (longlong *)(param_2 + 0x18);
  if (0xf < *(ulonglong *)(param_2 + 0x30)) {
    plVar5 = (longlong *)*plVar5;
  }
  if ((*(longlong *)(param_2 + 0x28) == 4) && (*(int *)plVar5 == 0x73676f6c)) {
    plVar5 = (longlong *)(param_2 + 0x38);
    lVar8 = *(longlong *)(param_2 + 0x48);
    uVar7 = *(ulonglong *)(param_2 + 0x50);
    if (0xf < uVar7) {
      plVar5 = (longlong *)*plVar5;
    }
    if (((lVar8 == 0xe) && (*plVar5 == 0x65657263732d6e6f)) &&
       (((int)plVar5[1] == 0x6f6c206e && (*(short *)((longlong)plVar5 + 0xc) == 0x7367)))) {
      *param_1 = "On Screen";
      param_1[1] = 9;
      return param_1;
    }
    puVar4 = (undefined8 *)(param_2 + 0x38);
    if (0xf < uVar7) {
      puVar4 = (undefined8 *)*puVar4;
    }
    if ((lVar8 == 0xf) && (iVar2 = memcmp(puVar4,"maximum visible",0xf), iVar2 == 0)) {
      *param_1 = "Visible Messages";
      param_1[1] = 0x10;
      return param_1;
    }
    piVar9 = (int *)(param_2 + 0x38);
    if (0xf < uVar7) {
      piVar9 = *(int **)piVar9;
    }
    if (((lVar8 == 5) && (*piVar9 == 0x6564726f)) && ((char)piVar9[1] == 'r')) {
      *param_1 = "Message Order";
      param_1[1] = 0xd;
      return param_1;
    }
    plVar5 = (longlong *)(param_2 + 0x38);
    if (0xf < uVar7) {
      plVar5 = (longlong *)*plVar5;
    }
    if (((lVar8 == 0xb) && (*plVar5 == 0x6c20656c676e6973)) &&
       (((short)plVar5[1] == 0x6e69 && (*(char *)((longlong)plVar5 + 10) == 'e')))) {
      *param_1 = "Text Layout: Single Line";
      param_1[1] = 0x18;
      return param_1;
    }
    puVar4 = (undefined8 *)(param_2 + 0x38);
    lVar8 = *(longlong *)(param_2 + 0x48);
    uVar7 = *(ulonglong *)(param_2 + 0x50);
    if (0xf < uVar7) {
      puVar4 = (undefined8 *)*puVar4;
    }
    if ((lVar8 == 0xf) && (iVar2 = memcmp(puVar4,"hide background",0xf), iVar2 == 0)) {
      *param_1 = "Hide Panel Background";
      param_1[1] = 0x15;
      return param_1;
    }
    plVar5 = (longlong *)(param_2 + 0x38);
    if (0xf < uVar7) {
      plVar5 = (longlong *)*plVar5;
    }
    if (((lVar8 == 10) && (*plVar5 == 0x6c6f632074786574)) && ((short)plVar5[1] == 0x726f)) {
      *param_1 = "Message Text";
      param_1[1] = 0xc;
      return param_1;
    }
    plVar5 = (longlong *)(param_2 + 0x38);
    if (0xf < uVar7) {
      plVar5 = (longlong *)*plVar5;
    }
    if (((lVar8 == 0x11) && (*plVar5 == 0x6e20726579616c70)) &&
       ((plVar5[1] == 0x6f6c6f6320656d61 && ((char)plVar5[2] == 'r')))) {
      *param_1 = "Player Names";
      param_1[1] = 0xc;
      return param_1;
    }
    plVar5 = (longlong *)(param_2 + 0x38);
    if (0xf < uVar7) {
      plVar5 = (longlong *)*plVar5;
    }
    if (((lVar8 == 0xc) && (*plVar5 == 0x6320706820776f6c)) && ((int)plVar5[1] == 0x726f6c6f)) {
      *param_1 = "Low Health Below 30 HP";
      param_1[1] = 0x16;
      return param_1;
    }
    plVar5 = (longlong *)(param_2 + 0x38);
    lVar8 = *(longlong *)(param_2 + 0x48);
    uVar7 = *(ulonglong *)(param_2 + 0x50);
    if (0xf < uVar7) {
      plVar5 = (longlong *)*plVar5;
    }
    if (((lVar8 == 9) && (*plVar5 == 0x6f6c6f6320746968)) && ((char)plVar5[1] == 'r')) {
      *param_1 = "Hit Highlight";
      param_1[1] = 0xd;
      return param_1;
    }
    plVar5 = (longlong *)(param_2 + 0x38);
    if (0xf < uVar7) {
      plVar5 = (longlong *)*plVar5;
    }
    if (((lVar8 == 10) && (*plVar5 == 0x6c6f632074727568)) && ((short)plVar5[1] == 0x726f)) {
      *param_1 = "Damage Taken Highlight";
      param_1[1] = 0x16;
      return param_1;
    }
    plVar5 = (longlong *)(param_2 + 0x38);
    if (0xf < uVar7) {
      plVar5 = (longlong *)*plVar5;
    }
    if (((lVar8 == 10) && (*plVar5 == 0x6c6f63207373696d)) && ((short)plVar5[1] == 0x726f)) {
      *param_1 = "Miss Highlight";
      param_1[1] = 0xe;
      return param_1;
    }
    plVar5 = (longlong *)(param_2 + 0x38);
    if (0xf < uVar7) {
      plVar5 = (longlong *)*plVar5;
    }
    if (((lVar8 == 0xc) && (*plVar5 == 0x6320746e65636361)) && ((int)plVar5[1] == 0x726f6c6f)) {
      *param_1 = "Purchase & Detail Highlight";
      param_1[1] = 0x1b;
      return param_1;
    }
    plVar5 = (longlong *)(param_2 + 0x38);
    lVar8 = *(longlong *)(param_2 + 0x48);
    uVar7 = *(ulonglong *)(param_2 + 0x50);
    if (0xf < uVar7) {
      plVar5 = (longlong *)*plVar5;
    }
    if (((lVar8 == 0x12) && (*plVar5 == 0x622074757074756f)) &&
       ((plVar5[1] == 0x6c6f6320646e6172 && ((short)plVar5[2] == 0x726f)))) {
      *param_1 = "Output Brand Color";
      param_1[1] = 0x12;
      return param_1;
    }
    plVar5 = (longlong *)(param_2 + 0x38);
    if (0xf < uVar7) {
      plVar5 = (longlong *)*plVar5;
    }
    if (((lVar8 == 0x11) && (*plVar5 == 0x742074757074756f)) &&
       ((plVar5[1] == 0x6f6c6f6320747865 && ((char)plVar5[2] == 'r')))) {
      *param_1 = "Output Message Text";
      param_1[1] = 0x13;
      return param_1;
    }
    plVar5 = (longlong *)(param_2 + 0x38);
    if (0xf < uVar7) {
      plVar5 = (longlong *)*plVar5;
    }
    if ((((lVar8 == 0x12) && (*plVar5 == 0x762074757074756f)) && (plVar5[1] == 0x6c6f632065756c61))
       && ((short)plVar5[2] == 0x726f)) {
      *param_1 = "Output Numbers & Values";
      param_1[1] = 0x17;
      return param_1;
    }
  }
  plVar5 = (longlong *)(param_2 + 0x18);
  if (0xf < *(ulonglong *)(param_2 + 0x30)) {
    plVar5 = (longlong *)*plVar5;
  }
  if ((*(longlong *)(param_2 + 0x28) == 4) && (*(int *)plVar5 == 0x6373696d)) {
    plVar5 = (longlong *)(param_2 + 0x38);
    if (0xf < *(ulonglong *)(param_2 + 0x50)) {
      plVar5 = (longlong *)*plVar5;
    }
    if (((*(longlong *)(param_2 + 0x48) == 0x11) && (*plVar5 == 0x20656c6261736964)) &&
       ((plVar5[1] == 0x676f6c20656d6167 && ((char)plVar5[2] == 's')))) {
      *param_1 = "Hide Native Messages";
      param_1[1] = 0x14;
      return param_1;
    }
    plVar5 = (longlong *)(param_2 + 0x38);
    if (0xf < *(ulonglong *)(param_2 + 0x50)) {
      plVar5 = (longlong *)*plVar5;
    }
    if ((((*(longlong *)(param_2 + 0x48) == 0x11) && (*plVar5 == 0x6576726573657270)) &&
        (plVar5[1] == 0x6565666c6c696b20)) && ((char)plVar5[2] == 'd')) {
      *param_1 = "Keep Killfeed";
      param_1[1] = 0xd;
      return param_1;
    }
  }
  plVar5 = (longlong *)(param_2 + 0x18);
  if (0xf < *(ulonglong *)(param_2 + 0x30)) {
    plVar5 = (longlong *)*plVar5;
  }
  if ((*(longlong *)(param_2 + 0x28) == 8) && (*plVar5 == 0x736c61766f6d6572)) {
    plVar5 = (longlong *)(param_2 + 0x38);
    lVar8 = *(longlong *)(param_2 + 0x48);
    uVar7 = *(ulonglong *)(param_2 + 0x50);
    if (0xf < uVar7) {
      plVar5 = (longlong *)*plVar5;
    }
    if (((lVar8 == 0xc) && (*plVar5 == 0x732065766f6d6572)) && ((int)plVar5[1] == 0x65706f63)) {
      *param_1 = "Hide Game Scope";
      param_1[1] = 0xf;
      return param_1;
    }
    plVar5 = (longlong *)(param_2 + 0x38);
    if (0xf < uVar7) {
      plVar5 = (longlong *)*plVar5;
    }
    if ((((lVar8 == 0x11) && (*plVar5 == 0x732065766f6d6572)) && (plVar5[1] == 0x6f6620786f62796b))
       && ((char)plVar5[2] == 'g')) {
      *param_1 = "Remove Sky Fog";
      param_1[1] = 0xe;
      return param_1;
    }
    puVar4 = (undefined8 *)(param_2 + 0x38);
    if (0xf < uVar7) {
      puVar4 = (undefined8 *)*puVar4;
    }
    if ((lVar8 == 0xf) && (iVar2 = memcmp(puVar4,"remove overhead",0xf), iVar2 == 0)) {
      *param_1 = "Hide Own Nameplate";
      param_1[1] = 0x12;
      return param_1;
    }
    plVar5 = (longlong *)(param_2 + 0x38);
    if (0xf < uVar7) {
      plVar5 = (longlong *)*plVar5;
    }
    if (((lVar8 == 0xb) && (*plVar5 == 0x6c2065766f6d6572)) &&
       (((short)plVar5[1] == 0x6765 && (*(char *)((longlong)plVar5 + 10) == 's')))) {
      *param_1 = "Hide First-Person Legs";
      param_1[1] = 0x16;
      return param_1;
    }
    plVar5 = (longlong *)(param_2 + 0x38);
    lVar8 = *(longlong *)(param_2 + 0x48);
    uVar7 = *(ulonglong *)(param_2 + 0x50);
    if (0xf < uVar7) {
      plVar5 = (longlong *)*plVar5;
    }
    if ((((lVar8 == 0xd) && (*plVar5 == 0x722065766f6d6572)) && ((int)plVar5[1] == 0x696f6365)) &&
       (*(char *)((longlong)plVar5 + 0xc) == 'l')) {
      *param_1 = "Hide View Recoil";
      param_1[1] = 0x10;
      return param_1;
    }
    plVar5 = (longlong *)(param_2 + 0x38);
    if (0xf < uVar7) {
      plVar5 = (longlong *)*plVar5;
    }
    if (((lVar8 == 0xb) && (*plVar5 == 0x6c61206873616c66)) &&
       (((short)plVar5[1] == 0x6870 && (*(char *)((longlong)plVar5 + 10) == 'a')))) {
      *param_1 = "Flash Opacity";
      param_1[1] = 0xd;
      return param_1;
    }
    plVar5 = (longlong *)(param_2 + 0x38);
    if (0xf < uVar7) {
      plVar5 = (longlong *)*plVar5;
    }
    if (((lVar8 == 0xb) && (*plVar5 == 0x6c6120656b6f6d73)) &&
       (((short)plVar5[1] == 0x6870 && (*(char *)((longlong)plVar5 + 10) == 'a')))) {
      *param_1 = "Smoke Transparency";
      param_1[1] = 0x12;
      return param_1;
    }
  }
  piVar9 = (int *)(param_2 + 0x18);
  if (0xf < *(ulonglong *)(param_2 + 0x30)) {
    piVar9 = *(int **)piVar9;
  }
  if (((*(longlong *)(param_2 + 0x28) == 6) && (*piVar9 == 0x656d6163)) &&
     ((short)piVar9[1] == 0x6172)) {
    plVar5 = (longlong *)(param_2 + 0x38);
    lVar8 = *(longlong *)(param_2 + 0x48);
    uVar7 = *(ulonglong *)(param_2 + 0x50);
    if (0xf < uVar7) {
      plVar5 = (longlong *)*plVar5;
    }
    if (((lVar8 == 10) && (*plVar5 == 0x66206d6f74737563)) && ((short)plVar5[1] == 0x766f)) {
      *param_1 = "Field of View";
      param_1[1] = 0xd;
      return param_1;
    }
    puVar4 = (undefined8 *)(param_2 + 0x38);
    if (0xf < uVar7) {
      puVar4 = (undefined8 *)*puVar4;
    }
    if ((lVar8 == 0x13) && (iVar2 = memcmp(puVar4,"scoped fov override",0x13), iVar2 == 0)) {
      *param_1 = "Scoped Zoom";
      param_1[1] = 0xb;
      return param_1;
    }
    plVar5 = (longlong *)(param_2 + 0x38);
    if (0xf < uVar7) {
      plVar5 = (longlong *)*plVar5;
    }
    if ((((lVar8 == 0xb) && (*plVar5 == 0x7265706472696874)) && ((short)plVar5[1] == 0x6f73)) &&
       (*(char *)((longlong)plVar5 + 10) == 'n')) {
      *param_1 = "Third Person";
      param_1[1] = 0xc;
      return param_1;
    }
    puVar4 = (undefined8 *)(param_2 + 0x38);
    if (0xf < uVar7) {
      puVar4 = (undefined8 *)*puVar4;
    }
    if ((lVar8 == 0x13) && (iVar2 = memcmp(puVar4,"custom aspect ratio",0x13), iVar2 == 0)) {
      *param_1 = "Aspect Ratio";
      param_1[1] = 0xc;
      return param_1;
    }
  }
  plVar5 = (longlong *)(param_2 + 0x18);
  if (0xf < *(ulonglong *)(param_2 + 0x30)) {
    plVar5 = (longlong *)*plVar5;
  }
  if (((*(longlong *)(param_2 + 0x28) == 9) && (*plVar5 == 0x65646f6d77656976)) &&
     ((char)plVar5[1] == 'l')) {
    plVar5 = (longlong *)(param_2 + 0x38);
    if (0xf < *(ulonglong *)(param_2 + 0x50)) {
      plVar5 = (longlong *)*plVar5;
    }
    if (((*(longlong *)(param_2 + 0x48) == 0x10) && (*plVar5 == 0x65646f6d77656976)) &&
       (plVar5[1] == 0x7473756a6461206c)) {
      *param_1 = "Viewmodel Position";
      param_1[1] = 0x12;
      return param_1;
    }
  }
  plVar5 = (longlong *)(param_2 + 0x18);
  if (0xf < *(ulonglong *)(param_2 + 0x30)) {
    plVar5 = (longlong *)*plVar5;
  }
  if (((*(longlong *)(param_2 + 0x28) == 0xb) && (*plVar5 == 0x6f6c20736d616863)) &&
     (((short)plVar5[1] == 0x6163 && (*(char *)((longlong)plVar5 + 10) == 'l')))) {
    plVar5 = (longlong *)(param_2 + 0x38);
    if (0xf < *(ulonglong *)(param_2 + 0x50)) {
      plVar5 = (longlong *)*plVar5;
    }
    if (((*(longlong *)(param_2 + 0x48) == 0x18) && (*plVar5 == 0x6962697369766e69)) &&
       ((plVar5[1] == 0x656877207974696c && (plVar5[2] == 0x6465706f6373206e)))) {
      *param_1 = "Hide Body While Scoped";
      param_1[1] = 0x16;
      return param_1;
    }
  }
  plVar5 = (longlong *)(param_2 + 0x18);
  lVar8 = *(longlong *)(param_2 + 0x28);
  uVar7 = *(ulonglong *)(param_2 + 0x30);
  if (0xf < uVar7) {
    plVar5 = (longlong *)*plVar5;
  }
  if ((((lVar8 == 0xd) && (*plVar5 == 0x736f7263206e6570)) && ((int)plVar5[1] == 0x69616873)) &&
     (*(char *)((longlong)plVar5 + 0xc) == 'r')) {
    puVar4 = (undefined8 *)(param_2 + 0x38);
    if (0xf < *(ulonglong *)(param_2 + 0x50)) {
      puVar4 = (undefined8 *)*puVar4;
    }
    if ((*(longlong *)(param_2 + 0x48) == 0x15) &&
       (iVar2 = memcmp(puVar4,"penetration crosshair",0x15), iVar2 == 0)) {
      *param_1 = "Penetration Marker";
      param_1[1] = 0x12;
      return param_1;
    }
  }
  piVar9 = (int *)(param_2 + 0x18);
  if (0xf < uVar7) {
    piVar9 = *(int **)piVar9;
  }
  if (((lVar8 == 5) && (*piVar9 == 0x6e656373)) && ((char)piVar9[1] == 'e')) {
    plVar5 = (longlong *)(param_2 + 0x38);
    lVar8 = *(longlong *)(param_2 + 0x48);
    uVar7 = *(ulonglong *)(param_2 + 0x50);
    if (0xf < uVar7) {
      plVar5 = (longlong *)*plVar5;
    }
    if ((((lVar8 == 0xb) && (*plVar5 == 0x6f6320646c726f77)) && ((short)plVar5[1] == 0x6f6c)) &&
       (*(char *)((longlong)plVar5 + 10) == 'r')) {
      *param_1 = "World Tint";
      param_1[1] = 10;
      return param_1;
    }
    plVar5 = (longlong *)(param_2 + 0x38);
    if (0xf < uVar7) {
      plVar5 = (longlong *)*plVar5;
    }
    if (((lVar8 == 0xc) && (*plVar5 == 0x6320786f62796b73)) && ((int)plVar5[1] == 0x726f6c6f)) {
      *param_1 = "Sky Colors";
      param_1[1] = 10;
      return param_1;
    }
    plVar5 = (longlong *)(param_2 + 0x38);
    if (0xf < uVar7) {
      plVar5 = (longlong *)*plVar5;
    }
    if ((lVar8 == 8) && (*plVar5 == 0x676e69746867696c)) {
      *param_1 = "Scene Lighting";
      param_1[1] = 0xe;
      return param_1;
    }
  }
  piVar9 = (int *)(param_2 + 0x18);
  if (0xf < *(ulonglong *)(param_2 + 0x30)) {
    piVar9 = *(int **)piVar9;
  }
  if ((((*(longlong *)(param_2 + 0x28) == 7) && (*piVar9 == 0x74616577)) &&
      ((short)piVar9[1] == 0x6568)) && (*(char *)((longlong)piVar9 + 6) == 'r')) {
    piVar9 = (int *)(param_2 + 0x38);
    lVar8 = *(longlong *)(param_2 + 0x48);
    uVar7 = *(ulonglong *)(param_2 + 0x50);
    if (0xf < uVar7) {
      piVar9 = *(int **)piVar9;
    }
    if (((lVar8 == 7) && (*piVar9 == 0x74616577)) &&
       (((short)piVar9[1] == 0x6568 && (*(char *)((longlong)piVar9 + 6) == 'r')))) {
      *param_1 = "Weather Particles";
      param_1[1] = 0x11;
      return param_1;
    }
    psVar6 = (short *)(param_2 + 0x38);
    if (0xf < uVar7) {
      psVar6 = *(short **)psVar6;
    }
    if (((lVar8 == 3) && (*psVar6 == 0x6f66)) && ((char)psVar6[1] == 'g')) {
      *param_1 = "Custom Fog";
      param_1[1] = 10;
      return param_1;
    }
    piVar9 = (int *)(param_2 + 0x38);
    if (0xf < uVar7) {
      piVar9 = *(int **)piVar9;
    }
    if ((((lVar8 == 7) && (*piVar9 == 0x6e746577)) && ((short)piVar9[1] == 0x7365)) &&
       (*(char *)((longlong)piVar9 + 6) == 's')) {
      *param_1 = "Wet Surfaces";
      param_1[1] = 0xc;
      return param_1;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



