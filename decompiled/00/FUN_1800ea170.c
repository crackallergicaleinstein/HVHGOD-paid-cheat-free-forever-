// FUN_1800ea170 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800ea170 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800ea170(undefined4 param_1,undefined8 param_2,undefined8 param_3,char *param_4,
                  undefined4 param_5)

{
  undefined1 auStack_658 [32];
  undefined **local_638;
  char *local_630;
  char local_628 [1536];
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_658;
  FUN_18063ab10(local_628,0,0x600);
  if ((param_4 != (char *)0x0) && (*param_4 != '\0')) {
    local_638 = (undefined **)CONCAT44(local_638._4_4_,param_5);
    FUN_18015ad60(local_628,0x600,0xffffffffffffffff,param_4);
  }
  local_638 = &PTR_180700558;
  if (local_628[0] != '\0') {
    local_638 = (undefined **)&DAT_1806bcfc0;
  }
  local_630 = local_628;
  FUN_1800f6900(param_1);
}



