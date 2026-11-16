// FUN_180163880 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180163880 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180163880(longlong param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 (*pauVar7) [16];
  longlong *local_28;
  undefined8 local_20;
  undefined1 local_18 [16];
  
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_28 = (longlong *)0x180827288;
    local_20 = 0x15;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_28);
  }
  plVar5 = (longlong *)
           (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x40);
  local_18._0_8_ = plVar5;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = (longlong *)0x0;
  }
  else {
    plVar5[7] = 0;
    puVar3 = *(undefined8 **)(param_1 + 0x38);
    local_28 = plVar5;
    if (puVar3 != (undefined8 *)0x0) {
      lVar6 = (**(code **)*puVar3)(puVar3,plVar5);
      plVar5[7] = lVar6;
    }
  }
  if (param_2 == -1) {
    local_28 = plVar5;
    if ((longlong *)plVar5[7] == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805fa874();
    }
    (**(code **)(*(longlong *)plVar5[7] + 0x10))();
    plVar4 = (longlong *)plVar5[7];
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x20))(plVar4,plVar4 != plVar5);
      plVar5[7] = 0;
    }
    if (DAT_180c7df30 == (undefined8 *)0x0) {
      local_28 = (longlong *)0x180827288;
      local_20 = 0x15;
      DAT_180c7df30 = (undefined8 *)FUN_180451750(&local_28);
    }
    (**(code **)(*(longlong *)*DAT_180c7df30 + 0x18))((longlong *)*DAT_180c7df30,plVar5);
  }
  else {
    local_18 = (undefined1  [16])0x0;
    pauVar7 = (undefined1 (*) [16])FUN_180163070();
    if (*(longlong *)(*pauVar7 + 8) != 0) {
      LOCK();
      piVar1 = (int *)(*(longlong *)(*pauVar7 + 8) + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    plVar4 = *(longlong **)(*pauVar7 + 8);
    local_18 = *pauVar7;
    if (*(undefined8 **)*pauVar7 == (undefined8 *)0x0) {
      FUN_180162f30(&local_28,FUN_180163760,plVar5);
    }
    else {
      (**(code **)**(undefined8 **)*pauVar7)();
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar4 + 1;
      lVar6 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4);
        }
      }
    }
  }
  return;
}



