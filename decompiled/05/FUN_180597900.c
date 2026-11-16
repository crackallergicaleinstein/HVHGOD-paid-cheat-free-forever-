// FUN_180597900 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180597900 */

undefined8 FUN_180597900(longlong param_1,undefined4 *param_2)

{
  byte *pbVar1;
  undefined4 *puVar2;
  uint uVar3;
  ulonglong uVar4;
  
  puVar2 = *(undefined4 **)(param_1 + 0x2e0);
  if (puVar2 == (undefined4 *)0x0) {
    return 6;
  }
  uVar4 = 0;
  *param_2 = puVar2[1];
  param_2[1] = *puVar2;
  if (puVar2[1] != 0) {
    do {
      pbVar1 = (byte *)(puVar2 + (uVar4 + 7) * 6);
      uVar3 = (int)uVar4 + 1;
      *(undefined8 *)(param_2 + uVar4 * 4 + 2) = *(undefined8 *)(puVar2 + uVar4 * 2 + 2);
      param_2[uVar4 * 4 + 4] = **(undefined4 **)(pbVar1 + 8);
      param_2[uVar4 * 4 + 5] =
           *(undefined4 *)(*(longlong *)(pbVar1 + 8) + -4 + (ulonglong)*pbVar1 * 4);
      uVar4 = (ulonglong)uVar3;
    } while (uVar3 < (uint)puVar2[1]);
  }
  return 0;
}



