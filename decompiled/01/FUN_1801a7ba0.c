// FUN_1801a7ba0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801a7ba0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801a7ba0(void)

{
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined1 auStack_658 [32];
  undefined **local_638;
  char *local_630;
  undefined4 local_628;
  char local_618 [1536];
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_658;
  FUN_18063ab10(local_618,0,0x600);
  local_628 = in_stack_00000038;
  local_630 = (char *)in_stack_00000030;
  local_638 = (undefined **)in_stack_00000028;
  FUN_18015ad60(local_618,0x600,0xffffffffffffffff,"peer=%llu bytes=%llu session=%d");
  local_638 = &PTR_180700558;
  if (local_618[0] != '\0') {
    local_638 = (undefined **)&DAT_1806bcfc0;
  }
  local_630 = local_618;
  FUN_1800f6900(0);
}



