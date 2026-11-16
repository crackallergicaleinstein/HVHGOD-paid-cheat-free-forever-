// FUN_1805a6210 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805a6210 */

uint FUN_1805a6210(longlong param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = *(uint *)(param_1 + 0x18);
  uVar3 = uVar5 >> 1;
  if (uVar5 != 0) {
    uVar4 = 0;
    do {
      uVar1 = *(uint *)(*(longlong *)(param_1 + 0x20) + (ulonglong)uVar3 * 0x10);
      if (uVar1 == param_2) {
        return uVar3 + 1;
      }
      uVar2 = uVar3 + 1;
      if (param_2 <= uVar1) {
        uVar5 = uVar3;
        uVar2 = uVar4;
      }
      uVar3 = uVar3 + (param_2 - uVar1);
      if ((uVar5 <= uVar3) || (uVar3 < uVar2)) {
        uVar3 = (uVar5 - uVar2 >> 1) + uVar2;
      }
      uVar4 = uVar2;
    } while (uVar2 < uVar5);
  }
  return 0;
}



