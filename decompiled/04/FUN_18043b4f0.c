// FUN_18043b4f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18043b4f0 */

void FUN_18043b4f0(undefined4 param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_180439770();
  lVar2 = 0;
  if (*(longlong *)(lVar1 + 0x478) != *(longlong *)(lVar1 + 0x480)) {
    lVar2 = *(longlong *)(lVar1 + 0x480) + -0x78;
  }
  if (lVar2 != 0) {
    *(undefined4 *)(lVar2 + 0x30) = param_1;
    *(undefined4 *)(lVar2 + 0x34) = param_2;
    *(undefined4 *)(lVar2 + 0x38) = 0;
  }
  return;
}



