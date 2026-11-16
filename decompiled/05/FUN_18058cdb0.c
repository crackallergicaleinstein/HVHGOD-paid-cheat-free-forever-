// FUN_18058cdb0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18058cdb0 */

void FUN_18058cdb0(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  lVar1 = param_1[6] + (longlong)*(int *)(param_1 + 5) * 4;
  param_1[0x54] = lVar1;
  param_1[0x40] = lVar1 + (ulonglong)*(ushort *)(param_1 + 0x53) * 4;
  FUN_18057abd0(param_1[2],param_1[0x44]);
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  *(undefined4 *)(param_1 + 0x2b) = *(undefined4 *)(param_3 + 0x84);
  uVar3 = *(undefined8 *)(param_3 + 0x6c);
  param_1[0x2f] = *(undefined8 *)(param_3 + 100);
  param_1[0x30] = uVar3;
  *(undefined4 *)(param_1 + 0x31) = *(undefined4 *)(param_3 + 0x74);
  puVar2 = *(undefined8 **)(param_3 + 0x40);
  uVar3 = puVar2[1];
  *(undefined8 *)((longlong)param_1 + 0x15c) = *puVar2;
  *(undefined8 *)((longlong)param_1 + 0x164) = uVar3;
  *(undefined8 *)((longlong)param_1 + 0x16c) = puVar2[2];
  *(undefined4 *)((longlong)param_1 + 0x174) = *(undefined4 *)(puVar2 + 3);
  uVar3 = *(undefined8 *)(param_3 + 0xe0);
  param_1[0x24] = *(undefined8 *)(param_3 + 0xd8);
  param_1[0x25] = uVar3;
  uVar3 = *(undefined8 *)(param_3 + 0xf0);
  param_1[0x26] = *(undefined8 *)(param_3 + 0xe8);
  param_1[0x27] = uVar3;
  uVar3 = *(undefined8 *)(param_3 + 0x100);
  param_1[0x28] = *(undefined8 *)(param_3 + 0xf8);
  param_1[0x29] = uVar3;
  param_1[0x2a] = *(undefined8 *)(param_3 + 0x108);
  return;
}



