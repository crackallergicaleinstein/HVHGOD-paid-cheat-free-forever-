// FUN_1800f61f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800f61f0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1800f61f0(longlong param_1,int param_2)

{
  ulonglong uVar1;
  char *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  char cVar8;
  undefined1 auStack_98 [32];
  undefined1 **local_78;
  undefined1 *local_70;
  ulonglong *local_68;
  longlong *local_60;
  longlong local_48;
  undefined1 *local_40;
  char local_38;
  undefined1 local_37 [7];
  undefined1 local_30 [32];
  ulonglong local_10;
  
  local_10 = DAT_1808d5f00 ^ (ulonglong)auStack_98;
  if (param_2 != -1) {
    uVar1 = **(ulonglong **)(param_1 + 0x40);
    cVar8 = (char)param_2;
    if (uVar1 != 0) {
      iVar5 = **(int **)(param_1 + 0x58);
      if (uVar1 < uVar1 + (longlong)iVar5) {
        **(int **)(param_1 + 0x58) = iVar5 + -1;
        pcVar2 = (char *)**(longlong **)(param_1 + 0x40);
        **(longlong **)(param_1 + 0x40) = (longlong)(pcVar2 + 1);
        *pcVar2 = cVar8;
      }
    }
    if (*(longlong *)(param_1 + 0x80) != 0) {
      if (**(longlong **)(param_1 + 0x18) == param_1 + 0x70) {
        lVar7 = *(longlong *)(param_1 + 0x88);
        uVar3 = *(undefined8 *)(param_1 + 0x90);
        **(longlong **)(param_1 + 0x18) = lVar7;
        **(longlong **)(param_1 + 0x38) = lVar7;
        **(int **)(param_1 + 0x50) = (int)uVar3 - (int)lVar7;
      }
      plVar4 = *(longlong **)(param_1 + 0x68);
      if (plVar4 == (longlong *)0x0) {
      }
      else {
        local_60 = &local_48;
        local_68 = &local_10;
        local_70 = local_30;
        local_78 = &local_40;
        local_38 = cVar8;
        iVar5 = (**(code **)(*plVar4 + 0x38))(plVar4,param_1 + 0x74,&local_38,local_37);
        if ((iVar5 == 0) || (iVar5 == 1)) {
          lVar7 = local_48 - (longlong)local_30;
          if ((lVar7 == 0) ||
             (lVar6 = FUN_180610c34(local_30,1,lVar7,*(undefined8 *)(param_1 + 0x80)),
             lVar7 == lVar6)) {
            *(undefined1 *)(param_1 + 0x71) = 1;
          }
        }
        if (iVar5 != 3) {
        }
        cVar8 = local_38;
      }
      FUN_180611300((int)cVar8,*(undefined8 *)(param_1 + 0x80));
    }
  }
}



