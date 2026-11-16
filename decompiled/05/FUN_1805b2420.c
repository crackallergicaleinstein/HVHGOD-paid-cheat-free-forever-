// FUN_1805b2420 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805b2420 */

void FUN_1805b2420(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    puVar2 = *(undefined8 **)(param_1 + 0x20);
    uVar3 = puVar2[1];
    *(undefined8 *)(lVar1 + 0x98) = *puVar2;
    *(undefined8 *)(lVar1 + 0xa0) = uVar3;
    uVar3 = puVar2[3];
    *(undefined8 *)(lVar1 + 0xa8) = puVar2[2];
    *(undefined8 *)(lVar1 + 0xb0) = uVar3;
    *(undefined8 *)(lVar1 + 0xb8) = puVar2[4];
  }
  return;
}



