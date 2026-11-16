// FUN_180416fd0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180416fd0 */

void FUN_180416fd0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  puVar2 = *(undefined8 **)(param_1 + 8);
  uVar3 = puVar1[1];
  *puVar2 = *puVar1;
  puVar2[1] = uVar3;
  uVar3 = puVar1[3];
  puVar2[2] = puVar1[2];
  puVar2[3] = uVar3;
  uVar3 = puVar1[5];
  puVar2[4] = puVar1[4];
  puVar2[5] = uVar3;
  uVar3 = puVar1[7];
  puVar2[6] = puVar1[6];
  puVar2[7] = uVar3;
  uVar3 = puVar1[9];
  puVar2[8] = puVar1[8];
  puVar2[9] = uVar3;
  uVar3 = puVar1[0xb];
  puVar2[10] = puVar1[10];
  puVar2[0xb] = uVar3;
  uVar3 = puVar1[0xd];
  puVar2[0xc] = puVar1[0xc];
  puVar2[0xd] = uVar3;
  uVar3 = puVar1[0xf];
  puVar2[0xe] = puVar1[0xe];
  puVar2[0xf] = uVar3;
  uVar3 = puVar1[0x11];
  puVar2[0x10] = puVar1[0x10];
  puVar2[0x11] = uVar3;
  uVar3 = puVar1[0x13];
  puVar2[0x12] = puVar1[0x12];
  puVar2[0x13] = uVar3;
  uVar3 = puVar1[0x15];
  puVar2[0x14] = puVar1[0x14];
  puVar2[0x15] = uVar3;
  *(undefined4 *)(puVar2 + 0x16) = *(undefined4 *)(puVar1 + 0x16);
  if (*(char *)((longlong)puVar2 + 0xb4) == '\0') {
    *(undefined1 *)((longlong)puVar2 + 0xb4) = 1;
  }
  return;
}



