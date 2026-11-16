// FUN_180589610 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180589610 */

void FUN_180589610(longlong param_1,uint *param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  if (*(longlong *)(param_2 + 2) != 0) {
    uVar3 = 0;
    if (*param_2 != 0) {
      do {
        lVar4 = (ulonglong)uVar3 * 0x20;
        FUN_18057abd0(uVar1,*(undefined8 *)(*(longlong *)(param_2 + 2) + 8 + lVar4));
        *(undefined8 *)(*(longlong *)(param_2 + 2) + 8 + lVar4) = 0;
        FUN_18057abd0(uVar1,*(undefined8 *)(*(longlong *)(param_2 + 2) + 0x10 + lVar4));
        uVar3 = uVar3 + 1;
        *(undefined8 *)(*(longlong *)(param_2 + 2) + 0x10 + lVar4) = 0;
      } while (uVar3 < *param_2);
    }
    FUN_18057abd0(uVar1,*(undefined8 *)(param_2 + 2));
    param_2[2] = 0;
    param_2[3] = 0;
  }
  if (*(longlong *)(param_2 + 6) != 0) {
    uVar3 = 0;
    if (param_2[5] != 0) {
      do {
        uVar2 = (ulonglong)uVar3;
        FUN_18057abd0(uVar1,*(undefined8 *)(*(longlong *)(param_2 + 6) + uVar2 * 8));
        uVar3 = uVar3 + 1;
        *(undefined8 *)(uVar2 * 8 + *(longlong *)(param_2 + 6)) = 0;
      } while (uVar3 < param_2[5]);
    }
    FUN_18057abd0(uVar1,*(undefined8 *)(param_2 + 6));
    param_2[6] = 0;
    param_2[7] = 0;
  }
  return;
}



