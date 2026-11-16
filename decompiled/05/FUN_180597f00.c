// FUN_180597f00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180597f00 */

undefined8 FUN_180597f00(longlong param_1)

{
  longlong lVar1;
  uint *puVar2;
  uint uVar3;
  ulonglong uVar4;
  
  puVar2 = *(uint **)(param_1 + 0x2e0);
  if (puVar2 == (uint *)0x0) {
    return 6;
  }
  uVar4 = 0;
  if (*puVar2 != 0) {
    do {
      lVar1 = uVar4 * 4;
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
      *(undefined4 *)(lVar1 + *(longlong *)(puVar2 + 0x42)) =
           *(undefined4 *)(lVar1 + *(longlong *)(puVar2 + 0x44));
    } while (uVar3 < *puVar2);
  }
  return 0;
}



