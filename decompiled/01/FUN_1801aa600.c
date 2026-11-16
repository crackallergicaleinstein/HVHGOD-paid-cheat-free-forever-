// FUN_1801aa600 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801aa600 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1801aa600(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  byte bVar5;
  longlong lVar6;
  longlong *plVar7;
  
  plVar7 = (longlong *)FUN_180113860(&DAT_180bbe9d8);
  uVar4 = *param_2;
  *param_2 = DAT_180bbe9d0;
  LOCK();
  UNLOCK();
  bVar5 = (byte)DAT_180bbe9d8;
  DAT_180bbe9d0 = uVar4;
  DAT_180bbe9d8 = param_2[1];
  if ((bVar5 & 3) == 2) {
    FUN_1805fa36c(&DAT_180bbe9d8);
  }
  param_2[1] = plVar7;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar7 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7);
      }
    }
  }
  return;
}



