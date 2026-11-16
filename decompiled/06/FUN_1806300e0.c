// FUN_1806300e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806300e0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1806300e0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStackY_138 [32];
  undefined1 local_108 [240];
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStackY_138;
  lVar2 = FUN_18061f698();
  iVar1 = FUN_1806218d4(param_1,(-(uint)(*(int *)(lVar2 + 0xb0) != 0) & 0xfffff002) + 0x1001,
                        local_108);
  if (iVar1 == 0) {
    *(undefined4 *)(lVar2 + 0xa8) = 0;
  }
  else {
    iVar1 = FUN_180615da0(*(undefined8 *)(lVar2 + 0x98),local_108);
    if (iVar1 == 0) {
      lVar3 = -1;
      do {
        lVar3 = lVar3 + 1;
      } while (*(short *)(param_1 + lVar3 * 2) != 0);
      iVar1 = FUN_18062f9c0();
      if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      *(uint *)(lVar2 + 0xa8) = *(uint *)(lVar2 + 0xa8) | 4;
    }
  }
}



