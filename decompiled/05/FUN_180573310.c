// FUN_180573310 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180573310 */

int FUN_180573310(int param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  
  iVar3 = (param_1 >> 0x1f & 0xfffffffeU) + 1;
  uVar4 = -(longlong)param_2;
  if (-1 < param_2) {
    uVar4 = (longlong)param_2;
  }
  iVar5 = -iVar3;
  if (-1 < param_2) {
    iVar5 = iVar3;
  }
  if (uVar4 == 0) {
    iVar3 = -0x7fffffff;
    if (-1 < iVar5) {
      iVar3 = 0x7fffffff;
    }
    return iVar3;
  }
  lVar1 = -(longlong)param_1;
  if (-1 < param_1) {
    lVar1 = (longlong)param_1;
  }
  iVar2 = (int)((lVar1 * 0x10000 + (uVar4 >> 1)) / uVar4);
  iVar3 = -iVar2;
  if (-1 < iVar5) {
    iVar3 = iVar2;
  }
  return iVar3;
}



