// FUN_18061b090 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18061b090 */

longlong FUN_18061b090(void)

{
  longlong lVar1;
  longlong local_res8 [4];
  
  lVar1 = FUN_18061f698();
  local_res8[0] = *(longlong *)(lVar1 + 0x90);
  __acrt_update_locale_info(lVar1,local_res8);
  return local_res8[0] + 0x128;
}



