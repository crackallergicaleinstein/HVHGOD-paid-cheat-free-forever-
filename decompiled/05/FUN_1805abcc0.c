// FUN_1805abcc0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805abcc0 */

void FUN_1805abcc0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x98);
    FUN_18057abd0(uVar1,*(undefined8 *)(param_1 + 0x1b0));
    *(undefined8 *)(param_1 + 0x1b0) = 0;
    FUN_18057abd0(uVar1,*(undefined8 *)(param_1 + 0x1c8));
    *(undefined8 *)(param_1 + 0x1c8) = 0;
    if (*(longlong *)(param_1 + 0x1a0) != 0) {
      iVar3 = 0;
      if (0 < *(int *)(param_1 + 0x19c)) {
        lVar4 = 0;
        do {
          puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x1a0) + lVar4);
          if (puVar2 != (undefined8 *)0x0) {
            FUN_18057abd0(uVar1,*puVar2);
            *puVar2 = 0;
            if (*(char *)(puVar2 + 1) != '\0') {
              FUN_18057abd0(uVar1,puVar2[2]);
              puVar2[2] = 0;
            }
          }
          iVar3 = iVar3 + 1;
          lVar4 = lVar4 + 0x18;
        } while (iVar3 < *(int *)(param_1 + 0x19c));
      }
      FUN_18057abd0(uVar1,*(undefined8 *)(param_1 + 0x1a0));
      *(undefined8 *)(param_1 + 0x1a0) = 0;
    }
    FUN_18057abd0(uVar1,*(undefined8 *)(param_1 + 0x140));
    *(undefined8 *)(param_1 + 0x140) = 0;
    FUN_18057abd0(uVar1,*(undefined8 *)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x18) = 0;
    FUN_18057abd0(uVar1,*(undefined8 *)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x20) = 0;
    FUN_18057abd0(uVar1,*(undefined8 *)(param_1 + 0x30));
    *(undefined8 *)(param_1 + 0x30) = 0;
    FUN_18057abd0(uVar1,*(undefined8 *)(param_1 + 0x128));
    *(undefined8 *)(param_1 + 0x128) = 0;
    FUN_18057abd0(uVar1,*(undefined8 *)(param_1 + 0x130));
    *(undefined8 *)(param_1 + 0x130) = 0;
    if (*(longlong *)(param_1 + 0xa0) == param_1 + 0xd8) {
      FUN_180577bd0();
      *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_1 + 0x120);
    }
  }
  return;
}



