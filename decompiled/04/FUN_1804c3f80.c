// FUN_1804c3f80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804c3f80 */

longlong FUN_1804c3f80(float *param_1)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar2 = DAT_180bb8ae8;
  lVar5 = 0;
  lVar4 = 0;
  if (*param_1 != 0.0) {
    lVar5 = *(longlong *)(DAT_180bb8ae8 + 0x14d8);
    uVar1 = *(uint *)(lVar5 + 0x14);
    while (((uVar1 >> 0x18 & 1) != 0 &&
           ((*(float *)(lVar5 + 0xa0) == 0.0 || ((uVar1 & 0x210) == 0x10))))) {
      lVar5 = *(longlong *)(lVar5 + 0x3c8);
      uVar1 = *(uint *)(lVar5 + 0x14);
    }
  }
  if (param_1[1] != 0.0) {
    lVar4 = *(longlong *)(DAT_180bb8ae8 + 0x14d8);
    uVar1 = *(uint *)(lVar4 + 0x14);
    while (((uVar1 >> 0x18 & 1) != 0 &&
           ((*(float *)(lVar4 + 0xa4) == 0.0 || ((uVar1 & 0x210) == 0x10))))) {
      lVar4 = *(longlong *)(lVar4 + 0x3c8);
      uVar1 = *(uint *)(lVar4 + 0x14);
    }
  }
  if (lVar5 == 0) {
    if (lVar4 == 0) {
      return 0;
    }
  }
  else if ((lVar5 != lVar4) && (lVar4 != 0)) {
    iVar3 = *(int *)(DAT_180bb8ae8 + 0x1508);
    if (iVar3 == -1) {
      iVar3 = *(int *)(DAT_180bb8ae8 + 4);
      *(int *)(DAT_180bb8ae8 + 0x1508) = iVar3;
    }
    if (((iVar3 != *(int *)(lVar2 + 4)) || (*param_1 == 0.0)) || (param_1[1] == 0.0)) {
      if (*(float *)(lVar2 + 0x151c) != *(float *)(lVar2 + 0x1520)) {
        if (*(float *)(lVar2 + 0x1520) < *(float *)(lVar2 + 0x151c)) {
          lVar4 = lVar5;
        }
        return lVar4;
      }
    }
    *(undefined8 *)(lVar2 + 0x1514) = *(undefined8 *)param_1;
    return 0;
  }
  if (lVar4 == 0) {
    lVar4 = lVar5;
  }
  return lVar4;
}



