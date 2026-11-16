// FUN_1802984f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802984f0 */

longlong FUN_1802984f0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  longlong *plVar6;
  ulonglong uVar7;
  
  plVar1 = *(longlong **)(param_1 + 8);
  lVar2 = *(longlong *)(param_1 + 0x10);
  if ((longlong *)*plVar1 != plVar1) {
    uVar7 = 0xcbf29ce484222325;
    plVar6 = (longlong *)*plVar1;
    do {
      cVar4 = FUN_1801acc90(*param_2,plVar6 + 2);
      if ((cVar4 == '\0') &&
         ((plVar6[8] == 0 ||
          (0xfa < (ulonglong)
                  (*(longlong *)param_2[1] -
                  *(longlong *)
                   (*(longlong *)(plVar6[5] + (plVar6[8] + plVar6[7] + -1 & plVar6[6] - 1U) * 8) +
                   0x1010)))))) {
        plVar5 = (longlong *)
                 ((((((((((*(byte *)(plVar6 + 2) ^ uVar7) * 0x100000001b3 ^
                         (ulonglong)*(byte *)((longlong)plVar6 + 0x11)) * 0x100000001b3 ^
                        (ulonglong)*(byte *)((longlong)plVar6 + 0x12)) * 0x100000001b3 ^
                       (ulonglong)*(byte *)((longlong)plVar6 + 0x13)) * 0x100000001b3 ^
                      (ulonglong)*(byte *)((longlong)plVar6 + 0x14)) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar6 + 0x15)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar6 + 0x16)) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar6 + 0x17)) * 0x100000001b3 &
                  *(ulonglong *)(param_1 + 0x30)) * 0x10 + *(longlong *)(param_1 + 0x18));
        if ((longlong *)plVar5[1] == plVar6) {
          if ((longlong *)*plVar5 == plVar6) {
            lVar3 = *(longlong *)(param_1 + 8);
            *plVar5 = lVar3;
            plVar5[1] = lVar3;
          }
          else {
            plVar5[1] = plVar6[1];
          }
        }
        else if ((longlong *)*plVar5 == plVar6) {
          *plVar5 = *plVar6;
        }
        plVar5 = (longlong *)*plVar6;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
        *(longlong **)plVar6[1] = plVar5;
        plVar5[1] = plVar6[1];
        FUN_1801bd470(plVar6 + 4);
        lVar3 = plVar6[4];
        plVar6[4] = 0;
        FUN_1804547d0(lVar3,0x10);
        FUN_1804547d0(plVar6,0x48);
        uVar7 = 0xcbf29ce484222325;
      }
      else {
        plVar5 = (longlong *)*plVar6;
      }
      plVar6 = plVar5;
    } while (plVar5 != plVar1);
  }
  return lVar2 - *(longlong *)(param_1 + 0x10);
}



