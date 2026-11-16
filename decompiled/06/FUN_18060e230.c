// FUN_18060e230 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18060e230 */

void FUN_18060e230(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_18060a6e8();
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(lVar1 + 0x90);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(lVar1 + 0x88);
  FUN_180621250(lVar1,(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 8));
  FUN_1806212bc(lVar1,param_1 + 0x20,*(undefined8 *)(param_1 + 8));
  if ((*(uint *)(lVar1 + 0x3a8) & 2) == 0) {
    *(uint *)(lVar1 + 0x3a8) = *(uint *)(lVar1 + 0x3a8) | 2;
    *(undefined1 *)(param_1 + 0x28) = 2;
  }
  return;
}



