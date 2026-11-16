// FUN_18049f200 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18049f200 */

void FUN_18049f200(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  FUN_180488c60();
  FUN_1804898a0("Sniper Crosshair",lVar1 + 0xd47,0,1,0,0);
  FUN_180489c50("Penetration Crosshair",lVar1 + 0xd4c,lVar1 + 0xd48,0,1);
  FUN_1804898a0("Recoil Crosshair",lVar1 + 0xd5c,0,1,0,0);
  FUN_180488f10();
  return;
}



