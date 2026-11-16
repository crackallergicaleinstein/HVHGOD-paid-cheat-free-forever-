// FUN_1803d1400 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803d1400 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1803d1400(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  uint param_5,undefined4 param_6,undefined8 param_7,char param_8)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [64];
  undefined1 auStack_2e8 [32];
  char *local_2c8 [2];
  char *local_2b8;
  undefined8 local_2b0;
  undefined1 local_2a8 [16];
  undefined8 local_298;
  undefined8 uStack_290;
  undefined4 local_288;
  undefined4 local_284;
  undefined4 local_280;
  undefined4 local_27c;
  undefined1 local_278 [16];
  undefined4 local_268;
  undefined4 local_264;
  undefined4 local_260;
  undefined2 local_25b;
  undefined4 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined2 local_240;
  undefined4 local_23c;
  undefined4 local_238;
  undefined4 local_234;
  undefined4 local_228;
  undefined4 local_224;
  undefined4 local_220;
  undefined4 local_21c;
  undefined1 local_218;
  undefined1 local_217;
  undefined1 local_216;
  undefined1 local_215;
  undefined1 local_214;
  undefined1 local_213;
  undefined1 local_212;
  undefined4 local_210;
  undefined8 local_20c;
  undefined8 uStack_204;
  undefined8 uStack_1fc;
  undefined8 uStack_1f4;
  undefined8 local_1ec;
  undefined8 uStack_1e4;
  undefined8 uStack_1dc;
  undefined8 uStack_1d4;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
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
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_b0 [2];
  longlong local_a8;
  undefined8 local_a0;
  undefined1 local_98 [16];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  ulonglong local_68;
  
  local_68 = DAT_1808d5f00 ^ (ulonglong)auStack_2e8;
  _DAT_180ccaa74 = 6;
  auVar7 = ZEXT464(param_5);
  DAT_180ccaa6c = param_5;
  DAT_180ccaa70 = param_6;
  DAT_180ccaa54 = param_3;
  DAT_180ccaa58 = param_4;
  DAT_180ccaa64 = param_3;
  DAT_180ccaa68 = param_4;
  puVar3 = (undefined4 *)FUN_180439770();
  auVar6 = auVar7._0_16_;
  local_228 = *puVar3;
  local_224 = puVar3[1];
  local_220 = puVar3[2];
  local_21c = puVar3[3];
  local_218 = *(undefined1 *)(puVar3 + 4);
  local_217 = *(undefined1 *)((longlong)puVar3 + 0x11);
  local_216 = *(undefined1 *)((longlong)puVar3 + 0x12);
  local_215 = *(undefined1 *)((longlong)puVar3 + 0x13);
  local_214 = *(undefined1 *)(puVar3 + 5);
  local_213 = *(undefined1 *)((longlong)puVar3 + 0x15);
  local_212 = *(undefined1 *)((longlong)puVar3 + 0x16);
  local_210 = puVar3[6];
  local_20c = *(undefined8 *)(puVar3 + 7);
  uStack_204 = *(undefined8 *)(puVar3 + 9);
  uStack_1fc = *(undefined8 *)(puVar3 + 0xb);
  uStack_1f4 = *(undefined8 *)(puVar3 + 0xd);
  local_1ec = *(undefined8 *)(puVar3 + 0xf);
  uStack_1e4 = *(undefined8 *)(puVar3 + 0x11);
  uStack_1dc = *(undefined8 *)(puVar3 + 0x13);
  uStack_1d4 = *(undefined8 *)(puVar3 + 0x15);
  local_1c8 = *(undefined8 *)(puVar3 + 0x18);
  local_1c0 = *(undefined8 *)(puVar3 + 0x1a);
  uStack_1b8 = *(undefined8 *)(puVar3 + 0x1c);
  uStack_1b0 = *(undefined8 *)(puVar3 + 0x1e);
  uStack_1a8 = *(undefined8 *)(puVar3 + 0x20);
  local_1a0 = *(undefined8 *)(puVar3 + 0x22);
  uStack_198 = *(undefined8 *)(puVar3 + 0x24);
  uStack_190 = *(undefined8 *)(puVar3 + 0x26);
  uStack_188 = *(undefined8 *)(puVar3 + 0x28);
  local_180 = *(undefined8 *)(puVar3 + 0x2a);
  uStack_178 = *(undefined8 *)(puVar3 + 0x2c);
  uStack_170 = *(undefined8 *)(puVar3 + 0x2e);
  uStack_168 = *(undefined8 *)(puVar3 + 0x30);
  local_160 = *(undefined8 *)(puVar3 + 0x32);
  uStack_158 = *(undefined8 *)(puVar3 + 0x34);
  uStack_150 = *(undefined8 *)(puVar3 + 0x36);
  uStack_148 = *(undefined8 *)(puVar3 + 0x38);
  local_140 = *(undefined8 *)(puVar3 + 0x3a);
  local_138 = *(undefined8 *)(puVar3 + 0x3c);
  uStack_130 = *(undefined8 *)(puVar3 + 0x3e);
  uStack_128 = *(undefined8 *)(puVar3 + 0x40);
  uStack_120 = *(undefined8 *)(puVar3 + 0x42);
  local_118 = *(undefined8 *)(puVar3 + 0x44);
  uStack_110 = *(undefined8 *)(puVar3 + 0x46);
  uStack_108 = *(undefined8 *)(puVar3 + 0x48);
  uStack_100 = *(undefined8 *)(puVar3 + 0x4a);
  local_f8 = *(undefined8 *)(puVar3 + 0x4c);
  uStack_f0 = *(undefined8 *)(puVar3 + 0x4e);
  uStack_e8 = *(undefined8 *)(puVar3 + 0x50);
  uStack_e0 = *(undefined8 *)(puVar3 + 0x52);
  local_d8 = *(undefined8 *)(puVar3 + 0x54);
  uStack_d0 = *(undefined8 *)(puVar3 + 0x56);
  uStack_c8 = *(undefined8 *)(puVar3 + 0x58);
  uStack_c0 = *(undefined8 *)(puVar3 + 0x5a);
  local_b8 = *(undefined8 *)(puVar3 + 0x5c);
  local_2c8[0] = (char *)local_b0;
  local_b0[0] = puVar3[0x5e];
  local_a8 = 0;
  local_a0 = 0;
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_2b8 = "tier0.dll:g_pMemAlloc";
    local_2b0 = 0x15;
    auVar7 = ZEXT1664(auVar6);
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_2b8);
    auVar6 = auVar7._0_16_;
  }
  auVar7 = ZEXT1664(auVar6);
  local_a8 = (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x18);
  *(longlong *)local_a8 = local_a8;
  *(longlong *)(local_a8 + 8) = local_a8;
  local_98 = (undefined1  [16])0x0;
  local_88 = 0;
  local_80 = *(undefined8 *)(puVar3 + 0x6a);
  local_78 = *(undefined8 *)(puVar3 + 0x6c);
  FUN_1801406e0(local_98,*(longlong *)(puVar3 + 0x66) - *(longlong *)(puVar3 + 100) >> 3,local_a8);
  puVar1 = *(undefined8 **)(puVar3 + 0x60);
  for (puVar2 = (undefined8 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined8 *)*puVar2) {
    FUN_1803d2520(local_b0,&local_2b8,puVar2 + 2);
  }
  *(undefined8 *)(puVar3 + 0xb0) = DAT_180ccdf38;
  *(undefined8 *)(puVar3 + 0xb2) = DAT_180ccdf48;
  *(undefined8 *)(puVar3 + 0xb4) = DAT_180ccdf58;
  *(undefined8 *)(puVar3 + 0xb6) = DAT_180ccdf68;
  *(undefined8 *)(puVar3 + 0xb8) = DAT_180ccdf78;
  *(undefined8 *)(puVar3 + 0xba) = DAT_180ccdf88;
  *(undefined8 *)(puVar3 + 0xbc) = DAT_180ccdf98;
  *(undefined8 *)(puVar3 + 0xbe) = DAT_180ccdfa8;
  *(undefined8 *)(puVar3 + 0xc0) = DAT_180ccdfb8;
  *(undefined8 *)(puVar3 + 0xc2) = DAT_180ccdfc8;
  *(undefined8 *)(puVar3 + 0xc4) = DAT_180ccdfd8;
  *(undefined8 *)(puVar3 + 0xc6) = DAT_180ccdfe8;
  *(undefined8 *)(puVar3 + 200) = DAT_180ccdff8;
  *(undefined8 *)(puVar3 + 0xca) = DAT_180cce008;
  *(undefined8 *)(puVar3 + 0xcc) = DAT_180cce018;
  *(undefined8 *)(puVar3 + 0xce) = DAT_180cce028;
  *(undefined8 *)(puVar3 + 0xd0) = DAT_180cce038;
  *(undefined8 *)(puVar3 + 0xd2) = DAT_180cce048;
  *(undefined8 *)(puVar3 + 0xd4) = DAT_180cce058;
  *(undefined8 *)(puVar3 + 0xd6) = DAT_180cce068;
  *(undefined8 *)(puVar3 + 0xd8) = DAT_180cce078;
  *(undefined8 *)(puVar3 + 0xda) = DAT_180cce088;
  *(undefined8 *)(puVar3 + 0xdc) = DAT_180cce098;
  *(undefined8 *)(puVar3 + 0xde) = DAT_180cce0a8;
  *(undefined8 *)(puVar3 + 0xe0) = DAT_180cce0b8;
  *(undefined8 *)(puVar3 + 0xe2) = DAT_180cce0c8;
  *(undefined8 *)(puVar3 + 0xe4) = DAT_180cce0d8;
  *(undefined8 *)(puVar3 + 0xe6) = DAT_180cce0e8;
  *(undefined8 *)(puVar3 + 0xe8) = DAT_180cce0f8;
  *(undefined8 *)(puVar3 + 0xea) = DAT_180cce108;
  *(undefined8 *)(puVar3 + 0xec) = DAT_180cce118;
  *(undefined8 *)(puVar3 + 0xee) = DAT_180cce128;
  *(undefined8 *)(puVar3 + 0xf0) = DAT_180cce138;
  *(undefined8 *)(puVar3 + 0xf2) = DAT_180cce148;
  *(undefined8 *)(puVar3 + 0xf4) = DAT_180cce158;
  *(undefined8 *)(puVar3 + 0xf6) = DAT_180cce168;
  *(undefined8 *)(puVar3 + 0xf8) = DAT_180cce178;
  *(undefined8 *)(puVar3 + 0xfa) = DAT_180cce188;
  *(undefined8 *)(puVar3 + 0xfc) = DAT_180cce198;
  *(undefined8 *)(puVar3 + 0xfe) = DAT_180cce1a8;
  *(undefined8 *)(puVar3 + 0x100) = DAT_180cce1b8;
  if (param_8 != '\0') {
    *(undefined2 *)((longlong)puVar3 + 0x11) = 0;
    *(undefined1 *)(puVar3 + 4) = 0;
    puVar3[6] = 0;
  }
  local_298 = 0;
  uStack_290 = 0xf;
  local_2a8._1_15_ = SUB1615((undefined1  [16])0x0,1);
  auVar6[0xf] = 0;
  auVar6._0_15_ = local_2a8._1_15_;
  local_2a8 = auVar6 << 8;
  local_278 = (undefined1  [16])0x0;
  local_268 = 0;
  local_264 = 0;
  local_260 = 0;
  local_25b = 0;
  local_258 = 0;
  local_250 = 0;
  local_248 = 0;
  local_240 = 0;
  local_23c = 0;
  local_238 = 0;
  local_234 = 0;
  local_280 = auVar7._0_4_;
  lVar4 = *(longlong *)(puVar3 + 0x120);
  local_288 = param_3;
  local_284 = param_4;
  local_27c = param_6;
  if (lVar4 == *(longlong *)(puVar3 + 0x122)) {
    FUN_1801d9da0(puVar3 + 0x11e,lVar4,local_2a8);
  }
  else {
    FUN_1801da530(lVar4,local_2a8);
    *(longlong *)(puVar3 + 0x120) = *(longlong *)(puVar3 + 0x120) + 0x78;
  }
  local_2c8[0] = "restored_page";
  lVar4 = FUN_180439770();
  uVar5 = auVar7._0_8_;
  puVar1 = *(undefined8 **)(lVar4 + 0x498);
  if (puVar1 == *(undefined8 **)(lVar4 + 0x4a0)) {
    FUN_1801b6250(lVar4 + 0x490,puVar1,local_2c8);
    uVar5 = auVar7._0_8_;
  }
  else {
    *puVar1 = "restored_page";
    *(longlong *)(lVar4 + 0x498) = *(longlong *)(lVar4 + 0x498) + 8;
  }
  FUN_1801d01a0(&DAT_180ccaa20,uVar5);
  lVar4 = FUN_180439770();
  if (*(longlong *)(lVar4 + 0x490) != *(longlong *)(lVar4 + 0x498)) {
    *(longlong *)(lVar4 + 0x498) = *(longlong *)(lVar4 + 0x498) + -8;
  }
  FUN_18015c010(*(longlong *)(puVar3 + 0x120) + -0x78);
  *(longlong *)(puVar3 + 0x120) = *(longlong *)(puVar3 + 0x120) + -0x78;
  FUN_18043ba80();
  DAT_180ccaa21 = 1;
  if (param_8 != '\0') {
    *puVar3 = local_228;
    puVar3[1] = local_224;
    *(undefined1 *)(puVar3 + 4) = local_218;
  }
  FUN_18015c010(local_2a8);
  FUN_180182bf0(local_b0);
}



