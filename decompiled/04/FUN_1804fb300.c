// FUN_1804fb300 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804fb300 */

void FUN_1804fb300(void)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  longlong lVar5;
  
  lVar5 = DAT_180bb8ae8;
  *(undefined4 *)(*(longlong *)(DAT_180bb8ae8 + 0x11d0) + 0x10) =
       *(undefined4 *)(DAT_180bb8ae8 + 0x2600);
  *(undefined4 *)(*(longlong *)(lVar5 + 0x11d8) + 0x40) = *(undefined4 *)(lVar5 + 0x25d8);
  *(undefined4 *)(*(longlong *)(lVar5 + 0x11d8) + 0x10) = *(undefined4 *)(lVar5 + 0x25a8);
  lVar2 = *(longlong *)(lVar5 + 0x11d8);
  uVar1 = *(undefined4 *)(lVar5 + 0x25b8);
  *(undefined4 *)(lVar5 + 0x25b8) = *(undefined4 *)(lVar2 + 0x20);
  *(undefined4 *)(lVar2 + 0x20) = uVar1;
  uVar1 = *(undefined4 *)(lVar5 + 0x25bc);
  *(undefined4 *)(lVar5 + 0x25bc) = *(undefined4 *)(lVar2 + 0x24);
  *(undefined4 *)(lVar2 + 0x24) = uVar1;
  uVar3 = *(undefined8 *)(lVar5 + 0x25c0);
  *(undefined8 *)(lVar5 + 0x25c0) = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = uVar3;
  puVar4 = *(undefined4 **)(lVar5 + 0x11d8);
  uVar1 = *(undefined4 *)(lVar5 + 0x2598);
  *(undefined4 *)(lVar5 + 0x2598) = *puVar4;
  *puVar4 = uVar1;
  uVar1 = *(undefined4 *)(lVar5 + 0x259c);
  *(undefined4 *)(lVar5 + 0x259c) = puVar4[1];
  puVar4[1] = uVar1;
  uVar3 = *(undefined8 *)(lVar5 + 0x25a0);
  *(undefined8 *)(lVar5 + 0x25a0) = *(undefined8 *)(puVar4 + 2);
  *(undefined8 *)(puVar4 + 2) = uVar3;
  return;
}



