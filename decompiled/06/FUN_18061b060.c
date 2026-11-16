// FUN_18061b060 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18061b060 */

/* Library Function - Single Match
    ___lc_codepage_func
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

UINT __cdecl ___lc_codepage_func(void)

{
  longlong lVar1;
  longlong local_res8 [4];
  
  lVar1 = FUN_18061f698();
  local_res8[0] = *(longlong *)(lVar1 + 0x90);
  __acrt_update_locale_info(lVar1,local_res8);
  return *(UINT *)(local_res8[0] + 0xc);
}



