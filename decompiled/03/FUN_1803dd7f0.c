// FUN_1803dd7f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803dd7f0 */

longlong * FUN_1803dd7f0(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
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
  plVar7 = (longlong *)plVar5[1];
  plVar9 = param_2;
  do {
    plVar8 = (longlong *)*plVar9;
    FUN_18015c010(plVar9 + 3);
    FUN_1804547d0(plVar9,0x38);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
    if (plVar9 == plVar7) {
      if (plVar4 == param_2) {
        *plVar5 = (longlong)puVar1;
        puVar6 = puVar1;
      }
      else {
        puVar6 = puVar3;
      }
      plVar5[1] = (longlong)puVar6;
      while (plVar8 != param_3) {
        plVar9 = (longlong *)
                 (((((((ulonglong)*(byte *)(plVar8 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar8 + 0x11)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar8 + 0x12)) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar8 + 0x13)) * 0x100000001b3 &
                  *(ulonglong *)(param_1 + 0x30)) * 0x10 + lVar2);
        plVar4 = (longlong *)plVar9[1];
        plVar7 = plVar8;
        while( true ) {
          plVar8 = (longlong *)*plVar7;
          FUN_18015c010(plVar7 + 3);
          FUN_1804547d0(plVar7,0x38);
          *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
          if (plVar7 == plVar4) break;
          plVar7 = plVar8;
          if (plVar8 == param_3) {
            *plVar9 = (longlong)plVar8;
            *puVar3 = plVar8;
            plVar8[1] = (longlong)puVar3;
            return param_3;
          }
        }
        *plVar9 = (longlong)puVar1;
        plVar9[1] = (longlong)puVar1;
      }
      goto LAB_1803dd9c9;
    }
    plVar9 = plVar8;
  } while (plVar8 != param_3);
  if (plVar4 == param_2) {
    *plVar5 = (longlong)plVar8;
  }
LAB_1803dd9c9:
  *puVar3 = plVar8;
  plVar8[1] = (longlong)puVar3;
  return param_3;
}



