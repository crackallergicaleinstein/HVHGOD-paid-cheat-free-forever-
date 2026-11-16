// FUN_180159b70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180159b70 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

longlong FUN_180159b70(longlong *param_1,undefined1 *param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = param_3;
  while (0 < lVar3) {
    if ((*(longlong *)param_1[7] == 0) || (iVar2 = *(int *)param_1[10], iVar2 < 1)) {
      iVar2 = (**(code **)(*param_1 + 0x38))(param_1);
      if (iVar2 == -1) break;
      *param_2 = (char)iVar2;
      lVar3 = lVar3 + -1;
      lVar4 = 1;
    }
    else {
      lVar4 = lVar3;
      if (iVar2 <= lVar3) {
        lVar4 = (longlong)iVar2;
      }
      FUN_18063aed0(param_2,*(longlong *)param_1[7],lVar4);
      piVar1 = (int *)param_1[10];
      lVar3 = lVar3 - lVar4;
      *piVar1 = *piVar1 - (int)lVar4;
      *(longlong *)param_1[7] = *(longlong *)param_1[7] + (longlong)(int)lVar4;
    }
    param_2 = param_2 + lVar4;
  }
  return param_3 - lVar3;
}



