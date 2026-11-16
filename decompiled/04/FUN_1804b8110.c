// FUN_1804b8110 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804b8110 */

undefined8 FUN_1804b8110(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  short sVar4;
  int iVar5;
  int *piVar6;
  
  uVar3 = _malloc_base();
  lVar2 = DAT_180bb8ae8;
  if (DAT_180bb8ae8 != 0) {
    piVar1 = (int *)(DAT_180bb8ae8 + 4);
    piVar6 = (int *)(DAT_180bb8ae8 + 0x2998 + (longlong)*(short *)(DAT_180bb8ae8 + 0x2994) * 8);
    if (*piVar6 != *piVar1) {
      iVar5 = *(short *)(DAT_180bb8ae8 + 0x2994) + 1;
      sVar4 = (short)iVar5 + (short)(iVar5 / 6) * -6;
      *(short *)(DAT_180bb8ae8 + 0x2994) = sVar4;
      piVar6 = (int *)(lVar2 + ((longlong)sVar4 + 0x533) * 8);
      *piVar6 = *piVar1;
      piVar6[1] = 0;
    }
    if (param_1 != -1) {
      *(short *)(piVar6 + 1) = (short)piVar6[1] + 1;
      *(int *)(lVar2 + 0x298c) = *(int *)(lVar2 + 0x298c) + 1;
      return uVar3;
    }
    *(short *)((longlong)piVar6 + 6) = *(short *)((longlong)piVar6 + 6) + 1;
    *(int *)(lVar2 + 0x2990) = *(int *)(lVar2 + 0x2990) + 1;
  }
  return uVar3;
}



