// FUN_18055e090 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18055e090 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

longlong * FUN_18055e090(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *local_58;
  longlong *plStack_50;
  longlong *local_48;
  uint uStack_40;
  undefined4 uStack_3c;
  char *local_28;
  undefined8 local_20;
  
  plVar1 = (longlong *)*param_1;
  plVar4 = (longlong *)plVar1[1];
  uStack_40 = 0;
  cVar2 = *(char *)((longlong)plVar4 + 0x19);
  plVar5 = plVar1;
  local_48 = plVar4;
  while (cVar2 == '\0') {
    local_48 = plVar4;
    cVar2 = FUN_180114040(plVar4 + 4,param_2);
    if (-1 < cVar2) {
      plVar5 = plVar4;
    }
    uStack_40 = (uint)(-1 < cVar2);
    plVar3 = plVar4 + 2;
    if (-1 < cVar2) {
      plVar3 = plVar4;
    }
    plVar4 = (longlong *)*plVar3;
    cVar2 = *(char *)((longlong)plVar4 + 0x19);
  }
  if ((*(char *)((longlong)plVar5 + 0x19) != '\0') ||
     (cVar2 = FUN_180114040(param_2,plVar5 + 4), cVar2 < '\0')) {
    if (param_1[1] == 0x38e38e38e38e38e) {
                    /* WARNING: Subroutine does not return */
      FUN_1800a7740();
    }
    plStack_50 = (longlong *)0x0;
    local_58 = param_1;
    if (DAT_180c7df28 == (undefined8 *)0x0) {
      local_28 = "tier0.dll:g_pMemAlloc";
      local_20 = 0x15;
      DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_28);
    }
    plVar4 = (longlong *)
             (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x48);
    plStack_50 = plVar4;
    FUN_18015b360(plVar4 + 4,param_2);
    *(undefined4 *)(plVar4 + 8) = 0;
    *plVar4 = (longlong)plVar1;
    plVar4[1] = (longlong)plVar1;
    plVar4[2] = (longlong)plVar1;
    *(undefined2 *)(plVar4 + 3) = 0;
    plStack_50 = (longlong *)CONCAT44(uStack_3c,uStack_40);
    local_58 = local_48;
    plVar5 = (longlong *)FUN_180140480(param_1,&local_58,plVar4);
  }
  return plVar5 + 8;
}



