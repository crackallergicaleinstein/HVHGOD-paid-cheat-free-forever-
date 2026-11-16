// FUN_1804d9530 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804d9530 */

void FUN_1804d9530(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  undefined8 local_18;
  undefined8 uStack_10;
  
  iVar2 = *(int *)(param_1 + 0xb0);
  iVar3 = iVar2 + -1;
  *(int *)(param_1 + 0xb0) = iVar3;
  if (iVar3 == 0) {
    local_18 = 0;
    uStack_10 = 0;
  }
  else {
    puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0xb8) + ((longlong)iVar2 + -2) * 0x10);
    local_18 = *puVar1;
    uStack_10 = puVar1[1];
  }
  *(undefined8 *)(param_1 + 0x70) = local_18;
  *(undefined8 *)(param_1 + 0x78) = uStack_10;
  FUN_1804d92c0(param_1);
  return;
}



