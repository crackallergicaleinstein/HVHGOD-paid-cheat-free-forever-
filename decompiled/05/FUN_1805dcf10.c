// FUN_1805dcf10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805dcf10 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805dcf10(int *param_1,ulonglong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_68;
  if (param_2 < 4) {
LAB_1805dcfba:
    lVar2 = FUN_1805dd010(local_48,param_1,param_2,0);
    if (lVar2 == 0) {
    }
  }
  iVar1 = *param_1;
  if (iVar1 != -0x2d04adb) {
    if (1 < iVar1 + 0x2d04adaU) goto LAB_1805dcfba;
    if (iVar1 != -0x2d04adb) {
      if (iVar1 == -0x2d04ada) {
        FUN_1805f1260(local_48);
      }
      if (iVar1 == -0x2d04ad9) {
        FUN_1805f46d0(local_48);
      }
    }
  }
  FUN_1805edcf0(local_48);
}



