// FUN_1804bbfd0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804bbfd0 */

undefined8 FUN_1804bbfd0(uint param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint *puVar3;
  
  puVar3 = *(uint **)(DAT_180bb8ae8 + 0x14b8);
  uVar2 = (longlong)*(int *)(DAT_180bb8ae8 + 0x14b0);
  while (uVar1 = uVar2, uVar1 != 0) {
    uVar2 = uVar1 >> 1;
    if (puVar3[uVar2 * 4] < param_1) {
      puVar3 = puVar3 + uVar2 * 4 + 4;
      uVar2 = uVar1 + (-1 - uVar2);
    }
  }
  if ((puVar3 == *(uint **)(DAT_180bb8ae8 + 0x14b8) + (longlong)*(int *)(DAT_180bb8ae8 + 0x14b0) * 4
      ) || (*puVar3 != param_1)) {
    return 0;
  }
  return *(undefined8 *)(puVar3 + 2);
}



