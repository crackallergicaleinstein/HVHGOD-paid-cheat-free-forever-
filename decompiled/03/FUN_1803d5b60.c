// FUN_1803d5b60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803d5b60 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1803d5b60(void)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_648 [32];
  undefined **local_628;
  char *local_620;
  char local_618 [1536];
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_648;
  iVar2 = FUN_1805f68d0(&DAT_180cc9b08);
  lVar1 = DAT_180cc9a70;
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_180cc9b54 == 0x7fffffff) {
    DAT_180cc9b54 = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  if (DAT_180cc9a08 != DAT_180cc9a10) {
    DAT_180cc9a10 = DAT_180cc9a08;
  }
  if (DAT_180cc99f0 != DAT_180cc99f8) {
    DAT_180cc99f8 = DAT_180cc99f0;
  }
  if (DAT_180cc9a90 != DAT_180cc9a98) {
    DAT_180cc9a98 = DAT_180cc9a90;
  }
  if (DAT_180cc9aa8 != DAT_180cc9ab0) {
    DAT_180cc9ab0 = DAT_180cc9aa8;
  }
  if (DAT_180cc9ac0 != DAT_180cc9ac8) {
    DAT_180cc9ac8 = DAT_180cc9ac0;
  }
  lVar3 = DAT_180cc9a68;
  if (DAT_180cc9a68 != DAT_180cc9a70) {
    do {
      FUN_1801b36e0(lVar3 + 0x10);
      lVar3 = lVar3 + 0xb8;
    } while (lVar3 != lVar1);
    DAT_180cc9a70 = DAT_180cc9a68;
  }
  _DAT_180cc9bad = 0;
  DAT_180cc9bac = 0;
  DAT_180cc9b88 = 0;
  DAT_180cc9b80 = 0;
  _DAT_180cc9b78 = 0;
  FUN_1805f68fc(&DAT_180cc9b08);
  if (DAT_180b0d7e0 != '\0') {
    DAT_180b8fad8 = 0;
    DAT_180b8fab0 = 1;
    LOCK();
    DAT_180b8fab1 = 0;
    UNLOCK();
    DAT_180b8fac8 = 0;
    LOCK();
    DAT_180b8fad0 = 0;
    UNLOCK();
    FUN_18063ab10(local_618,0,0x600);
    FUN_18015ad60(local_618,0x600,0xffffffffffffffff,"dispatch=deferred network_updates_required=2")
    ;
    local_628 = &PTR_180700558;
    if (local_618[0] != '\0') {
      local_628 = (undefined **)&DAT_1806bcfc0;
    }
    local_620 = local_618;
    FUN_1800f6900(0);
  }
  FUN_180285200();
}



