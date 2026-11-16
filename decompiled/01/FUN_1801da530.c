// FUN_1801da530 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801da530 */

longlong FUN_1801da530(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_18015b360();
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  uVar1 = *(undefined8 *)(param_2 + 0x44);
  *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)(param_2 + 0x3c);
  *(undefined8 *)(param_1 + 0x44) = uVar1;
  *(undefined2 *)(param_1 + 0x4c) = *(undefined2 *)(param_2 + 0x4c);
  *(undefined1 *)(param_1 + 0x4e) = *(undefined1 *)(param_2 + 0x4e);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined1 *)(param_1 + 0x68) = *(undefined1 *)(param_2 + 0x68);
  *(undefined1 *)(param_1 + 0x69) = *(undefined1 *)(param_2 + 0x69);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_2 + 0x74);
  return param_1;
}



