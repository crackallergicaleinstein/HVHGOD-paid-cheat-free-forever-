// FUN_18056ca10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18056ca10 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 * FUN_18056ca10(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *local_68;
  undefined8 uStack_60;
  longlong *local_58;
  uint uStack_50;
  undefined4 uStack_4c;
  char *local_38;
  undefined8 local_30;
  
  plVar1 = (longlong *)*param_1;
  plVar7 = (longlong *)plVar1[1];
  uStack_50 = 0;
  cVar5 = *(char *)((longlong)plVar7 + 0x19);
  plVar9 = plVar1;
  local_58 = plVar7;
  while (cVar5 == '\0') {
    local_58 = plVar7;
    cVar5 = FUN_180114040(plVar7 + 4,param_3);
    if (-1 < cVar5) {
      plVar9 = plVar7;
    }
    uStack_50 = (uint)(-1 < cVar5);
    plVar6 = plVar7 + 2;
    if (-1 < cVar5) {
      plVar6 = plVar7;
    }
    plVar7 = (longlong *)*plVar6;
    cVar5 = *(char *)((longlong)plVar7 + 0x19);
  }
  if ((*(char *)((longlong)plVar9 + 0x19) == '\0') &&
     (cVar5 = FUN_180114040(param_3,plVar9 + 4), -1 < cVar5)) {
    *param_2 = plVar9;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  else {
    if (param_1[1] == 0x2e8ba2e8ba2e8ba) {
                    /* WARNING: Subroutine does not return */
      FUN_1800a7740();
    }
    uStack_60 = 0;
    local_68 = param_1;
    if (DAT_180c7df28 == (undefined8 *)0x0) {
      local_38 = "tier0.dll:g_pMemAlloc";
      local_30 = 0x15;
      DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_38);
    }
    plVar7 = (longlong *)
             (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x58);
    *(undefined1 (*) [16])(plVar7 + 4) = (undefined1  [16])0x0;
    plVar7[6] = 0;
    plVar7[7] = 0;
    lVar2 = param_3[1];
    lVar3 = param_3[2];
    lVar4 = param_3[3];
    plVar7[4] = *param_3;
    plVar7[5] = lVar2;
    plVar7[6] = lVar3;
    plVar7[7] = lVar4;
    *(undefined1 *)param_3 = 0;
    param_3[2] = 0;
    param_3[3] = 0xf;
    plVar7[8] = 0;
    plVar7[9] = 0;
    plVar7[10] = 0;
    *plVar7 = (longlong)plVar1;
    plVar7[1] = (longlong)plVar1;
    plVar7[2] = (longlong)plVar1;
    *(undefined2 *)(plVar7 + 3) = 0;
    uStack_60 = CONCAT44(uStack_4c,uStack_50);
    local_68 = local_58;
    uVar8 = FUN_180140480(param_1,&local_68,plVar7);
    *param_2 = uVar8;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  return param_2;
}



