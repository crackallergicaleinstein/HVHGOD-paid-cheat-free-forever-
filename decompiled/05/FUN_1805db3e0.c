// FUN_1805db3e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805db3e0 */

void FUN_1805db3e0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = puVar1[0x1d];
    puVar1[3] = 0;
    puVar1[6] = 0;
    *(undefined1 *)(puVar1 + 7) = 0;
    puVar1[8] = 0;
    *(undefined4 *)(puVar1 + 0x12) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x54) = 9;
    if ((undefined8 *)puVar1[0x11] != puVar1 + 0x14) {
      FUN_18057abd0(uVar3);
      puVar1[0x11] = 0;
    }
    FUN_18057abd0(uVar3,puVar1[0xe]);
    FUN_18063ab10(puVar1 + 3,0,0xd8);
    puVar1[2] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    FUN_18057abd0(uVar2,puVar1);
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}



