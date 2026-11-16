// FUN_18027c350 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18027c350 */

longlong FUN_18027c350(longlong *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  if (((((iVar1 < 0) || (iVar2 = (int)param_1[2], iVar2 < 0)) || ((int)param_1[1] < 0)) ||
      ((((int)param_1[4] < 0 || ((int)param_1[1] < iVar1)) ||
       (((int)param_1[4] < iVar2 || ((iVar1 != 0 && (*param_1 == 0)))))))) ||
     (((iVar2 != 0 && (param_1[3] == 0)) || (iVar3 = iVar1 + iVar2, 0x100000 - iVar2 < iVar1)))) {
    iVar3 = -1;
  }
  if (((param_2 < 0) || (iVar3 < 0)) || (iVar3 <= param_2)) {
    return 0;
  }
  if (param_2 < iVar1) {
    return (longlong)param_2 * 0x70 + *param_1;
  }
  return (longlong)(param_2 - iVar1) * 0x70 + param_1[3];
}



