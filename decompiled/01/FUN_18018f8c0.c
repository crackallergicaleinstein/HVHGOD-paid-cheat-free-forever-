// FUN_18018f8c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18018f8c0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18018f8c0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  ULONGLONG UVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_1808d5f00 ^ (ulonglong)auStack_38;
  iVar2 = FUN_1805f68d0();
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (*(int *)(param_1 + 0x4c) == 0x7fffffff) {
    *(undefined4 *)(param_1 + 0x4c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  if ((((*(char *)(param_1 + 0x4e8) == '\0') && (lVar1 = *(longlong *)(param_1 + 0x228), lVar1 != 0)
       ) && (UVar3 = GetTickCount64(), *(char *)(param_1 + 0x50) != '\0')) &&
     (((param_2 != *(longlong *)(*(longlong *)(param_1 + 0x228) + 0x88) &&
       (local_18 = param_2, param_2 != 0)) && (UVar3 < *(ulonglong *)(lVar1 + 0x40))))) {
    FUN_1801acc90(lVar1,&local_18);
  }
  FUN_1805f68fc(param_1);
}



