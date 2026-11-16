// FUN_18061bb6c - decompiled reference (Ghidra). Not original source, does not compile.

/* 18061bb6c */

/* Library Function - Single Match
    __pctype_func
   
   Library: Visual Studio 2019 Release */

ushort * __cdecl __pctype_func(void)

{
  longlong lVar1;
  undefined8 *local_res8 [4];
  
  lVar1 = FUN_18061f698();
  local_res8[0] = *(undefined8 **)(lVar1 + 0x90);
  __acrt_update_locale_info(lVar1,local_res8);
  return (ushort *)*local_res8[0];
}



