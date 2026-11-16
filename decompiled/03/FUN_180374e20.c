// FUN_180374e20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180374e20 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180374e20(undefined8 param_1)

{
  char cVar1;
  undefined1 auStack_648 [32];
  undefined **local_628;
  char *local_620;
  char local_618 [1536];
  ulonglong local_18;
  
  cVar1 = DAT_180c6fac4;
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_648;
  LOCK();
  DAT_180c6fac4 = 1;
  UNLOCK();
  if (cVar1 == '\0') {
    FUN_18063ab10(local_618,0,0x600);
    local_628 = (undefined **)param_1;
    FUN_18015ad60(local_618,0x600,0xffffffffffffffff,"operation=%s action=disabled");
    local_628 = &PTR_180700558;
    if (local_618[0] != '\0') {
      local_628 = (undefined **)&DAT_1806bcfc0;
    }
    local_620 = local_618;
    FUN_1800f6900(2);
  }
}



