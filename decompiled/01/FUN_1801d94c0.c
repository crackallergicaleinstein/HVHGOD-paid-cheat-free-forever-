// FUN_1801d94c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801d94c0 */

undefined8 FUN_1801d94c0(longlong param_1,byte *param_2)

{
  short sVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  plVar5 = (longlong *)
           (((((ulonglong)*param_2 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_2[1]) *
             0x100000001b3 & *(ulonglong *)(param_1 + 0x30)) * 0x10 + *(longlong *)(param_1 + 0x18))
  ;
  plVar2 = (longlong *)plVar5[1];
  plVar3 = *(longlong **)(param_1 + 8);
  if (plVar2 == plVar3) {
LAB_1801d9531:
    plVar6 = (longlong *)0x0;
  }
  else {
    sVar1 = (short)plVar2[2];
    plVar6 = plVar2;
    while (*(short *)param_2 != sVar1) {
      if (plVar6 == (longlong *)*plVar5) goto LAB_1801d9531;
      plVar6 = (longlong *)plVar6[1];
      sVar1 = (short)plVar6[2];
    }
  }
  if (plVar6 == (longlong *)0x0) {
    return 0;
  }
  if (plVar2 == plVar6) {
    if ((longlong *)*plVar5 == plVar6) {
      *plVar5 = (longlong)plVar3;
      plVar5[1] = (longlong)plVar3;
    }
    else {
      plVar5[1] = plVar6[1];
    }
  }
  else if ((longlong *)*plVar5 == plVar6) {
    *plVar5 = *plVar6;
  }
  lVar4 = *plVar6;
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
  *(longlong *)plVar6[1] = lVar4;
  *(longlong *)(lVar4 + 8) = plVar6[1];
  FUN_18015c010(plVar6 + 6);
  FUN_1804547d0(plVar6,0x108);
  return 1;
}



