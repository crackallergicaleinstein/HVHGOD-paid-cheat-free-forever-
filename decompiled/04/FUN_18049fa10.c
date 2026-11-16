// FUN_18049fa10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18049fa10 */

void FUN_18049fa10(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  FUN_180488c60();
  FUN_180489c50("Crosshair",lVar1 + 0xf0c,lVar1 + 0xf08,0,1);
  FUN_180489c50("World",lVar1 + 0xf20,lVar1 + 0xf1c,0,1);
  FUN_180489c50("Damage",lVar1 + 0xf34,lVar1 + 0xf30,0,1);
  FUN_180488f10();
  lVar1 = *param_1;
  FUN_180488c60();
  FUN_18048a250("Duration",lVar1 + 0xf44,0x41200000,0x43480000,&DAT_180829c34,0x3f800000,1,0);
  FUN_180488f10();
  return;
}



