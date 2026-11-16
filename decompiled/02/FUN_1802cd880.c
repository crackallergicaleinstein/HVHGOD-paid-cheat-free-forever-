// FUN_1802cd880 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802cd880 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001802cd8e2) */

void FUN_1802cd880(undefined8 param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  ULONGLONG UVar2;
  undefined4 *puVar3;
  undefined1 auStack_658 [32];
  undefined **local_638;
  char *local_630;
  char local_618 [1536];
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_658;
  puVar1 = (undefined4 *)FUN_1802e96a0();
  puVar3 = &DAT_180b92f80;
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = puVar1;
  }
  if ((*(char *)(puVar3 + 1) == '\0') && (UVar2 = GetTickCount64(), DAT_180c6ebb0 <= UVar2)) {
    DAT_180c6ebb0 = UVar2 + 2000;
    LOCK();
    UNLOCK();
    FUN_18063ab10(local_618,0,0x600);
    local_630 = (char *)CONCAT44(local_630._4_4_,*puVar3);
    local_638 = (undefined **)param_2;
    FUN_18015ad60(local_618,0x600,0xffffffffffffffff,
                  "family=%s remaining=%d action=retain_complete_frame stale_limit_ms=150");
    local_638 = &PTR_180700558;
    if (local_618[0] != '\0') {
      local_638 = (undefined **)&DAT_1806bcfc0;
    }
    local_630 = local_618;
    FUN_1800f6900(0);
  }
}



