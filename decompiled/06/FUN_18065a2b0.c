// FUN_18065a2b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18065a2b0 */

void FUN_18065a2b0(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  
  uVar1 = param_2 + 0x50U & 0xffffffffffffffe0;
  if ((*(uint *)(uVar1 + 400) & 1) != 0) {
    *(uint *)(uVar1 + 400) = *(uint *)(uVar1 + 400) & 0xfffffffe;
    thunk_FUN_18015c010(uVar1 + 0x1a0);
  }
  return;
}



