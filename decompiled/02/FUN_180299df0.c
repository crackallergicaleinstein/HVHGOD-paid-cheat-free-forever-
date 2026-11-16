// FUN_180299df0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180299df0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180299df0(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined1 auStack_58 [40];
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_1808d5f00 ^ (ulonglong)auStack_58;
  if (param_1 == param_2) {
LAB_180299ebe:
    if ((param_1 != param_2) && (puVar10 = param_1 + 6, puVar10 != param_2)) {
      plVar9 = param_1 + 5;
      do {
        if ((puVar10[5] == 0) || (*(int *)(puVar10[5] + 8) == 0)) {
          local_30 = ZEXT816(0x180b8e3d0);
          iVar8 = FUN_1805f68d0(&DAT_180b8e3d0);
          if (iVar8 != 0) {
LAB_180299f9f:
                    /* WARNING: Subroutine does not return */
            FUN_1805f6d44(5);
          }
          if (DAT_180b8e41c == 0x7fffffff) {
LAB_180299f8a:
            DAT_180b8e41c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
            FUN_1805f6d44(6);
          }
          local_30[8] = 1;
          FUN_180291a50(puVar10);
          FUN_1805f68fc(&DAT_180b8e3d0);
        }
        else {
          uVar5 = puVar10[1];
          uVar6 = puVar10[2];
          uVar7 = puVar10[3];
          *param_1 = *puVar10;
          param_1[1] = uVar5;
          param_1[2] = uVar6;
          param_1[3] = uVar7;
          lVar2 = puVar10[4];
          lVar3 = puVar10[5];
          puVar10[4] = 0;
          puVar10[5] = 0;
          plVar9[-1] = lVar2;
          plVar4 = (longlong *)*plVar9;
          *plVar9 = lVar3;
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar4 + 0xc);
            iVar8 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*plVar4 + 8))();
            }
          }
          param_1 = param_1 + 6;
          plVar9 = plVar9 + 6;
        }
        puVar10 = puVar10 + 6;
      } while (puVar10 != param_2);
    }
  }
  else {
    do {
      if ((param_1[5] == 0) || (*(int *)(param_1[5] + 8) == 0)) {
        local_30 = ZEXT816(0x180b8e3d0);
        iVar8 = FUN_1805f68d0(&DAT_180b8e3d0);
        if (iVar8 != 0) goto LAB_180299f9f;
        if (DAT_180b8e41c == 0x7fffffff) goto LAB_180299f8a;
        local_30[8] = 1;
        FUN_180291a50(param_1);
        FUN_1805f68fc(&DAT_180b8e3d0);
        goto LAB_180299ebe;
      }
      param_1 = param_1 + 6;
    } while (param_1 != param_2);
  }
}



