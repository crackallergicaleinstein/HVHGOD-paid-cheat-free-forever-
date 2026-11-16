// FUN_1803c9920 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803c9920 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1803c9920(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  
  plVar6 = (longlong *)FUN_180113860(param_1 + 1);
  uVar4 = *param_2;
  *param_2 = *param_1;
  *param_1 = uVar4;
  LOCK();
  uVar4 = param_1[1];
  param_1[1] = param_2[1];
  UNLOCK();
  if (((byte)uVar4 & 3) == 2) {
    FUN_1805fa36c(param_1 + 1);
  }
  param_2[1] = plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  return;
}



