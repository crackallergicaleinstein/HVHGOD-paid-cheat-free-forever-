// FUN_18041d5d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18041d5d0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18041d5d0(short *param_1,undefined1 param_2)

{
  DWORD DVar1;
  ULONGLONG UVar2;
  longlong lVar3;
  undefined1 auStack_858 [32];
  short *local_838;
  ULONGLONG local_830;
  undefined1 local_818 [2048];
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_858;
  UVar2 = GetTickCount64();
  DVar1 = GetCurrentProcessId();
  local_838 = (short *)CONCAT44(local_838._4_4_,DVar1);
  local_830 = UVar2;
  FUN_18015ad60(s_uninitialized_1808d7d90,0x28,0xffffffffffffffff,"%08lX-%016llX");
  if (((param_1 != (short *)0x0) && (*param_1 == 0x5a4d)) &&
     (*(int *)((longlong)*(int *)(param_1 + 0x1e) + (longlong)param_1) == 0x4550)) {
    DAT_180c7d8c0 =
         (ulonglong)*(uint *)((longlong)*(int *)(param_1 + 0x1e) + 0x50 + (longlong)param_1) +
         (longlong)param_1;
  }
  DAT_180c7dce8 = param_1;
  FUN_18041b7b0(param_2);
  DAT_180c7dcf0 = DAT_180bb2750;
  FUN_1806160a0(&DAT_180c7dae0,0x104,&DAT_180bb2760);
  FUN_1806160a0(&DAT_180c7d8d0,0x104,&DAT_180bb2968);
  lVar3 = 0;
  if (DAT_180c7d8c0 != 0) {
    lVar3 = DAT_180c7d8c0 - (longlong)param_1;
  }
  FUN_18063ab10(local_818,0,0x800);
  local_838 = param_1;
  local_830 = lVar3;
  FUN_18015ad60(local_818,0x800,0xffffffffffffffff,
                "diagnostics initialized; module=0x%p size=0x%llX");
  FUN_1800a9e50(1,local_818);
  local_838 = (short *)s_uninitialized_1808d7d90;
  FUN_180420440();
  local_838 = (short *)s_uninitialized_1808d7d90;
  FUN_180420440();
  FUN_1800aa120("stage: dll attach");
  FUN_1800aa120("build: development diagnostics");
}



