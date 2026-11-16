// FUN_1805fc6ac - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805fc6ac */

/* Library Function - Multiple Matches With Same Base Name
    enum Concurrency::details::A0x3c117d76::_STL_host_status __cdecl
   Concurrency::details::`anonymous namespace'::_Get_STL_host_status(void)
    enum Concurrency::details::A0xb23c4834::_STL_host_status __cdecl
   Concurrency::details::`anonymous namespace'::_Get_STL_host_status(void)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined1 Get_STL_host_status(void)

{
  BOOL BVar1;
  undefined1 uVar2;
  IMAGE_DOS_HEADER *local_res8 [4];
  
  BVar1 = GetModuleHandleExW(2,(LPCWSTR)0x0,(HMODULE *)local_res8);
  if ((BVar1 == 0) || (local_res8[0] == (IMAGE_DOS_HEADER *)0x0)) {
    uVar2 = 2;
  }
  else {
    uVar2 = local_res8[0] != &switchD_180442a42::caseD_4;
  }
  return uVar2;
}



