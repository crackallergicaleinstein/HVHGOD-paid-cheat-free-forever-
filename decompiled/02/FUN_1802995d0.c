// FUN_1802995d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802995d0 */

longlong * FUN_1802995d0(longlong param_1,longlong *param_2,longlong *param_3)

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
           ((((ulonglong)*(byte *)((longlong)param_2 + 0x17) ^
             ((((((((ulonglong)*(byte *)(param_2 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)param_2 + 0x11)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)param_2 + 0x12)) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)param_2 + 0x13)) * 0x100000001b3 ^
               (ulonglong)*(byte *)((longlong)param_2 + 0x14)) * 0x100000001b3 ^
              (ulonglong)*(byte *)((longlong)param_2 + 0x15)) * 0x100000001b3 ^
             (ulonglong)*(byte *)((longlong)param_2 + 0x16)) * 0x100000001b3) * 0x100000001b3 &
            *(ulonglong *)(param_1 + 0x30)) * 0x10 + lVar2);
  plVar4 = (longlong *)*plVar5;
  plVar7 = (longlong *)plVar5[1];
  plVar9 = param_2;
  do {
    plVar6 = (longlong *)*plVar9;
    FUN_1800efed0(plVar9 + 0xd);
    FUN_1801bd3e0(plVar9 + 8);
    if (0x1f < (ulonglong)((longlong)plVar9 + (-8 - plVar9[-1]))) {
LAB_18029984b:
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0();
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
    if (plVar9 == plVar7) {
      if (plVar4 == param_2) {
        *plVar5 = (longlong)puVar1;
        puVar8 = puVar1;
      }
      else {
        puVar8 = puVar3;
      }
      plVar5[1] = (longlong)puVar8;
      while (plVar6 != param_3) {
        plVar9 = (longlong *)
                 (((((((((((ulonglong)*(byte *)(plVar6 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                         (ulonglong)*(byte *)((longlong)plVar6 + 0x11)) * 0x100000001b3 ^
                        (ulonglong)*(byte *)((longlong)plVar6 + 0x12)) * 0x100000001b3 ^
                       (ulonglong)*(byte *)((longlong)plVar6 + 0x13)) * 0x100000001b3 ^
                      (ulonglong)*(byte *)((longlong)plVar6 + 0x14)) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar6 + 0x15)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar6 + 0x16)) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar6 + 0x17)) * 0x100000001b3 &
                  *(ulonglong *)(param_1 + 0x30)) * 0x10 + lVar2);
        plVar4 = (longlong *)plVar9[1];
        plVar7 = plVar6;
        while( true ) {
          plVar6 = (longlong *)*plVar7;
          FUN_1800efed0(plVar7 + 0xd);
          FUN_1801bd3e0(plVar7 + 8);
          if (0x1f < (ulonglong)((longlong)plVar7 + (-8 - plVar7[-1]))) goto LAB_18029984b;
          FUN_1804547d0();
          *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
          if (plVar7 == plVar4) break;
          plVar7 = plVar6;
          if (plVar6 == param_3) {
            *plVar9 = (longlong)plVar6;
            goto LAB_180299710;
          }
        }
        *plVar9 = (longlong)puVar1;
        plVar9[1] = (longlong)puVar1;
      }
      goto LAB_180299710;
    }
    plVar9 = plVar6;
    if (plVar6 == param_3) {
      if (plVar4 == param_2) {
        *plVar5 = (longlong)plVar6;
      }
LAB_180299710:
      *puVar3 = plVar6;
      plVar6[1] = (longlong)puVar3;
      return param_3;
    }
  } while( true );
}



