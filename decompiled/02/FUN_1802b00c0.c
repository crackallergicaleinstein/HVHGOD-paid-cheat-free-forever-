// FUN_1802b00c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802b00c0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_1802b00c0(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  byte bVar7;
  int iVar8;
  longlong *plVar9;
  ULONGLONG UVar10;
  code *pcVar11;
  longlong *plVar12;
  char cStack_50;
  
  plVar9 = (longlong *)FUN_180113860(&DAT_180bbf078,param_2,param_3,param_4,(undefined1  [16])0x0);
  plVar12 = DAT_180bbf070;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  LOCK();
  UNLOCK();
  bVar7 = (byte)DAT_180bbf078;
  DAT_180bbf078 = (longlong)plVar9;
  if ((bVar7 & 3) == 2) {
    FUN_1805fa36c(&DAT_180bbf078);
  }
  AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  uVar6 = uRam0000000180bb88b8;
  lVar5 = lRam0000000180bb8898;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  if (((plVar12 == (longlong *)0x0) || (cStack_50 = (char)uVar6, cStack_50 == '\0')) ||
     (*plVar12 != lVar5)) {
    *(undefined1 *)(param_1 + 6) = 0;
    if (plVar9 == (longlong *)0x0) {
      return param_1;
    }
    LOCK();
    plVar12 = plVar9 + 1;
    lVar5 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar5 != 1) {
      return param_1;
    }
    (**(code **)*plVar9)(plVar9);
    LOCK();
    piVar1 = (int *)((longlong)plVar9 + 0xc);
    iVar8 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar8 != 1) {
      return param_1;
    }
    pcVar11 = *(code **)(*plVar9 + 8);
  }
  else {
    UVar10 = GetTickCount64();
    plVar2 = (longlong *)plVar12[8];
    for (plVar12 = (longlong *)plVar12[7]; plVar12 != plVar2; plVar12 = plVar12 + 6) {
      if (((*plVar12 == param_2) && (*(char *)((longlong)plVar12 + 0x29) != '\0')) &&
         (((ulonglong)plVar12[4] <= UVar10 &&
          ((UVar10 - plVar12[4] < 0xfb && (iVar8 = FUN_1802aff10(param_2), iVar8 == (int)plVar12[1])
           ))))) {
        lVar5 = plVar12[1];
        lVar3 = plVar12[2];
        lVar4 = plVar12[3];
        *param_1 = *plVar12;
        param_1[1] = lVar5;
        param_1[2] = lVar3;
        param_1[3] = lVar4;
        lVar5 = plVar12[5];
        param_1[4] = plVar12[4];
        param_1[5] = lVar5;
        *(undefined1 *)(param_1 + 6) = 1;
        if (plVar9 == (longlong *)0x0) {
          return param_1;
        }
        LOCK();
        plVar12 = plVar9 + 1;
        lVar5 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar5 != 1) {
          return param_1;
        }
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 != 1) {
          return param_1;
        }
        pcVar11 = *(code **)(*plVar9 + 8);
        goto LAB_1802b02bf;
      }
    }
    *(undefined1 *)(param_1 + 6) = 0;
    if (plVar9 == (longlong *)0x0) {
      return param_1;
    }
    LOCK();
    plVar12 = plVar9 + 1;
    lVar5 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar5 != 1) {
      return param_1;
    }
    (**(code **)*plVar9)(plVar9);
    LOCK();
    piVar1 = (int *)((longlong)plVar9 + 0xc);
    iVar8 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar8 != 1) {
      return param_1;
    }
    pcVar11 = *(code **)(*plVar9 + 8);
  }
LAB_1802b02bf:
  (*pcVar11)(plVar9);
  return param_1;
}



