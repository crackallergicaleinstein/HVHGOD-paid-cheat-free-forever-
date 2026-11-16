// FUN_18057a660 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18057a660 */

ulonglong FUN_18057a660(longlong param_1,int param_2,uint param_3,uint param_4,int *param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = 0;
  iVar5 = 0x400;
  if ((param_4 & 1) != 0) {
    iVar5 = 1;
  }
  lVar1 = *(longlong *)(param_1 + 0x78);
  if (param_3 == 0) {
    uVar3 = 0;
  }
  else {
    do {
      uVar2 = FUN_180574690(param_1,uVar4 + param_2,param_4 | 0x100);
      uVar3 = uVar2 & 0xffffffff;
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      uVar4 = uVar4 + 1;
      *param_5 = iVar5 * *(int *)((((ulonglong)(param_4 & 0x10) | 0x160) >> 2) + lVar1);
      param_5 = param_5 + 1;
    } while (uVar4 < param_3);
  }
  return uVar3;
}



