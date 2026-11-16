// FUN_18054c8d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18054c8d0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 * FUN_18054c8d0(longlong *param_1,undefined8 *param_2,uint *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  longlong *local_58;
  undefined8 uStack_50;
  longlong *local_48;
  uint uStack_40;
  undefined4 uStack_3c;
  char *local_28;
  undefined8 local_20;
  
  plVar1 = (longlong *)*param_1;
  local_48 = (longlong *)plVar1[1];
  uStack_40 = 0;
  plVar5 = plVar1;
  if (*(char *)((longlong)local_48 + 0x19) == '\0') {
    plVar2 = local_48;
    do {
      local_48 = plVar2;
      bVar6 = *param_3 <= *(uint *)((longlong)local_48 + 0x1c);
      if (bVar6) {
        plVar4 = local_48;
        plVar5 = local_48;
      }
      else {
        plVar4 = local_48 + 2;
      }
      uStack_40 = (uint)bVar6;
      plVar2 = (longlong *)*plVar4;
    } while (*(char *)(*plVar4 + 0x19) == '\0');
  }
  if ((*(char *)((longlong)plVar5 + 0x19) == '\0') &&
     (*(uint *)((longlong)plVar5 + 0x1c) <= *param_3)) {
    uVar3 = 0;
  }
  else {
    if (param_1[1] == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_1800a7740();
    }
    uStack_50 = 0;
    local_58 = param_1;
    if (DAT_180c7df28 == (undefined8 *)0x0) {
      local_28 = "tier0.dll:g_pMemAlloc";
      local_20 = 0x15;
      DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_28);
    }
    plVar5 = (longlong *)
             (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x20);
    *(uint *)((longlong)plVar5 + 0x1c) = *param_3;
    *plVar5 = (longlong)plVar1;
    plVar5[1] = (longlong)plVar1;
    plVar5[2] = (longlong)plVar1;
    *(undefined2 *)(plVar5 + 3) = 0;
    uStack_50 = CONCAT44(uStack_3c,uStack_40);
    local_58 = local_48;
    plVar5 = (longlong *)FUN_180140480(param_1,&local_58);
    uVar3 = 1;
  }
  *param_2 = plVar5;
  *(undefined1 *)(param_2 + 1) = uVar3;
  return param_2;
}



