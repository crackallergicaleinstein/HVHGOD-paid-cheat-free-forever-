// FUN_1805a3720 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805a3720 */

void FUN_1805a3720(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  uint uVar4;
  ulonglong uVar5;
  
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x98);
    if (*(longlong *)(param_1 + 0x1d0) != 0) {
      uVar4 = 0;
      if (*(int *)(param_1 + 0x1b0) != 0) {
        do {
          lVar2 = *(longlong *)(param_1 + 0x1d0);
          uVar5 = (ulonglong)uVar4;
          puVar3 = *(undefined8 **)(lVar2 + 8 + uVar5 * 0x10);
          if (puVar3 != (undefined8 *)0x0) {
            FUN_18057abd0(uVar1,*puVar3);
            **(undefined8 **)(lVar2 + 8 + uVar5 * 0x10) = 0;
            FUN_18057abd0(uVar1,*(undefined8 *)(lVar2 + 8 + uVar5 * 0x10));
            *(undefined8 *)(lVar2 + 8 + uVar5 * 0x10) = 0;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < *(uint *)(param_1 + 0x1b0));
      }
      FUN_18057abd0(uVar1,*(undefined8 *)(param_1 + 0x1d0));
      *(undefined8 *)(param_1 + 0x1d0) = 0;
    }
    FUN_18057abd0(uVar1,*(undefined8 *)(param_1 + 0x110));
    *(undefined8 *)(param_1 + 0x110) = 0;
    FUN_18057abd0(uVar1,*(undefined8 *)(param_1 + 0x118));
    *(undefined8 *)(param_1 + 0x118) = 0;
    FUN_18057abd0(uVar1,*(undefined8 *)(param_1 + 0x120));
    *(undefined8 *)(param_1 + 0x120) = 0;
    FUN_18057abd0(uVar1,*(undefined8 *)(param_1 + 0x128));
    *(undefined8 *)(param_1 + 0x128) = 0;
    FUN_18057abd0(uVar1,*(undefined8 *)(param_1 + 0x130));
    *(undefined8 *)(param_1 + 0x130) = 0;
    FUN_18057abd0(uVar1,*(undefined8 *)(param_1 + 0x1b8));
    *(undefined8 *)(param_1 + 0x1b8) = 0;
    *(undefined4 *)(param_1 + 0x1b0) = 0;
    FUN_18057abd0(uVar1,*(undefined8 *)(param_1 + 0xe8));
    *(undefined8 *)(param_1 + 0xe8) = 0;
    FUN_18057abd0(uVar1,*(undefined8 *)(param_1 + 0xf8));
    *(undefined8 *)(param_1 + 0xf8) = 0;
    FUN_18057abd0(uVar1,*(undefined8 *)(param_1 + 0x100));
    *(undefined8 *)(param_1 + 0x100) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    FUN_18057abd0(uVar1,*(undefined8 *)(param_1 + 0x1e0));
    *(undefined8 *)(param_1 + 0x1e0) = 0;
    FUN_18057abd0(uVar1,*(undefined8 *)(param_1 + 0x1e8));
    *(undefined8 *)(param_1 + 0x1e8) = 0;
  }
  return;
}



