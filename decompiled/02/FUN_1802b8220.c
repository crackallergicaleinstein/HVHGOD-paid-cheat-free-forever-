// FUN_1802b8220 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802b8220 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802b8220(undefined8 *param_1,uint param_2,undefined8 param_3)

{
  uint uVar1;
  bool bVar2;
  undefined1 auStack_658 [32];
  undefined **local_638;
  char *local_630;
  undefined8 local_628;
  char local_618 [1536];
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_658;
  uVar1 = DAT_180c6e6dc;
  do {
    LOCK();
    bVar2 = uVar1 == DAT_180c6e6dc;
    if (bVar2) {
      DAT_180c6e6dc = uVar1 | param_2;
    }
    else {
      uVar1 = DAT_180c6e6dc;
    }
    UNLOCK();
  } while (!bVar2);
  if ((uVar1 & param_2) == 0) {
    FUN_18063ab10(local_618,0,0x600);
    local_628 = *(undefined8 *)param_1[1];
    local_630 = *(char **)*param_1;
    local_638 = (undefined **)param_3;
    FUN_18015ad60(local_618,0x600,0xffffffffffffffff,"stage=%s view=0x%llX pawn=0x%llX");
    local_638 = &PTR_180700558;
    if (local_618[0] != '\0') {
      local_638 = (undefined **)&DAT_1806bcfc0;
    }
    local_630 = local_618;
    FUN_1800f6900(2);
  }
}



