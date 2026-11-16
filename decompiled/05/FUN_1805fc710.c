// FUN_1805fc710 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805fc710 */

/* Library Function - Single Match
    int __cdecl Concurrency::details::_Reschedule_chore(struct
   Concurrency::details::_Threadpool_chore const * __ptr64)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl Concurrency::details::_Reschedule_chore(_Threadpool_chore *param_1)

{
  int iVar1;
  HMODULE local_res8 [4];
  
  iVar1 = Get_STL_host_status();
  if (iVar1 != 0) {
    GetModuleHandleExW(4,*(LPCWSTR *)(param_1 + 8),local_res8);
  }
  SubmitThreadpoolWork(*(PTP_WORK *)param_1);
  return 0;
}



