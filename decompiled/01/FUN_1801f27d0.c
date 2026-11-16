// FUN_1801f27d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801f27d0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801f27d0(void)

{
  undefined4 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined1 auStack_648 [32];
  undefined **local_628;
  char *local_620;
  char local_618 [1536];
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_648;
  FUN_18063ab10(local_618,0,0x600);
  local_620 = (char *)in_stack_00000030;
  local_628 = (undefined **)CONCAT44(local_628._4_4_,in_stack_00000028);
  FUN_18015ad60(local_618,0x600,0xffffffffffffffff,"team=%d missing=%s fallback=native_agent");
  local_628 = &PTR_180700558;
  if (local_618[0] != '\0') {
    local_628 = (undefined **)&DAT_1806bcfc0;
  }
  local_620 = local_618;
  FUN_1800f6900(1);
}



