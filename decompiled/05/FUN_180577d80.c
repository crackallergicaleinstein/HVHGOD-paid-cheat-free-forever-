// FUN_180577d80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180577d80 */

void FUN_180577d80(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_180577bf0();
  if (iVar1 == 0) {
    *param_3 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  return;
}



