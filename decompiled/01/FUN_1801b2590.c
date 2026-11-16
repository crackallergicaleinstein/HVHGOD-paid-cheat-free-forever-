// FUN_1801b2590 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801b2590 */

longlong * FUN_1801b2590(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  
  if (param_2 == param_3) {
    return param_3;
  }
  puVar1 = *(undefined8 **)(param_1 + 8);
  lVar2 = *(longlong *)(param_1 + 0x18);
  puVar3 = (undefined8 *)param_2[1];
  plVar5 = (longlong *)
           ((((ulonglong)*(byte *)((longlong)param_2 + 0x13) ^
             ((((ulonglong)*(byte *)(param_2 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
              (ulonglong)*(byte *)((longlong)param_2 + 0x11)) * 0x100000001b3 ^
             (ulonglong)*(byte *)((longlong)param_2 + 0x12)) * 0x100000001b3) * 0x100000001b3 &
            *(ulonglong *)(param_1 + 0x30)) * 0x10 + lVar2);
  plVar4 = (longlong *)*plVar5;
  plVar6 = (longlong *)plVar5[1];
  plVar9 = param_2;
  do {
    plVar7 = (longlong *)*plVar9;
    FUN_18015c010(plVar9 + 9);
    FUN_18015c010(plVar9 + 5);
    FUN_1804547d0(plVar9,0x68);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
    if (plVar9 == plVar6) {
      if (plVar4 == param_2) {
        *plVar5 = (longlong)puVar1;
        puVar8 = puVar1;
      }
      else {
        puVar8 = puVar3;
      }
      plVar5[1] = (longlong)puVar8;
      while (plVar7 != param_3) {
        plVar9 = (longlong *)
                 (((((((ulonglong)*(byte *)(plVar7 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar7 + 0x11)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar7 + 0x12)) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar7 + 0x13)) * 0x100000001b3 &
                  *(ulonglong *)(param_1 + 0x30)) * 0x10 + lVar2);
        plVar4 = (longlong *)plVar9[1];
        plVar6 = plVar7;
        while( true ) {
          plVar7 = (longlong *)*plVar6;
          FUN_18015c010(plVar6 + 9);
          FUN_18015c010(plVar6 + 5);
          FUN_1804547d0(plVar6,0x68);
          *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
          if (plVar6 == plVar4) break;
          plVar6 = plVar7;
          if (plVar7 == param_3) {
            *plVar9 = (longlong)plVar7;
            goto LAB_1801b275d;
          }
        }
        *plVar9 = (longlong)puVar1;
        plVar9[1] = (longlong)puVar1;
      }
      goto LAB_1801b275d;
    }
    plVar9 = plVar7;
  } while (plVar7 != param_3);
  if (plVar4 == param_2) {
    *plVar5 = (longlong)plVar7;
  }
LAB_1801b275d:
  *puVar3 = plVar7;
  plVar7[1] = (longlong)puVar3;
  return param_3;
}



