// FUN_1803504a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803504a0 */

void FUN_1803504a0(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 == *(undefined8 **)(param_1 + 0x10)) {
    FUN_180351c00();
    return;
  }
  uVar2 = param_2[1];
  *puVar1 = *param_2;
  puVar1[1] = uVar2;
  uVar2 = param_2[3];
  puVar1[2] = param_2[2];
  puVar1[3] = uVar2;
  uVar2 = param_2[5];
  puVar1[4] = param_2[4];
  puVar1[5] = uVar2;
  uVar2 = param_2[7];
  puVar1[6] = param_2[6];
  puVar1[7] = uVar2;
  uVar2 = param_2[9];
  puVar1[8] = param_2[8];
  puVar1[9] = uVar2;
  uVar2 = param_2[0xb];
  puVar1[10] = param_2[10];
  puVar1[0xb] = uVar2;
  uVar2 = param_2[0xd];
  puVar1[0xc] = param_2[0xc];
  puVar1[0xd] = uVar2;
  uVar2 = param_2[0xf];
  puVar1[0xe] = param_2[0xe];
  puVar1[0xf] = uVar2;
  uVar2 = param_2[0x11];
  puVar1[0x10] = param_2[0x10];
  puVar1[0x11] = uVar2;
  uVar2 = param_2[0x13];
  puVar1[0x12] = param_2[0x12];
  puVar1[0x13] = uVar2;
  uVar2 = param_2[0x15];
  puVar1[0x14] = param_2[0x14];
  puVar1[0x15] = uVar2;
  uVar2 = param_2[0x17];
  puVar1[0x16] = param_2[0x16];
  puVar1[0x17] = uVar2;
  uVar2 = param_2[0x19];
  puVar1[0x18] = param_2[0x18];
  puVar1[0x19] = uVar2;
  uVar2 = param_2[0x1b];
  puVar1[0x1a] = param_2[0x1a];
  puVar1[0x1b] = uVar2;
  puVar1[0x1c] = param_2[0x1c];
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0xe8;
  return;
}



