// FUN_1806071a4 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806071a4 */

int FUN_1806071a4(longlong param_1,longlong param_2,ulonglong param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar3 = 0;
    pbVar5 = (byte *)((longlong)*(int *)(param_1 + 0x10) + *(longlong *)(param_2 + 8));
    uVar4 = 0;
    iVar2 = -1;
    uVar1 = *pbVar5 & 0xf;
    pbVar5 = pbVar5 + -(longlong)(char)(&DAT_1806acfc0)[uVar1];
    uVar1 = *(uint *)(pbVar5 + -4) >> ((&DAT_1806acfd0)[uVar1] & 0x1f);
    if (uVar1 != 0) {
      do {
        pbVar6 = pbVar5 + -(longlong)(char)(&DAT_1806acfc0)[*pbVar5 & 0xf];
        uVar3 = uVar3 + (*(uint *)(pbVar6 + -4) >> ((&DAT_1806acfd0)[*pbVar5 & 0xf] & 0x1f));
        if (param_3 < (ulonglong)uVar3 + (ulonglong)**(uint **)(param_2 + 0x10) +
                      *(longlong *)(param_2 + 8)) break;
        uVar4 = uVar4 + 1;
        pbVar5 = pbVar6 + -(longlong)(char)(&DAT_1806acfc0)[*pbVar6 & 0xf];
        iVar2 = (*(uint *)(pbVar5 + -4) >> ((&DAT_1806acfd0)[*pbVar6 & 0xf] & 0x1f)) - 1;
      } while (uVar4 < uVar1);
      if (uVar4 == 0) {
        iVar2 = -1;
      }
      return iVar2;
    }
  }
  return -1;
}



