// FUN_1805897e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805897e0 */

void FUN_1805897e0(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  lVar2 = *(longlong *)(param_1 + 0x408);
  uVar3 = *(undefined8 *)(param_1 + 0x98);
  if (lVar2 != 0) {
    uVar1 = **(uint **)(lVar2 + 0x18);
    uVar5 = (ulonglong)uVar1;
    FUN_18057abd0(uVar3,*(undefined8 *)(lVar2 + 8));
    *(undefined8 *)(lVar2 + 8) = 0;
    FUN_18057abd0(uVar3,*(undefined8 *)(lVar2 + 0x10));
    *(undefined8 *)(lVar2 + 0x10) = 0;
    FUN_18057abd0(uVar3,*(undefined8 *)(lVar2 + 0x28));
    *(undefined8 *)(lVar2 + 0x28) = 0;
    FUN_18057abd0(uVar3,*(undefined8 *)(lVar2 + 0x18));
    *(undefined8 *)(lVar2 + 0x18) = 0;
    if (*(longlong **)(lVar2 + 0x38) != (longlong *)0x0) {
      if (**(longlong **)(lVar2 + 0x38) != 0) {
        if (uVar1 != 0) {
          lVar6 = 0;
          do {
            FUN_18057abd0(uVar3,*(undefined8 *)(**(longlong **)(lVar2 + 0x38) + 8 + lVar6));
            lVar6 = lVar6 + 0x10;
            *(undefined8 *)(**(longlong **)(lVar2 + 0x38) + -8 + lVar6) = 0;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
        FUN_18057abd0(uVar3,**(undefined8 **)(lVar2 + 0x38));
        **(undefined8 **)(lVar2 + 0x38) = 0;
      }
      FUN_180589610(param_1,*(longlong *)(lVar2 + 0x38) + 8);
      lVar6 = *(longlong *)(lVar2 + 0x38);
      uVar4 = *(undefined8 *)(param_1 + 0x98);
      FUN_18057abd0(uVar4,*(undefined8 *)(lVar6 + 0x38));
      *(undefined8 *)(lVar6 + 0x38) = 0;
      FUN_18057abd0(uVar4,*(undefined8 *)(lVar6 + 0x30));
      *(undefined8 *)(lVar6 + 0x30) = 0;
      FUN_18057abd0(uVar3,*(undefined8 *)(lVar2 + 0x38));
      *(undefined8 *)(lVar2 + 0x38) = 0;
    }
    if (*(longlong *)(lVar2 + 0x48) != 0) {
      FUN_180589610(param_1);
      lVar6 = *(longlong *)(lVar2 + 0x48);
      uVar4 = *(undefined8 *)(param_1 + 0x98);
      FUN_18057abd0(uVar4,*(undefined8 *)(lVar6 + 0x30));
      *(undefined8 *)(lVar6 + 0x30) = 0;
      FUN_18057abd0(uVar4,*(undefined8 *)(lVar6 + 0x28));
      *(undefined8 *)(lVar6 + 0x28) = 0;
      FUN_18057abd0(uVar3,*(undefined8 *)(lVar2 + 0x48));
      *(undefined8 *)(lVar2 + 0x48) = 0;
    }
    if (*(longlong *)(lVar2 + 0x58) != 0) {
      FUN_180589610(param_1);
      lVar6 = *(longlong *)(lVar2 + 0x58);
      uVar4 = *(undefined8 *)(param_1 + 0x98);
      FUN_18057abd0(uVar4,*(undefined8 *)(lVar6 + 0x30));
      *(undefined8 *)(lVar6 + 0x30) = 0;
      FUN_18057abd0(uVar4,*(undefined8 *)(lVar6 + 0x28));
      *(undefined8 *)(lVar6 + 0x28) = 0;
      FUN_18057abd0(uVar3,*(undefined8 *)(lVar2 + 0x58));
      *(undefined8 *)(lVar2 + 0x58) = 0;
    }
    if (*(longlong *)(lVar2 + 0x60) != 0) {
      FUN_180589610(param_1,*(longlong *)(lVar2 + 0x60) + 8);
      FUN_18057abd0(uVar3,*(undefined8 *)(*(longlong *)(lVar2 + 0x60) + 0x28));
      *(undefined8 *)(*(longlong *)(lVar2 + 0x60) + 0x28) = 0;
      FUN_18057abd0(uVar3,*(undefined8 *)(lVar2 + 0x60));
      *(undefined8 *)(lVar2 + 0x60) = 0;
    }
    FUN_18057abd0(uVar3,*(undefined8 *)(lVar2 + 0x78));
    *(undefined8 *)(lVar2 + 0x78) = 0;
    FUN_18057abd0(uVar3,*(undefined8 *)(lVar2 + 0x70));
    *(undefined8 *)(lVar2 + 0x70) = 0;
    FUN_18057abd0(uVar3,*(undefined8 *)(lVar2 + 0x88));
    *(undefined8 *)(lVar2 + 0x88) = 0;
    FUN_18057abd0(uVar3,lVar2);
  }
  return;
}



