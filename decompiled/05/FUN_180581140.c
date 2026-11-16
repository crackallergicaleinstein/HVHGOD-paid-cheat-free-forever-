// FUN_180581140 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180581140 */

void FUN_180581140(longlong *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (param_1 != (longlong *)0x0) {
    plVar2 = param_1 + 4;
    lVar3 = 0x57;
    uVar1 = *(undefined8 *)(*param_1 + 0x98);
    do {
      if (*plVar2 != 0) {
        if (*(code **)((&PTR_DAT_18066c5f0)
                       [*(int *)(*(longlong *)
                                  (((longlong)&UNK_18066d970 - (longlong)param_1) + (longlong)plVar2
                                  ) + 4)] + 0x20) != (code *)0x0) {
          (**(code **)((&PTR_DAT_18066c5f0)
                       [*(int *)(*(longlong *)
                                  (((longlong)&UNK_18066d970 - (longlong)param_1) + (longlong)plVar2
                                  ) + 4)] + 0x20))();
        }
        FUN_18057abd0(uVar1,*plVar2);
        *plVar2 = 0;
      }
      plVar2 = plVar2 + 1;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    FUN_18057abd0(uVar1,param_1);
  }
  return;
}



