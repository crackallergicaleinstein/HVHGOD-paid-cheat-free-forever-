// FUN_1801b6bf0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801b6bf0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Removing unreachable block (ram,0x0001801b6e1e) */
/* WARNING: Removing unreachable block (ram,0x0001801b6e30) */

void FUN_1801b6bf0(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined1 auVar4 [8];
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  char *local_68;
  undefined8 local_60;
  longlong *local_58;
  longlong local_50;
  undefined1 local_48 [8];
  longlong *plStack_40;
  longlong *local_38;
  
  puVar1 = (undefined8 *)*param_1;
  puVar6 = (undefined8 *)*puVar1;
  local_38 = param_1;
  while( true ) {
    if (puVar6 == puVar1) {
      local_50 = 0;
      _local_48 = (undefined1  [16])0x0;
      if (param_2 == param_3) {
        plStack_40 = (longlong *)0x0;
        local_48 = (undefined1  [8])0x0;
        auVar4 = local_48;
        plVar3 = plStack_40;
      }
      else {
        local_58 = param_1;
        if (DAT_180c7df28 == (undefined8 *)0x0) {
          local_68 = "tier0.dll:g_pMemAlloc";
          local_60 = 0x15;
          DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_68);
        }
        plVar3 = (longlong *)
                 (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x108);
        *(undefined2 *)(plVar3 + 2) = *(undefined2 *)(param_2 + 2);
        FUN_18019f170(plVar3 + 3,param_2 + 3);
        plStack_40 = plVar3;
        local_48 = (undefined1  [8])plVar3;
        local_50 = 1;
        param_2 = (undefined8 *)*param_2;
        plVar7 = plVar3;
        auVar4 = (undefined1  [8])plVar3;
        if (param_2 != param_3) {
          do {
            lVar5 = local_50;
            if (DAT_180c7df28 == (undefined8 *)0x0) {
              local_68 = "tier0.dll:g_pMemAlloc";
              local_60 = 0x15;
              DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_68);
            }
            auVar4 = (undefined1  [8])
                     (**(code **)(*(longlong *)*DAT_180c7df28 + 8))
                               ((longlong *)*DAT_180c7df28,0x108);
            *(undefined2 *)((longlong)auVar4 + 0x10) = *(undefined2 *)(param_2 + 2);
            FUN_18019f170((longlong *)((longlong)auVar4 + 0x18),param_2 + 3);
            *plVar7 = (longlong)auVar4;
            *(longlong **)((longlong)auVar4 + 8) = plVar7;
            local_48 = auVar4;
            local_50 = lVar5 + 1;
            param_2 = (undefined8 *)*param_2;
            plVar7 = (longlong *)auVar4;
          } while (param_2 != param_3);
          param_1 = local_38;
        }
      }
      lVar5 = *param_1;
      if (local_50 != 0) {
        puVar1 = *(undefined8 **)(lVar5 + 8);
        plVar3[1] = (longlong)puVar1;
        *puVar1 = plVar3;
        *(longlong *)auVar4 = lVar5;
        *(undefined1 (*) [8])(lVar5 + 8) = auVar4;
        param_1[1] = param_1[1] + local_50;
      }
      return;
    }
    if (param_2 == param_3) break;
    *(undefined2 *)(puVar6 + 2) = *(undefined2 *)(param_2 + 2);
    FUN_18017edf0(puVar6 + 3,param_2 + 3);
    puVar6 = (undefined8 *)*puVar6;
    param_2 = (undefined8 *)*param_2;
  }
  if (puVar6 == puVar1) {
    return;
  }
  plVar3 = (longlong *)puVar6[1];
  *plVar3 = (longlong)puVar1;
  puVar1[1] = plVar3;
  lVar5 = 0;
  do {
    puVar2 = (undefined8 *)*puVar6;
    FUN_18015c010(puVar6 + 6);
    FUN_1804547d0(puVar6,0x108);
    lVar5 = lVar5 + 1;
    puVar6 = puVar2;
  } while (puVar2 != puVar1);
  param_1[1] = param_1[1] - lVar5;
  return;
}



