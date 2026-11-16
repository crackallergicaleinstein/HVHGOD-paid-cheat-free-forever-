// FUN_1800f5b10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800f5b10 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

longlong FUN_1800f5b10(longlong *param_1,undefined1 *param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = param_3;
  if (param_1[0xd] == 0) {
    if (*(longlong *)param_1[8] == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)param_1[0xb];
    }
    if (0 < param_3) {
      if (0 < iVar2) {
        lVar3 = (longlong)iVar2;
        if (param_3 < iVar2) {
          lVar3 = param_3;
        }
        FUN_18063aed0(*(longlong *)param_1[8],param_2,lVar3);
        lVar4 = param_3 - lVar3;
        param_2 = param_2 + lVar3;
        *(int *)param_1[0xb] = *(int *)param_1[0xb] - (int)lVar3;
        *(longlong *)param_1[8] = *(longlong *)param_1[8] + (longlong)(int)lVar3;
        if (lVar4 < 1) goto LAB_1800f5c2c;
      }
      if (param_1[0x10] != 0) {
        lVar3 = FUN_180610c34(param_2,1,lVar4);
        lVar4 = lVar4 - lVar3;
      }
    }
  }
  else {
    while (0 < lVar4) {
      if ((*(longlong *)param_1[8] == 0) || (iVar2 = *(int *)param_1[0xb], iVar2 < 1)) {
        iVar2 = (**(code **)(*param_1 + 0x18))(param_1,*param_2);
        if (iVar2 == -1) break;
        lVar4 = lVar4 + -1;
        lVar3 = 1;
      }
      else {
        lVar3 = lVar4;
        if (iVar2 <= lVar4) {
          lVar3 = (longlong)iVar2;
        }
        FUN_18063aed0(*(longlong *)param_1[8],param_2,lVar3);
        piVar1 = (int *)param_1[0xb];
        lVar4 = lVar4 - lVar3;
        *piVar1 = *piVar1 - (int)lVar3;
        *(longlong *)param_1[8] = *(longlong *)param_1[8] + (longlong)(int)lVar3;
      }
      param_2 = param_2 + lVar3;
    }
  }
LAB_1800f5c2c:
  return param_3 - lVar4;
}



