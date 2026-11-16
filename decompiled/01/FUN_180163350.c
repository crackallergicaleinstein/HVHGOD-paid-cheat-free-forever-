// FUN_180163350 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180163350 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180163350(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong *plVar8;
  longlong *plVar9;
  char *local_48;
  undefined8 local_40;
  longlong local_38;
  
  bVar3 = false;
  local_38 = param_1 + 0x18;
  iVar5 = FUN_1805f68d0();
  if (iVar5 != 0) {
LAB_1801634fb:
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (*(int *)(param_1 + 100) == 0x7fffffff) {
    *(undefined4 *)(param_1 + 100) = 0x7ffffffe;
LAB_1801634f0:
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  if (*(longlong **)(param_1 + 0x68) == (longlong *)0x0) {
    bVar3 = true;
  }
  else {
    plVar8 = (longlong *)0x0;
    plVar9 = *(longlong **)(param_1 + 0x68);
    do {
      plVar2 = (longlong *)plVar9[1];
      if ((longlong *)*plVar9 == param_2) {
        if (plVar8 == (longlong *)0x0) {
          *(longlong **)(param_1 + 0x68) = plVar2;
        }
        else {
          plVar8[1] = (longlong)plVar2;
        }
        if (plVar9[1] == 0) {
          *(longlong **)(param_1 + 0x70) = plVar8;
        }
        if (DAT_180c7df30 == (undefined8 *)0x0) {
          local_48 = "tier0.dll:g_pMemAlloc";
          local_40 = 0x15;
          DAT_180c7df30 = (undefined8 *)FUN_180451750(&local_48);
        }
        (**(code **)(*(longlong *)*DAT_180c7df30 + 0x18))((longlong *)*DAT_180c7df30,plVar9);
        break;
      }
      plVar8 = plVar9;
      plVar9 = plVar2;
    } while (plVar2 != (longlong *)0x0);
    LOCK();
    *(undefined4 *)(param_2 + 2) = 2;
    UNLOCK();
    LOCK();
    plVar8 = param_2 + 1;
    lVar4 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)(*param_2 + 8))(param_2);
    }
  }
  FUN_1805f68fc(param_1 + 0x18);
  if (bVar3) {
    DVar6 = 0;
    LOCK();
    DVar7 = *(DWORD *)(param_2 + 2);
    if (DVar7 == 0) {
      *(DWORD *)(param_2 + 2) = 1;
    }
    else {
      DVar6 = DVar7;
    }
    UNLOCK();
    if ((((DVar7 != 0) && (DVar6 != 0)) && (DVar6 != 1)) &&
       (((DVar6 != 2 && (DVar6 != 3)) && (DVar7 = GetCurrentThreadId(), DVar6 != DVar7)))) {
      LOCK();
      lVar4 = param_2[2];
      *(int *)(param_2 + 2) = 2;
      UNLOCK();
      if ((int)lVar4 != 3) {
        iVar5 = FUN_1805f68d0(param_2 + 0xc);
        if (iVar5 != 0) goto LAB_1801634fb;
        if (*(int *)((longlong)param_2 + 0xac) == 0x7fffffff) {
          *(undefined4 *)((longlong)param_2 + 0xac) = 0x7ffffffe;
          goto LAB_1801634f0;
        }
        cVar1 = (char)param_2[0x16];
        while (cVar1 == '\0') {
          FUN_1805f6a84(param_2 + 3,param_2 + 0xc);
          cVar1 = (char)param_2[0x16];
        }
        FUN_1805f68fc(param_2 + 0xc);
      }
    }
  }
  return;
}



