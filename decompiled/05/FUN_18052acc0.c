// FUN_18052acc0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18052acc0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18052acc0(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  longlong lVar3;
  undefined8 uVar4;
  int *piVar5;
  int *piVar6;
  int local_res20 [2];
  int local_268 [4];
  undefined4 local_258;
  undefined8 local_254;
  undefined8 local_24c;
  undefined4 local_244;
  undefined8 local_240;
  undefined4 local_238;
  undefined4 local_234;
  undefined4 local_230;
  undefined1 local_22c;
  undefined4 local_228;
  undefined1 local_220 [16];
  undefined8 local_210;
  undefined8 local_208;
  undefined1 local_200;
  undefined8 local_1fc;
  undefined4 local_1f4;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined4 local_168;
  undefined8 local_164;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined1 local_150;
  undefined8 local_14c;
  undefined4 local_144;
  undefined4 local_140;
  undefined1 local_13c;
  undefined4 local_138;
  undefined1 local_130 [16];
  undefined8 local_120;
  undefined8 local_118;
  undefined1 local_110;
  undefined8 local_10c;
  undefined4 local_104;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  uint uStack_44;
  undefined8 local_40;
  
  local_res20[0] = param_4;
  uVar4 = FUN_180529500();
  if (DAT_1808e6670 == '\0') {
    local_1d0 = 0x3f80000000000000;
    uStack_1c8 = 0;
    uStack_1c0 = 0xffffffff00000000;
    local_1b0 = 0x3f800000;
    uStack_1a8 = 0;
    local_220._1_15_ = SUB1615((undefined1  [16])0x0,1);
    auVar1[0xf] = 0;
    auVar1._0_15_ = local_220._1_15_;
    local_220 = auVar1 << 8;
    local_1f0 = 0;
    uStack_1e8 = 0x3f800000;
    uStack_1e0 = 0;
    uStack_1d8 = 0xffffffff;
    uStack_1b8 = 0;
    uStack_1a0 = 0xffffffff;
    uStack_198 = 0x3f80000000000000;
    uStack_190 = 0;
    uStack_188 = 0xffffffff00000000;
    uStack_180 = 0;
    uStack_178 = 0x3f800000;
    uStack_170 = 0;
    local_130._1_15_ = SUB1615((undefined1  [16])0x0,1);
    auVar2[0xf] = 0;
    auVar2._0_15_ = local_130._1_15_;
    local_130 = auVar2 << 8;
    local_100 = 0;
    uStack_f8 = 0x3f800000;
    uStack_f0 = 0;
    uStack_e8 = 0xffffffff;
    local_234 = 0x3c23d70a;
    local_15c = 0;
    local_158 = 0;
    local_154 = 0;
    local_144 = 0x3c23d70a;
    local_258 = 0;
    local_254 = 0;
    local_24c = 0;
    local_244 = 0;
    local_240 = 0;
    local_238 = 0;
    local_230 = 0;
    local_22c = 0;
    local_228 = 0;
    local_210 = 0;
    local_208 = 0xf;
    local_200 = 0;
    local_1fc = 0xffffffffffffffff;
    local_1f4 = 0xffffffff;
    local_168 = 0xffffffff;
    local_164 = 0;
    local_150 = 0;
    local_14c = 0;
    local_140 = 0;
    local_13c = 0;
    local_138 = 0;
    local_120 = 0;
    local_118 = 0xf;
    local_110 = 0;
    local_10c = 0xffffffffffffffff;
    local_104 = 0xffffffff;
    local_e0 = 0x3f80000000000000;
    uStack_d8 = 0;
    local_c0 = 0x3f800000;
    uStack_b8 = 0;
    local_6c = 0;
    local_68 = 0;
    local_64 = 0;
    uStack_50 = 0;
    uStack_4c = 0;
    local_48 = 0;
    uStack_d0 = 0xffffffff00000000;
    uStack_c8 = 0;
    uStack_b0 = 0xffffffff;
    uStack_a8 = 0x3f80000000000000;
    uStack_a0 = 0;
    uStack_98 = 0xffffffff00000000;
    uStack_90 = 0;
    uStack_88 = 0x3f800000;
    uStack_80 = 0;
    local_78 = 0xffffffff;
    local_74 = 0;
    local_60 = 0;
    local_5c = 0;
    uStack_58 = 0;
    uStack_54 = 0;
    uStack_44 = uStack_44 & 0xffffff00;
    local_40 = 0;
    _DAT_1808e6670 = 0;
    _DAT_1808e6674 = 0;
    _DAT_1808e667c = 0;
    DAT_1808e6684 = 0;
    DAT_1808e6688 = 0;
    FUN_1800cf9c0(&DAT_1808e6690,&local_238);
    FUN_1800cf9c0(&DAT_1808e6780,(longlong)&local_14c + 4);
    _DAT_1808e6870 = CONCAT44(uStack_54,uStack_58);
    uRam00000001808e6878 = CONCAT44(uStack_4c,uStack_50);
    DAT_1808e6880 = CONCAT44(uStack_44,local_48);
    _DAT_1808e6888 = (undefined4)local_40;
    DAT_1808e688c = local_40._4_1_;
    FUN_18015c010(local_130);
    FUN_18015c010(local_220);
    _DAT_1808e6670 = CONCAT31(_DAT_1808e6671,1);
    _DAT_1808e6674 = CONCAT44(param_2,param_1);
    uVar4 = FUN_18017edf0(&DAT_1808e6780,uVar4);
    FUN_18017edf0(&DAT_1808e6690,uVar4);
  }
  lVar3 = DAT_180c62f50;
  local_268[1] = 4;
  local_268[0] = 0;
  piVar6 = local_268;
  if (-1 < param_4) {
    piVar6 = local_res20;
  }
  piVar5 = local_268 + 1;
  if (param_4 < 5) {
    piVar5 = piVar6;
  }
  _DAT_1808e667c = CONCAT44(*piVar5,param_3);
  if (param_3 < 0) {
    param_3 = 0;
  }
  else if (2 < param_3) {
    param_3 = 2;
  }
  *(int *)(DAT_180c62f50 + 0x50) = param_3;
  *(undefined4 *)(lVar3 + 0xf8) = 0;
  *(undefined1 *)(lVar3 + 0xb8) = 0;
  FUN_18052ab70();
  return;
}



