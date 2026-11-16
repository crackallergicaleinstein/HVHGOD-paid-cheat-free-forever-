// FUN_180179f90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180179f90 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180179f90(undefined1 (*param_1) [16],undefined8 param_2,longlong param_3)

{
  undefined8 unaff_retaddr;
  undefined1 auStack_68 [48];
  undefined1 auStack_38 [16];
  undefined8 uStack_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_68;
  auStack_38 = (undefined1  [16])0x0;
  uStack_28 = 0;
  *(undefined1 *)(param_3 + 0x30) = 1;
  *(undefined8 *)(param_3 + 0x38) = unaff_retaddr;
  local_20 = param_3;
  if ((undefined1 *)(param_3 + 0x40) != auStack_38) {
    FUN_1801780e0((undefined1 *)(param_3 + 0x40),0,0);
  }
  FUN_1800f0160(auStack_38);
  *param_1 = (undefined1  [16])0x0;
  FUN_18017ade0(param_1,param_2,param_3);
  FUN_1801646b0(param_3);
}



