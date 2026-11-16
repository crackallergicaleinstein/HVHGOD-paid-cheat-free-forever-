// FUN_18019a380 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18019a380 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

longlong * FUN_18019a380(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  byte bVar6;
  longlong *plVar7;
  ULONGLONG UVar8;
  
  if ((DAT_180bb93a8 != '\0') || (DAT_180b0b4d8 == '\0')) {
    *param_1 = 0;
    param_1[1] = 0;
    return param_1;
  }
  plVar7 = (longlong *)FUN_180113860(&DAT_180bbe948);
  lVar5 = DAT_180bbe940;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  LOCK();
  UNLOCK();
  bVar6 = (byte)DAT_180bbe948;
  DAT_180bbe948 = (longlong)plVar7;
  if ((bVar6 & 3) == 2) {
    FUN_1805fa36c(&DAT_180bbe948);
  }
  if (lVar5 != 0) {
    uVar4 = *(ulonglong *)(lVar5 + 0x90);
    UVar8 = GetTickCount64();
    if (UVar8 < uVar4) {
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
      *param_1 = lVar5;
      param_1[1] = (longlong)plVar7;
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar7 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
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
      goto LAB_18019a481;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
LAB_18019a481:
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar7 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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



