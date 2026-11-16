// FUN_18059f0f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18059f0f0 */

undefined8 FUN_18059f0f0(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (lVar1 == 0) {
    return 3;
  }
  uVar2 = FUN_1805a13c0(param_1,*(undefined8 *)(param_1 + 0x20));
  *(uint *)(lVar1 + 0xb4) = uVar2;
  if ((0x201 < uVar2) || (uVar2 < 0x201)) {
    *(undefined4 *)(lVar1 + 0xb4) = 0x201;
  }
  return 0;
}



