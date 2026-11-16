// FUN_18061806c - decompiled reference (Ghidra). Not original source, does not compile.

/* 18061806c */

undefined8 FUN_18061806c(longlong param_1,byte param_2)

{
  byte *pbVar1;
  ushort *puVar2;
  uint uVar3;
  byte *pbVar4;
  
  puVar2 = __pctype_func();
  if (-1 < (short)puVar2[param_2]) {
    return 1;
  }
  pbVar4 = *(byte **)(param_1 + 0x18);
  pbVar1 = *(byte **)(param_1 + 0x10);
  if (pbVar4 == pbVar1) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*pbVar4;
    pbVar4 = pbVar4 + 1;
    *(byte **)(param_1 + 0x18) = pbVar4;
  }
  if (uVar3 == *(byte *)(param_1 + 0x39)) {
    return 1;
  }
  if (pbVar4 == *(byte **)(param_1 + 8)) {
LAB_1806180c4:
    if (pbVar4 == *(byte **)(param_1 + 8)) {
      return 0;
    }
    if (pbVar4 != pbVar1) goto LAB_1806180d8;
  }
  else if ((pbVar4 != pbVar1) || (uVar3 != 0xffffffff)) {
    pbVar4 = pbVar4 + -1;
    *(byte **)(param_1 + 0x18) = pbVar4;
    goto LAB_1806180c4;
  }
  if (param_2 == 0xff) {
    return 0;
  }
LAB_1806180d8:
  *(byte **)(param_1 + 0x18) = pbVar4 + -1;
  return 0;
}



