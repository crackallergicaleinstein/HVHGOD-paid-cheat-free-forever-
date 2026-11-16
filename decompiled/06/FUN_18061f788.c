// FUN_18061f788 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18061f788 */

PVOID FUN_18061f788(undefined8 param_1,longlong param_2)

{
  PVOID pvVar1;
  PVOID pvVar2;
  
  pvVar2 = (PVOID)0x0;
  if (DAT_1808d72d0 == 0xffffffff) {
    pvVar1 = (PVOID)0x0;
  }
  else {
    pvVar1 = FlsGetValue(DAT_1808d72d0);
  }
  if (pvVar1 != (PVOID)0xffffffffffffffff) {
    if ((pvVar1 == (PVOID)0x0) && (pvVar1 = (PVOID)FUN_18061f528(), pvVar1 == (PVOID)0x0)) {
      return (PVOID)0x0;
    }
    pvVar2 = (PVOID)(param_2 * 0x3c8 + (longlong)pvVar1);
  }
  return pvVar2;
}



