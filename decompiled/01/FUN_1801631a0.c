// FUN_1801631a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801631a0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1801631a0(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  DWORD DVar3;
  int iVar4;
  DWORD DVar5;
  DWORD DVar6;
  undefined8 *puVar7;
  bool bVar8;
  longlong lVar9;
  char *local_28;
  undefined8 local_20;
  
  LOCK();
  *(undefined4 *)(param_2 + 2) = 0;
  UNLOCK();
  LOCK();
  *(int *)(param_2 + 1) = (int)param_2[1] + 1;
  UNLOCK();
  param_2[0x17] = param_1;
  bVar8 = true;
  if (*(int *)(param_1 + 0x10) == 0) {
    lVar1 = param_1 + 0x18;
    lVar9 = lVar1;
    iVar4 = FUN_1805f68d0(lVar1);
    if (iVar4 != 0) goto LAB_18016333c;
    if (*(int *)(param_1 + 100) == 0x7fffffff) {
      *(undefined4 *)(param_1 + 100) = 0x7ffffffe;
      goto LAB_180163331;
    }
    if (*(int *)(param_1 + 0x10) == 0) {
      bVar8 = false;
      if (DAT_180c7df28 == (undefined8 *)0x0) {
        local_28 = "tier0.dll:g_pMemAlloc";
        local_20 = 0x15;
        DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_28);
      }
      puVar7 = (undefined8 *)
               (**(code **)(*(longlong *)*DAT_180c7df28 + 8))
                         ((longlong *)*DAT_180c7df28,0x10,param_3,param_4,lVar9);
      if (puVar7 == (undefined8 *)0x0) {
        puVar7 = (undefined8 *)0x0;
      }
      else {
        *puVar7 = param_2;
        puVar7[1] = 0;
      }
      if (*(longlong *)(param_1 + 0x68) == 0) {
        *(undefined8 **)(param_1 + 0x68) = puVar7;
      }
      else {
        *(undefined8 **)(*(longlong *)(param_1 + 0x70) + 8) = puVar7;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar7;
    }
    FUN_1805f68fc(lVar1);
    if (!bVar8) {
      return;
    }
  }
  DVar5 = GetCurrentThreadId();
  LOCK();
  bVar8 = *(DWORD *)(param_2 + 2) == 0;
  if (bVar8) {
    *(DWORD *)(param_2 + 2) = DVar5;
  }
  UNLOCK();
  if (bVar8) {
    (**(code **)(*param_2 + 0x10))(param_2);
    LOCK();
    DVar3 = *(DWORD *)(param_2 + 2);
    if (DVar5 == DVar3) {
      *(DWORD *)(param_2 + 2) = 3;
      DVar6 = DVar5;
    }
    else {
      DVar6 = DVar3;
    }
    UNLOCK();
    if (DVar5 != DVar3) {
      DVar5 = DVar6;
    }
    if (DVar5 == 2) {
      iVar4 = FUN_1805f68d0(param_2 + 0xc);
      if (iVar4 != 0) {
LAB_18016333c:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (*(int *)((longlong)param_2 + 0xac) == 0x7fffffff) {
        *(undefined4 *)((longlong)param_2 + 0xac) = 0x7ffffffe;
LAB_180163331:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      *(undefined1 *)(param_2 + 0x16) = 1;
      FUN_1805f68fc(param_2 + 0xc);
      FUN_1805f6a54(param_2 + 3);
    }
  }
  LOCK();
  plVar2 = param_2 + 1;
  lVar1 = *plVar2;
  *(int *)plVar2 = (int)*plVar2 + -1;
  UNLOCK();
  if ((int)lVar1 == 1) {
    (**(code **)(*param_2 + 8))(param_2);
  }
  return;
}



