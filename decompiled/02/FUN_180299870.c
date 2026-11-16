// FUN_180299870 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180299870 */

longlong * FUN_180299870(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 *puVar9;
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
  plVar7 = (longlong *)plVar6[1];
  plVar10 = param_2;
  do {
    plVar8 = (longlong *)*plVar10;
    FUN_1801bd470(plVar10 + 4);
    lVar5 = plVar10[4];
    plVar10[4] = 0;
    FUN_1804547d0(lVar5,0x10);
    FUN_1804547d0(plVar10,0x48);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
    if (plVar10 == plVar7) {
      if (plVar4 == param_2) {
        *plVar6 = (longlong)puVar1;
        puVar9 = puVar1;
      }
      else {
        puVar9 = puVar3;
      }
      plVar6[1] = (longlong)puVar9;
      while (plVar8 != param_3) {
        plVar10 = (longlong *)
                  (((((((((((ulonglong)*(byte *)(plVar8 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                          (ulonglong)*(byte *)((longlong)plVar8 + 0x11)) * 0x100000001b3 ^
                         (ulonglong)*(byte *)((longlong)plVar8 + 0x12)) * 0x100000001b3 ^
                        (ulonglong)*(byte *)((longlong)plVar8 + 0x13)) * 0x100000001b3 ^
                       (ulonglong)*(byte *)((longlong)plVar8 + 0x14)) * 0x100000001b3 ^
                      (ulonglong)*(byte *)((longlong)plVar8 + 0x15)) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar8 + 0x16)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar8 + 0x17)) * 0x100000001b3 &
                   *(ulonglong *)(param_1 + 0x30)) * 0x10 + lVar2);
        plVar4 = (longlong *)plVar10[1];
        plVar7 = plVar8;
        while( true ) {
          plVar8 = (longlong *)*plVar7;
          FUN_1801bd470(plVar7 + 4);
          lVar5 = plVar7[4];
          plVar7[4] = 0;
          FUN_1804547d0(lVar5,0x10);
          FUN_1804547d0(plVar7,0x48);
          *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
          if (plVar7 == plVar4) break;
          plVar7 = plVar8;
          if (plVar8 == param_3) {
            *plVar10 = (longlong)plVar8;
            goto LAB_180299aba;
          }
        }
        *plVar10 = (longlong)puVar1;
        plVar10[1] = (longlong)puVar1;
      }
      goto LAB_180299aba;
    }
    plVar10 = plVar8;
  } while (plVar8 != param_3);
  if (plVar4 == param_2) {
    *plVar6 = (longlong)plVar8;
  }
LAB_180299aba:
  *puVar3 = plVar8;
  plVar8[1] = (longlong)puVar3;
  return param_3;
}



