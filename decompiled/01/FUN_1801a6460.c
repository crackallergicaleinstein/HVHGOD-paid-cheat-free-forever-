// FUN_1801a6460 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801a6460 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 * FUN_1801a6460(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined1 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *local_78;
  longlong *plStack_70;
  longlong *local_68;
  uint uStack_60;
  undefined4 uStack_5c;
  char *local_48;
  undefined8 local_40;
  
  plVar1 = (longlong *)*param_1;
  plVar5 = (longlong *)plVar1[1];
  uStack_60 = 0;
  plVar6 = plVar1;
  if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
    plVar2 = plVar5;
    do {
      plVar5 = plVar2;
      cVar3 = FUN_180114040(plVar5 + 4,param_3);
      if (-1 < cVar3) {
        plVar7 = plVar5;
        plVar6 = plVar5;
      }
      else {
        plVar7 = plVar5 + 2;
      }
      uStack_60 = (uint)(-1 < cVar3);
      plVar2 = (longlong *)*plVar7;
    } while (*(char *)(*plVar7 + 0x19) == '\0');
  }
  local_68 = plVar5;
  if (*(char *)((longlong)plVar6 + 0x19) == '\0') {
    cVar3 = FUN_180114040(param_3,plVar6 + 4);
    if (-1 < cVar3) {
      uVar4 = 0;
      goto LAB_1801a6599;
    }
  }
  if (param_1[1] == 0x3ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_1800a7740();
  }
  plStack_70 = (longlong *)0x0;
  local_78 = param_1;
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_48 = "tier0.dll:g_pMemAlloc";
    local_40 = 0x15;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_48);
  }
  plVar5 = (longlong *)
           (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x40);
  plStack_70 = plVar5;
  FUN_18015b360(plVar5 + 4,param_3);
  *plVar5 = (longlong)plVar1;
  plVar5[1] = (longlong)plVar1;
  plVar5[2] = (longlong)plVar1;
  *(undefined2 *)(plVar5 + 3) = 0;
  plStack_70 = (longlong *)CONCAT44(uStack_5c,uStack_60);
  local_78 = local_68;
  plVar6 = (longlong *)FUN_180140480(param_1,&local_78,plVar5);
  uVar4 = 1;
LAB_1801a6599:
  *param_2 = plVar6;
  *(undefined1 *)(param_2 + 1) = uVar4;
  return param_2;
}



