// FUN_18049f290 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18049f290 */

void FUN_18049f290(longlong *param_1)

{
  longlong lVar1;
  longlong local_res8;
  undefined1 uVar2;
  undefined **local_18;
  undefined8 local_10;
  
  local_res8 = *param_1;
  FUN_180488c60();
  FUN_18049f340(&local_res8);
  FUN_180488f10();
  lVar1 = *param_1;
  FUN_180488c60();
  uVar2 = 1;
  FUN_180489c50("Enabled",lVar1 + 0xda4,lVar1 + 0xda0,0,1);
  FUN_180489fc0("Bomb Defused",lVar1 + 0xdbc,1,0,uVar2,1);
  local_10 = 7;
  local_18 = &PTR_DAT_1807b7d30;
  FUN_18048dbc0(&local_18,lVar1 + 0xdb4);
  FUN_180488f10();
  return;
}



