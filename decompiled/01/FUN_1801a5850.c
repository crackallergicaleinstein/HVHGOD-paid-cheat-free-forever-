// FUN_1801a5850 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801a5850 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801a5850(longlong *param_1,longlong param_2,ulonglong param_3,ulonglong param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_398 [32];
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined1 local_358 [16];
  undefined1 local_348;
  undefined8 local_340;
  undefined7 uStack_338;
  int iStack_331;
  undefined5 uStack_32d;
  undefined3 uStack_328;
  undefined5 uStack_325;
  undefined3 uStack_320;
  uint uStack_31d;
  int iStack_319;
  int iStack_315;
  undefined1 uStack_311;
  undefined1 uStack_310;
  char local_30f;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  int local_2e0;
  ushort local_2dc;
  char local_2da;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 local_278;
  ushort local_270;
  byte bStack_26e;
  undefined1 uStack_26d;
  undefined2 local_26c;
  undefined1 local_26a;
  char local_269;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  ulonglong uStack_210;
  undefined8 local_208;
  undefined4 uStack_200;
  undefined2 uStack_1fc;
  undefined1 uStack_1fa;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined4 local_1a8;
  undefined2 local_1a4;
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
  ulonglong uStack_140;
  undefined8 local_138;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined3 uStack_f0;
  ushort uStack_ed;
  byte bStack_eb;
  undefined2 uStack_ea;
  undefined2 uStack_e8;
  undefined6 uStack_e6;
  undefined3 uStack_e0;
  int iStack_dd;
  undefined1 uStack_d9;
  undefined1 uStack_d8;
  byte bStack_d7;
  undefined2 uStack_d6;
  undefined2 local_d4;
  char local_d2;
  int local_c8;
  ushort local_c4;
  undefined2 local_c0;
  undefined1 local_be;
  ushort local_bc;
  undefined1 local_ba;
  ushort local_b8;
  undefined1 local_b6;
  undefined4 local_b4;
  undefined2 local_b0;
  undefined1 local_ae;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  uint local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined2 local_84;
  undefined1 local_82;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined2 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_1808d5f00 ^ (ulonglong)auStack_398;
  if ((((param_2 == 0) || (cVar1 = FUN_1804513c0(param_2,1,2), cVar1 == '\0')) || (param_3 == 0)) ||
     (param_4 == 0)) goto LAB_1801a5ed1;
  lVar3 = FUN_18017ea70();
  local_378 = 0;
  uStack_370 = 0;
  uStack_368 = 0;
  uStack_360 = 0;
  local_358 = (undefined1  [16])0x0;
  *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + 1;
  local_348 = 0;
  cVar1 = FUN_1804514f0(&local_378,param_2,0x31);
  local_30f = cVar1 != '\0';
  if ((bool)local_30f) {
    local_340 = local_378;
    uStack_338 = (undefined7)uStack_370;
    iStack_331._0_1_ = (undefined1)((ulonglong)uStack_370 >> 0x38);
    iStack_331._1_3_ = (undefined3)uStack_368;
    uStack_32d = (undefined5)((ulonglong)uStack_368 >> 0x18);
    uStack_328 = (undefined3)uStack_360;
    uStack_325 = (undefined5)((ulonglong)uStack_360 >> 0x18);
    uStack_320 = local_358._0_3_;
    uStack_31d = local_358._3_4_;
    iStack_319 = local_358._7_4_;
    iStack_315 = local_358._11_4_;
    uStack_311 = local_358[0xf];
    uStack_310 = local_348;
  }
  lVar3 = FUN_18017ea70();
  if (*(int *)(lVar3 + 4) != 0) {
    *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + -1;
  }
  local_90 = 0x83485340;
  local_8c = 0x8b4820ec;
  local_88 = 0xc28b4cd9;
  local_84 = 0x8b48;
  local_82 = 0xd;
  local_a8 = 0x24548d48;
  uStack_a4 = 0x18b4840;
  local_a0 = 0x486050ff;
  uStack_9c = 0x4024548b;
  local_98 = 0xe8cb8b48;
  local_c8 = 0x20c48348;
  local_c4 = 0xc35b;
  if ((local_30f == '\0') || (iVar2 = memcmp(&local_90,&local_340,0xf), iVar2 != 0))
  goto LAB_1801a5ed1;
  lVar3 = CONCAT44(uStack_a4,local_a8) - CONCAT35(uStack_328,uStack_32d);
  if ((lVar3 == 0) &&
     (lVar3 = CONCAT44(uStack_9c,local_a0) - CONCAT35(uStack_320,uStack_325), lVar3 == 0)) {
    lVar3 = (ulonglong)local_98 - (ulonglong)uStack_31d;
  }
  if (lVar3 != 0) goto LAB_1801a5ed1;
  iVar2 = local_c8 - iStack_315;
  if (iVar2 == 0) {
    iVar2 = (uint)local_c4 - (uint)CONCAT11(uStack_310,uStack_311);
  }
  if (iVar2 != 0) goto LAB_1801a5ed1;
  lVar3 = (longlong)iStack_319 + 0x2b + param_2;
  cVar1 = FUN_1804513c0(lVar3,1,2);
  if (cVar1 == '\0') goto LAB_1801a5ed1;
  lVar4 = FUN_18017ea70();
  *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
  if (lVar3 == 0) {
LAB_1801a5af0:
    local_d2 = '\0';
  }
  else {
    FUN_18063ab10(&local_268,0,0xc6);
    cVar1 = FUN_1804514f0(&local_268,lVar3,0xc6);
    if (cVar1 == '\0') goto LAB_1801a5af0;
    local_198 = local_268;
    uStack_190 = uStack_260;
    uStack_188 = uStack_258;
    uStack_180 = uStack_250;
    local_178 = local_248;
    uStack_170 = uStack_240;
    uStack_168 = uStack_238;
    uStack_160 = uStack_230;
    local_158 = local_228;
    uStack_150 = uStack_220;
    uStack_148 = uStack_218;
    uStack_140 = uStack_210;
    local_138 = local_208;
    local_128 = local_1f8;
    uStack_120 = uStack_1f0;
    local_118 = local_1e8;
    uStack_110 = uStack_1e0;
    uStack_108 = uStack_1d8;
    uStack_100 = uStack_1d0;
    local_f8 = local_1c8;
    uStack_f0 = (undefined3)uStack_1c0;
    uStack_ed = (ushort)((ulonglong)uStack_1c0 >> 0x18);
    bStack_eb = (byte)((ulonglong)uStack_1c0 >> 0x28);
    uStack_ea = (undefined2)((ulonglong)uStack_1c0 >> 0x30);
    uStack_e8 = (undefined2)uStack_1b8;
    uStack_e6 = (undefined6)((ulonglong)uStack_1b8 >> 0x10);
    uStack_e0 = (undefined3)uStack_1b0;
    iStack_dd = (int)((ulonglong)uStack_1b0 >> 0x18);
    uStack_d9 = (undefined1)((ulonglong)uStack_1b0 >> 0x38);
    uStack_d8 = (undefined1)local_1a8;
    bStack_d7 = (byte)((uint)local_1a8 >> 8);
    uStack_d6 = (undefined2)((uint)local_1a8 >> 0x10);
    local_d4 = local_1a4;
    local_d2 = '\x01';
  }
  lVar4 = FUN_18017ea70();
  if (*(int *)(lVar4 + 4) != 0) {
    *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
  }
  local_be = 0x80;
  local_ae = 0xe8;
  local_c0 = 0x8b48;
  local_b4 = 0x48d38b48;
  local_b0 = 0xce8b;
  if (local_d2 == '\0') goto LAB_1801a5ed1;
  iVar2 = 0x8b48 - (uint)uStack_ed;
  if (iVar2 == 0) {
    iVar2 = 0x80 - (uint)bStack_eb;
  }
  if (iVar2 != 0) goto LAB_1801a5ed1;
  iVar2 = 0x48d38b48 - iStack_dd;
  if ((iVar2 == 0) && (iVar2 = 0xce8b - (uint)CONCAT11(uStack_d8,uStack_d9), iVar2 == 0)) {
    iVar2 = 0xe8 - (uint)bStack_d7;
  }
  if ((iVar2 != 0) || (CONCAT22(uStack_e8,uStack_ea) != param_4)) goto LAB_1801a5ed1;
  lVar3 = lVar3 + (longlong)CONCAT22(local_d4,uStack_d6) + 0xc6;
  cVar1 = FUN_1804513c0(lVar3,1,2);
  if (cVar1 == '\0') goto LAB_1801a5ed1;
  lVar4 = FUN_18017ea70();
  *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
  if (lVar3 == 0) {
LAB_1801a5c45:
    local_2da = '\0';
  }
  else {
    local_378 = 0;
    uStack_370 = 0;
    uStack_368 = 0;
    uStack_360 = 0;
    local_358._0_14_ = ZEXT814(0);
    cVar1 = FUN_1804514f0(&local_378,lVar3,0x2e);
    if (cVar1 == '\0') goto LAB_1801a5c45;
    local_2e0 = local_358._8_4_;
    local_2dc = local_358._12_2_;
    local_308 = local_378;
    uStack_300 = uStack_370;
    uStack_2f8 = uStack_368;
    uStack_2f0 = uStack_360;
    local_2e8 = local_358._0_8_;
    local_2da = '\x01';
  }
  lVar4 = FUN_18017ea70();
  if (*(int *)(lVar4 + 4) != 0) {
    *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
  }
  local_68 = 0x83485340;
  local_64 = 0x8b4820ec;
  local_60 = 0x8b480849;
  local_5c = 0x18b48da;
  local_58 = 0x487050ff;
  local_54 = 0x1074c085;
  local_50 = 0x48d38b48;
  local_4c = 0x8348c88b;
  local_48 = 0xe95b20c4;
  if ((local_2da == '\0') || (iVar2 = memcmp(&local_68,&local_308,0x24), iVar2 != 0))
  goto LAB_1801a5ed1;
  iVar2 = local_c8 - local_2e0;
  if (iVar2 == 0) {
    iVar2 = (uint)local_c4 - (uint)local_2dc;
  }
  if (iVar2 != 0) goto LAB_1801a5ed1;
  lVar3 = lVar3 + (longlong)local_2e8._4_4_ + 0x28;
  cVar1 = FUN_1804513c0(lVar3,1,2);
  if (cVar1 == '\0') goto LAB_1801a5ed1;
  lVar4 = FUN_18017ea70();
  *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
  if (lVar3 == 0) {
LAB_1801a5dca:
    local_269 = '\0';
  }
  else {
    local_268 = 0;
    uStack_260 = 0;
    uStack_258 = 0;
    uStack_250 = 0;
    local_248 = 0;
    uStack_240 = 0;
    uStack_238 = 0;
    uStack_230 = 0;
    local_228 = 0;
    uStack_220 = 0;
    uStack_218 = 0;
    uStack_210 = 0;
    local_208 = 0;
    uStack_200 = 0;
    uStack_1fc = 0;
    uStack_1fa = 0;
    cVar1 = FUN_1804514f0(&local_268,lVar3,0x6f);
    if (cVar1 == '\0') goto LAB_1801a5dca;
    local_270 = (ushort)uStack_200;
    bStack_26e = (byte)((uint)uStack_200 >> 0x10);
    uStack_26d = (undefined1)((uint)uStack_200 >> 0x18);
    local_26c = uStack_1fc;
    local_2d8 = local_268;
    uStack_2d0 = uStack_260;
    uStack_2c8 = uStack_258;
    uStack_2c0 = uStack_250;
    local_2b8 = local_248;
    uStack_2b0 = uStack_240;
    uStack_2a8 = uStack_238;
    uStack_2a0 = uStack_230;
    local_26a = uStack_1fa;
    local_298 = local_228;
    uStack_290 = uStack_220;
    uStack_288 = uStack_218;
    uStack_280 = uStack_210;
    local_278 = local_208;
    local_269 = '\x01';
  }
  lVar4 = FUN_18017ea70();
  if (*(int *)(lVar4 + 4) != 0) {
    *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
  }
  local_ba = 0x46;
  local_b6 = 0xbe;
  local_80 = 0x56535540;
  local_7c = 0x48564157;
  local_78 = 0x24ac8d;
  local_74 = 0x48fffffc;
  local_70 = 0x500ec81;
  local_6c = 0;
  local_bc = 0x8b48;
  local_b8 = 0x8b48;
  if ((local_269 != '\0') && (iVar2 = memcmp(&local_80,&local_2d8,0x16), iVar2 == 0)) {
    iVar2 = (uint)local_bc - (uint)uStack_280._2_2_;
    if (iVar2 == 0) {
      iVar2 = 0x46 - (uint)uStack_280._4_1_;
    }
    if ((iVar2 == 0) && ((uStack_280 >> 0x28 & 0xff) == param_3)) {
      iVar2 = (uint)local_b8 - (uint)local_270;
      if (iVar2 == 0) {
        iVar2 = 0xbe - (uint)bStack_26e;
      }
      if ((iVar2 == 0) && (CONCAT13(local_26a,CONCAT21(local_26c,uStack_26d)) == param_4)) {
        *param_1 = (longlong)iStack_331 + 0x13 + param_2;
        param_1[1] = lVar3;
        *(undefined1 *)(param_1 + 2) = 1;
      }
    }
  }
LAB_1801a5ed1:
  *(undefined1 *)(param_1 + 2) = 0;
}



