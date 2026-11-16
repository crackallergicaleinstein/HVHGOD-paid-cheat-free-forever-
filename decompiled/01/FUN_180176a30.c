// FUN_180176a30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180176a30 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180176a30(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  bool bVar6;
  longlong *local_18;
  longlong *plStack_10;
  
  lVar4 = *(longlong *)(param_1 + 200);
  if (lVar4 == 0) {
LAB_180176a6e:
    local_18 = (longlong *)0x0;
    plStack_10 = (longlong *)0x0;
  }
  else {
    iVar5 = *(int *)(lVar4 + 8);
    do {
      if (iVar5 == 0) goto LAB_180176a6e;
      LOCK();
      iVar3 = *(int *)(lVar4 + 8);
      bVar6 = iVar5 == iVar3;
      if (bVar6) {
        *(int *)(lVar4 + 8) = iVar5 + 1;
      }
      else {
        iVar5 = iVar3;
      }
      UNLOCK();
    } while (!bVar6);
    local_18 = *(longlong **)(param_1 + 0xc0);
    plStack_10 = *(longlong **)(param_1 + 200);
  }
  if (local_18 != (longlong *)0x0) {
    (**(code **)(*local_18 + 8))(local_18,0,0,0,local_18 + 2);
  }
  if (plStack_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_10 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_10)(plStack_10);
      LOCK();
      piVar2 = (int *)((longlong)plStack_10 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plStack_10 + 8))(plStack_10);
      }
    }
  }
  return;
}



