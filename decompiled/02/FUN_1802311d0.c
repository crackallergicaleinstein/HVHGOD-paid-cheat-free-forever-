// FUN_1802311d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802311d0 */

longlong * FUN_1802311d0(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  
  if (param_2 == param_3) {
    return param_3;
  }
  puVar1 = *(undefined8 **)(param_1 + 8);
  lVar2 = *(longlong *)(param_1 + 0x18);
  puVar3 = (undefined8 *)param_2[1];
  plVar9 = (longlong *)
           (((((((ulonglong)*(byte *)(param_2 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
               (ulonglong)*(byte *)((longlong)param_2 + 0x11)) * 0x100000001b3 ^
              (ulonglong)*(byte *)((longlong)param_2 + 0x12)) * 0x100000001b3 ^
             (ulonglong)*(byte *)((longlong)param_2 + 0x13)) * 0x100000001b3 &
            *(ulonglong *)(param_1 + 0x30)) * 0x10 + lVar2);
  plVar4 = (longlong *)*plVar9;
  plVar8 = (longlong *)plVar9[1];
  plVar6 = param_2;
  do {
    plVar7 = (longlong *)*plVar6;
    FUN_1804547d0(plVar6,0x28);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
    if (plVar6 == plVar8) {
      if (plVar4 == param_2) {
        *plVar9 = (longlong)puVar1;
        puVar5 = puVar1;
      }
      else {
        puVar5 = puVar3;
      }
      plVar9[1] = (longlong)puVar5;
      while (plVar7 != param_3) {
        plVar9 = (longlong *)
                 (((((((ulonglong)*(byte *)(plVar7 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar7 + 0x11)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar7 + 0x12)) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar7 + 0x13)) * 0x100000001b3 &
                  *(ulonglong *)(param_1 + 0x30)) * 0x10 + lVar2);
        plVar4 = (longlong *)plVar9[1];
        plVar8 = plVar7;
        while( true ) {
          plVar7 = (longlong *)*plVar8;
          FUN_1804547d0(plVar8,0x28);
          *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
          if (plVar8 == plVar4) break;
          plVar8 = plVar7;
          if (plVar7 == param_3) goto LAB_18023129c;
        }
        *plVar9 = (longlong)puVar1;
        plVar9[1] = (longlong)puVar1;
      }
      goto LAB_18023129f;
    }
    plVar6 = plVar7;
  } while (plVar7 != param_3);
  if (plVar4 == param_2) {
LAB_18023129c:
    *plVar9 = (longlong)plVar7;
  }
LAB_18023129f:
  *puVar3 = plVar7;
  plVar7[1] = (longlong)puVar3;
  return param_3;
}



