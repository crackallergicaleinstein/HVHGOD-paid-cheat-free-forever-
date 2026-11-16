// FUN_1802e29c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802e29c0 */

void FUN_1802e29c0(longlong param_1)

{
  ulonglong uVar1;
  
  for (uVar1 = 0; uVar1 < 2; uVar1 = uVar1 + 1) {
    *(undefined8 *)(param_1 + uVar1 * 0x18) = 0;
    *(undefined8 *)(param_1 + 8 + uVar1 * 0x18) = 0;
    *(undefined8 *)(param_1 + 0x10 + uVar1 * 0x18) = 0;
  }
  return;
}



