// FUN_180159c30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180159c30 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

longlong FUN_180159c30(longlong *param_1,undefined1 *param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = param_3;
  while (0 < lVar3) {
    if ((*(longlong *)param_1[8] == 0) || (iVar2 = *(int *)param_1[0xb], iVar2 < 1)) {
      iVar2 = (**(code **)(*param_1 + 0x18))(param_1,*param_2);
      if (iVar2 == -1) break;
      lVar3 = lVar3 + -1;
      lVar4 = 1;
    }
    else {
      lVar4 = lVar3;
      if (iVar2 <= lVar3) {
        lVar4 = (longlong)iVar2;
      }
      FUN_18063aed0(*(longlong *)param_1[8],param_2,lVar4);
      piVar1 = (int *)param_1[0xb];
      lVar3 = lVar3 - lVar4;
      *piVar1 = *piVar1 - (int)lVar4;
      *(longlong *)param_1[8] = *(longlong *)param_1[8] + (longlong)(int)lVar4;
    }
    param_2 = param_2 + lVar4;
  }
  return param_3 - lVar3;
}



