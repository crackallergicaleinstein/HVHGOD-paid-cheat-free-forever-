// FUN_180502f00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180502f00 */

int FUN_180502f00(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  
  if ((*(uint *)(param_1 + 4) & 0x40) == 0) {
    iVar1 = ((*(uint *)(param_1 + 4) & 0x80) != 0) + 1;
  }
  else {
    iVar1 = 0;
  }
  iVar2 = 0;
  if ((*(uint *)(param_2 + 4) & 0x40) == 0) {
    iVar2 = ((*(uint *)(param_2 + 4) & 0x80) != 0) + 1;
  }
  if (iVar1 == iVar2) {
    return (int)*(short *)(param_1 + 0x26) - (int)*(short *)(param_2 + 0x26);
  }
  return iVar1 - iVar2;
}



