// FUN_18027c2f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18027c2f0 */

int FUN_18027c2f0(longlong *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  if (((((((iVar1 < 0) || (iVar2 = (int)param_1[2], iVar2 < 0)) || ((int)param_1[1] < 0)) ||
        (((int)param_1[4] < 0 || ((int)param_1[1] < iVar1)))) ||
       (((int)param_1[4] < iVar2 || ((iVar1 != 0 && (*param_1 == 0)))))) ||
      ((iVar2 != 0 && (param_1[3] == 0)))) || (iVar3 = iVar1 + iVar2, 0x100000 - iVar2 < iVar1)) {
    iVar3 = -1;
  }
  return iVar3;
}



