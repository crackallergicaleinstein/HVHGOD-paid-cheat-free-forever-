// FUN_1804ce5f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804ce5f0 */

void FUN_1804ce5f0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x1478);
  plVar1 = plVar2 + *(int *)(param_1 + 0x1470);
  for (; plVar2 != plVar1; plVar2 = plVar2 + 1) {
    *(undefined4 *)(*plVar2 + 0x2c4) = 0xffffffff;
  }
  FUN_1804aeee0(param_1 + 0x27a0);
  return;
}



