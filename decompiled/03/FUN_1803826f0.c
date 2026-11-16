// FUN_1803826f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803826f0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803826f0(undefined4 param_1,undefined8 param_2,undefined8 param_3,char *param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined1 auStack_668 [32];
  undefined **local_648;
  char *local_640;
  undefined4 local_638;
  char local_628 [1536];
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_668;
  FUN_18063ab10(local_628,0,0x600);
  if ((param_4 != (char *)0x0) && (*param_4 != '\0')) {
    local_638 = param_7;
    local_640 = (char *)CONCAT44(local_640._4_4_,param_6);
    local_648 = (undefined **)CONCAT44(local_648._4_4_,param_5);
    FUN_18015ad60(local_628,0x600,0xffffffffffffffff,param_4);
  }
  local_648 = &PTR_180700558;
  if (local_628[0] != '\0') {
    local_648 = (undefined **)&DAT_1806bcfc0;
  }
  local_640 = local_628;
  FUN_1800f6900(param_1);
}



