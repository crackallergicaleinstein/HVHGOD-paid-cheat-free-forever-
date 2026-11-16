// FUN_1805aaae0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805aaae0 */

void FUN_1805aaae0(longlong param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x98);
    FUN_1805aba40();
    FUN_18057abd0(uVar1,*(undefined8 *)(param_1 + 0x30));
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



