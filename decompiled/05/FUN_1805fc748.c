// FUN_1805fc748 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805fc748 */

/* Library Function - Single Match
    int __cdecl Concurrency::details::_Schedule_chore(struct Concurrency::details::_Threadpool_chore
   * __ptr64)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl Concurrency::details::_Schedule_chore(_Threadpool_chore *param_1)

{
  int iVar1;
  DWORD DVar2;
  PTP_WORK p_Var3;
  
  p_Var3 = CreateThreadpoolWork(FUN_1805fc790,param_1,(PTP_CALLBACK_ENVIRON)0x0);
  *(PTP_WORK *)param_1 = p_Var3;
  if (p_Var3 == (PTP_WORK)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001805fc77e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    DVar2 = GetLastError();
    return DVar2;
  }
  iVar1 = _Reschedule_chore(param_1);
  return iVar1;
}



