// FUN_1805c1b70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805c1b70 */

void FUN_1805c1b70(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  
  *(longlong *)(param_1 + 0x18) = param_2;
  uVar1 = *(undefined1 *)(param_2 + 7);
  uVar2 = *(undefined1 *)(param_2 + 6);
  uVar3 = *(undefined1 *)(param_2 + 8);
  uVar4 = *(undefined1 *)(param_2 + 9);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(uint *)(param_1 + 0x28) = CONCAT31(CONCAT21(CONCAT11(uVar2,uVar1),uVar3),uVar4);
  return;
}



