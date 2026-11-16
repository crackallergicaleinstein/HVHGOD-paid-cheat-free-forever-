// FUN_1800aa120 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800aa120 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800aa120(char *param_1)

{
  char *pcVar1;
  undefined1 auStack_648 [32];
  undefined **local_628;
  char *local_620;
  char local_618 [1536];
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_648;
  pcVar1 = "unknown";
  if (param_1 != (char *)0x0) {
    pcVar1 = param_1;
  }
  local_628 = (undefined **)pcVar1;
  FUN_18015ad60(s_not_started_1808d7cf0,0xa0,0xffffffffffffffff,&DAT_1806bbe98);
  FUN_18063ab10(local_618,0,0x600);
  local_628 = (undefined **)pcVar1;
  FUN_18015ad60(local_618,0x600,0xffffffffffffffff,"detail=\"%s\"");
  local_628 = &PTR_180700558;
  if (local_618[0] != '\0') {
    local_628 = (undefined **)&DAT_1806bcfc0;
  }
  local_620 = local_618;
  FUN_1800f6900(0);
}



