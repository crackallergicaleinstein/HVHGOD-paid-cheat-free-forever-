// FUN_1805a2b90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805a2b90 */

void FUN_1805a2b90(uint *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  uint uVar2;
  
  if ((*(longlong *)(param_1 + 6) != 0) && (uVar2 = 0, param_1[5] != 0)) {
    do {
      uVar1 = (ulonglong)uVar2;
      FUN_18057abd0(param_2,*(undefined8 *)(uVar1 * 8 + *(longlong *)(param_1 + 6)));
      uVar2 = uVar2 + 1;
      *(undefined8 *)(uVar1 * 8 + *(longlong *)(param_1 + 6)) = 0;
    } while (uVar2 < param_1[5]);
  }
  FUN_18057abd0(param_2,*(undefined8 *)(param_1 + 6));
  param_1[6] = 0;
  param_1[7] = 0;
  if ((*(longlong *)(param_1 + 2) != 0) && (uVar2 = 0, *param_1 != 0)) {
    do {
      uVar1 = (ulonglong)uVar2;
      FUN_18057abd0(param_2,*(undefined8 *)(*(longlong *)(param_1 + 2) + 8 + uVar1 * 0x10));
      uVar2 = uVar2 + 1;
      *(undefined8 *)(*(longlong *)(param_1 + 2) + 8 + uVar1 * 0x10) = 0;
    } while (uVar2 < *param_1);
  }
  FUN_18057abd0(param_2,*(undefined8 *)(param_1 + 2));
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}



