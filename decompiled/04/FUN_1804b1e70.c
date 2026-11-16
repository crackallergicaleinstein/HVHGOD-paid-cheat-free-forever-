// FUN_1804b1e70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804b1e70 */

void FUN_1804b1e70(int *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  lVar2 = *(longlong *)(param_1 + 0xc);
  if (lVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 10);
    if ((*(byte *)(lVar3 + 0x28cc) & 0x20) != 0) {
      FUN_1804cf3e0("Clipper: End() in \'%s\'\n",*(undefined8 *)(*(longlong *)(lVar3 + 0x14d0) + 8))
      ;
    }
    if (((uint)param_1[3] < 0x7fffffff) && (-1 < *param_1)) {
      FUN_1804b1f30(param_1);
    }
    *(undefined4 *)(lVar2 + 0xc) = *(undefined4 *)(lVar2 + 0x18);
    iVar1 = *(int *)(lVar3 + 0x2320);
    iVar4 = iVar1 + -1;
    *(int *)(lVar3 + 0x2320) = iVar4;
    if (0 < iVar4) {
      lVar2 = (longlong)iVar1 + -2;
      *(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 0x2330) + lVar2 * 0x28) + 0x30) =
           *(longlong *)(lVar3 + 0x2330) + lVar2 * 0x28;
    }
    param_1[0xc] = 0;
    param_1[0xd] = 0;
  }
  param_1[1] = param_1[3];
  *param_1 = param_1[3];
  param_1[3] = -1;
  return;
}



