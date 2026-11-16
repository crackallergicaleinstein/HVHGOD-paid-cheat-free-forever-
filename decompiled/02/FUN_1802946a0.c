// FUN_1802946a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802946a0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1802946a0(undefined8 *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 local_68;
  undefined8 local_60;
  undefined *local_58;
  longlong local_50;
  longlong lStack_48;
  longlong lStack_40;
  longlong lStack_38;
  undefined1 local_30 [24];
  
  local_58 = &DAT_1808e3940;
  iVar6 = FUN_1805f68d0(&DAT_1808e3940);
  if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_1808e398c == 0x7fffffff) {
    DAT_1808e398c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  puVar3 = (undefined8 *)param_1[0xf];
  for (puVar4 = (undefined8 *)*puVar3; puVar4 != puVar3; puVar4 = (undefined8 *)*puVar4) {
    local_50 = puVar4[3];
    lStack_48 = puVar4[4];
    lStack_40 = puVar4[5];
    lStack_38 = puVar4[6];
    local_30._0_16_ = (undefined1  [16])0x0;
    lVar5 = puVar4[0xe];
    lVar8 = 0;
    lVar9 = 0;
    if (lVar5 != 0) {
      lVar8 = puVar4[0xd];
      local_30._8_8_ = lVar5;
      local_30._0_8_ = lVar8;
      LOCK();
      *(int *)(lVar5 + 0xc) = *(int *)(lVar5 + 0xc) + 1;
      UNLOCK();
      lVar9 = lVar5;
    }
    plVar7 = (longlong *)param_1[3];
    if (plVar7 == (longlong *)param_1[4]) {
      FUN_180299fb0(param_1 + 2,plVar7,&local_50);
      plVar7 = (longlong *)local_30._8_8_;
    }
    else {
      *plVar7 = local_50;
      plVar7[1] = lStack_48;
      plVar7[2] = lStack_40;
      plVar7[3] = lStack_38;
      plVar7[4] = lVar8;
      plVar7[5] = lVar9;
      param_1[3] = param_1[3] + 0x30;
      plVar7 = (longlong *)0x0;
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar7 + 8))();
      }
    }
  }
  if (param_1[0x10] != 0) {
    if ((ulonglong)param_1[0x10] < (ulonglong)param_1[0x15] >> 3) {
      FUN_1802995d0(param_1 + 0xe,*(undefined8 *)param_1[0xf],(undefined8 *)param_1[0xf]);
    }
    else {
      FUN_1801b6980();
      *(undefined8 *)param_1[0xf] = param_1[0xf];
      *(undefined8 *)(param_1[0xf] + 8) = param_1[0xf];
      param_1[0x10] = 0;
      local_68 = param_1[0xf];
      FUN_1800f9880(param_1[0x11],param_1[0x12],&local_68);
    }
  }
  local_60 = FUN_180113860(param_1 + 1);
  local_68 = *param_1;
  *param_1 = 0;
  LOCK();
  uVar2 = param_1[1];
  param_1[1] = 0;
  UNLOCK();
  if (((byte)uVar2 & 3) == 2) {
    FUN_1805fa36c(param_1 + 1);
  }
  FUN_1800efed0(&local_68);
  if (param_1[0x18] != 0) {
    if ((ulonglong)param_1[0x18] < (ulonglong)param_1[0x1d] >> 3) {
      FUN_1802995d0(param_1 + 0x16,*(undefined8 *)param_1[0x17],(undefined8 *)param_1[0x17]);
    }
    else {
      FUN_1801b6980();
      *(undefined8 *)param_1[0x17] = param_1[0x17];
      *(undefined8 *)(param_1[0x17] + 8) = param_1[0x17];
      param_1[0x18] = 0;
      local_68 = param_1[0x17];
      FUN_1800f9880(param_1[0x19],param_1[0x1a],&local_68);
    }
  }
  if (param_1[8] != 0) {
    if ((ulonglong)param_1[8] < (ulonglong)param_1[0xd] >> 3) {
      FUN_180299870(param_1 + 6,*(undefined8 *)param_1[7],(undefined8 *)param_1[7]);
    }
    else {
      FUN_1801b6a00();
      *(undefined8 *)param_1[7] = param_1[7];
      *(undefined8 *)(param_1[7] + 8) = param_1[7];
      param_1[8] = 0;
      local_68 = param_1[7];
      FUN_1800f9880(param_1[9],param_1[10],&local_68);
    }
  }
  FUN_180294580(param_1);
  FUN_1805f68fc(&DAT_1808e3940);
  return;
}



