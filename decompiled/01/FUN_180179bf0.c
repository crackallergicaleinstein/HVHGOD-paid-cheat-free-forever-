// FUN_180179bf0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180179bf0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

ulonglong FUN_180179bf0(longlong *param_1)

{
  int iVar1;
  int *piVar2;
  longlong *plVar3;
  byte *pbVar4;
  ulonglong uVar5;
  
  if (*(longlong *)param_1[7] != 0) {
    piVar2 = (int *)param_1[10];
    iVar1 = *piVar2;
    if (1 < iVar1) {
      *piVar2 = iVar1 + -1;
      plVar3 = (longlong *)param_1[7];
      *plVar3 = *plVar3 + 1;
      return (ulonglong)*(byte *)*plVar3;
    }
    if (0 < iVar1) {
      *piVar2 = iVar1 + -1;
      pbVar4 = *(byte **)param_1[7];
      *(byte **)param_1[7] = pbVar4 + 1;
      uVar5 = (ulonglong)*pbVar4;
      goto LAB_180179c5e;
    }
  }
  uVar5 = (**(code **)(*param_1 + 0x38))(param_1);
LAB_180179c5e:
  if ((int)uVar5 == -1) {
    return uVar5;
  }
  if ((*(byte **)param_1[7] == (byte *)0x0) || (*(int *)param_1[10] < 1)) {
                    /* WARNING: Could not recover jumptable at 0x00018063a8e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (**(code **)(*param_1 + 0x30))(param_1);
    return uVar5;
  }
  return (ulonglong)**(byte **)param_1[7];
}



