// FUN_18049f660 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18049f660 */

void FUN_18049f660(longlong *param_1)

{
  longlong lVar1;
  undefined **local_18;
  undefined8 local_10;
  
  lVar1 = *param_1;
  FUN_180488c60();
  FUN_180489c50("Smoke Radius",lVar1 + 0xe1c,lVar1 + 0xe18,&DAT_180858a08,1);
  FUN_180489c50("Molotov Radius",lVar1 + 0xe30,lVar1 + 0xe2c,&DAT_180858a04,1);
  FUN_180489c50("Colorize Smoke",lVar1 + 0xe44,lVar1 + 0xe40,&DAT_180829a44,1);
  FUN_180489c50("Colorize Molotov",lVar1 + 0xe58,lVar1 + 0xe54,&DAT_1808589fc,1);
  FUN_180489c50("Colorize Explosion",lVar1 + 0xe6c,lVar1 + 0xe68,&DAT_18082a25c,1);
  FUN_180488f10();
  lVar1 = *param_1;
  FUN_180488c60();
  FUN_180489c50("Enabled",lVar1 + 0xe80,lVar1 + 0xe7c,0,1);
  local_10 = 7;
  local_18 = &PTR_DAT_1807b7c30;
  FUN_18048dbc0(&local_18,lVar1 + 0xe90);
  FUN_180488f10();
  return;
}



