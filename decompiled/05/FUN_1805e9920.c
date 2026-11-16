// FUN_1805e9920 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805e9920 */

uint FUN_1805e9920(undefined8 *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  
  uVar1 = *(uint *)(param_1 + 1);
  if (0x40 < uVar1) {
    return 3;
  }
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  if (uVar3 + 8 <= uVar2) {
    puVar6 = (undefined8 *)(uVar2 - (uVar1 >> 3));
    *(uint *)(param_1 + 1) = uVar1 & 7;
    param_1[2] = puVar6;
    *param_1 = *puVar6;
    return 0;
  }
  if (uVar2 == uVar3) {
    return 2 - (uVar1 < 0x40);
  }
  uVar5 = uVar2 - (uVar1 >> 3);
  uVar4 = (ulonglong)(uint)((int)uVar2 - (int)uVar3);
  if (uVar3 <= uVar5) {
    uVar4 = (ulonglong)(uVar1 >> 3);
  }
  param_1[2] = (undefined8 *)(uVar2 - uVar4);
  *(uint *)(param_1 + 1) = uVar1 + (int)uVar4 * -8;
  *param_1 = *(undefined8 *)(uVar2 - uVar4);
  return (uint)(uVar5 < uVar3);
}



