// FUN_1801bb9e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801bb9e0 */

longlong FUN_1801bb9e0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_1801b90e0();
  *(undefined1 (*) [16])(param_1 + 0xd8) = (undefined1  [16])0x0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0xe0);
  uVar2 = *(undefined8 *)(param_2 + 0xe8);
  uVar3 = *(undefined8 *)(param_2 + 0xf0);
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_2 + 0xd8);
  *(undefined8 *)(param_1 + 0xe0) = uVar1;
  *(undefined8 *)(param_1 + 0xe8) = uVar2;
  *(undefined8 *)(param_1 + 0xf0) = uVar3;
  *(undefined8 *)(param_2 + 0xf0) = 0xf;
  *(undefined1 *)(param_2 + 0xd8) = 0;
  *(undefined8 *)(param_2 + 0xe8) = 0;
  *(undefined1 (*) [16])(param_1 + 0xf8) = (undefined1  [16])0x0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x100);
  uVar2 = *(undefined8 *)(param_2 + 0x108);
  uVar3 = *(undefined8 *)(param_2 + 0x110);
  *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_2 + 0xf8);
  *(undefined8 *)(param_1 + 0x100) = uVar1;
  *(undefined8 *)(param_1 + 0x108) = uVar2;
  *(undefined8 *)(param_1 + 0x110) = uVar3;
  *(undefined1 *)(param_2 + 0xf8) = 0;
  *(undefined8 *)(param_2 + 0x108) = 0;
  *(undefined8 *)(param_2 + 0x110) = 0xf;
  *(undefined8 *)(param_1 + 0x118) = *(undefined8 *)(param_2 + 0x118);
  return param_1;
}



