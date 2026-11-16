// FUN_1805788b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805788b0 */

byte FUN_1805788b0(longlong param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = 0;
  if (*(code **)(param_1 + 0x20) == (code *)0x0) {
    if (*(uint *)(param_1 + 8) < param_2) {
      return 0x55;
    }
  }
  else {
    iVar2 = (**(code **)(param_1 + 0x20))(param_1,param_2,0,0);
    bVar1 = -(iVar2 != 0) & 0x55;
    if (iVar2 != 0) {
      return bVar1;
    }
  }
  *(uint *)(param_1 + 0xc) = param_2;
  return bVar1;
}



