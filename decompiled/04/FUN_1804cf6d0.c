// FUN_1804cf6d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804cf6d0 */

int FUN_1804cf6d0(int *param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  undefined1 local_res10 [8];
  
  if (*param_1 != param_2) {
    *param_1 = param_2;
    *(undefined2 *)((longlong)param_1 + 5) = 0xff00;
    iVar4 = param_1[3];
    if (iVar4 < 0) {
      iVar4 = iVar4 + iVar4 / 2;
      iVar2 = 0;
      if (0 < iVar4) {
        iVar2 = iVar4;
      }
      FUN_1804d13f0(param_1 + 2,iVar2);
    }
    param_1[2] = 0;
    if (0 < param_1[6]) {
      **(undefined1 **)(param_1 + 8) = 0;
    }
    local_res10[0] = 0;
    FUN_1804d0f80(param_1 + 6,0,local_res10);
  }
  *(undefined1 *)(param_1 + 1) = 0;
  if (param_2 != 0) {
    cVar3 = *(char *)((longlong)param_1 + 6);
    if (((-1 < cVar3) && ((int)cVar3 < param_1[2])) &&
       ((*(char *)(*(longlong *)(param_1 + 4) + 5 + (longlong)cVar3 * 0xc) != '\0' ||
        ('\x02' < *(char *)(*(longlong *)(param_1 + 4) + (longlong)cVar3 * 0xc + 4))))) {
      cVar3 = cVar3 + '\x01';
      *(char *)((longlong)param_1 + 6) = cVar3;
    }
    *(bool *)((longlong)param_1 + 5) = (int)cVar3 == param_1[2];
    if (cVar3 == -1) {
      *(undefined1 *)(param_1 + 1) = 1;
      return param_2;
    }
    if ((-1 < cVar3) && ((int)cVar3 < param_1[2])) {
      pcVar1 = (char *)(*(longlong *)(param_1 + 4) + 4 + (longlong)cVar3 * 0xc);
      *pcVar1 = *pcVar1 + '\x01';
      *(undefined1 *)(param_1 + 1) = 1;
      return *(int *)(*(longlong *)(param_1 + 4) + (longlong)*(char *)((longlong)param_1 + 6) * 0xc)
      ;
    }
  }
  return 0;
}



