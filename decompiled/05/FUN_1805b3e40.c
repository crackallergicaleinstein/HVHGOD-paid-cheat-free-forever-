// FUN_1805b3e40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805b3e40 */

undefined8 FUN_1805b3e40(longlong param_1,longlong param_2,undefined4 param_3)

{
  uint uVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong lVar5;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x3e0);
  lVar5 = lVar2 + 0x5e0;
  if (*(int *)(lVar2 + 0x8a8) != 0) {
    bVar3 = (**(code **)(*(longlong *)(lVar2 + 0x10e0) + 0x10))(lVar2 + 0x10b0,param_3);
    if (*(uint *)(lVar2 + 0x8a8) <= (uint)bVar3) {
      return 3;
    }
    lVar5 = *(longlong *)(lVar2 + 0x8b0 + (ulonglong)bVar3 * 8);
    if ((*(longlong *)(param_1 + 0x60) != 0) && (param_2 != 0)) {
      *(undefined8 *)(param_1 + 0x68) =
           *(undefined8 *)(**(longlong **)(param_2 + 0x38) + 8 + (ulonglong)bVar3 * 8);
    }
  }
  uVar1 = *(uint *)(lVar5 + 0x298);
  *(uint *)(param_1 + 0x3f8) = uVar1;
  *(undefined8 *)(param_1 + 0x408) = *(undefined8 *)(lVar5 + 0x2b8);
  if (*(int *)(*(longlong *)(param_1 + 0xb0) + 0x608) == 1) {
    uVar4 = 0;
  }
  else if (uVar1 < 0x4d8) {
    uVar4 = 0x6b;
  }
  else {
    uVar4 = 0x8000;
    if (uVar1 < 0x846c) {
      uVar4 = 0x46b;
    }
  }
  *(undefined4 *)(param_1 + 0x400) = uVar4;
  *(undefined4 *)(param_1 + 0x368) = *(undefined4 *)(lVar5 + 0x218);
  *(undefined4 *)(param_1 + 0x36c) = *(undefined4 *)(lVar5 + 0x21c);
  *(longlong *)(param_1 + 0x430) = lVar5;
  return 0;
}



