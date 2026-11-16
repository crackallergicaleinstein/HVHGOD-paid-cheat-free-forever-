// FUN_1802c8e50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802c8e50 */

longlong FUN_1802c8e50(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN_1800cfaf0();
  puVar1 = (undefined8 *)(param_1 + 0x40);
  puVar2 = (undefined8 *)(param_2 + 0x40);
  if (puVar1 != puVar2) {
    FUN_1801b3620(puVar1);
    *puVar1 = *puVar2;
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
    *puVar2 = 0;
    *(undefined8 *)(param_2 + 0x48) = 0;
    *(undefined8 *)(param_2 + 0x50) = 0;
  }
  puVar1 = (undefined8 *)(param_2 + 0x58);
  puVar2 = (undefined8 *)(param_1 + 0x58);
  if (puVar2 != puVar1) {
    FUN_1801b3620(puVar2);
    *puVar2 = *puVar1;
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
    *puVar1 = 0;
    *(undefined8 *)(param_2 + 0x60) = 0;
    *(undefined8 *)(param_2 + 0x68) = 0;
  }
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_2 + 0x74);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_2 + 0x7c);
  *(undefined1 *)(param_1 + 0x80) = *(undefined1 *)(param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  return param_1;
}



