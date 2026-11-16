// FUN_1800eb260 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800eb260 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800eb260(undefined8 param_1,int param_2,char param_3,undefined1 param_4)

{
  undefined1 local_res20 [8];
  undefined1 auStack_188 [40];
  char **local_160;
  longlong local_158;
  undefined8 local_150;
  undefined1 *local_148;
  undefined1 **local_140;
  undefined1 *local_138;
  undefined1 local_130 [8];
  undefined1 *local_128;
  undefined8 local_120;
  longlong local_118;
  char *local_110;
  char *local_108;
  char *local_100;
  char *local_f8;
  char *local_f0;
  char *local_e8;
  char *local_e0;
  char *local_d8;
  char *local_d0;
  char *local_c8;
  char *local_c0;
  char *local_b8;
  char *local_a8;
  char *local_a0;
  char *local_98;
  char *local_90;
  char *local_88;
  char *local_80;
  char *local_78;
  char *local_70;
  char *local_68;
  char *local_60;
  char *local_58;
  char *local_50;
  char *local_48;
  char *local_40;
  char *local_38;
  char *local_30;
  char *local_28;
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_188;
  local_res20[0] = param_4;
  local_158 = FUN_1800aa200();
  if ((param_3 == '\0') || (local_118 = 0x28, 1 < param_2)) {
    local_118 = 0x18;
  }
  local_128 = local_res20;
  local_118 = local_118 + local_158;
  local_148 = local_res20;
  local_a0 = "max distance";
  local_140 = &local_128;
  local_98 = "visibility";
  local_138 = local_130;
  local_a8 = "display";
  local_90 = "distance";
  local_88 = "distance color";
  local_80 = "text color";
  local_78 = "icon color";
  local_70 = "name font";
  local_68 = "name size";
  local_60 = "name outline";
  local_58 = "name outline width";
  local_50 = "name outline color";
  local_48 = "range font";
  local_40 = "range size";
  local_38 = "range outline";
  local_30 = "range outline width";
  local_28 = "range outline color";
  local_110 = "color";
  local_f0 = "primary layer";
  local_e8 = "primary layer color";
  local_e0 = "primary layer material";
  local_d8 = "primary visibility";
  local_d0 = "secondary layer";
  local_c8 = "secondary layer color";
  local_c0 = "secondary layer material";
  local_b8 = "secondary visibility";
  local_160 = &local_a8;
  local_108 = "max distance";
  local_100 = "visibility";
  local_f8 = "max distance";
  local_150 = param_1;
  local_120 = param_1;
  FUN_1800eb7b0(&local_158,&DAT_180cb6200);
  local_160 = &local_110;
  FUN_1800ecc00(&local_158,&DAT_180cbda50);
  local_160 = &local_f8;
  FUN_1800ee040(&local_158,&DAT_180cbf2c0);
}



