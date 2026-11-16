// FUN_180577980 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180577980 */

void FUN_180577980(longlong param_1,uint param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  short *psVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x80);
  psVar3 = (short *)((ulonglong)param_2 * 0x10 + *(longlong *)(param_1 + 0x30));
  *(short *)(lVar1 + 0x18) = (short)(*(int *)(psVar3 + 4) + 0x20 >> 6);
  *(short *)(lVar1 + 0x1a) = (short)(*(int *)(psVar3 + 6) + 0x20 >> 6);
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    *(undefined4 *)(lVar1 + 0x1c) = 0x10000;
    *(undefined4 *)(lVar1 + 0x20) = 0x10000;
    *(undefined4 *)(lVar1 + 0x24) = *(undefined4 *)(psVar3 + 6);
    *(undefined4 *)(lVar1 + 0x28) = 0;
    *(int *)(lVar1 + 0x2c) = (int)*psVar3 << 6;
    *(undefined4 *)(lVar1 + 0x30) = *(undefined4 *)(psVar3 + 4);
    return;
  }
  uVar2 = FUN_180573310(*(undefined4 *)(psVar3 + 4),*(undefined2 *)(param_1 + 0x68));
  *(undefined4 *)(lVar1 + 0x1c) = uVar2;
  uVar2 = FUN_180573310(*(undefined4 *)(psVar3 + 6),*(undefined2 *)(param_1 + 0x68));
  *(undefined4 *)(lVar1 + 0x20) = uVar2;
  FUN_18057baf0(param_1,lVar1 + 0x18);
  return;
}



