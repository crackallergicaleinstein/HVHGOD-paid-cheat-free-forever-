// FUN_18059fd20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18059fd20 */

void FUN_18059fd20(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x90) != 0) {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x90) + 0x30);
    if (*(longlong *)(param_1 + 0xb8) != 0) {
      FUN_180578860();
    }
    FUN_18057abd0(uVar2,*(undefined8 *)(param_1 + 0xb0));
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined8 *)(param_1 + 0xb8) = 0;
  }
  if (*(longlong *)(param_1 + 0x520) != 0) {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x520) + 0x30);
    if (*(longlong *)(param_1 + 0x548) != 0) {
      FUN_180578860();
    }
    FUN_18057abd0(uVar2,*(undefined8 *)(param_1 + 0x540));
    *(undefined8 *)(param_1 + 0x520) = 0;
    *(undefined8 *)(param_1 + 0x528) = 0;
    *(undefined8 *)(param_1 + 0x530) = 0;
    *(undefined8 *)(param_1 + 0x538) = 0;
    *(undefined8 *)(param_1 + 0x540) = 0;
    *(undefined8 *)(param_1 + 0x548) = 0;
  }
  lVar3 = *(longlong *)(param_1 + 0x30);
  if (lVar3 != 0) {
    uVar2 = *(undefined8 *)(lVar3 + 0x30);
    if (*(longlong *)(param_1 + 0x58) != 0) {
      FUN_180578860(lVar3,param_1 + 0x58);
    }
    FUN_18057abd0(uVar2,*(undefined8 *)(param_1 + 0x50));
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  if (*(longlong *)(param_1 + 0x4f0) != 0) {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x4f0) + 0x30);
    if (*(longlong *)(param_1 + 0x518) != 0) {
      FUN_180578860();
    }
    FUN_18057abd0(uVar2,*(undefined8 *)(param_1 + 0x510));
    *(undefined8 *)(param_1 + 0x4f0) = 0;
    *(undefined8 *)(param_1 + 0x4f8) = 0;
    *(undefined8 *)(param_1 + 0x500) = 0;
    *(undefined8 *)(param_1 + 0x508) = 0;
    *(undefined8 *)(param_1 + 0x510) = 0;
    *(undefined8 *)(param_1 + 0x518) = 0;
  }
  if (*(int *)(param_1 + 0x8a8) != 0) {
    uVar5 = 0;
    do {
      FUN_1805a2760(uVar1,*(undefined8 *)(param_1 + 0x8b0 + uVar5 * 8));
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
    } while (uVar4 < *(uint *)(param_1 + 0x8a8));
    FUN_18057abd0(uVar1,*(undefined8 *)(param_1 + 0x8b0));
    *(undefined8 *)(param_1 + 0x8b0) = 0;
  }
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x30);
  FUN_18057abd0(uVar2,*(undefined8 *)(param_1 + 0x4e0));
  *(undefined8 *)(param_1 + 0x4e0) = 0;
  *(undefined4 *)(param_1 + 0x4e8) = 0;
  FUN_18057abd0(uVar2,*(undefined8 *)(param_1 + 0x4d8));
  *(undefined8 *)(param_1 + 0x4d8) = 0;
  *(undefined8 *)(param_1 + 0x4d0) = 0;
  FUN_1805a2b90(param_1 + 0x1110,uVar1);
  FUN_1805a2760(uVar1,param_1 + 0x5e0);
  if (*(longlong *)(param_1 + 0x10b8) != 0) {
    FUN_180578860(*(undefined8 *)(param_1 + 8));
  }
  *(undefined4 *)(param_1 + 0x10c0) = 0;
  *(undefined1 *)(param_1 + 0x10b0) = 0;
  *(undefined4 *)(param_1 + 0x10b4) = 0;
  FUN_18057abd0(uVar1,*(undefined8 *)(param_1 + 0x10e8));
  *(undefined8 *)(param_1 + 0x10e8) = 0;
  FUN_18057abd0(uVar1,*(undefined8 *)(param_1 + 0x5b0));
  *(undefined8 *)(param_1 + 0x5b0) = 0;
  FUN_18057abd0(uVar1,*(undefined8 *)(param_1 + 0x5b8));
  *(undefined8 *)(param_1 + 0x5b8) = 0;
  FUN_18057abd0(uVar1,*(undefined8 *)(param_1 + 0x5c8));
  *(undefined8 *)(param_1 + 0x5c8) = 0;
  FUN_18057abd0(uVar1,*(undefined8 *)(param_1 + 0x5d0));
  *(undefined8 *)(param_1 + 0x5d0) = 0;
  if (*(code **)(param_1 + 0x1108) != (code *)0x0) {
    (**(code **)(param_1 + 0x1108))(*(undefined8 *)(param_1 + 0x1100));
    FUN_18057abd0(uVar1,*(undefined8 *)(param_1 + 0x1100));
    *(undefined8 *)(param_1 + 0x1100) = 0;
  }
  FUN_18057abd0(uVar1,*(undefined8 *)(param_1 + 0x1130));
  *(undefined8 *)(param_1 + 0x1130) = 0;
  return;
}



