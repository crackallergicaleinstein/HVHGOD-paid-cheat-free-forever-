// FUN_18017c1b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18017c1b0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18017c1b0(char *param_1)

{
  int iVar1;
  undefined8 uVar2;
  DWORD DVar3;
  int *piVar4;
  longlong lVar5;
  DWORD DVar6;
  char *pcVar7;
  undefined1 auStack_58 [32];
  char *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_58;
  piVar4 = *(int **)param_1;
  if (piVar4 != (int *)0x0) {
    pcVar7 = (char *)FUN_180113860(piVar4 + 2);
    if (param_1 == pcVar7) {
      if (*(longlong *)(param_1 + 8) != 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x10) = 0;
      }
      LOCK();
      uVar2 = *(undefined8 *)(piVar4 + 2);
      *(undefined8 *)(piVar4 + 2) = *(undefined8 *)(param_1 + 8);
      UNLOCK();
      if (((byte)uVar2 & 3) == 2) {
        FUN_1805fa36c(piVar4 + 2);
      }
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        if (DAT_180c7df30 == (undefined8 *)0x0) {
          local_38 = "tier0.dll:g_pMemAlloc";
          local_30 = 0x15;
          DAT_180c7df30 = (undefined8 *)FUN_180451750(&local_38);
        }
        (**(code **)(*(longlong *)*DAT_180c7df30 + 0x18))((longlong *)*DAT_180c7df30,piVar4);
      }
    }
    else if (*(longlong *)(param_1 + 0x10) == 0) {
      if ((*(char **)(piVar4 + 4) == param_1) &&
         (DVar3 = piVar4[6], DVar6 = GetCurrentThreadId(), DVar3 != DVar6)) {
        LOCK();
        uVar2 = *(undefined8 *)(piVar4 + 2);
        *(char **)(piVar4 + 2) = pcVar7;
        UNLOCK();
        if (((byte)uVar2 & 3) == 2) {
          FUN_1805fa36c(piVar4 + 2);
        }
        local_38 = param_1;
        if (param_1 == *(char **)(piVar4 + 4)) {
          do {
            FUN_1805fa43c(piVar4 + 4,&local_38,8,0xffffffff);
          } while (local_38 == *(char **)(piVar4 + 4));
        }
        LOCK();
        iVar1 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar1 != 1) {
        }
        if (DAT_180c7df30 == (undefined8 *)0x0) {
          local_38 = "tier0.dll:g_pMemAlloc";
          local_30 = 0x15;
          DAT_180c7df30 = (undefined8 *)FUN_180451750(&local_38);
        }
        (**(code **)(*(longlong *)*DAT_180c7df30 + 0x18))((longlong *)*DAT_180c7df30,piVar4);
      }
      LOCK();
      uVar2 = *(undefined8 *)(piVar4 + 2);
      *(char **)(piVar4 + 2) = pcVar7;
      UNLOCK();
      if (((byte)uVar2 & 3) == 2) {
        FUN_1805fa36c(piVar4 + 2);
      }
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        if (DAT_180c7df30 == (undefined8 *)0x0) {
          local_38 = "tier0.dll:g_pMemAlloc";
          local_30 = 0x15;
          DAT_180c7df30 = (undefined8 *)FUN_180451750(&local_38);
        }
        (**(code **)(*(longlong *)*DAT_180c7df30 + 0x18))((longlong *)*DAT_180c7df30,piVar4);
      }
    }
    else {
      lVar5 = *(longlong *)(param_1 + 8);
      if (lVar5 != 0) {
        *(longlong *)(lVar5 + 0x10) = *(longlong *)(param_1 + 0x10);
      }
      *(longlong *)(*(longlong *)(param_1 + 0x10) + 8) = lVar5;
      LOCK();
      uVar2 = *(undefined8 *)(piVar4 + 2);
      *(char **)(piVar4 + 2) = pcVar7;
      UNLOCK();
      if (((byte)uVar2 & 3) == 2) {
        FUN_1805fa36c(piVar4 + 2);
      }
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        if (DAT_180c7df30 == (undefined8 *)0x0) {
          local_38 = "tier0.dll:g_pMemAlloc";
          local_30 = 0x15;
          DAT_180c7df30 = (undefined8 *)FUN_180451750(&local_38);
        }
        (**(code **)(*(longlong *)*DAT_180c7df30 + 0x18))((longlong *)*DAT_180c7df30,piVar4);
      }
    }
  }
}



