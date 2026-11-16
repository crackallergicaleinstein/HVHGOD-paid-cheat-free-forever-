// FUN_1805bdcb0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805bdcb0 */

uint FUN_1805bdcb0(longlong param_1,uint param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  
  puVar1 = *(uint **)(param_1 + 0x20);
  puVar5 = puVar1 + (ulonglong)*(uint *)(param_1 + 0x18) * 2;
  puVar4 = puVar1 + (ulonglong)(*(uint *)(param_1 + 0x18) >> 1) * 2;
  puVar6 = (uint *)0x0;
  if (puVar1 < puVar5) {
    do {
      puVar2 = puVar4;
      if (*puVar4 == param_2) break;
      uVar3 = *puVar4 & 0x7fffffff;
      if (uVar3 != param_2) {
        puVar2 = puVar6;
      }
      puVar6 = puVar4 + 2;
      if (param_2 <= uVar3) {
        puVar6 = puVar1;
        puVar5 = puVar4;
      }
      puVar1 = puVar6;
      puVar4 = puVar4 + (ulonglong)(param_2 - uVar3) * 2;
      if ((puVar5 <= puVar4) || (puVar4 < puVar1)) {
        puVar4 = puVar1 + ((longlong)puVar5 - (longlong)puVar1 >> 4) * 2;
      }
      puVar6 = puVar2;
    } while (puVar1 < puVar5);
    if (puVar2 != (uint *)0x0) {
      return puVar2[1];
    }
  }
  return 0;
}



