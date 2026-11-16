// FUN_180174dc0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180174dc0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180174dc0(longlong *param_1)

{
  int iVar1;
  DWORD DVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68 [2];
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_88;
  if ((*param_1 != 0) && (((char)param_1[1] == '\0' || (*(char *)(*param_1 + 0xf8) == '\0')))) {
    local_68[0] = 2000;
    iVar1 = FUN_180175100(param_1,local_68);
    if (iVar1 != 0) {
    }
    FUN_180176500(param_1,local_58);
    FUN_18015c010(local_38);
    FUN_18015c010(local_58);
  }
  iVar1 = FUN_1805f68d0(&DAT_1808da690);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_1808da6dc == 0x7fffffff) {
    DAT_1808da6dc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  if ((DAT_180bbe8c0 != (HANDLE)0x0) &&
     (DVar2 = WaitForSingleObject(DAT_180bbe8c0,2000), DVar2 == 0)) {
    CloseHandle(DAT_180bbe8c0);
    DAT_180bbe8c0 = (HANDLE)0x0;
  }
  FUN_1805f68fc(&DAT_1808da690);
}



