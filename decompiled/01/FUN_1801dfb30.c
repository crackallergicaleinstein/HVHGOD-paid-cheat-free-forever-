// FUN_1801dfb30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801dfb30 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801dfb30(undefined8 *param_1,undefined8 *param_2,int param_3,int *param_4,
                  undefined8 param_5,longlong *param_6)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  ulonglong uVar6;
  char cVar7;
  undefined1 *puVar8;
  int iVar9;
  undefined1 auStack_78 [32];
  undefined8 *local_58 [2];
  longlong local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_78;
  cVar7 = *(char *)((longlong)param_4 + 9);
  iVar3 = *param_4;
  iVar5 = 0;
  iVar9 = 0;
  if (cVar7 == '\0') {
    cVar7 = '\x01';
  }
  if (param_3 < iVar3) {
    if (cVar7 != '\x01') {
      if (cVar7 == '\x02') {
        iVar5 = iVar3 - param_3;
      }
      else if (cVar7 == '\x03') {
        iVar5 = (iVar3 - param_3) / 2;
        iVar9 = (iVar3 - iVar5) - param_3;
      }
      goto LAB_1801dfbb0;
    }
    uVar6 = (ulonglong)*(byte *)((longlong)param_4 + 0xe);
    iVar9 = iVar3 - param_3;
  }
  else {
LAB_1801dfbb0:
    uVar6 = (ulonglong)*(byte *)((longlong)param_4 + 0xe);
    puVar1 = (undefined1 *)((longlong)param_4 + 0xf);
    if (0 < iVar5) {
      puVar8 = puVar1 + uVar6;
      puVar4 = puVar1;
      do {
        for (; puVar4 != puVar8; puVar4 = puVar4 + 1) {
          uVar2 = *puVar4;
          if ((ulonglong)param_2[3] < param_2[2] + 1) {
            (**(code **)*param_2)(param_2);
          }
          *(undefined1 *)(param_2[1] + param_2[2]) = uVar2;
          param_2[2] = param_2[2] + 1;
        }
        iVar5 = iVar5 + -1;
        puVar4 = puVar1;
      } while (0 < iVar5);
      goto LAB_1801dfc2f;
    }
  }
  puVar8 = (undefined1 *)((longlong)param_4 + uVar6 + 0xf);
LAB_1801dfc2f:
  local_48 = *param_6;
  local_40 = param_6[2] - local_48;
  FUN_1801dd3d0(local_58,param_2,&local_48);
  for (; puVar1 = (undefined1 *)((longlong)param_4 + 0xf), 0 < iVar9; iVar9 = iVar9 + -1) {
    for (; puVar1 != puVar8; puVar1 = puVar1 + 1) {
      uVar2 = *puVar1;
      if ((ulonglong)local_58[0][3] < local_58[0][2] + 1) {
        (**(code **)*local_58[0])(local_58[0]);
      }
      *(undefined1 *)(local_58[0][1] + local_58[0][2]) = uVar2;
      local_58[0][2] = local_58[0][2] + 1;
    }
  }
  *param_1 = local_58[0];
}



