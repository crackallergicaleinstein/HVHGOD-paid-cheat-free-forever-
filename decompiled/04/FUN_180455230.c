// FUN_180455230 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180455230 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180455230(longlong *param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  undefined1 auStack_58 [32];
  int local_38;
  undefined1 local_34 [12];
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_58;
  if (param_1 != param_2) {
    iVar5 = local_38;
    do {
      if (*(int *)(*param_1 + 0x10) == 0) {
        lVar4 = *param_1;
        lVar3 = FUN_18017ea70();
        *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + 1;
        bVar1 = false;
        if (lVar4 + 8 != 0) {
          local_38 = 0;
          cVar2 = FUN_1804514f0(&local_38,lVar4 + 8,4);
          if (cVar2 == '\0') {
            bVar1 = false;
          }
          else {
            bVar1 = true;
            iVar5 = local_38;
          }
        }
        lVar4 = FUN_18017ea70();
        if (*(int *)(lVar4 + 4) != 0) {
          *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
        }
        if ((bVar1) && (iVar5 == 1)) break;
      }
      param_1 = param_1 + 1;
    } while (param_1 != param_2);
  }
  if ((param_1 != param_2) && (plVar6 = param_1 + 1, plVar6 != param_2)) {
    iVar5 = local_38;
    do {
      if (*(int *)(*plVar6 + 0x10) == 0) {
        lVar4 = *plVar6;
        lVar3 = FUN_18017ea70();
        *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + 1;
        bVar1 = false;
        if (lVar4 + 8 != 0) {
          local_38 = 0;
          cVar2 = FUN_1804514f0(&local_38,lVar4 + 8,4);
          if (cVar2 == '\0') {
            bVar1 = false;
          }
          else {
            bVar1 = true;
            iVar5 = local_38;
          }
        }
        lVar4 = FUN_18017ea70();
        if (*(int *)(lVar4 + 4) != 0) {
          *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
        }
        if ((!bVar1) || (iVar5 != 1)) goto LAB_180455352;
      }
      else {
LAB_180455352:
        if (param_1 != plVar6) {
          lVar4 = *param_1;
          if (lVar4 != 0) {
            lVar3 = FUN_18017ea70();
            *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + 1;
            FUN_1804551e0(local_34,lVar4,2);
            lVar4 = FUN_18017ea70();
            if (*(int *)(lVar4 + 4) != 0) {
              *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
            }
          }
          *param_1 = *plVar6;
          *plVar6 = 0;
        }
        param_1 = param_1 + 1;
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != param_2);
  }
}



