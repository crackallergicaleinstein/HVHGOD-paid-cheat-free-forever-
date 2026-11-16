// FUN_1801b0640 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801b0640 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 * FUN_1801b0640(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  longlong *plStack_60;
  longlong *local_58;
  uint uStack_50;
  undefined4 uStack_4c;
  undefined1 (*local_40) [16];
  
  plVar1 = (longlong *)*param_1;
  plVar2 = (longlong *)plVar1[1];
  uStack_50 = 0;
  cVar5 = *(char *)((longlong)plVar2 + 0x19);
  plVar7 = plVar1;
  local_58 = plVar2;
  while (cVar5 == '\0') {
    local_58 = plVar2;
    cVar5 = FUN_180114040(plVar2 + 4,param_3);
    if (-1 < cVar5) {
      plVar7 = plVar2;
    }
    uStack_50 = (uint)(-1 < cVar5);
    plVar6 = plVar2 + 2;
    if (-1 < cVar5) {
      plVar6 = plVar2;
    }
    plVar2 = (longlong *)*plVar6;
    cVar5 = *(char *)((longlong)plVar2 + 0x19);
  }
  if ((*(char *)((longlong)plVar7 + 0x19) == '\0') &&
     (cVar5 = FUN_180114040(param_3,plVar7 + 4), -1 < cVar5)) {
    *param_2 = plVar7;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  else {
    if (param_1[1] == 0x333333333333333) {
                    /* WARNING: Subroutine does not return */
      FUN_1800a7740();
    }
    plStack_60 = (longlong *)0x0;
    local_68 = param_1;
    if (DAT_180c7df28 == (undefined8 *)0x0) {
      local_78 = (longlong *)0x180827288;
      local_70 = 0x15;
      DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_78);
    }
    plVar7 = (longlong *)
             (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x50);
    local_40 = (undefined1 (*) [16])(plVar7 + 4);
    *local_40 = (undefined1  [16])0x0;
    plVar7[6] = 0;
    plVar7[7] = 0;
    lVar8 = param_3[1];
    lVar3 = param_3[2];
    lVar4 = param_3[3];
    *(undefined8 *)*local_40 = *param_3;
    plVar7[5] = lVar8;
    plVar7[6] = lVar3;
    plVar7[7] = lVar4;
    *(undefined1 *)param_3 = 0;
    param_3[2] = 0;
    param_3[3] = 0xf;
    plVar2 = plVar7 + 8;
    *plVar2 = 0;
    plVar7[9] = 0;
    local_78 = plVar2;
    plStack_60 = plVar7;
    if (DAT_180c7df28 == (undefined8 *)0x0) {
      local_78 = (longlong *)0x180827288;
      local_70 = 0x15;
      DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_78);
    }
    lVar8 = (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x58);
    *(longlong *)lVar8 = lVar8;
    *(longlong *)(lVar8 + 8) = lVar8;
    *(longlong *)(lVar8 + 0x10) = lVar8;
    *(undefined2 *)(lVar8 + 0x18) = 0x101;
    *plVar2 = lVar8;
    *plVar7 = (longlong)plVar1;
    plVar7[1] = (longlong)plVar1;
    plVar7[2] = (longlong)plVar1;
    *(undefined2 *)(plVar7 + 3) = 0;
    plStack_60 = (longlong *)CONCAT44(uStack_4c,uStack_50);
    local_68 = local_58;
    uVar9 = FUN_180140480(param_1,&local_68,plVar7);
    *param_2 = uVar9;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  return param_2;
}



