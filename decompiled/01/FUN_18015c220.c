// FUN_18015c220 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18015c220 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18015c220(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  undefined4 uStack_34;
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_58;
  if (7 < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  uVar1 = FUN_1805fb620(param_1,local_38,9,0xffffffff);
  *param_2 = CONCAT44(uStack_34,uVar1);
  param_2[1] = &PTR_vftable_1808d7db8;
}



