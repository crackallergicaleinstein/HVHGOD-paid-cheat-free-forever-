// FUN_1804ba180 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804ba180 */

int FUN_1804ba180(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *(uint *)(*param_1 + 0x14);
  uVar2 = *(uint *)(*param_2 + 0x14);
  iVar3 = (uVar1 & 0x4000000) - (uVar2 & 0x4000000);
  if (iVar3 != 0) {
    return iVar3;
  }
  iVar3 = (uVar1 & 0x2000000) - (uVar2 & 0x2000000);
  if (iVar3 == 0) {
    iVar3 = (int)*(short *)(*param_1 + 0xde) - (int)*(short *)(*param_2 + 0xde);
  }
  return iVar3;
}



