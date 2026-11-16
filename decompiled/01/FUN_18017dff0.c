// FUN_18017dff0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18017dff0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18017dff0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  if (7 < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  iVar1 = FUN_1805fb620(param_2,&local_38,0x21,0xffffffff);
  uVar2 = 0x8000000000000000;
  if (iVar1 == 0) {
    uVar2 = CONCAT44(uStack_34,local_38);
  }
  *param_1 = uVar2;
  *param_3 = CONCAT44(uStack_34,iVar1);
  param_3[1] = &PTR_vftable_1808d7db8;
}



