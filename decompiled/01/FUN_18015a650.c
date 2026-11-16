// FUN_18015a650 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18015a650 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18015a650(undefined8 *param_1)

{
  code *pcVar1;
  int *piVar2;
  undefined1 auStack_38 [32];
  undefined8 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_1808d5f00 ^ (ulonglong)auStack_38;
  piVar2 = (int *)FUN_18060fe00();
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  *piVar2 = 0;
  FUN_18060f9f0(param_1,&local_18,10);
  if (param_1 == local_18) {
    FUN_1805fa894("invalid stoi argument");
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (*piVar2 == 0x22) {
                    /* WARNING: Subroutine does not return */
    FUN_1805fa8dc("stoi argument out of range");
  }
}



