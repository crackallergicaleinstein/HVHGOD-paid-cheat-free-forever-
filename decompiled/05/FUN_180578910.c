// FUN_180578910 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180578910 */

byte FUN_180578910(longlong param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2 < 0) {
    return 0x55;
  }
  bVar1 = 0;
  uVar3 = *(int *)(param_1 + 0xc) + param_2;
  if (*(code **)(param_1 + 0x20) == (code *)0x0) {
    if (*(uint *)(param_1 + 8) < uVar3) {
      return 0x55;
    }
  }
  else {
    iVar2 = (**(code **)(param_1 + 0x20))(param_1,uVar3,0,0);
    bVar1 = -(iVar2 != 0) & 0x55;
    if (iVar2 != 0) {
      return bVar1;
    }
  }
  *(uint *)(param_1 + 0xc) = uVar3;
  return bVar1;
}



