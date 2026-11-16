// FUN_18033eee0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18033eee0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18033eee0(longlong param_1,char param_2,undefined **param_3,float *param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  float fVar5;
  uint uVar6;
  char *local_288;
  longlong local_280;
  undefined1 local_278 [9];
  uint7 uStack_26f;
  uint uStack_24c;
  byte bStack_241;
  uint uStack_22c;
  char local_228 [208];
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  longlong local_130;
  char *local_128;
  undefined **local_120;
  char *local_118;
  longlong local_110 [30];
  
  local_110[0] = param_1;
  if ((((DAT_1808e3e20 - 1U & 0xf8) == 0) && (DAT_1808e3e20 != '\x06')) || (param_2 != '\0')) {
    if ((DAT_1808e3ea0 < 1) ||
       (2.0 < *(float *)(&DAT_1808e3e90 + (longlong)(DAT_1808e3ea0 + -1) * 4))) {
      local_278[0] = 0;
    }
    else {
      local_278[0] = 1;
    }
    local_158 = (double)param_4[2];
    fVar5 = param_4[1] * param_4[1] + *param_4 * *param_4;
    uVar6 = 0;
    if (fVar5 == 0.0) {
      fVar5 = 0.0;
    }
    else if (fVar5 < 0.0) {
      fVar5 = (float)FUN_18061e150(fVar5);
    }
    else {
      fVar5 = SQRT(fVar5);
    }
    local_148 = (double)DAT_1808e3e64;
    local_150 = (double)fVar5;
    local_138 = (double)DAT_1808e3e5c;
    local_140 = (double)DAT_1808e3e60;
    if ((DAT_1808e3e48 == '\0') || (DAT_1808e3e50 < 0)) {
      local_130 = -1;
    }
    else {
      local_130 = param_1 - DAT_1808e3e50;
    }
    local_128 = "found by prediction, no steering was needed or flown";
    if (DAT_1808e3ea4 != '\0') {
      local_128 = "the assist flew an approach/guided route to it";
    }
    ppuVar4 = &PTR_180700558;
    if (param_3 != (undefined **)0x0) {
      ppuVar4 = param_3;
    }
    local_118 = "FAIL";
    local_120 = ppuVar4;
    if (param_2 != '\0') {
      local_118 = "SUCCESS";
    }
    local_110[1] = 0xdb35e39b27e1c185;
    local_110[2] = 0xa05181ee77d57a06;
    local_110[3] = 0x929654b1461b7377;
    local_110[4] = 0xa5cea54bfef7110;
    local_110[5] = 0xa70c9f7f916b7e19;
    local_110[6] = 0x2b2d6d82aa402c0a;
    local_110[7] = 0xc064ed9510bc010b;
    local_110[8] = 0xfec09918395f26c4;
    local_110[9] = 0x835e2313e2c48f8d;
    local_110[10] = 0xf863c3261a551f0e;
    local_110[0xb] = 0x56a0bc092c25563f;
    local_110[0xc] = 0x67ff882c0a9bdf38;
    local_110[0xd] = 0xe9fbbd57d9292e61;
    local_110[0xe] = 0x24c1d5fafa9ec992;
    local_110[0xf] = 0xe0a313cd38802513;
    local_110[0x10] = 0x3a86d390ee208d6c;
    local_110[0x11] = 0x95484dcb29dcfd95;
    local_110[0x12] = 0xc5f2049e64fab916;
    local_110[0x13] = 0x99be47e160dada07;
    local_110[0x14] = 0x1047a904a2394520;
    local_110[0x15] = 0x9a6f01af4f2ca929;
    local_110[0x16] = 0x91e97532caa6fc1a;
    local_110[0x17] = 0x4f948c455ded471b;
    local_110[0x18] = 0xb10776480ca86bd4;
    local_110[0x19] = 0x35a5004309b1b61d;
    builtin_strncpy(local_228,
                    "[edgebug-adv] cmd={} RESULT {} reason={} attempt={} steered_by_assist={} ({}) locked_for={} commands, predicted_contact_tick={} spot=({:.1f},{:.1f},{:.1f}) end_speed={:.1f} vz_after={:.2f} con"
                    ,0xc0);
    local_110[0x1a] = 0x5b5a30d674a48d9e;
    builtin_strncpy(local_228 + 0xc0,"verged={}\n",0xb);
    local_228[0xcb] = '\0';
    local_228[0xcc] = '\0';
    local_228[0xcd] = '\0';
    local_228[0xce] = '\0';
    local_228[0xcf] = '\0';
    lVar2 = -1;
    do {
      local_280 = lVar2 + 1;
      lVar1 = lVar2 + 1;
      lVar2 = local_280;
    } while (local_228[lVar1] != '\0');
    local_288 = local_228;
    FUN_18034db80(param_1,&local_288,local_110,&local_118,&local_120,&DAT_1808e3e40,&DAT_1808e3ea4,
                  &local_128,&local_130,&DAT_1808e3e58,&local_138,&local_140,&local_148,&local_150,
                  &local_158,local_278);
    uVar3 = 9;
    if (param_2 != '\0') {
      uVar3 = 6;
    }
    FUN_18033dbd0(param_1,uVar3,ppuVar4);
    uStack_24c = uVar6;
  }
  else {
    uStack_24c = 0;
    DAT_1808e3e20 = '\0';
  }
  _DAT_1808e3e68 = (ulonglong)uStack_24c << 0x20;
  _DAT_1808e3e70 = (ulonglong)bStack_241 << 0x38;
  _DAT_1808e3e78 = 0;
  _DAT_1808e3e80 = 0;
  _DAT_1808e3e48 = (ulonglong)uStack_26f << 8;
  DAT_1808e3e50 = 0xffffffffffffffff;
  _DAT_1808e3e58 = 0;
  _DAT_1808e3e60 = 0;
  _DAT_1808e3e90 = (undefined1  [16])0x0;
  _DAT_1808e3e88 = ((ulonglong)uStack_22c & 0xffffff00) << 0x20;
  DAT_1808e3e44 = 0;
  DAT_1808e3ea4 = 0;
  DAT_1808e3ea0 = 0;
  return;
}



