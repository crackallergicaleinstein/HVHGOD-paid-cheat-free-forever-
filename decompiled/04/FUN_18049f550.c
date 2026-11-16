// FUN_18049f550 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18049f550 */

void FUN_18049f550(longlong *param_1)

{
  longlong lVar1;
  undefined **local_18;
  undefined8 local_10;
  
  lVar1 = *param_1;
  FUN_180488c60();
  FUN_180489c50("Colorize Effects",lVar1 + 0xdd0,lVar1 + 0xdcc,&DAT_180858a0c,1);
  FUN_180488f10();
  lVar1 = *param_1;
  FUN_180488c60();
  FUN_180489c50("Enabled",lVar1 + 0xde4,lVar1 + 0xde0,0,1);
  local_10 = 5;
  local_18 = &PTR_DAT_1807b7c88;
  FUN_18048dbc0(&local_18,lVar1 + 0xdf4);
  FUN_180488f10();
  return;
}



