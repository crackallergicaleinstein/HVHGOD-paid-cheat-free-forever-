// FUN_1805e46a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805e46a0 */

void FUN_1805e46a0(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x74c0);
  if ((param_2 != lVar1) && (param_3 != 0)) {
    lVar2 = *(longlong *)(param_1 + 0x74c8);
    *(longlong *)(param_1 + 0x74d8) = lVar1;
    *(longlong *)(param_1 + 0x74c8) = param_2;
    *(longlong *)(param_1 + 0x74d0) = (lVar2 - lVar1) + param_2;
    *(longlong *)(param_1 + 0x74c0) = param_2;
  }
  return;
}



