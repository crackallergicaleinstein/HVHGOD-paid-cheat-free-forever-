// FUN_1803bfa60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803bfa60 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1803bfa60(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  char *local_18;
  undefined8 local_10;
  
  lVar4 = *(longlong *)(param_1 + 0x48);
  if (lVar4 != 0) {
    plVar5 = *(longlong **)(lVar4 + 8);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar5 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5);
        }
      }
    }
    if (DAT_180c7df30 == (undefined8 *)0x0) {
      local_18 = "tier0.dll:g_pMemAlloc";
      local_10 = 0x15;
      DAT_180c7df30 = (undefined8 *)FUN_180451750(&local_18);
    }
    (**(code **)(*(longlong *)*DAT_180c7df30 + 0x18))((longlong *)*DAT_180c7df30,lVar4);
  }
  return;
}



