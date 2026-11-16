// FUN_1805a4010 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805a4010 */

undefined8 FUN_1805a4010(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x118);
  *param_2 = *(undefined8 *)(param_1 + 0x110);
  param_2[1] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x128);
  param_2[2] = *(undefined8 *)(param_1 + 0x120);
  param_2[3] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x138);
  param_2[4] = *(undefined8 *)(param_1 + 0x130);
  param_2[5] = uVar1;
  param_2[6] = *(undefined8 *)(param_1 + 0x140);
  return 0;
}



