// FUN_1805c7f70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805c7f70 */

undefined8 FUN_1805c7f70(longlong param_1,short param_2,int *param_3,int *param_4)

{
  short sVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  *param_3 = -1;
  iVar4 = 0;
  *param_4 = -1;
  if (*(short *)(param_1 + 0x1d0) != 0) {
    lVar3 = 0;
    do {
      lVar2 = *(longlong *)(param_1 + 0x1e8);
      if ((*(short *)(lVar2 + 6 + lVar3) == param_2) && (*(short *)(lVar2 + 8 + lVar3) != 0)) {
        if (((*(short *)(lVar2 + lVar3) == 3) &&
            ((sVar1 = *(short *)(lVar2 + 2 + lVar3), sVar1 == 1 || (sVar1 == 0)))) &&
           ((*(short *)(lVar2 + 4 + lVar3) == 0x409 || (*param_3 == -1)))) {
          *param_3 = iVar4;
        }
        if (((*(short *)(lVar2 + lVar3) == 1) && (*(short *)(lVar2 + 2 + lVar3) == 0)) &&
           ((*(short *)(lVar2 + 4 + lVar3) == 0 || (*param_4 == -1)))) {
          *param_4 = iVar4;
        }
      }
      iVar4 = iVar4 + 1;
      lVar3 = lVar3 + 0x18;
    } while (iVar4 < (int)(uint)*(ushort *)(param_1 + 0x1d0));
  }
  if ((*param_3 < 0) && (*param_4 < 0)) {
    return 0;
  }
  return 1;
}



