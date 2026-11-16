// FUN_1803b27a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803b27a0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803b27a0(void)

{
  longlong *plVar1;
  ULONGLONG UVar2;
  longlong *plVar3;
  undefined8 **ppuVar4;
  undefined1 auStack_668 [32];
  undefined **local_648;
  char *local_640;
  undefined8 *local_638;
  undefined8 *local_630;
  undefined8 *local_628;
  undefined8 *local_620;
  char local_618 [1536];
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_668;
  if (DAT_180c6e529 != '\0') {
  }
  UVar2 = GetTickCount64();
  if (UVar2 < DAT_180c6e530) {
  }
  DAT_180c6e530 = UVar2 + 1000;
  FUN_1803becd0();
  local_630 = &DAT_180b90838;
  plVar3 = &DAT_180b90820;
  local_638 = &DAT_180b90820;
  local_628 = &DAT_180b90850;
  ppuVar4 = &local_638;
  while( true ) {
    plVar1 = plVar3 + 3;
    for (; plVar3 != plVar1; plVar3 = plVar3 + 1) {
      if (*plVar3 == 0) {
        DAT_180c6e529 = 0;
        FUN_18063ab10(local_618,0,0x600);
        FUN_18015ad60(local_618,0x600,0xffffffffffffffff,
                      "step=fonts reason=incomplete retry_ms=1000");
        local_648 = &PTR_180700558;
        if (local_618[0] != '\0') {
          local_648 = (undefined **)&DAT_1806bcfc0;
        }
        local_640 = local_618;
        FUN_1800f6900(3);
      }
    }
    ppuVar4 = ppuVar4 + 1;
    if (ppuVar4 == &local_620) break;
    plVar3 = *ppuVar4;
  }
  DAT_180c6e529 = 1;
}



