// FUN_180496990 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180496990 */

void FUN_180496990(longlong *param_1)

{
  longlong lVar1;
  longlong local_res8;
  
  lVar1 = *param_1;
  FUN_180488c60();
  FUN_1804898a0("Smoke Check",lVar1 + 0x49,0,1,0,0);
  FUN_1804898a0("Flash Check",lVar1 + 0x4a,0,1,0,0);
  FUN_1804898a0("Auto Wall",lVar1 + 0x4b,0,1,0,0);
  FUN_1804898a0("Lethal Only",lVar1 + 0x4c,0,1,0,0);
  FUN_180488f10();
  local_res8 = *param_1;
  FUN_180488c60();
  FUN_180496a60(&local_res8);
  FUN_180488f10();
  return;
}



