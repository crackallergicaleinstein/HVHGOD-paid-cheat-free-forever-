// FUN_18041bd90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18041bd90 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18041bd90(void)

{
  undefined **ppuVar1;
  undefined1 auStack_648 [32];
  undefined **local_628;
  char *local_620;
  char local_618 [1536];
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_648;
  if (DAT_180c7dcf0 != 0) {
    FUN_18063ab10(local_618,0,0x600);
    FUN_18015ad60(local_618,0x600,0xffffffffffffffff,"state=detaching");
    local_620 = local_618;
    ppuVar1 = &PTR_180700558;
    local_628 = &PTR_180700558;
    if (local_618[0] != '\0') {
      local_628 = (undefined **)&DAT_1806bcfc0;
    }
    FUN_1800f6900(1);
    FUN_18063ab10(local_618,0,0x600);
    FUN_18015ad60(local_618,0x600,0xffffffffffffffff,"state=detaching");
    local_620 = local_618;
    if (local_618[0] != '\0') {
      ppuVar1 = (undefined **)&DAT_1806bcfc0;
    }
    local_628 = ppuVar1;
    FUN_1800f6900(1);
    FUN_1800a9e50(1,"diagnostics shutting down");
  }
  FUN_18041b730();
  DAT_180c7dcf0 = 0;
}



