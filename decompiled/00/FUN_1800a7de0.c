// FUN_1800a7de0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800a7de0 */

bool FUN_1800a7de0(uint *param_1)

{
  uint *puVar1;
  longlong lVar2;
  uint *puVar3;
  
  puVar3 = param_1;
  if (7 < *(ulonglong *)(param_1 + 6)) {
    puVar3 = *(uint **)param_1;
  }
  lVar2 = *(longlong *)(param_1 + 4) * 2 >> 1;
  if ((lVar2 < 2) || (0x19 < (*puVar3 & 0xffffffdf) - 0x3a0041)) {
    puVar1 = (uint *)FUN_1800a7b00(puVar3,*(longlong *)(param_1 + 4) * 2 + (longlong)puVar3);
    return puVar3 != puVar1;
  }
  if (2 < lVar2) {
    if (((short)puVar3[1] == 0x5c) || ((short)puVar3[1] == 0x2f)) {
      return true;
    }
  }
  return false;
}



