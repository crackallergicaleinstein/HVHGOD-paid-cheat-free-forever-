// FUN_1805fc790 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805fc790 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1805fc790(PTP_CALLBACK_INSTANCE param_1,longlong param_2)

{
  int iVar1;
  BOOL BVar2;
  longlong lVar3;
  HMODULE local_res20;
  
  iVar1 = Get_STL_host_status();
  if (iVar1 != 1) {
    iVar1 = FUN_1805f68d0(&DAT_1808d6030);
    if (iVar1 != 0) goto LAB_1805fc898;
    if (DAT_1808d607c == 0x7fffffff) goto LAB_1805fc883;
    DAT_180bb1908 = DAT_180bb1908 + 1;
    FUN_1805f68fc(&DAT_1808d6030);
  }
  iVar1 = Get_STL_host_status();
  if (iVar1 != 0) {
    BVar2 = GetModuleHandleExW(6,*(LPCWSTR *)(param_2 + 8),&local_res20);
    if ((BVar2 != 0) && (local_res20 != (HMODULE)0x0)) {
      FreeLibraryWhenCallbackReturns(param_1,local_res20);
    }
  }
  (**(code **)(param_2 + 8))(*(undefined8 *)(param_2 + 0x10));
  iVar1 = Get_STL_host_status();
  if (iVar1 != 1) {
    iVar1 = FUN_1805f68d0(&DAT_1808d6030);
    if (iVar1 != 0) {
LAB_1805fc898:
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1808d607c == 0x7fffffff) {
LAB_1805fc883:
      DAT_1808d607c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    lVar3 = DAT_180bb1908 + -1;
    DAT_180bb1908 = lVar3;
    FUN_1805f68fc(&DAT_1808d6030);
    if (lVar3 == 0) {
      FUN_1805f6a54(&DAT_180bb1910);
    }
  }
  return;
}



