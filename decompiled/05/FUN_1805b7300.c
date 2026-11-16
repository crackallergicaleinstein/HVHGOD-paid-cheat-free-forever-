// FUN_1805b7300 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805b7300 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805b7300(longlong param_1,ulonglong param_2)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38 [3];
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_78;
  local_40 = *(undefined8 *)(param_1 + 0x4928);
  local_20 = 1;
  local_48 = param_2;
  if (*(char *)(param_1 + 0x28) == '\0') {
    FUN_1805b7260(param_1,*(undefined4 *)(param_1 + 0x4930),*(undefined4 *)(param_1 + 0x4934));
  }
  local_58 = local_48._4_4_;
  FUN_1805b6fa0(param_1,param_1 + 0x10,local_38,param_2 & 0xffffffff);
  (*(code *)**(undefined8 **)(param_1 + 8))(*(undefined8 **)(param_1 + 8),&local_40);
  *(undefined8 *)(param_1 + 0x4928) = local_38[0];
  *(ulonglong *)(param_1 + 0x4910) = param_2;
}



