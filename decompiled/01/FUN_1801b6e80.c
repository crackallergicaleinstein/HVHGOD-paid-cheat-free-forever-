// FUN_1801b6e80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801b6e80 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Removing unreachable block (ram,0x0001801b704f) */
/* WARNING: Removing unreachable block (ram,0x0001801b7060) */

void FUN_1801b6e80(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  char *local_68;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  longlong *local_48;
  longlong local_40;
  undefined1 local_38 [8];
  longlong *plStack_30;
  
  puVar1 = (undefined8 *)*param_1;
  puVar6 = (undefined8 *)*puVar1;
  while( true ) {
    if (puVar6 == puVar1) {
      local_40 = 0;
      _local_38 = (undefined1  [16])0x0;
      if (param_2 == param_3) {
        plStack_30 = (longlong *)0x0;
        local_38 = (undefined1  [8])0x0;
      }
      else {
        local_50 = 0;
        local_58 = param_1;
        local_48 = param_1;
        if (DAT_180c7df28 == (undefined8 *)0x0) {
          local_68 = "tier0.dll:g_pMemAlloc";
          local_60 = 0x15;
          DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_68);
        }
        plVar4 = (longlong *)
                 (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x18);
        plVar4[2] = param_2[2];
        plStack_30 = plVar4;
        local_38 = (undefined1  [8])plVar4;
        local_40 = 1;
        plVar2 = plVar4;
        lVar7 = local_40;
        for (param_2 = (undefined8 *)*param_2; local_40 = lVar7, param_2 != param_3;
            param_2 = (undefined8 *)*param_2) {
          local_50 = 0;
          if (DAT_180c7df28 == (undefined8 *)0x0) {
            local_68 = "tier0.dll:g_pMemAlloc";
            local_60 = 0x15;
            DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_68);
          }
          plVar5 = (longlong *)
                   (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x18);
          plVar5[2] = param_2[2];
          *plVar2 = (longlong)plVar5;
          plVar5[1] = (longlong)plVar2;
          local_38 = (undefined1  [8])plVar5;
          lVar7 = lVar7 + 1;
          plVar2 = plVar5;
        }
        plStack_30 = plVar4;
        local_38 = (undefined1  [8])plVar2;
      }
      lVar7 = *param_1;
      if (local_40 != 0) {
        puVar1 = *(undefined8 **)(lVar7 + 8);
        plStack_30[1] = (longlong)puVar1;
        *puVar1 = plStack_30;
        *(longlong *)local_38 = lVar7;
        *(undefined1 (*) [8])(lVar7 + 8) = local_38;
        param_1[1] = param_1[1] + local_40;
      }
      return;
    }
    if (param_2 == param_3) break;
    puVar6[2] = param_2[2];
    puVar6 = (undefined8 *)*puVar6;
    param_2 = (undefined8 *)*param_2;
  }
  if (puVar6 == puVar1) {
    return;
  }
  plVar2 = (longlong *)puVar6[1];
  *plVar2 = (longlong)puVar1;
  puVar1[1] = plVar2;
  lVar7 = 0;
  do {
    puVar3 = (undefined8 *)*puVar6;
    FUN_1804547d0(puVar6,0x18);
    lVar7 = lVar7 + 1;
    puVar6 = puVar3;
  } while (puVar3 != puVar1);
  param_1[1] = param_1[1] - lVar7;
  return;
}



