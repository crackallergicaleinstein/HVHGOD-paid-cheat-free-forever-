// FUN_1805c15e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805c15e0 */

undefined8 FUN_1805c15e0(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  
  *(longlong *)(param_1 + 0x18) = param_2;
  uVar1 = *(undefined1 *)(param_2 + 0xd);
  uVar2 = *(undefined1 *)(param_2 + 0xc);
  uVar3 = *(undefined1 *)(param_2 + 0xe);
  uVar4 = *(undefined1 *)(param_2 + 0xf);
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(uint *)(param_1 + 0x38) = CONCAT31(CONCAT21(CONCAT11(uVar2,uVar1),uVar3),uVar4);
  return 0;
}



