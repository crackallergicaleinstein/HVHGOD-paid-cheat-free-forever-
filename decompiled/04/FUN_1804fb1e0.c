// FUN_1804fb1e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804fb1e0 */

void FUN_1804fb1e0(void)

{
  uint *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar6 = DAT_180bb8ae8;
  lVar7 = FUN_1804e95f0(*(undefined8 *)(DAT_180bb8ae8 + 0x11d8),0x2a);
  *(undefined4 *)(lVar6 + 0x2600) = *(undefined4 *)(*(longlong *)(lVar6 + 0x11d0) + 0x10);
  *(undefined4 *)(lVar6 + 0x25d8) = *(undefined4 *)(*(longlong *)(lVar6 + 0x11d8) + 0x40);
  *(undefined4 *)(lVar6 + 0x25a8) = *(undefined4 *)(*(longlong *)(lVar6 + 0x11d8) + 0x10);
  lVar3 = *(longlong *)(lVar6 + 0x11d8);
  uVar2 = *(undefined4 *)(lVar3 + 0x20);
  *(undefined4 *)(lVar3 + 0x20) = *(undefined4 *)(lVar6 + 0x25b8);
  *(undefined4 *)(lVar6 + 0x25b8) = uVar2;
  uVar2 = *(undefined4 *)(lVar3 + 0x24);
  *(undefined4 *)(lVar3 + 0x24) = *(undefined4 *)(lVar6 + 0x25bc);
  *(undefined4 *)(lVar6 + 0x25bc) = uVar2;
  uVar4 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)(lVar6 + 0x25c0);
  *(undefined8 *)(lVar6 + 0x25c0) = uVar4;
  puVar5 = *(undefined4 **)(lVar6 + 0x11d8);
  uVar2 = *puVar5;
  *puVar5 = *(undefined4 *)(lVar6 + 0x2598);
  *(undefined4 *)(lVar6 + 0x2598) = uVar2;
  uVar2 = puVar5[1];
  puVar5[1] = *(undefined4 *)(lVar6 + 0x259c);
  *(undefined4 *)(lVar6 + 0x259c) = uVar2;
  uVar4 = *(undefined8 *)(puVar5 + 2);
  *(undefined8 *)(puVar5 + 2) = *(undefined8 *)(lVar6 + 0x25a0);
  *(undefined8 *)(lVar6 + 0x25a0) = uVar4;
  puVar1 = (uint *)(*(longlong *)(lVar6 + 0x11d0) + 0x10);
  *puVar1 = *puVar1 | 4;
  *(int *)(*(longlong *)(lVar6 + 0x11d8) + 0x40) =
       (int)((lVar7 - *(longlong *)(*(longlong *)(lVar6 + 0x11d8) + 0x38)) / 0x2c);
  *(undefined4 *)(*(longlong *)(lVar6 + 0x11d8) + 0x10) = *(undefined4 *)(lVar7 + 4);
  return;
}



