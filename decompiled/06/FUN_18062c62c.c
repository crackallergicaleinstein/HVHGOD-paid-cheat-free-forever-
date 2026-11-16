// FUN_18062c62c - decompiled reference (Ghidra). Not original source, does not compile.

/* 18062c62c */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18062c62c(undefined8 param_1,int param_2,undefined8 param_3,uint param_4,longlong *param_5)

{
  int iVar1;
  DWORD DVar2;
  longlong lVar3;
  undefined1 auStackY_108 [32];
  undefined4 local_d8 [4];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStackY_108;
  *param_5 = 0;
  if (param_2 == 1) {
    iVar1 = FUN_18062c4b0(param_1,param_3,param_4,local_c8);
    if (iVar1 != 0) {
      lVar3 = _calloc_base((longlong)iVar1,1);
      *param_5 = lVar3;
      FUN_180621380(0);
      if (*param_5 == 0) {
      }
      iVar1 = FUN_1806157a0();
      if (iVar1 == 0) {
      }
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    DVar2 = GetLastError();
    if (DVar2 != 0x7a) {
    }
    iVar1 = FUN_18062c4b0(param_1,param_3,param_4,0);
    if (iVar1 == 0) {
    }
    lVar3 = _calloc_base((longlong)iVar1,1);
    if (lVar3 == 0) goto LAB_18062c73d;
    iVar1 = FUN_18062c4b0(param_1,param_3,param_4,lVar3);
  }
  else {
    if (param_2 != 2) {
      if (param_2 != 0) {
      }
      local_d8[0] = 0;
      iVar1 = FUN_1806218d4(param_3,param_4 | 0x20000000,local_d8,2);
      if (iVar1 == 0) {
      }
      *(undefined1 *)param_5 = (undefined1)local_d8[0];
    }
    iVar1 = FUN_1806218d4(param_3,param_4,0,0);
    if (iVar1 == 0) {
    }
    lVar3 = _calloc_base((longlong)iVar1,2);
    if (lVar3 == 0) goto LAB_18062c73d;
    iVar1 = FUN_1806218d4(param_3,param_4,lVar3,iVar1);
  }
  if (iVar1 != 0) {
    *param_5 = lVar3;
    lVar3 = 0;
  }
LAB_18062c73d:
  FUN_180621380(lVar3);
}



