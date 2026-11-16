// FUN_180264fd0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180264fd0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180264fd0(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  longlong lVar6;
  int *piVar7;
  int *piVar8;
  undefined8 local_res20;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_a0;
  longlong *local_98;
  longlong *local_90;
  int local_88 [8];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_c8;
  local_a8 = (undefined8 *)CONCAT44((int)(param_1[1] - *param_1 >> 2),8);
  local_a0 = (longlong *)CONCAT44(local_a0._4_4_,8);
  local_res20 = param_4;
  local_98 = param_2;
  local_90 = param_1;
  iVar3 = thunk_FUN_1805f8250(&local_a8,(longlong)&local_a0 + 4);
  if (iVar3 < 1) {
    if (*param_1 != param_1[1]) {
      param_1[1] = *param_1;
    }
  }
  else {
    local_a8 = &local_res20;
    local_a0 = param_2;
    FUN_180267a50(*param_1,param_1[1],param_1[1] - *param_1 >> 2,&local_a8);
    piVar8 = (int *)param_1[1];
    iVar5 = 0;
    piVar7 = (int *)*param_1;
    local_88[0] = 0;
    local_88[1] = 0;
    local_88[2] = 0;
    local_88[3] = 0;
    local_88[4] = 0;
    local_88[5] = 0;
    local_88[6] = 0;
    local_88[7] = 0;
    local_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    if (piVar7 != piVar8) {
      lVar6 = 0;
      do {
        iVar1 = *piVar7;
        iVar2 = *(int *)((longlong)iVar1 * 0x98 + 0x24 + *param_2);
        piVar4 = (int *)thunk_FUN_1805f8070(&local_68,local_88 + (longlong)iVar5 + 8,iVar2);
        if (piVar4 == local_88 + (longlong)iVar5 + 8) {
          local_88[lVar6] = iVar1;
          iVar5 = iVar5 + 1;
          local_88[lVar6 + 8] = iVar2;
          lVar6 = lVar6 + 1;
          if (lVar6 == iVar3) break;
        }
        piVar7 = piVar7 + 1;
        param_2 = local_98;
      } while (piVar7 != piVar8);
      param_1 = local_90;
    }
    piVar8 = (int *)*param_1;
    piVar7 = (int *)param_1[1];
    if (piVar8 != piVar7) {
      lVar6 = (longlong)iVar5;
      do {
        iVar1 = *piVar8;
        if (lVar6 == iVar3) break;
        piVar4 = (int *)thunk_FUN_1805f8070(local_88,local_88 + iVar5,iVar1);
        if (piVar4 == local_88 + iVar5) {
          iVar5 = iVar5 + 1;
          local_88[lVar6] = iVar1;
          lVar6 = lVar6 + 1;
        }
        piVar8 = piVar8 + 1;
      } while (piVar8 != piVar7);
    }
    FUN_180267cf0(param_1,local_88,(longlong)iVar5);
  }
}



