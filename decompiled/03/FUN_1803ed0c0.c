// FUN_1803ed0c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803ed0c0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

longlong * FUN_1803ed0c0(longlong *param_1,int param_2,ulonglong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  longlong *plVar7;
  ULONGLONG UVar8;
  longlong lVar9;
  
  if ((1 < param_2 - 4U) || (param_3 == 0)) {
    *param_1 = 0;
    param_1[1] = 0;
    return param_1;
  }
  lVar9 = ((ulonglong)((param_2 - 4U) * 0x10) + (ulonglong)((uint)param_3 & 0xf)) * 0x10;
  plVar7 = (longlong *)FUN_180113860(&DAT_180c62968 + lVar9);
  puVar5 = *(ulonglong **)(&DAT_180c62960 + lVar9);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  LOCK();
  uVar4 = *(undefined8 *)(&DAT_180c62968 + lVar9);
  *(longlong **)(&DAT_180c62968 + lVar9) = plVar7;
  UNLOCK();
  if (((byte)uVar4 & 3) == 2) {
    FUN_1805fa36c(&DAT_180c62968 + lVar9);
  }
  if ((puVar5 != (ulonglong *)0x0) && (puVar5[1] == param_3)) {
    uVar6 = *puVar5;
    UVar8 = GetTickCount64();
    if (UVar8 < uVar6) {
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
      }
      *param_1 = 0;
      param_1[1] = 0;
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
      }
      *param_1 = (longlong)puVar5;
      param_1[1] = (longlong)plVar7;
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar7 + 1;
        lVar9 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
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
      goto LAB_1803ed1c6;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
LAB_1803ed1c6:
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar7 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  return param_1;
}



