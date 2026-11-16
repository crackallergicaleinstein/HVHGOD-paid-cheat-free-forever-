// FUN_180644240 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180644240 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180644240(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((*(char *)(param_2 + 0x20) == '\0') && (lVar3 = *(longlong *)(param_2 + 0x28), lVar3 != 0)) {
    pcVar1 = *(code **)(param_2 + 0x30);
    lVar2 = *(longlong *)(param_2 + 0x50);
    do {
      (*pcVar1)(lVar3 * 0x150 + -0x150 + lVar2);
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    *(undefined8 *)(param_2 + 0x28) = 0;
  }
  return;
}



