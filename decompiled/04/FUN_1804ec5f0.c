// FUN_1804ec5f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804ec5f0 */

int FUN_1804ec5f0(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  
  lVar3 = (longlong)param_2;
  if (param_3 < 0) {
    param_3 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x6c) + -1;
    if (iVar1 < param_3) {
      param_3 = iVar1;
    }
  }
  if (param_2 != param_3) {
    iVar2 = (int)*(short *)(param_1 + 0x230);
    iVar1 = param_3;
    if (0 < *(short *)(param_1 + 0x230)) {
      if (param_2 < iVar2) {
        iVar1 = iVar2 + -1;
        if (param_3 < iVar2 + -1) {
          iVar1 = param_3;
        }
      }
      else {
        iVar1 = iVar2;
        if (iVar2 <= param_3) {
          iVar1 = param_3;
        }
      }
    }
    lVar5 = (longlong)iVar1;
    iVar2 = -1;
    if (param_2 < iVar1) {
      iVar2 = 1;
    }
    lVar4 = lVar3;
    iVar6 = param_2;
    while( true ) {
      if ((lVar5 <= lVar3) || (lVar5 < lVar4)) {
        if (lVar3 <= lVar5) {
          return iVar1;
        }
        if (lVar4 < lVar5) {
          return iVar1;
        }
      }
      if ((*(byte *)((longlong)*(short *)(*(longlong *)(param_1 + 0x28) + lVar4 * 2) * 0x78 +
                    *(longlong *)(param_1 + 0x18)) & 0x40) != 0) break;
      iVar6 = iVar6 + iVar2;
      lVar4 = lVar4 + iVar2;
    }
    param_3 = iVar6 - iVar2;
    if (iVar6 == param_2) {
      param_3 = param_2;
    }
  }
  return param_3;
}



