// FUN_1804c8740 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804c8740 */

void FUN_1804c8740(longlong param_1,char param_2,uint param_3)

{
  short *psVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  int *piVar6;
  longlong lVar7;
  
  lVar2 = DAT_180bb8ae8;
  if (((param_3 >> 0x18 & 1) == 0) || ((param_3 & 0x14000000) == 0x4000000)) {
    cVar5 = '\0';
  }
  else {
    cVar5 = '\x01';
  }
  if ((param_2 != '\0') || (cVar5 != *(char *)(param_1 + 0xd6))) {
    if (cVar5 == '\0') {
      piVar6 = (int *)(DAT_180bb8ae8 + 0x1480);
      iVar3 = *(int *)(DAT_180bb8ae8 + 0x1484);
      if (*piVar6 == iVar3) {
        iVar4 = *piVar6 + 1;
        if (iVar3 == 0) {
          iVar3 = 8;
        }
        else {
          iVar3 = iVar3 / 2 + iVar3;
        }
        if (iVar4 < iVar3) {
          iVar4 = iVar3;
        }
        FUN_1804d0a80(piVar6,iVar4);
      }
      *(longlong *)(*(longlong *)(lVar2 + 0x1488) + (longlong)*piVar6 * 8) = param_1;
      *piVar6 = *piVar6 + 1;
      iVar3 = *piVar6;
      *(undefined1 *)(param_1 + 0xd6) = 0;
      *(short *)(param_1 + 0xe2) = (short)iVar3 + -1;
      return;
    }
    if ((param_2 == '\0') && (cVar5 != *(char *)(param_1 + 0xd6))) {
      iVar3 = *(int *)(DAT_180bb8ae8 + 0x1480);
      iVar4 = *(short *)(param_1 + 0xe2) + 1;
      if (iVar4 < iVar3) {
        lVar7 = (longlong)iVar4 * 8;
        do {
          lVar7 = lVar7 + 8;
          iVar4 = iVar4 + 1;
          psVar1 = (short *)(*(longlong *)(*(longlong *)(lVar2 + 0x1488) + -8 + lVar7) + 0xe2);
          *psVar1 = *psVar1 + -1;
          iVar3 = *(int *)(lVar2 + 0x1480);
        } while (iVar4 < iVar3);
      }
      lVar7 = *(longlong *)(lVar2 + 0x1488) + (longlong)*(short *)(param_1 + 0xe2) * 8;
      FUN_18063aed0(lVar7,lVar7 + 8,
                    ((longlong)iVar3 - (longlong)*(short *)(param_1 + 0xe2)) * 8 + -8);
      *(int *)(lVar2 + 0x1480) = *(int *)(lVar2 + 0x1480) + -1;
      *(undefined2 *)(param_1 + 0xe2) = 0xffff;
      *(char *)(param_1 + 0xd6) = cVar5;
      return;
    }
  }
  *(char *)(param_1 + 0xd6) = cVar5;
  return;
}



