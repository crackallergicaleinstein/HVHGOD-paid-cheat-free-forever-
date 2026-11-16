// FUN_1802e7020 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802e7020 */

undefined8 FUN_1802e7020(undefined8 param_1,byte *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  plVar4 = DAT_180bbf098;
  plVar6 = (longlong *)
           (((((((ulonglong)*param_2 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_2[1])
               * 0x100000001b3 ^ (ulonglong)param_2[2]) * 0x100000001b3 ^ (ulonglong)param_2[3]) *
             0x100000001b3 & DAT_180bbf0c0) * 0x10 + DAT_180bbf0a8);
  plVar2 = (longlong *)plVar6[1];
  if (plVar2 == DAT_180bbf098) {
LAB_1802e70b0:
    plVar5 = (longlong *)0x0;
  }
  else {
    iVar1 = (int)plVar2[2];
    plVar5 = plVar2;
    while (*(int *)param_2 != iVar1) {
      if (plVar5 == (longlong *)*plVar6) goto LAB_1802e70b0;
      plVar5 = (longlong *)plVar5[1];
      iVar1 = (int)plVar5[2];
    }
  }
  if (plVar5 == (longlong *)0x0) {
    return 0;
  }
  if (plVar2 == plVar5) {
    if ((longlong *)*plVar6 == plVar5) {
      *plVar6 = (longlong)DAT_180bbf098;
      plVar6[1] = (longlong)plVar4;
    }
    else {
      plVar6[1] = plVar5[1];
    }
  }
  else if ((longlong *)*plVar6 == plVar5) {
    *plVar6 = *plVar5;
  }
  lVar3 = *plVar5;
  DAT_180bbf0a0 = DAT_180bbf0a0 + -1;
  *(longlong *)plVar5[1] = lVar3;
  *(longlong *)(lVar3 + 8) = plVar5[1];
  FUN_1804547d0(plVar5,0x40);
  return 1;
}



