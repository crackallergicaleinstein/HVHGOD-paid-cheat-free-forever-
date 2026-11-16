// FUN_180621ee0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180621ee0 */

bool FUN_180621ee0(void)

{
  BOOL BVar1;
  DWORD local_res8 [8];
  
  local_res8[0] = 0;
  BVar1 = VirtualProtect(&DAT_180d06000,0x100,2,local_res8);
  return BVar1 != 0;
}



