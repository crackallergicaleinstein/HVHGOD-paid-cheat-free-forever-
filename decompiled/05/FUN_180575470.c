// FUN_180575470 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180575470 */

int FUN_180575470(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar6 = -(longlong)param_1;
  if (-1 < param_1) {
    lVar6 = (longlong)param_1;
  }
  iVar1 = (param_1 >> 0x1f & 0xfffffffeU) + 1;
  lVar5 = -(longlong)param_2;
  if (-1 < param_2) {
    lVar5 = (longlong)param_2;
  }
  iVar4 = -iVar1;
  if (-1 < param_2) {
    iVar4 = iVar1;
  }
  if (param_3 < 0) {
    iVar4 = -iVar4;
  }
  uVar3 = -(longlong)param_3;
  if (-1 < param_3) {
    uVar3 = (longlong)param_3;
  }
  if (uVar3 == 0) {
    iVar1 = -0x7fffffff;
    if (-1 < iVar4) {
      iVar1 = 0x7fffffff;
    }
    return iVar1;
  }
  iVar2 = (int)((ulonglong)(lVar5 * lVar6) / uVar3);
  iVar1 = -iVar2;
  if (-1 < iVar4) {
    iVar1 = iVar2;
  }
  return iVar1;
}



