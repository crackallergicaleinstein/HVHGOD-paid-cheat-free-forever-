// FUN_1803b7360 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803b7360 */

void FUN_1803b7360(longlong param_1)

{
  ulonglong uVar1;
  
  for (uVar1 = 0; uVar1 < 4; uVar1 = uVar1 + 1) {
    *(undefined8 *)(param_1 + uVar1 * 0x18) = 0;
    *(undefined8 *)(param_1 + 8 + uVar1 * 0x18) = 0;
    *(undefined8 *)(param_1 + 0x10 + uVar1 * 0x18) = 0;
  }
  return;
}



