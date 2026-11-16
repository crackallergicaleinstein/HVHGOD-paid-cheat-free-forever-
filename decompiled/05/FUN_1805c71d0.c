// FUN_1805c71d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805c71d0 */

void FUN_1805c71d0(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  if (*(short *)(param_1 + 0x35a) != 0) {
    FUN_18057abd0(uVar1,*(undefined8 *)(param_1 + 0x360));
    *(undefined8 *)(param_1 + 0x360) = 0;
    *(undefined2 *)(param_1 + 0x35a) = 0;
  }
  if (*(short *)(param_1 + 0x35c) != 0) {
    FUN_18057abd0(uVar1,*(undefined8 *)(param_1 + 0x368));
    *(undefined8 *)(param_1 + 0x368) = 0;
    *(undefined2 *)(param_1 + 0x35c) = 0;
  }
  *(undefined1 *)(param_1 + 0x358) = 0;
  return;
}



