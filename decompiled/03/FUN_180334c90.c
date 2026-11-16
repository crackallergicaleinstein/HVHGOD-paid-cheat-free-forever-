// FUN_180334c90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180334c90 */

void FUN_180334c90(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 == *(undefined8 **)(param_1 + 0x10)) {
    FUN_180338630();
    return;
  }
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *puVar1 = *param_2;
  puVar1[1] = uVar2;
  puVar1[2] = uVar3;
  puVar1[3] = uVar4;
  puVar1[4] = param_2[4];
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x28;
  return;
}



