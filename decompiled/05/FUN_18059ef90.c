// FUN_18059ef90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18059ef90 */

undefined8 FUN_18059ef90(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  if ((lVar1 == 0) || (*(longlong *)(lVar1 + 0x170) == 0)) {
    return 3;
  }
  if (*(char *)(*(longlong *)(lVar1 + 0x170) + 0x231) == '\0') {
    uVar2 = FUN_1805a13c0(param_1,*(undefined8 *)(param_1 + 0x20));
    *(undefined4 *)(lVar1 + 0x168) = uVar2;
    return 0;
  }
  return 0xa0;
}



