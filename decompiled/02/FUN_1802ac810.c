// FUN_1802ac810 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802ac810 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

longlong * FUN_1802ac810(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  
  if (param_2 == param_3) {
    return param_3;
  }
  puVar1 = *(undefined8 **)(param_1 + 8);
  lVar2 = *(longlong *)(param_1 + 0x18);
  puVar3 = (undefined8 *)param_2[1];
  plVar6 = (longlong *)
           ((((ulonglong)*(byte *)((longlong)param_2 + 0x17) ^
             ((((((((ulonglong)*(byte *)(param_2 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)param_2 + 0x11)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)param_2 + 0x12)) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)param_2 + 0x13)) * 0x100000001b3 ^
               (ulonglong)*(byte *)((longlong)param_2 + 0x14)) * 0x100000001b3 ^
              (ulonglong)*(byte *)((longlong)param_2 + 0x15)) * 0x100000001b3 ^
             (ulonglong)*(byte *)((longlong)param_2 + 0x16)) * 0x100000001b3) * 0x100000001b3 &
            *(ulonglong *)(param_1 + 0x30)) * 0x10 + lVar2);
  plVar4 = (longlong *)*plVar6;
  plVar8 = (longlong *)plVar6[1];
  plVar10 = param_2;
  while( true ) {
    plVar9 = (longlong *)*plVar10;
    plVar5 = (longlong *)plVar10[3];
    if (plVar5 != (longlong *)0x0) {
      plVar10[3] = 0;
      (**(code **)(*plVar5 + 0x10))();
    }
    FUN_1804547d0(plVar10,0x28);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
    if (plVar10 == plVar8) break;
    plVar10 = plVar9;
    if (plVar9 == param_3) {
      if (plVar4 == param_2) {
        *plVar6 = (longlong)plVar9;
      }
LAB_1802aca4a:
      *puVar3 = plVar9;
      plVar9[1] = (longlong)puVar3;
      return param_3;
    }
  }
  if (plVar4 == param_2) {
    *plVar6 = (longlong)puVar1;
    puVar7 = puVar1;
  }
  else {
    puVar7 = puVar3;
  }
  plVar6[1] = (longlong)puVar7;
  while (plVar9 != param_3) {
    plVar10 = (longlong *)
              (((((((((((ulonglong)*(byte *)(plVar9 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                      (ulonglong)*(byte *)((longlong)plVar9 + 0x11)) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar9 + 0x12)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar9 + 0x13)) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar9 + 0x14)) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar9 + 0x15)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar9 + 0x16)) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)plVar9 + 0x17)) * 0x100000001b3 &
               *(ulonglong *)(param_1 + 0x30)) * 0x10 + lVar2);
    plVar4 = (longlong *)plVar10[1];
    plVar8 = plVar9;
    while( true ) {
      plVar9 = (longlong *)*plVar8;
      plVar6 = (longlong *)plVar8[3];
      if (plVar6 != (longlong *)0x0) {
        plVar8[3] = 0;
        (**(code **)(*plVar6 + 0x10))();
      }
      FUN_1804547d0(plVar8,0x28);
      *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
      if (plVar8 == plVar4) break;
      plVar8 = plVar9;
      if (plVar9 == param_3) {
        *plVar10 = (longlong)plVar9;
        goto LAB_1802aca4a;
      }
    }
    *plVar10 = (longlong)puVar1;
    plVar10[1] = (longlong)puVar1;
  }
  goto LAB_1802aca4a;
}



