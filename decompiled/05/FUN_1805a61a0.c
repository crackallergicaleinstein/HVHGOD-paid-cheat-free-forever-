// FUN_1805a61a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805a61a0 */

undefined8 FUN_1805a61a0(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(*param_1 + 0x218);
  *(uint *)(param_1 + 3) = uVar1;
  lVar2 = *(longlong *)(*param_1 + 0x228);
  param_1[4] = lVar2;
  uVar3 = 1;
  if (1 < uVar1) {
    do {
      if (*(uint *)(lVar2 + (ulonglong)uVar3 * 0x10) <=
          *(uint *)(lVar2 + (ulonglong)(uVar3 - 1) * 0x10)) {
        return 8;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  return 0;
}



