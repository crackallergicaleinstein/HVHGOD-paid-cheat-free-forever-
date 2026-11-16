// FUN_1805172f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805172f0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805172f0(void)

{
  undefined1 uVar1;
  char cVar2;
  undefined1 auStack_a8 [32];
  char *local_88;
  undefined4 local_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined1 local_60;
  uint *local_58;
  char **local_50;
  undefined1 *local_48;
  char **local_40;
  uint local_38 [2];
  char *local_30;
  char *local_28;
  char *local_20;
  char *local_18;
  ulonglong local_10;
  
  local_10 = DAT_1808d5f00 ^ (ulonglong)auStack_a8;
  local_30 = "At Targets";
  local_28 = "Local View";
  local_20 = "Closest";
  local_18 = "Crosshair";
  local_38[0] = (uint)DAT_180cad728;
  local_58 = local_38;
  local_50 = &local_30;
  local_48 = &DAT_180cad6b8;
  local_40 = &local_20;
  FUN_180488c60();
  FUN_1805174d0(&local_58);
  FUN_180488f10();
  FUN_180488c60();
  FUN_180516ec0("Jitter",&DAT_180cad730);
  uVar1 = DAT_180cad730;
  local_58 = (uint *)0x180866ff0;
  local_50 = (char **)0xc;
  local_70 = FUN_180515fb0(&local_58);
  local_60 = 0;
  local_78 = uVar1;
  local_80 = 0x3f800000;
  local_88 = "%.0f deg";
  cVar2 = FUN_18048a250("Jitter Range",&DAT_180cad798,0,0x43340000);
  if (cVar2 != '\0') {
    FUN_18050cd00();
  }
  FUN_180488f10();
  FUN_180488c60();
  FUN_180516ec0(&DAT_1808582f8,&DAT_180cad7a0);
  uVar1 = DAT_180cad7a0;
  local_58 = (uint *)0x180866fd0;
  local_50 = (char **)0xa;
  local_70 = FUN_180515fb0(&local_58);
  local_60 = 0;
  local_78 = uVar1;
  local_80 = 0x3dcccccd;
  local_88 = "%.1f rev/s";
  cVar2 = FUN_18048a250("Spin Speed",&DAT_180cad808,0xc0a00000,0x40a00000);
  if (cVar2 != '\0') {
    FUN_18050cd00();
  }
  FUN_180488f10();
}



