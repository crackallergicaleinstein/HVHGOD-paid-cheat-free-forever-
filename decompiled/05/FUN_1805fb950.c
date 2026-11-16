// FUN_1805fb950 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805fb950 */

/* Library Function - Single Match
    __std_fs_open_handle
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

DWORD __std_fs_open_handle(undefined8 *param_1,LPCWSTR param_2,DWORD param_3,DWORD param_4)

{
  DWORD DVar1;
  HANDLE pvVar2;
  
  DVar1 = 0;
  pvVar2 = CreateFileW(param_2,param_3,7,(LPSECURITY_ATTRIBUTES)0x0,3,param_4,(HANDLE)0x0);
  *param_1 = pvVar2;
  if (pvVar2 == (HANDLE)0xffffffffffffffff) {
    DVar1 = GetLastError();
  }
  return DVar1;
}



