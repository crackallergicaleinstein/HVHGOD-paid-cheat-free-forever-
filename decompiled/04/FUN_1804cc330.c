// FUN_1804cc330 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804cc330 */

void FUN_1804cc330(int param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = DAT_180bb8ae8;
  if ((*(uint *)(*(longlong *)(DAT_180bb8ae8 + 0x2228) + 0x14) & 0x8000000) != 0) {
    return;
  }
  iVar4 = (int)*(short *)(*(longlong *)(DAT_180bb8ae8 + 0x2228) + 0xe2);
  lVar2 = FUN_1804cc2a0(param_1 + iVar4,0x80000001);
  if (lVar2 == 0) {
    if (param_1 < 0) {
      iVar3 = *(int *)(lVar1 + 0x1480) + -1;
    }
    else {
      iVar3 = 0;
    }
    lVar2 = FUN_1804cc2a0(iVar3,iVar4);
    if (lVar2 == 0) goto LAB_1804cc3ad;
  }
  *(longlong *)(lVar1 + 0x2230) = lVar2;
  *(longlong *)(lVar1 + 0x2228) = lVar2;
  *(undefined8 *)(lVar1 + 0x225c) = 0;
  *(undefined8 *)(lVar1 + 0x2254) = 0;
LAB_1804cc3ad:
  *(undefined1 *)(lVar1 + 0x224c) = 0;
  return;
}



