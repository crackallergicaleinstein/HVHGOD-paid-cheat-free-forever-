// FUN_1800e5f30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800e5f30 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800e5f30(undefined4 param_1,undefined8 param_2,undefined8 param_3,char *param_4,
                  undefined8 param_5)

{
  undefined1 auStack_668 [32];
  undefined **local_648;
  char *local_640;
  char local_638 [1536];
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_668;
  FUN_18063ab10(local_638,0,0x600);
  if ((param_4 != (char *)0x0) && (*param_4 != '\0')) {
    local_648 = (undefined **)param_5;
    FUN_18015ad60(local_638,0x600,0xffffffffffffffff,param_4);
  }
  local_648 = &PTR_180700558;
  if (local_638[0] != '\0') {
    local_648 = (undefined **)&DAT_1806bcfc0;
  }
  local_640 = local_638;
  FUN_1800f6900(param_1);
}



