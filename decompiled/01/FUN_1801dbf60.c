// FUN_1801dbf60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801dbf60 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8
FUN_1801dbf60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             longlong param_5)

{
  longlong *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 *****local_98;
  longlong *plStack_90;
  undefined4 local_88;
  uint local_78;
  undefined8 *****local_70 [3];
  ulonglong local_58;
  undefined8 *****local_50 [3];
  ulonglong local_38;
  
  local_78 = 0;
  if ((*(char *)(param_4 + 1) == '\0') || (*(char *)(param_4 + 1) == 's')) {
    if (*(char *)((longlong)param_4 + 0xc) == '\0') {
      local_98 = (undefined8 *****)0x1806ff000;
      if ((char)param_3 != '\0') {
        local_98 = (undefined8 *****)&DAT_1806ff008;
      }
      plStack_90 = (longlong *)0xffffffffffffffff;
      do {
        plStack_90 = (longlong *)((longlong)plStack_90 + 1);
      } while (*(char *)((longlong)local_98 + (longlong)plStack_90) != '\0');
      FUN_1801dd2d0(param_1,param_2,&local_98);
    }
    else {
      *(undefined1 *)((longlong)param_4 + 0xc) = 0;
      if (param_5 == 0) {
        plStack_90 = (longlong *)FUN_1805fbf84(1);
      }
      else {
        plStack_90 = *(longlong **)(param_5 + 8);
        (**(code **)(*plStack_90 + 8))();
      }
      plVar1 = (longlong *)FUN_1801ddd40(&local_98);
      if ((plStack_90 != (longlong *)0x0) &&
         (puVar2 = (undefined8 *)(**(code **)(*plStack_90 + 0x10))(), puVar2 != (undefined8 *)0x0))
      {
        (**(code **)*puVar2)(puVar2,1);
      }
      if ((char)param_3 == '\0') {
        (**(code **)(*plVar1 + 0x30))(plVar1,local_70);
        uVar3 = 10;
        local_98 = local_70;
        if (0xf < local_58) {
          local_98 = local_70[0];
        }
      }
      else {
        (**(code **)(*plVar1 + 0x38))(plVar1,local_50);
        uVar3 = 5;
        local_98 = local_50;
        if (0xf < local_38) {
          local_98 = local_50[0];
        }
      }
      local_78 = uVar3;
      FUN_1801dd2d0(param_1,param_2,&local_98,param_4);
      if ((uVar3 & 2) != 0) {
        uVar3 = uVar3 & 0xfffffffd;
        thunk_FUN_18015c010(local_70);
      }
      if ((uVar3 & 1) != 0) {
        thunk_FUN_18015c010(local_50);
      }
    }
  }
  else {
    local_98 = (undefined8 *****)*param_4;
    plStack_90 = (longlong *)param_4[1];
    local_88 = *(undefined4 *)(param_4 + 2);
    FUN_1801dd790(param_1,param_2,param_3,&local_98,param_5);
  }
  return param_1;
}



